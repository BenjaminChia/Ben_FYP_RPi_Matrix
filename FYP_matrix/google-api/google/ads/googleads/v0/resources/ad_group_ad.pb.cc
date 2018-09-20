// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/ads/googleads/v0/resources/ad_group_ad.proto

#include "google/ads/googleads/v0/resources/ad_group_ad.pb.h"

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

namespace protobuf_google_2fads_2fgoogleads_2fv0_2fcommon_2fad_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_google_2fads_2fgoogleads_2fv0_2fcommon_2fad_2eproto ::google::protobuf::internal::SCCInfo<10> scc_info_Ad;
}  // namespace protobuf_google_2fads_2fgoogleads_2fv0_2fcommon_2fad_2eproto
namespace protobuf_google_2fprotobuf_2fwrappers_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_google_2fprotobuf_2fwrappers_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_StringValue;
}  // namespace protobuf_google_2fprotobuf_2fwrappers_2eproto
namespace google {
namespace ads {
namespace googleads {
namespace v0 {
namespace resources {
class AdGroupAdDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<AdGroupAd>
      _instance;
} _AdGroupAd_default_instance_;
}  // namespace resources
}  // namespace v0
}  // namespace googleads
}  // namespace ads
}  // namespace google
namespace protobuf_google_2fads_2fgoogleads_2fv0_2fresources_2fad_5fgroup_5fad_2eproto {
static void InitDefaultsAdGroupAd() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::google::ads::googleads::v0::resources::_AdGroupAd_default_instance_;
    new (ptr) ::google::ads::googleads::v0::resources::AdGroupAd();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::google::ads::googleads::v0::resources::AdGroupAd::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<2> scc_info_AdGroupAd =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 2, InitDefaultsAdGroupAd}, {
      &protobuf_google_2fprotobuf_2fwrappers_2eproto::scc_info_StringValue.base,
      &protobuf_google_2fads_2fgoogleads_2fv0_2fcommon_2fad_2eproto::scc_info_Ad.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_AdGroupAd.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::ads::googleads::v0::resources::AdGroupAd, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::ads::googleads::v0::resources::AdGroupAd, resource_name_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::ads::googleads::v0::resources::AdGroupAd, status_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::ads::googleads::v0::resources::AdGroupAd, ad_group_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::ads::googleads::v0::resources::AdGroupAd, ad_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::google::ads::googleads::v0::resources::AdGroupAd)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::google::ads::googleads::v0::resources::_AdGroupAd_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "google/ads/googleads/v0/resources/ad_group_ad.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, NULL, NULL);
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
      "\n3google/ads/googleads/v0/resources/ad_g"
      "roup_ad.proto\022!google.ads.googleads.v0.r"
      "esources\032\'google/ads/googleads/v0/common"
      "/ad.proto\0326google/ads/googleads/v0/enums"
      "/ad_group_ad_status.proto\032\036google/protob"
      "uf/wrappers.proto\"\326\001\n\tAdGroupAd\022\025\n\rresou"
      "rce_name\030\001 \001(\t\022R\n\006status\030\003 \001(\0162B.google."
      "ads.googleads.v0.enums.AdGroupAdStatusEn"
      "um.AdGroupAdStatus\022.\n\010ad_group\030\004 \001(\0132\034.g"
      "oogle.protobuf.StringValue\022.\n\002ad\030\005 \001(\0132\""
      ".google.ads.googleads.v0.common.AdB\253\001\n%c"
      "om.google.ads.googleads.v0.resourcesB\016Ad"
      "GroupAdProtoP\001\242\002\003GAA\252\002!Google.Ads.Google"
      "Ads.V0.Resources\312\002!Google\\Ads\\GoogleAds\\"
      "V0\\Resources\342\002!Google\\Ads\\GoogleAds\\V0\\R"
      "esourcesb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 616);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "google/ads/googleads/v0/resources/ad_group_ad.proto", &protobuf_RegisterTypes);
  ::protobuf_google_2fads_2fgoogleads_2fv0_2fcommon_2fad_2eproto::AddDescriptors();
  ::protobuf_google_2fads_2fgoogleads_2fv0_2fenums_2fad_5fgroup_5fad_5fstatus_2eproto::AddDescriptors();
  ::protobuf_google_2fprotobuf_2fwrappers_2eproto::AddDescriptors();
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
}  // namespace protobuf_google_2fads_2fgoogleads_2fv0_2fresources_2fad_5fgroup_5fad_2eproto
namespace google {
namespace ads {
namespace googleads {
namespace v0 {
namespace resources {

// ===================================================================

void AdGroupAd::InitAsDefaultInstance() {
  ::google::ads::googleads::v0::resources::_AdGroupAd_default_instance_._instance.get_mutable()->ad_group_ = const_cast< ::google::protobuf::StringValue*>(
      ::google::protobuf::StringValue::internal_default_instance());
  ::google::ads::googleads::v0::resources::_AdGroupAd_default_instance_._instance.get_mutable()->ad_ = const_cast< ::google::ads::googleads::v0::common::Ad*>(
      ::google::ads::googleads::v0::common::Ad::internal_default_instance());
}
void AdGroupAd::clear_ad_group() {
  if (GetArenaNoVirtual() == NULL && ad_group_ != NULL) {
    delete ad_group_;
  }
  ad_group_ = NULL;
}
void AdGroupAd::clear_ad() {
  if (GetArenaNoVirtual() == NULL && ad_ != NULL) {
    delete ad_;
  }
  ad_ = NULL;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int AdGroupAd::kResourceNameFieldNumber;
const int AdGroupAd::kStatusFieldNumber;
const int AdGroupAd::kAdGroupFieldNumber;
const int AdGroupAd::kAdFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

AdGroupAd::AdGroupAd()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_google_2fads_2fgoogleads_2fv0_2fresources_2fad_5fgroup_5fad_2eproto::scc_info_AdGroupAd.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.ads.googleads.v0.resources.AdGroupAd)
}
AdGroupAd::AdGroupAd(const AdGroupAd& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  resource_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.resource_name().size() > 0) {
    resource_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.resource_name_);
  }
  if (from.has_ad_group()) {
    ad_group_ = new ::google::protobuf::StringValue(*from.ad_group_);
  } else {
    ad_group_ = NULL;
  }
  if (from.has_ad()) {
    ad_ = new ::google::ads::googleads::v0::common::Ad(*from.ad_);
  } else {
    ad_ = NULL;
  }
  status_ = from.status_;
  // @@protoc_insertion_point(copy_constructor:google.ads.googleads.v0.resources.AdGroupAd)
}

void AdGroupAd::SharedCtor() {
  resource_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&ad_group_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&status_) -
      reinterpret_cast<char*>(&ad_group_)) + sizeof(status_));
}

