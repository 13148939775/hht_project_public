

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from data_test.idl
using RTI Code Generator (rtiddsgen) version 3.1.1.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef data_test_571709646_hpp
#define data_test_571709646_hpp

#include <iosfwd>

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef RTIUSERDllExport
#define RTIUSERDllExport __declspec(dllexport)
#endif

#include "dds/domain/DomainParticipant.hpp"
#include "dds/topic/TopicTraits.hpp"
#include "dds/core/SafeEnumeration.hpp"
#include "dds/core/String.hpp"
#include "dds/core/array.hpp"
#include "dds/core/vector.hpp"
#include "dds/core/Optional.hpp"
#include "dds/core/xtypes/DynamicType.hpp"
#include "dds/core/xtypes/StructType.hpp"
#include "dds/core/xtypes/UnionType.hpp"
#include "dds/core/xtypes/EnumType.hpp"
#include "dds/core/xtypes/AliasType.hpp"
#include "rti/core/array.hpp"
#include "rti/core/BoundedSequence.hpp"
#include "rti/util/StreamFlagSaver.hpp"
#include "rti/domain/PluginSupport.hpp"
#include "rti/core/LongDouble.hpp"
#include "dds/core/External.hpp"
#include "rti/core/Pointer.hpp"
#include "rti/topic/TopicTraits.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef RTIUSERDllExport
#define RTIUSERDllExport
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

class NDDSUSERDllExport Data4B {
  public:
    Data4B();

    explicit Data4B(
        int32_t data);

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    Data4B (Data4B&&) = default;
    Data4B& operator=(Data4B&&) = default;
    Data4B& operator=(const Data4B&) = default;
    Data4B(const Data4B&) = default;
    #else
    Data4B(Data4B&& other_) OMG_NOEXCEPT;  
    Data4B& operator=(Data4B&&  other_) OMG_NOEXCEPT;
    #endif
    #endif 

    int32_t& data() OMG_NOEXCEPT {
        return m_data_;
    }

    const int32_t& data() const OMG_NOEXCEPT {
        return m_data_;
    }

    void data(int32_t value) {
        m_data_ = value;
    }

    bool operator == (const Data4B& other_) const;
    bool operator != (const Data4B& other_) const;

    void swap(Data4B& other_) OMG_NOEXCEPT ;

  private:

    int32_t m_data_;

};

inline void swap(Data4B& a, Data4B& b)  OMG_NOEXCEPT 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const Data4B& sample);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
// On Windows, dll-export template instantiations of standard types used by
// other dll-exported types
template class NDDSUSERDllExport std::allocator< char >;
template class NDDSUSERDllExport std::vector< char >;
#endif
class NDDSUSERDllExport BigData20B {
  public:
    BigData20B();

    explicit BigData20B(
        const ::rti::core::bounded_sequence< char, 20L >& data);

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    BigData20B (BigData20B&&) = default;
    BigData20B& operator=(BigData20B&&) = default;
    BigData20B& operator=(const BigData20B&) = default;
    BigData20B(const BigData20B&) = default;
    #else
    BigData20B(BigData20B&& other_) OMG_NOEXCEPT;  
    BigData20B& operator=(BigData20B&&  other_) OMG_NOEXCEPT;
    #endif
    #endif 

    ::rti::core::bounded_sequence< char, 20L >& data() OMG_NOEXCEPT {
        return m_data_;
    }

    const ::rti::core::bounded_sequence< char, 20L >& data() const OMG_NOEXCEPT {
        return m_data_;
    }

    void data(const ::rti::core::bounded_sequence< char, 20L >& value) {
        m_data_ = value;
    }

    void data(::rti::core::bounded_sequence< char, 20L >&& value) {
        m_data_ = std::move(value);
    }

    bool operator == (const BigData20B& other_) const;
    bool operator != (const BigData20B& other_) const;

    void swap(BigData20B& other_) OMG_NOEXCEPT ;

  private:

    ::rti::core::bounded_sequence< char, 20L > m_data_;

};

inline void swap(BigData20B& a, BigData20B& b)  OMG_NOEXCEPT 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const BigData20B& sample);

class NDDSUSERDllExport BigData60B {
  public:
    BigData60B();

    explicit BigData60B(
        const ::rti::core::bounded_sequence< char, 60L >& data);

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    BigData60B (BigData60B&&) = default;
    BigData60B& operator=(BigData60B&&) = default;
    BigData60B& operator=(const BigData60B&) = default;
    BigData60B(const BigData60B&) = default;
    #else
    BigData60B(BigData60B&& other_) OMG_NOEXCEPT;  
    BigData60B& operator=(BigData60B&&  other_) OMG_NOEXCEPT;
    #endif
    #endif 

    ::rti::core::bounded_sequence< char, 60L >& data() OMG_NOEXCEPT {
        return m_data_;
    }

    const ::rti::core::bounded_sequence< char, 60L >& data() const OMG_NOEXCEPT {
        return m_data_;
    }

