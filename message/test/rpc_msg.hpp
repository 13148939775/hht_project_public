

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from rpc_msg.idl
using RTI Code Generator (rtiddsgen) version 3.1.1.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef rpc_msg_1627794248_hpp
#define rpc_msg_1627794248_hpp

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

#include "dds/rpc/ClientEndpoint.hpp"
#include "dds/rpc/ServiceEndpoint.hpp"

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

class NDDSUSERDllExport Coordinates {
  public:
    Coordinates();

    Coordinates(
        int32_t x,
        int32_t y);

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    Coordinates (Coordinates&&) = default;
    Coordinates& operator=(Coordinates&&) = default;
    Coordinates& operator=(const Coordinates&) = default;
    Coordinates(const Coordinates&) = default;
    #else
    Coordinates(Coordinates&& other_) OMG_NOEXCEPT;  
    Coordinates& operator=(Coordinates&&  other_) OMG_NOEXCEPT;
    #endif
    #endif 

    int32_t& x() OMG_NOEXCEPT {
        return m_x_;
    }

    const int32_t& x() const OMG_NOEXCEPT {
        return m_x_;
    }

    void x(int32_t value) {
        m_x_ = value;
    }

    int32_t& y() OMG_NOEXCEPT {
        return m_y_;
    }

    const int32_t& y() const OMG_NOEXCEPT {
        return m_y_;
    }

    void y(int32_t value) {
        m_y_ = value;
    }

    bool operator == (const Coordinates& other_) const;
    bool operator != (const Coordinates& other_) const;

    void swap(Coordinates& other_) OMG_NOEXCEPT ;

  private:

    int32_t m_x_;
    int32_t m_y_;

};

inline void swap(Coordinates& a, Coordinates& b)  OMG_NOEXCEPT 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const Coordinates& sample);

class NDDSUSERDllExport RobotControl_walk_to_In {
  public:
    RobotControl_walk_to_In();

    RobotControl_walk_to_In(
        const Coordinates& dest,
        float speed);

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    RobotControl_walk_to_In (RobotControl_walk_to_In&&) = default;
    RobotControl_walk_to_In& operator=(RobotControl_walk_to_In&&) = default;
    RobotControl_walk_to_In& operator=(const RobotControl_walk_to_In&) = default;
    RobotControl_walk_to_In(const RobotControl_walk_to_In&) = default;
    #else
    RobotControl_walk_to_In(RobotControl_walk_to_In&& other_) OMG_NOEXCEPT;  
    RobotControl_walk_to_In& operator=(RobotControl_walk_to_In&&  other_) OMG_NOEXCEPT;
    #endif
    #endif 

    Coordinates& dest() OMG_NOEXCEPT {
        return m_dest_;
    }

    const Coordinates& dest() const OMG_NOEXCEPT {
        return m_dest_;
    }

    void dest(const Coordinates& value) {
        m_dest_ = value;
    }

    void dest(Coordinates&& value) {
        m_dest_ = std::move(value);
    }
    float& speed() OMG_NOEXCEPT {
        return m_speed_;
    }

    const float& speed() const OMG_NOEXCEPT {
        return m_speed_;
    }

    void speed(float value) {
        m_speed_ = value;
    }

    bool operator == (const RobotControl_walk_to_In& other_) const;
    bool operator != (const RobotControl_walk_to_In& other_) const;

    void swap(RobotControl_walk_to_In& other_) OMG_NOEXCEPT ;

  private:

    Coordinates m_dest_;
    float m_speed_;

};

inline void swap(RobotControl_walk_to_In& a, RobotControl_walk_to_In& b)  OMG_NOEXCEPT 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const RobotControl_walk_to_In& sample);

class NDDSUSERDllExport RobotControl_walk_to_Out {
  public:
    RobotControl_walk_to_Out();

    explicit RobotControl_walk_to_Out(
        const Coordinates& return_);

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    RobotControl_walk_to_Out (RobotControl_walk_to_Out&&) = default;
    RobotControl_walk_to_Out& operator=(RobotControl_walk_to_Out&&) = default;
    RobotControl_walk_to_Out& operator=(const RobotControl_walk_to_Out&) = default;
    RobotControl_walk_to_Out(const RobotControl_walk_to_Out&) = default;
    #else
    RobotControl_walk_to_Out(RobotControl_walk_to_Out&& other_) OMG_NOEXCEPT;  
    RobotControl_walk_to_Out& operator=(RobotControl_walk_to_Out&&  other_) OMG_NOEXCEPT;
    #endif
    #endif 

    Coordinates& return_() OMG_NOEXCEPT {
        return m_return__;
    }

    const Coordinates& return_() const OMG_NOEXCEPT {
        return m_return__;
    }

    void return_(const Coordinates& value) {
        m_return__ = value;
    }

    void return_(Coordinates&& value) {
        m_return__ = std::move(value);
    }

    bool operator == (const RobotControl_walk_to_Out& other_) const;
    bool operator != (const RobotControl_walk_to_Out& other_) const;

