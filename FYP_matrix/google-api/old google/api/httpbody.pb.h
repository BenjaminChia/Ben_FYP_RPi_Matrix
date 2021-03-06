// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/api/httpbody.proto

#ifndef PROTOBUF_google_2fapi_2fhttpbody_2eproto__INCLUDED
#define PROTOBUF_google_2fapi_2fhttpbody_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3001000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3001000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace google {
namespace api {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_google_2fapi_2fhttpbody_2eproto();
void protobuf_InitDefaults_google_2fapi_2fhttpbody_2eproto();
void protobuf_AssignDesc_google_2fapi_2fhttpbody_2eproto();
void protobuf_ShutdownFile_google_2fapi_2fhttpbody_2eproto();

class HttpBody;

// ===================================================================

class HttpBody : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.api.HttpBody) */ {
 public:
  HttpBody();
  virtual ~HttpBody();

  HttpBody(const HttpBody& from);

  inline HttpBody& operator=(const HttpBody& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const HttpBody& default_instance();

  static const HttpBody* internal_default_instance();

  void Swap(HttpBody* other);

  // implements Message ----------------------------------------------

  inline HttpBody* New() const { return New(NULL); }

  HttpBody* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const HttpBody& from);
  void MergeFrom(const HttpBody& from);
  void Clear();
  bool IsInitialized() const;

  size_t ByteSizeLong() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(HttpBody* other);
  void UnsafeMergeFrom(const HttpBody& from);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string content_type = 1;
  void clear_content_type();
  static const int kContentTypeFieldNumber = 1;
  const ::std::string& content_type() const;
  void set_content_type(const ::std::string& value);
  void set_content_type(const char* value);
  void set_content_type(const char* value, size_t size);
  ::std::string* mutable_content_type();
  ::std::string* release_content_type();
  void set_allocated_content_type(::std::string* content_type);

  // optional bytes data = 2;
  void clear_data();
  static const int kDataFieldNumber = 2;
  const ::std::string& data() const;
  void set_data(const ::std::string& value);
  void set_data(const char* value);
  void set_data(const void* value, size_t size);
  ::std::string* mutable_data();
  ::std::string* release_data();
  void set_allocated_data(::std::string* data);

  // @@protoc_insertion_point(class_scope:google.api.HttpBody)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr content_type_;
  ::google::protobuf::internal::ArenaStringPtr data_;
  mutable int _cached_size_;
  friend void  protobuf_InitDefaults_google_2fapi_2fhttpbody_2eproto_impl();
  friend void  protobuf_AddDesc_google_2fapi_2fhttpbody_2eproto_impl();
  friend void protobuf_AssignDesc_google_2fapi_2fhttpbody_2eproto();
  friend void protobuf_ShutdownFile_google_2fapi_2fhttpbody_2eproto();

  void InitAsDefaultInstance();
};
extern ::google::protobuf::internal::ExplicitlyConstructed<HttpBody> HttpBody_default_instance_;

// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// HttpBody

// optional string content_type = 1;
inline void HttpBody::clear_content_type() {
  content_type_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& HttpBody::content_type() const {
  // @@protoc_insertion_point(field_get:google.api.HttpBody.content_type)
  return content_type_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void HttpBody::set_content_type(const ::std::string& value) {
  
  content_type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.api.HttpBody.content_type)
}
inline void HttpBody::set_content_type(const char* value) {
  
  content_type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.api.HttpBody.content_type)
}
inline void HttpBody::set_content_type(const char* value, size_t size) {
  
  content_type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.api.HttpBody.content_type)
}
inline ::std::string* HttpBody::mutable_content_type() {
  
  // @@protoc_insertion_point(field_mutable:google.api.HttpBody.content_type)
  return content_type_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* HttpBody::release_content_type() {
  // @@protoc_insertion_point(field_release:google.api.HttpBody.content_type)
  
  return content_type_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void HttpBody::set_allocated_content_type(::std::string* content_type) {
  if (content_type != NULL) {
    
  } else {
    
  }
  content_type_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), content_type);
  // @@protoc_insertion_point(field_set_allocated:google.api.HttpBody.content_type)
}

// optional bytes data = 2;
inline void HttpBody::clear_data() {
  data_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& HttpBody::data() const {
  // @@protoc_insertion_point(field_get:google.api.HttpBody.data)
  return data_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void HttpBody::set_data(const ::std::string& value) {
  
  data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.api.HttpBody.data)
}
inline void HttpBody::set_data(const char* value) {
  
  data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.api.HttpBody.data)
}
inline void HttpBody::set_data(const void* value, size_t size) {
  
  data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.api.HttpBody.data)
}
inline ::std::string* HttpBody::mutable_data() {
  
  // @@protoc_insertion_point(field_mutable:google.api.HttpBody.data)
  return data_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* HttpBody::release_data() {
  // @@protoc_insertion_point(field_release:google.api.HttpBody.data)
  
  return data_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void HttpBody::set_allocated_data(::std::string* data) {
  if (data != NULL) {
    
  } else {
    
  }
  data_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), data);
  // @@protoc_insertion_point(field_set_allocated:google.api.HttpBody.data)
}

inline const HttpBody* HttpBody::internal_default_instance() {
  return &HttpBody_default_instance_.get();
}
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace api
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_google_2fapi_2fhttpbody_2eproto__INCLUDED
