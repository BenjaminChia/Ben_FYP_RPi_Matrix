// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/devtools/containeranalysis/v1beta1/discovery/discovery.proto

#ifndef PROTOBUF_INCLUDED_google_2fdevtools_2fcontaineranalysis_2fv1beta1_2fdiscovery_2fdiscovery_2eproto
#define PROTOBUF_INCLUDED_google_2fdevtools_2fcontaineranalysis_2fv1beta1_2fdiscovery_2fdiscovery_2eproto

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
#include "google/devtools/containeranalysis/v1beta1/common/common.pb.h"
#include <google/protobuf/timestamp.pb.h>
#include "google/rpc/status.pb.h"
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_google_2fdevtools_2fcontaineranalysis_2fv1beta1_2fdiscovery_2fdiscovery_2eproto 

namespace protobuf_google_2fdevtools_2fcontaineranalysis_2fv1beta1_2fdiscovery_2fdiscovery_2eproto {
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
}  // namespace protobuf_google_2fdevtools_2fcontaineranalysis_2fv1beta1_2fdiscovery_2fdiscovery_2eproto
namespace grafeas {
namespace v1beta1 {
namespace discovery {
class Details;
class DetailsDefaultTypeInternal;
extern DetailsDefaultTypeInternal _Details_default_instance_;
class Discovered;
class DiscoveredDefaultTypeInternal;
extern DiscoveredDefaultTypeInternal _Discovered_default_instance_;
class Discovery;
class DiscoveryDefaultTypeInternal;
extern DiscoveryDefaultTypeInternal _Discovery_default_instance_;
}  // namespace discovery
}  // namespace v1beta1
}  // namespace grafeas
namespace google {
namespace protobuf {
template<> ::grafeas::v1beta1::discovery::Details* Arena::CreateMaybeMessage<::grafeas::v1beta1::discovery::Details>(Arena*);
template<> ::grafeas::v1beta1::discovery::Discovered* Arena::CreateMaybeMessage<::grafeas::v1beta1::discovery::Discovered>(Arena*);
template<> ::grafeas::v1beta1::discovery::Discovery* Arena::CreateMaybeMessage<::grafeas::v1beta1::discovery::Discovery>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace grafeas {
namespace v1beta1 {
namespace discovery {

enum Discovered_ContinuousAnalysis {
  Discovered_ContinuousAnalysis_CONTINUOUS_ANALYSIS_UNSPECIFIED = 0,
  Discovered_ContinuousAnalysis_ACTIVE = 1,
  Discovered_ContinuousAnalysis_INACTIVE = 2,
  Discovered_ContinuousAnalysis_Discovered_ContinuousAnalysis_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  Discovered_ContinuousAnalysis_Discovered_ContinuousAnalysis_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool Discovered_ContinuousAnalysis_IsValid(int value);
const Discovered_ContinuousAnalysis Discovered_ContinuousAnalysis_ContinuousAnalysis_MIN = Discovered_ContinuousAnalysis_CONTINUOUS_ANALYSIS_UNSPECIFIED;
const Discovered_ContinuousAnalysis Discovered_ContinuousAnalysis_ContinuousAnalysis_MAX = Discovered_ContinuousAnalysis_INACTIVE;
const int Discovered_ContinuousAnalysis_ContinuousAnalysis_ARRAYSIZE = Discovered_ContinuousAnalysis_ContinuousAnalysis_MAX + 1;

const ::google::protobuf::EnumDescriptor* Discovered_ContinuousAnalysis_descriptor();
inline const ::std::string& Discovered_ContinuousAnalysis_Name(Discovered_ContinuousAnalysis value) {
  return ::google::protobuf::internal::NameOfEnum(
    Discovered_ContinuousAnalysis_descriptor(), value);
}
inline bool Discovered_ContinuousAnalysis_Parse(
    const ::std::string& name, Discovered_ContinuousAnalysis* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Discovered_ContinuousAnalysis>(
    Discovered_ContinuousAnalysis_descriptor(), name, value);
}
enum Discovered_AnalysisStatus {
  Discovered_AnalysisStatus_ANALYSIS_STATUS_UNSPECIFIED = 0,
  Discovered_AnalysisStatus_PENDING = 1,
  Discovered_AnalysisStatus_SCANNING = 2,
  Discovered_AnalysisStatus_FINISHED_SUCCESS = 3,
  Discovered_AnalysisStatus_FINISHED_FAILED = 4,
  Discovered_AnalysisStatus_FINISHED_UNSUPPORTED = 5,
  Discovered_AnalysisStatus_Discovered_AnalysisStatus_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  Discovered_AnalysisStatus_Discovered_AnalysisStatus_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool Discovered_AnalysisStatus_IsValid(int value);
const Discovered_AnalysisStatus Discovered_AnalysisStatus_AnalysisStatus_MIN = Discovered_AnalysisStatus_ANALYSIS_STATUS_UNSPECIFIED;
const Discovered_AnalysisStatus Discovered_AnalysisStatus_AnalysisStatus_MAX = Discovered_AnalysisStatus_FINISHED_UNSUPPORTED;
const int Discovered_AnalysisStatus_AnalysisStatus_ARRAYSIZE = Discovered_AnalysisStatus_AnalysisStatus_MAX + 1;

const ::google::protobuf::EnumDescriptor* Discovered_AnalysisStatus_descriptor();
inline const ::std::string& Discovered_AnalysisStatus_Name(Discovered_AnalysisStatus value) {
  return ::google::protobuf::internal::NameOfEnum(
    Discovered_AnalysisStatus_descriptor(), value);
}
inline bool Discovered_AnalysisStatus_Parse(
    const ::std::string& name, Discovered_AnalysisStatus* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Discovered_AnalysisStatus>(
    Discovered_AnalysisStatus_descriptor(), name, value);
}
// ===================================================================

class Discovery : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:grafeas.v1beta1.discovery.Discovery) */ {
 public:
  Discovery();
  virtual ~Discovery();

  Discovery(const Discovery& from);

  inline Discovery& operator=(const Discovery& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Discovery(Discovery&& from) noexcept
    : Discovery() {
    *this = ::std::move(from);
  }

  inline Discovery& operator=(Discovery&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Discovery& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Discovery* internal_default_instance() {
    return reinterpret_cast<const Discovery*>(
               &_Discovery_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Discovery* other);
  friend void swap(Discovery& a, Discovery& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Discovery* New() const final {
    return CreateMaybeMessage<Discovery>(NULL);
  }

  Discovery* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Discovery>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Discovery& from);
  void MergeFrom(const Discovery& from);
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
  void InternalSwap(Discovery* other);
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

  // .grafeas.v1beta1.NoteKind analysis_kind = 1;
  void clear_analysis_kind();
  static const int kAnalysisKindFieldNumber = 1;
  ::grafeas::v1beta1::NoteKind analysis_kind() const;
  void set_analysis_kind(::grafeas::v1beta1::NoteKind value);

  // @@protoc_insertion_point(class_scope:grafeas.v1beta1.discovery.Discovery)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  int analysis_kind_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_google_2fdevtools_2fcontaineranalysis_2fv1beta1_2fdiscovery_2fdiscovery_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class Details : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:grafeas.v1beta1.discovery.Details) */ {
 public:
  Details();
  virtual ~Details();

  Details(const Details& from);

  inline Details& operator=(const Details& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Details(Details&& from) noexcept
    : Details() {
    *this = ::std::move(from);
  }

  inline Details& operator=(Details&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Details& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Details* internal_default_instance() {
    return reinterpret_cast<const Details*>(
               &_Details_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(Details* other);
  friend void swap(Details& a, Details& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Details* New() const final {
    return CreateMaybeMessage<Details>(NULL);
  }

  Details* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Details>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Details& from);
  void MergeFrom(const Details& from);
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
  void InternalSwap(Details* other);
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

  // .grafeas.v1beta1.discovery.Discovered discovered = 1;
  bool has_discovered() const;
  void clear_discovered();
  static const int kDiscoveredFieldNumber = 1;
  private:
  const ::grafeas::v1beta1::discovery::Discovered& _internal_discovered() const;
  public:
  const ::grafeas::v1beta1::discovery::Discovered& discovered() const;
  ::grafeas::v1beta1::discovery::Discovered* release_discovered();
  ::grafeas::v1beta1::discovery::Discovered* mutable_discovered();
  void set_allocated_discovered(::grafeas::v1beta1::discovery::Discovered* discovered);

  // @@protoc_insertion_point(class_scope:grafeas.v1beta1.discovery.Details)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::grafeas::v1beta1::discovery::Discovered* discovered_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_google_2fdevtools_2fcontaineranalysis_2fv1beta1_2fdiscovery_2fdiscovery_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class Discovered : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:grafeas.v1beta1.discovery.Discovered) */ {
 public:
  Discovered();
  virtual ~Discovered();

  Discovered(const Discovered& from);

  inline Discovered& operator=(const Discovered& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Discovered(Discovered&& from) noexcept
    : Discovered() {
    *this = ::std::move(from);
  }

  inline Discovered& operator=(Discovered&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Discovered& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Discovered* internal_default_instance() {
    return reinterpret_cast<const Discovered*>(
               &_Discovered_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  void Swap(Discovered* other);
  friend void swap(Discovered& a, Discovered& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Discovered* New() const final {
    return CreateMaybeMessage<Discovered>(NULL);
  }

  Discovered* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Discovered>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Discovered& from);
  void MergeFrom(const Discovered& from);
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
  void InternalSwap(Discovered* other);
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

  typedef Discovered_ContinuousAnalysis ContinuousAnalysis;
  static const ContinuousAnalysis CONTINUOUS_ANALYSIS_UNSPECIFIED =
    Discovered_ContinuousAnalysis_CONTINUOUS_ANALYSIS_UNSPECIFIED;
  static const ContinuousAnalysis ACTIVE =
    Discovered_ContinuousAnalysis_ACTIVE;
  static const ContinuousAnalysis INACTIVE =
    Discovered_ContinuousAnalysis_INACTIVE;
  static inline bool ContinuousAnalysis_IsValid(int value) {
    return Discovered_ContinuousAnalysis_IsValid(value);
  }
  static const ContinuousAnalysis ContinuousAnalysis_MIN =
    Discovered_ContinuousAnalysis_ContinuousAnalysis_MIN;
  static const ContinuousAnalysis ContinuousAnalysis_MAX =
    Discovered_ContinuousAnalysis_ContinuousAnalysis_MAX;
  static const int ContinuousAnalysis_ARRAYSIZE =
    Discovered_ContinuousAnalysis_ContinuousAnalysis_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  ContinuousAnalysis_descriptor() {
    return Discovered_ContinuousAnalysis_descriptor();
  }
  static inline const ::std::string& ContinuousAnalysis_Name(ContinuousAnalysis value) {
    return Discovered_ContinuousAnalysis_Name(value);
  }
  static inline bool ContinuousAnalysis_Parse(const ::std::string& name,
      ContinuousAnalysis* value) {
    return Discovered_ContinuousAnalysis_Parse(name, value);
  }

  typedef Discovered_AnalysisStatus AnalysisStatus;
  static const AnalysisStatus ANALYSIS_STATUS_UNSPECIFIED =
    Discovered_AnalysisStatus_ANALYSIS_STATUS_UNSPECIFIED;
  static const AnalysisStatus PENDING =
    Discovered_AnalysisStatus_PENDING;
  static const AnalysisStatus SCANNING =
    Discovered_AnalysisStatus_SCANNING;
  static const AnalysisStatus FINISHED_SUCCESS =
    Discovered_AnalysisStatus_FINISHED_SUCCESS;
  static const AnalysisStatus FINISHED_FAILED =
    Discovered_AnalysisStatus_FINISHED_FAILED;
  static const AnalysisStatus FINISHED_UNSUPPORTED =
    Discovered_AnalysisStatus_FINISHED_UNSUPPORTED;
  static inline bool AnalysisStatus_IsValid(int value) {
    return Discovered_AnalysisStatus_IsValid(value);
  }
  static const AnalysisStatus AnalysisStatus_MIN =
    Discovered_AnalysisStatus_AnalysisStatus_MIN;
  static const AnalysisStatus AnalysisStatus_MAX =
    Discovered_AnalysisStatus_AnalysisStatus_MAX;
  static const int AnalysisStatus_ARRAYSIZE =
    Discovered_AnalysisStatus_AnalysisStatus_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  AnalysisStatus_descriptor() {
    return Discovered_AnalysisStatus_descriptor();
  }
  static inline const ::std::string& AnalysisStatus_Name(AnalysisStatus value) {
    return Discovered_AnalysisStatus_Name(value);
  }
  static inline bool AnalysisStatus_Parse(const ::std::string& name,
      AnalysisStatus* value) {
    return Discovered_AnalysisStatus_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // .google.protobuf.Timestamp last_analysis_time = 2;
  bool has_last_analysis_time() const;
  void clear_last_analysis_time();
  static const int kLastAnalysisTimeFieldNumber = 2;
  private:
  const ::google::protobuf::Timestamp& _internal_last_analysis_time() const;
  public:
  const ::google::protobuf::Timestamp& last_analysis_time() const;
  ::google::protobuf::Timestamp* release_last_analysis_time();
  ::google::protobuf::Timestamp* mutable_last_analysis_time();
  void set_allocated_last_analysis_time(::google::protobuf::Timestamp* last_analysis_time);

  // .google.rpc.Status analysis_status_error = 4;
  bool has_analysis_status_error() const;
  void clear_analysis_status_error();
  static const int kAnalysisStatusErrorFieldNumber = 4;
  private:
  const ::google::rpc::Status& _internal_analysis_status_error() const;
  public:
  const ::google::rpc::Status& analysis_status_error() const;
  ::google::rpc::Status* release_analysis_status_error();
  ::google::rpc::Status* mutable_analysis_status_error();
  void set_allocated_analysis_status_error(::google::rpc::Status* analysis_status_error);

  // .grafeas.v1beta1.discovery.Discovered.ContinuousAnalysis continuous_analysis = 1;
  void clear_continuous_analysis();
  static const int kContinuousAnalysisFieldNumber = 1;
  ::grafeas::v1beta1::discovery::Discovered_ContinuousAnalysis continuous_analysis() const;
  void set_continuous_analysis(::grafeas::v1beta1::discovery::Discovered_ContinuousAnalysis value);

  // .grafeas.v1beta1.discovery.Discovered.AnalysisStatus analysis_status = 3;
  void clear_analysis_status();
  static const int kAnalysisStatusFieldNumber = 3;
  ::grafeas::v1beta1::discovery::Discovered_AnalysisStatus analysis_status() const;
  void set_analysis_status(::grafeas::v1beta1::discovery::Discovered_AnalysisStatus value);

  // @@protoc_insertion_point(class_scope:grafeas.v1beta1.discovery.Discovered)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::Timestamp* last_analysis_time_;
  ::google::rpc::Status* analysis_status_error_;
  int continuous_analysis_;
  int analysis_status_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_google_2fdevtools_2fcontaineranalysis_2fv1beta1_2fdiscovery_2fdiscovery_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Discovery

// .grafeas.v1beta1.NoteKind analysis_kind = 1;
inline void Discovery::clear_analysis_kind() {
  analysis_kind_ = 0;
}
inline ::grafeas::v1beta1::NoteKind Discovery::analysis_kind() const {
  // @@protoc_insertion_point(field_get:grafeas.v1beta1.discovery.Discovery.analysis_kind)
  return static_cast< ::grafeas::v1beta1::NoteKind >(analysis_kind_);
}
inline void Discovery::set_analysis_kind(::grafeas::v1beta1::NoteKind value) {
  
  analysis_kind_ = value;
  // @@protoc_insertion_point(field_set:grafeas.v1beta1.discovery.Discovery.analysis_kind)
}

// -------------------------------------------------------------------

// Details

// .grafeas.v1beta1.discovery.Discovered discovered = 1;
inline bool Details::has_discovered() const {
  return this != internal_default_instance() && discovered_ != NULL;
}
inline void Details::clear_discovered() {
  if (GetArenaNoVirtual() == NULL && discovered_ != NULL) {
    delete discovered_;
  }
  discovered_ = NULL;
}
inline const ::grafeas::v1beta1::discovery::Discovered& Details::_internal_discovered() const {
  return *discovered_;
}
inline const ::grafeas::v1beta1::discovery::Discovered& Details::discovered() const {
  const ::grafeas::v1beta1::discovery::Discovered* p = discovered_;
  // @@protoc_insertion_point(field_get:grafeas.v1beta1.discovery.Details.discovered)
  return p != NULL ? *p : *reinterpret_cast<const ::grafeas::v1beta1::discovery::Discovered*>(
      &::grafeas::v1beta1::discovery::_Discovered_default_instance_);
}
inline ::grafeas::v1beta1::discovery::Discovered* Details::release_discovered() {
  // @@protoc_insertion_point(field_release:grafeas.v1beta1.discovery.Details.discovered)
  
  ::grafeas::v1beta1::discovery::Discovered* temp = discovered_;
  discovered_ = NULL;
  return temp;
}
inline ::grafeas::v1beta1::discovery::Discovered* Details::mutable_discovered() {
  
  if (discovered_ == NULL) {
    auto* p = CreateMaybeMessage<::grafeas::v1beta1::discovery::Discovered>(GetArenaNoVirtual());
    discovered_ = p;
  }
  // @@protoc_insertion_point(field_mutable:grafeas.v1beta1.discovery.Details.discovered)
  return discovered_;
}
inline void Details::set_allocated_discovered(::grafeas::v1beta1::discovery::Discovered* discovered) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete discovered_;
  }
  if (discovered) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      discovered = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, discovered, submessage_arena);
    }
    
  } else {
    
  }
  discovered_ = discovered;
  // @@protoc_insertion_point(field_set_allocated:grafeas.v1beta1.discovery.Details.discovered)
}

// -------------------------------------------------------------------

// Discovered

// .grafeas.v1beta1.discovery.Discovered.ContinuousAnalysis continuous_analysis = 1;
inline void Discovered::clear_continuous_analysis() {
  continuous_analysis_ = 0;
}
inline ::grafeas::v1beta1::discovery::Discovered_ContinuousAnalysis Discovered::continuous_analysis() const {
  // @@protoc_insertion_point(field_get:grafeas.v1beta1.discovery.Discovered.continuous_analysis)
  return static_cast< ::grafeas::v1beta1::discovery::Discovered_ContinuousAnalysis >(continuous_analysis_);
}
inline void Discovered::set_continuous_analysis(::grafeas::v1beta1::discovery::Discovered_ContinuousAnalysis value) {
  
  continuous_analysis_ = value;
  // @@protoc_insertion_point(field_set:grafeas.v1beta1.discovery.Discovered.continuous_analysis)
}

// .google.protobuf.Timestamp last_analysis_time = 2;
inline bool Discovered::has_last_analysis_time() const {
  return this != internal_default_instance() && last_analysis_time_ != NULL;
}
inline const ::google::protobuf::Timestamp& Discovered::_internal_last_analysis_time() const {
  return *last_analysis_time_;
}
inline const ::google::protobuf::Timestamp& Discovered::last_analysis_time() const {
  const ::google::protobuf::Timestamp* p = last_analysis_time_;
  // @@protoc_insertion_point(field_get:grafeas.v1beta1.discovery.Discovered.last_analysis_time)
  return p != NULL ? *p : *reinterpret_cast<const ::google::protobuf::Timestamp*>(
      &::google::protobuf::_Timestamp_default_instance_);
}
inline ::google::protobuf::Timestamp* Discovered::release_last_analysis_time() {
  // @@protoc_insertion_point(field_release:grafeas.v1beta1.discovery.Discovered.last_analysis_time)
  
  ::google::protobuf::Timestamp* temp = last_analysis_time_;
  last_analysis_time_ = NULL;
  return temp;
}
inline ::google::protobuf::Timestamp* Discovered::mutable_last_analysis_time() {
  
  if (last_analysis_time_ == NULL) {
    auto* p = CreateMaybeMessage<::google::protobuf::Timestamp>(GetArenaNoVirtual());
    last_analysis_time_ = p;
  }
  // @@protoc_insertion_point(field_mutable:grafeas.v1beta1.discovery.Discovered.last_analysis_time)
  return last_analysis_time_;
}
inline void Discovered::set_allocated_last_analysis_time(::google::protobuf::Timestamp* last_analysis_time) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(last_analysis_time_);
  }
  if (last_analysis_time) {
    ::google::protobuf::Arena* submessage_arena =
      reinterpret_cast<::google::protobuf::MessageLite*>(last_analysis_time)->GetArena();
    if (message_arena != submessage_arena) {
      last_analysis_time = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, last_analysis_time, submessage_arena);
    }
    
  } else {
    
  }
  last_analysis_time_ = last_analysis_time;
  // @@protoc_insertion_point(field_set_allocated:grafeas.v1beta1.discovery.Discovered.last_analysis_time)
}

// .grafeas.v1beta1.discovery.Discovered.AnalysisStatus analysis_status = 3;
inline void Discovered::clear_analysis_status() {
  analysis_status_ = 0;
}
inline ::grafeas::v1beta1::discovery::Discovered_AnalysisStatus Discovered::analysis_status() const {
  // @@protoc_insertion_point(field_get:grafeas.v1beta1.discovery.Discovered.analysis_status)
  return static_cast< ::grafeas::v1beta1::discovery::Discovered_AnalysisStatus >(analysis_status_);
}
inline void Discovered::set_analysis_status(::grafeas::v1beta1::discovery::Discovered_AnalysisStatus value) {
  
  analysis_status_ = value;
  // @@protoc_insertion_point(field_set:grafeas.v1beta1.discovery.Discovered.analysis_status)
}

// .google.rpc.Status analysis_status_error = 4;
inline bool Discovered::has_analysis_status_error() const {
  return this != internal_default_instance() && analysis_status_error_ != NULL;
}
inline const ::google::rpc::Status& Discovered::_internal_analysis_status_error() const {
  return *analysis_status_error_;
}
inline const ::google::rpc::Status& Discovered::analysis_status_error() const {
  const ::google::rpc::Status* p = analysis_status_error_;
  // @@protoc_insertion_point(field_get:grafeas.v1beta1.discovery.Discovered.analysis_status_error)
  return p != NULL ? *p : *reinterpret_cast<const ::google::rpc::Status*>(
      &::google::rpc::_Status_default_instance_);
}
inline ::google::rpc::Status* Discovered::release_analysis_status_error() {
  // @@protoc_insertion_point(field_release:grafeas.v1beta1.discovery.Discovered.analysis_status_error)
  
  ::google::rpc::Status* temp = analysis_status_error_;
  analysis_status_error_ = NULL;
  return temp;
}
inline ::google::rpc::Status* Discovered::mutable_analysis_status_error() {
  
  if (analysis_status_error_ == NULL) {
    auto* p = CreateMaybeMessage<::google::rpc::Status>(GetArenaNoVirtual());
    analysis_status_error_ = p;
  }
  // @@protoc_insertion_point(field_mutable:grafeas.v1beta1.discovery.Discovered.analysis_status_error)
  return analysis_status_error_;
}
inline void Discovered::set_allocated_analysis_status_error(::google::rpc::Status* analysis_status_error) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(analysis_status_error_);
  }
  if (analysis_status_error) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      analysis_status_error = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, analysis_status_error, submessage_arena);
    }
    
  } else {
    
  }
  analysis_status_error_ = analysis_status_error;
  // @@protoc_insertion_point(field_set_allocated:grafeas.v1beta1.discovery.Discovered.analysis_status_error)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace discovery
}  // namespace v1beta1
}  // namespace grafeas

namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::grafeas::v1beta1::discovery::Discovered_ContinuousAnalysis> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::grafeas::v1beta1::discovery::Discovered_ContinuousAnalysis>() {
  return ::grafeas::v1beta1::discovery::Discovered_ContinuousAnalysis_descriptor();
}
template <> struct is_proto_enum< ::grafeas::v1beta1::discovery::Discovered_AnalysisStatus> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::grafeas::v1beta1::discovery::Discovered_AnalysisStatus>() {
  return ::grafeas::v1beta1::discovery::Discovered_AnalysisStatus_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_google_2fdevtools_2fcontaineranalysis_2fv1beta1_2fdiscovery_2fdiscovery_2eproto
