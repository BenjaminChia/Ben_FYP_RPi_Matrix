// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/devtools/resultstore/v2/coverage_summary.proto

#ifndef PROTOBUF_INCLUDED_google_2fdevtools_2fresultstore_2fv2_2fcoverage_5fsummary_2eproto
#define PROTOBUF_INCLUDED_google_2fdevtools_2fresultstore_2fv2_2fcoverage_5fsummary_2eproto

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
#include "google/devtools/resultstore/v2/common.pb.h"
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_google_2fdevtools_2fresultstore_2fv2_2fcoverage_5fsummary_2eproto 

namespace protobuf_google_2fdevtools_2fresultstore_2fv2_2fcoverage_5fsummary_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[3];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_google_2fdevtools_2fresultstore_2fv2_2fcoverage_5fsummary_2eproto
namespace google {
namespace devtools {
namespace resultstore {
namespace v2 {
class BranchCoverageSummary;
class BranchCoverageSummaryDefaultTypeInternal;
extern BranchCoverageSummaryDefaultTypeInternal _BranchCoverageSummary_default_instance_;
class LanguageCoverageSummary;
class LanguageCoverageSummaryDefaultTypeInternal;
extern LanguageCoverageSummaryDefaultTypeInternal _LanguageCoverageSummary_default_instance_;
class LineCoverageSummary;
class LineCoverageSummaryDefaultTypeInternal;
extern LineCoverageSummaryDefaultTypeInternal _LineCoverageSummary_default_instance_;
}  // namespace v2
}  // namespace resultstore
}  // namespace devtools
}  // namespace google
namespace google {
namespace protobuf {
template<> ::google::devtools::resultstore::v2::BranchCoverageSummary* Arena::CreateMaybeMessage<::google::devtools::resultstore::v2::BranchCoverageSummary>(Arena*);
template<> ::google::devtools::resultstore::v2::LanguageCoverageSummary* Arena::CreateMaybeMessage<::google::devtools::resultstore::v2::LanguageCoverageSummary>(Arena*);
template<> ::google::devtools::resultstore::v2::LineCoverageSummary* Arena::CreateMaybeMessage<::google::devtools::resultstore::v2::LineCoverageSummary>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace google {
namespace devtools {
namespace resultstore {
namespace v2 {

// ===================================================================

class LineCoverageSummary : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.devtools.resultstore.v2.LineCoverageSummary) */ {
 public:
  LineCoverageSummary();
  virtual ~LineCoverageSummary();

  LineCoverageSummary(const LineCoverageSummary& from);

  inline LineCoverageSummary& operator=(const LineCoverageSummary& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  LineCoverageSummary(LineCoverageSummary&& from) noexcept
    : LineCoverageSummary() {
    *this = ::std::move(from);
  }

  inline LineCoverageSummary& operator=(LineCoverageSummary&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const LineCoverageSummary& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const LineCoverageSummary* internal_default_instance() {
    return reinterpret_cast<const LineCoverageSummary*>(
               &_LineCoverageSummary_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(LineCoverageSummary* other);
  friend void swap(LineCoverageSummary& a, LineCoverageSummary& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline LineCoverageSummary* New() const final {
    return CreateMaybeMessage<LineCoverageSummary>(NULL);
  }

  LineCoverageSummary* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<LineCoverageSummary>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const LineCoverageSummary& from);
  void MergeFrom(const LineCoverageSummary& from);
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
  void InternalSwap(LineCoverageSummary* other);
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

  // int32 instrumented_line_count = 1;
  void clear_instrumented_line_count();
  static const int kInstrumentedLineCountFieldNumber = 1;
  ::google::protobuf::int32 instrumented_line_count() const;
  void set_instrumented_line_count(::google::protobuf::int32 value);

  // int32 executed_line_count = 2;
  void clear_executed_line_count();
  static const int kExecutedLineCountFieldNumber = 2;
  ::google::protobuf::int32 executed_line_count() const;
  void set_executed_line_count(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:google.devtools.resultstore.v2.LineCoverageSummary)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::int32 instrumented_line_count_;
  ::google::protobuf::int32 executed_line_count_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_google_2fdevtools_2fresultstore_2fv2_2fcoverage_5fsummary_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class BranchCoverageSummary : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.devtools.resultstore.v2.BranchCoverageSummary) */ {
 public:
  BranchCoverageSummary();
  virtual ~BranchCoverageSummary();

  BranchCoverageSummary(const BranchCoverageSummary& from);

  inline BranchCoverageSummary& operator=(const BranchCoverageSummary& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  BranchCoverageSummary(BranchCoverageSummary&& from) noexcept
    : BranchCoverageSummary() {
    *this = ::std::move(from);
  }

  inline BranchCoverageSummary& operator=(BranchCoverageSummary&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const BranchCoverageSummary& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const BranchCoverageSummary* internal_default_instance() {
    return reinterpret_cast<const BranchCoverageSummary*>(
               &_BranchCoverageSummary_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(BranchCoverageSummary* other);
  friend void swap(BranchCoverageSummary& a, BranchCoverageSummary& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline BranchCoverageSummary* New() const final {
    return CreateMaybeMessage<BranchCoverageSummary>(NULL);
  }

  BranchCoverageSummary* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<BranchCoverageSummary>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const BranchCoverageSummary& from);
  void MergeFrom(const BranchCoverageSummary& from);
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
  void InternalSwap(BranchCoverageSummary* other);
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

  // int32 total_branch_count = 1;
  void clear_total_branch_count();
  static const int kTotalBranchCountFieldNumber = 1;
  ::google::protobuf::int32 total_branch_count() const;
  void set_total_branch_count(::google::protobuf::int32 value);

  // int32 executed_branch_count = 2;
  void clear_executed_branch_count();
  static const int kExecutedBranchCountFieldNumber = 2;
  ::google::protobuf::int32 executed_branch_count() const;
  void set_executed_branch_count(::google::protobuf::int32 value);

  // int32 taken_branch_count = 3;
  void clear_taken_branch_count();
  static const int kTakenBranchCountFieldNumber = 3;
  ::google::protobuf::int32 taken_branch_count() const;
  void set_taken_branch_count(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:google.devtools.resultstore.v2.BranchCoverageSummary)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::int32 total_branch_count_;
  ::google::protobuf::int32 executed_branch_count_;
  ::google::protobuf::int32 taken_branch_count_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_google_2fdevtools_2fresultstore_2fv2_2fcoverage_5fsummary_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class LanguageCoverageSummary : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.devtools.resultstore.v2.LanguageCoverageSummary) */ {
 public:
  LanguageCoverageSummary();
  virtual ~LanguageCoverageSummary();

  LanguageCoverageSummary(const LanguageCoverageSummary& from);

  inline LanguageCoverageSummary& operator=(const LanguageCoverageSummary& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  LanguageCoverageSummary(LanguageCoverageSummary&& from) noexcept
    : LanguageCoverageSummary() {
    *this = ::std::move(from);
  }

  inline LanguageCoverageSummary& operator=(LanguageCoverageSummary&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const LanguageCoverageSummary& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const LanguageCoverageSummary* internal_default_instance() {
    return reinterpret_cast<const LanguageCoverageSummary*>(
               &_LanguageCoverageSummary_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  void Swap(LanguageCoverageSummary* other);
  friend void swap(LanguageCoverageSummary& a, LanguageCoverageSummary& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline LanguageCoverageSummary* New() const final {
    return CreateMaybeMessage<LanguageCoverageSummary>(NULL);
  }

  LanguageCoverageSummary* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<LanguageCoverageSummary>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const LanguageCoverageSummary& from);
  void MergeFrom(const LanguageCoverageSummary& from);
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
  void InternalSwap(LanguageCoverageSummary* other);
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

  // .google.devtools.resultstore.v2.LineCoverageSummary line_summary = 2;
  bool has_line_summary() const;
  void clear_line_summary();
  static const int kLineSummaryFieldNumber = 2;
  private:
  const ::google::devtools::resultstore::v2::LineCoverageSummary& _internal_line_summary() const;
  public:
  const ::google::devtools::resultstore::v2::LineCoverageSummary& line_summary() const;
  ::google::devtools::resultstore::v2::LineCoverageSummary* release_line_summary();
  ::google::devtools::resultstore::v2::LineCoverageSummary* mutable_line_summary();
  void set_allocated_line_summary(::google::devtools::resultstore::v2::LineCoverageSummary* line_summary);

  // .google.devtools.resultstore.v2.BranchCoverageSummary branch_summary = 3;
  bool has_branch_summary() const;
  void clear_branch_summary();
  static const int kBranchSummaryFieldNumber = 3;
  private:
  const ::google::devtools::resultstore::v2::BranchCoverageSummary& _internal_branch_summary() const;
  public:
  const ::google::devtools::resultstore::v2::BranchCoverageSummary& branch_summary() const;
  ::google::devtools::resultstore::v2::BranchCoverageSummary* release_branch_summary();
  ::google::devtools::resultstore::v2::BranchCoverageSummary* mutable_branch_summary();
  void set_allocated_branch_summary(::google::devtools::resultstore::v2::BranchCoverageSummary* branch_summary);

  // .google.devtools.resultstore.v2.Language language = 1;
  void clear_language();
  static const int kLanguageFieldNumber = 1;
  ::google::devtools::resultstore::v2::Language language() const;
  void set_language(::google::devtools::resultstore::v2::Language value);

  // @@protoc_insertion_point(class_scope:google.devtools.resultstore.v2.LanguageCoverageSummary)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::devtools::resultstore::v2::LineCoverageSummary* line_summary_;
  ::google::devtools::resultstore::v2::BranchCoverageSummary* branch_summary_;
  int language_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_google_2fdevtools_2fresultstore_2fv2_2fcoverage_5fsummary_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// LineCoverageSummary

// int32 instrumented_line_count = 1;
inline void LineCoverageSummary::clear_instrumented_line_count() {
  instrumented_line_count_ = 0;
}
inline ::google::protobuf::int32 LineCoverageSummary::instrumented_line_count() const {
  // @@protoc_insertion_point(field_get:google.devtools.resultstore.v2.LineCoverageSummary.instrumented_line_count)
  return instrumented_line_count_;
}
inline void LineCoverageSummary::set_instrumented_line_count(::google::protobuf::int32 value) {
  
  instrumented_line_count_ = value;
  // @@protoc_insertion_point(field_set:google.devtools.resultstore.v2.LineCoverageSummary.instrumented_line_count)
}

// int32 executed_line_count = 2;
inline void LineCoverageSummary::clear_executed_line_count() {
  executed_line_count_ = 0;
}
inline ::google::protobuf::int32 LineCoverageSummary::executed_line_count() const {
  // @@protoc_insertion_point(field_get:google.devtools.resultstore.v2.LineCoverageSummary.executed_line_count)
  return executed_line_count_;
}
inline void LineCoverageSummary::set_executed_line_count(::google::protobuf::int32 value) {
  
  executed_line_count_ = value;
  // @@protoc_insertion_point(field_set:google.devtools.resultstore.v2.LineCoverageSummary.executed_line_count)
}

// -------------------------------------------------------------------

// BranchCoverageSummary

// int32 total_branch_count = 1;
inline void BranchCoverageSummary::clear_total_branch_count() {
  total_branch_count_ = 0;
}
inline ::google::protobuf::int32 BranchCoverageSummary::total_branch_count() const {
  // @@protoc_insertion_point(field_get:google.devtools.resultstore.v2.BranchCoverageSummary.total_branch_count)
  return total_branch_count_;
}
inline void BranchCoverageSummary::set_total_branch_count(::google::protobuf::int32 value) {
  
  total_branch_count_ = value;
  // @@protoc_insertion_point(field_set:google.devtools.resultstore.v2.BranchCoverageSummary.total_branch_count)
}

// int32 executed_branch_count = 2;
inline void BranchCoverageSummary::clear_executed_branch_count() {
  executed_branch_count_ = 0;
}
inline ::google::protobuf::int32 BranchCoverageSummary::executed_branch_count() const {
  // @@protoc_insertion_point(field_get:google.devtools.resultstore.v2.BranchCoverageSummary.executed_branch_count)
  return executed_branch_count_;
}
inline void BranchCoverageSummary::set_executed_branch_count(::google::protobuf::int32 value) {
  
  executed_branch_count_ = value;
  // @@protoc_insertion_point(field_set:google.devtools.resultstore.v2.BranchCoverageSummary.executed_branch_count)
}

// int32 taken_branch_count = 3;
inline void BranchCoverageSummary::clear_taken_branch_count() {
  taken_branch_count_ = 0;
}
inline ::google::protobuf::int32 BranchCoverageSummary::taken_branch_count() const {
  // @@protoc_insertion_point(field_get:google.devtools.resultstore.v2.BranchCoverageSummary.taken_branch_count)
  return taken_branch_count_;
}
inline void BranchCoverageSummary::set_taken_branch_count(::google::protobuf::int32 value) {
  
  taken_branch_count_ = value;
  // @@protoc_insertion_point(field_set:google.devtools.resultstore.v2.BranchCoverageSummary.taken_branch_count)
}

// -------------------------------------------------------------------

// LanguageCoverageSummary

// .google.devtools.resultstore.v2.Language language = 1;
inline void LanguageCoverageSummary::clear_language() {
  language_ = 0;
}
inline ::google::devtools::resultstore::v2::Language LanguageCoverageSummary::language() const {
  // @@protoc_insertion_point(field_get:google.devtools.resultstore.v2.LanguageCoverageSummary.language)
  return static_cast< ::google::devtools::resultstore::v2::Language >(language_);
}
inline void LanguageCoverageSummary::set_language(::google::devtools::resultstore::v2::Language value) {
  
  language_ = value;
  // @@protoc_insertion_point(field_set:google.devtools.resultstore.v2.LanguageCoverageSummary.language)
}

// .google.devtools.resultstore.v2.LineCoverageSummary line_summary = 2;
inline bool LanguageCoverageSummary::has_line_summary() const {
  return this != internal_default_instance() && line_summary_ != NULL;
}
inline void LanguageCoverageSummary::clear_line_summary() {
  if (GetArenaNoVirtual() == NULL && line_summary_ != NULL) {
    delete line_summary_;
  }
  line_summary_ = NULL;
}
inline const ::google::devtools::resultstore::v2::LineCoverageSummary& LanguageCoverageSummary::_internal_line_summary() const {
  return *line_summary_;
}
inline const ::google::devtools::resultstore::v2::LineCoverageSummary& LanguageCoverageSummary::line_summary() const {
  const ::google::devtools::resultstore::v2::LineCoverageSummary* p = line_summary_;
  // @@protoc_insertion_point(field_get:google.devtools.resultstore.v2.LanguageCoverageSummary.line_summary)
  return p != NULL ? *p : *reinterpret_cast<const ::google::devtools::resultstore::v2::LineCoverageSummary*>(
      &::google::devtools::resultstore::v2::_LineCoverageSummary_default_instance_);
}
inline ::google::devtools::resultstore::v2::LineCoverageSummary* LanguageCoverageSummary::release_line_summary() {
  // @@protoc_insertion_point(field_release:google.devtools.resultstore.v2.LanguageCoverageSummary.line_summary)
  
  ::google::devtools::resultstore::v2::LineCoverageSummary* temp = line_summary_;
  line_summary_ = NULL;
  return temp;
}
inline ::google::devtools::resultstore::v2::LineCoverageSummary* LanguageCoverageSummary::mutable_line_summary() {
  
  if (line_summary_ == NULL) {
    auto* p = CreateMaybeMessage<::google::devtools::resultstore::v2::LineCoverageSummary>(GetArenaNoVirtual());
    line_summary_ = p;
  }
  // @@protoc_insertion_point(field_mutable:google.devtools.resultstore.v2.LanguageCoverageSummary.line_summary)
  return line_summary_;
}
inline void LanguageCoverageSummary::set_allocated_line_summary(::google::devtools::resultstore::v2::LineCoverageSummary* line_summary) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete line_summary_;
  }
  if (line_summary) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      line_summary = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, line_summary, submessage_arena);
    }
    
  } else {
    
  }
  line_summary_ = line_summary;
  // @@protoc_insertion_point(field_set_allocated:google.devtools.resultstore.v2.LanguageCoverageSummary.line_summary)
}

// .google.devtools.resultstore.v2.BranchCoverageSummary branch_summary = 3;
inline bool LanguageCoverageSummary::has_branch_summary() const {
  return this != internal_default_instance() && branch_summary_ != NULL;
}
inline void LanguageCoverageSummary::clear_branch_summary() {
  if (GetArenaNoVirtual() == NULL && branch_summary_ != NULL) {
    delete branch_summary_;
  }
  branch_summary_ = NULL;
}
inline const ::google::devtools::resultstore::v2::BranchCoverageSummary& LanguageCoverageSummary::_internal_branch_summary() const {
  return *branch_summary_;
}
inline const ::google::devtools::resultstore::v2::BranchCoverageSummary& LanguageCoverageSummary::branch_summary() const {
  const ::google::devtools::resultstore::v2::BranchCoverageSummary* p = branch_summary_;
  // @@protoc_insertion_point(field_get:google.devtools.resultstore.v2.LanguageCoverageSummary.branch_summary)
  return p != NULL ? *p : *reinterpret_cast<const ::google::devtools::resultstore::v2::BranchCoverageSummary*>(
      &::google::devtools::resultstore::v2::_BranchCoverageSummary_default_instance_);
}
inline ::google::devtools::resultstore::v2::BranchCoverageSummary* LanguageCoverageSummary::release_branch_summary() {
  // @@protoc_insertion_point(field_release:google.devtools.resultstore.v2.LanguageCoverageSummary.branch_summary)
  
  ::google::devtools::resultstore::v2::BranchCoverageSummary* temp = branch_summary_;
  branch_summary_ = NULL;
  return temp;
}
inline ::google::devtools::resultstore::v2::BranchCoverageSummary* LanguageCoverageSummary::mutable_branch_summary() {
  
  if (branch_summary_ == NULL) {
    auto* p = CreateMaybeMessage<::google::devtools::resultstore::v2::BranchCoverageSummary>(GetArenaNoVirtual());
    branch_summary_ = p;
  }
  // @@protoc_insertion_point(field_mutable:google.devtools.resultstore.v2.LanguageCoverageSummary.branch_summary)
  return branch_summary_;
}
inline void LanguageCoverageSummary::set_allocated_branch_summary(::google::devtools::resultstore::v2::BranchCoverageSummary* branch_summary) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete branch_summary_;
  }
  if (branch_summary) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      branch_summary = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, branch_summary, submessage_arena);
    }
    
  } else {
    
  }
  branch_summary_ = branch_summary;
  // @@protoc_insertion_point(field_set_allocated:google.devtools.resultstore.v2.LanguageCoverageSummary.branch_summary)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace v2
}  // namespace resultstore
}  // namespace devtools
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_google_2fdevtools_2fresultstore_2fv2_2fcoverage_5fsummary_2eproto
