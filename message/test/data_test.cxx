

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from data_test.idl
using RTI Code Generator (rtiddsgen) version 3.1.1.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "data_test.hpp"
#include "data_testPlugin.hpp"

#include <rti/util/ostream_operators.hpp>

// ---- Data4B:

Data4B::Data4B() : m_data_(0)
{
}

Data4B::Data4B(
    int32_t data)
    : m_data_(data)
{
}

#ifdef RTI_CXX11_RVALUE_REFERENCES
#ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
Data4B::Data4B(Data4B &&other_) OMG_NOEXCEPT : m_data_(std::move(other_.m_data_))
{
}

Data4B &Data4B::operator=(Data4B &&other_) OMG_NOEXCEPT
{
    Data4B tmp(std::move(other_));
    swap(tmp);
    return *this;
}
#endif
#endif

void Data4B::swap(Data4B &other_) OMG_NOEXCEPT
{
    using std::swap;
    swap(m_data_, other_.m_data_);
}

bool Data4B::operator==(const Data4B &other_) const
{
    if (m_data_ != other_.m_data_)
    {
        return false;
    }
    return true;
}
bool Data4B::operator!=(const Data4B &other_) const
{
    return !this->operator==(other_);
}

std::ostream &operator<<(std::ostream &o, const Data4B &sample)
{
    ::rti::util::StreamFlagSaver flag_saver(o);
    o << "[";
    o << "data: " << sample.data();
    o << "]";
    return o;
}

// ---- BigData20B:

BigData20B::BigData20B()
{
}

BigData20B::BigData20B(
    const ::rti::core::bounded_sequence<char, 20L> &data)
    : m_data_(data)
{
}

#ifdef RTI_CXX11_RVALUE_REFERENCES
#ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
BigData20B::BigData20B(BigData20B &&other_) OMG_NOEXCEPT : m_data_(std::move(other_.m_data_))
{
}

BigData20B &BigData20B::operator=(BigData20B &&other_) OMG_NOEXCEPT
{
    BigData20B tmp(std::move(other_));
    swap(tmp);
    return *this;
}
#endif
#endif

void BigData20B::swap(BigData20B &other_) OMG_NOEXCEPT
{
    using std::swap;
    swap(m_data_, other_.m_data_);
}

bool BigData20B::operator==(const BigData20B &other_) const
{
    if (m_data_ != other_.m_data_)
    {
        return false;
    }
    return true;
}
bool BigData20B::operator!=(const BigData20B &other_) const
{
    return !this->operator==(other_);
}

std::ostream &operator<<(std::ostream &o, const BigData20B &sample)
{
    ::rti::util::StreamFlagSaver flag_saver(o);
    o << "[";
    o << "data: " << sample.data();
    o << "]";
    return o;
}

// ---- BigData60B:

BigData60B::BigData60B()
{
}

BigData60B::BigData60B(
    const ::rti::core::bounded_sequence<char, 60L> &data)
    : m_data_(data)
{
}

#ifdef RTI_CXX11_RVALUE_REFERENCES
#ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
BigData60B::BigData60B(BigData60B &&other_) OMG_NOEXCEPT : m_data_(std::move(other_.m_data_))
{
}

BigData60B &BigData60B::operator=(BigData60B &&other_) OMG_NOEXCEPT
{
    BigData60B tmp(std::move(other_));
    swap(tmp);
    return *this;
}
#endif
#endif

void BigData60B::swap(BigData60B &other_) OMG_NOEXCEPT
{
    using std::swap;
    swap(m_data_, other_.m_data_);
}

bool BigData60B::operator==(const BigData60B &other_) const
{
    if (m_data_ != other_.m_data_)
    {
        return false;
    }
    return true;
}
bool BigData60B::operator!=(const BigData60B &other_) const
{
    return !this->operator==(other_);
}

std::ostream &operator<<(std::ostream &o, const BigData60B &sample)
{
    ::rti::util::StreamFlagSaver flag_saver(o);
    o << "[";
    o << "data: " << sample.data();
    o << "]";
    return o;
}

// ---- BigData1K:

BigData1K::BigData1K()
{
}

BigData1K::BigData1K(
    const ::rti::core::bounded_sequence<char, 1024L> &data)
    : m_data_(data)
{
}

#ifdef RTI_CXX11_RVALUE_REFERENCES
#ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
BigData1K::BigData1K(BigData1K &&other_) OMG_NOEXCEPT : m_data_(std::move(other_.m_data_))
{
}

BigData1K &BigData1K::operator=(BigData1K &&other_) OMG_NOEXCEPT
{
    BigData1K tmp(std::move(other_));
    swap(tmp);
    return *this;
}
#endif
#endif

void BigData1K::swap(BigData1K &other_) OMG_NOEXCEPT
{
    using std::swap;
    swap(m_data_, other_.m_data_);
}

bool BigData1K::operator==(const BigData1K &other_) const
{
    if (m_data_ != other_.m_data_)
    {
        return false;
    }
    return true;
}
bool BigData1K::operator!=(const BigData1K &other_) const
{
    return !this->operator==(other_);
}

std::ostream &operator<<(std::ostream &o, const BigData1K &sample)
{
    ::rti::util::StreamFlagSaver flag_saver(o);
    o << "[";
    o << "data: " << sample.data();
    o << "]";
    return o;
}

// ---- BigData2K:

BigData2K::BigData2K()
{
}

BigData2K::BigData2K(
    const ::rti::core::bounded_sequence<char, 1024L * 2L> &data)
    : m_data_(data)
{
}

#ifdef RTI_CXX11_RVALUE_REFERENCES
#ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
BigData2K::BigData2K(BigData2K &&other_) OMG_NOEXCEPT : m_data_(std::move(other_.m_data_))
{
}

BigData2K &BigData2K::operator=(BigData2K &&other_) OMG_NOEXCEPT
{
    BigData2K tmp(std::move(other_));
    swap(tmp);
    return *this;
}
#endif
#endif

void BigData2K::swap(BigData2K &other_) OMG_NOEXCEPT
{
    using std::swap;
    swap(m_data_, other_.m_data_);
}

bool BigData2K::operator==(const BigData2K &other_) const
{
    if (m_data_ != other_.m_data_)
    {
        return false;
    }
    return true;
}
bool BigData2K::operator!=(const BigData2K &other_) const
{
    return !this->operator==(other_);
}

std::ostream &operator<<(std::ostream &o, const BigData2K &sample)
{
    ::rti::util::StreamFlagSaver flag_saver(o);
    o << "[";
    o << "data: " << sample.data();
    o << "]";
    return o;
}

// ---- BigData4K:

BigData4K::BigData4K()
{
}

BigData4K::BigData4K(
    const ::rti::core::bounded_sequence<char, 1024L * 4L> &data)
    : m_data_(data)
{
}

#ifdef RTI_CXX11_RVALUE_REFERENCES
#ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
BigData4K::BigData4K(BigData4K &&other_) OMG_NOEXCEPT : m_data_(std::move(other_.m_data_))
{
}

BigData4K &BigData4K::operator=(BigData4K &&other_) OMG_NOEXCEPT
{
    BigData4K tmp(std::move(other_));
    swap(tmp);
    return *this;
}
#endif
#endif

void BigData4K::swap(BigData4K &other_) OMG_NOEXCEPT
{
    using std::swap;
    swap(m_data_, other_.m_data_);
}

bool BigData4K::operator==(const BigData4K &other_) const
{
    if (m_data_ != other_.m_data_)
    {
        return false;
    }
    return true;
}
bool BigData4K::operator!=(const BigData4K &other_) const
{
    return !this->operator==(other_);
}

std::ostream &operator<<(std::ostream &o, const BigData4K &sample)
{
    ::rti::util::StreamFlagSaver flag_saver(o);
    o << "[";
    o << "data: " << sample.data();
    o << "]";
    return o;
}

// ---- BigData16K:

BigData16K::BigData16K()
{
}

BigData16K::BigData16K(
    const ::rti::core::bounded_sequence<char, 1024L * 16L> &data)
    : m_data_(data)
{
}

#ifdef RTI_CXX11_RVALUE_REFERENCES
#ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
BigData16K::BigData16K(BigData16K &&other_) OMG_NOEXCEPT : m_data_(std::move(other_.m_data_))
{
}

BigData16K &BigData16K::operator=(BigData16K &&other_) OMG_NOEXCEPT
{
    BigData16K tmp(std::move(other_));
    swap(tmp);
    return *this;
}
#endif
#endif

void BigData16K::swap(BigData16K &other_) OMG_NOEXCEPT
{
    using std::swap;
    swap(m_data_, other_.m_data_);
}

bool BigData16K::operator==(const BigData16K &other_) const
{
    if (m_data_ != other_.m_data_)
    {
        return false;
    }
    return true;
}
bool BigData16K::operator!=(const BigData16K &other_) const
{
    return !this->operator==(other_);
}

std::ostream &operator<<(std::ostream &o, const BigData16K &sample)
{
    ::rti::util::StreamFlagSaver flag_saver(o);
    o << "[";
    o << "data: " << sample.data();
    o << "]";
    return o;
}

// ---- BigData32K:

BigData32K::BigData32K()
{
}

BigData32K::BigData32K(
    const ::rti::core::bounded_sequence<char, 1024L * 32L> &data)
    : m_data_(data)
{
}

#ifdef RTI_CXX11_RVALUE_REFERENCES
#ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
BigData32K::BigData32K(BigData32K &&other_) OMG_NOEXCEPT : m_data_(std::move(other_.m_data_))
{
}

BigData32K &BigData32K::operator=(BigData32K &&other_) OMG_NOEXCEPT
{
    BigData32K tmp(std::move(other_));
    swap(tmp);
    return *this;
}
#endif
#endif

void BigData32K::swap(BigData32K &other_) OMG_NOEXCEPT
{
    using std::swap;
    swap(m_data_, other_.m_data_);
}

bool BigData32K::operator==(const BigData32K &other_) const
{
    if (m_data_ != other_.m_data_)
    {
        return false;
    }
    return true;
}
bool BigData32K::operator!=(const BigData32K &other_) const
{
    return !this->operator==(other_);
}

std::ostream &operator<<(std::ostream &o, const BigData32K &sample)
{
    ::rti::util::StreamFlagSaver flag_saver(o);
    o << "[";
    o << "data: " << sample.data();
    o << "]";
    return o;
}

// ---- BigData64K:

BigData64K::BigData64K()
{
}

BigData64K::BigData64K(
    const ::rti::core::bounded_sequence<char, 1024L * 64L> &data)
    : m_data_(data)
{
}

#ifdef RTI_CXX11_RVALUE_REFERENCES
#ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
BigData64K::BigData64K(BigData64K &&other_) OMG_NOEXCEPT : m_data_(std::move(other_.m_data_))
{
}

BigData64K &BigData64K::operator=(BigData64K &&other_) OMG_NOEXCEPT
{
    BigData64K tmp(std::move(other_));
    swap(tmp);
    return *this;
}
#endif
#endif

void BigData64K::swap(BigData64K &other_) OMG_NOEXCEPT
{
    using std::swap;
    swap(m_data_, other_.m_data_);
}

bool BigData64K::operator==(const BigData64K &other_) const
{
    if (m_data_ != other_.m_data_)
    {
        return false;
    }
    return true;
}
bool BigData64K::operator!=(const BigData64K &other_) const
{
    return !this->operator==(other_);
}

std::ostream &operator<<(std::ostream &o, const BigData64K &sample)
{
    ::rti::util::StreamFlagSaver flag_saver(o);
    o << "[";
    o << "data: " << sample.data();
    o << "]";
    return o;
}

// ---- BigData256K:

BigData256K::BigData256K()
{
}

BigData256K::BigData256K(
    const ::rti::core::bounded_sequence<char, 1024L * 256L> &data)
    : m_data_(data)
{
}

#ifdef RTI_CXX11_RVALUE_REFERENCES
#ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
BigData256K::BigData256K(BigData256K &&other_) OMG_NOEXCEPT : m_data_(std::move(other_.m_data_))
{
}

BigData256K &BigData256K::operator=(BigData256K &&other_) OMG_NOEXCEPT
{
    BigData256K tmp(std::move(other_));
    swap(tmp);
    return *this;
}
#endif
#endif

void BigData256K::swap(BigData256K &other_) OMG_NOEXCEPT
{
    using std::swap;
    swap(m_data_, other_.m_data_);
}

bool BigData256K::operator==(const BigData256K &other_) const
{
    if (m_data_ != other_.m_data_)
    {
        return false;
    }
    return true;
}
bool BigData256K::operator!=(const BigData256K &other_) const
{
    return !this->operator==(other_);
}

std::ostream &operator<<(std::ostream &o, const BigData256K &sample)
{
    ::rti::util::StreamFlagSaver flag_saver(o);
    o << "[";
    o << "data: " << sample.data();
    o << "]";
    return o;
}

// ---- BigData1M:

BigData1M::BigData1M()
{
}

BigData1M::BigData1M(
    const ::rti::core::bounded_sequence<char, 1024L * 1024L * 1L> &data)
    : m_data_(data)
{
}

#ifdef RTI_CXX11_RVALUE_REFERENCES
#ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
BigData1M::BigData1M(BigData1M &&other_) OMG_NOEXCEPT : m_data_(std::move(other_.m_data_))
{
}

BigData1M &BigData1M::operator=(BigData1M &&other_) OMG_NOEXCEPT
{
    BigData1M tmp(std::move(other_));
    swap(tmp);
    return *this;
}
#endif
#endif

void BigData1M::swap(BigData1M &other_) OMG_NOEXCEPT
{
    using std::swap;
    swap(m_data_, other_.m_data_);
}

bool BigData1M::operator==(const BigData1M &other_) const
{
    if (m_data_ != other_.m_data_)
    {
        return false;
    }
    return true;
}
bool BigData1M::operator!=(const BigData1M &other_) const
{
    return !this->operator==(other_);
}

std::ostream &operator<<(std::ostream &o, const BigData1M &sample)
{
    ::rti::util::StreamFlagSaver flag_saver(o);
    o << "[";
    o << "data: " << sample.data();
    o << "]";
    return o;
}

// ---- BigData2M:

BigData2M::BigData2M()
{
}

BigData2M::BigData2M(
    const ::rti::core::bounded_sequence<char, 1024L * 1024L * 2L> &data)
    : m_data_(data)
{
}

#ifdef RTI_CXX11_RVALUE_REFERENCES
#ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
BigData2M::BigData2M(BigData2M &&other_) OMG_NOEXCEPT : m_data_(std::move(other_.m_data_))
{
}

BigData2M &BigData2M::operator=(BigData2M &&other_) OMG_NOEXCEPT
{
    BigData2M tmp(std::move(other_));
    swap(tmp);
    return *this;
}
#endif
#endif

void BigData2M::swap(BigData2M &other_) OMG_NOEXCEPT
{
    using std::swap;
    swap(m_data_, other_.m_data_);
}

bool BigData2M::operator==(const BigData2M &other_) const
{
    if (m_data_ != other_.m_data_)
    {
        return false;
    }
    return true;
}
bool BigData2M::operator!=(const BigData2M &other_) const
{
    return !this->operator==(other_);
}

std::ostream &operator<<(std::ostream &o, const BigData2M &sample)
{
    ::rti::util::StreamFlagSaver flag_saver(o);
    o << "[";
    o << "data: " << sample.data();
    o << "]";
    return o;
}

// ---- BigData4M:

BigData4M::BigData4M()
{
}

BigData4M::BigData4M(
    const ::rti::core::bounded_sequence<char, 1024L * 1024L * 4L> &data)
    : m_data_(data)
{
}

#ifdef RTI_CXX11_RVALUE_REFERENCES
#ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
BigData4M::BigData4M(BigData4M &&other_) OMG_NOEXCEPT : m_data_(std::move(other_.m_data_))
{
}

BigData4M &BigData4M::operator=(BigData4M &&other_) OMG_NOEXCEPT
{
    BigData4M tmp(std::move(other_));
    swap(tmp);
    return *this;
}
#endif
#endif

void BigData4M::swap(BigData4M &other_) OMG_NOEXCEPT
{
    using std::swap;
    swap(m_data_, other_.m_data_);
}

bool BigData4M::operator==(const BigData4M &other_) const
{
    if (m_data_ != other_.m_data_)
    {
        return false;
    }
    return true;
}
bool BigData4M::operator!=(const BigData4M &other_) const
{
    return !this->operator==(other_);
}

std::ostream &operator<<(std::ostream &o, const BigData4M &sample)
{
    ::rti::util::StreamFlagSaver flag_saver(o);
    o << "[";
    o << "data: " << sample.data();
    o << "]";
    return o;
}

// ---- BigData8M:

BigData8M::BigData8M()
{
}

BigData8M::BigData8M(
    const ::rti::core::bounded_sequence<char, 1024L * 1024L * 8L> &data)
    : m_data_(data)
{
}

#ifdef RTI_CXX11_RVALUE_REFERENCES
#ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
BigData8M::BigData8M(BigData8M &&other_) OMG_NOEXCEPT : m_data_(std::move(other_.m_data_))
{
}

BigData8M &BigData8M::operator=(BigData8M &&other_) OMG_NOEXCEPT
{
    BigData8M tmp(std::move(other_));
    swap(tmp);
    return *this;
}
#endif
#endif

void BigData8M::swap(BigData8M &other_) OMG_NOEXCEPT
{
    using std::swap;
    swap(m_data_, other_.m_data_);
}

bool BigData8M::operator==(const BigData8M &other_) const
{
    if (m_data_ != other_.m_data_)
    {
        return false;
    }
    return true;
}
bool BigData8M::operator!=(const BigData8M &other_) const
{
    return !this->operator==(other_);
}

std::ostream &operator<<(std::ostream &o, const BigData8M &sample)
{
    ::rti::util::StreamFlagSaver flag_saver(o);
    o << "[";
    o << "data: " << sample.data();
    o << "]";
    return o;
}

