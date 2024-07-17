

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from rpc_door_control.idl
using RTI Code Generator (rtiddsgen) version 3.1.1.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "rpc_door_control.hpp"
#include "rpc_door_controlPlugin.hpp"

#include <rti/util/ostream_operators.hpp>

namespace DoorService {

    std::ostream& operator << (std::ostream& o,const MajorType& sample)
    {
        ::rti::util::StreamFlagSaver flag_saver (o);
        switch(sample){
            case MajorType::BD_ARM:
            o << "MajorType::BD_ARM" << " ";
            break;
            case MajorType::BD_PST:
            o << "MajorType::BD_PST" << " ";
            break;
            case MajorType::WIN_PER:
            o << "MajorType::WIN_PER" << " ";
            break;
            case MajorType::CHS:
            o << "MajorType::CHS" << " ";
            break;
        }
        return o;
    }

    std::ostream& operator << (std::ostream& o,const MinorType& sample)
    {
        ::rti::util::StreamFlagSaver flag_saver (o);
        switch(sample){
            case MinorType::A:
            o << "MinorType::A" << " ";
            break;
        }
        return o;
    }

    // ---- SetMsg: 

    SetMsg::SetMsg() :
        m_CmdId_ (0) ,
        m_MType_(DoorService::MajorType::BD_ARM) ,
        m_SetBit_ (0) ,
        m_SetCmd_ (0u) ,
        m_CtrlSrc_ ("")  {
    }   

    SetMsg::SetMsg (
        uint8_t CmdId,
        const DoorService::MajorType& MType,
        uint8_t SetBit,
        uint32_t SetCmd,
        const std::string& CtrlSrc)
        :
            m_CmdId_( CmdId ),
            m_MType_( MType ),
            m_SetBit_( SetBit ),
            m_SetCmd_( SetCmd ),
            m_CtrlSrc_( CtrlSrc ) {
    }

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    SetMsg::SetMsg(SetMsg&& other_) OMG_NOEXCEPT  :m_CmdId_ (std::move(other_.m_CmdId_))
    ,
    m_MType_ (std::move(other_.m_MType_))
    ,
    m_SetBit_ (std::move(other_.m_SetBit_))
    ,
    m_SetCmd_ (std::move(other_.m_SetCmd_))
    ,
    m_CtrlSrc_ (std::move(other_.m_CtrlSrc_))
    {
    } 

    SetMsg& SetMsg::operator=(SetMsg&&  other_) OMG_NOEXCEPT {
        SetMsg tmp(std::move(other_));
        swap(tmp); 
        return *this;
    }
    #endif
    #endif   

    void SetMsg::swap(SetMsg& other_)  OMG_NOEXCEPT 
    {
        using std::swap;
        swap(m_CmdId_, other_.m_CmdId_);
        swap(m_MType_, other_.m_MType_);
        swap(m_SetBit_, other_.m_SetBit_);
        swap(m_SetCmd_, other_.m_SetCmd_);
        swap(m_CtrlSrc_, other_.m_CtrlSrc_);
    }  

    bool SetMsg::operator == (const SetMsg& other_) const {
        if (m_CmdId_ != other_.m_CmdId_) {
            return false;
        }
        if (m_MType_ != other_.m_MType_) {
            return false;
        }
        if (m_SetBit_ != other_.m_SetBit_) {
            return false;
        }
        if (m_SetCmd_ != other_.m_SetCmd_) {
            return false;
        }
        if (m_CtrlSrc_ != other_.m_CtrlSrc_) {
            return false;
        }
        return true;
    }
    bool SetMsg::operator != (const SetMsg& other_) const {
        return !this->operator ==(other_);
    }

    std::ostream& operator << (std::ostream& o,const SetMsg& sample)
    {
        ::rti::util::StreamFlagSaver flag_saver (o);
        o <<"[";
        o << "CmdId: " << (int)sample.CmdId() <<", ";
        o << "MType: " << sample.MType()<<", ";
        o << "SetBit: " << (int)sample.SetBit() <<", ";
        o << "SetCmd: " << sample.SetCmd()<<", ";
        o << "CtrlSrc: " << sample.CtrlSrc() ;
        o <<"]";
        return o;
    }

