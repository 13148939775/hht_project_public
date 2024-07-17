

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from vehicle_door.idl
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

#include "vehicle_doorPlugin.hpp"

/* ----------------------------------------------------------------------------
 *  Type HDBI_DrLth_Set_struct
 * -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */



HDBI_DrLth_Set_struct *
HDBI_DrLth_Set_structPluginSupport_create_data(void)
{
    try
    {
        HDBI_DrLth_Set_struct *sample = new HDBI_DrLth_Set_struct();
        ::rti::topic::allocate_sample(*sample);
        return sample;
    }
    catch (...)
    {
        return NULL;
    }
}

void HDBI_DrLth_Set_structPluginSupport_destroy_data(
    HDBI_DrLth_Set_struct *sample)
{
    delete sample;
}

RTIBool
HDBI_DrLth_Set_structPluginSupport_copy_data(
    HDBI_DrLth_Set_struct *dst,
    const HDBI_DrLth_Set_struct *src)
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
HDBI_DrLth_Set_structPlugin_on_participant_attached(
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
        (DDS_TypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type<HDBI_DrLth_Set_struct>::get().native(),
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

void HDBI_DrLth_Set_structPlugin_on_participant_detached(
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
HDBI_DrLth_Set_structPlugin_on_endpoint_attached(
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
                HDBI_DrLth_Set_structPluginSupport_create_data,
            (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                HDBI_DrLth_Set_structPluginSupport_destroy_data,
            NULL, NULL);

        if (epd == NULL)
        {
            return NULL;
        }

        if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER)
        {
            serializedSampleMaxSize = HDBI_DrLth_Set_structPlugin_get_serialized_sample_max_size(
                epd, RTI_FALSE, RTI_CDR_ENCAPSULATION_ID_CDR_BE, 0);
            PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

            if (PRESTypePluginDefaultEndpointData_createWriterPool(
                    epd,
                    endpoint_info,
                    (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                        HDBI_DrLth_Set_structPlugin_get_serialized_sample_max_size,
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

void HDBI_DrLth_Set_structPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{
    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}

void HDBI_DrLth_Set_structPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    HDBI_DrLth_Set_struct *sample,
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
            "HDBI_DrLth_Set_structPlugin_return_sample",
            &RTI_LOG_ANY_FAILURE_ss,
            "exception: ",
            ex.what());
    }

    PRESTypePluginDefaultEndpointData_returnSample(
        endpoint_data, sample, handle);
}

RTIBool
HDBI_DrLth_Set_structPlugin_copy_sample(
    PRESTypePluginEndpointData,
    HDBI_DrLth_Set_struct *dst,
    const HDBI_DrLth_Set_struct *src)
{
    return HDBI_DrLth_Set_structPluginSupport_copy_data(dst, src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int
HDBI_DrLth_Set_structPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

RTIBool
HDBI_DrLth_Set_structPlugin_serialize_to_cdr_buffer(
    char *buffer,
    unsigned int *length,
    const HDBI_DrLth_Set_struct *sample,
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
        plugin.typeCode = (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type<HDBI_DrLth_Set_struct>::get().native();
        pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
            HDBI_DrLth_Set_struct,
            true, true, true>();

        encapsulationId = DDS_TypeCode_get_native_encapsulation(
            (DDS_TypeCode *)plugin.typeCode,
            representation);

        if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID)
        {
            return RTI_FALSE;
        }

        epd._maxSizeSerializedSample =
            HDBI_DrLth_Set_structPlugin_get_serialized_sample_max_size(
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
HDBI_DrLth_Set_structPlugin_deserialize_from_cdr_buffer(
    HDBI_DrLth_Set_struct *sample,
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
    plugin.typeCode = (struct RTICdrTypeCode *)(struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type<HDBI_DrLth_Set_struct>::get().native();
    pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
        HDBI_DrLth_Set_struct,
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
HDBI_DrLth_Set_structPlugin_get_serialized_sample_max_size(
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
HDBI_DrLth_Set_structPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

RTIBool HDBI_DrLth_Set_structPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    HDBI_DrLth_Set_struct **sample,
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
HDBI_DrLth_Set_structPlugin_get_serialized_key_max_size(
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
HDBI_DrLth_Set_structPlugin_get_serialized_key_max_size_for_keyhash(
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
struct PRESTypePlugin *HDBI_DrLth_Set_structPlugin_new(void)
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
            HDBI_DrLth_Set_structPlugin_on_participant_attached;
    plugin->onParticipantDetached =
        (PRESTypePluginOnParticipantDetachedCallback)
            HDBI_DrLth_Set_structPlugin_on_participant_detached;
    plugin->onEndpointAttached =
        (PRESTypePluginOnEndpointAttachedCallback)
            HDBI_DrLth_Set_structPlugin_on_endpoint_attached;
    plugin->onEndpointDetached =
        (PRESTypePluginOnEndpointDetachedCallback)
            HDBI_DrLth_Set_structPlugin_on_endpoint_detached;

    plugin->copySampleFnc =
        (PRESTypePluginCopySampleFunction)
            HDBI_DrLth_Set_structPlugin_copy_sample;
    plugin->createSampleFnc =
        (PRESTypePluginCreateSampleFunction)
            HDBI_DrLth_Set_structPlugin_create_sample;
    plugin->destroySampleFnc =
        (PRESTypePluginDestroySampleFunction)
            HDBI_DrLth_Set_structPlugin_destroy_sample;

    plugin->serializeFnc =
        (PRESTypePluginSerializeFunction)PRESTypePlugin_interpretedSerialize;
    plugin->deserializeFnc =
        (PRESTypePluginDeserializeFunction)PRESTypePlugin_interpretedDeserializeWithAlloc;
    plugin->getSerializedSampleMaxSizeFnc =
        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            HDBI_DrLth_Set_structPlugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
        (PRESTypePluginGetSerializedSampleMinSizeFunction)
            PRESTypePlugin_interpretedGetSerializedSampleMinSize;
    plugin->getDeserializedSampleMaxSizeFnc = NULL;
    plugin->getSampleFnc =
        (PRESTypePluginGetSampleFunction)
            HDBI_DrLth_Set_structPlugin_get_sample;
    plugin->returnSampleFnc =
        (PRESTypePluginReturnSampleFunction)
            HDBI_DrLth_Set_structPlugin_return_sample;
    plugin->getKeyKindFnc =
        (PRESTypePluginGetKeyKindFunction)
            HDBI_DrLth_Set_structPlugin_get_key_kind;

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
    plugin->typeCode = (struct RTICdrTypeCode *)&::rti::topic::dynamic_type<HDBI_DrLth_Set_struct>::get().native();
#endif
    plugin->languageKind = PRES_TYPEPLUGIN_CPPSTL_LANG;

    /* Serialized buffer */
    plugin->getBuffer =
        (PRESTypePluginGetBufferFunction)
            HDBI_DrLth_Set_structPlugin_get_buffer;
    plugin->returnBuffer =
        (PRESTypePluginReturnBufferFunction)
            HDBI_DrLth_Set_structPlugin_return_buffer;
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

    static const char *TYPE_NAME = "HDBI_DrLth_Set_struct";
    plugin->endpointTypeName = TYPE_NAME;
    plugin->isMetpType = RTI_FALSE;
    return plugin;
}

void HDBI_DrLth_Set_structPlugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
}

/* ----------------------------------------------------------------------------
 *  Type HDBM_DrLth_Rsp_struct
 * -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

HDBM_DrLth_Rsp_struct *
HDBM_DrLth_Rsp_structPluginSupport_create_data(void)
{
    try
    {
        HDBM_DrLth_Rsp_struct *sample = new HDBM_DrLth_Rsp_struct();
        ::rti::topic::allocate_sample(*sample);
        return sample;
    }
    catch (...)
    {
        return NULL;
    }
}

void HDBM_DrLth_Rsp_structPluginSupport_destroy_data(
    HDBM_DrLth_Rsp_struct *sample)
{
    delete sample;
}

RTIBool
HDBM_DrLth_Rsp_structPluginSupport_copy_data(
    HDBM_DrLth_Rsp_struct *dst,
    const HDBM_DrLth_Rsp_struct *src)
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
HDBM_DrLth_Rsp_structPlugin_on_participant_attached(
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
        (DDS_TypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type<HDBM_DrLth_Rsp_struct>::get().native(),
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

void HDBM_DrLth_Rsp_structPlugin_on_participant_detached(
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
HDBM_DrLth_Rsp_structPlugin_on_endpoint_attached(
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
                HDBM_DrLth_Rsp_structPluginSupport_create_data,
            (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                HDBM_DrLth_Rsp_structPluginSupport_destroy_data,
            NULL, NULL);

        if (epd == NULL)
        {
            return NULL;
        }

        if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER)
        {
            serializedSampleMaxSize = HDBM_DrLth_Rsp_structPlugin_get_serialized_sample_max_size(
                epd, RTI_FALSE, RTI_CDR_ENCAPSULATION_ID_CDR_BE, 0);
            PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

            if (PRESTypePluginDefaultEndpointData_createWriterPool(
                    epd,
                    endpoint_info,
                    (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                        HDBM_DrLth_Rsp_structPlugin_get_serialized_sample_max_size,
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

void HDBM_DrLth_Rsp_structPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{
    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}

void HDBM_DrLth_Rsp_structPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    HDBM_DrLth_Rsp_struct *sample,
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
            "HDBM_DrLth_Rsp_structPlugin_return_sample",
            &RTI_LOG_ANY_FAILURE_ss,
            "exception: ",
            ex.what());
    }

    PRESTypePluginDefaultEndpointData_returnSample(
        endpoint_data, sample, handle);
}

RTIBool
HDBM_DrLth_Rsp_structPlugin_copy_sample(
    PRESTypePluginEndpointData,
    HDBM_DrLth_Rsp_struct *dst,
    const HDBM_DrLth_Rsp_struct *src)
{
    return HDBM_DrLth_Rsp_structPluginSupport_copy_data(dst, src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int
HDBM_DrLth_Rsp_structPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

RTIBool
HDBM_DrLth_Rsp_structPlugin_serialize_to_cdr_buffer(
    char *buffer,
    unsigned int *length,
    const HDBM_DrLth_Rsp_struct *sample,
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
        plugin.typeCode = (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type<HDBM_DrLth_Rsp_struct>::get().native();
        pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
            HDBM_DrLth_Rsp_struct,
            true, true, true>();

        encapsulationId = DDS_TypeCode_get_native_encapsulation(
            (DDS_TypeCode *)plugin.typeCode,
            representation);

        if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID)
        {
            return RTI_FALSE;
        }

        epd._maxSizeSerializedSample =
            HDBM_DrLth_Rsp_structPlugin_get_serialized_sample_max_size(
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
HDBM_DrLth_Rsp_structPlugin_deserialize_from_cdr_buffer(
    HDBM_DrLth_Rsp_struct *sample,
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
    plugin.typeCode = (struct RTICdrTypeCode *)(struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type<HDBM_DrLth_Rsp_struct>::get().native();
    pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
        HDBM_DrLth_Rsp_struct,
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
HDBM_DrLth_Rsp_structPlugin_get_serialized_sample_max_size(
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
HDBM_DrLth_Rsp_structPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

RTIBool HDBM_DrLth_Rsp_structPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    HDBM_DrLth_Rsp_struct **sample,
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
HDBM_DrLth_Rsp_structPlugin_get_serialized_key_max_size(
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
HDBM_DrLth_Rsp_structPlugin_get_serialized_key_max_size_for_keyhash(
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
struct PRESTypePlugin *HDBM_DrLth_Rsp_structPlugin_new(void)
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
            HDBM_DrLth_Rsp_structPlugin_on_participant_attached;
    plugin->onParticipantDetached =
        (PRESTypePluginOnParticipantDetachedCallback)
            HDBM_DrLth_Rsp_structPlugin_on_participant_detached;
    plugin->onEndpointAttached =
        (PRESTypePluginOnEndpointAttachedCallback)
            HDBM_DrLth_Rsp_structPlugin_on_endpoint_attached;
    plugin->onEndpointDetached =
        (PRESTypePluginOnEndpointDetachedCallback)
            HDBM_DrLth_Rsp_structPlugin_on_endpoint_detached;

    plugin->copySampleFnc =
        (PRESTypePluginCopySampleFunction)
            HDBM_DrLth_Rsp_structPlugin_copy_sample;
    plugin->createSampleFnc =
        (PRESTypePluginCreateSampleFunction)
            HDBM_DrLth_Rsp_structPlugin_create_sample;
    plugin->destroySampleFnc =
        (PRESTypePluginDestroySampleFunction)
            HDBM_DrLth_Rsp_structPlugin_destroy_sample;

    plugin->serializeFnc =
        (PRESTypePluginSerializeFunction)PRESTypePlugin_interpretedSerialize;
    plugin->deserializeFnc =
        (PRESTypePluginDeserializeFunction)PRESTypePlugin_interpretedDeserializeWithAlloc;
    plugin->getSerializedSampleMaxSizeFnc =
        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            HDBM_DrLth_Rsp_structPlugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
        (PRESTypePluginGetSerializedSampleMinSizeFunction)
            PRESTypePlugin_interpretedGetSerializedSampleMinSize;
    plugin->getDeserializedSampleMaxSizeFnc = NULL;
    plugin->getSampleFnc =
        (PRESTypePluginGetSampleFunction)
            HDBM_DrLth_Rsp_structPlugin_get_sample;
    plugin->returnSampleFnc =
        (PRESTypePluginReturnSampleFunction)
            HDBM_DrLth_Rsp_structPlugin_return_sample;
    plugin->getKeyKindFnc =
        (PRESTypePluginGetKeyKindFunction)
            HDBM_DrLth_Rsp_structPlugin_get_key_kind;

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
    plugin->typeCode = (struct RTICdrTypeCode *)&::rti::topic::dynamic_type<HDBM_DrLth_Rsp_struct>::get().native();
#endif
    plugin->languageKind = PRES_TYPEPLUGIN_CPPSTL_LANG;

    /* Serialized buffer */
    plugin->getBuffer =
        (PRESTypePluginGetBufferFunction)
            HDBM_DrLth_Rsp_structPlugin_get_buffer;
    plugin->returnBuffer =
        (PRESTypePluginReturnBufferFunction)
            HDBM_DrLth_Rsp_structPlugin_return_buffer;
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

    static const char *TYPE_NAME = "HDBM_DrLth_Rsp_struct";
    plugin->endpointTypeName = TYPE_NAME;
    plugin->isMetpType = RTI_FALSE;
    return plugin;
}

void HDBM_DrLth_Rsp_structPlugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
}

/* ----------------------------------------------------------------------------
 *  Type HDBI_DrLth_Act_struct
 * -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

HDBI_DrLth_Act_struct *
HDBI_DrLth_Act_structPluginSupport_create_data(void)
{
    try
    {
        HDBI_DrLth_Act_struct *sample = new HDBI_DrLth_Act_struct();
        ::rti::topic::allocate_sample(*sample);
        return sample;
    }
    catch (...)
    {
        return NULL;
    }
}

void HDBI_DrLth_Act_structPluginSupport_destroy_data(
    HDBI_DrLth_Act_struct *sample)
{
    delete sample;
}

RTIBool
HDBI_DrLth_Act_structPluginSupport_copy_data(
    HDBI_DrLth_Act_struct *dst,
    const HDBI_DrLth_Act_struct *src)
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
HDBI_DrLth_Act_structPlugin_on_participant_attached(
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
        (DDS_TypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type<HDBI_DrLth_Act_struct>::get().native(),
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

void HDBI_DrLth_Act_structPlugin_on_participant_detached(
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
HDBI_DrLth_Act_structPlugin_on_endpoint_attached(
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
                HDBI_DrLth_Act_structPluginSupport_create_data,
            (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                HDBI_DrLth_Act_structPluginSupport_destroy_data,
            NULL, NULL);

        if (epd == NULL)
        {
            return NULL;
        }

        if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER)
        {
            serializedSampleMaxSize = HDBI_DrLth_Act_structPlugin_get_serialized_sample_max_size(
                epd, RTI_FALSE, RTI_CDR_ENCAPSULATION_ID_CDR_BE, 0);
            PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

            if (PRESTypePluginDefaultEndpointData_createWriterPool(
                    epd,
                    endpoint_info,
                    (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                        HDBI_DrLth_Act_structPlugin_get_serialized_sample_max_size,
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

void HDBI_DrLth_Act_structPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{
    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}

void HDBI_DrLth_Act_structPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    HDBI_DrLth_Act_struct *sample,
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
            "HDBI_DrLth_Act_structPlugin_return_sample",
            &RTI_LOG_ANY_FAILURE_ss,
            "exception: ",
            ex.what());
    }

    PRESTypePluginDefaultEndpointData_returnSample(
        endpoint_data, sample, handle);
}

RTIBool
HDBI_DrLth_Act_structPlugin_copy_sample(
    PRESTypePluginEndpointData,
    HDBI_DrLth_Act_struct *dst,
    const HDBI_DrLth_Act_struct *src)
{
    return HDBI_DrLth_Act_structPluginSupport_copy_data(dst, src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int
HDBI_DrLth_Act_structPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

RTIBool
HDBI_DrLth_Act_structPlugin_serialize_to_cdr_buffer(
    char *buffer,
    unsigned int *length,
    const HDBI_DrLth_Act_struct *sample,
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
        plugin.typeCode = (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type<HDBI_DrLth_Act_struct>::get().native();
        pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
            HDBI_DrLth_Act_struct,
            true, true, true>();

        encapsulationId = DDS_TypeCode_get_native_encapsulation(
            (DDS_TypeCode *)plugin.typeCode,
            representation);

        if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID)
        {
            return RTI_FALSE;
        }

        epd._maxSizeSerializedSample =
            HDBI_DrLth_Act_structPlugin_get_serialized_sample_max_size(
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
HDBI_DrLth_Act_structPlugin_deserialize_from_cdr_buffer(
    HDBI_DrLth_Act_struct *sample,
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
    plugin.typeCode = (struct RTICdrTypeCode *)(struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type<HDBI_DrLth_Act_struct>::get().native();
    pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
        HDBI_DrLth_Act_struct,
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
HDBI_DrLth_Act_structPlugin_get_serialized_sample_max_size(
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
HDBI_DrLth_Act_structPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

RTIBool HDBI_DrLth_Act_structPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    HDBI_DrLth_Act_struct **sample,
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
HDBI_DrLth_Act_structPlugin_get_serialized_key_max_size(
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
HDBI_DrLth_Act_structPlugin_get_serialized_key_max_size_for_keyhash(
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
struct PRESTypePlugin *HDBI_DrLth_Act_structPlugin_new(void)
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
            HDBI_DrLth_Act_structPlugin_on_participant_attached;
    plugin->onParticipantDetached =
        (PRESTypePluginOnParticipantDetachedCallback)
            HDBI_DrLth_Act_structPlugin_on_participant_detached;
    plugin->onEndpointAttached =
        (PRESTypePluginOnEndpointAttachedCallback)
            HDBI_DrLth_Act_structPlugin_on_endpoint_attached;
    plugin->onEndpointDetached =
        (PRESTypePluginOnEndpointDetachedCallback)
            HDBI_DrLth_Act_structPlugin_on_endpoint_detached;

    plugin->copySampleFnc =
        (PRESTypePluginCopySampleFunction)
            HDBI_DrLth_Act_structPlugin_copy_sample;
    plugin->createSampleFnc =
        (PRESTypePluginCreateSampleFunction)
            HDBI_DrLth_Act_structPlugin_create_sample;
    plugin->destroySampleFnc =
        (PRESTypePluginDestroySampleFunction)
            HDBI_DrLth_Act_structPlugin_destroy_sample;

    plugin->serializeFnc =
        (PRESTypePluginSerializeFunction)PRESTypePlugin_interpretedSerialize;
    plugin->deserializeFnc =
        (PRESTypePluginDeserializeFunction)PRESTypePlugin_interpretedDeserializeWithAlloc;
    plugin->getSerializedSampleMaxSizeFnc =
        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            HDBI_DrLth_Act_structPlugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
        (PRESTypePluginGetSerializedSampleMinSizeFunction)
            PRESTypePlugin_interpretedGetSerializedSampleMinSize;
    plugin->getDeserializedSampleMaxSizeFnc = NULL;
    plugin->getSampleFnc =
        (PRESTypePluginGetSampleFunction)
            HDBI_DrLth_Act_structPlugin_get_sample;
    plugin->returnSampleFnc =
        (PRESTypePluginReturnSampleFunction)
            HDBI_DrLth_Act_structPlugin_return_sample;
    plugin->getKeyKindFnc =
        (PRESTypePluginGetKeyKindFunction)
            HDBI_DrLth_Act_structPlugin_get_key_kind;

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
    plugin->typeCode = (struct RTICdrTypeCode *)&::rti::topic::dynamic_type<HDBI_DrLth_Act_struct>::get().native();
#endif
    plugin->languageKind = PRES_TYPEPLUGIN_CPPSTL_LANG;

    /* Serialized buffer */
    plugin->getBuffer =
        (PRESTypePluginGetBufferFunction)
            HDBI_DrLth_Act_structPlugin_get_buffer;
    plugin->returnBuffer =
        (PRESTypePluginReturnBufferFunction)
            HDBI_DrLth_Act_structPlugin_return_buffer;
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

    static const char *TYPE_NAME = "HDBI_DrLth_Act_struct";
    plugin->endpointTypeName = TYPE_NAME;
    plugin->isMetpType = RTI_FALSE;
    return plugin;
}

void HDBI_DrLth_Act_structPlugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
}

/* ----------------------------------------------------------------------------
 *  Type HDBM_DrLth_St_struct
 * -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

HDBM_DrLth_St_struct *
HDBM_DrLth_St_structPluginSupport_create_data(void)
{
    try
    {
        HDBM_DrLth_St_struct *sample = new HDBM_DrLth_St_struct();
        ::rti::topic::allocate_sample(*sample);
        return sample;
    }
    catch (...)
    {
        return NULL;
    }
}

void HDBM_DrLth_St_structPluginSupport_destroy_data(
    HDBM_DrLth_St_struct *sample)
{
    delete sample;
}

RTIBool
HDBM_DrLth_St_structPluginSupport_copy_data(
    HDBM_DrLth_St_struct *dst,
    const HDBM_DrLth_St_struct *src)
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
HDBM_DrLth_St_structPlugin_on_participant_attached(
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
        (DDS_TypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type<HDBM_DrLth_St_struct>::get().native(),
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

void HDBM_DrLth_St_structPlugin_on_participant_detached(
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
HDBM_DrLth_St_structPlugin_on_endpoint_attached(
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
                HDBM_DrLth_St_structPluginSupport_create_data,
            (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                HDBM_DrLth_St_structPluginSupport_destroy_data,
            NULL, NULL);

        if (epd == NULL)
        {
            return NULL;
        }

        if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER)
        {
            serializedSampleMaxSize = HDBM_DrLth_St_structPlugin_get_serialized_sample_max_size(
                epd, RTI_FALSE, RTI_CDR_ENCAPSULATION_ID_CDR_BE, 0);
            PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

            if (PRESTypePluginDefaultEndpointData_createWriterPool(
                    epd,
                    endpoint_info,
                    (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                        HDBM_DrLth_St_structPlugin_get_serialized_sample_max_size,
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

void HDBM_DrLth_St_structPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{
    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}

void HDBM_DrLth_St_structPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    HDBM_DrLth_St_struct *sample,
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
            "HDBM_DrLth_St_structPlugin_return_sample",
            &RTI_LOG_ANY_FAILURE_ss,
            "exception: ",
            ex.what());
    }

    PRESTypePluginDefaultEndpointData_returnSample(
        endpoint_data, sample, handle);
}

RTIBool
HDBM_DrLth_St_structPlugin_copy_sample(
    PRESTypePluginEndpointData,
    HDBM_DrLth_St_struct *dst,
    const HDBM_DrLth_St_struct *src)
{
    return HDBM_DrLth_St_structPluginSupport_copy_data(dst, src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int
HDBM_DrLth_St_structPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

RTIBool
HDBM_DrLth_St_structPlugin_serialize_to_cdr_buffer(
    char *buffer,
    unsigned int *length,
    const HDBM_DrLth_St_struct *sample,
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
        plugin.typeCode = (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type<HDBM_DrLth_St_struct>::get().native();
        pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
            HDBM_DrLth_St_struct,
            true, true, true>();

        encapsulationId = DDS_TypeCode_get_native_encapsulation(
            (DDS_TypeCode *)plugin.typeCode,
            representation);

        if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID)
        {
            return RTI_FALSE;
        }

        epd._maxSizeSerializedSample =
            HDBM_DrLth_St_structPlugin_get_serialized_sample_max_size(
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
HDBM_DrLth_St_structPlugin_deserialize_from_cdr_buffer(
    HDBM_DrLth_St_struct *sample,
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
    plugin.typeCode = (struct RTICdrTypeCode *)(struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type<HDBM_DrLth_St_struct>::get().native();
    pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
        HDBM_DrLth_St_struct,
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
HDBM_DrLth_St_structPlugin_get_serialized_sample_max_size(
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
HDBM_DrLth_St_structPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

RTIBool HDBM_DrLth_St_structPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    HDBM_DrLth_St_struct **sample,
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
HDBM_DrLth_St_structPlugin_get_serialized_key_max_size(
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
HDBM_DrLth_St_structPlugin_get_serialized_key_max_size_for_keyhash(
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
struct PRESTypePlugin *HDBM_DrLth_St_structPlugin_new(void)
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
            HDBM_DrLth_St_structPlugin_on_participant_attached;
    plugin->onParticipantDetached =
        (PRESTypePluginOnParticipantDetachedCallback)
            HDBM_DrLth_St_structPlugin_on_participant_detached;
    plugin->onEndpointAttached =
        (PRESTypePluginOnEndpointAttachedCallback)
            HDBM_DrLth_St_structPlugin_on_endpoint_attached;
    plugin->onEndpointDetached =
        (PRESTypePluginOnEndpointDetachedCallback)
            HDBM_DrLth_St_structPlugin_on_endpoint_detached;

    plugin->copySampleFnc =
        (PRESTypePluginCopySampleFunction)
            HDBM_DrLth_St_structPlugin_copy_sample;
    plugin->createSampleFnc =
        (PRESTypePluginCreateSampleFunction)
            HDBM_DrLth_St_structPlugin_create_sample;
    plugin->destroySampleFnc =
        (PRESTypePluginDestroySampleFunction)
            HDBM_DrLth_St_structPlugin_destroy_sample;

    plugin->serializeFnc =
        (PRESTypePluginSerializeFunction)PRESTypePlugin_interpretedSerialize;
    plugin->deserializeFnc =
        (PRESTypePluginDeserializeFunction)PRESTypePlugin_interpretedDeserializeWithAlloc;
    plugin->getSerializedSampleMaxSizeFnc =
        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            HDBM_DrLth_St_structPlugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
        (PRESTypePluginGetSerializedSampleMinSizeFunction)
            PRESTypePlugin_interpretedGetSerializedSampleMinSize;
    plugin->getDeserializedSampleMaxSizeFnc = NULL;
    plugin->getSampleFnc =
        (PRESTypePluginGetSampleFunction)
            HDBM_DrLth_St_structPlugin_get_sample;
    plugin->returnSampleFnc =
        (PRESTypePluginReturnSampleFunction)
            HDBM_DrLth_St_structPlugin_return_sample;
    plugin->getKeyKindFnc =
        (PRESTypePluginGetKeyKindFunction)
            HDBM_DrLth_St_structPlugin_get_key_kind;

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
    plugin->typeCode = (struct RTICdrTypeCode *)&::rti::topic::dynamic_type<HDBM_DrLth_St_struct>::get().native();
#endif
    plugin->languageKind = PRES_TYPEPLUGIN_CPPSTL_LANG;

    /* Serialized buffer */
    plugin->getBuffer =
        (PRESTypePluginGetBufferFunction)
            HDBM_DrLth_St_structPlugin_get_buffer;
    plugin->returnBuffer =
        (PRESTypePluginReturnBufferFunction)
            HDBM_DrLth_St_structPlugin_return_buffer;
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

    static const char *TYPE_NAME = "HDBM_DrLth_St_struct";
    plugin->endpointTypeName = TYPE_NAME;
    plugin->isMetpType = RTI_FALSE;
    return plugin;
}

void HDBM_DrLth_St_structPlugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
}

/* ----------------------------------------------------------------------------
 *  Type HDBI_InLt_Act_struct
 * -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

HDBI_InLt_Act_struct *
HDBI_InLt_Act_structPluginSupport_create_data(void)
{
    try
    {
        HDBI_InLt_Act_struct *sample = new HDBI_InLt_Act_struct();
        ::rti::topic::allocate_sample(*sample);
        return sample;
    }
    catch (...)
    {
        return NULL;
    }
}

void HDBI_InLt_Act_structPluginSupport_destroy_data(
    HDBI_InLt_Act_struct *sample)
{
    delete sample;
}

RTIBool
HDBI_InLt_Act_structPluginSupport_copy_data(
    HDBI_InLt_Act_struct *dst,
    const HDBI_InLt_Act_struct *src)
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
HDBI_InLt_Act_structPlugin_on_participant_attached(
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
        (DDS_TypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type<HDBI_InLt_Act_struct>::get().native(),
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

void HDBI_InLt_Act_structPlugin_on_participant_detached(
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
HDBI_InLt_Act_structPlugin_on_endpoint_attached(
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
                HDBI_InLt_Act_structPluginSupport_create_data,
            (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                HDBI_InLt_Act_structPluginSupport_destroy_data,
            NULL, NULL);

        if (epd == NULL)
        {
            return NULL;
        }

        if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER)
        {
            serializedSampleMaxSize = HDBI_InLt_Act_structPlugin_get_serialized_sample_max_size(
                epd, RTI_FALSE, RTI_CDR_ENCAPSULATION_ID_CDR_BE, 0);
            PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

            if (PRESTypePluginDefaultEndpointData_createWriterPool(
                    epd,
                    endpoint_info,
                    (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                        HDBI_InLt_Act_structPlugin_get_serialized_sample_max_size,
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

void HDBI_InLt_Act_structPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{
    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}

void HDBI_InLt_Act_structPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    HDBI_InLt_Act_struct *sample,
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
            "HDBI_InLt_Act_structPlugin_return_sample",
            &RTI_LOG_ANY_FAILURE_ss,
            "exception: ",
            ex.what());
    }

    PRESTypePluginDefaultEndpointData_returnSample(
        endpoint_data, sample, handle);
}

RTIBool
HDBI_InLt_Act_structPlugin_copy_sample(
    PRESTypePluginEndpointData,
    HDBI_InLt_Act_struct *dst,
    const HDBI_InLt_Act_struct *src)
{
    return HDBI_InLt_Act_structPluginSupport_copy_data(dst, src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int
HDBI_InLt_Act_structPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

RTIBool
HDBI_InLt_Act_structPlugin_serialize_to_cdr_buffer(
    char *buffer,
    unsigned int *length,
    const HDBI_InLt_Act_struct *sample,
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
        plugin.typeCode = (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type<HDBI_InLt_Act_struct>::get().native();
        pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
            HDBI_InLt_Act_struct,
            true, true, true>();

        encapsulationId = DDS_TypeCode_get_native_encapsulation(
            (DDS_TypeCode *)plugin.typeCode,
            representation);

        if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID)
        {
            return RTI_FALSE;
        }

        epd._maxSizeSerializedSample =
            HDBI_InLt_Act_structPlugin_get_serialized_sample_max_size(
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
HDBI_InLt_Act_structPlugin_deserialize_from_cdr_buffer(
    HDBI_InLt_Act_struct *sample,
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
    plugin.typeCode = (struct RTICdrTypeCode *)(struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type<HDBI_InLt_Act_struct>::get().native();
    pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
        HDBI_InLt_Act_struct,
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
HDBI_InLt_Act_structPlugin_get_serialized_sample_max_size(
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
HDBI_InLt_Act_structPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

RTIBool HDBI_InLt_Act_structPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    HDBI_InLt_Act_struct **sample,
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
HDBI_InLt_Act_structPlugin_get_serialized_key_max_size(
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
HDBI_InLt_Act_structPlugin_get_serialized_key_max_size_for_keyhash(
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
struct PRESTypePlugin *HDBI_InLt_Act_structPlugin_new(void)
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
            HDBI_InLt_Act_structPlugin_on_participant_attached;
    plugin->onParticipantDetached =
        (PRESTypePluginOnParticipantDetachedCallback)
            HDBI_InLt_Act_structPlugin_on_participant_detached;
    plugin->onEndpointAttached =
        (PRESTypePluginOnEndpointAttachedCallback)
            HDBI_InLt_Act_structPlugin_on_endpoint_attached;
    plugin->onEndpointDetached =
        (PRESTypePluginOnEndpointDetachedCallback)
            HDBI_InLt_Act_structPlugin_on_endpoint_detached;

    plugin->copySampleFnc =
        (PRESTypePluginCopySampleFunction)
            HDBI_InLt_Act_structPlugin_copy_sample;
    plugin->createSampleFnc =
        (PRESTypePluginCreateSampleFunction)
            HDBI_InLt_Act_structPlugin_create_sample;
    plugin->destroySampleFnc =
        (PRESTypePluginDestroySampleFunction)
            HDBI_InLt_Act_structPlugin_destroy_sample;

    plugin->serializeFnc =
        (PRESTypePluginSerializeFunction)PRESTypePlugin_interpretedSerialize;
    plugin->deserializeFnc =
        (PRESTypePluginDeserializeFunction)PRESTypePlugin_interpretedDeserializeWithAlloc;
    plugin->getSerializedSampleMaxSizeFnc =
        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            HDBI_InLt_Act_structPlugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
        (PRESTypePluginGetSerializedSampleMinSizeFunction)
            PRESTypePlugin_interpretedGetSerializedSampleMinSize;
    plugin->getDeserializedSampleMaxSizeFnc = NULL;
    plugin->getSampleFnc =
        (PRESTypePluginGetSampleFunction)
            HDBI_InLt_Act_structPlugin_get_sample;
    plugin->returnSampleFnc =
        (PRESTypePluginReturnSampleFunction)
            HDBI_InLt_Act_structPlugin_return_sample;
    plugin->getKeyKindFnc =
        (PRESTypePluginGetKeyKindFunction)
            HDBI_InLt_Act_structPlugin_get_key_kind;

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
    plugin->typeCode = (struct RTICdrTypeCode *)&::rti::topic::dynamic_type<HDBI_InLt_Act_struct>::get().native();
#endif
    plugin->languageKind = PRES_TYPEPLUGIN_CPPSTL_LANG;

    /* Serialized buffer */
    plugin->getBuffer =
        (PRESTypePluginGetBufferFunction)
            HDBI_InLt_Act_structPlugin_get_buffer;
    plugin->returnBuffer =
        (PRESTypePluginReturnBufferFunction)
            HDBI_InLt_Act_structPlugin_return_buffer;
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

    static const char *TYPE_NAME = "HDBI_InLt_Act_struct";
    plugin->endpointTypeName = TYPE_NAME;
    plugin->isMetpType = RTI_FALSE;
    return plugin;
}

void HDBI_InLt_Act_structPlugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
}

/* ----------------------------------------------------------------------------
 *  Type HDBM_InLt_St_struct
 * -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

HDBM_InLt_St_struct *
HDBM_InLt_St_structPluginSupport_create_data(void)
{
    try
    {
        HDBM_InLt_St_struct *sample = new HDBM_InLt_St_struct();
        ::rti::topic::allocate_sample(*sample);
        return sample;
    }
    catch (...)
    {
        return NULL;
    }
}

void HDBM_InLt_St_structPluginSupport_destroy_data(
    HDBM_InLt_St_struct *sample)
{
    delete sample;
}

RTIBool
HDBM_InLt_St_structPluginSupport_copy_data(
    HDBM_InLt_St_struct *dst,
    const HDBM_InLt_St_struct *src)
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
HDBM_InLt_St_structPlugin_on_participant_attached(
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
        (DDS_TypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type<HDBM_InLt_St_struct>::get().native(),
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

void HDBM_InLt_St_structPlugin_on_participant_detached(
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
HDBM_InLt_St_structPlugin_on_endpoint_attached(
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
                HDBM_InLt_St_structPluginSupport_create_data,
            (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                HDBM_InLt_St_structPluginSupport_destroy_data,
            NULL, NULL);

        if (epd == NULL)
        {
            return NULL;
        }

        if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER)
        {
            serializedSampleMaxSize = HDBM_InLt_St_structPlugin_get_serialized_sample_max_size(
                epd, RTI_FALSE, RTI_CDR_ENCAPSULATION_ID_CDR_BE, 0);
            PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

            if (PRESTypePluginDefaultEndpointData_createWriterPool(
                    epd,
                    endpoint_info,
                    (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                        HDBM_InLt_St_structPlugin_get_serialized_sample_max_size,
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

void HDBM_InLt_St_structPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{
    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}

void HDBM_InLt_St_structPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    HDBM_InLt_St_struct *sample,
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
            "HDBM_InLt_St_structPlugin_return_sample",
            &RTI_LOG_ANY_FAILURE_ss,
            "exception: ",
            ex.what());
    }

    PRESTypePluginDefaultEndpointData_returnSample(
        endpoint_data, sample, handle);
}

RTIBool
HDBM_InLt_St_structPlugin_copy_sample(
    PRESTypePluginEndpointData,
    HDBM_InLt_St_struct *dst,
    const HDBM_InLt_St_struct *src)
{
    return HDBM_InLt_St_structPluginSupport_copy_data(dst, src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int
HDBM_InLt_St_structPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

RTIBool
HDBM_InLt_St_structPlugin_serialize_to_cdr_buffer(
    char *buffer,
    unsigned int *length,
    const HDBM_InLt_St_struct *sample,
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
        plugin.typeCode = (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type<HDBM_InLt_St_struct>::get().native();
        pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
            HDBM_InLt_St_struct,
            true, true, true>();

        encapsulationId = DDS_TypeCode_get_native_encapsulation(
            (DDS_TypeCode *)plugin.typeCode,
            representation);

        if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID)
        {
            return RTI_FALSE;
        }

        epd._maxSizeSerializedSample =
            HDBM_InLt_St_structPlugin_get_serialized_sample_max_size(
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
HDBM_InLt_St_structPlugin_deserialize_from_cdr_buffer(
    HDBM_InLt_St_struct *sample,
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
    plugin.typeCode = (struct RTICdrTypeCode *)(struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type<HDBM_InLt_St_struct>::get().native();
    pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
        HDBM_InLt_St_struct,
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
HDBM_InLt_St_structPlugin_get_serialized_sample_max_size(
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
HDBM_InLt_St_structPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

RTIBool HDBM_InLt_St_structPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    HDBM_InLt_St_struct **sample,
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
HDBM_InLt_St_structPlugin_get_serialized_key_max_size(
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
HDBM_InLt_St_structPlugin_get_serialized_key_max_size_for_keyhash(
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
struct PRESTypePlugin *HDBM_InLt_St_structPlugin_new(void)
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
            HDBM_InLt_St_structPlugin_on_participant_attached;
    plugin->onParticipantDetached =
        (PRESTypePluginOnParticipantDetachedCallback)
            HDBM_InLt_St_structPlugin_on_participant_detached;
    plugin->onEndpointAttached =
        (PRESTypePluginOnEndpointAttachedCallback)
            HDBM_InLt_St_structPlugin_on_endpoint_attached;
    plugin->onEndpointDetached =
        (PRESTypePluginOnEndpointDetachedCallback)
            HDBM_InLt_St_structPlugin_on_endpoint_detached;

    plugin->copySampleFnc =
        (PRESTypePluginCopySampleFunction)
            HDBM_InLt_St_structPlugin_copy_sample;
    plugin->createSampleFnc =
        (PRESTypePluginCreateSampleFunction)
            HDBM_InLt_St_structPlugin_create_sample;
    plugin->destroySampleFnc =
        (PRESTypePluginDestroySampleFunction)
            HDBM_InLt_St_structPlugin_destroy_sample;

    plugin->serializeFnc =
        (PRESTypePluginSerializeFunction)PRESTypePlugin_interpretedSerialize;
    plugin->deserializeFnc =
        (PRESTypePluginDeserializeFunction)PRESTypePlugin_interpretedDeserializeWithAlloc;
    plugin->getSerializedSampleMaxSizeFnc =
        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            HDBM_InLt_St_structPlugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
        (PRESTypePluginGetSerializedSampleMinSizeFunction)
            PRESTypePlugin_interpretedGetSerializedSampleMinSize;
    plugin->getDeserializedSampleMaxSizeFnc = NULL;
    plugin->getSampleFnc =
        (PRESTypePluginGetSampleFunction)
            HDBM_InLt_St_structPlugin_get_sample;
    plugin->returnSampleFnc =
        (PRESTypePluginReturnSampleFunction)
            HDBM_InLt_St_structPlugin_return_sample;
    plugin->getKeyKindFnc =
        (PRESTypePluginGetKeyKindFunction)
            HDBM_InLt_St_structPlugin_get_key_kind;

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
    plugin->typeCode = (struct RTICdrTypeCode *)&::rti::topic::dynamic_type<HDBM_InLt_St_struct>::get().native();
#endif
    plugin->languageKind = PRES_TYPEPLUGIN_CPPSTL_LANG;

    /* Serialized buffer */
    plugin->getBuffer =
        (PRESTypePluginGetBufferFunction)
            HDBM_InLt_St_structPlugin_get_buffer;
    plugin->returnBuffer =
        (PRESTypePluginReturnBufferFunction)
            HDBM_InLt_St_structPlugin_return_buffer;
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

    static const char *TYPE_NAME = "HDBM_InLt_St_struct";
    plugin->endpointTypeName = TYPE_NAME;
    plugin->isMetpType = RTI_FALSE;
    return plugin;
}

void HDBM_InLt_St_structPlugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
}

/* ----------------------------------------------------------------------------
 *  Type HDBI_Win_PctAct_struct
 * -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

HDBI_Win_PctAct_struct *
HDBI_Win_PctAct_structPluginSupport_create_data(void)
{
    try
    {
        HDBI_Win_PctAct_struct *sample = new HDBI_Win_PctAct_struct();
        ::rti::topic::allocate_sample(*sample);
        return sample;
    }
    catch (...)
    {
        return NULL;
    }
}

void HDBI_Win_PctAct_structPluginSupport_destroy_data(
    HDBI_Win_PctAct_struct *sample)
{
    delete sample;
}

RTIBool
HDBI_Win_PctAct_structPluginSupport_copy_data(
    HDBI_Win_PctAct_struct *dst,
    const HDBI_Win_PctAct_struct *src)
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
HDBI_Win_PctAct_structPlugin_on_participant_attached(
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
        (DDS_TypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type<HDBI_Win_PctAct_struct>::get().native(),
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

void HDBI_Win_PctAct_structPlugin_on_participant_detached(
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
HDBI_Win_PctAct_structPlugin_on_endpoint_attached(
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
                HDBI_Win_PctAct_structPluginSupport_create_data,
            (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                HDBI_Win_PctAct_structPluginSupport_destroy_data,
            NULL, NULL);

        if (epd == NULL)
        {
            return NULL;
        }

        if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER)
        {
            serializedSampleMaxSize = HDBI_Win_PctAct_structPlugin_get_serialized_sample_max_size(
                epd, RTI_FALSE, RTI_CDR_ENCAPSULATION_ID_CDR_BE, 0);
            PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

            if (PRESTypePluginDefaultEndpointData_createWriterPool(
                    epd,
                    endpoint_info,
                    (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                        HDBI_Win_PctAct_structPlugin_get_serialized_sample_max_size,
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

void HDBI_Win_PctAct_structPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{
    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}

void HDBI_Win_PctAct_structPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    HDBI_Win_PctAct_struct *sample,
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
            "HDBI_Win_PctAct_structPlugin_return_sample",
            &RTI_LOG_ANY_FAILURE_ss,
            "exception: ",
            ex.what());
    }

    PRESTypePluginDefaultEndpointData_returnSample(
        endpoint_data, sample, handle);
}

RTIBool
HDBI_Win_PctAct_structPlugin_copy_sample(
    PRESTypePluginEndpointData,
    HDBI_Win_PctAct_struct *dst,
    const HDBI_Win_PctAct_struct *src)
{
    return HDBI_Win_PctAct_structPluginSupport_copy_data(dst, src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int
HDBI_Win_PctAct_structPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

RTIBool
HDBI_Win_PctAct_structPlugin_serialize_to_cdr_buffer(
    char *buffer,
    unsigned int *length,
    const HDBI_Win_PctAct_struct *sample,
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
        plugin.typeCode = (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type<HDBI_Win_PctAct_struct>::get().native();
        pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
            HDBI_Win_PctAct_struct,
            true, true, true>();

        encapsulationId = DDS_TypeCode_get_native_encapsulation(
            (DDS_TypeCode *)plugin.typeCode,
            representation);

        if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID)
        {
            return RTI_FALSE;
        }

        epd._maxSizeSerializedSample =
            HDBI_Win_PctAct_structPlugin_get_serialized_sample_max_size(
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
HDBI_Win_PctAct_structPlugin_deserialize_from_cdr_buffer(
    HDBI_Win_PctAct_struct *sample,
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
    plugin.typeCode = (struct RTICdrTypeCode *)(struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type<HDBI_Win_PctAct_struct>::get().native();
    pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
        HDBI_Win_PctAct_struct,
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
HDBI_Win_PctAct_structPlugin_get_serialized_sample_max_size(
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
HDBI_Win_PctAct_structPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

RTIBool HDBI_Win_PctAct_structPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    HDBI_Win_PctAct_struct **sample,
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
HDBI_Win_PctAct_structPlugin_get_serialized_key_max_size(
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
HDBI_Win_PctAct_structPlugin_get_serialized_key_max_size_for_keyhash(
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
struct PRESTypePlugin *HDBI_Win_PctAct_structPlugin_new(void)
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
            HDBI_Win_PctAct_structPlugin_on_participant_attached;
    plugin->onParticipantDetached =
        (PRESTypePluginOnParticipantDetachedCallback)
            HDBI_Win_PctAct_structPlugin_on_participant_detached;
    plugin->onEndpointAttached =
        (PRESTypePluginOnEndpointAttachedCallback)
            HDBI_Win_PctAct_structPlugin_on_endpoint_attached;
    plugin->onEndpointDetached =
        (PRESTypePluginOnEndpointDetachedCallback)
            HDBI_Win_PctAct_structPlugin_on_endpoint_detached;

    plugin->copySampleFnc =
        (PRESTypePluginCopySampleFunction)
            HDBI_Win_PctAct_structPlugin_copy_sample;
    plugin->createSampleFnc =
        (PRESTypePluginCreateSampleFunction)
            HDBI_Win_PctAct_structPlugin_create_sample;
    plugin->destroySampleFnc =
        (PRESTypePluginDestroySampleFunction)
            HDBI_Win_PctAct_structPlugin_destroy_sample;

    plugin->serializeFnc =
        (PRESTypePluginSerializeFunction)PRESTypePlugin_interpretedSerialize;
    plugin->deserializeFnc =
        (PRESTypePluginDeserializeFunction)PRESTypePlugin_interpretedDeserializeWithAlloc;
    plugin->getSerializedSampleMaxSizeFnc =
        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            HDBI_Win_PctAct_structPlugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
        (PRESTypePluginGetSerializedSampleMinSizeFunction)
            PRESTypePlugin_interpretedGetSerializedSampleMinSize;
    plugin->getDeserializedSampleMaxSizeFnc = NULL;
    plugin->getSampleFnc =
        (PRESTypePluginGetSampleFunction)
            HDBI_Win_PctAct_structPlugin_get_sample;
    plugin->returnSampleFnc =
        (PRESTypePluginReturnSampleFunction)
            HDBI_Win_PctAct_structPlugin_return_sample;
    plugin->getKeyKindFnc =
        (PRESTypePluginGetKeyKindFunction)
            HDBI_Win_PctAct_structPlugin_get_key_kind;

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
    plugin->typeCode = (struct RTICdrTypeCode *)&::rti::topic::dynamic_type<HDBI_Win_PctAct_struct>::get().native();
#endif
    plugin->languageKind = PRES_TYPEPLUGIN_CPPSTL_LANG;

    /* Serialized buffer */
    plugin->getBuffer =
        (PRESTypePluginGetBufferFunction)
            HDBI_Win_PctAct_structPlugin_get_buffer;
    plugin->returnBuffer =
        (PRESTypePluginReturnBufferFunction)
            HDBI_Win_PctAct_structPlugin_return_buffer;
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

    static const char *TYPE_NAME = "HDBI_Win_PctAct_struct";
    plugin->endpointTypeName = TYPE_NAME;
    plugin->isMetpType = RTI_FALSE;
    return plugin;
}

