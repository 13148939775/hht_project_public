

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from vehicle_door.idl
using RTI Code Generator (rtiddsgen) version 3.1.1.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "vehicle_door.hpp"
#include "vehicle_doorPlugin.hpp"

#include <rti/util/ostream_operators.hpp>

// ---- HDBI_DrLth_Set_struct: 

HDBI_DrLth_Set_struct::HDBI_DrLth_Set_struct() :
    m_DoorBit_ (0) ,
    m_OpenAngSet_Req_ (0ull)  {
}   

HDBI_DrLth_Set_struct::HDBI_DrLth_Set_struct (
    uint8_t DoorBit,
    uint64_t OpenAngSet_Req)
    :
        m_DoorBit_( DoorBit ),
        m_OpenAngSet_Req_( OpenAngSet_Req ) {
}

#ifdef RTI_CXX11_RVALUE_REFERENCES
#ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
HDBI_DrLth_Set_struct::HDBI_DrLth_Set_struct(HDBI_DrLth_Set_struct&& other_) OMG_NOEXCEPT  :m_DoorBit_ (std::move(other_.m_DoorBit_))
,
m_OpenAngSet_Req_ (std::move(other_.m_OpenAngSet_Req_))
{
} 

HDBI_DrLth_Set_struct& HDBI_DrLth_Set_struct::operator=(HDBI_DrLth_Set_struct&&  other_) OMG_NOEXCEPT {
    HDBI_DrLth_Set_struct tmp(std::move(other_));
    swap(tmp); 
    return *this;
}
#endif
#endif   

void HDBI_DrLth_Set_struct::swap(HDBI_DrLth_Set_struct& other_)  OMG_NOEXCEPT 
{
    using std::swap;
    swap(m_DoorBit_, other_.m_DoorBit_);
    swap(m_OpenAngSet_Req_, other_.m_OpenAngSet_Req_);
}  

bool HDBI_DrLth_Set_struct::operator == (const HDBI_DrLth_Set_struct& other_) const {
    if (m_DoorBit_ != other_.m_DoorBit_) {
        return false;
    }
    if (m_OpenAngSet_Req_ != other_.m_OpenAngSet_Req_) {
        return false;
    }
    return true;
}
bool HDBI_DrLth_Set_struct::operator != (const HDBI_DrLth_Set_struct& other_) const {
    return !this->operator ==(other_);
}

std::ostream& operator << (std::ostream& o,const HDBI_DrLth_Set_struct& sample)
{
    ::rti::util::StreamFlagSaver flag_saver (o);
    o <<"[";
    o << "DoorBit: " << (int)sample.DoorBit() <<", ";
    o << "OpenAngSet_Req: " << sample.OpenAngSet_Req() ;
    o <<"]";
    return o;
}

// ---- HDBM_DrLth_Rsp_struct: 

HDBM_DrLth_Rsp_struct::HDBM_DrLth_Rsp_struct() :
    m_DoorBit_ (0) ,
    m_OpenAngSet_Rsp_ (0ull)  {
}   

HDBM_DrLth_Rsp_struct::HDBM_DrLth_Rsp_struct (
    uint8_t DoorBit,
    uint64_t OpenAngSet_Rsp)
    :
        m_DoorBit_( DoorBit ),
        m_OpenAngSet_Rsp_( OpenAngSet_Rsp ) {
}

#ifdef RTI_CXX11_RVALUE_REFERENCES
#ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
HDBM_DrLth_Rsp_struct::HDBM_DrLth_Rsp_struct(HDBM_DrLth_Rsp_struct&& other_) OMG_NOEXCEPT  :m_DoorBit_ (std::move(other_.m_DoorBit_))
,
m_OpenAngSet_Rsp_ (std::move(other_.m_OpenAngSet_Rsp_))
{
} 

HDBM_DrLth_Rsp_struct& HDBM_DrLth_Rsp_struct::operator=(HDBM_DrLth_Rsp_struct&&  other_) OMG_NOEXCEPT {
    HDBM_DrLth_Rsp_struct tmp(std::move(other_));
    swap(tmp); 
    return *this;
}
#endif
#endif   

void HDBM_DrLth_Rsp_struct::swap(HDBM_DrLth_Rsp_struct& other_)  OMG_NOEXCEPT 
{
    using std::swap;
    swap(m_DoorBit_, other_.m_DoorBit_);
    swap(m_OpenAngSet_Rsp_, other_.m_OpenAngSet_Rsp_);
}  

bool HDBM_DrLth_Rsp_struct::operator == (const HDBM_DrLth_Rsp_struct& other_) const {
    if (m_DoorBit_ != other_.m_DoorBit_) {
        return false;
    }
    if (m_OpenAngSet_Rsp_ != other_.m_OpenAngSet_Rsp_) {
        return false;
    }
    return true;
}
bool HDBM_DrLth_Rsp_struct::operator != (const HDBM_DrLth_Rsp_struct& other_) const {
    return !this->operator ==(other_);
}

std::ostream& operator << (std::ostream& o,const HDBM_DrLth_Rsp_struct& sample)
{
    ::rti::util::StreamFlagSaver flag_saver (o);
    o <<"[";
    o << "DoorBit: " << (int)sample.DoorBit() <<", ";
    o << "OpenAngSet_Rsp: " << sample.OpenAngSet_Rsp() ;
    o <<"]";
    return o;
}

// ---- HDBI_DrLth_Act_struct: 

HDBI_DrLth_Act_struct::HDBI_DrLth_Act_struct() :
    m_DoorBit_ (0) ,
    m_DoorBtnCtrl_ (0u) ,
    m_DoorPosCtrl_ (0ull)  {
}   

HDBI_DrLth_Act_struct::HDBI_DrLth_Act_struct (
    uint8_t DoorBit,
    uint32_t DoorBtnCtrl,
    uint64_t DoorPosCtrl)
    :
        m_DoorBit_( DoorBit ),
        m_DoorBtnCtrl_( DoorBtnCtrl ),
        m_DoorPosCtrl_( DoorPosCtrl ) {
}

#ifdef RTI_CXX11_RVALUE_REFERENCES
#ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
HDBI_DrLth_Act_struct::HDBI_DrLth_Act_struct(HDBI_DrLth_Act_struct&& other_) OMG_NOEXCEPT  :m_DoorBit_ (std::move(other_.m_DoorBit_))
,
m_DoorBtnCtrl_ (std::move(other_.m_DoorBtnCtrl_))
,
m_DoorPosCtrl_ (std::move(other_.m_DoorPosCtrl_))
{
} 

HDBI_DrLth_Act_struct& HDBI_DrLth_Act_struct::operator=(HDBI_DrLth_Act_struct&&  other_) OMG_NOEXCEPT {
    HDBI_DrLth_Act_struct tmp(std::move(other_));
    swap(tmp); 
    return *this;
}
#endif
#endif   

void HDBI_DrLth_Act_struct::swap(HDBI_DrLth_Act_struct& other_)  OMG_NOEXCEPT 
{
    using std::swap;
    swap(m_DoorBit_, other_.m_DoorBit_);
    swap(m_DoorBtnCtrl_, other_.m_DoorBtnCtrl_);
    swap(m_DoorPosCtrl_, other_.m_DoorPosCtrl_);
}  

bool HDBI_DrLth_Act_struct::operator == (const HDBI_DrLth_Act_struct& other_) const {
    if (m_DoorBit_ != other_.m_DoorBit_) {
        return false;
    }
    if (m_DoorBtnCtrl_ != other_.m_DoorBtnCtrl_) {
        return false;
    }
    if (m_DoorPosCtrl_ != other_.m_DoorPosCtrl_) {
        return false;
    }
    return true;
}
bool HDBI_DrLth_Act_struct::operator != (const HDBI_DrLth_Act_struct& other_) const {
    return !this->operator ==(other_);
}

std::ostream& operator << (std::ostream& o,const HDBI_DrLth_Act_struct& sample)
{
    ::rti::util::StreamFlagSaver flag_saver (o);
    o <<"[";
    o << "DoorBit: " << (int)sample.DoorBit() <<", ";
    o << "DoorBtnCtrl: " << sample.DoorBtnCtrl()<<", ";
    o << "DoorPosCtrl: " << sample.DoorPosCtrl() ;
    o <<"]";
    return o;
}

// ---- HDBM_DrLth_St_struct: 

HDBM_DrLth_St_struct::HDBM_DrLth_St_struct() :
    m_DoorBit_ (0) ,
    m_Door_St_ (0u) ,
    m_DrWrk_St_ (0u) ,
    m_NomDoor_St_ (0u) ,
    m_TripPst_Val_ (0ull) ,
    m_StpRsn_st_ (0u) ,
    m_DrBbuse_St_ (0u)  {
}   

HDBM_DrLth_St_struct::HDBM_DrLth_St_struct (
    uint8_t DoorBit,
    uint32_t Door_St,
    uint32_t DrWrk_St,
    uint32_t NomDoor_St,
    uint64_t TripPst_Val,
    uint32_t StpRsn_st,
    uint32_t DrBbuse_St)
    :
        m_DoorBit_( DoorBit ),
        m_Door_St_( Door_St ),
        m_DrWrk_St_( DrWrk_St ),
        m_NomDoor_St_( NomDoor_St ),
        m_TripPst_Val_( TripPst_Val ),
        m_StpRsn_st_( StpRsn_st ),
        m_DrBbuse_St_( DrBbuse_St ) {
}

#ifdef RTI_CXX11_RVALUE_REFERENCES
#ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
HDBM_DrLth_St_struct::HDBM_DrLth_St_struct(HDBM_DrLth_St_struct&& other_) OMG_NOEXCEPT  :m_DoorBit_ (std::move(other_.m_DoorBit_))
,
m_Door_St_ (std::move(other_.m_Door_St_))
,
m_DrWrk_St_ (std::move(other_.m_DrWrk_St_))
,
m_NomDoor_St_ (std::move(other_.m_NomDoor_St_))
,
m_TripPst_Val_ (std::move(other_.m_TripPst_Val_))
,
m_StpRsn_st_ (std::move(other_.m_StpRsn_st_))
,
m_DrBbuse_St_ (std::move(other_.m_DrBbuse_St_))
{
} 

HDBM_DrLth_St_struct& HDBM_DrLth_St_struct::operator=(HDBM_DrLth_St_struct&&  other_) OMG_NOEXCEPT {
    HDBM_DrLth_St_struct tmp(std::move(other_));
    swap(tmp); 
    return *this;
}
#endif
#endif   

void HDBM_DrLth_St_struct::swap(HDBM_DrLth_St_struct& other_)  OMG_NOEXCEPT 
{
    using std::swap;
    swap(m_DoorBit_, other_.m_DoorBit_);
    swap(m_Door_St_, other_.m_Door_St_);
    swap(m_DrWrk_St_, other_.m_DrWrk_St_);
    swap(m_NomDoor_St_, other_.m_NomDoor_St_);
    swap(m_TripPst_Val_, other_.m_TripPst_Val_);
    swap(m_StpRsn_st_, other_.m_StpRsn_st_);
    swap(m_DrBbuse_St_, other_.m_DrBbuse_St_);
}  

