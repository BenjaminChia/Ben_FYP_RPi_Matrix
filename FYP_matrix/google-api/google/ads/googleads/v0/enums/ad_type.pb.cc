// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/ads/googleads/v0/enums/ad_type.proto

#include "google/ads/googleads/v0/enums/ad_type.pb.h"

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
namespace enums {
class AdTypeEnumDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<AdTypeEnum>
      _instance;
} _AdTypeEnum_default_instance_;
}  // namespace enums
}  // namespace v0
}  // namespace googleads
}  // namespace ads
}  // namespace google
namespace protobuf_google_2fads_2fgoogleads_2fv0_2fenums_2fad_5ftype_2eproto {
static void InitDefaultsAdTypeEnum() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::google::ads::googleads::v0::enums::_AdTypeEnum_default_instance_;
    new (ptr) ::google::ads::googleads::v0::enums::AdTypeEnum();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::google::ads::googleads::v0::enums::AdTypeEnum::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_AdTypeEnum =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsAdTypeEnum}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_AdTypeEnum.base);
}

::google::protobuf::Metadata file_level_metadata[1];
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::ads::googleads::v0::enums::AdTypeEnum, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::google::ads::googleads::v0::enums::AdTypeEnum)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::google::ads::googleads::v0::enums::_AdTypeEnum_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "google/ads/googleads/v0/enums/ad_type.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n+google/ads/googleads/v0/enums/ad_type."
      "proto\022\035google.ads.googleads.v0.enums\"\312\001\n"
      "\nAdTypeEnum\"\273\001\n\006AdType\022\017\n\013UNSPECIFIED\020\000\022"
      "\013\n\007UNKNOWN\020\001\022\013\n\007TEXT_AD\020\002\022\024\n\020EXPANDED_TE"
      "XT_AD\020\003\022\025\n\021DYNAMIC_SEARCH_AD\020\004\022\031\n\025RESPON"
      "SIVE_DISPLAY_AD\020\005\022\020\n\014CALL_ONLY_AD\020\006\022\036\n\032E"
      "XPANDED_DYNAMIC_SEARCH_AD\020\007\022\014\n\010HOTEL_AD\020"
      "\010B\230\001\n!com.google.ads.googleads.v0.enumsB"
      "\013AdTypeProtoP\001\242\002\003GAA\252\002\035Google.Ads.Google"
      "Ads.V0.Enums\312\002\035Google\\Ads\\GoogleAds\\V0\\E"
      "nums\342\002\035Google\\Ads\\GoogleAds\\V0\\Enumsb\006pr"
      "oto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 444);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "google/ads/googleads/v0/enums/ad_type.proto", &protobuf_RegisterTypes);
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
}  // namespace protobuf_google_2fads_2fgoogleads_2fv0_2fenums_2fad_5ftype_2eproto
namespace google {
namespace ads {
namespace googleads {
namespace v0 {
namespace enums {
const ::google::protobuf::EnumDescriptor* AdTypeEnum_AdType_descriptor() {
  protobuf_google_2fads_2fgoogleads_2fv0_2fenums_2fad_5ftype_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_google_2fads_2fgoogleads_2fv0_2fenums_2fad_5ftype_2eproto::file_level_enum_descriptors[0];
}
bool AdTypeEnum_AdType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const AdTypeEnum_AdType AdTypeEnum::UNSPECIFIED;
const AdTypeEnum_AdType AdTypeEnum::UNKNOWN;
const AdTypeEnum_AdType AdTypeEnum::TEXT_AD;
const AdTypeEnum_AdType AdTypeEnum::EXPANDED_TEXT_AD;
const AdTypeEnum_AdType AdTypeEnum::DYNAMIC_SEARCH_AD;
const AdTypeEnum_AdType AdTypeEnum::RESPONSIVE_DISPLAY_AD;
const AdTypeEnum_AdType AdTypeEnum::CALL_ONLY_AD;
const AdTypeEnum_AdType AdTypeEnum::EXPANDED_DYNAMIC_SEARCH_AD;
const AdTypeEnum_AdType AdTypeEnum::HOTEL_AD;
const AdTypeEnum_AdType AdTypeEnum::AdType_MIN;
const AdTypeEnum_AdType AdTypeEnum::AdType_MAX;
const int AdTypeEnum::AdType_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

// ===================================================================

void AdTypeEnum::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

AdTypeEnum::AdTypeEnum()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_google_2fads_2fgoogleads_2fv0_2fenums_2fad_5ftype_2eproto::scc_info_AdTypeEnum.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.ads.googleads.v0.enums.AdTypeEnum)
}
AdTypeEnum::AdTypeEnum(const AdTypeEnum& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:google.ads.googleads.v0.enums.AdTypeEnum)
}

void AdTypeEnum::SharedCtor() {
}

AdTypeEnum::~AdTypeEnum() {
  // @@protoc_insertion_point(destructor:google.ads.googleads.v0.enums.AdTypeEnum)
  SharedDtor();
}

void AdTypeEnum::SharedDtor() {
}

void AdTypeEnum::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* AdTypeEnum::descriptor() {
  ::protobuf_google_2fads_2fgoogleads_2fv0_2fenums_2fad_5ftype_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_google_2fads_2fgoogleads_2fv0_2fenums_2fad_5ftype_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const AdTypeEnum& AdTypeEnum::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_google_2fads_2fgoogleads_2fv0_2fenums_2fad_5ftype_2eproto::scc_info_AdTypeEnum.base);
  return *internal_default_instance();
}


void AdTypeEnum::Clear() {
// @@protoc_insertion_point(message_clear_start:google.ads.googleads.v0.enums.AdTypeEnum)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _internal_metadata_.Clear();
}

bool AdTypeEnum::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.ads.googleads.v0.enums.AdTypeEnum)
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
  // @@protoc_insertion_point(parse_success:google.ads.googleads.v0.enums.AdTypeEnum)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.ads.googleads.v0.enums.AdTypeEnum)
  return false;