    void data(const ::rti::core::bounded_sequence< char, 60L >& value) {
        m_data_ = value;
    }

    void data(::rti::core::bounded_sequence< char, 60L >&& value) {
        m_data_ = std::move(value);
    }

    bool operator == (const BigData60B& other_) const;
    bool operator != (const BigData60B& other_) const;

    void swap(BigData60B& other_) OMG_NOEXCEPT ;

  private:

    ::rti::core::bounded_sequence< char, 60L > m_data_;

};

inline void swap(BigData60B& a, BigData60B& b)  OMG_NOEXCEPT 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const BigData60B& sample);

class NDDSUSERDllExport BigData1K {
  public:
    BigData1K();

    explicit BigData1K(
        const ::rti::core::bounded_sequence< char, 1024L >& data);

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    BigData1K (BigData1K&&) = default;
    BigData1K& operator=(BigData1K&&) = default;
    BigData1K& operator=(const BigData1K&) = default;
    BigData1K(const BigData1K&) = default;
    #else
    BigData1K(BigData1K&& other_) OMG_NOEXCEPT;  
    BigData1K& operator=(BigData1K&&  other_) OMG_NOEXCEPT;
    #endif
    #endif 

    ::rti::core::bounded_sequence< char, 1024L >& data() OMG_NOEXCEPT {
        return m_data_;
    }

    const ::rti::core::bounded_sequence< char, 1024L >& data() const OMG_NOEXCEPT {
        return m_data_;
    }

    void data(const ::rti::core::bounded_sequence< char, 1024L >& value) {
        m_data_ = value;
    }

    void data(::rti::core::bounded_sequence< char, 1024L >&& value) {
        m_data_ = std::move(value);
    }

    bool operator == (const BigData1K& other_) const;
    bool operator != (const BigData1K& other_) const;

    void swap(BigData1K& other_) OMG_NOEXCEPT ;

  private:

    ::rti::core::bounded_sequence< char, 1024L > m_data_;

};

inline void swap(BigData1K& a, BigData1K& b)  OMG_NOEXCEPT 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const BigData1K& sample);

class NDDSUSERDllExport BigData2K {
  public:
    BigData2K();

    explicit BigData2K(
        const ::rti::core::bounded_sequence< char, 1024L*2L >& data);

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    BigData2K (BigData2K&&) = default;
    BigData2K& operator=(BigData2K&&) = default;
    BigData2K& operator=(const BigData2K&) = default;
    BigData2K(const BigData2K&) = default;
    #else
    BigData2K(BigData2K&& other_) OMG_NOEXCEPT;  
    BigData2K& operator=(BigData2K&&  other_) OMG_NOEXCEPT;
    #endif
    #endif 

    ::rti::core::bounded_sequence< char, 1024L*2L >& data() OMG_NOEXCEPT {
        return m_data_;
    }

    const ::rti::core::bounded_sequence< char, 1024L*2L >& data() const OMG_NOEXCEPT {
        return m_data_;
    }

    void data(const ::rti::core::bounded_sequence< char, 1024L*2L >& value) {
        m_data_ = value;
    }

    void data(::rti::core::bounded_sequence< char, 1024L*2L >&& value) {
        m_data_ = std::move(value);
    }

    bool operator == (const BigData2K& other_) const;
    bool operator != (const BigData2K& other_) const;

    void swap(BigData2K& other_) OMG_NOEXCEPT ;

  private:

    ::rti::core::bounded_sequence< char, 1024L*2L > m_data_;

};

inline void swap(BigData2K& a, BigData2K& b)  OMG_NOEXCEPT 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const BigData2K& sample);

class NDDSUSERDllExport BigData4K {
  public:
    BigData4K();

    explicit BigData4K(
        const ::rti::core::bounded_sequence< char, 1024L*4L >& data);

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    BigData4K (BigData4K&&) = default;
    BigData4K& operator=(BigData4K&&) = default;
    BigData4K& operator=(const BigData4K&) = default;
    BigData4K(const BigData4K&) = default;
    #else
    BigData4K(BigData4K&& other_) OMG_NOEXCEPT;  
    BigData4K& operator=(BigData4K&&  other_) OMG_NOEXCEPT;
    #endif
    #endif 

    ::rti::core::bounded_sequence< char, 1024L*4L >& data() OMG_NOEXCEPT {
        return m_data_;
    }

    const ::rti::core::bounded_sequence< char, 1024L*4L >& data() const OMG_NOEXCEPT {
        return m_data_;
    }

    void data(const ::rti::core::bounded_sequence< char, 1024L*4L >& value) {
        m_data_ = value;
    }

    void data(::rti::core::bounded_sequence< char, 1024L*4L >&& value) {
        m_data_ = std::move(value);
    }

    bool operator == (const BigData4K& other_) const;
    bool operator != (const BigData4K& other_) const;

    void swap(BigData4K& other_) OMG_NOEXCEPT ;

  private:

