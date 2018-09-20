// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/appengine/v1/instance.proto

#ifndef PROTOBUF_INCLUDED_google_2fappengine_2fv1_2finstance_2eproto
#define PROTOBUF_INCLUDED_google_2fappengine_2fv1_2finstance_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_protobuf_google_2fappengine_2fv1_2finstance_2eproto 

namespace protobuf_google_2fappengine_2fv1_2finstance_2eproto {
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
}  // namespace protobuf_google_2fappengine_2fv1_2finstance_2eproto
namespace google {
namespace appengine {
namespace v1 {
class Instance;
class InstanceDefaultTypeInternal;
extern InstanceDefaultTypeInternal _Instance_default_instance_;
}  // namespace v1
}  // namespace appengine
}  // namespace google
namespace google {
namespace protobuf {
template<> ::google::appengine::v1::Instance* Arena::CreateMaybeMessage<::google::appengine::v1::Instance>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace google {
namespace appengine {
namespace v1 {

enum Instance_Availability {
  Instance_Availability_UNSPECIFIED = 0,
  Instance_Availability_RESIDENT = 1,
  Instance_Availability_DYNAMIC = 2,
  Instance_Availability_Instance_Availability_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  Instance_Availability_Instance_Availability_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool Instance_Availability_IsValid(int value);
const Instance_Availability Instance_Availability_Availability_MIN = Instance_Availability_UNSPECIFIED;
const Instance_Availability Instance_Availability_Availability_MAX = Instance_Availability_DYNAMIC;
const int Instance_Availability_Availability_ARRAYSIZE = Instance_Availability_Availability_MAX + 1;

const ::google::protobuf::EnumDescriptor* Instance_Availability_descriptor();
inline const ::std::string& Instance_Availability_Name(Instance_Availability value) {
  return ::google::protobuf::internal::NameOfEnum(
    Instance_Availability_descriptor(), value);
}
inline bool Instance_Availability_Parse(
    const ::std::string& name, Instance_Availability* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Instance_Availability>(
    Instance_Availability_descriptor(), name, value);
}
// ===================================================================

class Instance : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.appengine.v1.Instance) */ {
 public:
  Instance();
  virtual ~Instance();

  Instance(const Instance& from);

  inline Instance& operator=(const Instance& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Instance(Instance&& from) noexcept
    : Instance() {
    *this = ::std::move(from);
  }

  inline Instance& operator=(Instance&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Instance& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Instance* internal_default_instance() {
    return reinterpret_cast<const Instance*>(
               &_Instance_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Instance* other);
  friend void swap(Instance& a, Instance& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Instance* New() const final {
    return CreateMaybeMessage<Instance>(NULL);
  }

  Instance* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Instance>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Instance& from);
  void MergeFrom(const Instance& from);
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
  void InternalSwap(Instance* other);
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

  typedef Instance_Availability Availability;
  static const Availability UNSPECIFIED =
    Instance_Availability_UNSPECIFIED;
  static const Availability RESIDENT =
    Instance_Availability_RESIDENT;
  static const Availability DYNAMIC =
    Instance_Availability_DYNAMIC;
  static inline bool Availability_IsValid(int value) {
    return Instance_Availability_IsValid(value);
  }
  static const Availability Availability_MIN =
    Instance_Availability_Availability_MIN;
  static const Availability Availability_MAX =
    Instance_Availability_Availability_MAX;
  static const int Availability_ARRAYSIZE =
    Instance_Availability_Availability_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Availability_descriptor() {
    return Instance_Availability_descriptor();
  }
  static inline const ::std::string& Availability_Name(Availability value) {
    return Instance_Availability_Name(value);
  }
  static inline bool Availability_Parse(const ::std::string& name,
      Availability* value) {
    return Instance_Availability_Parse(name, value);
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

  // string id = 2;
  void clear_id();
  static const int kIdFieldNumber = 2;
  const ::std::string& id() const;
  void set_id(const ::std::string& value);
  #if LANG_CXX11
  void set_id(::std::string&& value);
  #endif
  void set_id(const char* value);
  void set_id(const char* value, size_t size);
  ::std::string* mutable_id();
  ::std::string* release_id();
  void set_allocated_id(::std::string* id);

  // string app_engine_release = 3;
  void clear_app_engine_release();
  static const int kAppEngineReleaseFieldNumber = 3;
  const ::std::string& app_engine_release() const;
  void set_app_engine_release(const ::std::string& value);
  #if LANG_CXX11
  void set_app_engine_release(::std::string&& value);
  #endif
  void set_app_engine_release(const char* value);
  void set_app_engine_release(const char* value, size_t size);
  ::std::string* mutable_app_engine_release();
  ::std::string* release_app_engine_release();
  void set_allocated_app_engine_release(::std::string* app_engine_release);

  // string vm_name = 5;
  void clear_vm_name();
  static const int kVmNameFieldNumber = 5;
  const ::std::string& vm_name() const;
  void set_vm_name(const ::std::string& value);
  #if LANG_CXX11
  void set_vm_name(::std::string&& value);
  #endif
  void set_vm_name(const char* value);
  void set_vm_name(const char* value, size_t size);
  ::std::string* mutable_vm_name();
  ::std::string* release_vm_name();
  void set_allocated_vm_name(::std::string* vm_name);

  // string vm_zone_name = 6;
  void clear_vm_zone_name();
  static const int kVmZoneNameFieldNumber = 6;
  const ::std::string& vm_zone_name() const;
  void set_vm_zone_name(const ::std::string& value);
  #if LANG_CXX11
  void set_vm_zone_name(::std::string&& value);
  #endif
  void set_vm_zone_name(const char* value);
  void set_vm_zone_name(const char* value, size_t size);
  ::std::string* mutable_vm_zone_name();
  ::std::string* release_vm_zone_name();
  void set_allocated_vm_zone_name(::std::string* vm_zone_name);

  // string vm_id = 7;
  void clear_vm_id();
  static const int kVmIdFieldNumber = 7;
  const ::std::string& vm_id() const;
  void set_vm_id(const ::std::string& value);
  #if LANG_CXX11
  void set_vm_id(::std::string&& value);
  #endif
  void set_vm_id(const char* value);
  void set_vm_id(const char* value, size_t size);
  ::std::string* mutable_vm_id();
  ::std::string* release_vm_id();
  void set_allocated_vm_id(::std::string* vm_id);

  // string vm_status = 14;
  void clear_vm_status();
  static const int kVmStatusFieldNumber = 14;
  const ::std::string& vm_status() const;
  void set_vm_status(const ::std::string& value);
  #if LANG_CXX11
  void set_vm_status(::std::string&& value);
  #endif
  void set_vm_status(const char* value);
  void set_vm_status(const char* value, size_t size);
  ::std::string* mutable_vm_status();
  ::std::string* release_vm_status();
  void set_allocated_vm_status(::std::string* vm_status);

  // .google.protobuf.Timestamp start_time = 8;
  bool has_start_time() const;
  void clear_start_time();
  static const int kStartTimeFieldNumber = 8;
  private:
  const ::google::protobuf::Timestamp& _internal_start_time() const;
  public:
  const ::google::protobuf::Timestamp& start_time() const;
  ::google::protobuf::Timestamp* release_start_time();
  ::google::protobuf::Timestamp* mutable_start_time();
  void set_allocated_start_time(::google::protobuf::Timestamp* start_time);

  // .google.appengine.v1.Instance.Availability availability = 4;
  void clear_availability();
  static const int kAvailabilityFieldNumber = 4;
  ::google::appengine::v1::Instance_Availability availability() const;
  void set_availability(::google::appengine::v1::Instance_Availability value);

  // int32 requests = 9;
  void clear_requests();
  static const int kRequestsFieldNumber = 9;
  ::google::protobuf::int32 requests() const;
  void set_requests(::google::protobuf::int32 value);

  // int32 errors = 10;
  void clear_errors();
  static const int kErrorsFieldNumber = 10;
  ::google::protobuf::int32 errors() const;
  void set_errors(::google::protobuf::int32 value);

  // float qps = 11;
  void clear_qps();
  static const int kQpsFieldNumber = 11;
  float qps() const;
  void set_qps(float value);

  // int64 memory_usage = 13;
  void clear_memory_usage();
  static const int kMemoryUsageFieldNumber = 13;
  ::google::protobuf::int64 memory_usage() const;
  void set_memory_usage(::google::protobuf::int64 value);

  // int32 average_latency = 12;
  void clear_average_latency();
  static const int kAverageLatencyFieldNumber = 12;
  ::google::protobuf::int32 average_latency() const;
  void set_average_latency(::google::protobuf::int32 value);

  // bool vm_debug_enabled = 15;
  void clear_vm_debug_enabled();
  static const int kVmDebugEnabledFieldNumber = 15;
  bool vm_debug_enabled() const;
  void set_vm_debug_enabled(bool value);

  // @@protoc_insertion_point(class_scope:google.appengine.v1.Instance)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::internal::ArenaStringPtr id_;
  ::google::protobuf::internal::ArenaStringPtr app_engine_release_;
  ::google::protobuf::internal::ArenaStringPtr vm_name_;
  ::google::protobuf::internal::ArenaStringPtr vm_zone_name_;
  ::google::protobuf::internal::ArenaStringPtr vm_id_;
  ::google::protobuf::internal::ArenaStringPtr vm_status_;
  ::google::protobuf::Timestamp* start_time_;
  int availability_;
  ::google::protobuf::int32 requests_;
  ::google::protobuf::int32 errors_;
  float qps_;
  ::google::protobuf::int64 memory_usage_;
  ::google::protobuf::int32 average_latency_;
  bool vm_debug_enabled_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_google_2fappengine_2fv1_2finstance_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Instance

// string name = 1;
inline void Instance::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Instance::name() const {
  // @@protoc_insertion_point(field_get:google.appengine.v1.Instance.name)
  return name_.GetNoArena();
}
inline void Instance::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.appengine.v1.Instance.name)
}
#if LANG_CXX11
inline void Instance::set_name(::std::string&& value) {
  
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:google.appengine.v1.Instance.name)
}
#endif
inline void Instance::set_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.appengine.v1.Instance.name)
}
inline void Instance::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.appengine.v1.Instance.name)
}
inline ::std::string* Instance::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:google.appengine.v1.Instance.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Instance::release_name() {
  // @@protoc_insertion_point(field_release:google.appengine.v1.Instance.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Instance::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:google.appengine.v1.Instance.name)
}

// string id = 2;
inline void Instance::clear_id() {
  id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Instance::id() const {
  // @@protoc_insertion_point(field_get:google.appengine.v1.Instance.id)
  return id_.GetNoArena();
}
inline void Instance::set_id(const ::std::string& value) {
  
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.appengine.v1.Instance.id)
}
#if LANG_CXX11
inline void Instance::set_id(::std::string&& value) {
  
  id_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:google.appengine.v1.Instance.id)
}
#endif
inline void Instance::set_id(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.appengine.v1.Instance.id)
}
inline void Instance::set_id(const char* value, size_t size) {
  
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.appengine.v1.Instance.id)
}
inline ::std::string* Instance::mutable_id() {
  
  // @@protoc_insertion_point(field_mutable:google.appengine.v1.Instance.id)
  return id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Instance::release_id() {
  // @@protoc_insertion_point(field_release:google.appengine.v1.Instance.id)
  
  return id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Instance::set_allocated_id(::std::string* id) {
  if (id != NULL) {
    
  } else {
    
  }
  id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), id);
  // @@protoc_insertion_point(field_set_allocated:google.appengine.v1.Instance.id)
}