void HDBI_Win_PctAct_structPlugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
}

/* ----------------------------------------------------------------------------
 *  Type HDBM_Win_St_struct
 * -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

HDBM_Win_St_struct *
HDBM_Win_St_structPluginSupport_create_data(void)
{
    try
    {
        HDBM_Win_St_struct *sample = new HDBM_Win_St_struct();
        ::rti::topic::allocate_sample(*sample);
        return sample;
    }
    catch (...)
    {
        return NULL;
    }
}

void HDBM_Win_St_structPluginSupport_destroy_data(
    HDBM_Win_St_struct *sample)
{
    delete sample;
}

RTIBool
HDBM_Win_St_structPluginSupport_copy_data(
    HDBM_Win_St_struct *dst,
    const HDBM_Win_St_struct *src)
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
HDBM_Win_St_structPlugin_on_participant_attached(
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
        (DDS_TypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type<HDBM_Win_St_struct>::get().native(),
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

void HDBM_Win_St_structPlugin_on_participant_detached(
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
HDBM_Win_St_structPlugin_on_endpoint_attached(
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
                HDBM_Win_St_structPluginSupport_create_data,
            (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                HDBM_Win_St_structPluginSupport_destroy_data,
            NULL, NULL);

        if (epd == NULL)
        {
            return NULL;
        }

        if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER)
        {
            serializedSampleMaxSize = HDBM_Win_St_structPlugin_get_serialized_sample_max_size(
                epd, RTI_FALSE, RTI_CDR_ENCAPSULATION_ID_CDR_BE, 0);
            PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

            if (PRESTypePluginDefaultEndpointData_createWriterPool(
                    epd,
                    endpoint_info,
                    (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                        HDBM_Win_St_structPlugin_get_serialized_sample_max_size,
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

void HDBM_Win_St_structPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{
    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}

void HDBM_Win_St_structPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    HDBM_Win_St_struct *sample,
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
            "HDBM_Win_St_structPlugin_return_sample",
            &RTI_LOG_ANY_FAILURE_ss,
            "exception: ",
            ex.what());
    }

    PRESTypePluginDefaultEndpointData_returnSample(
        endpoint_data, sample, handle);
}

RTIBool
HDBM_Win_St_structPlugin_copy_sample(
    PRESTypePluginEndpointData,
    HDBM_Win_St_struct *dst,
    const HDBM_Win_St_struct *src)
{
    return HDBM_Win_St_structPluginSupport_copy_data(dst, src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int
HDBM_Win_St_structPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

RTIBool
HDBM_Win_St_structPlugin_serialize_to_cdr_buffer(
    char *buffer,
    unsigned int *length,
    const HDBM_Win_St_struct *sample,
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
        plugin.typeCode = (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type<HDBM_Win_St_struct>::get().native();
        pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
            HDBM_Win_St_struct,
            true, true, true>();

        encapsulationId = DDS_TypeCode_get_native_encapsulation(
            (DDS_TypeCode *)plugin.typeCode,
            representation);

        if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID)
        {
            return RTI_FALSE;
        }

        epd._maxSizeSerializedSample =
            HDBM_Win_St_structPlugin_get_serialized_sample_max_size(
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
HDBM_Win_St_structPlugin_deserialize_from_cdr_buffer(
    HDBM_Win_St_struct *sample,
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
    plugin.typeCode = (struct RTICdrTypeCode *)(struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type<HDBM_Win_St_struct>::get().native();
    pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
        HDBM_Win_St_struct,
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
HDBM_Win_St_structPlugin_get_serialized_sample_max_size(
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
HDBM_Win_St_structPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

RTIBool HDBM_Win_St_structPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    HDBM_Win_St_struct **sample,
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
HDBM_Win_St_structPlugin_get_serialized_key_max_size(
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
HDBM_Win_St_structPlugin_get_serialized_key_max_size_for_keyhash(
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
struct PRESTypePlugin *HDBM_Win_St_structPlugin_new(void)
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
            HDBM_Win_St_structPlugin_on_participant_attached;
    plugin->onParticipantDetached =
        (PRESTypePluginOnParticipantDetachedCallback)
            HDBM_Win_St_structPlugin_on_participant_detached;
    plugin->onEndpointAttached =
        (PRESTypePluginOnEndpointAttachedCallback)
            HDBM_Win_St_structPlugin_on_endpoint_attached;
    plugin->onEndpointDetached =
        (PRESTypePluginOnEndpointDetachedCallback)
            HDBM_Win_St_structPlugin_on_endpoint_detached;

    plugin->copySampleFnc =
        (PRESTypePluginCopySampleFunction)
            HDBM_Win_St_structPlugin_copy_sample;
    plugin->createSampleFnc =
        (PRESTypePluginCreateSampleFunction)
            HDBM_Win_St_structPlugin_create_sample;
    plugin->destroySampleFnc =
        (PRESTypePluginDestroySampleFunction)
            HDBM_Win_St_structPlugin_destroy_sample;

    plugin->serializeFnc =
        (PRESTypePluginSerializeFunction)PRESTypePlugin_interpretedSerialize;
    plugin->deserializeFnc =
        (PRESTypePluginDeserializeFunction)PRESTypePlugin_interpretedDeserializeWithAlloc;
    plugin->getSerializedSampleMaxSizeFnc =
        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            HDBM_Win_St_structPlugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
        (PRESTypePluginGetSerializedSampleMinSizeFunction)
            PRESTypePlugin_interpretedGetSerializedSampleMinSize;
    plugin->getDeserializedSampleMaxSizeFnc = NULL;
    plugin->getSampleFnc =
        (PRESTypePluginGetSampleFunction)
            HDBM_Win_St_structPlugin_get_sample;
    plugin->returnSampleFnc =
        (PRESTypePluginReturnSampleFunction)
            HDBM_Win_St_structPlugin_return_sample;
    plugin->getKeyKindFnc =
        (PRESTypePluginGetKeyKindFunction)
            HDBM_Win_St_structPlugin_get_key_kind;

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
    plugin->typeCode = (struct RTICdrTypeCode *)&::rti::topic::dynamic_type<HDBM_Win_St_struct>::get().native();
#endif
    plugin->languageKind = PRES_TYPEPLUGIN_CPPSTL_LANG;

    /* Serialized buffer */
    plugin->getBuffer =
        (PRESTypePluginGetBufferFunction)
            HDBM_Win_St_structPlugin_get_buffer;
    plugin->returnBuffer =
        (PRESTypePluginReturnBufferFunction)
            HDBM_Win_St_structPlugin_return_buffer;
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

    static const char *TYPE_NAME = "HDBM_Win_St_struct";
    plugin->endpointTypeName = TYPE_NAME;
    plugin->isMetpType = RTI_FALSE;
    return plugin;
}