bool HDBM_DrLth_St_struct::operator == (const HDBM_DrLth_St_struct& other_) const {
    if (m_DoorBit_ != other_.m_DoorBit_) {
        return false;
    }
    if (m_Door_St_ != other_.m_Door_St_) {
        return false;
    }
    if (m_DrWrk_St_ != other_.m_DrWrk_St_) {
        return false;
    }
    if (m_NomDoor_St_ != other_.m_NomDoor_St_) {
        return false;
    }
    if (m_TripPst_Val_ != other_.m_TripPst_Val_) {
        return false;
    }
    if (m_StpRsn_st_ != other_.m_StpRsn_st_) {
        return false;
    }
    if (m_DrBbuse_St_ != other_.m_DrBbuse_St_) {
        return false;
    }
    return true;
}
bool HDBM_DrLth_St_struct::operator != (const HDBM_DrLth_St_struct& other_) const {
    return !this->operator ==(other_);
}

std::ostream& operator << (std::ostream& o,const HDBM_DrLth_St_struct& sample)
{
    ::rti::util::StreamFlagSaver flag_saver (o);
    o <<"[";
    o << "DoorBit: " << (int)sample.DoorBit() <<", ";
    o << "Door_St: " << sample.Door_St()<<", ";
    o << "DrWrk_St: " << sample.DrWrk_St()<<", ";
    o << "NomDoor_St: " << sample.NomDoor_St()<<", ";
    o << "TripPst_Val: " << sample.TripPst_Val()<<", ";
    o << "StpRsn_st: " << sample.StpRsn_st()<<", ";
    o << "DrBbuse_St: " << sample.DrBbuse_St() ;
    o <<"]";
    return o;
}

// ---- HDBI_InLt_Act_struct: 

HDBI_InLt_Act_struct::HDBI_InLt_Act_struct() :
    m_InLtBit_ (0) ,
    m_InLtCmd_ (0u)  {
}   

HDBI_InLt_Act_struct::HDBI_InLt_Act_struct (
    uint8_t InLtBit,
    uint32_t InLtCmd)
    :
        m_InLtBit_( InLtBit ),
        m_InLtCmd_( InLtCmd ) {
}

#ifdef RTI_CXX11_RVALUE_REFERENCES
#ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
HDBI_InLt_Act_struct::HDBI_InLt_Act_struct(HDBI_InLt_Act_struct&& other_) OMG_NOEXCEPT  :m_InLtBit_ (std::move(other_.m_InLtBit_))
,
m_InLtCmd_ (std::move(other_.m_InLtCmd_))
{
} 

HDBI_InLt_Act_struct& HDBI_InLt_Act_struct::operator=(HDBI_InLt_Act_struct&&  other_) OMG_NOEXCEPT {
    HDBI_InLt_Act_struct tmp(std::move(other_));
    swap(tmp); 
    return *this;
}
#endif
#endif   

void HDBI_InLt_Act_struct::swap(HDBI_InLt_Act_struct& other_)  OMG_NOEXCEPT 
{
    using std::swap;
    swap(m_InLtBit_, other_.m_InLtBit_);
    swap(m_InLtCmd_, other_.m_InLtCmd_);
}  

bool HDBI_InLt_Act_struct::operator == (const HDBI_InLt_Act_struct& other_) const {
    if (m_InLtBit_ != other_.m_InLtBit_) {
        return false;
    }
    if (m_InLtCmd_ != other_.m_InLtCmd_) {
        return false;
    }
    return true;
}
bool HDBI_InLt_Act_struct::operator != (const HDBI_InLt_Act_struct& other_) const {
    return !this->operator ==(other_);
}

std::ostream& operator << (std::ostream& o,const HDBI_InLt_Act_struct& sample)
{
    ::rti::util::StreamFlagSaver flag_saver (o);
    o <<"[";
    o << "InLtBit: " << (int)sample.InLtBit() <<", ";
    o << "InLtCmd: " << sample.InLtCmd() ;
    o <<"]";
    return o;
}

// ---- HDBM_InLt_St_struct: 

HDBM_InLt_St_struct::HDBM_InLt_St_struct() :
    m_InLtBit_ (0) ,
    m_InLtSt_ (0)  {
}   

HDBM_InLt_St_struct::HDBM_InLt_St_struct (
    uint8_t InLtBit,
    int32_t InLtSt)
    :
        m_InLtBit_( InLtBit ),
        m_InLtSt_( InLtSt ) {
}

#ifdef RTI_CXX11_RVALUE_REFERENCES
#ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
HDBM_InLt_St_struct::HDBM_InLt_St_struct(HDBM_InLt_St_struct&& other_) OMG_NOEXCEPT  :m_InLtBit_ (std::move(other_.m_InLtBit_))
,
m_InLtSt_ (std::move(other_.m_InLtSt_))
{
} 

HDBM_InLt_St_struct& HDBM_InLt_St_struct::operator=(HDBM_InLt_St_struct&&  other_) OMG_NOEXCEPT {
    HDBM_InLt_St_struct tmp(std::move(other_));
    swap(tmp); 
    return *this;
}
#endif
#endif   

void HDBM_InLt_St_struct::swap(HDBM_InLt_St_struct& other_)  OMG_NOEXCEPT 
{
    using std::swap;
    swap(m_InLtBit_, other_.m_InLtBit_);
    swap(m_InLtSt_, other_.m_InLtSt_);
}  

bool HDBM_InLt_St_struct::operator == (const HDBM_InLt_St_struct& other_) const {
    if (m_InLtBit_ != other_.m_InLtBit_) {
        return false;
    }
    if (m_InLtSt_ != other_.m_InLtSt_) {
        return false;
    }
    return true;
}
bool HDBM_InLt_St_struct::operator != (const HDBM_InLt_St_struct& other_) const {
    return !this->operator ==(other_);
}

std::ostream& operator << (std::ostream& o,const HDBM_InLt_St_struct& sample)
{
    ::rti::util::StreamFlagSaver flag_saver (o);
    o <<"[";
    o << "InLtBit: " << (int)sample.InLtBit() <<", ";
    o << "InLtSt: " << sample.InLtSt() ;
    o <<"]";
    return o;
}

// ---- HDBI_Win_PctAct_struct: 

HDBI_Win_PctAct_struct::HDBI_Win_PctAct_struct() :
    m_WinBit_ (0) ,
    m_WinSetCmd_ (0u)  {
}   

HDBI_Win_PctAct_struct::HDBI_Win_PctAct_struct (
    uint8_t WinBit,
    uint32_t WinSetCmd)
    :
        m_WinBit_( WinBit ),
        m_WinSetCmd_( WinSetCmd ) {
}

#ifdef RTI_CXX11_RVALUE_REFERENCES
#ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
HDBI_Win_PctAct_struct::HDBI_Win_PctAct_struct(HDBI_Win_PctAct_struct&& other_) OMG_NOEXCEPT  :m_WinBit_ (std::move(other_.m_WinBit_))
,
m_WinSetCmd_ (std::move(other_.m_WinSetCmd_))
{
} 

HDBI_Win_PctAct_struct& HDBI_Win_PctAct_struct::operator=(HDBI_Win_PctAct_struct&&  other_) OMG_NOEXCEPT {
    HDBI_Win_PctAct_struct tmp(std::move(other_));
    swap(tmp); 
    return *this;
}
#endif
#endif   

void HDBI_Win_PctAct_struct::swap(HDBI_Win_PctAct_struct& other_)  OMG_NOEXCEPT 
{
    using std::swap;
    swap(m_WinBit_, other_.m_WinBit_);
    swap(m_WinSetCmd_, other_.m_WinSetCmd_);
}  

bool HDBI_Win_PctAct_struct::operator == (const HDBI_Win_PctAct_struct& other_) const {
    if (m_WinBit_ != other_.m_WinBit_) {
        return false;
    }
    if (m_WinSetCmd_ != other_.m_WinSetCmd_) {
        return false;
    }
    return true;
}
bool HDBI_Win_PctAct_struct::operator != (const HDBI_Win_PctAct_struct& other_) const {
    return !this->operator ==(other_);
}

std::ostream& operator << (std::ostream& o,const HDBI_Win_PctAct_struct& sample)
{
    ::rti::util::StreamFlagSaver flag_saver (o);
    o <<"[";
    o << "WinBit: " << (int)sample.WinBit() <<", ";
    o << "WinSetCmd: " << sample.WinSetCmd() ;
    o <<"]";
    return o;
}

// ---- HDBM_Win_St_struct: 

HDBM_Win_St_struct::HDBM_Win_St_struct() :
    m_WinBit_ (0) ,
    m_WinPst_St_ (0u) ,
    m_WinMov_St_ (0u) ,
    m_WinStpRsn_St_ (0u)  {
}   

HDBM_Win_St_struct::HDBM_Win_St_struct (
    uint8_t WinBit,
    uint32_t WinPst_St,
    uint32_t WinMov_St,
    uint32_t WinStpRsn_St)
    :
        m_WinBit_( WinBit ),
        m_WinPst_St_( WinPst_St ),
        m_WinMov_St_( WinMov_St ),
        m_WinStpRsn_St_( WinStpRsn_St ) {
}

#ifdef RTI_CXX11_RVALUE_REFERENCES
#ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
HDBM_Win_St_struct::HDBM_Win_St_struct(HDBM_Win_St_struct&& other_) OMG_NOEXCEPT  :m_WinBit_ (std::move(other_.m_WinBit_))
,
m_WinPst_St_ (std::move(other_.m_WinPst_St_))
,
m_WinMov_St_ (std::move(other_.m_WinMov_St_))
,
m_WinStpRsn_St_ (std::move(other_.m_WinStpRsn_St_))
{
} 

HDBM_Win_St_struct& HDBM_Win_St_struct::operator=(HDBM_Win_St_struct&&  other_) OMG_NOEXCEPT {
    HDBM_Win_St_struct tmp(std::move(other_));
    swap(tmp); 
    return *this;
}
#endif
#endif   

void HDBM_Win_St_struct::swap(HDBM_Win_St_struct& other_)  OMG_NOEXCEPT 
{
    using std::swap;
    swap(m_WinBit_, other_.m_WinBit_);
    swap(m_WinPst_St_, other_.m_WinPst_St_);
    swap(m_WinMov_St_, other_.m_WinMov_St_);
    swap(m_WinStpRsn_St_, other_.m_WinStpRsn_St_);
}  

bool HDBM_Win_St_struct::operator == (const HDBM_Win_St_struct& other_) const {
    if (m_WinBit_ != other_.m_WinBit_) {
        return false;
    }
    if (m_WinPst_St_ != other_.m_WinPst_St_) {
        return false;
    }
    if (m_WinMov_St_ != other_.m_WinMov_St_) {
        return false;
    }
    if (m_WinStpRsn_St_ != other_.m_WinStpRsn_St_) {
        return false;
    }
    return true;
}
bool HDBM_Win_St_struct::operator != (const HDBM_Win_St_struct& other_) const {
    return !this->operator ==(other_);
}

std::ostream& operator << (std::ostream& o,const HDBM_Win_St_struct& sample)
{
    ::rti::util::StreamFlagSaver flag_saver (o);
    o <<"[";
    o << "WinBit: " << (int)sample.WinBit() <<", ";
    o << "WinPst_St: " << sample.WinPst_St()<<", ";
    o << "WinMov_St: " << sample.WinMov_St()<<", ";
    o << "WinStpRsn_St: " << sample.WinStpRsn_St() ;
    o <<"]";
    return o;
}

// ---- HDBI_StAdj_Act_struct: 

