// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/iam/v1/logging/audit_data.proto

#ifndef PROTOBUF_INCLUDED_google_2fiam_2fv1_2flogging_2faudit_5fdata_2eproto
#define PROTOBUF_INCLUDED_google_2fiam_2fv1_2flogging_2faudit_5fdata_2eproto

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
#include "google/iam/v1/policy.pb.h"
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_google_2fiam_2fv1_2flogging_2faudit_5fdata_2eproto 

namespace protobuf_google_2fiam_2fv1_2flogging_2faudit_5fdata_2eproto {
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
}  // namespace protobuf_google_2fiam_2fv1_2flogging_2faudit_5fdata_2eproto
namespace google {
namespace iam {
namespace v1 {
namespace logging {
class AuditData;
class AuditDataDefaultTypeInternal;
extern AuditDataDefaultTypeInternal _AuditData_default_instance_;
}  // namespace logging
}  // namespace v1
}  // namespace iam
}  // namespace google
namespace google {
namespace protobuf {
template<> ::google::iam::v1::logging::AuditData* Arena::CreateMaybeMessage<::google::iam::v1::logging::AuditData>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace google {
namespace iam {
namespace v1 {
namespace logging {

// ===================================================================

class AuditData : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.iam.v1.logging.AuditData) */ {
 public:
  AuditData();
  virtual ~AuditData();

  AuditData(const AuditData& from);

  inline AuditData& operator=(const AuditData& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  AuditData(AuditData&& from) noexcept
    : AuditData() {
    *this = ::std::move(from);
  }

  inline AuditData& operator=(AuditData&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const AuditData& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const AuditData* internal_default_instance() {
    return reinterpret_cast<const AuditData*>(
               &_AuditData_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(AuditData* other);
  friend void swap(AuditData& a, AuditData& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline AuditData* New() const final {
    return CreateMaybeMessage<AuditData>(NULL);
  }

  AuditData* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<AuditData>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const AuditData& from);
  void MergeFrom(const AuditData& from);
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
  void InternalSwap(AuditData* other);
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

  // .google.iam.v1.PolicyDelta policy_delta = 2;
  bool has_policy_delta() const;
  void clear_policy_delta();
  static const int kPolicyDeltaFieldNumber = 2;
  private:
  const ::google::iam::v1::PolicyDelta& _internal_policy_delta() const;
  public:
  const ::google::iam::v1::PolicyDelta& policy_delta() const;
  ::google::iam::v1::PolicyDelta* release_policy_delta();
  ::google::iam::v1::PolicyDelta* mutable_policy_delta();
  void set_allocated_policy_delta(::google::iam::v1::PolicyDelta* policy_delta);

  // @@protoc_insertion_point(class_scope:google.iam.v1.logging.AuditData)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::iam::v1::PolicyDelta* policy_delta_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_google_2fiam_2fv1_2flogging_2faudit_5fdata_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// AuditData

// .google.iam.v1.PolicyDelta policy_delta = 2;
inline bool AuditData::has_policy_delta() const {
  return this != internal_default_instance() && policy_delta_ != NULL;
}
inline const ::google::iam::v1::PolicyDelta& AuditData::_internal_policy_delta() const {
  return *policy_delta_;
}
inline const ::google::iam::v1::PolicyDelta& AuditData::policy_delta() const {
  const ::google::iam::v1::PolicyDelta* p = policy_delta_;
  // @@protoc_insertion_point(field_get:google.iam.v1.logging.AuditData.policy_delta)
  return p != NULL ? *p : *reinterpret_cast<const ::google::iam::v1::PolicyDelta*>(
      &::google::iam::v1::_PolicyDelta_default_instance_);
}
inline ::google::iam::v1::PolicyDelta* AuditData::release_policy_delta() {
  // @@protoc_insertion_point(field_release:google.iam.v1.logging.AuditData.policy_delta)
  
  ::google::iam::v1::PolicyDelta* temp = policy_delta_;
  policy_delta_ = NULL;
  return temp;
}
inline ::google::iam::v1::PolicyDelta* AuditData::mutable_policy_delta() {
  
  if (policy_delta_ == NULL) {
    auto* p = CreateMaybeMessage<::google::iam::v1::PolicyDelta>(GetArenaNoVirtual());
    policy_delta_ = p;
  }
  // @@protoc_insertion_point(field_mutable:google.iam.v1.logging.AuditData.policy_delta)
  return policy_delta_;
}
inline void AuditData::set_allocated_policy_delta(::google::iam::v1::PolicyDelta* policy_delta) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(policy_delta_);
  }
  if (policy_delta) {
    ::google::protobuf::Arena* submessage_arena =
      reinterpret_cast<::google::protobuf::MessageLite*>(policy_delta)->GetArena();
    if (message_arena != submessage_arena) {
      policy_delta = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, policy_delta, submessage_arena);
    }
    
  } else {
    
  }
  policy_delta_ = policy_delta;
  // @@protoc_insertion_point(field_set_allocated:google.iam.v1.logging.AuditData.policy_delta)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace logging
}  // namespace v1
}  // namespace iam
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_google_2fiam_2fv1_2flogging_2faudit_5fdata_2eproto
