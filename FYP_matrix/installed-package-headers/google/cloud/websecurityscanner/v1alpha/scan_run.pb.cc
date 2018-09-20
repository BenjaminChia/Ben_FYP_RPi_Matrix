// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/cloud/websecurityscanner/v1alpha/scan_run.proto

#include "google/cloud/websecurityscanner/v1alpha/scan_run.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

namespace protobuf_google_2fprotobuf_2ftimestamp_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_google_2fprotobuf_2ftimestamp_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_Timestamp;
}  // namespace protobuf_google_2fprotobuf_2ftimestamp_2eproto
namespace google {
namespace cloud {
namespace websecurityscanner {
namespace v1alpha {
class ScanRunDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<ScanRun>
      _instance;
} _ScanRun_default_instance_;
}  // namespace v1alpha
}  // namespace websecurityscanner
}  // namespace cloud
}  // namespace google
namespace protobuf_google_2fcloud_2fwebsecurityscanner_2fv1alpha_2fscan_5frun_2eproto {
static void InitDefaultsScanRun() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::google::cloud::websecurityscanner::v1alpha::_ScanRun_default_instance_;
    new (ptr) ::google::cloud::websecurityscanner::v1alpha::ScanRun();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::google::cloud::websecurityscanner::v1alpha::ScanRun::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<1> scc_info_ScanRun =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsScanRun}, {
      &protobuf_google_2fprotobuf_2ftimestamp_2eproto::scc_info_Timestamp.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_ScanRun.base);
}

::google::protobuf::Metadata file_level_metadata[1];
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[2];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::cloud::websecurityscanner::v1alpha::ScanRun, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::cloud::websecurityscanner::v1alpha::ScanRun, name_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::cloud::websecurityscanner::v1alpha::ScanRun, execution_state_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::cloud::websecurityscanner::v1alpha::ScanRun, result_state_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::cloud::websecurityscanner::v1alpha::ScanRun, start_time_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::cloud::websecurityscanner::v1alpha::ScanRun, end_time_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::cloud::websecurityscanner::v1alpha::ScanRun, urls_crawled_count_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::cloud::websecurityscanner::v1alpha::ScanRun, urls_tested_count_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::cloud::websecurityscanner::v1alpha::ScanRun, has_vulnerabilities_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::cloud::websecurityscanner::v1alpha::ScanRun, progress_percent_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::google::cloud::websecurityscanner::v1alpha::ScanRun)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::google::cloud::websecurityscanner::v1alpha::_ScanRun_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "google/cloud/websecurityscanner/v1alpha/scan_run.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, file_level_enum_descriptors, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n6google/cloud/websecurityscanner/v1alph"
      "a/scan_run.proto\022\'google.cloud.websecuri"
      "tyscanner.v1alpha\032\034google/api/annotation"
      "s.proto\032\037google/protobuf/timestamp.proto"
      "\"\275\004\n\007ScanRun\022\014\n\004name\030\001 \001(\t\022X\n\017execution_"
      "state\030\002 \001(\0162\?.google.cloud.websecuritysc"
      "anner.v1alpha.ScanRun.ExecutionState\022R\n\014"
      "result_state\030\003 \001(\0162<.google.cloud.websec"
      "urityscanner.v1alpha.ScanRun.ResultState"
      "\022.\n\nstart_time\030\004 \001(\0132\032.google.protobuf.T"
      "imestamp\022,\n\010end_time\030\005 \001(\0132\032.google.prot"
      "obuf.Timestamp\022\032\n\022urls_crawled_count\030\006 \001"
      "(\003\022\031\n\021urls_tested_count\030\007 \001(\003\022\033\n\023has_vul"
      "nerabilities\030\010 \001(\010\022\030\n\020progress_percent\030\t"
      " \001(\005\"Y\n\016ExecutionState\022\037\n\033EXECUTION_STAT"
      "E_UNSPECIFIED\020\000\022\n\n\006QUEUED\020\001\022\014\n\010SCANNING\020"
      "\002\022\014\n\010FINISHED\020\003\"O\n\013ResultState\022\034\n\030RESULT"
      "_STATE_UNSPECIFIED\020\000\022\013\n\007SUCCESS\020\001\022\t\n\005ERR"
      "OR\020\002\022\n\n\006KILLED\020\003B\230\001\n+com.google.cloud.we"
      "bsecurityscanner.v1alphaB\014ScanRunProtoP\001"
      "ZYgoogle.golang.org/genproto/googleapis/"
      "cloud/websecurityscanner/v1alpha;websecu"
      "rityscannerb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 899);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "google/cloud/websecurityscanner/v1alpha/scan_run.proto", &protobuf_RegisterTypes);
  ::protobuf_google_2fapi_2fannotations_2eproto::AddDescriptors();
  ::protobuf_google_2fprotobuf_2ftimestamp_2eproto::AddDescriptors();
}

