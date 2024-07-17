

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from rpc_msg.idl
using RTI Code Generator (rtiddsgen) version 3.1.1.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "rpc_msg.hpp"
#include "rpc_msgPlugin.hpp"

#include <rti/util/ostream_operators.hpp>

// ---- Coordinates: 

Coordinates::Coordinates() :
    m_x_ (0) ,
    m_y_ (0)  {
}   

Coordinates::Coordinates (
    int32_t x,
    int32_t y)
    :
        m_x_( x ),
        m_y_( y ) {
}

#ifdef RTI_CXX11_RVALUE_REFERENCES
#ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
Coordinates::Coordinates(Coordinates&& other_) OMG_NOEXCEPT  :m_x_ (std::move(other_.m_x_))
,
m_y_ (std::move(other_.m_y_))
{
} 

Coordinates& Coordinates::operator=(Coordinates&&  other_) OMG_NOEXCEPT {
    Coordinates tmp(std::move(other_));
    swap(tmp); 
    return *this;
}
#endif
#endif   

void Coordinates::swap(Coordinates& other_)  OMG_NOEXCEPT 
{
    using std::swap;
    swap(m_x_, other_.m_x_);
    swap(m_y_, other_.m_y_);
}  

bool Coordinates::operator == (const Coordinates& other_) const {
    if (m_x_ != other_.m_x_) {
        return false;
    }
    if (m_y_ != other_.m_y_) {
        return false;
    }
    return true;
}
bool Coordinates::operator != (const Coordinates& other_) const {
    return !this->operator ==(other_);
}

std::ostream& operator << (std::ostream& o,const Coordinates& sample)
{
    ::rti::util::StreamFlagSaver flag_saver (o);
    o <<"[";
    o << "x: " << sample.x()<<", ";
    o << "y: " << sample.y() ;
    o <<"]";
    return o;
}

// ---- RobotControl_walk_to_In: 

RobotControl_walk_to_In::RobotControl_walk_to_In() :
    m_speed_ (0.0f)  {
}   

RobotControl_walk_to_In::RobotControl_walk_to_In (
    const Coordinates& dest,
    float speed)
    :
        m_dest_( dest ),
        m_speed_( speed ) {
}

#ifdef RTI_CXX11_RVALUE_REFERENCES
#ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
RobotControl_walk_to_In::RobotControl_walk_to_In(RobotControl_walk_to_In&& other_) OMG_NOEXCEPT  :m_dest_ (std::move(other_.m_dest_))
,
m_speed_ (std::move(other_.m_speed_))
{
} 

RobotControl_walk_to_In& RobotControl_walk_to_In::operator=(RobotControl_walk_to_In&&  other_) OMG_NOEXCEPT {
    RobotControl_walk_to_In tmp(std::move(other_));
    swap(tmp); 
    return *this;
}
#endif
#endif   

void RobotControl_walk_to_In::swap(RobotControl_walk_to_In& other_)  OMG_NOEXCEPT 
{
    using std::swap;
    swap(m_dest_, other_.m_dest_);
    swap(m_speed_, other_.m_speed_);
}  

bool RobotControl_walk_to_In::operator == (const RobotControl_walk_to_In& other_) const {
    if (m_dest_ != other_.m_dest_) {
        return false;
    }
    if (m_speed_ != other_.m_speed_) {
        return false;
    }
    return true;
}
bool RobotControl_walk_to_In::operator != (const RobotControl_walk_to_In& other_) const {
    return !this->operator ==(other_);
}

std::ostream& operator << (std::ostream& o,const RobotControl_walk_to_In& sample)
{
    ::rti::util::StreamFlagSaver flag_saver (o);
    o <<"[";
    o << "dest: " << sample.dest()<<", ";
    o << "speed: " << std::setprecision(9) <<sample.speed() ;
    o <<"]";
    return o;
}

// ---- RobotControl_walk_to_Out: 

RobotControl_walk_to_Out::RobotControl_walk_to_Out()  {
}   

RobotControl_walk_to_Out::RobotControl_walk_to_Out (
    const Coordinates& return_)
    :
        m_return__( return_ ) {
}

#ifdef RTI_CXX11_RVALUE_REFERENCES
#ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
RobotControl_walk_to_Out::RobotControl_walk_to_Out(RobotControl_walk_to_Out&& other_) OMG_NOEXCEPT  :m_return__ (std::move(other_.m_return__))
{
} 

RobotControl_walk_to_Out& RobotControl_walk_to_Out::operator=(RobotControl_walk_to_Out&&  other_) OMG_NOEXCEPT {
    RobotControl_walk_to_Out tmp(std::move(other_));
    swap(tmp); 
    return *this;
}
#endif
#endif   

void RobotControl_walk_to_Out::swap(RobotControl_walk_to_Out& other_)  OMG_NOEXCEPT 
{
    using std::swap;
    swap(m_return__, other_.m_return__);
}  

bool RobotControl_walk_to_Out::operator == (const RobotControl_walk_to_Out& other_) const {
    if (m_return__ != other_.m_return__) {
        return false;
    }
    return true;
}
bool RobotControl_walk_to_Out::operator != (const RobotControl_walk_to_Out& other_) const {
    return !this->operator ==(other_);
}

std::ostream& operator << (std::ostream& o,const RobotControl_walk_to_Out& sample)
{
    ::rti::util::StreamFlagSaver flag_saver (o);
    o <<"[";
    o << "return_: " << sample.return_() ;
    o <<"]";
    return o;
}

// ---- RobotControl_walk_to_Result: 

#ifdef RTI_CXX11_RVALUE_REFERENCES
#ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
RobotControl_walk_to_Result::RobotControl_walk_to_Result(RobotControl_walk_to_Result&& other_) OMG_NOEXCEPT 
{
    _d(std::move(other_._d()));
    switch(::rti::topic::cdr::integer_case(_d())){
        case 0:
        {  
            result( std::move(other_.result()));
        } break;

        default: 
        {
            /* 
            * Prevents compiler warnings when discriminator is an enum
            * and unionType does not specify all enumeration members.
            */ 
        }
    }
}

RobotControl_walk_to_Result& RobotControl_walk_to_Result::operator=(RobotControl_walk_to_Result&&  other_) OMG_NOEXCEPT {
    RobotControl_walk_to_Result tmp(std::move(other_));
    swap(tmp); 
    return *this;
}
#endif
#endif 

RobotControl_walk_to_Result::Union_::Union_()  {
}

RobotControl_walk_to_Result::Union_::Union_(
    const RobotControl_walk_to_Out& result)
    :
        m_result_( result ) {
}

RobotControl_walk_to_Result::RobotControl_walk_to_Result() :m_d_(default_discriminator())
{
}

void RobotControl_walk_to_Result::swap(RobotControl_walk_to_Result& other_)  OMG_NOEXCEPT 
{
    using std::swap;
    swap (m_d_,other_.m_d_);
    switch(::rti::topic::cdr::integer_case(_d())){
        case 0:
        {  
            swap(m_u_.m_result_, other_.m_u_.m_result_);
        } break;

        default: 
        {
            /* 
            * Prevents compiler warnings when discriminator is an enum
            * and unionType does not specify all enumeration members.
            */ 
        }
    }
    if (_d() != other_._d()){
        switch(::rti::topic::cdr::integer_case(other_._d())){
            case 0:
            {  
                swap(m_u_.m_result_, other_.m_u_.m_result_);
            } break;

            default: 
            {
                /* 
                * Prevents compiler warnings when discriminator is an enum
                * and unionType does not specify all enumeration members.
                */ 
            }
        }
    }
}  

bool RobotControl_walk_to_Result::operator == (const RobotControl_walk_to_Result& other_) const {
    if (_d() != other_._d()){
        return false;
    }
    switch(::rti::topic::cdr::integer_case(_d())){
        case 0:
        {  
            if ( m_u_.m_result_ != other_.m_u_.m_result_) {
                return false;
            }
        } break ;
        default: 
        {
            /* 
            * Prevents compiler warnings when discriminator is an enum
            * and unionType does not specify all enumeration members.
            */ 
        }
    }
    return true;
}
bool RobotControl_walk_to_Result::operator != (const RobotControl_walk_to_Result& other_) const {
    return !this->operator ==(other_);
}

std::ostream& operator << (std::ostream& o,const RobotControl_walk_to_Result& sample)
{
    ::rti::util::StreamFlagSaver flag_saver (o);
    o <<"[";
    o << "_d: " << sample._d() <<", ";
    switch(::rti::topic::cdr::integer_case(sample._d())){
        case 0:
        {  
            o << "result: " << sample.result() ;        } break ;

        default: 
        {
            /* 
            * Prevents compiler warnings when discriminator is an enum
            * and unionType does not specify all enumeration members.
            */ 
        }
    }
    o <<"]";
    return o;
}

int32_t RobotControl_walk_to_Result::default_discriminator() {
    return 0;
}  

// ---- RobotControl_set_config_In: 

RobotControl_set_config_In::RobotControl_set_config_In() :
    m_dummy_ (0)  {
}   

RobotControl_set_config_In::RobotControl_set_config_In (
    uint8_t dummy)
    :
        m_dummy_( dummy ) {
}

#ifdef RTI_CXX11_RVALUE_REFERENCES
#ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
RobotControl_set_config_In::RobotControl_set_config_In(RobotControl_set_config_In&& other_) OMG_NOEXCEPT  :m_dummy_ (std::move(other_.m_dummy_))
{
} 

