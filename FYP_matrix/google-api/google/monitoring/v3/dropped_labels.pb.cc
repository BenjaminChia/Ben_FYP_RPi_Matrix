// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/monitoring/v3/dropped_labels.proto

#include "google/monitoring/v3/dropped_labels.pb.h"

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

namespace protobuf_google_2fmonitoring_2fv3_2fdropped_5flabels_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_google_2fmonitoring_2fv3_2fdropped_5flabels_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_DroppedLabels_LabelEntry_DoNotUse;
}  // namespace protobuf_google_2fmonitoring_2fv3_2fdropped_5flabels_2eproto
namespace google {
namespace monitoring {
namespace v3 {
class DroppedLabels_LabelEntry_DoNotUseDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<DroppedLabels_LabelEntry_DoNotUse>
      _instance;
} _DroppedLabels_LabelEntry_DoNotUse_default_instance_;
class DroppedLabelsDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<DroppedLabels>
      _instance;
} _DroppedLabels_default_instance_;
}  // namespace v3
}  // namespace monitoring
}  // namespace google
namespace protobuf_google_2fmonitoring_2fv3_2fdropped_5flabels_2eproto {
static void InitDefaultsDroppedLabels_LabelEntry_DoNotUse() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::google::monitoring::v3::_DroppedLabels_LabelEntry_DoNotUse_default_instance_;
    new (ptr) ::google::monitoring::v3::DroppedLabels_LabelEntry_DoNotUse();
  }
  ::google::monitoring::v3::DroppedLabels_LabelEntry_DoNotUse::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_DroppedLabels_LabelEntry_DoNotUse =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsDroppedLabels_LabelEntry_DoNotUse}, {}};

static void InitDefaultsDroppedLabels() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::google::monitoring::v3::_DroppedLabels_default_instance_;
    new (ptr) ::google::monitoring::v3::DroppedLabels();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::google::monitoring::v3::DroppedLabels::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<1> scc_info_DroppedLabels =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsDroppedLabels}, {
      &protobuf_google_2fmonitoring_2fv3_2fdropped_5flabels_2eproto::scc_info_DroppedLabels_LabelEntry_DoNotUse.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_DroppedLabels_LabelEntry_DoNotUse.base);
  ::google::protobuf::internal::InitSCC(&scc_info_DroppedLabels.base);
}

::google::protobuf::Metadata file_level_metadata[2];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::monitoring::v3::DroppedLabels_LabelEntry_DoNotUse, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::monitoring::v3::DroppedLabels_LabelEntry_DoNotUse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::monitoring::v3::DroppedLabels_LabelEntry_DoNotUse, key_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::monitoring::v3::DroppedLabels_LabelEntry_DoNotUse, value_),
  0,
  1,
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::monitoring::v3::DroppedLabels, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::monitoring::v3::DroppedLabels, label_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 7, sizeof(::google::monitoring::v3::DroppedLabels_LabelEntry_DoNotUse)},
  { 9, -1, sizeof(::google::monitoring::v3::DroppedLabels)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::google::monitoring::v3::_DroppedLabels_LabelEntry_DoNotUse_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::google::monitoring::v3::_DroppedLabels_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "google/monitoring/v3/dropped_labels.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n)google/monitoring/v3/dropped_labels.pr"
      "oto\022\024google.monitoring.v3\032\034google/api/an"
      "notations.proto\"|\n\rDroppedLabels\022=\n\005labe"
      "l\030\001 \003(\0132..google.monitoring.v3.DroppedLa"
      "bels.LabelEntry\032,\n\nLabelEntry\022\013\n\003key\030\001 \001"
      "(\t\022\r\n\005value\030\002 \001(\t:\0028\001B@Z>google.golang.o"
      "rg/genproto/googleapis/monitoring/v3;mon"
      "itoringb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 295);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "google/monitoring/v3/dropped_labels.proto", &protobuf_RegisterTypes);
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
}  // namespace protobuf_google_2fmonitoring_2fv3_2fdropped_5flabels_2eproto
namespace google {
namespace monitoring {
namespace v3 {

// ===================================================================

DroppedLabels_LabelEntry_DoNotUse::DroppedLabels_LabelEntry_DoNotUse() {}
DroppedLabels_LabelEntry_DoNotUse::DroppedLabels_LabelEntry_DoNotUse(::google::protobuf::Arena* arena) : SuperType(arena) {}
void DroppedLabels_LabelEntry_DoNotUse::MergeFrom(const DroppedLabels_LabelEntry_DoNotUse& other) {
  MergeFromInternal(other);
}
::google::protobuf::Metadata DroppedLabels_LabelEntry_DoNotUse::GetMetadata() const {
  ::protobuf_google_2fmonitoring_2fv3_2fdropped_5flabels_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_google_2fmonitoring_2fv3_2fdropped_5flabels_2eproto::file_level_metadata[0];
}
void DroppedLabels_LabelEntry_DoNotUse::MergeFrom(
    const ::google::protobuf::Message& other) {
  ::google::protobuf::Message::MergeFrom(other);
}


// ===================================================================

void DroppedLabels::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int DroppedLabels::kLabelFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

DroppedLabels::DroppedLabels()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_google_2fmonitoring_2fv3_2fdropped_5flabels_2eproto::scc_info_DroppedLabels.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.monitoring.v3.DroppedLabels)
}
DroppedLabels::DroppedLabels(const DroppedLabels& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  label_.MergeFrom(from.label_);
  // @@protoc_insertion_point(copy_constructor:google.monitoring.v3.DroppedLabels)
}

void DroppedLabels::SharedCtor() {
}

DroppedLabels::~DroppedLabels() {
  // @@protoc_insertion_point(destructor:google.monitoring.v3.DroppedLabels)
  SharedDtor();
}

void DroppedLabels::SharedDtor() {
}

void DroppedLabels::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* DroppedLabels::descriptor() {
  ::protobuf_google_2fmonitoring_2fv3_2fdropped_5flabels_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_google_2fmonitoring_2fv3_2fdropped_5flabels_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const DroppedLabels& DroppedLabels::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_google_2fmonitoring_2fv3_2fdropped_5flabels_2eproto::scc_info_DroppedLabels.base);
  return *internal_default_instance();
}


