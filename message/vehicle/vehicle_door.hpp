

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from vehicle_door.idl
using RTI Code Generator (rtiddsgen) version 3.1.1.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef vehicle_door_2059540705_hpp
#define vehicle_door_2059540705_hpp

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

class NDDSUSERDllExport HDBI_DrLth_Set_struct {
  public:
    HDBI_DrLth_Set_struct();

    HDBI_DrLth_Set_struct(
        uint8_t DoorBit,
        uint64_t OpenAngSet_Req);

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    HDBI_DrLth_Set_struct (HDBI_DrLth_Set_struct&&) = default;
    HDBI_DrLth_Set_struct& operator=(HDBI_DrLth_Set_struct&&) = default;
    HDBI_DrLth_Set_struct& operator=(const HDBI_DrLth_Set_struct&) = default;
    HDBI_DrLth_Set_struct(const HDBI_DrLth_Set_struct&) = default;
    #else
    HDBI_DrLth_Set_struct(HDBI_DrLth_Set_struct&& other_) OMG_NOEXCEPT;  
    HDBI_DrLth_Set_struct& operator=(HDBI_DrLth_Set_struct&&  other_) OMG_NOEXCEPT;
    #endif
    #endif 

    uint8_t& DoorBit() OMG_NOEXCEPT {
        return m_DoorBit_;
    }

    const uint8_t& DoorBit() const OMG_NOEXCEPT {
        return m_DoorBit_;
    }

    void DoorBit(uint8_t value) {
        m_DoorBit_ = value;
    }

    uint64_t& OpenAngSet_Req() OMG_NOEXCEPT {
        return m_OpenAngSet_Req_;
    }

    const uint64_t& OpenAngSet_Req() const OMG_NOEXCEPT {
        return m_OpenAngSet_Req_;
    }

    void OpenAngSet_Req(uint64_t value) {
        m_OpenAngSet_Req_ = value;
    }

    bool operator == (const HDBI_DrLth_Set_struct& other_) const;
    bool operator != (const HDBI_DrLth_Set_struct& other_) const;

    void swap(HDBI_DrLth_Set_struct& other_) OMG_NOEXCEPT ;

  private:

    uint8_t m_DoorBit_;
    uint64_t m_OpenAngSet_Req_;

};

inline void swap(HDBI_DrLth_Set_struct& a, HDBI_DrLth_Set_struct& b)  OMG_NOEXCEPT 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const HDBI_DrLth_Set_struct& sample);

class NDDSUSERDllExport HDBM_DrLth_Rsp_struct {
  public:
    HDBM_DrLth_Rsp_struct();

    HDBM_DrLth_Rsp_struct(
        uint8_t DoorBit,
        uint64_t OpenAngSet_Rsp);

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    HDBM_DrLth_Rsp_struct (HDBM_DrLth_Rsp_struct&&) = default;
    HDBM_DrLth_Rsp_struct& operator=(HDBM_DrLth_Rsp_struct&&) = default;
    HDBM_DrLth_Rsp_struct& operator=(const HDBM_DrLth_Rsp_struct&) = default;
    HDBM_DrLth_Rsp_struct(const HDBM_DrLth_Rsp_struct&) = default;
    #else
    HDBM_DrLth_Rsp_struct(HDBM_DrLth_Rsp_struct&& other_) OMG_NOEXCEPT;  
    HDBM_DrLth_Rsp_struct& operator=(HDBM_DrLth_Rsp_struct&&  other_) OMG_NOEXCEPT;
    #endif
    #endif 

    uint8_t& DoorBit() OMG_NOEXCEPT {
        return m_DoorBit_;
    }

    const uint8_t& DoorBit() const OMG_NOEXCEPT {
        return m_DoorBit_;
    }

    void DoorBit(uint8_t value) {
        m_DoorBit_ = value;
    }

    uint64_t& OpenAngSet_Rsp() OMG_NOEXCEPT {
        return m_OpenAngSet_Rsp_;
    }

    const uint64_t& OpenAngSet_Rsp() const OMG_NOEXCEPT {
        return m_OpenAngSet_Rsp_;
    }

    void OpenAngSet_Rsp(uint64_t value) {
        m_OpenAngSet_Rsp_ = value;
    }

    bool operator == (const HDBM_DrLth_Rsp_struct& other_) const;
    bool operator != (const HDBM_DrLth_Rsp_struct& other_) const;

    void swap(HDBM_DrLth_Rsp_struct& other_) OMG_NOEXCEPT ;

  private:

    uint8_t m_DoorBit_;
    uint64_t m_OpenAngSet_Rsp_;

};

