// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/ads/googleads/v0/errors/setting_error.proto

#include "google/ads/googleads/v0/errors/setting_error.pb.h"

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
class SettingErrorEnumDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<SettingErrorEnum>
      _instance;
} _SettingErrorEnum_default_instance_;
}  // namespace errors
}  // namespace v0
}  // namespace googleads
}  // namespace ads
}  // namespace google
namespace protobuf_google_2fads_2fgoogleads_2fv0_2ferrors_2fsetting_5ferror_2eproto {
static void InitDefaultsSettingErrorEnum() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::google::ads::googleads::v0::errors::_SettingErrorEnum_default_instance_;
    new (ptr) ::google::ads::googleads::v0::errors::SettingErrorEnum();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::google::ads::googleads::v0::errors::SettingErrorEnum::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_SettingErrorEnum =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsSettingErrorEnum}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_SettingErrorEnum.base);
}

::google::protobuf::Metadata file_level_metadata[1];
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::ads::googleads::v0::errors::SettingErrorEnum, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::google::ads::googleads::v0::errors::SettingErrorEnum)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::google::ads::googleads::v0::errors::_SettingErrorEnum_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "google/ads/googleads/v0/errors/setting_error.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n2google/ads/googleads/v0/errors/setting"
      "_error.proto\022\036google.ads.googleads.v0.er"
      "rors\"\276\010\n\020SettingErrorEnum\"\251\010\n\014SettingErr"
      "or\022\017\n\013UNSPECIFIED\020\000\022\013\n\007UNKNOWN\020\001\022!\n\035SETT"
      "ING_TYPE_IS_NOT_AVAILABLE\020\003\0220\n,SETTING_T"
      "YPE_IS_NOT_COMPATIBLE_WITH_CAMPAIGN\020\004\022;\n"
      "7TARGETING_SETTING_CONTAINS_INVALID_CRIT"
      "ERION_TYPE_GROUP\020\005\022Q\nMTARGETING_SETTING_"
      "DEMOGRAPHIC_CRITERION_TYPE_GROUPS_MUST_B"
      "E_SET_TO_TARGET_ALL\020\006\022\\\nXTARGETING_SETTI"
      "NG_CANNOT_CHANGE_TARGET_ALL_TO_FALSE_FOR"
      "_DEMOGRAPHIC_CRITERION_TYPE_GROUP\020\007\022C\n\?D"
      "YNAMIC_SEARCH_ADS_SETTING_AT_LEAST_ONE_F"
      "EED_ID_MUST_BE_PRESENT\020\010\022;\n7DYNAMIC_SEAR"
      "CH_ADS_SETTING_CONTAINS_INVALID_DOMAIN_N"
      "AME\020\t\0226\n2DYNAMIC_SEARCH_ADS_SETTING_CONT"
      "AINS_SUBDOMAIN_NAME\020\n\022=\n9DYNAMIC_SEARCH_"
      "ADS_SETTING_CONTAINS_INVALID_LANGUAGE_CO"
      "DE\020\013\022>\n:TARGET_ALL_IS_NOT_ALLOWED_FOR_PL"
      "ACEMENT_IN_SEARCH_CAMPAIGN\020\014\0228\n4UNIVERSA"
      "L_APP_CAMPAIGN_SETTING_DUPLICATE_DESCRIP"
      "TION\020\r\022B\n>UNIVERSAL_APP_CAMPAIGN_SETTING"
      "_DESCRIPTION_LINE_WIDTH_TOO_LONG\020\016\022<\n8UN"
      "IVERSAL_APP_CAMPAIGN_SETTING_APP_ID_CANN"
      "OT_BE_MODIFIED\020\017\0228\n4TOO_MANY_YOUTUBE_MED"
      "IA_IDS_IN_UNIVERSAL_APP_CAMPAIGN\020\020\0226\n2TO"
      "O_MANY_IMAGE_MEDIA_IDS_IN_UNIVERSAL_APP_"
      "CAMPAIGN\020\021\0221\n-MEDIA_INCOMPATIBLE_FOR_UNI"
      "VERSAL_APP_CAMPAIGN\020\022\022\036\n\032TOO_MANY_EXCLAM"
      "ATION_MARKS\020\023B\242\001\n\"com.google.ads.googlea"
      "ds.v0.errorsB\021SettingErrorProtoP\001\242\002\003GAA\252"
      "\002\036Google.Ads.GoogleAds.V0.Errors\312\002\036Googl"
      "e\\Ads\\GoogleAds\\V0\\Errors\342\002\036Google\\Ads\\G"
      "oogleAds\\V0\\Errorsb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 1346);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "google/ads/googleads/v0/errors/setting_error.proto", &protobuf_RegisterTypes);
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
}  // namespace protobuf_google_2fads_2fgoogleads_2fv0_2ferrors_2fsetting_5ferror_2eproto
namespace google {
namespace ads {
namespace googleads {
namespace v0 {
namespace errors {
const ::google::protobuf::EnumDescriptor* SettingErrorEnum_SettingError_descriptor() {
  protobuf_google_2fads_2fgoogleads_2fv0_2ferrors_2fsetting_5ferror_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_google_2fads_2fgoogleads_2fv0_2ferrors_2fsetting_5ferror_2eproto::file_level_enum_descriptors[0];
}
bool SettingErrorEnum_SettingError_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const SettingErrorEnum_SettingError SettingErrorEnum::UNSPECIFIED;
const SettingErrorEnum_SettingError SettingErrorEnum::UNKNOWN;
const SettingErrorEnum_SettingError SettingErrorEnum::SETTING_TYPE_IS_NOT_AVAILABLE;
const SettingErrorEnum_SettingError SettingErrorEnum::SETTING_TYPE_IS_NOT_COMPATIBLE_WITH_CAMPAIGN;
const SettingErrorEnum_SettingError SettingErrorEnum::TARGETING_SETTING_CONTAINS_INVALID_CRITERION_TYPE_GROUP;
const SettingErrorEnum_SettingError SettingErrorEnum::TARGETING_SETTING_DEMOGRAPHIC_CRITERION_TYPE_GROUPS_MUST_BE_SET_TO_TARGET_ALL;
const SettingErrorEnum_SettingError SettingErrorEnum::TARGETING_SETTING_CANNOT_CHANGE_TARGET_ALL_TO_FALSE_FOR_DEMOGRAPHIC_CRITERION_TYPE_GROUP;
const SettingErrorEnum_SettingError SettingErrorEnum::DYNAMIC_SEARCH_ADS_SETTING_AT_LEAST_ONE_FEED_ID_MUST_BE_PRESENT;
const SettingErrorEnum_SettingError SettingErrorEnum::DYNAMIC_SEARCH_ADS_SETTING_CONTAINS_INVALID_DOMAIN_NAME;
const SettingErrorEnum_SettingError SettingErrorEnum::DYNAMIC_SEARCH_ADS_SETTING_CONTAINS_SUBDOMAIN_NAME;
const SettingErrorEnum_SettingError SettingErrorEnum::DYNAMIC_SEARCH_ADS_SETTING_CONTAINS_INVALID_LANGUAGE_CODE;
const SettingErrorEnum_SettingError SettingErrorEnum::TARGET_ALL_IS_NOT_ALLOWED_FOR_PLACEMENT_IN_SEARCH_CAMPAIGN;
const SettingErrorEnum_SettingError SettingErrorEnum::UNIVERSAL_APP_CAMPAIGN_SETTING_DUPLICATE_DESCRIPTION;
const SettingErrorEnum_SettingError SettingErrorEnum::UNIVERSAL_APP_CAMPAIGN_SETTING_DESCRIPTION_LINE_WIDTH_TOO_LONG;
const SettingErrorEnum_SettingError SettingErrorEnum::UNIVERSAL_APP_CAMPAIGN_SETTING_APP_ID_CANNOT_BE_MODIFIED;
const SettingErrorEnum_SettingError SettingErrorEnum::TOO_MANY_YOUTUBE_MEDIA_IDS_IN_UNIVERSAL_APP_CAMPAIGN;
const SettingErrorEnum_SettingError SettingErrorEnum::TOO_MANY_IMAGE_MEDIA_IDS_IN_UNIVERSAL_APP_CAMPAIGN;
const SettingErrorEnum_SettingError SettingErrorEnum::MEDIA_INCOMPATIBLE_FOR_UNIVERSAL_APP_CAMPAIGN;
const SettingErrorEnum_SettingError SettingErrorEnum::TOO_MANY_EXCLAMATION_MARKS;
const SettingErrorEnum_SettingError SettingErrorEnum::SettingError_MIN;
const SettingErrorEnum_SettingError SettingErrorEnum::SettingError_MAX;
const int SettingErrorEnum::SettingError_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

// ===================================================================

void SettingErrorEnum::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

SettingErrorEnum::SettingErrorEnum()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_google_2fads_2fgoogleads_2fv0_2ferrors_2fsetting_5ferror_2eproto::scc_info_SettingErrorEnum.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.ads.googleads.v0.errors.SettingErrorEnum)
}
SettingErrorEnum::SettingErrorEnum(const SettingErrorEnum& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:google.ads.googleads.v0.errors.SettingErrorEnum)
}

void SettingErrorEnum::SharedCtor() {
}

SettingErrorEnum::~SettingErrorEnum() {
  // @@protoc_insertion_point(destructor:google.ads.googleads.v0.errors.SettingErrorEnum)
  SharedDtor();
}

void SettingErrorEnum::SharedDtor() {
}

void SettingErrorEnum::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* SettingErrorEnum::descriptor() {
  ::protobuf_google_2fads_2fgoogleads_2fv0_2ferrors_2fsetting_5ferror_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_google_2fads_2fgoogleads_2fv0_2ferrors_2fsetting_5ferror_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const SettingErrorEnum& SettingErrorEnum::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_google_2fads_2fgoogleads_2fv0_2ferrors_2fsetting_5ferror_2eproto::scc_info_SettingErrorEnum.base);
  return *internal_default_instance();
}


void SettingErrorEnum::Clear() {
// @@protoc_insertion_point(message_clear_start:google.ads.googleads.v0.errors.SettingErrorEnum)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _internal_metadata_.Clear();
}

bool SettingErrorEnum::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.ads.googleads.v0.errors.SettingErrorEnum)
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
  // @@protoc_insertion_point(parse_success:google.ads.googleads.v0.errors.SettingErrorEnum)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.ads.googleads.v0.errors.SettingErrorEnum)
  return false;