// ---- BigData12M:

BigData12M::BigData12M()
{
}

BigData12M::BigData12M(
    const ::rti::core::bounded_sequence<char, 1024L * 1024L * 12L> &data)
    : m_data_(data)
{
}

#ifdef RTI_CXX11_RVALUE_REFERENCES
#ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
BigData12M::BigData12M(BigData12M &&other_) OMG_NOEXCEPT : m_data_(std::move(other_.m_data_))
{
}

BigData12M &BigData12M::operator=(BigData12M &&other_) OMG_NOEXCEPT
{
    BigData12M tmp(std::move(other_));
    swap(tmp);
    return *this;
}
#endif
#endif

void BigData12M::swap(BigData12M &other_) OMG_NOEXCEPT
{
    using std::swap;
    swap(m_data_, other_.m_data_);
}

bool BigData12M::operator==(const BigData12M &other_) const
{
    if (m_data_ != other_.m_data_)
    {
        return false;
    }
    return true;
}
bool BigData12M::operator!=(const BigData12M &other_) const
{
    return !this->operator==(other_);
}

std::ostream &operator<<(std::ostream &o, const BigData12M &sample)
{
    ::rti::util::StreamFlagSaver flag_saver(o);
    o << "[";
    o << "data: " << sample.data();
    o << "]";
    return o;
}

// ---- BigData20M:

BigData20M::BigData20M()
{
}

BigData20M::BigData20M(
    const ::rti::core::bounded_sequence<char, 1024L * 1024L * 20L> &data)
    : m_data_(data)
{
}

#ifdef RTI_CXX11_RVALUE_REFERENCES
#ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
BigData20M::BigData20M(BigData20M &&other_) OMG_NOEXCEPT : m_data_(std::move(other_.m_data_))
{
}

BigData20M &BigData20M::operator=(BigData20M &&other_) OMG_NOEXCEPT
{
    BigData20M tmp(std::move(other_));
    swap(tmp);
    return *this;
}
#endif
#endif

void BigData20M::swap(BigData20M &other_) OMG_NOEXCEPT
{
    using std::swap;
    swap(m_data_, other_.m_data_);
}

bool BigData20M::operator==(const BigData20M &other_) const
{
    if (m_data_ != other_.m_data_)
    {
        return false;
    }
    return true;
}
bool BigData20M::operator!=(const BigData20M &other_) const
{
    return !this->operator==(other_);
}

std::ostream &operator<<(std::ostream &o, const BigData20M &sample)
{
    ::rti::util::StreamFlagSaver flag_saver(o);
    o << "[";
    o << "data: " << sample.data();
    o << "]";
    return o;
}

// ---- BigData30M:

BigData30M::BigData30M()
{
}

BigData30M::BigData30M(
    const ::rti::core::bounded_sequence<char, 1024L * 1024L * 30L> &data)
    : m_data_(data)
{
}

#ifdef RTI_CXX11_RVALUE_REFERENCES
#ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
BigData30M::BigData30M(BigData30M &&other_) OMG_NOEXCEPT : m_data_(std::move(other_.m_data_))
{
}

BigData30M &BigData30M::operator=(BigData30M &&other_) OMG_NOEXCEPT
{
    BigData30M tmp(std::move(other_));
    swap(tmp);
    return *this;
}
#endif
#endif

void BigData30M::swap(BigData30M &other_) OMG_NOEXCEPT
{
    using std::swap;
    swap(m_data_, other_.m_data_);
}

bool BigData30M::operator==(const BigData30M &other_) const
{
    if (m_data_ != other_.m_data_)
    {
        return false;
    }
    return true;
}
bool BigData30M::operator!=(const BigData30M &other_) const
{
    return !this->operator==(other_);
}

std::ostream &operator<<(std::ostream &o, const BigData30M &sample)
{
    ::rti::util::StreamFlagSaver flag_saver(o);
    o << "[";
    o << "data: " << sample.data();
    o << "]";
    return o;
}

// ---- BigData40M:

BigData40M::BigData40M()
{
}

BigData40M::BigData40M(
    const ::rti::core::bounded_sequence<char, 1024L * 1024L * 40L> &data)
    : m_data_(data)
{
}

#ifdef RTI_CXX11_RVALUE_REFERENCES
#ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
BigData40M::BigData40M(BigData40M &&other_) OMG_NOEXCEPT : m_data_(std::move(other_.m_data_))
{
}

BigData40M &BigData40M::operator=(BigData40M &&other_) OMG_NOEXCEPT
{
    BigData40M tmp(std::move(other_));
    swap(tmp);
    return *this;
}
#endif
#endif

void BigData40M::swap(BigData40M &other_) OMG_NOEXCEPT
{
    using std::swap;
    swap(m_data_, other_.m_data_);
}

bool BigData40M::operator==(const BigData40M &other_) const
{
    if (m_data_ != other_.m_data_)
    {
        return false;
    }
    return true;
}
bool BigData40M::operator!=(const BigData40M &other_) const
{
    return !this->operator==(other_);
}

std::ostream &operator<<(std::ostream &o, const BigData40M &sample)
{
    ::rti::util::StreamFlagSaver flag_saver(o);
    o << "[";
    o << "data: " << sample.data();
    o << "]";
    return o;
}

// ---- BigData50M:

BigData50M::BigData50M()
{
}

BigData50M::BigData50M(
    const ::rti::core::bounded_sequence<char, 1024L * 1024L * 50L> &data)
    : m_data_(data)
{
}

#ifdef RTI_CXX11_RVALUE_REFERENCES
#ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
BigData50M::BigData50M(BigData50M &&other_) OMG_NOEXCEPT : m_data_(std::move(other_.m_data_))
{
}

BigData50M &BigData50M::operator=(BigData50M &&other_) OMG_NOEXCEPT
{
    BigData50M tmp(std::move(other_));
    swap(tmp);
    return *this;
}
#endif
#endif

void BigData50M::swap(BigData50M &other_) OMG_NOEXCEPT
{
    using std::swap;
    swap(m_data_, other_.m_data_);
}

bool BigData50M::operator==(const BigData50M &other_) const
{
    if (m_data_ != other_.m_data_)
    {
        return false;
    }
    return true;
}
bool BigData50M::operator!=(const BigData50M &other_) const
{
    return !this->operator==(other_);
}

std::ostream &operator<<(std::ostream &o, const BigData50M &sample)
{
    ::rti::util::StreamFlagSaver flag_saver(o);
    o << "[";
    o << "data: " << sample.data();
    o << "]";
    return o;
}

// ---- BigData60M:

BigData60M::BigData60M()
{
}

BigData60M::BigData60M(
    const ::rti::core::bounded_sequence<char, 1024L * 1024L * 60L> &data)
    : m_data_(data)
{
}

#ifdef RTI_CXX11_RVALUE_REFERENCES
#ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
BigData60M::BigData60M(BigData60M &&other_) OMG_NOEXCEPT : m_data_(std::move(other_.m_data_))
{
}

BigData60M &BigData60M::operator=(BigData60M &&other_) OMG_NOEXCEPT
{
    BigData60M tmp(std::move(other_));
    swap(tmp);
    return *this;
}
#endif
#endif

void BigData60M::swap(BigData60M &other_) OMG_NOEXCEPT
{
    using std::swap;
    swap(m_data_, other_.m_data_);
}

bool BigData60M::operator==(const BigData60M &other_) const
{
    if (m_data_ != other_.m_data_)
    {
        return false;
    }
    return true;
}
bool BigData60M::operator!=(const BigData60M &other_) const
{
    return !this->operator==(other_);
}

std::ostream &operator<<(std::ostream &o, const BigData60M &sample)
{
    ::rti::util::StreamFlagSaver flag_saver(o);
    o << "[";
    o << "data: " << sample.data();
    o << "]";
    return o;
}

// --- Type traits: -------------------------------------------------

namespace rti
{
    namespace topic
    {

#ifndef NDDS_STANDALONE_TYPE
        template <>
        struct native_type_code<Data4B>
        {
            static DDS_TypeCode *get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member Data4B_g_tc_members[1] =
                    {

                        {(char *)"data", /* Member name */
                         {
                             0,                 /* Representation ID */
                             DDS_BOOLEAN_FALSE, /* Is a pointer? */
                             -1,                /* Bitfield bits */
                             NULL               /* Member type code is assigned later */
                         },
                         0,                       /* Ignored */
                         0,                       /* Ignored */
                         0,                       /* Ignored */
                         NULL,                    /* Ignored */
                         RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                         DDS_PUBLIC_MEMBER,       /* Member visibility */
                         1,
                         NULL, /* Ignored */
                         RTICdrTypeCodeAnnotations_INITIALIZER}};

                static DDS_TypeCode Data4B_g_tc =
                    {{
                        DDS_TK_STRUCT,       /* Kind */
                        DDS_BOOLEAN_FALSE,   /* Ignored */
                        -1,                  /*Ignored*/
                        (char *)"Data4B",    /* Name */
                        NULL,                /* Ignored */
                        0,                   /* Ignored */
                        0,                   /* Ignored */
                        NULL,                /* Ignored */
                        1,                   /* Number of members */
                        Data4B_g_tc_members, /* Members */
                        DDS_VM_NONE,         /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL,             /* _sampleAccessInfo: assigned later */
                        NULL              /* _typePlugin: assigned later */
                    }};                   /* Type code for Data4B*/

                if (is_initialized)
                {
                    return &Data4B_g_tc;
                }

                Data4B_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                Data4B_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

                /* Initialize the values for member annotations. */
                Data4B_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                Data4B_g_tc_members[0]._annotations._defaultValue._u.long_value = 0;
                Data4B_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                Data4B_g_tc_members[0]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                Data4B_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                Data4B_g_tc_members[0]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

                Data4B_g_tc._data._sampleAccessInfo = sample_access_info();
                Data4B_g_tc._data._typePlugin = type_plugin_info();

                is_initialized = RTI_TRUE;

                return &Data4B_g_tc;
            }

            static RTIXCdrSampleAccessInfo *sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                Data4B *sample;

                static RTIXCdrMemberAccessInfo Data4B_g_memberAccessInfos[1] =
                    {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo Data4B_g_sampleAccessInfo =
                    RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized)
                {
                    return (RTIXCdrSampleAccessInfo *)&Data4B_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample,
                    Data4B);
                if (sample == NULL)
                {
                    return NULL;
                }

                Data4B_g_memberAccessInfos[0].bindingMemberValueOffset[0] =
                    (RTIXCdrUnsignedLong)((char *)&sample->data() - (char *)sample);

                Data4B_g_sampleAccessInfo.memberAccessInfos =
                    Data4B_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(Data4B);

                    if (candidateTypeSize > RTIXCdrLong_MAX)
                    {
                        Data4B_g_sampleAccessInfo.typeSize[0] =
                            RTIXCdrLong_MAX;
                    }
                    else
                    {
                        Data4B_g_sampleAccessInfo.typeSize[0] =
                            (RTIXCdrUnsignedLong)candidateTypeSize;
                    }
                }

                Data4B_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                    RTI_XCDR_TRUE;

                Data4B_g_sampleAccessInfo.getMemberValuePointerFcn =
                    interpreter::get_aggregation_value_pointer<Data4B>;

                Data4B_g_sampleAccessInfo.languageBinding =
                    RTI_XCDR_TYPE_BINDING_CPP_11_STL;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo *)&Data4B_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin *type_plugin_info()
            {
                static RTIXCdrTypePlugin Data4B_g_typePlugin =
                    {
                        NULL, /* serialize */
                        NULL, /* serialize_key */
                        NULL, /* deserialize_sample */
                        NULL, /* deserialize_key_sample */
                        NULL, /* skip */
                        NULL, /* get_serialized_sample_size */
                        NULL, /* get_serialized_sample_max_size_ex */
                        NULL, /* get_serialized_key_max_size_ex */
                        NULL, /* get_serialized_sample_min_size */
                        NULL, /* serialized_sample_to_key */
                        NULL,
                        NULL,
                        NULL,
                        NULL};

                return &Data4B_g_typePlugin;
            }
        }; // native_type_code
#endif

        const ::dds::core::xtypes::StructType &dynamic_type<Data4B>::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType &>(
                ::rti::core::native_conversions::cast_from_native<::dds::core::xtypes::DynamicType>(
                    *(native_type_code<Data4B>::get())));
        }

#ifndef NDDS_STANDALONE_TYPE
        template <>
        struct native_type_code<BigData20B>
        {
            static DDS_TypeCode *get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode BigData20B_g_tc_data_sequence;

                static DDS_TypeCode_Member BigData20B_g_tc_members[1] =
                    {

                        {(char *)"data", /* Member name */
                         {
                             0,                 /* Representation ID */
                             DDS_BOOLEAN_FALSE, /* Is a pointer? */
                             -1,                /* Bitfield bits */
                             NULL               /* Member type code is assigned later */
                         },
                         0,                       /* Ignored */
                         0,                       /* Ignored */
                         0,                       /* Ignored */
                         NULL,                    /* Ignored */
                         RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                         DDS_PUBLIC_MEMBER,       /* Member visibility */
                         1,
                         NULL, /* Ignored */
                         RTICdrTypeCodeAnnotations_INITIALIZER}};

                static DDS_TypeCode BigData20B_g_tc =
                    {{
                        DDS_TK_STRUCT,           /* Kind */
                        DDS_BOOLEAN_FALSE,       /* Ignored */
                        -1,                      /*Ignored*/
                        (char *)"BigData20B",    /* Name */
                        NULL,                    /* Ignored */
                        0,                       /* Ignored */
                        0,                       /* Ignored */
                        NULL,                    /* Ignored */
                        1,                       /* Number of members */
                        BigData20B_g_tc_members, /* Members */
                        DDS_VM_NONE,             /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL,             /* _sampleAccessInfo: assigned later */
                        NULL              /* _typePlugin: assigned later */
                    }};                   /* Type code for BigData20B*/

                if (is_initialized)
                {
                    return &BigData20B_g_tc;
                }

                BigData20B_g_tc_data_sequence = initialize_sequence_typecode<::rti::core::bounded_sequence<char, 20L>>((20L));

                BigData20B_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                BigData20B_g_tc_data_sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_char;
                BigData20B_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&BigData20B_g_tc_data_sequence;

                /* Initialize the values for member annotations. */

                BigData20B_g_tc._data._sampleAccessInfo = sample_access_info();
                BigData20B_g_tc._data._typePlugin = type_plugin_info();

                is_initialized = RTI_TRUE;

                return &BigData20B_g_tc;
            }

            static RTIXCdrSampleAccessInfo *sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                BigData20B *sample;

                static RTIXCdrMemberAccessInfo BigData20B_g_memberAccessInfos[1] =
                    {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo BigData20B_g_sampleAccessInfo =
                    RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized)
                {
                    return (RTIXCdrSampleAccessInfo *)&BigData20B_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample,
                    BigData20B);
                if (sample == NULL)
                {
                    return NULL;
                }

                BigData20B_g_memberAccessInfos[0].bindingMemberValueOffset[0] =
                    (RTIXCdrUnsignedLong)((char *)&sample->data() - (char *)sample);

                BigData20B_g_sampleAccessInfo.memberAccessInfos =
                    BigData20B_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(BigData20B);

                    if (candidateTypeSize > RTIXCdrLong_MAX)
                    {
                        BigData20B_g_sampleAccessInfo.typeSize[0] =
                            RTIXCdrLong_MAX;
                    }
                    else
                    {
                        BigData20B_g_sampleAccessInfo.typeSize[0] =
                            (RTIXCdrUnsignedLong)candidateTypeSize;
                    }
                }

                BigData20B_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                    RTI_XCDR_TRUE;

                BigData20B_g_sampleAccessInfo.getMemberValuePointerFcn =
                    interpreter::get_aggregation_value_pointer<BigData20B>;

                BigData20B_g_sampleAccessInfo.languageBinding =
                    RTI_XCDR_TYPE_BINDING_CPP_11_STL;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo *)&BigData20B_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin *type_plugin_info()
            {
                static RTIXCdrTypePlugin BigData20B_g_typePlugin =
                    {
                        NULL, /* serialize */
                        NULL, /* serialize_key */
                        NULL, /* deserialize_sample */
                        NULL, /* deserialize_key_sample */
                        NULL, /* skip */
                        NULL, /* get_serialized_sample_size */
                        NULL, /* get_serialized_sample_max_size_ex */
                        NULL, /* get_serialized_key_max_size_ex */
                        NULL, /* get_serialized_sample_min_size */
                        NULL, /* serialized_sample_to_key */
                        NULL,
                        NULL,
                        NULL,
                        NULL};

                return &BigData20B_g_typePlugin;
            }
        }; // native_type_code
#endif

        const ::dds::core::xtypes::StructType &dynamic_type<BigData20B>::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType &>(
                ::rti::core::native_conversions::cast_from_native<::dds::core::xtypes::DynamicType>(
                    *(native_type_code<BigData20B>::get())));
        }

