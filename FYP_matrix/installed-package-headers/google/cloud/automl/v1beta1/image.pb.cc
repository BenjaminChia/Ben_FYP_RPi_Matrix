// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/cloud/automl/v1beta1/image.proto

#include "google/cloud/automl/v1beta1/image.pb.h"

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
namespace cloud {
namespace automl {
namespace v1beta1 {
class ImageClassificationDatasetMetadataDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<ImageClassificationDatasetMetadata>
      _instance;
} _ImageClassificationDatasetMetadata_default_instance_;
class ImageClassificationModelMetadataDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<ImageClassificationModelMetadata>
      _instance;
} _ImageClassificationModelMetadata_default_instance_;
}  // namespace v1beta1
}  // namespace automl
}  // namespace cloud
}  // namespace google
namespace protobuf_google_2fcloud_2fautoml_2fv1beta1_2fimage_2eproto {
static void InitDefaultsImageClassificationDatasetMetadata() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::google::cloud::automl::v1beta1::_ImageClassificationDatasetMetadata_default_instance_;
    new (ptr) ::google::cloud::automl::v1beta1::ImageClassificationDatasetMetadata();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::google::cloud::automl::v1beta1::ImageClassificationDatasetMetadata::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_ImageClassificationDatasetMetadata =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsImageClassificationDatasetMetadata}, {}};

static void InitDefaultsImageClassificationModelMetadata() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::google::cloud::automl::v1beta1::_ImageClassificationModelMetadata_default_instance_;
    new (ptr) ::google::cloud::automl::v1beta1::ImageClassificationModelMetadata();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::google::cloud::automl::v1beta1::ImageClassificationModelMetadata::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_ImageClassificationModelMetadata =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsImageClassificationModelMetadata}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_ImageClassificationDatasetMetadata.base);
  ::google::protobuf::internal::InitSCC(&scc_info_ImageClassificationModelMetadata.base);
}

::google::protobuf::Metadata file_level_metadata[2];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::cloud::automl::v1beta1::ImageClassificationDatasetMetadata, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::cloud::automl::v1beta1::ImageClassificationDatasetMetadata, classification_type_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::cloud::automl::v1beta1::ImageClassificationModelMetadata, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::cloud::automl::v1beta1::ImageClassificationModelMetadata, base_model_id_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::cloud::automl::v1beta1::ImageClassificationModelMetadata, train_budget_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::cloud::automl::v1beta1::ImageClassificationModelMetadata, train_cost_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::cloud::automl::v1beta1::ImageClassificationModelMetadata, stop_reason_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::google::cloud::automl::v1beta1::ImageClassificationDatasetMetadata)},
  { 6, -1, sizeof(::google::cloud::automl::v1beta1::ImageClassificationModelMetadata)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::google::cloud::automl::v1beta1::_ImageClassificationDatasetMetadata_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::google::cloud::automl::v1beta1::_ImageClassificationModelMetadata_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "google/cloud/automl/v1beta1/image.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 2);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\'google/cloud/automl/v1beta1/image.prot"
      "o\022\033google.cloud.automl.v1beta1\032\034google/a"
      "pi/annotations.proto\0320google/cloud/autom"
      "l/v1beta1/classification.proto\032\037google/p"
      "rotobuf/timestamp.proto\"r\n\"ImageClassifi"
      "cationDatasetMetadata\022L\n\023classification_"
      "type\030\001 \001(\0162/.google.cloud.automl.v1beta1"
      ".ClassificationType\"x\n ImageClassificati"
      "onModelMetadata\022\025\n\rbase_model_id\030\001 \001(\t\022\024"
      "\n\014train_budget\030\002 \001(\003\022\022\n\ntrain_cost\030\003 \001(\003"
      "\022\023\n\013stop_reason\030\005 \001(\tBr\n\037com.google.clou"
      "d.automl.v1beta1B\nImageProtoP\001ZAgoogle.g"
      "olang.org/genproto/googleapis/cloud/auto"
      "ml/v1beta1;automlb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 545);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "google/cloud/automl/v1beta1/image.proto", &protobuf_RegisterTypes);
  ::protobuf_google_2fapi_2fannotations_2eproto::AddDescriptors();
  ::protobuf_google_2fcloud_2fautoml_2fv1beta1_2fclassification_2eproto::AddDescriptors();
  ::protobuf_google_2fprotobuf_2ftimestamp_2eproto::AddDescriptors();
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
}  // namespace protobuf_google_2fcloud_2fautoml_2fv1beta1_2fimage_2eproto
namespace google {
namespace cloud {
namespace automl {
namespace v1beta1 {

// ===================================================================

void ImageClassificationDatasetMetadata::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ImageClassificationDatasetMetadata::kClassificationTypeFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ImageClassificationDatasetMetadata::ImageClassificationDatasetMetadata()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_google_2fcloud_2fautoml_2fv1beta1_2fimage_2eproto::scc_info_ImageClassificationDatasetMetadata.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.cloud.automl.v1beta1.ImageClassificationDatasetMetadata)
}
ImageClassificationDatasetMetadata::ImageClassificationDatasetMetadata(const ImageClassificationDatasetMetadata& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  classification_type_ = from.classification_type_;
  // @@protoc_insertion_point(copy_constructor:google.cloud.automl.v1beta1.ImageClassificationDatasetMetadata)
}

void ImageClassificationDatasetMetadata::SharedCtor() {
  classification_type_ = 0;
}

ImageClassificationDatasetMetadata::~ImageClassificationDatasetMetadata() {
  // @@protoc_insertion_point(destructor:google.cloud.automl.v1beta1.ImageClassificationDatasetMetadata)
  SharedDtor();
}

void ImageClassificationDatasetMetadata::SharedDtor() {
}

void ImageClassificationDatasetMetadata::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* ImageClassificationDatasetMetadata::descriptor() {
  ::protobuf_google_2fcloud_2fautoml_2fv1beta1_2fimage_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_google_2fcloud_2fautoml_2fv1beta1_2fimage_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const ImageClassificationDatasetMetadata& ImageClassificationDatasetMetadata::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_google_2fcloud_2fautoml_2fv1beta1_2fimage_2eproto::scc_info_ImageClassificationDatasetMetadata.base);
  return *internal_default_instance();
}


void ImageClassificationDatasetMetadata::Clear() {
// @@protoc_insertion_point(message_clear_start:google.cloud.automl.v1beta1.ImageClassificationDatasetMetadata)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  classification_type_ = 0;
  _internal_metadata_.Clear();
}

bool ImageClassificationDatasetMetadata::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.cloud.automl.v1beta1.ImageClassificationDatasetMetadata)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .google.cloud.automl.v1beta1.ClassificationType classification_type = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_classification_type(static_cast< ::google::cloud::automl::v1beta1::ClassificationType >(value));
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
  // @@protoc_insertion_point(parse_success:google.cloud.automl.v1beta1.ImageClassificationDatasetMetadata)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.cloud.automl.v1beta1.ImageClassificationDatasetMetadata)
  return false;
