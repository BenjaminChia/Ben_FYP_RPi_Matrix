// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/cloud/websecurityscanner/v1alpha/crawled_url.proto

#ifndef PROTOBUF_INCLUDED_google_2fcloud_2fwebsecurityscanner_2fv1alpha_2fcrawled_5furl_2eproto
#define PROTOBUF_INCLUDED_google_2fcloud_2fwebsecurityscanner_2fv1alpha_2fcrawled_5furl_2eproto

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
#include "google/api/annotations.pb.h"
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_google_2fcloud_2fwebsecurityscanner_2fv1alpha_2fcrawled_5furl_2eproto 

namespace protobuf_google_2fcloud_2fwebsecurityscanner_2fv1alpha_2fcrawled_5furl_2eproto {
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
}  // namespace protobuf_google_2fcloud_2fwebsecurityscanner_2fv1alpha_2fcrawled_5furl_2eproto
namespace google {
namespace cloud {
namespace websecurityscanner {
namespace v1alpha {
class CrawledUrl;
class CrawledUrlDefaultTypeInternal;
extern CrawledUrlDefaultTypeInternal _CrawledUrl_default_instance_;
}  // namespace v1alpha
}  // namespace websecurityscanner
}  // namespace cloud
}  // namespace google
namespace google {
namespace protobuf {
template<> ::google::cloud::websecurityscanner::v1alpha::CrawledUrl* Arena::CreateMaybeMessage<::google::cloud::websecurityscanner::v1alpha::CrawledUrl>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace google {
namespace cloud {
namespace websecurityscanner {
namespace v1alpha {

// ===================================================================

class CrawledUrl : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.cloud.websecurityscanner.v1alpha.CrawledUrl) */ {
 public:
  CrawledUrl();
  virtual ~CrawledUrl();

  CrawledUrl(const CrawledUrl& from);

  inline CrawledUrl& operator=(const CrawledUrl& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  CrawledUrl(CrawledUrl&& from) noexcept
    : CrawledUrl() {
    *this = ::std::move(from);
  }

  inline CrawledUrl& operator=(CrawledUrl&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const CrawledUrl& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const CrawledUrl* internal_default_instance() {
    return reinterpret_cast<const CrawledUrl*>(
               &_CrawledUrl_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(CrawledUrl* other);
  friend void swap(CrawledUrl& a, CrawledUrl& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline CrawledUrl* New() const final {
    return CreateMaybeMessage<CrawledUrl>(NULL);
  }

  CrawledUrl* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<CrawledUrl>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const CrawledUrl& from);
  void MergeFrom(const CrawledUrl& from);
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
  void InternalSwap(CrawledUrl* other);
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

  // string http_method = 1;
  void clear_http_method();
  static const int kHttpMethodFieldNumber = 1;
  const ::std::string& http_method() const;
  void set_http_method(const ::std::string& value);
  #if LANG_CXX11
  void set_http_method(::std::string&& value);
  #endif
  void set_http_method(const char* value);
  void set_http_method(const char* value, size_t size);
  ::std::string* mutable_http_method();
  ::std::string* release_http_method();
  void set_allocated_http_method(::std::string* http_method);

  // string url = 2;
  void clear_url();
  static const int kUrlFieldNumber = 2;
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

  // string body = 3;
  void clear_body();
  static const int kBodyFieldNumber = 3;
  const ::std::string& body() const;
  void set_body(const ::std::string& value);
  #if LANG_CXX11
  void set_body(::std::string&& value);
  #endif
  void set_body(const char* value);
  void set_body(const char* value, size_t size);
  ::std::string* mutable_body();
  ::std::string* release_body();
  void set_allocated_body(::std::string* body);

  // @@protoc_insertion_point(class_scope:google.cloud.websecurityscanner.v1alpha.CrawledUrl)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr http_method_;
  ::google::protobuf::internal::ArenaStringPtr url_;
  ::google::protobuf::internal::ArenaStringPtr body_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_google_2fcloud_2fwebsecurityscanner_2fv1alpha_2fcrawled_5furl_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// CrawledUrl

// string http_method = 1;
inline void CrawledUrl::clear_http_method() {
  http_method_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& CrawledUrl::http_method() const {
  // @@protoc_insertion_point(field_get:google.cloud.websecurityscanner.v1alpha.CrawledUrl.http_method)
  return http_method_.GetNoArena();
}
inline void CrawledUrl::set_http_method(const ::std::string& value) {
  
  http_method_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.cloud.websecurityscanner.v1alpha.CrawledUrl.http_method)
}
#if LANG_CXX11
inline void CrawledUrl::set_http_method(::std::string&& value) {
  
  http_method_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:google.cloud.websecurityscanner.v1alpha.CrawledUrl.http_method)
}
#endif
inline void CrawledUrl::set_http_method(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  http_method_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.cloud.websecurityscanner.v1alpha.CrawledUrl.http_method)
}
inline void CrawledUrl::set_http_method(const char* value, size_t size) {
  
  http_method_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.cloud.websecurityscanner.v1alpha.CrawledUrl.http_method)
}
inline ::std::string* CrawledUrl::mutable_http_method() {
  
  // @@protoc_insertion_point(field_mutable:google.cloud.websecurityscanner.v1alpha.CrawledUrl.http_method)
  return http_method_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* CrawledUrl::release_http_method() {
  // @@protoc_insertion_point(field_release:google.cloud.websecurityscanner.v1alpha.CrawledUrl.http_method)
  
  return http_method_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void CrawledUrl::set_allocated_http_method(::std::string* http_method) {
  if (http_method != NULL) {
    
  } else {
    
  }
  http_method_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), http_method);
  // @@protoc_insertion_point(field_set_allocated:google.cloud.websecurityscanner.v1alpha.CrawledUrl.http_method)
}

// string url = 2;
inline void CrawledUrl::clear_url() {
  url_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& CrawledUrl::url() const {
  // @@protoc_insertion_point(field_get:google.cloud.websecurityscanner.v1alpha.CrawledUrl.url)
  return url_.GetNoArena();
}
inline void CrawledUrl::set_url(const ::std::string& value) {
  
  url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.cloud.websecurityscanner.v1alpha.CrawledUrl.url)
}
#if LANG_CXX11
inline void CrawledUrl::set_url(::std::string&& value) {
  
  url_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:google.cloud.websecurityscanner.v1alpha.CrawledUrl.url)
}
#endif
inline void CrawledUrl::set_url(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.cloud.websecurityscanner.v1alpha.CrawledUrl.url)
}
inline void CrawledUrl::set_url(const char* value, size_t size) {
  
  url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.cloud.websecurityscanner.v1alpha.CrawledUrl.url)
}
inline ::std::string* CrawledUrl::mutable_url() {
  
  // @@protoc_insertion_point(field_mutable:google.cloud.websecurityscanner.v1alpha.CrawledUrl.url)
  return url_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* CrawledUrl::release_url() {
  // @@protoc_insertion_point(field_release:google.cloud.websecurityscanner.v1alpha.CrawledUrl.url)
  
  return url_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void CrawledUrl::set_allocated_url(::std::string* url) {
  if (url != NULL) {
    
  } else {
    
  }
  url_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), url);
  // @@protoc_insertion_point(field_set_allocated:google.cloud.websecurityscanner.v1alpha.CrawledUrl.url)
}

// string body = 3;
inline void CrawledUrl::clear_body() {
  body_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& CrawledUrl::body() const {
  // @@protoc_insertion_point(field_get:google.cloud.websecurityscanner.v1alpha.CrawledUrl.body)
  return body_.GetNoArena();
}
inline void CrawledUrl::set_body(const ::std::string& value) {
  
  body_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.cloud.websecurityscanner.v1alpha.CrawledUrl.body)
}
#if LANG_CXX11
inline void CrawledUrl::set_body(::std::string&& value) {
  
  body_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:google.cloud.websecurityscanner.v1alpha.CrawledUrl.body)
}
#endif
inline void CrawledUrl::set_body(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  body_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.cloud.websecurityscanner.v1alpha.CrawledUrl.body)
}
inline void CrawledUrl::set_body(const char* value, size_t size) {
  
  body_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.cloud.websecurityscanner.v1alpha.CrawledUrl.body)
}
inline ::std::string* CrawledUrl::mutable_body() {
  
  // @@protoc_insertion_point(field_mutable:google.cloud.websecurityscanner.v1alpha.CrawledUrl.body)
  return body_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* CrawledUrl::release_body() {
  // @@protoc_insertion_point(field_release:google.cloud.websecurityscanner.v1alpha.CrawledUrl.body)
  
  return body_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void CrawledUrl::set_allocated_body(::std::string* body) {
  if (body != NULL) {
    
  } else {
    
  }
  body_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), body);
  // @@protoc_insertion_point(field_set_allocated:google.cloud.websecurityscanner.v1alpha.CrawledUrl.body)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace v1alpha
}  // namespace websecurityscanner
}  // namespace cloud
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_google_2fcloud_2fwebsecurityscanner_2fv1alpha_2fcrawled_5furl_2eproto