void HDBM_Win_St_structPlugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
}

/* ----------------------------------------------------------------------------
 *  Type HDBI_StAdj_Act_struct
 * -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

HDBI_StAdj_Act_struct *
HDBI_StAdj_Act_structPluginSupport_create_data(void)
{
    try
    {
        HDBI_StAdj_Act_struct *sample = new HDBI_StAdj_Act_struct();
        ::rti::topic::allocate_sample(*sample);
        return sample;
    }
    catch (...)
    {
        return NULL;
    }
}

void HDBI_StAdj_Act_structPluginSupport_destroy_data(
    HDBI_StAdj_Act_struct *sample)
{
    delete sample;
}

RTIBool
HDBI_StAdj_Act_structPluginSupport_copy_data(
    HDBI_StAdj_Act_struct *dst,
    const HDBI_StAdj_Act_struct *src)
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
HDBI_StAdj_Act_structPlugin_on_participant_attached(
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
        (DDS_TypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type<HDBI_StAdj_Act_struct>::get().native(),
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

void HDBI_StAdj_Act_structPlugin_on_participant_detached(
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
HDBI_StAdj_Act_structPlugin_on_endpoint_attached(
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
                HDBI_StAdj_Act_structPluginSupport_create_data,
            (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                HDBI_StAdj_Act_structPluginSupport_destroy_data,
            NULL, NULL);

        if (epd == NULL)
        {
            return NULL;
        }

        if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER)
        {
            serializedSampleMaxSize = HDBI_StAdj_Act_structPlugin_get_serialized_sample_max_size(
                epd, RTI_FALSE, RTI_CDR_ENCAPSULATION_ID_CDR_BE, 0);
            PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

            if (PRESTypePluginDefaultEndpointData_createWriterPool(
                    epd,
                    endpoint_info,
                    (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                        HDBI_StAdj_Act_structPlugin_get_serialized_sample_max_size,
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

void HDBI_StAdj_Act_structPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{
    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}

void HDBI_StAdj_Act_structPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    HDBI_StAdj_Act_struct *sample,
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
            "HDBI_StAdj_Act_structPlugin_return_sample",
            &RTI_LOG_ANY_FAILURE_ss,
            "exception: ",
            ex.what());
    }

    PRESTypePluginDefaultEndpointData_returnSample(
        endpoint_data, sample, handle);
}

RTIBool
HDBI_StAdj_Act_structPlugin_copy_sample(
    PRESTypePluginEndpointData,
    HDBI_StAdj_Act_struct *dst,
    const HDBI_StAdj_Act_struct *src)
{
    return HDBI_StAdj_Act_structPluginSupport_copy_data(dst, src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int
HDBI_StAdj_Act_structPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

RTIBool
HDBI_StAdj_Act_structPlugin_serialize_to_cdr_buffer(
    char *buffer,
    unsigned int *length,
    const HDBI_StAdj_Act_struct *sample,
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
        plugin.typeCode = (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type<HDBI_StAdj_Act_struct>::get().native();
        pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
            HDBI_StAdj_Act_struct,
            true, true, true>();

        encapsulationId = DDS_TypeCode_get_native_encapsulation(
            (DDS_TypeCode *)plugin.typeCode,
            representation);

        if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID)
        {
            return RTI_FALSE;
        }

        epd._maxSizeSerializedSample =
            HDBI_StAdj_Act_structPlugin_get_serialized_sample_max_size(
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
HDBI_StAdj_Act_structPlugin_deserialize_from_cdr_buffer(
    HDBI_StAdj_Act_struct *sample,
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
    plugin.typeCode = (struct RTICdrTypeCode *)(struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type<HDBI_StAdj_Act_struct>::get().native();
    pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
        HDBI_StAdj_Act_struct,
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
HDBI_StAdj_Act_structPlugin_get_serialized_sample_max_size(
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
HDBI_StAdj_Act_structPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

RTIBool HDBI_StAdj_Act_structPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    HDBI_StAdj_Act_struct **sample,
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
HDBI_StAdj_Act_structPlugin_get_serialized_key_max_size(
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
HDBI_StAdj_Act_structPlugin_get_serialized_key_max_size_for_keyhash(
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
struct PRESTypePlugin *HDBI_StAdj_Act_structPlugin_new(void)
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
            HDBI_StAdj_Act_structPlugin_on_participant_attached;
    plugin->onParticipantDetached =
        (PRESTypePluginOnParticipantDetachedCallback)
            HDBI_StAdj_Act_structPlugin_on_participant_detached;
    plugin->onEndpointAttached =
        (PRESTypePluginOnEndpointAttachedCallback)
            HDBI_StAdj_Act_structPlugin_on_endpoint_attached;
    plugin->onEndpointDetached =
        (PRESTypePluginOnEndpointDetachedCallback)
            HDBI_StAdj_Act_structPlugin_on_endpoint_detached;

    plugin->copySampleFnc =
        (PRESTypePluginCopySampleFunction)
            HDBI_StAdj_Act_structPlugin_copy_sample;
    plugin->createSampleFnc =
        (PRESTypePluginCreateSampleFunction)
            HDBI_StAdj_Act_structPlugin_create_sample;
    plugin->destroySampleFnc =
        (PRESTypePluginDestroySampleFunction)
            HDBI_StAdj_Act_structPlugin_destroy_sample;

    plugin->serializeFnc =
        (PRESTypePluginSerializeFunction)PRESTypePlugin_interpretedSerialize;
    plugin->deserializeFnc =
        (PRESTypePluginDeserializeFunction)PRESTypePlugin_interpretedDeserializeWithAlloc;
    plugin->getSerializedSampleMaxSizeFnc =
        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            HDBI_StAdj_Act_structPlugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
        (PRESTypePluginGetSerializedSampleMinSizeFunction)
            PRESTypePlugin_interpretedGetSerializedSampleMinSize;
    plugin->getDeserializedSampleMaxSizeFnc = NULL;
    plugin->getSampleFnc =
        (PRESTypePluginGetSampleFunction)
            HDBI_StAdj_Act_structPlugin_get_sample;
    plugin->returnSampleFnc =
        (PRESTypePluginReturnSampleFunction)
            HDBI_StAdj_Act_structPlugin_return_sample;
    plugin->getKeyKindFnc =
        (PRESTypePluginGetKeyKindFunction)
            HDBI_StAdj_Act_structPlugin_get_key_kind;

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
    plugin->typeCode = (struct RTICdrTypeCode *)&::rti::topic::dynamic_type<HDBI_StAdj_Act_struct>::get().native();
#endif
    plugin->languageKind = PRES_TYPEPLUGIN_CPPSTL_LANG;

    /* Serialized buffer */
    plugin->getBuffer =
        (PRESTypePluginGetBufferFunction)
            HDBI_StAdj_Act_structPlugin_get_buffer;
    plugin->returnBuffer =
        (PRESTypePluginReturnBufferFunction)
            HDBI_StAdj_Act_structPlugin_return_buffer;
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

    static const char *TYPE_NAME = "HDBI_StAdj_Act_struct";
    plugin->endpointTypeName = TYPE_NAME;
    plugin->isMetpType = RTI_FALSE;
    return plugin;
}

