// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/ads/googleads/v0/services/geo_target_constant_service.proto

#include "google/ads/googleads/v0/services/geo_target_constant_service.pb.h"

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
namespace services {
class GetGeoTargetConstantRequestDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<GetGeoTargetConstantRequest>
      _instance;
} _GetGeoTargetConstantRequest_default_instance_;
}  // namespace services
}  // namespace v0
}  // namespace googleads
}  // namespace ads
}  // namespace google
namespace protobuf_google_2fads_2fgoogleads_2fv0_2fservices_2fgeo_5ftarget_5fconstant_5fservice_2eproto {
static void InitDefaultsGetGeoTargetConstantRequest() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::google::ads::googleads::v0::services::_GetGeoTargetConstantRequest_default_instance_;
    new (ptr) ::google::ads::googleads::v0::services::GetGeoTargetConstantRequest();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::google::ads::googleads::v0::services::GetGeoTargetConstantRequest::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_GetGeoTargetConstantRequest =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsGetGeoTargetConstantRequest}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_GetGeoTargetConstantRequest.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::ads::googleads::v0::services::GetGeoTargetConstantRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::ads::googleads::v0::services::GetGeoTargetConstantRequest, resource_name_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::google::ads::googleads::v0::services::GetGeoTargetConstantRequest)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::google::ads::googleads::v0::services::_GetGeoTargetConstantRequest_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "google/ads/googleads/v0/services/geo_target_constant_service.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\nBgoogle/ads/googleads/v0/services/geo_t"
      "arget_constant_service.proto\022 google.ads"
      ".googleads.v0.services\032;google/ads/googl"
      "eads/v0/resources/geo_target_constant.pr"
      "oto\032\034google/api/annotations.proto\"4\n\033Get"
      "GeoTargetConstantRequest\022\025\n\rresource_nam"
      "e\030\001 \001(\t2\332\001\n\030GeoTargetConstantService\022\275\001\n"
      "\024GetGeoTargetConstant\022=.google.ads.googl"
      "eads.v0.services.GetGeoTargetConstantReq"
      "uest\0324.google.ads.googleads.v0.resources"
      ".GeoTargetConstant\"0\202\323\344\223\002*\022(/v0/{resourc"
      "e_name=geoTargetConstants/*}B\266\001\n$com.goo"
      "gle.ads.googleads.v0.servicesB\035GeoTarget"
      "ConstantServiceProtoP\001\242\002\003GAA\252\002 Google.Ad"
      "s.GoogleAds.V0.Services\312\002 Google\\Ads\\Goo"
      "gleAds\\V0\\Services\342\002 Google\\Ads\\GoogleAd"
      "s\\V0\\Servicesb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 661);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "google/ads/googleads/v0/services/geo_target_constant_service.proto", &protobuf_RegisterTypes);
  ::protobuf_google_2fads_2fgoogleads_2fv0_2fresources_2fgeo_5ftarget_5fconstant_2eproto::AddDescriptors();
  ::protobuf_google_2fapi_2fannotations_2eproto::AddDescriptors();
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
}  // namespace protobuf_google_2fads_2fgoogleads_2fv0_2fservices_2fgeo_5ftarget_5fconstant_5fservice_2eproto
namespace google {
namespace ads {
namespace googleads {
namespace v0 {
namespace services {

// ===================================================================

void GetGeoTargetConstantRequest::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int GetGeoTargetConstantRequest::kResourceNameFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

GetGeoTargetConstantRequest::GetGeoTargetConstantRequest()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_google_2fads_2fgoogleads_2fv0_2fservices_2fgeo_5ftarget_5fconstant_5fservice_2eproto::scc_info_GetGeoTargetConstantRequest.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.ads.googleads.v0.services.GetGeoTargetConstantRequest)
}
GetGeoTargetConstantRequest::GetGeoTargetConstantRequest(const GetGeoTargetConstantRequest& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  resource_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.resource_name().size() > 0) {
    resource_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.resource_name_);
  }
  // @@protoc_insertion_point(copy_constructor:google.ads.googleads.v0.services.GetGeoTargetConstantRequest)
}

void GetGeoTargetConstantRequest::SharedCtor() {
  resource_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

GetGeoTargetConstantRequest::~GetGeoTargetConstantRequest() {
  // @@protoc_insertion_point(destructor:google.ads.googleads.v0.services.GetGeoTargetConstantRequest)
  SharedDtor();
}

void GetGeoTargetConstantRequest::SharedDtor() {
  resource_name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void GetGeoTargetConstantRequest::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* GetGeoTargetConstantRequest::descriptor() {
  ::protobuf_google_2fads_2fgoogleads_2fv0_2fservices_2fgeo_5ftarget_5fconstant_5fservice_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_google_2fads_2fgoogleads_2fv0_2fservices_2fgeo_5ftarget_5fconstant_5fservice_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const GetGeoTargetConstantRequest& GetGeoTargetConstantRequest::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_google_2fads_2fgoogleads_2fv0_2fservices_2fgeo_5ftarget_5fconstant_5fservice_2eproto::scc_info_GetGeoTargetConstantRequest.base);
  return *internal_default_instance();
}


void GetGeoTargetConstantRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:google.ads.googleads.v0.services.GetGeoTargetConstantRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  resource_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

bool GetGeoTargetConstantRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.ads.googleads.v0.services.GetGeoTargetConstantRequest)
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
            "google.ads.googleads.v0.services.GetGeoTargetConstantRequest.resource_name"));
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
  // @@protoc_insertion_point(parse_success:google.ads.googleads.v0.services.GetGeoTargetConstantRequest)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.ads.googleads.v0.services.GetGeoTargetConstantRequest)
  return false;
