// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/ads/googleads/v0/enums/slot.proto

#include "google/ads/googleads/v0/enums/slot.pb.h"

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
class SlotEnumDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<SlotEnum>
      _instance;
} _SlotEnum_default_instance_;
}  // namespace enums
}  // namespace v0
}  // namespace googleads
}  // namespace ads
}  // namespace google
namespace protobuf_google_2fads_2fgoogleads_2fv0_2fenums_2fslot_2eproto {
static void InitDefaultsSlotEnum() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::google::ads::googleads::v0::enums::_SlotEnum_default_instance_;
    new (ptr) ::google::ads::googleads::v0::enums::SlotEnum();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::google::ads::googleads::v0::enums::SlotEnum::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_SlotEnum =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsSlotEnum}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_SlotEnum.base);
}

::google::protobuf::Metadata file_level_metadata[1];
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::ads::googleads::v0::enums::SlotEnum, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::google::ads::googleads::v0::enums::SlotEnum)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::google::ads::googleads::v0::enums::_SlotEnum_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "google/ads/googleads/v0/enums/slot.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n(google/ads/googleads/v0/enums/slot.pro"
      "to\022\035google.ads.googleads.v0.enums\"\243\001\n\010Sl"
      "otEnum\"\226\001\n\004Slot\022\017\n\013UNSPECIFIED\020\000\022\013\n\007UNKN"
      "OWN\020\001\022\017\n\013SEARCH_SIDE\020\002\022\016\n\nSEARCH_TOP\020\003\022\020"
      "\n\014SEARCH_OTHER\020\004\022\013\n\007CONTENT\020\005\022\026\n\022SEARCH_"
      "PARTNER_TOP\020\006\022\030\n\024SEARCH_PARTNER_OTHER\020\007B"
      "\226\001\n!com.google.ads.googleads.v0.enumsB\tS"
      "lotProtoP\001\242\002\003GAA\252\002\035Google.Ads.GoogleAds."
      "V0.Enums\312\002\035Google\\Ads\\GoogleAds\\V0\\Enums"
      "\342\002\035Google\\Ads\\GoogleAds\\V0\\Enumsb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 400);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "google/ads/googleads/v0/enums/slot.proto", &protobuf_RegisterTypes);
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
}  // namespace protobuf_google_2fads_2fgoogleads_2fv0_2fenums_2fslot_2eproto
namespace google {
namespace ads {
namespace googleads {
namespace v0 {
namespace enums {
const ::google::protobuf::EnumDescriptor* SlotEnum_Slot_descriptor() {
  protobuf_google_2fads_2fgoogleads_2fv0_2fenums_2fslot_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_google_2fads_2fgoogleads_2fv0_2fenums_2fslot_2eproto::file_level_enum_descriptors[0];
}
bool SlotEnum_Slot_IsValid(int value) {
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

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const SlotEnum_Slot SlotEnum::UNSPECIFIED;
const SlotEnum_Slot SlotEnum::UNKNOWN;
const SlotEnum_Slot SlotEnum::SEARCH_SIDE;
const SlotEnum_Slot SlotEnum::SEARCH_TOP;
const SlotEnum_Slot SlotEnum::SEARCH_OTHER;
const SlotEnum_Slot SlotEnum::CONTENT;
const SlotEnum_Slot SlotEnum::SEARCH_PARTNER_TOP;
const SlotEnum_Slot SlotEnum::SEARCH_PARTNER_OTHER;
const SlotEnum_Slot SlotEnum::Slot_MIN;
const SlotEnum_Slot SlotEnum::Slot_MAX;
const int SlotEnum::Slot_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

// ===================================================================

void SlotEnum::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

SlotEnum::SlotEnum()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_google_2fads_2fgoogleads_2fv0_2fenums_2fslot_2eproto::scc_info_SlotEnum.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.ads.googleads.v0.enums.SlotEnum)
}
SlotEnum::SlotEnum(const SlotEnum& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:google.ads.googleads.v0.enums.SlotEnum)
}

void SlotEnum::SharedCtor() {
}

SlotEnum::~SlotEnum() {
  // @@protoc_insertion_point(destructor:google.ads.googleads.v0.enums.SlotEnum)
  SharedDtor();
}

void SlotEnum::SharedDtor() {
}

void SlotEnum::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* SlotEnum::descriptor() {
  ::protobuf_google_2fads_2fgoogleads_2fv0_2fenums_2fslot_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_google_2fads_2fgoogleads_2fv0_2fenums_2fslot_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const SlotEnum& SlotEnum::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_google_2fads_2fgoogleads_2fv0_2fenums_2fslot_2eproto::scc_info_SlotEnum.base);
  return *internal_default_instance();
}


void SlotEnum::Clear() {
// @@protoc_insertion_point(message_clear_start:google.ads.googleads.v0.enums.SlotEnum)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _internal_metadata_.Clear();
}

bool SlotEnum::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.ads.googleads.v0.enums.SlotEnum)
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
  // @@protoc_insertion_point(parse_success:google.ads.googleads.v0.enums.SlotEnum)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.ads.googleads.v0.enums.SlotEnum)
  return false;
#undef DO_
}

void SlotEnum::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.ads.googleads.v0.enums.SlotEnum)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:google.ads.googleads.v0.enums.SlotEnum)
}

::google::protobuf::uint8* SlotEnum::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:google.ads.googleads.v0.enums.SlotEnum)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.ads.googleads.v0.enums.SlotEnum)
  return target;
}

size_t SlotEnum::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.ads.googleads.v0.enums.SlotEnum)
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

void SlotEnum::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.ads.googleads.v0.enums.SlotEnum)
  GOOGLE_DCHECK_NE(&from, this);
  const SlotEnum* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const SlotEnum>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.ads.googleads.v0.enums.SlotEnum)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.ads.googleads.v0.enums.SlotEnum)
    MergeFrom(*source);
  }
}

void SlotEnum::MergeFrom(const SlotEnum& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.ads.googleads.v0.enums.SlotEnum)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

}

void SlotEnum::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.ads.googleads.v0.enums.SlotEnum)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SlotEnum::CopyFrom(const SlotEnum& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.ads.googleads.v0.enums.SlotEnum)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SlotEnum::IsInitialized() const {
  return true;
}

void SlotEnum::Swap(SlotEnum* other) {
  if (other == this) return;
  InternalSwap(other);
}
void SlotEnum::InternalSwap(SlotEnum* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata SlotEnum::GetMetadata() const {
  protobuf_google_2fads_2fgoogleads_2fv0_2fenums_2fslot_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_google_2fads_2fgoogleads_2fv0_2fenums_2fslot_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace enums
}  // namespace v0
}  // namespace googleads
}  // namespace ads
}  // namespace google
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::google::ads::googleads::v0::enums::SlotEnum* Arena::CreateMaybeMessage< ::google::ads::googleads::v0::enums::SlotEnum >(Arena* arena) {
  return Arena::CreateInternal< ::google::ads::googleads::v0::enums::SlotEnum >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)