// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/cloud/automl/v1beta1/prediction_service.proto

#ifndef PROTOBUF_INCLUDED_google_2fcloud_2fautoml_2fv1beta1_2fprediction_5fservice_2eproto
#define PROTOBUF_INCLUDED_google_2fcloud_2fautoml_2fv1beta1_2fprediction_5fservice_2eproto

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
#include "google/cloud/automl/v1beta1/annotation_payload.pb.h"
#include "google/cloud/automl/v1beta1/data_items.pb.h"
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_google_2fcloud_2fautoml_2fv1beta1_2fprediction_5fservice_2eproto 

namespace protobuf_google_2fcloud_2fautoml_2fv1beta1_2fprediction_5fservice_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[4];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_google_2fcloud_2fautoml_2fv1beta1_2fprediction_5fservice_2eproto
namespace google {
namespace cloud {
namespace automl {
namespace v1beta1 {
class PredictRequest;
class PredictRequestDefaultTypeInternal;
extern PredictRequestDefaultTypeInternal _PredictRequest_default_instance_;
class PredictRequest_ParamsEntry_DoNotUse;
class PredictRequest_ParamsEntry_DoNotUseDefaultTypeInternal;
extern PredictRequest_ParamsEntry_DoNotUseDefaultTypeInternal _PredictRequest_ParamsEntry_DoNotUse_default_instance_;
class PredictResponse;
class PredictResponseDefaultTypeInternal;
extern PredictResponseDefaultTypeInternal _PredictResponse_default_instance_;
class PredictResponse_MetadataEntry_DoNotUse;
class PredictResponse_MetadataEntry_DoNotUseDefaultTypeInternal;
extern PredictResponse_MetadataEntry_DoNotUseDefaultTypeInternal _PredictResponse_MetadataEntry_DoNotUse_default_instance_;
}  // namespace v1beta1
}  // namespace automl
}  // namespace cloud
}  // namespace google
namespace google {
namespace protobuf {
template<> ::google::cloud::automl::v1beta1::PredictRequest* Arena::CreateMaybeMessage<::google::cloud::automl::v1beta1::PredictRequest>(Arena*);
template<> ::google::cloud::automl::v1beta1::PredictRequest_ParamsEntry_DoNotUse* Arena::CreateMaybeMessage<::google::cloud::automl::v1beta1::PredictRequest_ParamsEntry_DoNotUse>(Arena*);
template<> ::google::cloud::automl::v1beta1::PredictResponse* Arena::CreateMaybeMessage<::google::cloud::automl::v1beta1::PredictResponse>(Arena*);
template<> ::google::cloud::automl::v1beta1::PredictResponse_MetadataEntry_DoNotUse* Arena::CreateMaybeMessage<::google::cloud::automl::v1beta1::PredictResponse_MetadataEntry_DoNotUse>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace google {
namespace cloud {
namespace automl {
namespace v1beta1 {

// ===================================================================

class PredictRequest_ParamsEntry_DoNotUse : public ::google::protobuf::internal::MapEntry<PredictRequest_ParamsEntry_DoNotUse, 
    ::std::string, ::std::string,
    ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
    ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
    0 > {
public:
  typedef ::google::protobuf::internal::MapEntry<PredictRequest_ParamsEntry_DoNotUse, 
    ::std::string, ::std::string,
    ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
    ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
    0 > SuperType;
  PredictRequest_ParamsEntry_DoNotUse();
  PredictRequest_ParamsEntry_DoNotUse(::google::protobuf::Arena* arena);
  void MergeFrom(const PredictRequest_ParamsEntry_DoNotUse& other);
  static const PredictRequest_ParamsEntry_DoNotUse* internal_default_instance() { return reinterpret_cast<const PredictRequest_ParamsEntry_DoNotUse*>(&_PredictRequest_ParamsEntry_DoNotUse_default_instance_); }
  void MergeFrom(const ::google::protobuf::Message& other) final;
  ::google::protobuf::Metadata GetMetadata() const;
};

// -------------------------------------------------------------------

class PredictRequest : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.cloud.automl.v1beta1.PredictRequest) */ {
 public:
  PredictRequest();
  virtual ~PredictRequest();

  PredictRequest(const PredictRequest& from);

  inline PredictRequest& operator=(const PredictRequest& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  PredictRequest(PredictRequest&& from) noexcept
    : PredictRequest() {
    *this = ::std::move(from);
  }

  inline PredictRequest& operator=(PredictRequest&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const PredictRequest& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const PredictRequest* internal_default_instance() {
    return reinterpret_cast<const PredictRequest*>(
               &_PredictRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(PredictRequest* other);
  friend void swap(PredictRequest& a, PredictRequest& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline PredictRequest* New() const final {
    return CreateMaybeMessage<PredictRequest>(NULL);
  }

  PredictRequest* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<PredictRequest>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const PredictRequest& from);
  void MergeFrom(const PredictRequest& from);
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
  void InternalSwap(PredictRequest* other);
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

  // map<string, string> params = 3;
  int params_size() const;
  void clear_params();
  static const int kParamsFieldNumber = 3;
  const ::google::protobuf::Map< ::std::string, ::std::string >&
      params() const;
  ::google::protobuf::Map< ::std::string, ::std::string >*
      mutable_params();

  // string name = 1;
  void clear_name();
  static const int kNameFieldNumber = 1;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  #if LANG_CXX11
  void set_name(::std::string&& value);
  #endif
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // .google.cloud.automl.v1beta1.ExamplePayload payload = 2;
  bool has_payload() const;
  void clear_payload();
  static const int kPayloadFieldNumber = 2;
  private:
  const ::google::cloud::automl::v1beta1::ExamplePayload& _internal_payload() const;
  public:
  const ::google::cloud::automl::v1beta1::ExamplePayload& payload() const;
  ::google::cloud::automl::v1beta1::ExamplePayload* release_payload();
  ::google::cloud::automl::v1beta1::ExamplePayload* mutable_payload();
  void set_allocated_payload(::google::cloud::automl::v1beta1::ExamplePayload* payload);

  // @@protoc_insertion_point(class_scope:google.cloud.automl.v1beta1.PredictRequest)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::MapField<
      PredictRequest_ParamsEntry_DoNotUse,
      ::std::string, ::std::string,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      0 > params_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::cloud::automl::v1beta1::ExamplePayload* payload_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_google_2fcloud_2fautoml_2fv1beta1_2fprediction_5fservice_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class PredictResponse_MetadataEntry_DoNotUse : public ::google::protobuf::internal::MapEntry<PredictResponse_MetadataEntry_DoNotUse, 
    ::std::string, ::std::string,
    ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
    ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
    0 > {
public:
  typedef ::google::protobuf::internal::MapEntry<PredictResponse_MetadataEntry_DoNotUse, 
    ::std::string, ::std::string,
    ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
    ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
    0 > SuperType;
  PredictResponse_MetadataEntry_DoNotUse();
  PredictResponse_MetadataEntry_DoNotUse(::google::protobuf::Arena* arena);
  void MergeFrom(const PredictResponse_MetadataEntry_DoNotUse& other);
  static const PredictResponse_MetadataEntry_DoNotUse* internal_default_instance() { return reinterpret_cast<const PredictResponse_MetadataEntry_DoNotUse*>(&_PredictResponse_MetadataEntry_DoNotUse_default_instance_); }
  void MergeFrom(const ::google::protobuf::Message& other) final;
  ::google::protobuf::Metadata GetMetadata() const;
};

// -------------------------------------------------------------------

class PredictResponse : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.cloud.automl.v1beta1.PredictResponse) */ {
 public:
  PredictResponse();
  virtual ~PredictResponse();

  PredictResponse(const PredictResponse& from);

  inline PredictResponse& operator=(const PredictResponse& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  PredictResponse(PredictResponse&& from) noexcept
    : PredictResponse() {
    *this = ::std::move(from);
  }

  inline PredictResponse& operator=(PredictResponse&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const PredictResponse& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const PredictResponse* internal_default_instance() {
    return reinterpret_cast<const PredictResponse*>(
               &_PredictResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    3;

  void Swap(PredictResponse* other);
  friend void swap(PredictResponse& a, PredictResponse& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline PredictResponse* New() const final {
    return CreateMaybeMessage<PredictResponse>(NULL);
  }

  PredictResponse* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<PredictResponse>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const PredictResponse& from);
  void MergeFrom(const PredictResponse& from);
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
  void InternalSwap(PredictResponse* other);
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

  // repeated .google.cloud.automl.v1beta1.AnnotationPayload payload = 1;
  int payload_size() const;
  void clear_payload();
  static const int kPayloadFieldNumber = 1;
  ::google::cloud::automl::v1beta1::AnnotationPayload* mutable_payload(int index);
  ::google::protobuf::RepeatedPtrField< ::google::cloud::automl::v1beta1::AnnotationPayload >*
      mutable_payload();
  const ::google::cloud::automl::v1beta1::AnnotationPayload& payload(int index) const;
  ::google::cloud::automl::v1beta1::AnnotationPayload* add_payload();
  const ::google::protobuf::RepeatedPtrField< ::google::cloud::automl::v1beta1::AnnotationPayload >&
      payload() const;

  // map<string, string> metadata = 2;
  int metadata_size() const;
  void clear_metadata();
  static const int kMetadataFieldNumber = 2;
  const ::google::protobuf::Map< ::std::string, ::std::string >&
      metadata() const;
  ::google::protobuf::Map< ::std::string, ::std::string >*
      mutable_metadata();

  // @@protoc_insertion_point(class_scope:google.cloud.automl.v1beta1.PredictResponse)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::google::cloud::automl::v1beta1::AnnotationPayload > payload_;
  ::google::protobuf::internal::MapField<
      PredictResponse_MetadataEntry_DoNotUse,
      ::std::string, ::std::string,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      0 > metadata_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_google_2fcloud_2fautoml_2fv1beta1_2fprediction_5fservice_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// PredictRequest

// string name = 1;
inline void PredictRequest::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& PredictRequest::name() const {
  // @@protoc_insertion_point(field_get:google.cloud.automl.v1beta1.PredictRequest.name)
  return name_.GetNoArena();
}
inline void PredictRequest::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.cloud.automl.v1beta1.PredictRequest.name)
}
#if LANG_CXX11
inline void PredictRequest::set_name(::std::string&& value) {
  
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:google.cloud.automl.v1beta1.PredictRequest.name)
}
#endif
inline void PredictRequest::set_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.cloud.automl.v1beta1.PredictRequest.name)
}
inline void PredictRequest::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.cloud.automl.v1beta1.PredictRequest.name)
}
inline ::std::string* PredictRequest::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:google.cloud.automl.v1beta1.PredictRequest.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* PredictRequest::release_name() {
  // @@protoc_insertion_point(field_release:google.cloud.automl.v1beta1.PredictRequest.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void PredictRequest::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:google.cloud.automl.v1beta1.PredictRequest.name)
}

// .google.cloud.automl.v1beta1.ExamplePayload payload = 2;
inline bool PredictRequest::has_payload() const {
  return this != internal_default_instance() && payload_ != NULL;
}
inline const ::google::cloud::automl::v1beta1::ExamplePayload& PredictRequest::_internal_payload() const {
  return *payload_;
}
inline const ::google::cloud::automl::v1beta1::ExamplePayload& PredictRequest::payload() const {
  const ::google::cloud::automl::v1beta1::ExamplePayload* p = payload_;
  // @@protoc_insertion_point(field_get:google.cloud.automl.v1beta1.PredictRequest.payload)
  return p != NULL ? *p : *reinterpret_cast<const ::google::cloud::automl::v1beta1::ExamplePayload*>(
      &::google::cloud::automl::v1beta1::_ExamplePayload_default_instance_);
}
inline ::google::cloud::automl::v1beta1::ExamplePayload* PredictRequest::release_payload() {
  // @@protoc_insertion_point(field_release:google.cloud.automl.v1beta1.PredictRequest.payload)
  
  ::google::cloud::automl::v1beta1::ExamplePayload* temp = payload_;
  payload_ = NULL;
  return temp;
}
inline ::google::cloud::automl::v1beta1::ExamplePayload* PredictRequest::mutable_payload() {
  
  if (payload_ == NULL) {
    auto* p = CreateMaybeMessage<::google::cloud::automl::v1beta1::ExamplePayload>(GetArenaNoVirtual());
    payload_ = p;
  }
  // @@protoc_insertion_point(field_mutable:google.cloud.automl.v1beta1.PredictRequest.payload)
  return payload_;
}
inline void PredictRequest::set_allocated_payload(::google::cloud::automl::v1beta1::ExamplePayload* payload) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(payload_);
  }
  if (payload) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      payload = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, payload, submessage_arena);
    }
    
  } else {
    
  }
  payload_ = payload;
  // @@protoc_insertion_point(field_set_allocated:google.cloud.automl.v1beta1.PredictRequest.payload)
}

// map<string, string> params = 3;
inline int PredictRequest::params_size() const {
  return params_.size();
}
inline void PredictRequest::clear_params() {
  params_.Clear();
}
inline const ::google::protobuf::Map< ::std::string, ::std::string >&
PredictRequest::params() const {
  // @@protoc_insertion_point(field_map:google.cloud.automl.v1beta1.PredictRequest.params)
  return params_.GetMap();
}
inline ::google::protobuf::Map< ::std::string, ::std::string >*
PredictRequest::mutable_params() {
  // @@protoc_insertion_point(field_mutable_map:google.cloud.automl.v1beta1.PredictRequest.params)
  return params_.MutableMap();
}

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// PredictResponse

// repeated .google.cloud.automl.v1beta1.AnnotationPayload payload = 1;
inline int PredictResponse::payload_size() const {
  return payload_.size();
}
inline ::google::cloud::automl::v1beta1::AnnotationPayload* PredictResponse::mutable_payload(int index) {
  // @@protoc_insertion_point(field_mutable:google.cloud.automl.v1beta1.PredictResponse.payload)
  return payload_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::google::cloud::automl::v1beta1::AnnotationPayload >*
PredictResponse::mutable_payload() {
  // @@protoc_insertion_point(field_mutable_list:google.cloud.automl.v1beta1.PredictResponse.payload)
  return &payload_;
}
inline const ::google::cloud::automl::v1beta1::AnnotationPayload& PredictResponse::payload(int index) const {
  // @@protoc_insertion_point(field_get:google.cloud.automl.v1beta1.PredictResponse.payload)
  return payload_.Get(index);
}
inline ::google::cloud::automl::v1beta1::AnnotationPayload* PredictResponse::add_payload() {
  // @@protoc_insertion_point(field_add:google.cloud.automl.v1beta1.PredictResponse.payload)
  return payload_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::google::cloud::automl::v1beta1::AnnotationPayload >&
PredictResponse::payload() const {
  // @@protoc_insertion_point(field_list:google.cloud.automl.v1beta1.PredictResponse.payload)
  return payload_;
}

// map<string, string> metadata = 2;
inline int PredictResponse::metadata_size() const {
  return metadata_.size();
}
inline void PredictResponse::clear_metadata() {
  metadata_.Clear();
}
inline const ::google::protobuf::Map< ::std::string, ::std::string >&
PredictResponse::metadata() const {
  // @@protoc_insertion_point(field_map:google.cloud.automl.v1beta1.PredictResponse.metadata)
  return metadata_.GetMap();
}
inline ::google::protobuf::Map< ::std::string, ::std::string >*
PredictResponse::mutable_metadata() {
  // @@protoc_insertion_point(field_mutable_map:google.cloud.automl.v1beta1.PredictResponse.metadata)
  return metadata_.MutableMap();
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace v1beta1
}  // namespace automl
}  // namespace cloud
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_google_2fcloud_2fautoml_2fv1beta1_2fprediction_5fservice_2eproto