#ifndef NDDS_STANDALONE_TYPE
        template <>
        struct native_type_code<BigData60B>
        {
            static DDS_TypeCode *get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode BigData60B_g_tc_data_sequence;

                static DDS_TypeCode_Member BigData60B_g_tc_members[1] =
                    {

                        {(char *)"data", /* Member name */
                         {
                             0,                 /* Representation ID */
                             DDS_BOOLEAN_FALSE, /* Is a pointer? */
                             -1,                /* Bitfield bits */
                             NULL               /* Member type code is assigned later */
                         },
                         0,                       /* Ignored */
                         0,                       /* Ignored */
                         0,                       /* Ignored */
                         NULL,                    /* Ignored */
                         RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                         DDS_PUBLIC_MEMBER,       /* Member visibility */
                         1,
                         NULL, /* Ignored */
                         RTICdrTypeCodeAnnotations_INITIALIZER}};

                static DDS_TypeCode BigData60B_g_tc =
                    {{
                        DDS_TK_STRUCT,           /* Kind */
                        DDS_BOOLEAN_FALSE,       /* Ignored */
                        -1,                      /*Ignored*/
                        (char *)"BigData60B",    /* Name */
                        NULL,                    /* Ignored */
                        0,                       /* Ignored */
                        0,                       /* Ignored */
                        NULL,                    /* Ignored */
                        1,                       /* Number of members */
                        BigData60B_g_tc_members, /* Members */
                        DDS_VM_NONE,             /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL,             /* _sampleAccessInfo: assigned later */
                        NULL              /* _typePlugin: assigned later */
                    }};                   /* Type code for BigData60B*/

                if (is_initialized)
                {
                    return &BigData60B_g_tc;
                }

                BigData60B_g_tc_data_sequence = initialize_sequence_typecode<::rti::core::bounded_sequence<char, 60L>>((60L));

                BigData60B_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                BigData60B_g_tc_data_sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_char;
                BigData60B_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&BigData60B_g_tc_data_sequence;

                /* Initialize the values for member annotations. */

                BigData60B_g_tc._data._sampleAccessInfo = sample_access_info();
                BigData60B_g_tc._data._typePlugin = type_plugin_info();

                is_initialized = RTI_TRUE;

                return &BigData60B_g_tc;
            }

            static RTIXCdrSampleAccessInfo *sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                BigData60B *sample;

                static RTIXCdrMemberAccessInfo BigData60B_g_memberAccessInfos[1] =
                    {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo BigData60B_g_sampleAccessInfo =
                    RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized)
                {
                    return (RTIXCdrSampleAccessInfo *)&BigData60B_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample,
                    BigData60B);
                if (sample == NULL)
                {
                    return NULL;
                }

                BigData60B_g_memberAccessInfos[0].bindingMemberValueOffset[0] =
                    (RTIXCdrUnsignedLong)((char *)&sample->data() - (char *)sample);

                BigData60B_g_sampleAccessInfo.memberAccessInfos =
                    BigData60B_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(BigData60B);

                    if (candidateTypeSize > RTIXCdrLong_MAX)
                    {
                        BigData60B_g_sampleAccessInfo.typeSize[0] =
                            RTIXCdrLong_MAX;
                    }
                    else
                    {
                        BigData60B_g_sampleAccessInfo.typeSize[0] =
                            (RTIXCdrUnsignedLong)candidateTypeSize;
                    }
                }

                BigData60B_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                    RTI_XCDR_TRUE;

                BigData60B_g_sampleAccessInfo.getMemberValuePointerFcn =
                    interpreter::get_aggregation_value_pointer<BigData60B>;

                BigData60B_g_sampleAccessInfo.languageBinding =
                    RTI_XCDR_TYPE_BINDING_CPP_11_STL;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo *)&BigData60B_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin *type_plugin_info()
            {
                static RTIXCdrTypePlugin BigData60B_g_typePlugin =
                    {
                        NULL, /* serialize */
                        NULL, /* serialize_key */
                        NULL, /* deserialize_sample */
                        NULL, /* deserialize_key_sample */
                        NULL, /* skip */
                        NULL, /* get_serialized_sample_size */
                        NULL, /* get_serialized_sample_max_size_ex */
                        NULL, /* get_serialized_key_max_size_ex */
                        NULL, /* get_serialized_sample_min_size */
                        NULL, /* serialized_sample_to_key */
                        NULL,
                        NULL,
                        NULL,
                        NULL};

                return &BigData60B_g_typePlugin;
            }
        }; // native_type_code
#endif

        const ::dds::core::xtypes::StructType &dynamic_type<BigData60B>::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType &>(
                ::rti::core::native_conversions::cast_from_native<::dds::core::xtypes::DynamicType>(
                    *(native_type_code<BigData60B>::get())));
        }

#ifndef NDDS_STANDALONE_TYPE
        template <>
        struct native_type_code<BigData1K>
        {
            static DDS_TypeCode *get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode BigData1K_g_tc_data_sequence;

                static DDS_TypeCode_Member BigData1K_g_tc_members[1] =
                    {

                        {(char *)"data", /* Member name */
                         {
                             0,                 /* Representation ID */
                             DDS_BOOLEAN_FALSE, /* Is a pointer? */
                             -1,                /* Bitfield bits */
                             NULL               /* Member type code is assigned later */
                         },
                         0,                       /* Ignored */
                         0,                       /* Ignored */
                         0,                       /* Ignored */
                         NULL,                    /* Ignored */
                         RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                         DDS_PUBLIC_MEMBER,       /* Member visibility */
                         1,
                         NULL, /* Ignored */
                         RTICdrTypeCodeAnnotations_INITIALIZER}};

                static DDS_TypeCode BigData1K_g_tc =
                    {{
                        DDS_TK_STRUCT,          /* Kind */
                        DDS_BOOLEAN_FALSE,      /* Ignored */
                        -1,                     /*Ignored*/
                        (char *)"BigData1K",    /* Name */
                        NULL,                   /* Ignored */
                        0,                      /* Ignored */
                        0,                      /* Ignored */
                        NULL,                   /* Ignored */
                        1,                      /* Number of members */
                        BigData1K_g_tc_members, /* Members */
                        DDS_VM_NONE,            /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL,             /* _sampleAccessInfo: assigned later */
                        NULL              /* _typePlugin: assigned later */
                    }};                   /* Type code for BigData1K*/

                if (is_initialized)
                {
                    return &BigData1K_g_tc;
                }

                BigData1K_g_tc_data_sequence = initialize_sequence_typecode<::rti::core::bounded_sequence<char, 1024L>>((1024L));

                BigData1K_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                BigData1K_g_tc_data_sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_char;
                BigData1K_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&BigData1K_g_tc_data_sequence;

                /* Initialize the values for member annotations. */

                BigData1K_g_tc._data._sampleAccessInfo = sample_access_info();
                BigData1K_g_tc._data._typePlugin = type_plugin_info();

                is_initialized = RTI_TRUE;

                return &BigData1K_g_tc;
            }

            static RTIXCdrSampleAccessInfo *sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                BigData1K *sample;

                static RTIXCdrMemberAccessInfo BigData1K_g_memberAccessInfos[1] =
                    {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo BigData1K_g_sampleAccessInfo =
                    RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized)
                {
                    return (RTIXCdrSampleAccessInfo *)&BigData1K_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample,
                    BigData1K);
                if (sample == NULL)
                {
                    return NULL;
                }

                BigData1K_g_memberAccessInfos[0].bindingMemberValueOffset[0] =
                    (RTIXCdrUnsignedLong)((char *)&sample->data() - (char *)sample);

                BigData1K_g_sampleAccessInfo.memberAccessInfos =
                    BigData1K_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(BigData1K);

                    if (candidateTypeSize > RTIXCdrLong_MAX)
                    {
                        BigData1K_g_sampleAccessInfo.typeSize[0] =
                            RTIXCdrLong_MAX;
                    }
                    else
                    {
                        BigData1K_g_sampleAccessInfo.typeSize[0] =
                            (RTIXCdrUnsignedLong)candidateTypeSize;
                    }
                }

                BigData1K_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                    RTI_XCDR_TRUE;

                BigData1K_g_sampleAccessInfo.getMemberValuePointerFcn =
                    interpreter::get_aggregation_value_pointer<BigData1K>;

                BigData1K_g_sampleAccessInfo.languageBinding =
                    RTI_XCDR_TYPE_BINDING_CPP_11_STL;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo *)&BigData1K_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin *type_plugin_info()
            {
                static RTIXCdrTypePlugin BigData1K_g_typePlugin =
                    {
                        NULL, /* serialize */
                        NULL, /* serialize_key */
                        NULL, /* deserialize_sample */
                        NULL, /* deserialize_key_sample */
                        NULL, /* skip */
                        NULL, /* get_serialized_sample_size */
                        NULL, /* get_serialized_sample_max_size_ex */
                        NULL, /* get_serialized_key_max_size_ex */
                        NULL, /* get_serialized_sample_min_size */
                        NULL, /* serialized_sample_to_key */
                        NULL,
                        NULL,
                        NULL,
                        NULL};

                return &BigData1K_g_typePlugin;
            }
        }; // native_type_code
#endif

        const ::dds::core::xtypes::StructType &dynamic_type<BigData1K>::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType &>(
                ::rti::core::native_conversions::cast_from_native<::dds::core::xtypes::DynamicType>(
                    *(native_type_code<BigData1K>::get())));
        }

#ifndef NDDS_STANDALONE_TYPE
        template <>
        struct native_type_code<BigData2K>
        {
            static DDS_TypeCode *get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode BigData2K_g_tc_data_sequence;

                static DDS_TypeCode_Member BigData2K_g_tc_members[1] =
                    {

                        {(char *)"data", /* Member name */
                         {
                             0,                 /* Representation ID */
                             DDS_BOOLEAN_FALSE, /* Is a pointer? */
                             -1,                /* Bitfield bits */
                             NULL               /* Member type code is assigned later */
                         },
                         0,                       /* Ignored */
                         0,                       /* Ignored */
                         0,                       /* Ignored */
                         NULL,                    /* Ignored */
                         RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                         DDS_PUBLIC_MEMBER,       /* Member visibility */
                         1,
                         NULL, /* Ignored */
                         RTICdrTypeCodeAnnotations_INITIALIZER}};

                static DDS_TypeCode BigData2K_g_tc =
                    {{
                        DDS_TK_STRUCT,          /* Kind */
                        DDS_BOOLEAN_FALSE,      /* Ignored */
                        -1,                     /*Ignored*/
                        (char *)"BigData2K",    /* Name */
                        NULL,                   /* Ignored */
                        0,                      /* Ignored */
                        0,                      /* Ignored */
                        NULL,                   /* Ignored */
                        1,                      /* Number of members */
                        BigData2K_g_tc_members, /* Members */
                        DDS_VM_NONE,            /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL,             /* _sampleAccessInfo: assigned later */
                        NULL              /* _typePlugin: assigned later */
                    }};                   /* Type code for BigData2K*/

                if (is_initialized)
                {
                    return &BigData2K_g_tc;
                }

                BigData2K_g_tc_data_sequence = initialize_sequence_typecode<::rti::core::bounded_sequence<char, 1024L * 2L>>((1024L * 2L));

                BigData2K_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                BigData2K_g_tc_data_sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_char;
                BigData2K_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&BigData2K_g_tc_data_sequence;

                /* Initialize the values for member annotations. */

                BigData2K_g_tc._data._sampleAccessInfo = sample_access_info();
                BigData2K_g_tc._data._typePlugin = type_plugin_info();

                is_initialized = RTI_TRUE;

                return &BigData2K_g_tc;
            }

            static RTIXCdrSampleAccessInfo *sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                BigData2K *sample;

                static RTIXCdrMemberAccessInfo BigData2K_g_memberAccessInfos[1] =
                    {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo BigData2K_g_sampleAccessInfo =
                    RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized)
                {
                    return (RTIXCdrSampleAccessInfo *)&BigData2K_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample,
                    BigData2K);
                if (sample == NULL)
                {
                    return NULL;
                }

                BigData2K_g_memberAccessInfos[0].bindingMemberValueOffset[0] =
                    (RTIXCdrUnsignedLong)((char *)&sample->data() - (char *)sample);

                BigData2K_g_sampleAccessInfo.memberAccessInfos =
                    BigData2K_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(BigData2K);

                    if (candidateTypeSize > RTIXCdrLong_MAX)
                    {
                        BigData2K_g_sampleAccessInfo.typeSize[0] =
                            RTIXCdrLong_MAX;
                    }
                    else
                    {
                        BigData2K_g_sampleAccessInfo.typeSize[0] =
                            (RTIXCdrUnsignedLong)candidateTypeSize;
                    }
                }

                BigData2K_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                    RTI_XCDR_TRUE;

                BigData2K_g_sampleAccessInfo.getMemberValuePointerFcn =
                    interpreter::get_aggregation_value_pointer<BigData2K>;

                BigData2K_g_sampleAccessInfo.languageBinding =
                    RTI_XCDR_TYPE_BINDING_CPP_11_STL;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo *)&BigData2K_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin *type_plugin_info()
            {
                static RTIXCdrTypePlugin BigData2K_g_typePlugin =
                    {
                        NULL, /* serialize */
                        NULL, /* serialize_key */
                        NULL, /* deserialize_sample */
                        NULL, /* deserialize_key_sample */
                        NULL, /* skip */
                        NULL, /* get_serialized_sample_size */
                        NULL, /* get_serialized_sample_max_size_ex */
                        NULL, /* get_serialized_key_max_size_ex */
                        NULL, /* get_serialized_sample_min_size */
                        NULL, /* serialized_sample_to_key */
                        NULL,
                        NULL,
                        NULL,
                        NULL};

                return &BigData2K_g_typePlugin;
            }
        }; // native_type_code
#endif

        const ::dds::core::xtypes::StructType &dynamic_type<BigData2K>::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType &>(
                ::rti::core::native_conversions::cast_from_native<::dds::core::xtypes::DynamicType>(
                    *(native_type_code<BigData2K>::get())));
        }

#ifndef NDDS_STANDALONE_TYPE
        template <>
        struct native_type_code<BigData4K>
        {
            static DDS_TypeCode *get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode BigData4K_g_tc_data_sequence;

                static DDS_TypeCode_Member BigData4K_g_tc_members[1] =
                    {

                        {(char *)"data", /* Member name */
                         {
                             0,                 /* Representation ID */
                             DDS_BOOLEAN_FALSE, /* Is a pointer? */
                             -1,                /* Bitfield bits */
                             NULL               /* Member type code is assigned later */
                         },
                         0,                       /* Ignored */
                         0,                       /* Ignored */
                         0,                       /* Ignored */
                         NULL,                    /* Ignored */
                         RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                         DDS_PUBLIC_MEMBER,       /* Member visibility */
                         1,
                         NULL, /* Ignored */
                         RTICdrTypeCodeAnnotations_INITIALIZER}};

                static DDS_TypeCode BigData4K_g_tc =
                    {{
                        DDS_TK_STRUCT,          /* Kind */
                        DDS_BOOLEAN_FALSE,      /* Ignored */
                        -1,                     /*Ignored*/
                        (char *)"BigData4K",    /* Name */
                        NULL,                   /* Ignored */
                        0,                      /* Ignored */
                        0,                      /* Ignored */
                        NULL,                   /* Ignored */
                        1,                      /* Number of members */
                        BigData4K_g_tc_members, /* Members */
                        DDS_VM_NONE,            /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL,             /* _sampleAccessInfo: assigned later */
                        NULL              /* _typePlugin: assigned later */
                    }};                   /* Type code for BigData4K*/

                if (is_initialized)
                {
                    return &BigData4K_g_tc;
                }

                BigData4K_g_tc_data_sequence = initialize_sequence_typecode<::rti::core::bounded_sequence<char, 1024L * 4L>>((1024L * 4L));

                BigData4K_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                BigData4K_g_tc_data_sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_char;
                BigData4K_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&BigData4K_g_tc_data_sequence;

                /* Initialize the values for member annotations. */

                BigData4K_g_tc._data._sampleAccessInfo = sample_access_info();
                BigData4K_g_tc._data._typePlugin = type_plugin_info();

                is_initialized = RTI_TRUE;

                return &BigData4K_g_tc;
            }

            static RTIXCdrSampleAccessInfo *sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                BigData4K *sample;

                static RTIXCdrMemberAccessInfo BigData4K_g_memberAccessInfos[1] =
                    {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo BigData4K_g_sampleAccessInfo =
                    RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized)
                {
                    return (RTIXCdrSampleAccessInfo *)&BigData4K_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample,
                    BigData4K);
                if (sample == NULL)
                {
                    return NULL;
                }

                BigData4K_g_memberAccessInfos[0].bindingMemberValueOffset[0] =
                    (RTIXCdrUnsignedLong)((char *)&sample->data() - (char *)sample);

                BigData4K_g_sampleAccessInfo.memberAccessInfos =
                    BigData4K_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(BigData4K);

                    if (candidateTypeSize > RTIXCdrLong_MAX)
                    {
                        BigData4K_g_sampleAccessInfo.typeSize[0] =
                            RTIXCdrLong_MAX;
                    }
                    else
                    {
                        BigData4K_g_sampleAccessInfo.typeSize[0] =
                            (RTIXCdrUnsignedLong)candidateTypeSize;
                    }
                }

                BigData4K_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                    RTI_XCDR_TRUE;

                BigData4K_g_sampleAccessInfo.getMemberValuePointerFcn =
                    interpreter::get_aggregation_value_pointer<BigData4K>;

                BigData4K_g_sampleAccessInfo.languageBinding =
                    RTI_XCDR_TYPE_BINDING_CPP_11_STL;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo *)&BigData4K_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin *type_plugin_info()
            {
                static RTIXCdrTypePlugin BigData4K_g_typePlugin =
                    {
                        NULL, /* serialize */
                        NULL, /* serialize_key */
                        NULL, /* deserialize_sample */
                        NULL, /* deserialize_key_sample */
                        NULL, /* skip */
                        NULL, /* get_serialized_sample_size */
                        NULL, /* get_serialized_sample_max_size_ex */
                        NULL, /* get_serialized_key_max_size_ex */
                        NULL, /* get_serialized_sample_min_size */
                        NULL, /* serialized_sample_to_key */
                        NULL,
                        NULL,
                        NULL,
                        NULL};

                return &BigData4K_g_typePlugin;
            }
        }; // native_type_code
#endif

        const ::dds::core::xtypes::StructType &dynamic_type<BigData4K>::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType &>(
                ::rti::core::native_conversions::cast_from_native<::dds::core::xtypes::DynamicType>(
                    *(native_type_code<BigData4K>::get())));
        }

