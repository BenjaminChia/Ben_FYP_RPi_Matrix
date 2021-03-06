// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/cloud/automl/v1beta1/operations.proto

#ifndef PROTOBUF_INCLUDED_google_2fcloud_2fautoml_2fv1beta1_2foperations_2eproto
#define PROTOBUF_INCLUDED_google_2fcloud_2fautoml_2fv1beta1_2foperations_2eproto

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
#include "google/cloud/automl/v1beta1/model.pb.h"
#include "google/cloud/automl/v1beta1/model_evaluation.pb.h"
#include <google/protobuf/empty.pb.h>
#include <google/protobuf/timestamp.pb.h>
#include "google/rpc/status.pb.h"
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_google_2fcloud_2fautoml_2fv1beta1_2foperations_2eproto 

namespace protobuf_google_2fcloud_2fautoml_2fv1beta1_2foperations_2eproto {
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
}  // namespace protobuf_google_2fcloud_2fautoml_2fv1beta1_2foperations_2eproto
namespace google {
namespace cloud {
namespace automl {
namespace v1beta1 {
class CreateModelOperationMetadata;
class CreateModelOperationMetadataDefaultTypeInternal;
extern CreateModelOperationMetadataDefaultTypeInternal _CreateModelOperationMetadata_default_instance_;
class OperationMetadata;
class OperationMetadataDefaultTypeInternal;
extern OperationMetadataDefaultTypeInternal _OperationMetadata_default_instance_;
}  // namespace v1beta1
}  // namespace automl
}  // namespace cloud
}  // namespace google
namespace google {
namespace protobuf {
template<> ::google::cloud::automl::v1beta1::CreateModelOperationMetadata* Arena::CreateMaybeMessage<::google::cloud::automl::v1beta1::CreateModelOperationMetadata>(Arena*);
template<> ::google::cloud::automl::v1beta1::OperationMetadata* Arena::CreateMaybeMessage<::google::cloud::automl::v1beta1::OperationMetadata>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace google {
namespace cloud {
namespace automl {
namespace v1beta1 {

// ===================================================================

class OperationMetadata : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.cloud.automl.v1beta1.OperationMetadata) */ {
 public:
  OperationMetadata();
  virtual ~OperationMetadata();

  OperationMetadata(const OperationMetadata& from);

  inline OperationMetadata& operator=(const OperationMetadata& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  OperationMetadata(OperationMetadata&& from) noexcept
    : OperationMetadata() {
    *this = ::std::move(from);
  }

  inline OperationMetadata& operator=(OperationMetadata&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const OperationMetadata& default_instance();

  enum DetailsCase {
    kCreateModelDetails = 10,
    DETAILS_NOT_SET = 0,
  };

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const OperationMetadata* internal_default_instance() {
    return reinterpret_cast<const OperationMetadata*>(
               &_OperationMetadata_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(OperationMetadata* other);
  friend void swap(OperationMetadata& a, OperationMetadata& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline OperationMetadata* New() const final {
    return CreateMaybeMessage<OperationMetadata>(NULL);
  }

  OperationMetadata* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<OperationMetadata>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const OperationMetadata& from);
  void MergeFrom(const OperationMetadata& from);
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
  void InternalSwap(OperationMetadata* other);
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

  // repeated .google.rpc.Status partial_failures = 2;
  int partial_failures_size() const;
  void clear_partial_failures();
  static const int kPartialFailuresFieldNumber = 2;
  ::google::rpc::Status* mutable_partial_failures(int index);
  ::google::protobuf::RepeatedPtrField< ::google::rpc::Status >*
      mutable_partial_failures();
  const ::google::rpc::Status& partial_failures(int index) const;
  ::google::rpc::Status* add_partial_failures();
  const ::google::protobuf::RepeatedPtrField< ::google::rpc::Status >&
      partial_failures() const;

  // .google.protobuf.Timestamp create_time = 3;
  bool has_create_time() const;
  void clear_create_time();
  static const int kCreateTimeFieldNumber = 3;
  private:
  const ::google::protobuf::Timestamp& _internal_create_time() const;
  public:
  const ::google::protobuf::Timestamp& create_time() const;
  ::google::protobuf::Timestamp* release_create_time();
  ::google::protobuf::Timestamp* mutable_create_time();
  void set_allocated_create_time(::google::protobuf::Timestamp* create_time);

  // .google.protobuf.Timestamp update_time = 4;
  bool has_update_time() const;
  void clear_update_time();
  static const int kUpdateTimeFieldNumber = 4;
  private:
  const ::google::protobuf::Timestamp& _internal_update_time() const;
  public:
  const ::google::protobuf::Timestamp& update_time() const;
  ::google::protobuf::Timestamp* release_update_time();
  ::google::protobuf::Timestamp* mutable_update_time();
  void set_allocated_update_time(::google::protobuf::Timestamp* update_time);

  // int32 progress_percent = 13;
  void clear_progress_percent();
  static const int kProgressPercentFieldNumber = 13;
  ::google::protobuf::int32 progress_percent() const;
  void set_progress_percent(::google::protobuf::int32 value);

  // .google.cloud.automl.v1beta1.CreateModelOperationMetadata create_model_details = 10;
  bool has_create_model_details() const;
  void clear_create_model_details();
  static const int kCreateModelDetailsFieldNumber = 10;
  private:
  const ::google::cloud::automl::v1beta1::CreateModelOperationMetadata& _internal_create_model_details() const;
  public:
  const ::google::cloud::automl::v1beta1::CreateModelOperationMetadata& create_model_details() const;
  ::google::cloud::automl::v1beta1::CreateModelOperationMetadata* release_create_model_details();
  ::google::cloud::automl::v1beta1::CreateModelOperationMetadata* mutable_create_model_details();
  void set_allocated_create_model_details(::google::cloud::automl::v1beta1::CreateModelOperationMetadata* create_model_details);

  void clear_details();
  DetailsCase details_case() const;
  // @@protoc_insertion_point(class_scope:google.cloud.automl.v1beta1.OperationMetadata)
 private:
  void set_has_create_model_details();

  inline bool has_details() const;
  inline void clear_has_details();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::google::rpc::Status > partial_failures_;
  ::google::protobuf::Timestamp* create_time_;
  ::google::protobuf::Timestamp* update_time_;
  ::google::protobuf::int32 progress_percent_;
  union DetailsUnion {
    DetailsUnion() {}
    ::google::cloud::automl::v1beta1::CreateModelOperationMetadata* create_model_details_;
  } details_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::uint32 _oneof_case_[1];

  friend struct ::protobuf_google_2fcloud_2fautoml_2fv1beta1_2foperations_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class CreateModelOperationMetadata : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.cloud.automl.v1beta1.CreateModelOperationMetadata) */ {
 public:
  CreateModelOperationMetadata();
  virtual ~CreateModelOperationMetadata();

  CreateModelOperationMetadata(const CreateModelOperationMetadata& from);

  inline CreateModelOperationMetadata& operator=(const CreateModelOperationMetadata& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  CreateModelOperationMetadata(CreateModelOperationMetadata&& from) noexcept
    : CreateModelOperationMetadata() {
    *this = ::std::move(from);
  }

  inline CreateModelOperationMetadata& operator=(CreateModelOperationMetadata&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const CreateModelOperationMetadata& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const CreateModelOperationMetadata* internal_default_instance() {
    return reinterpret_cast<const CreateModelOperationMetadata*>(
               &_CreateModelOperationMetadata_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(CreateModelOperationMetadata* other);
  friend void swap(CreateModelOperationMetadata& a, CreateModelOperationMetadata& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline CreateModelOperationMetadata* New() const final {
    return CreateMaybeMessage<CreateModelOperationMetadata>(NULL);
  }

  CreateModelOperationMetadata* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<CreateModelOperationMetadata>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const CreateModelOperationMetadata& from);
  void MergeFrom(const CreateModelOperationMetadata& from);
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
  void InternalSwap(CreateModelOperationMetadata* other);
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

  // @@protoc_insertion_point(class_scope:google.cloud.automl.v1beta1.CreateModelOperationMetadata)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_google_2fcloud_2fautoml_2fv1beta1_2foperations_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// OperationMetadata

// .google.cloud.automl.v1beta1.CreateModelOperationMetadata create_model_details = 10;
inline bool OperationMetadata::has_create_model_details() const {
  return details_case() == kCreateModelDetails;
}
inline void OperationMetadata::set_has_create_model_details() {
  _oneof_case_[0] = kCreateModelDetails;
}
inline void OperationMetadata::clear_create_model_details() {
  if (has_create_model_details()) {
    delete details_.create_model_details_;
    clear_has_details();
  }
}
inline const ::google::cloud::automl::v1beta1::CreateModelOperationMetadata& OperationMetadata::_internal_create_model_details() const {
  return *details_.create_model_details_;
}
inline ::google::cloud::automl::v1beta1::CreateModelOperationMetadata* OperationMetadata::release_create_model_details() {
  // @@protoc_insertion_point(field_release:google.cloud.automl.v1beta1.OperationMetadata.create_model_details)
  if (has_create_model_details()) {
    clear_has_details();
      ::google::cloud::automl::v1beta1::CreateModelOperationMetadata* temp = details_.create_model_details_;
    details_.create_model_details_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline const ::google::cloud::automl::v1beta1::CreateModelOperationMetadata& OperationMetadata::create_model_details() const {
  // @@protoc_insertion_point(field_get:google.cloud.automl.v1beta1.OperationMetadata.create_model_details)
  return has_create_model_details()
      ? *details_.create_model_details_
      : *reinterpret_cast< ::google::cloud::automl::v1beta1::CreateModelOperationMetadata*>(&::google::cloud::automl::v1beta1::_CreateModelOperationMetadata_default_instance_);
}
inline ::google::cloud::automl::v1beta1::CreateModelOperationMetadata* OperationMetadata::mutable_create_model_details() {
  if (!has_create_model_details()) {
    clear_details();
    set_has_create_model_details();
    details_.create_model_details_ = CreateMaybeMessage< ::google::cloud::automl::v1beta1::CreateModelOperationMetadata >(
        GetArenaNoVirtual());
  }
  // @@protoc_insertion_point(field_mutable:google.cloud.automl.v1beta1.OperationMetadata.create_model_details)
  return details_.create_model_details_;
}

// int32 progress_percent = 13;
inline void OperationMetadata::clear_progress_percent() {
  progress_percent_ = 0;
}
inline ::google::protobuf::int32 OperationMetadata::progress_percent() const {
  // @@protoc_insertion_point(field_get:google.cloud.automl.v1beta1.OperationMetadata.progress_percent)
  return progress_percent_;
}
inline void OperationMetadata::set_progress_percent(::google::protobuf::int32 value) {
  
  progress_percent_ = value;
  // @@protoc_insertion_point(field_set:google.cloud.automl.v1beta1.OperationMetadata.progress_percent)
}

// repeated .google.rpc.Status partial_failures = 2;
inline int OperationMetadata::partial_failures_size() const {
  return partial_failures_.size();
}
inline ::google::rpc::Status* OperationMetadata::mutable_partial_failures(int index) {
  // @@protoc_insertion_point(field_mutable:google.cloud.automl.v1beta1.OperationMetadata.partial_failures)
  return partial_failures_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::google::rpc::Status >*
OperationMetadata::mutable_partial_failures() {
  // @@protoc_insertion_point(field_mutable_list:google.cloud.automl.v1beta1.OperationMetadata.partial_failures)
  return &partial_failures_;
}
inline const ::google::rpc::Status& OperationMetadata::partial_failures(int index) const {
  // @@protoc_insertion_point(field_get:google.cloud.automl.v1beta1.OperationMetadata.partial_failures)
  return partial_failures_.Get(index);
}
inline ::google::rpc::Status* OperationMetadata::add_partial_failures() {
  // @@protoc_insertion_point(field_add:google.cloud.automl.v1beta1.OperationMetadata.partial_failures)
  return partial_failures_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::google::rpc::Status >&
OperationMetadata::partial_failures() const {
  // @@protoc_insertion_point(field_list:google.cloud.automl.v1beta1.OperationMetadata.partial_failures)
  return partial_failures_;
}

// .google.protobuf.Timestamp create_time = 3;
inline bool OperationMetadata::has_create_time() const {
  return this != internal_default_instance() && create_time_ != NULL;
}
inline const ::google::protobuf::Timestamp& OperationMetadata::_internal_create_time() const {
  return *create_time_;
}
inline const ::google::protobuf::Timestamp& OperationMetadata::create_time() const {
  const ::google::protobuf::Timestamp* p = create_time_;
  // @@protoc_insertion_point(field_get:google.cloud.automl.v1beta1.OperationMetadata.create_time)
  return p != NULL ? *p : *reinterpret_cast<const ::google::protobuf::Timestamp*>(
      &::google::protobuf::_Timestamp_default_instance_);
}
inline ::google::protobuf::Timestamp* OperationMetadata::release_create_time() {
  // @@protoc_insertion_point(field_release:google.cloud.automl.v1beta1.OperationMetadata.create_time)
  
  ::google::protobuf::Timestamp* temp = create_time_;
  create_time_ = NULL;
  return temp;
}
inline ::google::protobuf::Timestamp* OperationMetadata::mutable_create_time() {
  
  if (create_time_ == NULL) {
    auto* p = CreateMaybeMessage<::google::protobuf::Timestamp>(GetArenaNoVirtual());
    create_time_ = p;
  }
  // @@protoc_insertion_point(field_mutable:google.cloud.automl.v1beta1.OperationMetadata.create_time)
  return create_time_;
}
inline void OperationMetadata::set_allocated_create_time(::google::protobuf::Timestamp* create_time) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(create_time_);
  }
  if (create_time) {
    ::google::protobuf::Arena* submessage_arena =
      reinterpret_cast<::google::protobuf::MessageLite*>(create_time)->GetArena();
    if (message_arena != submessage_arena) {
      create_time = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, create_time, submessage_arena);
    }
    
  } else {
    
  }
  create_time_ = create_time;
  // @@protoc_insertion_point(field_set_allocated:google.cloud.automl.v1beta1.OperationMetadata.create_time)
}

// .google.protobuf.Timestamp update_time = 4;
inline bool OperationMetadata::has_update_time() const {
  return this != internal_default_instance() && update_time_ != NULL;
}
inline const ::google::protobuf::Timestamp& OperationMetadata::_internal_update_time() const {
  return *update_time_;
}
inline const ::google::protobuf::Timestamp& OperationMetadata::update_time() const {
  const ::google::protobuf::Timestamp* p = update_time_;
  // @@protoc_insertion_point(field_get:google.cloud.automl.v1beta1.OperationMetadata.update_time)
  return p != NULL ? *p : *reinterpret_cast<const ::google::protobuf::Timestamp*>(
      &::google::protobuf::_Timestamp_default_instance_);
}
inline ::google::protobuf::Timestamp* OperationMetadata::release_update_time() {
  // @@protoc_insertion_point(field_release:google.cloud.automl.v1beta1.OperationMetadata.update_time)
  
  ::google::protobuf::Timestamp* temp = update_time_;
  update_time_ = NULL;
  return temp;
}
inline ::google::protobuf::Timestamp* OperationMetadata::mutable_update_time() {
  
  if (update_time_ == NULL) {
    auto* p = CreateMaybeMessage<::google::protobuf::Timestamp>(GetArenaNoVirtual());
    update_time_ = p;
  }
  // @@protoc_insertion_point(field_mutable:google.cloud.automl.v1beta1.OperationMetadata.update_time)
  return update_time_;
}
inline void OperationMetadata::set_allocated_update_time(::google::protobuf::Timestamp* update_time) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(update_time_);
  }
  if (update_time) {
    ::google::protobuf::Arena* submessage_arena =
      reinterpret_cast<::google::protobuf::MessageLite*>(update_time)->GetArena();
    if (message_arena != submessage_arena) {
      update_time = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, update_time, submessage_arena);
    }
    
  } else {
    
  }
  update_time_ = update_time;
  // @@protoc_insertion_point(field_set_allocated:google.cloud.automl.v1beta1.OperationMetadata.update_time)
}

inline bool OperationMetadata::has_details() const {
  return details_case() != DETAILS_NOT_SET;
}
inline void OperationMetadata::clear_has_details() {
  _oneof_case_[0] = DETAILS_NOT_SET;
}
inline OperationMetadata::DetailsCase OperationMetadata::details_case() const {
  return OperationMetadata::DetailsCase(_oneof_case_[0]);
}
// -------------------------------------------------------------------

// CreateModelOperationMetadata

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace v1beta1
}  // namespace automl
}  // namespace cloud
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_google_2fcloud_2fautoml_2fv1beta1_2foperations_2eproto