inline void swap(HDBM_DrLth_Rsp_struct& a, HDBM_DrLth_Rsp_struct& b)  OMG_NOEXCEPT 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const HDBM_DrLth_Rsp_struct& sample);

class NDDSUSERDllExport HDBI_DrLth_Act_struct {
  public:
    HDBI_DrLth_Act_struct();

    HDBI_DrLth_Act_struct(
        uint8_t DoorBit,
        uint32_t DoorBtnCtrl,
        uint64_t DoorPosCtrl);

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    HDBI_DrLth_Act_struct (HDBI_DrLth_Act_struct&&) = default;
    HDBI_DrLth_Act_struct& operator=(HDBI_DrLth_Act_struct&&) = default;
    HDBI_DrLth_Act_struct& operator=(const HDBI_DrLth_Act_struct&) = default;
    HDBI_DrLth_Act_struct(const HDBI_DrLth_Act_struct&) = default;
    #else
    HDBI_DrLth_Act_struct(HDBI_DrLth_Act_struct&& other_) OMG_NOEXCEPT;  
    HDBI_DrLth_Act_struct& operator=(HDBI_DrLth_Act_struct&&  other_) OMG_NOEXCEPT;
    #endif
    #endif 

    uint8_t& DoorBit() OMG_NOEXCEPT {
        return m_DoorBit_;
    }

    const uint8_t& DoorBit() const OMG_NOEXCEPT {
        return m_DoorBit_;
    }

    void DoorBit(uint8_t value) {
        m_DoorBit_ = value;
    }

    uint32_t& DoorBtnCtrl() OMG_NOEXCEPT {
        return m_DoorBtnCtrl_;
    }

    const uint32_t& DoorBtnCtrl() const OMG_NOEXCEPT {
        return m_DoorBtnCtrl_;
    }

    void DoorBtnCtrl(uint32_t value) {
        m_DoorBtnCtrl_ = value;
    }

    uint64_t& DoorPosCtrl() OMG_NOEXCEPT {
        return m_DoorPosCtrl_;
    }

    const uint64_t& DoorPosCtrl() const OMG_NOEXCEPT {
        return m_DoorPosCtrl_;
    }

    void DoorPosCtrl(uint64_t value) {
        m_DoorPosCtrl_ = value;
    }

    bool operator == (const HDBI_DrLth_Act_struct& other_) const;
    bool operator != (const HDBI_DrLth_Act_struct& other_) const;

    void swap(HDBI_DrLth_Act_struct& other_) OMG_NOEXCEPT ;

  private:

    uint8_t m_DoorBit_;
    uint32_t m_DoorBtnCtrl_;
    uint64_t m_DoorPosCtrl_;

};

inline void swap(HDBI_DrLth_Act_struct& a, HDBI_DrLth_Act_struct& b)  OMG_NOEXCEPT 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const HDBI_DrLth_Act_struct& sample);

class NDDSUSERDllExport HDBM_DrLth_St_struct {
  public:
    HDBM_DrLth_St_struct();

    HDBM_DrLth_St_struct(
        uint8_t DoorBit,
        uint32_t Door_St,
        uint32_t DrWrk_St,
        uint32_t NomDoor_St,
        uint64_t TripPst_Val,
        uint32_t StpRsn_st,
        uint32_t DrBbuse_St);

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    HDBM_DrLth_St_struct (HDBM_DrLth_St_struct&&) = default;
    HDBM_DrLth_St_struct& operator=(HDBM_DrLth_St_struct&&) = default;
    HDBM_DrLth_St_struct& operator=(const HDBM_DrLth_St_struct&) = default;
    HDBM_DrLth_St_struct(const HDBM_DrLth_St_struct&) = default;
    #else
    HDBM_DrLth_St_struct(HDBM_DrLth_St_struct&& other_) OMG_NOEXCEPT;  
    HDBM_DrLth_St_struct& operator=(HDBM_DrLth_St_struct&&  other_) OMG_NOEXCEPT;
    #endif
    #endif 

    uint8_t& DoorBit() OMG_NOEXCEPT {
        return m_DoorBit_;
    }

    const uint8_t& DoorBit() const OMG_NOEXCEPT {
        return m_DoorBit_;
    }

    void DoorBit(uint8_t value) {
        m_DoorBit_ = value;
    }

    uint32_t& Door_St() OMG_NOEXCEPT {
        return m_Door_St_;
    }

    const uint32_t& Door_St() const OMG_NOEXCEPT {
        return m_Door_St_;
    }

    void Door_St(uint32_t value) {
        m_Door_St_ = value;
    }