    ::rti::core::bounded_sequence< char, 1024L*4L > m_data_;

};

inline void swap(BigData4K& a, BigData4K& b)  OMG_NOEXCEPT 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const BigData4K& sample);

class NDDSUSERDllExport BigData16K {
  public:
    BigData16K();

    explicit BigData16K(
        const ::rti::core::bounded_sequence< char, 1024L*16L >& data);

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    BigData16K (BigData16K&&) = default;
    BigData16K& operator=(BigData16K&&) = default;
    BigData16K& operator=(const BigData16K&) = default;
    BigData16K(const BigData16K&) = default;
    #else
    BigData16K(BigData16K&& other_) OMG_NOEXCEPT;  
    BigData16K& operator=(BigData16K&&  other_) OMG_NOEXCEPT;
    #endif
    #endif 

    ::rti::core::bounded_sequence< char, 1024L*16L >& data() OMG_NOEXCEPT {
        return m_data_;
    }

    const ::rti::core::bounded_sequence< char, 1024L*16L >& data() const OMG_NOEXCEPT {
        return m_data_;
    }

    void data(const ::rti::core::bounded_sequence< char, 1024L*16L >& value) {
        m_data_ = value;
    }

    void data(::rti::core::bounded_sequence< char, 1024L*16L >&& value) {
        m_data_ = std::move(value);
    }

    bool operator == (const BigData16K& other_) const;
    bool operator != (const BigData16K& other_) const;

    void swap(BigData16K& other_) OMG_NOEXCEPT ;

  private:

    ::rti::core::bounded_sequence< char, 1024L*16L > m_data_;

};

inline void swap(BigData16K& a, BigData16K& b)  OMG_NOEXCEPT 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const BigData16K& sample);

class NDDSUSERDllExport BigData32K {
  public:
    BigData32K();

    explicit BigData32K(
        const ::rti::core::bounded_sequence< char, 1024L*32L >& data);

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    BigData32K (BigData32K&&) = default;
    BigData32K& operator=(BigData32K&&) = default;
    BigData32K& operator=(const BigData32K&) = default;
    BigData32K(const BigData32K&) = default;
    #else
    BigData32K(BigData32K&& other_) OMG_NOEXCEPT;  
    BigData32K& operator=(BigData32K&&  other_) OMG_NOEXCEPT;
    #endif
    #endif 

    ::rti::core::bounded_sequence< char, 1024L*32L >& data() OMG_NOEXCEPT {
        return m_data_;
    }

    const ::rti::core::bounded_sequence< char, 1024L*32L >& data() const OMG_NOEXCEPT {
        return m_data_;
    }

    void data(const ::rti::core::bounded_sequence< char, 1024L*32L >& value) {
        m_data_ = value;
    }

    void data(::rti::core::bounded_sequence< char, 1024L*32L >&& value) {
        m_data_ = std::move(value);
    }

    bool operator == (const BigData32K& other_) const;
    bool operator != (const BigData32K& other_) const;

    void swap(BigData32K& other_) OMG_NOEXCEPT ;

  private:

    ::rti::core::bounded_sequence< char, 1024L*32L > m_data_;

};

inline void swap(BigData32K& a, BigData32K& b)  OMG_NOEXCEPT 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const BigData32K& sample);

class NDDSUSERDllExport BigData64K {
  public:
    BigData64K();

    explicit BigData64K(
        const ::rti::core::bounded_sequence< char, 1024L*64L >& data);

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    BigData64K (BigData64K&&) = default;
    BigData64K& operator=(BigData64K&&) = default;
    BigData64K& operator=(const BigData64K&) = default;
    BigData64K(const BigData64K&) = default;
    #else
    BigData64K(BigData64K&& other_) OMG_NOEXCEPT;  
    BigData64K& operator=(BigData64K&&  other_) OMG_NOEXCEPT;
    #endif
    #endif 

    ::rti::core::bounded_sequence< char, 1024L*64L >& data() OMG_NOEXCEPT {
        return m_data_;
    }

    const ::rti::core::bounded_sequence< char, 1024L*64L >& data() const OMG_NOEXCEPT {
        return m_data_;
    }

    void data(const ::rti::core::bounded_sequence< char, 1024L*64L >& value) {
        m_data_ = value;
    }

    void data(::rti::core::bounded_sequence< char, 1024L*64L >&& value) {
        m_data_ = std::move(value);
    }

    bool operator == (const BigData64K& other_) const;
    bool operator != (const BigData64K& other_) const;

    void swap(BigData64K& other_) OMG_NOEXCEPT ;

  private:

    ::rti::core::bounded_sequence< char, 1024L*64L > m_data_;

};

inline void swap(BigData64K& a, BigData64K& b)  OMG_NOEXCEPT 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const BigData64K& sample);

class NDDSUSERDllExport BigData256K {
  public:
    BigData256K();