    void swap(RobotControl_walk_to_Out& other_) OMG_NOEXCEPT ;

  private:

    Coordinates m_return__;

};

inline void swap(RobotControl_walk_to_Out& a, RobotControl_walk_to_Out& b)  OMG_NOEXCEPT 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const RobotControl_walk_to_Out& sample);

class NDDSUSERDllExport RobotControl_walk_to_Result {
  public:
    RobotControl_walk_to_Result();

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    RobotControl_walk_to_Result (RobotControl_walk_to_Result&&) = default;
    RobotControl_walk_to_Result& operator=(RobotControl_walk_to_Result&&) = default;
    RobotControl_walk_to_Result& operator=(const RobotControl_walk_to_Result&) = default;
    RobotControl_walk_to_Result(const RobotControl_walk_to_Result&) = default;
    #else
    RobotControl_walk_to_Result(RobotControl_walk_to_Result&& other_) OMG_NOEXCEPT;  
    RobotControl_walk_to_Result& operator=(RobotControl_walk_to_Result&&  other_) OMG_NOEXCEPT;
    #endif
    #endif 

    int32_t& _d()  {
        return m_d_;
    }

    const int32_t& _d() const  {
        return m_d_;
    }

    void _d(int32_t value) {
        m_d_ = value;
    }

    RobotControl_walk_to_Out& result()  {
        if ( _d() != 0) {
            throw ::dds::core::PreconditionNotMetError(
                "RobotControl_walk_to_Result::result not selected by the discriminator" );
        }
        return m_u_.m_result_;
    }

    const RobotControl_walk_to_Out& result() const  {
        if ( _d() != 0) {
            throw ::dds::core::PreconditionNotMetError(
                "RobotControl_walk_to_Result::result not selected by the discriminator" );
        }
        return m_u_.m_result_;
    }

    void result(const RobotControl_walk_to_Out& value) {
        m_u_.m_result_ = value;
        m_d_= 0;
    }

    void result(RobotControl_walk_to_Out&& value) {
        m_u_.m_result_ = std::move(value);
        m_d_= 0;
    }

    bool operator == (const RobotControl_walk_to_Result& other_) const;
    bool operator != (const RobotControl_walk_to_Result& other_) const;

    static int32_t default_discriminator();  

    void swap(RobotControl_walk_to_Result& other_) OMG_NOEXCEPT ;

  private:

    int32_t m_d_;
    struct NDDSUSERDllExport Union_ {
        RobotControl_walk_to_Out m_result_;
        Union_();
        Union_(
            const RobotControl_walk_to_Out& result);
    };
    Union_ m_u_;

};

inline void swap(RobotControl_walk_to_Result& a, RobotControl_walk_to_Result& b)  OMG_NOEXCEPT 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const RobotControl_walk_to_Result& sample);

static const int32_t RobotControl_walk_to_Hash = 2143725469L;

class NDDSUSERDllExport RobotControl_set_config_In {
  public:
    RobotControl_set_config_In();

    explicit RobotControl_set_config_In(
        uint8_t dummy);

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    RobotControl_set_config_In (RobotControl_set_config_In&&) = default;
    RobotControl_set_config_In& operator=(RobotControl_set_config_In&&) = default;
    RobotControl_set_config_In& operator=(const RobotControl_set_config_In&) = default;
    RobotControl_set_config_In(const RobotControl_set_config_In&) = default;
    #else
    RobotControl_set_config_In(RobotControl_set_config_In&& other_) OMG_NOEXCEPT;  
    RobotControl_set_config_In& operator=(RobotControl_set_config_In&&  other_) OMG_NOEXCEPT;
    #endif
    #endif 

    uint8_t& dummy() OMG_NOEXCEPT {
        return m_dummy_;
    }

    const uint8_t& dummy() const OMG_NOEXCEPT {
        return m_dummy_;
    }

    void dummy(uint8_t value) {
        m_dummy_ = value;
    }

    bool operator == (const RobotControl_set_config_In& other_) const;
    bool operator != (const RobotControl_set_config_In& other_) const;

    void swap(RobotControl_set_config_In& other_) OMG_NOEXCEPT ;

  private:

    uint8_t m_dummy_;

};

inline void swap(RobotControl_set_config_In& a, RobotControl_set_config_In& b)  OMG_NOEXCEPT 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const RobotControl_set_config_In& sample);

class NDDSUSERDllExport RobotControl_set_config_Out {
  public:
    RobotControl_set_config_Out();

    explicit RobotControl_set_config_Out(
        int32_t return_);

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    RobotControl_set_config_Out (RobotControl_set_config_Out&&) = default;
    RobotControl_set_config_Out& operator=(RobotControl_set_config_Out&&) = default;
    RobotControl_set_config_Out& operator=(const RobotControl_set_config_Out&) = default;
    RobotControl_set_config_Out(const RobotControl_set_config_Out&) = default;
    #else
    RobotControl_set_config_Out(RobotControl_set_config_Out&& other_) OMG_NOEXCEPT;  
    RobotControl_set_config_Out& operator=(RobotControl_set_config_Out&&  other_) OMG_NOEXCEPT;
    #endif
    #endif 