#undef DO_
}

void ImageClassificationDatasetMetadata::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.cloud.automl.v1beta1.ImageClassificationDatasetMetadata)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .google.cloud.automl.v1beta1.ClassificationType classification_type = 1;
  if (this->classification_type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->classification_type(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:google.cloud.automl.v1beta1.ImageClassificationDatasetMetadata)
}

::google::protobuf::uint8* ImageClassificationDatasetMetadata::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:google.cloud.automl.v1beta1.ImageClassificationDatasetMetadata)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .google.cloud.automl.v1beta1.ClassificationType classification_type = 1;
  if (this->classification_type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->classification_type(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.cloud.automl.v1beta1.ImageClassificationDatasetMetadata)
  return target;
}

size_t ImageClassificationDatasetMetadata::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.cloud.automl.v1beta1.ImageClassificationDatasetMetadata)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // .google.cloud.automl.v1beta1.ClassificationType classification_type = 1;
  if (this->classification_type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->classification_type());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ImageClassificationDatasetMetadata::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.cloud.automl.v1beta1.ImageClassificationDatasetMetadata)
  GOOGLE_DCHECK_NE(&from, this);
  const ImageClassificationDatasetMetadata* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const ImageClassificationDatasetMetadata>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.cloud.automl.v1beta1.ImageClassificationDatasetMetadata)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.cloud.automl.v1beta1.ImageClassificationDatasetMetadata)
    MergeFrom(*source);
  }
}

void ImageClassificationDatasetMetadata::MergeFrom(const ImageClassificationDatasetMetadata& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.cloud.automl.v1beta1.ImageClassificationDatasetMetadata)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.classification_type() != 0) {
    set_classification_type(from.classification_type());
  }
}

void ImageClassificationDatasetMetadata::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.cloud.automl.v1beta1.ImageClassificationDatasetMetadata)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ImageClassificationDatasetMetadata::CopyFrom(const ImageClassificationDatasetMetadata& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.cloud.automl.v1beta1.ImageClassificationDatasetMetadata)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ImageClassificationDatasetMetadata::IsInitialized() const {
  return true;
}