// string app_engine_release = 3;
inline void Instance::clear_app_engine_release() {
  app_engine_release_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Instance::app_engine_release() const {
  // @@protoc_insertion_point(field_get:google.appengine.v1.Instance.app_engine_release)
  return app_engine_release_.GetNoArena();
}
inline void Instance::set_app_engine_release(const ::std::string& value) {
  
  app_engine_release_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.appengine.v1.Instance.app_engine_release)
}
#if LANG_CXX11
inline void Instance::set_app_engine_release(::std::string&& value) {
  
  app_engine_release_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:google.appengine.v1.Instance.app_engine_release)
}
#endif
inline void Instance::set_app_engine_release(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  app_engine_release_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.appengine.v1.Instance.app_engine_release)
}
inline void Instance::set_app_engine_release(const char* value, size_t size) {
  
  app_engine_release_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.appengine.v1.Instance.app_engine_release)
}
inline ::std::string* Instance::mutable_app_engine_release() {
  
  // @@protoc_insertion_point(field_mutable:google.appengine.v1.Instance.app_engine_release)
  return app_engine_release_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Instance::release_app_engine_release() {
  // @@protoc_insertion_point(field_release:google.appengine.v1.Instance.app_engine_release)
  
  return app_engine_release_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Instance::set_allocated_app_engine_release(::std::string* app_engine_release) {
  if (app_engine_release != NULL) {
    
  } else {
    
  }
  app_engine_release_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), app_engine_release);
  // @@protoc_insertion_point(field_set_allocated:google.appengine.v1.Instance.app_engine_release)
}