    int32_t& return_() OMG_NOEXCEPT {
        return m_return__;
    }

    const int32_t& return_() const OMG_NOEXCEPT {
        return m_return__;
    }

    void return_(int32_t value) {
        m_return__ = value;
    }

    bool operator == (const RobotControl_set_config_Out& other_) const;
    bool operator != (const RobotControl_set_config_Out& other_) const;

    void swap(RobotControl_set_config_Out& other_) OMG_NOEXCEPT ;

  private:

    int32_t m_return__;

};

inline void swap(RobotControl_set_config_Out& a, RobotControl_set_config_Out& b)  OMG_NOEXCEPT 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const RobotControl_set_config_Out& sample);

class NDDSUSERDllExport RobotControl_set_config_Result {
  public:
    RobotControl_set_config_Result();

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    RobotControl_set_config_Result (RobotControl_set_config_Result&&) = default;
    RobotControl_set_config_Result& operator=(RobotControl_set_config_Result&&) = default;
    RobotControl_set_config_Result& operator=(const RobotControl_set_config_Result&) = default;
    RobotControl_set_config_Result(const RobotControl_set_config_Result&) = default;
    #else
    RobotControl_set_config_Result(RobotControl_set_config_Result&& other_) OMG_NOEXCEPT;  
    RobotControl_set_config_Result& operator=(RobotControl_set_config_Result&&  other_) OMG_NOEXCEPT;
    #endif
    #endif 

    int32_t& _d()  {
        return m_d_;
    }

    const int32_t& _d() const  {
        return m_d_;
    }

    void _d(int32_t value) {
        m_d_ = value;
    }

    RobotControl_set_config_Out& result()  {
        if ( _d() != 0) {
            throw ::dds::core::PreconditionNotMetError(
                "RobotControl_set_config_Result::result not selected by the discriminator" );
        }
        return m_u_.m_result_;
    }

    const RobotControl_set_config_Out& result() const  {
        if ( _d() != 0) {
            throw ::dds::core::PreconditionNotMetError(
                "RobotControl_set_config_Result::result not selected by the discriminator" );
        }
        return m_u_.m_result_;
    }

    void result(const RobotControl_set_config_Out& value) {
        m_u_.m_result_ = value;
        m_d_= 0;
    }

    void result(RobotControl_set_config_Out&& value) {
        m_u_.m_result_ = std::move(value);
        m_d_= 0;
    }

    bool operator == (const RobotControl_set_config_Result& other_) const;
    bool operator != (const RobotControl_set_config_Result& other_) const;

    static int32_t default_discriminator();  

    void swap(RobotControl_set_config_Result& other_) OMG_NOEXCEPT ;

  private:

    int32_t m_d_;
    struct NDDSUSERDllExport Union_ {
        RobotControl_set_config_Out m_result_;
        Union_();
        Union_(
            const RobotControl_set_config_Out& result);
    };
    Union_ m_u_;

};

inline void swap(RobotControl_set_config_Result& a, RobotControl_set_config_Result& b)  OMG_NOEXCEPT 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const RobotControl_set_config_Result& sample);

static const int32_t RobotControl_set_config_Hash = 239764161L;

class NDDSUSERDllExport RobotControl_get_speed_In {
  public:
    RobotControl_get_speed_In();

    explicit RobotControl_get_speed_In(
        uint8_t dummy);

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    RobotControl_get_speed_In (RobotControl_get_speed_In&&) = default;
    RobotControl_get_speed_In& operator=(RobotControl_get_speed_In&&) = default;
    RobotControl_get_speed_In& operator=(const RobotControl_get_speed_In&) = default;
    RobotControl_get_speed_In(const RobotControl_get_speed_In&) = default;
    #else
    RobotControl_get_speed_In(RobotControl_get_speed_In&& other_) OMG_NOEXCEPT;  
    RobotControl_get_speed_In& operator=(RobotControl_get_speed_In&&  other_) OMG_NOEXCEPT;
    #endif
    #endif 

    uint8_t& dummy() OMG_NOEXCEPT {
        return m_dummy_;
    }

    const uint8_t& dummy() const OMG_NOEXCEPT {
        return m_dummy_;
    }

    void dummy(uint8_t value) {
        m_dummy_ = value;
    }

    bool operator == (const RobotControl_get_speed_In& other_) const;
    bool operator != (const RobotControl_get_speed_In& other_) const;

    void swap(RobotControl_get_speed_In& other_) OMG_NOEXCEPT ;

  private:

    uint8_t m_dummy_;

};

inline void swap(RobotControl_get_speed_In& a, RobotControl_get_speed_In& b)  OMG_NOEXCEPT 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const RobotControl_get_speed_In& sample);

class NDDSUSERDllExport RobotControl_get_speed_Out {
  public:
    RobotControl_get_speed_Out();