void HDBI_StAdj_Act_structPlugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
}

/* ----------------------------------------------------------------------------
 *  Type HDBM_StAdj_St_struct
 * -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

HDBM_StAdj_St_struct *
HDBM_StAdj_St_structPluginSupport_create_data(void)
{
    try
    {
        HDBM_StAdj_St_struct *sample = new HDBM_StAdj_St_struct();
        ::rti::topic::allocate_sample(*sample);
        return sample;
    }
    catch (...)
    {
        return NULL;
    }
}

void HDBM_StAdj_St_structPluginSupport_destroy_data(
    HDBM_StAdj_St_struct *sample)
{
    delete sample;
}

RTIBool
HDBM_StAdj_St_structPluginSupport_copy_data(
    HDBM_StAdj_St_struct *dst,
    const HDBM_StAdj_St_struct *src)
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
HDBM_StAdj_St_structPlugin_on_participant_attached(
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
        (DDS_TypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type<HDBM_StAdj_St_struct>::get().native(),
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

void HDBM_StAdj_St_structPlugin_on_participant_detached(
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
HDBM_StAdj_St_structPlugin_on_endpoint_attached(
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
                HDBM_StAdj_St_structPluginSupport_create_data,
            (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                HDBM_StAdj_St_structPluginSupport_destroy_data,
            NULL, NULL);

        if (epd == NULL)
        {
            return NULL;
        }

        if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER)
        {
            serializedSampleMaxSize = HDBM_StAdj_St_structPlugin_get_serialized_sample_max_size(
                epd, RTI_FALSE, RTI_CDR_ENCAPSULATION_ID_CDR_BE, 0);
            PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

            if (PRESTypePluginDefaultEndpointData_createWriterPool(
                    epd,
                    endpoint_info,
                    (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                        HDBM_StAdj_St_structPlugin_get_serialized_sample_max_size,
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

void HDBM_StAdj_St_structPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{
    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}

void HDBM_StAdj_St_structPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    HDBM_StAdj_St_struct *sample,
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
            "HDBM_StAdj_St_structPlugin_return_sample",
            &RTI_LOG_ANY_FAILURE_ss,
            "exception: ",
            ex.what());
    }

    PRESTypePluginDefaultEndpointData_returnSample(
        endpoint_data, sample, handle);
}

RTIBool
HDBM_StAdj_St_structPlugin_copy_sample(
    PRESTypePluginEndpointData,
    HDBM_StAdj_St_struct *dst,
    const HDBM_StAdj_St_struct *src)
{
    return HDBM_StAdj_St_structPluginSupport_copy_data(dst, src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int
HDBM_StAdj_St_structPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

RTIBool
HDBM_StAdj_St_structPlugin_serialize_to_cdr_buffer(
    char *buffer,
    unsigned int *length,
    const HDBM_StAdj_St_struct *sample,
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
        plugin.typeCode = (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type<HDBM_StAdj_St_struct>::get().native();
        pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
            HDBM_StAdj_St_struct,
            true, true, true>();

        encapsulationId = DDS_TypeCode_get_native_encapsulation(
            (DDS_TypeCode *)plugin.typeCode,
            representation);

        if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID)
        {
            return RTI_FALSE;
        }

        epd._maxSizeSerializedSample =
            HDBM_StAdj_St_structPlugin_get_serialized_sample_max_size(
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
HDBM_StAdj_St_structPlugin_deserialize_from_cdr_buffer(
    HDBM_StAdj_St_struct *sample,
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
    plugin.typeCode = (struct RTICdrTypeCode *)(struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type<HDBM_StAdj_St_struct>::get().native();
    pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
        HDBM_StAdj_St_struct,
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
HDBM_StAdj_St_structPlugin_get_serialized_sample_max_size(
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
HDBM_StAdj_St_structPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

RTIBool HDBM_StAdj_St_structPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    HDBM_StAdj_St_struct **sample,
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
HDBM_StAdj_St_structPlugin_get_serialized_key_max_size(
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
HDBM_StAdj_St_structPlugin_get_serialized_key_max_size_for_keyhash(
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
struct PRESTypePlugin *HDBM_StAdj_St_structPlugin_new(void)
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
            HDBM_StAdj_St_structPlugin_on_participant_attached;
    plugin->onParticipantDetached =
        (PRESTypePluginOnParticipantDetachedCallback)
            HDBM_StAdj_St_structPlugin_on_participant_detached;
    plugin->onEndpointAttached =
        (PRESTypePluginOnEndpointAttachedCallback)
            HDBM_StAdj_St_structPlugin_on_endpoint_attached;
    plugin->onEndpointDetached =
        (PRESTypePluginOnEndpointDetachedCallback)
            HDBM_StAdj_St_structPlugin_on_endpoint_detached;

    plugin->copySampleFnc =
        (PRESTypePluginCopySampleFunction)
            HDBM_StAdj_St_structPlugin_copy_sample;
    plugin->createSampleFnc =
        (PRESTypePluginCreateSampleFunction)
            HDBM_StAdj_St_structPlugin_create_sample;
    plugin->destroySampleFnc =
        (PRESTypePluginDestroySampleFunction)
            HDBM_StAdj_St_structPlugin_destroy_sample;

    plugin->serializeFnc =
        (PRESTypePluginSerializeFunction)PRESTypePlugin_interpretedSerialize;
    plugin->deserializeFnc =
        (PRESTypePluginDeserializeFunction)PRESTypePlugin_interpretedDeserializeWithAlloc;
    plugin->getSerializedSampleMaxSizeFnc =
        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            HDBM_StAdj_St_structPlugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
        (PRESTypePluginGetSerializedSampleMinSizeFunction)
            PRESTypePlugin_interpretedGetSerializedSampleMinSize;
    plugin->getDeserializedSampleMaxSizeFnc = NULL;
    plugin->getSampleFnc =
        (PRESTypePluginGetSampleFunction)
            HDBM_StAdj_St_structPlugin_get_sample;
    plugin->returnSampleFnc =
        (PRESTypePluginReturnSampleFunction)
            HDBM_StAdj_St_structPlugin_return_sample;
    plugin->getKeyKindFnc =
        (PRESTypePluginGetKeyKindFunction)
            HDBM_StAdj_St_structPlugin_get_key_kind;

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
    plugin->typeCode = (struct RTICdrTypeCode *)&::rti::topic::dynamic_type<HDBM_StAdj_St_struct>::get().native();
#endif
    plugin->languageKind = PRES_TYPEPLUGIN_CPPSTL_LANG;

    /* Serialized buffer */
    plugin->getBuffer =
        (PRESTypePluginGetBufferFunction)
            HDBM_StAdj_St_structPlugin_get_buffer;
    plugin->returnBuffer =
        (PRESTypePluginReturnBufferFunction)
            HDBM_StAdj_St_structPlugin_return_buffer;
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

    static const char *TYPE_NAME = "HDBM_StAdj_St_struct";
    plugin->endpointTypeName = TYPE_NAME;
    plugin->isMetpType = RTI_FALSE;
    return plugin;
}

