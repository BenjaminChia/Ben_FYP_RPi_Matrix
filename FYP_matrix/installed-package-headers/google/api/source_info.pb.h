// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/api/source_info.proto

#ifndef PROTOBUF_INCLUDED_google_2fapi_2fsource_5finfo_2eproto
#define PROTOBUF_INCLUDED_google_2fapi_2fsource_5finfo_2eproto

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
#include <google/protobuf/unknown_field_set.h>
#include <google/protobuf/any.pb.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_google_2fapi_2fsource_5finfo_2eproto 

namespace protobuf_google_2fapi_2fsource_5finfo_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_google_2fapi_2fsource_5finfo_2eproto
namespace google {
namespace api {
class SourceInfo;
class SourceInfoDefaultTypeInternal;
extern SourceInfoDefaultTypeInternal _SourceInfo_default_instance_;
}  // namespace api
}  // namespace google
namespace google {
namespace protobuf {
template<> ::google::api::SourceInfo* Arena::CreateMaybeMessage<::google::api::SourceInfo>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace google {
namespace api {

// ===================================================================

class SourceInfo : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.api.SourceInfo) */ {
 public:
  SourceInfo();
  virtual ~SourceInfo();

  SourceInfo(const SourceInfo& from);

  inline SourceInfo& operator=(const SourceInfo& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  SourceInfo(SourceInfo&& from) noexcept
    : SourceInfo() {
    *this = ::std::move(from);
  }

  inline SourceInfo& operator=(SourceInfo&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const SourceInfo& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SourceInfo* internal_default_instance() {
    return reinterpret_cast<const SourceInfo*>(
               &_SourceInfo_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(SourceInfo* other);
  friend void swap(SourceInfo& a, SourceInfo& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline SourceInfo* New() const final {
    return CreateMaybeMessage<SourceInfo>(NULL);
  }

  SourceInfo* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<SourceInfo>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const SourceInfo& from);
  void MergeFrom(const SourceInfo& from);
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
  void InternalSwap(SourceInfo* other);
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

  // repeated .google.protobuf.Any source_files = 1;
  int source_files_size() const;
  void clear_source_files();
  static const int kSourceFilesFieldNumber = 1;
  ::google::protobuf::Any* mutable_source_files(int index);
  ::google::protobuf::RepeatedPtrField< ::google::protobuf::Any >*
      mutable_source_files();
  const ::google::protobuf::Any& source_files(int index) const;
  ::google::protobuf::Any* add_source_files();
  const ::google::protobuf::RepeatedPtrField< ::google::protobuf::Any >&
      source_files() const;

  // @@protoc_insertion_point(class_scope:google.api.SourceInfo)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::google::protobuf::Any > source_files_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_google_2fapi_2fsource_5finfo_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// SourceInfo

// repeated .google.protobuf.Any source_files = 1;
inline int SourceInfo::source_files_size() const {
  return source_files_.size();
}
inline ::google::protobuf::Any* SourceInfo::mutable_source_files(int index) {
  // @@protoc_insertion_point(field_mutable:google.api.SourceInfo.source_files)
  return source_files_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::google::protobuf::Any >*
SourceInfo::mutable_source_files() {
  // @@protoc_insertion_point(field_mutable_list:google.api.SourceInfo.source_files)
  return &source_files_;
}
inline const ::google::protobuf::Any& SourceInfo::source_files(int index) const {
  // @@protoc_insertion_point(field_get:google.api.SourceInfo.source_files)
  return source_files_.Get(index);
}
inline ::google::protobuf::Any* SourceInfo::add_source_files() {
  // @@protoc_insertion_point(field_add:google.api.SourceInfo.source_files)
  return source_files_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::google::protobuf::Any >&
SourceInfo::source_files() const {
  // @@protoc_insertion_point(field_list:google.api.SourceInfo.source_files)
  return source_files_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace api
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_google_2fapi_2fsource_5finfo_2eproto
