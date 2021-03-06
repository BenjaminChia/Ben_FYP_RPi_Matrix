// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/ads/googleads/v0/resources/geo_target_constant.proto

#include "google/ads/googleads/v0/resources/geo_target_constant.pb.h"

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

namespace protobuf_google_2fprotobuf_2fwrappers_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_google_2fprotobuf_2fwrappers_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_Int64Value;
extern PROTOBUF_INTERNAL_EXPORT_protobuf_google_2fprotobuf_2fwrappers_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_StringValue;
}  // namespace protobuf_google_2fprotobuf_2fwrappers_2eproto
namespace google {
namespace ads {
namespace googleads {
namespace v0 {
namespace resources {
class GeoTargetConstantDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<GeoTargetConstant>
      _instance;
} _GeoTargetConstant_default_instance_;
}  // namespace resources
}  // namespace v0
}  // namespace googleads
}  // namespace ads
}  // namespace google
namespace protobuf_google_2fads_2fgoogleads_2fv0_2fresources_2fgeo_5ftarget_5fconstant_2eproto {
static void InitDefaultsGeoTargetConstant() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::google::ads::googleads::v0::resources::_GeoTargetConstant_default_instance_;
    new (ptr) ::google::ads::googleads::v0::resources::GeoTargetConstant();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::google::ads::googleads::v0::resources::GeoTargetConstant::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<2> scc_info_GeoTargetConstant =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 2, InitDefaultsGeoTargetConstant}, {
      &protobuf_google_2fprotobuf_2fwrappers_2eproto::scc_info_Int64Value.base,
      &protobuf_google_2fprotobuf_2fwrappers_2eproto::scc_info_StringValue.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_GeoTargetConstant.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::ads::googleads::v0::resources::GeoTargetConstant, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::ads::googleads::v0::resources::GeoTargetConstant, resource_name_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::ads::googleads::v0::resources::GeoTargetConstant, id_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::ads::googleads::v0::resources::GeoTargetConstant, name_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::ads::googleads::v0::resources::GeoTargetConstant, country_code_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::ads::googleads::v0::resources::GeoTargetConstant, target_type_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::google::ads::googleads::v0::resources::GeoTargetConstant)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::google::ads::googleads::v0::resources::_GeoTargetConstant_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "google/ads/googleads/v0/resources/geo_target_constant.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n;google/ads/googleads/v0/resources/geo_"
      "target_constant.proto\022!google.ads.google"
      "ads.v0.resources\032\036google/protobuf/wrappe"
      "rs.proto\"\346\001\n\021GeoTargetConstant\022\025\n\rresour"
      "ce_name\030\001 \001(\t\022\'\n\002id\030\003 \001(\0132\033.google.proto"
      "buf.Int64Value\022*\n\004name\030\004 \001(\0132\034.google.pr"
      "otobuf.StringValue\0222\n\014country_code\030\005 \001(\013"
      "2\034.google.protobuf.StringValue\0221\n\013target"
      "_type\030\006 \001(\0132\034.google.protobuf.StringValu"
      "eB\263\001\n%com.google.ads.googleads.v0.resour"
      "cesB\026GeoTargetConstantProtoP\001\242\002\003GAA\252\002!Go"
      "ogle.Ads.GoogleAds.V0.Resources\312\002!Google"
      "\\Ads\\GoogleAds\\V0\\Resources\342\002!Google\\Ads"
      "\\GoogleAds\\V0\\Resourcesb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 551);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "google/ads/googleads/v0/resources/geo_target_constant.proto", &protobuf_RegisterTypes);
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
}  // namespace protobuf_google_2fads_2fgoogleads_2fv0_2fresources_2fgeo_5ftarget_5fconstant_2eproto
namespace google {
namespace ads {
namespace googleads {
namespace v0 {
namespace resources {

// ===================================================================

void GeoTargetConstant::InitAsDefaultInstance() {
  ::google::ads::googleads::v0::resources::_GeoTargetConstant_default_instance_._instance.get_mutable()->id_ = const_cast< ::google::protobuf::Int64Value*>(
      ::google::protobuf::Int64Value::internal_default_instance());
  ::google::ads::googleads::v0::resources::_GeoTargetConstant_default_instance_._instance.get_mutable()->name_ = const_cast< ::google::protobuf::StringValue*>(
      ::google::protobuf::StringValue::internal_default_instance());
  ::google::ads::googleads::v0::resources::_GeoTargetConstant_default_instance_._instance.get_mutable()->country_code_ = const_cast< ::google::protobuf::StringValue*>(
      ::google::protobuf::StringValue::internal_default_instance());
  ::google::ads::googleads::v0::resources::_GeoTargetConstant_default_instance_._instance.get_mutable()->target_type_ = const_cast< ::google::protobuf::StringValue*>(
      ::google::protobuf::StringValue::internal_default_instance());
}
void GeoTargetConstant::clear_id() {
  if (GetArenaNoVirtual() == NULL && id_ != NULL) {
    delete id_;
  }
  id_ = NULL;
}
void GeoTargetConstant::clear_name() {
  if (GetArenaNoVirtual() == NULL && name_ != NULL) {
    delete name_;
  }
  name_ = NULL;
}
void GeoTargetConstant::clear_country_code() {
  if (GetArenaNoVirtual() == NULL && country_code_ != NULL) {
    delete country_code_;
  }
  country_code_ = NULL;
}
void GeoTargetConstant::clear_target_type() {
  if (GetArenaNoVirtual() == NULL && target_type_ != NULL) {
    delete target_type_;
  }
  target_type_ = NULL;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int GeoTargetConstant::kResourceNameFieldNumber;
const int GeoTargetConstant::kIdFieldNumber;
const int GeoTargetConstant::kNameFieldNumber;
const int GeoTargetConstant::kCountryCodeFieldNumber;
const int GeoTargetConstant::kTargetTypeFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

GeoTargetConstant::GeoTargetConstant()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_google_2fads_2fgoogleads_2fv0_2fresources_2fgeo_5ftarget_5fconstant_2eproto::scc_info_GeoTargetConstant.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.ads.googleads.v0.resources.GeoTargetConstant)
}
GeoTargetConstant::GeoTargetConstant(const GeoTargetConstant& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  resource_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.resource_name().size() > 0) {
    resource_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.resource_name_);
  }
  if (from.has_id()) {
    id_ = new ::google::protobuf::Int64Value(*from.id_);
  } else {
    id_ = NULL;
  }
  if (from.has_name()) {
    name_ = new ::google::protobuf::StringValue(*from.name_);
  } else {
    name_ = NULL;
  }
  if (from.has_country_code()) {
    country_code_ = new ::google::protobuf::StringValue(*from.country_code_);
  } else {
    country_code_ = NULL;
  }
  if (from.has_target_type()) {
    target_type_ = new ::google::protobuf::StringValue(*from.target_type_);
  } else {
    target_type_ = NULL;
  }
  // @@protoc_insertion_point(copy_constructor:google.ads.googleads.v0.resources.GeoTargetConstant)
}

void GeoTargetConstant::SharedCtor() {
  resource_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&id_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&target_type_) -
      reinterpret_cast<char*>(&id_)) + sizeof(target_type_));
}

