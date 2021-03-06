// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/ads/googleads/v0/resources/keyword_view.proto

#include "google/ads/googleads/v0/resources/keyword_view.pb.h"

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
namespace resources {
class KeywordViewDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<KeywordView>
      _instance;
} _KeywordView_default_instance_;
}  // namespace resources
}  // namespace v0
}  // namespace googleads
}  // namespace ads
}  // namespace google
namespace protobuf_google_2fads_2fgoogleads_2fv0_2fresources_2fkeyword_5fview_2eproto {
static void InitDefaultsKeywordView() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::google::ads::googleads::v0::resources::_KeywordView_default_instance_;
    new (ptr) ::google::ads::googleads::v0::resources::KeywordView();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::google::ads::googleads::v0::resources::KeywordView::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_KeywordView =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsKeywordView}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_KeywordView.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::ads::googleads::v0::resources::KeywordView, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::ads::googleads::v0::resources::KeywordView, resource_name_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::google::ads::googleads::v0::resources::KeywordView)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::google::ads::googleads::v0::resources::_KeywordView_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "google/ads/googleads/v0/resources/keyword_view.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n4google/ads/googleads/v0/resources/keyw"
      "ord_view.proto\022!google.ads.googleads.v0."
      "resources\"$\n\013KeywordView\022\025\n\rresource_nam"
      "e\030\001 \001(\tB\255\001\n%com.google.ads.googleads.v0."
      "resourcesB\020KeywordViewProtoP\001\242\002\003GAA\252\002!Go"
      "ogle.Ads.GoogleAds.V0.Resources\312\002!Google"
      "\\Ads\\GoogleAds\\V0\\Resources\342\002!Google\\Ads"
      "\\GoogleAds\\V0\\Resourcesb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 311);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "google/ads/googleads/v0/resources/keyword_view.proto", &protobuf_RegisterTypes);
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
}  // namespace protobuf_google_2fads_2fgoogleads_2fv0_2fresources_2fkeyword_5fview_2eproto
namespace google {
namespace ads {
namespace googleads {
namespace v0 {
namespace resources {

// ===================================================================

void KeywordView::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int KeywordView::kResourceNameFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

KeywordView::KeywordView()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_google_2fads_2fgoogleads_2fv0_2fresources_2fkeyword_5fview_2eproto::scc_info_KeywordView.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.ads.googleads.v0.resources.KeywordView)
}
KeywordView::KeywordView(const KeywordView& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  resource_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.resource_name().size() > 0) {
    resource_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.resource_name_);
  }
  // @@protoc_insertion_point(copy_constructor:google.ads.googleads.v0.resources.KeywordView)
}

void KeywordView::SharedCtor() {
  resource_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

KeywordView::~KeywordView() {
  // @@protoc_insertion_point(destructor:google.ads.googleads.v0.resources.KeywordView)
  SharedDtor();
}

void KeywordView::SharedDtor() {
  resource_name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void KeywordView::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* KeywordView::descriptor() {
  ::protobuf_google_2fads_2fgoogleads_2fv0_2fresources_2fkeyword_5fview_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_google_2fads_2fgoogleads_2fv0_2fresources_2fkeyword_5fview_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const KeywordView& KeywordView::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_google_2fads_2fgoogleads_2fv0_2fresources_2fkeyword_5fview_2eproto::scc_info_KeywordView.base);
  return *internal_default_instance();
}


void KeywordView::Clear() {
// @@protoc_insertion_point(message_clear_start:google.ads.googleads.v0.resources.KeywordView)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  resource_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

bool KeywordView::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.ads.googleads.v0.resources.KeywordView)
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
            "google.ads.googleads.v0.resources.KeywordView.resource_name"));
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
  // @@protoc_insertion_point(parse_success:google.ads.googleads.v0.resources.KeywordView)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.ads.googleads.v0.resources.KeywordView)
  return false;
#undef DO_
}

void KeywordView::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.ads.googleads.v0.resources.KeywordView)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string resource_name = 1;
  if (this->resource_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->resource_name().data(), static_cast<int>(this->resource_name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.ads.googleads.v0.resources.KeywordView.resource_name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->resource_name(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:google.ads.googleads.v0.resources.KeywordView)
}

::google::protobuf::uint8* KeywordView::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:google.ads.googleads.v0.resources.KeywordView)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string resource_name = 1;
  if (this->resource_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->resource_name().data(), static_cast<int>(this->resource_name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.ads.googleads.v0.resources.KeywordView.resource_name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->resource_name(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.ads.googleads.v0.resources.KeywordView)
  return target;
}

size_t KeywordView::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.ads.googleads.v0.resources.KeywordView)
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

void KeywordView::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.ads.googleads.v0.resources.KeywordView)
  GOOGLE_DCHECK_NE(&from, this);
  const KeywordView* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const KeywordView>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.ads.googleads.v0.resources.KeywordView)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.ads.googleads.v0.resources.KeywordView)
    MergeFrom(*source);
  }
}

void KeywordView::MergeFrom(const KeywordView& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.ads.googleads.v0.resources.KeywordView)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.resource_name().size() > 0) {

    resource_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.resource_name_);
  }
}

void KeywordView::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.ads.googleads.v0.resources.KeywordView)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void KeywordView::CopyFrom(const KeywordView& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.ads.googleads.v0.resources.KeywordView)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool KeywordView::IsInitialized() const {
  return true;
}

void KeywordView::Swap(KeywordView* other) {
  if (other == this) return;
  InternalSwap(other);
}
void KeywordView::InternalSwap(KeywordView* other) {
  using std::swap;
  resource_name_.Swap(&other->resource_name_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata KeywordView::GetMetadata() const {
  protobuf_google_2fads_2fgoogleads_2fv0_2fresources_2fkeyword_5fview_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_google_2fads_2fgoogleads_2fv0_2fresources_2fkeyword_5fview_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace resources
}  // namespace v0
}  // namespace googleads
}  // namespace ads
}  // namespace google
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::google::ads::googleads::v0::resources::KeywordView* Arena::CreateMaybeMessage< ::google::ads::googleads::v0::resources::KeywordView >(Arena* arena) {
  return Arena::CreateInternal< ::google::ads::googleads::v0::resources::KeywordView >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
