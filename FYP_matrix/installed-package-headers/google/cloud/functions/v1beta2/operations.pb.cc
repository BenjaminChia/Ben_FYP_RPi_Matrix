// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/cloud/functions/v1beta2/operations.proto

#include "google/cloud/functions/v1beta2/operations.pb.h"

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

namespace protobuf_google_2fprotobuf_2fany_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_google_2fprotobuf_2fany_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_Any;
}  // namespace protobuf_google_2fprotobuf_2fany_2eproto
namespace google {
namespace cloud {
namespace functions {
namespace v1beta2 {
class OperationMetadataV1Beta2DefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<OperationMetadataV1Beta2>
      _instance;
} _OperationMetadataV1Beta2_default_instance_;
}  // namespace v1beta2
}  // namespace functions
}  // namespace cloud
}  // namespace google
namespace protobuf_google_2fcloud_2ffunctions_2fv1beta2_2foperations_2eproto {
static void InitDefaultsOperationMetadataV1Beta2() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::google::cloud::functions::v1beta2::_OperationMetadataV1Beta2_default_instance_;
    new (ptr) ::google::cloud::functions::v1beta2::OperationMetadataV1Beta2();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::google::cloud::functions::v1beta2::OperationMetadataV1Beta2::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<1> scc_info_OperationMetadataV1Beta2 =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsOperationMetadataV1Beta2}, {
      &protobuf_google_2fprotobuf_2fany_2eproto::scc_info_Any.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_OperationMetadataV1Beta2.base);
}

::google::protobuf::Metadata file_level_metadata[1];
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::cloud::functions::v1beta2::OperationMetadataV1Beta2, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::cloud::functions::v1beta2::OperationMetadataV1Beta2, target_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::cloud::functions::v1beta2::OperationMetadataV1Beta2, type_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::cloud::functions::v1beta2::OperationMetadataV1Beta2, request_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::google::cloud::functions::v1beta2::OperationMetadataV1Beta2)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::google::cloud::functions::v1beta2::_OperationMetadataV1Beta2_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "google/cloud/functions/v1beta2/operations.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n/google/cloud/functions/v1beta2/operati"
      "ons.proto\022\036google.cloud.functions.v1beta"
      "2\032\034google/api/annotations.proto\032\031google/"
      "protobuf/any.proto\"\216\001\n\030OperationMetadata"
      "V1Beta2\022\016\n\006target\030\001 \001(\t\022;\n\004type\030\002 \001(\0162-."
      "google.cloud.functions.v1beta2.Operation"
      "Type\022%\n\007request\030\003 \001(\0132\024.google.protobuf."
      "Any*i\n\rOperationType\022\031\n\025OPERATION_UNSPEC"
      "IFIED\020\000\022\023\n\017CREATE_FUNCTION\020\001\022\023\n\017UPDATE_F"
      "UNCTION\020\002\022\023\n\017DELETE_FUNCTION\020\003B\211\001\n\"com.g"
      "oogle.cloud.functions.v1beta2B\030Functions"
      "OperationsProtoP\001ZGgoogle.golang.org/gen"
      "proto/googleapis/cloud/functions/v1beta2"
      ";functionsb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 538);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "google/cloud/functions/v1beta2/operations.proto", &protobuf_RegisterTypes);
  ::protobuf_google_2fapi_2fannotations_2eproto::AddDescriptors();
  ::protobuf_google_2fprotobuf_2fany_2eproto::AddDescriptors();
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
}  // namespace protobuf_google_2fcloud_2ffunctions_2fv1beta2_2foperations_2eproto
namespace google {
namespace cloud {
namespace functions {
namespace v1beta2 {
const ::google::protobuf::EnumDescriptor* OperationType_descriptor() {
  protobuf_google_2fcloud_2ffunctions_2fv1beta2_2foperations_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_google_2fcloud_2ffunctions_2fv1beta2_2foperations_2eproto::file_level_enum_descriptors[0];
}
bool OperationType_IsValid(int value) {
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


// ===================================================================

void OperationMetadataV1Beta2::InitAsDefaultInstance() {
  ::google::cloud::functions::v1beta2::_OperationMetadataV1Beta2_default_instance_._instance.get_mutable()->request_ = const_cast< ::google::protobuf::Any*>(
      ::google::protobuf::Any::internal_default_instance());
}
void OperationMetadataV1Beta2::clear_request() {
  if (GetArenaNoVirtual() == NULL && request_ != NULL) {
    delete request_;
  }
  request_ = NULL;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int OperationMetadataV1Beta2::kTargetFieldNumber;
const int OperationMetadataV1Beta2::kTypeFieldNumber;
const int OperationMetadataV1Beta2::kRequestFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

OperationMetadataV1Beta2::OperationMetadataV1Beta2()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_google_2fcloud_2ffunctions_2fv1beta2_2foperations_2eproto::scc_info_OperationMetadataV1Beta2.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.cloud.functions.v1beta2.OperationMetadataV1Beta2)
}
OperationMetadataV1Beta2::OperationMetadataV1Beta2(const OperationMetadataV1Beta2& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  target_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.target().size() > 0) {
    target_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.target_);
  }
  if (from.has_request()) {
    request_ = new ::google::protobuf::Any(*from.request_);
  } else {
    request_ = NULL;
  }
  type_ = from.type_;
  // @@protoc_insertion_point(copy_constructor:google.cloud.functions.v1beta2.OperationMetadataV1Beta2)
}

void OperationMetadataV1Beta2::SharedCtor() {
  target_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&request_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&type_) -
      reinterpret_cast<char*>(&request_)) + sizeof(type_));
}