GeoTargetConstant::~GeoTargetConstant() {
  // @@protoc_insertion_point(destructor:google.ads.googleads.v0.resources.GeoTargetConstant)
  SharedDtor();
}

void GeoTargetConstant::SharedDtor() {
  resource_name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete id_;
  if (this != internal_default_instance()) delete name_;
  if (this != internal_default_instance()) delete country_code_;
  if (this != internal_default_instance()) delete target_type_;
}

void GeoTargetConstant::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* GeoTargetConstant::descriptor() {
  ::protobuf_google_2fads_2fgoogleads_2fv0_2fresources_2fgeo_5ftarget_5fconstant_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_google_2fads_2fgoogleads_2fv0_2fresources_2fgeo_5ftarget_5fconstant_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const GeoTargetConstant& GeoTargetConstant::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_google_2fads_2fgoogleads_2fv0_2fresources_2fgeo_5ftarget_5fconstant_2eproto::scc_info_GeoTargetConstant.base);
  return *internal_default_instance();
}


void GeoTargetConstant::Clear() {
// @@protoc_insertion_point(message_clear_start:google.ads.googleads.v0.resources.GeoTargetConstant)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  resource_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (GetArenaNoVirtual() == NULL && id_ != NULL) {
    delete id_;
  }
  id_ = NULL;
  if (GetArenaNoVirtual() == NULL && name_ != NULL) {
    delete name_;
  }
  name_ = NULL;
  if (GetArenaNoVirtual() == NULL && country_code_ != NULL) {
    delete country_code_;
  }
  country_code_ = NULL;
  if (GetArenaNoVirtual() == NULL && target_type_ != NULL) {
    delete target_type_;
  }
  target_type_ = NULL;
  _internal_metadata_.Clear();
}