RobotControl_set_config_In& RobotControl_set_config_In::operator=(RobotControl_set_config_In&&  other_) OMG_NOEXCEPT {
    RobotControl_set_config_In tmp(std::move(other_));
    swap(tmp); 
    return *this;
}
#endif
#endif   

void RobotControl_set_config_In::swap(RobotControl_set_config_In& other_)  OMG_NOEXCEPT 
{
    using std::swap;
    swap(m_dummy_, other_.m_dummy_);
}  

bool RobotControl_set_config_In::operator == (const RobotControl_set_config_In& other_) const {
    if (m_dummy_ != other_.m_dummy_) {
        return false;
    }
    return true;
}
bool RobotControl_set_config_In::operator != (const RobotControl_set_config_In& other_) const {
    return !this->operator ==(other_);
}

std::ostream& operator << (std::ostream& o,const RobotControl_set_config_In& sample)
{
    ::rti::util::StreamFlagSaver flag_saver (o);
    o <<"[";
    o << "dummy: <" << std::hex<<(int)sample.dummy()  ;
    o <<"]";
    return o;
}

// ---- RobotControl_set_config_Out: 

RobotControl_set_config_Out::RobotControl_set_config_Out() :
    m_return__ (0)  {
}   

RobotControl_set_config_Out::RobotControl_set_config_Out (
    int32_t return_)
    :
        m_return__( return_ ) {
}

#ifdef RTI_CXX11_RVALUE_REFERENCES
#ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
RobotControl_set_config_Out::RobotControl_set_config_Out(RobotControl_set_config_Out&& other_) OMG_NOEXCEPT  :m_return__ (std::move(other_.m_return__))
{
} 

RobotControl_set_config_Out& RobotControl_set_config_Out::operator=(RobotControl_set_config_Out&&  other_) OMG_NOEXCEPT {
    RobotControl_set_config_Out tmp(std::move(other_));
    swap(tmp); 
    return *this;
}
#endif
#endif   

void RobotControl_set_config_Out::swap(RobotControl_set_config_Out& other_)  OMG_NOEXCEPT 
{
    using std::swap;
    swap(m_return__, other_.m_return__);
}  

bool RobotControl_set_config_Out::operator == (const RobotControl_set_config_Out& other_) const {
    if (m_return__ != other_.m_return__) {
        return false;
    }
    return true;
}
bool RobotControl_set_config_Out::operator != (const RobotControl_set_config_Out& other_) const {
    return !this->operator ==(other_);
}

std::ostream& operator << (std::ostream& o,const RobotControl_set_config_Out& sample)
{
    ::rti::util::StreamFlagSaver flag_saver (o);
    o <<"[";
    o << "return_: " << sample.return_() ;
    o <<"]";
    return o;
}

// ---- RobotControl_set_config_Result: 

#ifdef RTI_CXX11_RVALUE_REFERENCES
#ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
RobotControl_set_config_Result::RobotControl_set_config_Result(RobotControl_set_config_Result&& other_) OMG_NOEXCEPT 
{
    _d(std::move(other_._d()));
    switch(::rti::topic::cdr::integer_case(_d())){
        case 0:
        {  
            result( std::move(other_.result()));
        } break;

        default: 
        {
            /* 
            * Prevents compiler warnings when discriminator is an enum
            * and unionType does not specify all enumeration members.
            */ 
        }
    }
}

RobotControl_set_config_Result& RobotControl_set_config_Result::operator=(RobotControl_set_config_Result&&  other_) OMG_NOEXCEPT {
    RobotControl_set_config_Result tmp(std::move(other_));
    swap(tmp); 
    return *this;
}
#endif
#endif 

RobotControl_set_config_Result::Union_::Union_()  {
}

RobotControl_set_config_Result::Union_::Union_(
    const RobotControl_set_config_Out& result)
    :
        m_result_( result ) {
}

RobotControl_set_config_Result::RobotControl_set_config_Result() :m_d_(default_discriminator())
{
}

void RobotControl_set_config_Result::swap(RobotControl_set_config_Result& other_)  OMG_NOEXCEPT 
{
    using std::swap;
    swap (m_d_,other_.m_d_);
    switch(::rti::topic::cdr::integer_case(_d())){
        case 0:
        {  
            swap(m_u_.m_result_, other_.m_u_.m_result_);
        } break;

        default: 
        {
            /* 
            * Prevents compiler warnings when discriminator is an enum
            * and unionType does not specify all enumeration members.
            */ 
        }
    }
    if (_d() != other_._d()){
        switch(::rti::topic::cdr::integer_case(other_._d())){
            case 0:
            {  
                swap(m_u_.m_result_, other_.m_u_.m_result_);
            } break;

            default: 
            {
                /* 
                * Prevents compiler warnings when discriminator is an enum
                * and unionType does not specify all enumeration members.
                */ 
            }
        }
    }
}  

bool RobotControl_set_config_Result::operator == (const RobotControl_set_config_Result& other_) const {
    if (_d() != other_._d()){
        return false;
    }
    switch(::rti::topic::cdr::integer_case(_d())){
        case 0:
        {  
            if ( m_u_.m_result_ != other_.m_u_.m_result_) {
                return false;
            }
        } break ;
        default: 
        {
            /* 
            * Prevents compiler warnings when discriminator is an enum
            * and unionType does not specify all enumeration members.
            */ 
        }
    }
    return true;
}
bool RobotControl_set_config_Result::operator != (const RobotControl_set_config_Result& other_) const {
    return !this->operator ==(other_);
}

std::ostream& operator << (std::ostream& o,const RobotControl_set_config_Result& sample)
{
    ::rti::util::StreamFlagSaver flag_saver (o);
    o <<"[";
    o << "_d: " << sample._d() <<", ";
    switch(::rti::topic::cdr::integer_case(sample._d())){
        case 0:
        {  
            o << "result: " << sample.result() ;        } break ;

        default: 
        {
            /* 
            * Prevents compiler warnings when discriminator is an enum
            * and unionType does not specify all enumeration members.
            */ 
        }
    }
    o <<"]";
    return o;
}

int32_t RobotControl_set_config_Result::default_discriminator() {
    return 0;
}  

// ---- RobotControl_get_speed_In: 

RobotControl_get_speed_In::RobotControl_get_speed_In() :
    m_dummy_ (0)  {
}   

RobotControl_get_speed_In::RobotControl_get_speed_In (
    uint8_t dummy)
    :
        m_dummy_( dummy ) {
}

#ifdef RTI_CXX11_RVALUE_REFERENCES
#ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
RobotControl_get_speed_In::RobotControl_get_speed_In(RobotControl_get_speed_In&& other_) OMG_NOEXCEPT  :m_dummy_ (std::move(other_.m_dummy_))
{
} 

RobotControl_get_speed_In& RobotControl_get_speed_In::operator=(RobotControl_get_speed_In&&  other_) OMG_NOEXCEPT {
    RobotControl_get_speed_In tmp(std::move(other_));
    swap(tmp); 
    return *this;
}
#endif
#endif   

void RobotControl_get_speed_In::swap(RobotControl_get_speed_In& other_)  OMG_NOEXCEPT 
{
    using std::swap;
    swap(m_dummy_, other_.m_dummy_);
}  

bool RobotControl_get_speed_In::operator == (const RobotControl_get_speed_In& other_) const {
    if (m_dummy_ != other_.m_dummy_) {
        return false;
    }
    return true;
}
bool RobotControl_get_speed_In::operator != (const RobotControl_get_speed_In& other_) const {
    return !this->operator ==(other_);
}

std::ostream& operator << (std::ostream& o,const RobotControl_get_speed_In& sample)
{
    ::rti::util::StreamFlagSaver flag_saver (o);
    o <<"[";
    o << "dummy: <" << std::hex<<(int)sample.dummy()  ;
    o <<"]";
    return o;
}

// ---- RobotControl_get_speed_Out: 

RobotControl_get_speed_Out::RobotControl_get_speed_Out() :
    m_return__ (0.0f)  {
}   

RobotControl_get_speed_Out::RobotControl_get_speed_Out (
    float return_)
    :
        m_return__( return_ ) {
}

#ifdef RTI_CXX11_RVALUE_REFERENCES
#ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
RobotControl_get_speed_Out::RobotControl_get_speed_Out(RobotControl_get_speed_Out&& other_) OMG_NOEXCEPT  :m_return__ (std::move(other_.m_return__))
{
} 

RobotControl_get_speed_Out& RobotControl_get_speed_Out::operator=(RobotControl_get_speed_Out&&  other_) OMG_NOEXCEPT {
    RobotControl_get_speed_Out tmp(std::move(other_));
    swap(tmp); 
    return *this;
}
#endif
#endif   

void RobotControl_get_speed_Out::swap(RobotControl_get_speed_Out& other_)  OMG_NOEXCEPT 
{
    using std::swap;
    swap(m_return__, other_.m_return__);
}  

bool RobotControl_get_speed_Out::operator == (const RobotControl_get_speed_Out& other_) const {
    if (m_return__ != other_.m_return__) {
        return false;
    }
    return true;
}
bool RobotControl_get_speed_Out::operator != (const RobotControl_get_speed_Out& other_) const {
    return !this->operator ==(other_);
}