#ifndef NDDS_STANDALONE_TYPE
        template <>
        struct native_type_code<BigData16K>
        {
            static DDS_TypeCode *get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode BigData16K_g_tc_data_sequence;

                static DDS_TypeCode_Member BigData16K_g_tc_members[1] =
                    {

                        {(char *)"data", /* Member name */
                         {
                             0,                 /* Representation ID */
                             DDS_BOOLEAN_FALSE, /* Is a pointer? */
                             -1,                /* Bitfield bits */
                             NULL               /* Member type code is assigned later */
                         },
                         0,                       /* Ignored */
                         0,                       /* Ignored */
                         0,                       /* Ignored */
                         NULL,                    /* Ignored */
                         RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                         DDS_PUBLIC_MEMBER,       /* Member visibility */
                         1,
                         NULL, /* Ignored */
                         RTICdrTypeCodeAnnotations_INITIALIZER}};

                static DDS_TypeCode BigData16K_g_tc =
                    {{
                        DDS_TK_STRUCT,           /* Kind */
                        DDS_BOOLEAN_FALSE,       /* Ignored */
                        -1,                      /*Ignored*/
                        (char *)"BigData16K",    /* Name */
                        NULL,                    /* Ignored */
                        0,                       /* Ignored */
                        0,                       /* Ignored */
                        NULL,                    /* Ignored */
                        1,                       /* Number of members */
                        BigData16K_g_tc_members, /* Members */
                        DDS_VM_NONE,             /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL,             /* _sampleAccessInfo: assigned later */
                        NULL              /* _typePlugin: assigned later */
                    }};                   /* Type code for BigData16K*/

                if (is_initialized)
                {
                    return &BigData16K_g_tc;
                }

                BigData16K_g_tc_data_sequence = initialize_sequence_typecode<::rti::core::bounded_sequence<char, 1024L * 16L>>((1024L * 16L));

                BigData16K_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                BigData16K_g_tc_data_sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_char;
                BigData16K_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&BigData16K_g_tc_data_sequence;

                /* Initialize the values for member annotations. */

                BigData16K_g_tc._data._sampleAccessInfo = sample_access_info();
                BigData16K_g_tc._data._typePlugin = type_plugin_info();

                is_initialized = RTI_TRUE;

                return &BigData16K_g_tc;
            }

            static RTIXCdrSampleAccessInfo *sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                BigData16K *sample;

                static RTIXCdrMemberAccessInfo BigData16K_g_memberAccessInfos[1] =
                    {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo BigData16K_g_sampleAccessInfo =
                    RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized)
                {
                    return (RTIXCdrSampleAccessInfo *)&BigData16K_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample,
                    BigData16K);
                if (sample == NULL)
                {
                    return NULL;
                }

                BigData16K_g_memberAccessInfos[0].bindingMemberValueOffset[0] =
                    (RTIXCdrUnsignedLong)((char *)&sample->data() - (char *)sample);

                BigData16K_g_sampleAccessInfo.memberAccessInfos =
                    BigData16K_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(BigData16K);

                    if (candidateTypeSize > RTIXCdrLong_MAX)
                    {
                        BigData16K_g_sampleAccessInfo.typeSize[0] =
                            RTIXCdrLong_MAX;
                    }
                    else
                    {
                        BigData16K_g_sampleAccessInfo.typeSize[0] =
                            (RTIXCdrUnsignedLong)candidateTypeSize;
                    }
                }

                BigData16K_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                    RTI_XCDR_TRUE;

                BigData16K_g_sampleAccessInfo.getMemberValuePointerFcn =
                    interpreter::get_aggregation_value_pointer<BigData16K>;

                BigData16K_g_sampleAccessInfo.languageBinding =
                    RTI_XCDR_TYPE_BINDING_CPP_11_STL;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo *)&BigData16K_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin *type_plugin_info()
            {
                static RTIXCdrTypePlugin BigData16K_g_typePlugin =
                    {
                        NULL, /* serialize */
                        NULL, /* serialize_key */
                        NULL, /* deserialize_sample */
                        NULL, /* deserialize_key_sample */
                        NULL, /* skip */
                        NULL, /* get_serialized_sample_size */
                        NULL, /* get_serialized_sample_max_size_ex */
                        NULL, /* get_serialized_key_max_size_ex */
                        NULL, /* get_serialized_sample_min_size */
                        NULL, /* serialized_sample_to_key */
                        NULL,
                        NULL,
                        NULL,
                        NULL};

                return &BigData16K_g_typePlugin;
            }
        }; // native_type_code
#endif

        const ::dds::core::xtypes::StructType &dynamic_type<BigData16K>::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType &>(
                ::rti::core::native_conversions::cast_from_native<::dds::core::xtypes::DynamicType>(
                    *(native_type_code<BigData16K>::get())));
        }

#ifndef NDDS_STANDALONE_TYPE
        template <>
        struct native_type_code<BigData32K>
        {
            static DDS_TypeCode *get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode BigData32K_g_tc_data_sequence;

                static DDS_TypeCode_Member BigData32K_g_tc_members[1] =
                    {

                        {(char *)"data", /* Member name */
                         {
                             0,                 /* Representation ID */
                             DDS_BOOLEAN_FALSE, /* Is a pointer? */
                             -1,                /* Bitfield bits */
                             NULL               /* Member type code is assigned later */
                         },
                         0,                       /* Ignored */
                         0,                       /* Ignored */
                         0,                       /* Ignored */
                         NULL,                    /* Ignored */
                         RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                         DDS_PUBLIC_MEMBER,       /* Member visibility */
                         1,
                         NULL, /* Ignored */
                         RTICdrTypeCodeAnnotations_INITIALIZER}};

                static DDS_TypeCode BigData32K_g_tc =
                    {{
                        DDS_TK_STRUCT,           /* Kind */
                        DDS_BOOLEAN_FALSE,       /* Ignored */
                        -1,                      /*Ignored*/
                        (char *)"BigData32K",    /* Name */
                        NULL,                    /* Ignored */
                        0,                       /* Ignored */
                        0,                       /* Ignored */
                        NULL,                    /* Ignored */
                        1,                       /* Number of members */
                        BigData32K_g_tc_members, /* Members */
                        DDS_VM_NONE,             /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL,             /* _sampleAccessInfo: assigned later */
                        NULL              /* _typePlugin: assigned later */
                    }};                   /* Type code for BigData32K*/

                if (is_initialized)
                {
                    return &BigData32K_g_tc;
                }

                BigData32K_g_tc_data_sequence = initialize_sequence_typecode<::rti::core::bounded_sequence<char, 1024L * 32L>>((1024L * 32L));

                BigData32K_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                BigData32K_g_tc_data_sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_char;
                BigData32K_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&BigData32K_g_tc_data_sequence;

                /* Initialize the values for member annotations. */

                BigData32K_g_tc._data._sampleAccessInfo = sample_access_info();
                BigData32K_g_tc._data._typePlugin = type_plugin_info();

                is_initialized = RTI_TRUE;

                return &BigData32K_g_tc;
            }

            static RTIXCdrSampleAccessInfo *sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                BigData32K *sample;

                static RTIXCdrMemberAccessInfo BigData32K_g_memberAccessInfos[1] =
                    {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo BigData32K_g_sampleAccessInfo =
                    RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized)
                {
                    return (RTIXCdrSampleAccessInfo *)&BigData32K_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample,
                    BigData32K);
                if (sample == NULL)
                {
                    return NULL;
                }

                BigData32K_g_memberAccessInfos[0].bindingMemberValueOffset[0] =
                    (RTIXCdrUnsignedLong)((char *)&sample->data() - (char *)sample);

                BigData32K_g_sampleAccessInfo.memberAccessInfos =
                    BigData32K_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(BigData32K);

                    if (candidateTypeSize > RTIXCdrLong_MAX)
                    {
                        BigData32K_g_sampleAccessInfo.typeSize[0] =
                            RTIXCdrLong_MAX;
                    }
                    else
                    {
                        BigData32K_g_sampleAccessInfo.typeSize[0] =
                            (RTIXCdrUnsignedLong)candidateTypeSize;
                    }
                }

                BigData32K_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                    RTI_XCDR_TRUE;

                BigData32K_g_sampleAccessInfo.getMemberValuePointerFcn =
                    interpreter::get_aggregation_value_pointer<BigData32K>;

                BigData32K_g_sampleAccessInfo.languageBinding =
                    RTI_XCDR_TYPE_BINDING_CPP_11_STL;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo *)&BigData32K_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin *type_plugin_info()
            {
                static RTIXCdrTypePlugin BigData32K_g_typePlugin =
                    {
                        NULL, /* serialize */
                        NULL, /* serialize_key */
                        NULL, /* deserialize_sample */
                        NULL, /* deserialize_key_sample */
                        NULL, /* skip */
                        NULL, /* get_serialized_sample_size */
                        NULL, /* get_serialized_sample_max_size_ex */
                        NULL, /* get_serialized_key_max_size_ex */
                        NULL, /* get_serialized_sample_min_size */
                        NULL, /* serialized_sample_to_key */
                        NULL,
                        NULL,
                        NULL,
                        NULL};

                return &BigData32K_g_typePlugin;
            }
        }; // native_type_code
#endif

        const ::dds::core::xtypes::StructType &dynamic_type<BigData32K>::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType &>(
                ::rti::core::native_conversions::cast_from_native<::dds::core::xtypes::DynamicType>(
                    *(native_type_code<BigData32K>::get())));
        }

#ifndef NDDS_STANDALONE_TYPE
        template <>
        struct native_type_code<BigData64K>
        {
            static DDS_TypeCode *get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode BigData64K_g_tc_data_sequence;

                static DDS_TypeCode_Member BigData64K_g_tc_members[1] =
                    {

                        {(char *)"data", /* Member name */
                         {
                             0,                 /* Representation ID */
                             DDS_BOOLEAN_FALSE, /* Is a pointer? */
                             -1,                /* Bitfield bits */
                             NULL               /* Member type code is assigned later */
                         },
                         0,                       /* Ignored */
                         0,                       /* Ignored */
                         0,                       /* Ignored */
                         NULL,                    /* Ignored */
                         RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                         DDS_PUBLIC_MEMBER,       /* Member visibility */
                         1,
                         NULL, /* Ignored */
                         RTICdrTypeCodeAnnotations_INITIALIZER}};

                static DDS_TypeCode BigData64K_g_tc =
                    {{
                        DDS_TK_STRUCT,           /* Kind */
                        DDS_BOOLEAN_FALSE,       /* Ignored */
                        -1,                      /*Ignored*/
                        (char *)"BigData64K",    /* Name */
                        NULL,                    /* Ignored */
                        0,                       /* Ignored */
                        0,                       /* Ignored */
                        NULL,                    /* Ignored */
                        1,                       /* Number of members */
                        BigData64K_g_tc_members, /* Members */
                        DDS_VM_NONE,             /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL,             /* _sampleAccessInfo: assigned later */
                        NULL              /* _typePlugin: assigned later */
                    }};                   /* Type code for BigData64K*/

                if (is_initialized)
                {
                    return &BigData64K_g_tc;
                }

                BigData64K_g_tc_data_sequence = initialize_sequence_typecode<::rti::core::bounded_sequence<char, 1024L * 64L>>((1024L * 64L));

                BigData64K_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                BigData64K_g_tc_data_sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_char;
                BigData64K_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&BigData64K_g_tc_data_sequence;

                /* Initialize the values for member annotations. */

                BigData64K_g_tc._data._sampleAccessInfo = sample_access_info();
                BigData64K_g_tc._data._typePlugin = type_plugin_info();

                is_initialized = RTI_TRUE;

                return &BigData64K_g_tc;
            }

            static RTIXCdrSampleAccessInfo *sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                BigData64K *sample;

                static RTIXCdrMemberAccessInfo BigData64K_g_memberAccessInfos[1] =
                    {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo BigData64K_g_sampleAccessInfo =
                    RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized)
                {
                    return (RTIXCdrSampleAccessInfo *)&BigData64K_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample,
                    BigData64K);
                if (sample == NULL)
                {
                    return NULL;
                }

                BigData64K_g_memberAccessInfos[0].bindingMemberValueOffset[0] =
                    (RTIXCdrUnsignedLong)((char *)&sample->data() - (char *)sample);

                BigData64K_g_sampleAccessInfo.memberAccessInfos =
                    BigData64K_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(BigData64K);

                    if (candidateTypeSize > RTIXCdrLong_MAX)
                    {
                        BigData64K_g_sampleAccessInfo.typeSize[0] =
                            RTIXCdrLong_MAX;
                    }
                    else
                    {
                        BigData64K_g_sampleAccessInfo.typeSize[0] =
                            (RTIXCdrUnsignedLong)candidateTypeSize;
                    }
                }

                BigData64K_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                    RTI_XCDR_TRUE;

                BigData64K_g_sampleAccessInfo.getMemberValuePointerFcn =
                    interpreter::get_aggregation_value_pointer<BigData64K>;

                BigData64K_g_sampleAccessInfo.languageBinding =
                    RTI_XCDR_TYPE_BINDING_CPP_11_STL;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo *)&BigData64K_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin *type_plugin_info()
            {
                static RTIXCdrTypePlugin BigData64K_g_typePlugin =
                    {
                        NULL, /* serialize */
                        NULL, /* serialize_key */
                        NULL, /* deserialize_sample */
                        NULL, /* deserialize_key_sample */
                        NULL, /* skip */
                        NULL, /* get_serialized_sample_size */
                        NULL, /* get_serialized_sample_max_size_ex */
                        NULL, /* get_serialized_key_max_size_ex */
                        NULL, /* get_serialized_sample_min_size */
                        NULL, /* serialized_sample_to_key */
                        NULL,
                        NULL,
                        NULL,
                        NULL};

                return &BigData64K_g_typePlugin;
            }
        }; // native_type_code
#endif

        const ::dds::core::xtypes::StructType &dynamic_type<BigData64K>::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType &>(
                ::rti::core::native_conversions::cast_from_native<::dds::core::xtypes::DynamicType>(
                    *(native_type_code<BigData64K>::get())));
        }

#ifndef NDDS_STANDALONE_TYPE
        template <>
        struct native_type_code<BigData256K>
        {
            static DDS_TypeCode *get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode BigData256K_g_tc_data_sequence;

                static DDS_TypeCode_Member BigData256K_g_tc_members[1] =
                    {

                        {(char *)"data", /* Member name */
                         {
                             0,                 /* Representation ID */
                             DDS_BOOLEAN_FALSE, /* Is a pointer? */
                             -1,                /* Bitfield bits */
                             NULL               /* Member type code is assigned later */
                         },
                         0,                       /* Ignored */
                         0,                       /* Ignored */
                         0,                       /* Ignored */
                         NULL,                    /* Ignored */
                         RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                         DDS_PUBLIC_MEMBER,       /* Member visibility */
                         1,
                         NULL, /* Ignored */
                         RTICdrTypeCodeAnnotations_INITIALIZER}};

                static DDS_TypeCode BigData256K_g_tc =
                    {{
                        DDS_TK_STRUCT,            /* Kind */
                        DDS_BOOLEAN_FALSE,        /* Ignored */
                        -1,                       /*Ignored*/
                        (char *)"BigData256K",    /* Name */
                        NULL,                     /* Ignored */
                        0,                        /* Ignored */
                        0,                        /* Ignored */
                        NULL,                     /* Ignored */
                        1,                        /* Number of members */
                        BigData256K_g_tc_members, /* Members */
                        DDS_VM_NONE,              /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL,             /* _sampleAccessInfo: assigned later */
                        NULL              /* _typePlugin: assigned later */
                    }};                   /* Type code for BigData256K*/

                if (is_initialized)
                {
                    return &BigData256K_g_tc;
                }

                BigData256K_g_tc_data_sequence = initialize_sequence_typecode<::rti::core::bounded_sequence<char, 1024L * 256L>>((1024L * 256L));

                BigData256K_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                BigData256K_g_tc_data_sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_char;
                BigData256K_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&BigData256K_g_tc_data_sequence;

                /* Initialize the values for member annotations. */

                BigData256K_g_tc._data._sampleAccessInfo = sample_access_info();
                BigData256K_g_tc._data._typePlugin = type_plugin_info();

                is_initialized = RTI_TRUE;

                return &BigData256K_g_tc;
            }

            static RTIXCdrSampleAccessInfo *sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                BigData256K *sample;

                static RTIXCdrMemberAccessInfo BigData256K_g_memberAccessInfos[1] =
                    {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo BigData256K_g_sampleAccessInfo =
                    RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized)
                {
                    return (RTIXCdrSampleAccessInfo *)&BigData256K_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample,
                    BigData256K);
                if (sample == NULL)
                {
                    return NULL;
                }

                BigData256K_g_memberAccessInfos[0].bindingMemberValueOffset[0] =
                    (RTIXCdrUnsignedLong)((char *)&sample->data() - (char *)sample);

                BigData256K_g_sampleAccessInfo.memberAccessInfos =
                    BigData256K_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(BigData256K);

                    if (candidateTypeSize > RTIXCdrLong_MAX)
                    {
                        BigData256K_g_sampleAccessInfo.typeSize[0] =
                            RTIXCdrLong_MAX;
                    }
                    else
                    {
                        BigData256K_g_sampleAccessInfo.typeSize[0] =
                            (RTIXCdrUnsignedLong)candidateTypeSize;
                    }
                }

                BigData256K_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                    RTI_XCDR_TRUE;

                BigData256K_g_sampleAccessInfo.getMemberValuePointerFcn =
                    interpreter::get_aggregation_value_pointer<BigData256K>;

                BigData256K_g_sampleAccessInfo.languageBinding =
                    RTI_XCDR_TYPE_BINDING_CPP_11_STL;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo *)&BigData256K_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin *type_plugin_info()
            {
                static RTIXCdrTypePlugin BigData256K_g_typePlugin =
                    {
                        NULL, /* serialize */
                        NULL, /* serialize_key */
                        NULL, /* deserialize_sample */
                        NULL, /* deserialize_key_sample */
                        NULL, /* skip */
                        NULL, /* get_serialized_sample_size */
                        NULL, /* get_serialized_sample_max_size_ex */
                        NULL, /* get_serialized_key_max_size_ex */
                        NULL, /* get_serialized_sample_min_size */
                        NULL, /* serialized_sample_to_key */
                        NULL,
                        NULL,
                        NULL,
                        NULL};

                return &BigData256K_g_typePlugin;
            }
        }; // native_type_code
