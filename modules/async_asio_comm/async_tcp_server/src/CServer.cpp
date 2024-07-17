#include <signal.h>

#include "CServer.hpp"

#if defined(USE_IOTHREAD_POOL)
std::shared_ptr<AsioIOThreadPool> CServer::pool_ = AsioIOThreadPool::GetInstance();
#endif // USE_IOTHREAD_POOL

#if defined(USE_IOSERVICE_POOL)
std::shared_ptr<AsioIOServicePool> CServer::pool_ = AsioIOServicePool::GetInstance();
#endif // USE_IOSERVICE_POOL

CServer::~CServer() {
    CloseAcceptor();
}
CServer::CServer(std::string &address, std::uint16_t port) :
    io_context_(pool_->GetIOService()), signals_(io_context_), acceptor_(io_context_)
/*acceptor_(io_context, tcp::endpoint(tcp::v4(), port)) */ {
    signals_.add(SIGINT);
    signals_.add(SIGTERM);
#if defined(SIGQUIT)
    signals_.add(SIGQUIT);
#endif // defined(SIGQUIT)

    // 异步监听系统信号事件
    DoAwaitStop();

    // 初始化acceptor,重复利用端口,监听
    boost::asio::ip::tcp::resolver resolver(io_context_);
    boost::asio::ip::tcp::endpoint ep = *resolver.resolve(address, std::to_string(port)).begin();
    acceptor_.open(ep.protocol());
    acceptor_.set_option(boost::asio::ip::tcp::acceptor::reuse_address(true));
    acceptor_.bind(ep);
    acceptor_.listen();

    DoAccept();
}

void CServer::Run() {
    io_context_.run();
}

const char *CServer::GetVersion() {
    return VERSION;
}

void CServer::ClearSession(std::string uuid) {
    sessions_.erase(uuid);
}

void CServer::DoAwaitStop() {
    signals_.async_wait([this](b_ec, int) {
        CloseAcceptor();
        io_context_.stop();
        pool_->Stop();
        std::cout << "Recv signals" << std::endl;
    });
}

void CServer::DoAccept() {
    acceptor_.async_accept([this](b_ec ec, tcp::socket socket) {
        // 错误处理
        if (!acceptor_.is_open()) { return; }
        if (!ec) {
            std::shared_ptr<CSession> new_session =
                std::make_shared<CSession>(io_context_, std::move(socket), this);
            new_session->Start();
            // std::make_shared<CSession>(io_context_, std::move(socket))->Start();
            sessions_.insert(std::make_pair(new_session->GetUuid(), new_session));
        }
        DoAccept();
    });
}

// 避免多线程操作acceptor
void CServer::CloseAcceptor() {
    boost::asio::post(acceptor_.get_executor(), [this]() {
        if (!acceptor_.is_open()) { return; }
        b_ec ec;
        acceptor_.close(ec);
    });
}