HDBI_StAdj_Act_struct::HDBI_StAdj_Act_struct() :
    m_StPstBit_ (0) ,
    m_StAdjCmd_ (0ull)  {
}   

HDBI_StAdj_Act_struct::HDBI_StAdj_Act_struct (
    uint16_t StPstBit,
    uint64_t StAdjCmd)
    :
        m_StPstBit_( StPstBit ),
        m_StAdjCmd_( StAdjCmd ) {
}

#ifdef RTI_CXX11_RVALUE_REFERENCES
#ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
HDBI_StAdj_Act_struct::HDBI_StAdj_Act_struct(HDBI_StAdj_Act_struct&& other_) OMG_NOEXCEPT  :m_StPstBit_ (std::move(other_.m_StPstBit_))
,
m_StAdjCmd_ (std::move(other_.m_StAdjCmd_))
{
} 

HDBI_StAdj_Act_struct& HDBI_StAdj_Act_struct::operator=(HDBI_StAdj_Act_struct&&  other_) OMG_NOEXCEPT {
    HDBI_StAdj_Act_struct tmp(std::move(other_));
    swap(tmp); 
    return *this;
}
#endif
#endif   

void HDBI_StAdj_Act_struct::swap(HDBI_StAdj_Act_struct& other_)  OMG_NOEXCEPT 
{
    using std::swap;
    swap(m_StPstBit_, other_.m_StPstBit_);
    swap(m_StAdjCmd_, other_.m_StAdjCmd_);
}  

bool HDBI_StAdj_Act_struct::operator == (const HDBI_StAdj_Act_struct& other_) const {
    if (m_StPstBit_ != other_.m_StPstBit_) {
        return false;
    }
    if (m_StAdjCmd_ != other_.m_StAdjCmd_) {
        return false;
    }
    return true;
}
bool HDBI_StAdj_Act_struct::operator != (const HDBI_StAdj_Act_struct& other_) const {
    return !this->operator ==(other_);
}

std::ostream& operator << (std::ostream& o,const HDBI_StAdj_Act_struct& sample)
{
    ::rti::util::StreamFlagSaver flag_saver (o);
    o <<"[";
    o << "StPstBit: " << sample.StPstBit()<<", ";
    o << "StAdjCmd: " << sample.StAdjCmd() ;
    o <<"]";
    return o;
}

// ---- HDBM_StAdj_St_struct: 

HDBM_StAdj_St_struct::HDBM_StAdj_St_struct() :
    m_StPsBit_ (0) ,
    m_StAdj_St_ (0ull)  {
}   

HDBM_StAdj_St_struct::HDBM_StAdj_St_struct (
    uint16_t StPsBit,
    uint64_t StAdj_St)
    :
        m_StPsBit_( StPsBit ),
        m_StAdj_St_( StAdj_St ) {
}

#ifdef RTI_CXX11_RVALUE_REFERENCES
#ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
HDBM_StAdj_St_struct::HDBM_StAdj_St_struct(HDBM_StAdj_St_struct&& other_) OMG_NOEXCEPT  :m_StPsBit_ (std::move(other_.m_StPsBit_))
,
m_StAdj_St_ (std::move(other_.m_StAdj_St_))
{
} 

HDBM_StAdj_St_struct& HDBM_StAdj_St_struct::operator=(HDBM_StAdj_St_struct&&  other_) OMG_NOEXCEPT {
    HDBM_StAdj_St_struct tmp(std::move(other_));
    swap(tmp); 
    return *this;
}
#endif
#endif   

void HDBM_StAdj_St_struct::swap(HDBM_StAdj_St_struct& other_)  OMG_NOEXCEPT 
{
    using std::swap;
    swap(m_StPsBit_, other_.m_StPsBit_);
    swap(m_StAdj_St_, other_.m_StAdj_St_);
}  

bool HDBM_StAdj_St_struct::operator == (const HDBM_StAdj_St_struct& other_) const {
    if (m_StPsBit_ != other_.m_StPsBit_) {
        return false;
    }
    if (m_StAdj_St_ != other_.m_StAdj_St_) {
        return false;
    }
    return true;
}
bool HDBM_StAdj_St_struct::operator != (const HDBM_StAdj_St_struct& other_) const {
    return !this->operator ==(other_);
}

std::ostream& operator << (std::ostream& o,const HDBM_StAdj_St_struct& sample)
{
    ::rti::util::StreamFlagSaver flag_saver (o);
    o <<"[";
    o << "StPsBit: " << sample.StPsBit()<<", ";
    o << "StAdj_St: " << sample.StAdj_St() ;
    o <<"]";
    return o;
}

// ---- HDBI_BdPst_Act_struct: 

HDBI_BdPst_Act_struct::HDBI_BdPst_Act_struct() :
    m_BdPstBit_ (0) ,
    m_BdPstCmd_ (0ull)  {
}   

HDBI_BdPst_Act_struct::HDBI_BdPst_Act_struct (
    uint16_t BdPstBit,
    uint64_t BdPstCmd)
    :
        m_BdPstBit_( BdPstBit ),
        m_BdPstCmd_( BdPstCmd ) {
}

#ifdef RTI_CXX11_RVALUE_REFERENCES
#ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
HDBI_BdPst_Act_struct::HDBI_BdPst_Act_struct(HDBI_BdPst_Act_struct&& other_) OMG_NOEXCEPT  :m_BdPstBit_ (std::move(other_.m_BdPstBit_))
,
m_BdPstCmd_ (std::move(other_.m_BdPstCmd_))
{
} 

HDBI_BdPst_Act_struct& HDBI_BdPst_Act_struct::operator=(HDBI_BdPst_Act_struct&&  other_) OMG_NOEXCEPT {
    HDBI_BdPst_Act_struct tmp(std::move(other_));
    swap(tmp); 
    return *this;
}
#endif
#endif   

void HDBI_BdPst_Act_struct::swap(HDBI_BdPst_Act_struct& other_)  OMG_NOEXCEPT 
{
    using std::swap;
    swap(m_BdPstBit_, other_.m_BdPstBit_);
    swap(m_BdPstCmd_, other_.m_BdPstCmd_);
}  

bool HDBI_BdPst_Act_struct::operator == (const HDBI_BdPst_Act_struct& other_) const {
    if (m_BdPstBit_ != other_.m_BdPstBit_) {
        return false;
    }
    if (m_BdPstCmd_ != other_.m_BdPstCmd_) {
        return false;
    }
    return true;
}
bool HDBI_BdPst_Act_struct::operator != (const HDBI_BdPst_Act_struct& other_) const {
    return !this->operator ==(other_);
}

std::ostream& operator << (std::ostream& o,const HDBI_BdPst_Act_struct& sample)
{
    ::rti::util::StreamFlagSaver flag_saver (o);
    o <<"[";
    o << "BdPstBit: " << sample.BdPstBit()<<", ";
    o << "BdPstCmd: " << sample.BdPstCmd() ;
    o <<"]";
    return o;
}

// ---- HDBM_BdPst_St_struct: 

HDBM_BdPst_St_struct::HDBM_BdPst_St_struct() :
    m_BdPstBit_ (0) ,
    m_SyBdPstSt_ (0ull)  {
}   

HDBM_BdPst_St_struct::HDBM_BdPst_St_struct (
    uint16_t BdPstBit,
    uint64_t SyBdPstSt)
    :
        m_BdPstBit_( BdPstBit ),
        m_SyBdPstSt_( SyBdPstSt ) {
}

#ifdef RTI_CXX11_RVALUE_REFERENCES
#ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
HDBM_BdPst_St_struct::HDBM_BdPst_St_struct(HDBM_BdPst_St_struct&& other_) OMG_NOEXCEPT  :m_BdPstBit_ (std::move(other_.m_BdPstBit_))
,
m_SyBdPstSt_ (std::move(other_.m_SyBdPstSt_))
{
} 

HDBM_BdPst_St_struct& HDBM_BdPst_St_struct::operator=(HDBM_BdPst_St_struct&&  other_) OMG_NOEXCEPT {
    HDBM_BdPst_St_struct tmp(std::move(other_));
    swap(tmp); 
    return *this;
}
#endif
#endif   

void HDBM_BdPst_St_struct::swap(HDBM_BdPst_St_struct& other_)  OMG_NOEXCEPT 
{
    using std::swap;
    swap(m_BdPstBit_, other_.m_BdPstBit_);
    swap(m_SyBdPstSt_, other_.m_SyBdPstSt_);
}  

bool HDBM_BdPst_St_struct::operator == (const HDBM_BdPst_St_struct& other_) const {
    if (m_BdPstBit_ != other_.m_BdPstBit_) {
        return false;
    }
    if (m_SyBdPstSt_ != other_.m_SyBdPstSt_) {
        return false;
    }
    return true;
}
bool HDBM_BdPst_St_struct::operator != (const HDBM_BdPst_St_struct& other_) const {
    return !this->operator ==(other_);
}