AdGroupAd::~AdGroupAd() {
  // @@protoc_insertion_point(destructor:google.ads.googleads.v0.resources.AdGroupAd)
  SharedDtor();
}

void AdGroupAd::SharedDtor() {
  resource_name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete ad_group_;
  if (this != internal_default_instance()) delete ad_;
}

void AdGroupAd::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* AdGroupAd::descriptor() {
  ::protobuf_google_2fads_2fgoogleads_2fv0_2fresources_2fad_5fgroup_5fad_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_google_2fads_2fgoogleads_2fv0_2fresources_2fad_5fgroup_5fad_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const AdGroupAd& AdGroupAd::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_google_2fads_2fgoogleads_2fv0_2fresources_2fad_5fgroup_5fad_2eproto::scc_info_AdGroupAd.base);
  return *internal_default_instance();
}


void AdGroupAd::Clear() {
// @@protoc_insertion_point(message_clear_start:google.ads.googleads.v0.resources.AdGroupAd)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  resource_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (GetArenaNoVirtual() == NULL && ad_group_ != NULL) {
    delete ad_group_;
  }
  ad_group_ = NULL;
  if (GetArenaNoVirtual() == NULL && ad_ != NULL) {
    delete ad_;
  }
  ad_ = NULL;
  status_ = 0;
  _internal_metadata_.Clear();
}

