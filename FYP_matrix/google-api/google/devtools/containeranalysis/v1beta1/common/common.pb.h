// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/devtools/containeranalysis/v1beta1/common/common.proto

#ifndef PROTOBUF_INCLUDED_google_2fdevtools_2fcontaineranalysis_2fv1beta1_2fcommon_2fcommon_2eproto
#define PROTOBUF_INCLUDED_google_2fdevtools_2fcontaineranalysis_2fv1beta1_2fcommon_2fcommon_2eproto

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
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_google_2fdevtools_2fcontaineranalysis_2fv1beta1_2fcommon_2fcommon_2eproto 

namespace protobuf_google_2fdevtools_2fcontaineranalysis_2fv1beta1_2fcommon_2fcommon_2eproto {
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
}  // namespace protobuf_google_2fdevtools_2fcontaineranalysis_2fv1beta1_2fcommon_2fcommon_2eproto
namespace grafeas {
namespace v1beta1 {
class RelatedUrl;
class RelatedUrlDefaultTypeInternal;
extern RelatedUrlDefaultTypeInternal _RelatedUrl_default_instance_;
}  // namespace v1beta1
}  // namespace grafeas
namespace google {
namespace protobuf {
template<> ::grafeas::v1beta1::RelatedUrl* Arena::CreateMaybeMessage<::grafeas::v1beta1::RelatedUrl>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace grafeas {
namespace v1beta1 {

enum NoteKind {
  NOTE_KIND_UNSPECIFIED = 0,
  VULNERABILITY = 1,
  BUILD = 2,
  IMAGE = 3,
  PACKAGE = 4,
  DEPLOYMENT = 5,
  DISCOVERY = 6,
  ATTESTATION = 7,
  NoteKind_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  NoteKind_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool NoteKind_IsValid(int value);
const NoteKind NoteKind_MIN = NOTE_KIND_UNSPECIFIED;
const NoteKind NoteKind_MAX = ATTESTATION;
const int NoteKind_ARRAYSIZE = NoteKind_MAX + 1;

const ::google::protobuf::EnumDescriptor* NoteKind_descriptor();
inline const ::std::string& NoteKind_Name(NoteKind value) {
  return ::google::protobuf::internal::NameOfEnum(
    NoteKind_descriptor(), value);
}
inline bool NoteKind_Parse(
    const ::std::string& name, NoteKind* value) {
  return ::google::protobuf::internal::ParseNamedEnum<NoteKind>(
    NoteKind_descriptor(), name, value);
}
// ===================================================================

class RelatedUrl : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:grafeas.v1beta1.RelatedUrl) */ {
 public:
  RelatedUrl();
  virtual ~RelatedUrl();

  RelatedUrl(const RelatedUrl& from);

  inline RelatedUrl& operator=(const RelatedUrl& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  RelatedUrl(RelatedUrl&& from) noexcept
    : RelatedUrl() {
    *this = ::std::move(from);
  }

  inline RelatedUrl& operator=(RelatedUrl&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const RelatedUrl& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const RelatedUrl* internal_default_instance() {
    return reinterpret_cast<const RelatedUrl*>(
               &_RelatedUrl_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(RelatedUrl* other);
  friend void swap(RelatedUrl& a, RelatedUrl& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline RelatedUrl* New() const final {
    return CreateMaybeMessage<RelatedUrl>(NULL);
  }

  RelatedUrl* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<RelatedUrl>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const RelatedUrl& from);
  void MergeFrom(const RelatedUrl& from);
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
  void InternalSwap(RelatedUrl* other);
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

  // string url = 1;
  void clear_url();
  static const int kUrlFieldNumber = 1;
  const ::std::string& url() const;
  void set_url(const ::std::string& value);
  #if LANG_CXX11
  void set_url(::std::string&& value);
  #endif
  void set_url(const char* value);
  void set_url(const char* value, size_t size);
  ::std::string* mutable_url();
  ::std::string* release_url();
  void set_allocated_url(::std::string* url);

  // string label = 2;
  void clear_label();
  static const int kLabelFieldNumber = 2;
  const ::std::string& label() const;
  void set_label(const ::std::string& value);
  #if LANG_CXX11
  void set_label(::std::string&& value);
  #endif
  void set_label(const char* value);
  void set_label(const char* value, size_t size);
  ::std::string* mutable_label();
  ::std::string* release_label();
  void set_allocated_label(::std::string* label);

  // @@protoc_insertion_point(class_scope:grafeas.v1beta1.RelatedUrl)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr url_;
  ::google::protobuf::internal::ArenaStringPtr label_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_google_2fdevtools_2fcontaineranalysis_2fv1beta1_2fcommon_2fcommon_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// RelatedUrl

// string url = 1;
inline void RelatedUrl::clear_url() {
  url_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& RelatedUrl::url() const {
  // @@protoc_insertion_point(field_get:grafeas.v1beta1.RelatedUrl.url)
  return url_.GetNoArena();
}
inline void RelatedUrl::set_url(const ::std::string& value) {
  
  url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:grafeas.v1beta1.RelatedUrl.url)
}
#if LANG_CXX11
inline void RelatedUrl::set_url(::std::string&& value) {
  
  url_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:grafeas.v1beta1.RelatedUrl.url)
}
#endif
inline void RelatedUrl::set_url(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:grafeas.v1beta1.RelatedUrl.url)
}
inline void RelatedUrl::set_url(const char* value, size_t size) {
  
  url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:grafeas.v1beta1.RelatedUrl.url)
}
inline ::std::string* RelatedUrl::mutable_url() {
  
  // @@protoc_insertion_point(field_mutable:grafeas.v1beta1.RelatedUrl.url)
  return url_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* RelatedUrl::release_url() {
  // @@protoc_insertion_point(field_release:grafeas.v1beta1.RelatedUrl.url)
  
  return url_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void RelatedUrl::set_allocated_url(::std::string* url) {
  if (url != NULL) {
    
  } else {
    
  }
  url_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), url);
  // @@protoc_insertion_point(field_set_allocated:grafeas.v1beta1.RelatedUrl.url)
}

// string label = 2;
inline void RelatedUrl::clear_label() {
  label_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& RelatedUrl::label() const {
  // @@protoc_insertion_point(field_get:grafeas.v1beta1.RelatedUrl.label)
  return label_.GetNoArena();
}
inline void RelatedUrl::set_label(const ::std::string& value) {
  
  label_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:grafeas.v1beta1.RelatedUrl.label)
}
#if LANG_CXX11
inline void RelatedUrl::set_label(::std::string&& value) {
  
  label_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:grafeas.v1beta1.RelatedUrl.label)
}
#endif
inline void RelatedUrl::set_label(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  label_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:grafeas.v1beta1.RelatedUrl.label)
}
inline void RelatedUrl::set_label(const char* value, size_t size) {
  
  label_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:grafeas.v1beta1.RelatedUrl.label)
}
inline ::std::string* RelatedUrl::mutable_label() {
  
  // @@protoc_insertion_point(field_mutable:grafeas.v1beta1.RelatedUrl.label)
  return label_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* RelatedUrl::release_label() {
  // @@protoc_insertion_point(field_release:grafeas.v1beta1.RelatedUrl.label)
  
  return label_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void RelatedUrl::set_allocated_label(::std::string* label) {
  if (label != NULL) {
    
  } else {
    
  }
  label_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), label);
  // @@protoc_insertion_point(field_set_allocated:grafeas.v1beta1.RelatedUrl.label)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace v1beta1
}  // namespace grafeas

namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::grafeas::v1beta1::NoteKind> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::grafeas::v1beta1::NoteKind>() {
  return ::grafeas::v1beta1::NoteKind_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_google_2fdevtools_2fcontaineranalysis_2fv1beta1_2fcommon_2fcommon_2eproto