void AddDescriptors() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_google_2fcloud_2fwebsecurityscanner_2fv1alpha_2fscan_5frun_2eproto
namespace google {
namespace cloud {
namespace websecurityscanner {
namespace v1alpha {
const ::google::protobuf::EnumDescriptor* ScanRun_ExecutionState_descriptor() {
  protobuf_google_2fcloud_2fwebsecurityscanner_2fv1alpha_2fscan_5frun_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_google_2fcloud_2fwebsecurityscanner_2fv1alpha_2fscan_5frun_2eproto::file_level_enum_descriptors[0];
}
bool ScanRun_ExecutionState_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const ScanRun_ExecutionState ScanRun::EXECUTION_STATE_UNSPECIFIED;
const ScanRun_ExecutionState ScanRun::QUEUED;
const ScanRun_ExecutionState ScanRun::SCANNING;
const ScanRun_ExecutionState ScanRun::FINISHED;
const ScanRun_ExecutionState ScanRun::ExecutionState_MIN;
const ScanRun_ExecutionState ScanRun::ExecutionState_MAX;
const int ScanRun::ExecutionState_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900
const ::google::protobuf::EnumDescriptor* ScanRun_ResultState_descriptor() {
  protobuf_google_2fcloud_2fwebsecurityscanner_2fv1alpha_2fscan_5frun_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_google_2fcloud_2fwebsecurityscanner_2fv1alpha_2fscan_5frun_2eproto::file_level_enum_descriptors[1];
}
bool ScanRun_ResultState_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const ScanRun_ResultState ScanRun::RESULT_STATE_UNSPECIFIED;
const ScanRun_ResultState ScanRun::SUCCESS;
const ScanRun_ResultState ScanRun::ERROR;
const ScanRun_ResultState ScanRun::KILLED;
const ScanRun_ResultState ScanRun::ResultState_MIN;
const ScanRun_ResultState ScanRun::ResultState_MAX;
const int ScanRun::ResultState_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

// ===================================================================

void ScanRun::InitAsDefaultInstance() {
  ::google::cloud::websecurityscanner::v1alpha::_ScanRun_default_instance_._instance.get_mutable()->start_time_ = const_cast< ::google::protobuf::Timestamp*>(
      ::google::protobuf::Timestamp::internal_default_instance());
  ::google::cloud::websecurityscanner::v1alpha::_ScanRun_default_instance_._instance.get_mutable()->end_time_ = const_cast< ::google::protobuf::Timestamp*>(
      ::google::protobuf::Timestamp::internal_default_instance());
}
void ScanRun::clear_start_time() {
  if (GetArenaNoVirtual() == NULL && start_time_ != NULL) {
    delete start_time_;
  }
  start_time_ = NULL;
}
void ScanRun::clear_end_time() {
  if (GetArenaNoVirtual() == NULL && end_time_ != NULL) {
    delete end_time_;
  }
  end_time_ = NULL;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ScanRun::kNameFieldNumber;
const int ScanRun::kExecutionStateFieldNumber;
const int ScanRun::kResultStateFieldNumber;
const int ScanRun::kStartTimeFieldNumber;
const int ScanRun::kEndTimeFieldNumber;
const int ScanRun::kUrlsCrawledCountFieldNumber;
const int ScanRun::kUrlsTestedCountFieldNumber;
const int ScanRun::kHasVulnerabilitiesFieldNumber;
const int ScanRun::kProgressPercentFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ScanRun::ScanRun()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_google_2fcloud_2fwebsecurityscanner_2fv1alpha_2fscan_5frun_2eproto::scc_info_ScanRun.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.cloud.websecurityscanner.v1alpha.ScanRun)
}
ScanRun::ScanRun(const ScanRun& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.name().size() > 0) {
    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  if (from.has_start_time()) {
    start_time_ = new ::google::protobuf::Timestamp(*from.start_time_);
  } else {
    start_time_ = NULL;
  }
  if (from.has_end_time()) {
    end_time_ = new ::google::protobuf::Timestamp(*from.end_time_);
  } else {
    end_time_ = NULL;
  }
  ::memcpy(&execution_state_, &from.execution_state_,
    static_cast<size_t>(reinterpret_cast<char*>(&progress_percent_) -
    reinterpret_cast<char*>(&execution_state_)) + sizeof(progress_percent_));
  // @@protoc_insertion_point(copy_constructor:google.cloud.websecurityscanner.v1alpha.ScanRun)
}

void ScanRun::SharedCtor() {
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&start_time_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&progress_percent_) -
      reinterpret_cast<char*>(&start_time_)) + sizeof(progress_percent_));
}