    explicit RobotControl_get_speed_Out(
        float return_);

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    RobotControl_get_speed_Out (RobotControl_get_speed_Out&&) = default;
    RobotControl_get_speed_Out& operator=(RobotControl_get_speed_Out&&) = default;
    RobotControl_get_speed_Out& operator=(const RobotControl_get_speed_Out&) = default;
    RobotControl_get_speed_Out(const RobotControl_get_speed_Out&) = default;
    #else
    RobotControl_get_speed_Out(RobotControl_get_speed_Out&& other_) OMG_NOEXCEPT;  
    RobotControl_get_speed_Out& operator=(RobotControl_get_speed_Out&&  other_) OMG_NOEXCEPT;
    #endif
    #endif 

    float& return_() OMG_NOEXCEPT {
        return m_return__;
    }

    const float& return_() const OMG_NOEXCEPT {
        return m_return__;
    }

    void return_(float value) {
        m_return__ = value;
    }

    bool operator == (const RobotControl_get_speed_Out& other_) const;
    bool operator != (const RobotControl_get_speed_Out& other_) const;

    void swap(RobotControl_get_speed_Out& other_) OMG_NOEXCEPT ;

  private:

    float m_return__;

};

inline void swap(RobotControl_get_speed_Out& a, RobotControl_get_speed_Out& b)  OMG_NOEXCEPT 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const RobotControl_get_speed_Out& sample);

class NDDSUSERDllExport RobotControl_get_speed_Result {
  public:
    RobotControl_get_speed_Result();

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    RobotControl_get_speed_Result (RobotControl_get_speed_Result&&) = default;
    RobotControl_get_speed_Result& operator=(RobotControl_get_speed_Result&&) = default;
    RobotControl_get_speed_Result& operator=(const RobotControl_get_speed_Result&) = default;
    RobotControl_get_speed_Result(const RobotControl_get_speed_Result&) = default;
    #else
    RobotControl_get_speed_Result(RobotControl_get_speed_Result&& other_) OMG_NOEXCEPT;  
    RobotControl_get_speed_Result& operator=(RobotControl_get_speed_Result&&  other_) OMG_NOEXCEPT;
    #endif
    #endif 

    int32_t& _d()  {
        return m_d_;
    }

    const int32_t& _d() const  {
        return m_d_;
    }

    void _d(int32_t value) {
        m_d_ = value;
    }

    RobotControl_get_speed_Out& result()  {
        if ( _d() != 0) {
            throw ::dds::core::PreconditionNotMetError(
                "RobotControl_get_speed_Result::result not selected by the discriminator" );
        }
        return m_u_.m_result_;
    }

    const RobotControl_get_speed_Out& result() const  {
        if ( _d() != 0) {
            throw ::dds::core::PreconditionNotMetError(
                "RobotControl_get_speed_Result::result not selected by the discriminator" );
        }
        return m_u_.m_result_;
    }

    void result(const RobotControl_get_speed_Out& value) {
        m_u_.m_result_ = value;
        m_d_= 0;
    }

    void result(RobotControl_get_speed_Out&& value) {
        m_u_.m_result_ = std::move(value);
        m_d_= 0;
    }

    bool operator == (const RobotControl_get_speed_Result& other_) const;
    bool operator != (const RobotControl_get_speed_Result& other_) const;

    static int32_t default_discriminator();  

    void swap(RobotControl_get_speed_Result& other_) OMG_NOEXCEPT ;

  private:

    int32_t m_d_;
    struct NDDSUSERDllExport Union_ {
        RobotControl_get_speed_Out m_result_;
        Union_();
        Union_(
            const RobotControl_get_speed_Out& result);
    };
    Union_ m_u_;

};

inline void swap(RobotControl_get_speed_Result& a, RobotControl_get_speed_Result& b)  OMG_NOEXCEPT 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const RobotControl_get_speed_Result& sample);

static const int32_t RobotControl_get_speed_Hash = 441137905L;

class NDDSUSERDllExport RobotControl_Call {
  public:
    RobotControl_Call();

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    RobotControl_Call (RobotControl_Call&&) = default;
    RobotControl_Call& operator=(RobotControl_Call&&) = default;
    RobotControl_Call& operator=(const RobotControl_Call&) = default;
    RobotControl_Call(const RobotControl_Call&) = default;
    #else
    RobotControl_Call(RobotControl_Call&& other_) OMG_NOEXCEPT;  
    RobotControl_Call& operator=(RobotControl_Call&&  other_) OMG_NOEXCEPT;
    #endif
    #endif 

    int32_t& _d()  {
        return m_d_;
    }

    const int32_t& _d() const  {
        return m_d_;
    }

    void _d(int32_t value) {
        m_d_ = value;
    }

    RobotControl_walk_to_In& walk_to()  {
        if ( _d() != RobotControl_walk_to_Hash) {
            throw ::dds::core::PreconditionNotMetError(
                "RobotControl_Call::walk_to not selected by the discriminator" );
        }
        return m_u_.m_walk_to_;
    }

