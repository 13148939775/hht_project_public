

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from data_test.idl
using RTI Code Generator (rtiddsgen) version 3.1.1.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <string.h>
#include <iostream>
#include <chrono>

#ifndef ndds_c_h
#include "ndds/ndds_c.h"
#endif

#ifndef osapi_type_h
#include "osapi/osapi_type.h"
#endif
#ifndef osapi_heap_h
#include "osapi/osapi_heap.h"
#endif

#ifndef osapi_utility_h
#include "osapi/osapi_utility.h"
#endif

#ifndef cdr_log_h
#include "cdr/cdr_log.h"
#endif

#ifndef cdr_type_h
#include "cdr/cdr_type.h"
#endif

#ifndef cdr_type_object_h
#include "cdr/cdr_typeObject.h"
#endif

#ifndef cdr_encapsulation_h
#include "cdr/cdr_encapsulation.h"
#endif

#ifndef cdr_stream_h
#include "cdr/cdr_stream.h"
#endif

#ifndef cdr_log_h
#include "cdr/cdr_log.h"
#endif

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "dds_c/dds_c_typecode_impl.h"

#include "rti/topic/cdr/Serialization.hpp"

#define RTI_CDR_CURRENT_SUBMODULE RTI_CDR_SUBMODULE_MASK_STREAM

#include "data_testPlugin.hpp"

/* ----------------------------------------------------------------------------
 *  Type Data4B
 * -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

static long long serialize_count = 0;
static long long deserialize_count = 0;

Data4B *
Data4BPluginSupport_create_data(void)
{
    try
    {
        Data4B *sample = new Data4B();
        ::rti::topic::allocate_sample(*sample);
        return sample;
    }
    catch (...)
    {
        return NULL;
    }
}

void Data4BPluginSupport_destroy_data(
    Data4B *sample)
{
    delete sample;
}

RTIBool
Data4BPluginSupport_copy_data(
    Data4B *dst,
    const Data4B *src)
{
    try
    {
        *dst = *src;
    }
    catch (...)
    {
        return RTI_FALSE;
    }

    return RTI_TRUE;
}

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

PRESTypePluginParticipantData
Data4BPlugin_on_participant_attached(
    void *registration_data,
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration,
    void *container_plugin_context,
    RTICdrTypeCode *type_code)
{
    struct RTIXCdrInterpreterPrograms *programs = NULL;
    struct PRESTypePluginDefaultParticipantData *pd = NULL;
    struct RTIXCdrInterpreterProgramsGenProperty programProperty =
        RTIXCdrInterpreterProgramsGenProperty_INITIALIZER;
    if (registration_data)
    {
    } /* To avoid warnings */
    if (participant_info)
    {
    } /* To avoid warnings */
    if (top_level_registration)
    {
    } /* To avoid warnings */
    if (container_plugin_context)
    {
    } /* To avoid warnings */
    if (type_code)
    {
    } /* To avoid warnings */
    pd = (struct PRESTypePluginDefaultParticipantData *)
        PRESTypePluginDefaultParticipantData_new(participant_info);

    programProperty.generateV1Encapsulation = RTI_XCDR_TRUE;
    programProperty.generateV2Encapsulation = RTI_XCDR_TRUE;
    programProperty.resolveAlias = RTI_XCDR_TRUE;
    programProperty.inlineStruct = RTI_XCDR_TRUE;
    programProperty.optimizeEnum = RTI_XCDR_TRUE;

    programProperty.externalReferenceSize =
        (RTIXCdrUnsignedShort)sizeof(::dds::core::external<char>);
    programProperty.getExternalRefPointerFcn =
        ::rti::topic::interpreter::get_external_value_pointer;

    programs = DDS_TypeCodeFactory_assert_programs_in_global_list(
        DDS_TypeCodeFactory_get_instance(),
        (DDS_TypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type<Data4B>::get().native(),
        &programProperty,
        RTI_XCDR_PROGRAM_MASK_TYPEPLUGIN);

    if (programs == NULL)
    {
        PRESTypePluginDefaultParticipantData_delete(
            (PRESTypePluginParticipantData)pd);
        return NULL;
    }

    pd->programs = programs;
    return (PRESTypePluginParticipantData)pd;
}

void Data4BPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data)
{
    if (participant_data != NULL)
    {
        struct PRESTypePluginDefaultParticipantData *pd =
            (struct PRESTypePluginDefaultParticipantData *)participant_data;

        if (pd->programs != NULL)
        {
            DDS_TypeCodeFactory_remove_programs_from_global_list(
                DDS_TypeCodeFactory_get_instance(),
                pd->programs);
            pd->programs = NULL;
        }
        PRESTypePluginDefaultParticipantData_delete(participant_data);
    }
}