void DroppedLabels::Clear() {
// @@protoc_insertion_point(message_clear_start:google.monitoring.v3.DroppedLabels)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  label_.Clear();
  _internal_metadata_.Clear();
}

bool DroppedLabels::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.monitoring.v3.DroppedLabels)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // map<string, string> label = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DroppedLabels_LabelEntry_DoNotUse::Parser< ::google::protobuf::internal::MapField<
              DroppedLabels_LabelEntry_DoNotUse,
              ::std::string, ::std::string,
              ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
              ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
              0 >,
            ::google::protobuf::Map< ::std::string, ::std::string > > parser(&label_);
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
              input, &parser));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            parser.key().data(), static_cast<int>(parser.key().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "google.monitoring.v3.DroppedLabels.LabelEntry.key"));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            parser.value().data(), static_cast<int>(parser.value().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "google.monitoring.v3.DroppedLabels.LabelEntry.value"));
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
  // @@protoc_insertion_point(parse_success:google.monitoring.v3.DroppedLabels)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.monitoring.v3.DroppedLabels)
  return false;
#undef DO_
}

void DroppedLabels::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.monitoring.v3.DroppedLabels)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // map<string, string> label = 1;
  if (!this->label().empty()) {
    typedef ::google::protobuf::Map< ::std::string, ::std::string >::const_pointer
        ConstPtr;
    typedef ConstPtr SortItem;
    typedef ::google::protobuf::internal::CompareByDerefFirst<SortItem> Less;
    struct Utf8Check {
      static void Check(ConstPtr p) {
        ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
          p->first.data(), static_cast<int>(p->first.length()),
          ::google::protobuf::internal::WireFormatLite::SERIALIZE,
          "google.monitoring.v3.DroppedLabels.LabelEntry.key");
        ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
          p->second.data(), static_cast<int>(p->second.length()),
          ::google::protobuf::internal::WireFormatLite::SERIALIZE,
          "google.monitoring.v3.DroppedLabels.LabelEntry.value");
      }
    };

    if (output->IsSerializationDeterministic() &&
        this->label().size() > 1) {
      ::std::unique_ptr<SortItem[]> items(
          new SortItem[this->label().size()]);
      typedef ::google::protobuf::Map< ::std::string, ::std::string >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::std::string, ::std::string >::const_iterator
          it = this->label().begin();
          it != this->label().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      ::std::unique_ptr<DroppedLabels_LabelEntry_DoNotUse> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(label_.NewEntryWrapper(
            items[static_cast<ptrdiff_t>(i)]->first, items[static_cast<ptrdiff_t>(i)]->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            1, *entry, output);
        Utf8Check::Check(items[static_cast<ptrdiff_t>(i)]);
      }
    } else {
      ::std::unique_ptr<DroppedLabels_LabelEntry_DoNotUse> entry;
      for (::google::protobuf::Map< ::std::string, ::std::string >::const_iterator
          it = this->label().begin();
          it != this->label().end(); ++it) {
        entry.reset(label_.NewEntryWrapper(
            it->first, it->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            1, *entry, output);
        Utf8Check::Check(&*it);
      }
    }
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:google.monitoring.v3.DroppedLabels)
}