void ImageClassificationDatasetMetadata::Swap(ImageClassificationDatasetMetadata* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ImageClassificationDatasetMetadata::InternalSwap(ImageClassificationDatasetMetadata* other) {
  using std::swap;
  swap(classification_type_, other->classification_type_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata ImageClassificationDatasetMetadata::GetMetadata() const {
  protobuf_google_2fcloud_2fautoml_2fv1beta1_2fimage_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_google_2fcloud_2fautoml_2fv1beta1_2fimage_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

void ImageClassificationModelMetadata::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ImageClassificationModelMetadata::kBaseModelIdFieldNumber;
const int ImageClassificationModelMetadata::kTrainBudgetFieldNumber;
const int ImageClassificationModelMetadata::kTrainCostFieldNumber;
const int ImageClassificationModelMetadata::kStopReasonFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ImageClassificationModelMetadata::ImageClassificationModelMetadata()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_google_2fcloud_2fautoml_2fv1beta1_2fimage_2eproto::scc_info_ImageClassificationModelMetadata.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.cloud.automl.v1beta1.ImageClassificationModelMetadata)
}
ImageClassificationModelMetadata::ImageClassificationModelMetadata(const ImageClassificationModelMetadata& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  base_model_id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.base_model_id().size() > 0) {
    base_model_id_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.base_model_id_);
  }
  stop_reason_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.stop_reason().size() > 0) {
    stop_reason_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.stop_reason_);
  }
  ::memcpy(&train_budget_, &from.train_budget_,
    static_cast<size_t>(reinterpret_cast<char*>(&train_cost_) -
    reinterpret_cast<char*>(&train_budget_)) + sizeof(train_cost_));
  // @@protoc_insertion_point(copy_constructor:google.cloud.automl.v1beta1.ImageClassificationModelMetadata)
}

void ImageClassificationModelMetadata::SharedCtor() {
  base_model_id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  stop_reason_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&train_budget_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&train_cost_) -
      reinterpret_cast<char*>(&train_budget_)) + sizeof(train_cost_));
}

ImageClassificationModelMetadata::~ImageClassificationModelMetadata() {
  // @@protoc_insertion_point(destructor:google.cloud.automl.v1beta1.ImageClassificationModelMetadata)
  SharedDtor();
}

void ImageClassificationModelMetadata::SharedDtor() {
  base_model_id_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  stop_reason_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void ImageClassificationModelMetadata::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* ImageClassificationModelMetadata::descriptor() {
  ::protobuf_google_2fcloud_2fautoml_2fv1beta1_2fimage_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_google_2fcloud_2fautoml_2fv1beta1_2fimage_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const ImageClassificationModelMetadata& ImageClassificationModelMetadata::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_google_2fcloud_2fautoml_2fv1beta1_2fimage_2eproto::scc_info_ImageClassificationModelMetadata.base);
  return *internal_default_instance();
}


void ImageClassificationModelMetadata::Clear() {
// @@protoc_insertion_point(message_clear_start:google.cloud.automl.v1beta1.ImageClassificationModelMetadata)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  base_model_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  stop_reason_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&train_budget_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&train_cost_) -
      reinterpret_cast<char*>(&train_budget_)) + sizeof(train_cost_));
  _internal_metadata_.Clear();
}