#undef DO_
}

void AdTypeEnum::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.ads.googleads.v0.enums.AdTypeEnum)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:google.ads.googleads.v0.enums.AdTypeEnum)
}

::google::protobuf::uint8* AdTypeEnum::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:google.ads.googleads.v0.enums.AdTypeEnum)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.ads.googleads.v0.enums.AdTypeEnum)
  return target;
}

size_t AdTypeEnum::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.ads.googleads.v0.enums.AdTypeEnum)
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

void AdTypeEnum::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.ads.googleads.v0.enums.AdTypeEnum)
  GOOGLE_DCHECK_NE(&from, this);
  const AdTypeEnum* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const AdTypeEnum>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.ads.googleads.v0.enums.AdTypeEnum)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.ads.googleads.v0.enums.AdTypeEnum)
    MergeFrom(*source);
  }
}

void AdTypeEnum::MergeFrom(const AdTypeEnum& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.ads.googleads.v0.enums.AdTypeEnum)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

}

void AdTypeEnum::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.ads.googleads.v0.enums.AdTypeEnum)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void AdTypeEnum::CopyFrom(const AdTypeEnum& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.ads.googleads.v0.enums.AdTypeEnum)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AdTypeEnum::IsInitialized() const {
  return true;
}

void AdTypeEnum::Swap(AdTypeEnum* other) {
  if (other == this) return;
  InternalSwap(other);
}
void AdTypeEnum::InternalSwap(AdTypeEnum* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata AdTypeEnum::GetMetadata() const {
  protobuf_google_2fads_2fgoogleads_2fv0_2fenums_2fad_5ftype_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_google_2fads_2fgoogleads_2fv0_2fenums_2fad_5ftype_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace enums
}  // namespace v0
}  // namespace googleads
}  // namespace ads
}  // namespace google
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::google::ads::googleads::v0::enums::AdTypeEnum* Arena::CreateMaybeMessage< ::google::ads::googleads::v0::enums::AdTypeEnum >(Arena* arena) {
  return Arena::CreateInternal< ::google::ads::googleads::v0::enums::AdTypeEnum >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)