std::ostream& operator << (std::ostream& o,const RobotControl_get_speed_Out& sample)
{
    ::rti::util::StreamFlagSaver flag_saver (o);
    o <<"[";
    o << "return_: " << std::setprecision(9) <<sample.return_() ;
    o <<"]";
    return o;
}

// ---- RobotControl_get_speed_Result: 

#ifdef RTI_CXX11_RVALUE_REFERENCES
#ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
RobotControl_get_speed_Result::RobotControl_get_speed_Result(RobotControl_get_speed_Result&& other_) OMG_NOEXCEPT 
{
    _d(std::move(other_._d()));
    switch(::rti::topic::cdr::integer_case(_d())){
        case 0:
        {  
            result( std::move(other_.result()));
        } break;

        default: 
        {
            /* 
            * Prevents compiler warnings when discriminator is an enum
            * and unionType does not specify all enumeration members.
            */ 
        }
    }
}

RobotControl_get_speed_Result& RobotControl_get_speed_Result::operator=(RobotControl_get_speed_Result&&  other_) OMG_NOEXCEPT {
    RobotControl_get_speed_Result tmp(std::move(other_));
    swap(tmp); 
    return *this;
}
#endif
#endif 

RobotControl_get_speed_Result::Union_::Union_()  {
}

RobotControl_get_speed_Result::Union_::Union_(
    const RobotControl_get_speed_Out& result)
    :
        m_result_( result ) {
}

RobotControl_get_speed_Result::RobotControl_get_speed_Result() :m_d_(default_discriminator())
{
}

void RobotControl_get_speed_Result::swap(RobotControl_get_speed_Result& other_)  OMG_NOEXCEPT 
{
    using std::swap;
    swap (m_d_,other_.m_d_);
    switch(::rti::topic::cdr::integer_case(_d())){
        case 0:
        {  
            swap(m_u_.m_result_, other_.m_u_.m_result_);
        } break;

        default: 
        {
            /* 
            * Prevents compiler warnings when discriminator is an enum
            * and unionType does not specify all enumeration members.
            */ 
        }
    }
    if (_d() != other_._d()){
        switch(::rti::topic::cdr::integer_case(other_._d())){
            case 0:
            {  
                swap(m_u_.m_result_, other_.m_u_.m_result_);
            } break;

            default: 
            {
                /* 
                * Prevents compiler warnings when discriminator is an enum
                * and unionType does not specify all enumeration members.
                */ 
            }
        }
    }
}  

bool RobotControl_get_speed_Result::operator == (const RobotControl_get_speed_Result& other_) const {
    if (_d() != other_._d()){
        return false;
    }
    switch(::rti::topic::cdr::integer_case(_d())){
        case 0:
        {  
            if ( m_u_.m_result_ != other_.m_u_.m_result_) {
                return false;
            }
        } break ;
        default: 
        {
            /* 
            * Prevents compiler warnings when discriminator is an enum
            * and unionType does not specify all enumeration members.
            */ 
        }
    }
    return true;
}
bool RobotControl_get_speed_Result::operator != (const RobotControl_get_speed_Result& other_) const {
    return !this->operator ==(other_);
}

std::ostream& operator << (std::ostream& o,const RobotControl_get_speed_Result& sample)
{
    ::rti::util::StreamFlagSaver flag_saver (o);
    o <<"[";
    o << "_d: " << sample._d() <<", ";
    switch(::rti::topic::cdr::integer_case(sample._d())){
        case 0:
        {  
            o << "result: " << sample.result() ;        } break ;

        default: 
        {
            /* 
            * Prevents compiler warnings when discriminator is an enum
            * and unionType does not specify all enumeration members.
            */ 
        }
    }
    o <<"]";
    return o;
}

int32_t RobotControl_get_speed_Result::default_discriminator() {
    return 0;
}  

// ---- RobotControl_Call: 

#ifdef RTI_CXX11_RVALUE_REFERENCES
#ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
RobotControl_Call::RobotControl_Call(RobotControl_Call&& other_) OMG_NOEXCEPT 
{
    _d(std::move(other_._d()));
    switch(::rti::topic::cdr::integer_case(_d())){
        case RobotControl_walk_to_Hash:
        {  
            walk_to( std::move(other_.walk_to()));
        } break;
        case RobotControl_set_config_Hash:
        {  
            set_config( std::move(other_.set_config()));
        } break;
        case RobotControl_get_speed_Hash:
        {  
            get_speed( std::move(other_.get_speed()));
        } break;
        default:
        {  
            unknownOp( std::move(other_.unknownOp()));
        } ;

    }
}

RobotControl_Call& RobotControl_Call::operator=(RobotControl_Call&&  other_) OMG_NOEXCEPT {
    RobotControl_Call tmp(std::move(other_));
    swap(tmp); 
    return *this;
}
#endif
#endif 

RobotControl_Call::Union_::Union_() :
    m_unknownOp_ (0)  {
}

RobotControl_Call::Union_::Union_(
    const RobotControl_walk_to_In& walk_to,
    const RobotControl_set_config_In& set_config,
    const RobotControl_get_speed_In& get_speed,
    uint8_t unknownOp)
    :
        m_walk_to_( walk_to ),
        m_set_config_( set_config ),
        m_get_speed_( get_speed ),
        m_unknownOp_( unknownOp ) {
}

RobotControl_Call::RobotControl_Call() :m_d_(default_discriminator())
{
}

void RobotControl_Call::swap(RobotControl_Call& other_)  OMG_NOEXCEPT 
{
    using std::swap;
    swap (m_d_,other_.m_d_);
    switch(::rti::topic::cdr::integer_case(_d())){
        case RobotControl_walk_to_Hash:
        {  
            swap(m_u_.m_walk_to_, other_.m_u_.m_walk_to_);
        } break;
        case RobotControl_set_config_Hash:
        {  
            swap(m_u_.m_set_config_, other_.m_u_.m_set_config_);
        } break;
        case RobotControl_get_speed_Hash:
        {  
            swap(m_u_.m_get_speed_, other_.m_u_.m_get_speed_);
        } break;
        default:
        {  
            swap(m_u_.m_unknownOp_, other_.m_u_.m_unknownOp_);
        } ;

    }
    if (_d() != other_._d()){
        switch(::rti::topic::cdr::integer_case(other_._d())){
            case RobotControl_walk_to_Hash:
            {  
                swap(m_u_.m_walk_to_, other_.m_u_.m_walk_to_);
            } break;
            case RobotControl_set_config_Hash:
            {  
                swap(m_u_.m_set_config_, other_.m_u_.m_set_config_);
            } break;
            case RobotControl_get_speed_Hash:
            {  
                swap(m_u_.m_get_speed_, other_.m_u_.m_get_speed_);
            } break;
            default:
            {  
                swap(m_u_.m_unknownOp_, other_.m_u_.m_unknownOp_);
            } ;

        }
    }
}  

bool RobotControl_Call::operator == (const RobotControl_Call& other_) const {
    if (_d() != other_._d()){
        return false;
    }
    switch(::rti::topic::cdr::integer_case(_d())){
        case RobotControl_walk_to_Hash:
        {  
            if ( m_u_.m_walk_to_ != other_.m_u_.m_walk_to_) {
                return false;
            }
        } break ;
        case RobotControl_set_config_Hash:
        {  
            if ( m_u_.m_set_config_ != other_.m_u_.m_set_config_) {
                return false;
            }
        } break ;
        case RobotControl_get_speed_Hash:
        {  
            if ( m_u_.m_get_speed_ != other_.m_u_.m_get_speed_) {
                return false;
            }
        } break ;
        default:
        {  
            if ( m_u_.m_unknownOp_ != other_.m_u_.m_unknownOp_) {
                return false;
            }
        } ;
    }
    return true;
}
bool RobotControl_Call::operator != (const RobotControl_Call& other_) const {
    return !this->operator ==(other_);
}

std::ostream& operator << (std::ostream& o,const RobotControl_Call& sample)
{
    ::rti::util::StreamFlagSaver flag_saver (o);
    o <<"[";
    o << "_d: " << sample._d() <<", ";
    switch(::rti::topic::cdr::integer_case(sample._d())){
        case RobotControl_walk_to_Hash:
        {  
            o << "walk_to: " << sample.walk_to()<<", ";
        } break ;
        case RobotControl_set_config_Hash:
        {  
            o << "set_config: " << sample.set_config()<<", ";
        } break ;
        case RobotControl_get_speed_Hash:
        {  
            o << "get_speed: " << sample.get_speed()<<", ";
        } break ;
        default:
        {  
            o << "unknownOp: <" << std::hex<<(int)sample.unknownOp()  ;        } ;

    }
    o <<"]";
    return o;
}

int32_t RobotControl_Call::default_discriminator() {
    return 0;
}  

// ---- RobotControl_Return: 

#ifdef RTI_CXX11_RVALUE_REFERENCES
#ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
RobotControl_Return::RobotControl_Return(RobotControl_Return&& other_) OMG_NOEXCEPT 
{
    _d(std::move(other_._d()));
    switch(::rti::topic::cdr::integer_case(_d())){
        case RobotControl_walk_to_Hash:
        {  
            walk_to( std::move(other_.walk_to()));
        } break;
        case RobotControl_set_config_Hash:
        {  
            set_config( std::move(other_.set_config()));
        } break;
        case RobotControl_get_speed_Hash:
        {  
            get_speed( std::move(other_.get_speed()));
        } break;
        default:
        {  
            unknownOp( std::move(other_.unknownOp()));
        } ;

    }
}

