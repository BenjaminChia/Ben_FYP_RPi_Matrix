// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/monitoring/v3/dropped_labels.proto

#ifndef PROTOBUF_INCLUDED_google_2fmonitoring_2fv3_2fdropped_5flabels_2eproto
#define PROTOBUF_INCLUDED_google_2fmonitoring_2fv3_2fdropped_5flabels_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/map.h>  // IWYU pragma: export
#include <google/protobuf/map_entry.h>
#include <google/protobuf/map_field_inl.h>
#include <google/protobuf/unknown_field_set.h>
#include "google/api/annotations.pb.h"
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_google_2fmonitoring_2fv3_2fdropped_5flabels_2eproto 

namespace protobuf_google_2fmonitoring_2fv3_2fdropped_5flabels_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[2];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_google_2fmonitoring_2fv3_2fdropped_5flabels_2eproto
namespace google {
namespace monitoring {
namespace v3 {
class DroppedLabels;
class DroppedLabelsDefaultTypeInternal;
extern DroppedLabelsDefaultTypeInternal _DroppedLabels_default_instance_;
class DroppedLabels_LabelEntry_DoNotUse;
class DroppedLabels_LabelEntry_DoNotUseDefaultTypeInternal;
extern DroppedLabels_LabelEntry_DoNotUseDefaultTypeInternal _DroppedLabels_LabelEntry_DoNotUse_default_instance_;
}  // namespace v3
}  // namespace monitoring
}  // namespace google
namespace google {
namespace protobuf {
template<> ::google::monitoring::v3::DroppedLabels* Arena::CreateMaybeMessage<::google::monitoring::v3::DroppedLabels>(Arena*);
template<> ::google::monitoring::v3::DroppedLabels_LabelEntry_DoNotUse* Arena::CreateMaybeMessage<::google::monitoring::v3::DroppedLabels_LabelEntry_DoNotUse>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace google {
namespace monitoring {
namespace v3 {

// ===================================================================

class DroppedLabels_LabelEntry_DoNotUse : public ::google::protobuf::internal::MapEntry<DroppedLabels_LabelEntry_DoNotUse, 
    ::std::string, ::std::string,
    ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
    ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
    0 > {
public:
  typedef ::google::protobuf::internal::MapEntry<DroppedLabels_LabelEntry_DoNotUse, 
    ::std::string, ::std::string,
    ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
    ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
    0 > SuperType;
  DroppedLabels_LabelEntry_DoNotUse();
  DroppedLabels_LabelEntry_DoNotUse(::google::protobuf::Arena* arena);
  void MergeFrom(const DroppedLabels_LabelEntry_DoNotUse& other);
  static const DroppedLabels_LabelEntry_DoNotUse* internal_default_instance() { return reinterpret_cast<const DroppedLabels_LabelEntry_DoNotUse*>(&_DroppedLabels_LabelEntry_DoNotUse_default_instance_); }
  void MergeFrom(const ::google::protobuf::Message& other) final;
  ::google::protobuf::Metadata GetMetadata() const;
};

// -------------------------------------------------------------------

class DroppedLabels : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.monitoring.v3.DroppedLabels) */ {
 public:
  DroppedLabels();
  virtual ~DroppedLabels();

  DroppedLabels(const DroppedLabels& from);

  inline DroppedLabels& operator=(const DroppedLabels& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  DroppedLabels(DroppedLabels&& from) noexcept
    : DroppedLabels() {
    *this = ::std::move(from);
  }

  inline DroppedLabels& operator=(DroppedLabels&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const DroppedLabels& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const DroppedLabels* internal_default_instance() {
    return reinterpret_cast<const DroppedLabels*>(
               &_DroppedLabels_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(DroppedLabels* other);
  friend void swap(DroppedLabels& a, DroppedLabels& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline DroppedLabels* New() const final {
    return CreateMaybeMessage<DroppedLabels>(NULL);
  }

  DroppedLabels* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<DroppedLabels>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const DroppedLabels& from);
  void MergeFrom(const DroppedLabels& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(DroppedLabels* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------


  // accessors -------------------------------------------------------

  // map<string, string> label = 1;
  int label_size() const;
  void clear_label();
  static const int kLabelFieldNumber = 1;
  const ::google::protobuf::Map< ::std::string, ::std::string >&
      label() const;
  ::google::protobuf::Map< ::std::string, ::std::string >*
      mutable_label();

  // @@protoc_insertion_point(class_scope:google.monitoring.v3.DroppedLabels)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::MapField<
      DroppedLabels_LabelEntry_DoNotUse,
      ::std::string, ::std::string,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      0 > label_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_google_2fmonitoring_2fv3_2fdropped_5flabels_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// DroppedLabels

// map<string, string> label = 1;
inline int DroppedLabels::label_size() const {
  return label_.size();
}
inline void DroppedLabels::clear_label() {
  label_.Clear();
}
inline const ::google::protobuf::Map< ::std::string, ::std::string >&
DroppedLabels::label() const {
  // @@protoc_insertion_point(field_map:google.monitoring.v3.DroppedLabels.label)
  return label_.GetMap();
}
inline ::google::protobuf::Map< ::std::string, ::std::string >*
DroppedLabels::mutable_label() {
  // @@protoc_insertion_point(field_mutable_map:google.monitoring.v3.DroppedLabels.label)
  return label_.MutableMap();
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace v3
}  // namespace monitoring
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_google_2fmonitoring_2fv3_2fdropped_5flabels_2eproto
