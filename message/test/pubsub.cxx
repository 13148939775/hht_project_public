

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from pubsub.idl
using RTI Code Generator (rtiddsgen) version 3.1.1.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "pubsub.hpp"
#include "pubsubPlugin.hpp"

#include <rti/util/ostream_operators.hpp>

// ---- myDataType: 

myDataType::myDataType() :
    m_value_ (0)  {
}   

myDataType::myDataType (
    int32_t value)
    :
        m_value_( value ) {
}

#ifdef RTI_CXX11_RVALUE_REFERENCES
#ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
myDataType::myDataType(myDataType&& other_) OMG_NOEXCEPT  :m_value_ (std::move(other_.m_value_))
{
} 

myDataType& myDataType::operator=(myDataType&&  other_) OMG_NOEXCEPT {
    myDataType tmp(std::move(other_));
    swap(tmp); 
    return *this;
}
#endif
#endif   

void myDataType::swap(myDataType& other_)  OMG_NOEXCEPT 
{
    using std::swap;
    swap(m_value_, other_.m_value_);
}  

bool myDataType::operator == (const myDataType& other_) const {
    if (m_value_ != other_.m_value_) {
        return false;
    }
    return true;
}
bool myDataType::operator != (const myDataType& other_) const {
    return !this->operator ==(other_);
}

std::ostream& operator << (std::ostream& o,const myDataType& sample)
{
    ::rti::util::StreamFlagSaver flag_saver (o);
    o <<"[";
    o << "value: " << sample.value() ;
    o <<"]";
    return o;
}

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< myDataType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member myDataType_g_tc_members[1]=
                {

                    {
                        (char *)"value",/* Member name */
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

                static DDS_TypeCode myDataType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"myDataType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        myDataType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for myDataType*/

                if (is_initialized) {
                    return &myDataType_g_tc;
                }

                myDataType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                myDataType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

                /* Initialize the values for member annotations. */
                myDataType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                myDataType_g_tc_members[0]._annotations._defaultValue._u.long_value = 0;
                myDataType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                myDataType_g_tc_members[0]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                myDataType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                myDataType_g_tc_members[0]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

                myDataType_g_tc._data._sampleAccessInfo = sample_access_info();
                myDataType_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &myDataType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                myDataType *sample;

                static RTIXCdrMemberAccessInfo myDataType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo myDataType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &myDataType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    myDataType);
                if (sample == NULL) {
                    return NULL;
                }

                myDataType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->value() - (char *)sample);

                myDataType_g_sampleAccessInfo.memberAccessInfos = 
                myDataType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(myDataType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        myDataType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        myDataType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                myDataType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                myDataType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< myDataType >;

                myDataType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &myDataType_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin myDataType_g_typePlugin = 
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

                return &myDataType_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< myDataType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< myDataType >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< myDataType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                myDataTypePlugin_new,
                myDataTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< myDataType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const myDataType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = myDataTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = myDataTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< myDataType >::from_cdr_buffer(myDataType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = myDataTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create myDataType from cdr buffer");
        }

        void topic_type_support< myDataType >::reset_sample(myDataType& sample) 
        {
            sample.value(0);
        }

        void topic_type_support< myDataType >::allocate_sample(myDataType& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }

    }
}  

