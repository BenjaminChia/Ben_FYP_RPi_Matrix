// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/ads/googleads/v0/services/customer_service.proto

#ifndef PROTOBUF_INCLUDED_google_2fads_2fgoogleads_2fv0_2fservices_2fcustomer_5fservice_2eproto
#define PROTOBUF_INCLUDED_google_2fads_2fgoogleads_2fv0_2fservices_2fcustomer_5fservice_2eproto

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
#include "google/ads/googleads/v0/resources/customer.pb.h"
#include "google/api/annotations.pb.h"
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_google_2fads_2fgoogleads_2fv0_2fservices_2fcustomer_5fservice_2eproto 

namespace protobuf_google_2fads_2fgoogleads_2fv0_2fservices_2fcustomer_5fservice_2eproto {
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
}  // namespace protobuf_google_2fads_2fgoogleads_2fv0_2fservices_2fcustomer_5fservice_2eproto
namespace google {
namespace ads {
namespace googleads {
namespace v0 {
namespace services {
class GetCustomerRequest;
class GetCustomerRequestDefaultTypeInternal;
extern GetCustomerRequestDefaultTypeInternal _GetCustomerRequest_default_instance_;
}  // namespace services
}  // namespace v0
}  // namespace googleads
}  // namespace ads
}  // namespace google
namespace google {
namespace protobuf {
template<> ::google::ads::googleads::v0::services::GetCustomerRequest* Arena::CreateMaybeMessage<::google::ads::googleads::v0::services::GetCustomerRequest>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace google {
namespace ads {
namespace googleads {
namespace v0 {
namespace services {

// ===================================================================

class GetCustomerRequest : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.ads.googleads.v0.services.GetCustomerRequest) */ {
 public:
  GetCustomerRequest();
  virtual ~GetCustomerRequest();

  GetCustomerRequest(const GetCustomerRequest& from);

  inline GetCustomerRequest& operator=(const GetCustomerRequest& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  GetCustomerRequest(GetCustomerRequest&& from) noexcept
    : GetCustomerRequest() {
    *this = ::std::move(from);
  }

  inline GetCustomerRequest& operator=(GetCustomerRequest&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const GetCustomerRequest& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const GetCustomerRequest* internal_default_instance() {
    return reinterpret_cast<const GetCustomerRequest*>(
               &_GetCustomerRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(GetCustomerRequest* other);
  friend void swap(GetCustomerRequest& a, GetCustomerRequest& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline GetCustomerRequest* New() const final {
    return CreateMaybeMessage<GetCustomerRequest>(NULL);
  }

  GetCustomerRequest* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<GetCustomerRequest>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const GetCustomerRequest& from);
  void MergeFrom(const GetCustomerRequest& from);
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
  void InternalSwap(GetCustomerRequest* other);
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

  // string resource_name = 1;
  void clear_resource_name();
  static const int kResourceNameFieldNumber = 1;
  const ::std::string& resource_name() const;
  void set_resource_name(const ::std::string& value);
  #if LANG_CXX11
  void set_resource_name(::std::string&& value);
  #endif
  void set_resource_name(const char* value);
  void set_resource_name(const char* value, size_t size);
  ::std::string* mutable_resource_name();
  ::std::string* release_resource_name();
  void set_allocated_resource_name(::std::string* resource_name);

  // @@protoc_insertion_point(class_scope:google.ads.googleads.v0.services.GetCustomerRequest)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr resource_name_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_google_2fads_2fgoogleads_2fv0_2fservices_2fcustomer_5fservice_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// GetCustomerRequest

// string resource_name = 1;
inline void GetCustomerRequest::clear_resource_name() {
  resource_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& GetCustomerRequest::resource_name() const {
  // @@protoc_insertion_point(field_get:google.ads.googleads.v0.services.GetCustomerRequest.resource_name)
  return resource_name_.GetNoArena();
}
inline void GetCustomerRequest::set_resource_name(const ::std::string& value) {
  
  resource_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.ads.googleads.v0.services.GetCustomerRequest.resource_name)
}
#if LANG_CXX11
inline void GetCustomerRequest::set_resource_name(::std::string&& value) {
  
  resource_name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:google.ads.googleads.v0.services.GetCustomerRequest.resource_name)
}
#endif
inline void GetCustomerRequest::set_resource_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  resource_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.ads.googleads.v0.services.GetCustomerRequest.resource_name)
}
inline void GetCustomerRequest::set_resource_name(const char* value, size_t size) {
  
  resource_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.ads.googleads.v0.services.GetCustomerRequest.resource_name)
}
inline ::std::string* GetCustomerRequest::mutable_resource_name() {
  
  // @@protoc_insertion_point(field_mutable:google.ads.googleads.v0.services.GetCustomerRequest.resource_name)
  return resource_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* GetCustomerRequest::release_resource_name() {
  // @@protoc_insertion_point(field_release:google.ads.googleads.v0.services.GetCustomerRequest.resource_name)
  
  return resource_name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void GetCustomerRequest::set_allocated_resource_name(::std::string* resource_name) {
  if (resource_name != NULL) {
    
  } else {
    
  }
  resource_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), resource_name);
  // @@protoc_insertion_point(field_set_allocated:google.ads.googleads.v0.services.GetCustomerRequest.resource_name)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace services
}  // namespace v0
}  // namespace googleads
}  // namespace ads
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_google_2fads_2fgoogleads_2fv0_2fservices_2fcustomer_5fservice_2eproto