// .google.appengine.v1.Instance.Availability availability = 4;
inline void Instance::clear_availability() {
  availability_ = 0;
}
inline ::google::appengine::v1::Instance_Availability Instance::availability() const {
  // @@protoc_insertion_point(field_get:google.appengine.v1.Instance.availability)
  return static_cast< ::google::appengine::v1::Instance_Availability >(availability_);
}
inline void Instance::set_availability(::google::appengine::v1::Instance_Availability value) {
  
  availability_ = value;
  // @@protoc_insertion_point(field_set:google.appengine.v1.Instance.availability)
}

// string vm_name = 5;
inline void Instance::clear_vm_name() {
  vm_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Instance::vm_name() const {
  // @@protoc_insertion_point(field_get:google.appengine.v1.Instance.vm_name)
  return vm_name_.GetNoArena();
}
inline void Instance::set_vm_name(const ::std::string& value) {
  
  vm_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.appengine.v1.Instance.vm_name)
}
#if LANG_CXX11
inline void Instance::set_vm_name(::std::string&& value) {
  
  vm_name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:google.appengine.v1.Instance.vm_name)
}
#endif
inline void Instance::set_vm_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  vm_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.appengine.v1.Instance.vm_name)
}
inline void Instance::set_vm_name(const char* value, size_t size) {
  
  vm_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.appengine.v1.Instance.vm_name)
}
inline ::std::string* Instance::mutable_vm_name() {
  
  // @@protoc_insertion_point(field_mutable:google.appengine.v1.Instance.vm_name)
  return vm_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Instance::release_vm_name() {
  // @@protoc_insertion_point(field_release:google.appengine.v1.Instance.vm_name)
  
  return vm_name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Instance::set_allocated_vm_name(::std::string* vm_name) {
  if (vm_name != NULL) {
    
  } else {
    
  }
  vm_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), vm_name);
  // @@protoc_insertion_point(field_set_allocated:google.appengine.v1.Instance.vm_name)
}

