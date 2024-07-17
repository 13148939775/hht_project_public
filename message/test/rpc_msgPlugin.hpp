

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from rpc_msg.idl
using RTI Code Generator (rtiddsgen) version 3.1.1.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef rpc_msgPlugin_1627794248_h
#define rpc_msgPlugin_1627794248_h

#include "rpc_msg.hpp"

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

#define CoordinatesPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

#define CoordinatesPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define CoordinatesPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

#define CoordinatesPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define CoordinatesPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern Coordinates*
CoordinatesPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern Coordinates*
CoordinatesPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern Coordinates*
CoordinatesPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
CoordinatesPluginSupport_copy_data(
    Coordinates *out,
    const Coordinates *in);

NDDSUSERDllExport extern void 
CoordinatesPluginSupport_destroy_data_w_params(
    Coordinates *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
CoordinatesPluginSupport_destroy_data_ex(
    Coordinates *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
CoordinatesPluginSupport_destroy_data(
    Coordinates *sample);

NDDSUSERDllExport extern void 
CoordinatesPluginSupport_print_data(
    const Coordinates *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
CoordinatesPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
CoordinatesPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
CoordinatesPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
CoordinatesPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
CoordinatesPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    Coordinates *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
CoordinatesPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    Coordinates *out,
    const Coordinates *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool
CoordinatesPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const Coordinates *sample,
    ::dds::core::policy::DataRepresentationId representation
    = ::dds::core::policy::DataRepresentation::xcdr()); 

NDDSUSERDllExport extern RTIBool 
CoordinatesPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    Coordinates **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
CoordinatesPlugin_deserialize_from_cdr_buffer(
    Coordinates *sample,
    const char * buffer,
    unsigned int length);    

NDDSUSERDllExport extern unsigned int 
CoordinatesPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
CoordinatesPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
CoordinatesPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
CoordinatesPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
CoordinatesPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    Coordinates ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
CoordinatesPlugin_new(void);

NDDSUSERDllExport extern void
CoordinatesPlugin_delete(struct PRESTypePlugin *);

#define RobotControl_walk_to_InPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

#define RobotControl_walk_to_InPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define RobotControl_walk_to_InPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

#define RobotControl_walk_to_InPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define RobotControl_walk_to_InPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RobotControl_walk_to_In*
RobotControl_walk_to_InPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern RobotControl_walk_to_In*
RobotControl_walk_to_InPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern RobotControl_walk_to_In*
RobotControl_walk_to_InPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
RobotControl_walk_to_InPluginSupport_copy_data(
    RobotControl_walk_to_In *out,
    const RobotControl_walk_to_In *in);

NDDSUSERDllExport extern void 
RobotControl_walk_to_InPluginSupport_destroy_data_w_params(
    RobotControl_walk_to_In *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
RobotControl_walk_to_InPluginSupport_destroy_data_ex(
    RobotControl_walk_to_In *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
RobotControl_walk_to_InPluginSupport_destroy_data(
    RobotControl_walk_to_In *sample);

NDDSUSERDllExport extern void 
RobotControl_walk_to_InPluginSupport_print_data(
    const RobotControl_walk_to_In *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
RobotControl_walk_to_InPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    RobotControl_walk_to_In *out,
    const RobotControl_walk_to_In *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool
RobotControl_walk_to_InPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const RobotControl_walk_to_In *sample,
    ::dds::core::policy::DataRepresentationId representation
    = ::dds::core::policy::DataRepresentation::xcdr()); 

NDDSUSERDllExport extern RTIBool 
RobotControl_walk_to_InPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    RobotControl_walk_to_In **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
RobotControl_walk_to_InPlugin_deserialize_from_cdr_buffer(
    RobotControl_walk_to_In *sample,
    const char * buffer,
    unsigned int length);    

NDDSUSERDllExport extern unsigned int 
RobotControl_walk_to_InPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
RobotControl_walk_to_InPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
RobotControl_walk_to_InPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
RobotControl_walk_to_InPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
RobotControl_walk_to_InPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    RobotControl_walk_to_In ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

#define RobotControl_walk_to_OutPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

#define RobotControl_walk_to_OutPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define RobotControl_walk_to_OutPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

#define RobotControl_walk_to_OutPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define RobotControl_walk_to_OutPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RobotControl_walk_to_Out*
RobotControl_walk_to_OutPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern RobotControl_walk_to_Out*
RobotControl_walk_to_OutPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern RobotControl_walk_to_Out*
RobotControl_walk_to_OutPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
RobotControl_walk_to_OutPluginSupport_copy_data(
    RobotControl_walk_to_Out *out,
    const RobotControl_walk_to_Out *in);

NDDSUSERDllExport extern void 
RobotControl_walk_to_OutPluginSupport_destroy_data_w_params(
    RobotControl_walk_to_Out *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
RobotControl_walk_to_OutPluginSupport_destroy_data_ex(
    RobotControl_walk_to_Out *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
RobotControl_walk_to_OutPluginSupport_destroy_data(
    RobotControl_walk_to_Out *sample);

NDDSUSERDllExport extern void 
RobotControl_walk_to_OutPluginSupport_print_data(
    const RobotControl_walk_to_Out *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
RobotControl_walk_to_OutPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    RobotControl_walk_to_Out *out,
    const RobotControl_walk_to_Out *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool
RobotControl_walk_to_OutPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const RobotControl_walk_to_Out *sample,
    ::dds::core::policy::DataRepresentationId representation
    = ::dds::core::policy::DataRepresentation::xcdr()); 

NDDSUSERDllExport extern RTIBool 
RobotControl_walk_to_OutPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    RobotControl_walk_to_Out **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
RobotControl_walk_to_OutPlugin_deserialize_from_cdr_buffer(
    RobotControl_walk_to_Out *sample,
    const char * buffer,
    unsigned int length);    

NDDSUSERDllExport extern unsigned int 
RobotControl_walk_to_OutPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
RobotControl_walk_to_OutPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
RobotControl_walk_to_OutPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
RobotControl_walk_to_OutPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
RobotControl_walk_to_OutPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    RobotControl_walk_to_Out ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

#define RobotControl_walk_to_ResultPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

#define RobotControl_walk_to_ResultPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define RobotControl_walk_to_ResultPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

#define RobotControl_walk_to_ResultPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define RobotControl_walk_to_ResultPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RobotControl_walk_to_Result*
RobotControl_walk_to_ResultPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern RobotControl_walk_to_Result*
RobotControl_walk_to_ResultPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern RobotControl_walk_to_Result*
RobotControl_walk_to_ResultPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
RobotControl_walk_to_ResultPluginSupport_copy_data(
    RobotControl_walk_to_Result *out,
    const RobotControl_walk_to_Result *in);

NDDSUSERDllExport extern void 
RobotControl_walk_to_ResultPluginSupport_destroy_data_w_params(
    RobotControl_walk_to_Result *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
RobotControl_walk_to_ResultPluginSupport_destroy_data_ex(
    RobotControl_walk_to_Result *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
RobotControl_walk_to_ResultPluginSupport_destroy_data(
    RobotControl_walk_to_Result *sample);

NDDSUSERDllExport extern void 
RobotControl_walk_to_ResultPluginSupport_print_data(
    const RobotControl_walk_to_Result *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
RobotControl_walk_to_ResultPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    RobotControl_walk_to_Result *out,
    const RobotControl_walk_to_Result *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool
RobotControl_walk_to_ResultPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const RobotControl_walk_to_Result *sample,
    ::dds::core::policy::DataRepresentationId representation
    = ::dds::core::policy::DataRepresentation::xcdr()); 

NDDSUSERDllExport extern RTIBool 
RobotControl_walk_to_ResultPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    RobotControl_walk_to_Result **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
RobotControl_walk_to_ResultPlugin_deserialize_from_cdr_buffer(
    RobotControl_walk_to_Result *sample,
    const char * buffer,
    unsigned int length);    

NDDSUSERDllExport extern unsigned int 
RobotControl_walk_to_ResultPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
RobotControl_walk_to_ResultPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
RobotControl_walk_to_ResultPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
RobotControl_walk_to_ResultPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
RobotControl_walk_to_ResultPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    RobotControl_walk_to_Result ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

#define RobotControl_set_config_InPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

#define RobotControl_set_config_InPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define RobotControl_set_config_InPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

#define RobotControl_set_config_InPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define RobotControl_set_config_InPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RobotControl_set_config_In*
RobotControl_set_config_InPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern RobotControl_set_config_In*
RobotControl_set_config_InPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern RobotControl_set_config_In*
RobotControl_set_config_InPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
RobotControl_set_config_InPluginSupport_copy_data(
    RobotControl_set_config_In *out,
    const RobotControl_set_config_In *in);

NDDSUSERDllExport extern void 
RobotControl_set_config_InPluginSupport_destroy_data_w_params(
    RobotControl_set_config_In *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
RobotControl_set_config_InPluginSupport_destroy_data_ex(
    RobotControl_set_config_In *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
RobotControl_set_config_InPluginSupport_destroy_data(
    RobotControl_set_config_In *sample);

NDDSUSERDllExport extern void 
RobotControl_set_config_InPluginSupport_print_data(
    const RobotControl_set_config_In *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
RobotControl_set_config_InPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    RobotControl_set_config_In *out,
    const RobotControl_set_config_In *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool
RobotControl_set_config_InPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const RobotControl_set_config_In *sample,
    ::dds::core::policy::DataRepresentationId representation
    = ::dds::core::policy::DataRepresentation::xcdr()); 

NDDSUSERDllExport extern RTIBool 
RobotControl_set_config_InPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    RobotControl_set_config_In **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
RobotControl_set_config_InPlugin_deserialize_from_cdr_buffer(
    RobotControl_set_config_In *sample,
    const char * buffer,
    unsigned int length);    

NDDSUSERDllExport extern unsigned int 
RobotControl_set_config_InPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
RobotControl_set_config_InPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
RobotControl_set_config_InPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
RobotControl_set_config_InPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
RobotControl_set_config_InPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    RobotControl_set_config_In ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

#define RobotControl_set_config_OutPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

#define RobotControl_set_config_OutPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define RobotControl_set_config_OutPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

#define RobotControl_set_config_OutPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define RobotControl_set_config_OutPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RobotControl_set_config_Out*
RobotControl_set_config_OutPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern RobotControl_set_config_Out*
RobotControl_set_config_OutPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern RobotControl_set_config_Out*
RobotControl_set_config_OutPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
RobotControl_set_config_OutPluginSupport_copy_data(
    RobotControl_set_config_Out *out,
    const RobotControl_set_config_Out *in);

NDDSUSERDllExport extern void 
RobotControl_set_config_OutPluginSupport_destroy_data_w_params(
    RobotControl_set_config_Out *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
RobotControl_set_config_OutPluginSupport_destroy_data_ex(
    RobotControl_set_config_Out *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
RobotControl_set_config_OutPluginSupport_destroy_data(
    RobotControl_set_config_Out *sample);

NDDSUSERDllExport extern void 
RobotControl_set_config_OutPluginSupport_print_data(
    const RobotControl_set_config_Out *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
RobotControl_set_config_OutPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    RobotControl_set_config_Out *out,
    const RobotControl_set_config_Out *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool
RobotControl_set_config_OutPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const RobotControl_set_config_Out *sample,
    ::dds::core::policy::DataRepresentationId representation
    = ::dds::core::policy::DataRepresentation::xcdr()); 

NDDSUSERDllExport extern RTIBool 
RobotControl_set_config_OutPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    RobotControl_set_config_Out **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
RobotControl_set_config_OutPlugin_deserialize_from_cdr_buffer(
    RobotControl_set_config_Out *sample,
    const char * buffer,
    unsigned int length);    

NDDSUSERDllExport extern unsigned int 
RobotControl_set_config_OutPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
RobotControl_set_config_OutPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
RobotControl_set_config_OutPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
RobotControl_set_config_OutPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
RobotControl_set_config_OutPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    RobotControl_set_config_Out ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

#define RobotControl_set_config_ResultPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

#define RobotControl_set_config_ResultPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define RobotControl_set_config_ResultPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

#define RobotControl_set_config_ResultPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define RobotControl_set_config_ResultPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RobotControl_set_config_Result*
RobotControl_set_config_ResultPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern RobotControl_set_config_Result*
RobotControl_set_config_ResultPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern RobotControl_set_config_Result*
RobotControl_set_config_ResultPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
RobotControl_set_config_ResultPluginSupport_copy_data(
    RobotControl_set_config_Result *out,
    const RobotControl_set_config_Result *in);

NDDSUSERDllExport extern void 
RobotControl_set_config_ResultPluginSupport_destroy_data_w_params(
    RobotControl_set_config_Result *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
RobotControl_set_config_ResultPluginSupport_destroy_data_ex(
    RobotControl_set_config_Result *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
RobotControl_set_config_ResultPluginSupport_destroy_data(
    RobotControl_set_config_Result *sample);

NDDSUSERDllExport extern void 
RobotControl_set_config_ResultPluginSupport_print_data(
    const RobotControl_set_config_Result *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
RobotControl_set_config_ResultPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    RobotControl_set_config_Result *out,
    const RobotControl_set_config_Result *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool
RobotControl_set_config_ResultPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const RobotControl_set_config_Result *sample,
    ::dds::core::policy::DataRepresentationId representation
    = ::dds::core::policy::DataRepresentation::xcdr()); 

NDDSUSERDllExport extern RTIBool 
RobotControl_set_config_ResultPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    RobotControl_set_config_Result **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
RobotControl_set_config_ResultPlugin_deserialize_from_cdr_buffer(
    RobotControl_set_config_Result *sample,
    const char * buffer,
    unsigned int length);    

NDDSUSERDllExport extern unsigned int 
RobotControl_set_config_ResultPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
RobotControl_set_config_ResultPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
RobotControl_set_config_ResultPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
RobotControl_set_config_ResultPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
RobotControl_set_config_ResultPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    RobotControl_set_config_Result ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

#define RobotControl_get_speed_InPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

#define RobotControl_get_speed_InPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define RobotControl_get_speed_InPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

#define RobotControl_get_speed_InPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define RobotControl_get_speed_InPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RobotControl_get_speed_In*
RobotControl_get_speed_InPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern RobotControl_get_speed_In*
RobotControl_get_speed_InPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern RobotControl_get_speed_In*
RobotControl_get_speed_InPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
RobotControl_get_speed_InPluginSupport_copy_data(
    RobotControl_get_speed_In *out,
    const RobotControl_get_speed_In *in);

NDDSUSERDllExport extern void 
RobotControl_get_speed_InPluginSupport_destroy_data_w_params(
    RobotControl_get_speed_In *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
RobotControl_get_speed_InPluginSupport_destroy_data_ex(
    RobotControl_get_speed_In *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
RobotControl_get_speed_InPluginSupport_destroy_data(
    RobotControl_get_speed_In *sample);

NDDSUSERDllExport extern void 
RobotControl_get_speed_InPluginSupport_print_data(
    const RobotControl_get_speed_In *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
RobotControl_get_speed_InPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    RobotControl_get_speed_In *out,
    const RobotControl_get_speed_In *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool
RobotControl_get_speed_InPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const RobotControl_get_speed_In *sample,
    ::dds::core::policy::DataRepresentationId representation
    = ::dds::core::policy::DataRepresentation::xcdr()); 

NDDSUSERDllExport extern RTIBool 
RobotControl_get_speed_InPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    RobotControl_get_speed_In **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
RobotControl_get_speed_InPlugin_deserialize_from_cdr_buffer(
    RobotControl_get_speed_In *sample,
    const char * buffer,
    unsigned int length);    

NDDSUSERDllExport extern unsigned int 
RobotControl_get_speed_InPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
RobotControl_get_speed_InPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
RobotControl_get_speed_InPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
RobotControl_get_speed_InPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
RobotControl_get_speed_InPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    RobotControl_get_speed_In ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

#define RobotControl_get_speed_OutPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

#define RobotControl_get_speed_OutPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define RobotControl_get_speed_OutPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

#define RobotControl_get_speed_OutPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define RobotControl_get_speed_OutPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RobotControl_get_speed_Out*
RobotControl_get_speed_OutPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern RobotControl_get_speed_Out*
RobotControl_get_speed_OutPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern RobotControl_get_speed_Out*
RobotControl_get_speed_OutPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
RobotControl_get_speed_OutPluginSupport_copy_data(
    RobotControl_get_speed_Out *out,
    const RobotControl_get_speed_Out *in);

NDDSUSERDllExport extern void 
RobotControl_get_speed_OutPluginSupport_destroy_data_w_params(
    RobotControl_get_speed_Out *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
RobotControl_get_speed_OutPluginSupport_destroy_data_ex(
    RobotControl_get_speed_Out *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
RobotControl_get_speed_OutPluginSupport_destroy_data(
    RobotControl_get_speed_Out *sample);

NDDSUSERDllExport extern void 
RobotControl_get_speed_OutPluginSupport_print_data(
    const RobotControl_get_speed_Out *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
RobotControl_get_speed_OutPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    RobotControl_get_speed_Out *out,
    const RobotControl_get_speed_Out *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool
RobotControl_get_speed_OutPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const RobotControl_get_speed_Out *sample,
    ::dds::core::policy::DataRepresentationId representation
    = ::dds::core::policy::DataRepresentation::xcdr()); 

NDDSUSERDllExport extern RTIBool 
RobotControl_get_speed_OutPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    RobotControl_get_speed_Out **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
RobotControl_get_speed_OutPlugin_deserialize_from_cdr_buffer(
    RobotControl_get_speed_Out *sample,
    const char * buffer,
    unsigned int length);    

NDDSUSERDllExport extern unsigned int 
RobotControl_get_speed_OutPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
RobotControl_get_speed_OutPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
RobotControl_get_speed_OutPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
RobotControl_get_speed_OutPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
RobotControl_get_speed_OutPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    RobotControl_get_speed_Out ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

#define RobotControl_get_speed_ResultPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

#define RobotControl_get_speed_ResultPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define RobotControl_get_speed_ResultPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

#define RobotControl_get_speed_ResultPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define RobotControl_get_speed_ResultPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RobotControl_get_speed_Result*
RobotControl_get_speed_ResultPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern RobotControl_get_speed_Result*
RobotControl_get_speed_ResultPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern RobotControl_get_speed_Result*
RobotControl_get_speed_ResultPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
RobotControl_get_speed_ResultPluginSupport_copy_data(
    RobotControl_get_speed_Result *out,
    const RobotControl_get_speed_Result *in);

NDDSUSERDllExport extern void 
RobotControl_get_speed_ResultPluginSupport_destroy_data_w_params(
    RobotControl_get_speed_Result *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
RobotControl_get_speed_ResultPluginSupport_destroy_data_ex(
    RobotControl_get_speed_Result *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
RobotControl_get_speed_ResultPluginSupport_destroy_data(
    RobotControl_get_speed_Result *sample);

NDDSUSERDllExport extern void 
RobotControl_get_speed_ResultPluginSupport_print_data(
    const RobotControl_get_speed_Result *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
RobotControl_get_speed_ResultPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    RobotControl_get_speed_Result *out,
    const RobotControl_get_speed_Result *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool
RobotControl_get_speed_ResultPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const RobotControl_get_speed_Result *sample,
    ::dds::core::policy::DataRepresentationId representation
    = ::dds::core::policy::DataRepresentation::xcdr()); 

NDDSUSERDllExport extern RTIBool 
RobotControl_get_speed_ResultPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    RobotControl_get_speed_Result **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
RobotControl_get_speed_ResultPlugin_deserialize_from_cdr_buffer(
    RobotControl_get_speed_Result *sample,
    const char * buffer,
    unsigned int length);    

NDDSUSERDllExport extern unsigned int 
RobotControl_get_speed_ResultPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
RobotControl_get_speed_ResultPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
RobotControl_get_speed_ResultPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
RobotControl_get_speed_ResultPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
RobotControl_get_speed_ResultPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    RobotControl_get_speed_Result ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

#define RobotControl_CallPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

#define RobotControl_CallPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define RobotControl_CallPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

#define RobotControl_CallPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define RobotControl_CallPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RobotControl_Call*
RobotControl_CallPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern RobotControl_Call*
RobotControl_CallPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern RobotControl_Call*
RobotControl_CallPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
RobotControl_CallPluginSupport_copy_data(
    RobotControl_Call *out,
    const RobotControl_Call *in);

NDDSUSERDllExport extern void 
RobotControl_CallPluginSupport_destroy_data_w_params(
    RobotControl_Call *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
RobotControl_CallPluginSupport_destroy_data_ex(
    RobotControl_Call *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
RobotControl_CallPluginSupport_destroy_data(
    RobotControl_Call *sample);

NDDSUSERDllExport extern void 
RobotControl_CallPluginSupport_print_data(
    const RobotControl_Call *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
RobotControl_CallPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
RobotControl_CallPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
RobotControl_CallPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
RobotControl_CallPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
RobotControl_CallPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    RobotControl_Call *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
RobotControl_CallPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    RobotControl_Call *out,
    const RobotControl_Call *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool
RobotControl_CallPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const RobotControl_Call *sample,
    ::dds::core::policy::DataRepresentationId representation
    = ::dds::core::policy::DataRepresentation::xcdr()); 

NDDSUSERDllExport extern RTIBool 
RobotControl_CallPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    RobotControl_Call **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
RobotControl_CallPlugin_deserialize_from_cdr_buffer(
    RobotControl_Call *sample,
    const char * buffer,
    unsigned int length);    

NDDSUSERDllExport extern unsigned int 
RobotControl_CallPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
RobotControl_CallPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
RobotControl_CallPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
RobotControl_CallPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
RobotControl_CallPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    RobotControl_Call ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
RobotControl_CallPlugin_new(void);

NDDSUSERDllExport extern void
RobotControl_CallPlugin_delete(struct PRESTypePlugin *);

#define RobotControl_ReturnPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

#define RobotControl_ReturnPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define RobotControl_ReturnPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

#define RobotControl_ReturnPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define RobotControl_ReturnPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RobotControl_Return*
RobotControl_ReturnPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern RobotControl_Return*
RobotControl_ReturnPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern RobotControl_Return*
RobotControl_ReturnPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
RobotControl_ReturnPluginSupport_copy_data(
    RobotControl_Return *out,
    const RobotControl_Return *in);

NDDSUSERDllExport extern void 
RobotControl_ReturnPluginSupport_destroy_data_w_params(
    RobotControl_Return *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
RobotControl_ReturnPluginSupport_destroy_data_ex(
    RobotControl_Return *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
RobotControl_ReturnPluginSupport_destroy_data(
    RobotControl_Return *sample);

NDDSUSERDllExport extern void 
RobotControl_ReturnPluginSupport_print_data(
    const RobotControl_Return *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
RobotControl_ReturnPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
RobotControl_ReturnPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
RobotControl_ReturnPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
RobotControl_ReturnPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
RobotControl_ReturnPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    RobotControl_Return *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
RobotControl_ReturnPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    RobotControl_Return *out,
    const RobotControl_Return *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool
RobotControl_ReturnPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const RobotControl_Return *sample,
    ::dds::core::policy::DataRepresentationId representation
    = ::dds::core::policy::DataRepresentation::xcdr()); 

NDDSUSERDllExport extern RTIBool 
RobotControl_ReturnPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    RobotControl_Return **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
RobotControl_ReturnPlugin_deserialize_from_cdr_buffer(
    RobotControl_Return *sample,
    const char * buffer,
    unsigned int length);    

NDDSUSERDllExport extern unsigned int 
RobotControl_ReturnPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
RobotControl_ReturnPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
RobotControl_ReturnPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
RobotControl_ReturnPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
RobotControl_ReturnPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    RobotControl_Return ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
RobotControl_ReturnPlugin_new(void);

NDDSUSERDllExport extern void
RobotControl_ReturnPlugin_delete(struct PRESTypePlugin *);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* rpc_msgPlugin_1627794248_h */