#undef DO_
}

void SettingErrorEnum::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.ads.googleads.v0.errors.SettingErrorEnum)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:google.ads.googleads.v0.errors.SettingErrorEnum)
}

::google::protobuf::uint8* SettingErrorEnum::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:google.ads.googleads.v0.errors.SettingErrorEnum)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.ads.googleads.v0.errors.SettingErrorEnum)
  return target;
}

size_t SettingErrorEnum::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.ads.googleads.v0.errors.SettingErrorEnum)
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

void SettingErrorEnum::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.ads.googleads.v0.errors.SettingErrorEnum)
  GOOGLE_DCHECK_NE(&from, this);
  const SettingErrorEnum* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const SettingErrorEnum>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.ads.googleads.v0.errors.SettingErrorEnum)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.ads.googleads.v0.errors.SettingErrorEnum)
    MergeFrom(*source);
  }
}

void SettingErrorEnum::MergeFrom(const SettingErrorEnum& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.ads.googleads.v0.errors.SettingErrorEnum)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

}

void SettingErrorEnum::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.ads.googleads.v0.errors.SettingErrorEnum)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SettingErrorEnum::CopyFrom(const SettingErrorEnum& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.ads.googleads.v0.errors.SettingErrorEnum)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SettingErrorEnum::IsInitialized() const {
  return true;
}

void SettingErrorEnum::Swap(SettingErrorEnum* other) {
  if (other == this) return;
  InternalSwap(other);
}
void SettingErrorEnum::InternalSwap(SettingErrorEnum* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata SettingErrorEnum::GetMetadata() const {
  protobuf_google_2fads_2fgoogleads_2fv0_2ferrors_2fsetting_5ferror_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_google_2fads_2fgoogleads_2fv0_2ferrors_2fsetting_5ferror_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace errors
}  // namespace v0
}  // namespace googleads
}  // namespace ads
}  // namespace google
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::google::ads::googleads::v0::errors::SettingErrorEnum* Arena::CreateMaybeMessage< ::google::ads::googleads::v0::errors::SettingErrorEnum >(Arena* arena) {
  return Arena::CreateInternal< ::google::ads::googleads::v0::errors::SettingErrorEnum >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