PRESTypePluginEndpointData
Data4BPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration,
    void *containerPluginContext)
{
    try
    {
        PRESTypePluginEndpointData epd = NULL;
        unsigned int serializedSampleMaxSize = 0;

        if (top_level_registration)
        {
        } /* To avoid warnings */
        if (containerPluginContext)
        {
        } /* To avoid warnings */

        if (participant_data == NULL)
        {
            return NULL;
        }

        epd = PRESTypePluginDefaultEndpointData_new(
            participant_data,
            endpoint_info,
            (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
                Data4BPluginSupport_create_data,
            (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                Data4BPluginSupport_destroy_data,
            NULL, NULL);

        if (epd == NULL)
        {
            return NULL;
        }

        if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER)
        {
            serializedSampleMaxSize = Data4BPlugin_get_serialized_sample_max_size(
                epd, RTI_FALSE, RTI_CDR_ENCAPSULATION_ID_CDR_BE, 0);
            PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

            if (PRESTypePluginDefaultEndpointData_createWriterPool(
                    epd,
                    endpoint_info,
                    (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                        Data4BPlugin_get_serialized_sample_max_size,
                    epd,
                    (PRESTypePluginGetSerializedSampleSizeFunction)
                        PRESTypePlugin_interpretedGetSerializedSampleSize,
                    epd) == RTI_FALSE)
            {
                PRESTypePluginDefaultEndpointData_delete(epd);
                return NULL;
            }
        }

        return epd;
    }
    catch (...)
    {
        return NULL;
    }
}

void Data4BPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{
    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}

void Data4BPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    Data4B *sample,
    void *handle)
{
    try
    {
        ::rti::topic::reset_sample(*sample);
    }
    catch (const std::exception &ex)
    {
        RTICdrLog_logWithFunctionName(
            RTI_LOG_BIT_EXCEPTION,
            "Data4BPlugin_return_sample",
            &RTI_LOG_ANY_FAILURE_ss,
            "exception: ",
            ex.what());
    }

    PRESTypePluginDefaultEndpointData_returnSample(
        endpoint_data, sample, handle);
}

RTIBool
Data4BPlugin_copy_sample(
    PRESTypePluginEndpointData,
    Data4B *dst,
    const Data4B *src)
{
    return Data4BPluginSupport_copy_data(dst, src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int
Data4BPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

RTIBool
Data4BPlugin_serialize_to_cdr_buffer(
    char *buffer,
    unsigned int *length,
    const Data4B *sample,
    ::dds::core::policy::DataRepresentationId representation)
{
    using namespace ::dds::core::policy;

    try
    {
        RTIEncapsulationId encapsulationId = RTI_CDR_ENCAPSULATION_ID_INVALID;
        struct RTICdrStream stream;
        struct PRESTypePluginDefaultEndpointData epd;
        RTIBool result;
        struct PRESTypePluginDefaultParticipantData pd;
        struct RTIXCdrTypePluginProgramContext defaultProgramContext =
            RTIXCdrTypePluginProgramContext_INTIALIZER;
        struct PRESTypePlugin plugin = PRES_TYPEPLUGIN_DEFAULT;

        if (length == NULL)
        {
            return RTI_FALSE;
        }

        RTIOsapiMemory_zero(&epd, sizeof(struct PRESTypePluginDefaultEndpointData));
        epd.programContext = defaultProgramContext;
        epd._participantData = &pd;
        epd.typePlugin = &plugin;
        epd.programContext.endpointPluginData = &epd;
        plugin.typeCode = (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type<Data4B>::get().native();
        pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
            Data4B,
            true, true, true>();

        encapsulationId = DDS_TypeCode_get_native_encapsulation(
            (DDS_TypeCode *)plugin.typeCode,
            representation);

        if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID)
        {
            return RTI_FALSE;
        }

        epd._maxSizeSerializedSample =
            Data4BPlugin_get_serialized_sample_max_size(
                (PRESTypePluginEndpointData)&epd,
                RTI_TRUE,
                encapsulationId,
                0);

        if (buffer == NULL)
        {
            *length =
                PRESTypePlugin_interpretedGetSerializedSampleSize(
                    (PRESTypePluginEndpointData)&epd,
                    RTI_TRUE,
                    encapsulationId,
                    0,
                    sample);

            if (*length == 0)
            {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        RTICdrStream_init(&stream);
        RTICdrStream_set(&stream, (char *)buffer, *length);

        result = PRESTypePlugin_interpretedSerialize(
            (PRESTypePluginEndpointData)&epd,
            sample,
            &stream,
            RTI_TRUE,
            encapsulationId,
            RTI_TRUE,
            NULL);

        *length = RTICdrStream_getCurrentPositionOffset(&stream);
        return result;
    }
    catch (...)
    {
        return RTI_FALSE;
    }
}

RTIBool
Data4BPlugin_deserialize_from_cdr_buffer(
    Data4B *sample,
    const char *buffer,
    unsigned int length)
{
    struct RTICdrStream stream;
    struct PRESTypePluginDefaultParticipantData pd;
    struct RTIXCdrTypePluginProgramContext defaultProgramContext =
        RTIXCdrTypePluginProgramContext_INTIALIZER;
    struct PRESTypePlugin plugin;
    struct PRESTypePluginDefaultEndpointData epd;

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, length);

    epd.programContext = defaultProgramContext;
    epd._participantData = &pd;
    epd.typePlugin = &plugin;
    epd.programContext.endpointPluginData = &epd;
    plugin.typeCode = (struct RTICdrTypeCode *)(struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type<Data4B>::get().native();
    pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
        Data4B,
        true, true, true>();

    epd._assignabilityProperty.acceptUnknownEnumValue = RTI_XCDR_TRUE;
    epd._assignabilityProperty.acceptUnknownUnionDiscriminator = RTI_XCDR_TRUE;

    ::rti::topic::reset_sample(*sample);
    return PRESTypePlugin_interpretedDeserialize(
        (PRESTypePluginEndpointData)&epd,
        sample,
        &stream,
        RTI_TRUE,
        RTI_TRUE,
        NULL);
}

unsigned int
Data4BPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    try
    {
        unsigned int size;
        RTIBool overflow = RTI_FALSE;

        size = PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
            endpoint_data, &overflow, include_encapsulation, encapsulation_id, current_alignment);

        if (overflow)
        {
            size = RTI_CDR_MAX_SERIALIZED_SIZE;
        }

        return size;
    }
    catch (...)
    {
        return 0;
    }
}

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

PRESTypePluginKeyKind
Data4BPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

RTIBool Data4BPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    Data4B **sample,
    RTIBool *drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    try
    {
        RTIBool result;
        if (drop_sample)
        {
        } /* To avoid warnings */
        stream->_xTypesState.unassignable = RTI_FALSE;
        result = PRESTypePlugin_interpretedDeserializeKey(
            endpoint_data, (sample != NULL) ? *sample : NULL, stream,
            deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
        if (result)
        {
            if (stream->_xTypesState.unassignable)
            {
                result = RTI_FALSE;
            }
        }
        return result;
    }
    catch (...)
    {
        return RTI_FALSE;
    }
}

unsigned int
Data4BPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    try
    {
        unsigned int size;
        RTIBool overflow = RTI_FALSE;

        size = PRESTypePlugin_interpretedGetSerializedKeyMaxSize(
            endpoint_data, &overflow, include_encapsulation, encapsulation_id, current_alignment);
        if (overflow)
        {
            size = RTI_CDR_MAX_SERIALIZED_SIZE;
        }

        return size;
    }
    catch (...)
    {
        return RTI_FALSE;
    }
}

unsigned int
Data4BPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = PRESTypePlugin_interpretedGetSerializedKeyMaxSizeForKeyhash(
        endpoint_data,
        &overflow,
        encapsulation_id,
        current_alignment);
    if (overflow)
    {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

/* ------------------------------------------------------------------------
 * Plug-in Installation Methods
 * ------------------------------------------------------------------------ */
struct PRESTypePlugin *Data4BPlugin_new(void)
{
    struct PRESTypePlugin *plugin = NULL;
    const struct PRESTypePluginVersion PLUGIN_VERSION =
        PRES_TYPE_PLUGIN_VERSION_2_0;

    RTIOsapiHeap_allocateStructure(
        &plugin, struct PRESTypePlugin);
    if (plugin == NULL)
    {
        return NULL;
    }

    plugin->version = PLUGIN_VERSION;

    /* set up parent's function pointers */
    plugin->onParticipantAttached =
        (PRESTypePluginOnParticipantAttachedCallback)
            Data4BPlugin_on_participant_attached;
    plugin->onParticipantDetached =
        (PRESTypePluginOnParticipantDetachedCallback)
            Data4BPlugin_on_participant_detached;
    plugin->onEndpointAttached =
        (PRESTypePluginOnEndpointAttachedCallback)
            Data4BPlugin_on_endpoint_attached;
    plugin->onEndpointDetached =
        (PRESTypePluginOnEndpointDetachedCallback)
            Data4BPlugin_on_endpoint_detached;

    plugin->copySampleFnc =
        (PRESTypePluginCopySampleFunction)
            Data4BPlugin_copy_sample;
    plugin->createSampleFnc =
        (PRESTypePluginCreateSampleFunction)
            Data4BPlugin_create_sample;
    plugin->destroySampleFnc =
        (PRESTypePluginDestroySampleFunction)
            Data4BPlugin_destroy_sample;

    plugin->serializeFnc =
        (PRESTypePluginSerializeFunction)PRESTypePlugin_interpretedSerialize;
    plugin->deserializeFnc =
        (PRESTypePluginDeserializeFunction)PRESTypePlugin_interpretedDeserializeWithAlloc;
    plugin->getSerializedSampleMaxSizeFnc =
        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            Data4BPlugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
        (PRESTypePluginGetSerializedSampleMinSizeFunction)
            PRESTypePlugin_interpretedGetSerializedSampleMinSize;
    plugin->getDeserializedSampleMaxSizeFnc = NULL;
    plugin->getSampleFnc =
        (PRESTypePluginGetSampleFunction)
            Data4BPlugin_get_sample;
    plugin->returnSampleFnc =
        (PRESTypePluginReturnSampleFunction)
            Data4BPlugin_return_sample;
    plugin->getKeyKindFnc =
        (PRESTypePluginGetKeyKindFunction)
            Data4BPlugin_get_key_kind;

    /* These functions are only used for keyed types. As this is not a keyed
    type they are all set to NULL
    */
    plugin->serializeKeyFnc = NULL;
    plugin->deserializeKeyFnc = NULL;
    plugin->getKeyFnc = NULL;
    plugin->returnKeyFnc = NULL;
    plugin->instanceToKeyFnc = NULL;
    plugin->keyToInstanceFnc = NULL;
    plugin->getSerializedKeyMaxSizeFnc = NULL;
    plugin->instanceToKeyHashFnc = NULL;
    plugin->serializedSampleToKeyHashFnc = NULL;
    plugin->serializedKeyToKeyHashFnc = NULL;
#ifdef NDDS_STANDALONE_TYPE
    plugin->typeCode = NULL;
#else
    plugin->typeCode = (struct RTICdrTypeCode *)&::rti::topic::dynamic_type<Data4B>::get().native();
#endif
    plugin->languageKind = PRES_TYPEPLUGIN_CPPSTL_LANG;

    /* Serialized buffer */
    plugin->getBuffer =
        (PRESTypePluginGetBufferFunction)
            Data4BPlugin_get_buffer;
    plugin->returnBuffer =
        (PRESTypePluginReturnBufferFunction)
            Data4BPlugin_return_buffer;
    plugin->getBufferWithParams = NULL;
    plugin->returnBufferWithParams = NULL;
    plugin->getSerializedSampleSizeFnc =
        (PRESTypePluginGetSerializedSampleSizeFunction)
            PRESTypePlugin_interpretedGetSerializedSampleSize;

    plugin->getWriterLoanedSampleFnc = NULL;
    plugin->returnWriterLoanedSampleFnc = NULL;
    plugin->returnWriterLoanedSampleFromCookieFnc = NULL;
    plugin->validateWriterLoanedSampleFnc = NULL;
    plugin->setWriterLoanedSampleSerializedStateFnc = NULL;

    static const char *TYPE_NAME = "Data4B";
    plugin->endpointTypeName = TYPE_NAME;
    plugin->isMetpType = RTI_FALSE;
    return plugin;
}

void Data4BPlugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
}

/* ----------------------------------------------------------------------------
 *  Type BigData20B
 * -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

BigData20B *
BigData20BPluginSupport_create_data(void)
{
    try
    {
        BigData20B *sample = new BigData20B();
        ::rti::topic::allocate_sample(*sample);
        return sample;
    }
    catch (...)
    {
        return NULL;
    }
}

void BigData20BPluginSupport_destroy_data(
    BigData20B *sample)
{
    delete sample;
}

RTIBool
BigData20BPluginSupport_copy_data(
    BigData20B *dst,
    const BigData20B *src)
{
    try
    {
        *dst = *src;
    }
    catch (...)
    {
        return RTI_FALSE;
    }

    return RTI_TRUE;
}

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

PRESTypePluginParticipantData
BigData20BPlugin_on_participant_attached(
    void *registration_data,
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration,
    void *container_plugin_context,
    RTICdrTypeCode *type_code)
{
    struct RTIXCdrInterpreterPrograms *programs = NULL;
    struct PRESTypePluginDefaultParticipantData *pd = NULL;
    struct RTIXCdrInterpreterProgramsGenProperty programProperty =
        RTIXCdrInterpreterProgramsGenProperty_INITIALIZER;
    if (registration_data)
    {
    } /* To avoid warnings */
    if (participant_info)
    {
    } /* To avoid warnings */
    if (top_level_registration)
    {
    } /* To avoid warnings */
    if (container_plugin_context)
    {
    } /* To avoid warnings */
    if (type_code)
    {
    } /* To avoid warnings */
    pd = (struct PRESTypePluginDefaultParticipantData *)
        PRESTypePluginDefaultParticipantData_new(participant_info);

    programProperty.generateV1Encapsulation = RTI_XCDR_TRUE;
    programProperty.generateV2Encapsulation = RTI_XCDR_TRUE;
    programProperty.resolveAlias = RTI_XCDR_TRUE;
    programProperty.inlineStruct = RTI_XCDR_TRUE;
    programProperty.optimizeEnum = RTI_XCDR_TRUE;

    programProperty.externalReferenceSize =
        (RTIXCdrUnsignedShort)sizeof(::dds::core::external<char>);
    programProperty.getExternalRefPointerFcn =
        ::rti::topic::interpreter::get_external_value_pointer;

    programs = DDS_TypeCodeFactory_assert_programs_in_global_list(
        DDS_TypeCodeFactory_get_instance(),
        (DDS_TypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type<BigData20B>::get().native(),
        &programProperty,
        RTI_XCDR_PROGRAM_MASK_TYPEPLUGIN);

    if (programs == NULL)
    {
        PRESTypePluginDefaultParticipantData_delete(
            (PRESTypePluginParticipantData)pd);
        return NULL;
    }

    pd->programs = programs;
    return (PRESTypePluginParticipantData)pd;
}

void BigData20BPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data)
{
    if (participant_data != NULL)
    {
        struct PRESTypePluginDefaultParticipantData *pd =
            (struct PRESTypePluginDefaultParticipantData *)participant_data;

        if (pd->programs != NULL)
        {
            DDS_TypeCodeFactory_remove_programs_from_global_list(
                DDS_TypeCodeFactory_get_instance(),
                pd->programs);
            pd->programs = NULL;
        }
        PRESTypePluginDefaultParticipantData_delete(participant_data);
    }
}

PRESTypePluginEndpointData
BigData20BPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration,
    void *containerPluginContext)
{
    try
    {
        PRESTypePluginEndpointData epd = NULL;
        unsigned int serializedSampleMaxSize = 0;

        if (top_level_registration)
        {
        } /* To avoid warnings */
        if (containerPluginContext)
        {
        } /* To avoid warnings */

        if (participant_data == NULL)
        {
            return NULL;
        }

        epd = PRESTypePluginDefaultEndpointData_new(
            participant_data,
            endpoint_info,
            (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
                BigData20BPluginSupport_create_data,
            (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                BigData20BPluginSupport_destroy_data,
            NULL, NULL);

        if (epd == NULL)
        {
            return NULL;
        }

        if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER)
        {
            serializedSampleMaxSize = BigData20BPlugin_get_serialized_sample_max_size(
                epd, RTI_FALSE, RTI_CDR_ENCAPSULATION_ID_CDR_BE, 0);
            PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

            if (PRESTypePluginDefaultEndpointData_createWriterPool(
                    epd,
                    endpoint_info,
                    (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                        BigData20BPlugin_get_serialized_sample_max_size,
                    epd,
                    (PRESTypePluginGetSerializedSampleSizeFunction)
                        PRESTypePlugin_interpretedGetSerializedSampleSize,
                    epd) == RTI_FALSE)
            {
                PRESTypePluginDefaultEndpointData_delete(epd);
                return NULL;
            }
        }

        return epd;
    }
    catch (...)
    {
        return NULL;
    }
}

void BigData20BPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{
    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}

void BigData20BPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    BigData20B *sample,
    void *handle)
{
    try
    {
        ::rti::topic::reset_sample(*sample);
    }
    catch (const std::exception &ex)
    {
        RTICdrLog_logWithFunctionName(
            RTI_LOG_BIT_EXCEPTION,
            "BigData20BPlugin_return_sample",
            &RTI_LOG_ANY_FAILURE_ss,
            "exception: ",
            ex.what());
    }

    PRESTypePluginDefaultEndpointData_returnSample(
        endpoint_data, sample, handle);
}

RTIBool
BigData20BPlugin_copy_sample(
    PRESTypePluginEndpointData,
    BigData20B *dst,
    const BigData20B *src)
{
    return BigData20BPluginSupport_copy_data(dst, src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int
BigData20BPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

RTIBool
BigData20BPlugin_serialize_to_cdr_buffer(
    char *buffer,
    unsigned int *length,
    const BigData20B *sample,
    ::dds::core::policy::DataRepresentationId representation)
{
    using namespace ::dds::core::policy;

    try
    {
        std::cout << "enter..." << std::endl;
        RTIEncapsulationId encapsulationId = RTI_CDR_ENCAPSULATION_ID_INVALID;
        struct RTICdrStream stream;
        struct PRESTypePluginDefaultEndpointData epd;
        RTIBool result;
        struct PRESTypePluginDefaultParticipantData pd;
        struct RTIXCdrTypePluginProgramContext defaultProgramContext =
            RTIXCdrTypePluginProgramContext_INTIALIZER;
        struct PRESTypePlugin plugin = PRES_TYPEPLUGIN_DEFAULT;

        if (length == NULL)
        {
            return RTI_FALSE;
        }

        RTIOsapiMemory_zero(&epd, sizeof(struct PRESTypePluginDefaultEndpointData));
        epd.programContext = defaultProgramContext;
        epd._participantData = &pd;
        epd.typePlugin = &plugin;
        epd.programContext.endpointPluginData = &epd;
        plugin.typeCode = (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type<BigData20B>::get().native();
        pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
            BigData20B,
            true, true, true>();

        encapsulationId = DDS_TypeCode_get_native_encapsulation(
            (DDS_TypeCode *)plugin.typeCode,
            representation);

        if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID)
        {
            return RTI_FALSE;
        }

        epd._maxSizeSerializedSample =
            BigData20BPlugin_get_serialized_sample_max_size(
                (PRESTypePluginEndpointData)&epd,
                RTI_TRUE,
                encapsulationId,
                0);

        if (buffer == NULL)
        {
            *length =
                PRESTypePlugin_interpretedGetSerializedSampleSize(
                    (PRESTypePluginEndpointData)&epd,
                    RTI_TRUE,
                    encapsulationId,
                    0,
                    sample);

            if (*length == 0)
            {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        RTICdrStream_init(&stream);
        RTICdrStream_set(&stream, (char *)buffer, *length);

        result = PRESTypePlugin_interpretedSerialize(
            (PRESTypePluginEndpointData)&epd,
            sample,
            &stream,
            RTI_TRUE,
            encapsulationId,
            RTI_TRUE,
            NULL);

        *length = RTICdrStream_getCurrentPositionOffset(&stream);
        return result;
    }
    catch (...)
    {
        return RTI_FALSE;
    }
}

RTIBool
BigData20BPlugin_deserialize_from_cdr_buffer(
    BigData20B *sample,
    const char *buffer,
    unsigned int length)
{
    struct RTICdrStream stream;
    struct PRESTypePluginDefaultParticipantData pd;
    struct RTIXCdrTypePluginProgramContext defaultProgramContext =
        RTIXCdrTypePluginProgramContext_INTIALIZER;
    struct PRESTypePlugin plugin;
    struct PRESTypePluginDefaultEndpointData epd;

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, length);

    epd.programContext = defaultProgramContext;
    epd._participantData = &pd;
    epd.typePlugin = &plugin;
    epd.programContext.endpointPluginData = &epd;
    plugin.typeCode = (struct RTICdrTypeCode *)(struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type<BigData20B>::get().native();
    pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
        BigData20B,
        true, true, true>();

    epd._assignabilityProperty.acceptUnknownEnumValue = RTI_XCDR_TRUE;
    epd._assignabilityProperty.acceptUnknownUnionDiscriminator = RTI_XCDR_TRUE;

    ::rti::topic::reset_sample(*sample);
    return PRESTypePlugin_interpretedDeserialize(
        (PRESTypePluginEndpointData)&epd,
        sample,
        &stream,
        RTI_TRUE,
        RTI_TRUE,
        NULL);
}

unsigned int
BigData20BPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    try
    {
        unsigned int size;
        RTIBool overflow = RTI_FALSE;

        size = PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
            endpoint_data, &overflow, include_encapsulation, encapsulation_id, current_alignment);

        if (overflow)
        {
            size = RTI_CDR_MAX_SERIALIZED_SIZE;
        }

        return size;
    }
    catch (...)
    {
        return 0;
    }
}

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

PRESTypePluginKeyKind
BigData20BPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

RTIBool BigData20BPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    BigData20B **sample,
    RTIBool *drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    try
    {
        RTIBool result;
        if (drop_sample)
        {
        } /* To avoid warnings */
        stream->_xTypesState.unassignable = RTI_FALSE;
        result = PRESTypePlugin_interpretedDeserializeKey(
            endpoint_data, (sample != NULL) ? *sample : NULL, stream,
            deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
        if (result)
        {
            if (stream->_xTypesState.unassignable)
            {
                result = RTI_FALSE;
            }
        }
        return result;
    }
    catch (...)
    {
        return RTI_FALSE;
    }
}

unsigned int
BigData20BPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    try
    {
        unsigned int size;
        RTIBool overflow = RTI_FALSE;

        size = PRESTypePlugin_interpretedGetSerializedKeyMaxSize(
            endpoint_data, &overflow, include_encapsulation, encapsulation_id, current_alignment);
        if (overflow)
        {
            size = RTI_CDR_MAX_SERIALIZED_SIZE;
        }

        return size;
    }
    catch (...)
    {
        return RTI_FALSE;
    }
}

unsigned int
BigData20BPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = PRESTypePlugin_interpretedGetSerializedKeyMaxSizeForKeyhash(
        endpoint_data,
        &overflow,
        encapsulation_id,
        current_alignment);
    if (overflow)
    {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

/* ------------------------------------------------------------------------
 * Plug-in Installation Methods
 * ------------------------------------------------------------------------ */
struct PRESTypePlugin *BigData20BPlugin_new(void)
{
    struct PRESTypePlugin *plugin = NULL;
    const struct PRESTypePluginVersion PLUGIN_VERSION =
        PRES_TYPE_PLUGIN_VERSION_2_0;

    RTIOsapiHeap_allocateStructure(
        &plugin, struct PRESTypePlugin);
    if (plugin == NULL)
    {
        return NULL;
    }

    plugin->version = PLUGIN_VERSION;

    /* set up parent's function pointers */
    plugin->onParticipantAttached =
        (PRESTypePluginOnParticipantAttachedCallback)
            BigData20BPlugin_on_participant_attached;
    plugin->onParticipantDetached =
        (PRESTypePluginOnParticipantDetachedCallback)
            BigData20BPlugin_on_participant_detached;
    plugin->onEndpointAttached =
        (PRESTypePluginOnEndpointAttachedCallback)
            BigData20BPlugin_on_endpoint_attached;
    plugin->onEndpointDetached =
        (PRESTypePluginOnEndpointDetachedCallback)
            BigData20BPlugin_on_endpoint_detached;

    plugin->copySampleFnc =
        (PRESTypePluginCopySampleFunction)
            BigData20BPlugin_copy_sample;
    plugin->createSampleFnc =
        (PRESTypePluginCreateSampleFunction)
            BigData20BPlugin_create_sample;
    plugin->destroySampleFnc =
        (PRESTypePluginDestroySampleFunction)
            BigData20BPlugin_destroy_sample;

    plugin->serializeFnc =
        (PRESTypePluginSerializeFunction)PRESTypePlugin_interpretedSerialize;
    plugin->deserializeFnc =
        (PRESTypePluginDeserializeFunction)PRESTypePlugin_interpretedDeserializeWithAlloc;
    plugin->getSerializedSampleMaxSizeFnc =
        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            BigData20BPlugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
        (PRESTypePluginGetSerializedSampleMinSizeFunction)
            PRESTypePlugin_interpretedGetSerializedSampleMinSize;
    plugin->getDeserializedSampleMaxSizeFnc = NULL;
    plugin->getSampleFnc =
        (PRESTypePluginGetSampleFunction)
            BigData20BPlugin_get_sample;
    plugin->returnSampleFnc =
        (PRESTypePluginReturnSampleFunction)
            BigData20BPlugin_return_sample;
    plugin->getKeyKindFnc =
        (PRESTypePluginGetKeyKindFunction)
            BigData20BPlugin_get_key_kind;

    /* These functions are only used for keyed types. As this is not a keyed
    type they are all set to NULL
    */
    plugin->serializeKeyFnc = NULL;
    plugin->deserializeKeyFnc = NULL;
    plugin->getKeyFnc = NULL;
    plugin->returnKeyFnc = NULL;
    plugin->instanceToKeyFnc = NULL;
    plugin->keyToInstanceFnc = NULL;
    plugin->getSerializedKeyMaxSizeFnc = NULL;
    plugin->instanceToKeyHashFnc = NULL;
    plugin->serializedSampleToKeyHashFnc = NULL;
    plugin->serializedKeyToKeyHashFnc = NULL;
#ifdef NDDS_STANDALONE_TYPE
    plugin->typeCode = NULL;
#else
    plugin->typeCode = (struct RTICdrTypeCode *)&::rti::topic::dynamic_type<BigData20B>::get().native();
#endif
    plugin->languageKind = PRES_TYPEPLUGIN_CPPSTL_LANG;

    /* Serialized buffer */
    plugin->getBuffer =
        (PRESTypePluginGetBufferFunction)
            BigData20BPlugin_get_buffer;
    plugin->returnBuffer =
        (PRESTypePluginReturnBufferFunction)
            BigData20BPlugin_return_buffer;
    plugin->getBufferWithParams = NULL;
    plugin->returnBufferWithParams = NULL;
    plugin->getSerializedSampleSizeFnc =
        (PRESTypePluginGetSerializedSampleSizeFunction)
            PRESTypePlugin_interpretedGetSerializedSampleSize;

    plugin->getWriterLoanedSampleFnc = NULL;
    plugin->returnWriterLoanedSampleFnc = NULL;
    plugin->returnWriterLoanedSampleFromCookieFnc = NULL;
    plugin->validateWriterLoanedSampleFnc = NULL;
    plugin->setWriterLoanedSampleSerializedStateFnc = NULL;

    static const char *TYPE_NAME = "BigData20B";
    plugin->endpointTypeName = TYPE_NAME;
    plugin->isMetpType = RTI_FALSE;
    return plugin;
}

void BigData20BPlugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
}

/* ----------------------------------------------------------------------------
 *  Type BigData60B
 * -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

BigData60B *
BigData60BPluginSupport_create_data(void)
{
    try
    {
        BigData60B *sample = new BigData60B();
        ::rti::topic::allocate_sample(*sample);
        return sample;
    }
    catch (...)
    {
        return NULL;
    }
}

void BigData60BPluginSupport_destroy_data(
    BigData60B *sample)
{
    delete sample;
}

RTIBool
BigData60BPluginSupport_copy_data(
    BigData60B *dst,
    const BigData60B *src)
{
    try
    {
        *dst = *src;
    }
    catch (...)
    {
        return RTI_FALSE;
    }

    return RTI_TRUE;
}

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

PRESTypePluginParticipantData
BigData60BPlugin_on_participant_attached(
    void *registration_data,
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration,
    void *container_plugin_context,
    RTICdrTypeCode *type_code)
{
    struct RTIXCdrInterpreterPrograms *programs = NULL;
    struct PRESTypePluginDefaultParticipantData *pd = NULL;
    struct RTIXCdrInterpreterProgramsGenProperty programProperty =
        RTIXCdrInterpreterProgramsGenProperty_INITIALIZER;
    if (registration_data)
    {
    } /* To avoid warnings */
    if (participant_info)
    {
    } /* To avoid warnings */
    if (top_level_registration)
    {
    } /* To avoid warnings */
    if (container_plugin_context)
    {
    } /* To avoid warnings */
    if (type_code)
    {
    } /* To avoid warnings */
    pd = (struct PRESTypePluginDefaultParticipantData *)
        PRESTypePluginDefaultParticipantData_new(participant_info);

    programProperty.generateV1Encapsulation = RTI_XCDR_TRUE;
    programProperty.generateV2Encapsulation = RTI_XCDR_TRUE;
    programProperty.resolveAlias = RTI_XCDR_TRUE;
    programProperty.inlineStruct = RTI_XCDR_TRUE;
    programProperty.optimizeEnum = RTI_XCDR_TRUE;

    programProperty.externalReferenceSize =
        (RTIXCdrUnsignedShort)sizeof(::dds::core::external<char>);
    programProperty.getExternalRefPointerFcn =
        ::rti::topic::interpreter::get_external_value_pointer;

    programs = DDS_TypeCodeFactory_assert_programs_in_global_list(
        DDS_TypeCodeFactory_get_instance(),
        (DDS_TypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type<BigData60B>::get().native(),
        &programProperty,
        RTI_XCDR_PROGRAM_MASK_TYPEPLUGIN);

    if (programs == NULL)
    {
        PRESTypePluginDefaultParticipantData_delete(
            (PRESTypePluginParticipantData)pd);
        return NULL;
    }

    pd->programs = programs;
    return (PRESTypePluginParticipantData)pd;
}

void BigData60BPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data)
{
    if (participant_data != NULL)
    {
        struct PRESTypePluginDefaultParticipantData *pd =
            (struct PRESTypePluginDefaultParticipantData *)participant_data;

        if (pd->programs != NULL)
        {
            DDS_TypeCodeFactory_remove_programs_from_global_list(
                DDS_TypeCodeFactory_get_instance(),
                pd->programs);
            pd->programs = NULL;
        }
        PRESTypePluginDefaultParticipantData_delete(participant_data);
    }
}

PRESTypePluginEndpointData
BigData60BPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration,
    void *containerPluginContext)
{
    try
    {
        PRESTypePluginEndpointData epd = NULL;
        unsigned int serializedSampleMaxSize = 0;

        if (top_level_registration)
        {
        } /* To avoid warnings */
        if (containerPluginContext)
        {
        } /* To avoid warnings */

        if (participant_data == NULL)
        {
            return NULL;
        }

        epd = PRESTypePluginDefaultEndpointData_new(
            participant_data,
            endpoint_info,
            (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
                BigData60BPluginSupport_create_data,
            (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                BigData60BPluginSupport_destroy_data,
            NULL, NULL);

        if (epd == NULL)
        {
            return NULL;
        }

        if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER)
        {
            serializedSampleMaxSize = BigData60BPlugin_get_serialized_sample_max_size(
                epd, RTI_FALSE, RTI_CDR_ENCAPSULATION_ID_CDR_BE, 0);
            PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

            if (PRESTypePluginDefaultEndpointData_createWriterPool(
                    epd,
                    endpoint_info,
                    (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                        BigData60BPlugin_get_serialized_sample_max_size,
                    epd,
                    (PRESTypePluginGetSerializedSampleSizeFunction)
                        PRESTypePlugin_interpretedGetSerializedSampleSize,
                    epd) == RTI_FALSE)
            {
                PRESTypePluginDefaultEndpointData_delete(epd);
                return NULL;
            }
        }

        return epd;
    }
    catch (...)
    {
        return NULL;
    }
}

void BigData60BPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{
    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}

void BigData60BPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    BigData60B *sample,
    void *handle)
{
    try
    {
        ::rti::topic::reset_sample(*sample);
    }
    catch (const std::exception &ex)
    {
        RTICdrLog_logWithFunctionName(
            RTI_LOG_BIT_EXCEPTION,
            "BigData60BPlugin_return_sample",
            &RTI_LOG_ANY_FAILURE_ss,
            "exception: ",
            ex.what());
    }

    PRESTypePluginDefaultEndpointData_returnSample(
        endpoint_data, sample, handle);
}

RTIBool
BigData60BPlugin_copy_sample(
    PRESTypePluginEndpointData,
    BigData60B *dst,
    const BigData60B *src)
{
    return BigData60BPluginSupport_copy_data(dst, src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int
BigData60BPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

RTIBool
BigData60BPlugin_serialize_to_cdr_buffer(
    char *buffer,
    unsigned int *length,
    const BigData60B *sample,
    ::dds::core::policy::DataRepresentationId representation)
{
    using namespace ::dds::core::policy;

    try
    {
        RTIEncapsulationId encapsulationId = RTI_CDR_ENCAPSULATION_ID_INVALID;
        struct RTICdrStream stream;
        struct PRESTypePluginDefaultEndpointData epd;
        RTIBool result;
        struct PRESTypePluginDefaultParticipantData pd;
        struct RTIXCdrTypePluginProgramContext defaultProgramContext =
            RTIXCdrTypePluginProgramContext_INTIALIZER;
        struct PRESTypePlugin plugin = PRES_TYPEPLUGIN_DEFAULT;

        if (length == NULL)
        {
            return RTI_FALSE;
        }

        RTIOsapiMemory_zero(&epd, sizeof(struct PRESTypePluginDefaultEndpointData));
        epd.programContext = defaultProgramContext;
        epd._participantData = &pd;
        epd.typePlugin = &plugin;
        epd.programContext.endpointPluginData = &epd;
        plugin.typeCode = (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type<BigData60B>::get().native();
        pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
            BigData60B,
            true, true, true>();

        encapsulationId = DDS_TypeCode_get_native_encapsulation(
            (DDS_TypeCode *)plugin.typeCode,
            representation);

        if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID)
        {
            return RTI_FALSE;
        }

        epd._maxSizeSerializedSample =
            BigData60BPlugin_get_serialized_sample_max_size(
                (PRESTypePluginEndpointData)&epd,
                RTI_TRUE,
                encapsulationId,
                0);

        if (buffer == NULL)
        {
            *length =
                PRESTypePlugin_interpretedGetSerializedSampleSize(
                    (PRESTypePluginEndpointData)&epd,
                    RTI_TRUE,
                    encapsulationId,
                    0,
                    sample);

            if (*length == 0)
            {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        RTICdrStream_init(&stream);
        RTICdrStream_set(&stream, (char *)buffer, *length);

        result = PRESTypePlugin_interpretedSerialize(
            (PRESTypePluginEndpointData)&epd,
            sample,
            &stream,
            RTI_TRUE,
            encapsulationId,
            RTI_TRUE,
            NULL);

        *length = RTICdrStream_getCurrentPositionOffset(&stream);
        return result;
    }
    catch (...)
    {
        return RTI_FALSE;
    }
}

RTIBool
BigData60BPlugin_deserialize_from_cdr_buffer(
    BigData60B *sample,
    const char *buffer,
    unsigned int length)
{
    struct RTICdrStream stream;
    struct PRESTypePluginDefaultParticipantData pd;
    struct RTIXCdrTypePluginProgramContext defaultProgramContext =
        RTIXCdrTypePluginProgramContext_INTIALIZER;
    struct PRESTypePlugin plugin;
    struct PRESTypePluginDefaultEndpointData epd;

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, length);

    epd.programContext = defaultProgramContext;
    epd._participantData = &pd;
    epd.typePlugin = &plugin;
    epd.programContext.endpointPluginData = &epd;
    plugin.typeCode = (struct RTICdrTypeCode *)(struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type<BigData60B>::get().native();
    pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
        BigData60B,
        true, true, true>();

    epd._assignabilityProperty.acceptUnknownEnumValue = RTI_XCDR_TRUE;
    epd._assignabilityProperty.acceptUnknownUnionDiscriminator = RTI_XCDR_TRUE;

    ::rti::topic::reset_sample(*sample);
    return PRESTypePlugin_interpretedDeserialize(
        (PRESTypePluginEndpointData)&epd,
        sample,
        &stream,
        RTI_TRUE,
        RTI_TRUE,
        NULL);
}

unsigned int
BigData60BPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    try
    {
        unsigned int size;
        RTIBool overflow = RTI_FALSE;

        size = PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
            endpoint_data, &overflow, include_encapsulation, encapsulation_id, current_alignment);

        if (overflow)
        {
            size = RTI_CDR_MAX_SERIALIZED_SIZE;
        }

        return size;
    }
    catch (...)
    {
        return 0;
    }
}

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

PRESTypePluginKeyKind
BigData60BPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

RTIBool BigData60BPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    BigData60B **sample,
    RTIBool *drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    try
    {
        RTIBool result;
        if (drop_sample)
        {
        } /* To avoid warnings */
        stream->_xTypesState.unassignable = RTI_FALSE;
        result = PRESTypePlugin_interpretedDeserializeKey(
            endpoint_data, (sample != NULL) ? *sample : NULL, stream,
            deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
        if (result)
        {
            if (stream->_xTypesState.unassignable)
            {
                result = RTI_FALSE;
            }
        }
        return result;
    }
    catch (...)
    {
        return RTI_FALSE;
    }
}

unsigned int
BigData60BPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    try
    {
        unsigned int size;
        RTIBool overflow = RTI_FALSE;

        size = PRESTypePlugin_interpretedGetSerializedKeyMaxSize(
            endpoint_data, &overflow, include_encapsulation, encapsulation_id, current_alignment);
        if (overflow)
        {
            size = RTI_CDR_MAX_SERIALIZED_SIZE;
        }

        return size;
    }
    catch (...)
    {
        return RTI_FALSE;
    }
}

unsigned int
BigData60BPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = PRESTypePlugin_interpretedGetSerializedKeyMaxSizeForKeyhash(
        endpoint_data,
        &overflow,
        encapsulation_id,
        current_alignment);
    if (overflow)
    {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

/* ------------------------------------------------------------------------
 * Plug-in Installation Methods
 * ------------------------------------------------------------------------ */
struct PRESTypePlugin *BigData60BPlugin_new(void)
{
    struct PRESTypePlugin *plugin = NULL;
    const struct PRESTypePluginVersion PLUGIN_VERSION =
        PRES_TYPE_PLUGIN_VERSION_2_0;

    RTIOsapiHeap_allocateStructure(
        &plugin, struct PRESTypePlugin);
    if (plugin == NULL)
    {
        return NULL;
    }

    plugin->version = PLUGIN_VERSION;

    /* set up parent's function pointers */
    plugin->onParticipantAttached =
        (PRESTypePluginOnParticipantAttachedCallback)
            BigData60BPlugin_on_participant_attached;
    plugin->onParticipantDetached =
        (PRESTypePluginOnParticipantDetachedCallback)
            BigData60BPlugin_on_participant_detached;
    plugin->onEndpointAttached =
        (PRESTypePluginOnEndpointAttachedCallback)
            BigData60BPlugin_on_endpoint_attached;
    plugin->onEndpointDetached =
        (PRESTypePluginOnEndpointDetachedCallback)
            BigData60BPlugin_on_endpoint_detached;

    plugin->copySampleFnc =
        (PRESTypePluginCopySampleFunction)
            BigData60BPlugin_copy_sample;
    plugin->createSampleFnc =
        (PRESTypePluginCreateSampleFunction)
            BigData60BPlugin_create_sample;
    plugin->destroySampleFnc =
        (PRESTypePluginDestroySampleFunction)
            BigData60BPlugin_destroy_sample;

    plugin->serializeFnc =
        (PRESTypePluginSerializeFunction)PRESTypePlugin_interpretedSerialize;
    plugin->deserializeFnc =
        (PRESTypePluginDeserializeFunction)PRESTypePlugin_interpretedDeserializeWithAlloc;
    plugin->getSerializedSampleMaxSizeFnc =
        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            BigData60BPlugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
        (PRESTypePluginGetSerializedSampleMinSizeFunction)
            PRESTypePlugin_interpretedGetSerializedSampleMinSize;
    plugin->getDeserializedSampleMaxSizeFnc = NULL;
    plugin->getSampleFnc =
        (PRESTypePluginGetSampleFunction)
            BigData60BPlugin_get_sample;
    plugin->returnSampleFnc =
        (PRESTypePluginReturnSampleFunction)
            BigData60BPlugin_return_sample;
    plugin->getKeyKindFnc =
        (PRESTypePluginGetKeyKindFunction)
            BigData60BPlugin_get_key_kind;

    /* These functions are only used for keyed types. As this is not a keyed
    type they are all set to NULL
    */
    plugin->serializeKeyFnc = NULL;
    plugin->deserializeKeyFnc = NULL;
    plugin->getKeyFnc = NULL;
    plugin->returnKeyFnc = NULL;
    plugin->instanceToKeyFnc = NULL;
    plugin->keyToInstanceFnc = NULL;
    plugin->getSerializedKeyMaxSizeFnc = NULL;
    plugin->instanceToKeyHashFnc = NULL;
    plugin->serializedSampleToKeyHashFnc = NULL;
    plugin->serializedKeyToKeyHashFnc = NULL;
#ifdef NDDS_STANDALONE_TYPE
    plugin->typeCode = NULL;
#else
    plugin->typeCode = (struct RTICdrTypeCode *)&::rti::topic::dynamic_type<BigData60B>::get().native();
#endif
    plugin->languageKind = PRES_TYPEPLUGIN_CPPSTL_LANG;

    /* Serialized buffer */
    plugin->getBuffer =
        (PRESTypePluginGetBufferFunction)
            BigData60BPlugin_get_buffer;
    plugin->returnBuffer =
        (PRESTypePluginReturnBufferFunction)
            BigData60BPlugin_return_buffer;
    plugin->getBufferWithParams = NULL;
    plugin->returnBufferWithParams = NULL;
    plugin->getSerializedSampleSizeFnc =
        (PRESTypePluginGetSerializedSampleSizeFunction)
            PRESTypePlugin_interpretedGetSerializedSampleSize;

    plugin->getWriterLoanedSampleFnc = NULL;
    plugin->returnWriterLoanedSampleFnc = NULL;
    plugin->returnWriterLoanedSampleFromCookieFnc = NULL;
    plugin->validateWriterLoanedSampleFnc = NULL;
    plugin->setWriterLoanedSampleSerializedStateFnc = NULL;

    static const char *TYPE_NAME = "BigData60B";
    plugin->endpointTypeName = TYPE_NAME;
    plugin->isMetpType = RTI_FALSE;
    return plugin;
}

void BigData60BPlugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
}

/* ----------------------------------------------------------------------------
 *  Type BigData1K
 * -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

BigData1K *
BigData1KPluginSupport_create_data(void)
{
    try
    {
        BigData1K *sample = new BigData1K();
        ::rti::topic::allocate_sample(*sample);
        return sample;
    }
    catch (...)
    {
        return NULL;
    }
}

void BigData1KPluginSupport_destroy_data(
    BigData1K *sample)
{
    delete sample;
}

RTIBool
BigData1KPluginSupport_copy_data(
    BigData1K *dst,
    const BigData1K *src)
{
    try
    {
        *dst = *src;
    }
    catch (...)
    {
        return RTI_FALSE;
    }

    return RTI_TRUE;
}

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

PRESTypePluginParticipantData
BigData1KPlugin_on_participant_attached(
    void *registration_data,
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration,
    void *container_plugin_context,
    RTICdrTypeCode *type_code)
{
    struct RTIXCdrInterpreterPrograms *programs = NULL;
    struct PRESTypePluginDefaultParticipantData *pd = NULL;
    struct RTIXCdrInterpreterProgramsGenProperty programProperty =
        RTIXCdrInterpreterProgramsGenProperty_INITIALIZER;
    if (registration_data)
    {
    } /* To avoid warnings */
    if (participant_info)
    {
    } /* To avoid warnings */
    if (top_level_registration)
    {
    } /* To avoid warnings */
    if (container_plugin_context)
    {
    } /* To avoid warnings */
    if (type_code)
    {
    } /* To avoid warnings */
    pd = (struct PRESTypePluginDefaultParticipantData *)
        PRESTypePluginDefaultParticipantData_new(participant_info);

    programProperty.generateV1Encapsulation = RTI_XCDR_TRUE;
    programProperty.generateV2Encapsulation = RTI_XCDR_TRUE;
    programProperty.resolveAlias = RTI_XCDR_TRUE;
    programProperty.inlineStruct = RTI_XCDR_TRUE;
    programProperty.optimizeEnum = RTI_XCDR_TRUE;

    programProperty.externalReferenceSize =
        (RTIXCdrUnsignedShort)sizeof(::dds::core::external<char>);
    programProperty.getExternalRefPointerFcn =
        ::rti::topic::interpreter::get_external_value_pointer;

    programs = DDS_TypeCodeFactory_assert_programs_in_global_list(
        DDS_TypeCodeFactory_get_instance(),
        (DDS_TypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type<BigData1K>::get().native(),
        &programProperty,
        RTI_XCDR_PROGRAM_MASK_TYPEPLUGIN);

    if (programs == NULL)
    {
        PRESTypePluginDefaultParticipantData_delete(
            (PRESTypePluginParticipantData)pd);
        return NULL;
    }

    pd->programs = programs;
    return (PRESTypePluginParticipantData)pd;
}

void BigData1KPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data)
{
    if (participant_data != NULL)
    {
        struct PRESTypePluginDefaultParticipantData *pd =
            (struct PRESTypePluginDefaultParticipantData *)participant_data;

        if (pd->programs != NULL)
        {
            DDS_TypeCodeFactory_remove_programs_from_global_list(
                DDS_TypeCodeFactory_get_instance(),
                pd->programs);
            pd->programs = NULL;
        }
        PRESTypePluginDefaultParticipantData_delete(participant_data);
    }
}

PRESTypePluginEndpointData
BigData1KPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration,
    void *containerPluginContext)
{
    try
    {
        PRESTypePluginEndpointData epd = NULL;
        unsigned int serializedSampleMaxSize = 0;

        if (top_level_registration)
        {
        } /* To avoid warnings */
        if (containerPluginContext)
        {
        } /* To avoid warnings */

        if (participant_data == NULL)
        {
            return NULL;
        }

        epd = PRESTypePluginDefaultEndpointData_new(
            participant_data,
            endpoint_info,
            (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
                BigData1KPluginSupport_create_data,
            (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                BigData1KPluginSupport_destroy_data,
            NULL, NULL);

        if (epd == NULL)
        {
            return NULL;
        }

        if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER)
        {
            serializedSampleMaxSize = BigData1KPlugin_get_serialized_sample_max_size(
                epd, RTI_FALSE, RTI_CDR_ENCAPSULATION_ID_CDR_BE, 0);
            PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

            if (PRESTypePluginDefaultEndpointData_createWriterPool(
                    epd,
                    endpoint_info,
                    (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                        BigData1KPlugin_get_serialized_sample_max_size,
                    epd,
                    (PRESTypePluginGetSerializedSampleSizeFunction)
                        PRESTypePlugin_interpretedGetSerializedSampleSize,
                    epd) == RTI_FALSE)
            {
                PRESTypePluginDefaultEndpointData_delete(epd);
                return NULL;
            }
        }

        return epd;
    }
    catch (...)
    {
        return NULL;
    }
}

void BigData1KPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{
    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}

void BigData1KPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    BigData1K *sample,
    void *handle)
{
    try
    {
        ::rti::topic::reset_sample(*sample);
    }
    catch (const std::exception &ex)
    {
        RTICdrLog_logWithFunctionName(
            RTI_LOG_BIT_EXCEPTION,
            "BigData1KPlugin_return_sample",
            &RTI_LOG_ANY_FAILURE_ss,
            "exception: ",
            ex.what());
    }

    PRESTypePluginDefaultEndpointData_returnSample(
        endpoint_data, sample, handle);
}

RTIBool
BigData1KPlugin_copy_sample(
    PRESTypePluginEndpointData,
    BigData1K *dst,
    const BigData1K *src)
{
    return BigData1KPluginSupport_copy_data(dst, src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int
BigData1KPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

RTIBool
BigData1KPlugin_serialize_to_cdr_buffer(
    char *buffer,
    unsigned int *length,
    const BigData1K *sample,
    ::dds::core::policy::DataRepresentationId representation)
{
    using namespace ::dds::core::policy;

    try
    {
        RTIEncapsulationId encapsulationId = RTI_CDR_ENCAPSULATION_ID_INVALID;
        struct RTICdrStream stream;
        struct PRESTypePluginDefaultEndpointData epd;
        RTIBool result;
        struct PRESTypePluginDefaultParticipantData pd;
        struct RTIXCdrTypePluginProgramContext defaultProgramContext =
            RTIXCdrTypePluginProgramContext_INTIALIZER;
        struct PRESTypePlugin plugin = PRES_TYPEPLUGIN_DEFAULT;

        if (length == NULL)
        {
            return RTI_FALSE;
        }

        RTIOsapiMemory_zero(&epd, sizeof(struct PRESTypePluginDefaultEndpointData));
        epd.programContext = defaultProgramContext;
        epd._participantData = &pd;
        epd.typePlugin = &plugin;
        epd.programContext.endpointPluginData = &epd;
        plugin.typeCode = (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type<BigData1K>::get().native();
        pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
            BigData1K,
            true, true, true>();

        encapsulationId = DDS_TypeCode_get_native_encapsulation(
            (DDS_TypeCode *)plugin.typeCode,
            representation);

        if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID)
        {
            return RTI_FALSE;
        }

        epd._maxSizeSerializedSample =
            BigData1KPlugin_get_serialized_sample_max_size(
                (PRESTypePluginEndpointData)&epd,
                RTI_TRUE,
                encapsulationId,
                0);

        if (buffer == NULL)
        {
            *length =
                PRESTypePlugin_interpretedGetSerializedSampleSize(
                    (PRESTypePluginEndpointData)&epd,
                    RTI_TRUE,
                    encapsulationId,
                    0,
                    sample);

            if (*length == 0)
            {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        RTICdrStream_init(&stream);
        RTICdrStream_set(&stream, (char *)buffer, *length);

        result = PRESTypePlugin_interpretedSerialize(
            (PRESTypePluginEndpointData)&epd,
            sample,
            &stream,
            RTI_TRUE,
            encapsulationId,
            RTI_TRUE,
            NULL);

        *length = RTICdrStream_getCurrentPositionOffset(&stream);
        return result;
    }
    catch (...)
    {
        return RTI_FALSE;
    }
}

RTIBool
BigData1KPlugin_deserialize_from_cdr_buffer(
    BigData1K *sample,
    const char *buffer,
    unsigned int length)
{
    struct RTICdrStream stream;
    struct PRESTypePluginDefaultParticipantData pd;
    struct RTIXCdrTypePluginProgramContext defaultProgramContext =
        RTIXCdrTypePluginProgramContext_INTIALIZER;
    struct PRESTypePlugin plugin;
    struct PRESTypePluginDefaultEndpointData epd;

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, length);

    epd.programContext = defaultProgramContext;
    epd._participantData = &pd;
    epd.typePlugin = &plugin;
    epd.programContext.endpointPluginData = &epd;
    plugin.typeCode = (struct RTICdrTypeCode *)(struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type<BigData1K>::get().native();
    pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
        BigData1K,
        true, true, true>();

    epd._assignabilityProperty.acceptUnknownEnumValue = RTI_XCDR_TRUE;
    epd._assignabilityProperty.acceptUnknownUnionDiscriminator = RTI_XCDR_TRUE;

    ::rti::topic::reset_sample(*sample);
    return PRESTypePlugin_interpretedDeserialize(
        (PRESTypePluginEndpointData)&epd,
        sample,
        &stream,
        RTI_TRUE,
        RTI_TRUE,
        NULL);
}

unsigned int
BigData1KPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    try
    {
        unsigned int size;
        RTIBool overflow = RTI_FALSE;

        size = PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
            endpoint_data, &overflow, include_encapsulation, encapsulation_id, current_alignment);

        if (overflow)
        {
            size = RTI_CDR_MAX_SERIALIZED_SIZE;
        }

        return size;
    }
    catch (...)
    {
        return 0;
    }
}

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

PRESTypePluginKeyKind
BigData1KPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

RTIBool BigData1KPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    BigData1K **sample,
    RTIBool *drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    try
    {
        RTIBool result;
        if (drop_sample)
        {
        } /* To avoid warnings */
        stream->_xTypesState.unassignable = RTI_FALSE;
        result = PRESTypePlugin_interpretedDeserializeKey(
            endpoint_data, (sample != NULL) ? *sample : NULL, stream,
            deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
        if (result)
        {
            if (stream->_xTypesState.unassignable)
            {
                result = RTI_FALSE;
            }
        }
        return result;
    }
    catch (...)
    {
        return RTI_FALSE;
    }
}

unsigned int
BigData1KPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    try
    {
        unsigned int size;
        RTIBool overflow = RTI_FALSE;

        size = PRESTypePlugin_interpretedGetSerializedKeyMaxSize(
            endpoint_data, &overflow, include_encapsulation, encapsulation_id, current_alignment);
        if (overflow)
        {
            size = RTI_CDR_MAX_SERIALIZED_SIZE;
        }

        return size;
    }
    catch (...)
    {
        return RTI_FALSE;
    }
}

unsigned int
BigData1KPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = PRESTypePlugin_interpretedGetSerializedKeyMaxSizeForKeyhash(
        endpoint_data,
        &overflow,
        encapsulation_id,
        current_alignment);
    if (overflow)
    {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

/* ------------------------------------------------------------------------
 * Plug-in Installation Methods
 * ------------------------------------------------------------------------ */
struct PRESTypePlugin *BigData1KPlugin_new(void)
{
    struct PRESTypePlugin *plugin = NULL;
    const struct PRESTypePluginVersion PLUGIN_VERSION =
        PRES_TYPE_PLUGIN_VERSION_2_0;

    RTIOsapiHeap_allocateStructure(
        &plugin, struct PRESTypePlugin);
    if (plugin == NULL)
    {
        return NULL;
    }

    plugin->version = PLUGIN_VERSION;

    /* set up parent's function pointers */
    plugin->onParticipantAttached =
        (PRESTypePluginOnParticipantAttachedCallback)
            BigData1KPlugin_on_participant_attached;
    plugin->onParticipantDetached =
        (PRESTypePluginOnParticipantDetachedCallback)
            BigData1KPlugin_on_participant_detached;
    plugin->onEndpointAttached =
        (PRESTypePluginOnEndpointAttachedCallback)
            BigData1KPlugin_on_endpoint_attached;
    plugin->onEndpointDetached =
        (PRESTypePluginOnEndpointDetachedCallback)
            BigData1KPlugin_on_endpoint_detached;

    plugin->copySampleFnc =
        (PRESTypePluginCopySampleFunction)
            BigData1KPlugin_copy_sample;
    plugin->createSampleFnc =
        (PRESTypePluginCreateSampleFunction)
            BigData1KPlugin_create_sample;
    plugin->destroySampleFnc =
        (PRESTypePluginDestroySampleFunction)
            BigData1KPlugin_destroy_sample;

    plugin->serializeFnc =
        (PRESTypePluginSerializeFunction)PRESTypePlugin_interpretedSerialize;
    plugin->deserializeFnc =
        (PRESTypePluginDeserializeFunction)PRESTypePlugin_interpretedDeserializeWithAlloc;
    plugin->getSerializedSampleMaxSizeFnc =
        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            BigData1KPlugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
        (PRESTypePluginGetSerializedSampleMinSizeFunction)
            PRESTypePlugin_interpretedGetSerializedSampleMinSize;
    plugin->getDeserializedSampleMaxSizeFnc = NULL;
    plugin->getSampleFnc =
        (PRESTypePluginGetSampleFunction)
            BigData1KPlugin_get_sample;
    plugin->returnSampleFnc =
        (PRESTypePluginReturnSampleFunction)
            BigData1KPlugin_return_sample;
    plugin->getKeyKindFnc =
        (PRESTypePluginGetKeyKindFunction)
            BigData1KPlugin_get_key_kind;

    /* These functions are only used for keyed types. As this is not a keyed
    type they are all set to NULL
    */
    plugin->serializeKeyFnc = NULL;
    plugin->deserializeKeyFnc = NULL;
    plugin->getKeyFnc = NULL;
    plugin->returnKeyFnc = NULL;
    plugin->instanceToKeyFnc = NULL;
    plugin->keyToInstanceFnc = NULL;
    plugin->getSerializedKeyMaxSizeFnc = NULL;
    plugin->instanceToKeyHashFnc = NULL;
    plugin->serializedSampleToKeyHashFnc = NULL;
    plugin->serializedKeyToKeyHashFnc = NULL;
#ifdef NDDS_STANDALONE_TYPE
    plugin->typeCode = NULL;
#else
    plugin->typeCode = (struct RTICdrTypeCode *)&::rti::topic::dynamic_type<BigData1K>::get().native();
#endif
    plugin->languageKind = PRES_TYPEPLUGIN_CPPSTL_LANG;

    /* Serialized buffer */
    plugin->getBuffer =
        (PRESTypePluginGetBufferFunction)
            BigData1KPlugin_get_buffer;
    plugin->returnBuffer =
        (PRESTypePluginReturnBufferFunction)
            BigData1KPlugin_return_buffer;
    plugin->getBufferWithParams = NULL;
    plugin->returnBufferWithParams = NULL;
    plugin->getSerializedSampleSizeFnc =
        (PRESTypePluginGetSerializedSampleSizeFunction)
            PRESTypePlugin_interpretedGetSerializedSampleSize;

    plugin->getWriterLoanedSampleFnc = NULL;
    plugin->returnWriterLoanedSampleFnc = NULL;
    plugin->returnWriterLoanedSampleFromCookieFnc = NULL;
    plugin->validateWriterLoanedSampleFnc = NULL;
    plugin->setWriterLoanedSampleSerializedStateFnc = NULL;

    static const char *TYPE_NAME = "BigData1K";
    plugin->endpointTypeName = TYPE_NAME;
    plugin->isMetpType = RTI_FALSE;
    return plugin;
}

void BigData1KPlugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
}

/* ----------------------------------------------------------------------------
 *  Type BigData2K
 * -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

BigData2K *
BigData2KPluginSupport_create_data(void)
{
    try
    {
        BigData2K *sample = new BigData2K();
        ::rti::topic::allocate_sample(*sample);
        return sample;
    }
    catch (...)
    {
        return NULL;
    }
}

void BigData2KPluginSupport_destroy_data(
    BigData2K *sample)
{
    delete sample;
}

RTIBool
BigData2KPluginSupport_copy_data(
    BigData2K *dst,
    const BigData2K *src)
{
    try
    {
        *dst = *src;
    }
    catch (...)
    {
        return RTI_FALSE;
    }

    return RTI_TRUE;
}

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

PRESTypePluginParticipantData
BigData2KPlugin_on_participant_attached(
    void *registration_data,
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration,
    void *container_plugin_context,
    RTICdrTypeCode *type_code)
{
    struct RTIXCdrInterpreterPrograms *programs = NULL;
    struct PRESTypePluginDefaultParticipantData *pd = NULL;
    struct RTIXCdrInterpreterProgramsGenProperty programProperty =
        RTIXCdrInterpreterProgramsGenProperty_INITIALIZER;
    if (registration_data)
    {
    } /* To avoid warnings */
    if (participant_info)
    {
    } /* To avoid warnings */
    if (top_level_registration)
    {
    } /* To avoid warnings */
    if (container_plugin_context)
    {
    } /* To avoid warnings */
    if (type_code)
    {
    } /* To avoid warnings */
    pd = (struct PRESTypePluginDefaultParticipantData *)
        PRESTypePluginDefaultParticipantData_new(participant_info);

    programProperty.generateV1Encapsulation = RTI_XCDR_TRUE;
    programProperty.generateV2Encapsulation = RTI_XCDR_TRUE;
    programProperty.resolveAlias = RTI_XCDR_TRUE;
    programProperty.inlineStruct = RTI_XCDR_TRUE;
    programProperty.optimizeEnum = RTI_XCDR_TRUE;

    programProperty.externalReferenceSize =
        (RTIXCdrUnsignedShort)sizeof(::dds::core::external<char>);
    programProperty.getExternalRefPointerFcn =
        ::rti::topic::interpreter::get_external_value_pointer;

    programs = DDS_TypeCodeFactory_assert_programs_in_global_list(
        DDS_TypeCodeFactory_get_instance(),
        (DDS_TypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type<BigData2K>::get().native(),
        &programProperty,
        RTI_XCDR_PROGRAM_MASK_TYPEPLUGIN);

    if (programs == NULL)
    {
        PRESTypePluginDefaultParticipantData_delete(
            (PRESTypePluginParticipantData)pd);
        return NULL;
    }

    pd->programs = programs;
    return (PRESTypePluginParticipantData)pd;
}

void BigData2KPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data)
{
    if (participant_data != NULL)
    {
        struct PRESTypePluginDefaultParticipantData *pd =
            (struct PRESTypePluginDefaultParticipantData *)participant_data;

        if (pd->programs != NULL)
        {
            DDS_TypeCodeFactory_remove_programs_from_global_list(
                DDS_TypeCodeFactory_get_instance(),
                pd->programs);
            pd->programs = NULL;
        }
        PRESTypePluginDefaultParticipantData_delete(participant_data);
    }
}

PRESTypePluginEndpointData
BigData2KPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration,
    void *containerPluginContext)
{
    try
    {
        PRESTypePluginEndpointData epd = NULL;
        unsigned int serializedSampleMaxSize = 0;

        if (top_level_registration)
        {
        } /* To avoid warnings */
        if (containerPluginContext)
        {
        } /* To avoid warnings */

        if (participant_data == NULL)
        {
            return NULL;
        }

        epd = PRESTypePluginDefaultEndpointData_new(
            participant_data,
            endpoint_info,
            (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
                BigData2KPluginSupport_create_data,
            (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                BigData2KPluginSupport_destroy_data,
            NULL, NULL);

        if (epd == NULL)
        {
            return NULL;
        }

        if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER)
        {
            serializedSampleMaxSize = BigData2KPlugin_get_serialized_sample_max_size(
                epd, RTI_FALSE, RTI_CDR_ENCAPSULATION_ID_CDR_BE, 0);
            PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

            if (PRESTypePluginDefaultEndpointData_createWriterPool(
                    epd,
                    endpoint_info,
                    (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                        BigData2KPlugin_get_serialized_sample_max_size,
                    epd,
                    (PRESTypePluginGetSerializedSampleSizeFunction)
                        PRESTypePlugin_interpretedGetSerializedSampleSize,
                    epd) == RTI_FALSE)
            {
                PRESTypePluginDefaultEndpointData_delete(epd);
                return NULL;
            }
        }

        return epd;
    }
    catch (...)
    {
        return NULL;
    }
}

void BigData2KPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{
    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}

void BigData2KPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    BigData2K *sample,
    void *handle)
{
    try
    {
        ::rti::topic::reset_sample(*sample);
    }
    catch (const std::exception &ex)
    {
        RTICdrLog_logWithFunctionName(
            RTI_LOG_BIT_EXCEPTION,
            "BigData2KPlugin_return_sample",
            &RTI_LOG_ANY_FAILURE_ss,
            "exception: ",
            ex.what());
    }

    PRESTypePluginDefaultEndpointData_returnSample(
        endpoint_data, sample, handle);
}

RTIBool
BigData2KPlugin_copy_sample(
    PRESTypePluginEndpointData,
    BigData2K *dst,
    const BigData2K *src)
{
    return BigData2KPluginSupport_copy_data(dst, src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int
BigData2KPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

RTIBool
BigData2KPlugin_serialize_to_cdr_buffer(
    char *buffer,
    unsigned int *length,
    const BigData2K *sample,
    ::dds::core::policy::DataRepresentationId representation)
{
    using namespace ::dds::core::policy;

    try
    {
        RTIEncapsulationId encapsulationId = RTI_CDR_ENCAPSULATION_ID_INVALID;
        struct RTICdrStream stream;
        struct PRESTypePluginDefaultEndpointData epd;
        RTIBool result;
        struct PRESTypePluginDefaultParticipantData pd;
        struct RTIXCdrTypePluginProgramContext defaultProgramContext =
            RTIXCdrTypePluginProgramContext_INTIALIZER;
        struct PRESTypePlugin plugin = PRES_TYPEPLUGIN_DEFAULT;

        if (length == NULL)
        {
            return RTI_FALSE;
        }

        RTIOsapiMemory_zero(&epd, sizeof(struct PRESTypePluginDefaultEndpointData));
        epd.programContext = defaultProgramContext;
        epd._participantData = &pd;
        epd.typePlugin = &plugin;
        epd.programContext.endpointPluginData = &epd;
        plugin.typeCode = (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type<BigData2K>::get().native();
        pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
            BigData2K,
            true, true, true>();

        encapsulationId = DDS_TypeCode_get_native_encapsulation(
            (DDS_TypeCode *)plugin.typeCode,
            representation);

        if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID)
        {
            return RTI_FALSE;
        }

        epd._maxSizeSerializedSample =
            BigData2KPlugin_get_serialized_sample_max_size(
                (PRESTypePluginEndpointData)&epd,
                RTI_TRUE,
                encapsulationId,
                0);

        if (buffer == NULL)
        {
            *length =
                PRESTypePlugin_interpretedGetSerializedSampleSize(
                    (PRESTypePluginEndpointData)&epd,
                    RTI_TRUE,
                    encapsulationId,
                    0,
                    sample);

            if (*length == 0)
            {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        RTICdrStream_init(&stream);
        RTICdrStream_set(&stream, (char *)buffer, *length);

        result = PRESTypePlugin_interpretedSerialize(
            (PRESTypePluginEndpointData)&epd,
            sample,
            &stream,
            RTI_TRUE,
            encapsulationId,
            RTI_TRUE,
            NULL);

        *length = RTICdrStream_getCurrentPositionOffset(&stream);
        return result;
    }
    catch (...)
    {
        return RTI_FALSE;
    }
}

RTIBool
BigData2KPlugin_deserialize_from_cdr_buffer(
    BigData2K *sample,
    const char *buffer,
    unsigned int length)
{
    struct RTICdrStream stream;
    struct PRESTypePluginDefaultParticipantData pd;
    struct RTIXCdrTypePluginProgramContext defaultProgramContext =
        RTIXCdrTypePluginProgramContext_INTIALIZER;
    struct PRESTypePlugin plugin;
    struct PRESTypePluginDefaultEndpointData epd;

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, length);

    epd.programContext = defaultProgramContext;
    epd._participantData = &pd;
    epd.typePlugin = &plugin;
    epd.programContext.endpointPluginData = &epd;
    plugin.typeCode = (struct RTICdrTypeCode *)(struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type<BigData2K>::get().native();
    pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
        BigData2K,
        true, true, true>();

    epd._assignabilityProperty.acceptUnknownEnumValue = RTI_XCDR_TRUE;
    epd._assignabilityProperty.acceptUnknownUnionDiscriminator = RTI_XCDR_TRUE;

    ::rti::topic::reset_sample(*sample);
    return PRESTypePlugin_interpretedDeserialize(
        (PRESTypePluginEndpointData)&epd,
        sample,
        &stream,
        RTI_TRUE,
        RTI_TRUE,
        NULL);
}

unsigned int
BigData2KPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    try
    {
        unsigned int size;
        RTIBool overflow = RTI_FALSE;

        size = PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
            endpoint_data, &overflow, include_encapsulation, encapsulation_id, current_alignment);

        if (overflow)
        {
            size = RTI_CDR_MAX_SERIALIZED_SIZE;
        }

        return size;
    }
    catch (...)
    {
        return 0;
    }
}

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

PRESTypePluginKeyKind
BigData2KPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

RTIBool BigData2KPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    BigData2K **sample,
    RTIBool *drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    try
    {
        RTIBool result;
        if (drop_sample)
        {
        } /* To avoid warnings */
        stream->_xTypesState.unassignable = RTI_FALSE;
        result = PRESTypePlugin_interpretedDeserializeKey(
            endpoint_data, (sample != NULL) ? *sample : NULL, stream,
            deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
        if (result)
        {
            if (stream->_xTypesState.unassignable)
            {
                result = RTI_FALSE;
            }
        }
        return result;
    }
    catch (...)
    {
        return RTI_FALSE;
    }
}

unsigned int
BigData2KPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    try
    {
        unsigned int size;
        RTIBool overflow = RTI_FALSE;

        size = PRESTypePlugin_interpretedGetSerializedKeyMaxSize(
            endpoint_data, &overflow, include_encapsulation, encapsulation_id, current_alignment);
        if (overflow)
        {
            size = RTI_CDR_MAX_SERIALIZED_SIZE;
        }

        return size;
    }
    catch (...)
    {
        return RTI_FALSE;
    }
}

unsigned int
BigData2KPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = PRESTypePlugin_interpretedGetSerializedKeyMaxSizeForKeyhash(
        endpoint_data,
        &overflow,
        encapsulation_id,
        current_alignment);
    if (overflow)
    {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

/* ------------------------------------------------------------------------
 * Plug-in Installation Methods
 * ------------------------------------------------------------------------ */
struct PRESTypePlugin *BigData2KPlugin_new(void)
{
    struct PRESTypePlugin *plugin = NULL;
    const struct PRESTypePluginVersion PLUGIN_VERSION =
        PRES_TYPE_PLUGIN_VERSION_2_0;

    RTIOsapiHeap_allocateStructure(
        &plugin, struct PRESTypePlugin);
    if (plugin == NULL)
    {
        return NULL;
    }

    plugin->version = PLUGIN_VERSION;

    /* set up parent's function pointers */
    plugin->onParticipantAttached =
        (PRESTypePluginOnParticipantAttachedCallback)
            BigData2KPlugin_on_participant_attached;
    plugin->onParticipantDetached =
        (PRESTypePluginOnParticipantDetachedCallback)
            BigData2KPlugin_on_participant_detached;
    plugin->onEndpointAttached =
        (PRESTypePluginOnEndpointAttachedCallback)
            BigData2KPlugin_on_endpoint_attached;
    plugin->onEndpointDetached =
        (PRESTypePluginOnEndpointDetachedCallback)
            BigData2KPlugin_on_endpoint_detached;

    plugin->copySampleFnc =
        (PRESTypePluginCopySampleFunction)
            BigData2KPlugin_copy_sample;
    plugin->createSampleFnc =
        (PRESTypePluginCreateSampleFunction)
            BigData2KPlugin_create_sample;
    plugin->destroySampleFnc =
        (PRESTypePluginDestroySampleFunction)
            BigData2KPlugin_destroy_sample;

    plugin->serializeFnc =
        (PRESTypePluginSerializeFunction)PRESTypePlugin_interpretedSerialize;
    plugin->deserializeFnc =
        (PRESTypePluginDeserializeFunction)PRESTypePlugin_interpretedDeserializeWithAlloc;
    plugin->getSerializedSampleMaxSizeFnc =
        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            BigData2KPlugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
        (PRESTypePluginGetSerializedSampleMinSizeFunction)
            PRESTypePlugin_interpretedGetSerializedSampleMinSize;
    plugin->getDeserializedSampleMaxSizeFnc = NULL;
    plugin->getSampleFnc =
        (PRESTypePluginGetSampleFunction)
            BigData2KPlugin_get_sample;
    plugin->returnSampleFnc =
        (PRESTypePluginReturnSampleFunction)
            BigData2KPlugin_return_sample;
    plugin->getKeyKindFnc =
        (PRESTypePluginGetKeyKindFunction)
            BigData2KPlugin_get_key_kind;

    /* These functions are only used for keyed types. As this is not a keyed
    type they are all set to NULL
    */
    plugin->serializeKeyFnc = NULL;
    plugin->deserializeKeyFnc = NULL;
    plugin->getKeyFnc = NULL;
    plugin->returnKeyFnc = NULL;
    plugin->instanceToKeyFnc = NULL;
    plugin->keyToInstanceFnc = NULL;
    plugin->getSerializedKeyMaxSizeFnc = NULL;
    plugin->instanceToKeyHashFnc = NULL;
    plugin->serializedSampleToKeyHashFnc = NULL;
    plugin->serializedKeyToKeyHashFnc = NULL;
#ifdef NDDS_STANDALONE_TYPE
    plugin->typeCode = NULL;
#else
    plugin->typeCode = (struct RTICdrTypeCode *)&::rti::topic::dynamic_type<BigData2K>::get().native();
#endif
    plugin->languageKind = PRES_TYPEPLUGIN_CPPSTL_LANG;

    /* Serialized buffer */
    plugin->getBuffer =
        (PRESTypePluginGetBufferFunction)
            BigData2KPlugin_get_buffer;
    plugin->returnBuffer =
        (PRESTypePluginReturnBufferFunction)
            BigData2KPlugin_return_buffer;
    plugin->getBufferWithParams = NULL;
    plugin->returnBufferWithParams = NULL;
    plugin->getSerializedSampleSizeFnc =
        (PRESTypePluginGetSerializedSampleSizeFunction)
            PRESTypePlugin_interpretedGetSerializedSampleSize;

    plugin->getWriterLoanedSampleFnc = NULL;
    plugin->returnWriterLoanedSampleFnc = NULL;
    plugin->returnWriterLoanedSampleFromCookieFnc = NULL;
    plugin->validateWriterLoanedSampleFnc = NULL;
    plugin->setWriterLoanedSampleSerializedStateFnc = NULL;

    static const char *TYPE_NAME = "BigData2K";
    plugin->endpointTypeName = TYPE_NAME;
    plugin->isMetpType = RTI_FALSE;
    return plugin;
}

void BigData2KPlugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
}

/* ----------------------------------------------------------------------------
 *  Type BigData4K
 * -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

BigData4K *
BigData4KPluginSupport_create_data(void)
{
    try
    {
        BigData4K *sample = new BigData4K();
        ::rti::topic::allocate_sample(*sample);
        return sample;
    }
    catch (...)
    {
        return NULL;
    }
}

void BigData4KPluginSupport_destroy_data(
    BigData4K *sample)
{
    delete sample;
}

RTIBool
BigData4KPluginSupport_copy_data(
    BigData4K *dst,
    const BigData4K *src)
{
    try
    {
        *dst = *src;
    }
    catch (...)
    {
        return RTI_FALSE;
    }

    return RTI_TRUE;
}

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

PRESTypePluginParticipantData
BigData4KPlugin_on_participant_attached(
    void *registration_data,
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration,
    void *container_plugin_context,
    RTICdrTypeCode *type_code)
{
    struct RTIXCdrInterpreterPrograms *programs = NULL;
    struct PRESTypePluginDefaultParticipantData *pd = NULL;
    struct RTIXCdrInterpreterProgramsGenProperty programProperty =
        RTIXCdrInterpreterProgramsGenProperty_INITIALIZER;
    if (registration_data)
    {
    } /* To avoid warnings */
    if (participant_info)
    {
    } /* To avoid warnings */
    if (top_level_registration)
    {
    } /* To avoid warnings */
    if (container_plugin_context)
    {
    } /* To avoid warnings */
    if (type_code)
    {
    } /* To avoid warnings */
    pd = (struct PRESTypePluginDefaultParticipantData *)
        PRESTypePluginDefaultParticipantData_new(participant_info);

    programProperty.generateV1Encapsulation = RTI_XCDR_TRUE;
    programProperty.generateV2Encapsulation = RTI_XCDR_TRUE;
    programProperty.resolveAlias = RTI_XCDR_TRUE;
    programProperty.inlineStruct = RTI_XCDR_TRUE;
    programProperty.optimizeEnum = RTI_XCDR_TRUE;

    programProperty.externalReferenceSize =
        (RTIXCdrUnsignedShort)sizeof(::dds::core::external<char>);
    programProperty.getExternalRefPointerFcn =
        ::rti::topic::interpreter::get_external_value_pointer;

    programs = DDS_TypeCodeFactory_assert_programs_in_global_list(
        DDS_TypeCodeFactory_get_instance(),
        (DDS_TypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type<BigData4K>::get().native(),
        &programProperty,
        RTI_XCDR_PROGRAM_MASK_TYPEPLUGIN);

    if (programs == NULL)
    {
        PRESTypePluginDefaultParticipantData_delete(
            (PRESTypePluginParticipantData)pd);
        return NULL;
    }

    pd->programs = programs;
    return (PRESTypePluginParticipantData)pd;
}

void BigData4KPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data)
{
    if (participant_data != NULL)
    {
        struct PRESTypePluginDefaultParticipantData *pd =
            (struct PRESTypePluginDefaultParticipantData *)participant_data;

        if (pd->programs != NULL)
        {
            DDS_TypeCodeFactory_remove_programs_from_global_list(
                DDS_TypeCodeFactory_get_instance(),
                pd->programs);
            pd->programs = NULL;
        }
        PRESTypePluginDefaultParticipantData_delete(participant_data);
    }
}

PRESTypePluginEndpointData
BigData4KPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration,
    void *containerPluginContext)
{
    try
    {
        PRESTypePluginEndpointData epd = NULL;
        unsigned int serializedSampleMaxSize = 0;

        if (top_level_registration)
        {
        } /* To avoid warnings */
        if (containerPluginContext)
        {
        } /* To avoid warnings */

        if (participant_data == NULL)
        {
            return NULL;
        }

        epd = PRESTypePluginDefaultEndpointData_new(
            participant_data,
            endpoint_info,
            (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
                BigData4KPluginSupport_create_data,
            (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                BigData4KPluginSupport_destroy_data,
            NULL, NULL);

        if (epd == NULL)
        {
            return NULL;
        }

        if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER)
        {
            serializedSampleMaxSize = BigData4KPlugin_get_serialized_sample_max_size(
                epd, RTI_FALSE, RTI_CDR_ENCAPSULATION_ID_CDR_BE, 0);
            PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

            if (PRESTypePluginDefaultEndpointData_createWriterPool(
                    epd,
                    endpoint_info,
                    (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                        BigData4KPlugin_get_serialized_sample_max_size,
                    epd,
                    (PRESTypePluginGetSerializedSampleSizeFunction)
                        PRESTypePlugin_interpretedGetSerializedSampleSize,
                    epd) == RTI_FALSE)
            {
                PRESTypePluginDefaultEndpointData_delete(epd);
                return NULL;
            }
        }

        return epd;
    }
    catch (...)
    {
        return NULL;
    }
}

void BigData4KPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{
    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}

void BigData4KPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    BigData4K *sample,
    void *handle)
{
    try
    {
        ::rti::topic::reset_sample(*sample);
    }
    catch (const std::exception &ex)
    {
        RTICdrLog_logWithFunctionName(
            RTI_LOG_BIT_EXCEPTION,
            "BigData4KPlugin_return_sample",
            &RTI_LOG_ANY_FAILURE_ss,
            "exception: ",
            ex.what());
    }

    PRESTypePluginDefaultEndpointData_returnSample(
        endpoint_data, sample, handle);
}

RTIBool
BigData4KPlugin_copy_sample(
    PRESTypePluginEndpointData,
    BigData4K *dst,
    const BigData4K *src)
{
    return BigData4KPluginSupport_copy_data(dst, src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int
BigData4KPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

RTIBool
BigData4KPlugin_serialize_to_cdr_buffer(
    char *buffer,
    unsigned int *length,
    const BigData4K *sample,
    ::dds::core::policy::DataRepresentationId representation)
{
    using namespace ::dds::core::policy;

    try
    {
        RTIEncapsulationId encapsulationId = RTI_CDR_ENCAPSULATION_ID_INVALID;
        struct RTICdrStream stream;
        struct PRESTypePluginDefaultEndpointData epd;
        RTIBool result;
        struct PRESTypePluginDefaultParticipantData pd;
        struct RTIXCdrTypePluginProgramContext defaultProgramContext =
            RTIXCdrTypePluginProgramContext_INTIALIZER;
        struct PRESTypePlugin plugin = PRES_TYPEPLUGIN_DEFAULT;

        if (length == NULL)
        {
            return RTI_FALSE;
        }

        RTIOsapiMemory_zero(&epd, sizeof(struct PRESTypePluginDefaultEndpointData));
        epd.programContext = defaultProgramContext;
        epd._participantData = &pd;
        epd.typePlugin = &plugin;
        epd.programContext.endpointPluginData = &epd;
        plugin.typeCode = (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type<BigData4K>::get().native();
        pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
            BigData4K,
            true, true, true>();

        encapsulationId = DDS_TypeCode_get_native_encapsulation(
            (DDS_TypeCode *)plugin.typeCode,
            representation);

        if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID)
        {
            return RTI_FALSE;
        }

        epd._maxSizeSerializedSample =
            BigData4KPlugin_get_serialized_sample_max_size(
                (PRESTypePluginEndpointData)&epd,
                RTI_TRUE,
                encapsulationId,
                0);

        if (buffer == NULL)
        {
            *length =
                PRESTypePlugin_interpretedGetSerializedSampleSize(
                    (PRESTypePluginEndpointData)&epd,
                    RTI_TRUE,
                    encapsulationId,
                    0,
                    sample);

            if (*length == 0)
            {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        RTICdrStream_init(&stream);
        RTICdrStream_set(&stream, (char *)buffer, *length);

        result = PRESTypePlugin_interpretedSerialize(
            (PRESTypePluginEndpointData)&epd,
            sample,
            &stream,
            RTI_TRUE,
            encapsulationId,
            RTI_TRUE,
            NULL);
        std::chrono::microseconds serialize_time = std::chrono::duration_cast<std::chrono::microseconds>(std::chrono::system_clock::now().time_since_epoch());
        std::cout << "[序列化次数->" << ++serialize_count
                  << "[序列化时间->" << serialize_time.count()
                  << std::endl;

        *length = RTICdrStream_getCurrentPositionOffset(&stream);
        return result;
    }
    catch (...)
    {
        return RTI_FALSE;
    }
}

RTIBool
BigData4KPlugin_deserialize_from_cdr_buffer(
    BigData4K *sample,
    const char *buffer,
    unsigned int length)
{
    struct RTICdrStream stream;
    struct PRESTypePluginDefaultParticipantData pd;
    struct RTIXCdrTypePluginProgramContext defaultProgramContext =
        RTIXCdrTypePluginProgramContext_INTIALIZER;
    struct PRESTypePlugin plugin;
    struct PRESTypePluginDefaultEndpointData epd;

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, length);

    epd.programContext = defaultProgramContext;
    epd._participantData = &pd;
    epd.typePlugin = &plugin;
    epd.programContext.endpointPluginData = &epd;
    plugin.typeCode = (struct RTICdrTypeCode *)(struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type<BigData4K>::get().native();
    pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
        BigData4K,
        true, true, true>();

    epd._assignabilityProperty.acceptUnknownEnumValue = RTI_XCDR_TRUE;
    epd._assignabilityProperty.acceptUnknownUnionDiscriminator = RTI_XCDR_TRUE;

    ::rti::topic::reset_sample(*sample);
    return PRESTypePlugin_interpretedDeserialize(
        (PRESTypePluginEndpointData)&epd,
        sample,
        &stream,
        RTI_TRUE,
        RTI_TRUE,
        NULL);
}

unsigned int
BigData4KPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    try
    {
        unsigned int size;
        RTIBool overflow = RTI_FALSE;

        size = PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
            endpoint_data, &overflow, include_encapsulation, encapsulation_id, current_alignment);

        if (overflow)
        {
            size = RTI_CDR_MAX_SERIALIZED_SIZE;
        }

        return size;
    }
    catch (...)
    {
        return 0;
    }
}

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

PRESTypePluginKeyKind
BigData4KPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

RTIBool BigData4KPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    BigData4K **sample,
    RTIBool *drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    try
    {
        RTIBool result;
        if (drop_sample)
        {
        } /* To avoid warnings */
        stream->_xTypesState.unassignable = RTI_FALSE;
        result = PRESTypePlugin_interpretedDeserializeKey(
            endpoint_data, (sample != NULL) ? *sample : NULL, stream,
            deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
        if (result)
        {
            if (stream->_xTypesState.unassignable)
            {
                result = RTI_FALSE;
            }
        }
        return result;
    }
    catch (...)
    {
        return RTI_FALSE;
    }
}

unsigned int
BigData4KPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    try
    {
        unsigned int size;
        RTIBool overflow = RTI_FALSE;

        size = PRESTypePlugin_interpretedGetSerializedKeyMaxSize(
            endpoint_data, &overflow, include_encapsulation, encapsulation_id, current_alignment);
        if (overflow)
        {
            size = RTI_CDR_MAX_SERIALIZED_SIZE;
        }

        return size;
    }
    catch (...)
    {
        return RTI_FALSE;
    }
}

unsigned int
BigData4KPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = PRESTypePlugin_interpretedGetSerializedKeyMaxSizeForKeyhash(
        endpoint_data,
        &overflow,
        encapsulation_id,
        current_alignment);
    if (overflow)
    {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

/* ------------------------------------------------------------------------
 * Plug-in Installation Methods
 * ------------------------------------------------------------------------ */
struct PRESTypePlugin *BigData4KPlugin_new(void)
{
    struct PRESTypePlugin *plugin = NULL;
    const struct PRESTypePluginVersion PLUGIN_VERSION =
        PRES_TYPE_PLUGIN_VERSION_2_0;

    RTIOsapiHeap_allocateStructure(
        &plugin, struct PRESTypePlugin);
    if (plugin == NULL)
    {
        return NULL;
    }

    plugin->version = PLUGIN_VERSION;

    /* set up parent's function pointers */
    plugin->onParticipantAttached =
        (PRESTypePluginOnParticipantAttachedCallback)
            BigData4KPlugin_on_participant_attached;
    plugin->onParticipantDetached =
        (PRESTypePluginOnParticipantDetachedCallback)
            BigData4KPlugin_on_participant_detached;
    plugin->onEndpointAttached =
        (PRESTypePluginOnEndpointAttachedCallback)
            BigData4KPlugin_on_endpoint_attached;
    plugin->onEndpointDetached =
        (PRESTypePluginOnEndpointDetachedCallback)
            BigData4KPlugin_on_endpoint_detached;

    plugin->copySampleFnc =
        (PRESTypePluginCopySampleFunction)
            BigData4KPlugin_copy_sample;
    plugin->createSampleFnc =
        (PRESTypePluginCreateSampleFunction)
            BigData4KPlugin_create_sample;
    plugin->destroySampleFnc =
        (PRESTypePluginDestroySampleFunction)
            BigData4KPlugin_destroy_sample;

    plugin->serializeFnc =
        (PRESTypePluginSerializeFunction)PRESTypePlugin_interpretedSerialize;
    plugin->deserializeFnc =
        (PRESTypePluginDeserializeFunction)PRESTypePlugin_interpretedDeserializeWithAlloc;
    plugin->getSerializedSampleMaxSizeFnc =
        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            BigData4KPlugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
        (PRESTypePluginGetSerializedSampleMinSizeFunction)
            PRESTypePlugin_interpretedGetSerializedSampleMinSize;
    plugin->getDeserializedSampleMaxSizeFnc = NULL;
    plugin->getSampleFnc =
        (PRESTypePluginGetSampleFunction)
            BigData4KPlugin_get_sample;
    plugin->returnSampleFnc =
        (PRESTypePluginReturnSampleFunction)
            BigData4KPlugin_return_sample;
    plugin->getKeyKindFnc =
        (PRESTypePluginGetKeyKindFunction)
            BigData4KPlugin_get_key_kind;

    /* These functions are only used for keyed types. As this is not a keyed
    type they are all set to NULL
    */
    plugin->serializeKeyFnc = NULL;
    plugin->deserializeKeyFnc = NULL;
    plugin->getKeyFnc = NULL;
    plugin->returnKeyFnc = NULL;
    plugin->instanceToKeyFnc = NULL;
    plugin->keyToInstanceFnc = NULL;
    plugin->getSerializedKeyMaxSizeFnc = NULL;
    plugin->instanceToKeyHashFnc = NULL;
    plugin->serializedSampleToKeyHashFnc = NULL;
    plugin->serializedKeyToKeyHashFnc = NULL;
#ifdef NDDS_STANDALONE_TYPE
    plugin->typeCode = NULL;
#else
    plugin->typeCode = (struct RTICdrTypeCode *)&::rti::topic::dynamic_type<BigData4K>::get().native();
#endif
    plugin->languageKind = PRES_TYPEPLUGIN_CPPSTL_LANG;

    /* Serialized buffer */
    plugin->getBuffer =
        (PRESTypePluginGetBufferFunction)
            BigData4KPlugin_get_buffer;
    plugin->returnBuffer =
        (PRESTypePluginReturnBufferFunction)
            BigData4KPlugin_return_buffer;
    plugin->getBufferWithParams = NULL;
    plugin->returnBufferWithParams = NULL;
    plugin->getSerializedSampleSizeFnc =
        (PRESTypePluginGetSerializedSampleSizeFunction)
            PRESTypePlugin_interpretedGetSerializedSampleSize;

    plugin->getWriterLoanedSampleFnc = NULL;
    plugin->returnWriterLoanedSampleFnc = NULL;
    plugin->returnWriterLoanedSampleFromCookieFnc = NULL;
    plugin->validateWriterLoanedSampleFnc = NULL;
    plugin->setWriterLoanedSampleSerializedStateFnc = NULL;

    static const char *TYPE_NAME = "BigData4K";
    plugin->endpointTypeName = TYPE_NAME;
    plugin->isMetpType = RTI_FALSE;
    return plugin;
}

void BigData4KPlugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
}

/* ----------------------------------------------------------------------------
 *  Type BigData16K
 * -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

BigData16K *
BigData16KPluginSupport_create_data(void)
{
    try
    {
        BigData16K *sample = new BigData16K();
        ::rti::topic::allocate_sample(*sample);
        return sample;
    }
    catch (...)
    {
        return NULL;
    }
}

void BigData16KPluginSupport_destroy_data(
    BigData16K *sample)
{
    delete sample;
}

RTIBool
BigData16KPluginSupport_copy_data(
    BigData16K *dst,
    const BigData16K *src)
{
    try
    {
        *dst = *src;
    }
    catch (...)
    {
        return RTI_FALSE;
    }

    return RTI_TRUE;
}

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

PRESTypePluginParticipantData
BigData16KPlugin_on_participant_attached(
    void *registration_data,
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration,
    void *container_plugin_context,
    RTICdrTypeCode *type_code)
{
    struct RTIXCdrInterpreterPrograms *programs = NULL;
    struct PRESTypePluginDefaultParticipantData *pd = NULL;
    struct RTIXCdrInterpreterProgramsGenProperty programProperty =
        RTIXCdrInterpreterProgramsGenProperty_INITIALIZER;
    if (registration_data)
    {
    } /* To avoid warnings */
    if (participant_info)
    {
    } /* To avoid warnings */
    if (top_level_registration)
    {
    } /* To avoid warnings */
    if (container_plugin_context)
    {
    } /* To avoid warnings */
    if (type_code)
    {
    } /* To avoid warnings */
    pd = (struct PRESTypePluginDefaultParticipantData *)
        PRESTypePluginDefaultParticipantData_new(participant_info);

    programProperty.generateV1Encapsulation = RTI_XCDR_TRUE;
    programProperty.generateV2Encapsulation = RTI_XCDR_TRUE;
    programProperty.resolveAlias = RTI_XCDR_TRUE;
    programProperty.inlineStruct = RTI_XCDR_TRUE;
    programProperty.optimizeEnum = RTI_XCDR_TRUE;

    programProperty.externalReferenceSize =
        (RTIXCdrUnsignedShort)sizeof(::dds::core::external<char>);
    programProperty.getExternalRefPointerFcn =
        ::rti::topic::interpreter::get_external_value_pointer;

    programs = DDS_TypeCodeFactory_assert_programs_in_global_list(
        DDS_TypeCodeFactory_get_instance(),
        (DDS_TypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type<BigData16K>::get().native(),
        &programProperty,
        RTI_XCDR_PROGRAM_MASK_TYPEPLUGIN);

    if (programs == NULL)
    {
        PRESTypePluginDefaultParticipantData_delete(
            (PRESTypePluginParticipantData)pd);
        return NULL;
    }

    pd->programs = programs;
    return (PRESTypePluginParticipantData)pd;
}

void BigData16KPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data)
{
    if (participant_data != NULL)
    {
        struct PRESTypePluginDefaultParticipantData *pd =
            (struct PRESTypePluginDefaultParticipantData *)participant_data;

        if (pd->programs != NULL)
        {
            DDS_TypeCodeFactory_remove_programs_from_global_list(
                DDS_TypeCodeFactory_get_instance(),
                pd->programs);
            pd->programs = NULL;
        }
        PRESTypePluginDefaultParticipantData_delete(participant_data);
    }
}

PRESTypePluginEndpointData
BigData16KPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration,
    void *containerPluginContext)
{
    try
    {
        PRESTypePluginEndpointData epd = NULL;
        unsigned int serializedSampleMaxSize = 0;

        if (top_level_registration)
        {
        } /* To avoid warnings */
        if (containerPluginContext)
        {
        } /* To avoid warnings */

        if (participant_data == NULL)
        {
            return NULL;
        }

        epd = PRESTypePluginDefaultEndpointData_new(
            participant_data,
            endpoint_info,
            (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
                BigData16KPluginSupport_create_data,
            (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                BigData16KPluginSupport_destroy_data,
            NULL, NULL);

        if (epd == NULL)
        {
            return NULL;
        }

        if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER)
        {
            serializedSampleMaxSize = BigData16KPlugin_get_serialized_sample_max_size(
                epd, RTI_FALSE, RTI_CDR_ENCAPSULATION_ID_CDR_BE, 0);
            PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

            if (PRESTypePluginDefaultEndpointData_createWriterPool(
                    epd,
                    endpoint_info,
                    (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                        BigData16KPlugin_get_serialized_sample_max_size,
                    epd,
                    (PRESTypePluginGetSerializedSampleSizeFunction)
                        PRESTypePlugin_interpretedGetSerializedSampleSize,
                    epd) == RTI_FALSE)
            {
                PRESTypePluginDefaultEndpointData_delete(epd);
                return NULL;
            }
        }

        return epd;
    }
    catch (...)
    {
        return NULL;
    }
}

void BigData16KPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{
    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}

void BigData16KPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    BigData16K *sample,
    void *handle)
{
    try
    {
        ::rti::topic::reset_sample(*sample);
    }
    catch (const std::exception &ex)
    {
        RTICdrLog_logWithFunctionName(
            RTI_LOG_BIT_EXCEPTION,
            "BigData16KPlugin_return_sample",
            &RTI_LOG_ANY_FAILURE_ss,
            "exception: ",
            ex.what());
    }

    PRESTypePluginDefaultEndpointData_returnSample(
        endpoint_data, sample, handle);
}

RTIBool
BigData16KPlugin_copy_sample(
    PRESTypePluginEndpointData,
    BigData16K *dst,
    const BigData16K *src)
{
    return BigData16KPluginSupport_copy_data(dst, src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int
BigData16KPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

RTIBool
BigData16KPlugin_serialize_to_cdr_buffer(
    char *buffer,
    unsigned int *length,
    const BigData16K *sample,
    ::dds::core::policy::DataRepresentationId representation)
{
    using namespace ::dds::core::policy;

    try
    {
        RTIEncapsulationId encapsulationId = RTI_CDR_ENCAPSULATION_ID_INVALID;
        struct RTICdrStream stream;
        struct PRESTypePluginDefaultEndpointData epd;
        RTIBool result;
        struct PRESTypePluginDefaultParticipantData pd;
        struct RTIXCdrTypePluginProgramContext defaultProgramContext =
            RTIXCdrTypePluginProgramContext_INTIALIZER;
        struct PRESTypePlugin plugin = PRES_TYPEPLUGIN_DEFAULT;

        if (length == NULL)
        {
            return RTI_FALSE;
        }

        RTIOsapiMemory_zero(&epd, sizeof(struct PRESTypePluginDefaultEndpointData));
        epd.programContext = defaultProgramContext;
        epd._participantData = &pd;
        epd.typePlugin = &plugin;
        epd.programContext.endpointPluginData = &epd;
        plugin.typeCode = (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type<BigData16K>::get().native();
        pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
            BigData16K,
            true, true, true>();

        encapsulationId = DDS_TypeCode_get_native_encapsulation(
            (DDS_TypeCode *)plugin.typeCode,
            representation);

        if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID)
        {
            return RTI_FALSE;
        }

        epd._maxSizeSerializedSample =
            BigData16KPlugin_get_serialized_sample_max_size(
                (PRESTypePluginEndpointData)&epd,
                RTI_TRUE,
                encapsulationId,
                0);

        if (buffer == NULL)
        {
            *length =
                PRESTypePlugin_interpretedGetSerializedSampleSize(
                    (PRESTypePluginEndpointData)&epd,
                    RTI_TRUE,
                    encapsulationId,
                    0,
                    sample);

            if (*length == 0)
            {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        RTICdrStream_init(&stream);
        RTICdrStream_set(&stream, (char *)buffer, *length);

        result = PRESTypePlugin_interpretedSerialize(
            (PRESTypePluginEndpointData)&epd,
            sample,
            &stream,
            RTI_TRUE,
            encapsulationId,
            RTI_TRUE,
            NULL);

        *length = RTICdrStream_getCurrentPositionOffset(&stream);
        return result;
    }
    catch (...)
    {
        return RTI_FALSE;
    }
}

RTIBool
BigData16KPlugin_deserialize_from_cdr_buffer(
    BigData16K *sample,
    const char *buffer,
    unsigned int length)
{
    struct RTICdrStream stream;
    struct PRESTypePluginDefaultParticipantData pd;
    struct RTIXCdrTypePluginProgramContext defaultProgramContext =
        RTIXCdrTypePluginProgramContext_INTIALIZER;
    struct PRESTypePlugin plugin;
    struct PRESTypePluginDefaultEndpointData epd;

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, length);

    epd.programContext = defaultProgramContext;
    epd._participantData = &pd;
    epd.typePlugin = &plugin;
    epd.programContext.endpointPluginData = &epd;
    plugin.typeCode = (struct RTICdrTypeCode *)(struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type<BigData16K>::get().native();
    pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
        BigData16K,
        true, true, true>();

    epd._assignabilityProperty.acceptUnknownEnumValue = RTI_XCDR_TRUE;
    epd._assignabilityProperty.acceptUnknownUnionDiscriminator = RTI_XCDR_TRUE;

    ::rti::topic::reset_sample(*sample);
    return PRESTypePlugin_interpretedDeserialize(
        (PRESTypePluginEndpointData)&epd,
        sample,
        &stream,
        RTI_TRUE,
        RTI_TRUE,
        NULL);
}

unsigned int
BigData16KPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    try
    {
        unsigned int size;
        RTIBool overflow = RTI_FALSE;

        size = PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
            endpoint_data, &overflow, include_encapsulation, encapsulation_id, current_alignment);

        if (overflow)
        {
            size = RTI_CDR_MAX_SERIALIZED_SIZE;
        }

        return size;
    }
    catch (...)
    {
        return 0;
    }
}

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

PRESTypePluginKeyKind
BigData16KPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

RTIBool BigData16KPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    BigData16K **sample,
    RTIBool *drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    try
    {
        RTIBool result;
        if (drop_sample)
        {
        } /* To avoid warnings */
        stream->_xTypesState.unassignable = RTI_FALSE;
        result = PRESTypePlugin_interpretedDeserializeKey(
            endpoint_data, (sample != NULL) ? *sample : NULL, stream,
            deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
        if (result)
        {
            if (stream->_xTypesState.unassignable)
            {
                result = RTI_FALSE;
            }
        }
        return result;
    }
    catch (...)
    {
        return RTI_FALSE;
    }
}

unsigned int
BigData16KPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    try
    {
        unsigned int size;
        RTIBool overflow = RTI_FALSE;

        size = PRESTypePlugin_interpretedGetSerializedKeyMaxSize(
            endpoint_data, &overflow, include_encapsulation, encapsulation_id, current_alignment);
        if (overflow)
        {
            size = RTI_CDR_MAX_SERIALIZED_SIZE;
        }

        return size;
    }
    catch (...)
    {
        return RTI_FALSE;
    }
}

unsigned int
BigData16KPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = PRESTypePlugin_interpretedGetSerializedKeyMaxSizeForKeyhash(
        endpoint_data,
        &overflow,
        encapsulation_id,
        current_alignment);
    if (overflow)
    {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

/* ------------------------------------------------------------------------
 * Plug-in Installation Methods
 * ------------------------------------------------------------------------ */
struct PRESTypePlugin *BigData16KPlugin_new(void)
{
    struct PRESTypePlugin *plugin = NULL;
    const struct PRESTypePluginVersion PLUGIN_VERSION =
        PRES_TYPE_PLUGIN_VERSION_2_0;

    RTIOsapiHeap_allocateStructure(
        &plugin, struct PRESTypePlugin);
    if (plugin == NULL)
    {
        return NULL;
    }

    plugin->version = PLUGIN_VERSION;

    /* set up parent's function pointers */
    plugin->onParticipantAttached =
        (PRESTypePluginOnParticipantAttachedCallback)
            BigData16KPlugin_on_participant_attached;
    plugin->onParticipantDetached =
        (PRESTypePluginOnParticipantDetachedCallback)
            BigData16KPlugin_on_participant_detached;
    plugin->onEndpointAttached =
        (PRESTypePluginOnEndpointAttachedCallback)
            BigData16KPlugin_on_endpoint_attached;
    plugin->onEndpointDetached =
        (PRESTypePluginOnEndpointDetachedCallback)
            BigData16KPlugin_on_endpoint_detached;

    plugin->copySampleFnc =
        (PRESTypePluginCopySampleFunction)
            BigData16KPlugin_copy_sample;
    plugin->createSampleFnc =
        (PRESTypePluginCreateSampleFunction)
            BigData16KPlugin_create_sample;
    plugin->destroySampleFnc =
        (PRESTypePluginDestroySampleFunction)
            BigData16KPlugin_destroy_sample;

    plugin->serializeFnc =
        (PRESTypePluginSerializeFunction)PRESTypePlugin_interpretedSerialize;
    plugin->deserializeFnc =
        (PRESTypePluginDeserializeFunction)PRESTypePlugin_interpretedDeserializeWithAlloc;
    plugin->getSerializedSampleMaxSizeFnc =
        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            BigData16KPlugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
        (PRESTypePluginGetSerializedSampleMinSizeFunction)
            PRESTypePlugin_interpretedGetSerializedSampleMinSize;
    plugin->getDeserializedSampleMaxSizeFnc = NULL;
    plugin->getSampleFnc =
        (PRESTypePluginGetSampleFunction)
            BigData16KPlugin_get_sample;
    plugin->returnSampleFnc =
        (PRESTypePluginReturnSampleFunction)
            BigData16KPlugin_return_sample;
    plugin->getKeyKindFnc =
        (PRESTypePluginGetKeyKindFunction)
            BigData16KPlugin_get_key_kind;

    /* These functions are only used for keyed types. As this is not a keyed
    type they are all set to NULL
    */
    plugin->serializeKeyFnc = NULL;
    plugin->deserializeKeyFnc = NULL;
    plugin->getKeyFnc = NULL;
    plugin->returnKeyFnc = NULL;
    plugin->instanceToKeyFnc = NULL;
    plugin->keyToInstanceFnc = NULL;
    plugin->getSerializedKeyMaxSizeFnc = NULL;
    plugin->instanceToKeyHashFnc = NULL;
    plugin->serializedSampleToKeyHashFnc = NULL;
    plugin->serializedKeyToKeyHashFnc = NULL;
#ifdef NDDS_STANDALONE_TYPE
    plugin->typeCode = NULL;
#else
    plugin->typeCode = (struct RTICdrTypeCode *)&::rti::topic::dynamic_type<BigData16K>::get().native();
#endif
    plugin->languageKind = PRES_TYPEPLUGIN_CPPSTL_LANG;

    /* Serialized buffer */
    plugin->getBuffer =
        (PRESTypePluginGetBufferFunction)
            BigData16KPlugin_get_buffer;
    plugin->returnBuffer =
        (PRESTypePluginReturnBufferFunction)
            BigData16KPlugin_return_buffer;
    plugin->getBufferWithParams = NULL;
    plugin->returnBufferWithParams = NULL;
    plugin->getSerializedSampleSizeFnc =
        (PRESTypePluginGetSerializedSampleSizeFunction)
            PRESTypePlugin_interpretedGetSerializedSampleSize;

    plugin->getWriterLoanedSampleFnc = NULL;
    plugin->returnWriterLoanedSampleFnc = NULL;
    plugin->returnWriterLoanedSampleFromCookieFnc = NULL;
    plugin->validateWriterLoanedSampleFnc = NULL;
    plugin->setWriterLoanedSampleSerializedStateFnc = NULL;

    static const char *TYPE_NAME = "BigData16K";
    plugin->endpointTypeName = TYPE_NAME;
    plugin->isMetpType = RTI_FALSE;
    return plugin;
}

void BigData16KPlugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
}

/* ----------------------------------------------------------------------------
 *  Type BigData32K
 * -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

BigData32K *
BigData32KPluginSupport_create_data(void)
{
    try
    {
        BigData32K *sample = new BigData32K();
        ::rti::topic::allocate_sample(*sample);
        return sample;
    }
    catch (...)
    {
        return NULL;
    }
}

void BigData32KPluginSupport_destroy_data(
    BigData32K *sample)
{
    delete sample;
}

RTIBool
BigData32KPluginSupport_copy_data(
    BigData32K *dst,
    const BigData32K *src)
{
    try
    {
        *dst = *src;
    }
    catch (...)
    {
        return RTI_FALSE;
    }

    return RTI_TRUE;
}

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

PRESTypePluginParticipantData
BigData32KPlugin_on_participant_attached(
    void *registration_data,
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration,
    void *container_plugin_context,
    RTICdrTypeCode *type_code)
{
    struct RTIXCdrInterpreterPrograms *programs = NULL;
    struct PRESTypePluginDefaultParticipantData *pd = NULL;
    struct RTIXCdrInterpreterProgramsGenProperty programProperty =
        RTIXCdrInterpreterProgramsGenProperty_INITIALIZER;
    if (registration_data)
    {
    } /* To avoid warnings */
    if (participant_info)
    {
    } /* To avoid warnings */
    if (top_level_registration)
    {
    } /* To avoid warnings */
    if (container_plugin_context)
    {
    } /* To avoid warnings */
    if (type_code)
    {
    } /* To avoid warnings */
    pd = (struct PRESTypePluginDefaultParticipantData *)
        PRESTypePluginDefaultParticipantData_new(participant_info);

    programProperty.generateV1Encapsulation = RTI_XCDR_TRUE;
    programProperty.generateV2Encapsulation = RTI_XCDR_TRUE;
    programProperty.resolveAlias = RTI_XCDR_TRUE;
    programProperty.inlineStruct = RTI_XCDR_TRUE;
    programProperty.optimizeEnum = RTI_XCDR_TRUE;

    programProperty.externalReferenceSize =
        (RTIXCdrUnsignedShort)sizeof(::dds::core::external<char>);
    programProperty.getExternalRefPointerFcn =
        ::rti::topic::interpreter::get_external_value_pointer;

    programs = DDS_TypeCodeFactory_assert_programs_in_global_list(
        DDS_TypeCodeFactory_get_instance(),
        (DDS_TypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type<BigData32K>::get().native(),
        &programProperty,
        RTI_XCDR_PROGRAM_MASK_TYPEPLUGIN);

    if (programs == NULL)
    {
        PRESTypePluginDefaultParticipantData_delete(
            (PRESTypePluginParticipantData)pd);
        return NULL;
    }

    pd->programs = programs;
    return (PRESTypePluginParticipantData)pd;
}

void BigData32KPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data)
{
    if (participant_data != NULL)
    {
        struct PRESTypePluginDefaultParticipantData *pd =
            (struct PRESTypePluginDefaultParticipantData *)participant_data;

        if (pd->programs != NULL)
        {
            DDS_TypeCodeFactory_remove_programs_from_global_list(
                DDS_TypeCodeFactory_get_instance(),
                pd->programs);
            pd->programs = NULL;
        }
        PRESTypePluginDefaultParticipantData_delete(participant_data);
    }
}

PRESTypePluginEndpointData
BigData32KPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration,
    void *containerPluginContext)
{
    try
    {
        PRESTypePluginEndpointData epd = NULL;
        unsigned int serializedSampleMaxSize = 0;

        if (top_level_registration)
        {
        } /* To avoid warnings */
        if (containerPluginContext)
        {
        } /* To avoid warnings */

        if (participant_data == NULL)
        {
            return NULL;
        }

        epd = PRESTypePluginDefaultEndpointData_new(
            participant_data,
            endpoint_info,
            (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
                BigData32KPluginSupport_create_data,
            (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                BigData32KPluginSupport_destroy_data,
            NULL, NULL);

        if (epd == NULL)
        {
            return NULL;
        }

        if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER)
        {
            serializedSampleMaxSize = BigData32KPlugin_get_serialized_sample_max_size(
                epd, RTI_FALSE, RTI_CDR_ENCAPSULATION_ID_CDR_BE, 0);
            PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

            if (PRESTypePluginDefaultEndpointData_createWriterPool(
                    epd,
                    endpoint_info,
                    (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                        BigData32KPlugin_get_serialized_sample_max_size,
                    epd,
                    (PRESTypePluginGetSerializedSampleSizeFunction)
                        PRESTypePlugin_interpretedGetSerializedSampleSize,
                    epd) == RTI_FALSE)
            {
                PRESTypePluginDefaultEndpointData_delete(epd);
                return NULL;
            }
        }

        return epd;
    }
    catch (...)
    {
        return NULL;
    }
}

void BigData32KPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{
    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}

void BigData32KPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    BigData32K *sample,
    void *handle)
{
    try
    {
        ::rti::topic::reset_sample(*sample);
    }
    catch (const std::exception &ex)
    {
        RTICdrLog_logWithFunctionName(
            RTI_LOG_BIT_EXCEPTION,
            "BigData32KPlugin_return_sample",
            &RTI_LOG_ANY_FAILURE_ss,
            "exception: ",
            ex.what());
    }

    PRESTypePluginDefaultEndpointData_returnSample(
        endpoint_data, sample, handle);
}

RTIBool
BigData32KPlugin_copy_sample(
    PRESTypePluginEndpointData,
    BigData32K *dst,
    const BigData32K *src)
{
    return BigData32KPluginSupport_copy_data(dst, src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int
BigData32KPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

RTIBool
BigData32KPlugin_serialize_to_cdr_buffer(
    char *buffer,
    unsigned int *length,
    const BigData32K *sample,
    ::dds::core::policy::DataRepresentationId representation)
{
    using namespace ::dds::core::policy;

    try
    {
        RTIEncapsulationId encapsulationId = RTI_CDR_ENCAPSULATION_ID_INVALID;
        struct RTICdrStream stream;
        struct PRESTypePluginDefaultEndpointData epd;
        RTIBool result;
        struct PRESTypePluginDefaultParticipantData pd;
        struct RTIXCdrTypePluginProgramContext defaultProgramContext =
            RTIXCdrTypePluginProgramContext_INTIALIZER;
        struct PRESTypePlugin plugin = PRES_TYPEPLUGIN_DEFAULT;

        if (length == NULL)
        {
            return RTI_FALSE;
        }

        RTIOsapiMemory_zero(&epd, sizeof(struct PRESTypePluginDefaultEndpointData));
        epd.programContext = defaultProgramContext;
        epd._participantData = &pd;
        epd.typePlugin = &plugin;
        epd.programContext.endpointPluginData = &epd;
        plugin.typeCode = (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type<BigData32K>::get().native();
        pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
            BigData32K,
            true, true, true>();

        encapsulationId = DDS_TypeCode_get_native_encapsulation(
            (DDS_TypeCode *)plugin.typeCode,
            representation);

        if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID)
        {
            return RTI_FALSE;
        }

        epd._maxSizeSerializedSample =
            BigData32KPlugin_get_serialized_sample_max_size(
                (PRESTypePluginEndpointData)&epd,
                RTI_TRUE,
                encapsulationId,
                0);

        if (buffer == NULL)
        {
            *length =
                PRESTypePlugin_interpretedGetSerializedSampleSize(
                    (PRESTypePluginEndpointData)&epd,
                    RTI_TRUE,
                    encapsulationId,
                    0,
                    sample);

            if (*length == 0)
            {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        RTICdrStream_init(&stream);
        RTICdrStream_set(&stream, (char *)buffer, *length);

        result = PRESTypePlugin_interpretedSerialize(
            (PRESTypePluginEndpointData)&epd,
            sample,
            &stream,
            RTI_TRUE,
            encapsulationId,
            RTI_TRUE,
            NULL);

        *length = RTICdrStream_getCurrentPositionOffset(&stream);
        return result;
    }
    catch (...)
    {
        return RTI_FALSE;
    }
}

RTIBool
BigData32KPlugin_deserialize_from_cdr_buffer(
    BigData32K *sample,
    const char *buffer,
    unsigned int length)
{
    struct RTICdrStream stream;
    struct PRESTypePluginDefaultParticipantData pd;
    struct RTIXCdrTypePluginProgramContext defaultProgramContext =
        RTIXCdrTypePluginProgramContext_INTIALIZER;
    struct PRESTypePlugin plugin;
    struct PRESTypePluginDefaultEndpointData epd;

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, length);

    epd.programContext = defaultProgramContext;
    epd._participantData = &pd;
    epd.typePlugin = &plugin;
    epd.programContext.endpointPluginData = &epd;
    plugin.typeCode = (struct RTICdrTypeCode *)(struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type<BigData32K>::get().native();
    pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
        BigData32K,
        true, true, true>();

    epd._assignabilityProperty.acceptUnknownEnumValue = RTI_XCDR_TRUE;
    epd._assignabilityProperty.acceptUnknownUnionDiscriminator = RTI_XCDR_TRUE;

    ::rti::topic::reset_sample(*sample);
    return PRESTypePlugin_interpretedDeserialize(
        (PRESTypePluginEndpointData)&epd,
        sample,
        &stream,
        RTI_TRUE,
        RTI_TRUE,
        NULL);
}

unsigned int
BigData32KPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    try
    {
        unsigned int size;
        RTIBool overflow = RTI_FALSE;

        size = PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
            endpoint_data, &overflow, include_encapsulation, encapsulation_id, current_alignment);

        if (overflow)
        {
            size = RTI_CDR_MAX_SERIALIZED_SIZE;
        }

        return size;
    }
    catch (...)
    {
        return 0;
    }
}

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

PRESTypePluginKeyKind
BigData32KPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

RTIBool BigData32KPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    BigData32K **sample,
    RTIBool *drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    try
    {
        RTIBool result;
        if (drop_sample)
        {
        } /* To avoid warnings */
        stream->_xTypesState.unassignable = RTI_FALSE;
        result = PRESTypePlugin_interpretedDeserializeKey(
            endpoint_data, (sample != NULL) ? *sample : NULL, stream,
            deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
        if (result)
        {
            if (stream->_xTypesState.unassignable)
            {
                result = RTI_FALSE;
            }
        }
        return result;
    }
    catch (...)
    {
        return RTI_FALSE;
    }
}

unsigned int
BigData32KPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    try
    {
        unsigned int size;
        RTIBool overflow = RTI_FALSE;

        size = PRESTypePlugin_interpretedGetSerializedKeyMaxSize(
            endpoint_data, &overflow, include_encapsulation, encapsulation_id, current_alignment);
        if (overflow)
        {
            size = RTI_CDR_MAX_SERIALIZED_SIZE;
        }

        return size;
    }
    catch (...)
    {
        return RTI_FALSE;
    }
}

unsigned int
BigData32KPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = PRESTypePlugin_interpretedGetSerializedKeyMaxSizeForKeyhash(
        endpoint_data,
        &overflow,
        encapsulation_id,
        current_alignment);
    if (overflow)
    {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

/* ------------------------------------------------------------------------
 * Plug-in Installation Methods
 * ------------------------------------------------------------------------ */
struct PRESTypePlugin *BigData32KPlugin_new(void)
{
    struct PRESTypePlugin *plugin = NULL;
    const struct PRESTypePluginVersion PLUGIN_VERSION =
        PRES_TYPE_PLUGIN_VERSION_2_0;

    RTIOsapiHeap_allocateStructure(
        &plugin, struct PRESTypePlugin);
    if (plugin == NULL)
    {
        return NULL;
    }

    plugin->version = PLUGIN_VERSION;

    /* set up parent's function pointers */
    plugin->onParticipantAttached =
        (PRESTypePluginOnParticipantAttachedCallback)
            BigData32KPlugin_on_participant_attached;
    plugin->onParticipantDetached =
        (PRESTypePluginOnParticipantDetachedCallback)
            BigData32KPlugin_on_participant_detached;
    plugin->onEndpointAttached =
        (PRESTypePluginOnEndpointAttachedCallback)
            BigData32KPlugin_on_endpoint_attached;
    plugin->onEndpointDetached =
        (PRESTypePluginOnEndpointDetachedCallback)
            BigData32KPlugin_on_endpoint_detached;

    plugin->copySampleFnc =
        (PRESTypePluginCopySampleFunction)
            BigData32KPlugin_copy_sample;
    plugin->createSampleFnc =
        (PRESTypePluginCreateSampleFunction)
            BigData32KPlugin_create_sample;
    plugin->destroySampleFnc =
        (PRESTypePluginDestroySampleFunction)
            BigData32KPlugin_destroy_sample;

    plugin->serializeFnc =
        (PRESTypePluginSerializeFunction)PRESTypePlugin_interpretedSerialize;
    plugin->deserializeFnc =
        (PRESTypePluginDeserializeFunction)PRESTypePlugin_interpretedDeserializeWithAlloc;
    plugin->getSerializedSampleMaxSizeFnc =
        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            BigData32KPlugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
        (PRESTypePluginGetSerializedSampleMinSizeFunction)
            PRESTypePlugin_interpretedGetSerializedSampleMinSize;
    plugin->getDeserializedSampleMaxSizeFnc = NULL;
    plugin->getSampleFnc =
        (PRESTypePluginGetSampleFunction)
            BigData32KPlugin_get_sample;
    plugin->returnSampleFnc =
        (PRESTypePluginReturnSampleFunction)
            BigData32KPlugin_return_sample;
    plugin->getKeyKindFnc =
        (PRESTypePluginGetKeyKindFunction)
            BigData32KPlugin_get_key_kind;

    /* These functions are only used for keyed types. As this is not a keyed
    type they are all set to NULL
    */
    plugin->serializeKeyFnc = NULL;
    plugin->deserializeKeyFnc = NULL;
    plugin->getKeyFnc = NULL;
    plugin->returnKeyFnc = NULL;
    plugin->instanceToKeyFnc = NULL;
    plugin->keyToInstanceFnc = NULL;
    plugin->getSerializedKeyMaxSizeFnc = NULL;
    plugin->instanceToKeyHashFnc = NULL;
    plugin->serializedSampleToKeyHashFnc = NULL;
    plugin->serializedKeyToKeyHashFnc = NULL;
#ifdef NDDS_STANDALONE_TYPE
    plugin->typeCode = NULL;
#else
    plugin->typeCode = (struct RTICdrTypeCode *)&::rti::topic::dynamic_type<BigData32K>::get().native();
#endif
    plugin->languageKind = PRES_TYPEPLUGIN_CPPSTL_LANG;

    /* Serialized buffer */
    plugin->getBuffer =
        (PRESTypePluginGetBufferFunction)
            BigData32KPlugin_get_buffer;
    plugin->returnBuffer =
        (PRESTypePluginReturnBufferFunction)
            BigData32KPlugin_return_buffer;
    plugin->getBufferWithParams = NULL;
    plugin->returnBufferWithParams = NULL;
    plugin->getSerializedSampleSizeFnc =
        (PRESTypePluginGetSerializedSampleSizeFunction)
            PRESTypePlugin_interpretedGetSerializedSampleSize;

    plugin->getWriterLoanedSampleFnc = NULL;
    plugin->returnWriterLoanedSampleFnc = NULL;
    plugin->returnWriterLoanedSampleFromCookieFnc = NULL;
    plugin->validateWriterLoanedSampleFnc = NULL;
    plugin->setWriterLoanedSampleSerializedStateFnc = NULL;

    static const char *TYPE_NAME = "BigData32K";
    plugin->endpointTypeName = TYPE_NAME;
    plugin->isMetpType = RTI_FALSE;
    return plugin;
}

void BigData32KPlugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
}

/* ----------------------------------------------------------------------------
 *  Type BigData64K
 * -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

BigData64K *
BigData64KPluginSupport_create_data(void)
{
    try
    {
        BigData64K *sample = new BigData64K();
        ::rti::topic::allocate_sample(*sample);
        return sample;
    }
    catch (...)
    {
        return NULL;
    }
}

void BigData64KPluginSupport_destroy_data(
    BigData64K *sample)
{
    delete sample;
}

RTIBool
BigData64KPluginSupport_copy_data(
    BigData64K *dst,
    const BigData64K *src)
{
    try
    {
        *dst = *src;
    }
    catch (...)
    {
        return RTI_FALSE;
    }

    return RTI_TRUE;
}

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

PRESTypePluginParticipantData
BigData64KPlugin_on_participant_attached(
    void *registration_data,
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration,
    void *container_plugin_context,
    RTICdrTypeCode *type_code)
{
    struct RTIXCdrInterpreterPrograms *programs = NULL;
    struct PRESTypePluginDefaultParticipantData *pd = NULL;
    struct RTIXCdrInterpreterProgramsGenProperty programProperty =
        RTIXCdrInterpreterProgramsGenProperty_INITIALIZER;
    if (registration_data)
    {
    } /* To avoid warnings */
    if (participant_info)
    {
    } /* To avoid warnings */
    if (top_level_registration)
    {
    } /* To avoid warnings */
    if (container_plugin_context)
    {
    } /* To avoid warnings */
    if (type_code)
    {
    } /* To avoid warnings */
    pd = (struct PRESTypePluginDefaultParticipantData *)
        PRESTypePluginDefaultParticipantData_new(participant_info);

    programProperty.generateV1Encapsulation = RTI_XCDR_TRUE;
    programProperty.generateV2Encapsulation = RTI_XCDR_TRUE;
    programProperty.resolveAlias = RTI_XCDR_TRUE;
    programProperty.inlineStruct = RTI_XCDR_TRUE;
    programProperty.optimizeEnum = RTI_XCDR_TRUE;

    programProperty.externalReferenceSize =
        (RTIXCdrUnsignedShort)sizeof(::dds::core::external<char>);
    programProperty.getExternalRefPointerFcn =
        ::rti::topic::interpreter::get_external_value_pointer;

    programs = DDS_TypeCodeFactory_assert_programs_in_global_list(
        DDS_TypeCodeFactory_get_instance(),
        (DDS_TypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type<BigData64K>::get().native(),
        &programProperty,
        RTI_XCDR_PROGRAM_MASK_TYPEPLUGIN);

    if (programs == NULL)
    {
        PRESTypePluginDefaultParticipantData_delete(
            (PRESTypePluginParticipantData)pd);
        return NULL;
    }

    pd->programs = programs;
    return (PRESTypePluginParticipantData)pd;
}

void BigData64KPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data)
{
    if (participant_data != NULL)
    {
        struct PRESTypePluginDefaultParticipantData *pd =
            (struct PRESTypePluginDefaultParticipantData *)participant_data;

        if (pd->programs != NULL)
        {
            DDS_TypeCodeFactory_remove_programs_from_global_list(
                DDS_TypeCodeFactory_get_instance(),
                pd->programs);
            pd->programs = NULL;
        }
        PRESTypePluginDefaultParticipantData_delete(participant_data);
    }
}

PRESTypePluginEndpointData
BigData64KPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration,
    void *containerPluginContext)
{
    try
    {
        PRESTypePluginEndpointData epd = NULL;
        unsigned int serializedSampleMaxSize = 0;

        if (top_level_registration)
        {
        } /* To avoid warnings */
        if (containerPluginContext)
        {
        } /* To avoid warnings */

        if (participant_data == NULL)
        {
            return NULL;
        }

        epd = PRESTypePluginDefaultEndpointData_new(
            participant_data,
            endpoint_info,
            (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
                BigData64KPluginSupport_create_data,
            (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                BigData64KPluginSupport_destroy_data,
            NULL, NULL);

        if (epd == NULL)
        {
            return NULL;
        }

        if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER)
        {
            serializedSampleMaxSize = BigData64KPlugin_get_serialized_sample_max_size(
                epd, RTI_FALSE, RTI_CDR_ENCAPSULATION_ID_CDR_BE, 0);
            PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

            if (PRESTypePluginDefaultEndpointData_createWriterPool(
                    epd,
                    endpoint_info,
                    (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                        BigData64KPlugin_get_serialized_sample_max_size,
                    epd,
                    (PRESTypePluginGetSerializedSampleSizeFunction)
                        PRESTypePlugin_interpretedGetSerializedSampleSize,
                    epd) == RTI_FALSE)
            {
                PRESTypePluginDefaultEndpointData_delete(epd);
                return NULL;
            }
        }

        return epd;
    }
    catch (...)
    {
        return NULL;
    }
}

void BigData64KPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{
    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}

void BigData64KPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    BigData64K *sample,
    void *handle)
{
    try
    {
        ::rti::topic::reset_sample(*sample);
    }
    catch (const std::exception &ex)
    {
        RTICdrLog_logWithFunctionName(
            RTI_LOG_BIT_EXCEPTION,
            "BigData64KPlugin_return_sample",
            &RTI_LOG_ANY_FAILURE_ss,
            "exception: ",
            ex.what());
    }

    PRESTypePluginDefaultEndpointData_returnSample(
        endpoint_data, sample, handle);
}

RTIBool
BigData64KPlugin_copy_sample(
    PRESTypePluginEndpointData,
    BigData64K *dst,
    const BigData64K *src)
{
    return BigData64KPluginSupport_copy_data(dst, src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int
BigData64KPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

RTIBool
BigData64KPlugin_serialize_to_cdr_buffer(
    char *buffer,
    unsigned int *length,
    const BigData64K *sample,
    ::dds::core::policy::DataRepresentationId representation)
{
    using namespace ::dds::core::policy;

    try
    {
        RTIEncapsulationId encapsulationId = RTI_CDR_ENCAPSULATION_ID_INVALID;
        struct RTICdrStream stream;
        struct PRESTypePluginDefaultEndpointData epd;
        RTIBool result;
        struct PRESTypePluginDefaultParticipantData pd;
        struct RTIXCdrTypePluginProgramContext defaultProgramContext =
            RTIXCdrTypePluginProgramContext_INTIALIZER;
        struct PRESTypePlugin plugin = PRES_TYPEPLUGIN_DEFAULT;

        if (length == NULL)
        {
            return RTI_FALSE;
        }

        RTIOsapiMemory_zero(&epd, sizeof(struct PRESTypePluginDefaultEndpointData));
        epd.programContext = defaultProgramContext;
        epd._participantData = &pd;
        epd.typePlugin = &plugin;
        epd.programContext.endpointPluginData = &epd;
        plugin.typeCode = (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type<BigData64K>::get().native();
        pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
            BigData64K,
            true, true, true>();

        encapsulationId = DDS_TypeCode_get_native_encapsulation(
            (DDS_TypeCode *)plugin.typeCode,
            representation);

        if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID)
        {
            return RTI_FALSE;
        }

        epd._maxSizeSerializedSample =
            BigData64KPlugin_get_serialized_sample_max_size(
                (PRESTypePluginEndpointData)&epd,
                RTI_TRUE,
                encapsulationId,
                0);

        if (buffer == NULL)
        {
            *length =
                PRESTypePlugin_interpretedGetSerializedSampleSize(
                    (PRESTypePluginEndpointData)&epd,
                    RTI_TRUE,
                    encapsulationId,
                    0,
                    sample);

            if (*length == 0)
            {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        RTICdrStream_init(&stream);
        RTICdrStream_set(&stream, (char *)buffer, *length);

        result = PRESTypePlugin_interpretedSerialize(
            (PRESTypePluginEndpointData)&epd,
            sample,
            &stream,
            RTI_TRUE,
            encapsulationId,
            RTI_TRUE,
            NULL);

        *length = RTICdrStream_getCurrentPositionOffset(&stream);
        return result;
    }
    catch (...)
    {
        return RTI_FALSE;
    }
}

RTIBool
BigData64KPlugin_deserialize_from_cdr_buffer(
    BigData64K *sample,
    const char *buffer,
    unsigned int length)
{
    struct RTICdrStream stream;
    struct PRESTypePluginDefaultParticipantData pd;
    struct RTIXCdrTypePluginProgramContext defaultProgramContext =
        RTIXCdrTypePluginProgramContext_INTIALIZER;
    struct PRESTypePlugin plugin;
    struct PRESTypePluginDefaultEndpointData epd;

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, length);

    epd.programContext = defaultProgramContext;
    epd._participantData = &pd;
    epd.typePlugin = &plugin;
    epd.programContext.endpointPluginData = &epd;
    plugin.typeCode = (struct RTICdrTypeCode *)(struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type<BigData64K>::get().native();
    pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
        BigData64K,
        true, true, true>();

    epd._assignabilityProperty.acceptUnknownEnumValue = RTI_XCDR_TRUE;
    epd._assignabilityProperty.acceptUnknownUnionDiscriminator = RTI_XCDR_TRUE;

    ::rti::topic::reset_sample(*sample);
    return PRESTypePlugin_interpretedDeserialize(
        (PRESTypePluginEndpointData)&epd,
        sample,
        &stream,
        RTI_TRUE,
        RTI_TRUE,
        NULL);
}

unsigned int
BigData64KPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    try
    {
        unsigned int size;
        RTIBool overflow = RTI_FALSE;

        size = PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
            endpoint_data, &overflow, include_encapsulation, encapsulation_id, current_alignment);

        if (overflow)
        {
            size = RTI_CDR_MAX_SERIALIZED_SIZE;
        }

        return size;
    }
    catch (...)
    {
        return 0;
    }
}

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

PRESTypePluginKeyKind
BigData64KPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

RTIBool BigData64KPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    BigData64K **sample,
    RTIBool *drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    try
    {
        RTIBool result;
        if (drop_sample)
        {
        } /* To avoid warnings */
        stream->_xTypesState.unassignable = RTI_FALSE;
        result = PRESTypePlugin_interpretedDeserializeKey(
            endpoint_data, (sample != NULL) ? *sample : NULL, stream,
            deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
        if (result)
        {
            if (stream->_xTypesState.unassignable)
            {
                result = RTI_FALSE;
            }
        }
        return result;
    }
    catch (...)
    {
        return RTI_FALSE;
    }
}

unsigned int
BigData64KPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    try
    {
        unsigned int size;
        RTIBool overflow = RTI_FALSE;

        size = PRESTypePlugin_interpretedGetSerializedKeyMaxSize(
            endpoint_data, &overflow, include_encapsulation, encapsulation_id, current_alignment);
        if (overflow)
        {
            size = RTI_CDR_MAX_SERIALIZED_SIZE;
        }

        return size;
    }
    catch (...)
    {
        return RTI_FALSE;
    }
}

unsigned int
BigData64KPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = PRESTypePlugin_interpretedGetSerializedKeyMaxSizeForKeyhash(
        endpoint_data,
        &overflow,
        encapsulation_id,
        current_alignment);
    if (overflow)
    {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

/* ------------------------------------------------------------------------
 * Plug-in Installation Methods
 * ------------------------------------------------------------------------ */
struct PRESTypePlugin *BigData64KPlugin_new(void)
{
    struct PRESTypePlugin *plugin = NULL;
    const struct PRESTypePluginVersion PLUGIN_VERSION =
        PRES_TYPE_PLUGIN_VERSION_2_0;

    RTIOsapiHeap_allocateStructure(
        &plugin, struct PRESTypePlugin);
    if (plugin == NULL)
    {
        return NULL;
    }

    plugin->version = PLUGIN_VERSION;

    /* set up parent's function pointers */
    plugin->onParticipantAttached =
        (PRESTypePluginOnParticipantAttachedCallback)
            BigData64KPlugin_on_participant_attached;
    plugin->onParticipantDetached =
        (PRESTypePluginOnParticipantDetachedCallback)
            BigData64KPlugin_on_participant_detached;
    plugin->onEndpointAttached =
        (PRESTypePluginOnEndpointAttachedCallback)
            BigData64KPlugin_on_endpoint_attached;
    plugin->onEndpointDetached =
        (PRESTypePluginOnEndpointDetachedCallback)
            BigData64KPlugin_on_endpoint_detached;

    plugin->copySampleFnc =
        (PRESTypePluginCopySampleFunction)
            BigData64KPlugin_copy_sample;
    plugin->createSampleFnc =
        (PRESTypePluginCreateSampleFunction)
            BigData64KPlugin_create_sample;
    plugin->destroySampleFnc =
        (PRESTypePluginDestroySampleFunction)
            BigData64KPlugin_destroy_sample;

    plugin->serializeFnc =
        (PRESTypePluginSerializeFunction)PRESTypePlugin_interpretedSerialize;
    plugin->deserializeFnc =
        (PRESTypePluginDeserializeFunction)PRESTypePlugin_interpretedDeserializeWithAlloc;
    plugin->getSerializedSampleMaxSizeFnc =
        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            BigData64KPlugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
        (PRESTypePluginGetSerializedSampleMinSizeFunction)
            PRESTypePlugin_interpretedGetSerializedSampleMinSize;
    plugin->getDeserializedSampleMaxSizeFnc = NULL;
    plugin->getSampleFnc =
        (PRESTypePluginGetSampleFunction)
            BigData64KPlugin_get_sample;
    plugin->returnSampleFnc =
        (PRESTypePluginReturnSampleFunction)
            BigData64KPlugin_return_sample;
    plugin->getKeyKindFnc =
        (PRESTypePluginGetKeyKindFunction)
            BigData64KPlugin_get_key_kind;

    /* These functions are only used for keyed types. As this is not a keyed
    type they are all set to NULL
    */
    plugin->serializeKeyFnc = NULL;
    plugin->deserializeKeyFnc = NULL;
    plugin->getKeyFnc = NULL;
    plugin->returnKeyFnc = NULL;
    plugin->instanceToKeyFnc = NULL;
    plugin->keyToInstanceFnc = NULL;
    plugin->getSerializedKeyMaxSizeFnc = NULL;
    plugin->instanceToKeyHashFnc = NULL;
    plugin->serializedSampleToKeyHashFnc = NULL;
    plugin->serializedKeyToKeyHashFnc = NULL;
#ifdef NDDS_STANDALONE_TYPE
    plugin->typeCode = NULL;
#else
    plugin->typeCode = (struct RTICdrTypeCode *)&::rti::topic::dynamic_type<BigData64K>::get().native();
#endif
    plugin->languageKind = PRES_TYPEPLUGIN_CPPSTL_LANG;

    /* Serialized buffer */
    plugin->getBuffer =
        (PRESTypePluginGetBufferFunction)
            BigData64KPlugin_get_buffer;
    plugin->returnBuffer =
        (PRESTypePluginReturnBufferFunction)
            BigData64KPlugin_return_buffer;
    plugin->getBufferWithParams = NULL;
    plugin->returnBufferWithParams = NULL;
    plugin->getSerializedSampleSizeFnc =
        (PRESTypePluginGetSerializedSampleSizeFunction)
            PRESTypePlugin_interpretedGetSerializedSampleSize;

    plugin->getWriterLoanedSampleFnc = NULL;
    plugin->returnWriterLoanedSampleFnc = NULL;
    plugin->returnWriterLoanedSampleFromCookieFnc = NULL;
    plugin->validateWriterLoanedSampleFnc = NULL;
    plugin->setWriterLoanedSampleSerializedStateFnc = NULL;

    static const char *TYPE_NAME = "BigData64K";
    plugin->endpointTypeName = TYPE_NAME;
    plugin->isMetpType = RTI_FALSE;
    return plugin;
}

void BigData64KPlugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
}

/* ----------------------------------------------------------------------------
 *  Type BigData256K
 * -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

BigData256K *
BigData256KPluginSupport_create_data(void)
{
    try
    {
        BigData256K *sample = new BigData256K();
        ::rti::topic::allocate_sample(*sample);
        return sample;
    }
    catch (...)
    {
        return NULL;
    }
}

void BigData256KPluginSupport_destroy_data(
    BigData256K *sample)
{
    delete sample;
}

RTIBool
BigData256KPluginSupport_copy_data(
    BigData256K *dst,
    const BigData256K *src)
{
    try
    {
        *dst = *src;
    }
    catch (...)
    {
        return RTI_FALSE;
    }

    return RTI_TRUE;
}

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

PRESTypePluginParticipantData
BigData256KPlugin_on_participant_attached(
    void *registration_data,
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration,
    void *container_plugin_context,
    RTICdrTypeCode *type_code)
{
    struct RTIXCdrInterpreterPrograms *programs = NULL;
    struct PRESTypePluginDefaultParticipantData *pd = NULL;
    struct RTIXCdrInterpreterProgramsGenProperty programProperty =
        RTIXCdrInterpreterProgramsGenProperty_INITIALIZER;
    if (registration_data)
    {
    } /* To avoid warnings */
    if (participant_info)
    {
    } /* To avoid warnings */
    if (top_level_registration)
    {
    } /* To avoid warnings */
    if (container_plugin_context)
    {
    } /* To avoid warnings */
    if (type_code)
    {
    } /* To avoid warnings */
    pd = (struct PRESTypePluginDefaultParticipantData *)
        PRESTypePluginDefaultParticipantData_new(participant_info);

    programProperty.generateV1Encapsulation = RTI_XCDR_TRUE;
    programProperty.generateV2Encapsulation = RTI_XCDR_TRUE;
    programProperty.resolveAlias = RTI_XCDR_TRUE;
    programProperty.inlineStruct = RTI_XCDR_TRUE;
    programProperty.optimizeEnum = RTI_XCDR_TRUE;

    programProperty.externalReferenceSize =
        (RTIXCdrUnsignedShort)sizeof(::dds::core::external<char>);
    programProperty.getExternalRefPointerFcn =
        ::rti::topic::interpreter::get_external_value_pointer;

    programs = DDS_TypeCodeFactory_assert_programs_in_global_list(
        DDS_TypeCodeFactory_get_instance(),
        (DDS_TypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type<BigData256K>::get().native(),
        &programProperty,
        RTI_XCDR_PROGRAM_MASK_TYPEPLUGIN);

    if (programs == NULL)
    {
        PRESTypePluginDefaultParticipantData_delete(
            (PRESTypePluginParticipantData)pd);
        return NULL;
    }

    pd->programs = programs;
    return (PRESTypePluginParticipantData)pd;
}

void BigData256KPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data)
{
    if (participant_data != NULL)
    {
        struct PRESTypePluginDefaultParticipantData *pd =
            (struct PRESTypePluginDefaultParticipantData *)participant_data;

        if (pd->programs != NULL)
        {
            DDS_TypeCodeFactory_remove_programs_from_global_list(
                DDS_TypeCodeFactory_get_instance(),
                pd->programs);
            pd->programs = NULL;
        }
        PRESTypePluginDefaultParticipantData_delete(participant_data);
    }
}

PRESTypePluginEndpointData
BigData256KPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration,
    void *containerPluginContext)
{
    try
    {
        PRESTypePluginEndpointData epd = NULL;
        unsigned int serializedSampleMaxSize = 0;

        if (top_level_registration)
        {
        } /* To avoid warnings */
        if (containerPluginContext)
        {
        } /* To avoid warnings */

        if (participant_data == NULL)
        {
            return NULL;
        }

        epd = PRESTypePluginDefaultEndpointData_new(
            participant_data,
            endpoint_info,
            (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
                BigData256KPluginSupport_create_data,
            (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                BigData256KPluginSupport_destroy_data,
            NULL, NULL);

        if (epd == NULL)
        {
            return NULL;
        }

        if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER)
        {
            serializedSampleMaxSize = BigData256KPlugin_get_serialized_sample_max_size(
                epd, RTI_FALSE, RTI_CDR_ENCAPSULATION_ID_CDR_BE, 0);
            PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

            if (PRESTypePluginDefaultEndpointData_createWriterPool(
                    epd,
                    endpoint_info,
                    (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                        BigData256KPlugin_get_serialized_sample_max_size,
                    epd,
                    (PRESTypePluginGetSerializedSampleSizeFunction)
                        PRESTypePlugin_interpretedGetSerializedSampleSize,
                    epd) == RTI_FALSE)
            {
                PRESTypePluginDefaultEndpointData_delete(epd);
                return NULL;
            }
        }

        return epd;
    }
    catch (...)
    {
        return NULL;
    }
}

void BigData256KPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{
    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}

void BigData256KPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    BigData256K *sample,
    void *handle)
{
    try
    {
        ::rti::topic::reset_sample(*sample);
    }
    catch (const std::exception &ex)
    {
        RTICdrLog_logWithFunctionName(
            RTI_LOG_BIT_EXCEPTION,
            "BigData256KPlugin_return_sample",
            &RTI_LOG_ANY_FAILURE_ss,
            "exception: ",
            ex.what());
    }

    PRESTypePluginDefaultEndpointData_returnSample(
        endpoint_data, sample, handle);
}

RTIBool
BigData256KPlugin_copy_sample(
    PRESTypePluginEndpointData,
    BigData256K *dst,
    const BigData256K *src)
{
    return BigData256KPluginSupport_copy_data(dst, src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int
BigData256KPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

RTIBool
BigData256KPlugin_serialize_to_cdr_buffer(
    char *buffer,
    unsigned int *length,
    const BigData256K *sample,
    ::dds::core::policy::DataRepresentationId representation)
{
    using namespace ::dds::core::policy;

    try
    {
        RTIEncapsulationId encapsulationId = RTI_CDR_ENCAPSULATION_ID_INVALID;
        struct RTICdrStream stream;
        struct PRESTypePluginDefaultEndpointData epd;
        RTIBool result;
        struct PRESTypePluginDefaultParticipantData pd;
        struct RTIXCdrTypePluginProgramContext defaultProgramContext =
            RTIXCdrTypePluginProgramContext_INTIALIZER;
        struct PRESTypePlugin plugin = PRES_TYPEPLUGIN_DEFAULT;

        if (length == NULL)
        {
            return RTI_FALSE;
        }

        RTIOsapiMemory_zero(&epd, sizeof(struct PRESTypePluginDefaultEndpointData));
        epd.programContext = defaultProgramContext;
        epd._participantData = &pd;
        epd.typePlugin = &plugin;
        epd.programContext.endpointPluginData = &epd;
        plugin.typeCode = (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type<BigData256K>::get().native();
        pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
            BigData256K,
            true, true, true>();

        encapsulationId = DDS_TypeCode_get_native_encapsulation(
            (DDS_TypeCode *)plugin.typeCode,
            representation);

        if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID)
        {
            return RTI_FALSE;
        }

        epd._maxSizeSerializedSample =
            BigData256KPlugin_get_serialized_sample_max_size(
                (PRESTypePluginEndpointData)&epd,
                RTI_TRUE,
                encapsulationId,
                0);

        if (buffer == NULL)
        {
            *length =
                PRESTypePlugin_interpretedGetSerializedSampleSize(
                    (PRESTypePluginEndpointData)&epd,
                    RTI_TRUE,
                    encapsulationId,
                    0,
                    sample);

            if (*length == 0)
            {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        RTICdrStream_init(&stream);
        RTICdrStream_set(&stream, (char *)buffer, *length);

        result = PRESTypePlugin_interpretedSerialize(
            (PRESTypePluginEndpointData)&epd,
            sample,
            &stream,
            RTI_TRUE,
            encapsulationId,
            RTI_TRUE,
            NULL);

        *length = RTICdrStream_getCurrentPositionOffset(&stream);
        return result;
    }
    catch (...)
    {
        return RTI_FALSE;
    }
}

RTIBool
BigData256KPlugin_deserialize_from_cdr_buffer(
    BigData256K *sample,
    const char *buffer,
    unsigned int length)
{
    struct RTICdrStream stream;
    struct PRESTypePluginDefaultParticipantData pd;
    struct RTIXCdrTypePluginProgramContext defaultProgramContext =
        RTIXCdrTypePluginProgramContext_INTIALIZER;
    struct PRESTypePlugin plugin;
    struct PRESTypePluginDefaultEndpointData epd;

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, length);

    epd.programContext = defaultProgramContext;
    epd._participantData = &pd;
    epd.typePlugin = &plugin;
    epd.programContext.endpointPluginData = &epd;
    plugin.typeCode = (struct RTICdrTypeCode *)(struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type<BigData256K>::get().native();
    pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
        BigData256K,
        true, true, true>();

    epd._assignabilityProperty.acceptUnknownEnumValue = RTI_XCDR_TRUE;
    epd._assignabilityProperty.acceptUnknownUnionDiscriminator = RTI_XCDR_TRUE;

    ::rti::topic::reset_sample(*sample);
    return PRESTypePlugin_interpretedDeserialize(
        (PRESTypePluginEndpointData)&epd,
        sample,
        &stream,
        RTI_TRUE,
        RTI_TRUE,
        NULL);
}

unsigned int
BigData256KPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    try
    {
        unsigned int size;
        RTIBool overflow = RTI_FALSE;

        size = PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
            endpoint_data, &overflow, include_encapsulation, encapsulation_id, current_alignment);

        if (overflow)
        {
            size = RTI_CDR_MAX_SERIALIZED_SIZE;
        }

        return size;
    }
    catch (...)
    {
        return 0;
    }
}

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

PRESTypePluginKeyKind
BigData256KPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

RTIBool BigData256KPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    BigData256K **sample,
    RTIBool *drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    try
    {
        RTIBool result;
        if (drop_sample)
        {
        } /* To avoid warnings */
        stream->_xTypesState.unassignable = RTI_FALSE;
        result = PRESTypePlugin_interpretedDeserializeKey(
            endpoint_data, (sample != NULL) ? *sample : NULL, stream,
            deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
        if (result)
        {
            if (stream->_xTypesState.unassignable)
            {
                result = RTI_FALSE;
            }
        }
        return result;
    }
    catch (...)
    {
        return RTI_FALSE;
    }
}

unsigned int
BigData256KPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    try
    {
        unsigned int size;
        RTIBool overflow = RTI_FALSE;

        size = PRESTypePlugin_interpretedGetSerializedKeyMaxSize(
            endpoint_data, &overflow, include_encapsulation, encapsulation_id, current_alignment);
        if (overflow)
        {
            size = RTI_CDR_MAX_SERIALIZED_SIZE;
        }

        return size;
    }
    catch (...)
    {
        return RTI_FALSE;
    }
}

unsigned int
BigData256KPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = PRESTypePlugin_interpretedGetSerializedKeyMaxSizeForKeyhash(
        endpoint_data,
        &overflow,
        encapsulation_id,
        current_alignment);
    if (overflow)
    {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

/* ------------------------------------------------------------------------
 * Plug-in Installation Methods
 * ------------------------------------------------------------------------ */
struct PRESTypePlugin *BigData256KPlugin_new(void)
{
    struct PRESTypePlugin *plugin = NULL;
    const struct PRESTypePluginVersion PLUGIN_VERSION =
        PRES_TYPE_PLUGIN_VERSION_2_0;

    RTIOsapiHeap_allocateStructure(
        &plugin, struct PRESTypePlugin);
    if (plugin == NULL)
    {
        return NULL;
    }

    plugin->version = PLUGIN_VERSION;

    /* set up parent's function pointers */
    plugin->onParticipantAttached =
        (PRESTypePluginOnParticipantAttachedCallback)
            BigData256KPlugin_on_participant_attached;
    plugin->onParticipantDetached =
        (PRESTypePluginOnParticipantDetachedCallback)
            BigData256KPlugin_on_participant_detached;
    plugin->onEndpointAttached =
        (PRESTypePluginOnEndpointAttachedCallback)
            BigData256KPlugin_on_endpoint_attached;
    plugin->onEndpointDetached =
        (PRESTypePluginOnEndpointDetachedCallback)
            BigData256KPlugin_on_endpoint_detached;

    plugin->copySampleFnc =
        (PRESTypePluginCopySampleFunction)
            BigData256KPlugin_copy_sample;
    plugin->createSampleFnc =
        (PRESTypePluginCreateSampleFunction)
            BigData256KPlugin_create_sample;
    plugin->destroySampleFnc =
        (PRESTypePluginDestroySampleFunction)
            BigData256KPlugin_destroy_sample;

    plugin->serializeFnc =
        (PRESTypePluginSerializeFunction)PRESTypePlugin_interpretedSerialize;
    plugin->deserializeFnc =
        (PRESTypePluginDeserializeFunction)PRESTypePlugin_interpretedDeserializeWithAlloc;
    plugin->getSerializedSampleMaxSizeFnc =
        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            BigData256KPlugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
        (PRESTypePluginGetSerializedSampleMinSizeFunction)
            PRESTypePlugin_interpretedGetSerializedSampleMinSize;
    plugin->getDeserializedSampleMaxSizeFnc = NULL;
    plugin->getSampleFnc =
        (PRESTypePluginGetSampleFunction)
            BigData256KPlugin_get_sample;
    plugin->returnSampleFnc =
        (PRESTypePluginReturnSampleFunction)
            BigData256KPlugin_return_sample;
    plugin->getKeyKindFnc =
        (PRESTypePluginGetKeyKindFunction)
            BigData256KPlugin_get_key_kind;

    /* These functions are only used for keyed types. As this is not a keyed
    type they are all set to NULL
    */
    plugin->serializeKeyFnc = NULL;
    plugin->deserializeKeyFnc = NULL;
    plugin->getKeyFnc = NULL;
    plugin->returnKeyFnc = NULL;
    plugin->instanceToKeyFnc = NULL;
    plugin->keyToInstanceFnc = NULL;
    plugin->getSerializedKeyMaxSizeFnc = NULL;
    plugin->instanceToKeyHashFnc = NULL;
    plugin->serializedSampleToKeyHashFnc = NULL;
    plugin->serializedKeyToKeyHashFnc = NULL;
#ifdef NDDS_STANDALONE_TYPE
    plugin->typeCode = NULL;
#else
    plugin->typeCode = (struct RTICdrTypeCode *)&::rti::topic::dynamic_type<BigData256K>::get().native();
#endif
    plugin->languageKind = PRES_TYPEPLUGIN_CPPSTL_LANG;

    /* Serialized buffer */
    plugin->getBuffer =
        (PRESTypePluginGetBufferFunction)
            BigData256KPlugin_get_buffer;
    plugin->returnBuffer =
        (PRESTypePluginReturnBufferFunction)
            BigData256KPlugin_return_buffer;
    plugin->getBufferWithParams = NULL;
    plugin->returnBufferWithParams = NULL;
    plugin->getSerializedSampleSizeFnc =
        (PRESTypePluginGetSerializedSampleSizeFunction)
            PRESTypePlugin_interpretedGetSerializedSampleSize;

    plugin->getWriterLoanedSampleFnc = NULL;
    plugin->returnWriterLoanedSampleFnc = NULL;
    plugin->returnWriterLoanedSampleFromCookieFnc = NULL;
    plugin->validateWriterLoanedSampleFnc = NULL;
    plugin->setWriterLoanedSampleSerializedStateFnc = NULL;

    static const char *TYPE_NAME = "BigData256K";
    plugin->endpointTypeName = TYPE_NAME;
    plugin->isMetpType = RTI_FALSE;
    return plugin;
}

void BigData256KPlugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
}

/* ----------------------------------------------------------------------------
 *  Type BigData1M
 * -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

BigData1M *
BigData1MPluginSupport_create_data(void)
{
    try
    {
        BigData1M *sample = new BigData1M();
        ::rti::topic::allocate_sample(*sample);
        return sample;
    }
    catch (...)
    {
        return NULL;
    }
}

void BigData1MPluginSupport_destroy_data(
    BigData1M *sample)
{
    delete sample;
}

RTIBool
BigData1MPluginSupport_copy_data(
    BigData1M *dst,
    const BigData1M *src)
{
    try
    {
        *dst = *src;
    }
    catch (...)
    {
        return RTI_FALSE;
    }

    return RTI_TRUE;
}

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

PRESTypePluginParticipantData
BigData1MPlugin_on_participant_attached(
    void *registration_data,
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration,
    void *container_plugin_context,
    RTICdrTypeCode *type_code)
{
    struct RTIXCdrInterpreterPrograms *programs = NULL;
    struct PRESTypePluginDefaultParticipantData *pd = NULL;
    struct RTIXCdrInterpreterProgramsGenProperty programProperty =
        RTIXCdrInterpreterProgramsGenProperty_INITIALIZER;
    if (registration_data)
    {
    } /* To avoid warnings */
    if (participant_info)
    {
    } /* To avoid warnings */
    if (top_level_registration)
    {
    } /* To avoid warnings */
    if (container_plugin_context)
    {
    } /* To avoid warnings */
    if (type_code)
    {
    } /* To avoid warnings */
    pd = (struct PRESTypePluginDefaultParticipantData *)
        PRESTypePluginDefaultParticipantData_new(participant_info);

    programProperty.generateV1Encapsulation = RTI_XCDR_TRUE;
    programProperty.generateV2Encapsulation = RTI_XCDR_TRUE;
    programProperty.resolveAlias = RTI_XCDR_TRUE;
    programProperty.inlineStruct = RTI_XCDR_TRUE;
    programProperty.optimizeEnum = RTI_XCDR_TRUE;

    programProperty.externalReferenceSize =
        (RTIXCdrUnsignedShort)sizeof(::dds::core::external<char>);
    programProperty.getExternalRefPointerFcn =
        ::rti::topic::interpreter::get_external_value_pointer;

    programs = DDS_TypeCodeFactory_assert_programs_in_global_list(
        DDS_TypeCodeFactory_get_instance(),
        (DDS_TypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type<BigData1M>::get().native(),
        &programProperty,
        RTI_XCDR_PROGRAM_MASK_TYPEPLUGIN);

    if (programs == NULL)
    {
        PRESTypePluginDefaultParticipantData_delete(
            (PRESTypePluginParticipantData)pd);
        return NULL;
    }

    pd->programs = programs;
    return (PRESTypePluginParticipantData)pd;
}

void BigData1MPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data)
{
    if (participant_data != NULL)
    {
        struct PRESTypePluginDefaultParticipantData *pd =
            (struct PRESTypePluginDefaultParticipantData *)participant_data;

        if (pd->programs != NULL)
        {
            DDS_TypeCodeFactory_remove_programs_from_global_list(
                DDS_TypeCodeFactory_get_instance(),
                pd->programs);
            pd->programs = NULL;
        }
        PRESTypePluginDefaultParticipantData_delete(participant_data);
    }
}

PRESTypePluginEndpointData
BigData1MPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration,
    void *containerPluginContext)
{
    try
    {
        PRESTypePluginEndpointData epd = NULL;
        unsigned int serializedSampleMaxSize = 0;

        if (top_level_registration)
        {
        } /* To avoid warnings */
        if (containerPluginContext)
        {
        } /* To avoid warnings */

        if (participant_data == NULL)
        {
            return NULL;
        }

        epd = PRESTypePluginDefaultEndpointData_new(
            participant_data,
            endpoint_info,
            (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
                BigData1MPluginSupport_create_data,
            (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                BigData1MPluginSupport_destroy_data,
            NULL, NULL);

        if (epd == NULL)
        {
            return NULL;
        }

        if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER)
        {
            serializedSampleMaxSize = BigData1MPlugin_get_serialized_sample_max_size(
                epd, RTI_FALSE, RTI_CDR_ENCAPSULATION_ID_CDR_BE, 0);
            PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

            if (PRESTypePluginDefaultEndpointData_createWriterPool(
                    epd,
                    endpoint_info,
                    (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                        BigData1MPlugin_get_serialized_sample_max_size,
                    epd,
                    (PRESTypePluginGetSerializedSampleSizeFunction)
                        PRESTypePlugin_interpretedGetSerializedSampleSize,
                    epd) == RTI_FALSE)
            {
                PRESTypePluginDefaultEndpointData_delete(epd);
                return NULL;
            }
        }

        return epd;
    }
    catch (...)
    {
        return NULL;
    }
}

void BigData1MPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{
    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}

void BigData1MPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    BigData1M *sample,
    void *handle)
{
    try
    {
        ::rti::topic::reset_sample(*sample);
    }
    catch (const std::exception &ex)
    {
        RTICdrLog_logWithFunctionName(
            RTI_LOG_BIT_EXCEPTION,
            "BigData1MPlugin_return_sample",
            &RTI_LOG_ANY_FAILURE_ss,
            "exception: ",
            ex.what());
    }

    PRESTypePluginDefaultEndpointData_returnSample(
        endpoint_data, sample, handle);
}

RTIBool
BigData1MPlugin_copy_sample(
    PRESTypePluginEndpointData,
    BigData1M *dst,
    const BigData1M *src)
{
    return BigData1MPluginSupport_copy_data(dst, src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int
BigData1MPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

RTIBool
BigData1MPlugin_serialize_to_cdr_buffer(
    char *buffer,
    unsigned int *length,
    const BigData1M *sample,
    ::dds::core::policy::DataRepresentationId representation)
{
    using namespace ::dds::core::policy;

    try
    {
        RTIEncapsulationId encapsulationId = RTI_CDR_ENCAPSULATION_ID_INVALID;
        struct RTICdrStream stream;
        struct PRESTypePluginDefaultEndpointData epd;
        RTIBool result;
        struct PRESTypePluginDefaultParticipantData pd;
        struct RTIXCdrTypePluginProgramContext defaultProgramContext =
            RTIXCdrTypePluginProgramContext_INTIALIZER;
        struct PRESTypePlugin plugin = PRES_TYPEPLUGIN_DEFAULT;

        if (length == NULL)
        {
            return RTI_FALSE;
        }

        RTIOsapiMemory_zero(&epd, sizeof(struct PRESTypePluginDefaultEndpointData));
        epd.programContext = defaultProgramContext;
        epd._participantData = &pd;
        epd.typePlugin = &plugin;
        epd.programContext.endpointPluginData = &epd;
        plugin.typeCode = (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type<BigData1M>::get().native();
        pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
            BigData1M,
            true, true, true>();

        encapsulationId = DDS_TypeCode_get_native_encapsulation(
            (DDS_TypeCode *)plugin.typeCode,
            representation);

        if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID)
        {
            return RTI_FALSE;
        }

        epd._maxSizeSerializedSample =
            BigData1MPlugin_get_serialized_sample_max_size(
                (PRESTypePluginEndpointData)&epd,
                RTI_TRUE,
                encapsulationId,
                0);

        if (buffer == NULL)
        {
            *length =
                PRESTypePlugin_interpretedGetSerializedSampleSize(
                    (PRESTypePluginEndpointData)&epd,
                    RTI_TRUE,
                    encapsulationId,
                    0,
                    sample);

            if (*length == 0)
            {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        RTICdrStream_init(&stream);
        RTICdrStream_set(&stream, (char *)buffer, *length);

        result = PRESTypePlugin_interpretedSerialize(
            (PRESTypePluginEndpointData)&epd,
            sample,
            &stream,
            RTI_TRUE,
            encapsulationId,
            RTI_TRUE,
            NULL);

        *length = RTICdrStream_getCurrentPositionOffset(&stream);
        return result;
    }
    catch (...)
    {
        return RTI_FALSE;
    }
}

RTIBool
BigData1MPlugin_deserialize_from_cdr_buffer(
    BigData1M *sample,
    const char *buffer,
    unsigned int length)
{
    struct RTICdrStream stream;
    struct PRESTypePluginDefaultParticipantData pd;
    struct RTIXCdrTypePluginProgramContext defaultProgramContext =
        RTIXCdrTypePluginProgramContext_INTIALIZER;
    struct PRESTypePlugin plugin;
    struct PRESTypePluginDefaultEndpointData epd;

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, length);

    epd.programContext = defaultProgramContext;
    epd._participantData = &pd;
    epd.typePlugin = &plugin;
    epd.programContext.endpointPluginData = &epd;
    plugin.typeCode = (struct RTICdrTypeCode *)(struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type<BigData1M>::get().native();
    pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
        BigData1M,
        true, true, true>();

    epd._assignabilityProperty.acceptUnknownEnumValue = RTI_XCDR_TRUE;
    epd._assignabilityProperty.acceptUnknownUnionDiscriminator = RTI_XCDR_TRUE;

    ::rti::topic::reset_sample(*sample);
    return PRESTypePlugin_interpretedDeserialize(
        (PRESTypePluginEndpointData)&epd,
        sample,
        &stream,
        RTI_TRUE,
        RTI_TRUE,
        NULL);
}

unsigned int
BigData1MPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    try
    {
        unsigned int size;
        RTIBool overflow = RTI_FALSE;

        size = PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
            endpoint_data, &overflow, include_encapsulation, encapsulation_id, current_alignment);

        if (overflow)
        {
            size = RTI_CDR_MAX_SERIALIZED_SIZE;
        }

        return size;
    }
    catch (...)
    {
        return 0;
    }
}

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

PRESTypePluginKeyKind
BigData1MPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

RTIBool BigData1MPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    BigData1M **sample,
    RTIBool *drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    try
    {
        RTIBool result;
        if (drop_sample)
        {
        } /* To avoid warnings */
        stream->_xTypesState.unassignable = RTI_FALSE;
        result = PRESTypePlugin_interpretedDeserializeKey(
            endpoint_data, (sample != NULL) ? *sample : NULL, stream,
            deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
        if (result)
        {
            if (stream->_xTypesState.unassignable)
            {
                result = RTI_FALSE;
            }
        }
        return result;
    }
    catch (...)
    {
        return RTI_FALSE;
    }
}

unsigned int
BigData1MPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    try
    {
        unsigned int size;
        RTIBool overflow = RTI_FALSE;

        size = PRESTypePlugin_interpretedGetSerializedKeyMaxSize(
            endpoint_data, &overflow, include_encapsulation, encapsulation_id, current_alignment);
        if (overflow)
        {
            size = RTI_CDR_MAX_SERIALIZED_SIZE;
        }

        return size;
    }
    catch (...)
    {
        return RTI_FALSE;
    }
}

unsigned int
BigData1MPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = PRESTypePlugin_interpretedGetSerializedKeyMaxSizeForKeyhash(
        endpoint_data,
        &overflow,
        encapsulation_id,
        current_alignment);
    if (overflow)
    {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

/* ------------------------------------------------------------------------
 * Plug-in Installation Methods
 * ------------------------------------------------------------------------ */
struct PRESTypePlugin *BigData1MPlugin_new(void)
{
    struct PRESTypePlugin *plugin = NULL;
    const struct PRESTypePluginVersion PLUGIN_VERSION =
        PRES_TYPE_PLUGIN_VERSION_2_0;

    RTIOsapiHeap_allocateStructure(
        &plugin, struct PRESTypePlugin);
    if (plugin == NULL)
    {
        return NULL;
    }

    plugin->version = PLUGIN_VERSION;

    /* set up parent's function pointers */
    plugin->onParticipantAttached =
        (PRESTypePluginOnParticipantAttachedCallback)
            BigData1MPlugin_on_participant_attached;
    plugin->onParticipantDetached =
        (PRESTypePluginOnParticipantDetachedCallback)
            BigData1MPlugin_on_participant_detached;
    plugin->onEndpointAttached =
        (PRESTypePluginOnEndpointAttachedCallback)
            BigData1MPlugin_on_endpoint_attached;
    plugin->onEndpointDetached =
        (PRESTypePluginOnEndpointDetachedCallback)
            BigData1MPlugin_on_endpoint_detached;

    plugin->copySampleFnc =
        (PRESTypePluginCopySampleFunction)
            BigData1MPlugin_copy_sample;
    plugin->createSampleFnc =
        (PRESTypePluginCreateSampleFunction)
            BigData1MPlugin_create_sample;
    plugin->destroySampleFnc =
        (PRESTypePluginDestroySampleFunction)
            BigData1MPlugin_destroy_sample;

    plugin->serializeFnc =
        (PRESTypePluginSerializeFunction)PRESTypePlugin_interpretedSerialize;
    plugin->deserializeFnc =
        (PRESTypePluginDeserializeFunction)PRESTypePlugin_interpretedDeserializeWithAlloc;
    plugin->getSerializedSampleMaxSizeFnc =
        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            BigData1MPlugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
        (PRESTypePluginGetSerializedSampleMinSizeFunction)
            PRESTypePlugin_interpretedGetSerializedSampleMinSize;
    plugin->getDeserializedSampleMaxSizeFnc = NULL;
    plugin->getSampleFnc =
        (PRESTypePluginGetSampleFunction)
            BigData1MPlugin_get_sample;
    plugin->returnSampleFnc =
        (PRESTypePluginReturnSampleFunction)
            BigData1MPlugin_return_sample;
    plugin->getKeyKindFnc =
        (PRESTypePluginGetKeyKindFunction)
            BigData1MPlugin_get_key_kind;

    /* These functions are only used for keyed types. As this is not a keyed
    type they are all set to NULL
    */
    plugin->serializeKeyFnc = NULL;
    plugin->deserializeKeyFnc = NULL;
    plugin->getKeyFnc = NULL;
    plugin->returnKeyFnc = NULL;
    plugin->instanceToKeyFnc = NULL;
    plugin->keyToInstanceFnc = NULL;
    plugin->getSerializedKeyMaxSizeFnc = NULL;
    plugin->instanceToKeyHashFnc = NULL;
    plugin->serializedSampleToKeyHashFnc = NULL;
    plugin->serializedKeyToKeyHashFnc = NULL;
#ifdef NDDS_STANDALONE_TYPE
    plugin->typeCode = NULL;
#else
    plugin->typeCode = (struct RTICdrTypeCode *)&::rti::topic::dynamic_type<BigData1M>::get().native();
#endif
    plugin->languageKind = PRES_TYPEPLUGIN_CPPSTL_LANG;

    /* Serialized buffer */
    plugin->getBuffer =
        (PRESTypePluginGetBufferFunction)
            BigData1MPlugin_get_buffer;
    plugin->returnBuffer =
        (PRESTypePluginReturnBufferFunction)
            BigData1MPlugin_return_buffer;
    plugin->getBufferWithParams = NULL;
    plugin->returnBufferWithParams = NULL;
    plugin->getSerializedSampleSizeFnc =
        (PRESTypePluginGetSerializedSampleSizeFunction)
            PRESTypePlugin_interpretedGetSerializedSampleSize;

    plugin->getWriterLoanedSampleFnc = NULL;
    plugin->returnWriterLoanedSampleFnc = NULL;
    plugin->returnWriterLoanedSampleFromCookieFnc = NULL;
    plugin->validateWriterLoanedSampleFnc = NULL;
    plugin->setWriterLoanedSampleSerializedStateFnc = NULL;

    static const char *TYPE_NAME = "BigData1M";
    plugin->endpointTypeName = TYPE_NAME;
    plugin->isMetpType = RTI_FALSE;
    return plugin;
}

void BigData1MPlugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
}

/* ----------------------------------------------------------------------------
 *  Type BigData2M
 * -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

BigData2M *
BigData2MPluginSupport_create_data(void)
{
    try
    {
        BigData2M *sample = new BigData2M();
        ::rti::topic::allocate_sample(*sample);
        return sample;
    }
    catch (...)
    {
        return NULL;
    }
}

void BigData2MPluginSupport_destroy_data(
    BigData2M *sample)
{
    delete sample;
}

RTIBool
BigData2MPluginSupport_copy_data(
    BigData2M *dst,
    const BigData2M *src)
{
    try
    {
        *dst = *src;
    }
    catch (...)
    {
        return RTI_FALSE;
    }

    return RTI_TRUE;
}

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

PRESTypePluginParticipantData
BigData2MPlugin_on_participant_attached(
    void *registration_data,
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration,
    void *container_plugin_context,
    RTICdrTypeCode *type_code)
{
    struct RTIXCdrInterpreterPrograms *programs = NULL;
    struct PRESTypePluginDefaultParticipantData *pd = NULL;
    struct RTIXCdrInterpreterProgramsGenProperty programProperty =
        RTIXCdrInterpreterProgramsGenProperty_INITIALIZER;
    if (registration_data)
    {
    } /* To avoid warnings */
    if (participant_info)
    {
    } /* To avoid warnings */
    if (top_level_registration)
    {
    } /* To avoid warnings */
    if (container_plugin_context)
    {
    } /* To avoid warnings */
    if (type_code)
    {
    } /* To avoid warnings */
    pd = (struct PRESTypePluginDefaultParticipantData *)
        PRESTypePluginDefaultParticipantData_new(participant_info);

    programProperty.generateV1Encapsulation = RTI_XCDR_TRUE;
    programProperty.generateV2Encapsulation = RTI_XCDR_TRUE;
    programProperty.resolveAlias = RTI_XCDR_TRUE;
    programProperty.inlineStruct = RTI_XCDR_TRUE;
    programProperty.optimizeEnum = RTI_XCDR_TRUE;

    programProperty.externalReferenceSize =
        (RTIXCdrUnsignedShort)sizeof(::dds::core::external<char>);
    programProperty.getExternalRefPointerFcn =
        ::rti::topic::interpreter::get_external_value_pointer;

    programs = DDS_TypeCodeFactory_assert_programs_in_global_list(
        DDS_TypeCodeFactory_get_instance(),
        (DDS_TypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type<BigData2M>::get().native(),
        &programProperty,
        RTI_XCDR_PROGRAM_MASK_TYPEPLUGIN);

    if (programs == NULL)
    {
        PRESTypePluginDefaultParticipantData_delete(
            (PRESTypePluginParticipantData)pd);
        return NULL;
    }

    pd->programs = programs;
    return (PRESTypePluginParticipantData)pd;
}

void BigData2MPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data)
{
    if (participant_data != NULL)
    {
        struct PRESTypePluginDefaultParticipantData *pd =
            (struct PRESTypePluginDefaultParticipantData *)participant_data;

        if (pd->programs != NULL)
        {
            DDS_TypeCodeFactory_remove_programs_from_global_list(
                DDS_TypeCodeFactory_get_instance(),
                pd->programs);
            pd->programs = NULL;
        }
        PRESTypePluginDefaultParticipantData_delete(participant_data);
    }
}

PRESTypePluginEndpointData
BigData2MPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration,
    void *containerPluginContext)
{
    try
    {
        PRESTypePluginEndpointData epd = NULL;
        unsigned int serializedSampleMaxSize = 0;

        if (top_level_registration)
        {
        } /* To avoid warnings */
        if (containerPluginContext)
        {
        } /* To avoid warnings */

        if (participant_data == NULL)
        {
            return NULL;
        }

        epd = PRESTypePluginDefaultEndpointData_new(
            participant_data,
            endpoint_info,
            (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
                BigData2MPluginSupport_create_data,
            (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                BigData2MPluginSupport_destroy_data,
            NULL, NULL);

        if (epd == NULL)
        {
            return NULL;
        }

        if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER)
        {
            serializedSampleMaxSize = BigData2MPlugin_get_serialized_sample_max_size(
                epd, RTI_FALSE, RTI_CDR_ENCAPSULATION_ID_CDR_BE, 0);
            PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

            if (PRESTypePluginDefaultEndpointData_createWriterPool(
                    epd,
                    endpoint_info,
                    (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                        BigData2MPlugin_get_serialized_sample_max_size,
                    epd,
                    (PRESTypePluginGetSerializedSampleSizeFunction)
                        PRESTypePlugin_interpretedGetSerializedSampleSize,
                    epd) == RTI_FALSE)
            {
                PRESTypePluginDefaultEndpointData_delete(epd);
                return NULL;
            }
        }

        return epd;
    }
    catch (...)
    {
        return NULL;
    }
}

void BigData2MPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{
    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}

void BigData2MPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    BigData2M *sample,
    void *handle)
{
    try
    {
        ::rti::topic::reset_sample(*sample);
    }
    catch (const std::exception &ex)
    {
        RTICdrLog_logWithFunctionName(
            RTI_LOG_BIT_EXCEPTION,
            "BigData2MPlugin_return_sample",
            &RTI_LOG_ANY_FAILURE_ss,
            "exception: ",
            ex.what());
    }

    PRESTypePluginDefaultEndpointData_returnSample(
        endpoint_data, sample, handle);
}

RTIBool
BigData2MPlugin_copy_sample(
    PRESTypePluginEndpointData,
    BigData2M *dst,
    const BigData2M *src)
{
    return BigData2MPluginSupport_copy_data(dst, src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int
BigData2MPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

RTIBool
BigData2MPlugin_serialize_to_cdr_buffer(
    char *buffer,
    unsigned int *length,
    const BigData2M *sample,
    ::dds::core::policy::DataRepresentationId representation)
{
    using namespace ::dds::core::policy;

    try
    {
        RTIEncapsulationId encapsulationId = RTI_CDR_ENCAPSULATION_ID_INVALID;
        struct RTICdrStream stream;
        struct PRESTypePluginDefaultEndpointData epd;
        RTIBool result;
        struct PRESTypePluginDefaultParticipantData pd;
        struct RTIXCdrTypePluginProgramContext defaultProgramContext =
            RTIXCdrTypePluginProgramContext_INTIALIZER;
        struct PRESTypePlugin plugin = PRES_TYPEPLUGIN_DEFAULT;

        if (length == NULL)
        {
            return RTI_FALSE;
        }

        RTIOsapiMemory_zero(&epd, sizeof(struct PRESTypePluginDefaultEndpointData));
        epd.programContext = defaultProgramContext;
        epd._participantData = &pd;
        epd.typePlugin = &plugin;
        epd.programContext.endpointPluginData = &epd;
        plugin.typeCode = (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type<BigData2M>::get().native();
        pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
            BigData2M,
            true, true, true>();

        encapsulationId = DDS_TypeCode_get_native_encapsulation(
            (DDS_TypeCode *)plugin.typeCode,
            representation);

        if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID)
        {
            return RTI_FALSE;
        }

        epd._maxSizeSerializedSample =
            BigData2MPlugin_get_serialized_sample_max_size(
                (PRESTypePluginEndpointData)&epd,
                RTI_TRUE,
                encapsulationId,
                0);

        if (buffer == NULL)
        {
            *length =
                PRESTypePlugin_interpretedGetSerializedSampleSize(
                    (PRESTypePluginEndpointData)&epd,
                    RTI_TRUE,
                    encapsulationId,
                    0,
                    sample);

            if (*length == 0)
            {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        RTICdrStream_init(&stream);
        RTICdrStream_set(&stream, (char *)buffer, *length);

        result = PRESTypePlugin_interpretedSerialize(
            (PRESTypePluginEndpointData)&epd,
            sample,
            &stream,
            RTI_TRUE,
            encapsulationId,
            RTI_TRUE,
            NULL);

        *length = RTICdrStream_getCurrentPositionOffset(&stream);
        return result;
    }
    catch (...)
    {
        return RTI_FALSE;
    }
}

RTIBool
BigData2MPlugin_deserialize_from_cdr_buffer(
    BigData2M *sample,
    const char *buffer,
    unsigned int length)
{
    struct RTICdrStream stream;
    struct PRESTypePluginDefaultParticipantData pd;
    struct RTIXCdrTypePluginProgramContext defaultProgramContext =
        RTIXCdrTypePluginProgramContext_INTIALIZER;
    struct PRESTypePlugin plugin;
    struct PRESTypePluginDefaultEndpointData epd;

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, length);

    epd.programContext = defaultProgramContext;
    epd._participantData = &pd;
    epd.typePlugin = &plugin;
    epd.programContext.endpointPluginData = &epd;
    plugin.typeCode = (struct RTICdrTypeCode *)(struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type<BigData2M>::get().native();
    pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
        BigData2M,
        true, true, true>();

    epd._assignabilityProperty.acceptUnknownEnumValue = RTI_XCDR_TRUE;
    epd._assignabilityProperty.acceptUnknownUnionDiscriminator = RTI_XCDR_TRUE;

    ::rti::topic::reset_sample(*sample);
    return PRESTypePlugin_interpretedDeserialize(
        (PRESTypePluginEndpointData)&epd,
        sample,
        &stream,
        RTI_TRUE,
        RTI_TRUE,
        NULL);
}

unsigned int
BigData2MPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    try
    {
        unsigned int size;
        RTIBool overflow = RTI_FALSE;

        size = PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
            endpoint_data, &overflow, include_encapsulation, encapsulation_id, current_alignment);

        if (overflow)
        {
            size = RTI_CDR_MAX_SERIALIZED_SIZE;
        }

        return size;
    }
    catch (...)
    {
        return 0;
    }
}

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

PRESTypePluginKeyKind
BigData2MPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

RTIBool BigData2MPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    BigData2M **sample,
    RTIBool *drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    try
    {
        RTIBool result;
        if (drop_sample)
        {
        } /* To avoid warnings */
        stream->_xTypesState.unassignable = RTI_FALSE;
        result = PRESTypePlugin_interpretedDeserializeKey(
            endpoint_data, (sample != NULL) ? *sample : NULL, stream,
            deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
        if (result)
        {
            if (stream->_xTypesState.unassignable)
            {
                result = RTI_FALSE;
            }
        }
        return result;
    }
    catch (...)
    {
        return RTI_FALSE;
    }
}

unsigned int
BigData2MPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    try
    {
        unsigned int size;
        RTIBool overflow = RTI_FALSE;

        size = PRESTypePlugin_interpretedGetSerializedKeyMaxSize(
            endpoint_data, &overflow, include_encapsulation, encapsulation_id, current_alignment);
        if (overflow)
        {
            size = RTI_CDR_MAX_SERIALIZED_SIZE;
        }

        return size;
    }
    catch (...)
    {
        return RTI_FALSE;
    }
}

unsigned int
BigData2MPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = PRESTypePlugin_interpretedGetSerializedKeyMaxSizeForKeyhash(
        endpoint_data,
        &overflow,
        encapsulation_id,
        current_alignment);
    if (overflow)
    {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

/* ------------------------------------------------------------------------
 * Plug-in Installation Methods
 * ------------------------------------------------------------------------ */
struct PRESTypePlugin *BigData2MPlugin_new(void)
{
    struct PRESTypePlugin *plugin = NULL;
    const struct PRESTypePluginVersion PLUGIN_VERSION =
        PRES_TYPE_PLUGIN_VERSION_2_0;

    RTIOsapiHeap_allocateStructure(
        &plugin, struct PRESTypePlugin);
    if (plugin == NULL)
    {
        return NULL;
    }

    plugin->version = PLUGIN_VERSION;

    /* set up parent's function pointers */
    plugin->onParticipantAttached =
        (PRESTypePluginOnParticipantAttachedCallback)
            BigData2MPlugin_on_participant_attached;
    plugin->onParticipantDetached =
        (PRESTypePluginOnParticipantDetachedCallback)
            BigData2MPlugin_on_participant_detached;
    plugin->onEndpointAttached =
        (PRESTypePluginOnEndpointAttachedCallback)
            BigData2MPlugin_on_endpoint_attached;
    plugin->onEndpointDetached =
        (PRESTypePluginOnEndpointDetachedCallback)
            BigData2MPlugin_on_endpoint_detached;

    plugin->copySampleFnc =
        (PRESTypePluginCopySampleFunction)
            BigData2MPlugin_copy_sample;
    plugin->createSampleFnc =
        (PRESTypePluginCreateSampleFunction)
            BigData2MPlugin_create_sample;
    plugin->destroySampleFnc =
        (PRESTypePluginDestroySampleFunction)
            BigData2MPlugin_destroy_sample;

    plugin->serializeFnc =
        (PRESTypePluginSerializeFunction)PRESTypePlugin_interpretedSerialize;
    plugin->deserializeFnc =
        (PRESTypePluginDeserializeFunction)PRESTypePlugin_interpretedDeserializeWithAlloc;
    plugin->getSerializedSampleMaxSizeFnc =
        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            BigData2MPlugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
        (PRESTypePluginGetSerializedSampleMinSizeFunction)
            PRESTypePlugin_interpretedGetSerializedSampleMinSize;
    plugin->getDeserializedSampleMaxSizeFnc = NULL;
    plugin->getSampleFnc =
        (PRESTypePluginGetSampleFunction)
            BigData2MPlugin_get_sample;
    plugin->returnSampleFnc =
        (PRESTypePluginReturnSampleFunction)
            BigData2MPlugin_return_sample;
    plugin->getKeyKindFnc =
        (PRESTypePluginGetKeyKindFunction)
            BigData2MPlugin_get_key_kind;

    /* These functions are only used for keyed types. As this is not a keyed
    type they are all set to NULL
    */
    plugin->serializeKeyFnc = NULL;
    plugin->deserializeKeyFnc = NULL;
    plugin->getKeyFnc = NULL;
    plugin->returnKeyFnc = NULL;
    plugin->instanceToKeyFnc = NULL;
    plugin->keyToInstanceFnc = NULL;
    plugin->getSerializedKeyMaxSizeFnc = NULL;
    plugin->instanceToKeyHashFnc = NULL;
    plugin->serializedSampleToKeyHashFnc = NULL;
    plugin->serializedKeyToKeyHashFnc = NULL;
#ifdef NDDS_STANDALONE_TYPE
    plugin->typeCode = NULL;
#else
    plugin->typeCode = (struct RTICdrTypeCode *)&::rti::topic::dynamic_type<BigData2M>::get().native();
#endif
    plugin->languageKind = PRES_TYPEPLUGIN_CPPSTL_LANG;

    /* Serialized buffer */
    plugin->getBuffer =
        (PRESTypePluginGetBufferFunction)
            BigData2MPlugin_get_buffer;
    plugin->returnBuffer =
        (PRESTypePluginReturnBufferFunction)
            BigData2MPlugin_return_buffer;
    plugin->getBufferWithParams = NULL;
    plugin->returnBufferWithParams = NULL;
    plugin->getSerializedSampleSizeFnc =
        (PRESTypePluginGetSerializedSampleSizeFunction)
            PRESTypePlugin_interpretedGetSerializedSampleSize;

    plugin->getWriterLoanedSampleFnc = NULL;
    plugin->returnWriterLoanedSampleFnc = NULL;
    plugin->returnWriterLoanedSampleFromCookieFnc = NULL;
    plugin->validateWriterLoanedSampleFnc = NULL;
    plugin->setWriterLoanedSampleSerializedStateFnc = NULL;

    static const char *TYPE_NAME = "BigData2M";
    plugin->endpointTypeName = TYPE_NAME;
    plugin->isMetpType = RTI_FALSE;
    return plugin;
}

void BigData2MPlugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
}

/* ----------------------------------------------------------------------------
 *  Type BigData4M
 * -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

BigData4M *
BigData4MPluginSupport_create_data(void)
{
    try
    {
        BigData4M *sample = new BigData4M();
        ::rti::topic::allocate_sample(*sample);
        return sample;
    }
    catch (...)
    {
        return NULL;
    }
}

void BigData4MPluginSupport_destroy_data(
    BigData4M *sample)
{
    delete sample;
}

RTIBool
BigData4MPluginSupport_copy_data(
    BigData4M *dst,
    const BigData4M *src)
{
    try
    {
        *dst = *src;
    }
    catch (...)
    {
        return RTI_FALSE;
    }

    return RTI_TRUE;
}

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

PRESTypePluginParticipantData
BigData4MPlugin_on_participant_attached(
    void *registration_data,
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration,
    void *container_plugin_context,
    RTICdrTypeCode *type_code)
{
    struct RTIXCdrInterpreterPrograms *programs = NULL;
    struct PRESTypePluginDefaultParticipantData *pd = NULL;
    struct RTIXCdrInterpreterProgramsGenProperty programProperty =
        RTIXCdrInterpreterProgramsGenProperty_INITIALIZER;
    if (registration_data)
    {
    } /* To avoid warnings */
    if (participant_info)
    {
    } /* To avoid warnings */
    if (top_level_registration)
    {
    } /* To avoid warnings */
    if (container_plugin_context)
    {
    } /* To avoid warnings */
    if (type_code)
    {
    } /* To avoid warnings */
    pd = (struct PRESTypePluginDefaultParticipantData *)
        PRESTypePluginDefaultParticipantData_new(participant_info);

    programProperty.generateV1Encapsulation = RTI_XCDR_TRUE;
    programProperty.generateV2Encapsulation = RTI_XCDR_TRUE;
    programProperty.resolveAlias = RTI_XCDR_TRUE;
    programProperty.inlineStruct = RTI_XCDR_TRUE;
    programProperty.optimizeEnum = RTI_XCDR_TRUE;

    programProperty.externalReferenceSize =
        (RTIXCdrUnsignedShort)sizeof(::dds::core::external<char>);
    programProperty.getExternalRefPointerFcn =
        ::rti::topic::interpreter::get_external_value_pointer;

    programs = DDS_TypeCodeFactory_assert_programs_in_global_list(
        DDS_TypeCodeFactory_get_instance(),
        (DDS_TypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type<BigData4M>::get().native(),
        &programProperty,
        RTI_XCDR_PROGRAM_MASK_TYPEPLUGIN);

    if (programs == NULL)
    {
        PRESTypePluginDefaultParticipantData_delete(
            (PRESTypePluginParticipantData)pd);
        return NULL;
    }

    pd->programs = programs;
    return (PRESTypePluginParticipantData)pd;
}

void BigData4MPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data)
{
    if (participant_data != NULL)
    {
        struct PRESTypePluginDefaultParticipantData *pd =
            (struct PRESTypePluginDefaultParticipantData *)participant_data;

        if (pd->programs != NULL)
        {
            DDS_TypeCodeFactory_remove_programs_from_global_list(
                DDS_TypeCodeFactory_get_instance(),
                pd->programs);
            pd->programs = NULL;
        }
        PRESTypePluginDefaultParticipantData_delete(participant_data);
    }
}

PRESTypePluginEndpointData
BigData4MPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration,
    void *containerPluginContext)
{
    try
    {
        PRESTypePluginEndpointData epd = NULL;
        unsigned int serializedSampleMaxSize = 0;

        if (top_level_registration)
        {
        } /* To avoid warnings */
        if (containerPluginContext)
        {
        } /* To avoid warnings */

        if (participant_data == NULL)
        {
            return NULL;
        }

        epd = PRESTypePluginDefaultEndpointData_new(
            participant_data,
            endpoint_info,
            (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
                BigData4MPluginSupport_create_data,
            (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                BigData4MPluginSupport_destroy_data,
            NULL, NULL);

        if (epd == NULL)
        {
            return NULL;
        }

        if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER)
        {
            serializedSampleMaxSize = BigData4MPlugin_get_serialized_sample_max_size(
                epd, RTI_FALSE, RTI_CDR_ENCAPSULATION_ID_CDR_BE, 0);
            PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

            if (PRESTypePluginDefaultEndpointData_createWriterPool(
                    epd,
                    endpoint_info,
                    (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                        BigData4MPlugin_get_serialized_sample_max_size,
                    epd,
                    (PRESTypePluginGetSerializedSampleSizeFunction)
                        PRESTypePlugin_interpretedGetSerializedSampleSize,
                    epd) == RTI_FALSE)
            {
                PRESTypePluginDefaultEndpointData_delete(epd);
                return NULL;
            }
        }

        return epd;
    }
    catch (...)
    {
        return NULL;
    }
}

void BigData4MPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{
    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}

void BigData4MPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    BigData4M *sample,
    void *handle)
{
    try
    {
        ::rti::topic::reset_sample(*sample);
    }
    catch (const std::exception &ex)
    {
        RTICdrLog_logWithFunctionName(
            RTI_LOG_BIT_EXCEPTION,
            "BigData4MPlugin_return_sample",
            &RTI_LOG_ANY_FAILURE_ss,
            "exception: ",
            ex.what());
    }

    PRESTypePluginDefaultEndpointData_returnSample(
        endpoint_data, sample, handle);
}

RTIBool
BigData4MPlugin_copy_sample(
    PRESTypePluginEndpointData,
    BigData4M *dst,
    const BigData4M *src)
{
    return BigData4MPluginSupport_copy_data(dst, src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int
BigData4MPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

RTIBool
BigData4MPlugin_serialize_to_cdr_buffer(
    char *buffer,
    unsigned int *length,
    const BigData4M *sample,
    ::dds::core::policy::DataRepresentationId representation)
{
    using namespace ::dds::core::policy;

    try
    {
        RTIEncapsulationId encapsulationId = RTI_CDR_ENCAPSULATION_ID_INVALID;
        struct RTICdrStream stream;
        struct PRESTypePluginDefaultEndpointData epd;
        RTIBool result;
        struct PRESTypePluginDefaultParticipantData pd;
        struct RTIXCdrTypePluginProgramContext defaultProgramContext =
            RTIXCdrTypePluginProgramContext_INTIALIZER;
        struct PRESTypePlugin plugin = PRES_TYPEPLUGIN_DEFAULT;

        if (length == NULL)
        {
            return RTI_FALSE;
        }

        RTIOsapiMemory_zero(&epd, sizeof(struct PRESTypePluginDefaultEndpointData));
        epd.programContext = defaultProgramContext;
        epd._participantData = &pd;
        epd.typePlugin = &plugin;
        epd.programContext.endpointPluginData = &epd;
        plugin.typeCode = (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type<BigData4M>::get().native();
        pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
            BigData4M,
            true, true, true>();

        encapsulationId = DDS_TypeCode_get_native_encapsulation(
            (DDS_TypeCode *)plugin.typeCode,
            representation);

        if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID)
        {
            return RTI_FALSE;
        }

        epd._maxSizeSerializedSample =
            BigData4MPlugin_get_serialized_sample_max_size(
                (PRESTypePluginEndpointData)&epd,
                RTI_TRUE,
                encapsulationId,
                0);

        if (buffer == NULL)
        {
            *length =
                PRESTypePlugin_interpretedGetSerializedSampleSize(
                    (PRESTypePluginEndpointData)&epd,
                    RTI_TRUE,
                    encapsulationId,
                    0,
                    sample);

            if (*length == 0)
            {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        RTICdrStream_init(&stream);
        RTICdrStream_set(&stream, (char *)buffer, *length);

        result = PRESTypePlugin_interpretedSerialize(
            (PRESTypePluginEndpointData)&epd,
            sample,
            &stream,
            RTI_TRUE,
            encapsulationId,
            RTI_TRUE,
            NULL);

        *length = RTICdrStream_getCurrentPositionOffset(&stream);
        return result;
    }
    catch (...)
    {
        return RTI_FALSE;
    }
}

RTIBool
BigData4MPlugin_deserialize_from_cdr_buffer(
    BigData4M *sample,
    const char *buffer,
    unsigned int length)
{
    struct RTICdrStream stream;
    struct PRESTypePluginDefaultParticipantData pd;
    struct RTIXCdrTypePluginProgramContext defaultProgramContext =
        RTIXCdrTypePluginProgramContext_INTIALIZER;
    struct PRESTypePlugin plugin;
    struct PRESTypePluginDefaultEndpointData epd;

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, length);

    epd.programContext = defaultProgramContext;
    epd._participantData = &pd;
    epd.typePlugin = &plugin;
    epd.programContext.endpointPluginData = &epd;
    plugin.typeCode = (struct RTICdrTypeCode *)(struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type<BigData4M>::get().native();
    pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
        BigData4M,
        true, true, true>();

    epd._assignabilityProperty.acceptUnknownEnumValue = RTI_XCDR_TRUE;
    epd._assignabilityProperty.acceptUnknownUnionDiscriminator = RTI_XCDR_TRUE;

    ::rti::topic::reset_sample(*sample);
    return PRESTypePlugin_interpretedDeserialize(
        (PRESTypePluginEndpointData)&epd,
        sample,
        &stream,
        RTI_TRUE,
        RTI_TRUE,
        NULL);
}

unsigned int
BigData4MPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    try
    {
        unsigned int size;
        RTIBool overflow = RTI_FALSE;

        size = PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
            endpoint_data, &overflow, include_encapsulation, encapsulation_id, current_alignment);

        if (overflow)
        {
            size = RTI_CDR_MAX_SERIALIZED_SIZE;
        }

        return size;
    }
    catch (...)
    {
        return 0;
    }
}

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

PRESTypePluginKeyKind
BigData4MPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

RTIBool BigData4MPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    BigData4M **sample,
    RTIBool *drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    try
    {
        RTIBool result;
        if (drop_sample)
        {
        } /* To avoid warnings */
        stream->_xTypesState.unassignable = RTI_FALSE;
        result = PRESTypePlugin_interpretedDeserializeKey(
            endpoint_data, (sample != NULL) ? *sample : NULL, stream,
            deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
        if (result)
        {
            if (stream->_xTypesState.unassignable)
            {
                result = RTI_FALSE;
            }
        }
        return result;
    }
    catch (...)
    {
        return RTI_FALSE;
    }
}

unsigned int
BigData4MPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    try
    {
        unsigned int size;
        RTIBool overflow = RTI_FALSE;

        size = PRESTypePlugin_interpretedGetSerializedKeyMaxSize(
            endpoint_data, &overflow, include_encapsulation, encapsulation_id, current_alignment);
        if (overflow)
        {
            size = RTI_CDR_MAX_SERIALIZED_SIZE;
        }

        return size;
    }
    catch (...)
    {
        return RTI_FALSE;
    }
}

unsigned int
BigData4MPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = PRESTypePlugin_interpretedGetSerializedKeyMaxSizeForKeyhash(
        endpoint_data,
        &overflow,
        encapsulation_id,
        current_alignment);
    if (overflow)
    {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

/* ------------------------------------------------------------------------
 * Plug-in Installation Methods
 * ------------------------------------------------------------------------ */
struct PRESTypePlugin *BigData4MPlugin_new(void)
{
    struct PRESTypePlugin *plugin = NULL;
    const struct PRESTypePluginVersion PLUGIN_VERSION =
        PRES_TYPE_PLUGIN_VERSION_2_0;

    RTIOsapiHeap_allocateStructure(
        &plugin, struct PRESTypePlugin);
    if (plugin == NULL)
    {
        return NULL;
    }

    plugin->version = PLUGIN_VERSION;

    /* set up parent's function pointers */
    plugin->onParticipantAttached =
        (PRESTypePluginOnParticipantAttachedCallback)
            BigData4MPlugin_on_participant_attached;
    plugin->onParticipantDetached =
        (PRESTypePluginOnParticipantDetachedCallback)
            BigData4MPlugin_on_participant_detached;
    plugin->onEndpointAttached =
        (PRESTypePluginOnEndpointAttachedCallback)
            BigData4MPlugin_on_endpoint_attached;
    plugin->onEndpointDetached =
        (PRESTypePluginOnEndpointDetachedCallback)
            BigData4MPlugin_on_endpoint_detached;

    plugin->copySampleFnc =
        (PRESTypePluginCopySampleFunction)
            BigData4MPlugin_copy_sample;
    plugin->createSampleFnc =
        (PRESTypePluginCreateSampleFunction)
            BigData4MPlugin_create_sample;
    plugin->destroySampleFnc =
        (PRESTypePluginDestroySampleFunction)
            BigData4MPlugin_destroy_sample;

    plugin->serializeFnc =
        (PRESTypePluginSerializeFunction)PRESTypePlugin_interpretedSerialize;
    plugin->deserializeFnc =
        (PRESTypePluginDeserializeFunction)PRESTypePlugin_interpretedDeserializeWithAlloc;
    plugin->getSerializedSampleMaxSizeFnc =
        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            BigData4MPlugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
        (PRESTypePluginGetSerializedSampleMinSizeFunction)
            PRESTypePlugin_interpretedGetSerializedSampleMinSize;
    plugin->getDeserializedSampleMaxSizeFnc = NULL;
    plugin->getSampleFnc =
        (PRESTypePluginGetSampleFunction)
            BigData4MPlugin_get_sample;
    plugin->returnSampleFnc =
        (PRESTypePluginReturnSampleFunction)
            BigData4MPlugin_return_sample;
    plugin->getKeyKindFnc =
        (PRESTypePluginGetKeyKindFunction)
            BigData4MPlugin_get_key_kind;

    /* These functions are only used for keyed types. As this is not a keyed
    type they are all set to NULL
    */
    plugin->serializeKeyFnc = NULL;
    plugin->deserializeKeyFnc = NULL;
    plugin->getKeyFnc = NULL;
    plugin->returnKeyFnc = NULL;
    plugin->instanceToKeyFnc = NULL;
    plugin->keyToInstanceFnc = NULL;
    plugin->getSerializedKeyMaxSizeFnc = NULL;
    plugin->instanceToKeyHashFnc = NULL;
    plugin->serializedSampleToKeyHashFnc = NULL;
    plugin->serializedKeyToKeyHashFnc = NULL;
#ifdef NDDS_STANDALONE_TYPE
    plugin->typeCode = NULL;
#else
    plugin->typeCode = (struct RTICdrTypeCode *)&::rti::topic::dynamic_type<BigData4M>::get().native();
#endif
    plugin->languageKind = PRES_TYPEPLUGIN_CPPSTL_LANG;

    /* Serialized buffer */
    plugin->getBuffer =
        (PRESTypePluginGetBufferFunction)
            BigData4MPlugin_get_buffer;
    plugin->returnBuffer =
        (PRESTypePluginReturnBufferFunction)
            BigData4MPlugin_return_buffer;
    plugin->getBufferWithParams = NULL;
    plugin->returnBufferWithParams = NULL;
    plugin->getSerializedSampleSizeFnc =
        (PRESTypePluginGetSerializedSampleSizeFunction)
            PRESTypePlugin_interpretedGetSerializedSampleSize;

    plugin->getWriterLoanedSampleFnc = NULL;
    plugin->returnWriterLoanedSampleFnc = NULL;
    plugin->returnWriterLoanedSampleFromCookieFnc = NULL;
    plugin->validateWriterLoanedSampleFnc = NULL;
    plugin->setWriterLoanedSampleSerializedStateFnc = NULL;

    static const char *TYPE_NAME = "BigData4M";
    plugin->endpointTypeName = TYPE_NAME;
    plugin->isMetpType = RTI_FALSE;
    return plugin;
}

void BigData4MPlugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
}

/* ----------------------------------------------------------------------------
 *  Type BigData8M
 * -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

BigData8M *
BigData8MPluginSupport_create_data(void)
{
    try
    {
        BigData8M *sample = new BigData8M();
        ::rti::topic::allocate_sample(*sample);
        return sample;
    }
    catch (...)
    {
        return NULL;
    }
}

void BigData8MPluginSupport_destroy_data(
    BigData8M *sample)
{
    delete sample;
}

RTIBool
BigData8MPluginSupport_copy_data(
    BigData8M *dst,
    const BigData8M *src)
{
    try
    {
        *dst = *src;
    }
    catch (...)
    {
        return RTI_FALSE;
    }

    return RTI_TRUE;
}

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

PRESTypePluginParticipantData
BigData8MPlugin_on_participant_attached(
    void *registration_data,
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration,
    void *container_plugin_context,
    RTICdrTypeCode *type_code)
{
    struct RTIXCdrInterpreterPrograms *programs = NULL;
    struct PRESTypePluginDefaultParticipantData *pd = NULL;
    struct RTIXCdrInterpreterProgramsGenProperty programProperty =
        RTIXCdrInterpreterProgramsGenProperty_INITIALIZER;
    if (registration_data)
    {
    } /* To avoid warnings */
    if (participant_info)
    {
    } /* To avoid warnings */
    if (top_level_registration)
    {
    } /* To avoid warnings */
    if (container_plugin_context)
    {
    } /* To avoid warnings */
    if (type_code)
    {
    } /* To avoid warnings */
    pd = (struct PRESTypePluginDefaultParticipantData *)
        PRESTypePluginDefaultParticipantData_new(participant_info);

    programProperty.generateV1Encapsulation = RTI_XCDR_TRUE;
    programProperty.generateV2Encapsulation = RTI_XCDR_TRUE;
    programProperty.resolveAlias = RTI_XCDR_TRUE;
    programProperty.inlineStruct = RTI_XCDR_TRUE;
    programProperty.optimizeEnum = RTI_XCDR_TRUE;

    programProperty.externalReferenceSize =
        (RTIXCdrUnsignedShort)sizeof(::dds::core::external<char>);
    programProperty.getExternalRefPointerFcn =
        ::rti::topic::interpreter::get_external_value_pointer;

    programs = DDS_TypeCodeFactory_assert_programs_in_global_list(
        DDS_TypeCodeFactory_get_instance(),
        (DDS_TypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type<BigData8M>::get().native(),
        &programProperty,
        RTI_XCDR_PROGRAM_MASK_TYPEPLUGIN);

    if (programs == NULL)
    {
        PRESTypePluginDefaultParticipantData_delete(
            (PRESTypePluginParticipantData)pd);
        return NULL;
    }

    pd->programs = programs;
    return (PRESTypePluginParticipantData)pd;
}

void BigData8MPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data)
{
    if (participant_data != NULL)
    {
        struct PRESTypePluginDefaultParticipantData *pd =
            (struct PRESTypePluginDefaultParticipantData *)participant_data;

        if (pd->programs != NULL)
        {
            DDS_TypeCodeFactory_remove_programs_from_global_list(
                DDS_TypeCodeFactory_get_instance(),
                pd->programs);
            pd->programs = NULL;
        }
        PRESTypePluginDefaultParticipantData_delete(participant_data);
    }
}

PRESTypePluginEndpointData
BigData8MPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration,
    void *containerPluginContext)
{
    try
    {
        PRESTypePluginEndpointData epd = NULL;
        unsigned int serializedSampleMaxSize = 0;

        if (top_level_registration)
        {
        } /* To avoid warnings */
        if (containerPluginContext)
        {
        } /* To avoid warnings */

        if (participant_data == NULL)
        {
            return NULL;
        }

        epd = PRESTypePluginDefaultEndpointData_new(
            participant_data,
            endpoint_info,
            (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
                BigData8MPluginSupport_create_data,
            (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                BigData8MPluginSupport_destroy_data,
            NULL, NULL);

        if (epd == NULL)
        {
            return NULL;
        }

        if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER)
        {
            serializedSampleMaxSize = BigData8MPlugin_get_serialized_sample_max_size(
                epd, RTI_FALSE, RTI_CDR_ENCAPSULATION_ID_CDR_BE, 0);
            PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

            if (PRESTypePluginDefaultEndpointData_createWriterPool(
                    epd,
                    endpoint_info,
                    (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                        BigData8MPlugin_get_serialized_sample_max_size,
                    epd,
                    (PRESTypePluginGetSerializedSampleSizeFunction)
                        PRESTypePlugin_interpretedGetSerializedSampleSize,
                    epd) == RTI_FALSE)
            {
                PRESTypePluginDefaultEndpointData_delete(epd);
                return NULL;
            }
        }

        return epd;
    }
    catch (...)
    {
        return NULL;
    }
}

void BigData8MPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{
    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}

void BigData8MPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    BigData8M *sample,
    void *handle)
{
    try
    {
        ::rti::topic::reset_sample(*sample);
    }
    catch (const std::exception &ex)
    {
        RTICdrLog_logWithFunctionName(
            RTI_LOG_BIT_EXCEPTION,
            "BigData8MPlugin_return_sample",
            &RTI_LOG_ANY_FAILURE_ss,
            "exception: ",
            ex.what());
    }

    PRESTypePluginDefaultEndpointData_returnSample(
        endpoint_data, sample, handle);
}

RTIBool
BigData8MPlugin_copy_sample(
    PRESTypePluginEndpointData,
    BigData8M *dst,
    const BigData8M *src)
{
    return BigData8MPluginSupport_copy_data(dst, src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int
BigData8MPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

RTIBool
BigData8MPlugin_serialize_to_cdr_buffer(
    char *buffer,
    unsigned int *length,
    const BigData8M *sample,
    ::dds::core::policy::DataRepresentationId representation)
{
    using namespace ::dds::core::policy;

    try
    {
        RTIEncapsulationId encapsulationId = RTI_CDR_ENCAPSULATION_ID_INVALID;
        struct RTICdrStream stream;
        struct PRESTypePluginDefaultEndpointData epd;
        RTIBool result;
        struct PRESTypePluginDefaultParticipantData pd;
        struct RTIXCdrTypePluginProgramContext defaultProgramContext =
            RTIXCdrTypePluginProgramContext_INTIALIZER;
        struct PRESTypePlugin plugin = PRES_TYPEPLUGIN_DEFAULT;

        if (length == NULL)
        {
            return RTI_FALSE;
        }

        RTIOsapiMemory_zero(&epd, sizeof(struct PRESTypePluginDefaultEndpointData));
        epd.programContext = defaultProgramContext;
        epd._participantData = &pd;
        epd.typePlugin = &plugin;
        epd.programContext.endpointPluginData = &epd;
        plugin.typeCode = (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type<BigData8M>::get().native();
        pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
            BigData8M,
            true, true, true>();

        encapsulationId = DDS_TypeCode_get_native_encapsulation(
            (DDS_TypeCode *)plugin.typeCode,
            representation);

        if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID)
        {
            return RTI_FALSE;
        }

        epd._maxSizeSerializedSample =
            BigData8MPlugin_get_serialized_sample_max_size(
                (PRESTypePluginEndpointData)&epd,
                RTI_TRUE,
                encapsulationId,
                0);

        if (buffer == NULL)
        {
            *length =
                PRESTypePlugin_interpretedGetSerializedSampleSize(
                    (PRESTypePluginEndpointData)&epd,
                    RTI_TRUE,
                    encapsulationId,
                    0,
                    sample);

            if (*length == 0)
            {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        RTICdrStream_init(&stream);
        RTICdrStream_set(&stream, (char *)buffer, *length);

        result = PRESTypePlugin_interpretedSerialize(
            (PRESTypePluginEndpointData)&epd,
            sample,
            &stream,
            RTI_TRUE,
            encapsulationId,
            RTI_TRUE,
            NULL);

        *length = RTICdrStream_getCurrentPositionOffset(&stream);
        return result;
    }
    catch (...)
    {
        return RTI_FALSE;
    }
}

RTIBool
BigData8MPlugin_deserialize_from_cdr_buffer(
    BigData8M *sample,
    const char *buffer,
    unsigned int length)
{
    struct RTICdrStream stream;
    struct PRESTypePluginDefaultParticipantData pd;
    struct RTIXCdrTypePluginProgramContext defaultProgramContext =
        RTIXCdrTypePluginProgramContext_INTIALIZER;
    struct PRESTypePlugin plugin;
    struct PRESTypePluginDefaultEndpointData epd;

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, length);

    epd.programContext = defaultProgramContext;
    epd._participantData = &pd;
    epd.typePlugin = &plugin;
    epd.programContext.endpointPluginData = &epd;
    plugin.typeCode = (struct RTICdrTypeCode *)(struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type<BigData8M>::get().native();
    pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
        BigData8M,
        true, true, true>();

    epd._assignabilityProperty.acceptUnknownEnumValue = RTI_XCDR_TRUE;
    epd._assignabilityProperty.acceptUnknownUnionDiscriminator = RTI_XCDR_TRUE;

    ::rti::topic::reset_sample(*sample);
    return PRESTypePlugin_interpretedDeserialize(
        (PRESTypePluginEndpointData)&epd,
        sample,
        &stream,
        RTI_TRUE,
        RTI_TRUE,
        NULL);
}

unsigned int
BigData8MPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    try
    {
        unsigned int size;
        RTIBool overflow = RTI_FALSE;

        size = PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
            endpoint_data, &overflow, include_encapsulation, encapsulation_id, current_alignment);

        if (overflow)
        {
            size = RTI_CDR_MAX_SERIALIZED_SIZE;
        }

        return size;
    }
    catch (...)
    {
        return 0;
    }
}

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

PRESTypePluginKeyKind
BigData8MPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

RTIBool BigData8MPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    BigData8M **sample,
    RTIBool *drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    try
    {
        RTIBool result;
        if (drop_sample)
        {
        } /* To avoid warnings */
        stream->_xTypesState.unassignable = RTI_FALSE;
        result = PRESTypePlugin_interpretedDeserializeKey(
            endpoint_data, (sample != NULL) ? *sample : NULL, stream,
            deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
        if (result)
        {
            if (stream->_xTypesState.unassignable)
            {
                result = RTI_FALSE;
            }
        }
        return result;
    }
    catch (...)
    {
        return RTI_FALSE;
    }
}

unsigned int
BigData8MPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    try
    {
        unsigned int size;
        RTIBool overflow = RTI_FALSE;

        size = PRESTypePlugin_interpretedGetSerializedKeyMaxSize(
            endpoint_data, &overflow, include_encapsulation, encapsulation_id, current_alignment);
        if (overflow)
        {
            size = RTI_CDR_MAX_SERIALIZED_SIZE;
        }

        return size;
    }
    catch (...)
    {
        return RTI_FALSE;
    }
}

unsigned int
BigData8MPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = PRESTypePlugin_interpretedGetSerializedKeyMaxSizeForKeyhash(
        endpoint_data,
        &overflow,
        encapsulation_id,
        current_alignment);
    if (overflow)
    {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

/* ------------------------------------------------------------------------
 * Plug-in Installation Methods
 * ------------------------------------------------------------------------ */
struct PRESTypePlugin *BigData8MPlugin_new(void)
{
    struct PRESTypePlugin *plugin = NULL;
    const struct PRESTypePluginVersion PLUGIN_VERSION =
        PRES_TYPE_PLUGIN_VERSION_2_0;

    RTIOsapiHeap_allocateStructure(
        &plugin, struct PRESTypePlugin);
    if (plugin == NULL)
    {
        return NULL;
    }

    plugin->version = PLUGIN_VERSION;

    /* set up parent's function pointers */
    plugin->onParticipantAttached =
        (PRESTypePluginOnParticipantAttachedCallback)
            BigData8MPlugin_on_participant_attached;
    plugin->onParticipantDetached =
        (PRESTypePluginOnParticipantDetachedCallback)
            BigData8MPlugin_on_participant_detached;
    plugin->onEndpointAttached =
        (PRESTypePluginOnEndpointAttachedCallback)
            BigData8MPlugin_on_endpoint_attached;
    plugin->onEndpointDetached =
        (PRESTypePluginOnEndpointDetachedCallback)
            BigData8MPlugin_on_endpoint_detached;

    plugin->copySampleFnc =
        (PRESTypePluginCopySampleFunction)
            BigData8MPlugin_copy_sample;
    plugin->createSampleFnc =
        (PRESTypePluginCreateSampleFunction)
            BigData8MPlugin_create_sample;
    plugin->destroySampleFnc =
        (PRESTypePluginDestroySampleFunction)
            BigData8MPlugin_destroy_sample;

    plugin->serializeFnc =
        (PRESTypePluginSerializeFunction)PRESTypePlugin_interpretedSerialize;
    plugin->deserializeFnc =
        (PRESTypePluginDeserializeFunction)PRESTypePlugin_interpretedDeserializeWithAlloc;
    plugin->getSerializedSampleMaxSizeFnc =
        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            BigData8MPlugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
        (PRESTypePluginGetSerializedSampleMinSizeFunction)
            PRESTypePlugin_interpretedGetSerializedSampleMinSize;
    plugin->getDeserializedSampleMaxSizeFnc = NULL;
    plugin->getSampleFnc =
        (PRESTypePluginGetSampleFunction)
            BigData8MPlugin_get_sample;
    plugin->returnSampleFnc =
        (PRESTypePluginReturnSampleFunction)
            BigData8MPlugin_return_sample;
    plugin->getKeyKindFnc =
        (PRESTypePluginGetKeyKindFunction)
            BigData8MPlugin_get_key_kind;

    /* These functions are only used for keyed types. As this is not a keyed
    type they are all set to NULL
    */
    plugin->serializeKeyFnc = NULL;
    plugin->deserializeKeyFnc = NULL;
    plugin->getKeyFnc = NULL;
    plugin->returnKeyFnc = NULL;
    plugin->instanceToKeyFnc = NULL;
    plugin->keyToInstanceFnc = NULL;
    plugin->getSerializedKeyMaxSizeFnc = NULL;
    plugin->instanceToKeyHashFnc = NULL;
    plugin->serializedSampleToKeyHashFnc = NULL;
    plugin->serializedKeyToKeyHashFnc = NULL;
#ifdef NDDS_STANDALONE_TYPE
    plugin->typeCode = NULL;
#else
    plugin->typeCode = (struct RTICdrTypeCode *)&::rti::topic::dynamic_type<BigData8M>::get().native();
#endif
    plugin->languageKind = PRES_TYPEPLUGIN_CPPSTL_LANG;

    /* Serialized buffer */
    plugin->getBuffer =
        (PRESTypePluginGetBufferFunction)
            BigData8MPlugin_get_buffer;
    plugin->returnBuffer =
        (PRESTypePluginReturnBufferFunction)
            BigData8MPlugin_return_buffer;
    plugin->getBufferWithParams = NULL;
    plugin->returnBufferWithParams = NULL;
    plugin->getSerializedSampleSizeFnc =
        (PRESTypePluginGetSerializedSampleSizeFunction)
            PRESTypePlugin_interpretedGetSerializedSampleSize;

    plugin->getWriterLoanedSampleFnc = NULL;
    plugin->returnWriterLoanedSampleFnc = NULL;
    plugin->returnWriterLoanedSampleFromCookieFnc = NULL;
    plugin->validateWriterLoanedSampleFnc = NULL;
    plugin->setWriterLoanedSampleSerializedStateFnc = NULL;

    static const char *TYPE_NAME = "BigData8M";
    plugin->endpointTypeName = TYPE_NAME;
    plugin->isMetpType = RTI_FALSE;
    return plugin;
}

void BigData8MPlugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
}

/* ----------------------------------------------------------------------------
 *  Type BigData12M
 * -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

BigData12M *
BigData12MPluginSupport_create_data(void)
{
    try
    {
        BigData12M *sample = new BigData12M();
        ::rti::topic::allocate_sample(*sample);
        return sample;
    }
    catch (...)
    {
        return NULL;
    }
}

void BigData12MPluginSupport_destroy_data(
    BigData12M *sample)
{
    delete sample;
}

RTIBool
BigData12MPluginSupport_copy_data(
    BigData12M *dst,
    const BigData12M *src)
{
    try
    {
        *dst = *src;
    }
    catch (...)
    {
        return RTI_FALSE;
    }

    return RTI_TRUE;
}

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

PRESTypePluginParticipantData
BigData12MPlugin_on_participant_attached(
    void *registration_data,
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration,
    void *container_plugin_context,
    RTICdrTypeCode *type_code)
{
    struct RTIXCdrInterpreterPrograms *programs = NULL;
    struct PRESTypePluginDefaultParticipantData *pd = NULL;
    struct RTIXCdrInterpreterProgramsGenProperty programProperty =
        RTIXCdrInterpreterProgramsGenProperty_INITIALIZER;
    if (registration_data)
    {
    } /* To avoid warnings */
    if (participant_info)
    {
    } /* To avoid warnings */
    if (top_level_registration)
    {
    } /* To avoid warnings */
    if (container_plugin_context)
    {
    } /* To avoid warnings */
    if (type_code)
    {
    } /* To avoid warnings */
    pd = (struct PRESTypePluginDefaultParticipantData *)
        PRESTypePluginDefaultParticipantData_new(participant_info);

    programProperty.generateV1Encapsulation = RTI_XCDR_TRUE;
    programProperty.generateV2Encapsulation = RTI_XCDR_TRUE;
    programProperty.resolveAlias = RTI_XCDR_TRUE;
    programProperty.inlineStruct = RTI_XCDR_TRUE;
    programProperty.optimizeEnum = RTI_XCDR_TRUE;

    programProperty.externalReferenceSize =
        (RTIXCdrUnsignedShort)sizeof(::dds::core::external<char>);
    programProperty.getExternalRefPointerFcn =
        ::rti::topic::interpreter::get_external_value_pointer;

    programs = DDS_TypeCodeFactory_assert_programs_in_global_list(
        DDS_TypeCodeFactory_get_instance(),
        (DDS_TypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type<BigData12M>::get().native(),
        &programProperty,
        RTI_XCDR_PROGRAM_MASK_TYPEPLUGIN);

    if (programs == NULL)
    {
        PRESTypePluginDefaultParticipantData_delete(
            (PRESTypePluginParticipantData)pd);
        return NULL;
    }

    pd->programs = programs;
    return (PRESTypePluginParticipantData)pd;
}

void BigData12MPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data)
{
    if (participant_data != NULL)
    {
        struct PRESTypePluginDefaultParticipantData *pd =
            (struct PRESTypePluginDefaultParticipantData *)participant_data;

        if (pd->programs != NULL)
        {
            DDS_TypeCodeFactory_remove_programs_from_global_list(
                DDS_TypeCodeFactory_get_instance(),
                pd->programs);
            pd->programs = NULL;
        }
        PRESTypePluginDefaultParticipantData_delete(participant_data);
    }
}

PRESTypePluginEndpointData
BigData12MPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration,
    void *containerPluginContext)
{
    try
    {
        PRESTypePluginEndpointData epd = NULL;
        unsigned int serializedSampleMaxSize = 0;

        if (top_level_registration)
        {
        } /* To avoid warnings */
        if (containerPluginContext)
        {
        } /* To avoid warnings */

        if (participant_data == NULL)
        {
            return NULL;
        }

        epd = PRESTypePluginDefaultEndpointData_new(
            participant_data,
            endpoint_info,
            (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
                BigData12MPluginSupport_create_data,
            (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                BigData12MPluginSupport_destroy_data,
            NULL, NULL);

        if (epd == NULL)
        {
            return NULL;
        }

        if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER)
        {
            serializedSampleMaxSize = BigData12MPlugin_get_serialized_sample_max_size(
                epd, RTI_FALSE, RTI_CDR_ENCAPSULATION_ID_CDR_BE, 0);
            PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

            if (PRESTypePluginDefaultEndpointData_createWriterPool(
                    epd,
                    endpoint_info,
                    (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                        BigData12MPlugin_get_serialized_sample_max_size,
                    epd,
                    (PRESTypePluginGetSerializedSampleSizeFunction)
                        PRESTypePlugin_interpretedGetSerializedSampleSize,
                    epd) == RTI_FALSE)
            {
                PRESTypePluginDefaultEndpointData_delete(epd);
                return NULL;
            }
        }

        return epd;
    }
    catch (...)
    {
        return NULL;
    }
}

void BigData12MPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{
    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}

void BigData12MPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    BigData12M *sample,
    void *handle)
{
    try
    {
        ::rti::topic::reset_sample(*sample);
    }
    catch (const std::exception &ex)
    {
        RTICdrLog_logWithFunctionName(
            RTI_LOG_BIT_EXCEPTION,
            "BigData12MPlugin_return_sample",
            &RTI_LOG_ANY_FAILURE_ss,
            "exception: ",
            ex.what());
    }

    PRESTypePluginDefaultEndpointData_returnSample(
        endpoint_data, sample, handle);
}

RTIBool
BigData12MPlugin_copy_sample(
    PRESTypePluginEndpointData,
    BigData12M *dst,
    const BigData12M *src)
{
    return BigData12MPluginSupport_copy_data(dst, src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int
BigData12MPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

RTIBool
BigData12MPlugin_serialize_to_cdr_buffer(
    char *buffer,
    unsigned int *length,
    const BigData12M *sample,
    ::dds::core::policy::DataRepresentationId representation)
{
    using namespace ::dds::core::policy;

    try
    {
        RTIEncapsulationId encapsulationId = RTI_CDR_ENCAPSULATION_ID_INVALID;
        struct RTICdrStream stream;
        struct PRESTypePluginDefaultEndpointData epd;
        RTIBool result;
        struct PRESTypePluginDefaultParticipantData pd;
        struct RTIXCdrTypePluginProgramContext defaultProgramContext =
            RTIXCdrTypePluginProgramContext_INTIALIZER;
        struct PRESTypePlugin plugin = PRES_TYPEPLUGIN_DEFAULT;

        if (length == NULL)
        {
            return RTI_FALSE;
        }

        RTIOsapiMemory_zero(&epd, sizeof(struct PRESTypePluginDefaultEndpointData));
        epd.programContext = defaultProgramContext;
        epd._participantData = &pd;
        epd.typePlugin = &plugin;
        epd.programContext.endpointPluginData = &epd;
        plugin.typeCode = (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type<BigData12M>::get().native();
        pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
            BigData12M,
            true, true, true>();

        encapsulationId = DDS_TypeCode_get_native_encapsulation(
            (DDS_TypeCode *)plugin.typeCode,
            representation);

        if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID)
        {
            return RTI_FALSE;
        }

        epd._maxSizeSerializedSample =
            BigData12MPlugin_get_serialized_sample_max_size(
                (PRESTypePluginEndpointData)&epd,
                RTI_TRUE,
                encapsulationId,
                0);

        if (buffer == NULL)
        {
            *length =
                PRESTypePlugin_interpretedGetSerializedSampleSize(
                    (PRESTypePluginEndpointData)&epd,
                    RTI_TRUE,
                    encapsulationId,
                    0,
                    sample);

            if (*length == 0)
            {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        RTICdrStream_init(&stream);
        RTICdrStream_set(&stream, (char *)buffer, *length);

        result = PRESTypePlugin_interpretedSerialize(
            (PRESTypePluginEndpointData)&epd,
            sample,
            &stream,
            RTI_TRUE,
            encapsulationId,
            RTI_TRUE,
            NULL);

        *length = RTICdrStream_getCurrentPositionOffset(&stream);
        return result;
    }
    catch (...)
    {
        return RTI_FALSE;
    }
}

RTIBool
BigData12MPlugin_deserialize_from_cdr_buffer(
    BigData12M *sample,
    const char *buffer,
    unsigned int length)
{
    struct RTICdrStream stream;
    struct PRESTypePluginDefaultParticipantData pd;
    struct RTIXCdrTypePluginProgramContext defaultProgramContext =
        RTIXCdrTypePluginProgramContext_INTIALIZER;
    struct PRESTypePlugin plugin;
    struct PRESTypePluginDefaultEndpointData epd;

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, length);

    epd.programContext = defaultProgramContext;
    epd._participantData = &pd;
    epd.typePlugin = &plugin;
    epd.programContext.endpointPluginData = &epd;
    plugin.typeCode = (struct RTICdrTypeCode *)(struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type<BigData12M>::get().native();
    pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
        BigData12M,
        true, true, true>();

    epd._assignabilityProperty.acceptUnknownEnumValue = RTI_XCDR_TRUE;
    epd._assignabilityProperty.acceptUnknownUnionDiscriminator = RTI_XCDR_TRUE;

    ::rti::topic::reset_sample(*sample);
    return PRESTypePlugin_interpretedDeserialize(
        (PRESTypePluginEndpointData)&epd,
        sample,
        &stream,
        RTI_TRUE,
        RTI_TRUE,
        NULL);
}

unsigned int
BigData12MPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    try
    {
        unsigned int size;
        RTIBool overflow = RTI_FALSE;

        size = PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
            endpoint_data, &overflow, include_encapsulation, encapsulation_id, current_alignment);

        if (overflow)
        {
            size = RTI_CDR_MAX_SERIALIZED_SIZE;
        }

        return size;
    }
    catch (...)
    {
        return 0;
    }
}

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

PRESTypePluginKeyKind
BigData12MPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

RTIBool BigData12MPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    BigData12M **sample,
    RTIBool *drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    try
    {
        RTIBool result;
        if (drop_sample)
        {
        } /* To avoid warnings */
        stream->_xTypesState.unassignable = RTI_FALSE;
        result = PRESTypePlugin_interpretedDeserializeKey(
            endpoint_data, (sample != NULL) ? *sample : NULL, stream,
            deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
        if (result)
        {
            if (stream->_xTypesState.unassignable)
            {
                result = RTI_FALSE;
            }
        }
        return result;
    }
    catch (...)
    {
        return RTI_FALSE;
    }
}

unsigned int
BigData12MPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    try
    {
        unsigned int size;
        RTIBool overflow = RTI_FALSE;

        size = PRESTypePlugin_interpretedGetSerializedKeyMaxSize(
            endpoint_data, &overflow, include_encapsulation, encapsulation_id, current_alignment);
        if (overflow)
        {
            size = RTI_CDR_MAX_SERIALIZED_SIZE;
        }

        return size;
    }
    catch (...)
    {
        return RTI_FALSE;
    }
}

unsigned int
BigData12MPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = PRESTypePlugin_interpretedGetSerializedKeyMaxSizeForKeyhash(
        endpoint_data,
        &overflow,
        encapsulation_id,
        current_alignment);
    if (overflow)
    {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

/* ------------------------------------------------------------------------
 * Plug-in Installation Methods
 * ------------------------------------------------------------------------ */
struct PRESTypePlugin *BigData12MPlugin_new(void)
{
    struct PRESTypePlugin *plugin = NULL;
    const struct PRESTypePluginVersion PLUGIN_VERSION =
        PRES_TYPE_PLUGIN_VERSION_2_0;

    RTIOsapiHeap_allocateStructure(
        &plugin, struct PRESTypePlugin);
    if (plugin == NULL)
    {
        return NULL;
    }

    plugin->version = PLUGIN_VERSION;

    /* set up parent's function pointers */
    plugin->onParticipantAttached =
        (PRESTypePluginOnParticipantAttachedCallback)
            BigData12MPlugin_on_participant_attached;
    plugin->onParticipantDetached =
        (PRESTypePluginOnParticipantDetachedCallback)
            BigData12MPlugin_on_participant_detached;
    plugin->onEndpointAttached =
        (PRESTypePluginOnEndpointAttachedCallback)
            BigData12MPlugin_on_endpoint_attached;
    plugin->onEndpointDetached =
        (PRESTypePluginOnEndpointDetachedCallback)
            BigData12MPlugin_on_endpoint_detached;

    plugin->copySampleFnc =
        (PRESTypePluginCopySampleFunction)
            BigData12MPlugin_copy_sample;
    plugin->createSampleFnc =
        (PRESTypePluginCreateSampleFunction)
            BigData12MPlugin_create_sample;
    plugin->destroySampleFnc =
        (PRESTypePluginDestroySampleFunction)
            BigData12MPlugin_destroy_sample;

    plugin->serializeFnc =
        (PRESTypePluginSerializeFunction)PRESTypePlugin_interpretedSerialize;
    plugin->deserializeFnc =
        (PRESTypePluginDeserializeFunction)PRESTypePlugin_interpretedDeserializeWithAlloc;
    plugin->getSerializedSampleMaxSizeFnc =
        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            BigData12MPlugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
        (PRESTypePluginGetSerializedSampleMinSizeFunction)
            PRESTypePlugin_interpretedGetSerializedSampleMinSize;
    plugin->getDeserializedSampleMaxSizeFnc = NULL;
    plugin->getSampleFnc =
        (PRESTypePluginGetSampleFunction)
            BigData12MPlugin_get_sample;
    plugin->returnSampleFnc =
        (PRESTypePluginReturnSampleFunction)
            BigData12MPlugin_return_sample;
    plugin->getKeyKindFnc =
        (PRESTypePluginGetKeyKindFunction)
            BigData12MPlugin_get_key_kind;

    /* These functions are only used for keyed types. As this is not a keyed
    type they are all set to NULL
    */
    plugin->serializeKeyFnc = NULL;
    plugin->deserializeKeyFnc = NULL;
    plugin->getKeyFnc = NULL;
    plugin->returnKeyFnc = NULL;
    plugin->instanceToKeyFnc = NULL;
    plugin->keyToInstanceFnc = NULL;
    plugin->getSerializedKeyMaxSizeFnc = NULL;
    plugin->instanceToKeyHashFnc = NULL;
    plugin->serializedSampleToKeyHashFnc = NULL;
    plugin->serializedKeyToKeyHashFnc = NULL;
#ifdef NDDS_STANDALONE_TYPE
    plugin->typeCode = NULL;
#else
    plugin->typeCode = (struct RTICdrTypeCode *)&::rti::topic::dynamic_type<BigData12M>::get().native();
#endif
    plugin->languageKind = PRES_TYPEPLUGIN_CPPSTL_LANG;

    /* Serialized buffer */
    plugin->getBuffer =
        (PRESTypePluginGetBufferFunction)
            BigData12MPlugin_get_buffer;
    plugin->returnBuffer =
        (PRESTypePluginReturnBufferFunction)
            BigData12MPlugin_return_buffer;
    plugin->getBufferWithParams = NULL;
    plugin->returnBufferWithParams = NULL;
    plugin->getSerializedSampleSizeFnc =
        (PRESTypePluginGetSerializedSampleSizeFunction)
            PRESTypePlugin_interpretedGetSerializedSampleSize;

    plugin->getWriterLoanedSampleFnc = NULL;
    plugin->returnWriterLoanedSampleFnc = NULL;
    plugin->returnWriterLoanedSampleFromCookieFnc = NULL;
    plugin->validateWriterLoanedSampleFnc = NULL;
    plugin->setWriterLoanedSampleSerializedStateFnc = NULL;

    static const char *TYPE_NAME = "BigData12M";
    plugin->endpointTypeName = TYPE_NAME;
    plugin->isMetpType = RTI_FALSE;
    return plugin;
}

void BigData12MPlugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
}

/* ----------------------------------------------------------------------------
 *  Type BigData20M
 * -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

BigData20M *
BigData20MPluginSupport_create_data(void)
{
    try
    {
        BigData20M *sample = new BigData20M();
        ::rti::topic::allocate_sample(*sample);
        return sample;
    }
    catch (...)
    {
        return NULL;
    }
}

void BigData20MPluginSupport_destroy_data(
    BigData20M *sample)
{
    delete sample;
}

RTIBool
BigData20MPluginSupport_copy_data(
    BigData20M *dst,
    const BigData20M *src)
{
    try
    {
        *dst = *src;
    }
    catch (...)
    {
        return RTI_FALSE;
    }

    return RTI_TRUE;
}

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

PRESTypePluginParticipantData
BigData20MPlugin_on_participant_attached(
    void *registration_data,
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration,
    void *container_plugin_context,
    RTICdrTypeCode *type_code)
{
    struct RTIXCdrInterpreterPrograms *programs = NULL;
    struct PRESTypePluginDefaultParticipantData *pd = NULL;
    struct RTIXCdrInterpreterProgramsGenProperty programProperty =
        RTIXCdrInterpreterProgramsGenProperty_INITIALIZER;
    if (registration_data)
    {
    } /* To avoid warnings */
    if (participant_info)
    {
    } /* To avoid warnings */
    if (top_level_registration)
    {
    } /* To avoid warnings */
    if (container_plugin_context)
    {
    } /* To avoid warnings */
    if (type_code)
    {
    } /* To avoid warnings */
    pd = (struct PRESTypePluginDefaultParticipantData *)
        PRESTypePluginDefaultParticipantData_new(participant_info);

    programProperty.generateV1Encapsulation = RTI_XCDR_TRUE;
    programProperty.generateV2Encapsulation = RTI_XCDR_TRUE;
    programProperty.resolveAlias = RTI_XCDR_TRUE;
    programProperty.inlineStruct = RTI_XCDR_TRUE;
    programProperty.optimizeEnum = RTI_XCDR_TRUE;

    programProperty.externalReferenceSize =
        (RTIXCdrUnsignedShort)sizeof(::dds::core::external<char>);
    programProperty.getExternalRefPointerFcn =
        ::rti::topic::interpreter::get_external_value_pointer;

    programs = DDS_TypeCodeFactory_assert_programs_in_global_list(
        DDS_TypeCodeFactory_get_instance(),
        (DDS_TypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type<BigData20M>::get().native(),
        &programProperty,
        RTI_XCDR_PROGRAM_MASK_TYPEPLUGIN);

    if (programs == NULL)
    {
        PRESTypePluginDefaultParticipantData_delete(
            (PRESTypePluginParticipantData)pd);
        return NULL;
    }

    pd->programs = programs;
    return (PRESTypePluginParticipantData)pd;
}

void BigData20MPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data)
{
    if (participant_data != NULL)
    {
        struct PRESTypePluginDefaultParticipantData *pd =
            (struct PRESTypePluginDefaultParticipantData *)participant_data;

        if (pd->programs != NULL)
        {
            DDS_TypeCodeFactory_remove_programs_from_global_list(
                DDS_TypeCodeFactory_get_instance(),
                pd->programs);
            pd->programs = NULL;
        }
        PRESTypePluginDefaultParticipantData_delete(participant_data);
    }
}

PRESTypePluginEndpointData
BigData20MPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration,
    void *containerPluginContext)
{
    try
    {
        PRESTypePluginEndpointData epd = NULL;
        unsigned int serializedSampleMaxSize = 0;

        if (top_level_registration)
        {
        } /* To avoid warnings */
        if (containerPluginContext)
        {
        } /* To avoid warnings */

        if (participant_data == NULL)
        {
            return NULL;
        }

        epd = PRESTypePluginDefaultEndpointData_new(
            participant_data,
            endpoint_info,
            (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
                BigData20MPluginSupport_create_data,
            (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                BigData20MPluginSupport_destroy_data,
            NULL, NULL);

        if (epd == NULL)
        {
            return NULL;
        }

        if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER)
        {
            serializedSampleMaxSize = BigData20MPlugin_get_serialized_sample_max_size(
                epd, RTI_FALSE, RTI_CDR_ENCAPSULATION_ID_CDR_BE, 0);
            PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

            if (PRESTypePluginDefaultEndpointData_createWriterPool(
                    epd,
                    endpoint_info,
                    (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                        BigData20MPlugin_get_serialized_sample_max_size,
                    epd,
                    (PRESTypePluginGetSerializedSampleSizeFunction)
                        PRESTypePlugin_interpretedGetSerializedSampleSize,
                    epd) == RTI_FALSE)
            {
                PRESTypePluginDefaultEndpointData_delete(epd);
                return NULL;
            }
        }

        return epd;
    }
    catch (...)
    {
        return NULL;
    }
}

void BigData20MPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{
    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}

void BigData20MPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    BigData20M *sample,
    void *handle)
{
    try
    {
        ::rti::topic::reset_sample(*sample);
    }
    catch (const std::exception &ex)
    {
        RTICdrLog_logWithFunctionName(
            RTI_LOG_BIT_EXCEPTION,
            "BigData20MPlugin_return_sample",
            &RTI_LOG_ANY_FAILURE_ss,
            "exception: ",
            ex.what());
    }

    PRESTypePluginDefaultEndpointData_returnSample(
        endpoint_data, sample, handle);
}

RTIBool
BigData20MPlugin_copy_sample(
    PRESTypePluginEndpointData,
    BigData20M *dst,
    const BigData20M *src)
{
    return BigData20MPluginSupport_copy_data(dst, src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int
BigData20MPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

RTIBool
BigData20MPlugin_serialize_to_cdr_buffer(
    char *buffer,
    unsigned int *length,
    const BigData20M *sample,
    ::dds::core::policy::DataRepresentationId representation)
{
    using namespace ::dds::core::policy;

    try
    {
        RTIEncapsulationId encapsulationId = RTI_CDR_ENCAPSULATION_ID_INVALID;
        struct RTICdrStream stream;
        struct PRESTypePluginDefaultEndpointData epd;
        RTIBool result;
        struct PRESTypePluginDefaultParticipantData pd;
        struct RTIXCdrTypePluginProgramContext defaultProgramContext =
            RTIXCdrTypePluginProgramContext_INTIALIZER;
        struct PRESTypePlugin plugin = PRES_TYPEPLUGIN_DEFAULT;

        if (length == NULL)
        {
            return RTI_FALSE;
        }

        RTIOsapiMemory_zero(&epd, sizeof(struct PRESTypePluginDefaultEndpointData));
        epd.programContext = defaultProgramContext;
        epd._participantData = &pd;
        epd.typePlugin = &plugin;
        epd.programContext.endpointPluginData = &epd;
        plugin.typeCode = (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type<BigData20M>::get().native();
        pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
            BigData20M,
            true, true, true>();

        encapsulationId = DDS_TypeCode_get_native_encapsulation(
            (DDS_TypeCode *)plugin.typeCode,
            representation);

        if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID)
        {
            return RTI_FALSE;
        }

        epd._maxSizeSerializedSample =
            BigData20MPlugin_get_serialized_sample_max_size(
                (PRESTypePluginEndpointData)&epd,
                RTI_TRUE,
                encapsulationId,
                0);

        if (buffer == NULL)
        {
            *length =
                PRESTypePlugin_interpretedGetSerializedSampleSize(
                    (PRESTypePluginEndpointData)&epd,
                    RTI_TRUE,
                    encapsulationId,
                    0,
                    sample);

            if (*length == 0)
            {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        RTICdrStream_init(&stream);
        RTICdrStream_set(&stream, (char *)buffer, *length);

        result = PRESTypePlugin_interpretedSerialize(
            (PRESTypePluginEndpointData)&epd,
            sample,
            &stream,
            RTI_TRUE,
            encapsulationId,
            RTI_TRUE,
            NULL);

        *length = RTICdrStream_getCurrentPositionOffset(&stream);
        return result;
    }
    catch (...)
    {
        return RTI_FALSE;
    }
}

RTIBool
BigData20MPlugin_deserialize_from_cdr_buffer(
    BigData20M *sample,
    const char *buffer,
    unsigned int length)
{
    struct RTICdrStream stream;
    struct PRESTypePluginDefaultParticipantData pd;
    struct RTIXCdrTypePluginProgramContext defaultProgramContext =
        RTIXCdrTypePluginProgramContext_INTIALIZER;
    struct PRESTypePlugin plugin;
    struct PRESTypePluginDefaultEndpointData epd;

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, length);

    epd.programContext = defaultProgramContext;
    epd._participantData = &pd;
    epd.typePlugin = &plugin;
    epd.programContext.endpointPluginData = &epd;
    plugin.typeCode = (struct RTICdrTypeCode *)(struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type<BigData20M>::get().native();
    pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
        BigData20M,
        true, true, true>();

    epd._assignabilityProperty.acceptUnknownEnumValue = RTI_XCDR_TRUE;
    epd._assignabilityProperty.acceptUnknownUnionDiscriminator = RTI_XCDR_TRUE;

    ::rti::topic::reset_sample(*sample);
    return PRESTypePlugin_interpretedDeserialize(
        (PRESTypePluginEndpointData)&epd,
        sample,
        &stream,
        RTI_TRUE,
        RTI_TRUE,
        NULL);
}

unsigned int
BigData20MPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    try
    {
        unsigned int size;
        RTIBool overflow = RTI_FALSE;

        size = PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
            endpoint_data, &overflow, include_encapsulation, encapsulation_id, current_alignment);

        if (overflow)
        {
            size = RTI_CDR_MAX_SERIALIZED_SIZE;
        }

        return size;
    }
    catch (...)
    {
        return 0;
    }
}

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

PRESTypePluginKeyKind
BigData20MPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

RTIBool BigData20MPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    BigData20M **sample,
    RTIBool *drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    try
    {
        RTIBool result;
        if (drop_sample)
        {
        } /* To avoid warnings */
        stream->_xTypesState.unassignable = RTI_FALSE;
        result = PRESTypePlugin_interpretedDeserializeKey(
            endpoint_data, (sample != NULL) ? *sample : NULL, stream,
            deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
        if (result)
        {
            if (stream->_xTypesState.unassignable)
            {
                result = RTI_FALSE;
            }
        }
        return result;
    }
    catch (...)
    {
        return RTI_FALSE;
    }
}

unsigned int
BigData20MPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    try
    {
        unsigned int size;
        RTIBool overflow = RTI_FALSE;

        size = PRESTypePlugin_interpretedGetSerializedKeyMaxSize(
            endpoint_data, &overflow, include_encapsulation, encapsulation_id, current_alignment);
        if (overflow)
        {
            size = RTI_CDR_MAX_SERIALIZED_SIZE;
        }

        return size;
    }
    catch (...)
    {
        return RTI_FALSE;
    }
}

unsigned int
BigData20MPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = PRESTypePlugin_interpretedGetSerializedKeyMaxSizeForKeyhash(
        endpoint_data,
        &overflow,
        encapsulation_id,
        current_alignment);
    if (overflow)
    {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

/* ------------------------------------------------------------------------
 * Plug-in Installation Methods
 * ------------------------------------------------------------------------ */
struct PRESTypePlugin *BigData20MPlugin_new(void)
{
    struct PRESTypePlugin *plugin = NULL;
    const struct PRESTypePluginVersion PLUGIN_VERSION =
        PRES_TYPE_PLUGIN_VERSION_2_0;

    RTIOsapiHeap_allocateStructure(
        &plugin, struct PRESTypePlugin);
    if (plugin == NULL)
    {
        return NULL;
    }

    plugin->version = PLUGIN_VERSION;

    /* set up parent's function pointers */
    plugin->onParticipantAttached =
        (PRESTypePluginOnParticipantAttachedCallback)
            BigData20MPlugin_on_participant_attached;
    plugin->onParticipantDetached =
        (PRESTypePluginOnParticipantDetachedCallback)
            BigData20MPlugin_on_participant_detached;
    plugin->onEndpointAttached =
        (PRESTypePluginOnEndpointAttachedCallback)
            BigData20MPlugin_on_endpoint_attached;
    plugin->onEndpointDetached =
        (PRESTypePluginOnEndpointDetachedCallback)
            BigData20MPlugin_on_endpoint_detached;

    plugin->copySampleFnc =
        (PRESTypePluginCopySampleFunction)
            BigData20MPlugin_copy_sample;
    plugin->createSampleFnc =
        (PRESTypePluginCreateSampleFunction)
            BigData20MPlugin_create_sample;
    plugin->destroySampleFnc =
        (PRESTypePluginDestroySampleFunction)
            BigData20MPlugin_destroy_sample;

    plugin->serializeFnc =
        (PRESTypePluginSerializeFunction)PRESTypePlugin_interpretedSerialize;
    plugin->deserializeFnc =
        (PRESTypePluginDeserializeFunction)PRESTypePlugin_interpretedDeserializeWithAlloc;
    plugin->getSerializedSampleMaxSizeFnc =
        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            BigData20MPlugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
        (PRESTypePluginGetSerializedSampleMinSizeFunction)
            PRESTypePlugin_interpretedGetSerializedSampleMinSize;
    plugin->getDeserializedSampleMaxSizeFnc = NULL;
    plugin->getSampleFnc =
        (PRESTypePluginGetSampleFunction)
            BigData20MPlugin_get_sample;
    plugin->returnSampleFnc =
        (PRESTypePluginReturnSampleFunction)
            BigData20MPlugin_return_sample;
    plugin->getKeyKindFnc =
        (PRESTypePluginGetKeyKindFunction)
            BigData20MPlugin_get_key_kind;

    /* These functions are only used for keyed types. As this is not a keyed
    type they are all set to NULL
    */
    plugin->serializeKeyFnc = NULL;
    plugin->deserializeKeyFnc = NULL;
    plugin->getKeyFnc = NULL;
    plugin->returnKeyFnc = NULL;
    plugin->instanceToKeyFnc = NULL;
    plugin->keyToInstanceFnc = NULL;
    plugin->getSerializedKeyMaxSizeFnc = NULL;
    plugin->instanceToKeyHashFnc = NULL;
    plugin->serializedSampleToKeyHashFnc = NULL;
    plugin->serializedKeyToKeyHashFnc = NULL;
#ifdef NDDS_STANDALONE_TYPE
    plugin->typeCode = NULL;
#else
    plugin->typeCode = (struct RTICdrTypeCode *)&::rti::topic::dynamic_type<BigData20M>::get().native();
#endif
    plugin->languageKind = PRES_TYPEPLUGIN_CPPSTL_LANG;

    /* Serialized buffer */
    plugin->getBuffer =
        (PRESTypePluginGetBufferFunction)
            BigData20MPlugin_get_buffer;
    plugin->returnBuffer =
        (PRESTypePluginReturnBufferFunction)
            BigData20MPlugin_return_buffer;
    plugin->getBufferWithParams = NULL;
    plugin->returnBufferWithParams = NULL;
    plugin->getSerializedSampleSizeFnc =
        (PRESTypePluginGetSerializedSampleSizeFunction)
            PRESTypePlugin_interpretedGetSerializedSampleSize;

    plugin->getWriterLoanedSampleFnc = NULL;
    plugin->returnWriterLoanedSampleFnc = NULL;
    plugin->returnWriterLoanedSampleFromCookieFnc = NULL;
    plugin->validateWriterLoanedSampleFnc = NULL;
    plugin->setWriterLoanedSampleSerializedStateFnc = NULL;

    static const char *TYPE_NAME = "BigData20M";
    plugin->endpointTypeName = TYPE_NAME;
    plugin->isMetpType = RTI_FALSE;
    return plugin;
}

void BigData20MPlugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
}

/* ----------------------------------------------------------------------------
 *  Type BigData30M
 * -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

BigData30M *
BigData30MPluginSupport_create_data(void)
{
    try
    {
        BigData30M *sample = new BigData30M();
        ::rti::topic::allocate_sample(*sample);
        return sample;
    }
    catch (...)
    {
        return NULL;
    }
}

void BigData30MPluginSupport_destroy_data(
    BigData30M *sample)
{
    delete sample;
}

RTIBool
BigData30MPluginSupport_copy_data(
    BigData30M *dst,
    const BigData30M *src)
{
    try
    {
        *dst = *src;
    }
    catch (...)
    {
        return RTI_FALSE;
    }

    return RTI_TRUE;
}

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

PRESTypePluginParticipantData
BigData30MPlugin_on_participant_attached(
    void *registration_data,
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration,
    void *container_plugin_context,
    RTICdrTypeCode *type_code)
{
    struct RTIXCdrInterpreterPrograms *programs = NULL;
    struct PRESTypePluginDefaultParticipantData *pd = NULL;
    struct RTIXCdrInterpreterProgramsGenProperty programProperty =
        RTIXCdrInterpreterProgramsGenProperty_INITIALIZER;
    if (registration_data)
    {
    } /* To avoid warnings */
    if (participant_info)
    {
    } /* To avoid warnings */
    if (top_level_registration)
    {
    } /* To avoid warnings */
    if (container_plugin_context)
    {
    } /* To avoid warnings */
    if (type_code)
    {
    } /* To avoid warnings */
    pd = (struct PRESTypePluginDefaultParticipantData *)
        PRESTypePluginDefaultParticipantData_new(participant_info);

    programProperty.generateV1Encapsulation = RTI_XCDR_TRUE;
    programProperty.generateV2Encapsulation = RTI_XCDR_TRUE;
    programProperty.resolveAlias = RTI_XCDR_TRUE;
    programProperty.inlineStruct = RTI_XCDR_TRUE;
    programProperty.optimizeEnum = RTI_XCDR_TRUE;

    programProperty.externalReferenceSize =
        (RTIXCdrUnsignedShort)sizeof(::dds::core::external<char>);
    programProperty.getExternalRefPointerFcn =
        ::rti::topic::interpreter::get_external_value_pointer;

    programs = DDS_TypeCodeFactory_assert_programs_in_global_list(
        DDS_TypeCodeFactory_get_instance(),
        (DDS_TypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type<BigData30M>::get().native(),
        &programProperty,
        RTI_XCDR_PROGRAM_MASK_TYPEPLUGIN);

    if (programs == NULL)
    {
        PRESTypePluginDefaultParticipantData_delete(
            (PRESTypePluginParticipantData)pd);
        return NULL;
    }

    pd->programs = programs;
    return (PRESTypePluginParticipantData)pd;
}

void BigData30MPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data)
{
    if (participant_data != NULL)
    {
        struct PRESTypePluginDefaultParticipantData *pd =
            (struct PRESTypePluginDefaultParticipantData *)participant_data;

        if (pd->programs != NULL)
        {
            DDS_TypeCodeFactory_remove_programs_from_global_list(
                DDS_TypeCodeFactory_get_instance(),
                pd->programs);
            pd->programs = NULL;
        }
        PRESTypePluginDefaultParticipantData_delete(participant_data);
    }
}

PRESTypePluginEndpointData
BigData30MPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration,
    void *containerPluginContext)
{
    try
    {
        PRESTypePluginEndpointData epd = NULL;
        unsigned int serializedSampleMaxSize = 0;

        if (top_level_registration)
        {
        } /* To avoid warnings */
        if (containerPluginContext)
        {
        } /* To avoid warnings */

        if (participant_data == NULL)
        {
            return NULL;
        }

        epd = PRESTypePluginDefaultEndpointData_new(
            participant_data,
            endpoint_info,
            (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
                BigData30MPluginSupport_create_data,
            (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                BigData30MPluginSupport_destroy_data,
            NULL, NULL);

        if (epd == NULL)
        {
            return NULL;
        }

        if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER)
        {
            serializedSampleMaxSize = BigData30MPlugin_get_serialized_sample_max_size(
                epd, RTI_FALSE, RTI_CDR_ENCAPSULATION_ID_CDR_BE, 0);
            PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

            if (PRESTypePluginDefaultEndpointData_createWriterPool(
                    epd,
                    endpoint_info,
                    (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                        BigData30MPlugin_get_serialized_sample_max_size,
                    epd,
                    (PRESTypePluginGetSerializedSampleSizeFunction)
                        PRESTypePlugin_interpretedGetSerializedSampleSize,
                    epd) == RTI_FALSE)
            {
                PRESTypePluginDefaultEndpointData_delete(epd);
                return NULL;
            }
        }

        return epd;
    }
    catch (...)
    {
        return NULL;
    }
}

void BigData30MPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{
    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}

void BigData30MPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    BigData30M *sample,
    void *handle)
{
    try
    {
        ::rti::topic::reset_sample(*sample);
    }
    catch (const std::exception &ex)
    {
        RTICdrLog_logWithFunctionName(
            RTI_LOG_BIT_EXCEPTION,
            "BigData30MPlugin_return_sample",
            &RTI_LOG_ANY_FAILURE_ss,
            "exception: ",
            ex.what());
    }

    PRESTypePluginDefaultEndpointData_returnSample(
        endpoint_data, sample, handle);
}

RTIBool
BigData30MPlugin_copy_sample(
    PRESTypePluginEndpointData,
    BigData30M *dst,
    const BigData30M *src)
{
    return BigData30MPluginSupport_copy_data(dst, src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int
BigData30MPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

RTIBool
BigData30MPlugin_serialize_to_cdr_buffer(
    char *buffer,
    unsigned int *length,
    const BigData30M *sample,
    ::dds::core::policy::DataRepresentationId representation)
{
    using namespace ::dds::core::policy;

    try
    {
        RTIEncapsulationId encapsulationId = RTI_CDR_ENCAPSULATION_ID_INVALID;
        struct RTICdrStream stream;
        struct PRESTypePluginDefaultEndpointData epd;
        RTIBool result;
        struct PRESTypePluginDefaultParticipantData pd;
        struct RTIXCdrTypePluginProgramContext defaultProgramContext =
            RTIXCdrTypePluginProgramContext_INTIALIZER;
        struct PRESTypePlugin plugin = PRES_TYPEPLUGIN_DEFAULT;

        if (length == NULL)
        {
            return RTI_FALSE;
        }

        RTIOsapiMemory_zero(&epd, sizeof(struct PRESTypePluginDefaultEndpointData));
        epd.programContext = defaultProgramContext;
        epd._participantData = &pd;
        epd.typePlugin = &plugin;
        epd.programContext.endpointPluginData = &epd;
        plugin.typeCode = (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type<BigData30M>::get().native();
        pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
            BigData30M,
            true, true, true>();

        encapsulationId = DDS_TypeCode_get_native_encapsulation(
            (DDS_TypeCode *)plugin.typeCode,
            representation);

        if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID)
        {
            return RTI_FALSE;
        }

        epd._maxSizeSerializedSample =
            BigData30MPlugin_get_serialized_sample_max_size(
                (PRESTypePluginEndpointData)&epd,
                RTI_TRUE,
                encapsulationId,
                0);

        if (buffer == NULL)
        {
            *length =
                PRESTypePlugin_interpretedGetSerializedSampleSize(
                    (PRESTypePluginEndpointData)&epd,
                    RTI_TRUE,
                    encapsulationId,
                    0,
                    sample);

            if (*length == 0)
            {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        RTICdrStream_init(&stream);
        RTICdrStream_set(&stream, (char *)buffer, *length);

        result = PRESTypePlugin_interpretedSerialize(
            (PRESTypePluginEndpointData)&epd,
            sample,
            &stream,
            RTI_TRUE,
            encapsulationId,
            RTI_TRUE,
            NULL);

        *length = RTICdrStream_getCurrentPositionOffset(&stream);
        return result;
    }
    catch (...)
    {
        return RTI_FALSE;
    }
}

RTIBool
BigData30MPlugin_deserialize_from_cdr_buffer(
    BigData30M *sample,
    const char *buffer,
    unsigned int length)
{
    struct RTICdrStream stream;
    struct PRESTypePluginDefaultParticipantData pd;
    struct RTIXCdrTypePluginProgramContext defaultProgramContext =
        RTIXCdrTypePluginProgramContext_INTIALIZER;
    struct PRESTypePlugin plugin;
    struct PRESTypePluginDefaultEndpointData epd;

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, length);

    epd.programContext = defaultProgramContext;
    epd._participantData = &pd;
    epd.typePlugin = &plugin;
    epd.programContext.endpointPluginData = &epd;
    plugin.typeCode = (struct RTICdrTypeCode *)(struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type<BigData30M>::get().native();
    pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
        BigData30M,
        true, true, true>();

    epd._assignabilityProperty.acceptUnknownEnumValue = RTI_XCDR_TRUE;
    epd._assignabilityProperty.acceptUnknownUnionDiscriminator = RTI_XCDR_TRUE;

    ::rti::topic::reset_sample(*sample);
    return PRESTypePlugin_interpretedDeserialize(
        (PRESTypePluginEndpointData)&epd,
        sample,
        &stream,
        RTI_TRUE,
        RTI_TRUE,
        NULL);
}

unsigned int
BigData30MPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    try
    {
        unsigned int size;
        RTIBool overflow = RTI_FALSE;

        size = PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
            endpoint_data, &overflow, include_encapsulation, encapsulation_id, current_alignment);

        if (overflow)
        {
            size = RTI_CDR_MAX_SERIALIZED_SIZE;
        }

        return size;
    }
    catch (...)
    {
        return 0;
    }
}

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

PRESTypePluginKeyKind
BigData30MPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

RTIBool BigData30MPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    BigData30M **sample,
    RTIBool *drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    try
    {
        RTIBool result;
        if (drop_sample)
        {
        } /* To avoid warnings */
        stream->_xTypesState.unassignable = RTI_FALSE;
        result = PRESTypePlugin_interpretedDeserializeKey(
            endpoint_data, (sample != NULL) ? *sample : NULL, stream,
            deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
        if (result)
        {
            if (stream->_xTypesState.unassignable)
            {
                result = RTI_FALSE;
            }
        }
        return result;
    }
    catch (...)
    {
        return RTI_FALSE;
    }
}

unsigned int
BigData30MPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    try
    {
        unsigned int size;
        RTIBool overflow = RTI_FALSE;

        size = PRESTypePlugin_interpretedGetSerializedKeyMaxSize(
            endpoint_data, &overflow, include_encapsulation, encapsulation_id, current_alignment);
        if (overflow)
        {
            size = RTI_CDR_MAX_SERIALIZED_SIZE;
        }

        return size;
    }
    catch (...)
    {
        return RTI_FALSE;
    }
}

unsigned int
BigData30MPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = PRESTypePlugin_interpretedGetSerializedKeyMaxSizeForKeyhash(
        endpoint_data,
        &overflow,
        encapsulation_id,
        current_alignment);
    if (overflow)
    {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

/* ------------------------------------------------------------------------
 * Plug-in Installation Methods
 * ------------------------------------------------------------------------ */
struct PRESTypePlugin *BigData30MPlugin_new(void)
{
    struct PRESTypePlugin *plugin = NULL;
    const struct PRESTypePluginVersion PLUGIN_VERSION =
        PRES_TYPE_PLUGIN_VERSION_2_0;

    RTIOsapiHeap_allocateStructure(
        &plugin, struct PRESTypePlugin);
    if (plugin == NULL)
    {
        return NULL;
    }

    plugin->version = PLUGIN_VERSION;

    /* set up parent's function pointers */
    plugin->onParticipantAttached =
        (PRESTypePluginOnParticipantAttachedCallback)
            BigData30MPlugin_on_participant_attached;
    plugin->onParticipantDetached =
        (PRESTypePluginOnParticipantDetachedCallback)
            BigData30MPlugin_on_participant_detached;
    plugin->onEndpointAttached =
        (PRESTypePluginOnEndpointAttachedCallback)
            BigData30MPlugin_on_endpoint_attached;
    plugin->onEndpointDetached =
        (PRESTypePluginOnEndpointDetachedCallback)
            BigData30MPlugin_on_endpoint_detached;

    plugin->copySampleFnc =
        (PRESTypePluginCopySampleFunction)
            BigData30MPlugin_copy_sample;
    plugin->createSampleFnc =
        (PRESTypePluginCreateSampleFunction)
            BigData30MPlugin_create_sample;
    plugin->destroySampleFnc =
        (PRESTypePluginDestroySampleFunction)
            BigData30MPlugin_destroy_sample;

    plugin->serializeFnc =
        (PRESTypePluginSerializeFunction)PRESTypePlugin_interpretedSerialize;
    plugin->deserializeFnc =
        (PRESTypePluginDeserializeFunction)PRESTypePlugin_interpretedDeserializeWithAlloc;
    plugin->getSerializedSampleMaxSizeFnc =
        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            BigData30MPlugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
        (PRESTypePluginGetSerializedSampleMinSizeFunction)
            PRESTypePlugin_interpretedGetSerializedSampleMinSize;
    plugin->getDeserializedSampleMaxSizeFnc = NULL;
    plugin->getSampleFnc =
        (PRESTypePluginGetSampleFunction)
            BigData30MPlugin_get_sample;
    plugin->returnSampleFnc =
        (PRESTypePluginReturnSampleFunction)
            BigData30MPlugin_return_sample;
    plugin->getKeyKindFnc =
        (PRESTypePluginGetKeyKindFunction)
            BigData30MPlugin_get_key_kind;

    /* These functions are only used for keyed types. As this is not a keyed
    type they are all set to NULL
    */
    plugin->serializeKeyFnc = NULL;
    plugin->deserializeKeyFnc = NULL;
    plugin->getKeyFnc = NULL;
    plugin->returnKeyFnc = NULL;
    plugin->instanceToKeyFnc = NULL;
    plugin->keyToInstanceFnc = NULL;
    plugin->getSerializedKeyMaxSizeFnc = NULL;
    plugin->instanceToKeyHashFnc = NULL;
    plugin->serializedSampleToKeyHashFnc = NULL;
    plugin->serializedKeyToKeyHashFnc = NULL;
#ifdef NDDS_STANDALONE_TYPE
    plugin->typeCode = NULL;
#else
    plugin->typeCode = (struct RTICdrTypeCode *)&::rti::topic::dynamic_type<BigData30M>::get().native();
#endif
    plugin->languageKind = PRES_TYPEPLUGIN_CPPSTL_LANG;

    /* Serialized buffer */
    plugin->getBuffer =
        (PRESTypePluginGetBufferFunction)
            BigData30MPlugin_get_buffer;
    plugin->returnBuffer =
        (PRESTypePluginReturnBufferFunction)
            BigData30MPlugin_return_buffer;
    plugin->getBufferWithParams = NULL;
    plugin->returnBufferWithParams = NULL;
    plugin->getSerializedSampleSizeFnc =
        (PRESTypePluginGetSerializedSampleSizeFunction)
            PRESTypePlugin_interpretedGetSerializedSampleSize;

    plugin->getWriterLoanedSampleFnc = NULL;
    plugin->returnWriterLoanedSampleFnc = NULL;
    plugin->returnWriterLoanedSampleFromCookieFnc = NULL;
    plugin->validateWriterLoanedSampleFnc = NULL;
    plugin->setWriterLoanedSampleSerializedStateFnc = NULL;

    static const char *TYPE_NAME = "BigData30M";
    plugin->endpointTypeName = TYPE_NAME;
    plugin->isMetpType = RTI_FALSE;
    return plugin;
}

void BigData30MPlugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
}

/* ----------------------------------------------------------------------------
 *  Type BigData40M
 * -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

BigData40M *
BigData40MPluginSupport_create_data(void)
{
    try
    {
        BigData40M *sample = new BigData40M();
        ::rti::topic::allocate_sample(*sample);
        return sample;
    }
    catch (...)
    {
        return NULL;
    }
}

void BigData40MPluginSupport_destroy_data(
    BigData40M *sample)
{
    delete sample;
}

RTIBool
BigData40MPluginSupport_copy_data(
    BigData40M *dst,
    const BigData40M *src)
{
    try
    {
        *dst = *src;
    }
    catch (...)
    {
        return RTI_FALSE;
    }

    return RTI_TRUE;
}

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

PRESTypePluginParticipantData
BigData40MPlugin_on_participant_attached(
    void *registration_data,
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration,
    void *container_plugin_context,
    RTICdrTypeCode *type_code)
{
    struct RTIXCdrInterpreterPrograms *programs = NULL;
    struct PRESTypePluginDefaultParticipantData *pd = NULL;
    struct RTIXCdrInterpreterProgramsGenProperty programProperty =
        RTIXCdrInterpreterProgramsGenProperty_INITIALIZER;
    if (registration_data)
    {
    } /* To avoid warnings */
    if (participant_info)
    {
    } /* To avoid warnings */
    if (top_level_registration)
    {
    } /* To avoid warnings */
    if (container_plugin_context)
    {
    } /* To avoid warnings */
    if (type_code)
    {
    } /* To avoid warnings */
    pd = (struct PRESTypePluginDefaultParticipantData *)
        PRESTypePluginDefaultParticipantData_new(participant_info);

    programProperty.generateV1Encapsulation = RTI_XCDR_TRUE;
    programProperty.generateV2Encapsulation = RTI_XCDR_TRUE;
    programProperty.resolveAlias = RTI_XCDR_TRUE;
    programProperty.inlineStruct = RTI_XCDR_TRUE;
    programProperty.optimizeEnum = RTI_XCDR_TRUE;

    programProperty.externalReferenceSize =
        (RTIXCdrUnsignedShort)sizeof(::dds::core::external<char>);
    programProperty.getExternalRefPointerFcn =
        ::rti::topic::interpreter::get_external_value_pointer;

    programs = DDS_TypeCodeFactory_assert_programs_in_global_list(
        DDS_TypeCodeFactory_get_instance(),
        (DDS_TypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type<BigData40M>::get().native(),
        &programProperty,
        RTI_XCDR_PROGRAM_MASK_TYPEPLUGIN);

    if (programs == NULL)
    {
        PRESTypePluginDefaultParticipantData_delete(
            (PRESTypePluginParticipantData)pd);
        return NULL;
    }

    pd->programs = programs;
    return (PRESTypePluginParticipantData)pd;
}

void BigData40MPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data)
{
    if (participant_data != NULL)
    {
        struct PRESTypePluginDefaultParticipantData *pd =
            (struct PRESTypePluginDefaultParticipantData *)participant_data;

        if (pd->programs != NULL)
        {
            DDS_TypeCodeFactory_remove_programs_from_global_list(
                DDS_TypeCodeFactory_get_instance(),
                pd->programs);
            pd->programs = NULL;
        }
        PRESTypePluginDefaultParticipantData_delete(participant_data);
    }
}

PRESTypePluginEndpointData
BigData40MPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration,
    void *containerPluginContext)
{
    try
    {
        PRESTypePluginEndpointData epd = NULL;
        unsigned int serializedSampleMaxSize = 0;

        if (top_level_registration)
        {
        } /* To avoid warnings */
        if (containerPluginContext)
        {
        } /* To avoid warnings */

        if (participant_data == NULL)
        {
            return NULL;
        }

        epd = PRESTypePluginDefaultEndpointData_new(
            participant_data,
            endpoint_info,
            (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
                BigData40MPluginSupport_create_data,
            (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                BigData40MPluginSupport_destroy_data,
            NULL, NULL);

        if (epd == NULL)
        {
            return NULL;
        }

        if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER)
        {
            serializedSampleMaxSize = BigData40MPlugin_get_serialized_sample_max_size(
                epd, RTI_FALSE, RTI_CDR_ENCAPSULATION_ID_CDR_BE, 0);
            PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

            if (PRESTypePluginDefaultEndpointData_createWriterPool(
                    epd,
                    endpoint_info,
                    (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                        BigData40MPlugin_get_serialized_sample_max_size,
                    epd,
                    (PRESTypePluginGetSerializedSampleSizeFunction)
                        PRESTypePlugin_interpretedGetSerializedSampleSize,
                    epd) == RTI_FALSE)
            {
                PRESTypePluginDefaultEndpointData_delete(epd);
                return NULL;
            }
        }

        return epd;
    }
    catch (...)
    {
        return NULL;
    }
}

void BigData40MPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{
    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}

void BigData40MPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    BigData40M *sample,
    void *handle)
{
    try
    {
        ::rti::topic::reset_sample(*sample);
    }
    catch (const std::exception &ex)
    {
        RTICdrLog_logWithFunctionName(
            RTI_LOG_BIT_EXCEPTION,
            "BigData40MPlugin_return_sample",
            &RTI_LOG_ANY_FAILURE_ss,
            "exception: ",
            ex.what());
    }

    PRESTypePluginDefaultEndpointData_returnSample(
        endpoint_data, sample, handle);
}

RTIBool
BigData40MPlugin_copy_sample(
    PRESTypePluginEndpointData,
    BigData40M *dst,
    const BigData40M *src)
{
    return BigData40MPluginSupport_copy_data(dst, src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int
BigData40MPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

RTIBool
BigData40MPlugin_serialize_to_cdr_buffer(
    char *buffer,
    unsigned int *length,
    const BigData40M *sample,
    ::dds::core::policy::DataRepresentationId representation)
{
    using namespace ::dds::core::policy;

    try
    {
        RTIEncapsulationId encapsulationId = RTI_CDR_ENCAPSULATION_ID_INVALID;
        struct RTICdrStream stream;
        struct PRESTypePluginDefaultEndpointData epd;
        RTIBool result;
        struct PRESTypePluginDefaultParticipantData pd;
        struct RTIXCdrTypePluginProgramContext defaultProgramContext =
            RTIXCdrTypePluginProgramContext_INTIALIZER;
        struct PRESTypePlugin plugin = PRES_TYPEPLUGIN_DEFAULT;

        if (length == NULL)
        {
            return RTI_FALSE;
        }

        RTIOsapiMemory_zero(&epd, sizeof(struct PRESTypePluginDefaultEndpointData));
        epd.programContext = defaultProgramContext;
        epd._participantData = &pd;
        epd.typePlugin = &plugin;
        epd.programContext.endpointPluginData = &epd;
        plugin.typeCode = (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type<BigData40M>::get().native();
        pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
            BigData40M,
            true, true, true>();

        encapsulationId = DDS_TypeCode_get_native_encapsulation(
            (DDS_TypeCode *)plugin.typeCode,
            representation);

        if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID)
        {
            return RTI_FALSE;
        }

        epd._maxSizeSerializedSample =
            BigData40MPlugin_get_serialized_sample_max_size(
                (PRESTypePluginEndpointData)&epd,
                RTI_TRUE,
                encapsulationId,
                0);

        if (buffer == NULL)
        {
            *length =
                PRESTypePlugin_interpretedGetSerializedSampleSize(
                    (PRESTypePluginEndpointData)&epd,
                    RTI_TRUE,
                    encapsulationId,
                    0,
                    sample);

            if (*length == 0)
            {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        RTICdrStream_init(&stream);
        RTICdrStream_set(&stream, (char *)buffer, *length);

        result = PRESTypePlugin_interpretedSerialize(
            (PRESTypePluginEndpointData)&epd,
            sample,
            &stream,
            RTI_TRUE,
            encapsulationId,
            RTI_TRUE,
            NULL);

        *length = RTICdrStream_getCurrentPositionOffset(&stream);
        return result;
    }
    catch (...)
    {
        return RTI_FALSE;
    }
}

RTIBool
BigData40MPlugin_deserialize_from_cdr_buffer(
    BigData40M *sample,
    const char *buffer,
    unsigned int length)
{
    struct RTICdrStream stream;
    struct PRESTypePluginDefaultParticipantData pd;
    struct RTIXCdrTypePluginProgramContext defaultProgramContext =
        RTIXCdrTypePluginProgramContext_INTIALIZER;
    struct PRESTypePlugin plugin;
    struct PRESTypePluginDefaultEndpointData epd;

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, length);

    epd.programContext = defaultProgramContext;
    epd._participantData = &pd;
    epd.typePlugin = &plugin;
    epd.programContext.endpointPluginData = &epd;
    plugin.typeCode = (struct RTICdrTypeCode *)(struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type<BigData40M>::get().native();
    pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
        BigData40M,
        true, true, true>();

    epd._assignabilityProperty.acceptUnknownEnumValue = RTI_XCDR_TRUE;
    epd._assignabilityProperty.acceptUnknownUnionDiscriminator = RTI_XCDR_TRUE;

    ::rti::topic::reset_sample(*sample);
    return PRESTypePlugin_interpretedDeserialize(
        (PRESTypePluginEndpointData)&epd,
        sample,
        &stream,
        RTI_TRUE,
        RTI_TRUE,
        NULL);
}

unsigned int
BigData40MPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    try
    {
        unsigned int size;
        RTIBool overflow = RTI_FALSE;

        size = PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
            endpoint_data, &overflow, include_encapsulation, encapsulation_id, current_alignment);

        if (overflow)
        {
            size = RTI_CDR_MAX_SERIALIZED_SIZE;
        }

        return size;
    }
    catch (...)
    {
        return 0;
    }
}

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

PRESTypePluginKeyKind
BigData40MPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

RTIBool BigData40MPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    BigData40M **sample,
    RTIBool *drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    try
    {
        RTIBool result;
        if (drop_sample)
        {
        } /* To avoid warnings */
        stream->_xTypesState.unassignable = RTI_FALSE;
        result = PRESTypePlugin_interpretedDeserializeKey(
            endpoint_data, (sample != NULL) ? *sample : NULL, stream,
            deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
        if (result)
        {
            if (stream->_xTypesState.unassignable)
            {
                result = RTI_FALSE;
            }
        }
        return result;
    }
    catch (...)
    {
        return RTI_FALSE;
    }
}

unsigned int
BigData40MPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    try
    {
        unsigned int size;
        RTIBool overflow = RTI_FALSE;

        size = PRESTypePlugin_interpretedGetSerializedKeyMaxSize(
            endpoint_data, &overflow, include_encapsulation, encapsulation_id, current_alignment);
        if (overflow)
        {
            size = RTI_CDR_MAX_SERIALIZED_SIZE;
        }

        return size;
    }
    catch (...)
    {
        return RTI_FALSE;
    }
}

unsigned int
BigData40MPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = PRESTypePlugin_interpretedGetSerializedKeyMaxSizeForKeyhash(
        endpoint_data,
        &overflow,
        encapsulation_id,
        current_alignment);
    if (overflow)
    {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

/* ------------------------------------------------------------------------
 * Plug-in Installation Methods
 * ------------------------------------------------------------------------ */
struct PRESTypePlugin *BigData40MPlugin_new(void)
{
    struct PRESTypePlugin *plugin = NULL;
    const struct PRESTypePluginVersion PLUGIN_VERSION =
        PRES_TYPE_PLUGIN_VERSION_2_0;

    RTIOsapiHeap_allocateStructure(
        &plugin, struct PRESTypePlugin);
    if (plugin == NULL)
    {
        return NULL;
    }

    plugin->version = PLUGIN_VERSION;

    /* set up parent's function pointers */
    plugin->onParticipantAttached =
        (PRESTypePluginOnParticipantAttachedCallback)
            BigData40MPlugin_on_participant_attached;
    plugin->onParticipantDetached =
        (PRESTypePluginOnParticipantDetachedCallback)
            BigData40MPlugin_on_participant_detached;
    plugin->onEndpointAttached =
        (PRESTypePluginOnEndpointAttachedCallback)
            BigData40MPlugin_on_endpoint_attached;
    plugin->onEndpointDetached =
        (PRESTypePluginOnEndpointDetachedCallback)
            BigData40MPlugin_on_endpoint_detached;

    plugin->copySampleFnc =
        (PRESTypePluginCopySampleFunction)
            BigData40MPlugin_copy_sample;
    plugin->createSampleFnc =
        (PRESTypePluginCreateSampleFunction)
            BigData40MPlugin_create_sample;
    plugin->destroySampleFnc =
        (PRESTypePluginDestroySampleFunction)
            BigData40MPlugin_destroy_sample;

    plugin->serializeFnc =
        (PRESTypePluginSerializeFunction)PRESTypePlugin_interpretedSerialize;
    plugin->deserializeFnc =
        (PRESTypePluginDeserializeFunction)PRESTypePlugin_interpretedDeserializeWithAlloc;
    plugin->getSerializedSampleMaxSizeFnc =
        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            BigData40MPlugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
        (PRESTypePluginGetSerializedSampleMinSizeFunction)
            PRESTypePlugin_interpretedGetSerializedSampleMinSize;
    plugin->getDeserializedSampleMaxSizeFnc = NULL;
    plugin->getSampleFnc =
        (PRESTypePluginGetSampleFunction)
            BigData40MPlugin_get_sample;
    plugin->returnSampleFnc =
        (PRESTypePluginReturnSampleFunction)
            BigData40MPlugin_return_sample;
    plugin->getKeyKindFnc =
        (PRESTypePluginGetKeyKindFunction)
            BigData40MPlugin_get_key_kind;

    /* These functions are only used for keyed types. As this is not a keyed
    type they are all set to NULL
    */
    plugin->serializeKeyFnc = NULL;
    plugin->deserializeKeyFnc = NULL;
    plugin->getKeyFnc = NULL;
    plugin->returnKeyFnc = NULL;
    plugin->instanceToKeyFnc = NULL;
    plugin->keyToInstanceFnc = NULL;
    plugin->getSerializedKeyMaxSizeFnc = NULL;
    plugin->instanceToKeyHashFnc = NULL;
    plugin->serializedSampleToKeyHashFnc = NULL;
    plugin->serializedKeyToKeyHashFnc = NULL;
#ifdef NDDS_STANDALONE_TYPE
    plugin->typeCode = NULL;
#else
    plugin->typeCode = (struct RTICdrTypeCode *)&::rti::topic::dynamic_type<BigData40M>::get().native();
#endif
    plugin->languageKind = PRES_TYPEPLUGIN_CPPSTL_LANG;

    /* Serialized buffer */
    plugin->getBuffer =
        (PRESTypePluginGetBufferFunction)
            BigData40MPlugin_get_buffer;
    plugin->returnBuffer =
        (PRESTypePluginReturnBufferFunction)
            BigData40MPlugin_return_buffer;
    plugin->getBufferWithParams = NULL;
    plugin->returnBufferWithParams = NULL;
    plugin->getSerializedSampleSizeFnc =
        (PRESTypePluginGetSerializedSampleSizeFunction)
            PRESTypePlugin_interpretedGetSerializedSampleSize;

    plugin->getWriterLoanedSampleFnc = NULL;
    plugin->returnWriterLoanedSampleFnc = NULL;
    plugin->returnWriterLoanedSampleFromCookieFnc = NULL;
    plugin->validateWriterLoanedSampleFnc = NULL;
    plugin->setWriterLoanedSampleSerializedStateFnc = NULL;

    static const char *TYPE_NAME = "BigData40M";
    plugin->endpointTypeName = TYPE_NAME;
    plugin->isMetpType = RTI_FALSE;
    return plugin;
}

void BigData40MPlugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
}

/* ----------------------------------------------------------------------------
 *  Type BigData50M
 * -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

BigData50M *
BigData50MPluginSupport_create_data(void)
{
    try
    {
        BigData50M *sample = new BigData50M();
        ::rti::topic::allocate_sample(*sample);
        return sample;
    }
    catch (...)
    {
        return NULL;
    }
}

void BigData50MPluginSupport_destroy_data(
    BigData50M *sample)
{
    delete sample;
}

RTIBool
BigData50MPluginSupport_copy_data(
    BigData50M *dst,
    const BigData50M *src)
{
    try
    {
        *dst = *src;
    }
    catch (...)
    {
        return RTI_FALSE;
    }

    return RTI_TRUE;
}

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

PRESTypePluginParticipantData
BigData50MPlugin_on_participant_attached(
    void *registration_data,
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration,
    void *container_plugin_context,
    RTICdrTypeCode *type_code)
{
    struct RTIXCdrInterpreterPrograms *programs = NULL;
    struct PRESTypePluginDefaultParticipantData *pd = NULL;
    struct RTIXCdrInterpreterProgramsGenProperty programProperty =
        RTIXCdrInterpreterProgramsGenProperty_INITIALIZER;
    if (registration_data)
    {
    } /* To avoid warnings */
    if (participant_info)
    {
    } /* To avoid warnings */
    if (top_level_registration)
    {
    } /* To avoid warnings */
    if (container_plugin_context)
    {
    } /* To avoid warnings */
    if (type_code)
    {
    } /* To avoid warnings */
    pd = (struct PRESTypePluginDefaultParticipantData *)
        PRESTypePluginDefaultParticipantData_new(participant_info);

    programProperty.generateV1Encapsulation = RTI_XCDR_TRUE;
    programProperty.generateV2Encapsulation = RTI_XCDR_TRUE;
    programProperty.resolveAlias = RTI_XCDR_TRUE;
    programProperty.inlineStruct = RTI_XCDR_TRUE;
    programProperty.optimizeEnum = RTI_XCDR_TRUE;

    programProperty.externalReferenceSize =
        (RTIXCdrUnsignedShort)sizeof(::dds::core::external<char>);
    programProperty.getExternalRefPointerFcn =
        ::rti::topic::interpreter::get_external_value_pointer;

    programs = DDS_TypeCodeFactory_assert_programs_in_global_list(
        DDS_TypeCodeFactory_get_instance(),
        (DDS_TypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type<BigData50M>::get().native(),
        &programProperty,
        RTI_XCDR_PROGRAM_MASK_TYPEPLUGIN);

    if (programs == NULL)
    {
        PRESTypePluginDefaultParticipantData_delete(
            (PRESTypePluginParticipantData)pd);
        return NULL;
    }

    pd->programs = programs;
    return (PRESTypePluginParticipantData)pd;
}

void BigData50MPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data)
{
    if (participant_data != NULL)
    {
        struct PRESTypePluginDefaultParticipantData *pd =
            (struct PRESTypePluginDefaultParticipantData *)participant_data;

        if (pd->programs != NULL)
        {
            DDS_TypeCodeFactory_remove_programs_from_global_list(
                DDS_TypeCodeFactory_get_instance(),
                pd->programs);
            pd->programs = NULL;
        }
        PRESTypePluginDefaultParticipantData_delete(participant_data);
    }
}

PRESTypePluginEndpointData
BigData50MPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration,
    void *containerPluginContext)
{
    try
    {
        PRESTypePluginEndpointData epd = NULL;
        unsigned int serializedSampleMaxSize = 0;

        if (top_level_registration)
        {
        } /* To avoid warnings */
        if (containerPluginContext)
        {
        } /* To avoid warnings */

        if (participant_data == NULL)
        {
            return NULL;
        }

        epd = PRESTypePluginDefaultEndpointData_new(
            participant_data,
            endpoint_info,
            (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
                BigData50MPluginSupport_create_data,
            (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                BigData50MPluginSupport_destroy_data,
            NULL, NULL);

        if (epd == NULL)
        {
            return NULL;
        }

        if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER)
        {
            serializedSampleMaxSize = BigData50MPlugin_get_serialized_sample_max_size(
                epd, RTI_FALSE, RTI_CDR_ENCAPSULATION_ID_CDR_BE, 0);
            PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

            if (PRESTypePluginDefaultEndpointData_createWriterPool(
                    epd,
                    endpoint_info,
                    (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                        BigData50MPlugin_get_serialized_sample_max_size,
                    epd,
                    (PRESTypePluginGetSerializedSampleSizeFunction)
                        PRESTypePlugin_interpretedGetSerializedSampleSize,
                    epd) == RTI_FALSE)
            {
                PRESTypePluginDefaultEndpointData_delete(epd);
                return NULL;
            }
        }

        return epd;
    }
    catch (...)
    {
        return NULL;
    }
}

void BigData50MPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{
    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}

void BigData50MPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    BigData50M *sample,
    void *handle)
{
    try
    {
        ::rti::topic::reset_sample(*sample);
    }
    catch (const std::exception &ex)
    {
        RTICdrLog_logWithFunctionName(
            RTI_LOG_BIT_EXCEPTION,
            "BigData50MPlugin_return_sample",
            &RTI_LOG_ANY_FAILURE_ss,
            "exception: ",
            ex.what());
    }

    PRESTypePluginDefaultEndpointData_returnSample(
        endpoint_data, sample, handle);
}

RTIBool
BigData50MPlugin_copy_sample(
    PRESTypePluginEndpointData,
    BigData50M *dst,
    const BigData50M *src)
{
    return BigData50MPluginSupport_copy_data(dst, src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int
BigData50MPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

RTIBool
BigData50MPlugin_serialize_to_cdr_buffer(
    char *buffer,
    unsigned int *length,
    const BigData50M *sample,
    ::dds::core::policy::DataRepresentationId representation)
{
    using namespace ::dds::core::policy;

    try
    {
        RTIEncapsulationId encapsulationId = RTI_CDR_ENCAPSULATION_ID_INVALID;
        struct RTICdrStream stream;
        struct PRESTypePluginDefaultEndpointData epd;
        RTIBool result;
        struct PRESTypePluginDefaultParticipantData pd;
        struct RTIXCdrTypePluginProgramContext defaultProgramContext =
            RTIXCdrTypePluginProgramContext_INTIALIZER;
        struct PRESTypePlugin plugin = PRES_TYPEPLUGIN_DEFAULT;

        if (length == NULL)
        {
            return RTI_FALSE;
        }

        RTIOsapiMemory_zero(&epd, sizeof(struct PRESTypePluginDefaultEndpointData));
        epd.programContext = defaultProgramContext;
        epd._participantData = &pd;
        epd.typePlugin = &plugin;
        epd.programContext.endpointPluginData = &epd;
        plugin.typeCode = (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type<BigData50M>::get().native();
        pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
            BigData50M,
            true, true, true>();

        encapsulationId = DDS_TypeCode_get_native_encapsulation(
            (DDS_TypeCode *)plugin.typeCode,
            representation);

        if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID)
        {
            return RTI_FALSE;
        }

        epd._maxSizeSerializedSample =
            BigData50MPlugin_get_serialized_sample_max_size(
                (PRESTypePluginEndpointData)&epd,
                RTI_TRUE,
                encapsulationId,
                0);

        if (buffer == NULL)
        {
            *length =
                PRESTypePlugin_interpretedGetSerializedSampleSize(
                    (PRESTypePluginEndpointData)&epd,
                    RTI_TRUE,
                    encapsulationId,
                    0,
                    sample);

            if (*length == 0)
            {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        RTICdrStream_init(&stream);
        RTICdrStream_set(&stream, (char *)buffer, *length);

        result = PRESTypePlugin_interpretedSerialize(
            (PRESTypePluginEndpointData)&epd,
            sample,
            &stream,
            RTI_TRUE,
            encapsulationId,
            RTI_TRUE,
            NULL);

        *length = RTICdrStream_getCurrentPositionOffset(&stream);
        return result;
    }
    catch (...)
    {
        return RTI_FALSE;
    }
}

RTIBool
BigData50MPlugin_deserialize_from_cdr_buffer(
    BigData50M *sample,
    const char *buffer,
    unsigned int length)
{
    struct RTICdrStream stream;
    struct PRESTypePluginDefaultParticipantData pd;
    struct RTIXCdrTypePluginProgramContext defaultProgramContext =
        RTIXCdrTypePluginProgramContext_INTIALIZER;
    struct PRESTypePlugin plugin;
    struct PRESTypePluginDefaultEndpointData epd;

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, length);

    epd.programContext = defaultProgramContext;
    epd._participantData = &pd;
    epd.typePlugin = &plugin;
    epd.programContext.endpointPluginData = &epd;
    plugin.typeCode = (struct RTICdrTypeCode *)(struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type<BigData50M>::get().native();
    pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
        BigData50M,
        true, true, true>();

    epd._assignabilityProperty.acceptUnknownEnumValue = RTI_XCDR_TRUE;
    epd._assignabilityProperty.acceptUnknownUnionDiscriminator = RTI_XCDR_TRUE;

    ::rti::topic::reset_sample(*sample);
    return PRESTypePlugin_interpretedDeserialize(
        (PRESTypePluginEndpointData)&epd,
        sample,
        &stream,
        RTI_TRUE,
        RTI_TRUE,
        NULL);
}

unsigned int
BigData50MPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    try
    {
        unsigned int size;
        RTIBool overflow = RTI_FALSE;

        size = PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
            endpoint_data, &overflow, include_encapsulation, encapsulation_id, current_alignment);

        if (overflow)
        {
            size = RTI_CDR_MAX_SERIALIZED_SIZE;
        }

        return size;
    }
    catch (...)
    {
        return 0;
    }
}

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

PRESTypePluginKeyKind
BigData50MPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

RTIBool BigData50MPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    BigData50M **sample,
    RTIBool *drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    try
    {
        RTIBool result;
        if (drop_sample)
        {
        } /* To avoid warnings */
        stream->_xTypesState.unassignable = RTI_FALSE;
        result = PRESTypePlugin_interpretedDeserializeKey(
            endpoint_data, (sample != NULL) ? *sample : NULL, stream,
            deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
        if (result)
        {
            if (stream->_xTypesState.unassignable)
            {
                result = RTI_FALSE;
            }
        }
        return result;
    }
    catch (...)
    {
        return RTI_FALSE;
    }
}

unsigned int
BigData50MPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    try
    {
        unsigned int size;
        RTIBool overflow = RTI_FALSE;

        size = PRESTypePlugin_interpretedGetSerializedKeyMaxSize(
            endpoint_data, &overflow, include_encapsulation, encapsulation_id, current_alignment);
        if (overflow)
        {
            size = RTI_CDR_MAX_SERIALIZED_SIZE;
        }

        return size;
    }
    catch (...)
    {
        return RTI_FALSE;
    }
}

unsigned int
BigData50MPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = PRESTypePlugin_interpretedGetSerializedKeyMaxSizeForKeyhash(
        endpoint_data,
        &overflow,
        encapsulation_id,
        current_alignment);
    if (overflow)
    {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

/* ------------------------------------------------------------------------
 * Plug-in Installation Methods
 * ------------------------------------------------------------------------ */
struct PRESTypePlugin *BigData50MPlugin_new(void)
{
    struct PRESTypePlugin *plugin = NULL;
    const struct PRESTypePluginVersion PLUGIN_VERSION =
        PRES_TYPE_PLUGIN_VERSION_2_0;

    RTIOsapiHeap_allocateStructure(
        &plugin, struct PRESTypePlugin);
    if (plugin == NULL)
    {
        return NULL;
    }

    plugin->version = PLUGIN_VERSION;

    /* set up parent's function pointers */
    plugin->onParticipantAttached =
        (PRESTypePluginOnParticipantAttachedCallback)
            BigData50MPlugin_on_participant_attached;
    plugin->onParticipantDetached =
        (PRESTypePluginOnParticipantDetachedCallback)
            BigData50MPlugin_on_participant_detached;
    plugin->onEndpointAttached =
        (PRESTypePluginOnEndpointAttachedCallback)
            BigData50MPlugin_on_endpoint_attached;
    plugin->onEndpointDetached =
        (PRESTypePluginOnEndpointDetachedCallback)
            BigData50MPlugin_on_endpoint_detached;

    plugin->copySampleFnc =
        (PRESTypePluginCopySampleFunction)
            BigData50MPlugin_copy_sample;
    plugin->createSampleFnc =
        (PRESTypePluginCreateSampleFunction)
            BigData50MPlugin_create_sample;
    plugin->destroySampleFnc =
        (PRESTypePluginDestroySampleFunction)
            BigData50MPlugin_destroy_sample;

    plugin->serializeFnc =
        (PRESTypePluginSerializeFunction)PRESTypePlugin_interpretedSerialize;
    plugin->deserializeFnc =
        (PRESTypePluginDeserializeFunction)PRESTypePlugin_interpretedDeserializeWithAlloc;
    plugin->getSerializedSampleMaxSizeFnc =
        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            BigData50MPlugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
        (PRESTypePluginGetSerializedSampleMinSizeFunction)
            PRESTypePlugin_interpretedGetSerializedSampleMinSize;
    plugin->getDeserializedSampleMaxSizeFnc = NULL;
    plugin->getSampleFnc =
        (PRESTypePluginGetSampleFunction)
            BigData50MPlugin_get_sample;
    plugin->returnSampleFnc =
        (PRESTypePluginReturnSampleFunction)
            BigData50MPlugin_return_sample;
    plugin->getKeyKindFnc =
        (PRESTypePluginGetKeyKindFunction)
            BigData50MPlugin_get_key_kind;

    /* These functions are only used for keyed types. As this is not a keyed
    type they are all set to NULL
    */
    plugin->serializeKeyFnc = NULL;
    plugin->deserializeKeyFnc = NULL;
    plugin->getKeyFnc = NULL;
    plugin->returnKeyFnc = NULL;
    plugin->instanceToKeyFnc = NULL;
    plugin->keyToInstanceFnc = NULL;
    plugin->getSerializedKeyMaxSizeFnc = NULL;
    plugin->instanceToKeyHashFnc = NULL;
    plugin->serializedSampleToKeyHashFnc = NULL;
    plugin->serializedKeyToKeyHashFnc = NULL;
#ifdef NDDS_STANDALONE_TYPE
    plugin->typeCode = NULL;
#else
    plugin->typeCode = (struct RTICdrTypeCode *)&::rti::topic::dynamic_type<BigData50M>::get().native();
#endif
    plugin->languageKind = PRES_TYPEPLUGIN_CPPSTL_LANG;

    /* Serialized buffer */
    plugin->getBuffer =
        (PRESTypePluginGetBufferFunction)
            BigData50MPlugin_get_buffer;
    plugin->returnBuffer =
        (PRESTypePluginReturnBufferFunction)
            BigData50MPlugin_return_buffer;
    plugin->getBufferWithParams = NULL;
    plugin->returnBufferWithParams = NULL;
    plugin->getSerializedSampleSizeFnc =
        (PRESTypePluginGetSerializedSampleSizeFunction)
            PRESTypePlugin_interpretedGetSerializedSampleSize;

    plugin->getWriterLoanedSampleFnc = NULL;
    plugin->returnWriterLoanedSampleFnc = NULL;
    plugin->returnWriterLoanedSampleFromCookieFnc = NULL;
    plugin->validateWriterLoanedSampleFnc = NULL;
    plugin->setWriterLoanedSampleSerializedStateFnc = NULL;

    static const char *TYPE_NAME = "BigData50M";
    plugin->endpointTypeName = TYPE_NAME;
    plugin->isMetpType = RTI_FALSE;
    return plugin;
}

void BigData50MPlugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
}

/* ----------------------------------------------------------------------------
 *  Type BigData60M
 * -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

BigData60M *
BigData60MPluginSupport_create_data(void)
{
    try
    {
        BigData60M *sample = new BigData60M();
        ::rti::topic::allocate_sample(*sample);
        return sample;
    }
    catch (...)
    {
        return NULL;
    }
}

void BigData60MPluginSupport_destroy_data(
    BigData60M *sample)
{
    delete sample;
}

RTIBool
BigData60MPluginSupport_copy_data(
    BigData60M *dst,
    const BigData60M *src)
{
    try
    {
        *dst = *src;
    }
    catch (...)
    {
        return RTI_FALSE;
    }

    return RTI_TRUE;
}

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

PRESTypePluginParticipantData
BigData60MPlugin_on_participant_attached(
    void *registration_data,
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration,
    void *container_plugin_context,
    RTICdrTypeCode *type_code)
{
    struct RTIXCdrInterpreterPrograms *programs = NULL;
    struct PRESTypePluginDefaultParticipantData *pd = NULL;
    struct RTIXCdrInterpreterProgramsGenProperty programProperty =
        RTIXCdrInterpreterProgramsGenProperty_INITIALIZER;
    if (registration_data)
    {
    } /* To avoid warnings */
    if (participant_info)
    {
    } /* To avoid warnings */
    if (top_level_registration)
    {
    } /* To avoid warnings */
    if (container_plugin_context)
    {
    } /* To avoid warnings */
    if (type_code)
    {
    } /* To avoid warnings */
    pd = (struct PRESTypePluginDefaultParticipantData *)
        PRESTypePluginDefaultParticipantData_new(participant_info);

    programProperty.generateV1Encapsulation = RTI_XCDR_TRUE;
    programProperty.generateV2Encapsulation = RTI_XCDR_TRUE;
    programProperty.resolveAlias = RTI_XCDR_TRUE;
    programProperty.inlineStruct = RTI_XCDR_TRUE;
    programProperty.optimizeEnum = RTI_XCDR_TRUE;

    programProperty.externalReferenceSize =
        (RTIXCdrUnsignedShort)sizeof(::dds::core::external<char>);
    programProperty.getExternalRefPointerFcn =
        ::rti::topic::interpreter::get_external_value_pointer;

    programs = DDS_TypeCodeFactory_assert_programs_in_global_list(
        DDS_TypeCodeFactory_get_instance(),
        (DDS_TypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type<BigData60M>::get().native(),
        &programProperty,
        RTI_XCDR_PROGRAM_MASK_TYPEPLUGIN);

    if (programs == NULL)
    {
        PRESTypePluginDefaultParticipantData_delete(
            (PRESTypePluginParticipantData)pd);
        return NULL;
    }

    pd->programs = programs;
    return (PRESTypePluginParticipantData)pd;
}

void BigData60MPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data)
{
    if (participant_data != NULL)
    {
        struct PRESTypePluginDefaultParticipantData *pd =
            (struct PRESTypePluginDefaultParticipantData *)participant_data;

        if (pd->programs != NULL)
        {
            DDS_TypeCodeFactory_remove_programs_from_global_list(
                DDS_TypeCodeFactory_get_instance(),
                pd->programs);
            pd->programs = NULL;
        }
        PRESTypePluginDefaultParticipantData_delete(participant_data);
    }
}

PRESTypePluginEndpointData
BigData60MPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration,
    void *containerPluginContext)
{
    try
    {
        PRESTypePluginEndpointData epd = NULL;
        unsigned int serializedSampleMaxSize = 0;

        if (top_level_registration)
        {
        } /* To avoid warnings */
        if (containerPluginContext)
        {
        } /* To avoid warnings */

        if (participant_data == NULL)
        {
            return NULL;
        }

        epd = PRESTypePluginDefaultEndpointData_new(
            participant_data,
            endpoint_info,
            (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
                BigData60MPluginSupport_create_data,
            (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                BigData60MPluginSupport_destroy_data,
            NULL, NULL);

        if (epd == NULL)
        {
            return NULL;
        }

        if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER)
        {
            serializedSampleMaxSize = BigData60MPlugin_get_serialized_sample_max_size(
                epd, RTI_FALSE, RTI_CDR_ENCAPSULATION_ID_CDR_BE, 0);
            PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

            if (PRESTypePluginDefaultEndpointData_createWriterPool(
                    epd,
                    endpoint_info,
                    (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                        BigData60MPlugin_get_serialized_sample_max_size,
                    epd,
                    (PRESTypePluginGetSerializedSampleSizeFunction)
                        PRESTypePlugin_interpretedGetSerializedSampleSize,
                    epd) == RTI_FALSE)
            {
                PRESTypePluginDefaultEndpointData_delete(epd);
                return NULL;
            }
        }

        return epd;
    }
    catch (...)
    {
        return NULL;
    }
}

void BigData60MPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{
    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}

void BigData60MPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    BigData60M *sample,
    void *handle)
{
    try
    {
        ::rti::topic::reset_sample(*sample);
    }
    catch (const std::exception &ex)
    {
        RTICdrLog_logWithFunctionName(
            RTI_LOG_BIT_EXCEPTION,
            "BigData60MPlugin_return_sample",
            &RTI_LOG_ANY_FAILURE_ss,
            "exception: ",
            ex.what());
    }

    PRESTypePluginDefaultEndpointData_returnSample(
        endpoint_data, sample, handle);
}

RTIBool
BigData60MPlugin_copy_sample(
    PRESTypePluginEndpointData,
    BigData60M *dst,
    const BigData60M *src)
{
    return BigData60MPluginSupport_copy_data(dst, src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int
BigData60MPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

RTIBool
BigData60MPlugin_serialize_to_cdr_buffer(
    char *buffer,
    unsigned int *length,
    const BigData60M *sample,
    ::dds::core::policy::DataRepresentationId representation)
{
    using namespace ::dds::core::policy;

    try
    {
        RTIEncapsulationId encapsulationId = RTI_CDR_ENCAPSULATION_ID_INVALID;
        struct RTICdrStream stream;
        struct PRESTypePluginDefaultEndpointData epd;
        RTIBool result;
        struct PRESTypePluginDefaultParticipantData pd;
        struct RTIXCdrTypePluginProgramContext defaultProgramContext =
            RTIXCdrTypePluginProgramContext_INTIALIZER;
        struct PRESTypePlugin plugin = PRES_TYPEPLUGIN_DEFAULT;

        if (length == NULL)
        {
            return RTI_FALSE;
        }

        RTIOsapiMemory_zero(&epd, sizeof(struct PRESTypePluginDefaultEndpointData));
        epd.programContext = defaultProgramContext;
        epd._participantData = &pd;
        epd.typePlugin = &plugin;
        epd.programContext.endpointPluginData = &epd;
        plugin.typeCode = (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type<BigData60M>::get().native();
        pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
            BigData60M,
            true, true, true>();

        encapsulationId = DDS_TypeCode_get_native_encapsulation(
            (DDS_TypeCode *)plugin.typeCode,
            representation);

        if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID)
        {
            return RTI_FALSE;
        }

        epd._maxSizeSerializedSample =
            BigData60MPlugin_get_serialized_sample_max_size(
                (PRESTypePluginEndpointData)&epd,
                RTI_TRUE,
                encapsulationId,
                0);

        if (buffer == NULL)
        {
            *length =
                PRESTypePlugin_interpretedGetSerializedSampleSize(
                    (PRESTypePluginEndpointData)&epd,
                    RTI_TRUE,
                    encapsulationId,
                    0,
                    sample);

            if (*length == 0)
            {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        RTICdrStream_init(&stream);
        RTICdrStream_set(&stream, (char *)buffer, *length);

        result = PRESTypePlugin_interpretedSerialize(
            (PRESTypePluginEndpointData)&epd,
            sample,
            &stream,
            RTI_TRUE,
            encapsulationId,
            RTI_TRUE,
            NULL);

        *length = RTICdrStream_getCurrentPositionOffset(&stream);
        return result;
    }
    catch (...)
    {
        return RTI_FALSE;
    }
}

RTIBool
BigData60MPlugin_deserialize_from_cdr_buffer(
    BigData60M *sample,
    const char *buffer,
    unsigned int length)
{
    struct RTICdrStream stream;
    struct PRESTypePluginDefaultParticipantData pd;
    struct RTIXCdrTypePluginProgramContext defaultProgramContext =
        RTIXCdrTypePluginProgramContext_INTIALIZER;
    struct PRESTypePlugin plugin;
    struct PRESTypePluginDefaultEndpointData epd;

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, length);

    epd.programContext = defaultProgramContext;
    epd._participantData = &pd;
    epd.typePlugin = &plugin;
    epd.programContext.endpointPluginData = &epd;
    plugin.typeCode = (struct RTICdrTypeCode *)(struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type<BigData60M>::get().native();
    pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
        BigData60M,
        true, true, true>();

    epd._assignabilityProperty.acceptUnknownEnumValue = RTI_XCDR_TRUE;
    epd._assignabilityProperty.acceptUnknownUnionDiscriminator = RTI_XCDR_TRUE;

    ::rti::topic::reset_sample(*sample);
    return PRESTypePlugin_interpretedDeserialize(
        (PRESTypePluginEndpointData)&epd,
        sample,
        &stream,
        RTI_TRUE,
        RTI_TRUE,
        NULL);
}

unsigned int
BigData60MPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    try
    {
        unsigned int size;
        RTIBool overflow = RTI_FALSE;

        size = PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
            endpoint_data, &overflow, include_encapsulation, encapsulation_id, current_alignment);

        if (overflow)
        {
            size = RTI_CDR_MAX_SERIALIZED_SIZE;
        }

        return size;
    }
    catch (...)
    {
        return 0;
    }
}

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

PRESTypePluginKeyKind
BigData60MPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

RTIBool BigData60MPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    BigData60M **sample,
    RTIBool *drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    try
    {
        RTIBool result;
        if (drop_sample)
        {
        } /* To avoid warnings */
        stream->_xTypesState.unassignable = RTI_FALSE;
        result = PRESTypePlugin_interpretedDeserializeKey(
            endpoint_data, (sample != NULL) ? *sample : NULL, stream,
            deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
        if (result)
        {
            if (stream->_xTypesState.unassignable)
            {
                result = RTI_FALSE;
            }
        }
        return result;
    }
    catch (...)
    {
        return RTI_FALSE;
    }
}

unsigned int
BigData60MPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    try
    {
        unsigned int size;
        RTIBool overflow = RTI_FALSE;

        size = PRESTypePlugin_interpretedGetSerializedKeyMaxSize(
            endpoint_data, &overflow, include_encapsulation, encapsulation_id, current_alignment);
        if (overflow)
        {
            size = RTI_CDR_MAX_SERIALIZED_SIZE;
        }

        return size;
    }
    catch (...)
    {
        return RTI_FALSE;
    }
}

unsigned int
BigData60MPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = PRESTypePlugin_interpretedGetSerializedKeyMaxSizeForKeyhash(
        endpoint_data,
        &overflow,
        encapsulation_id,
        current_alignment);
    if (overflow)
    {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

/* ------------------------------------------------------------------------
 * Plug-in Installation Methods
 * ------------------------------------------------------------------------ */
struct PRESTypePlugin *BigData60MPlugin_new(void)
{
    struct PRESTypePlugin *plugin = NULL;
    const struct PRESTypePluginVersion PLUGIN_VERSION =
        PRES_TYPE_PLUGIN_VERSION_2_0;

    RTIOsapiHeap_allocateStructure(
        &plugin, struct PRESTypePlugin);
    if (plugin == NULL)
    {
        return NULL;
    }

    plugin->version = PLUGIN_VERSION;

    /* set up parent's function pointers */
    plugin->onParticipantAttached =
        (PRESTypePluginOnParticipantAttachedCallback)
            BigData60MPlugin_on_participant_attached;
    plugin->onParticipantDetached =
        (PRESTypePluginOnParticipantDetachedCallback)
            BigData60MPlugin_on_participant_detached;
    plugin->onEndpointAttached =
        (PRESTypePluginOnEndpointAttachedCallback)
            BigData60MPlugin_on_endpoint_attached;
    plugin->onEndpointDetached =
        (PRESTypePluginOnEndpointDetachedCallback)
            BigData60MPlugin_on_endpoint_detached;

    plugin->copySampleFnc =
        (PRESTypePluginCopySampleFunction)
            BigData60MPlugin_copy_sample;
    plugin->createSampleFnc =
        (PRESTypePluginCreateSampleFunction)
            BigData60MPlugin_create_sample;
    plugin->destroySampleFnc =
        (PRESTypePluginDestroySampleFunction)
            BigData60MPlugin_destroy_sample;

    plugin->serializeFnc =
        (PRESTypePluginSerializeFunction)PRESTypePlugin_interpretedSerialize;
    plugin->deserializeFnc =
        (PRESTypePluginDeserializeFunction)PRESTypePlugin_interpretedDeserializeWithAlloc;
    plugin->getSerializedSampleMaxSizeFnc =
        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            BigData60MPlugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
        (PRESTypePluginGetSerializedSampleMinSizeFunction)
            PRESTypePlugin_interpretedGetSerializedSampleMinSize;
    plugin->getDeserializedSampleMaxSizeFnc = NULL;
    plugin->getSampleFnc =
        (PRESTypePluginGetSampleFunction)
            BigData60MPlugin_get_sample;
    plugin->returnSampleFnc =
        (PRESTypePluginReturnSampleFunction)
            BigData60MPlugin_return_sample;
    plugin->getKeyKindFnc =
        (PRESTypePluginGetKeyKindFunction)
            BigData60MPlugin_get_key_kind;

    /* These functions are only used for keyed types. As this is not a keyed
    type they are all set to NULL
    */
    plugin->serializeKeyFnc = NULL;
    plugin->deserializeKeyFnc = NULL;
    plugin->getKeyFnc = NULL;
    plugin->returnKeyFnc = NULL;
    plugin->instanceToKeyFnc = NULL;
    plugin->keyToInstanceFnc = NULL;
    plugin->getSerializedKeyMaxSizeFnc = NULL;
    plugin->instanceToKeyHashFnc = NULL;
    plugin->serializedSampleToKeyHashFnc = NULL;
    plugin->serializedKeyToKeyHashFnc = NULL;
#ifdef NDDS_STANDALONE_TYPE
    plugin->typeCode = NULL;
#else
    plugin->typeCode = (struct RTICdrTypeCode *)&::rti::topic::dynamic_type<BigData60M>::get().native();
#endif
    plugin->languageKind = PRES_TYPEPLUGIN_CPPSTL_LANG;

    /* Serialized buffer */
    plugin->getBuffer =
        (PRESTypePluginGetBufferFunction)
            BigData60MPlugin_get_buffer;
    plugin->returnBuffer =
        (PRESTypePluginReturnBufferFunction)
            BigData60MPlugin_return_buffer;
    plugin->getBufferWithParams = NULL;
    plugin->returnBufferWithParams = NULL;
    plugin->getSerializedSampleSizeFnc =
        (PRESTypePluginGetSerializedSampleSizeFunction)
            PRESTypePlugin_interpretedGetSerializedSampleSize;

    plugin->getWriterLoanedSampleFnc = NULL;
    plugin->returnWriterLoanedSampleFnc = NULL;
    plugin->returnWriterLoanedSampleFromCookieFnc = NULL;
    plugin->validateWriterLoanedSampleFnc = NULL;
    plugin->setWriterLoanedSampleSerializedStateFnc = NULL;

    static const char *TYPE_NAME = "BigData60M";
    plugin->endpointTypeName = TYPE_NAME;
    plugin->isMetpType = RTI_FALSE;
    return plugin;
}

void BigData60MPlugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
}
#undef RTI_CDR_CURRENT_SUBMODULE