    // ---- SetMsgSoa: 

    SetMsgSoa::SetMsgSoa() :
        m_CmdId_ (0)  {
    }   

    SetMsgSoa::SetMsgSoa (
        uint8_t CmdId)
        :
            m_CmdId_( CmdId ) {
    }

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    SetMsgSoa::SetMsgSoa(SetMsgSoa&& other_) OMG_NOEXCEPT  :m_CmdId_ (std::move(other_.m_CmdId_))
    {
    } 

    SetMsgSoa& SetMsgSoa::operator=(SetMsgSoa&&  other_) OMG_NOEXCEPT {
        SetMsgSoa tmp(std::move(other_));
        swap(tmp); 
        return *this;
    }
    #endif
    #endif   

    void SetMsgSoa::swap(SetMsgSoa& other_)  OMG_NOEXCEPT 
    {
        using std::swap;
        swap(m_CmdId_, other_.m_CmdId_);
    }  

    bool SetMsgSoa::operator == (const SetMsgSoa& other_) const {
        if (m_CmdId_ != other_.m_CmdId_) {
            return false;
        }
        return true;
    }
    bool SetMsgSoa::operator != (const SetMsgSoa& other_) const {
        return !this->operator ==(other_);
    }

    std::ostream& operator << (std::ostream& o,const SetMsgSoa& sample)
    {
        ::rti::util::StreamFlagSaver flag_saver (o);
        o <<"[";
        o << "CmdId: " << (int)sample.CmdId()  ;
        o <<"]";
        return o;
    }

    // ---- ActMsg: 

    ActMsg::ActMsg() :
        m_CmdId_ (0) ,
        m_MType_(DoorService::MajorType::BD_ARM) ,
        m_ActBit_ (0) ,
        m_ActCmd_ (0u) ,
        m_CtrlSrc_ ("")  {
    }   

    ActMsg::ActMsg (
        uint8_t CmdId,
        const DoorService::MajorType& MType,
        uint8_t ActBit,
        uint32_t ActCmd,
        const std::string& CtrlSrc)
        :
            m_CmdId_( CmdId ),
            m_MType_( MType ),
            m_ActBit_( ActBit ),
            m_ActCmd_( ActCmd ),
            m_CtrlSrc_( CtrlSrc ) {
    }

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    ActMsg::ActMsg(ActMsg&& other_) OMG_NOEXCEPT  :m_CmdId_ (std::move(other_.m_CmdId_))
    ,
    m_MType_ (std::move(other_.m_MType_))
    ,
    m_ActBit_ (std::move(other_.m_ActBit_))
    ,
    m_ActCmd_ (std::move(other_.m_ActCmd_))
    ,
    m_CtrlSrc_ (std::move(other_.m_CtrlSrc_))
    {
    } 

    ActMsg& ActMsg::operator=(ActMsg&&  other_) OMG_NOEXCEPT {
        ActMsg tmp(std::move(other_));
        swap(tmp); 
        return *this;
    }
    #endif
    #endif   

    void ActMsg::swap(ActMsg& other_)  OMG_NOEXCEPT 
    {
        using std::swap;
        swap(m_CmdId_, other_.m_CmdId_);
        swap(m_MType_, other_.m_MType_);
        swap(m_ActBit_, other_.m_ActBit_);
        swap(m_ActCmd_, other_.m_ActCmd_);
        swap(m_CtrlSrc_, other_.m_CtrlSrc_);
    }  

    bool ActMsg::operator == (const ActMsg& other_) const {
        if (m_CmdId_ != other_.m_CmdId_) {
            return false;
        }
        if (m_MType_ != other_.m_MType_) {
            return false;
        }
        if (m_ActBit_ != other_.m_ActBit_) {
            return false;
        }
        if (m_ActCmd_ != other_.m_ActCmd_) {
            return false;
        }
        if (m_CtrlSrc_ != other_.m_CtrlSrc_) {
            return false;
        }
        return true;
    }
    bool ActMsg::operator != (const ActMsg& other_) const {
        return !this->operator ==(other_);
    }