    uint32_t& DrWrk_St() OMG_NOEXCEPT {
        return m_DrWrk_St_;
    }

    const uint32_t& DrWrk_St() const OMG_NOEXCEPT {
        return m_DrWrk_St_;
    }

    void DrWrk_St(uint32_t value) {
        m_DrWrk_St_ = value;
    }

    uint32_t& NomDoor_St() OMG_NOEXCEPT {
        return m_NomDoor_St_;
    }

    const uint32_t& NomDoor_St() const OMG_NOEXCEPT {
        return m_NomDoor_St_;
    }

    void NomDoor_St(uint32_t value) {
        m_NomDoor_St_ = value;
    }

    uint64_t& TripPst_Val() OMG_NOEXCEPT {
        return m_TripPst_Val_;
    }

    const uint64_t& TripPst_Val() const OMG_NOEXCEPT {
        return m_TripPst_Val_;
    }

    void TripPst_Val(uint64_t value) {
        m_TripPst_Val_ = value;
    }

    uint32_t& StpRsn_st() OMG_NOEXCEPT {
        return m_StpRsn_st_;
    }

    const uint32_t& StpRsn_st() const OMG_NOEXCEPT {
        return m_StpRsn_st_;
    }

    void StpRsn_st(uint32_t value) {
        m_StpRsn_st_ = value;
    }

    uint32_t& DrBbuse_St() OMG_NOEXCEPT {
        return m_DrBbuse_St_;
    }

    const uint32_t& DrBbuse_St() const OMG_NOEXCEPT {
        return m_DrBbuse_St_;
    }

    void DrBbuse_St(uint32_t value) {
        m_DrBbuse_St_ = value;
    }

    bool operator == (const HDBM_DrLth_St_struct& other_) const;
    bool operator != (const HDBM_DrLth_St_struct& other_) const;

    void swap(HDBM_DrLth_St_struct& other_) OMG_NOEXCEPT ;

  private:

    uint8_t m_DoorBit_;
    uint32_t m_Door_St_;
    uint32_t m_DrWrk_St_;
    uint32_t m_NomDoor_St_;
    uint64_t m_TripPst_Val_;
    uint32_t m_StpRsn_st_;
    uint32_t m_DrBbuse_St_;

};

inline void swap(HDBM_DrLth_St_struct& a, HDBM_DrLth_St_struct& b)  OMG_NOEXCEPT 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const HDBM_DrLth_St_struct& sample);

class NDDSUSERDllExport HDBI_InLt_Act_struct {
  public:
    HDBI_InLt_Act_struct();

    HDBI_InLt_Act_struct(
        uint8_t InLtBit,
        uint32_t InLtCmd);

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    HDBI_InLt_Act_struct (HDBI_InLt_Act_struct&&) = default;
    HDBI_InLt_Act_struct& operator=(HDBI_InLt_Act_struct&&) = default;
    HDBI_InLt_Act_struct& operator=(const HDBI_InLt_Act_struct&) = default;
    HDBI_InLt_Act_struct(const HDBI_InLt_Act_struct&) = default;
    #else
    HDBI_InLt_Act_struct(HDBI_InLt_Act_struct&& other_) OMG_NOEXCEPT;  
    HDBI_InLt_Act_struct& operator=(HDBI_InLt_Act_struct&&  other_) OMG_NOEXCEPT;
    #endif
    #endif 

    uint8_t& InLtBit() OMG_NOEXCEPT {
        return m_InLtBit_;
    }

    const uint8_t& InLtBit() const OMG_NOEXCEPT {
        return m_InLtBit_;
    }

    void InLtBit(uint8_t value) {
        m_InLtBit_ = value;
    }

    uint32_t& InLtCmd() OMG_NOEXCEPT {
        return m_InLtCmd_;
    }

    const uint32_t& InLtCmd() const OMG_NOEXCEPT {
        return m_InLtCmd_;
    }

    void InLtCmd(uint32_t value) {
        m_InLtCmd_ = value;
    }

    bool operator == (const HDBI_InLt_Act_struct& other_) const;
    bool operator != (const HDBI_InLt_Act_struct& other_) const;

    void swap(HDBI_InLt_Act_struct& other_) OMG_NOEXCEPT ;

  private:

    uint8_t m_InLtBit_;
    uint32_t m_InLtCmd_;

};

inline void swap(HDBI_InLt_Act_struct& a, HDBI_InLt_Act_struct& b)  OMG_NOEXCEPT 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const HDBI_InLt_Act_struct& sample);

class NDDSUSERDllExport HDBM_InLt_St_struct {
  public:
    HDBM_InLt_St_struct();