RobotControl_Return& RobotControl_Return::operator=(RobotControl_Return&&  other_) OMG_NOEXCEPT {
    RobotControl_Return tmp(std::move(other_));
    swap(tmp); 
    return *this;
}
#endif
#endif 

RobotControl_Return::Union_::Union_() :
    m_unknownOp_ (0)  {
}

RobotControl_Return::Union_::Union_(
    const RobotControl_walk_to_Result& walk_to,
    const RobotControl_set_config_Result& set_config,
    const RobotControl_get_speed_Result& get_speed,
    uint8_t unknownOp)
    :
        m_walk_to_( walk_to ),
        m_set_config_( set_config ),
        m_get_speed_( get_speed ),
        m_unknownOp_( unknownOp ) {
}

RobotControl_Return::RobotControl_Return() :m_d_(default_discriminator())
{
}

void RobotControl_Return::swap(RobotControl_Return& other_)  OMG_NOEXCEPT 
{
    using std::swap;
    swap (m_d_,other_.m_d_);
    switch(::rti::topic::cdr::integer_case(_d())){
        case RobotControl_walk_to_Hash:
        {  
            swap(m_u_.m_walk_to_, other_.m_u_.m_walk_to_);
        } break;
        case RobotControl_set_config_Hash:
        {  
            swap(m_u_.m_set_config_, other_.m_u_.m_set_config_);
        } break;
        case RobotControl_get_speed_Hash:
        {  
            swap(m_u_.m_get_speed_, other_.m_u_.m_get_speed_);
        } break;
        default:
        {  
            swap(m_u_.m_unknownOp_, other_.m_u_.m_unknownOp_);
        } ;

    }
    if (_d() != other_._d()){
        switch(::rti::topic::cdr::integer_case(other_._d())){
            case RobotControl_walk_to_Hash:
            {  
                swap(m_u_.m_walk_to_, other_.m_u_.m_walk_to_);
            } break;
            case RobotControl_set_config_Hash:
            {  
                swap(m_u_.m_set_config_, other_.m_u_.m_set_config_);
            } break;
            case RobotControl_get_speed_Hash:
            {  
                swap(m_u_.m_get_speed_, other_.m_u_.m_get_speed_);
            } break;
            default:
            {  
                swap(m_u_.m_unknownOp_, other_.m_u_.m_unknownOp_);
            } ;

        }
    }
}  

bool RobotControl_Return::operator == (const RobotControl_Return& other_) const {
    if (_d() != other_._d()){
        return false;
    }
    switch(::rti::topic::cdr::integer_case(_d())){
        case RobotControl_walk_to_Hash:
        {  
            if ( m_u_.m_walk_to_ != other_.m_u_.m_walk_to_) {
                return false;
            }
        } break ;
        case RobotControl_set_config_Hash:
        {  
            if ( m_u_.m_set_config_ != other_.m_u_.m_set_config_) {
                return false;
            }
        } break ;
        case RobotControl_get_speed_Hash:
        {  
            if ( m_u_.m_get_speed_ != other_.m_u_.m_get_speed_) {
                return false;
            }
        } break ;
        default:
        {  
            if ( m_u_.m_unknownOp_ != other_.m_u_.m_unknownOp_) {
                return false;
            }
        } ;
    }
    return true;
}
bool RobotControl_Return::operator != (const RobotControl_Return& other_) const {
    return !this->operator ==(other_);
}

std::ostream& operator << (std::ostream& o,const RobotControl_Return& sample)
{
    ::rti::util::StreamFlagSaver flag_saver (o);
    o <<"[";
    o << "_d: " << sample._d() <<", ";
    switch(::rti::topic::cdr::integer_case(sample._d())){
        case RobotControl_walk_to_Hash:
        {  
            o << "walk_to: " << sample.walk_to()<<", ";
        } break ;
        case RobotControl_set_config_Hash:
        {  
            o << "set_config: " << sample.set_config()<<", ";
        } break ;
        case RobotControl_get_speed_Hash:
        {  
            o << "get_speed: " << sample.get_speed()<<", ";
        } break ;
        default:
        {  
            o << "unknownOp: <" << std::hex<<(int)sample.unknownOp()  ;        } ;

    }
    o <<"]";
    return o;
}

int32_t RobotControl_Return::default_discriminator() {
    return 0;
}  

RobotControlClient::RobotControlClient(const dds::rpc::ClientParams& params)
: RobotControlClientEndpoint(params)
{
}

//
// @service functions:
//

Coordinates RobotControlClient::walk_to (
    const Coordinates &dest, float speed) {
    auto request_id = send_walk_to(
        dest,
        speed);
    return receive_walk_to(request_id);

}

int32_t RobotControlClient::set_config (
    ) {
    auto request_id = send_set_config(
        );
    return receive_set_config(request_id);

}

float RobotControlClient::get_speed (
    ) {
    auto request_id = send_get_speed(
        );
    return receive_get_speed(request_id);

}

std::future<Coordinates> RobotControlClient::walk_to_async (
    const Coordinates &dest, float speed) {
    auto request_id = send_walk_to(
        dest,
        speed);
    auto service = *this;
    return std::async(std::launch::deferred, [service, request_id]() mutable {
        return service.receive_walk_to(request_id);
    });
}

std::future<int32_t> RobotControlClient::set_config_async (
    ) {
    auto request_id = send_set_config(
        );
    auto service = *this;
    return std::async(std::launch::deferred, [service, request_id]() mutable {
        return service.receive_set_config(request_id);
    });
}

std::future<float> RobotControlClient::get_speed_async (
    ) {
    auto request_id = send_get_speed(
        );
    auto service = *this;
    return std::async(std::launch::deferred, [service, request_id]() mutable {
        return service.receive_get_speed(request_id);
    });
}

//
// Helper functions (send, receive)
//

// --- RobotControlClient: ----------------------------------------------------

rti::core::SampleIdentity RobotControlClient::send_walk_to (
    const Coordinates &dest, float speed) {
    rti::core::EntityLock lock(request_datawriter());
    auto& request = scratchpad_request();
    request.walk_to ( RobotControl_walk_to_In(
        dest,
        speed));
    return send_request();
}

rti::core::SampleIdentity RobotControlClient::send_set_config (
    ) {
    rti::core::EntityLock lock(request_datawriter());
    auto& request = scratchpad_request();
    request.set_config ( RobotControl_set_config_In(
        ));
    return send_request();
}

rti::core::SampleIdentity RobotControlClient::send_get_speed (
    ) {
    rti::core::EntityLock lock(request_datawriter());
    auto& request = scratchpad_request();
    request.get_speed ( RobotControl_get_speed_In(
        ));
    return send_request();
}

Coordinates     RobotControlClient::receive_walk_to (
    const rti::core::SampleIdentity& request_id) {
    auto replies = receive_reply(request_id, RobotControl_walk_to_Hash);
    const auto& result = replies[0].data().walk_to();

    switch (result._d()) {
        case 0:
        return result.result().return_();
        default:
        throw dds::core::Error("unknown remote exception");
        break;
    }
}
int32_t     RobotControlClient::receive_set_config (
    const rti::core::SampleIdentity& request_id) {
    auto replies = receive_reply(request_id, RobotControl_set_config_Hash);
    const auto& result = replies[0].data().set_config();

    switch (result._d()) {
        case 0:
        return result.result().return_();
        default:
        throw dds::core::Error("unknown remote exception");
        break;
    }
}
float     RobotControlClient::receive_get_speed (
    const rti::core::SampleIdentity& request_id) {
    auto replies = receive_reply(request_id, RobotControl_get_speed_Hash);
    const auto& result = replies[0].data().get_speed();

    switch (result._d()) {
        case 0:
        return result.result().return_();
        default:
        throw dds::core::Error("unknown remote exception");
        break;
    }
}

// --- RobotControlDispatcher: ------------------------------------------------

void RobotControlDispatcher::dispatch_request(
    InterfaceType* service_impl,
    ReplyType& result,
    const RequestType& request)
{
    switch (request._d()) {
        case RobotControl_walk_to_Hash:
        dispatch_walk_to(service_impl, result, request);
        break;
        case RobotControl_set_config_Hash:
        dispatch_set_config(service_impl, result, request);
        break;
        case RobotControl_get_speed_Hash:
        dispatch_get_speed(service_impl, result, request);
        break;
        default:  // Unknown operation
        result._d(0); // NOTE: using 0 to not select any union case (default union case)
    }
}