    explicit BigData256K(
        const ::rti::core::bounded_sequence< char, 1024L*256L >& data);

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    BigData256K (BigData256K&&) = default;
    BigData256K& operator=(BigData256K&&) = default;
    BigData256K& operator=(const BigData256K&) = default;
    BigData256K(const BigData256K&) = default;
    #else
    BigData256K(BigData256K&& other_) OMG_NOEXCEPT;  
    BigData256K& operator=(BigData256K&&  other_) OMG_NOEXCEPT;
    #endif
    #endif 

    ::rti::core::bounded_sequence< char, 1024L*256L >& data() OMG_NOEXCEPT {
        return m_data_;
    }

    const ::rti::core::bounded_sequence< char, 1024L*256L >& data() const OMG_NOEXCEPT {
        return m_data_;
    }

    void data(const ::rti::core::bounded_sequence< char, 1024L*256L >& value) {
        m_data_ = value;
    }

    void data(::rti::core::bounded_sequence< char, 1024L*256L >&& value) {
        m_data_ = std::move(value);
    }

    bool operator == (const BigData256K& other_) const;
    bool operator != (const BigData256K& other_) const;

    void swap(BigData256K& other_) OMG_NOEXCEPT ;

  private:

    ::rti::core::bounded_sequence< char, 1024L*256L > m_data_;

};

inline void swap(BigData256K& a, BigData256K& b)  OMG_NOEXCEPT 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const BigData256K& sample);

class NDDSUSERDllExport BigData1M {
  public:
    BigData1M();

    explicit BigData1M(
        const ::rti::core::bounded_sequence< char, 1024L*1024L*1L >& data);

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    BigData1M (BigData1M&&) = default;
    BigData1M& operator=(BigData1M&&) = default;
    BigData1M& operator=(const BigData1M&) = default;
    BigData1M(const BigData1M&) = default;
    #else
    BigData1M(BigData1M&& other_) OMG_NOEXCEPT;  
    BigData1M& operator=(BigData1M&&  other_) OMG_NOEXCEPT;
    #endif
    #endif 

    ::rti::core::bounded_sequence< char, 1024L*1024L*1L >& data() OMG_NOEXCEPT {
        return m_data_;
    }

    const ::rti::core::bounded_sequence< char, 1024L*1024L*1L >& data() const OMG_NOEXCEPT {
        return m_data_;
    }

    void data(const ::rti::core::bounded_sequence< char, 1024L*1024L*1L >& value) {
        m_data_ = value;
    }

    void data(::rti::core::bounded_sequence< char, 1024L*1024L*1L >&& value) {
        m_data_ = std::move(value);
    }

    bool operator == (const BigData1M& other_) const;
    bool operator != (const BigData1M& other_) const;

    void swap(BigData1M& other_) OMG_NOEXCEPT ;

  private:

    ::rti::core::bounded_sequence< char, 1024L*1024L*1L > m_data_;

};

inline void swap(BigData1M& a, BigData1M& b)  OMG_NOEXCEPT 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const BigData1M& sample);

class NDDSUSERDllExport BigData2M {
  public:
    BigData2M();

    explicit BigData2M(
        const ::rti::core::bounded_sequence< char, 1024L*1024L*2L >& data);

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    BigData2M (BigData2M&&) = default;
    BigData2M& operator=(BigData2M&&) = default;
    BigData2M& operator=(const BigData2M&) = default;
    BigData2M(const BigData2M&) = default;
    #else
    BigData2M(BigData2M&& other_) OMG_NOEXCEPT;  
    BigData2M& operator=(BigData2M&&  other_) OMG_NOEXCEPT;
    #endif
    #endif 

    ::rti::core::bounded_sequence< char, 1024L*1024L*2L >& data() OMG_NOEXCEPT {
        return m_data_;
    }

    const ::rti::core::bounded_sequence< char, 1024L*1024L*2L >& data() const OMG_NOEXCEPT {
        return m_data_;
    }

    void data(const ::rti::core::bounded_sequence< char, 1024L*1024L*2L >& value) {
        m_data_ = value;
    }

    void data(::rti::core::bounded_sequence< char, 1024L*1024L*2L >&& value) {
        m_data_ = std::move(value);
    }

    bool operator == (const BigData2M& other_) const;
    bool operator != (const BigData2M& other_) const;

    void swap(BigData2M& other_) OMG_NOEXCEPT ;

  private:

    ::rti::core::bounded_sequence< char, 1024L*1024L*2L > m_data_;

};

inline void swap(BigData2M& a, BigData2M& b)  OMG_NOEXCEPT 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const BigData2M& sample);

class NDDSUSERDllExport BigData4M {
  public:
    BigData4M();

    explicit BigData4M(
        const ::rti::core::bounded_sequence< char, 1024L*1024L*4L >& data);

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    BigData4M (BigData4M&&) = default;
    BigData4M& operator=(BigData4M&&) = default;
    BigData4M& operator=(const BigData4M&) = default;
    BigData4M(const BigData4M&) = default;
    #else
    BigData4M(BigData4M&& other_) OMG_NOEXCEPT;  
    BigData4M& operator=(BigData4M&&  other_) OMG_NOEXCEPT;
    #endif
    #endif 