    HDBM_InLt_St_struct(
        uint8_t InLtBit,
        int32_t InLtSt);

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    HDBM_InLt_St_struct (HDBM_InLt_St_struct&&) = default;
    HDBM_InLt_St_struct& operator=(HDBM_InLt_St_struct&&) = default;
    HDBM_InLt_St_struct& operator=(const HDBM_InLt_St_struct&) = default;
    HDBM_InLt_St_struct(const HDBM_InLt_St_struct&) = default;
    #else
    HDBM_InLt_St_struct(HDBM_InLt_St_struct&& other_) OMG_NOEXCEPT;  
    HDBM_InLt_St_struct& operator=(HDBM_InLt_St_struct&&  other_) OMG_NOEXCEPT;
    #endif
    #endif 

    uint8_t& InLtBit() OMG_NOEXCEPT {
        return m_InLtBit_;
    }

    const uint8_t& InLtBit() const OMG_NOEXCEPT {
        return m_InLtBit_;
    }

    void InLtBit(uint8_t value) {
        m_InLtBit_ = value;
    }

    int32_t& InLtSt() OMG_NOEXCEPT {
        return m_InLtSt_;
    }

    const int32_t& InLtSt() const OMG_NOEXCEPT {
        return m_InLtSt_;
    }

    void InLtSt(int32_t value) {
        m_InLtSt_ = value;
    }

    bool operator == (const HDBM_InLt_St_struct& other_) const;
    bool operator != (const HDBM_InLt_St_struct& other_) const;

    void swap(HDBM_InLt_St_struct& other_) OMG_NOEXCEPT ;

  private:

    uint8_t m_InLtBit_;
    int32_t m_InLtSt_;

};

inline void swap(HDBM_InLt_St_struct& a, HDBM_InLt_St_struct& b)  OMG_NOEXCEPT 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const HDBM_InLt_St_struct& sample);

class NDDSUSERDllExport HDBI_Win_PctAct_struct {
  public:
    HDBI_Win_PctAct_struct();

    HDBI_Win_PctAct_struct(
        uint8_t WinBit,
        uint32_t WinSetCmd);

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    HDBI_Win_PctAct_struct (HDBI_Win_PctAct_struct&&) = default;
    HDBI_Win_PctAct_struct& operator=(HDBI_Win_PctAct_struct&&) = default;
    HDBI_Win_PctAct_struct& operator=(const HDBI_Win_PctAct_struct&) = default;
    HDBI_Win_PctAct_struct(const HDBI_Win_PctAct_struct&) = default;
    #else
    HDBI_Win_PctAct_struct(HDBI_Win_PctAct_struct&& other_) OMG_NOEXCEPT;  
    HDBI_Win_PctAct_struct& operator=(HDBI_Win_PctAct_struct&&  other_) OMG_NOEXCEPT;
    #endif
    #endif 

    uint8_t& WinBit() OMG_NOEXCEPT {
        return m_WinBit_;
    }

    const uint8_t& WinBit() const OMG_NOEXCEPT {
        return m_WinBit_;
    }

    void WinBit(uint8_t value) {
        m_WinBit_ = value;
    }

    uint32_t& WinSetCmd() OMG_NOEXCEPT {
        return m_WinSetCmd_;
    }

    const uint32_t& WinSetCmd() const OMG_NOEXCEPT {
        return m_WinSetCmd_;
    }

    void WinSetCmd(uint32_t value) {
        m_WinSetCmd_ = value;
    }

    bool operator == (const HDBI_Win_PctAct_struct& other_) const;
    bool operator != (const HDBI_Win_PctAct_struct& other_) const;

    void swap(HDBI_Win_PctAct_struct& other_) OMG_NOEXCEPT ;

  private:

    uint8_t m_WinBit_;
    uint32_t m_WinSetCmd_;

};

inline void swap(HDBI_Win_PctAct_struct& a, HDBI_Win_PctAct_struct& b)  OMG_NOEXCEPT 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const HDBI_Win_PctAct_struct& sample);

class NDDSUSERDllExport HDBM_Win_St_struct {
  public:
    HDBM_Win_St_struct();

    HDBM_Win_St_struct(
        uint8_t WinBit,
        uint32_t WinPst_St,
        uint32_t WinMov_St,
        uint32_t WinStpRsn_St);

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    HDBM_Win_St_struct (HDBM_Win_St_struct&&) = default;
    HDBM_Win_St_struct& operator=(HDBM_Win_St_struct&&) = default;
    HDBM_Win_St_struct& operator=(const HDBM_Win_St_struct&) = default;
    HDBM_Win_St_struct(const HDBM_Win_St_struct&) = default;
    #else
    HDBM_Win_St_struct(HDBM_Win_St_struct&& other_) OMG_NOEXCEPT;  
    HDBM_Win_St_struct& operator=(HDBM_Win_St_struct&&  other_) OMG_NOEXCEPT;
    #endif
    #endif 