OperationMetadataV1Beta2::~OperationMetadataV1Beta2() {
  // @@protoc_insertion_point(destructor:google.cloud.functions.v1beta2.OperationMetadataV1Beta2)
  SharedDtor();
}

void OperationMetadataV1Beta2::SharedDtor() {
  target_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete request_;
}

void OperationMetadataV1Beta2::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* OperationMetadataV1Beta2::descriptor() {
  ::protobuf_google_2fcloud_2ffunctions_2fv1beta2_2foperations_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_google_2fcloud_2ffunctions_2fv1beta2_2foperations_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const OperationMetadataV1Beta2& OperationMetadataV1Beta2::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_google_2fcloud_2ffunctions_2fv1beta2_2foperations_2eproto::scc_info_OperationMetadataV1Beta2.base);
  return *internal_default_instance();
}


void OperationMetadataV1Beta2::Clear() {
// @@protoc_insertion_point(message_clear_start:google.cloud.functions.v1beta2.OperationMetadataV1Beta2)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  target_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (GetArenaNoVirtual() == NULL && request_ != NULL) {
    delete request_;
  }
  request_ = NULL;
  type_ = 0;
  _internal_metadata_.Clear();
}

bool OperationMetadataV1Beta2::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.cloud.functions.v1beta2.OperationMetadataV1Beta2)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string target = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_target()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->target().data(), static_cast<int>(this->target().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "google.cloud.functions.v1beta2.OperationMetadataV1Beta2.target"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .google.cloud.functions.v1beta2.OperationType type = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_type(static_cast< ::google::cloud::functions::v1beta2::OperationType >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .google.protobuf.Any request = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_request()));
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
  // @@protoc_insertion_point(parse_success:google.cloud.functions.v1beta2.OperationMetadataV1Beta2)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.cloud.functions.v1beta2.OperationMetadataV1Beta2)
  return false;
#undef DO_
}

void OperationMetadataV1Beta2::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.cloud.functions.v1beta2.OperationMetadataV1Beta2)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string target = 1;
  if (this->target().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->target().data(), static_cast<int>(this->target().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.cloud.functions.v1beta2.OperationMetadataV1Beta2.target");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->target(), output);
  }

  // .google.cloud.functions.v1beta2.OperationType type = 2;
  if (this->type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      2, this->type(), output);
  }

  // .google.protobuf.Any request = 3;
  if (this->has_request()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, this->_internal_request(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:google.cloud.functions.v1beta2.OperationMetadataV1Beta2)
}

::google::protobuf::uint8* OperationMetadataV1Beta2::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:google.cloud.functions.v1beta2.OperationMetadataV1Beta2)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string target = 1;
  if (this->target().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->target().data(), static_cast<int>(this->target().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.cloud.functions.v1beta2.OperationMetadataV1Beta2.target");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->target(), target);
  }

  // .google.cloud.functions.v1beta2.OperationType type = 2;
  if (this->type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      2, this->type(), target);
  }

  // .google.protobuf.Any request = 3;
  if (this->has_request()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        3, this->_internal_request(), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.cloud.functions.v1beta2.OperationMetadataV1Beta2)
  return target;
}

size_t OperationMetadataV1Beta2::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.cloud.functions.v1beta2.OperationMetadataV1Beta2)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string target = 1;
  if (this->target().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->target());
  }

  // .google.protobuf.Any request = 3;
  if (this->has_request()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *request_);
  }

  // .google.cloud.functions.v1beta2.OperationType type = 2;
  if (this->type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->type());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void OperationMetadataV1Beta2::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.cloud.functions.v1beta2.OperationMetadataV1Beta2)
  GOOGLE_DCHECK_NE(&from, this);
  const OperationMetadataV1Beta2* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const OperationMetadataV1Beta2>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.cloud.functions.v1beta2.OperationMetadataV1Beta2)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.cloud.functions.v1beta2.OperationMetadataV1Beta2)
    MergeFrom(*source);
  }
}

void OperationMetadataV1Beta2::MergeFrom(const OperationMetadataV1Beta2& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.cloud.functions.v1beta2.OperationMetadataV1Beta2)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.target().size() > 0) {

    target_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.target_);
  }
  if (from.has_request()) {
    mutable_request()->::google::protobuf::Any::MergeFrom(from.request());
  }
  if (from.type() != 0) {
    set_type(from.type());
  }
}

void OperationMetadataV1Beta2::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.cloud.functions.v1beta2.OperationMetadataV1Beta2)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void OperationMetadataV1Beta2::CopyFrom(const OperationMetadataV1Beta2& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.cloud.functions.v1beta2.OperationMetadataV1Beta2)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool OperationMetadataV1Beta2::IsInitialized() const {
  return true;
}

void OperationMetadataV1Beta2::Swap(OperationMetadataV1Beta2* other) {
  if (other == this) return;
  InternalSwap(other);
}
void OperationMetadataV1Beta2::InternalSwap(OperationMetadataV1Beta2* other) {
  using std::swap;
  target_.Swap(&other->target_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(request_, other->request_);
  swap(type_, other->type_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata OperationMetadataV1Beta2::GetMetadata() const {
  protobuf_google_2fcloud_2ffunctions_2fv1beta2_2foperations_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_google_2fcloud_2ffunctions_2fv1beta2_2foperations_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace v1beta2
}  // namespace functions
}  // namespace cloud
}  // namespace google
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::google::cloud::functions::v1beta2::OperationMetadataV1Beta2* Arena::CreateMaybeMessage< ::google::cloud::functions::v1beta2::OperationMetadataV1Beta2 >(Arena* arena) {
  return Arena::CreateInternal< ::google::cloud::functions::v1beta2::OperationMetadataV1Beta2 >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
