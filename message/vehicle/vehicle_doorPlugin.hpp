

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from vehicle_door.idl
using RTI Code Generator (rtiddsgen) version 3.1.1.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef vehicle_doorPlugin_2059540705_h
#define vehicle_doorPlugin_2059540705_h

#include "vehicle_door.hpp"

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

#define HDBI_DrLth_Set_structPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

#define HDBI_DrLth_Set_structPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define HDBI_DrLth_Set_structPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

#define HDBI_DrLth_Set_structPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define HDBI_DrLth_Set_structPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern HDBI_DrLth_Set_struct*
HDBI_DrLth_Set_structPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern HDBI_DrLth_Set_struct*
HDBI_DrLth_Set_structPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern HDBI_DrLth_Set_struct*
HDBI_DrLth_Set_structPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
HDBI_DrLth_Set_structPluginSupport_copy_data(
    HDBI_DrLth_Set_struct *out,
    const HDBI_DrLth_Set_struct *in);

NDDSUSERDllExport extern void 
HDBI_DrLth_Set_structPluginSupport_destroy_data_w_params(
    HDBI_DrLth_Set_struct *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
HDBI_DrLth_Set_structPluginSupport_destroy_data_ex(
    HDBI_DrLth_Set_struct *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
HDBI_DrLth_Set_structPluginSupport_destroy_data(
    HDBI_DrLth_Set_struct *sample);

NDDSUSERDllExport extern void 
HDBI_DrLth_Set_structPluginSupport_print_data(
    const HDBI_DrLth_Set_struct *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
HDBI_DrLth_Set_structPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
HDBI_DrLth_Set_structPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
HDBI_DrLth_Set_structPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
HDBI_DrLth_Set_structPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
HDBI_DrLth_Set_structPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    HDBI_DrLth_Set_struct *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
HDBI_DrLth_Set_structPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    HDBI_DrLth_Set_struct *out,
    const HDBI_DrLth_Set_struct *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool
HDBI_DrLth_Set_structPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const HDBI_DrLth_Set_struct *sample,
    ::dds::core::policy::DataRepresentationId representation
    = ::dds::core::policy::DataRepresentation::xcdr()); 

NDDSUSERDllExport extern RTIBool 
HDBI_DrLth_Set_structPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    HDBI_DrLth_Set_struct **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
HDBI_DrLth_Set_structPlugin_deserialize_from_cdr_buffer(
    HDBI_DrLth_Set_struct *sample,
    const char * buffer,
    unsigned int length);    

NDDSUSERDllExport extern unsigned int 
HDBI_DrLth_Set_structPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
HDBI_DrLth_Set_structPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
HDBI_DrLth_Set_structPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
HDBI_DrLth_Set_structPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
HDBI_DrLth_Set_structPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    HDBI_DrLth_Set_struct ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
HDBI_DrLth_Set_structPlugin_new(void);

NDDSUSERDllExport extern void
HDBI_DrLth_Set_structPlugin_delete(struct PRESTypePlugin *);

#define HDBM_DrLth_Rsp_structPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

#define HDBM_DrLth_Rsp_structPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define HDBM_DrLth_Rsp_structPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

#define HDBM_DrLth_Rsp_structPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define HDBM_DrLth_Rsp_structPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern HDBM_DrLth_Rsp_struct*
HDBM_DrLth_Rsp_structPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern HDBM_DrLth_Rsp_struct*
HDBM_DrLth_Rsp_structPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern HDBM_DrLth_Rsp_struct*
HDBM_DrLth_Rsp_structPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
HDBM_DrLth_Rsp_structPluginSupport_copy_data(
    HDBM_DrLth_Rsp_struct *out,
    const HDBM_DrLth_Rsp_struct *in);

NDDSUSERDllExport extern void 
HDBM_DrLth_Rsp_structPluginSupport_destroy_data_w_params(
    HDBM_DrLth_Rsp_struct *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
HDBM_DrLth_Rsp_structPluginSupport_destroy_data_ex(
    HDBM_DrLth_Rsp_struct *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
HDBM_DrLth_Rsp_structPluginSupport_destroy_data(
    HDBM_DrLth_Rsp_struct *sample);

NDDSUSERDllExport extern void 
HDBM_DrLth_Rsp_structPluginSupport_print_data(
    const HDBM_DrLth_Rsp_struct *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
HDBM_DrLth_Rsp_structPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
HDBM_DrLth_Rsp_structPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
HDBM_DrLth_Rsp_structPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
HDBM_DrLth_Rsp_structPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
HDBM_DrLth_Rsp_structPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    HDBM_DrLth_Rsp_struct *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
HDBM_DrLth_Rsp_structPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    HDBM_DrLth_Rsp_struct *out,
    const HDBM_DrLth_Rsp_struct *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool
HDBM_DrLth_Rsp_structPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const HDBM_DrLth_Rsp_struct *sample,
    ::dds::core::policy::DataRepresentationId representation
    = ::dds::core::policy::DataRepresentation::xcdr()); 

NDDSUSERDllExport extern RTIBool 
HDBM_DrLth_Rsp_structPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    HDBM_DrLth_Rsp_struct **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
HDBM_DrLth_Rsp_structPlugin_deserialize_from_cdr_buffer(
    HDBM_DrLth_Rsp_struct *sample,
    const char * buffer,
    unsigned int length);    

NDDSUSERDllExport extern unsigned int 
HDBM_DrLth_Rsp_structPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
HDBM_DrLth_Rsp_structPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
HDBM_DrLth_Rsp_structPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
HDBM_DrLth_Rsp_structPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
HDBM_DrLth_Rsp_structPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    HDBM_DrLth_Rsp_struct ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
HDBM_DrLth_Rsp_structPlugin_new(void);

NDDSUSERDllExport extern void
HDBM_DrLth_Rsp_structPlugin_delete(struct PRESTypePlugin *);

#define HDBI_DrLth_Act_structPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

#define HDBI_DrLth_Act_structPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define HDBI_DrLth_Act_structPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

#define HDBI_DrLth_Act_structPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define HDBI_DrLth_Act_structPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern HDBI_DrLth_Act_struct*
HDBI_DrLth_Act_structPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern HDBI_DrLth_Act_struct*
HDBI_DrLth_Act_structPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern HDBI_DrLth_Act_struct*
HDBI_DrLth_Act_structPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
HDBI_DrLth_Act_structPluginSupport_copy_data(
    HDBI_DrLth_Act_struct *out,
    const HDBI_DrLth_Act_struct *in);

NDDSUSERDllExport extern void 
HDBI_DrLth_Act_structPluginSupport_destroy_data_w_params(
    HDBI_DrLth_Act_struct *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
HDBI_DrLth_Act_structPluginSupport_destroy_data_ex(
    HDBI_DrLth_Act_struct *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
HDBI_DrLth_Act_structPluginSupport_destroy_data(
    HDBI_DrLth_Act_struct *sample);

NDDSUSERDllExport extern void 
HDBI_DrLth_Act_structPluginSupport_print_data(
    const HDBI_DrLth_Act_struct *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
HDBI_DrLth_Act_structPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
HDBI_DrLth_Act_structPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
HDBI_DrLth_Act_structPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
HDBI_DrLth_Act_structPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
HDBI_DrLth_Act_structPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    HDBI_DrLth_Act_struct *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
HDBI_DrLth_Act_structPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    HDBI_DrLth_Act_struct *out,
    const HDBI_DrLth_Act_struct *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool
HDBI_DrLth_Act_structPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const HDBI_DrLth_Act_struct *sample,
    ::dds::core::policy::DataRepresentationId representation
    = ::dds::core::policy::DataRepresentation::xcdr()); 

NDDSUSERDllExport extern RTIBool 
HDBI_DrLth_Act_structPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    HDBI_DrLth_Act_struct **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
HDBI_DrLth_Act_structPlugin_deserialize_from_cdr_buffer(
    HDBI_DrLth_Act_struct *sample,
    const char * buffer,
    unsigned int length);    

NDDSUSERDllExport extern unsigned int 
HDBI_DrLth_Act_structPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
HDBI_DrLth_Act_structPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
HDBI_DrLth_Act_structPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
HDBI_DrLth_Act_structPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
HDBI_DrLth_Act_structPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    HDBI_DrLth_Act_struct ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
HDBI_DrLth_Act_structPlugin_new(void);

NDDSUSERDllExport extern void
HDBI_DrLth_Act_structPlugin_delete(struct PRESTypePlugin *);

#define HDBM_DrLth_St_structPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

#define HDBM_DrLth_St_structPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define HDBM_DrLth_St_structPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

#define HDBM_DrLth_St_structPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define HDBM_DrLth_St_structPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern HDBM_DrLth_St_struct*
HDBM_DrLth_St_structPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern HDBM_DrLth_St_struct*
HDBM_DrLth_St_structPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern HDBM_DrLth_St_struct*
HDBM_DrLth_St_structPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
HDBM_DrLth_St_structPluginSupport_copy_data(
    HDBM_DrLth_St_struct *out,
    const HDBM_DrLth_St_struct *in);

NDDSUSERDllExport extern void 
HDBM_DrLth_St_structPluginSupport_destroy_data_w_params(
    HDBM_DrLth_St_struct *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
HDBM_DrLth_St_structPluginSupport_destroy_data_ex(
    HDBM_DrLth_St_struct *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
HDBM_DrLth_St_structPluginSupport_destroy_data(
    HDBM_DrLth_St_struct *sample);

NDDSUSERDllExport extern void 
HDBM_DrLth_St_structPluginSupport_print_data(
    const HDBM_DrLth_St_struct *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
HDBM_DrLth_St_structPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
HDBM_DrLth_St_structPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
HDBM_DrLth_St_structPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
HDBM_DrLth_St_structPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
HDBM_DrLth_St_structPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    HDBM_DrLth_St_struct *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
HDBM_DrLth_St_structPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    HDBM_DrLth_St_struct *out,
    const HDBM_DrLth_St_struct *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool
HDBM_DrLth_St_structPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const HDBM_DrLth_St_struct *sample,
    ::dds::core::policy::DataRepresentationId representation
    = ::dds::core::policy::DataRepresentation::xcdr()); 

NDDSUSERDllExport extern RTIBool 
HDBM_DrLth_St_structPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    HDBM_DrLth_St_struct **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
HDBM_DrLth_St_structPlugin_deserialize_from_cdr_buffer(
    HDBM_DrLth_St_struct *sample,
    const char * buffer,
    unsigned int length);    

NDDSUSERDllExport extern unsigned int 
HDBM_DrLth_St_structPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
HDBM_DrLth_St_structPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
HDBM_DrLth_St_structPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
HDBM_DrLth_St_structPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
HDBM_DrLth_St_structPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    HDBM_DrLth_St_struct ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
HDBM_DrLth_St_structPlugin_new(void);

NDDSUSERDllExport extern void
HDBM_DrLth_St_structPlugin_delete(struct PRESTypePlugin *);

#define HDBI_InLt_Act_structPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

#define HDBI_InLt_Act_structPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define HDBI_InLt_Act_structPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

#define HDBI_InLt_Act_structPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define HDBI_InLt_Act_structPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern HDBI_InLt_Act_struct*
HDBI_InLt_Act_structPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern HDBI_InLt_Act_struct*
HDBI_InLt_Act_structPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern HDBI_InLt_Act_struct*
HDBI_InLt_Act_structPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
HDBI_InLt_Act_structPluginSupport_copy_data(
    HDBI_InLt_Act_struct *out,
    const HDBI_InLt_Act_struct *in);

NDDSUSERDllExport extern void 
HDBI_InLt_Act_structPluginSupport_destroy_data_w_params(
    HDBI_InLt_Act_struct *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
HDBI_InLt_Act_structPluginSupport_destroy_data_ex(
    HDBI_InLt_Act_struct *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
HDBI_InLt_Act_structPluginSupport_destroy_data(
    HDBI_InLt_Act_struct *sample);

NDDSUSERDllExport extern void 
HDBI_InLt_Act_structPluginSupport_print_data(
    const HDBI_InLt_Act_struct *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
HDBI_InLt_Act_structPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
HDBI_InLt_Act_structPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
HDBI_InLt_Act_structPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
HDBI_InLt_Act_structPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
HDBI_InLt_Act_structPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    HDBI_InLt_Act_struct *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
HDBI_InLt_Act_structPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    HDBI_InLt_Act_struct *out,
    const HDBI_InLt_Act_struct *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool
HDBI_InLt_Act_structPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const HDBI_InLt_Act_struct *sample,
    ::dds::core::policy::DataRepresentationId representation
    = ::dds::core::policy::DataRepresentation::xcdr()); 

NDDSUSERDllExport extern RTIBool 
HDBI_InLt_Act_structPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    HDBI_InLt_Act_struct **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
HDBI_InLt_Act_structPlugin_deserialize_from_cdr_buffer(
    HDBI_InLt_Act_struct *sample,
    const char * buffer,
    unsigned int length);    

NDDSUSERDllExport extern unsigned int 
HDBI_InLt_Act_structPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
HDBI_InLt_Act_structPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
HDBI_InLt_Act_structPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
HDBI_InLt_Act_structPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
HDBI_InLt_Act_structPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    HDBI_InLt_Act_struct ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
HDBI_InLt_Act_structPlugin_new(void);

NDDSUSERDllExport extern void
HDBI_InLt_Act_structPlugin_delete(struct PRESTypePlugin *);

#define HDBM_InLt_St_structPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

#define HDBM_InLt_St_structPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define HDBM_InLt_St_structPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

#define HDBM_InLt_St_structPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define HDBM_InLt_St_structPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern HDBM_InLt_St_struct*
HDBM_InLt_St_structPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern HDBM_InLt_St_struct*
HDBM_InLt_St_structPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern HDBM_InLt_St_struct*
HDBM_InLt_St_structPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
HDBM_InLt_St_structPluginSupport_copy_data(
    HDBM_InLt_St_struct *out,
    const HDBM_InLt_St_struct *in);

NDDSUSERDllExport extern void 
HDBM_InLt_St_structPluginSupport_destroy_data_w_params(
    HDBM_InLt_St_struct *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
HDBM_InLt_St_structPluginSupport_destroy_data_ex(
    HDBM_InLt_St_struct *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
HDBM_InLt_St_structPluginSupport_destroy_data(
    HDBM_InLt_St_struct *sample);

NDDSUSERDllExport extern void 
HDBM_InLt_St_structPluginSupport_print_data(
    const HDBM_InLt_St_struct *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
HDBM_InLt_St_structPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
HDBM_InLt_St_structPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
HDBM_InLt_St_structPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
HDBM_InLt_St_structPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
HDBM_InLt_St_structPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    HDBM_InLt_St_struct *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
HDBM_InLt_St_structPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    HDBM_InLt_St_struct *out,
    const HDBM_InLt_St_struct *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool
HDBM_InLt_St_structPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const HDBM_InLt_St_struct *sample,
    ::dds::core::policy::DataRepresentationId representation
    = ::dds::core::policy::DataRepresentation::xcdr()); 

NDDSUSERDllExport extern RTIBool 
HDBM_InLt_St_structPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    HDBM_InLt_St_struct **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
HDBM_InLt_St_structPlugin_deserialize_from_cdr_buffer(
    HDBM_InLt_St_struct *sample,
    const char * buffer,
    unsigned int length);    

NDDSUSERDllExport extern unsigned int 
HDBM_InLt_St_structPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
HDBM_InLt_St_structPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
HDBM_InLt_St_structPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
HDBM_InLt_St_structPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
HDBM_InLt_St_structPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    HDBM_InLt_St_struct ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
HDBM_InLt_St_structPlugin_new(void);

NDDSUSERDllExport extern void
HDBM_InLt_St_structPlugin_delete(struct PRESTypePlugin *);

#define HDBI_Win_PctAct_structPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

#define HDBI_Win_PctAct_structPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define HDBI_Win_PctAct_structPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

#define HDBI_Win_PctAct_structPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define HDBI_Win_PctAct_structPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern HDBI_Win_PctAct_struct*
HDBI_Win_PctAct_structPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern HDBI_Win_PctAct_struct*
HDBI_Win_PctAct_structPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern HDBI_Win_PctAct_struct*
HDBI_Win_PctAct_structPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
HDBI_Win_PctAct_structPluginSupport_copy_data(
    HDBI_Win_PctAct_struct *out,
    const HDBI_Win_PctAct_struct *in);

NDDSUSERDllExport extern void 
HDBI_Win_PctAct_structPluginSupport_destroy_data_w_params(
    HDBI_Win_PctAct_struct *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
HDBI_Win_PctAct_structPluginSupport_destroy_data_ex(
    HDBI_Win_PctAct_struct *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
HDBI_Win_PctAct_structPluginSupport_destroy_data(
    HDBI_Win_PctAct_struct *sample);

NDDSUSERDllExport extern void 
HDBI_Win_PctAct_structPluginSupport_print_data(
    const HDBI_Win_PctAct_struct *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
HDBI_Win_PctAct_structPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
HDBI_Win_PctAct_structPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
HDBI_Win_PctAct_structPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
HDBI_Win_PctAct_structPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
HDBI_Win_PctAct_structPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    HDBI_Win_PctAct_struct *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
HDBI_Win_PctAct_structPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    HDBI_Win_PctAct_struct *out,
    const HDBI_Win_PctAct_struct *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool
HDBI_Win_PctAct_structPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const HDBI_Win_PctAct_struct *sample,
    ::dds::core::policy::DataRepresentationId representation
    = ::dds::core::policy::DataRepresentation::xcdr()); 

NDDSUSERDllExport extern RTIBool 
HDBI_Win_PctAct_structPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    HDBI_Win_PctAct_struct **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
HDBI_Win_PctAct_structPlugin_deserialize_from_cdr_buffer(
    HDBI_Win_PctAct_struct *sample,
    const char * buffer,
    unsigned int length);    

NDDSUSERDllExport extern unsigned int 
HDBI_Win_PctAct_structPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
HDBI_Win_PctAct_structPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
HDBI_Win_PctAct_structPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
HDBI_Win_PctAct_structPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
HDBI_Win_PctAct_structPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    HDBI_Win_PctAct_struct ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
HDBI_Win_PctAct_structPlugin_new(void);

NDDSUSERDllExport extern void
HDBI_Win_PctAct_structPlugin_delete(struct PRESTypePlugin *);

#define HDBM_Win_St_structPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

#define HDBM_Win_St_structPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define HDBM_Win_St_structPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

#define HDBM_Win_St_structPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define HDBM_Win_St_structPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern HDBM_Win_St_struct*
HDBM_Win_St_structPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern HDBM_Win_St_struct*
HDBM_Win_St_structPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern HDBM_Win_St_struct*
HDBM_Win_St_structPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
HDBM_Win_St_structPluginSupport_copy_data(
    HDBM_Win_St_struct *out,
    const HDBM_Win_St_struct *in);

NDDSUSERDllExport extern void 
HDBM_Win_St_structPluginSupport_destroy_data_w_params(
    HDBM_Win_St_struct *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
HDBM_Win_St_structPluginSupport_destroy_data_ex(
    HDBM_Win_St_struct *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
HDBM_Win_St_structPluginSupport_destroy_data(
    HDBM_Win_St_struct *sample);

NDDSUSERDllExport extern void 
HDBM_Win_St_structPluginSupport_print_data(
    const HDBM_Win_St_struct *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
HDBM_Win_St_structPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
HDBM_Win_St_structPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
HDBM_Win_St_structPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
HDBM_Win_St_structPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
HDBM_Win_St_structPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    HDBM_Win_St_struct *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
HDBM_Win_St_structPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    HDBM_Win_St_struct *out,
    const HDBM_Win_St_struct *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool
HDBM_Win_St_structPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const HDBM_Win_St_struct *sample,
    ::dds::core::policy::DataRepresentationId representation
    = ::dds::core::policy::DataRepresentation::xcdr()); 

NDDSUSERDllExport extern RTIBool 
HDBM_Win_St_structPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    HDBM_Win_St_struct **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
HDBM_Win_St_structPlugin_deserialize_from_cdr_buffer(
    HDBM_Win_St_struct *sample,
    const char * buffer,
    unsigned int length);    

NDDSUSERDllExport extern unsigned int 
HDBM_Win_St_structPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
HDBM_Win_St_structPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
HDBM_Win_St_structPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
HDBM_Win_St_structPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
HDBM_Win_St_structPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    HDBM_Win_St_struct ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
HDBM_Win_St_structPlugin_new(void);

NDDSUSERDllExport extern void
HDBM_Win_St_structPlugin_delete(struct PRESTypePlugin *);

#define HDBI_StAdj_Act_structPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

#define HDBI_StAdj_Act_structPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define HDBI_StAdj_Act_structPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

#define HDBI_StAdj_Act_structPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define HDBI_StAdj_Act_structPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern HDBI_StAdj_Act_struct*
HDBI_StAdj_Act_structPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern HDBI_StAdj_Act_struct*
HDBI_StAdj_Act_structPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern HDBI_StAdj_Act_struct*
HDBI_StAdj_Act_structPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
HDBI_StAdj_Act_structPluginSupport_copy_data(
    HDBI_StAdj_Act_struct *out,
    const HDBI_StAdj_Act_struct *in);

NDDSUSERDllExport extern void 
HDBI_StAdj_Act_structPluginSupport_destroy_data_w_params(
    HDBI_StAdj_Act_struct *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
HDBI_StAdj_Act_structPluginSupport_destroy_data_ex(
    HDBI_StAdj_Act_struct *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
HDBI_StAdj_Act_structPluginSupport_destroy_data(
    HDBI_StAdj_Act_struct *sample);

NDDSUSERDllExport extern void 
HDBI_StAdj_Act_structPluginSupport_print_data(
    const HDBI_StAdj_Act_struct *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
HDBI_StAdj_Act_structPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
HDBI_StAdj_Act_structPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
HDBI_StAdj_Act_structPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
HDBI_StAdj_Act_structPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
HDBI_StAdj_Act_structPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    HDBI_StAdj_Act_struct *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
HDBI_StAdj_Act_structPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    HDBI_StAdj_Act_struct *out,
    const HDBI_StAdj_Act_struct *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool
HDBI_StAdj_Act_structPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const HDBI_StAdj_Act_struct *sample,
    ::dds::core::policy::DataRepresentationId representation
    = ::dds::core::policy::DataRepresentation::xcdr()); 

NDDSUSERDllExport extern RTIBool 
HDBI_StAdj_Act_structPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    HDBI_StAdj_Act_struct **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
HDBI_StAdj_Act_structPlugin_deserialize_from_cdr_buffer(
    HDBI_StAdj_Act_struct *sample,
    const char * buffer,
    unsigned int length);    

NDDSUSERDllExport extern unsigned int 
HDBI_StAdj_Act_structPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
HDBI_StAdj_Act_structPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
HDBI_StAdj_Act_structPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
HDBI_StAdj_Act_structPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
HDBI_StAdj_Act_structPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    HDBI_StAdj_Act_struct ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
HDBI_StAdj_Act_structPlugin_new(void);

NDDSUSERDllExport extern void
HDBI_StAdj_Act_structPlugin_delete(struct PRESTypePlugin *);

#define HDBM_StAdj_St_structPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

#define HDBM_StAdj_St_structPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define HDBM_StAdj_St_structPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

#define HDBM_StAdj_St_structPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define HDBM_StAdj_St_structPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern HDBM_StAdj_St_struct*
HDBM_StAdj_St_structPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern HDBM_StAdj_St_struct*
HDBM_StAdj_St_structPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern HDBM_StAdj_St_struct*
HDBM_StAdj_St_structPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
HDBM_StAdj_St_structPluginSupport_copy_data(
    HDBM_StAdj_St_struct *out,
    const HDBM_StAdj_St_struct *in);

NDDSUSERDllExport extern void 
HDBM_StAdj_St_structPluginSupport_destroy_data_w_params(
    HDBM_StAdj_St_struct *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
HDBM_StAdj_St_structPluginSupport_destroy_data_ex(
    HDBM_StAdj_St_struct *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
HDBM_StAdj_St_structPluginSupport_destroy_data(
    HDBM_StAdj_St_struct *sample);

NDDSUSERDllExport extern void 
HDBM_StAdj_St_structPluginSupport_print_data(
    const HDBM_StAdj_St_struct *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
HDBM_StAdj_St_structPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
HDBM_StAdj_St_structPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
HDBM_StAdj_St_structPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
HDBM_StAdj_St_structPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
HDBM_StAdj_St_structPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    HDBM_StAdj_St_struct *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
HDBM_StAdj_St_structPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    HDBM_StAdj_St_struct *out,
    const HDBM_StAdj_St_struct *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool
HDBM_StAdj_St_structPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const HDBM_StAdj_St_struct *sample,
    ::dds::core::policy::DataRepresentationId representation
    = ::dds::core::policy::DataRepresentation::xcdr()); 

NDDSUSERDllExport extern RTIBool 
HDBM_StAdj_St_structPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    HDBM_StAdj_St_struct **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
HDBM_StAdj_St_structPlugin_deserialize_from_cdr_buffer(
    HDBM_StAdj_St_struct *sample,
    const char * buffer,
    unsigned int length);    

NDDSUSERDllExport extern unsigned int 
HDBM_StAdj_St_structPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
HDBM_StAdj_St_structPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
HDBM_StAdj_St_structPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
HDBM_StAdj_St_structPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
HDBM_StAdj_St_structPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    HDBM_StAdj_St_struct ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
HDBM_StAdj_St_structPlugin_new(void);

NDDSUSERDllExport extern void
HDBM_StAdj_St_structPlugin_delete(struct PRESTypePlugin *);

#define HDBI_BdPst_Act_structPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

#define HDBI_BdPst_Act_structPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define HDBI_BdPst_Act_structPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

#define HDBI_BdPst_Act_structPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define HDBI_BdPst_Act_structPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern HDBI_BdPst_Act_struct*
HDBI_BdPst_Act_structPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern HDBI_BdPst_Act_struct*
HDBI_BdPst_Act_structPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern HDBI_BdPst_Act_struct*
HDBI_BdPst_Act_structPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
HDBI_BdPst_Act_structPluginSupport_copy_data(
    HDBI_BdPst_Act_struct *out,
    const HDBI_BdPst_Act_struct *in);

NDDSUSERDllExport extern void 
HDBI_BdPst_Act_structPluginSupport_destroy_data_w_params(
    HDBI_BdPst_Act_struct *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
HDBI_BdPst_Act_structPluginSupport_destroy_data_ex(
    HDBI_BdPst_Act_struct *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
HDBI_BdPst_Act_structPluginSupport_destroy_data(
    HDBI_BdPst_Act_struct *sample);

NDDSUSERDllExport extern void 
HDBI_BdPst_Act_structPluginSupport_print_data(
    const HDBI_BdPst_Act_struct *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
HDBI_BdPst_Act_structPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
HDBI_BdPst_Act_structPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
HDBI_BdPst_Act_structPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
HDBI_BdPst_Act_structPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
HDBI_BdPst_Act_structPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    HDBI_BdPst_Act_struct *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
HDBI_BdPst_Act_structPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    HDBI_BdPst_Act_struct *out,
    const HDBI_BdPst_Act_struct *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool
HDBI_BdPst_Act_structPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const HDBI_BdPst_Act_struct *sample,
    ::dds::core::policy::DataRepresentationId representation
    = ::dds::core::policy::DataRepresentation::xcdr()); 

NDDSUSERDllExport extern RTIBool 
HDBI_BdPst_Act_structPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    HDBI_BdPst_Act_struct **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
HDBI_BdPst_Act_structPlugin_deserialize_from_cdr_buffer(
    HDBI_BdPst_Act_struct *sample,
    const char * buffer,
    unsigned int length);    

NDDSUSERDllExport extern unsigned int 
HDBI_BdPst_Act_structPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
HDBI_BdPst_Act_structPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
HDBI_BdPst_Act_structPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
HDBI_BdPst_Act_structPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
HDBI_BdPst_Act_structPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    HDBI_BdPst_Act_struct ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
HDBI_BdPst_Act_structPlugin_new(void);

NDDSUSERDllExport extern void
HDBI_BdPst_Act_structPlugin_delete(struct PRESTypePlugin *);

#define HDBM_BdPst_St_structPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

#define HDBM_BdPst_St_structPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define HDBM_BdPst_St_structPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

#define HDBM_BdPst_St_structPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define HDBM_BdPst_St_structPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern HDBM_BdPst_St_struct*
HDBM_BdPst_St_structPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern HDBM_BdPst_St_struct*
HDBM_BdPst_St_structPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern HDBM_BdPst_St_struct*
HDBM_BdPst_St_structPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
HDBM_BdPst_St_structPluginSupport_copy_data(
    HDBM_BdPst_St_struct *out,
    const HDBM_BdPst_St_struct *in);

NDDSUSERDllExport extern void 
HDBM_BdPst_St_structPluginSupport_destroy_data_w_params(
    HDBM_BdPst_St_struct *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
HDBM_BdPst_St_structPluginSupport_destroy_data_ex(
    HDBM_BdPst_St_struct *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
HDBM_BdPst_St_structPluginSupport_destroy_data(
    HDBM_BdPst_St_struct *sample);

NDDSUSERDllExport extern void 
HDBM_BdPst_St_structPluginSupport_print_data(
    const HDBM_BdPst_St_struct *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
HDBM_BdPst_St_structPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
HDBM_BdPst_St_structPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
HDBM_BdPst_St_structPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
HDBM_BdPst_St_structPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
HDBM_BdPst_St_structPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    HDBM_BdPst_St_struct *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
HDBM_BdPst_St_structPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    HDBM_BdPst_St_struct *out,
    const HDBM_BdPst_St_struct *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool
HDBM_BdPst_St_structPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const HDBM_BdPst_St_struct *sample,
    ::dds::core::policy::DataRepresentationId representation
    = ::dds::core::policy::DataRepresentation::xcdr()); 

NDDSUSERDllExport extern RTIBool 
HDBM_BdPst_St_structPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    HDBM_BdPst_St_struct **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
HDBM_BdPst_St_structPlugin_deserialize_from_cdr_buffer(
    HDBM_BdPst_St_struct *sample,
    const char * buffer,
    unsigned int length);    

NDDSUSERDllExport extern unsigned int 
HDBM_BdPst_St_structPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
HDBM_BdPst_St_structPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
HDBM_BdPst_St_structPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
HDBM_BdPst_St_structPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
HDBM_BdPst_St_structPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    HDBM_BdPst_St_struct ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
HDBM_BdPst_St_structPlugin_new(void);

NDDSUSERDllExport extern void
HDBM_BdPst_St_structPlugin_delete(struct PRESTypePlugin *);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* vehicle_doorPlugin_2059540705_h */