// string vm_zone_name = 6;
inline void Instance::clear_vm_zone_name() {
  vm_zone_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Instance::vm_zone_name() const {
  // @@protoc_insertion_point(field_get:google.appengine.v1.Instance.vm_zone_name)
  return vm_zone_name_.GetNoArena();
}
inline void Instance::set_vm_zone_name(const ::std::string& value) {
  
  vm_zone_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.appengine.v1.Instance.vm_zone_name)
}
#if LANG_CXX11
inline void Instance::set_vm_zone_name(::std::string&& value) {
  
  vm_zone_name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:google.appengine.v1.Instance.vm_zone_name)
}
#endif
inline void Instance::set_vm_zone_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  vm_zone_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.appengine.v1.Instance.vm_zone_name)
}
inline void Instance::set_vm_zone_name(const char* value, size_t size) {
  
  vm_zone_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.appengine.v1.Instance.vm_zone_name)
}
inline ::std::string* Instance::mutable_vm_zone_name() {
  
  // @@protoc_insertion_point(field_mutable:google.appengine.v1.Instance.vm_zone_name)
  return vm_zone_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Instance::release_vm_zone_name() {
  // @@protoc_insertion_point(field_release:google.appengine.v1.Instance.vm_zone_name)
  
  return vm_zone_name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Instance::set_allocated_vm_zone_name(::std::string* vm_zone_name) {
  if (vm_zone_name != NULL) {
    
  } else {
    
  }
  vm_zone_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), vm_zone_name);
  // @@protoc_insertion_point(field_set_allocated:google.appengine.v1.Instance.vm_zone_name)
}