void HDBM_StAdj_St_structPlugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
}

/* ----------------------------------------------------------------------------
 *  Type HDBI_BdPst_Act_struct
 * -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

HDBI_BdPst_Act_struct *
HDBI_BdPst_Act_structPluginSupport_create_data(void)
{
    try
    {
        HDBI_BdPst_Act_struct *sample = new HDBI_BdPst_Act_struct();
        ::rti::topic::allocate_sample(*sample);
        return sample;
    }
    catch (...)
    {
        return NULL;
    }
}

void HDBI_BdPst_Act_structPluginSupport_destroy_data(
    HDBI_BdPst_Act_struct *sample)
{
    delete sample;
}

RTIBool
HDBI_BdPst_Act_structPluginSupport_copy_data(
    HDBI_BdPst_Act_struct *dst,
    const HDBI_BdPst_Act_struct *src)
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
HDBI_BdPst_Act_structPlugin_on_participant_attached(
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
        (DDS_TypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type<HDBI_BdPst_Act_struct>::get().native(),
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

void HDBI_BdPst_Act_structPlugin_on_participant_detached(
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
HDBI_BdPst_Act_structPlugin_on_endpoint_attached(
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
                HDBI_BdPst_Act_structPluginSupport_create_data,
            (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                HDBI_BdPst_Act_structPluginSupport_destroy_data,
            NULL, NULL);

        if (epd == NULL)
        {
            return NULL;
        }

        if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER)
        {
            serializedSampleMaxSize = HDBI_BdPst_Act_structPlugin_get_serialized_sample_max_size(
                epd, RTI_FALSE, RTI_CDR_ENCAPSULATION_ID_CDR_BE, 0);
            PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

            if (PRESTypePluginDefaultEndpointData_createWriterPool(
                    epd,
                    endpoint_info,
                    (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                        HDBI_BdPst_Act_structPlugin_get_serialized_sample_max_size,
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

void HDBI_BdPst_Act_structPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{
    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}

void HDBI_BdPst_Act_structPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    HDBI_BdPst_Act_struct *sample,
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
            "HDBI_BdPst_Act_structPlugin_return_sample",
            &RTI_LOG_ANY_FAILURE_ss,
            "exception: ",
            ex.what());
    }

    PRESTypePluginDefaultEndpointData_returnSample(
        endpoint_data, sample, handle);
}

RTIBool
HDBI_BdPst_Act_structPlugin_copy_sample(
    PRESTypePluginEndpointData,
    HDBI_BdPst_Act_struct *dst,
    const HDBI_BdPst_Act_struct *src)
{
    return HDBI_BdPst_Act_structPluginSupport_copy_data(dst, src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int
HDBI_BdPst_Act_structPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

RTIBool
HDBI_BdPst_Act_structPlugin_serialize_to_cdr_buffer(
    char *buffer,
    unsigned int *length,
    const HDBI_BdPst_Act_struct *sample,
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
        plugin.typeCode = (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type<HDBI_BdPst_Act_struct>::get().native();
        pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
            HDBI_BdPst_Act_struct,
            true, true, true>();

        encapsulationId = DDS_TypeCode_get_native_encapsulation(
            (DDS_TypeCode *)plugin.typeCode,
            representation);

        if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID)
        {
            return RTI_FALSE;
        }

        epd._maxSizeSerializedSample =
            HDBI_BdPst_Act_structPlugin_get_serialized_sample_max_size(
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
HDBI_BdPst_Act_structPlugin_deserialize_from_cdr_buffer(
    HDBI_BdPst_Act_struct *sample,
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
    plugin.typeCode = (struct RTICdrTypeCode *)(struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type<HDBI_BdPst_Act_struct>::get().native();
    pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
        HDBI_BdPst_Act_struct,
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
HDBI_BdPst_Act_structPlugin_get_serialized_sample_max_size(
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
HDBI_BdPst_Act_structPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

RTIBool HDBI_BdPst_Act_structPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    HDBI_BdPst_Act_struct **sample,
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
HDBI_BdPst_Act_structPlugin_get_serialized_key_max_size(
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
HDBI_BdPst_Act_structPlugin_get_serialized_key_max_size_for_keyhash(
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
struct PRESTypePlugin *HDBI_BdPst_Act_structPlugin_new(void)
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
            HDBI_BdPst_Act_structPlugin_on_participant_attached;
    plugin->onParticipantDetached =
        (PRESTypePluginOnParticipantDetachedCallback)
            HDBI_BdPst_Act_structPlugin_on_participant_detached;
    plugin->onEndpointAttached =
        (PRESTypePluginOnEndpointAttachedCallback)
            HDBI_BdPst_Act_structPlugin_on_endpoint_attached;
    plugin->onEndpointDetached =
        (PRESTypePluginOnEndpointDetachedCallback)
            HDBI_BdPst_Act_structPlugin_on_endpoint_detached;

    plugin->copySampleFnc =
        (PRESTypePluginCopySampleFunction)
            HDBI_BdPst_Act_structPlugin_copy_sample;
    plugin->createSampleFnc =
        (PRESTypePluginCreateSampleFunction)
            HDBI_BdPst_Act_structPlugin_create_sample;
    plugin->destroySampleFnc =
        (PRESTypePluginDestroySampleFunction)
            HDBI_BdPst_Act_structPlugin_destroy_sample;

    plugin->serializeFnc =
        (PRESTypePluginSerializeFunction)PRESTypePlugin_interpretedSerialize;
    plugin->deserializeFnc =
        (PRESTypePluginDeserializeFunction)PRESTypePlugin_interpretedDeserializeWithAlloc;
    plugin->getSerializedSampleMaxSizeFnc =
        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            HDBI_BdPst_Act_structPlugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
        (PRESTypePluginGetSerializedSampleMinSizeFunction)
            PRESTypePlugin_interpretedGetSerializedSampleMinSize;
    plugin->getDeserializedSampleMaxSizeFnc = NULL;
    plugin->getSampleFnc =
        (PRESTypePluginGetSampleFunction)
            HDBI_BdPst_Act_structPlugin_get_sample;
    plugin->returnSampleFnc =
        (PRESTypePluginReturnSampleFunction)
            HDBI_BdPst_Act_structPlugin_return_sample;
    plugin->getKeyKindFnc =
        (PRESTypePluginGetKeyKindFunction)
            HDBI_BdPst_Act_structPlugin_get_key_kind;

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
    plugin->typeCode = (struct RTICdrTypeCode *)&::rti::topic::dynamic_type<HDBI_BdPst_Act_struct>::get().native();
#endif
    plugin->languageKind = PRES_TYPEPLUGIN_CPPSTL_LANG;

    /* Serialized buffer */
    plugin->getBuffer =
        (PRESTypePluginGetBufferFunction)
            HDBI_BdPst_Act_structPlugin_get_buffer;
    plugin->returnBuffer =
        (PRESTypePluginReturnBufferFunction)
            HDBI_BdPst_Act_structPlugin_return_buffer;
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

    static const char *TYPE_NAME = "HDBI_BdPst_Act_struct";
    plugin->endpointTypeName = TYPE_NAME;
    plugin->isMetpType = RTI_FALSE;
    return plugin;
}