    ::rti::core::bounded_sequence< char, 1024L*1024L*4L >& data() OMG_NOEXCEPT {
        return m_data_;
    }

    const ::rti::core::bounded_sequence< char, 1024L*1024L*4L >& data() const OMG_NOEXCEPT {
        return m_data_;
    }

    void data(const ::rti::core::bounded_sequence< char, 1024L*1024L*4L >& value) {
        m_data_ = value;
    }

    void data(::rti::core::bounded_sequence< char, 1024L*1024L*4L >&& value) {
        m_data_ = std::move(value);
    }

    bool operator == (const BigData4M& other_) const;
    bool operator != (const BigData4M& other_) const;

    void swap(BigData4M& other_) OMG_NOEXCEPT ;

  private:

    ::rti::core::bounded_sequence< char, 1024L*1024L*4L > m_data_;

};

inline void swap(BigData4M& a, BigData4M& b)  OMG_NOEXCEPT 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const BigData4M& sample);

class NDDSUSERDllExport BigData8M {
  public:
    BigData8M();

    explicit BigData8M(
        const ::rti::core::bounded_sequence< char, 1024L*1024L*8L >& data);

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    BigData8M (BigData8M&&) = default;
    BigData8M& operator=(BigData8M&&) = default;
    BigData8M& operator=(const BigData8M&) = default;
    BigData8M(const BigData8M&) = default;
    #else
    BigData8M(BigData8M&& other_) OMG_NOEXCEPT;  
    BigData8M& operator=(BigData8M&&  other_) OMG_NOEXCEPT;
    #endif
    #endif 

    ::rti::core::bounded_sequence< char, 1024L*1024L*8L >& data() OMG_NOEXCEPT {
        return m_data_;
    }

    const ::rti::core::bounded_sequence< char, 1024L*1024L*8L >& data() const OMG_NOEXCEPT {
        return m_data_;
    }

    void data(const ::rti::core::bounded_sequence< char, 1024L*1024L*8L >& value) {
        m_data_ = value;
    }

    void data(::rti::core::bounded_sequence< char, 1024L*1024L*8L >&& value) {
        m_data_ = std::move(value);
    }

    bool operator == (const BigData8M& other_) const;
    bool operator != (const BigData8M& other_) const;

    void swap(BigData8M& other_) OMG_NOEXCEPT ;

  private:

    ::rti::core::bounded_sequence< char, 1024L*1024L*8L > m_data_;

};

inline void swap(BigData8M& a, BigData8M& b)  OMG_NOEXCEPT 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const BigData8M& sample);

class NDDSUSERDllExport BigData12M {
  public:
    BigData12M();

    explicit BigData12M(
        const ::rti::core::bounded_sequence< char, 1024L*1024L*12L >& data);

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    BigData12M (BigData12M&&) = default;
    BigData12M& operator=(BigData12M&&) = default;
    BigData12M& operator=(const BigData12M&) = default;
    BigData12M(const BigData12M&) = default;
    #else
    BigData12M(BigData12M&& other_) OMG_NOEXCEPT;  
    BigData12M& operator=(BigData12M&&  other_) OMG_NOEXCEPT;
    #endif
    #endif 

    ::rti::core::bounded_sequence< char, 1024L*1024L*12L >& data() OMG_NOEXCEPT {
        return m_data_;
    }

    const ::rti::core::bounded_sequence< char, 1024L*1024L*12L >& data() const OMG_NOEXCEPT {
        return m_data_;
    }

    void data(const ::rti::core::bounded_sequence< char, 1024L*1024L*12L >& value) {
        m_data_ = value;
    }

    void data(::rti::core::bounded_sequence< char, 1024L*1024L*12L >&& value) {
        m_data_ = std::move(value);
    }

    bool operator == (const BigData12M& other_) const;
    bool operator != (const BigData12M& other_) const;

    void swap(BigData12M& other_) OMG_NOEXCEPT ;

  private:

    ::rti::core::bounded_sequence< char, 1024L*1024L*12L > m_data_;

};

inline void swap(BigData12M& a, BigData12M& b)  OMG_NOEXCEPT 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const BigData12M& sample);

class NDDSUSERDllExport BigData20M {
  public:
    BigData20M();

    explicit BigData20M(
        const ::rti::core::bounded_sequence< char, 1024L*1024L*20L >& data);

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    BigData20M (BigData20M&&) = default;
    BigData20M& operator=(BigData20M&&) = default;
    BigData20M& operator=(const BigData20M&) = default;
    BigData20M(const BigData20M&) = default;
    #else
    BigData20M(BigData20M&& other_) OMG_NOEXCEPT;  
    BigData20M& operator=(BigData20M&&  other_) OMG_NOEXCEPT;
    #endif
    #endif 

    ::rti::core::bounded_sequence< char, 1024L*1024L*20L >& data() OMG_NOEXCEPT {
        return m_data_;
    }