::google::protobuf::uint8* DroppedLabels::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:google.monitoring.v3.DroppedLabels)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // map<string, string> label = 1;
  if (!this->label().empty()) {
    typedef ::google::protobuf::Map< ::std::string, ::std::string >::const_pointer
        ConstPtr;
    typedef ConstPtr SortItem;
    typedef ::google::protobuf::internal::CompareByDerefFirst<SortItem> Less;
    struct Utf8Check {
      static void Check(ConstPtr p) {
        ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
          p->first.data(), static_cast<int>(p->first.length()),
          ::google::protobuf::internal::WireFormatLite::SERIALIZE,
          "google.monitoring.v3.DroppedLabels.LabelEntry.key");
        ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
          p->second.data(), static_cast<int>(p->second.length()),
          ::google::protobuf::internal::WireFormatLite::SERIALIZE,
          "google.monitoring.v3.DroppedLabels.LabelEntry.value");
      }
    };

    if (deterministic &&
        this->label().size() > 1) {
      ::std::unique_ptr<SortItem[]> items(
          new SortItem[this->label().size()]);
      typedef ::google::protobuf::Map< ::std::string, ::std::string >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::std::string, ::std::string >::const_iterator
          it = this->label().begin();
          it != this->label().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      ::std::unique_ptr<DroppedLabels_LabelEntry_DoNotUse> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(label_.NewEntryWrapper(
            items[static_cast<ptrdiff_t>(i)]->first, items[static_cast<ptrdiff_t>(i)]->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       1, *entry, deterministic, target);
;
        Utf8Check::Check(items[static_cast<ptrdiff_t>(i)]);
      }
    } else {
      ::std::unique_ptr<DroppedLabels_LabelEntry_DoNotUse> entry;
      for (::google::protobuf::Map< ::std::string, ::std::string >::const_iterator
          it = this->label().begin();
          it != this->label().end(); ++it) {
        entry.reset(label_.NewEntryWrapper(
            it->first, it->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       1, *entry, deterministic, target);
;
        Utf8Check::Check(&*it);
      }
    }
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.monitoring.v3.DroppedLabels)
  return target;
}

size_t DroppedLabels::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.monitoring.v3.DroppedLabels)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // map<string, string> label = 1;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->label_size());
  {
    ::std::unique_ptr<DroppedLabels_LabelEntry_DoNotUse> entry;
    for (::google::protobuf::Map< ::std::string, ::std::string >::const_iterator
        it = this->label().begin();
        it != this->label().end(); ++it) {
      entry.reset(label_.NewEntryWrapper(it->first, it->second));
      total_size += ::google::protobuf::internal::WireFormatLite::
          MessageSizeNoVirtual(*entry);
    }
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void DroppedLabels::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.monitoring.v3.DroppedLabels)
  GOOGLE_DCHECK_NE(&from, this);
  const DroppedLabels* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const DroppedLabels>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.monitoring.v3.DroppedLabels)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.monitoring.v3.DroppedLabels)
    MergeFrom(*source);
  }
}

void DroppedLabels::MergeFrom(const DroppedLabels& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.monitoring.v3.DroppedLabels)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  label_.MergeFrom(from.label_);
}

void DroppedLabels::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.monitoring.v3.DroppedLabels)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void DroppedLabels::CopyFrom(const DroppedLabels& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.monitoring.v3.DroppedLabels)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool DroppedLabels::IsInitialized() const {
  return true;
}

void DroppedLabels::Swap(DroppedLabels* other) {
  if (other == this) return;
  InternalSwap(other);
}
void DroppedLabels::InternalSwap(DroppedLabels* other) {
  using std::swap;
  label_.Swap(&other->label_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata DroppedLabels::GetMetadata() const {
  protobuf_google_2fmonitoring_2fv3_2fdropped_5flabels_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_google_2fmonitoring_2fv3_2fdropped_5flabels_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace v3
}  // namespace monitoring
}  // namespace google
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::google::monitoring::v3::DroppedLabels_LabelEntry_DoNotUse* Arena::CreateMaybeMessage< ::google::monitoring::v3::DroppedLabels_LabelEntry_DoNotUse >(Arena* arena) {
  return Arena::CreateInternal< ::google::monitoring::v3::DroppedLabels_LabelEntry_DoNotUse >(arena);
}
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::google::monitoring::v3::DroppedLabels* Arena::CreateMaybeMessage< ::google::monitoring::v3::DroppedLabels >(Arena* arena) {
  return Arena::CreateInternal< ::google::monitoring::v3::DroppedLabels >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