void HDBI_BdPst_Act_structPlugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
}

/* ----------------------------------------------------------------------------
 *  Type HDBM_BdPst_St_struct
 * -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

HDBM_BdPst_St_struct *
HDBM_BdPst_St_structPluginSupport_create_data(void)
{
    try
    {
        HDBM_BdPst_St_struct *sample = new HDBM_BdPst_St_struct();
        ::rti::topic::allocate_sample(*sample);
        return sample;
    }
    catch (...)
    {
        return NULL;
    }
}

void HDBM_BdPst_St_structPluginSupport_destroy_data(
    HDBM_BdPst_St_struct *sample)
{
    delete sample;
}

RTIBool
HDBM_BdPst_St_structPluginSupport_copy_data(
    HDBM_BdPst_St_struct *dst,
    const HDBM_BdPst_St_struct *src)
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
HDBM_BdPst_St_structPlugin_on_participant_attached(
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
        (DDS_TypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type<HDBM_BdPst_St_struct>::get().native(),
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

void HDBM_BdPst_St_structPlugin_on_participant_detached(
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
HDBM_BdPst_St_structPlugin_on_endpoint_attached(
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
                HDBM_BdPst_St_structPluginSupport_create_data,
            (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                HDBM_BdPst_St_structPluginSupport_destroy_data,
            NULL, NULL);

        if (epd == NULL)
        {
            return NULL;
        }

        if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER)
        {
            serializedSampleMaxSize = HDBM_BdPst_St_structPlugin_get_serialized_sample_max_size(
                epd, RTI_FALSE, RTI_CDR_ENCAPSULATION_ID_CDR_BE, 0);
            PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

            if (PRESTypePluginDefaultEndpointData_createWriterPool(
                    epd,
                    endpoint_info,
                    (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                        HDBM_BdPst_St_structPlugin_get_serialized_sample_max_size,
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

void HDBM_BdPst_St_structPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{
    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}

void HDBM_BdPst_St_structPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    HDBM_BdPst_St_struct *sample,
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
            "HDBM_BdPst_St_structPlugin_return_sample",
            &RTI_LOG_ANY_FAILURE_ss,
            "exception: ",
            ex.what());
    }

    PRESTypePluginDefaultEndpointData_returnSample(
        endpoint_data, sample, handle);
}

RTIBool
HDBM_BdPst_St_structPlugin_copy_sample(
    PRESTypePluginEndpointData,
    HDBM_BdPst_St_struct *dst,
    const HDBM_BdPst_St_struct *src)
{
    return HDBM_BdPst_St_structPluginSupport_copy_data(dst, src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int
HDBM_BdPst_St_structPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

RTIBool
HDBM_BdPst_St_structPlugin_serialize_to_cdr_buffer(
    char *buffer,
    unsigned int *length,
    const HDBM_BdPst_St_struct *sample,
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
        plugin.typeCode = (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type<HDBM_BdPst_St_struct>::get().native();
        pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
            HDBM_BdPst_St_struct,
            true, true, true>();

        encapsulationId = DDS_TypeCode_get_native_encapsulation(
            (DDS_TypeCode *)plugin.typeCode,
            representation);

        if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID)
        {
            return RTI_FALSE;
        }

        epd._maxSizeSerializedSample =
            HDBM_BdPst_St_structPlugin_get_serialized_sample_max_size(
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
HDBM_BdPst_St_structPlugin_deserialize_from_cdr_buffer(
    HDBM_BdPst_St_struct *sample,
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
    plugin.typeCode = (struct RTICdrTypeCode *)(struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type<HDBM_BdPst_St_struct>::get().native();
    pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
        HDBM_BdPst_St_struct,
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
HDBM_BdPst_St_structPlugin_get_serialized_sample_max_size(
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
HDBM_BdPst_St_structPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

RTIBool HDBM_BdPst_St_structPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    HDBM_BdPst_St_struct **sample,
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
HDBM_BdPst_St_structPlugin_get_serialized_key_max_size(
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
HDBM_BdPst_St_structPlugin_get_serialized_key_max_size_for_keyhash(
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
struct PRESTypePlugin *HDBM_BdPst_St_structPlugin_new(void)
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
            HDBM_BdPst_St_structPlugin_on_participant_attached;
    plugin->onParticipantDetached =
        (PRESTypePluginOnParticipantDetachedCallback)
            HDBM_BdPst_St_structPlugin_on_participant_detached;
    plugin->onEndpointAttached =
        (PRESTypePluginOnEndpointAttachedCallback)
            HDBM_BdPst_St_structPlugin_on_endpoint_attached;
    plugin->onEndpointDetached =
        (PRESTypePluginOnEndpointDetachedCallback)
            HDBM_BdPst_St_structPlugin_on_endpoint_detached;

    plugin->copySampleFnc =
        (PRESTypePluginCopySampleFunction)
            HDBM_BdPst_St_structPlugin_copy_sample;
    plugin->createSampleFnc =
        (PRESTypePluginCreateSampleFunction)
            HDBM_BdPst_St_structPlugin_create_sample;
    plugin->destroySampleFnc =
        (PRESTypePluginDestroySampleFunction)
            HDBM_BdPst_St_structPlugin_destroy_sample;

    plugin->serializeFnc =
        (PRESTypePluginSerializeFunction)PRESTypePlugin_interpretedSerialize;
    plugin->deserializeFnc =
        (PRESTypePluginDeserializeFunction)PRESTypePlugin_interpretedDeserializeWithAlloc;
    plugin->getSerializedSampleMaxSizeFnc =
        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            HDBM_BdPst_St_structPlugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
        (PRESTypePluginGetSerializedSampleMinSizeFunction)
            PRESTypePlugin_interpretedGetSerializedSampleMinSize;
    plugin->getDeserializedSampleMaxSizeFnc = NULL;
    plugin->getSampleFnc =
        (PRESTypePluginGetSampleFunction)
            HDBM_BdPst_St_structPlugin_get_sample;
    plugin->returnSampleFnc =
        (PRESTypePluginReturnSampleFunction)
            HDBM_BdPst_St_structPlugin_return_sample;
    plugin->getKeyKindFnc =
        (PRESTypePluginGetKeyKindFunction)
            HDBM_BdPst_St_structPlugin_get_key_kind;

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
    plugin->typeCode = (struct RTICdrTypeCode *)&::rti::topic::dynamic_type<HDBM_BdPst_St_struct>::get().native();
#endif
    plugin->languageKind = PRES_TYPEPLUGIN_CPPSTL_LANG;

    /* Serialized buffer */
    plugin->getBuffer =
        (PRESTypePluginGetBufferFunction)
            HDBM_BdPst_St_structPlugin_get_buffer;
    plugin->returnBuffer =
        (PRESTypePluginReturnBufferFunction)
            HDBM_BdPst_St_structPlugin_return_buffer;
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

    static const char *TYPE_NAME = "HDBM_BdPst_St_struct";
    plugin->endpointTypeName = TYPE_NAME;
    plugin->isMetpType = RTI_FALSE;
    return plugin;
}

void HDBM_BdPst_St_structPlugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
}
#undef RTI_CDR_CURRENT_SUBMODULE
