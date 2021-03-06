// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/devtools/containeranalysis/v1beta1/common/common.proto

#include "google/devtools/containeranalysis/v1beta1/common/common.pb.h"

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

namespace grafeas {
namespace v1beta1 {
class RelatedUrlDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<RelatedUrl>
      _instance;
} _RelatedUrl_default_instance_;
}  // namespace v1beta1
}  // namespace grafeas
namespace protobuf_google_2fdevtools_2fcontaineranalysis_2fv1beta1_2fcommon_2fcommon_2eproto {
static void InitDefaultsRelatedUrl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::grafeas::v1beta1::_RelatedUrl_default_instance_;
    new (ptr) ::grafeas::v1beta1::RelatedUrl();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::grafeas::v1beta1::RelatedUrl::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_RelatedUrl =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsRelatedUrl}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_RelatedUrl.base);
}

::google::protobuf::Metadata file_level_metadata[1];
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::grafeas::v1beta1::RelatedUrl, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::grafeas::v1beta1::RelatedUrl, url_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::grafeas::v1beta1::RelatedUrl, label_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::grafeas::v1beta1::RelatedUrl)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::grafeas::v1beta1::_RelatedUrl_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "google/devtools/containeranalysis/v1beta1/common/common.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n=google/devtools/containeranalysis/v1be"
      "ta1/common/common.proto\022\017grafeas.v1beta1"
      "\"(\n\nRelatedUrl\022\013\n\003url\030\001 \001(\t\022\r\n\005label\030\002 \001"
      "(\t*\213\001\n\010NoteKind\022\031\n\025NOTE_KIND_UNSPECIFIED"
      "\020\000\022\021\n\rVULNERABILITY\020\001\022\t\n\005BUILD\020\002\022\t\n\005IMAG"
      "E\020\003\022\013\n\007PACKAGE\020\004\022\016\n\nDEPLOYMENT\020\005\022\r\n\tDISC"
      "OVERY\020\006\022\017\n\013ATTESTATION\020\007B{\n\031io.grafeas.v"
      "1beta1.commonP\001ZVgoogle.golang.org/genpr"
      "oto/googleapis/devtools/containeranalysi"
      "s/v1beta1/common;common\242\002\003GRAb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 397);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "google/devtools/containeranalysis/v1beta1/common/common.proto", &protobuf_RegisterTypes);
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
}  // namespace protobuf_google_2fdevtools_2fcontaineranalysis_2fv1beta1_2fcommon_2fcommon_2eproto
namespace grafeas {
namespace v1beta1 {
const ::google::protobuf::EnumDescriptor* NoteKind_descriptor() {
  protobuf_google_2fdevtools_2fcontaineranalysis_2fv1beta1_2fcommon_2fcommon_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_google_2fdevtools_2fcontaineranalysis_2fv1beta1_2fcommon_2fcommon_2eproto::file_level_enum_descriptors[0];
}
bool NoteKind_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
      return true;
    default:
      return false;
  }
}


// ===================================================================

void RelatedUrl::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int RelatedUrl::kUrlFieldNumber;
const int RelatedUrl::kLabelFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

RelatedUrl::RelatedUrl()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_google_2fdevtools_2fcontaineranalysis_2fv1beta1_2fcommon_2fcommon_2eproto::scc_info_RelatedUrl.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:grafeas.v1beta1.RelatedUrl)
}
RelatedUrl::RelatedUrl(const RelatedUrl& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  url_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.url().size() > 0) {
    url_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.url_);
  }
  label_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.label().size() > 0) {
    label_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.label_);
  }
  // @@protoc_insertion_point(copy_constructor:grafeas.v1beta1.RelatedUrl)
}