    uint8_t& WinBit() OMG_NOEXCEPT {
        return m_WinBit_;
    }

    const uint8_t& WinBit() const OMG_NOEXCEPT {
        return m_WinBit_;
    }

    void WinBit(uint8_t value) {
        m_WinBit_ = value;
    }

    uint32_t& WinPst_St() OMG_NOEXCEPT {
        return m_WinPst_St_;
    }

    const uint32_t& WinPst_St() const OMG_NOEXCEPT {
        return m_WinPst_St_;
    }

    void WinPst_St(uint32_t value) {
        m_WinPst_St_ = value;
    }

    uint32_t& WinMov_St() OMG_NOEXCEPT {
        return m_WinMov_St_;
    }

    const uint32_t& WinMov_St() const OMG_NOEXCEPT {
        return m_WinMov_St_;
    }

    void WinMov_St(uint32_t value) {
        m_WinMov_St_ = value;
    }

    uint32_t& WinStpRsn_St() OMG_NOEXCEPT {
        return m_WinStpRsn_St_;
    }

    const uint32_t& WinStpRsn_St() const OMG_NOEXCEPT {
        return m_WinStpRsn_St_;
    }

    void WinStpRsn_St(uint32_t value) {
        m_WinStpRsn_St_ = value;
    }

    bool operator == (const HDBM_Win_St_struct& other_) const;
    bool operator != (const HDBM_Win_St_struct& other_) const;

    void swap(HDBM_Win_St_struct& other_) OMG_NOEXCEPT ;

  private:

    uint8_t m_WinBit_;
    uint32_t m_WinPst_St_;
    uint32_t m_WinMov_St_;
    uint32_t m_WinStpRsn_St_;

};

inline void swap(HDBM_Win_St_struct& a, HDBM_Win_St_struct& b)  OMG_NOEXCEPT 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const HDBM_Win_St_struct& sample);

class NDDSUSERDllExport HDBI_StAdj_Act_struct {
  public:
    HDBI_StAdj_Act_struct();

    HDBI_StAdj_Act_struct(
        uint16_t StPstBit,
        uint64_t StAdjCmd);

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    HDBI_StAdj_Act_struct (HDBI_StAdj_Act_struct&&) = default;
    HDBI_StAdj_Act_struct& operator=(HDBI_StAdj_Act_struct&&) = default;
    HDBI_StAdj_Act_struct& operator=(const HDBI_StAdj_Act_struct&) = default;
    HDBI_StAdj_Act_struct(const HDBI_StAdj_Act_struct&) = default;
    #else
    HDBI_StAdj_Act_struct(HDBI_StAdj_Act_struct&& other_) OMG_NOEXCEPT;  
    HDBI_StAdj_Act_struct& operator=(HDBI_StAdj_Act_struct&&  other_) OMG_NOEXCEPT;
    #endif
    #endif 

    uint16_t& StPstBit() OMG_NOEXCEPT {
        return m_StPstBit_;
    }

    const uint16_t& StPstBit() const OMG_NOEXCEPT {
        return m_StPstBit_;
    }

    void StPstBit(uint16_t value) {
        m_StPstBit_ = value;
    }

    uint64_t& StAdjCmd() OMG_NOEXCEPT {
        return m_StAdjCmd_;
    }

    const uint64_t& StAdjCmd() const OMG_NOEXCEPT {
        return m_StAdjCmd_;
    }

    void StAdjCmd(uint64_t value) {
        m_StAdjCmd_ = value;
    }

    bool operator == (const HDBI_StAdj_Act_struct& other_) const;
    bool operator != (const HDBI_StAdj_Act_struct& other_) const;

    void swap(HDBI_StAdj_Act_struct& other_) OMG_NOEXCEPT ;

  private:

    uint16_t m_StPstBit_;
    uint64_t m_StAdjCmd_;

};

inline void swap(HDBI_StAdj_Act_struct& a, HDBI_StAdj_Act_struct& b)  OMG_NOEXCEPT 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const HDBI_StAdj_Act_struct& sample);

class NDDSUSERDllExport HDBM_StAdj_St_struct {
  public:
    HDBM_StAdj_St_struct();