#undef DO_
}

void GetGeoTargetConstantRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.ads.googleads.v0.services.GetGeoTargetConstantRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string resource_name = 1;
  if (this->resource_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->resource_name().data(), static_cast<int>(this->resource_name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.ads.googleads.v0.services.GetGeoTargetConstantRequest.resource_name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->resource_name(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:google.ads.googleads.v0.services.GetGeoTargetConstantRequest)
}

::google::protobuf::uint8* GetGeoTargetConstantRequest::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:google.ads.googleads.v0.services.GetGeoTargetConstantRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string resource_name = 1;
  if (this->resource_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->resource_name().data(), static_cast<int>(this->resource_name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.ads.googleads.v0.services.GetGeoTargetConstantRequest.resource_name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->resource_name(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.ads.googleads.v0.services.GetGeoTargetConstantRequest)
  return target;
}

size_t GetGeoTargetConstantRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.ads.googleads.v0.services.GetGeoTargetConstantRequest)
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

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void GetGeoTargetConstantRequest::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.ads.googleads.v0.services.GetGeoTargetConstantRequest)
  GOOGLE_DCHECK_NE(&from, this);
  const GetGeoTargetConstantRequest* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const GetGeoTargetConstantRequest>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.ads.googleads.v0.services.GetGeoTargetConstantRequest)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.ads.googleads.v0.services.GetGeoTargetConstantRequest)
    MergeFrom(*source);
  }
}

void GetGeoTargetConstantRequest::MergeFrom(const GetGeoTargetConstantRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.ads.googleads.v0.services.GetGeoTargetConstantRequest)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.resource_name().size() > 0) {

    resource_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.resource_name_);
  }
}

void GetGeoTargetConstantRequest::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.ads.googleads.v0.services.GetGeoTargetConstantRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void GetGeoTargetConstantRequest::CopyFrom(const GetGeoTargetConstantRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.ads.googleads.v0.services.GetGeoTargetConstantRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GetGeoTargetConstantRequest::IsInitialized() const {
  return true;
}

void GetGeoTargetConstantRequest::Swap(GetGeoTargetConstantRequest* other) {
  if (other == this) return;
  InternalSwap(other);
}
void GetGeoTargetConstantRequest::InternalSwap(GetGeoTargetConstantRequest* other) {
  using std::swap;
  resource_name_.Swap(&other->resource_name_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata GetGeoTargetConstantRequest::GetMetadata() const {
  protobuf_google_2fads_2fgoogleads_2fv0_2fservices_2fgeo_5ftarget_5fconstant_5fservice_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_google_2fads_2fgoogleads_2fv0_2fservices_2fgeo_5ftarget_5fconstant_5fservice_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace services
}  // namespace v0
}  // namespace googleads
}  // namespace ads
}  // namespace google
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::google::ads::googleads::v0::services::GetGeoTargetConstantRequest* Arena::CreateMaybeMessage< ::google::ads::googleads::v0::services::GetGeoTargetConstantRequest >(Arena* arena) {
  return Arena::CreateInternal< ::google::ads::googleads::v0::services::GetGeoTargetConstantRequest >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
