// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/ads/googleads/v0/errors/range_error.proto

#include "google/ads/googleads/v0/errors/range_error.pb.h"

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

namespace google {
namespace ads {
namespace googleads {
namespace v0 {
namespace errors {
class RangeErrorEnumDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<RangeErrorEnum>
      _instance;
} _RangeErrorEnum_default_instance_;
}  // namespace errors
}  // namespace v0
}  // namespace googleads
}  // namespace ads
}  // namespace google
namespace protobuf_google_2fads_2fgoogleads_2fv0_2ferrors_2frange_5ferror_2eproto {
static void InitDefaultsRangeErrorEnum() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::google::ads::googleads::v0::errors::_RangeErrorEnum_default_instance_;
    new (ptr) ::google::ads::googleads::v0::errors::RangeErrorEnum();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::google::ads::googleads::v0::errors::RangeErrorEnum::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_RangeErrorEnum =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsRangeErrorEnum}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_RangeErrorEnum.base);
}

::google::protobuf::Metadata file_level_metadata[1];
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::ads::googleads::v0::errors::RangeErrorEnum, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::google::ads::googleads::v0::errors::RangeErrorEnum)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::google::ads::googleads::v0::errors::_RangeErrorEnum_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "google/ads/googleads/v0/errors/range_error.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n0google/ads/googleads/v0/errors/range_e"
      "rror.proto\022\036google.ads.googleads.v0.erro"
      "rs\"W\n\016RangeErrorEnum\"E\n\nRangeError\022\017\n\013UN"
      "SPECIFIED\020\000\022\013\n\007UNKNOWN\020\001\022\013\n\007TOO_LOW\020\002\022\014\n"
      "\010TOO_HIGH\020\003B\240\001\n\"com.google.ads.googleads"
      ".v0.errorsB\017RangeErrorProtoP\001\242\002\003GAA\252\002\036Go"
      "ogle.Ads.GoogleAds.V0.Errors\312\002\036Google\\Ad"
      "s\\GoogleAds\\V0\\Errors\342\002\036Google\\Ads\\Googl"
      "eAds\\V0\\Errorsb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 342);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "google/ads/googleads/v0/errors/range_error.proto", &protobuf_RegisterTypes);
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
}  // namespace protobuf_google_2fads_2fgoogleads_2fv0_2ferrors_2frange_5ferror_2eproto
namespace google {
namespace ads {
namespace googleads {
namespace v0 {
namespace errors {
const ::google::protobuf::EnumDescriptor* RangeErrorEnum_RangeError_descriptor() {
  protobuf_google_2fads_2fgoogleads_2fv0_2ferrors_2frange_5ferror_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_google_2fads_2fgoogleads_2fv0_2ferrors_2frange_5ferror_2eproto::file_level_enum_descriptors[0];
}
bool RangeErrorEnum_RangeError_IsValid(int value) {
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
const RangeErrorEnum_RangeError RangeErrorEnum::UNSPECIFIED;
const RangeErrorEnum_RangeError RangeErrorEnum::UNKNOWN;
const RangeErrorEnum_RangeError RangeErrorEnum::TOO_LOW;
const RangeErrorEnum_RangeError RangeErrorEnum::TOO_HIGH;
const RangeErrorEnum_RangeError RangeErrorEnum::RangeError_MIN;
const RangeErrorEnum_RangeError RangeErrorEnum::RangeError_MAX;
const int RangeErrorEnum::RangeError_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

// ===================================================================

void RangeErrorEnum::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

RangeErrorEnum::RangeErrorEnum()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_google_2fads_2fgoogleads_2fv0_2ferrors_2frange_5ferror_2eproto::scc_info_RangeErrorEnum.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.ads.googleads.v0.errors.RangeErrorEnum)
}
RangeErrorEnum::RangeErrorEnum(const RangeErrorEnum& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:google.ads.googleads.v0.errors.RangeErrorEnum)
}

void RangeErrorEnum::SharedCtor() {
}

RangeErrorEnum::~RangeErrorEnum() {
  // @@protoc_insertion_point(destructor:google.ads.googleads.v0.errors.RangeErrorEnum)
  SharedDtor();
}

void RangeErrorEnum::SharedDtor() {
}

void RangeErrorEnum::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* RangeErrorEnum::descriptor() {
  ::protobuf_google_2fads_2fgoogleads_2fv0_2ferrors_2frange_5ferror_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_google_2fads_2fgoogleads_2fv0_2ferrors_2frange_5ferror_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const RangeErrorEnum& RangeErrorEnum::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_google_2fads_2fgoogleads_2fv0_2ferrors_2frange_5ferror_2eproto::scc_info_RangeErrorEnum.base);
  return *internal_default_instance();
}


void RangeErrorEnum::Clear() {
// @@protoc_insertion_point(message_clear_start:google.ads.googleads.v0.errors.RangeErrorEnum)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _internal_metadata_.Clear();
}

bool RangeErrorEnum::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.ads.googleads.v0.errors.RangeErrorEnum)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
  handle_unusual:
    if (tag == 0) {
      goto success;
    }
    DO_(::google::protobuf::internal::WireFormat::SkipField(
          input, tag, _internal_metadata_.mutable_unknown_fields()));
  }
success:
  // @@protoc_insertion_point(parse_success:google.ads.googleads.v0.errors.RangeErrorEnum)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.ads.googleads.v0.errors.RangeErrorEnum)
  return false;
#undef DO_
}

void RangeErrorEnum::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.ads.googleads.v0.errors.RangeErrorEnum)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:google.ads.googleads.v0.errors.RangeErrorEnum)
}

::google::protobuf::uint8* RangeErrorEnum::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:google.ads.googleads.v0.errors.RangeErrorEnum)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.ads.googleads.v0.errors.RangeErrorEnum)
  return target;
}

size_t RangeErrorEnum::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.ads.googleads.v0.errors.RangeErrorEnum)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void RangeErrorEnum::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.ads.googleads.v0.errors.RangeErrorEnum)
  GOOGLE_DCHECK_NE(&from, this);
  const RangeErrorEnum* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const RangeErrorEnum>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.ads.googleads.v0.errors.RangeErrorEnum)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.ads.googleads.v0.errors.RangeErrorEnum)
    MergeFrom(*source);
  }
}

void RangeErrorEnum::MergeFrom(const RangeErrorEnum& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.ads.googleads.v0.errors.RangeErrorEnum)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

}

void RangeErrorEnum::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.ads.googleads.v0.errors.RangeErrorEnum)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RangeErrorEnum::CopyFrom(const RangeErrorEnum& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.ads.googleads.v0.errors.RangeErrorEnum)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RangeErrorEnum::IsInitialized() const {
  return true;
}

void RangeErrorEnum::Swap(RangeErrorEnum* other) {
  if (other == this) return;
  InternalSwap(other);
}
void RangeErrorEnum::InternalSwap(RangeErrorEnum* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata RangeErrorEnum::GetMetadata() const {
  protobuf_google_2fads_2fgoogleads_2fv0_2ferrors_2frange_5ferror_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_google_2fads_2fgoogleads_2fv0_2ferrors_2frange_5ferror_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace errors
}  // namespace v0
}  // namespace googleads
}  // namespace ads
}  // namespace google
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::google::ads::googleads::v0::errors::RangeErrorEnum* Arena::CreateMaybeMessage< ::google::ads::googleads::v0::errors::RangeErrorEnum >(Arena* arena) {
  return Arena::CreateInternal< ::google::ads::googleads::v0::errors::RangeErrorEnum >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