    HDBM_StAdj_St_struct(
        uint16_t StPsBit,
        uint64_t StAdj_St);

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    HDBM_StAdj_St_struct (HDBM_StAdj_St_struct&&) = default;
    HDBM_StAdj_St_struct& operator=(HDBM_StAdj_St_struct&&) = default;
    HDBM_StAdj_St_struct& operator=(const HDBM_StAdj_St_struct&) = default;
    HDBM_StAdj_St_struct(const HDBM_StAdj_St_struct&) = default;
    #else
    HDBM_StAdj_St_struct(HDBM_StAdj_St_struct&& other_) OMG_NOEXCEPT;  
    HDBM_StAdj_St_struct& operator=(HDBM_StAdj_St_struct&&  other_) OMG_NOEXCEPT;
    #endif
    #endif 

    uint16_t& StPsBit() OMG_NOEXCEPT {
        return m_StPsBit_;
    }

    const uint16_t& StPsBit() const OMG_NOEXCEPT {
        return m_StPsBit_;
    }

    void StPsBit(uint16_t value) {
        m_StPsBit_ = value;
    }

    uint64_t& StAdj_St() OMG_NOEXCEPT {
        return m_StAdj_St_;
    }

    const uint64_t& StAdj_St() const OMG_NOEXCEPT {
        return m_StAdj_St_;
    }

    void StAdj_St(uint64_t value) {
        m_StAdj_St_ = value;
    }

    bool operator == (const HDBM_StAdj_St_struct& other_) const;
    bool operator != (const HDBM_StAdj_St_struct& other_) const;

    void swap(HDBM_StAdj_St_struct& other_) OMG_NOEXCEPT ;

  private:

    uint16_t m_StPsBit_;
    uint64_t m_StAdj_St_;

};

inline void swap(HDBM_StAdj_St_struct& a, HDBM_StAdj_St_struct& b)  OMG_NOEXCEPT 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const HDBM_StAdj_St_struct& sample);

class NDDSUSERDllExport HDBI_BdPst_Act_struct {
  public:
    HDBI_BdPst_Act_struct();

    HDBI_BdPst_Act_struct(
        uint16_t BdPstBit,
        uint64_t BdPstCmd);

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    HDBI_BdPst_Act_struct (HDBI_BdPst_Act_struct&&) = default;
    HDBI_BdPst_Act_struct& operator=(HDBI_BdPst_Act_struct&&) = default;
    HDBI_BdPst_Act_struct& operator=(const HDBI_BdPst_Act_struct&) = default;
    HDBI_BdPst_Act_struct(const HDBI_BdPst_Act_struct&) = default;
    #else
    HDBI_BdPst_Act_struct(HDBI_BdPst_Act_struct&& other_) OMG_NOEXCEPT;  
    HDBI_BdPst_Act_struct& operator=(HDBI_BdPst_Act_struct&&  other_) OMG_NOEXCEPT;
    #endif
    #endif 

    uint16_t& BdPstBit() OMG_NOEXCEPT {
        return m_BdPstBit_;
    }

    const uint16_t& BdPstBit() const OMG_NOEXCEPT {
        return m_BdPstBit_;
    }

    void BdPstBit(uint16_t value) {
        m_BdPstBit_ = value;
    }

    uint64_t& BdPstCmd() OMG_NOEXCEPT {
        return m_BdPstCmd_;
    }

    const uint64_t& BdPstCmd() const OMG_NOEXCEPT {
        return m_BdPstCmd_;
    }

    void BdPstCmd(uint64_t value) {
        m_BdPstCmd_ = value;
    }

    bool operator == (const HDBI_BdPst_Act_struct& other_) const;
    bool operator != (const HDBI_BdPst_Act_struct& other_) const;

    void swap(HDBI_BdPst_Act_struct& other_) OMG_NOEXCEPT ;

  private:

    uint16_t m_BdPstBit_;
    uint64_t m_BdPstCmd_;

};

inline void swap(HDBI_BdPst_Act_struct& a, HDBI_BdPst_Act_struct& b)  OMG_NOEXCEPT 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const HDBI_BdPst_Act_struct& sample);

class NDDSUSERDllExport HDBM_BdPst_St_struct {
  public:
    HDBM_BdPst_St_struct();

