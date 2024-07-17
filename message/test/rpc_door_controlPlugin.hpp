

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from rpc_door_control.idl
using RTI Code Generator (rtiddsgen) version 3.1.1.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef rpc_door_controlPlugin_1051761432_h
#define rpc_door_controlPlugin_1051761432_h

#include "rpc_door_control.hpp"

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

namespace DoorService {

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    MajorTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    MajorTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    MajorTypePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    MajorTypePluginSupport_print_data(
        const MajorType *sample, const char *desc, int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    MinorTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    MinorTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    MinorTypePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    MinorTypePluginSupport_print_data(
        const MinorType *sample, const char *desc, int indent_level);

    #define SetMsgPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

    #define SetMsgPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define SetMsgPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define SetMsgPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define SetMsgPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern SetMsg*
    SetMsgPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern SetMsg*
    SetMsgPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern SetMsg*
    SetMsgPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    SetMsgPluginSupport_copy_data(
        SetMsg *out,
        const SetMsg *in);

    NDDSUSERDllExport extern void 
    SetMsgPluginSupport_destroy_data_w_params(
        SetMsg *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    SetMsgPluginSupport_destroy_data_ex(
        SetMsg *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    SetMsgPluginSupport_destroy_data(
        SetMsg *sample);

    NDDSUSERDllExport extern void 
    SetMsgPluginSupport_print_data(
        const SetMsg *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    SetMsgPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    SetMsgPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    SetMsgPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    SetMsgPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    SetMsgPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        SetMsg *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    SetMsgPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        SetMsg *out,
        const SetMsg *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    SetMsgPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const SetMsg *sample,
        ::dds::core::policy::DataRepresentationId representation
        = ::dds::core::policy::DataRepresentation::xcdr()); 

    NDDSUSERDllExport extern RTIBool 
    SetMsgPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        SetMsg **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    SetMsgPlugin_deserialize_from_cdr_buffer(
        SetMsg *sample,
        const char * buffer,
        unsigned int length);    

    NDDSUSERDllExport extern unsigned int 
    SetMsgPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    SetMsgPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    SetMsgPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    SetMsgPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    SetMsgPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        SetMsg ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    SetMsgPlugin_new(void);

    NDDSUSERDllExport extern void
    SetMsgPlugin_delete(struct PRESTypePlugin *);

    #define SetMsgSoaPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

    #define SetMsgSoaPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define SetMsgSoaPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define SetMsgSoaPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define SetMsgSoaPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern SetMsgSoa*
    SetMsgSoaPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern SetMsgSoa*
    SetMsgSoaPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern SetMsgSoa*
    SetMsgSoaPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    SetMsgSoaPluginSupport_copy_data(
        SetMsgSoa *out,
        const SetMsgSoa *in);

    NDDSUSERDllExport extern void 
    SetMsgSoaPluginSupport_destroy_data_w_params(
        SetMsgSoa *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    SetMsgSoaPluginSupport_destroy_data_ex(
        SetMsgSoa *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    SetMsgSoaPluginSupport_destroy_data(
        SetMsgSoa *sample);

    NDDSUSERDllExport extern void 
    SetMsgSoaPluginSupport_print_data(
        const SetMsgSoa *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    SetMsgSoaPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    SetMsgSoaPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    SetMsgSoaPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    SetMsgSoaPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    SetMsgSoaPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        SetMsgSoa *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    SetMsgSoaPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        SetMsgSoa *out,
        const SetMsgSoa *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    SetMsgSoaPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const SetMsgSoa *sample,
        ::dds::core::policy::DataRepresentationId representation
        = ::dds::core::policy::DataRepresentation::xcdr()); 

    NDDSUSERDllExport extern RTIBool 
    SetMsgSoaPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        SetMsgSoa **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    SetMsgSoaPlugin_deserialize_from_cdr_buffer(
        SetMsgSoa *sample,
        const char * buffer,
        unsigned int length);    

    NDDSUSERDllExport extern unsigned int 
    SetMsgSoaPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    SetMsgSoaPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    SetMsgSoaPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    SetMsgSoaPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    SetMsgSoaPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        SetMsgSoa ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    SetMsgSoaPlugin_new(void);

    NDDSUSERDllExport extern void
    SetMsgSoaPlugin_delete(struct PRESTypePlugin *);

    #define ActMsgPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

    #define ActMsgPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define ActMsgPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define ActMsgPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define ActMsgPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern ActMsg*
    ActMsgPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern ActMsg*
    ActMsgPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern ActMsg*
    ActMsgPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    ActMsgPluginSupport_copy_data(
        ActMsg *out,
        const ActMsg *in);

    NDDSUSERDllExport extern void 
    ActMsgPluginSupport_destroy_data_w_params(
        ActMsg *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    ActMsgPluginSupport_destroy_data_ex(
        ActMsg *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    ActMsgPluginSupport_destroy_data(
        ActMsg *sample);

    NDDSUSERDllExport extern void 
    ActMsgPluginSupport_print_data(
        const ActMsg *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    ActMsgPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    ActMsgPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    ActMsgPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    ActMsgPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    ActMsgPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        ActMsg *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    ActMsgPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        ActMsg *out,
        const ActMsg *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    ActMsgPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const ActMsg *sample,
        ::dds::core::policy::DataRepresentationId representation
        = ::dds::core::policy::DataRepresentation::xcdr()); 

    NDDSUSERDllExport extern RTIBool 
    ActMsgPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        ActMsg **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    ActMsgPlugin_deserialize_from_cdr_buffer(
        ActMsg *sample,
        const char * buffer,
        unsigned int length);    

    NDDSUSERDllExport extern unsigned int 
    ActMsgPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    ActMsgPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    ActMsgPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    ActMsgPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    ActMsgPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        ActMsg ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    ActMsgPlugin_new(void);

    NDDSUSERDllExport extern void
    ActMsgPlugin_delete(struct PRESTypePlugin *);

    #define ActMsgSoaPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

    #define ActMsgSoaPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define ActMsgSoaPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define ActMsgSoaPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define ActMsgSoaPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern ActMsgSoa*
    ActMsgSoaPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern ActMsgSoa*
    ActMsgSoaPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern ActMsgSoa*
    ActMsgSoaPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    ActMsgSoaPluginSupport_copy_data(
        ActMsgSoa *out,
        const ActMsgSoa *in);

    NDDSUSERDllExport extern void 
    ActMsgSoaPluginSupport_destroy_data_w_params(
        ActMsgSoa *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    ActMsgSoaPluginSupport_destroy_data_ex(
        ActMsgSoa *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    ActMsgSoaPluginSupport_destroy_data(
        ActMsgSoa *sample);

    NDDSUSERDllExport extern void 
    ActMsgSoaPluginSupport_print_data(
        const ActMsgSoa *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    ActMsgSoaPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    ActMsgSoaPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    ActMsgSoaPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    ActMsgSoaPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    ActMsgSoaPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        ActMsgSoa *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    ActMsgSoaPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        ActMsgSoa *out,
        const ActMsgSoa *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    ActMsgSoaPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const ActMsgSoa *sample,
        ::dds::core::policy::DataRepresentationId representation
        = ::dds::core::policy::DataRepresentation::xcdr()); 

    NDDSUSERDllExport extern RTIBool 
    ActMsgSoaPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        ActMsgSoa **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    ActMsgSoaPlugin_deserialize_from_cdr_buffer(
        ActMsgSoa *sample,
        const char * buffer,
        unsigned int length);    

    NDDSUSERDllExport extern unsigned int 
    ActMsgSoaPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    ActMsgSoaPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    ActMsgSoaPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    ActMsgSoaPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    ActMsgSoaPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        ActMsgSoa ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    ActMsgSoaPlugin_new(void);

    NDDSUSERDllExport extern void
    ActMsgSoaPlugin_delete(struct PRESTypePlugin *);

} /* namespace DoorService  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* rpc_door_controlPlugin_1051761432_h */