bool AdGroupAd::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.ads.googleads.v0.resources.AdGroupAd)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string resource_name = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_resource_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->resource_name().data(), static_cast<int>(this->resource_name().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "google.ads.googleads.v0.resources.AdGroupAd.resource_name"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .google.ads.googleads.v0.enums.AdGroupAdStatusEnum.AdGroupAdStatus status = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_status(static_cast< ::google::ads::googleads::v0::enums::AdGroupAdStatusEnum_AdGroupAdStatus >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .google.protobuf.StringValue ad_group = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_ad_group()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .google.ads.googleads.v0.common.Ad ad = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u /* 42 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_ad()));
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
  // @@protoc_insertion_point(parse_success:google.ads.googleads.v0.resources.AdGroupAd)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.ads.googleads.v0.resources.AdGroupAd)
  return false;
#undef DO_
}

void AdGroupAd::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.ads.googleads.v0.resources.AdGroupAd)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string resource_name = 1;
  if (this->resource_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->resource_name().data(), static_cast<int>(this->resource_name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.ads.googleads.v0.resources.AdGroupAd.resource_name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->resource_name(), output);
  }

  // .google.ads.googleads.v0.enums.AdGroupAdStatusEnum.AdGroupAdStatus status = 3;
  if (this->status() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      3, this->status(), output);
  }

  // .google.protobuf.StringValue ad_group = 4;
  if (this->has_ad_group()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, this->_internal_ad_group(), output);
  }

  // .google.ads.googleads.v0.common.Ad ad = 5;
  if (this->has_ad()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      5, this->_internal_ad(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:google.ads.googleads.v0.resources.AdGroupAd)
}

::google::protobuf::uint8* AdGroupAd::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:google.ads.googleads.v0.resources.AdGroupAd)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string resource_name = 1;
  if (this->resource_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->resource_name().data(), static_cast<int>(this->resource_name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.ads.googleads.v0.resources.AdGroupAd.resource_name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->resource_name(), target);
  }

  // .google.ads.googleads.v0.enums.AdGroupAdStatusEnum.AdGroupAdStatus status = 3;
  if (this->status() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      3, this->status(), target);
  }

  // .google.protobuf.StringValue ad_group = 4;
  if (this->has_ad_group()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        4, this->_internal_ad_group(), deterministic, target);
  }

  // .google.ads.googleads.v0.common.Ad ad = 5;
  if (this->has_ad()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        5, this->_internal_ad(), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.ads.googleads.v0.resources.AdGroupAd)
  return target;
}

size_t AdGroupAd::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.ads.googleads.v0.resources.AdGroupAd)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string resource_name = 1;
  if (this->resource_name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->resource_name());
  }

  // .google.protobuf.StringValue ad_group = 4;
  if (this->has_ad_group()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *ad_group_);
  }

  // .google.ads.googleads.v0.common.Ad ad = 5;
  if (this->has_ad()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *ad_);
  }

  // .google.ads.googleads.v0.enums.AdGroupAdStatusEnum.AdGroupAdStatus status = 3;
  if (this->status() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->status());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void AdGroupAd::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.ads.googleads.v0.resources.AdGroupAd)
  GOOGLE_DCHECK_NE(&from, this);
  const AdGroupAd* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const AdGroupAd>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.ads.googleads.v0.resources.AdGroupAd)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.ads.googleads.v0.resources.AdGroupAd)
    MergeFrom(*source);
  }
}

void AdGroupAd::MergeFrom(const AdGroupAd& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.ads.googleads.v0.resources.AdGroupAd)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.resource_name().size() > 0) {

    resource_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.resource_name_);
  }
  if (from.has_ad_group()) {
    mutable_ad_group()->::google::protobuf::StringValue::MergeFrom(from.ad_group());
  }
  if (from.has_ad()) {
    mutable_ad()->::google::ads::googleads::v0::common::Ad::MergeFrom(from.ad());
  }
  if (from.status() != 0) {
    set_status(from.status());
  }
}

void AdGroupAd::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.ads.googleads.v0.resources.AdGroupAd)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void AdGroupAd::CopyFrom(const AdGroupAd& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.ads.googleads.v0.resources.AdGroupAd)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AdGroupAd::IsInitialized() const {
  return true;
}

void AdGroupAd::Swap(AdGroupAd* other) {
  if (other == this) return;
  InternalSwap(other);
}
void AdGroupAd::InternalSwap(AdGroupAd* other) {
  using std::swap;
  resource_name_.Swap(&other->resource_name_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(ad_group_, other->ad_group_);
  swap(ad_, other->ad_);
  swap(status_, other->status_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata AdGroupAd::GetMetadata() const {
  protobuf_google_2fads_2fgoogleads_2fv0_2fresources_2fad_5fgroup_5fad_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_google_2fads_2fgoogleads_2fv0_2fresources_2fad_5fgroup_5fad_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace resources
}  // namespace v0
}  // namespace googleads
}  // namespace ads
}  // namespace google
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::google::ads::googleads::v0::resources::AdGroupAd* Arena::CreateMaybeMessage< ::google::ads::googleads::v0::resources::AdGroupAd >(Arena* arena) {
  return Arena::CreateInternal< ::google::ads::googleads::v0::resources::AdGroupAd >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)