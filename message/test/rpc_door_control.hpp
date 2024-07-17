

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from rpc_door_control.idl
using RTI Code Generator (rtiddsgen) version 3.1.1.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef rpc_door_control_1051761432_hpp
#define rpc_door_control_1051761432_hpp

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

namespace DoorService {
    enum class MajorType {
        BD_ARM = 0, 
        BD_PST = 1, 
        WIN_PER = 2, 
        CHS = 100
    };

    NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const MajorType& sample);
    enum class MinorType {
        A = 0
    };

    NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const MinorType& sample);

    class NDDSUSERDllExport SetMsg {
      public:
        SetMsg();

        SetMsg(
            uint8_t CmdId,
            const DoorService::MajorType& MType,
            uint8_t SetBit,
            uint32_t SetCmd,
            const std::string& CtrlSrc);

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        SetMsg (SetMsg&&) = default;
        SetMsg& operator=(SetMsg&&) = default;
        SetMsg& operator=(const SetMsg&) = default;
        SetMsg(const SetMsg&) = default;
        #else
        SetMsg(SetMsg&& other_) OMG_NOEXCEPT;  
        SetMsg& operator=(SetMsg&&  other_) OMG_NOEXCEPT;
        #endif
        #endif 

        uint8_t& CmdId() OMG_NOEXCEPT {
            return m_CmdId_;
        }

        const uint8_t& CmdId() const OMG_NOEXCEPT {
            return m_CmdId_;
        }

        void CmdId(uint8_t value) {
            m_CmdId_ = value;
        }

        DoorService::MajorType& MType() OMG_NOEXCEPT {
            return m_MType_;
        }

        const DoorService::MajorType& MType() const OMG_NOEXCEPT {
            return m_MType_;
        }

        void MType(const DoorService::MajorType& value) {
            m_MType_ = value;
        }

        void MType(DoorService::MajorType&& value) {
            m_MType_ = std::move(value);
        }
        uint8_t& SetBit() OMG_NOEXCEPT {
            return m_SetBit_;
        }

        const uint8_t& SetBit() const OMG_NOEXCEPT {
            return m_SetBit_;
        }

        void SetBit(uint8_t value) {
            m_SetBit_ = value;
        }

        uint32_t& SetCmd() OMG_NOEXCEPT {
            return m_SetCmd_;
        }

        const uint32_t& SetCmd() const OMG_NOEXCEPT {
            return m_SetCmd_;
        }

        void SetCmd(uint32_t value) {
            m_SetCmd_ = value;
        }

        std::string& CtrlSrc() OMG_NOEXCEPT {
            return m_CtrlSrc_;
        }

        const std::string& CtrlSrc() const OMG_NOEXCEPT {
            return m_CtrlSrc_;
        }

        void CtrlSrc(const std::string& value) {
            m_CtrlSrc_ = value;
        }

        void CtrlSrc(std::string&& value) {
            m_CtrlSrc_ = std::move(value);
        }

        bool operator == (const SetMsg& other_) const;
        bool operator != (const SetMsg& other_) const;

        void swap(SetMsg& other_) OMG_NOEXCEPT ;

      private:

        uint8_t m_CmdId_;
        DoorService::MajorType m_MType_;
        uint8_t m_SetBit_;
        uint32_t m_SetCmd_;
        std::string m_CtrlSrc_;

    };

    inline void swap(SetMsg& a, SetMsg& b)  OMG_NOEXCEPT 
    {
        a.swap(b);
    }

    NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const SetMsg& sample);

    class NDDSUSERDllExport SetMsgSoa {
      public:
        SetMsgSoa();

        explicit SetMsgSoa(
            uint8_t CmdId);

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        SetMsgSoa (SetMsgSoa&&) = default;
        SetMsgSoa& operator=(SetMsgSoa&&) = default;
        SetMsgSoa& operator=(const SetMsgSoa&) = default;
        SetMsgSoa(const SetMsgSoa&) = default;
        #else
        SetMsgSoa(SetMsgSoa&& other_) OMG_NOEXCEPT;  
        SetMsgSoa& operator=(SetMsgSoa&&  other_) OMG_NOEXCEPT;
        #endif
        #endif 

        uint8_t& CmdId() OMG_NOEXCEPT {
            return m_CmdId_;
        }

        const uint8_t& CmdId() const OMG_NOEXCEPT {
            return m_CmdId_;
        }

        void CmdId(uint8_t value) {
            m_CmdId_ = value;
        }

        bool operator == (const SetMsgSoa& other_) const;
        bool operator != (const SetMsgSoa& other_) const;

        void swap(SetMsgSoa& other_) OMG_NOEXCEPT ;

      private:

        uint8_t m_CmdId_;

    };

    inline void swap(SetMsgSoa& a, SetMsgSoa& b)  OMG_NOEXCEPT 
    {
        a.swap(b);
    }

    NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const SetMsgSoa& sample);

    class NDDSUSERDllExport ActMsg {
      public:
        ActMsg();

        ActMsg(
            uint8_t CmdId,
            const DoorService::MajorType& MType,
            uint8_t ActBit,
            uint32_t ActCmd,
            const std::string& CtrlSrc);

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        ActMsg (ActMsg&&) = default;
        ActMsg& operator=(ActMsg&&) = default;
        ActMsg& operator=(const ActMsg&) = default;
        ActMsg(const ActMsg&) = default;
        #else
        ActMsg(ActMsg&& other_) OMG_NOEXCEPT;  
        ActMsg& operator=(ActMsg&&  other_) OMG_NOEXCEPT;
        #endif
        #endif 

        uint8_t& CmdId() OMG_NOEXCEPT {
            return m_CmdId_;
        }

        const uint8_t& CmdId() const OMG_NOEXCEPT {
            return m_CmdId_;
        }

        void CmdId(uint8_t value) {
            m_CmdId_ = value;
        }

        DoorService::MajorType& MType() OMG_NOEXCEPT {
            return m_MType_;
        }

        const DoorService::MajorType& MType() const OMG_NOEXCEPT {
            return m_MType_;
        }

        void MType(const DoorService::MajorType& value) {
            m_MType_ = value;
        }

        void MType(DoorService::MajorType&& value) {
            m_MType_ = std::move(value);
        }
        uint8_t& ActBit() OMG_NOEXCEPT {
            return m_ActBit_;
        }

        const uint8_t& ActBit() const OMG_NOEXCEPT {
            return m_ActBit_;
        }

        void ActBit(uint8_t value) {
            m_ActBit_ = value;
        }

        uint32_t& ActCmd() OMG_NOEXCEPT {
            return m_ActCmd_;
        }

        const uint32_t& ActCmd() const OMG_NOEXCEPT {
            return m_ActCmd_;
        }

        void ActCmd(uint32_t value) {
            m_ActCmd_ = value;
        }

        std::string& CtrlSrc() OMG_NOEXCEPT {
            return m_CtrlSrc_;
        }

        const std::string& CtrlSrc() const OMG_NOEXCEPT {
            return m_CtrlSrc_;
        }

        void CtrlSrc(const std::string& value) {
            m_CtrlSrc_ = value;
        }

        void CtrlSrc(std::string&& value) {
            m_CtrlSrc_ = std::move(value);
        }

        bool operator == (const ActMsg& other_) const;
        bool operator != (const ActMsg& other_) const;

        void swap(ActMsg& other_) OMG_NOEXCEPT ;

      private:

        uint8_t m_CmdId_;
        DoorService::MajorType m_MType_;
        uint8_t m_ActBit_;
        uint32_t m_ActCmd_;
        std::string m_CtrlSrc_;

    };

    inline void swap(ActMsg& a, ActMsg& b)  OMG_NOEXCEPT 
    {
        a.swap(b);
    }

    NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const ActMsg& sample);

    class NDDSUSERDllExport ActMsgSoa {
      public:
        ActMsgSoa();

        explicit ActMsgSoa(
            uint8_t CmdId);

        #ifdef RTI_CXX11_RVALUE_REFERENCES
        #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
        ActMsgSoa (ActMsgSoa&&) = default;
        ActMsgSoa& operator=(ActMsgSoa&&) = default;
        ActMsgSoa& operator=(const ActMsgSoa&) = default;
        ActMsgSoa(const ActMsgSoa&) = default;
        #else
        ActMsgSoa(ActMsgSoa&& other_) OMG_NOEXCEPT;  
        ActMsgSoa& operator=(ActMsgSoa&&  other_) OMG_NOEXCEPT;
        #endif
        #endif 

        uint8_t& CmdId() OMG_NOEXCEPT {
            return m_CmdId_;
        }

        const uint8_t& CmdId() const OMG_NOEXCEPT {
            return m_CmdId_;
        }

        void CmdId(uint8_t value) {
            m_CmdId_ = value;
        }

        bool operator == (const ActMsgSoa& other_) const;
        bool operator != (const ActMsgSoa& other_) const;

        void swap(ActMsgSoa& other_) OMG_NOEXCEPT ;

      private:

        uint8_t m_CmdId_;

    };

    inline void swap(ActMsgSoa& a, ActMsgSoa& b)  OMG_NOEXCEPT 
    {
        a.swap(b);
    }

    NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const ActMsgSoa& sample);

} // namespace DoorService  