ScanRun::~ScanRun() {
  // @@protoc_insertion_point(destructor:google.cloud.websecurityscanner.v1alpha.ScanRun)
  SharedDtor();
}

void ScanRun::SharedDtor() {
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete start_time_;
  if (this != internal_default_instance()) delete end_time_;
}

void ScanRun::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* ScanRun::descriptor() {
  ::protobuf_google_2fcloud_2fwebsecurityscanner_2fv1alpha_2fscan_5frun_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_google_2fcloud_2fwebsecurityscanner_2fv1alpha_2fscan_5frun_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const ScanRun& ScanRun::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_google_2fcloud_2fwebsecurityscanner_2fv1alpha_2fscan_5frun_2eproto::scc_info_ScanRun.base);
  return *internal_default_instance();
}


void ScanRun::Clear() {
// @@protoc_insertion_point(message_clear_start:google.cloud.websecurityscanner.v1alpha.ScanRun)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (GetArenaNoVirtual() == NULL && start_time_ != NULL) {
    delete start_time_;
  }
  start_time_ = NULL;
  if (GetArenaNoVirtual() == NULL && end_time_ != NULL) {
    delete end_time_;
  }
  end_time_ = NULL;
  ::memset(&execution_state_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&progress_percent_) -
      reinterpret_cast<char*>(&execution_state_)) + sizeof(progress_percent_));
  _internal_metadata_.Clear();
}