// string vm_id = 7;
inline void Instance::clear_vm_id() {
  vm_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Instance::vm_id() const {
  // @@protoc_insertion_point(field_get:google.appengine.v1.Instance.vm_id)
  return vm_id_.GetNoArena();
}
inline void Instance::set_vm_id(const ::std::string& value) {
  
  vm_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.appengine.v1.Instance.vm_id)
}
#if LANG_CXX11
inline void Instance::set_vm_id(::std::string&& value) {
  
  vm_id_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:google.appengine.v1.Instance.vm_id)
}
#endif
inline void Instance::set_vm_id(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  vm_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.appengine.v1.Instance.vm_id)
}
inline void Instance::set_vm_id(const char* value, size_t size) {
  
  vm_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.appengine.v1.Instance.vm_id)
}
inline ::std::string* Instance::mutable_vm_id() {
  
  // @@protoc_insertion_point(field_mutable:google.appengine.v1.Instance.vm_id)
  return vm_id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Instance::release_vm_id() {
  // @@protoc_insertion_point(field_release:google.appengine.v1.Instance.vm_id)
  
  return vm_id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Instance::set_allocated_vm_id(::std::string* vm_id) {
  if (vm_id != NULL) {
    
  } else {
    
  }
  vm_id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), vm_id);
  // @@protoc_insertion_point(field_set_allocated:google.appengine.v1.Instance.vm_id)
}

// .google.protobuf.Timestamp start_time = 8;
inline bool Instance::has_start_time() const {
  return this != internal_default_instance() && start_time_ != NULL;
}
inline const ::google::protobuf::Timestamp& Instance::_internal_start_time() const {
  return *start_time_;
}
inline const ::google::protobuf::Timestamp& Instance::start_time() const {
  const ::google::protobuf::Timestamp* p = start_time_;
  // @@protoc_insertion_point(field_get:google.appengine.v1.Instance.start_time)
  return p != NULL ? *p : *reinterpret_cast<const ::google::protobuf::Timestamp*>(
      &::google::protobuf::_Timestamp_default_instance_);
}
inline ::google::protobuf::Timestamp* Instance::release_start_time() {
  // @@protoc_insertion_point(field_release:google.appengine.v1.Instance.start_time)
  
  ::google::protobuf::Timestamp* temp = start_time_;
  start_time_ = NULL;
  return temp;
}
inline ::google::protobuf::Timestamp* Instance::mutable_start_time() {
  
  if (start_time_ == NULL) {
    auto* p = CreateMaybeMessage<::google::protobuf::Timestamp>(GetArenaNoVirtual());
    start_time_ = p;
  }
  // @@protoc_insertion_point(field_mutable:google.appengine.v1.Instance.start_time)
  return start_time_;
}
inline void Instance::set_allocated_start_time(::google::protobuf::Timestamp* start_time) {
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
  // @@protoc_insertion_point(field_set_allocated:google.appengine.v1.Instance.start_time)
}

// int32 requests = 9;
inline void Instance::clear_requests() {
  requests_ = 0;
}
inline ::google::protobuf::int32 Instance::requests() const {
  // @@protoc_insertion_point(field_get:google.appengine.v1.Instance.requests)
  return requests_;
}
inline void Instance::set_requests(::google::protobuf::int32 value) {
  
  requests_ = value;
  // @@protoc_insertion_point(field_set:google.appengine.v1.Instance.requests)
}