void RobotControlDispatcher::dispatch_walk_to(
    InterfaceType* service_impl,
    ReplyType& result,
    const RequestType& request)
{
    result._d(RobotControl_walk_to_Hash);
    try {
        result.walk_to()._d(0);

        result.walk_to().result().return_() =
        service_impl->walk_to(
            request.walk_to().dest(),
            request.walk_to().speed());
    }
    catch (...) {
        result.walk_to()._d(/* dds::REMOTE_EX_UNKNOWN_EXCEPTION */ -1);
    }
}
void RobotControlDispatcher::dispatch_set_config(
    InterfaceType* service_impl,
    ReplyType& result,
    const RequestType& )
{
    result._d(RobotControl_set_config_Hash);
    try {
        result.set_config()._d(0);

        result.set_config().result().return_() =
        service_impl->set_config(
            );
    }
    catch (...) {
        result.set_config()._d(/* dds::REMOTE_EX_UNKNOWN_EXCEPTION */ -1);
    }
}
void RobotControlDispatcher::dispatch_get_speed(
    InterfaceType* service_impl,
    ReplyType& result,
    const RequestType& )
{
    result._d(RobotControl_get_speed_Hash);
    try {
        result.get_speed()._d(0);

        result.get_speed().result().return_() =
        service_impl->get_speed(
            );
    }
    catch (...) {
        result.get_speed()._d(/* dds::REMOTE_EX_UNKNOWN_EXCEPTION */ -1);
    }
}

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< Coordinates > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member Coordinates_g_tc_members[2]=
                {

                    {
                        (char *)"x",/* Member name */
                        {
                            0,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"y",/* Member name */
                        {
                            1,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode Coordinates_g_tc =
                {{
                        DDS_TK_STRUCT| DDS_TK_FINAL_EXTENSIBILITY, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"Coordinates", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        Coordinates_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for Coordinates*/

                if (is_initialized) {
                    return &Coordinates_g_tc;
                }

                Coordinates_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                Coordinates_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
                Coordinates_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

                /* Initialize the values for member annotations. */
                Coordinates_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                Coordinates_g_tc_members[0]._annotations._defaultValue._u.long_value = 0;
                Coordinates_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                Coordinates_g_tc_members[0]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                Coordinates_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                Coordinates_g_tc_members[0]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

                Coordinates_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                Coordinates_g_tc_members[1]._annotations._defaultValue._u.long_value = 0;
                Coordinates_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                Coordinates_g_tc_members[1]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                Coordinates_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                Coordinates_g_tc_members[1]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

                Coordinates_g_tc._data._sampleAccessInfo = sample_access_info();
                Coordinates_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &Coordinates_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                Coordinates *sample;

                static RTIXCdrMemberAccessInfo Coordinates_g_memberAccessInfos[2] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo Coordinates_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &Coordinates_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    Coordinates);
                if (sample == NULL) {
                    return NULL;
                }

                Coordinates_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->x() - (char *)sample);

                Coordinates_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->y() - (char *)sample);

                Coordinates_g_sampleAccessInfo.memberAccessInfos = 
                Coordinates_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(Coordinates);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        Coordinates_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        Coordinates_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                Coordinates_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                Coordinates_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< Coordinates >;

                Coordinates_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &Coordinates_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin Coordinates_g_typePlugin = 
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
                    NULL
                };

                return &Coordinates_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< Coordinates >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< Coordinates >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< RobotControl_walk_to_In > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member RobotControl_walk_to_In_g_tc_members[2]=
                {

                    {
                        (char *)"dest",/* Member name */
                        {
                            0,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"speed",/* Member name */
                        {
                            1,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode RobotControl_walk_to_In_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"RobotControl_walk_to_In", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        RobotControl_walk_to_In_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for RobotControl_walk_to_In*/

                if (is_initialized) {
                    return &RobotControl_walk_to_In_g_tc;
                }

                RobotControl_walk_to_In_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                RobotControl_walk_to_In_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< Coordinates>::get().native();
                RobotControl_walk_to_In_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

                /* Initialize the values for member annotations. */

                RobotControl_walk_to_In_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_FLOAT;
                RobotControl_walk_to_In_g_tc_members[1]._annotations._defaultValue._u.float_value = 0.0f;
                RobotControl_walk_to_In_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_FLOAT;
                RobotControl_walk_to_In_g_tc_members[1]._annotations._minValue._u.float_value = RTIXCdrFloat_MIN;
                RobotControl_walk_to_In_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_FLOAT;
                RobotControl_walk_to_In_g_tc_members[1]._annotations._maxValue._u.float_value = RTIXCdrFloat_MAX;

                RobotControl_walk_to_In_g_tc._data._sampleAccessInfo = sample_access_info();
                RobotControl_walk_to_In_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &RobotControl_walk_to_In_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                RobotControl_walk_to_In *sample;

                static RTIXCdrMemberAccessInfo RobotControl_walk_to_In_g_memberAccessInfos[2] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo RobotControl_walk_to_In_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &RobotControl_walk_to_In_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    RobotControl_walk_to_In);
                if (sample == NULL) {
                    return NULL;
                }

                RobotControl_walk_to_In_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->dest() - (char *)sample);

                RobotControl_walk_to_In_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->speed() - (char *)sample);

                RobotControl_walk_to_In_g_sampleAccessInfo.memberAccessInfos = 
                RobotControl_walk_to_In_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(RobotControl_walk_to_In);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        RobotControl_walk_to_In_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        RobotControl_walk_to_In_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                RobotControl_walk_to_In_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                RobotControl_walk_to_In_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< RobotControl_walk_to_In >;

                RobotControl_walk_to_In_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &RobotControl_walk_to_In_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin RobotControl_walk_to_In_g_typePlugin = 
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
                    NULL
                };

                return &RobotControl_walk_to_In_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< RobotControl_walk_to_In >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< RobotControl_walk_to_In >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< RobotControl_walk_to_Out > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member RobotControl_walk_to_Out_g_tc_members[1]=
                {

                    {
                        (char *)"return_",/* Member name */
                        {
                            0,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode RobotControl_walk_to_Out_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"RobotControl_walk_to_Out", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        RobotControl_walk_to_Out_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for RobotControl_walk_to_Out*/

                if (is_initialized) {
                    return &RobotControl_walk_to_Out_g_tc;
                }

                RobotControl_walk_to_Out_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                RobotControl_walk_to_Out_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< Coordinates>::get().native();

                /* Initialize the values for member annotations. */

                RobotControl_walk_to_Out_g_tc._data._sampleAccessInfo = sample_access_info();
                RobotControl_walk_to_Out_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &RobotControl_walk_to_Out_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                RobotControl_walk_to_Out *sample;

                static RTIXCdrMemberAccessInfo RobotControl_walk_to_Out_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo RobotControl_walk_to_Out_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &RobotControl_walk_to_Out_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    RobotControl_walk_to_Out);
                if (sample == NULL) {
                    return NULL;
                }

                RobotControl_walk_to_Out_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->return_() - (char *)sample);

                RobotControl_walk_to_Out_g_sampleAccessInfo.memberAccessInfos = 
                RobotControl_walk_to_Out_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(RobotControl_walk_to_Out);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        RobotControl_walk_to_Out_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        RobotControl_walk_to_Out_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                RobotControl_walk_to_Out_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                RobotControl_walk_to_Out_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< RobotControl_walk_to_Out >;

                RobotControl_walk_to_Out_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &RobotControl_walk_to_Out_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin RobotControl_walk_to_Out_g_typePlugin = 
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
                    NULL
                };

                return &RobotControl_walk_to_Out_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< RobotControl_walk_to_Out >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< RobotControl_walk_to_Out >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< RobotControl_walk_to_Result > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member RobotControl_walk_to_Result_g_tc_members[1]=
                {

                    {
                        (char *)"result",/* Member name */
                        {
                            1,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>(0),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode RobotControl_walk_to_Result_g_tc =
                {{
                        DDS_TK_UNION, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"RobotControl_walk_to_Result", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        RobotControl_walk_to_Result_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for RobotControl_walk_to_Result*/

                if (is_initialized) {
                    return &RobotControl_walk_to_Result_g_tc;
                }

                RobotControl_walk_to_Result_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                RobotControl_walk_to_Result_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< RobotControl_walk_to_Out>::get().native();

                /* Initialize the values for member annotations. */

                /* Discriminator type code */
                RobotControl_walk_to_Result_g_tc._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

                RobotControl_walk_to_Result_g_tc._data._sampleAccessInfo = sample_access_info();
                RobotControl_walk_to_Result_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &RobotControl_walk_to_Result_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                RobotControl_walk_to_Result *sample;

                static RTIXCdrMemberAccessInfo RobotControl_walk_to_Result_g_memberAccessInfos[2] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo RobotControl_walk_to_Result_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &RobotControl_walk_to_Result_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    RobotControl_walk_to_Result);
                if (sample == NULL) {
                    return NULL;
                }

                RobotControl_walk_to_Result_g_memberAccessInfos[0].bindingMemberValueOffset[0] =
                (RTIXCdrUnsignedLong) ((char *)&sample->_d() - (char *)sample);

                sample->_d() = 0;
                RobotControl_walk_to_Result_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->result() - (char *)sample);

                RobotControl_walk_to_Result_g_sampleAccessInfo.memberAccessInfos = 
                RobotControl_walk_to_Result_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(RobotControl_walk_to_Result);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        RobotControl_walk_to_Result_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        RobotControl_walk_to_Result_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                RobotControl_walk_to_Result_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                RobotControl_walk_to_Result_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< RobotControl_walk_to_Result >;

                RobotControl_walk_to_Result_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &RobotControl_walk_to_Result_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin RobotControl_walk_to_Result_g_typePlugin = 
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
                    NULL
                };

                return &RobotControl_walk_to_Result_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::UnionType& dynamic_type< RobotControl_walk_to_Result >::get()
        {
            return static_cast<const ::dds::core::xtypes::UnionType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< RobotControl_walk_to_Result >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< RobotControl_set_config_In > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member RobotControl_set_config_In_g_tc_members[1]=
                {

                    {
                        (char *)"dummy",/* Member name */
                        {
                            0,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode RobotControl_set_config_In_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"RobotControl_set_config_In", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        RobotControl_set_config_In_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for RobotControl_set_config_In*/

                if (is_initialized) {
                    return &RobotControl_set_config_In_g_tc;
                }

                RobotControl_set_config_In_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                RobotControl_set_config_In_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

                /* Initialize the values for member annotations. */
                RobotControl_set_config_In_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_OCTET;
                RobotControl_set_config_In_g_tc_members[0]._annotations._defaultValue._u.octet_value = 0;
                RobotControl_set_config_In_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_OCTET;
                RobotControl_set_config_In_g_tc_members[0]._annotations._minValue._u.octet_value = RTIXCdrOctet_MIN;
                RobotControl_set_config_In_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_OCTET;
                RobotControl_set_config_In_g_tc_members[0]._annotations._maxValue._u.octet_value = RTIXCdrOctet_MAX;

                RobotControl_set_config_In_g_tc._data._sampleAccessInfo = sample_access_info();
                RobotControl_set_config_In_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &RobotControl_set_config_In_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                RobotControl_set_config_In *sample;

                static RTIXCdrMemberAccessInfo RobotControl_set_config_In_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo RobotControl_set_config_In_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &RobotControl_set_config_In_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    RobotControl_set_config_In);
                if (sample == NULL) {
                    return NULL;
                }

                RobotControl_set_config_In_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->dummy() - (char *)sample);

                RobotControl_set_config_In_g_sampleAccessInfo.memberAccessInfos = 
                RobotControl_set_config_In_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(RobotControl_set_config_In);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        RobotControl_set_config_In_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        RobotControl_set_config_In_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                RobotControl_set_config_In_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                RobotControl_set_config_In_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< RobotControl_set_config_In >;

                RobotControl_set_config_In_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &RobotControl_set_config_In_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin RobotControl_set_config_In_g_typePlugin = 
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
                    NULL
                };

                return &RobotControl_set_config_In_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< RobotControl_set_config_In >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< RobotControl_set_config_In >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< RobotControl_set_config_Out > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member RobotControl_set_config_Out_g_tc_members[1]=
                {

                    {
                        (char *)"return_",/* Member name */
                        {
                            0,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode RobotControl_set_config_Out_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"RobotControl_set_config_Out", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        RobotControl_set_config_Out_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for RobotControl_set_config_Out*/

                if (is_initialized) {
                    return &RobotControl_set_config_Out_g_tc;
                }

                RobotControl_set_config_Out_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                RobotControl_set_config_Out_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

                /* Initialize the values for member annotations. */
                RobotControl_set_config_Out_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                RobotControl_set_config_Out_g_tc_members[0]._annotations._defaultValue._u.long_value = 0;
                RobotControl_set_config_Out_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                RobotControl_set_config_Out_g_tc_members[0]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                RobotControl_set_config_Out_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                RobotControl_set_config_Out_g_tc_members[0]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

                RobotControl_set_config_Out_g_tc._data._sampleAccessInfo = sample_access_info();
                RobotControl_set_config_Out_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &RobotControl_set_config_Out_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                RobotControl_set_config_Out *sample;

                static RTIXCdrMemberAccessInfo RobotControl_set_config_Out_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo RobotControl_set_config_Out_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &RobotControl_set_config_Out_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    RobotControl_set_config_Out);
                if (sample == NULL) {
                    return NULL;
                }

                RobotControl_set_config_Out_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->return_() - (char *)sample);

                RobotControl_set_config_Out_g_sampleAccessInfo.memberAccessInfos = 
                RobotControl_set_config_Out_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(RobotControl_set_config_Out);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        RobotControl_set_config_Out_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        RobotControl_set_config_Out_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                RobotControl_set_config_Out_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                RobotControl_set_config_Out_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< RobotControl_set_config_Out >;

                RobotControl_set_config_Out_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &RobotControl_set_config_Out_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin RobotControl_set_config_Out_g_typePlugin = 
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
                    NULL
                };

                return &RobotControl_set_config_Out_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< RobotControl_set_config_Out >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< RobotControl_set_config_Out >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< RobotControl_set_config_Result > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member RobotControl_set_config_Result_g_tc_members[1]=
                {

                    {
                        (char *)"result",/* Member name */
                        {
                            1,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>(0),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode RobotControl_set_config_Result_g_tc =
                {{
                        DDS_TK_UNION, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"RobotControl_set_config_Result", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        RobotControl_set_config_Result_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for RobotControl_set_config_Result*/

                if (is_initialized) {
                    return &RobotControl_set_config_Result_g_tc;
                }

                RobotControl_set_config_Result_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                RobotControl_set_config_Result_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< RobotControl_set_config_Out>::get().native();

                /* Initialize the values for member annotations. */

                /* Discriminator type code */
                RobotControl_set_config_Result_g_tc._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

                RobotControl_set_config_Result_g_tc._data._sampleAccessInfo = sample_access_info();
                RobotControl_set_config_Result_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &RobotControl_set_config_Result_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                RobotControl_set_config_Result *sample;

                static RTIXCdrMemberAccessInfo RobotControl_set_config_Result_g_memberAccessInfos[2] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo RobotControl_set_config_Result_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &RobotControl_set_config_Result_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    RobotControl_set_config_Result);
                if (sample == NULL) {
                    return NULL;
                }

                RobotControl_set_config_Result_g_memberAccessInfos[0].bindingMemberValueOffset[0] =
                (RTIXCdrUnsignedLong) ((char *)&sample->_d() - (char *)sample);

                sample->_d() = 0;
                RobotControl_set_config_Result_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->result() - (char *)sample);

                RobotControl_set_config_Result_g_sampleAccessInfo.memberAccessInfos = 
                RobotControl_set_config_Result_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(RobotControl_set_config_Result);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        RobotControl_set_config_Result_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        RobotControl_set_config_Result_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                RobotControl_set_config_Result_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                RobotControl_set_config_Result_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< RobotControl_set_config_Result >;

                RobotControl_set_config_Result_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &RobotControl_set_config_Result_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin RobotControl_set_config_Result_g_typePlugin = 
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
                    NULL
                };

                return &RobotControl_set_config_Result_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::UnionType& dynamic_type< RobotControl_set_config_Result >::get()
        {
            return static_cast<const ::dds::core::xtypes::UnionType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< RobotControl_set_config_Result >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< RobotControl_get_speed_In > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member RobotControl_get_speed_In_g_tc_members[1]=
                {

                    {
                        (char *)"dummy",/* Member name */
                        {
                            0,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode RobotControl_get_speed_In_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"RobotControl_get_speed_In", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        RobotControl_get_speed_In_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for RobotControl_get_speed_In*/

                if (is_initialized) {
                    return &RobotControl_get_speed_In_g_tc;
                }

                RobotControl_get_speed_In_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                RobotControl_get_speed_In_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

                /* Initialize the values for member annotations. */
                RobotControl_get_speed_In_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_OCTET;
                RobotControl_get_speed_In_g_tc_members[0]._annotations._defaultValue._u.octet_value = 0;
                RobotControl_get_speed_In_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_OCTET;
                RobotControl_get_speed_In_g_tc_members[0]._annotations._minValue._u.octet_value = RTIXCdrOctet_MIN;
                RobotControl_get_speed_In_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_OCTET;
                RobotControl_get_speed_In_g_tc_members[0]._annotations._maxValue._u.octet_value = RTIXCdrOctet_MAX;

                RobotControl_get_speed_In_g_tc._data._sampleAccessInfo = sample_access_info();
                RobotControl_get_speed_In_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &RobotControl_get_speed_In_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                RobotControl_get_speed_In *sample;

                static RTIXCdrMemberAccessInfo RobotControl_get_speed_In_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo RobotControl_get_speed_In_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &RobotControl_get_speed_In_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    RobotControl_get_speed_In);
                if (sample == NULL) {
                    return NULL;
                }

                RobotControl_get_speed_In_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->dummy() - (char *)sample);

                RobotControl_get_speed_In_g_sampleAccessInfo.memberAccessInfos = 
                RobotControl_get_speed_In_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(RobotControl_get_speed_In);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        RobotControl_get_speed_In_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        RobotControl_get_speed_In_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                RobotControl_get_speed_In_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                RobotControl_get_speed_In_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< RobotControl_get_speed_In >;

                RobotControl_get_speed_In_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &RobotControl_get_speed_In_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin RobotControl_get_speed_In_g_typePlugin = 
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
                    NULL
                };

                return &RobotControl_get_speed_In_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< RobotControl_get_speed_In >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< RobotControl_get_speed_In >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< RobotControl_get_speed_Out > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member RobotControl_get_speed_Out_g_tc_members[1]=
                {

                    {
                        (char *)"return_",/* Member name */
                        {
                            0,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode RobotControl_get_speed_Out_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"RobotControl_get_speed_Out", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        RobotControl_get_speed_Out_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for RobotControl_get_speed_Out*/

                if (is_initialized) {
                    return &RobotControl_get_speed_Out_g_tc;
                }

                RobotControl_get_speed_Out_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                RobotControl_get_speed_Out_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

                /* Initialize the values for member annotations. */
                RobotControl_get_speed_Out_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_FLOAT;
                RobotControl_get_speed_Out_g_tc_members[0]._annotations._defaultValue._u.float_value = 0.0f;
                RobotControl_get_speed_Out_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_FLOAT;
                RobotControl_get_speed_Out_g_tc_members[0]._annotations._minValue._u.float_value = RTIXCdrFloat_MIN;
                RobotControl_get_speed_Out_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_FLOAT;
                RobotControl_get_speed_Out_g_tc_members[0]._annotations._maxValue._u.float_value = RTIXCdrFloat_MAX;

                RobotControl_get_speed_Out_g_tc._data._sampleAccessInfo = sample_access_info();
                RobotControl_get_speed_Out_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &RobotControl_get_speed_Out_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                RobotControl_get_speed_Out *sample;

                static RTIXCdrMemberAccessInfo RobotControl_get_speed_Out_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo RobotControl_get_speed_Out_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &RobotControl_get_speed_Out_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    RobotControl_get_speed_Out);
                if (sample == NULL) {
                    return NULL;
                }

                RobotControl_get_speed_Out_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->return_() - (char *)sample);

                RobotControl_get_speed_Out_g_sampleAccessInfo.memberAccessInfos = 
                RobotControl_get_speed_Out_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(RobotControl_get_speed_Out);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        RobotControl_get_speed_Out_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        RobotControl_get_speed_Out_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                RobotControl_get_speed_Out_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                RobotControl_get_speed_Out_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< RobotControl_get_speed_Out >;

                RobotControl_get_speed_Out_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &RobotControl_get_speed_Out_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin RobotControl_get_speed_Out_g_typePlugin = 
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
                    NULL
                };

                return &RobotControl_get_speed_Out_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< RobotControl_get_speed_Out >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< RobotControl_get_speed_Out >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< RobotControl_get_speed_Result > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member RobotControl_get_speed_Result_g_tc_members[1]=
                {

                    {
                        (char *)"result",/* Member name */
                        {
                            1,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>(0),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode RobotControl_get_speed_Result_g_tc =
                {{
                        DDS_TK_UNION, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"RobotControl_get_speed_Result", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        RobotControl_get_speed_Result_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for RobotControl_get_speed_Result*/

                if (is_initialized) {
                    return &RobotControl_get_speed_Result_g_tc;
                }

                RobotControl_get_speed_Result_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                RobotControl_get_speed_Result_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< RobotControl_get_speed_Out>::get().native();

                /* Initialize the values for member annotations. */

                /* Discriminator type code */
                RobotControl_get_speed_Result_g_tc._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

                RobotControl_get_speed_Result_g_tc._data._sampleAccessInfo = sample_access_info();
                RobotControl_get_speed_Result_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &RobotControl_get_speed_Result_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                RobotControl_get_speed_Result *sample;

                static RTIXCdrMemberAccessInfo RobotControl_get_speed_Result_g_memberAccessInfos[2] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo RobotControl_get_speed_Result_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &RobotControl_get_speed_Result_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    RobotControl_get_speed_Result);
                if (sample == NULL) {
                    return NULL;
                }

                RobotControl_get_speed_Result_g_memberAccessInfos[0].bindingMemberValueOffset[0] =
                (RTIXCdrUnsignedLong) ((char *)&sample->_d() - (char *)sample);

                sample->_d() = 0;
                RobotControl_get_speed_Result_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->result() - (char *)sample);

                RobotControl_get_speed_Result_g_sampleAccessInfo.memberAccessInfos = 
                RobotControl_get_speed_Result_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(RobotControl_get_speed_Result);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        RobotControl_get_speed_Result_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        RobotControl_get_speed_Result_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                RobotControl_get_speed_Result_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                RobotControl_get_speed_Result_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< RobotControl_get_speed_Result >;

                RobotControl_get_speed_Result_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &RobotControl_get_speed_Result_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin RobotControl_get_speed_Result_g_typePlugin = 
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
                    NULL
                };

                return &RobotControl_get_speed_Result_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::UnionType& dynamic_type< RobotControl_get_speed_Result >::get()
        {
            return static_cast<const ::dds::core::xtypes::UnionType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< RobotControl_get_speed_Result >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< RobotControl_Call > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member RobotControl_Call_g_tc_members[4]=
                {

                    {
                        (char *)"walk_to",/* Member name */
                        {
                            1,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>(RobotControl_walk_to_Hash),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"set_config",/* Member name */
                        {
                            2,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>(RobotControl_set_config_Hash),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"get_speed",/* Member name */
                        {
                            3,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>(RobotControl_get_speed_Hash),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"unknownOp",/* Member name */
                        {
                            4,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        RTI_CDR_TYPE_CODE_UNION_DEFAULT_LABEL, /* First label */
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode RobotControl_Call_g_tc =
                {{
                        DDS_TK_UNION, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        3, /*Ignored*/
                        (char *)"RobotControl_Call", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        RobotControl_Call_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for RobotControl_Call*/

                if (is_initialized) {
                    return &RobotControl_Call_g_tc;
                }

                RobotControl_Call_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                RobotControl_Call_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< RobotControl_walk_to_In>::get().native();
                RobotControl_Call_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< RobotControl_set_config_In>::get().native();
                RobotControl_Call_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< RobotControl_get_speed_In>::get().native();
                RobotControl_Call_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

                /* Initialize the values for member annotations. */

                RobotControl_Call_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_OCTET;
                RobotControl_Call_g_tc_members[3]._annotations._defaultValue._u.octet_value = 0;
                RobotControl_Call_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_OCTET;
                RobotControl_Call_g_tc_members[3]._annotations._minValue._u.octet_value = RTIXCdrOctet_MIN;
                RobotControl_Call_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_OCTET;
                RobotControl_Call_g_tc_members[3]._annotations._maxValue._u.octet_value = RTIXCdrOctet_MAX;

                /* Discriminator type code */
                RobotControl_Call_g_tc._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

                RobotControl_Call_g_tc._data._sampleAccessInfo = sample_access_info();
                RobotControl_Call_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &RobotControl_Call_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                RobotControl_Call *sample;

                static RTIXCdrMemberAccessInfo RobotControl_Call_g_memberAccessInfos[5] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo RobotControl_Call_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &RobotControl_Call_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    RobotControl_Call);
                if (sample == NULL) {
                    return NULL;
                }

                RobotControl_Call_g_memberAccessInfos[0].bindingMemberValueOffset[0] =
                (RTIXCdrUnsignedLong) ((char *)&sample->_d() - (char *)sample);

                sample->_d() = RobotControl_walk_to_Hash;
                RobotControl_Call_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->walk_to() - (char *)sample);

                sample->_d() = RobotControl_set_config_Hash;
                RobotControl_Call_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->set_config() - (char *)sample);

                sample->_d() = RobotControl_get_speed_Hash;
                RobotControl_Call_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->get_speed() - (char *)sample);

                sample->_d() = RobotControl_Call::default_discriminator();
                RobotControl_Call_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->unknownOp() - (char *)sample);

                RobotControl_Call_g_sampleAccessInfo.memberAccessInfos = 
                RobotControl_Call_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(RobotControl_Call);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        RobotControl_Call_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        RobotControl_Call_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                RobotControl_Call_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                RobotControl_Call_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< RobotControl_Call >;

                RobotControl_Call_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &RobotControl_Call_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin RobotControl_Call_g_typePlugin = 
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
                    NULL
                };

                return &RobotControl_Call_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::UnionType& dynamic_type< RobotControl_Call >::get()
        {
            return static_cast<const ::dds::core::xtypes::UnionType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< RobotControl_Call >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< RobotControl_Return > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member RobotControl_Return_g_tc_members[4]=
                {

                    {
                        (char *)"walk_to",/* Member name */
                        {
                            1,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>(RobotControl_walk_to_Hash),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"set_config",/* Member name */
                        {
                            2,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>(RobotControl_set_config_Hash),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"get_speed",/* Member name */
                        {
                            3,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>(RobotControl_get_speed_Hash),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"unknownOp",/* Member name */
                        {
                            4,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        RTI_CDR_TYPE_CODE_UNION_DEFAULT_LABEL, /* First label */
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode RobotControl_Return_g_tc =
                {{
                        DDS_TK_UNION, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        3, /*Ignored*/
                        (char *)"RobotControl_Return", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        RobotControl_Return_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for RobotControl_Return*/

                if (is_initialized) {
                    return &RobotControl_Return_g_tc;
                }

                RobotControl_Return_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                RobotControl_Return_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< RobotControl_walk_to_Result>::get().native();
                RobotControl_Return_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< RobotControl_set_config_Result>::get().native();
                RobotControl_Return_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< RobotControl_get_speed_Result>::get().native();
                RobotControl_Return_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

                /* Initialize the values for member annotations. */

                RobotControl_Return_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_OCTET;
                RobotControl_Return_g_tc_members[3]._annotations._defaultValue._u.octet_value = 0;
                RobotControl_Return_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_OCTET;
                RobotControl_Return_g_tc_members[3]._annotations._minValue._u.octet_value = RTIXCdrOctet_MIN;
                RobotControl_Return_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_OCTET;
                RobotControl_Return_g_tc_members[3]._annotations._maxValue._u.octet_value = RTIXCdrOctet_MAX;

                /* Discriminator type code */
                RobotControl_Return_g_tc._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

                RobotControl_Return_g_tc._data._sampleAccessInfo = sample_access_info();
                RobotControl_Return_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &RobotControl_Return_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                RobotControl_Return *sample;

                static RTIXCdrMemberAccessInfo RobotControl_Return_g_memberAccessInfos[5] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo RobotControl_Return_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &RobotControl_Return_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    RobotControl_Return);
                if (sample == NULL) {
                    return NULL;
                }

                RobotControl_Return_g_memberAccessInfos[0].bindingMemberValueOffset[0] =
                (RTIXCdrUnsignedLong) ((char *)&sample->_d() - (char *)sample);

                sample->_d() = RobotControl_walk_to_Hash;
                RobotControl_Return_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->walk_to() - (char *)sample);

                sample->_d() = RobotControl_set_config_Hash;
                RobotControl_Return_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->set_config() - (char *)sample);

                sample->_d() = RobotControl_get_speed_Hash;
                RobotControl_Return_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->get_speed() - (char *)sample);

                sample->_d() = RobotControl_Return::default_discriminator();
                RobotControl_Return_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->unknownOp() - (char *)sample);

                RobotControl_Return_g_sampleAccessInfo.memberAccessInfos = 
                RobotControl_Return_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(RobotControl_Return);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        RobotControl_Return_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        RobotControl_Return_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                RobotControl_Return_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                RobotControl_Return_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< RobotControl_Return >;

                RobotControl_Return_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &RobotControl_Return_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin RobotControl_Return_g_typePlugin = 
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
                    NULL
                };

                return &RobotControl_Return_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::UnionType& dynamic_type< RobotControl_Return >::get()
        {
            return static_cast<const ::dds::core::xtypes::UnionType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< RobotControl_Return >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< Coordinates >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                CoordinatesPlugin_new,
                CoordinatesPlugin_delete);
        }

        std::vector<char>& topic_type_support< Coordinates >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const Coordinates& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = CoordinatesPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = CoordinatesPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< Coordinates >::from_cdr_buffer(Coordinates& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = CoordinatesPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create Coordinates from cdr buffer");
        }

        void topic_type_support< Coordinates >::reset_sample(Coordinates& sample) 
        {
            sample.x(0);
            sample.y(0);
        }

        void topic_type_support< Coordinates >::allocate_sample(Coordinates& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }

        void topic_type_support< RobotControl_walk_to_In >::reset_sample(RobotControl_walk_to_In& sample) 
        {
            ::rti::topic::reset_sample(sample.dest());
            sample.speed(0.0f);
        }

        void topic_type_support< RobotControl_walk_to_In >::allocate_sample(RobotControl_walk_to_In& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.dest(),  -1, -1);
        }

        void topic_type_support< RobotControl_walk_to_Out >::reset_sample(RobotControl_walk_to_Out& sample) 
        {
            ::rti::topic::reset_sample(sample.return_());
        }

        void topic_type_support< RobotControl_walk_to_Out >::allocate_sample(RobotControl_walk_to_Out& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.return_(),  -1, -1);
        }

        void topic_type_support< RobotControl_walk_to_Result >::reset_sample(RobotControl_walk_to_Result& sample) 
        {
            sample._d() = 0;
            ::rti::topic::reset_sample(sample.result());

            sample._d() = RobotControl_walk_to_Result::default_discriminator();
        }

        void topic_type_support< RobotControl_walk_to_Result >::allocate_sample(RobotControl_walk_to_Result& sample, int, int) 
        {
            sample._d() = 0;
            ::rti::topic::allocate_sample(sample.result(),  -1, -1);

            sample._d() = RobotControl_walk_to_Result::default_discriminator();
        }

        void topic_type_support< RobotControl_set_config_In >::reset_sample(RobotControl_set_config_In& sample) 
        {
            sample.dummy(0);
        }

        void topic_type_support< RobotControl_set_config_In >::allocate_sample(RobotControl_set_config_In& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }

        void topic_type_support< RobotControl_set_config_Out >::reset_sample(RobotControl_set_config_Out& sample) 
        {
            sample.return_(0);
        }

        void topic_type_support< RobotControl_set_config_Out >::allocate_sample(RobotControl_set_config_Out& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }

        void topic_type_support< RobotControl_set_config_Result >::reset_sample(RobotControl_set_config_Result& sample) 
        {
            sample._d() = 0;
            ::rti::topic::reset_sample(sample.result());

            sample._d() = RobotControl_set_config_Result::default_discriminator();
        }

        void topic_type_support< RobotControl_set_config_Result >::allocate_sample(RobotControl_set_config_Result& sample, int, int) 
        {
            sample._d() = 0;
            ::rti::topic::allocate_sample(sample.result(),  -1, -1);

            sample._d() = RobotControl_set_config_Result::default_discriminator();
        }

        void topic_type_support< RobotControl_get_speed_In >::reset_sample(RobotControl_get_speed_In& sample) 
        {
            sample.dummy(0);
        }

        void topic_type_support< RobotControl_get_speed_In >::allocate_sample(RobotControl_get_speed_In& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }

        void topic_type_support< RobotControl_get_speed_Out >::reset_sample(RobotControl_get_speed_Out& sample) 
        {
            sample.return_(0.0f);
        }

        void topic_type_support< RobotControl_get_speed_Out >::allocate_sample(RobotControl_get_speed_Out& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }

        void topic_type_support< RobotControl_get_speed_Result >::reset_sample(RobotControl_get_speed_Result& sample) 
        {
            sample._d() = 0;
            ::rti::topic::reset_sample(sample.result());

            sample._d() = RobotControl_get_speed_Result::default_discriminator();
        }

        void topic_type_support< RobotControl_get_speed_Result >::allocate_sample(RobotControl_get_speed_Result& sample, int, int) 
        {
            sample._d() = 0;
            ::rti::topic::allocate_sample(sample.result(),  -1, -1);

            sample._d() = RobotControl_get_speed_Result::default_discriminator();
        }

        void topic_type_support< RobotControl_Call >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                RobotControl_CallPlugin_new,
                RobotControl_CallPlugin_delete);
        }

        std::vector<char>& topic_type_support< RobotControl_Call >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const RobotControl_Call& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = RobotControl_CallPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = RobotControl_CallPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< RobotControl_Call >::from_cdr_buffer(RobotControl_Call& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = RobotControl_CallPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create RobotControl_Call from cdr buffer");
        }

        void topic_type_support< RobotControl_Call >::reset_sample(RobotControl_Call& sample) 
        {
            sample._d() = RobotControl_walk_to_Hash;
            ::rti::topic::reset_sample(sample.walk_to());
            sample._d() = RobotControl_set_config_Hash;
            ::rti::topic::reset_sample(sample.set_config());
            sample._d() = RobotControl_get_speed_Hash;
            ::rti::topic::reset_sample(sample.get_speed());
            sample._d() = RobotControl_Call::default_discriminator();
            sample.unknownOp(0);

            sample._d() = RobotControl_Call::default_discriminator();
        }

        void topic_type_support< RobotControl_Call >::allocate_sample(RobotControl_Call& sample, int, int) 
        {
            sample._d() = RobotControl_walk_to_Hash;
            ::rti::topic::allocate_sample(sample.walk_to(),  -1, -1);
            sample._d() = RobotControl_set_config_Hash;
            ::rti::topic::allocate_sample(sample.set_config(),  -1, -1);
            sample._d() = RobotControl_get_speed_Hash;
            ::rti::topic::allocate_sample(sample.get_speed(),  -1, -1);

            sample._d() = RobotControl_Call::default_discriminator();
        }

        void topic_type_support< RobotControl_Return >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                RobotControl_ReturnPlugin_new,
                RobotControl_ReturnPlugin_delete);
        }

        std::vector<char>& topic_type_support< RobotControl_Return >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const RobotControl_Return& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = RobotControl_ReturnPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = RobotControl_ReturnPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< RobotControl_Return >::from_cdr_buffer(RobotControl_Return& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = RobotControl_ReturnPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create RobotControl_Return from cdr buffer");
        }

        void topic_type_support< RobotControl_Return >::reset_sample(RobotControl_Return& sample) 
        {
            sample._d() = RobotControl_walk_to_Hash;
            ::rti::topic::reset_sample(sample.walk_to());
            sample._d() = RobotControl_set_config_Hash;
            ::rti::topic::reset_sample(sample.set_config());
            sample._d() = RobotControl_get_speed_Hash;
            ::rti::topic::reset_sample(sample.get_speed());
            sample._d() = RobotControl_Return::default_discriminator();
            sample.unknownOp(0);

            sample._d() = RobotControl_Return::default_discriminator();
        }

        void topic_type_support< RobotControl_Return >::allocate_sample(RobotControl_Return& sample, int, int) 
        {
            sample._d() = RobotControl_walk_to_Hash;
            ::rti::topic::allocate_sample(sample.walk_to(),  -1, -1);
            sample._d() = RobotControl_set_config_Hash;
            ::rti::topic::allocate_sample(sample.set_config(),  -1, -1);
            sample._d() = RobotControl_get_speed_Hash;
            ::rti::topic::allocate_sample(sample.get_speed(),  -1, -1);

            sample._d() = RobotControl_Return::default_discriminator();
        }

    }
}  