bool ScanRun::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.cloud.websecurityscanner.v1alpha.ScanRun)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string name = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->name().data(), static_cast<int>(this->name().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "google.cloud.websecurityscanner.v1alpha.ScanRun.name"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .google.cloud.websecurityscanner.v1alpha.ScanRun.ExecutionState execution_state = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_execution_state(static_cast< ::google::cloud::websecurityscanner::v1alpha::ScanRun_ExecutionState >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .google.cloud.websecurityscanner.v1alpha.ScanRun.ResultState result_state = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_result_state(static_cast< ::google::cloud::websecurityscanner::v1alpha::ScanRun_ResultState >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .google.protobuf.Timestamp start_time = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_start_time()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .google.protobuf.Timestamp end_time = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u /* 42 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_end_time()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int64 urls_crawled_count = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(48u /* 48 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &urls_crawled_count_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int64 urls_tested_count = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(56u /* 56 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &urls_tested_count_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool has_vulnerabilities = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(64u /* 64 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &has_vulnerabilities_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 progress_percent = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(72u /* 72 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &progress_percent_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:google.cloud.websecurityscanner.v1alpha.ScanRun)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.cloud.websecurityscanner.v1alpha.ScanRun)
  return false;
#undef DO_
}

void ScanRun::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.cloud.websecurityscanner.v1alpha.ScanRun)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string name = 1;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), static_cast<int>(this->name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.cloud.websecurityscanner.v1alpha.ScanRun.name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->name(), output);
  }

  // .google.cloud.websecurityscanner.v1alpha.ScanRun.ExecutionState execution_state = 2;
  if (this->execution_state() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      2, this->execution_state(), output);
  }

  // .google.cloud.websecurityscanner.v1alpha.ScanRun.ResultState result_state = 3;
  if (this->result_state() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      3, this->result_state(), output);
  }

  // .google.protobuf.Timestamp start_time = 4;
  if (this->has_start_time()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, this->_internal_start_time(), output);
  }

  // .google.protobuf.Timestamp end_time = 5;
  if (this->has_end_time()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      5, this->_internal_end_time(), output);
  }

  // int64 urls_crawled_count = 6;
  if (this->urls_crawled_count() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(6, this->urls_crawled_count(), output);
  }

  // int64 urls_tested_count = 7;
  if (this->urls_tested_count() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(7, this->urls_tested_count(), output);
  }

  // bool has_vulnerabilities = 8;
  if (this->has_vulnerabilities() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(8, this->has_vulnerabilities(), output);
  }

  // int32 progress_percent = 9;
  if (this->progress_percent() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(9, this->progress_percent(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:google.cloud.websecurityscanner.v1alpha.ScanRun)
}

::google::protobuf::uint8* ScanRun::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:google.cloud.websecurityscanner.v1alpha.ScanRun)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string name = 1;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), static_cast<int>(this->name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.cloud.websecurityscanner.v1alpha.ScanRun.name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->name(), target);
  }

  // .google.cloud.websecurityscanner.v1alpha.ScanRun.ExecutionState execution_state = 2;
  if (this->execution_state() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      2, this->execution_state(), target);
  }

  // .google.cloud.websecurityscanner.v1alpha.ScanRun.ResultState result_state = 3;
  if (this->result_state() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      3, this->result_state(), target);
  }

  // .google.protobuf.Timestamp start_time = 4;
  if (this->has_start_time()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        4, this->_internal_start_time(), deterministic, target);
  }

  // .google.protobuf.Timestamp end_time = 5;
  if (this->has_end_time()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        5, this->_internal_end_time(), deterministic, target);
  }

  // int64 urls_crawled_count = 6;
  if (this->urls_crawled_count() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(6, this->urls_crawled_count(), target);
  }

  // int64 urls_tested_count = 7;
  if (this->urls_tested_count() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(7, this->urls_tested_count(), target);
  }

  // bool has_vulnerabilities = 8;
  if (this->has_vulnerabilities() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(8, this->has_vulnerabilities(), target);
  }

  // int32 progress_percent = 9;
  if (this->progress_percent() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(9, this->progress_percent(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.cloud.websecurityscanner.v1alpha.ScanRun)
  return target;
}

size_t ScanRun::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.cloud.websecurityscanner.v1alpha.ScanRun)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string name = 1;
  if (this->name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->name());
  }

  // .google.protobuf.Timestamp start_time = 4;
  if (this->has_start_time()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *start_time_);
  }

  // .google.protobuf.Timestamp end_time = 5;
  if (this->has_end_time()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *end_time_);
  }

  // .google.cloud.websecurityscanner.v1alpha.ScanRun.ExecutionState execution_state = 2;
  if (this->execution_state() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->execution_state());
  }

  // .google.cloud.websecurityscanner.v1alpha.ScanRun.ResultState result_state = 3;
  if (this->result_state() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->result_state());
  }

  // int64 urls_crawled_count = 6;
  if (this->urls_crawled_count() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->urls_crawled_count());
  }

  // int64 urls_tested_count = 7;
  if (this->urls_tested_count() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->urls_tested_count());
  }

  // bool has_vulnerabilities = 8;
  if (this->has_vulnerabilities() != 0) {
    total_size += 1 + 1;
  }

  // int32 progress_percent = 9;
  if (this->progress_percent() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->progress_percent());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ScanRun::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.cloud.websecurityscanner.v1alpha.ScanRun)
  GOOGLE_DCHECK_NE(&from, this);
  const ScanRun* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const ScanRun>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.cloud.websecurityscanner.v1alpha.ScanRun)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.cloud.websecurityscanner.v1alpha.ScanRun)
    MergeFrom(*source);
  }
}

void ScanRun::MergeFrom(const ScanRun& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.cloud.websecurityscanner.v1alpha.ScanRun)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.name().size() > 0) {

    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  if (from.has_start_time()) {
    mutable_start_time()->::google::protobuf::Timestamp::MergeFrom(from.start_time());
  }
  if (from.has_end_time()) {
    mutable_end_time()->::google::protobuf::Timestamp::MergeFrom(from.end_time());
  }
  if (from.execution_state() != 0) {
    set_execution_state(from.execution_state());
  }
  if (from.result_state() != 0) {
    set_result_state(from.result_state());
  }
  if (from.urls_crawled_count() != 0) {
    set_urls_crawled_count(from.urls_crawled_count());
  }
  if (from.urls_tested_count() != 0) {
    set_urls_tested_count(from.urls_tested_count());
  }
  if (from.has_vulnerabilities() != 0) {
    set_has_vulnerabilities(from.has_vulnerabilities());
  }
  if (from.progress_percent() != 0) {
    set_progress_percent(from.progress_percent());
  }
}

void ScanRun::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.cloud.websecurityscanner.v1alpha.ScanRun)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ScanRun::CopyFrom(const ScanRun& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.cloud.websecurityscanner.v1alpha.ScanRun)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ScanRun::IsInitialized() const {
  return true;
}

void ScanRun::Swap(ScanRun* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ScanRun::InternalSwap(ScanRun* other) {
  using std::swap;
  name_.Swap(&other->name_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(start_time_, other->start_time_);
  swap(end_time_, other->end_time_);
  swap(execution_state_, other->execution_state_);
  swap(result_state_, other->result_state_);
  swap(urls_crawled_count_, other->urls_crawled_count_);
  swap(urls_tested_count_, other->urls_tested_count_);
  swap(has_vulnerabilities_, other->has_vulnerabilities_);
  swap(progress_percent_, other->progress_percent_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata ScanRun::GetMetadata() const {
  protobuf_google_2fcloud_2fwebsecurityscanner_2fv1alpha_2fscan_5frun_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_google_2fcloud_2fwebsecurityscanner_2fv1alpha_2fscan_5frun_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace v1alpha
}  // namespace websecurityscanner
}  // namespace cloud
}  // namespace google
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::google::cloud::websecurityscanner::v1alpha::ScanRun* Arena::CreateMaybeMessage< ::google::cloud::websecurityscanner::v1alpha::ScanRun >(Arena* arena) {
  return Arena::CreateInternal< ::google::cloud::websecurityscanner::v1alpha::ScanRun >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)