bool ImageClassificationModelMetadata::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.cloud.automl.v1beta1.ImageClassificationModelMetadata)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string base_model_id = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_base_model_id()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->base_model_id().data(), static_cast<int>(this->base_model_id().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "google.cloud.automl.v1beta1.ImageClassificationModelMetadata.base_model_id"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int64 train_budget = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &train_budget_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int64 train_cost = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &train_cost_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string stop_reason = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u /* 42 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_stop_reason()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->stop_reason().data(), static_cast<int>(this->stop_reason().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "google.cloud.automl.v1beta1.ImageClassificationModelMetadata.stop_reason"));
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
  // @@protoc_insertion_point(parse_success:google.cloud.automl.v1beta1.ImageClassificationModelMetadata)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.cloud.automl.v1beta1.ImageClassificationModelMetadata)
  return false;
#undef DO_
}

void ImageClassificationModelMetadata::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.cloud.automl.v1beta1.ImageClassificationModelMetadata)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string base_model_id = 1;
  if (this->base_model_id().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->base_model_id().data(), static_cast<int>(this->base_model_id().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.cloud.automl.v1beta1.ImageClassificationModelMetadata.base_model_id");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->base_model_id(), output);
  }

  // int64 train_budget = 2;
  if (this->train_budget() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(2, this->train_budget(), output);
  }

  // int64 train_cost = 3;
  if (this->train_cost() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(3, this->train_cost(), output);
  }

  // string stop_reason = 5;
  if (this->stop_reason().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->stop_reason().data(), static_cast<int>(this->stop_reason().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.cloud.automl.v1beta1.ImageClassificationModelMetadata.stop_reason");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      5, this->stop_reason(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:google.cloud.automl.v1beta1.ImageClassificationModelMetadata)
}

::google::protobuf::uint8* ImageClassificationModelMetadata::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:google.cloud.automl.v1beta1.ImageClassificationModelMetadata)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string base_model_id = 1;
  if (this->base_model_id().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->base_model_id().data(), static_cast<int>(this->base_model_id().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.cloud.automl.v1beta1.ImageClassificationModelMetadata.base_model_id");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->base_model_id(), target);
  }

  // int64 train_budget = 2;
  if (this->train_budget() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(2, this->train_budget(), target);
  }

  // int64 train_cost = 3;
  if (this->train_cost() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(3, this->train_cost(), target);
  }

  // string stop_reason = 5;
  if (this->stop_reason().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->stop_reason().data(), static_cast<int>(this->stop_reason().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.cloud.automl.v1beta1.ImageClassificationModelMetadata.stop_reason");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        5, this->stop_reason(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.cloud.automl.v1beta1.ImageClassificationModelMetadata)
  return target;
}

size_t ImageClassificationModelMetadata::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.cloud.automl.v1beta1.ImageClassificationModelMetadata)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string base_model_id = 1;
  if (this->base_model_id().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->base_model_id());
  }

  // string stop_reason = 5;
  if (this->stop_reason().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->stop_reason());
  }

  // int64 train_budget = 2;
  if (this->train_budget() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->train_budget());
  }

  // int64 train_cost = 3;
  if (this->train_cost() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->train_cost());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ImageClassificationModelMetadata::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.cloud.automl.v1beta1.ImageClassificationModelMetadata)
  GOOGLE_DCHECK_NE(&from, this);
  const ImageClassificationModelMetadata* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const ImageClassificationModelMetadata>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.cloud.automl.v1beta1.ImageClassificationModelMetadata)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.cloud.automl.v1beta1.ImageClassificationModelMetadata)
    MergeFrom(*source);
  }
}

void ImageClassificationModelMetadata::MergeFrom(const ImageClassificationModelMetadata& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.cloud.automl.v1beta1.ImageClassificationModelMetadata)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.base_model_id().size() > 0) {

    base_model_id_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.base_model_id_);
  }
  if (from.stop_reason().size() > 0) {

    stop_reason_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.stop_reason_);
  }
  if (from.train_budget() != 0) {
    set_train_budget(from.train_budget());
  }
  if (from.train_cost() != 0) {
    set_train_cost(from.train_cost());
  }
}

void ImageClassificationModelMetadata::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.cloud.automl.v1beta1.ImageClassificationModelMetadata)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ImageClassificationModelMetadata::CopyFrom(const ImageClassificationModelMetadata& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.cloud.automl.v1beta1.ImageClassificationModelMetadata)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ImageClassificationModelMetadata::IsInitialized() const {
  return true;
}

void ImageClassificationModelMetadata::Swap(ImageClassificationModelMetadata* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ImageClassificationModelMetadata::InternalSwap(ImageClassificationModelMetadata* other) {
  using std::swap;
  base_model_id_.Swap(&other->base_model_id_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  stop_reason_.Swap(&other->stop_reason_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(train_budget_, other->train_budget_);
  swap(train_cost_, other->train_cost_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata ImageClassificationModelMetadata::GetMetadata() const {
  protobuf_google_2fcloud_2fautoml_2fv1beta1_2fimage_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_google_2fcloud_2fautoml_2fv1beta1_2fimage_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace v1beta1
}  // namespace automl
}  // namespace cloud
}  // namespace google
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::google::cloud::automl::v1beta1::ImageClassificationDatasetMetadata* Arena::CreateMaybeMessage< ::google::cloud::automl::v1beta1::ImageClassificationDatasetMetadata >(Arena* arena) {
  return Arena::CreateInternal< ::google::cloud::automl::v1beta1::ImageClassificationDatasetMetadata >(arena);
}
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::google::cloud::automl::v1beta1::ImageClassificationModelMetadata* Arena::CreateMaybeMessage< ::google::cloud::automl::v1beta1::ImageClassificationModelMetadata >(Arena* arena) {
  return Arena::CreateInternal< ::google::cloud::automl::v1beta1::ImageClassificationModelMetadata >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