namespace rti {
    namespace flat {
        namespace topic {
        }
    }
}
namespace dds {
    namespace topic {

        template<>
        struct topic_type_name< DoorService::SetMsg > {
            NDDSUSERDllExport static std::string value() {
                return "DoorService::SetMsg";
            }
        };

        template<>
        struct is_topic_type< DoorService::SetMsg > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< DoorService::SetMsg > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const DoorService::SetMsg& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(DoorService::SetMsg& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(DoorService::SetMsg& sample);

            NDDSUSERDllExport 
            static void allocate_sample(DoorService::SetMsg& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< DoorService::SetMsgSoa > {
            NDDSUSERDllExport static std::string value() {
                return "DoorService::SetMsgSoa";
            }
        };

        template<>
        struct is_topic_type< DoorService::SetMsgSoa > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< DoorService::SetMsgSoa > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const DoorService::SetMsgSoa& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(DoorService::SetMsgSoa& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(DoorService::SetMsgSoa& sample);

            NDDSUSERDllExport 
            static void allocate_sample(DoorService::SetMsgSoa& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< DoorService::ActMsg > {
            NDDSUSERDllExport static std::string value() {
                return "DoorService::ActMsg";
            }
        };

        template<>
        struct is_topic_type< DoorService::ActMsg > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< DoorService::ActMsg > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const DoorService::ActMsg& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(DoorService::ActMsg& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(DoorService::ActMsg& sample);

            NDDSUSERDllExport 
            static void allocate_sample(DoorService::ActMsg& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< DoorService::ActMsgSoa > {
            NDDSUSERDllExport static std::string value() {
                return "DoorService::ActMsgSoa";
            }
        };

        template<>
        struct is_topic_type< DoorService::ActMsgSoa > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< DoorService::ActMsgSoa > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const DoorService::ActMsgSoa& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(DoorService::ActMsgSoa& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(DoorService::ActMsgSoa& sample);

            NDDSUSERDllExport 
            static void allocate_sample(DoorService::ActMsgSoa& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template <>
        struct default_enumerator<DoorService::MajorType>
        {
            static const DoorService::MajorType value;
        };
        template<>
        struct dynamic_type< DoorService::MajorType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };
        #endif

        template <>
        struct extensibility< DoorService::MajorType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template <>
        struct default_enumerator<DoorService::MinorType>
        {
            static const DoorService::MinorType value;
        };
        template<>
        struct dynamic_type< DoorService::MinorType > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };
        #endif

        template <>
        struct extensibility< DoorService::MinorType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< DoorService::SetMsg > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< DoorService::SetMsg > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< DoorService::SetMsgSoa > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< DoorService::SetMsgSoa > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< DoorService::ActMsg > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< DoorService::ActMsg > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< DoorService::ActMsgSoa > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< DoorService::ActMsgSoa > {
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

#endif // rpc_door_control_1051761432_hpp