    const RobotControl_walk_to_In& walk_to() const  {
        if ( _d() != RobotControl_walk_to_Hash) {
            throw ::dds::core::PreconditionNotMetError(
                "RobotControl_Call::walk_to not selected by the discriminator" );
        }
        return m_u_.m_walk_to_;
    }

    void walk_to(const RobotControl_walk_to_In& value) {
        m_u_.m_walk_to_ = value;
        m_d_= RobotControl_walk_to_Hash;
    }

    void walk_to(RobotControl_walk_to_In&& value) {
        m_u_.m_walk_to_ = std::move(value);
        m_d_= RobotControl_walk_to_Hash;
    }
    RobotControl_set_config_In& set_config()  {
        if ( _d() != RobotControl_set_config_Hash) {
            throw ::dds::core::PreconditionNotMetError(
                "RobotControl_Call::set_config not selected by the discriminator" );
        }
        return m_u_.m_set_config_;
    }

    const RobotControl_set_config_In& set_config() const  {
        if ( _d() != RobotControl_set_config_Hash) {
            throw ::dds::core::PreconditionNotMetError(
                "RobotControl_Call::set_config not selected by the discriminator" );
        }
        return m_u_.m_set_config_;
    }

    void set_config(const RobotControl_set_config_In& value) {
        m_u_.m_set_config_ = value;
        m_d_= RobotControl_set_config_Hash;
    }

    void set_config(RobotControl_set_config_In&& value) {
        m_u_.m_set_config_ = std::move(value);
        m_d_= RobotControl_set_config_Hash;
    }
    RobotControl_get_speed_In& get_speed()  {
        if ( _d() != RobotControl_get_speed_Hash) {
            throw ::dds::core::PreconditionNotMetError(
                "RobotControl_Call::get_speed not selected by the discriminator" );
        }
        return m_u_.m_get_speed_;
    }

    const RobotControl_get_speed_In& get_speed() const  {
        if ( _d() != RobotControl_get_speed_Hash) {
            throw ::dds::core::PreconditionNotMetError(
                "RobotControl_Call::get_speed not selected by the discriminator" );
        }
        return m_u_.m_get_speed_;
    }

    void get_speed(const RobotControl_get_speed_In& value) {
        m_u_.m_get_speed_ = value;
        m_d_= RobotControl_get_speed_Hash;
    }

    void get_speed(RobotControl_get_speed_In&& value) {
        m_u_.m_get_speed_ = std::move(value);
        m_d_= RobotControl_get_speed_Hash;
    }
    uint8_t& unknownOp()  {
        if (!(_d() != RobotControl_walk_to_Hash &&
        _d() != RobotControl_set_config_Hash &&
        _d() != RobotControl_get_speed_Hash)) {
            throw ::dds::core::PreconditionNotMetError(
                "RobotControl_Call::unknownOp not selected by the discriminator" );
        }
        return m_u_.m_unknownOp_;
    }

    const uint8_t& unknownOp() const  {
        if (!(_d() != RobotControl_walk_to_Hash &&
        _d() != RobotControl_set_config_Hash &&
        _d() != RobotControl_get_speed_Hash)) {
            throw ::dds::core::PreconditionNotMetError(
                "RobotControl_Call::unknownOp not selected by the discriminator" );
        }
        return m_u_.m_unknownOp_;
    }

    void unknownOp(uint8_t value) {
        if (!(_d() != RobotControl_walk_to_Hash &&
        _d() != RobotControl_set_config_Hash &&
        _d() != RobotControl_get_speed_Hash)) {
            throw ::dds::core::PreconditionNotMetError(
                "RobotControl_Call::unknownOp not selected by the discriminator" );
        }
        m_u_.m_unknownOp_ = value;
    }

    bool operator == (const RobotControl_Call& other_) const;
    bool operator != (const RobotControl_Call& other_) const;

    static int32_t default_discriminator();  

    void swap(RobotControl_Call& other_) OMG_NOEXCEPT ;

  private:

    int32_t m_d_;
    struct NDDSUSERDllExport Union_ {
        RobotControl_walk_to_In m_walk_to_;
        RobotControl_set_config_In m_set_config_;
        RobotControl_get_speed_In m_get_speed_;
        uint8_t m_unknownOp_;
        Union_();
        Union_(
            const RobotControl_walk_to_In& walk_to,
            const RobotControl_set_config_In& set_config,
            const RobotControl_get_speed_In& get_speed,
            uint8_t unknownOp);
    };
    Union_ m_u_;

};

inline void swap(RobotControl_Call& a, RobotControl_Call& b)  OMG_NOEXCEPT 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const RobotControl_Call& sample);

class NDDSUSERDllExport RobotControl_Return {
  public:
    RobotControl_Return();

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    RobotControl_Return (RobotControl_Return&&) = default;
    RobotControl_Return& operator=(RobotControl_Return&&) = default;
    RobotControl_Return& operator=(const RobotControl_Return&) = default;
    RobotControl_Return(const RobotControl_Return&) = default;
    #else
    RobotControl_Return(RobotControl_Return&& other_) OMG_NOEXCEPT;  
    RobotControl_Return& operator=(RobotControl_Return&&  other_) OMG_NOEXCEPT;
    #endif
    #endif 