#endif

        const ::dds::core::xtypes::StructType &dynamic_type<BigData256K>::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType &>(
                ::rti::core::native_conversions::cast_from_native<::dds::core::xtypes::DynamicType>(
                    *(native_type_code<BigData256K>::get())));
        }

#ifndef NDDS_STANDALONE_TYPE
        template <>
        struct native_type_code<BigData1M>
        {
            static DDS_TypeCode *get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode BigData1M_g_tc_data_sequence;

                static DDS_TypeCode_Member BigData1M_g_tc_members[1] =
                    {

                        {(char *)"data", /* Member name */
                         {
                             0,                 /* Representation ID */
                             DDS_BOOLEAN_FALSE, /* Is a pointer? */
                             -1,                /* Bitfield bits */
                             NULL               /* Member type code is assigned later */
                         },
                         0,                       /* Ignored */
                         0,                       /* Ignored */
                         0,                       /* Ignored */
                         NULL,                    /* Ignored */
                         RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                         DDS_PUBLIC_MEMBER,       /* Member visibility */
                         1,
                         NULL, /* Ignored */
                         RTICdrTypeCodeAnnotations_INITIALIZER}};

                static DDS_TypeCode BigData1M_g_tc =
                    {{
                        DDS_TK_STRUCT,          /* Kind */
                        DDS_BOOLEAN_FALSE,      /* Ignored */
                        -1,                     /*Ignored*/
                        (char *)"BigData1M",    /* Name */
                        NULL,                   /* Ignored */
                        0,                      /* Ignored */
                        0,                      /* Ignored */
                        NULL,                   /* Ignored */
                        1,                      /* Number of members */
                        BigData1M_g_tc_members, /* Members */
                        DDS_VM_NONE,            /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL,             /* _sampleAccessInfo: assigned later */
                        NULL              /* _typePlugin: assigned later */
                    }};                   /* Type code for BigData1M*/

                if (is_initialized)
                {
                    return &BigData1M_g_tc;
                }

                BigData1M_g_tc_data_sequence = initialize_sequence_typecode<::rti::core::bounded_sequence<char, 1024L * 1024L * 1L>>((1024L * 1024L * 1L));

                BigData1M_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                BigData1M_g_tc_data_sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_char;
                BigData1M_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&BigData1M_g_tc_data_sequence;

                /* Initialize the values for member annotations. */

                BigData1M_g_tc._data._sampleAccessInfo = sample_access_info();
                BigData1M_g_tc._data._typePlugin = type_plugin_info();

                is_initialized = RTI_TRUE;

                return &BigData1M_g_tc;
            }

            static RTIXCdrSampleAccessInfo *sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                BigData1M *sample;

                static RTIXCdrMemberAccessInfo BigData1M_g_memberAccessInfos[1] =
                    {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo BigData1M_g_sampleAccessInfo =
                    RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized)
                {
                    return (RTIXCdrSampleAccessInfo *)&BigData1M_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample,
                    BigData1M);
                if (sample == NULL)
                {
                    return NULL;
                }

                BigData1M_g_memberAccessInfos[0].bindingMemberValueOffset[0] =
                    (RTIXCdrUnsignedLong)((char *)&sample->data() - (char *)sample);

                BigData1M_g_sampleAccessInfo.memberAccessInfos =
                    BigData1M_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(BigData1M);

                    if (candidateTypeSize > RTIXCdrLong_MAX)
                    {
                        BigData1M_g_sampleAccessInfo.typeSize[0] =
                            RTIXCdrLong_MAX;
                    }
                    else
                    {
                        BigData1M_g_sampleAccessInfo.typeSize[0] =
                            (RTIXCdrUnsignedLong)candidateTypeSize;
                    }
                }

                BigData1M_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                    RTI_XCDR_TRUE;

                BigData1M_g_sampleAccessInfo.getMemberValuePointerFcn =
                    interpreter::get_aggregation_value_pointer<BigData1M>;

                BigData1M_g_sampleAccessInfo.languageBinding =
                    RTI_XCDR_TYPE_BINDING_CPP_11_STL;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo *)&BigData1M_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin *type_plugin_info()
            {
                static RTIXCdrTypePlugin BigData1M_g_typePlugin =
                    {
                        NULL, /* serialize */
                        NULL, /* serialize_key */
                        NULL, /* deserialize_sample */
                        NULL, /* deserialize_key_sample */
                        NULL, /* skip */
                        NULL, /* get_serialized_sample_size */
                        NULL, /* get_serialized_sample_max_size_ex */
                        NULL, /* get_serialized_key_max_size_ex */
                        NULL, /* get_serialized_sample_min_size */
                        NULL, /* serialized_sample_to_key */
                        NULL,
                        NULL,
                        NULL,
                        NULL};

                return &BigData1M_g_typePlugin;
            }
        }; // native_type_code
#endif

        const ::dds::core::xtypes::StructType &dynamic_type<BigData1M>::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType &>(
                ::rti::core::native_conversions::cast_from_native<::dds::core::xtypes::DynamicType>(
                    *(native_type_code<BigData1M>::get())));
        }

#ifndef NDDS_STANDALONE_TYPE
        template <>
        struct native_type_code<BigData2M>
        {
            static DDS_TypeCode *get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode BigData2M_g_tc_data_sequence;

                static DDS_TypeCode_Member BigData2M_g_tc_members[1] =
                    {

                        {(char *)"data", /* Member name */
                         {
                             0,                 /* Representation ID */
                             DDS_BOOLEAN_FALSE, /* Is a pointer? */
                             -1,                /* Bitfield bits */
                             NULL               /* Member type code is assigned later */
                         },
                         0,                       /* Ignored */
                         0,                       /* Ignored */
                         0,                       /* Ignored */
                         NULL,                    /* Ignored */
                         RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                         DDS_PUBLIC_MEMBER,       /* Member visibility */
                         1,
                         NULL, /* Ignored */
                         RTICdrTypeCodeAnnotations_INITIALIZER}};

                static DDS_TypeCode BigData2M_g_tc =
                    {{
                        DDS_TK_STRUCT,          /* Kind */
                        DDS_BOOLEAN_FALSE,      /* Ignored */
                        -1,                     /*Ignored*/
                        (char *)"BigData2M",    /* Name */
                        NULL,                   /* Ignored */
                        0,                      /* Ignored */
                        0,                      /* Ignored */
                        NULL,                   /* Ignored */
                        1,                      /* Number of members */
                        BigData2M_g_tc_members, /* Members */
                        DDS_VM_NONE,            /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL,             /* _sampleAccessInfo: assigned later */
                        NULL              /* _typePlugin: assigned later */
                    }};                   /* Type code for BigData2M*/

                if (is_initialized)
                {
                    return &BigData2M_g_tc;
                }

                BigData2M_g_tc_data_sequence = initialize_sequence_typecode<::rti::core::bounded_sequence<char, 1024L * 1024L * 2L>>((1024L * 1024L * 2L));

                BigData2M_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                BigData2M_g_tc_data_sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_char;
                BigData2M_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&BigData2M_g_tc_data_sequence;

                /* Initialize the values for member annotations. */

                BigData2M_g_tc._data._sampleAccessInfo = sample_access_info();
                BigData2M_g_tc._data._typePlugin = type_plugin_info();

                is_initialized = RTI_TRUE;

                return &BigData2M_g_tc;
            }

            static RTIXCdrSampleAccessInfo *sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                BigData2M *sample;

                static RTIXCdrMemberAccessInfo BigData2M_g_memberAccessInfos[1] =
                    {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo BigData2M_g_sampleAccessInfo =
                    RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized)
                {
                    return (RTIXCdrSampleAccessInfo *)&BigData2M_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample,
                    BigData2M);
                if (sample == NULL)
                {
                    return NULL;
                }

                BigData2M_g_memberAccessInfos[0].bindingMemberValueOffset[0] =
                    (RTIXCdrUnsignedLong)((char *)&sample->data() - (char *)sample);

                BigData2M_g_sampleAccessInfo.memberAccessInfos =
                    BigData2M_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(BigData2M);

                    if (candidateTypeSize > RTIXCdrLong_MAX)
                    {
                        BigData2M_g_sampleAccessInfo.typeSize[0] =
                            RTIXCdrLong_MAX;
                    }
                    else
                    {
                        BigData2M_g_sampleAccessInfo.typeSize[0] =
                            (RTIXCdrUnsignedLong)candidateTypeSize;
                    }
                }

                BigData2M_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                    RTI_XCDR_TRUE;

                BigData2M_g_sampleAccessInfo.getMemberValuePointerFcn =
                    interpreter::get_aggregation_value_pointer<BigData2M>;

                BigData2M_g_sampleAccessInfo.languageBinding =
                    RTI_XCDR_TYPE_BINDING_CPP_11_STL;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo *)&BigData2M_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin *type_plugin_info()
            {
                static RTIXCdrTypePlugin BigData2M_g_typePlugin =
                    {
                        NULL, /* serialize */
                        NULL, /* serialize_key */
                        NULL, /* deserialize_sample */
                        NULL, /* deserialize_key_sample */
                        NULL, /* skip */
                        NULL, /* get_serialized_sample_size */
                        NULL, /* get_serialized_sample_max_size_ex */
                        NULL, /* get_serialized_key_max_size_ex */
                        NULL, /* get_serialized_sample_min_size */
                        NULL, /* serialized_sample_to_key */
                        NULL,
                        NULL,
                        NULL,
                        NULL};

                return &BigData2M_g_typePlugin;
            }
        }; // native_type_code
#endif

        const ::dds::core::xtypes::StructType &dynamic_type<BigData2M>::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType &>(
                ::rti::core::native_conversions::cast_from_native<::dds::core::xtypes::DynamicType>(
                    *(native_type_code<BigData2M>::get())));
        }

#ifndef NDDS_STANDALONE_TYPE
        template <>
        struct native_type_code<BigData4M>
        {
            static DDS_TypeCode *get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode BigData4M_g_tc_data_sequence;

                static DDS_TypeCode_Member BigData4M_g_tc_members[1] =
                    {

                        {(char *)"data", /* Member name */
                         {
                             0,                 /* Representation ID */
                             DDS_BOOLEAN_FALSE, /* Is a pointer? */
                             -1,                /* Bitfield bits */
                             NULL               /* Member type code is assigned later */
                         },
                         0,                       /* Ignored */
                         0,                       /* Ignored */
                         0,                       /* Ignored */
                         NULL,                    /* Ignored */
                         RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                         DDS_PUBLIC_MEMBER,       /* Member visibility */
                         1,
                         NULL, /* Ignored */
                         RTICdrTypeCodeAnnotations_INITIALIZER}};

                static DDS_TypeCode BigData4M_g_tc =
                    {{
                        DDS_TK_STRUCT,          /* Kind */
                        DDS_BOOLEAN_FALSE,      /* Ignored */
                        -1,                     /*Ignored*/
                        (char *)"BigData4M",    /* Name */
                        NULL,                   /* Ignored */
                        0,                      /* Ignored */
                        0,                      /* Ignored */
                        NULL,                   /* Ignored */
                        1,                      /* Number of members */
                        BigData4M_g_tc_members, /* Members */
                        DDS_VM_NONE,            /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL,             /* _sampleAccessInfo: assigned later */
                        NULL              /* _typePlugin: assigned later */
                    }};                   /* Type code for BigData4M*/

                if (is_initialized)
                {
                    return &BigData4M_g_tc;
                }

                BigData4M_g_tc_data_sequence = initialize_sequence_typecode<::rti::core::bounded_sequence<char, 1024L * 1024L * 4L>>((1024L * 1024L * 4L));

                BigData4M_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                BigData4M_g_tc_data_sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_char;
                BigData4M_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&BigData4M_g_tc_data_sequence;

                /* Initialize the values for member annotations. */

                BigData4M_g_tc._data._sampleAccessInfo = sample_access_info();
                BigData4M_g_tc._data._typePlugin = type_plugin_info();

                is_initialized = RTI_TRUE;

                return &BigData4M_g_tc;
            }

            static RTIXCdrSampleAccessInfo *sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                BigData4M *sample;

                static RTIXCdrMemberAccessInfo BigData4M_g_memberAccessInfos[1] =
                    {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo BigData4M_g_sampleAccessInfo =
                    RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized)
                {
                    return (RTIXCdrSampleAccessInfo *)&BigData4M_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample,
                    BigData4M);
                if (sample == NULL)
                {
                    return NULL;
                }

                BigData4M_g_memberAccessInfos[0].bindingMemberValueOffset[0] =
                    (RTIXCdrUnsignedLong)((char *)&sample->data() - (char *)sample);

                BigData4M_g_sampleAccessInfo.memberAccessInfos =
                    BigData4M_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(BigData4M);

                    if (candidateTypeSize > RTIXCdrLong_MAX)
                    {
                        BigData4M_g_sampleAccessInfo.typeSize[0] =
                            RTIXCdrLong_MAX;
                    }
                    else
                    {
                        BigData4M_g_sampleAccessInfo.typeSize[0] =
                            (RTIXCdrUnsignedLong)candidateTypeSize;
                    }
                }

                BigData4M_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                    RTI_XCDR_TRUE;

                BigData4M_g_sampleAccessInfo.getMemberValuePointerFcn =
                    interpreter::get_aggregation_value_pointer<BigData4M>;

                BigData4M_g_sampleAccessInfo.languageBinding =
                    RTI_XCDR_TYPE_BINDING_CPP_11_STL;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo *)&BigData4M_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin *type_plugin_info()
            {
                static RTIXCdrTypePlugin BigData4M_g_typePlugin =
                    {
                        NULL, /* serialize */
                        NULL, /* serialize_key */
                        NULL, /* deserialize_sample */
                        NULL, /* deserialize_key_sample */
                        NULL, /* skip */
                        NULL, /* get_serialized_sample_size */
                        NULL, /* get_serialized_sample_max_size_ex */
                        NULL, /* get_serialized_key_max_size_ex */
                        NULL, /* get_serialized_sample_min_size */
                        NULL, /* serialized_sample_to_key */
                        NULL,
                        NULL,
                        NULL,
                        NULL};

                return &BigData4M_g_typePlugin;
            }
        }; // native_type_code
#endif

        const ::dds::core::xtypes::StructType &dynamic_type<BigData4M>::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType &>(
                ::rti::core::native_conversions::cast_from_native<::dds::core::xtypes::DynamicType>(
                    *(native_type_code<BigData4M>::get())));
        }

#ifndef NDDS_STANDALONE_TYPE
        template <>
        struct native_type_code<BigData8M>
        {
            static DDS_TypeCode *get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode BigData8M_g_tc_data_sequence;

                static DDS_TypeCode_Member BigData8M_g_tc_members[1] =
                    {

                        {(char *)"data", /* Member name */
                         {
                             0,                 /* Representation ID */
                             DDS_BOOLEAN_FALSE, /* Is a pointer? */
                             -1,                /* Bitfield bits */
                             NULL               /* Member type code is assigned later */
                         },
                         0,                       /* Ignored */
                         0,                       /* Ignored */
                         0,                       /* Ignored */
                         NULL,                    /* Ignored */
                         RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                         DDS_PUBLIC_MEMBER,       /* Member visibility */
                         1,
                         NULL, /* Ignored */
                         RTICdrTypeCodeAnnotations_INITIALIZER}};

                static DDS_TypeCode BigData8M_g_tc =
                    {{
                        DDS_TK_STRUCT,          /* Kind */
                        DDS_BOOLEAN_FALSE,      /* Ignored */
                        -1,                     /*Ignored*/
                        (char *)"BigData8M",    /* Name */
                        NULL,                   /* Ignored */
                        0,                      /* Ignored */
                        0,                      /* Ignored */
                        NULL,                   /* Ignored */
                        1,                      /* Number of members */
                        BigData8M_g_tc_members, /* Members */
                        DDS_VM_NONE,            /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL,             /* _sampleAccessInfo: assigned later */
                        NULL              /* _typePlugin: assigned later */
                    }};                   /* Type code for BigData8M*/

                if (is_initialized)
                {
                    return &BigData8M_g_tc;
                }

                BigData8M_g_tc_data_sequence = initialize_sequence_typecode<::rti::core::bounded_sequence<char, 1024L * 1024L * 8L>>((1024L * 1024L * 8L));

                BigData8M_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                BigData8M_g_tc_data_sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_char;
                BigData8M_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&BigData8M_g_tc_data_sequence;

                /* Initialize the values for member annotations. */

                BigData8M_g_tc._data._sampleAccessInfo = sample_access_info();
                BigData8M_g_tc._data._typePlugin = type_plugin_info();

                is_initialized = RTI_TRUE;

                return &BigData8M_g_tc;
            }

            static RTIXCdrSampleAccessInfo *sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                BigData8M *sample;

                static RTIXCdrMemberAccessInfo BigData8M_g_memberAccessInfos[1] =
                    {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo BigData8M_g_sampleAccessInfo =
                    RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized)
                {
                    return (RTIXCdrSampleAccessInfo *)&BigData8M_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample,
                    BigData8M);
                if (sample == NULL)
                {
                    return NULL;
                }

                BigData8M_g_memberAccessInfos[0].bindingMemberValueOffset[0] =
                    (RTIXCdrUnsignedLong)((char *)&sample->data() - (char *)sample);

                BigData8M_g_sampleAccessInfo.memberAccessInfos =
                    BigData8M_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(BigData8M);

                    if (candidateTypeSize > RTIXCdrLong_MAX)
                    {
                        BigData8M_g_sampleAccessInfo.typeSize[0] =
                            RTIXCdrLong_MAX;
                    }
                    else
                    {
                        BigData8M_g_sampleAccessInfo.typeSize[0] =
                            (RTIXCdrUnsignedLong)candidateTypeSize;
                    }
                }

                BigData8M_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                    RTI_XCDR_TRUE;

                BigData8M_g_sampleAccessInfo.getMemberValuePointerFcn =
                    interpreter::get_aggregation_value_pointer<BigData8M>;

                BigData8M_g_sampleAccessInfo.languageBinding =
                    RTI_XCDR_TYPE_BINDING_CPP_11_STL;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo *)&BigData8M_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin *type_plugin_info()
            {
                static RTIXCdrTypePlugin BigData8M_g_typePlugin =
                    {
                        NULL, /* serialize */
                        NULL, /* serialize_key */
                        NULL, /* deserialize_sample */
                        NULL, /* deserialize_key_sample */
                        NULL, /* skip */
                        NULL, /* get_serialized_sample_size */
                        NULL, /* get_serialized_sample_max_size_ex */
                        NULL, /* get_serialized_key_max_size_ex */
                        NULL, /* get_serialized_sample_min_size */
                        NULL, /* serialized_sample_to_key */
                        NULL,
                        NULL,
                        NULL,
                        NULL};

                return &BigData8M_g_typePlugin;
            }
        }; // native_type_code