std::ostream& operator << (std::ostream& o,const HDBM_BdPst_St_struct& sample)
{
    ::rti::util::StreamFlagSaver flag_saver (o);
    o <<"[";
    o << "BdPstBit: " << sample.BdPstBit()<<", ";
    o << "SyBdPstSt: " << sample.SyBdPstSt() ;
    o <<"]";
    return o;
}

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< HDBI_DrLth_Set_struct > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member HDBI_DrLth_Set_struct_g_tc_members[2]=
                {

                    {
                        (char *)"DoorBit",/* Member name */
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
                        (char *)"OpenAngSet_Req",/* Member name */
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

                static DDS_TypeCode HDBI_DrLth_Set_struct_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"HDBI_DrLth_Set_struct", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        HDBI_DrLth_Set_struct_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for HDBI_DrLth_Set_struct*/

                if (is_initialized) {
                    return &HDBI_DrLth_Set_struct_g_tc;
                }

                HDBI_DrLth_Set_struct_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                HDBI_DrLth_Set_struct_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;
                HDBI_DrLth_Set_struct_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulonglong;

                /* Initialize the values for member annotations. */
                HDBI_DrLth_Set_struct_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_OCTET;
                HDBI_DrLth_Set_struct_g_tc_members[0]._annotations._defaultValue._u.octet_value = 0;
                HDBI_DrLth_Set_struct_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_OCTET;
                HDBI_DrLth_Set_struct_g_tc_members[0]._annotations._minValue._u.octet_value = RTIXCdrOctet_MIN;
                HDBI_DrLth_Set_struct_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_OCTET;
                HDBI_DrLth_Set_struct_g_tc_members[0]._annotations._maxValue._u.octet_value = RTIXCdrOctet_MAX;

                HDBI_DrLth_Set_struct_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_ULONGLONG;
                HDBI_DrLth_Set_struct_g_tc_members[1]._annotations._defaultValue._u.ulong_long_value = 0ull;
                HDBI_DrLth_Set_struct_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_ULONGLONG;
                HDBI_DrLth_Set_struct_g_tc_members[1]._annotations._minValue._u.ulong_long_value = RTIXCdrUnsignedLongLong_MIN;
                HDBI_DrLth_Set_struct_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_ULONGLONG;
                HDBI_DrLth_Set_struct_g_tc_members[1]._annotations._maxValue._u.ulong_long_value = RTIXCdrUnsignedLongLong_MAX;

                HDBI_DrLth_Set_struct_g_tc._data._sampleAccessInfo = sample_access_info();
                HDBI_DrLth_Set_struct_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &HDBI_DrLth_Set_struct_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                HDBI_DrLth_Set_struct *sample;

                static RTIXCdrMemberAccessInfo HDBI_DrLth_Set_struct_g_memberAccessInfos[2] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo HDBI_DrLth_Set_struct_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &HDBI_DrLth_Set_struct_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    HDBI_DrLth_Set_struct);
                if (sample == NULL) {
                    return NULL;
                }

                HDBI_DrLth_Set_struct_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->DoorBit() - (char *)sample);

                HDBI_DrLth_Set_struct_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->OpenAngSet_Req() - (char *)sample);

                HDBI_DrLth_Set_struct_g_sampleAccessInfo.memberAccessInfos = 
                HDBI_DrLth_Set_struct_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(HDBI_DrLth_Set_struct);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        HDBI_DrLth_Set_struct_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        HDBI_DrLth_Set_struct_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                HDBI_DrLth_Set_struct_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                HDBI_DrLth_Set_struct_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< HDBI_DrLth_Set_struct >;

                HDBI_DrLth_Set_struct_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &HDBI_DrLth_Set_struct_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin HDBI_DrLth_Set_struct_g_typePlugin = 
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

                return &HDBI_DrLth_Set_struct_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< HDBI_DrLth_Set_struct >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< HDBI_DrLth_Set_struct >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< HDBM_DrLth_Rsp_struct > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member HDBM_DrLth_Rsp_struct_g_tc_members[2]=
                {

                    {
                        (char *)"DoorBit",/* Member name */
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
                        (char *)"OpenAngSet_Rsp",/* Member name */
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

                static DDS_TypeCode HDBM_DrLth_Rsp_struct_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"HDBM_DrLth_Rsp_struct", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        HDBM_DrLth_Rsp_struct_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for HDBM_DrLth_Rsp_struct*/

                if (is_initialized) {
                    return &HDBM_DrLth_Rsp_struct_g_tc;
                }

                HDBM_DrLth_Rsp_struct_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                HDBM_DrLth_Rsp_struct_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;
                HDBM_DrLth_Rsp_struct_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulonglong;

                /* Initialize the values for member annotations. */
                HDBM_DrLth_Rsp_struct_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_OCTET;
                HDBM_DrLth_Rsp_struct_g_tc_members[0]._annotations._defaultValue._u.octet_value = 0;
                HDBM_DrLth_Rsp_struct_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_OCTET;
                HDBM_DrLth_Rsp_struct_g_tc_members[0]._annotations._minValue._u.octet_value = RTIXCdrOctet_MIN;
                HDBM_DrLth_Rsp_struct_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_OCTET;
                HDBM_DrLth_Rsp_struct_g_tc_members[0]._annotations._maxValue._u.octet_value = RTIXCdrOctet_MAX;

                HDBM_DrLth_Rsp_struct_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_ULONGLONG;
                HDBM_DrLth_Rsp_struct_g_tc_members[1]._annotations._defaultValue._u.ulong_long_value = 0ull;
                HDBM_DrLth_Rsp_struct_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_ULONGLONG;
                HDBM_DrLth_Rsp_struct_g_tc_members[1]._annotations._minValue._u.ulong_long_value = RTIXCdrUnsignedLongLong_MIN;
                HDBM_DrLth_Rsp_struct_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_ULONGLONG;
                HDBM_DrLth_Rsp_struct_g_tc_members[1]._annotations._maxValue._u.ulong_long_value = RTIXCdrUnsignedLongLong_MAX;

                HDBM_DrLth_Rsp_struct_g_tc._data._sampleAccessInfo = sample_access_info();
                HDBM_DrLth_Rsp_struct_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &HDBM_DrLth_Rsp_struct_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                HDBM_DrLth_Rsp_struct *sample;

                static RTIXCdrMemberAccessInfo HDBM_DrLth_Rsp_struct_g_memberAccessInfos[2] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo HDBM_DrLth_Rsp_struct_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &HDBM_DrLth_Rsp_struct_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    HDBM_DrLth_Rsp_struct);
                if (sample == NULL) {
                    return NULL;
                }

                HDBM_DrLth_Rsp_struct_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->DoorBit() - (char *)sample);

                HDBM_DrLth_Rsp_struct_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->OpenAngSet_Rsp() - (char *)sample);

                HDBM_DrLth_Rsp_struct_g_sampleAccessInfo.memberAccessInfos = 
                HDBM_DrLth_Rsp_struct_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(HDBM_DrLth_Rsp_struct);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        HDBM_DrLth_Rsp_struct_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        HDBM_DrLth_Rsp_struct_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                HDBM_DrLth_Rsp_struct_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                HDBM_DrLth_Rsp_struct_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< HDBM_DrLth_Rsp_struct >;

                HDBM_DrLth_Rsp_struct_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &HDBM_DrLth_Rsp_struct_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin HDBM_DrLth_Rsp_struct_g_typePlugin = 
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

                return &HDBM_DrLth_Rsp_struct_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< HDBM_DrLth_Rsp_struct >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< HDBM_DrLth_Rsp_struct >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< HDBI_DrLth_Act_struct > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member HDBI_DrLth_Act_struct_g_tc_members[3]=
                {

                    {
                        (char *)"DoorBit",/* Member name */
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
                        (char *)"DoorBtnCtrl",/* Member name */
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
                    }, 
                    {
                        (char *)"DoorPosCtrl",/* Member name */
                        {
                            2,/* Representation ID */
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

                static DDS_TypeCode HDBI_DrLth_Act_struct_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"HDBI_DrLth_Act_struct", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        HDBI_DrLth_Act_struct_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for HDBI_DrLth_Act_struct*/

                if (is_initialized) {
                    return &HDBI_DrLth_Act_struct_g_tc;
                }

                HDBI_DrLth_Act_struct_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                HDBI_DrLth_Act_struct_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;
                HDBI_DrLth_Act_struct_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
                HDBI_DrLth_Act_struct_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulonglong;

                /* Initialize the values for member annotations. */
                HDBI_DrLth_Act_struct_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_OCTET;
                HDBI_DrLth_Act_struct_g_tc_members[0]._annotations._defaultValue._u.octet_value = 0;
                HDBI_DrLth_Act_struct_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_OCTET;
                HDBI_DrLth_Act_struct_g_tc_members[0]._annotations._minValue._u.octet_value = RTIXCdrOctet_MIN;
                HDBI_DrLth_Act_struct_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_OCTET;
                HDBI_DrLth_Act_struct_g_tc_members[0]._annotations._maxValue._u.octet_value = RTIXCdrOctet_MAX;

                HDBI_DrLth_Act_struct_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_ULONG;
                HDBI_DrLth_Act_struct_g_tc_members[1]._annotations._defaultValue._u.ulong_value = 0u;
                HDBI_DrLth_Act_struct_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_ULONG;
                HDBI_DrLth_Act_struct_g_tc_members[1]._annotations._minValue._u.ulong_value = RTIXCdrUnsignedLong_MIN;
                HDBI_DrLth_Act_struct_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_ULONG;
                HDBI_DrLth_Act_struct_g_tc_members[1]._annotations._maxValue._u.ulong_value = RTIXCdrUnsignedLong_MAX;

                HDBI_DrLth_Act_struct_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_ULONGLONG;
                HDBI_DrLth_Act_struct_g_tc_members[2]._annotations._defaultValue._u.ulong_long_value = 0ull;
                HDBI_DrLth_Act_struct_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_ULONGLONG;
                HDBI_DrLth_Act_struct_g_tc_members[2]._annotations._minValue._u.ulong_long_value = RTIXCdrUnsignedLongLong_MIN;
                HDBI_DrLth_Act_struct_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_ULONGLONG;
                HDBI_DrLth_Act_struct_g_tc_members[2]._annotations._maxValue._u.ulong_long_value = RTIXCdrUnsignedLongLong_MAX;

                HDBI_DrLth_Act_struct_g_tc._data._sampleAccessInfo = sample_access_info();
                HDBI_DrLth_Act_struct_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &HDBI_DrLth_Act_struct_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                HDBI_DrLth_Act_struct *sample;

                static RTIXCdrMemberAccessInfo HDBI_DrLth_Act_struct_g_memberAccessInfos[3] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo HDBI_DrLth_Act_struct_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &HDBI_DrLth_Act_struct_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    HDBI_DrLth_Act_struct);
                if (sample == NULL) {
                    return NULL;
                }

                HDBI_DrLth_Act_struct_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->DoorBit() - (char *)sample);

                HDBI_DrLth_Act_struct_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->DoorBtnCtrl() - (char *)sample);

                HDBI_DrLth_Act_struct_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->DoorPosCtrl() - (char *)sample);

                HDBI_DrLth_Act_struct_g_sampleAccessInfo.memberAccessInfos = 
                HDBI_DrLth_Act_struct_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(HDBI_DrLth_Act_struct);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        HDBI_DrLth_Act_struct_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        HDBI_DrLth_Act_struct_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                HDBI_DrLth_Act_struct_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                HDBI_DrLth_Act_struct_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< HDBI_DrLth_Act_struct >;

                HDBI_DrLth_Act_struct_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &HDBI_DrLth_Act_struct_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin HDBI_DrLth_Act_struct_g_typePlugin = 
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

                return &HDBI_DrLth_Act_struct_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< HDBI_DrLth_Act_struct >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< HDBI_DrLth_Act_struct >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< HDBM_DrLth_St_struct > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member HDBM_DrLth_St_struct_g_tc_members[7]=
                {

                    {
                        (char *)"DoorBit",/* Member name */
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
                        (char *)"Door_St",/* Member name */
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
                    }, 
                    {
                        (char *)"DrWrk_St",/* Member name */
                        {
                            2,/* Representation ID */
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
                        (char *)"NomDoor_St",/* Member name */
                        {
                            3,/* Representation ID */
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
                        (char *)"TripPst_Val",/* Member name */
                        {
                            4,/* Representation ID */
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
                        (char *)"StpRsn_st",/* Member name */
                        {
                            5,/* Representation ID */
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
                        (char *)"DrBbuse_St",/* Member name */
                        {
                            6,/* Representation ID */
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

                static DDS_TypeCode HDBM_DrLth_St_struct_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"HDBM_DrLth_St_struct", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        7, /* Number of members */
                        HDBM_DrLth_St_struct_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for HDBM_DrLth_St_struct*/

                if (is_initialized) {
                    return &HDBM_DrLth_St_struct_g_tc;
                }

                HDBM_DrLth_St_struct_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                HDBM_DrLth_St_struct_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;
                HDBM_DrLth_St_struct_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
                HDBM_DrLth_St_struct_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
                HDBM_DrLth_St_struct_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
                HDBM_DrLth_St_struct_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulonglong;
                HDBM_DrLth_St_struct_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
                HDBM_DrLth_St_struct_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;

                /* Initialize the values for member annotations. */
                HDBM_DrLth_St_struct_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_OCTET;
                HDBM_DrLth_St_struct_g_tc_members[0]._annotations._defaultValue._u.octet_value = 0;
                HDBM_DrLth_St_struct_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_OCTET;
                HDBM_DrLth_St_struct_g_tc_members[0]._annotations._minValue._u.octet_value = RTIXCdrOctet_MIN;
                HDBM_DrLth_St_struct_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_OCTET;
                HDBM_DrLth_St_struct_g_tc_members[0]._annotations._maxValue._u.octet_value = RTIXCdrOctet_MAX;

                HDBM_DrLth_St_struct_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_ULONG;
                HDBM_DrLth_St_struct_g_tc_members[1]._annotations._defaultValue._u.ulong_value = 0u;
                HDBM_DrLth_St_struct_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_ULONG;
                HDBM_DrLth_St_struct_g_tc_members[1]._annotations._minValue._u.ulong_value = RTIXCdrUnsignedLong_MIN;
                HDBM_DrLth_St_struct_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_ULONG;
                HDBM_DrLth_St_struct_g_tc_members[1]._annotations._maxValue._u.ulong_value = RTIXCdrUnsignedLong_MAX;

                HDBM_DrLth_St_struct_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_ULONG;
                HDBM_DrLth_St_struct_g_tc_members[2]._annotations._defaultValue._u.ulong_value = 0u;
                HDBM_DrLth_St_struct_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_ULONG;
                HDBM_DrLth_St_struct_g_tc_members[2]._annotations._minValue._u.ulong_value = RTIXCdrUnsignedLong_MIN;
                HDBM_DrLth_St_struct_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_ULONG;
                HDBM_DrLth_St_struct_g_tc_members[2]._annotations._maxValue._u.ulong_value = RTIXCdrUnsignedLong_MAX;

                HDBM_DrLth_St_struct_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_ULONG;
                HDBM_DrLth_St_struct_g_tc_members[3]._annotations._defaultValue._u.ulong_value = 0u;
                HDBM_DrLth_St_struct_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_ULONG;
                HDBM_DrLth_St_struct_g_tc_members[3]._annotations._minValue._u.ulong_value = RTIXCdrUnsignedLong_MIN;
                HDBM_DrLth_St_struct_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_ULONG;
                HDBM_DrLth_St_struct_g_tc_members[3]._annotations._maxValue._u.ulong_value = RTIXCdrUnsignedLong_MAX;

                HDBM_DrLth_St_struct_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_ULONGLONG;
                HDBM_DrLth_St_struct_g_tc_members[4]._annotations._defaultValue._u.ulong_long_value = 0ull;
                HDBM_DrLth_St_struct_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_ULONGLONG;
                HDBM_DrLth_St_struct_g_tc_members[4]._annotations._minValue._u.ulong_long_value = RTIXCdrUnsignedLongLong_MIN;
                HDBM_DrLth_St_struct_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_ULONGLONG;
                HDBM_DrLth_St_struct_g_tc_members[4]._annotations._maxValue._u.ulong_long_value = RTIXCdrUnsignedLongLong_MAX;

                HDBM_DrLth_St_struct_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_ULONG;
                HDBM_DrLth_St_struct_g_tc_members[5]._annotations._defaultValue._u.ulong_value = 0u;
                HDBM_DrLth_St_struct_g_tc_members[5]._annotations._minValue._d = RTI_XCDR_TK_ULONG;
                HDBM_DrLth_St_struct_g_tc_members[5]._annotations._minValue._u.ulong_value = RTIXCdrUnsignedLong_MIN;
                HDBM_DrLth_St_struct_g_tc_members[5]._annotations._maxValue._d = RTI_XCDR_TK_ULONG;
                HDBM_DrLth_St_struct_g_tc_members[5]._annotations._maxValue._u.ulong_value = RTIXCdrUnsignedLong_MAX;

                HDBM_DrLth_St_struct_g_tc_members[6]._annotations._defaultValue._d = RTI_XCDR_TK_ULONG;
                HDBM_DrLth_St_struct_g_tc_members[6]._annotations._defaultValue._u.ulong_value = 0u;
                HDBM_DrLth_St_struct_g_tc_members[6]._annotations._minValue._d = RTI_XCDR_TK_ULONG;
                HDBM_DrLth_St_struct_g_tc_members[6]._annotations._minValue._u.ulong_value = RTIXCdrUnsignedLong_MIN;
                HDBM_DrLth_St_struct_g_tc_members[6]._annotations._maxValue._d = RTI_XCDR_TK_ULONG;
                HDBM_DrLth_St_struct_g_tc_members[6]._annotations._maxValue._u.ulong_value = RTIXCdrUnsignedLong_MAX;

                HDBM_DrLth_St_struct_g_tc._data._sampleAccessInfo = sample_access_info();
                HDBM_DrLth_St_struct_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &HDBM_DrLth_St_struct_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                HDBM_DrLth_St_struct *sample;

                static RTIXCdrMemberAccessInfo HDBM_DrLth_St_struct_g_memberAccessInfos[7] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo HDBM_DrLth_St_struct_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &HDBM_DrLth_St_struct_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    HDBM_DrLth_St_struct);
                if (sample == NULL) {
                    return NULL;
                }

                HDBM_DrLth_St_struct_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->DoorBit() - (char *)sample);

                HDBM_DrLth_St_struct_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->Door_St() - (char *)sample);

                HDBM_DrLth_St_struct_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->DrWrk_St() - (char *)sample);

                HDBM_DrLth_St_struct_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->NomDoor_St() - (char *)sample);

                HDBM_DrLth_St_struct_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->TripPst_Val() - (char *)sample);

                HDBM_DrLth_St_struct_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->StpRsn_st() - (char *)sample);

                HDBM_DrLth_St_struct_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->DrBbuse_St() - (char *)sample);

                HDBM_DrLth_St_struct_g_sampleAccessInfo.memberAccessInfos = 
                HDBM_DrLth_St_struct_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(HDBM_DrLth_St_struct);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        HDBM_DrLth_St_struct_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        HDBM_DrLth_St_struct_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                HDBM_DrLth_St_struct_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                HDBM_DrLth_St_struct_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< HDBM_DrLth_St_struct >;

                HDBM_DrLth_St_struct_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &HDBM_DrLth_St_struct_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin HDBM_DrLth_St_struct_g_typePlugin = 
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

                return &HDBM_DrLth_St_struct_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< HDBM_DrLth_St_struct >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< HDBM_DrLth_St_struct >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< HDBI_InLt_Act_struct > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member HDBI_InLt_Act_struct_g_tc_members[2]=
                {

                    {
                        (char *)"InLtBit",/* Member name */
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
                        (char *)"InLtCmd",/* Member name */
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

                static DDS_TypeCode HDBI_InLt_Act_struct_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"HDBI_InLt_Act_struct", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        HDBI_InLt_Act_struct_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for HDBI_InLt_Act_struct*/

                if (is_initialized) {
                    return &HDBI_InLt_Act_struct_g_tc;
                }

                HDBI_InLt_Act_struct_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                HDBI_InLt_Act_struct_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;
                HDBI_InLt_Act_struct_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;

                /* Initialize the values for member annotations. */
                HDBI_InLt_Act_struct_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_OCTET;
                HDBI_InLt_Act_struct_g_tc_members[0]._annotations._defaultValue._u.octet_value = 0;
                HDBI_InLt_Act_struct_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_OCTET;
                HDBI_InLt_Act_struct_g_tc_members[0]._annotations._minValue._u.octet_value = RTIXCdrOctet_MIN;
                HDBI_InLt_Act_struct_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_OCTET;
                HDBI_InLt_Act_struct_g_tc_members[0]._annotations._maxValue._u.octet_value = RTIXCdrOctet_MAX;

                HDBI_InLt_Act_struct_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_ULONG;
                HDBI_InLt_Act_struct_g_tc_members[1]._annotations._defaultValue._u.ulong_value = 0u;
                HDBI_InLt_Act_struct_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_ULONG;
                HDBI_InLt_Act_struct_g_tc_members[1]._annotations._minValue._u.ulong_value = RTIXCdrUnsignedLong_MIN;
                HDBI_InLt_Act_struct_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_ULONG;
                HDBI_InLt_Act_struct_g_tc_members[1]._annotations._maxValue._u.ulong_value = RTIXCdrUnsignedLong_MAX;

                HDBI_InLt_Act_struct_g_tc._data._sampleAccessInfo = sample_access_info();
                HDBI_InLt_Act_struct_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &HDBI_InLt_Act_struct_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                HDBI_InLt_Act_struct *sample;

                static RTIXCdrMemberAccessInfo HDBI_InLt_Act_struct_g_memberAccessInfos[2] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo HDBI_InLt_Act_struct_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &HDBI_InLt_Act_struct_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    HDBI_InLt_Act_struct);
                if (sample == NULL) {
                    return NULL;
                }

                HDBI_InLt_Act_struct_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->InLtBit() - (char *)sample);

                HDBI_InLt_Act_struct_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->InLtCmd() - (char *)sample);

                HDBI_InLt_Act_struct_g_sampleAccessInfo.memberAccessInfos = 
                HDBI_InLt_Act_struct_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(HDBI_InLt_Act_struct);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        HDBI_InLt_Act_struct_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        HDBI_InLt_Act_struct_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                HDBI_InLt_Act_struct_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                HDBI_InLt_Act_struct_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< HDBI_InLt_Act_struct >;

                HDBI_InLt_Act_struct_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &HDBI_InLt_Act_struct_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin HDBI_InLt_Act_struct_g_typePlugin = 
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

                return &HDBI_InLt_Act_struct_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< HDBI_InLt_Act_struct >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< HDBI_InLt_Act_struct >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< HDBM_InLt_St_struct > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member HDBM_InLt_St_struct_g_tc_members[2]=
                {

                    {
                        (char *)"InLtBit",/* Member name */
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
                        (char *)"InLtSt",/* Member name */
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

                static DDS_TypeCode HDBM_InLt_St_struct_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"HDBM_InLt_St_struct", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        HDBM_InLt_St_struct_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for HDBM_InLt_St_struct*/

                if (is_initialized) {
                    return &HDBM_InLt_St_struct_g_tc;
                }

                HDBM_InLt_St_struct_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                HDBM_InLt_St_struct_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;
                HDBM_InLt_St_struct_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

                /* Initialize the values for member annotations. */
                HDBM_InLt_St_struct_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_OCTET;
                HDBM_InLt_St_struct_g_tc_members[0]._annotations._defaultValue._u.octet_value = 0;
                HDBM_InLt_St_struct_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_OCTET;
                HDBM_InLt_St_struct_g_tc_members[0]._annotations._minValue._u.octet_value = RTIXCdrOctet_MIN;
                HDBM_InLt_St_struct_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_OCTET;
                HDBM_InLt_St_struct_g_tc_members[0]._annotations._maxValue._u.octet_value = RTIXCdrOctet_MAX;

                HDBM_InLt_St_struct_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                HDBM_InLt_St_struct_g_tc_members[1]._annotations._defaultValue._u.long_value = 0;
                HDBM_InLt_St_struct_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                HDBM_InLt_St_struct_g_tc_members[1]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                HDBM_InLt_St_struct_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                HDBM_InLt_St_struct_g_tc_members[1]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

                HDBM_InLt_St_struct_g_tc._data._sampleAccessInfo = sample_access_info();
                HDBM_InLt_St_struct_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &HDBM_InLt_St_struct_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                HDBM_InLt_St_struct *sample;

                static RTIXCdrMemberAccessInfo HDBM_InLt_St_struct_g_memberAccessInfos[2] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo HDBM_InLt_St_struct_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &HDBM_InLt_St_struct_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    HDBM_InLt_St_struct);
                if (sample == NULL) {
                    return NULL;
                }

                HDBM_InLt_St_struct_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->InLtBit() - (char *)sample);

                HDBM_InLt_St_struct_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->InLtSt() - (char *)sample);

                HDBM_InLt_St_struct_g_sampleAccessInfo.memberAccessInfos = 
                HDBM_InLt_St_struct_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(HDBM_InLt_St_struct);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        HDBM_InLt_St_struct_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        HDBM_InLt_St_struct_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                HDBM_InLt_St_struct_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                HDBM_InLt_St_struct_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< HDBM_InLt_St_struct >;

                HDBM_InLt_St_struct_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &HDBM_InLt_St_struct_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin HDBM_InLt_St_struct_g_typePlugin = 
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

                return &HDBM_InLt_St_struct_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< HDBM_InLt_St_struct >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< HDBM_InLt_St_struct >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< HDBI_Win_PctAct_struct > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member HDBI_Win_PctAct_struct_g_tc_members[2]=
                {

                    {
                        (char *)"WinBit",/* Member name */
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
                        (char *)"WinSetCmd",/* Member name */
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

                static DDS_TypeCode HDBI_Win_PctAct_struct_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"HDBI_Win_PctAct_struct", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        HDBI_Win_PctAct_struct_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for HDBI_Win_PctAct_struct*/

                if (is_initialized) {
                    return &HDBI_Win_PctAct_struct_g_tc;
                }

                HDBI_Win_PctAct_struct_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                HDBI_Win_PctAct_struct_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;
                HDBI_Win_PctAct_struct_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;

                /* Initialize the values for member annotations. */
                HDBI_Win_PctAct_struct_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_OCTET;
                HDBI_Win_PctAct_struct_g_tc_members[0]._annotations._defaultValue._u.octet_value = 0;
                HDBI_Win_PctAct_struct_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_OCTET;
                HDBI_Win_PctAct_struct_g_tc_members[0]._annotations._minValue._u.octet_value = RTIXCdrOctet_MIN;
                HDBI_Win_PctAct_struct_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_OCTET;
                HDBI_Win_PctAct_struct_g_tc_members[0]._annotations._maxValue._u.octet_value = RTIXCdrOctet_MAX;

                HDBI_Win_PctAct_struct_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_ULONG;
                HDBI_Win_PctAct_struct_g_tc_members[1]._annotations._defaultValue._u.ulong_value = 0u;
                HDBI_Win_PctAct_struct_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_ULONG;
                HDBI_Win_PctAct_struct_g_tc_members[1]._annotations._minValue._u.ulong_value = RTIXCdrUnsignedLong_MIN;
                HDBI_Win_PctAct_struct_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_ULONG;
                HDBI_Win_PctAct_struct_g_tc_members[1]._annotations._maxValue._u.ulong_value = RTIXCdrUnsignedLong_MAX;

                HDBI_Win_PctAct_struct_g_tc._data._sampleAccessInfo = sample_access_info();
                HDBI_Win_PctAct_struct_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &HDBI_Win_PctAct_struct_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                HDBI_Win_PctAct_struct *sample;

                static RTIXCdrMemberAccessInfo HDBI_Win_PctAct_struct_g_memberAccessInfos[2] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo HDBI_Win_PctAct_struct_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &HDBI_Win_PctAct_struct_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    HDBI_Win_PctAct_struct);
                if (sample == NULL) {
                    return NULL;
                }

                HDBI_Win_PctAct_struct_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->WinBit() - (char *)sample);

                HDBI_Win_PctAct_struct_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->WinSetCmd() - (char *)sample);

                HDBI_Win_PctAct_struct_g_sampleAccessInfo.memberAccessInfos = 
                HDBI_Win_PctAct_struct_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(HDBI_Win_PctAct_struct);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        HDBI_Win_PctAct_struct_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        HDBI_Win_PctAct_struct_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                HDBI_Win_PctAct_struct_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                HDBI_Win_PctAct_struct_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< HDBI_Win_PctAct_struct >;

                HDBI_Win_PctAct_struct_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &HDBI_Win_PctAct_struct_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin HDBI_Win_PctAct_struct_g_typePlugin = 
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

                return &HDBI_Win_PctAct_struct_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< HDBI_Win_PctAct_struct >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< HDBI_Win_PctAct_struct >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< HDBM_Win_St_struct > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member HDBM_Win_St_struct_g_tc_members[4]=
                {

                    {
                        (char *)"WinBit",/* Member name */
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
                        (char *)"WinPst_St",/* Member name */
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
                    }, 
                    {
                        (char *)"WinMov_St",/* Member name */
                        {
                            2,/* Representation ID */
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
                        (char *)"WinStpRsn_St",/* Member name */
                        {
                            3,/* Representation ID */
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

                static DDS_TypeCode HDBM_Win_St_struct_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"HDBM_Win_St_struct", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        HDBM_Win_St_struct_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for HDBM_Win_St_struct*/

                if (is_initialized) {
                    return &HDBM_Win_St_struct_g_tc;
                }

                HDBM_Win_St_struct_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                HDBM_Win_St_struct_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;
                HDBM_Win_St_struct_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
                HDBM_Win_St_struct_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
                HDBM_Win_St_struct_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;

                /* Initialize the values for member annotations. */
                HDBM_Win_St_struct_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_OCTET;
                HDBM_Win_St_struct_g_tc_members[0]._annotations._defaultValue._u.octet_value = 0;
                HDBM_Win_St_struct_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_OCTET;
                HDBM_Win_St_struct_g_tc_members[0]._annotations._minValue._u.octet_value = RTIXCdrOctet_MIN;
                HDBM_Win_St_struct_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_OCTET;
                HDBM_Win_St_struct_g_tc_members[0]._annotations._maxValue._u.octet_value = RTIXCdrOctet_MAX;

                HDBM_Win_St_struct_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_ULONG;
                HDBM_Win_St_struct_g_tc_members[1]._annotations._defaultValue._u.ulong_value = 0u;
                HDBM_Win_St_struct_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_ULONG;
                HDBM_Win_St_struct_g_tc_members[1]._annotations._minValue._u.ulong_value = RTIXCdrUnsignedLong_MIN;
                HDBM_Win_St_struct_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_ULONG;
                HDBM_Win_St_struct_g_tc_members[1]._annotations._maxValue._u.ulong_value = RTIXCdrUnsignedLong_MAX;

                HDBM_Win_St_struct_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_ULONG;
                HDBM_Win_St_struct_g_tc_members[2]._annotations._defaultValue._u.ulong_value = 0u;
                HDBM_Win_St_struct_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_ULONG;
                HDBM_Win_St_struct_g_tc_members[2]._annotations._minValue._u.ulong_value = RTIXCdrUnsignedLong_MIN;
                HDBM_Win_St_struct_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_ULONG;
                HDBM_Win_St_struct_g_tc_members[2]._annotations._maxValue._u.ulong_value = RTIXCdrUnsignedLong_MAX;

                HDBM_Win_St_struct_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_ULONG;
                HDBM_Win_St_struct_g_tc_members[3]._annotations._defaultValue._u.ulong_value = 0u;
                HDBM_Win_St_struct_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_ULONG;
                HDBM_Win_St_struct_g_tc_members[3]._annotations._minValue._u.ulong_value = RTIXCdrUnsignedLong_MIN;
                HDBM_Win_St_struct_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_ULONG;
                HDBM_Win_St_struct_g_tc_members[3]._annotations._maxValue._u.ulong_value = RTIXCdrUnsignedLong_MAX;

                HDBM_Win_St_struct_g_tc._data._sampleAccessInfo = sample_access_info();
                HDBM_Win_St_struct_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &HDBM_Win_St_struct_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                HDBM_Win_St_struct *sample;

                static RTIXCdrMemberAccessInfo HDBM_Win_St_struct_g_memberAccessInfos[4] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo HDBM_Win_St_struct_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &HDBM_Win_St_struct_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    HDBM_Win_St_struct);
                if (sample == NULL) {
                    return NULL;
                }

                HDBM_Win_St_struct_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->WinBit() - (char *)sample);

                HDBM_Win_St_struct_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->WinPst_St() - (char *)sample);

                HDBM_Win_St_struct_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->WinMov_St() - (char *)sample);

                HDBM_Win_St_struct_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->WinStpRsn_St() - (char *)sample);

                HDBM_Win_St_struct_g_sampleAccessInfo.memberAccessInfos = 
                HDBM_Win_St_struct_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(HDBM_Win_St_struct);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        HDBM_Win_St_struct_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        HDBM_Win_St_struct_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                HDBM_Win_St_struct_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                HDBM_Win_St_struct_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< HDBM_Win_St_struct >;

                HDBM_Win_St_struct_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &HDBM_Win_St_struct_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin HDBM_Win_St_struct_g_typePlugin = 
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

                return &HDBM_Win_St_struct_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< HDBM_Win_St_struct >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< HDBM_Win_St_struct >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< HDBI_StAdj_Act_struct > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member HDBI_StAdj_Act_struct_g_tc_members[2]=
                {

                    {
                        (char *)"StPstBit",/* Member name */
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
                        (char *)"StAdjCmd",/* Member name */
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

                static DDS_TypeCode HDBI_StAdj_Act_struct_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"HDBI_StAdj_Act_struct", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        HDBI_StAdj_Act_struct_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for HDBI_StAdj_Act_struct*/

                if (is_initialized) {
                    return &HDBI_StAdj_Act_struct_g_tc;
                }

                HDBI_StAdj_Act_struct_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                HDBI_StAdj_Act_struct_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ushort;
                HDBI_StAdj_Act_struct_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulonglong;

                /* Initialize the values for member annotations. */
                HDBI_StAdj_Act_struct_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_USHORT;
                HDBI_StAdj_Act_struct_g_tc_members[0]._annotations._defaultValue._u.ushort_value = 0;
                HDBI_StAdj_Act_struct_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_USHORT;
                HDBI_StAdj_Act_struct_g_tc_members[0]._annotations._minValue._u.ushort_value = RTIXCdrUnsignedShort_MIN;
                HDBI_StAdj_Act_struct_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_USHORT;
                HDBI_StAdj_Act_struct_g_tc_members[0]._annotations._maxValue._u.ushort_value = RTIXCdrUnsignedShort_MAX;

                HDBI_StAdj_Act_struct_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_ULONGLONG;
                HDBI_StAdj_Act_struct_g_tc_members[1]._annotations._defaultValue._u.ulong_long_value = 0ull;
                HDBI_StAdj_Act_struct_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_ULONGLONG;
                HDBI_StAdj_Act_struct_g_tc_members[1]._annotations._minValue._u.ulong_long_value = RTIXCdrUnsignedLongLong_MIN;
                HDBI_StAdj_Act_struct_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_ULONGLONG;
                HDBI_StAdj_Act_struct_g_tc_members[1]._annotations._maxValue._u.ulong_long_value = RTIXCdrUnsignedLongLong_MAX;

                HDBI_StAdj_Act_struct_g_tc._data._sampleAccessInfo = sample_access_info();
                HDBI_StAdj_Act_struct_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &HDBI_StAdj_Act_struct_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                HDBI_StAdj_Act_struct *sample;

                static RTIXCdrMemberAccessInfo HDBI_StAdj_Act_struct_g_memberAccessInfos[2] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo HDBI_StAdj_Act_struct_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &HDBI_StAdj_Act_struct_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    HDBI_StAdj_Act_struct);
                if (sample == NULL) {
                    return NULL;
                }

                HDBI_StAdj_Act_struct_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->StPstBit() - (char *)sample);

                HDBI_StAdj_Act_struct_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->StAdjCmd() - (char *)sample);

                HDBI_StAdj_Act_struct_g_sampleAccessInfo.memberAccessInfos = 
                HDBI_StAdj_Act_struct_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(HDBI_StAdj_Act_struct);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        HDBI_StAdj_Act_struct_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        HDBI_StAdj_Act_struct_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                HDBI_StAdj_Act_struct_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                HDBI_StAdj_Act_struct_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< HDBI_StAdj_Act_struct >;

                HDBI_StAdj_Act_struct_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &HDBI_StAdj_Act_struct_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin HDBI_StAdj_Act_struct_g_typePlugin = 
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

                return &HDBI_StAdj_Act_struct_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< HDBI_StAdj_Act_struct >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< HDBI_StAdj_Act_struct >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< HDBM_StAdj_St_struct > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member HDBM_StAdj_St_struct_g_tc_members[2]=
                {

                    {
                        (char *)"StPsBit",/* Member name */
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
                        (char *)"StAdj_St",/* Member name */
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

                static DDS_TypeCode HDBM_StAdj_St_struct_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"HDBM_StAdj_St_struct", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        HDBM_StAdj_St_struct_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for HDBM_StAdj_St_struct*/

                if (is_initialized) {
                    return &HDBM_StAdj_St_struct_g_tc;
                }

                HDBM_StAdj_St_struct_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                HDBM_StAdj_St_struct_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ushort;
                HDBM_StAdj_St_struct_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulonglong;

                /* Initialize the values for member annotations. */
                HDBM_StAdj_St_struct_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_USHORT;
                HDBM_StAdj_St_struct_g_tc_members[0]._annotations._defaultValue._u.ushort_value = 0;
                HDBM_StAdj_St_struct_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_USHORT;
                HDBM_StAdj_St_struct_g_tc_members[0]._annotations._minValue._u.ushort_value = RTIXCdrUnsignedShort_MIN;
                HDBM_StAdj_St_struct_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_USHORT;
                HDBM_StAdj_St_struct_g_tc_members[0]._annotations._maxValue._u.ushort_value = RTIXCdrUnsignedShort_MAX;

                HDBM_StAdj_St_struct_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_ULONGLONG;
                HDBM_StAdj_St_struct_g_tc_members[1]._annotations._defaultValue._u.ulong_long_value = 0ull;
                HDBM_StAdj_St_struct_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_ULONGLONG;
                HDBM_StAdj_St_struct_g_tc_members[1]._annotations._minValue._u.ulong_long_value = RTIXCdrUnsignedLongLong_MIN;
                HDBM_StAdj_St_struct_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_ULONGLONG;
                HDBM_StAdj_St_struct_g_tc_members[1]._annotations._maxValue._u.ulong_long_value = RTIXCdrUnsignedLongLong_MAX;

                HDBM_StAdj_St_struct_g_tc._data._sampleAccessInfo = sample_access_info();
                HDBM_StAdj_St_struct_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &HDBM_StAdj_St_struct_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                HDBM_StAdj_St_struct *sample;

                static RTIXCdrMemberAccessInfo HDBM_StAdj_St_struct_g_memberAccessInfos[2] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo HDBM_StAdj_St_struct_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &HDBM_StAdj_St_struct_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    HDBM_StAdj_St_struct);
                if (sample == NULL) {
                    return NULL;
                }

                HDBM_StAdj_St_struct_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->StPsBit() - (char *)sample);

                HDBM_StAdj_St_struct_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->StAdj_St() - (char *)sample);

                HDBM_StAdj_St_struct_g_sampleAccessInfo.memberAccessInfos = 
                HDBM_StAdj_St_struct_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(HDBM_StAdj_St_struct);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        HDBM_StAdj_St_struct_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        HDBM_StAdj_St_struct_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                HDBM_StAdj_St_struct_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                HDBM_StAdj_St_struct_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< HDBM_StAdj_St_struct >;

                HDBM_StAdj_St_struct_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &HDBM_StAdj_St_struct_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin HDBM_StAdj_St_struct_g_typePlugin = 
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

                return &HDBM_StAdj_St_struct_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< HDBM_StAdj_St_struct >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< HDBM_StAdj_St_struct >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< HDBI_BdPst_Act_struct > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member HDBI_BdPst_Act_struct_g_tc_members[2]=
                {

                    {
                        (char *)"BdPstBit",/* Member name */
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
                        (char *)"BdPstCmd",/* Member name */
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

                static DDS_TypeCode HDBI_BdPst_Act_struct_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"HDBI_BdPst_Act_struct", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        HDBI_BdPst_Act_struct_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for HDBI_BdPst_Act_struct*/

                if (is_initialized) {
                    return &HDBI_BdPst_Act_struct_g_tc;
                }

                HDBI_BdPst_Act_struct_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                HDBI_BdPst_Act_struct_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ushort;
                HDBI_BdPst_Act_struct_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulonglong;

                /* Initialize the values for member annotations. */
                HDBI_BdPst_Act_struct_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_USHORT;
                HDBI_BdPst_Act_struct_g_tc_members[0]._annotations._defaultValue._u.ushort_value = 0;
                HDBI_BdPst_Act_struct_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_USHORT;
                HDBI_BdPst_Act_struct_g_tc_members[0]._annotations._minValue._u.ushort_value = RTIXCdrUnsignedShort_MIN;
                HDBI_BdPst_Act_struct_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_USHORT;
                HDBI_BdPst_Act_struct_g_tc_members[0]._annotations._maxValue._u.ushort_value = RTIXCdrUnsignedShort_MAX;

                HDBI_BdPst_Act_struct_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_ULONGLONG;
                HDBI_BdPst_Act_struct_g_tc_members[1]._annotations._defaultValue._u.ulong_long_value = 0ull;
                HDBI_BdPst_Act_struct_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_ULONGLONG;
                HDBI_BdPst_Act_struct_g_tc_members[1]._annotations._minValue._u.ulong_long_value = RTIXCdrUnsignedLongLong_MIN;
                HDBI_BdPst_Act_struct_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_ULONGLONG;
                HDBI_BdPst_Act_struct_g_tc_members[1]._annotations._maxValue._u.ulong_long_value = RTIXCdrUnsignedLongLong_MAX;

                HDBI_BdPst_Act_struct_g_tc._data._sampleAccessInfo = sample_access_info();
                HDBI_BdPst_Act_struct_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &HDBI_BdPst_Act_struct_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                HDBI_BdPst_Act_struct *sample;

                static RTIXCdrMemberAccessInfo HDBI_BdPst_Act_struct_g_memberAccessInfos[2] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo HDBI_BdPst_Act_struct_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &HDBI_BdPst_Act_struct_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    HDBI_BdPst_Act_struct);
                if (sample == NULL) {
                    return NULL;
                }

                HDBI_BdPst_Act_struct_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->BdPstBit() - (char *)sample);

                HDBI_BdPst_Act_struct_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->BdPstCmd() - (char *)sample);

                HDBI_BdPst_Act_struct_g_sampleAccessInfo.memberAccessInfos = 
                HDBI_BdPst_Act_struct_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(HDBI_BdPst_Act_struct);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        HDBI_BdPst_Act_struct_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        HDBI_BdPst_Act_struct_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                HDBI_BdPst_Act_struct_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                HDBI_BdPst_Act_struct_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< HDBI_BdPst_Act_struct >;

                HDBI_BdPst_Act_struct_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &HDBI_BdPst_Act_struct_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin HDBI_BdPst_Act_struct_g_typePlugin = 
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

                return &HDBI_BdPst_Act_struct_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< HDBI_BdPst_Act_struct >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< HDBI_BdPst_Act_struct >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< HDBM_BdPst_St_struct > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member HDBM_BdPst_St_struct_g_tc_members[2]=
                {

                    {
                        (char *)"BdPstBit",/* Member name */
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
                        (char *)"SyBdPstSt",/* Member name */
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

                static DDS_TypeCode HDBM_BdPst_St_struct_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"HDBM_BdPst_St_struct", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        HDBM_BdPst_St_struct_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for HDBM_BdPst_St_struct*/

                if (is_initialized) {
                    return &HDBM_BdPst_St_struct_g_tc;
                }

                HDBM_BdPst_St_struct_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                HDBM_BdPst_St_struct_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ushort;
                HDBM_BdPst_St_struct_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulonglong;

                /* Initialize the values for member annotations. */
                HDBM_BdPst_St_struct_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_USHORT;
                HDBM_BdPst_St_struct_g_tc_members[0]._annotations._defaultValue._u.ushort_value = 0;
                HDBM_BdPst_St_struct_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_USHORT;
                HDBM_BdPst_St_struct_g_tc_members[0]._annotations._minValue._u.ushort_value = RTIXCdrUnsignedShort_MIN;
                HDBM_BdPst_St_struct_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_USHORT;
                HDBM_BdPst_St_struct_g_tc_members[0]._annotations._maxValue._u.ushort_value = RTIXCdrUnsignedShort_MAX;

                HDBM_BdPst_St_struct_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_ULONGLONG;
                HDBM_BdPst_St_struct_g_tc_members[1]._annotations._defaultValue._u.ulong_long_value = 0ull;
                HDBM_BdPst_St_struct_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_ULONGLONG;
                HDBM_BdPst_St_struct_g_tc_members[1]._annotations._minValue._u.ulong_long_value = RTIXCdrUnsignedLongLong_MIN;
                HDBM_BdPst_St_struct_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_ULONGLONG;
                HDBM_BdPst_St_struct_g_tc_members[1]._annotations._maxValue._u.ulong_long_value = RTIXCdrUnsignedLongLong_MAX;

                HDBM_BdPst_St_struct_g_tc._data._sampleAccessInfo = sample_access_info();
                HDBM_BdPst_St_struct_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &HDBM_BdPst_St_struct_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                HDBM_BdPst_St_struct *sample;

                static RTIXCdrMemberAccessInfo HDBM_BdPst_St_struct_g_memberAccessInfos[2] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo HDBM_BdPst_St_struct_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &HDBM_BdPst_St_struct_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    HDBM_BdPst_St_struct);
                if (sample == NULL) {
                    return NULL;
                }

                HDBM_BdPst_St_struct_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->BdPstBit() - (char *)sample);

                HDBM_BdPst_St_struct_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->SyBdPstSt() - (char *)sample);

                HDBM_BdPst_St_struct_g_sampleAccessInfo.memberAccessInfos = 
                HDBM_BdPst_St_struct_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(HDBM_BdPst_St_struct);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        HDBM_BdPst_St_struct_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        HDBM_BdPst_St_struct_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                HDBM_BdPst_St_struct_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                HDBM_BdPst_St_struct_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< HDBM_BdPst_St_struct >;

                HDBM_BdPst_St_struct_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &HDBM_BdPst_St_struct_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin HDBM_BdPst_St_struct_g_typePlugin = 
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

                return &HDBM_BdPst_St_struct_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< HDBM_BdPst_St_struct >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< HDBM_BdPst_St_struct >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< HDBI_DrLth_Set_struct >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                HDBI_DrLth_Set_structPlugin_new,
                HDBI_DrLth_Set_structPlugin_delete);
        }

        std::vector<char>& topic_type_support< HDBI_DrLth_Set_struct >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const HDBI_DrLth_Set_struct& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = HDBI_DrLth_Set_structPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = HDBI_DrLth_Set_structPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< HDBI_DrLth_Set_struct >::from_cdr_buffer(HDBI_DrLth_Set_struct& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = HDBI_DrLth_Set_structPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create HDBI_DrLth_Set_struct from cdr buffer");
        }

        void topic_type_support< HDBI_DrLth_Set_struct >::reset_sample(HDBI_DrLth_Set_struct& sample) 
        {
            sample.DoorBit(0);
            sample.OpenAngSet_Req(0ull);
        }

        void topic_type_support< HDBI_DrLth_Set_struct >::allocate_sample(HDBI_DrLth_Set_struct& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }

        void topic_type_support< HDBM_DrLth_Rsp_struct >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                HDBM_DrLth_Rsp_structPlugin_new,
                HDBM_DrLth_Rsp_structPlugin_delete);
        }

        std::vector<char>& topic_type_support< HDBM_DrLth_Rsp_struct >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const HDBM_DrLth_Rsp_struct& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = HDBM_DrLth_Rsp_structPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = HDBM_DrLth_Rsp_structPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< HDBM_DrLth_Rsp_struct >::from_cdr_buffer(HDBM_DrLth_Rsp_struct& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = HDBM_DrLth_Rsp_structPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create HDBM_DrLth_Rsp_struct from cdr buffer");
        }

        void topic_type_support< HDBM_DrLth_Rsp_struct >::reset_sample(HDBM_DrLth_Rsp_struct& sample) 
        {
            sample.DoorBit(0);
            sample.OpenAngSet_Rsp(0ull);
        }

        void topic_type_support< HDBM_DrLth_Rsp_struct >::allocate_sample(HDBM_DrLth_Rsp_struct& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }

        void topic_type_support< HDBI_DrLth_Act_struct >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                HDBI_DrLth_Act_structPlugin_new,
                HDBI_DrLth_Act_structPlugin_delete);
        }

        std::vector<char>& topic_type_support< HDBI_DrLth_Act_struct >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const HDBI_DrLth_Act_struct& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = HDBI_DrLth_Act_structPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = HDBI_DrLth_Act_structPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< HDBI_DrLth_Act_struct >::from_cdr_buffer(HDBI_DrLth_Act_struct& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = HDBI_DrLth_Act_structPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create HDBI_DrLth_Act_struct from cdr buffer");
        }

        void topic_type_support< HDBI_DrLth_Act_struct >::reset_sample(HDBI_DrLth_Act_struct& sample) 
        {
            sample.DoorBit(0);
            sample.DoorBtnCtrl(0u);
            sample.DoorPosCtrl(0ull);
        }

        void topic_type_support< HDBI_DrLth_Act_struct >::allocate_sample(HDBI_DrLth_Act_struct& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }

        void topic_type_support< HDBM_DrLth_St_struct >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                HDBM_DrLth_St_structPlugin_new,
                HDBM_DrLth_St_structPlugin_delete);
        }

        std::vector<char>& topic_type_support< HDBM_DrLth_St_struct >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const HDBM_DrLth_St_struct& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = HDBM_DrLth_St_structPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = HDBM_DrLth_St_structPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< HDBM_DrLth_St_struct >::from_cdr_buffer(HDBM_DrLth_St_struct& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = HDBM_DrLth_St_structPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create HDBM_DrLth_St_struct from cdr buffer");
        }

        void topic_type_support< HDBM_DrLth_St_struct >::reset_sample(HDBM_DrLth_St_struct& sample) 
        {
            sample.DoorBit(0);
            sample.Door_St(0u);
            sample.DrWrk_St(0u);
            sample.NomDoor_St(0u);
            sample.TripPst_Val(0ull);
            sample.StpRsn_st(0u);
            sample.DrBbuse_St(0u);
        }

        void topic_type_support< HDBM_DrLth_St_struct >::allocate_sample(HDBM_DrLth_St_struct& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }

        void topic_type_support< HDBI_InLt_Act_struct >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                HDBI_InLt_Act_structPlugin_new,
                HDBI_InLt_Act_structPlugin_delete);
        }

        std::vector<char>& topic_type_support< HDBI_InLt_Act_struct >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const HDBI_InLt_Act_struct& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = HDBI_InLt_Act_structPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = HDBI_InLt_Act_structPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< HDBI_InLt_Act_struct >::from_cdr_buffer(HDBI_InLt_Act_struct& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = HDBI_InLt_Act_structPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create HDBI_InLt_Act_struct from cdr buffer");
        }

        void topic_type_support< HDBI_InLt_Act_struct >::reset_sample(HDBI_InLt_Act_struct& sample) 
        {
            sample.InLtBit(0);
            sample.InLtCmd(0u);
        }

        void topic_type_support< HDBI_InLt_Act_struct >::allocate_sample(HDBI_InLt_Act_struct& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }

        void topic_type_support< HDBM_InLt_St_struct >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                HDBM_InLt_St_structPlugin_new,
                HDBM_InLt_St_structPlugin_delete);
        }

        std::vector<char>& topic_type_support< HDBM_InLt_St_struct >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const HDBM_InLt_St_struct& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = HDBM_InLt_St_structPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = HDBM_InLt_St_structPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< HDBM_InLt_St_struct >::from_cdr_buffer(HDBM_InLt_St_struct& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = HDBM_InLt_St_structPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create HDBM_InLt_St_struct from cdr buffer");
        }

        void topic_type_support< HDBM_InLt_St_struct >::reset_sample(HDBM_InLt_St_struct& sample) 
        {
            sample.InLtBit(0);
            sample.InLtSt(0);
        }

        void topic_type_support< HDBM_InLt_St_struct >::allocate_sample(HDBM_InLt_St_struct& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }

        void topic_type_support< HDBI_Win_PctAct_struct >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                HDBI_Win_PctAct_structPlugin_new,
                HDBI_Win_PctAct_structPlugin_delete);
        }

        std::vector<char>& topic_type_support< HDBI_Win_PctAct_struct >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const HDBI_Win_PctAct_struct& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = HDBI_Win_PctAct_structPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = HDBI_Win_PctAct_structPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< HDBI_Win_PctAct_struct >::from_cdr_buffer(HDBI_Win_PctAct_struct& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = HDBI_Win_PctAct_structPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create HDBI_Win_PctAct_struct from cdr buffer");
        }

        void topic_type_support< HDBI_Win_PctAct_struct >::reset_sample(HDBI_Win_PctAct_struct& sample) 
        {
            sample.WinBit(0);
            sample.WinSetCmd(0u);
        }

        void topic_type_support< HDBI_Win_PctAct_struct >::allocate_sample(HDBI_Win_PctAct_struct& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }

        void topic_type_support< HDBM_Win_St_struct >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                HDBM_Win_St_structPlugin_new,
                HDBM_Win_St_structPlugin_delete);
        }

        std::vector<char>& topic_type_support< HDBM_Win_St_struct >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const HDBM_Win_St_struct& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = HDBM_Win_St_structPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = HDBM_Win_St_structPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< HDBM_Win_St_struct >::from_cdr_buffer(HDBM_Win_St_struct& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = HDBM_Win_St_structPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create HDBM_Win_St_struct from cdr buffer");
        }

        void topic_type_support< HDBM_Win_St_struct >::reset_sample(HDBM_Win_St_struct& sample) 
        {
            sample.WinBit(0);
            sample.WinPst_St(0u);
            sample.WinMov_St(0u);
            sample.WinStpRsn_St(0u);
        }

        void topic_type_support< HDBM_Win_St_struct >::allocate_sample(HDBM_Win_St_struct& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }

        void topic_type_support< HDBI_StAdj_Act_struct >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                HDBI_StAdj_Act_structPlugin_new,
                HDBI_StAdj_Act_structPlugin_delete);
        }

        std::vector<char>& topic_type_support< HDBI_StAdj_Act_struct >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const HDBI_StAdj_Act_struct& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = HDBI_StAdj_Act_structPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = HDBI_StAdj_Act_structPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< HDBI_StAdj_Act_struct >::from_cdr_buffer(HDBI_StAdj_Act_struct& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = HDBI_StAdj_Act_structPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create HDBI_StAdj_Act_struct from cdr buffer");
        }

        void topic_type_support< HDBI_StAdj_Act_struct >::reset_sample(HDBI_StAdj_Act_struct& sample) 
        {
            sample.StPstBit(0);
            sample.StAdjCmd(0ull);
        }

        void topic_type_support< HDBI_StAdj_Act_struct >::allocate_sample(HDBI_StAdj_Act_struct& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }

        void topic_type_support< HDBM_StAdj_St_struct >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                HDBM_StAdj_St_structPlugin_new,
                HDBM_StAdj_St_structPlugin_delete);
        }

        std::vector<char>& topic_type_support< HDBM_StAdj_St_struct >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const HDBM_StAdj_St_struct& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = HDBM_StAdj_St_structPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = HDBM_StAdj_St_structPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< HDBM_StAdj_St_struct >::from_cdr_buffer(HDBM_StAdj_St_struct& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = HDBM_StAdj_St_structPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create HDBM_StAdj_St_struct from cdr buffer");
        }

        void topic_type_support< HDBM_StAdj_St_struct >::reset_sample(HDBM_StAdj_St_struct& sample) 
        {
            sample.StPsBit(0);
            sample.StAdj_St(0ull);
        }

        void topic_type_support< HDBM_StAdj_St_struct >::allocate_sample(HDBM_StAdj_St_struct& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }

        void topic_type_support< HDBI_BdPst_Act_struct >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                HDBI_BdPst_Act_structPlugin_new,
                HDBI_BdPst_Act_structPlugin_delete);
        }

        std::vector<char>& topic_type_support< HDBI_BdPst_Act_struct >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const HDBI_BdPst_Act_struct& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = HDBI_BdPst_Act_structPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = HDBI_BdPst_Act_structPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< HDBI_BdPst_Act_struct >::from_cdr_buffer(HDBI_BdPst_Act_struct& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = HDBI_BdPst_Act_structPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create HDBI_BdPst_Act_struct from cdr buffer");
        }

        void topic_type_support< HDBI_BdPst_Act_struct >::reset_sample(HDBI_BdPst_Act_struct& sample) 
        {
            sample.BdPstBit(0);
            sample.BdPstCmd(0ull);
        }

        void topic_type_support< HDBI_BdPst_Act_struct >::allocate_sample(HDBI_BdPst_Act_struct& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }

        void topic_type_support< HDBM_BdPst_St_struct >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                HDBM_BdPst_St_structPlugin_new,
                HDBM_BdPst_St_structPlugin_delete);
        }

        std::vector<char>& topic_type_support< HDBM_BdPst_St_struct >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const HDBM_BdPst_St_struct& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = HDBM_BdPst_St_structPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = HDBM_BdPst_St_structPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< HDBM_BdPst_St_struct >::from_cdr_buffer(HDBM_BdPst_St_struct& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = HDBM_BdPst_St_structPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create HDBM_BdPst_St_struct from cdr buffer");
        }

        void topic_type_support< HDBM_BdPst_St_struct >::reset_sample(HDBM_BdPst_St_struct& sample) 
        {
            sample.BdPstBit(0);
            sample.SyBdPstSt(0ull);
        }

        void topic_type_support< HDBM_BdPst_St_struct >::allocate_sample(HDBM_BdPst_St_struct& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }

    }
}  

