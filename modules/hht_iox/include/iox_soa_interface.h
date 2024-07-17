/**
 * @file iox_soa_interface.h
 * @brief 
 * @author T001294
 * @version 1.0
 * @date 2024-06-15
 * 
 * @copyright Copyright (c) 2024  HRYT
 * 
 */

#ifndef IOX_SOA_INTERFACE_H
#define IOX_SOA_INTERFACE_H

namespace HHT {
template <typename Service, typename T>
class ServerStub {
public:
    void GetServiceList();

    void GetAllMethods(Service &ser);

    bool WaitforConnect(Service);

    ServerStub &GetInstance() {
        static ServerStub sb;
        return sb;
    }

    int GetStatus(T &);

    bool SetProp(T &);
};
} // namespace HHT

#endif /* IOX_SOA_INTERFACE_H */