    HDBM_BdPst_St_struct(
        uint16_t BdPstBit,
        uint64_t SyBdPstSt);

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    HDBM_BdPst_St_struct (HDBM_BdPst_St_struct&&) = default;
    HDBM_BdPst_St_struct& operator=(HDBM_BdPst_St_struct&&) = default;
    HDBM_BdPst_St_struct& operator=(const HDBM_BdPst_St_struct&) = default;
    HDBM_BdPst_St_struct(const HDBM_BdPst_St_struct&) = default;
    #else
    HDBM_BdPst_St_struct(HDBM_BdPst_St_struct&& other_) OMG_NOEXCEPT;  
    HDBM_BdPst_St_struct& operator=(HDBM_BdPst_St_struct&&  other_) OMG_NOEXCEPT;
    #endif
    #endif 

    uint16_t& BdPstBit() OMG_NOEXCEPT {
        return m_BdPstBit_;
    }

    const uint16_t& BdPstBit() const OMG_NOEXCEPT {
        return m_BdPstBit_;
    }

    void BdPstBit(uint16_t value) {
        m_BdPstBit_ = value;
    }

    uint64_t& SyBdPstSt() OMG_NOEXCEPT {
        return m_SyBdPstSt_;
    }

    const uint64_t& SyBdPstSt() const OMG_NOEXCEPT {
        return m_SyBdPstSt_;
    }

    void SyBdPstSt(uint64_t value) {
        m_SyBdPstSt_ = value;
    }

    bool operator == (const HDBM_BdPst_St_struct& other_) const;
    bool operator != (const HDBM_BdPst_St_struct& other_) const;

    void swap(HDBM_BdPst_St_struct& other_) OMG_NOEXCEPT ;

  private:

    uint16_t m_BdPstBit_;
    uint64_t m_SyBdPstSt_;

};

inline void swap(HDBM_BdPst_St_struct& a, HDBM_BdPst_St_struct& b)  OMG_NOEXCEPT 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const HDBM_BdPst_St_struct& sample);

namespace rti {
    namespace flat {
        namespace topic {
        }
    }
}
namespace dds {
    namespace topic {

        template<>
        struct topic_type_name< HDBI_DrLth_Set_struct > {
            NDDSUSERDllExport static std::string value() {
                return "HDBI_DrLth_Set_struct";
            }
        };