#endif

        const ::dds::core::xtypes::StructType &dynamic_type<BigData8M>::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType &>(
                ::rti::core::native_conversions::cast_from_native<::dds::core::xtypes::DynamicType>(
                    *(native_type_code<BigData8M>::get())));
        }

#ifndef NDDS_STANDALONE_TYPE
        template <>
        struct native_type_code<BigData12M>
        {
            static DDS_TypeCode *get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode BigData12M_g_tc_data_sequence;

                static DDS_TypeCode_Member BigData12M_g_tc_members[1] =
                    {

                        {(char *)"data", /* Member name */
                         {
                             0,                 /* Representation ID */
                             DDS_BOOLEAN_FALSE, /* Is a pointer? */
                             -1,                /* Bitfield bits */
                             NULL               /* Member type code is assigned later */
                         },
                         0,                       /* Ignored */
                         0,                       /* Ignored */
                         0,                       /* Ignored */
                         NULL,                    /* Ignored */
                         RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                         DDS_PUBLIC_MEMBER,       /* Member visibility */
                         1,
                         NULL, /* Ignored */
                         RTICdrTypeCodeAnnotations_INITIALIZER}};

                static DDS_TypeCode BigData12M_g_tc =
                    {{
                        DDS_TK_STRUCT,           /* Kind */
                        DDS_BOOLEAN_FALSE,       /* Ignored */
                        -1,                      /*Ignored*/
                        (char *)"BigData12M",    /* Name */
                        NULL,                    /* Ignored */
                        0,                       /* Ignored */
                        0,                       /* Ignored */
                        NULL,                    /* Ignored */
                        1,                       /* Number of members */
                        BigData12M_g_tc_members, /* Members */
                        DDS_VM_NONE,             /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL,             /* _sampleAccessInfo: assigned later */
                        NULL              /* _typePlugin: assigned later */
                    }};                   /* Type code for BigData12M*/

                if (is_initialized)
                {
                    return &BigData12M_g_tc;
                }

                BigData12M_g_tc_data_sequence = initialize_sequence_typecode<::rti::core::bounded_sequence<char, 1024L * 1024L * 12L>>((1024L * 1024L * 12L));

                BigData12M_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                BigData12M_g_tc_data_sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_char;
                BigData12M_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&BigData12M_g_tc_data_sequence;

                /* Initialize the values for member annotations. */

                BigData12M_g_tc._data._sampleAccessInfo = sample_access_info();
                BigData12M_g_tc._data._typePlugin = type_plugin_info();

                is_initialized = RTI_TRUE;

                return &BigData12M_g_tc;
            }

            static RTIXCdrSampleAccessInfo *sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                BigData12M *sample;

                static RTIXCdrMemberAccessInfo BigData12M_g_memberAccessInfos[1] =
                    {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo BigData12M_g_sampleAccessInfo =
                    RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized)
                {
                    return (RTIXCdrSampleAccessInfo *)&BigData12M_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample,
                    BigData12M);
                if (sample == NULL)
                {
                    return NULL;
                }

                BigData12M_g_memberAccessInfos[0].bindingMemberValueOffset[0] =
                    (RTIXCdrUnsignedLong)((char *)&sample->data() - (char *)sample);

                BigData12M_g_sampleAccessInfo.memberAccessInfos =
                    BigData12M_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(BigData12M);

                    if (candidateTypeSize > RTIXCdrLong_MAX)
                    {
                        BigData12M_g_sampleAccessInfo.typeSize[0] =
                            RTIXCdrLong_MAX;
                    }
                    else
                    {
                        BigData12M_g_sampleAccessInfo.typeSize[0] =
                            (RTIXCdrUnsignedLong)candidateTypeSize;
                    }
                }

                BigData12M_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                    RTI_XCDR_TRUE;

                BigData12M_g_sampleAccessInfo.getMemberValuePointerFcn =
                    interpreter::get_aggregation_value_pointer<BigData12M>;

                BigData12M_g_sampleAccessInfo.languageBinding =
                    RTI_XCDR_TYPE_BINDING_CPP_11_STL;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo *)&BigData12M_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin *type_plugin_info()
            {
                static RTIXCdrTypePlugin BigData12M_g_typePlugin =
                    {
                        NULL, /* serialize */
                        NULL, /* serialize_key */
                        NULL, /* deserialize_sample */
                        NULL, /* deserialize_key_sample */
                        NULL, /* skip */
                        NULL, /* get_serialized_sample_size */
                        NULL, /* get_serialized_sample_max_size_ex */
                        NULL, /* get_serialized_key_max_size_ex */
                        NULL, /* get_serialized_sample_min_size */
                        NULL, /* serialized_sample_to_key */
                        NULL,
                        NULL,
                        NULL,
                        NULL};

                return &BigData12M_g_typePlugin;
            }
        }; // native_type_code
#endif

        const ::dds::core::xtypes::StructType &dynamic_type<BigData12M>::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType &>(
                ::rti::core::native_conversions::cast_from_native<::dds::core::xtypes::DynamicType>(
                    *(native_type_code<BigData12M>::get())));
        }

#ifndef NDDS_STANDALONE_TYPE
        template <>
        struct native_type_code<BigData20M>
        {
            static DDS_TypeCode *get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode BigData20M_g_tc_data_sequence;

                static DDS_TypeCode_Member BigData20M_g_tc_members[1] =
                    {

                        {(char *)"data", /* Member name */
                         {
                             0,                 /* Representation ID */
                             DDS_BOOLEAN_FALSE, /* Is a pointer? */
                             -1,                /* Bitfield bits */
                             NULL               /* Member type code is assigned later */
                         },
                         0,                       /* Ignored */
                         0,                       /* Ignored */
                         0,                       /* Ignored */
                         NULL,                    /* Ignored */
                         RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                         DDS_PUBLIC_MEMBER,       /* Member visibility */
                         1,
                         NULL, /* Ignored */
                         RTICdrTypeCodeAnnotations_INITIALIZER}};

                static DDS_TypeCode BigData20M_g_tc =
                    {{
                        DDS_TK_STRUCT,           /* Kind */
                        DDS_BOOLEAN_FALSE,       /* Ignored */
                        -1,                      /*Ignored*/
                        (char *)"BigData20M",    /* Name */
                        NULL,                    /* Ignored */
                        0,                       /* Ignored */
                        0,                       /* Ignored */
                        NULL,                    /* Ignored */
                        1,                       /* Number of members */
                        BigData20M_g_tc_members, /* Members */
                        DDS_VM_NONE,             /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL,             /* _sampleAccessInfo: assigned later */
                        NULL              /* _typePlugin: assigned later */
                    }};                   /* Type code for BigData20M*/

                if (is_initialized)
                {
                    return &BigData20M_g_tc;
                }

                BigData20M_g_tc_data_sequence = initialize_sequence_typecode<::rti::core::bounded_sequence<char, 1024L * 1024L * 20L>>((1024L * 1024L * 20L));

                BigData20M_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                BigData20M_g_tc_data_sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_char;
                BigData20M_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&BigData20M_g_tc_data_sequence;

                /* Initialize the values for member annotations. */

                BigData20M_g_tc._data._sampleAccessInfo = sample_access_info();
                BigData20M_g_tc._data._typePlugin = type_plugin_info();

                is_initialized = RTI_TRUE;

                return &BigData20M_g_tc;
            }

            static RTIXCdrSampleAccessInfo *sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                BigData20M *sample;

                static RTIXCdrMemberAccessInfo BigData20M_g_memberAccessInfos[1] =
                    {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo BigData20M_g_sampleAccessInfo =
                    RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized)
                {
                    return (RTIXCdrSampleAccessInfo *)&BigData20M_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample,
                    BigData20M);
                if (sample == NULL)
                {
                    return NULL;
                }

                BigData20M_g_memberAccessInfos[0].bindingMemberValueOffset[0] =
                    (RTIXCdrUnsignedLong)((char *)&sample->data() - (char *)sample);

                BigData20M_g_sampleAccessInfo.memberAccessInfos =
                    BigData20M_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(BigData20M);

                    if (candidateTypeSize > RTIXCdrLong_MAX)
                    {
                        BigData20M_g_sampleAccessInfo.typeSize[0] =
                            RTIXCdrLong_MAX;
                    }
                    else
                    {
                        BigData20M_g_sampleAccessInfo.typeSize[0] =
                            (RTIXCdrUnsignedLong)candidateTypeSize;
                    }
                }

                BigData20M_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                    RTI_XCDR_TRUE;

                BigData20M_g_sampleAccessInfo.getMemberValuePointerFcn =
                    interpreter::get_aggregation_value_pointer<BigData20M>;

                BigData20M_g_sampleAccessInfo.languageBinding =
                    RTI_XCDR_TYPE_BINDING_CPP_11_STL;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo *)&BigData20M_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin *type_plugin_info()
            {
                static RTIXCdrTypePlugin BigData20M_g_typePlugin =
                    {
                        NULL, /* serialize */
                        NULL, /* serialize_key */
                        NULL, /* deserialize_sample */
                        NULL, /* deserialize_key_sample */
                        NULL, /* skip */
                        NULL, /* get_serialized_sample_size */
                        NULL, /* get_serialized_sample_max_size_ex */
                        NULL, /* get_serialized_key_max_size_ex */
                        NULL, /* get_serialized_sample_min_size */
                        NULL, /* serialized_sample_to_key */
                        NULL,
                        NULL,
                        NULL,
                        NULL};

                return &BigData20M_g_typePlugin;
            }
        }; // native_type_code
#endif

        const ::dds::core::xtypes::StructType &dynamic_type<BigData20M>::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType &>(
                ::rti::core::native_conversions::cast_from_native<::dds::core::xtypes::DynamicType>(
                    *(native_type_code<BigData20M>::get())));
        }

#ifndef NDDS_STANDALONE_TYPE
        template <>
        struct native_type_code<BigData30M>
        {
            static DDS_TypeCode *get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode BigData30M_g_tc_data_sequence;

                static DDS_TypeCode_Member BigData30M_g_tc_members[1] =
                    {

                        {(char *)"data", /* Member name */
                         {
                             0,                 /* Representation ID */
                             DDS_BOOLEAN_FALSE, /* Is a pointer? */
                             -1,                /* Bitfield bits */
                             NULL               /* Member type code is assigned later */
                         },
                         0,                       /* Ignored */
                         0,                       /* Ignored */
                         0,                       /* Ignored */
                         NULL,                    /* Ignored */
                         RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                         DDS_PUBLIC_MEMBER,       /* Member visibility */
                         1,
                         NULL, /* Ignored */
                         RTICdrTypeCodeAnnotations_INITIALIZER}};

                static DDS_TypeCode BigData30M_g_tc =
                    {{
                        DDS_TK_STRUCT,           /* Kind */
                        DDS_BOOLEAN_FALSE,       /* Ignored */
                        -1,                      /*Ignored*/
                        (char *)"BigData30M",    /* Name */
                        NULL,                    /* Ignored */
                        0,                       /* Ignored */
                        0,                       /* Ignored */
                        NULL,                    /* Ignored */
                        1,                       /* Number of members */
                        BigData30M_g_tc_members, /* Members */
                        DDS_VM_NONE,             /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL,             /* _sampleAccessInfo: assigned later */
                        NULL              /* _typePlugin: assigned later */
                    }};                   /* Type code for BigData30M*/

                if (is_initialized)
                {
                    return &BigData30M_g_tc;
                }

                BigData30M_g_tc_data_sequence = initialize_sequence_typecode<::rti::core::bounded_sequence<char, 1024L * 1024L * 30L>>((1024L * 1024L * 30L));

                BigData30M_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                BigData30M_g_tc_data_sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_char;
                BigData30M_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&BigData30M_g_tc_data_sequence;

                /* Initialize the values for member annotations. */

                BigData30M_g_tc._data._sampleAccessInfo = sample_access_info();
                BigData30M_g_tc._data._typePlugin = type_plugin_info();

                is_initialized = RTI_TRUE;

                return &BigData30M_g_tc;
            }

            static RTIXCdrSampleAccessInfo *sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                BigData30M *sample;

                static RTIXCdrMemberAccessInfo BigData30M_g_memberAccessInfos[1] =
                    {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo BigData30M_g_sampleAccessInfo =
                    RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized)
                {
                    return (RTIXCdrSampleAccessInfo *)&BigData30M_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample,
                    BigData30M);
                if (sample == NULL)
                {
                    return NULL;
                }

                BigData30M_g_memberAccessInfos[0].bindingMemberValueOffset[0] =
                    (RTIXCdrUnsignedLong)((char *)&sample->data() - (char *)sample);

                BigData30M_g_sampleAccessInfo.memberAccessInfos =
                    BigData30M_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(BigData30M);

                    if (candidateTypeSize > RTIXCdrLong_MAX)
                    {
                        BigData30M_g_sampleAccessInfo.typeSize[0] =
                            RTIXCdrLong_MAX;
                    }
                    else
                    {
                        BigData30M_g_sampleAccessInfo.typeSize[0] =
                            (RTIXCdrUnsignedLong)candidateTypeSize;
                    }
                }

                BigData30M_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                    RTI_XCDR_TRUE;

                BigData30M_g_sampleAccessInfo.getMemberValuePointerFcn =
                    interpreter::get_aggregation_value_pointer<BigData30M>;

                BigData30M_g_sampleAccessInfo.languageBinding =
                    RTI_XCDR_TYPE_BINDING_CPP_11_STL;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo *)&BigData30M_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin *type_plugin_info()
            {
                static RTIXCdrTypePlugin BigData30M_g_typePlugin =
                    {
                        NULL, /* serialize */
                        NULL, /* serialize_key */
                        NULL, /* deserialize_sample */
                        NULL, /* deserialize_key_sample */
                        NULL, /* skip */
                        NULL, /* get_serialized_sample_size */
                        NULL, /* get_serialized_sample_max_size_ex */
                        NULL, /* get_serialized_key_max_size_ex */
                        NULL, /* get_serialized_sample_min_size */
                        NULL, /* serialized_sample_to_key */
                        NULL,
                        NULL,
                        NULL,
                        NULL};

                return &BigData30M_g_typePlugin;
            }
        }; // native_type_code
#endif

        const ::dds::core::xtypes::StructType &dynamic_type<BigData30M>::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType &>(
                ::rti::core::native_conversions::cast_from_native<::dds::core::xtypes::DynamicType>(
                    *(native_type_code<BigData30M>::get())));
        }

