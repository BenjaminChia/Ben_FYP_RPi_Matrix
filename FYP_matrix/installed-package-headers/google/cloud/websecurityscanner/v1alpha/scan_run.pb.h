// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/cloud/websecurityscanner/v1alpha/scan_run.proto

#ifndef PROTOBUF_INCLUDED_google_2fcloud_2fwebsecurityscanner_2fv1alpha_2fscan_5frun_2eproto
#define PROTOBUF_INCLUDED_google_2fcloud_2fwebsecurityscanner_2fv1alpha_2fscan_5frun_2eproto

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
#include "google/api/annotations.pb.h"
#include <google/protobuf/timestamp.pb.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_google_2fcloud_2fwebsecurityscanner_2fv1alpha_2fscan_5frun_2eproto 

namespace protobuf_google_2fcloud_2fwebsecurityscanner_2fv1alpha_2fscan_5frun_2eproto {
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
}  // namespace protobuf_google_2fcloud_2fwebsecurityscanner_2fv1alpha_2fscan_5frun_2eproto
namespace google {
namespace cloud {
namespace websecurityscanner {
namespace v1alpha {
class ScanRun;
class ScanRunDefaultTypeInternal;
extern ScanRunDefaultTypeInternal _ScanRun_default_instance_;
}  // namespace v1alpha
}  // namespace websecurityscanner
}  // namespace cloud
}  // namespace google
namespace google {
namespace protobuf {
template<> ::google::cloud::websecurityscanner::v1alpha::ScanRun* Arena::CreateMaybeMessage<::google::cloud::websecurityscanner::v1alpha::ScanRun>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace google {
namespace cloud {
namespace websecurityscanner {
namespace v1alpha {

enum ScanRun_ExecutionState {
  ScanRun_ExecutionState_EXECUTION_STATE_UNSPECIFIED = 0,
  ScanRun_ExecutionState_QUEUED = 1,
  ScanRun_ExecutionState_SCANNING = 2,
  ScanRun_ExecutionState_FINISHED = 3,
  ScanRun_ExecutionState_ScanRun_ExecutionState_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  ScanRun_ExecutionState_ScanRun_ExecutionState_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool ScanRun_ExecutionState_IsValid(int value);
const ScanRun_ExecutionState ScanRun_ExecutionState_ExecutionState_MIN = ScanRun_ExecutionState_EXECUTION_STATE_UNSPECIFIED;
const ScanRun_ExecutionState ScanRun_ExecutionState_ExecutionState_MAX = ScanRun_ExecutionState_FINISHED;
const int ScanRun_ExecutionState_ExecutionState_ARRAYSIZE = ScanRun_ExecutionState_ExecutionState_MAX + 1;

const ::google::protobuf::EnumDescriptor* ScanRun_ExecutionState_descriptor();
inline const ::std::string& ScanRun_ExecutionState_Name(ScanRun_ExecutionState value) {
  return ::google::protobuf::internal::NameOfEnum(
    ScanRun_ExecutionState_descriptor(), value);
}
inline bool ScanRun_ExecutionState_Parse(
    const ::std::string& name, ScanRun_ExecutionState* value) {
  return ::google::protobuf::internal::ParseNamedEnum<ScanRun_ExecutionState>(
    ScanRun_ExecutionState_descriptor(), name, value);
}
enum ScanRun_ResultState {
  ScanRun_ResultState_RESULT_STATE_UNSPECIFIED = 0,
  ScanRun_ResultState_SUCCESS = 1,
  ScanRun_ResultState_ERROR = 2,
  ScanRun_ResultState_KILLED = 3,
  ScanRun_ResultState_ScanRun_ResultState_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  ScanRun_ResultState_ScanRun_ResultState_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool ScanRun_ResultState_IsValid(int value);
const ScanRun_ResultState ScanRun_ResultState_ResultState_MIN = ScanRun_ResultState_RESULT_STATE_UNSPECIFIED;
const ScanRun_ResultState ScanRun_ResultState_ResultState_MAX = ScanRun_ResultState_KILLED;
const int ScanRun_ResultState_ResultState_ARRAYSIZE = ScanRun_ResultState_ResultState_MAX + 1;

const ::google::protobuf::EnumDescriptor* ScanRun_ResultState_descriptor();
inline const ::std::string& ScanRun_ResultState_Name(ScanRun_ResultState value) {
  return ::google::protobuf::internal::NameOfEnum(
    ScanRun_ResultState_descriptor(), value);
}
inline bool ScanRun_ResultState_Parse(
    const ::std::string& name, ScanRun_ResultState* value) {
  return ::google::protobuf::internal::ParseNamedEnum<ScanRun_ResultState>(
    ScanRun_ResultState_descriptor(), name, value);
}
// ===================================================================

class ScanRun : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.cloud.websecurityscanner.v1alpha.ScanRun) */ {
 public:
  ScanRun();
  virtual ~ScanRun();

  ScanRun(const ScanRun& from);

  inline ScanRun& operator=(const ScanRun& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  ScanRun(ScanRun&& from) noexcept
    : ScanRun() {
    *this = ::std::move(from);
  }

  inline ScanRun& operator=(ScanRun&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const ScanRun& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ScanRun* internal_default_instance() {
    return reinterpret_cast<const ScanRun*>(
               &_ScanRun_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(ScanRun* other);
  friend void swap(ScanRun& a, ScanRun& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ScanRun* New() const final {
    return CreateMaybeMessage<ScanRun>(NULL);
  }

  ScanRun* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<ScanRun>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const ScanRun& from);
  void MergeFrom(const ScanRun& from);
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
  void InternalSwap(ScanRun* other);
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

  typedef ScanRun_ExecutionState ExecutionState;
  static const ExecutionState EXECUTION_STATE_UNSPECIFIED =
    ScanRun_ExecutionState_EXECUTION_STATE_UNSPECIFIED;
  static const ExecutionState QUEUED =
    ScanRun_ExecutionState_QUEUED;
  static const ExecutionState SCANNING =
    ScanRun_ExecutionState_SCANNING;
  static const ExecutionState FINISHED =
    ScanRun_ExecutionState_FINISHED;
  static inline bool ExecutionState_IsValid(int value) {
    return ScanRun_ExecutionState_IsValid(value);
  }
  static const ExecutionState ExecutionState_MIN =
    ScanRun_ExecutionState_ExecutionState_MIN;
  static const ExecutionState ExecutionState_MAX =
    ScanRun_ExecutionState_ExecutionState_MAX;
  static const int ExecutionState_ARRAYSIZE =
    ScanRun_ExecutionState_ExecutionState_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  ExecutionState_descriptor() {
    return ScanRun_ExecutionState_descriptor();
  }
  static inline const ::std::string& ExecutionState_Name(ExecutionState value) {
    return ScanRun_ExecutionState_Name(value);
  }
  static inline bool ExecutionState_Parse(const ::std::string& name,
      ExecutionState* value) {
    return ScanRun_ExecutionState_Parse(name, value);
  }

  typedef ScanRun_ResultState ResultState;
  static const ResultState RESULT_STATE_UNSPECIFIED =
    ScanRun_ResultState_RESULT_STATE_UNSPECIFIED;
  static const ResultState SUCCESS =
    ScanRun_ResultState_SUCCESS;
  static const ResultState ERROR =
    ScanRun_ResultState_ERROR;
  static const ResultState KILLED =
    ScanRun_ResultState_KILLED;
  static inline bool ResultState_IsValid(int value) {
    return ScanRun_ResultState_IsValid(value);
  }
  static const ResultState ResultState_MIN =
    ScanRun_ResultState_ResultState_MIN;
  static const ResultState ResultState_MAX =
    ScanRun_ResultState_ResultState_MAX;
  static const int ResultState_ARRAYSIZE =
    ScanRun_ResultState_ResultState_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  ResultState_descriptor() {
    return ScanRun_ResultState_descriptor();
  }
  static inline const ::std::string& ResultState_Name(ResultState value) {
    return ScanRun_ResultState_Name(value);
  }
  static inline bool ResultState_Parse(const ::std::string& name,
      ResultState* value) {
    return ScanRun_ResultState_Parse(name, value);
  }

  // accessors -------------------------------------------------------

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

  // .google.protobuf.Timestamp start_time = 4;
  bool has_start_time() const;
  void clear_start_time();
  static const int kStartTimeFieldNumber = 4;
  private:
  const ::google::protobuf::Timestamp& _internal_start_time() const;
  public:
  const ::google::protobuf::Timestamp& start_time() const;
  ::google::protobuf::Timestamp* release_start_time();
  ::google::protobuf::Timestamp* mutable_start_time();
  void set_allocated_start_time(::google::protobuf::Timestamp* start_time);

  // .google.protobuf.Timestamp end_time = 5;
  bool has_end_time() const;
  void clear_end_time();
  static const int kEndTimeFieldNumber = 5;
  private:
  const ::google::protobuf::Timestamp& _internal_end_time() const;
  public:
  const ::google::protobuf::Timestamp& end_time() const;
  ::google::protobuf::Timestamp* release_end_time();
  ::google::protobuf::Timestamp* mutable_end_time();
  void set_allocated_end_time(::google::protobuf::Timestamp* end_time);

  // .google.cloud.websecurityscanner.v1alpha.ScanRun.ExecutionState execution_state = 2;
  void clear_execution_state();
  static const int kExecutionStateFieldNumber = 2;
  ::google::cloud::websecurityscanner::v1alpha::ScanRun_ExecutionState execution_state() const;
  void set_execution_state(::google::cloud::websecurityscanner::v1alpha::ScanRun_ExecutionState value);

  // .google.cloud.websecurityscanner.v1alpha.ScanRun.ResultState result_state = 3;
  void clear_result_state();
  static const int kResultStateFieldNumber = 3;
  ::google::cloud::websecurityscanner::v1alpha::ScanRun_ResultState result_state() const;
  void set_result_state(::google::cloud::websecurityscanner::v1alpha::ScanRun_ResultState value);

  // int64 urls_crawled_count = 6;
  void clear_urls_crawled_count();
  static const int kUrlsCrawledCountFieldNumber = 6;
  ::google::protobuf::int64 urls_crawled_count() const;
  void set_urls_crawled_count(::google::protobuf::int64 value);

  // int64 urls_tested_count = 7;
  void clear_urls_tested_count();
  static const int kUrlsTestedCountFieldNumber = 7;
  ::google::protobuf::int64 urls_tested_count() const;
  void set_urls_tested_count(::google::protobuf::int64 value);

  // bool has_vulnerabilities = 8;
  void clear_has_vulnerabilities();
  static const int kHasVulnerabilitiesFieldNumber = 8;
  bool has_vulnerabilities() const;
  void set_has_vulnerabilities(bool value);

  // int32 progress_percent = 9;
  void clear_progress_percent();
  static const int kProgressPercentFieldNumber = 9;
  ::google::protobuf::int32 progress_percent() const;
  void set_progress_percent(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:google.cloud.websecurityscanner.v1alpha.ScanRun)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::Timestamp* start_time_;
  ::google::protobuf::Timestamp* end_time_;
  int execution_state_;
  int result_state_;
  ::google::protobuf::int64 urls_crawled_count_;
  ::google::protobuf::int64 urls_tested_count_;
  bool has_vulnerabilities_;
  ::google::protobuf::int32 progress_percent_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_google_2fcloud_2fwebsecurityscanner_2fv1alpha_2fscan_5frun_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ScanRun

// string name = 1;
inline void ScanRun::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& ScanRun::name() const {
  // @@protoc_insertion_point(field_get:google.cloud.websecurityscanner.v1alpha.ScanRun.name)
  return name_.GetNoArena();
}
inline void ScanRun::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.cloud.websecurityscanner.v1alpha.ScanRun.name)
}
#if LANG_CXX11
inline void ScanRun::set_name(::std::string&& value) {
  
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:google.cloud.websecurityscanner.v1alpha.ScanRun.name)
}
#endif
inline void ScanRun::set_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.cloud.websecurityscanner.v1alpha.ScanRun.name)
}
inline void ScanRun::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.cloud.websecurityscanner.v1alpha.ScanRun.name)
}
inline ::std::string* ScanRun::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:google.cloud.websecurityscanner.v1alpha.ScanRun.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ScanRun::release_name() {
  // @@protoc_insertion_point(field_release:google.cloud.websecurityscanner.v1alpha.ScanRun.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ScanRun::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:google.cloud.websecurityscanner.v1alpha.ScanRun.name)
}

// .google.cloud.websecurityscanner.v1alpha.ScanRun.ExecutionState execution_state = 2;
inline void ScanRun::clear_execution_state() {
  execution_state_ = 0;
}
inline ::google::cloud::websecurityscanner::v1alpha::ScanRun_ExecutionState ScanRun::execution_state() const {
  // @@protoc_insertion_point(field_get:google.cloud.websecurityscanner.v1alpha.ScanRun.execution_state)
  return static_cast< ::google::cloud::websecurityscanner::v1alpha::ScanRun_ExecutionState >(execution_state_);
}
inline void ScanRun::set_execution_state(::google::cloud::websecurityscanner::v1alpha::ScanRun_ExecutionState value) {
  
  execution_state_ = value;
  // @@protoc_insertion_point(field_set:google.cloud.websecurityscanner.v1alpha.ScanRun.execution_state)
}

// .google.cloud.websecurityscanner.v1alpha.ScanRun.ResultState result_state = 3;
inline void ScanRun::clear_result_state() {
  result_state_ = 0;
}
inline ::google::cloud::websecurityscanner::v1alpha::ScanRun_ResultState ScanRun::result_state() const {
  // @@protoc_insertion_point(field_get:google.cloud.websecurityscanner.v1alpha.ScanRun.result_state)
  return static_cast< ::google::cloud::websecurityscanner::v1alpha::ScanRun_ResultState >(result_state_);
}
inline void ScanRun::set_result_state(::google::cloud::websecurityscanner::v1alpha::ScanRun_ResultState value) {
  
  result_state_ = value;
  // @@protoc_insertion_point(field_set:google.cloud.websecurityscanner.v1alpha.ScanRun.result_state)
}

// .google.protobuf.Timestamp start_time = 4;
inline bool ScanRun::has_start_time() const {
  return this != internal_default_instance() && start_time_ != NULL;
}
inline const ::google::protobuf::Timestamp& ScanRun::_internal_start_time() const {
  return *start_time_;
}
inline const ::google::protobuf::Timestamp& ScanRun::start_time() const {
  const ::google::protobuf::Timestamp* p = start_time_;
  // @@protoc_insertion_point(field_get:google.cloud.websecurityscanner.v1alpha.ScanRun.start_time)
  return p != NULL ? *p : *reinterpret_cast<const ::google::protobuf::Timestamp*>(
      &::google::protobuf::_Timestamp_default_instance_);
}
inline ::google::protobuf::Timestamp* ScanRun::release_start_time() {
  // @@protoc_insertion_point(field_release:google.cloud.websecurityscanner.v1alpha.ScanRun.start_time)
  
  ::google::protobuf::Timestamp* temp = start_time_;
  start_time_ = NULL;
  return temp;
}
inline ::google::protobuf::Timestamp* ScanRun::mutable_start_time() {
  
  if (start_time_ == NULL) {
    auto* p = CreateMaybeMessage<::google::protobuf::Timestamp>(GetArenaNoVirtual());
    start_time_ = p;
  }
  // @@protoc_insertion_point(field_mutable:google.cloud.websecurityscanner.v1alpha.ScanRun.start_time)
  return start_time_;
}
inline void ScanRun::set_allocated_start_time(::google::protobuf::Timestamp* start_time) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(start_time_);
  }
  if (start_time) {
    ::google::protobuf::Arena* submessage_arena =
      reinterpret_cast<::google::protobuf::MessageLite*>(start_time)->GetArena();
    if (message_arena != submessage_arena) {
      start_time = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, start_time, submessage_arena);
    }
    
  } else {
    
  }
  start_time_ = start_time;
  // @@protoc_insertion_point(field_set_allocated:google.cloud.websecurityscanner.v1alpha.ScanRun.start_time)
}

// .google.protobuf.Timestamp end_time = 5;
inline bool ScanRun::has_end_time() const {
  return this != internal_default_instance() && end_time_ != NULL;
}
inline const ::google::protobuf::Timestamp& ScanRun::_internal_end_time() const {
  return *end_time_;
}
inline const ::google::protobuf::Timestamp& ScanRun::end_time() const {
  const ::google::protobuf::Timestamp* p = end_time_;
  // @@protoc_insertion_point(field_get:google.cloud.websecurityscanner.v1alpha.ScanRun.end_time)
  return p != NULL ? *p : *reinterpret_cast<const ::google::protobuf::Timestamp*>(
      &::google::protobuf::_Timestamp_default_instance_);
}
inline ::google::protobuf::Timestamp* ScanRun::release_end_time() {
  // @@protoc_insertion_point(field_release:google.cloud.websecurityscanner.v1alpha.ScanRun.end_time)
  
  ::google::protobuf::Timestamp* temp = end_time_;
  end_time_ = NULL;
  return temp;
}
inline ::google::protobuf::Timestamp* ScanRun::mutable_end_time() {
  
  if (end_time_ == NULL) {
    auto* p = CreateMaybeMessage<::google::protobuf::Timestamp>(GetArenaNoVirtual());
    end_time_ = p;
  }
  // @@protoc_insertion_point(field_mutable:google.cloud.websecurityscanner.v1alpha.ScanRun.end_time)
  return end_time_;
}
inline void ScanRun::set_allocated_end_time(::google::protobuf::Timestamp* end_time) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(end_time_);
  }
  if (end_time) {
    ::google::protobuf::Arena* submessage_arena =
      reinterpret_cast<::google::protobuf::MessageLite*>(end_time)->GetArena();
    if (message_arena != submessage_arena) {
      end_time = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, end_time, submessage_arena);
    }
    
  } else {
    
  }
  end_time_ = end_time;
  // @@protoc_insertion_point(field_set_allocated:google.cloud.websecurityscanner.v1alpha.ScanRun.end_time)
}