        template<>
        struct is_topic_type< HDBI_DrLth_Set_struct > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< HDBI_DrLth_Set_struct > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const HDBI_DrLth_Set_struct& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(HDBI_DrLth_Set_struct& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(HDBI_DrLth_Set_struct& sample);

            NDDSUSERDllExport 
            static void allocate_sample(HDBI_DrLth_Set_struct& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< HDBM_DrLth_Rsp_struct > {
            NDDSUSERDllExport static std::string value() {
                return "HDBM_DrLth_Rsp_struct";
            }
        };

        template<>
        struct is_topic_type< HDBM_DrLth_Rsp_struct > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< HDBM_DrLth_Rsp_struct > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const HDBM_DrLth_Rsp_struct& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(HDBM_DrLth_Rsp_struct& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(HDBM_DrLth_Rsp_struct& sample);

            NDDSUSERDllExport 
            static void allocate_sample(HDBM_DrLth_Rsp_struct& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< HDBI_DrLth_Act_struct > {
            NDDSUSERDllExport static std::string value() {
                return "HDBI_DrLth_Act_struct";
            }
        };

        template<>
        struct is_topic_type< HDBI_DrLth_Act_struct > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< HDBI_DrLth_Act_struct > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const HDBI_DrLth_Act_struct& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(HDBI_DrLth_Act_struct& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(HDBI_DrLth_Act_struct& sample);

            NDDSUSERDllExport 
            static void allocate_sample(HDBI_DrLth_Act_struct& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< HDBM_DrLth_St_struct > {
            NDDSUSERDllExport static std::string value() {
                return "HDBM_DrLth_St_struct";
            }
        };

        template<>
        struct is_topic_type< HDBM_DrLth_St_struct > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< HDBM_DrLth_St_struct > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const HDBM_DrLth_St_struct& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(HDBM_DrLth_St_struct& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(HDBM_DrLth_St_struct& sample);

            NDDSUSERDllExport 
            static void allocate_sample(HDBM_DrLth_St_struct& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< HDBI_InLt_Act_struct > {
            NDDSUSERDllExport static std::string value() {
                return "HDBI_InLt_Act_struct";
            }
        };

        template<>
        struct is_topic_type< HDBI_InLt_Act_struct > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< HDBI_InLt_Act_struct > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const HDBI_InLt_Act_struct& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(HDBI_InLt_Act_struct& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(HDBI_InLt_Act_struct& sample);

            NDDSUSERDllExport 
            static void allocate_sample(HDBI_InLt_Act_struct& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< HDBM_InLt_St_struct > {
            NDDSUSERDllExport static std::string value() {
                return "HDBM_InLt_St_struct";
            }
        };

        template<>
        struct is_topic_type< HDBM_InLt_St_struct > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< HDBM_InLt_St_struct > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const HDBM_InLt_St_struct& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(HDBM_InLt_St_struct& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(HDBM_InLt_St_struct& sample);

            NDDSUSERDllExport 
            static void allocate_sample(HDBM_InLt_St_struct& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< HDBI_Win_PctAct_struct > {
            NDDSUSERDllExport static std::string value() {
                return "HDBI_Win_PctAct_struct";
            }
        };

        template<>
        struct is_topic_type< HDBI_Win_PctAct_struct > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< HDBI_Win_PctAct_struct > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const HDBI_Win_PctAct_struct& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(HDBI_Win_PctAct_struct& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(HDBI_Win_PctAct_struct& sample);

            NDDSUSERDllExport 
            static void allocate_sample(HDBI_Win_PctAct_struct& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< HDBM_Win_St_struct > {
            NDDSUSERDllExport static std::string value() {
                return "HDBM_Win_St_struct";
            }
        };

        template<>
        struct is_topic_type< HDBM_Win_St_struct > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< HDBM_Win_St_struct > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const HDBM_Win_St_struct& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(HDBM_Win_St_struct& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(HDBM_Win_St_struct& sample);

            NDDSUSERDllExport 
            static void allocate_sample(HDBM_Win_St_struct& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< HDBI_StAdj_Act_struct > {
            NDDSUSERDllExport static std::string value() {
                return "HDBI_StAdj_Act_struct";
            }
        };

        template<>
        struct is_topic_type< HDBI_StAdj_Act_struct > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< HDBI_StAdj_Act_struct > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const HDBI_StAdj_Act_struct& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(HDBI_StAdj_Act_struct& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(HDBI_StAdj_Act_struct& sample);

            NDDSUSERDllExport 
            static void allocate_sample(HDBI_StAdj_Act_struct& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< HDBM_StAdj_St_struct > {
            NDDSUSERDllExport static std::string value() {
                return "HDBM_StAdj_St_struct";
            }
        };

        template<>
        struct is_topic_type< HDBM_StAdj_St_struct > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< HDBM_StAdj_St_struct > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const HDBM_StAdj_St_struct& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(HDBM_StAdj_St_struct& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(HDBM_StAdj_St_struct& sample);

            NDDSUSERDllExport 
            static void allocate_sample(HDBM_StAdj_St_struct& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< HDBI_BdPst_Act_struct > {
            NDDSUSERDllExport static std::string value() {
                return "HDBI_BdPst_Act_struct";
            }
        };

        template<>
        struct is_topic_type< HDBI_BdPst_Act_struct > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< HDBI_BdPst_Act_struct > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const HDBI_BdPst_Act_struct& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(HDBI_BdPst_Act_struct& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(HDBI_BdPst_Act_struct& sample);

            NDDSUSERDllExport 
            static void allocate_sample(HDBI_BdPst_Act_struct& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< HDBM_BdPst_St_struct > {
            NDDSUSERDllExport static std::string value() {
                return "HDBM_BdPst_St_struct";
            }
        };

        template<>
        struct is_topic_type< HDBM_BdPst_St_struct > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< HDBM_BdPst_St_struct > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const HDBM_BdPst_St_struct& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(HDBM_BdPst_St_struct& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(HDBM_BdPst_St_struct& sample);

            NDDSUSERDllExport 
            static void allocate_sample(HDBM_BdPst_St_struct& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {
        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< HDBI_DrLth_Set_struct > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< HDBI_DrLth_Set_struct > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< HDBM_DrLth_Rsp_struct > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< HDBM_DrLth_Rsp_struct > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< HDBI_DrLth_Act_struct > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< HDBI_DrLth_Act_struct > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< HDBM_DrLth_St_struct > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< HDBM_DrLth_St_struct > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< HDBI_InLt_Act_struct > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< HDBI_InLt_Act_struct > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< HDBM_InLt_St_struct > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< HDBM_InLt_St_struct > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< HDBI_Win_PctAct_struct > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< HDBI_Win_PctAct_struct > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< HDBM_Win_St_struct > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< HDBM_Win_St_struct > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< HDBI_StAdj_Act_struct > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< HDBI_StAdj_Act_struct > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< HDBM_StAdj_St_struct > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< HDBM_StAdj_St_struct > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< HDBI_BdPst_Act_struct > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< HDBI_BdPst_Act_struct > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< HDBM_BdPst_St_struct > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< HDBM_BdPst_St_struct > {
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

#endif // vehicle_door_2059540705_hpp