bool GeoTargetConstant::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.ads.googleads.v0.resources.GeoTargetConstant)
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
            "google.ads.googleads.v0.resources.GeoTargetConstant.resource_name"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .google.protobuf.Int64Value id = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_id()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .google.protobuf.StringValue name = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_name()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .google.protobuf.StringValue country_code = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u /* 42 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_country_code()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .google.protobuf.StringValue target_type = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(50u /* 50 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_target_type()));
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
  // @@protoc_insertion_point(parse_success:google.ads.googleads.v0.resources.GeoTargetConstant)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.ads.googleads.v0.resources.GeoTargetConstant)
  return false;
#undef DO_
}

void GeoTargetConstant::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.ads.googleads.v0.resources.GeoTargetConstant)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string resource_name = 1;
  if (this->resource_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->resource_name().data(), static_cast<int>(this->resource_name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.ads.googleads.v0.resources.GeoTargetConstant.resource_name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->resource_name(), output);
  }

  // .google.protobuf.Int64Value id = 3;
  if (this->has_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, this->_internal_id(), output);
  }

  // .google.protobuf.StringValue name = 4;
  if (this->has_name()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, this->_internal_name(), output);
  }

  // .google.protobuf.StringValue country_code = 5;
  if (this->has_country_code()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      5, this->_internal_country_code(), output);
  }

  // .google.protobuf.StringValue target_type = 6;
  if (this->has_target_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      6, this->_internal_target_type(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:google.ads.googleads.v0.resources.GeoTargetConstant)
}

::google::protobuf::uint8* GeoTargetConstant::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:google.ads.googleads.v0.resources.GeoTargetConstant)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string resource_name = 1;
  if (this->resource_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->resource_name().data(), static_cast<int>(this->resource_name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.ads.googleads.v0.resources.GeoTargetConstant.resource_name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->resource_name(), target);
  }

  // .google.protobuf.Int64Value id = 3;
  if (this->has_id()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        3, this->_internal_id(), deterministic, target);
  }

  // .google.protobuf.StringValue name = 4;
  if (this->has_name()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        4, this->_internal_name(), deterministic, target);
  }

  // .google.protobuf.StringValue country_code = 5;
  if (this->has_country_code()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        5, this->_internal_country_code(), deterministic, target);
  }

  // .google.protobuf.StringValue target_type = 6;
  if (this->has_target_type()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        6, this->_internal_target_type(), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.ads.googleads.v0.resources.GeoTargetConstant)
  return target;
}

size_t GeoTargetConstant::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.ads.googleads.v0.resources.GeoTargetConstant)
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

  // .google.protobuf.Int64Value id = 3;
  if (this->has_id()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *id_);
  }

  // .google.protobuf.StringValue name = 4;
  if (this->has_name()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *name_);
  }

  // .google.protobuf.StringValue country_code = 5;
  if (this->has_country_code()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *country_code_);
  }

  // .google.protobuf.StringValue target_type = 6;
  if (this->has_target_type()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *target_type_);
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void GeoTargetConstant::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.ads.googleads.v0.resources.GeoTargetConstant)
  GOOGLE_DCHECK_NE(&from, this);
  const GeoTargetConstant* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const GeoTargetConstant>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.ads.googleads.v0.resources.GeoTargetConstant)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.ads.googleads.v0.resources.GeoTargetConstant)
    MergeFrom(*source);
  }
}

void GeoTargetConstant::MergeFrom(const GeoTargetConstant& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.ads.googleads.v0.resources.GeoTargetConstant)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.resource_name().size() > 0) {

    resource_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.resource_name_);
  }
  if (from.has_id()) {
    mutable_id()->::google::protobuf::Int64Value::MergeFrom(from.id());
  }
  if (from.has_name()) {
    mutable_name()->::google::protobuf::StringValue::MergeFrom(from.name());
  }
  if (from.has_country_code()) {
    mutable_country_code()->::google::protobuf::StringValue::MergeFrom(from.country_code());
  }
  if (from.has_target_type()) {
    mutable_target_type()->::google::protobuf::StringValue::MergeFrom(from.target_type());
  }
}

void GeoTargetConstant::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.ads.googleads.v0.resources.GeoTargetConstant)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void GeoTargetConstant::CopyFrom(const GeoTargetConstant& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.ads.googleads.v0.resources.GeoTargetConstant)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GeoTargetConstant::IsInitialized() const {
  return true;
}

void GeoTargetConstant::Swap(GeoTargetConstant* other) {
  if (other == this) return;
  InternalSwap(other);
}
void GeoTargetConstant::InternalSwap(GeoTargetConstant* other) {
  using std::swap;
  resource_name_.Swap(&other->resource_name_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(id_, other->id_);
  swap(name_, other->name_);
  swap(country_code_, other->country_code_);
  swap(target_type_, other->target_type_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata GeoTargetConstant::GetMetadata() const {
  protobuf_google_2fads_2fgoogleads_2fv0_2fresources_2fgeo_5ftarget_5fconstant_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_google_2fads_2fgoogleads_2fv0_2fresources_2fgeo_5ftarget_5fconstant_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace resources
}  // namespace v0
}  // namespace googleads
}  // namespace ads
}  // namespace google
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::google::ads::googleads::v0::resources::GeoTargetConstant* Arena::CreateMaybeMessage< ::google::ads::googleads::v0::resources::GeoTargetConstant >(Arena* arena) {
  return Arena::CreateInternal< ::google::ads::googleads::v0::resources::GeoTargetConstant >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