    int32_t& _d()  {
        return m_d_;
    }

    const int32_t& _d() const  {
        return m_d_;
    }

    void _d(int32_t value) {
        m_d_ = value;
    }

    RobotControl_walk_to_Result& walk_to()  {
        if ( _d() != RobotControl_walk_to_Hash) {
            throw ::dds::core::PreconditionNotMetError(
                "RobotControl_Return::walk_to not selected by the discriminator" );
        }
        return m_u_.m_walk_to_;
    }

    const RobotControl_walk_to_Result& walk_to() const  {
        if ( _d() != RobotControl_walk_to_Hash) {
            throw ::dds::core::PreconditionNotMetError(
                "RobotControl_Return::walk_to not selected by the discriminator" );
        }
        return m_u_.m_walk_to_;
    }

    void walk_to(const RobotControl_walk_to_Result& value) {
        m_u_.m_walk_to_ = value;
        m_d_= RobotControl_walk_to_Hash;
    }

    void walk_to(RobotControl_walk_to_Result&& value) {
        m_u_.m_walk_to_ = std::move(value);
        m_d_= RobotControl_walk_to_Hash;
    }
    RobotControl_set_config_Result& set_config()  {
        if ( _d() != RobotControl_set_config_Hash) {
            throw ::dds::core::PreconditionNotMetError(
                "RobotControl_Return::set_config not selected by the discriminator" );
        }
        return m_u_.m_set_config_;
    }

    const RobotControl_set_config_Result& set_config() const  {
        if ( _d() != RobotControl_set_config_Hash) {
            throw ::dds::core::PreconditionNotMetError(
                "RobotControl_Return::set_config not selected by the discriminator" );
        }
        return m_u_.m_set_config_;
    }

    void set_config(const RobotControl_set_config_Result& value) {
        m_u_.m_set_config_ = value;
        m_d_= RobotControl_set_config_Hash;
    }

    void set_config(RobotControl_set_config_Result&& value) {
        m_u_.m_set_config_ = std::move(value);
        m_d_= RobotControl_set_config_Hash;
    }
    RobotControl_get_speed_Result& get_speed()  {
        if ( _d() != RobotControl_get_speed_Hash) {
            throw ::dds::core::PreconditionNotMetError(
                "RobotControl_Return::get_speed not selected by the discriminator" );
        }
        return m_u_.m_get_speed_;
    }

    const RobotControl_get_speed_Result& get_speed() const  {
        if ( _d() != RobotControl_get_speed_Hash) {
            throw ::dds::core::PreconditionNotMetError(
                "RobotControl_Return::get_speed not selected by the discriminator" );
        }
        return m_u_.m_get_speed_;
    }

    void get_speed(const RobotControl_get_speed_Result& value) {
        m_u_.m_get_speed_ = value;
        m_d_= RobotControl_get_speed_Hash;
    }

    void get_speed(RobotControl_get_speed_Result&& value) {
        m_u_.m_get_speed_ = std::move(value);
        m_d_= RobotControl_get_speed_Hash;
    }
    uint8_t& unknownOp()  {
        if (!(_d() != RobotControl_walk_to_Hash &&
        _d() != RobotControl_set_config_Hash &&
        _d() != RobotControl_get_speed_Hash)) {
            throw ::dds::core::PreconditionNotMetError(
                "RobotControl_Return::unknownOp not selected by the discriminator" );
        }
        return m_u_.m_unknownOp_;
    }

    const uint8_t& unknownOp() const  {
        if (!(_d() != RobotControl_walk_to_Hash &&
        _d() != RobotControl_set_config_Hash &&
        _d() != RobotControl_get_speed_Hash)) {
            throw ::dds::core::PreconditionNotMetError(
                "RobotControl_Return::unknownOp not selected by the discriminator" );
        }
        return m_u_.m_unknownOp_;
    }

    void unknownOp(uint8_t value) {
        if (!(_d() != RobotControl_walk_to_Hash &&
        _d() != RobotControl_set_config_Hash &&
        _d() != RobotControl_get_speed_Hash)) {
            throw ::dds::core::PreconditionNotMetError(
                "RobotControl_Return::unknownOp not selected by the discriminator" );
        }
        m_u_.m_unknownOp_ = value;
    }

    bool operator == (const RobotControl_Return& other_) const;
    bool operator != (const RobotControl_Return& other_) const;

    static int32_t default_discriminator();  

    void swap(RobotControl_Return& other_) OMG_NOEXCEPT ;

  private:

    int32_t m_d_;
    struct NDDSUSERDllExport Union_ {
        RobotControl_walk_to_Result m_walk_to_;
        RobotControl_set_config_Result m_set_config_;
        RobotControl_get_speed_Result m_get_speed_;
        uint8_t m_unknownOp_;
        Union_();
        Union_(
            const RobotControl_walk_to_Result& walk_to,
            const RobotControl_set_config_Result& set_config,
            const RobotControl_get_speed_Result& get_speed,
            uint8_t unknownOp);
    };
    Union_ m_u_;

};

inline void swap(RobotControl_Return& a, RobotControl_Return& b)  OMG_NOEXCEPT 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const RobotControl_Return& sample);

// RobotControl synchronous interface (implemented by Client and Service)
class RobotControl {
  public:
    virtual Coordinates walk_to(
        const Coordinates &dest, float speed) = 0;
    virtual int32_t set_config(
        ) = 0;
    virtual float get_speed(
        ) = 0;
    virtual ~RobotControl()
    {
    }
};
// RobotControl asynchronous interface (implemented by Client only)
class RobotControlAsync {
  public:
    virtual std::future<Coordinates> walk_to_async(
        const Coordinates &dest, float speed) = 0;
    virtual std::future<int32_t> set_config_async(
        ) = 0;
    virtual std::future<float> get_speed_async(
        ) = 0;
    virtual ~RobotControlAsync()
    {
    }
};

using RobotControlClientEndpoint =
dds::rpc::ClientEndpoint<RobotControl_Call, RobotControl_Return>;
// RobotControlClient provides the client-side functions for the RobotControl
// DDS Service
class RobotControlClient:
public RobotControl,
public RobotControlAsync,
public RobotControlClientEndpoint {

  public:
    using InterfaceType = RobotControl;
    using InterfaceAsyncType = RobotControlAsync;
    explicit RobotControlClient(const dds::rpc::ClientParams& params);

    //Implementation of RobotControl:
    Coordinates walk_to (
        const Coordinates &dest, float speed) override;
    int32_t set_config (
        ) override;
    float get_speed (
        ) override;

    std::future<Coordinates> walk_to_async (
        const Coordinates &dest, float speed) override;
    std::future<int32_t> set_config_async (
        ) override;
    std::future<float> get_speed_async (
        ) override;

  private:

    rti::core::SampleIdentity send_walk_to (
        const Coordinates &dest, float speed);
    rti::core::SampleIdentity send_set_config (
        );
    rti::core::SampleIdentity send_get_speed (
        );

    Coordinates receive_walk_to (
        const rti::core::SampleIdentity& request_id);
    int32_t receive_set_config (
        const rti::core::SampleIdentity& request_id);
    float receive_get_speed (
        const rti::core::SampleIdentity& request_id);

};
class RobotControlDispatcher final {
  public:
    using InterfaceType = RobotControl;
    using RequestType = RobotControl_Call;
    using ReplyType = RobotControl_Return;

    static void dispatch_request(
        InterfaceType *service_impl,
        ReplyType& result,
        const RequestType& request);

  private:
    static void dispatch_walk_to (
        InterfaceType* service_impl,
        ReplyType& result,
        const RequestType& request);
    static void dispatch_set_config (
        InterfaceType* service_impl,
        ReplyType& result,
        const RequestType& request);
    static void dispatch_get_speed (
        InterfaceType* service_impl,
        ReplyType& result,
        const RequestType& request);

};
using RobotControlService =
dds::rpc::ServiceEndpoint<RobotControlDispatcher>;

namespace rti {
    namespace flat {
        namespace topic {
        }
    }
}
namespace dds {
    namespace topic {

        template<>
        struct topic_type_name< Coordinates > {
            NDDSUSERDllExport static std::string value() {
                return "Coordinates";
            }
        };