// int64 urls_crawled_count = 6;
inline void ScanRun::clear_urls_crawled_count() {
  urls_crawled_count_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 ScanRun::urls_crawled_count() const {
  // @@protoc_insertion_point(field_get:google.cloud.websecurityscanner.v1alpha.ScanRun.urls_crawled_count)
  return urls_crawled_count_;
}
inline void ScanRun::set_urls_crawled_count(::google::protobuf::int64 value) {
  
  urls_crawled_count_ = value;
  // @@protoc_insertion_point(field_set:google.cloud.websecurityscanner.v1alpha.ScanRun.urls_crawled_count)
}

// int64 urls_tested_count = 7;
inline void ScanRun::clear_urls_tested_count() {
  urls_tested_count_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 ScanRun::urls_tested_count() const {
  // @@protoc_insertion_point(field_get:google.cloud.websecurityscanner.v1alpha.ScanRun.urls_tested_count)
  return urls_tested_count_;
}
inline void ScanRun::set_urls_tested_count(::google::protobuf::int64 value) {
  
  urls_tested_count_ = value;
  // @@protoc_insertion_point(field_set:google.cloud.websecurityscanner.v1alpha.ScanRun.urls_tested_count)
}

// bool has_vulnerabilities = 8;
inline void ScanRun::clear_has_vulnerabilities() {
  has_vulnerabilities_ = false;
}
inline bool ScanRun::has_vulnerabilities() const {
  // @@protoc_insertion_point(field_get:google.cloud.websecurityscanner.v1alpha.ScanRun.has_vulnerabilities)
  return has_vulnerabilities_;
}
inline void ScanRun::set_has_vulnerabilities(bool value) {
  
  has_vulnerabilities_ = value;
  // @@protoc_insertion_point(field_set:google.cloud.websecurityscanner.v1alpha.ScanRun.has_vulnerabilities)
}

// int32 progress_percent = 9;
inline void ScanRun::clear_progress_percent() {
  progress_percent_ = 0;
}
inline ::google::protobuf::int32 ScanRun::progress_percent() const {
  // @@protoc_insertion_point(field_get:google.cloud.websecurityscanner.v1alpha.ScanRun.progress_percent)
  return progress_percent_;
}
inline void ScanRun::set_progress_percent(::google::protobuf::int32 value) {
  
  progress_percent_ = value;
  // @@protoc_insertion_point(field_set:google.cloud.websecurityscanner.v1alpha.ScanRun.progress_percent)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace v1alpha
}  // namespace websecurityscanner
}  // namespace cloud
}  // namespace google

namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::google::cloud::websecurityscanner::v1alpha::ScanRun_ExecutionState> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::google::cloud::websecurityscanner::v1alpha::ScanRun_ExecutionState>() {
  return ::google::cloud::websecurityscanner::v1alpha::ScanRun_ExecutionState_descriptor();
}
template <> struct is_proto_enum< ::google::cloud::websecurityscanner::v1alpha::ScanRun_ResultState> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::google::cloud::websecurityscanner::v1alpha::ScanRun_ResultState>() {
  return ::google::cloud::websecurityscanner::v1alpha::ScanRun_ResultState_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_google_2fcloud_2fwebsecurityscanner_2fv1alpha_2fscan_5frun_2eproto