void RelatedUrl::SharedCtor() {
  url_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  label_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

RelatedUrl::~RelatedUrl() {
  // @@protoc_insertion_point(destructor:grafeas.v1beta1.RelatedUrl)
  SharedDtor();
}

void RelatedUrl::SharedDtor() {
  url_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  label_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void RelatedUrl::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* RelatedUrl::descriptor() {
  ::protobuf_google_2fdevtools_2fcontaineranalysis_2fv1beta1_2fcommon_2fcommon_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_google_2fdevtools_2fcontaineranalysis_2fv1beta1_2fcommon_2fcommon_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const RelatedUrl& RelatedUrl::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_google_2fdevtools_2fcontaineranalysis_2fv1beta1_2fcommon_2fcommon_2eproto::scc_info_RelatedUrl.base);
  return *internal_default_instance();
}


void RelatedUrl::Clear() {
// @@protoc_insertion_point(message_clear_start:grafeas.v1beta1.RelatedUrl)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  url_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  label_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

bool RelatedUrl::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:grafeas.v1beta1.RelatedUrl)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string url = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_url()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->url().data(), static_cast<int>(this->url().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "grafeas.v1beta1.RelatedUrl.url"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string label = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_label()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->label().data(), static_cast<int>(this->label().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "grafeas.v1beta1.RelatedUrl.label"));
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
  // @@protoc_insertion_point(parse_success:grafeas.v1beta1.RelatedUrl)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:grafeas.v1beta1.RelatedUrl)
  return false;
#undef DO_
}

void RelatedUrl::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:grafeas.v1beta1.RelatedUrl)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string url = 1;
  if (this->url().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->url().data(), static_cast<int>(this->url().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "grafeas.v1beta1.RelatedUrl.url");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->url(), output);
  }

  // string label = 2;
  if (this->label().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->label().data(), static_cast<int>(this->label().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "grafeas.v1beta1.RelatedUrl.label");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->label(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:grafeas.v1beta1.RelatedUrl)
}

::google::protobuf::uint8* RelatedUrl::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:grafeas.v1beta1.RelatedUrl)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string url = 1;
  if (this->url().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->url().data(), static_cast<int>(this->url().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "grafeas.v1beta1.RelatedUrl.url");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->url(), target);
  }

  // string label = 2;
  if (this->label().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->label().data(), static_cast<int>(this->label().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "grafeas.v1beta1.RelatedUrl.label");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->label(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:grafeas.v1beta1.RelatedUrl)
  return target;
}

size_t RelatedUrl::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:grafeas.v1beta1.RelatedUrl)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string url = 1;
  if (this->url().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->url());
  }

  // string label = 2;
  if (this->label().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->label());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void RelatedUrl::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:grafeas.v1beta1.RelatedUrl)
  GOOGLE_DCHECK_NE(&from, this);
  const RelatedUrl* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const RelatedUrl>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:grafeas.v1beta1.RelatedUrl)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:grafeas.v1beta1.RelatedUrl)
    MergeFrom(*source);
  }
}

void RelatedUrl::MergeFrom(const RelatedUrl& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:grafeas.v1beta1.RelatedUrl)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.url().size() > 0) {

    url_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.url_);
  }
  if (from.label().size() > 0) {

    label_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.label_);
  }
}

void RelatedUrl::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:grafeas.v1beta1.RelatedUrl)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RelatedUrl::CopyFrom(const RelatedUrl& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:grafeas.v1beta1.RelatedUrl)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RelatedUrl::IsInitialized() const {
  return true;
}

void RelatedUrl::Swap(RelatedUrl* other) {
  if (other == this) return;
  InternalSwap(other);
}
void RelatedUrl::InternalSwap(RelatedUrl* other) {
  using std::swap;
  url_.Swap(&other->url_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  label_.Swap(&other->label_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata RelatedUrl::GetMetadata() const {
  protobuf_google_2fdevtools_2fcontaineranalysis_2fv1beta1_2fcommon_2fcommon_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_google_2fdevtools_2fcontaineranalysis_2fv1beta1_2fcommon_2fcommon_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace v1beta1
}  // namespace grafeas
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::grafeas::v1beta1::RelatedUrl* Arena::CreateMaybeMessage< ::grafeas::v1beta1::RelatedUrl >(Arena* arena) {
  return Arena::CreateInternal< ::grafeas::v1beta1::RelatedUrl >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
