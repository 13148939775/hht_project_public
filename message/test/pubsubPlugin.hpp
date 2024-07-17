

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from pubsub.idl
using RTI Code Generator (rtiddsgen) version 3.1.1.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef pubsubPlugin_131431360_h
#define pubsubPlugin_131431360_h

#include "pubsub.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#define myDataTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

#define myDataTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define myDataTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

#define myDataTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define myDataTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern myDataType*
myDataTypePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern myDataType*
myDataTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern myDataType*
myDataTypePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
myDataTypePluginSupport_copy_data(
    myDataType *out,
    const myDataType *in);

NDDSUSERDllExport extern void 
myDataTypePluginSupport_destroy_data_w_params(
    myDataType *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
myDataTypePluginSupport_destroy_data_ex(
    myDataType *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
myDataTypePluginSupport_destroy_data(
    myDataType *sample);

NDDSUSERDllExport extern void 
myDataTypePluginSupport_print_data(
    const myDataType *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
myDataTypePlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
myDataTypePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
myDataTypePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
myDataTypePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
myDataTypePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    myDataType *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
myDataTypePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    myDataType *out,
    const myDataType *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool
myDataTypePlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const myDataType *sample,
    ::dds::core::policy::DataRepresentationId representation
    = ::dds::core::policy::DataRepresentation::xcdr()); 

NDDSUSERDllExport extern RTIBool 
myDataTypePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    myDataType **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
myDataTypePlugin_deserialize_from_cdr_buffer(
    myDataType *sample,
    const char * buffer,
    unsigned int length);    

NDDSUSERDllExport extern unsigned int 
myDataTypePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
myDataTypePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
myDataTypePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
myDataTypePlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
myDataTypePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    myDataType ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
myDataTypePlugin_new(void);

NDDSUSERDllExport extern void
myDataTypePlugin_delete(struct PRESTypePlugin *);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* pubsubPlugin_131431360_h */