// int32 errors = 10;
inline void Instance::clear_errors() {
  errors_ = 0;
}
inline ::google::protobuf::int32 Instance::errors() const {
  // @@protoc_insertion_point(field_get:google.appengine.v1.Instance.errors)
  return errors_;
}
inline void Instance::set_errors(::google::protobuf::int32 value) {
  
  errors_ = value;
  // @@protoc_insertion_point(field_set:google.appengine.v1.Instance.errors)
}

// float qps = 11;
inline void Instance::clear_qps() {
  qps_ = 0;
}
inline float Instance::qps() const {
  // @@protoc_insertion_point(field_get:google.appengine.v1.Instance.qps)
  return qps_;
}
inline void Instance::set_qps(float value) {
  
  qps_ = value;
  // @@protoc_insertion_point(field_set:google.appengine.v1.Instance.qps)
}

// int32 average_latency = 12;
inline void Instance::clear_average_latency() {
  average_latency_ = 0;
}
inline ::google::protobuf::int32 Instance::average_latency() const {
  // @@protoc_insertion_point(field_get:google.appengine.v1.Instance.average_latency)
  return average_latency_;
}
inline void Instance::set_average_latency(::google::protobuf::int32 value) {
  
  average_latency_ = value;
  // @@protoc_insertion_point(field_set:google.appengine.v1.Instance.average_latency)
}

// int64 memory_usage = 13;
inline void Instance::clear_memory_usage() {
  memory_usage_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 Instance::memory_usage() const {
  // @@protoc_insertion_point(field_get:google.appengine.v1.Instance.memory_usage)
  return memory_usage_;
}
inline void Instance::set_memory_usage(::google::protobuf::int64 value) {
  
  memory_usage_ = value;
  // @@protoc_insertion_point(field_set:google.appengine.v1.Instance.memory_usage)
}

// string vm_status = 14;
inline void Instance::clear_vm_status() {
  vm_status_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Instance::vm_status() const {
  // @@protoc_insertion_point(field_get:google.appengine.v1.Instance.vm_status)
  return vm_status_.GetNoArena();
}
inline void Instance::set_vm_status(const ::std::string& value) {
  
  vm_status_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.appengine.v1.Instance.vm_status)
}
#if LANG_CXX11
inline void Instance::set_vm_status(::std::string&& value) {
  
  vm_status_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:google.appengine.v1.Instance.vm_status)
}
#endif
inline void Instance::set_vm_status(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  vm_status_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.appengine.v1.Instance.vm_status)
}
inline void Instance::set_vm_status(const char* value, size_t size) {
  
  vm_status_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.appengine.v1.Instance.vm_status)
}
inline ::std::string* Instance::mutable_vm_status() {
  
  // @@protoc_insertion_point(field_mutable:google.appengine.v1.Instance.vm_status)
  return vm_status_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Instance::release_vm_status() {
  // @@protoc_insertion_point(field_release:google.appengine.v1.Instance.vm_status)
  
  return vm_status_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Instance::set_allocated_vm_status(::std::string* vm_status) {
  if (vm_status != NULL) {
    
  } else {
    
  }
  vm_status_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), vm_status);
  // @@protoc_insertion_point(field_set_allocated:google.appengine.v1.Instance.vm_status)
}

// bool vm_debug_enabled = 15;
inline void Instance::clear_vm_debug_enabled() {
  vm_debug_enabled_ = false;
}
inline bool Instance::vm_debug_enabled() const {
  // @@protoc_insertion_point(field_get:google.appengine.v1.Instance.vm_debug_enabled)
  return vm_debug_enabled_;
}
inline void Instance::set_vm_debug_enabled(bool value) {
  
  vm_debug_enabled_ = value;
  // @@protoc_insertion_point(field_set:google.appengine.v1.Instance.vm_debug_enabled)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace v1
}  // namespace appengine
}  // namespace google

namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::google::appengine::v1::Instance_Availability> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::google::appengine::v1::Instance_Availability>() {
  return ::google::appengine::v1::Instance_Availability_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_google_2fappengine_2fv1_2finstance_2eproto