    const ::rti::core::bounded_sequence< char, 1024L*1024L*20L >& data() const OMG_NOEXCEPT {
        return m_data_;
    }

    void data(const ::rti::core::bounded_sequence< char, 1024L*1024L*20L >& value) {
        m_data_ = value;
    }

    void data(::rti::core::bounded_sequence< char, 1024L*1024L*20L >&& value) {
        m_data_ = std::move(value);
    }

    bool operator == (const BigData20M& other_) const;
    bool operator != (const BigData20M& other_) const;

    void swap(BigData20M& other_) OMG_NOEXCEPT ;

  private:

    ::rti::core::bounded_sequence< char, 1024L*1024L*20L > m_data_;

};

inline void swap(BigData20M& a, BigData20M& b)  OMG_NOEXCEPT 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const BigData20M& sample);

class NDDSUSERDllExport BigData30M {
  public:
    BigData30M();

    explicit BigData30M(
        const ::rti::core::bounded_sequence< char, 1024L*1024L*30L >& data);

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    BigData30M (BigData30M&&) = default;
    BigData30M& operator=(BigData30M&&) = default;
    BigData30M& operator=(const BigData30M&) = default;
    BigData30M(const BigData30M&) = default;
    #else
    BigData30M(BigData30M&& other_) OMG_NOEXCEPT;  
    BigData30M& operator=(BigData30M&&  other_) OMG_NOEXCEPT;
    #endif
    #endif 

    ::rti::core::bounded_sequence< char, 1024L*1024L*30L >& data() OMG_NOEXCEPT {
        return m_data_;
    }

    const ::rti::core::bounded_sequence< char, 1024L*1024L*30L >& data() const OMG_NOEXCEPT {
        return m_data_;
    }

    void data(const ::rti::core::bounded_sequence< char, 1024L*1024L*30L >& value) {
        m_data_ = value;
    }

    void data(::rti::core::bounded_sequence< char, 1024L*1024L*30L >&& value) {
        m_data_ = std::move(value);
    }

    bool operator == (const BigData30M& other_) const;
    bool operator != (const BigData30M& other_) const;

    void swap(BigData30M& other_) OMG_NOEXCEPT ;

  private:

    ::rti::core::bounded_sequence< char, 1024L*1024L*30L > m_data_;

};

inline void swap(BigData30M& a, BigData30M& b)  OMG_NOEXCEPT 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const BigData30M& sample);

class NDDSUSERDllExport BigData40M {
  public:
    BigData40M();

    explicit BigData40M(
        const ::rti::core::bounded_sequence< char, 1024L*1024L*40L >& data);

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    BigData40M (BigData40M&&) = default;
    BigData40M& operator=(BigData40M&&) = default;
    BigData40M& operator=(const BigData40M&) = default;
    BigData40M(const BigData40M&) = default;
    #else
    BigData40M(BigData40M&& other_) OMG_NOEXCEPT;  
    BigData40M& operator=(BigData40M&&  other_) OMG_NOEXCEPT;
    #endif
    #endif 

    ::rti::core::bounded_sequence< char, 1024L*1024L*40L >& data() OMG_NOEXCEPT {
        return m_data_;
    }

    const ::rti::core::bounded_sequence< char, 1024L*1024L*40L >& data() const OMG_NOEXCEPT {
        return m_data_;
    }

    void data(const ::rti::core::bounded_sequence< char, 1024L*1024L*40L >& value) {
        m_data_ = value;
    }

    void data(::rti::core::bounded_sequence< char, 1024L*1024L*40L >&& value) {
        m_data_ = std::move(value);
    }

    bool operator == (const BigData40M& other_) const;
    bool operator != (const BigData40M& other_) const;

    void swap(BigData40M& other_) OMG_NOEXCEPT ;

  private:

    ::rti::core::bounded_sequence< char, 1024L*1024L*40L > m_data_;

};

inline void swap(BigData40M& a, BigData40M& b)  OMG_NOEXCEPT 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const BigData40M& sample);

class NDDSUSERDllExport BigData50M {
  public:
    BigData50M();

    explicit BigData50M(
        const ::rti::core::bounded_sequence< char, 1024L*1024L*50L >& data);

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    BigData50M (BigData50M&&) = default;
    BigData50M& operator=(BigData50M&&) = default;
    BigData50M& operator=(const BigData50M&) = default;
    BigData50M(const BigData50M&) = default;
    #else
    BigData50M(BigData50M&& other_) OMG_NOEXCEPT;  
    BigData50M& operator=(BigData50M&&  other_) OMG_NOEXCEPT;
    #endif
    #endif 

    ::rti::core::bounded_sequence< char, 1024L*1024L*50L >& data() OMG_NOEXCEPT {
        return m_data_;
    }

    const ::rti::core::bounded_sequence< char, 1024L*1024L*50L >& data() const OMG_NOEXCEPT {
        return m_data_;
    }