    std::ostream& operator << (std::ostream& o,const ActMsg& sample)
    {
        ::rti::util::StreamFlagSaver flag_saver (o);
        o <<"[";
        o << "CmdId: " << (int)sample.CmdId() <<", ";
        o << "MType: " << sample.MType()<<", ";
        o << "ActBit: " << (int)sample.ActBit() <<", ";
        o << "ActCmd: " << sample.ActCmd()<<", ";
        o << "CtrlSrc: " << sample.CtrlSrc() ;
        o <<"]";
        return o;
    }

    // ---- ActMsgSoa: 

    ActMsgSoa::ActMsgSoa() :
        m_CmdId_ (0)  {
    }   

    ActMsgSoa::ActMsgSoa (
        uint8_t CmdId)
        :
            m_CmdId_( CmdId ) {
    }

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    ActMsgSoa::ActMsgSoa(ActMsgSoa&& other_) OMG_NOEXCEPT  :m_CmdId_ (std::move(other_.m_CmdId_))
    {
    } 

    ActMsgSoa& ActMsgSoa::operator=(ActMsgSoa&&  other_) OMG_NOEXCEPT {
        ActMsgSoa tmp(std::move(other_));
        swap(tmp); 
        return *this;
    }
    #endif
    #endif   

    void ActMsgSoa::swap(ActMsgSoa& other_)  OMG_NOEXCEPT 
    {
        using std::swap;
        swap(m_CmdId_, other_.m_CmdId_);
    }  

    bool ActMsgSoa::operator == (const ActMsgSoa& other_) const {
        if (m_CmdId_ != other_.m_CmdId_) {
            return false;
        }
        return true;
    }
    bool ActMsgSoa::operator != (const ActMsgSoa& other_) const {
        return !this->operator ==(other_);
    }