#ifndef NDDS_STANDALONE_TYPE
        template <>
        struct native_type_code<BigData40M>
        {
            static DDS_TypeCode *get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode BigData40M_g_tc_data_sequence;

                static DDS_TypeCode_Member BigData40M_g_tc_members[1] =
                    {

                        {(char *)"data", /* Member name */
                         {
                             0,                 /* Representation ID */
                             DDS_BOOLEAN_FALSE, /* Is a pointer? */
                             -1,                /* Bitfield bits */
                             NULL               /* Member type code is assigned later */
                         },
                         0,                       /* Ignored */
                         0,                       /* Ignored */
                         0,                       /* Ignored */
                         NULL,                    /* Ignored */
                         RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                         DDS_PUBLIC_MEMBER,       /* Member visibility */
                         1,
                         NULL, /* Ignored */
                         RTICdrTypeCodeAnnotations_INITIALIZER}};

                static DDS_TypeCode BigData40M_g_tc =
                    {{
                        DDS_TK_STRUCT,           /* Kind */
                        DDS_BOOLEAN_FALSE,       /* Ignored */
                        -1,                      /*Ignored*/
                        (char *)"BigData40M",    /* Name */
                        NULL,                    /* Ignored */
                        0,                       /* Ignored */
                        0,                       /* Ignored */
                        NULL,                    /* Ignored */
                        1,                       /* Number of members */
                        BigData40M_g_tc_members, /* Members */
                        DDS_VM_NONE,             /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL,             /* _sampleAccessInfo: assigned later */
                        NULL              /* _typePlugin: assigned later */
                    }};                   /* Type code for BigData40M*/

                if (is_initialized)
                {
                    return &BigData40M_g_tc;
                }

                BigData40M_g_tc_data_sequence = initialize_sequence_typecode<::rti::core::bounded_sequence<char, 1024L * 1024L * 40L>>((1024L * 1024L * 40L));

                BigData40M_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                BigData40M_g_tc_data_sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_char;
                BigData40M_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&BigData40M_g_tc_data_sequence;

                /* Initialize the values for member annotations. */

                BigData40M_g_tc._data._sampleAccessInfo = sample_access_info();
                BigData40M_g_tc._data._typePlugin = type_plugin_info();

                is_initialized = RTI_TRUE;

                return &BigData40M_g_tc;
            }

            static RTIXCdrSampleAccessInfo *sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                BigData40M *sample;

                static RTIXCdrMemberAccessInfo BigData40M_g_memberAccessInfos[1] =
                    {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo BigData40M_g_sampleAccessInfo =
                    RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized)
                {
                    return (RTIXCdrSampleAccessInfo *)&BigData40M_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample,
                    BigData40M);
                if (sample == NULL)
                {
                    return NULL;
                }

                BigData40M_g_memberAccessInfos[0].bindingMemberValueOffset[0] =
                    (RTIXCdrUnsignedLong)((char *)&sample->data() - (char *)sample);

                BigData40M_g_sampleAccessInfo.memberAccessInfos =
                    BigData40M_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(BigData40M);

                    if (candidateTypeSize > RTIXCdrLong_MAX)
                    {
                        BigData40M_g_sampleAccessInfo.typeSize[0] =
                            RTIXCdrLong_MAX;
                    }
                    else
                    {
                        BigData40M_g_sampleAccessInfo.typeSize[0] =
                            (RTIXCdrUnsignedLong)candidateTypeSize;
                    }
                }

                BigData40M_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                    RTI_XCDR_TRUE;

                BigData40M_g_sampleAccessInfo.getMemberValuePointerFcn =
                    interpreter::get_aggregation_value_pointer<BigData40M>;

                BigData40M_g_sampleAccessInfo.languageBinding =
                    RTI_XCDR_TYPE_BINDING_CPP_11_STL;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo *)&BigData40M_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin *type_plugin_info()
            {
                static RTIXCdrTypePlugin BigData40M_g_typePlugin =
                    {
                        NULL, /* serialize */
                        NULL, /* serialize_key */
                        NULL, /* deserialize_sample */
                        NULL, /* deserialize_key_sample */
                        NULL, /* skip */
                        NULL, /* get_serialized_sample_size */
                        NULL, /* get_serialized_sample_max_size_ex */
                        NULL, /* get_serialized_key_max_size_ex */
                        NULL, /* get_serialized_sample_min_size */
                        NULL, /* serialized_sample_to_key */
                        NULL,
                        NULL,
                        NULL,
                        NULL};

                return &BigData40M_g_typePlugin;
            }
        }; // native_type_code
#endif

        const ::dds::core::xtypes::StructType &dynamic_type<BigData40M>::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType &>(
                ::rti::core::native_conversions::cast_from_native<::dds::core::xtypes::DynamicType>(
                    *(native_type_code<BigData40M>::get())));
        }

#ifndef NDDS_STANDALONE_TYPE
        template <>
        struct native_type_code<BigData50M>
        {
            static DDS_TypeCode *get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode BigData50M_g_tc_data_sequence;

                static DDS_TypeCode_Member BigData50M_g_tc_members[1] =
                    {

                        {(char *)"data", /* Member name */
                         {
                             0,                 /* Representation ID */
                             DDS_BOOLEAN_FALSE, /* Is a pointer? */
                             -1,                /* Bitfield bits */
                             NULL               /* Member type code is assigned later */
                         },
                         0,                       /* Ignored */
                         0,                       /* Ignored */
                         0,                       /* Ignored */
                         NULL,                    /* Ignored */
                         RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                         DDS_PUBLIC_MEMBER,       /* Member visibility */
                         1,
                         NULL, /* Ignored */
                         RTICdrTypeCodeAnnotations_INITIALIZER}};

                static DDS_TypeCode BigData50M_g_tc =
                    {{
                        DDS_TK_STRUCT,           /* Kind */
                        DDS_BOOLEAN_FALSE,       /* Ignored */
                        -1,                      /*Ignored*/
                        (char *)"BigData50M",    /* Name */
                        NULL,                    /* Ignored */
                        0,                       /* Ignored */
                        0,                       /* Ignored */
                        NULL,                    /* Ignored */
                        1,                       /* Number of members */
                        BigData50M_g_tc_members, /* Members */
                        DDS_VM_NONE,             /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL,             /* _sampleAccessInfo: assigned later */
                        NULL              /* _typePlugin: assigned later */
                    }};                   /* Type code for BigData50M*/

                if (is_initialized)
                {
                    return &BigData50M_g_tc;
                }

                BigData50M_g_tc_data_sequence = initialize_sequence_typecode<::rti::core::bounded_sequence<char, 1024L * 1024L * 50L>>((1024L * 1024L * 50L));

                BigData50M_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                BigData50M_g_tc_data_sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_char;
                BigData50M_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&BigData50M_g_tc_data_sequence;

                /* Initialize the values for member annotations. */

                BigData50M_g_tc._data._sampleAccessInfo = sample_access_info();
                BigData50M_g_tc._data._typePlugin = type_plugin_info();

                is_initialized = RTI_TRUE;

                return &BigData50M_g_tc;
            }

            static RTIXCdrSampleAccessInfo *sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                BigData50M *sample;

                static RTIXCdrMemberAccessInfo BigData50M_g_memberAccessInfos[1] =
                    {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo BigData50M_g_sampleAccessInfo =
                    RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized)
                {
                    return (RTIXCdrSampleAccessInfo *)&BigData50M_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample,
                    BigData50M);
                if (sample == NULL)
                {
                    return NULL;
                }

                BigData50M_g_memberAccessInfos[0].bindingMemberValueOffset[0] =
                    (RTIXCdrUnsignedLong)((char *)&sample->data() - (char *)sample);

                BigData50M_g_sampleAccessInfo.memberAccessInfos =
                    BigData50M_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(BigData50M);

                    if (candidateTypeSize > RTIXCdrLong_MAX)
                    {
                        BigData50M_g_sampleAccessInfo.typeSize[0] =
                            RTIXCdrLong_MAX;
                    }
                    else
                    {
                        BigData50M_g_sampleAccessInfo.typeSize[0] =
                            (RTIXCdrUnsignedLong)candidateTypeSize;
                    }
                }

                BigData50M_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                    RTI_XCDR_TRUE;

                BigData50M_g_sampleAccessInfo.getMemberValuePointerFcn =
                    interpreter::get_aggregation_value_pointer<BigData50M>;

                BigData50M_g_sampleAccessInfo.languageBinding =
                    RTI_XCDR_TYPE_BINDING_CPP_11_STL;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo *)&BigData50M_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin *type_plugin_info()
            {
                static RTIXCdrTypePlugin BigData50M_g_typePlugin =
                    {
                        NULL, /* serialize */
                        NULL, /* serialize_key */
                        NULL, /* deserialize_sample */
                        NULL, /* deserialize_key_sample */
                        NULL, /* skip */
                        NULL, /* get_serialized_sample_size */
                        NULL, /* get_serialized_sample_max_size_ex */
                        NULL, /* get_serialized_key_max_size_ex */
                        NULL, /* get_serialized_sample_min_size */
                        NULL, /* serialized_sample_to_key */
                        NULL,
                        NULL,
                        NULL,
                        NULL};

                return &BigData50M_g_typePlugin;
            }
        }; // native_type_code
#endif

        const ::dds::core::xtypes::StructType &dynamic_type<BigData50M>::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType &>(
                ::rti::core::native_conversions::cast_from_native<::dds::core::xtypes::DynamicType>(
                    *(native_type_code<BigData50M>::get())));
        }

#ifndef NDDS_STANDALONE_TYPE
        template <>
        struct native_type_code<BigData60M>
        {
            static DDS_TypeCode *get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode BigData60M_g_tc_data_sequence;

                static DDS_TypeCode_Member BigData60M_g_tc_members[1] =
                    {

                        {(char *)"data", /* Member name */
                         {
                             0,                 /* Representation ID */
                             DDS_BOOLEAN_FALSE, /* Is a pointer? */
                             -1,                /* Bitfield bits */
                             NULL               /* Member type code is assigned later */
                         },
                         0,                       /* Ignored */
                         0,                       /* Ignored */
                         0,                       /* Ignored */
                         NULL,                    /* Ignored */
                         RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                         DDS_PUBLIC_MEMBER,       /* Member visibility */
                         1,
                         NULL, /* Ignored */
                         RTICdrTypeCodeAnnotations_INITIALIZER}};

                static DDS_TypeCode BigData60M_g_tc =
                    {{
                        DDS_TK_STRUCT,           /* Kind */
                        DDS_BOOLEAN_FALSE,       /* Ignored */
                        -1,                      /*Ignored*/
                        (char *)"BigData60M",    /* Name */
                        NULL,                    /* Ignored */
                        0,                       /* Ignored */
                        0,                       /* Ignored */
                        NULL,                    /* Ignored */
                        1,                       /* Number of members */
                        BigData60M_g_tc_members, /* Members */
                        DDS_VM_NONE,             /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL,             /* _sampleAccessInfo: assigned later */
                        NULL              /* _typePlugin: assigned later */
                    }};                   /* Type code for BigData60M*/

                if (is_initialized)
                {
                    return &BigData60M_g_tc;
                }

                BigData60M_g_tc_data_sequence = initialize_sequence_typecode<::rti::core::bounded_sequence<char, 1024L * 1024L * 60L>>((1024L * 1024L * 60L));

                BigData60M_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                BigData60M_g_tc_data_sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_char;
                BigData60M_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&BigData60M_g_tc_data_sequence;

                /* Initialize the values for member annotations. */

                BigData60M_g_tc._data._sampleAccessInfo = sample_access_info();
                BigData60M_g_tc._data._typePlugin = type_plugin_info();

                is_initialized = RTI_TRUE;

                return &BigData60M_g_tc;
            }

            static RTIXCdrSampleAccessInfo *sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                BigData60M *sample;

                static RTIXCdrMemberAccessInfo BigData60M_g_memberAccessInfos[1] =
                    {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo BigData60M_g_sampleAccessInfo =
                    RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized)
                {
                    return (RTIXCdrSampleAccessInfo *)&BigData60M_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample,
                    BigData60M);
                if (sample == NULL)
                {
                    return NULL;
                }

                BigData60M_g_memberAccessInfos[0].bindingMemberValueOffset[0] =
                    (RTIXCdrUnsignedLong)((char *)&sample->data() - (char *)sample);

                BigData60M_g_sampleAccessInfo.memberAccessInfos =
                    BigData60M_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(BigData60M);

                    if (candidateTypeSize > RTIXCdrLong_MAX)
                    {
                        BigData60M_g_sampleAccessInfo.typeSize[0] =
                            RTIXCdrLong_MAX;
                    }
                    else
                    {
                        BigData60M_g_sampleAccessInfo.typeSize[0] =
                            (RTIXCdrUnsignedLong)candidateTypeSize;
                    }
                }

                BigData60M_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                    RTI_XCDR_TRUE;

                BigData60M_g_sampleAccessInfo.getMemberValuePointerFcn =
                    interpreter::get_aggregation_value_pointer<BigData60M>;

                BigData60M_g_sampleAccessInfo.languageBinding =
                    RTI_XCDR_TYPE_BINDING_CPP_11_STL;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo *)&BigData60M_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin *type_plugin_info()
            {
                static RTIXCdrTypePlugin BigData60M_g_typePlugin =
                    {
                        NULL, /* serialize */
                        NULL, /* serialize_key */
                        NULL, /* deserialize_sample */
                        NULL, /* deserialize_key_sample */
                        NULL, /* skip */
                        NULL, /* get_serialized_sample_size */
                        NULL, /* get_serialized_sample_max_size_ex */
                        NULL, /* get_serialized_key_max_size_ex */
                        NULL, /* get_serialized_sample_min_size */
                        NULL, /* serialized_sample_to_key */
                        NULL,
                        NULL,
                        NULL,
                        NULL};

                return &BigData60M_g_typePlugin;
            }
        }; // native_type_code
#endif

        const ::dds::core::xtypes::StructType &dynamic_type<BigData60M>::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType &>(
                ::rti::core::native_conversions::cast_from_native<::dds::core::xtypes::DynamicType>(
                    *(native_type_code<BigData60M>::get())));
        }

    }
}