    void data(const ::rti::core::bounded_sequence< char, 1024L*1024L*50L >& value) {
        m_data_ = value;
    }

    void data(::rti::core::bounded_sequence< char, 1024L*1024L*50L >&& value) {
        m_data_ = std::move(value);
    }

    bool operator == (const BigData50M& other_) const;
    bool operator != (const BigData50M& other_) const;

    void swap(BigData50M& other_) OMG_NOEXCEPT ;

  private:

    ::rti::core::bounded_sequence< char, 1024L*1024L*50L > m_data_;

};

inline void swap(BigData50M& a, BigData50M& b)  OMG_NOEXCEPT 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const BigData50M& sample);

class NDDSUSERDllExport BigData60M {
  public:
    BigData60M();

    explicit BigData60M(
        const ::rti::core::bounded_sequence< char, 1024L*1024L*60L >& data);

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    BigData60M (BigData60M&&) = default;
    BigData60M& operator=(BigData60M&&) = default;
    BigData60M& operator=(const BigData60M&) = default;
    BigData60M(const BigData60M&) = default;
    #else
    BigData60M(BigData60M&& other_) OMG_NOEXCEPT;  
    BigData60M& operator=(BigData60M&&  other_) OMG_NOEXCEPT;
    #endif
    #endif 

    ::rti::core::bounded_sequence< char, 1024L*1024L*60L >& data() OMG_NOEXCEPT {
        return m_data_;
    }

    const ::rti::core::bounded_sequence< char, 1024L*1024L*60L >& data() const OMG_NOEXCEPT {
        return m_data_;
    }

    void data(const ::rti::core::bounded_sequence< char, 1024L*1024L*60L >& value) {
        m_data_ = value;
    }

    void data(::rti::core::bounded_sequence< char, 1024L*1024L*60L >&& value) {
        m_data_ = std::move(value);
    }

    bool operator == (const BigData60M& other_) const;
    bool operator != (const BigData60M& other_) const;

    void swap(BigData60M& other_) OMG_NOEXCEPT ;

  private:

    ::rti::core::bounded_sequence< char, 1024L*1024L*60L > m_data_;

};

inline void swap(BigData60M& a, BigData60M& b)  OMG_NOEXCEPT 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const BigData60M& sample);

namespace rti {
    namespace flat {
        namespace topic {
        }
    }
}
namespace dds {
    namespace topic {

        template<>
        struct topic_type_name< Data4B > {
            NDDSUSERDllExport static std::string value() {
                return "Data4B";
            }
        };

