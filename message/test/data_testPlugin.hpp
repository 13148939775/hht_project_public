

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from data_test.idl
using RTI Code Generator (rtiddsgen) version 3.1.1.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef data_testPlugin_571709646_h
#define data_testPlugin_571709646_h

#include "data_test.hpp"

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

#define Data4BPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

#define Data4BPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define Data4BPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

#define Data4BPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define Data4BPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern Data4B*
Data4BPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern Data4B*
Data4BPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern Data4B*
Data4BPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
Data4BPluginSupport_copy_data(
    Data4B *out,
    const Data4B *in);

NDDSUSERDllExport extern void 
Data4BPluginSupport_destroy_data_w_params(
    Data4B *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
Data4BPluginSupport_destroy_data_ex(
    Data4B *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
Data4BPluginSupport_destroy_data(
    Data4B *sample);

NDDSUSERDllExport extern void 
Data4BPluginSupport_print_data(
    const Data4B *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
Data4BPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
Data4BPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
Data4BPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
Data4BPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
Data4BPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    Data4B *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
Data4BPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    Data4B *out,
    const Data4B *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool
Data4BPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const Data4B *sample,
    ::dds::core::policy::DataRepresentationId representation
    = ::dds::core::policy::DataRepresentation::xcdr()); 

NDDSUSERDllExport extern RTIBool 
Data4BPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    Data4B **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
Data4BPlugin_deserialize_from_cdr_buffer(
    Data4B *sample,
    const char * buffer,
    unsigned int length);    

NDDSUSERDllExport extern unsigned int 
Data4BPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
Data4BPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
Data4BPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
Data4BPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
Data4BPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    Data4B ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
Data4BPlugin_new(void);

NDDSUSERDllExport extern void
Data4BPlugin_delete(struct PRESTypePlugin *);

#define BigData20BPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

#define BigData20BPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define BigData20BPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

#define BigData20BPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define BigData20BPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern BigData20B*
BigData20BPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern BigData20B*
BigData20BPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern BigData20B*
BigData20BPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
BigData20BPluginSupport_copy_data(
    BigData20B *out,
    const BigData20B *in);

NDDSUSERDllExport extern void 
BigData20BPluginSupport_destroy_data_w_params(
    BigData20B *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
BigData20BPluginSupport_destroy_data_ex(
    BigData20B *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
BigData20BPluginSupport_destroy_data(
    BigData20B *sample);

NDDSUSERDllExport extern void 
BigData20BPluginSupport_print_data(
    const BigData20B *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
BigData20BPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
BigData20BPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
BigData20BPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
BigData20BPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
BigData20BPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    BigData20B *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
BigData20BPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    BigData20B *out,
    const BigData20B *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool
BigData20BPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const BigData20B *sample,
    ::dds::core::policy::DataRepresentationId representation
    = ::dds::core::policy::DataRepresentation::xcdr()); 

NDDSUSERDllExport extern RTIBool 
BigData20BPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    BigData20B **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
BigData20BPlugin_deserialize_from_cdr_buffer(
    BigData20B *sample,
    const char * buffer,
    unsigned int length);    

NDDSUSERDllExport extern unsigned int 
BigData20BPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
BigData20BPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
BigData20BPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
BigData20BPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
BigData20BPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    BigData20B ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
BigData20BPlugin_new(void);

NDDSUSERDllExport extern void
BigData20BPlugin_delete(struct PRESTypePlugin *);

#define BigData60BPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

#define BigData60BPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define BigData60BPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

#define BigData60BPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define BigData60BPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern BigData60B*
BigData60BPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern BigData60B*
BigData60BPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern BigData60B*
BigData60BPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
BigData60BPluginSupport_copy_data(
    BigData60B *out,
    const BigData60B *in);

NDDSUSERDllExport extern void 
BigData60BPluginSupport_destroy_data_w_params(
    BigData60B *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
BigData60BPluginSupport_destroy_data_ex(
    BigData60B *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
BigData60BPluginSupport_destroy_data(
    BigData60B *sample);

NDDSUSERDllExport extern void 
BigData60BPluginSupport_print_data(
    const BigData60B *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
BigData60BPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
BigData60BPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
BigData60BPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
BigData60BPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
BigData60BPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    BigData60B *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
BigData60BPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    BigData60B *out,
    const BigData60B *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool
BigData60BPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const BigData60B *sample,
    ::dds::core::policy::DataRepresentationId representation
    = ::dds::core::policy::DataRepresentation::xcdr()); 

NDDSUSERDllExport extern RTIBool 
BigData60BPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    BigData60B **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
BigData60BPlugin_deserialize_from_cdr_buffer(
    BigData60B *sample,
    const char * buffer,
    unsigned int length);    

NDDSUSERDllExport extern unsigned int 
BigData60BPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
BigData60BPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
BigData60BPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
BigData60BPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
BigData60BPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    BigData60B ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
BigData60BPlugin_new(void);

NDDSUSERDllExport extern void
BigData60BPlugin_delete(struct PRESTypePlugin *);

#define BigData1KPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

#define BigData1KPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define BigData1KPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

#define BigData1KPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define BigData1KPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern BigData1K*
BigData1KPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern BigData1K*
BigData1KPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern BigData1K*
BigData1KPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
BigData1KPluginSupport_copy_data(
    BigData1K *out,
    const BigData1K *in);

NDDSUSERDllExport extern void 
BigData1KPluginSupport_destroy_data_w_params(
    BigData1K *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
BigData1KPluginSupport_destroy_data_ex(
    BigData1K *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
BigData1KPluginSupport_destroy_data(
    BigData1K *sample);

NDDSUSERDllExport extern void 
BigData1KPluginSupport_print_data(
    const BigData1K *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
BigData1KPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
BigData1KPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
BigData1KPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
BigData1KPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
BigData1KPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    BigData1K *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
BigData1KPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    BigData1K *out,
    const BigData1K *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool
BigData1KPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const BigData1K *sample,
    ::dds::core::policy::DataRepresentationId representation
    = ::dds::core::policy::DataRepresentation::xcdr()); 

NDDSUSERDllExport extern RTIBool 
BigData1KPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    BigData1K **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
BigData1KPlugin_deserialize_from_cdr_buffer(
    BigData1K *sample,
    const char * buffer,
    unsigned int length);    

NDDSUSERDllExport extern unsigned int 
BigData1KPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
BigData1KPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
BigData1KPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
BigData1KPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
BigData1KPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    BigData1K ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
BigData1KPlugin_new(void);

NDDSUSERDllExport extern void
BigData1KPlugin_delete(struct PRESTypePlugin *);

#define BigData2KPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

#define BigData2KPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define BigData2KPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

#define BigData2KPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define BigData2KPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern BigData2K*
BigData2KPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern BigData2K*
BigData2KPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern BigData2K*
BigData2KPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
BigData2KPluginSupport_copy_data(
    BigData2K *out,
    const BigData2K *in);

NDDSUSERDllExport extern void 
BigData2KPluginSupport_destroy_data_w_params(
    BigData2K *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
BigData2KPluginSupport_destroy_data_ex(
    BigData2K *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
BigData2KPluginSupport_destroy_data(
    BigData2K *sample);

NDDSUSERDllExport extern void 
BigData2KPluginSupport_print_data(
    const BigData2K *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
BigData2KPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
BigData2KPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
BigData2KPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
BigData2KPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
BigData2KPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    BigData2K *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
BigData2KPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    BigData2K *out,
    const BigData2K *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool
BigData2KPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const BigData2K *sample,
    ::dds::core::policy::DataRepresentationId representation
    = ::dds::core::policy::DataRepresentation::xcdr()); 

NDDSUSERDllExport extern RTIBool 
BigData2KPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    BigData2K **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
BigData2KPlugin_deserialize_from_cdr_buffer(
    BigData2K *sample,
    const char * buffer,
    unsigned int length);    

NDDSUSERDllExport extern unsigned int 
BigData2KPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
BigData2KPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
BigData2KPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
BigData2KPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
BigData2KPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    BigData2K ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
BigData2KPlugin_new(void);

NDDSUSERDllExport extern void
BigData2KPlugin_delete(struct PRESTypePlugin *);

#define BigData4KPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

#define BigData4KPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define BigData4KPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

#define BigData4KPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define BigData4KPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern BigData4K*
BigData4KPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern BigData4K*
BigData4KPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern BigData4K*
BigData4KPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
BigData4KPluginSupport_copy_data(
    BigData4K *out,
    const BigData4K *in);

NDDSUSERDllExport extern void 
BigData4KPluginSupport_destroy_data_w_params(
    BigData4K *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
BigData4KPluginSupport_destroy_data_ex(
    BigData4K *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
BigData4KPluginSupport_destroy_data(
    BigData4K *sample);

NDDSUSERDllExport extern void 
BigData4KPluginSupport_print_data(
    const BigData4K *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
BigData4KPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
BigData4KPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
BigData4KPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
BigData4KPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
BigData4KPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    BigData4K *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
BigData4KPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    BigData4K *out,
    const BigData4K *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool
BigData4KPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const BigData4K *sample,
    ::dds::core::policy::DataRepresentationId representation
    = ::dds::core::policy::DataRepresentation::xcdr()); 

NDDSUSERDllExport extern RTIBool 
BigData4KPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    BigData4K **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
BigData4KPlugin_deserialize_from_cdr_buffer(
    BigData4K *sample,
    const char * buffer,
    unsigned int length);    

NDDSUSERDllExport extern unsigned int 
BigData4KPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
BigData4KPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
BigData4KPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
BigData4KPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
BigData4KPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    BigData4K ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
BigData4KPlugin_new(void);

NDDSUSERDllExport extern void
BigData4KPlugin_delete(struct PRESTypePlugin *);

#define BigData16KPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

#define BigData16KPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define BigData16KPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

#define BigData16KPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define BigData16KPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern BigData16K*
BigData16KPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern BigData16K*
BigData16KPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern BigData16K*
BigData16KPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
BigData16KPluginSupport_copy_data(
    BigData16K *out,
    const BigData16K *in);

NDDSUSERDllExport extern void 
BigData16KPluginSupport_destroy_data_w_params(
    BigData16K *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
BigData16KPluginSupport_destroy_data_ex(
    BigData16K *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
BigData16KPluginSupport_destroy_data(
    BigData16K *sample);

NDDSUSERDllExport extern void 
BigData16KPluginSupport_print_data(
    const BigData16K *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
BigData16KPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
BigData16KPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
BigData16KPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
BigData16KPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
BigData16KPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    BigData16K *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
BigData16KPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    BigData16K *out,
    const BigData16K *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool
BigData16KPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const BigData16K *sample,
    ::dds::core::policy::DataRepresentationId representation
    = ::dds::core::policy::DataRepresentation::xcdr()); 

NDDSUSERDllExport extern RTIBool 
BigData16KPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    BigData16K **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
BigData16KPlugin_deserialize_from_cdr_buffer(
    BigData16K *sample,
    const char * buffer,
    unsigned int length);    

NDDSUSERDllExport extern unsigned int 
BigData16KPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
BigData16KPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
BigData16KPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
BigData16KPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
BigData16KPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    BigData16K ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
BigData16KPlugin_new(void);

NDDSUSERDllExport extern void
BigData16KPlugin_delete(struct PRESTypePlugin *);

#define BigData32KPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

#define BigData32KPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define BigData32KPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

#define BigData32KPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define BigData32KPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern BigData32K*
BigData32KPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern BigData32K*
BigData32KPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern BigData32K*
BigData32KPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
BigData32KPluginSupport_copy_data(
    BigData32K *out,
    const BigData32K *in);

NDDSUSERDllExport extern void 
BigData32KPluginSupport_destroy_data_w_params(
    BigData32K *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
BigData32KPluginSupport_destroy_data_ex(
    BigData32K *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
BigData32KPluginSupport_destroy_data(
    BigData32K *sample);

NDDSUSERDllExport extern void 
BigData32KPluginSupport_print_data(
    const BigData32K *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
BigData32KPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
BigData32KPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
BigData32KPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
BigData32KPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
BigData32KPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    BigData32K *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
BigData32KPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    BigData32K *out,
    const BigData32K *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool
BigData32KPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const BigData32K *sample,
    ::dds::core::policy::DataRepresentationId representation
    = ::dds::core::policy::DataRepresentation::xcdr()); 

NDDSUSERDllExport extern RTIBool 
BigData32KPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    BigData32K **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
BigData32KPlugin_deserialize_from_cdr_buffer(
    BigData32K *sample,
    const char * buffer,
    unsigned int length);    

NDDSUSERDllExport extern unsigned int 
BigData32KPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
BigData32KPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
BigData32KPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
BigData32KPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
BigData32KPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    BigData32K ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
BigData32KPlugin_new(void);

NDDSUSERDllExport extern void
BigData32KPlugin_delete(struct PRESTypePlugin *);

#define BigData64KPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

#define BigData64KPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define BigData64KPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

#define BigData64KPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define BigData64KPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern BigData64K*
BigData64KPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern BigData64K*
BigData64KPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern BigData64K*
BigData64KPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
BigData64KPluginSupport_copy_data(
    BigData64K *out,
    const BigData64K *in);

NDDSUSERDllExport extern void 
BigData64KPluginSupport_destroy_data_w_params(
    BigData64K *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
BigData64KPluginSupport_destroy_data_ex(
    BigData64K *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
BigData64KPluginSupport_destroy_data(
    BigData64K *sample);

NDDSUSERDllExport extern void 
BigData64KPluginSupport_print_data(
    const BigData64K *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
BigData64KPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
BigData64KPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
BigData64KPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
BigData64KPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
BigData64KPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    BigData64K *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
BigData64KPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    BigData64K *out,
    const BigData64K *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool
BigData64KPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const BigData64K *sample,
    ::dds::core::policy::DataRepresentationId representation
    = ::dds::core::policy::DataRepresentation::xcdr()); 

NDDSUSERDllExport extern RTIBool 
BigData64KPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    BigData64K **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
BigData64KPlugin_deserialize_from_cdr_buffer(
    BigData64K *sample,
    const char * buffer,
    unsigned int length);    

NDDSUSERDllExport extern unsigned int 
BigData64KPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
BigData64KPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
BigData64KPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
BigData64KPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
BigData64KPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    BigData64K ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
BigData64KPlugin_new(void);

NDDSUSERDllExport extern void
BigData64KPlugin_delete(struct PRESTypePlugin *);

#define BigData256KPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

#define BigData256KPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define BigData256KPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

#define BigData256KPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define BigData256KPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern BigData256K*
BigData256KPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern BigData256K*
BigData256KPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern BigData256K*
BigData256KPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
BigData256KPluginSupport_copy_data(
    BigData256K *out,
    const BigData256K *in);

NDDSUSERDllExport extern void 
BigData256KPluginSupport_destroy_data_w_params(
    BigData256K *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
BigData256KPluginSupport_destroy_data_ex(
    BigData256K *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
BigData256KPluginSupport_destroy_data(
    BigData256K *sample);

NDDSUSERDllExport extern void 
BigData256KPluginSupport_print_data(
    const BigData256K *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
BigData256KPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
BigData256KPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
BigData256KPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
BigData256KPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
BigData256KPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    BigData256K *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
BigData256KPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    BigData256K *out,
    const BigData256K *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool
BigData256KPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const BigData256K *sample,
    ::dds::core::policy::DataRepresentationId representation
    = ::dds::core::policy::DataRepresentation::xcdr()); 

NDDSUSERDllExport extern RTIBool 
BigData256KPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    BigData256K **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
BigData256KPlugin_deserialize_from_cdr_buffer(
    BigData256K *sample,
    const char * buffer,
    unsigned int length);    

NDDSUSERDllExport extern unsigned int 
BigData256KPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
BigData256KPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
BigData256KPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
BigData256KPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
BigData256KPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    BigData256K ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
BigData256KPlugin_new(void);

NDDSUSERDllExport extern void
BigData256KPlugin_delete(struct PRESTypePlugin *);

#define BigData1MPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

#define BigData1MPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define BigData1MPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

#define BigData1MPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define BigData1MPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern BigData1M*
BigData1MPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern BigData1M*
BigData1MPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern BigData1M*
BigData1MPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
BigData1MPluginSupport_copy_data(
    BigData1M *out,
    const BigData1M *in);

NDDSUSERDllExport extern void 
BigData1MPluginSupport_destroy_data_w_params(
    BigData1M *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
BigData1MPluginSupport_destroy_data_ex(
    BigData1M *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
BigData1MPluginSupport_destroy_data(
    BigData1M *sample);

NDDSUSERDllExport extern void 
BigData1MPluginSupport_print_data(
    const BigData1M *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
BigData1MPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
BigData1MPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
BigData1MPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
BigData1MPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
BigData1MPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    BigData1M *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
BigData1MPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    BigData1M *out,
    const BigData1M *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool
BigData1MPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const BigData1M *sample,
    ::dds::core::policy::DataRepresentationId representation
    = ::dds::core::policy::DataRepresentation::xcdr()); 

NDDSUSERDllExport extern RTIBool 
BigData1MPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    BigData1M **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
BigData1MPlugin_deserialize_from_cdr_buffer(
    BigData1M *sample,
    const char * buffer,
    unsigned int length);    

NDDSUSERDllExport extern unsigned int 
BigData1MPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
BigData1MPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
BigData1MPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
BigData1MPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
BigData1MPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    BigData1M ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
BigData1MPlugin_new(void);

NDDSUSERDllExport extern void
BigData1MPlugin_delete(struct PRESTypePlugin *);

#define BigData2MPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

#define BigData2MPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define BigData2MPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

#define BigData2MPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define BigData2MPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern BigData2M*
BigData2MPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern BigData2M*
BigData2MPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern BigData2M*
BigData2MPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
BigData2MPluginSupport_copy_data(
    BigData2M *out,
    const BigData2M *in);

NDDSUSERDllExport extern void 
BigData2MPluginSupport_destroy_data_w_params(
    BigData2M *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
BigData2MPluginSupport_destroy_data_ex(
    BigData2M *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
BigData2MPluginSupport_destroy_data(
    BigData2M *sample);

NDDSUSERDllExport extern void 
BigData2MPluginSupport_print_data(
    const BigData2M *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
BigData2MPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
BigData2MPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
BigData2MPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
BigData2MPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
BigData2MPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    BigData2M *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
BigData2MPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    BigData2M *out,
    const BigData2M *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool
BigData2MPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const BigData2M *sample,
    ::dds::core::policy::DataRepresentationId representation
    = ::dds::core::policy::DataRepresentation::xcdr()); 

NDDSUSERDllExport extern RTIBool 
BigData2MPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    BigData2M **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
BigData2MPlugin_deserialize_from_cdr_buffer(
    BigData2M *sample,
    const char * buffer,
    unsigned int length);    

NDDSUSERDllExport extern unsigned int 
BigData2MPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
BigData2MPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
BigData2MPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
BigData2MPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
BigData2MPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    BigData2M ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
BigData2MPlugin_new(void);

NDDSUSERDllExport extern void
BigData2MPlugin_delete(struct PRESTypePlugin *);

#define BigData4MPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

#define BigData4MPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define BigData4MPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

#define BigData4MPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define BigData4MPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern BigData4M*
BigData4MPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern BigData4M*
BigData4MPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern BigData4M*
BigData4MPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
BigData4MPluginSupport_copy_data(
    BigData4M *out,
    const BigData4M *in);

NDDSUSERDllExport extern void 
BigData4MPluginSupport_destroy_data_w_params(
    BigData4M *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
BigData4MPluginSupport_destroy_data_ex(
    BigData4M *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
BigData4MPluginSupport_destroy_data(
    BigData4M *sample);

NDDSUSERDllExport extern void 
BigData4MPluginSupport_print_data(
    const BigData4M *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
BigData4MPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
BigData4MPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
BigData4MPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
BigData4MPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
BigData4MPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    BigData4M *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
BigData4MPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    BigData4M *out,
    const BigData4M *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool
BigData4MPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const BigData4M *sample,
    ::dds::core::policy::DataRepresentationId representation
    = ::dds::core::policy::DataRepresentation::xcdr()); 

NDDSUSERDllExport extern RTIBool 
BigData4MPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    BigData4M **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
BigData4MPlugin_deserialize_from_cdr_buffer(
    BigData4M *sample,
    const char * buffer,
    unsigned int length);    

NDDSUSERDllExport extern unsigned int 
BigData4MPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
BigData4MPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
BigData4MPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
BigData4MPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
BigData4MPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    BigData4M ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
BigData4MPlugin_new(void);

NDDSUSERDllExport extern void
BigData4MPlugin_delete(struct PRESTypePlugin *);

#define BigData8MPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

#define BigData8MPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define BigData8MPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

#define BigData8MPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define BigData8MPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern BigData8M*
BigData8MPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern BigData8M*
BigData8MPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern BigData8M*
BigData8MPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
BigData8MPluginSupport_copy_data(
    BigData8M *out,
    const BigData8M *in);

NDDSUSERDllExport extern void 
BigData8MPluginSupport_destroy_data_w_params(
    BigData8M *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
BigData8MPluginSupport_destroy_data_ex(
    BigData8M *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
BigData8MPluginSupport_destroy_data(
    BigData8M *sample);

NDDSUSERDllExport extern void 
BigData8MPluginSupport_print_data(
    const BigData8M *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
BigData8MPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
BigData8MPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
BigData8MPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
BigData8MPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
BigData8MPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    BigData8M *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
BigData8MPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    BigData8M *out,
    const BigData8M *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool
BigData8MPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const BigData8M *sample,
    ::dds::core::policy::DataRepresentationId representation
    = ::dds::core::policy::DataRepresentation::xcdr()); 

NDDSUSERDllExport extern RTIBool 
BigData8MPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    BigData8M **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
BigData8MPlugin_deserialize_from_cdr_buffer(
    BigData8M *sample,
    const char * buffer,
    unsigned int length);    

NDDSUSERDllExport extern unsigned int 
BigData8MPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
BigData8MPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
BigData8MPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
BigData8MPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
BigData8MPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    BigData8M ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
BigData8MPlugin_new(void);

NDDSUSERDllExport extern void
BigData8MPlugin_delete(struct PRESTypePlugin *);

#define BigData12MPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

#define BigData12MPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define BigData12MPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

#define BigData12MPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define BigData12MPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern BigData12M*
BigData12MPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern BigData12M*
BigData12MPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern BigData12M*
BigData12MPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
BigData12MPluginSupport_copy_data(
    BigData12M *out,
    const BigData12M *in);

NDDSUSERDllExport extern void 
BigData12MPluginSupport_destroy_data_w_params(
    BigData12M *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
BigData12MPluginSupport_destroy_data_ex(
    BigData12M *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
BigData12MPluginSupport_destroy_data(
    BigData12M *sample);

NDDSUSERDllExport extern void 
BigData12MPluginSupport_print_data(
    const BigData12M *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
BigData12MPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
BigData12MPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
BigData12MPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
BigData12MPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
BigData12MPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    BigData12M *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
BigData12MPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    BigData12M *out,
    const BigData12M *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool
BigData12MPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const BigData12M *sample,
    ::dds::core::policy::DataRepresentationId representation
    = ::dds::core::policy::DataRepresentation::xcdr()); 

NDDSUSERDllExport extern RTIBool 
BigData12MPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    BigData12M **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
BigData12MPlugin_deserialize_from_cdr_buffer(
    BigData12M *sample,
    const char * buffer,
    unsigned int length);    

NDDSUSERDllExport extern unsigned int 
BigData12MPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
BigData12MPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
BigData12MPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
BigData12MPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
BigData12MPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    BigData12M ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
BigData12MPlugin_new(void);

NDDSUSERDllExport extern void
BigData12MPlugin_delete(struct PRESTypePlugin *);

#define BigData20MPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

#define BigData20MPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define BigData20MPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

#define BigData20MPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define BigData20MPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern BigData20M*
BigData20MPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern BigData20M*
BigData20MPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern BigData20M*
BigData20MPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
BigData20MPluginSupport_copy_data(
    BigData20M *out,
    const BigData20M *in);

NDDSUSERDllExport extern void 
BigData20MPluginSupport_destroy_data_w_params(
    BigData20M *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
BigData20MPluginSupport_destroy_data_ex(
    BigData20M *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
BigData20MPluginSupport_destroy_data(
    BigData20M *sample);

NDDSUSERDllExport extern void 
BigData20MPluginSupport_print_data(
    const BigData20M *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
BigData20MPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
BigData20MPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
BigData20MPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
BigData20MPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
BigData20MPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    BigData20M *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
BigData20MPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    BigData20M *out,
    const BigData20M *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool
BigData20MPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const BigData20M *sample,
    ::dds::core::policy::DataRepresentationId representation
    = ::dds::core::policy::DataRepresentation::xcdr()); 

NDDSUSERDllExport extern RTIBool 
BigData20MPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    BigData20M **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
BigData20MPlugin_deserialize_from_cdr_buffer(
    BigData20M *sample,
    const char * buffer,
    unsigned int length);    

NDDSUSERDllExport extern unsigned int 
BigData20MPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
BigData20MPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
BigData20MPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
BigData20MPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
BigData20MPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    BigData20M ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
BigData20MPlugin_new(void);

NDDSUSERDllExport extern void
BigData20MPlugin_delete(struct PRESTypePlugin *);

#define BigData30MPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

#define BigData30MPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define BigData30MPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

#define BigData30MPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define BigData30MPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern BigData30M*
BigData30MPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern BigData30M*
BigData30MPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern BigData30M*
BigData30MPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
BigData30MPluginSupport_copy_data(
    BigData30M *out,
    const BigData30M *in);

NDDSUSERDllExport extern void 
BigData30MPluginSupport_destroy_data_w_params(
    BigData30M *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
BigData30MPluginSupport_destroy_data_ex(
    BigData30M *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
BigData30MPluginSupport_destroy_data(
    BigData30M *sample);

NDDSUSERDllExport extern void 
BigData30MPluginSupport_print_data(
    const BigData30M *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
BigData30MPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
BigData30MPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
BigData30MPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
BigData30MPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
BigData30MPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    BigData30M *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
BigData30MPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    BigData30M *out,
    const BigData30M *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool
BigData30MPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const BigData30M *sample,
    ::dds::core::policy::DataRepresentationId representation
    = ::dds::core::policy::DataRepresentation::xcdr()); 

NDDSUSERDllExport extern RTIBool 
BigData30MPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    BigData30M **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
BigData30MPlugin_deserialize_from_cdr_buffer(
    BigData30M *sample,
    const char * buffer,
    unsigned int length);    

NDDSUSERDllExport extern unsigned int 
BigData30MPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
BigData30MPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
BigData30MPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
BigData30MPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
BigData30MPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    BigData30M ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
BigData30MPlugin_new(void);

NDDSUSERDllExport extern void
BigData30MPlugin_delete(struct PRESTypePlugin *);

#define BigData40MPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

#define BigData40MPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define BigData40MPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

#define BigData40MPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define BigData40MPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern BigData40M*
BigData40MPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern BigData40M*
BigData40MPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern BigData40M*
BigData40MPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
BigData40MPluginSupport_copy_data(
    BigData40M *out,
    const BigData40M *in);

NDDSUSERDllExport extern void 
BigData40MPluginSupport_destroy_data_w_params(
    BigData40M *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
BigData40MPluginSupport_destroy_data_ex(
    BigData40M *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
BigData40MPluginSupport_destroy_data(
    BigData40M *sample);

NDDSUSERDllExport extern void 
BigData40MPluginSupport_print_data(
    const BigData40M *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
BigData40MPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
BigData40MPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
BigData40MPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
BigData40MPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
BigData40MPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    BigData40M *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
BigData40MPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    BigData40M *out,
    const BigData40M *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool
BigData40MPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const BigData40M *sample,
    ::dds::core::policy::DataRepresentationId representation
    = ::dds::core::policy::DataRepresentation::xcdr()); 

NDDSUSERDllExport extern RTIBool 
BigData40MPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    BigData40M **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
BigData40MPlugin_deserialize_from_cdr_buffer(
    BigData40M *sample,
    const char * buffer,
    unsigned int length);    

NDDSUSERDllExport extern unsigned int 
BigData40MPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
BigData40MPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
BigData40MPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
BigData40MPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
BigData40MPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    BigData40M ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
BigData40MPlugin_new(void);

NDDSUSERDllExport extern void
BigData40MPlugin_delete(struct PRESTypePlugin *);

#define BigData50MPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

#define BigData50MPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define BigData50MPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

#define BigData50MPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define BigData50MPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern BigData50M*
BigData50MPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern BigData50M*
BigData50MPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern BigData50M*
BigData50MPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
BigData50MPluginSupport_copy_data(
    BigData50M *out,
    const BigData50M *in);

NDDSUSERDllExport extern void 
BigData50MPluginSupport_destroy_data_w_params(
    BigData50M *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
BigData50MPluginSupport_destroy_data_ex(
    BigData50M *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
BigData50MPluginSupport_destroy_data(
    BigData50M *sample);

NDDSUSERDllExport extern void 
BigData50MPluginSupport_print_data(
    const BigData50M *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
BigData50MPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
BigData50MPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
BigData50MPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
BigData50MPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
BigData50MPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    BigData50M *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
BigData50MPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    BigData50M *out,
    const BigData50M *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool
BigData50MPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const BigData50M *sample,
    ::dds::core::policy::DataRepresentationId representation
    = ::dds::core::policy::DataRepresentation::xcdr()); 

NDDSUSERDllExport extern RTIBool 
BigData50MPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    BigData50M **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
BigData50MPlugin_deserialize_from_cdr_buffer(
    BigData50M *sample,
    const char * buffer,
    unsigned int length);    

NDDSUSERDllExport extern unsigned int 
BigData50MPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
BigData50MPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
BigData50MPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
BigData50MPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
BigData50MPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    BigData50M ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
BigData50MPlugin_new(void);

NDDSUSERDllExport extern void
BigData50MPlugin_delete(struct PRESTypePlugin *);

#define BigData60MPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

#define BigData60MPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define BigData60MPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

#define BigData60MPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define BigData60MPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern BigData60M*
BigData60MPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern BigData60M*
BigData60MPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern BigData60M*
BigData60MPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
BigData60MPluginSupport_copy_data(
    BigData60M *out,
    const BigData60M *in);

NDDSUSERDllExport extern void 
BigData60MPluginSupport_destroy_data_w_params(
    BigData60M *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
BigData60MPluginSupport_destroy_data_ex(
    BigData60M *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
BigData60MPluginSupport_destroy_data(
    BigData60M *sample);

NDDSUSERDllExport extern void 
BigData60MPluginSupport_print_data(
    const BigData60M *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
BigData60MPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
BigData60MPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
BigData60MPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
BigData60MPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
BigData60MPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    BigData60M *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
BigData60MPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    BigData60M *out,
    const BigData60M *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool
BigData60MPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const BigData60M *sample,
    ::dds::core::policy::DataRepresentationId representation
    = ::dds::core::policy::DataRepresentation::xcdr()); 

NDDSUSERDllExport extern RTIBool 
BigData60MPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    BigData60M **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
BigData60MPlugin_deserialize_from_cdr_buffer(
    BigData60M *sample,
    const char * buffer,
    unsigned int length);    

NDDSUSERDllExport extern unsigned int 
BigData60MPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
BigData60MPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
BigData60MPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
BigData60MPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
BigData60MPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    BigData60M ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
BigData60MPlugin_new(void);

NDDSUSERDllExport extern void
BigData60MPlugin_delete(struct PRESTypePlugin *);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* data_testPlugin_571709646_h */