namespace dds
{
    namespace topic
    {
        void topic_type_support<Data4B>::register_type(
            ::dds::domain::DomainParticipant &participant,
            const std::string &type_name)
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                Data4BPlugin_new,
                Data4BPlugin_delete);
        }

        std::vector<char> &topic_type_support<Data4B>::to_cdr_buffer(
            std::vector<char> &buffer,
            const Data4B &sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = Data4BPlugin_serialize_to_cdr_buffer(
                NULL,
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = Data4BPlugin_serialize_to_cdr_buffer(
                &buffer[0],
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support<Data4B>::from_cdr_buffer(Data4B &sample,
                                                         const std::vector<char> &buffer)
        {

            RTIBool ok = Data4BPlugin_deserialize_from_cdr_buffer(
                &sample,
                &buffer[0],
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                                           "Failed to create Data4B from cdr buffer");
        }

        void topic_type_support<Data4B>::reset_sample(Data4B &sample)
        {
            sample.data(0);
        }

        void topic_type_support<Data4B>::allocate_sample(Data4B &sample, int, int)
        {
            RTIOsapiUtility_unusedParameter(sample);
        }

        void topic_type_support<BigData20B>::register_type(
            ::dds::domain::DomainParticipant &participant,
            const std::string &type_name)
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                BigData20BPlugin_new,
                BigData20BPlugin_delete);
        }

        std::vector<char> &topic_type_support<BigData20B>::to_cdr_buffer(
            std::vector<char> &buffer,
            const BigData20B &sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = BigData20BPlugin_serialize_to_cdr_buffer(
                NULL,
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = BigData20BPlugin_serialize_to_cdr_buffer(
                &buffer[0],
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support<BigData20B>::from_cdr_buffer(BigData20B &sample,
                                                             const std::vector<char> &buffer)
        {

            RTIBool ok = BigData20BPlugin_deserialize_from_cdr_buffer(
                &sample,
                &buffer[0],
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                                           "Failed to create BigData20B from cdr buffer");
        }

        void topic_type_support<BigData20B>::reset_sample(BigData20B &sample)
        {
            ::rti::topic::reset_sample(sample.data());
        }

        void topic_type_support<BigData20B>::allocate_sample(BigData20B &sample, int, int)
        {
            ::rti::topic::allocate_sample(sample.data(), 20L, -1);
        }

        void topic_type_support<BigData60B>::register_type(
            ::dds::domain::DomainParticipant &participant,
            const std::string &type_name)
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                BigData60BPlugin_new,
                BigData60BPlugin_delete);
        }

        std::vector<char> &topic_type_support<BigData60B>::to_cdr_buffer(
            std::vector<char> &buffer,
            const BigData60B &sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = BigData60BPlugin_serialize_to_cdr_buffer(
                NULL,
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = BigData60BPlugin_serialize_to_cdr_buffer(
                &buffer[0],
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support<BigData60B>::from_cdr_buffer(BigData60B &sample,
                                                             const std::vector<char> &buffer)
        {

            RTIBool ok = BigData60BPlugin_deserialize_from_cdr_buffer(
                &sample,
                &buffer[0],
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                                           "Failed to create BigData60B from cdr buffer");
        }

        void topic_type_support<BigData60B>::reset_sample(BigData60B &sample)
        {
            ::rti::topic::reset_sample(sample.data());
        }

        void topic_type_support<BigData60B>::allocate_sample(BigData60B &sample, int, int)
        {
            ::rti::topic::allocate_sample(sample.data(), 60L, -1);
        }

        void topic_type_support<BigData1K>::register_type(
            ::dds::domain::DomainParticipant &participant,
            const std::string &type_name)
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                BigData1KPlugin_new,
                BigData1KPlugin_delete);
        }

        std::vector<char> &topic_type_support<BigData1K>::to_cdr_buffer(
            std::vector<char> &buffer,
            const BigData1K &sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = BigData1KPlugin_serialize_to_cdr_buffer(
                NULL,
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = BigData1KPlugin_serialize_to_cdr_buffer(
                &buffer[0],
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support<BigData1K>::from_cdr_buffer(BigData1K &sample,
                                                            const std::vector<char> &buffer)
        {

            RTIBool ok = BigData1KPlugin_deserialize_from_cdr_buffer(
                &sample,
                &buffer[0],
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                                           "Failed to create BigData1K from cdr buffer");
        }

        void topic_type_support<BigData1K>::reset_sample(BigData1K &sample)
        {
            ::rti::topic::reset_sample(sample.data());
        }

        void topic_type_support<BigData1K>::allocate_sample(BigData1K &sample, int, int)
        {
            ::rti::topic::allocate_sample(sample.data(), 1024L, -1);
        }

        void topic_type_support<BigData2K>::register_type(
            ::dds::domain::DomainParticipant &participant,
            const std::string &type_name)
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                BigData2KPlugin_new,
                BigData2KPlugin_delete);
        }

        std::vector<char> &topic_type_support<BigData2K>::to_cdr_buffer(
            std::vector<char> &buffer,
            const BigData2K &sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = BigData2KPlugin_serialize_to_cdr_buffer(
                NULL,
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = BigData2KPlugin_serialize_to_cdr_buffer(
                &buffer[0],
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support<BigData2K>::from_cdr_buffer(BigData2K &sample,
                                                            const std::vector<char> &buffer)
        {

            RTIBool ok = BigData2KPlugin_deserialize_from_cdr_buffer(
                &sample,
                &buffer[0],
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                                           "Failed to create BigData2K from cdr buffer");
        }

        void topic_type_support<BigData2K>::reset_sample(BigData2K &sample)
        {
            ::rti::topic::reset_sample(sample.data());
        }

        void topic_type_support<BigData2K>::allocate_sample(BigData2K &sample, int, int)
        {
            ::rti::topic::allocate_sample(sample.data(), 1024L * 2L, -1);
        }

        void topic_type_support<BigData4K>::register_type(
            ::dds::domain::DomainParticipant &participant,
            const std::string &type_name)
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                BigData4KPlugin_new,
                BigData4KPlugin_delete);
        }

        std::vector<char> &topic_type_support<BigData4K>::to_cdr_buffer(
            std::vector<char> &buffer,
            const BigData4K &sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = BigData4KPlugin_serialize_to_cdr_buffer(
                NULL,
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = BigData4KPlugin_serialize_to_cdr_buffer(
                &buffer[0],
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");
            std::cout << "00000000000" << std::endl;
            return buffer;
        }

        void topic_type_support<BigData4K>::from_cdr_buffer(BigData4K &sample,
                                                            const std::vector<char> &buffer)
        {

            RTIBool ok = BigData4KPlugin_deserialize_from_cdr_buffer(
                &sample,
                &buffer[0],
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                                           "Failed to create BigData4K from cdr buffer");
        }

        void topic_type_support<BigData4K>::reset_sample(BigData4K &sample)
        {
            ::rti::topic::reset_sample(sample.data());
        }

        void topic_type_support<BigData4K>::allocate_sample(BigData4K &sample, int, int)
        {
            ::rti::topic::allocate_sample(sample.data(), 1024L * 4L, -1);
        }

        void topic_type_support<BigData16K>::register_type(
            ::dds::domain::DomainParticipant &participant,
            const std::string &type_name)
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                BigData16KPlugin_new,
                BigData16KPlugin_delete);
        }

        std::vector<char> &topic_type_support<BigData16K>::to_cdr_buffer(
            std::vector<char> &buffer,
            const BigData16K &sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = BigData16KPlugin_serialize_to_cdr_buffer(
                NULL,
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = BigData16KPlugin_serialize_to_cdr_buffer(
                &buffer[0],
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support<BigData16K>::from_cdr_buffer(BigData16K &sample,
                                                             const std::vector<char> &buffer)
        {

            RTIBool ok = BigData16KPlugin_deserialize_from_cdr_buffer(
                &sample,
                &buffer[0],
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                                           "Failed to create BigData16K from cdr buffer");
        }

        void topic_type_support<BigData16K>::reset_sample(BigData16K &sample)
        {
            ::rti::topic::reset_sample(sample.data());
        }

        void topic_type_support<BigData16K>::allocate_sample(BigData16K &sample, int, int)
        {
            ::rti::topic::allocate_sample(sample.data(), 1024L * 16L, -1);
        }

        void topic_type_support<BigData32K>::register_type(
            ::dds::domain::DomainParticipant &participant,
            const std::string &type_name)
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                BigData32KPlugin_new,
                BigData32KPlugin_delete);
        }

        std::vector<char> &topic_type_support<BigData32K>::to_cdr_buffer(
            std::vector<char> &buffer,
            const BigData32K &sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = BigData32KPlugin_serialize_to_cdr_buffer(
                NULL,
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = BigData32KPlugin_serialize_to_cdr_buffer(
                &buffer[0],
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support<BigData32K>::from_cdr_buffer(BigData32K &sample,
                                                             const std::vector<char> &buffer)
        {

            RTIBool ok = BigData32KPlugin_deserialize_from_cdr_buffer(
                &sample,
                &buffer[0],
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                                           "Failed to create BigData32K from cdr buffer");
        }

        void topic_type_support<BigData32K>::reset_sample(BigData32K &sample)
        {
            ::rti::topic::reset_sample(sample.data());
        }

        void topic_type_support<BigData32K>::allocate_sample(BigData32K &sample, int, int)
        {
            ::rti::topic::allocate_sample(sample.data(), 1024L * 32L, -1);
        }

        void topic_type_support<BigData64K>::register_type(
            ::dds::domain::DomainParticipant &participant,
            const std::string &type_name)
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                BigData64KPlugin_new,
                BigData64KPlugin_delete);
        }

        std::vector<char> &topic_type_support<BigData64K>::to_cdr_buffer(
            std::vector<char> &buffer,
            const BigData64K &sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = BigData64KPlugin_serialize_to_cdr_buffer(
                NULL,
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = BigData64KPlugin_serialize_to_cdr_buffer(
                &buffer[0],
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support<BigData64K>::from_cdr_buffer(BigData64K &sample,
                                                             const std::vector<char> &buffer)
        {

            RTIBool ok = BigData64KPlugin_deserialize_from_cdr_buffer(
                &sample,
                &buffer[0],
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                                           "Failed to create BigData64K from cdr buffer");
        }

        void topic_type_support<BigData64K>::reset_sample(BigData64K &sample)
        {
            ::rti::topic::reset_sample(sample.data());
        }

        void topic_type_support<BigData64K>::allocate_sample(BigData64K &sample, int, int)
        {
            ::rti::topic::allocate_sample(sample.data(), 1024L * 64L, -1);
        }

        void topic_type_support<BigData256K>::register_type(
            ::dds::domain::DomainParticipant &participant,
            const std::string &type_name)
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                BigData256KPlugin_new,
                BigData256KPlugin_delete);
        }

        std::vector<char> &topic_type_support<BigData256K>::to_cdr_buffer(
            std::vector<char> &buffer,
            const BigData256K &sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = BigData256KPlugin_serialize_to_cdr_buffer(
                NULL,
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = BigData256KPlugin_serialize_to_cdr_buffer(
                &buffer[0],
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support<BigData256K>::from_cdr_buffer(BigData256K &sample,
                                                              const std::vector<char> &buffer)
        {

            RTIBool ok = BigData256KPlugin_deserialize_from_cdr_buffer(
                &sample,
                &buffer[0],
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                                           "Failed to create BigData256K from cdr buffer");
        }

        void topic_type_support<BigData256K>::reset_sample(BigData256K &sample)
        {
            ::rti::topic::reset_sample(sample.data());
        }

        void topic_type_support<BigData256K>::allocate_sample(BigData256K &sample, int, int)
        {
            ::rti::topic::allocate_sample(sample.data(), 1024L * 256L, -1);
        }

        void topic_type_support<BigData1M>::register_type(
            ::dds::domain::DomainParticipant &participant,
            const std::string &type_name)
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                BigData1MPlugin_new,
                BigData1MPlugin_delete);
        }

        std::vector<char> &topic_type_support<BigData1M>::to_cdr_buffer(
            std::vector<char> &buffer,
            const BigData1M &sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = BigData1MPlugin_serialize_to_cdr_buffer(
                NULL,
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = BigData1MPlugin_serialize_to_cdr_buffer(
                &buffer[0],
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support<BigData1M>::from_cdr_buffer(BigData1M &sample,
                                                            const std::vector<char> &buffer)
        {

            RTIBool ok = BigData1MPlugin_deserialize_from_cdr_buffer(
                &sample,
                &buffer[0],
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                                           "Failed to create BigData1M from cdr buffer");
        }

        void topic_type_support<BigData1M>::reset_sample(BigData1M &sample)
        {
            ::rti::topic::reset_sample(sample.data());
        }

        void topic_type_support<BigData1M>::allocate_sample(BigData1M &sample, int, int)
        {
            ::rti::topic::allocate_sample(sample.data(), 1024L * 1024L * 1L, -1);
        }

        void topic_type_support<BigData2M>::register_type(
            ::dds::domain::DomainParticipant &participant,
            const std::string &type_name)
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                BigData2MPlugin_new,
                BigData2MPlugin_delete);
        }

        std::vector<char> &topic_type_support<BigData2M>::to_cdr_buffer(
            std::vector<char> &buffer,
            const BigData2M &sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = BigData2MPlugin_serialize_to_cdr_buffer(
                NULL,
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = BigData2MPlugin_serialize_to_cdr_buffer(
                &buffer[0],
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support<BigData2M>::from_cdr_buffer(BigData2M &sample,
                                                            const std::vector<char> &buffer)
        {

            RTIBool ok = BigData2MPlugin_deserialize_from_cdr_buffer(
                &sample,
                &buffer[0],
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                                           "Failed to create BigData2M from cdr buffer");
        }

        void topic_type_support<BigData2M>::reset_sample(BigData2M &sample)
        {
            ::rti::topic::reset_sample(sample.data());
        }

        void topic_type_support<BigData2M>::allocate_sample(BigData2M &sample, int, int)
        {
            ::rti::topic::allocate_sample(sample.data(), 1024L * 1024L * 2L, -1);
        }

        void topic_type_support<BigData4M>::register_type(
            ::dds::domain::DomainParticipant &participant,
            const std::string &type_name)
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                BigData4MPlugin_new,
                BigData4MPlugin_delete);
        }

        std::vector<char> &topic_type_support<BigData4M>::to_cdr_buffer(
            std::vector<char> &buffer,
            const BigData4M &sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = BigData4MPlugin_serialize_to_cdr_buffer(
                NULL,
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = BigData4MPlugin_serialize_to_cdr_buffer(
                &buffer[0],
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support<BigData4M>::from_cdr_buffer(BigData4M &sample,
                                                            const std::vector<char> &buffer)
        {

            RTIBool ok = BigData4MPlugin_deserialize_from_cdr_buffer(
                &sample,
                &buffer[0],
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                                           "Failed to create BigData4M from cdr buffer");
        }

        void topic_type_support<BigData4M>::reset_sample(BigData4M &sample)
        {
            ::rti::topic::reset_sample(sample.data());
        }

        void topic_type_support<BigData4M>::allocate_sample(BigData4M &sample, int, int)
        {
            ::rti::topic::allocate_sample(sample.data(), 1024L * 1024L * 4L, -1);
        }

        void topic_type_support<BigData8M>::register_type(
            ::dds::domain::DomainParticipant &participant,
            const std::string &type_name)
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                BigData8MPlugin_new,
                BigData8MPlugin_delete);
        }

        std::vector<char> &topic_type_support<BigData8M>::to_cdr_buffer(
            std::vector<char> &buffer,
            const BigData8M &sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = BigData8MPlugin_serialize_to_cdr_buffer(
                NULL,
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = BigData8MPlugin_serialize_to_cdr_buffer(
                &buffer[0],
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support<BigData8M>::from_cdr_buffer(BigData8M &sample,
                                                            const std::vector<char> &buffer)
        {

            RTIBool ok = BigData8MPlugin_deserialize_from_cdr_buffer(
                &sample,
                &buffer[0],
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                                           "Failed to create BigData8M from cdr buffer");
        }

        void topic_type_support<BigData8M>::reset_sample(BigData8M &sample)
        {
            ::rti::topic::reset_sample(sample.data());
        }

        void topic_type_support<BigData8M>::allocate_sample(BigData8M &sample, int, int)
        {
            ::rti::topic::allocate_sample(sample.data(), 1024L * 1024L * 8L, -1);
        }

        void topic_type_support<BigData12M>::register_type(
            ::dds::domain::DomainParticipant &participant,
            const std::string &type_name)
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                BigData12MPlugin_new,
                BigData12MPlugin_delete);
        }

        std::vector<char> &topic_type_support<BigData12M>::to_cdr_buffer(
            std::vector<char> &buffer,
            const BigData12M &sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = BigData12MPlugin_serialize_to_cdr_buffer(
                NULL,
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = BigData12MPlugin_serialize_to_cdr_buffer(
                &buffer[0],
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support<BigData12M>::from_cdr_buffer(BigData12M &sample,
                                                             const std::vector<char> &buffer)
        {

            RTIBool ok = BigData12MPlugin_deserialize_from_cdr_buffer(
                &sample,
                &buffer[0],
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                                           "Failed to create BigData12M from cdr buffer");
        }

        void topic_type_support<BigData12M>::reset_sample(BigData12M &sample)
        {
            ::rti::topic::reset_sample(sample.data());
        }

        void topic_type_support<BigData12M>::allocate_sample(BigData12M &sample, int, int)
        {
            ::rti::topic::allocate_sample(sample.data(), 1024L * 1024L * 12L, -1);
        }

        void topic_type_support<BigData20M>::register_type(
            ::dds::domain::DomainParticipant &participant,
            const std::string &type_name)
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                BigData20MPlugin_new,
                BigData20MPlugin_delete);
        }

        std::vector<char> &topic_type_support<BigData20M>::to_cdr_buffer(
            std::vector<char> &buffer,
            const BigData20M &sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = BigData20MPlugin_serialize_to_cdr_buffer(
                NULL,
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = BigData20MPlugin_serialize_to_cdr_buffer(
                &buffer[0],
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support<BigData20M>::from_cdr_buffer(BigData20M &sample,
                                                             const std::vector<char> &buffer)
        {

            RTIBool ok = BigData20MPlugin_deserialize_from_cdr_buffer(
                &sample,
                &buffer[0],
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                                           "Failed to create BigData20M from cdr buffer");
        }

        void topic_type_support<BigData20M>::reset_sample(BigData20M &sample)
        {
            ::rti::topic::reset_sample(sample.data());
        }

        void topic_type_support<BigData20M>::allocate_sample(BigData20M &sample, int, int)
        {
            ::rti::topic::allocate_sample(sample.data(), 1024L * 1024L * 20L, -1);
        }

        void topic_type_support<BigData30M>::register_type(
            ::dds::domain::DomainParticipant &participant,
            const std::string &type_name)
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                BigData30MPlugin_new,
                BigData30MPlugin_delete);
        }

        std::vector<char> &topic_type_support<BigData30M>::to_cdr_buffer(
            std::vector<char> &buffer,
            const BigData30M &sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = BigData30MPlugin_serialize_to_cdr_buffer(
                NULL,
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = BigData30MPlugin_serialize_to_cdr_buffer(
                &buffer[0],
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support<BigData30M>::from_cdr_buffer(BigData30M &sample,
                                                             const std::vector<char> &buffer)
        {

            RTIBool ok = BigData30MPlugin_deserialize_from_cdr_buffer(
                &sample,
                &buffer[0],
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                                           "Failed to create BigData30M from cdr buffer");
        }

        void topic_type_support<BigData30M>::reset_sample(BigData30M &sample)
        {
            ::rti::topic::reset_sample(sample.data());
        }

        void topic_type_support<BigData30M>::allocate_sample(BigData30M &sample, int, int)
        {
            ::rti::topic::allocate_sample(sample.data(), 1024L * 1024L * 30L, -1);
        }

        void topic_type_support<BigData40M>::register_type(
            ::dds::domain::DomainParticipant &participant,
            const std::string &type_name)
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                BigData40MPlugin_new,
                BigData40MPlugin_delete);
        }

        std::vector<char> &topic_type_support<BigData40M>::to_cdr_buffer(
            std::vector<char> &buffer,
            const BigData40M &sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = BigData40MPlugin_serialize_to_cdr_buffer(
                NULL,
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = BigData40MPlugin_serialize_to_cdr_buffer(
                &buffer[0],
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support<BigData40M>::from_cdr_buffer(BigData40M &sample,
                                                             const std::vector<char> &buffer)
        {

            RTIBool ok = BigData40MPlugin_deserialize_from_cdr_buffer(
                &sample,
                &buffer[0],
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                                           "Failed to create BigData40M from cdr buffer");
        }

        void topic_type_support<BigData40M>::reset_sample(BigData40M &sample)
        {
            ::rti::topic::reset_sample(sample.data());
        }

        void topic_type_support<BigData40M>::allocate_sample(BigData40M &sample, int, int)
        {
            ::rti::topic::allocate_sample(sample.data(), 1024L * 1024L * 40L, -1);
        }

        void topic_type_support<BigData50M>::register_type(
            ::dds::domain::DomainParticipant &participant,
            const std::string &type_name)
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                BigData50MPlugin_new,
                BigData50MPlugin_delete);
        }

        std::vector<char> &topic_type_support<BigData50M>::to_cdr_buffer(
            std::vector<char> &buffer,
            const BigData50M &sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = BigData50MPlugin_serialize_to_cdr_buffer(
                NULL,
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = BigData50MPlugin_serialize_to_cdr_buffer(
                &buffer[0],
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support<BigData50M>::from_cdr_buffer(BigData50M &sample,
                                                             const std::vector<char> &buffer)
        {

            RTIBool ok = BigData50MPlugin_deserialize_from_cdr_buffer(
                &sample,
                &buffer[0],
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                                           "Failed to create BigData50M from cdr buffer");
        }

        void topic_type_support<BigData50M>::reset_sample(BigData50M &sample)
        {
            ::rti::topic::reset_sample(sample.data());
        }

        void topic_type_support<BigData50M>::allocate_sample(BigData50M &sample, int, int)
        {
            ::rti::topic::allocate_sample(sample.data(), 1024L * 1024L * 50L, -1);
        }

        void topic_type_support<BigData60M>::register_type(
            ::dds::domain::DomainParticipant &participant,
            const std::string &type_name)
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                BigData60MPlugin_new,
                BigData60MPlugin_delete);
        }

        std::vector<char> &topic_type_support<BigData60M>::to_cdr_buffer(
            std::vector<char> &buffer,
            const BigData60M &sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = BigData60MPlugin_serialize_to_cdr_buffer(
                NULL,
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = BigData60MPlugin_serialize_to_cdr_buffer(
                &buffer[0],
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support<BigData60M>::from_cdr_buffer(BigData60M &sample,
                                                             const std::vector<char> &buffer)
        {

            RTIBool ok = BigData60MPlugin_deserialize_from_cdr_buffer(
                &sample,
                &buffer[0],
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                                           "Failed to create BigData60M from cdr buffer");
        }

        void topic_type_support<BigData60M>::reset_sample(BigData60M &sample)
        {
            ::rti::topic::reset_sample(sample.data());
        }

        void topic_type_support<BigData60M>::allocate_sample(BigData60M &sample, int, int)
        {
            ::rti::topic::allocate_sample(sample.data(), 1024L * 1024L * 60L, -1);
        }

    }
}
