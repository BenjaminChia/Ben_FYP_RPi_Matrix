// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/monitoring/v3/mutation_record.proto

#ifndef PROTOBUF_INCLUDED_google_2fmonitoring_2fv3_2fmutation_5frecord_2eproto
#define PROTOBUF_INCLUDED_google_2fmonitoring_2fv3_2fmutation_5frecord_2eproto

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
#include <google/protobuf/timestamp.pb.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_google_2fmonitoring_2fv3_2fmutation_5frecord_2eproto 

namespace protobuf_google_2fmonitoring_2fv3_2fmutation_5frecord_2eproto {
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
}  // namespace protobuf_google_2fmonitoring_2fv3_2fmutation_5frecord_2eproto
namespace google {
namespace monitoring {
namespace v3 {
class MutationRecord;
class MutationRecordDefaultTypeInternal;
extern MutationRecordDefaultTypeInternal _MutationRecord_default_instance_;
}  // namespace v3
}  // namespace monitoring
}  // namespace google
namespace google {
namespace protobuf {
template<> ::google::monitoring::v3::MutationRecord* Arena::CreateMaybeMessage<::google::monitoring::v3::MutationRecord>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace google {
namespace monitoring {
namespace v3 {

// ===================================================================

class MutationRecord : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.monitoring.v3.MutationRecord) */ {
 public:
  MutationRecord();
  virtual ~MutationRecord();

  MutationRecord(const MutationRecord& from);

  inline MutationRecord& operator=(const MutationRecord& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  MutationRecord(MutationRecord&& from) noexcept
    : MutationRecord() {
    *this = ::std::move(from);
  }

  inline MutationRecord& operator=(MutationRecord&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const MutationRecord& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const MutationRecord* internal_default_instance() {
    return reinterpret_cast<const MutationRecord*>(
               &_MutationRecord_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(MutationRecord* other);
  friend void swap(MutationRecord& a, MutationRecord& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline MutationRecord* New() const final {
    return CreateMaybeMessage<MutationRecord>(NULL);
  }

  MutationRecord* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<MutationRecord>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const MutationRecord& from);
  void MergeFrom(const MutationRecord& from);
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
  void InternalSwap(MutationRecord* other);
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

  // string mutated_by = 2;
  void clear_mutated_by();
  static const int kMutatedByFieldNumber = 2;
  const ::std::string& mutated_by() const;
  void set_mutated_by(const ::std::string& value);
  #if LANG_CXX11
  void set_mutated_by(::std::string&& value);
  #endif
  void set_mutated_by(const char* value);
  void set_mutated_by(const char* value, size_t size);
  ::std::string* mutable_mutated_by();
  ::std::string* release_mutated_by();
  void set_allocated_mutated_by(::std::string* mutated_by);

  // .google.protobuf.Timestamp mutate_time = 1;
  bool has_mutate_time() const;
  void clear_mutate_time();
  static const int kMutateTimeFieldNumber = 1;
  private:
  const ::google::protobuf::Timestamp& _internal_mutate_time() const;
  public:
  const ::google::protobuf::Timestamp& mutate_time() const;
  ::google::protobuf::Timestamp* release_mutate_time();
  ::google::protobuf::Timestamp* mutable_mutate_time();
  void set_allocated_mutate_time(::google::protobuf::Timestamp* mutate_time);

  // @@protoc_insertion_point(class_scope:google.monitoring.v3.MutationRecord)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr mutated_by_;
  ::google::protobuf::Timestamp* mutate_time_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_google_2fmonitoring_2fv3_2fmutation_5frecord_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// MutationRecord

// .google.protobuf.Timestamp mutate_time = 1;
inline bool MutationRecord::has_mutate_time() const {
  return this != internal_default_instance() && mutate_time_ != NULL;
}
inline const ::google::protobuf::Timestamp& MutationRecord::_internal_mutate_time() const {
  return *mutate_time_;
}
inline const ::google::protobuf::Timestamp& MutationRecord::mutate_time() const {
  const ::google::protobuf::Timestamp* p = mutate_time_;
  // @@protoc_insertion_point(field_get:google.monitoring.v3.MutationRecord.mutate_time)
  return p != NULL ? *p : *reinterpret_cast<const ::google::protobuf::Timestamp*>(
      &::google::protobuf::_Timestamp_default_instance_);
}
inline ::google::protobuf::Timestamp* MutationRecord::release_mutate_time() {
  // @@protoc_insertion_point(field_release:google.monitoring.v3.MutationRecord.mutate_time)
  
  ::google::protobuf::Timestamp* temp = mutate_time_;
  mutate_time_ = NULL;
  return temp;
}
inline ::google::protobuf::Timestamp* MutationRecord::mutable_mutate_time() {
  
  if (mutate_time_ == NULL) {
    auto* p = CreateMaybeMessage<::google::protobuf::Timestamp>(GetArenaNoVirtual());
    mutate_time_ = p;
  }
  // @@protoc_insertion_point(field_mutable:google.monitoring.v3.MutationRecord.mutate_time)
  return mutate_time_;
}
inline void MutationRecord::set_allocated_mutate_time(::google::protobuf::Timestamp* mutate_time) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(mutate_time_);
  }
  if (mutate_time) {
    ::google::protobuf::Arena* submessage_arena =
      reinterpret_cast<::google::protobuf::MessageLite*>(mutate_time)->GetArena();
    if (message_arena != submessage_arena) {
      mutate_time = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, mutate_time, submessage_arena);
    }
    
  } else {
    
  }
  mutate_time_ = mutate_time;
  // @@protoc_insertion_point(field_set_allocated:google.monitoring.v3.MutationRecord.mutate_time)
}

// string mutated_by = 2;
inline void MutationRecord::clear_mutated_by() {
  mutated_by_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& MutationRecord::mutated_by() const {
  // @@protoc_insertion_point(field_get:google.monitoring.v3.MutationRecord.mutated_by)
  return mutated_by_.GetNoArena();
}
inline void MutationRecord::set_mutated_by(const ::std::string& value) {
  
  mutated_by_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.monitoring.v3.MutationRecord.mutated_by)
}
#if LANG_CXX11
inline void MutationRecord::set_mutated_by(::std::string&& value) {
  
  mutated_by_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:google.monitoring.v3.MutationRecord.mutated_by)
}
#endif
inline void MutationRecord::set_mutated_by(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  mutated_by_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.monitoring.v3.MutationRecord.mutated_by)
}
inline void MutationRecord::set_mutated_by(const char* value, size_t size) {
  
  mutated_by_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.monitoring.v3.MutationRecord.mutated_by)
}
inline ::std::string* MutationRecord::mutable_mutated_by() {
  
  // @@protoc_insertion_point(field_mutable:google.monitoring.v3.MutationRecord.mutated_by)
  return mutated_by_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* MutationRecord::release_mutated_by() {
  // @@protoc_insertion_point(field_release:google.monitoring.v3.MutationRecord.mutated_by)
  
  return mutated_by_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MutationRecord::set_allocated_mutated_by(::std::string* mutated_by) {
  if (mutated_by != NULL) {
    
  } else {
    
  }
  mutated_by_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), mutated_by);
  // @@protoc_insertion_point(field_set_allocated:google.monitoring.v3.MutationRecord.mutated_by)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace v3
}  // namespace monitoring
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_google_2fmonitoring_2fv3_2fmutation_5frecord_2eproto