    std::ostream& operator << (std::ostream& o,const ActMsgSoa& sample)
    {
        ::rti::util::StreamFlagSaver flag_saver (o);
        o <<"[";
        o << "CmdId: " << (int)sample.CmdId()  ;
        o <<"]";
        return o;
    }

} // namespace DoorService  

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        const DoorService::MajorType default_enumerator<DoorService::MajorType>::value = DoorService::MajorType::BD_ARM;
        template<>
        struct native_type_code< DoorService::MajorType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member MajorType_g_tc_members[4]=
                {

                    {
                        (char *)"BD_ARM",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(DoorService::MajorType::BD_ARM), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"BD_PST",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(DoorService::MajorType::BD_PST), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"WIN_PER",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(DoorService::MajorType::WIN_PER), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"CHS",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(DoorService::MajorType::CHS), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode MajorType_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"DoorService::MajorType", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        MajorType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for MajorType*/

                if (is_initialized) {
                    return &MajorType_g_tc;
                }

                MajorType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                MajorType_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                MajorType_g_tc._data._annotations._defaultValue._u.long_value = 0;

                MajorType_g_tc._data._sampleAccessInfo = sample_access_info();
                MajorType_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &MajorType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo MajorType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo MajorType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &MajorType_g_sampleAccessInfo;
                }

                MajorType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                MajorType_g_sampleAccessInfo.memberAccessInfos = 
                MajorType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(DoorService::MajorType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        MajorType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        MajorType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                MajorType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                MajorType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< DoorService::MajorType >;

                MajorType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &MajorType_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin MajorType_g_typePlugin = 
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

                return &MajorType_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::EnumType& dynamic_type< DoorService::MajorType >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< DoorService::MajorType >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE
        const DoorService::MinorType default_enumerator<DoorService::MinorType>::value = DoorService::MinorType::A;
        template<>
        struct native_type_code< DoorService::MinorType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member MinorType_g_tc_members[1]=
                {

                    {
                        (char *)"A",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(DoorService::MinorType::A), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode MinorType_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"DoorService::MinorType", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        MinorType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for MinorType*/

                if (is_initialized) {
                    return &MinorType_g_tc;
                }

                MinorType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                MinorType_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                MinorType_g_tc._data._annotations._defaultValue._u.long_value = 0;

                MinorType_g_tc._data._sampleAccessInfo = sample_access_info();
                MinorType_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &MinorType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo MinorType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo MinorType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &MinorType_g_sampleAccessInfo;
                }

                MinorType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                MinorType_g_sampleAccessInfo.memberAccessInfos = 
                MinorType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(DoorService::MinorType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        MinorType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        MinorType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                MinorType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                MinorType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< DoorService::MinorType >;

                MinorType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &MinorType_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin MinorType_g_typePlugin = 
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

                return &MinorType_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::EnumType& dynamic_type< DoorService::MinorType >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< DoorService::MinorType >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< DoorService::SetMsg > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode SetMsg_g_tc_CtrlSrc_string;

                static DDS_TypeCode_Member SetMsg_g_tc_members[5]=
                {

                    {
                        (char *)"CmdId",/* Member name */
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
                        (char *)"MType",/* Member name */
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
                        (char *)"SetBit",/* Member name */
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
                        (char *)"SetCmd",/* Member name */
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
                        (char *)"CtrlSrc",/* Member name */
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
                    }
                };

                static DDS_TypeCode SetMsg_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"DoorService::SetMsg", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        5, /* Number of members */
                        SetMsg_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for SetMsg*/

                if (is_initialized) {
                    return &SetMsg_g_tc;
                }

                SetMsg_g_tc_CtrlSrc_string = initialize_string_typecode((255L));

                SetMsg_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                SetMsg_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;
                SetMsg_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DoorService::MajorType>::get().native();
                SetMsg_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;
                SetMsg_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
                SetMsg_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&SetMsg_g_tc_CtrlSrc_string;

                /* Initialize the values for member annotations. */
                SetMsg_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_OCTET;
                SetMsg_g_tc_members[0]._annotations._defaultValue._u.octet_value = 0;
                SetMsg_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_OCTET;
                SetMsg_g_tc_members[0]._annotations._minValue._u.octet_value = RTIXCdrOctet_MIN;
                SetMsg_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_OCTET;
                SetMsg_g_tc_members[0]._annotations._maxValue._u.octet_value = RTIXCdrOctet_MAX;

                SetMsg_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                SetMsg_g_tc_members[1]._annotations._defaultValue._u.enumerated_value = 0;

                SetMsg_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_OCTET;
                SetMsg_g_tc_members[2]._annotations._defaultValue._u.octet_value = 0;
                SetMsg_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_OCTET;
                SetMsg_g_tc_members[2]._annotations._minValue._u.octet_value = RTIXCdrOctet_MIN;
                SetMsg_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_OCTET;
                SetMsg_g_tc_members[2]._annotations._maxValue._u.octet_value = RTIXCdrOctet_MAX;

                SetMsg_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_ULONG;
                SetMsg_g_tc_members[3]._annotations._defaultValue._u.ulong_value = 0u;
                SetMsg_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_ULONG;
                SetMsg_g_tc_members[3]._annotations._minValue._u.ulong_value = RTIXCdrUnsignedLong_MIN;
                SetMsg_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_ULONG;
                SetMsg_g_tc_members[3]._annotations._maxValue._u.ulong_value = RTIXCdrUnsignedLong_MAX;

                SetMsg_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                SetMsg_g_tc_members[4]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                SetMsg_g_tc._data._sampleAccessInfo = sample_access_info();
                SetMsg_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &SetMsg_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                DoorService::SetMsg *sample;

                static RTIXCdrMemberAccessInfo SetMsg_g_memberAccessInfos[5] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo SetMsg_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &SetMsg_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    DoorService::SetMsg);
                if (sample == NULL) {
                    return NULL;
                }

                SetMsg_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->CmdId() - (char *)sample);

                SetMsg_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->MType() - (char *)sample);

                SetMsg_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->SetBit() - (char *)sample);

                SetMsg_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->SetCmd() - (char *)sample);

                SetMsg_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->CtrlSrc() - (char *)sample);

                SetMsg_g_sampleAccessInfo.memberAccessInfos = 
                SetMsg_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(DoorService::SetMsg);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        SetMsg_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        SetMsg_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                SetMsg_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                SetMsg_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< DoorService::SetMsg >;

                SetMsg_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &SetMsg_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin SetMsg_g_typePlugin = 
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

                return &SetMsg_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< DoorService::SetMsg >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< DoorService::SetMsg >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< DoorService::SetMsgSoa > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member SetMsgSoa_g_tc_members[1]=
                {

                    {
                        (char *)"CmdId",/* Member name */
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

                static DDS_TypeCode SetMsgSoa_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"DoorService::SetMsgSoa", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        SetMsgSoa_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for SetMsgSoa*/

                if (is_initialized) {
                    return &SetMsgSoa_g_tc;
                }

                SetMsgSoa_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                SetMsgSoa_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

                /* Initialize the values for member annotations. */
                SetMsgSoa_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_OCTET;
                SetMsgSoa_g_tc_members[0]._annotations._defaultValue._u.octet_value = 0;
                SetMsgSoa_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_OCTET;
                SetMsgSoa_g_tc_members[0]._annotations._minValue._u.octet_value = RTIXCdrOctet_MIN;
                SetMsgSoa_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_OCTET;
                SetMsgSoa_g_tc_members[0]._annotations._maxValue._u.octet_value = RTIXCdrOctet_MAX;

                SetMsgSoa_g_tc._data._sampleAccessInfo = sample_access_info();
                SetMsgSoa_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &SetMsgSoa_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                DoorService::SetMsgSoa *sample;

                static RTIXCdrMemberAccessInfo SetMsgSoa_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo SetMsgSoa_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &SetMsgSoa_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    DoorService::SetMsgSoa);
                if (sample == NULL) {
                    return NULL;
                }

                SetMsgSoa_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->CmdId() - (char *)sample);

                SetMsgSoa_g_sampleAccessInfo.memberAccessInfos = 
                SetMsgSoa_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(DoorService::SetMsgSoa);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        SetMsgSoa_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        SetMsgSoa_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                SetMsgSoa_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                SetMsgSoa_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< DoorService::SetMsgSoa >;

                SetMsgSoa_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &SetMsgSoa_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin SetMsgSoa_g_typePlugin = 
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

                return &SetMsgSoa_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< DoorService::SetMsgSoa >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< DoorService::SetMsgSoa >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< DoorService::ActMsg > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode ActMsg_g_tc_CtrlSrc_string;

                static DDS_TypeCode_Member ActMsg_g_tc_members[5]=
                {

                    {
                        (char *)"CmdId",/* Member name */
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
                        (char *)"MType",/* Member name */
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
                        (char *)"ActBit",/* Member name */
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
                        (char *)"ActCmd",/* Member name */
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
                        (char *)"CtrlSrc",/* Member name */
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
                    }
                };

                static DDS_TypeCode ActMsg_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"DoorService::ActMsg", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        5, /* Number of members */
                        ActMsg_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for ActMsg*/

                if (is_initialized) {
                    return &ActMsg_g_tc;
                }

                ActMsg_g_tc_CtrlSrc_string = initialize_string_typecode((255L));

                ActMsg_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                ActMsg_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;
                ActMsg_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DoorService::MajorType>::get().native();
                ActMsg_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;
                ActMsg_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
                ActMsg_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&ActMsg_g_tc_CtrlSrc_string;

                /* Initialize the values for member annotations. */
                ActMsg_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_OCTET;
                ActMsg_g_tc_members[0]._annotations._defaultValue._u.octet_value = 0;
                ActMsg_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_OCTET;
                ActMsg_g_tc_members[0]._annotations._minValue._u.octet_value = RTIXCdrOctet_MIN;
                ActMsg_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_OCTET;
                ActMsg_g_tc_members[0]._annotations._maxValue._u.octet_value = RTIXCdrOctet_MAX;

                ActMsg_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                ActMsg_g_tc_members[1]._annotations._defaultValue._u.enumerated_value = 0;

                ActMsg_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_OCTET;
                ActMsg_g_tc_members[2]._annotations._defaultValue._u.octet_value = 0;
                ActMsg_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_OCTET;
                ActMsg_g_tc_members[2]._annotations._minValue._u.octet_value = RTIXCdrOctet_MIN;
                ActMsg_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_OCTET;
                ActMsg_g_tc_members[2]._annotations._maxValue._u.octet_value = RTIXCdrOctet_MAX;

                ActMsg_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_ULONG;
                ActMsg_g_tc_members[3]._annotations._defaultValue._u.ulong_value = 0u;
                ActMsg_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_ULONG;
                ActMsg_g_tc_members[3]._annotations._minValue._u.ulong_value = RTIXCdrUnsignedLong_MIN;
                ActMsg_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_ULONG;
                ActMsg_g_tc_members[3]._annotations._maxValue._u.ulong_value = RTIXCdrUnsignedLong_MAX;

                ActMsg_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                ActMsg_g_tc_members[4]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                ActMsg_g_tc._data._sampleAccessInfo = sample_access_info();
                ActMsg_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &ActMsg_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                DoorService::ActMsg *sample;

                static RTIXCdrMemberAccessInfo ActMsg_g_memberAccessInfos[5] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo ActMsg_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &ActMsg_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    DoorService::ActMsg);
                if (sample == NULL) {
                    return NULL;
                }

                ActMsg_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->CmdId() - (char *)sample);

                ActMsg_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->MType() - (char *)sample);

                ActMsg_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->ActBit() - (char *)sample);

                ActMsg_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->ActCmd() - (char *)sample);

                ActMsg_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->CtrlSrc() - (char *)sample);

                ActMsg_g_sampleAccessInfo.memberAccessInfos = 
                ActMsg_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(DoorService::ActMsg);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        ActMsg_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        ActMsg_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                ActMsg_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                ActMsg_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< DoorService::ActMsg >;

                ActMsg_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &ActMsg_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin ActMsg_g_typePlugin = 
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

                return &ActMsg_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< DoorService::ActMsg >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< DoorService::ActMsg >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< DoorService::ActMsgSoa > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member ActMsgSoa_g_tc_members[1]=
                {

                    {
                        (char *)"CmdId",/* Member name */
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

                static DDS_TypeCode ActMsgSoa_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"DoorService::ActMsgSoa", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        ActMsgSoa_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for ActMsgSoa*/

                if (is_initialized) {
                    return &ActMsgSoa_g_tc;
                }

                ActMsgSoa_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                ActMsgSoa_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

                /* Initialize the values for member annotations. */
                ActMsgSoa_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_OCTET;
                ActMsgSoa_g_tc_members[0]._annotations._defaultValue._u.octet_value = 0;
                ActMsgSoa_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_OCTET;
                ActMsgSoa_g_tc_members[0]._annotations._minValue._u.octet_value = RTIXCdrOctet_MIN;
                ActMsgSoa_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_OCTET;
                ActMsgSoa_g_tc_members[0]._annotations._maxValue._u.octet_value = RTIXCdrOctet_MAX;

                ActMsgSoa_g_tc._data._sampleAccessInfo = sample_access_info();
                ActMsgSoa_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &ActMsgSoa_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                DoorService::ActMsgSoa *sample;

                static RTIXCdrMemberAccessInfo ActMsgSoa_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo ActMsgSoa_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &ActMsgSoa_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    DoorService::ActMsgSoa);
                if (sample == NULL) {
                    return NULL;
                }

                ActMsgSoa_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->CmdId() - (char *)sample);

                ActMsgSoa_g_sampleAccessInfo.memberAccessInfos = 
                ActMsgSoa_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(DoorService::ActMsgSoa);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        ActMsgSoa_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        ActMsgSoa_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                ActMsgSoa_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                ActMsgSoa_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< DoorService::ActMsgSoa >;

                ActMsgSoa_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &ActMsgSoa_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin ActMsgSoa_g_typePlugin = 
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

                return &ActMsgSoa_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< DoorService::ActMsgSoa >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< DoorService::ActMsgSoa >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< DoorService::SetMsg >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                DoorService::SetMsgPlugin_new,
                DoorService::SetMsgPlugin_delete);
        }

        std::vector<char>& topic_type_support< DoorService::SetMsg >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const DoorService::SetMsg& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = SetMsgPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = SetMsgPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< DoorService::SetMsg >::from_cdr_buffer(DoorService::SetMsg& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = SetMsgPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create DoorService::SetMsg from cdr buffer");
        }

        void topic_type_support< DoorService::SetMsg >::reset_sample(DoorService::SetMsg& sample) 
        {
            sample.CmdId(0);
            sample.MType(DoorService::MajorType::BD_ARM);
            sample.SetBit(0);
            sample.SetCmd(0u);
            sample.CtrlSrc("");
        }

        void topic_type_support< DoorService::SetMsg >::allocate_sample(DoorService::SetMsg& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.MType(),  -1, -1);
            ::rti::topic::allocate_sample(sample.CtrlSrc(),  -1, 255L);
        }

        void topic_type_support< DoorService::SetMsgSoa >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                DoorService::SetMsgSoaPlugin_new,
                DoorService::SetMsgSoaPlugin_delete);
        }

        std::vector<char>& topic_type_support< DoorService::SetMsgSoa >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const DoorService::SetMsgSoa& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = SetMsgSoaPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = SetMsgSoaPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< DoorService::SetMsgSoa >::from_cdr_buffer(DoorService::SetMsgSoa& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = SetMsgSoaPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create DoorService::SetMsgSoa from cdr buffer");
        }

        void topic_type_support< DoorService::SetMsgSoa >::reset_sample(DoorService::SetMsgSoa& sample) 
        {
            sample.CmdId(0);
        }

        void topic_type_support< DoorService::SetMsgSoa >::allocate_sample(DoorService::SetMsgSoa& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }

        void topic_type_support< DoorService::ActMsg >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                DoorService::ActMsgPlugin_new,
                DoorService::ActMsgPlugin_delete);
        }

        std::vector<char>& topic_type_support< DoorService::ActMsg >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const DoorService::ActMsg& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = ActMsgPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = ActMsgPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< DoorService::ActMsg >::from_cdr_buffer(DoorService::ActMsg& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = ActMsgPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create DoorService::ActMsg from cdr buffer");
        }

        void topic_type_support< DoorService::ActMsg >::reset_sample(DoorService::ActMsg& sample) 
        {
            sample.CmdId(0);
            sample.MType(DoorService::MajorType::BD_ARM);
            sample.ActBit(0);
            sample.ActCmd(0u);
            sample.CtrlSrc("");
        }

        void topic_type_support< DoorService::ActMsg >::allocate_sample(DoorService::ActMsg& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.MType(),  -1, -1);
            ::rti::topic::allocate_sample(sample.CtrlSrc(),  -1, 255L);
        }

        void topic_type_support< DoorService::ActMsgSoa >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                DoorService::ActMsgSoaPlugin_new,
                DoorService::ActMsgSoaPlugin_delete);
        }

        std::vector<char>& topic_type_support< DoorService::ActMsgSoa >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const DoorService::ActMsgSoa& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = ActMsgSoaPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = ActMsgSoaPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< DoorService::ActMsgSoa >::from_cdr_buffer(DoorService::ActMsgSoa& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = ActMsgSoaPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create DoorService::ActMsgSoa from cdr buffer");
        }

        void topic_type_support< DoorService::ActMsgSoa >::reset_sample(DoorService::ActMsgSoa& sample) 
        {
            sample.CmdId(0);
        }

        void topic_type_support< DoorService::ActMsgSoa >::allocate_sample(DoorService::ActMsgSoa& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }

    }
}  