        template<>
        struct is_topic_type< Coordinates > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< Coordinates > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const Coordinates& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(Coordinates& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(Coordinates& sample);

            NDDSUSERDllExport 
            static void allocate_sample(Coordinates& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< RobotControl_walk_to_In > {
            NDDSUSERDllExport static std::string value() {
                return "RobotControl_walk_to_In";
            }
        };

        template<>
        struct topic_type_support< RobotControl_walk_to_In > {
            NDDSUSERDllExport 
            static void reset_sample(RobotControl_walk_to_In& sample);

            NDDSUSERDllExport 
            static void allocate_sample(RobotControl_walk_to_In& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< RobotControl_walk_to_Out > {
            NDDSUSERDllExport static std::string value() {
                return "RobotControl_walk_to_Out";
            }
        };

        template<>
        struct topic_type_support< RobotControl_walk_to_Out > {
            NDDSUSERDllExport 
            static void reset_sample(RobotControl_walk_to_Out& sample);

            NDDSUSERDllExport 
            static void allocate_sample(RobotControl_walk_to_Out& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< RobotControl_walk_to_Result > {
            NDDSUSERDllExport static std::string value() {
                return "RobotControl_walk_to_Result";
            }
        };

        template<>
        struct topic_type_support< RobotControl_walk_to_Result > {
            NDDSUSERDllExport 
            static void reset_sample(RobotControl_walk_to_Result& sample);

            NDDSUSERDllExport 
            static void allocate_sample(RobotControl_walk_to_Result& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< RobotControl_set_config_In > {
            NDDSUSERDllExport static std::string value() {
                return "RobotControl_set_config_In";
            }
        };

        template<>
        struct topic_type_support< RobotControl_set_config_In > {
            NDDSUSERDllExport 
            static void reset_sample(RobotControl_set_config_In& sample);

            NDDSUSERDllExport 
            static void allocate_sample(RobotControl_set_config_In& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< RobotControl_set_config_Out > {
            NDDSUSERDllExport static std::string value() {
                return "RobotControl_set_config_Out";
            }
        };

        template<>
        struct topic_type_support< RobotControl_set_config_Out > {
            NDDSUSERDllExport 
            static void reset_sample(RobotControl_set_config_Out& sample);

            NDDSUSERDllExport 
            static void allocate_sample(RobotControl_set_config_Out& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< RobotControl_set_config_Result > {
            NDDSUSERDllExport static std::string value() {
                return "RobotControl_set_config_Result";
            }
        };

        template<>
        struct topic_type_support< RobotControl_set_config_Result > {
            NDDSUSERDllExport 
            static void reset_sample(RobotControl_set_config_Result& sample);

            NDDSUSERDllExport 
            static void allocate_sample(RobotControl_set_config_Result& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< RobotControl_get_speed_In > {
            NDDSUSERDllExport static std::string value() {
                return "RobotControl_get_speed_In";
            }
        };

        template<>
        struct topic_type_support< RobotControl_get_speed_In > {
            NDDSUSERDllExport 
            static void reset_sample(RobotControl_get_speed_In& sample);

            NDDSUSERDllExport 
            static void allocate_sample(RobotControl_get_speed_In& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< RobotControl_get_speed_Out > {
            NDDSUSERDllExport static std::string value() {
                return "RobotControl_get_speed_Out";
            }
        };

        template<>
        struct topic_type_support< RobotControl_get_speed_Out > {
            NDDSUSERDllExport 
            static void reset_sample(RobotControl_get_speed_Out& sample);

            NDDSUSERDllExport 
            static void allocate_sample(RobotControl_get_speed_Out& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< RobotControl_get_speed_Result > {
            NDDSUSERDllExport static std::string value() {
                return "RobotControl_get_speed_Result";
            }
        };

        template<>
        struct topic_type_support< RobotControl_get_speed_Result > {
            NDDSUSERDllExport 
            static void reset_sample(RobotControl_get_speed_Result& sample);

            NDDSUSERDllExport 
            static void allocate_sample(RobotControl_get_speed_Result& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< RobotControl_Call > {
            NDDSUSERDllExport static std::string value() {
                return "RobotControl_Call";
            }
        };

        template<>
        struct is_topic_type< RobotControl_Call > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< RobotControl_Call > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const RobotControl_Call& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(RobotControl_Call& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(RobotControl_Call& sample);

            NDDSUSERDllExport 
            static void allocate_sample(RobotControl_Call& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< RobotControl_Return > {
            NDDSUSERDllExport static std::string value() {
                return "RobotControl_Return";
            }
        };

        template<>
        struct is_topic_type< RobotControl_Return > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< RobotControl_Return > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const RobotControl_Return& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(RobotControl_Return& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(RobotControl_Return& sample);

            NDDSUSERDllExport 
            static void allocate_sample(RobotControl_Return& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {
        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< Coordinates > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< Coordinates > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::FINAL;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< RobotControl_walk_to_In > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< RobotControl_walk_to_In > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< RobotControl_walk_to_Out > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< RobotControl_walk_to_Out > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< RobotControl_walk_to_Result > {
            typedef ::dds::core::xtypes::UnionType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::UnionType& get();
        };
        #endif

        template <>
        struct extensibility< RobotControl_walk_to_Result > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< RobotControl_set_config_In > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< RobotControl_set_config_In > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< RobotControl_set_config_Out > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< RobotControl_set_config_Out > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< RobotControl_set_config_Result > {
            typedef ::dds::core::xtypes::UnionType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::UnionType& get();
        };
        #endif

        template <>
        struct extensibility< RobotControl_set_config_Result > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< RobotControl_get_speed_In > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< RobotControl_get_speed_In > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< RobotControl_get_speed_Out > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< RobotControl_get_speed_Out > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< RobotControl_get_speed_Result > {
            typedef ::dds::core::xtypes::UnionType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::UnionType& get();
        };
        #endif

        template <>
        struct extensibility< RobotControl_get_speed_Result > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< RobotControl_Call > {
            typedef ::dds::core::xtypes::UnionType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::UnionType& get();
        };
        #endif

        template <>
        struct extensibility< RobotControl_Call > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< RobotControl_Return > {
            typedef ::dds::core::xtypes::UnionType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::UnionType& get();
        };
        #endif

        template <>
        struct extensibility< RobotControl_Return > {
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

#endif // rpc_msg_1627794248_hpp