        template<>
        struct is_topic_type< Data4B > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< Data4B > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const Data4B& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(Data4B& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(Data4B& sample);

            NDDSUSERDllExport 
            static void allocate_sample(Data4B& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< BigData20B > {
            NDDSUSERDllExport static std::string value() {
                return "BigData20B";
            }
        };

        template<>
        struct is_topic_type< BigData20B > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< BigData20B > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const BigData20B& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(BigData20B& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(BigData20B& sample);

            NDDSUSERDllExport 
            static void allocate_sample(BigData20B& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< BigData60B > {
            NDDSUSERDllExport static std::string value() {
                return "BigData60B";
            }
        };

        template<>
        struct is_topic_type< BigData60B > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< BigData60B > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const BigData60B& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(BigData60B& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(BigData60B& sample);

            NDDSUSERDllExport 
            static void allocate_sample(BigData60B& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< BigData1K > {
            NDDSUSERDllExport static std::string value() {
                return "BigData1K";
            }
        };

        template<>
        struct is_topic_type< BigData1K > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< BigData1K > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const BigData1K& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(BigData1K& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(BigData1K& sample);

            NDDSUSERDllExport 
            static void allocate_sample(BigData1K& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< BigData2K > {
            NDDSUSERDllExport static std::string value() {
                return "BigData2K";
            }
        };

        template<>
        struct is_topic_type< BigData2K > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< BigData2K > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const BigData2K& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(BigData2K& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(BigData2K& sample);

            NDDSUSERDllExport 
            static void allocate_sample(BigData2K& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< BigData4K > {
            NDDSUSERDllExport static std::string value() {
                return "BigData4K";
            }
        };

        template<>
        struct is_topic_type< BigData4K > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< BigData4K > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const BigData4K& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(BigData4K& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(BigData4K& sample);

            NDDSUSERDllExport 
            static void allocate_sample(BigData4K& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< BigData16K > {
            NDDSUSERDllExport static std::string value() {
                return "BigData16K";
            }
        };

        template<>
        struct is_topic_type< BigData16K > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< BigData16K > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const BigData16K& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(BigData16K& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(BigData16K& sample);

            NDDSUSERDllExport 
            static void allocate_sample(BigData16K& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< BigData32K > {
            NDDSUSERDllExport static std::string value() {
                return "BigData32K";
            }
        };

        template<>
        struct is_topic_type< BigData32K > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< BigData32K > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const BigData32K& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(BigData32K& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(BigData32K& sample);

            NDDSUSERDllExport 
            static void allocate_sample(BigData32K& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< BigData64K > {
            NDDSUSERDllExport static std::string value() {
                return "BigData64K";
            }
        };

        template<>
        struct is_topic_type< BigData64K > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< BigData64K > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const BigData64K& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(BigData64K& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(BigData64K& sample);

            NDDSUSERDllExport 
            static void allocate_sample(BigData64K& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< BigData256K > {
            NDDSUSERDllExport static std::string value() {
                return "BigData256K";
            }
        };

        template<>
        struct is_topic_type< BigData256K > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< BigData256K > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const BigData256K& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(BigData256K& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(BigData256K& sample);

            NDDSUSERDllExport 
            static void allocate_sample(BigData256K& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< BigData1M > {
            NDDSUSERDllExport static std::string value() {
                return "BigData1M";
            }
        };

        template<>
        struct is_topic_type< BigData1M > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< BigData1M > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const BigData1M& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(BigData1M& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(BigData1M& sample);

            NDDSUSERDllExport 
            static void allocate_sample(BigData1M& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< BigData2M > {
            NDDSUSERDllExport static std::string value() {
                return "BigData2M";
            }
        };

        template<>
        struct is_topic_type< BigData2M > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< BigData2M > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const BigData2M& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(BigData2M& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(BigData2M& sample);

            NDDSUSERDllExport 
            static void allocate_sample(BigData2M& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< BigData4M > {
            NDDSUSERDllExport static std::string value() {
                return "BigData4M";
            }
        };

        template<>
        struct is_topic_type< BigData4M > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< BigData4M > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const BigData4M& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(BigData4M& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(BigData4M& sample);

            NDDSUSERDllExport 
            static void allocate_sample(BigData4M& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< BigData8M > {
            NDDSUSERDllExport static std::string value() {
                return "BigData8M";
            }
        };

        template<>
        struct is_topic_type< BigData8M > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< BigData8M > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const BigData8M& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(BigData8M& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(BigData8M& sample);

            NDDSUSERDllExport 
            static void allocate_sample(BigData8M& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< BigData12M > {
            NDDSUSERDllExport static std::string value() {
                return "BigData12M";
            }
        };

        template<>
        struct is_topic_type< BigData12M > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< BigData12M > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const BigData12M& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(BigData12M& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(BigData12M& sample);

            NDDSUSERDllExport 
            static void allocate_sample(BigData12M& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< BigData20M > {
            NDDSUSERDllExport static std::string value() {
                return "BigData20M";
            }
        };

        template<>
        struct is_topic_type< BigData20M > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< BigData20M > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const BigData20M& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(BigData20M& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(BigData20M& sample);

            NDDSUSERDllExport 
            static void allocate_sample(BigData20M& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< BigData30M > {
            NDDSUSERDllExport static std::string value() {
                return "BigData30M";
            }
        };

        template<>
        struct is_topic_type< BigData30M > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< BigData30M > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const BigData30M& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(BigData30M& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(BigData30M& sample);

            NDDSUSERDllExport 
            static void allocate_sample(BigData30M& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< BigData40M > {
            NDDSUSERDllExport static std::string value() {
                return "BigData40M";
            }
        };

        template<>
        struct is_topic_type< BigData40M > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< BigData40M > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const BigData40M& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(BigData40M& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(BigData40M& sample);

            NDDSUSERDllExport 
            static void allocate_sample(BigData40M& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< BigData50M > {
            NDDSUSERDllExport static std::string value() {
                return "BigData50M";
            }
        };

        template<>
        struct is_topic_type< BigData50M > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< BigData50M > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const BigData50M& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(BigData50M& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(BigData50M& sample);

            NDDSUSERDllExport 
            static void allocate_sample(BigData50M& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< BigData60M > {
            NDDSUSERDllExport static std::string value() {
                return "BigData60M";
            }
        };

        template<>
        struct is_topic_type< BigData60M > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< BigData60M > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const BigData60M& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(BigData60M& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(BigData60M& sample);

            NDDSUSERDllExport 
            static void allocate_sample(BigData60M& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {
        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< Data4B > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< Data4B > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< BigData20B > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< BigData20B > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< BigData60B > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< BigData60B > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< BigData1K > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< BigData1K > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< BigData2K > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< BigData2K > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< BigData4K > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< BigData4K > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< BigData16K > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< BigData16K > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< BigData32K > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< BigData32K > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< BigData64K > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< BigData64K > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< BigData256K > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< BigData256K > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< BigData1M > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< BigData1M > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< BigData2M > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< BigData2M > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< BigData4M > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< BigData4M > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< BigData8M > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< BigData8M > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< BigData12M > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< BigData12M > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< BigData20M > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< BigData20M > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< BigData30M > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< BigData30M > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< BigData40M > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< BigData40M > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< BigData50M > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< BigData50M > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< BigData60M > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< BigData60M > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

    }
}

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif // data_test_571709646_hpp

