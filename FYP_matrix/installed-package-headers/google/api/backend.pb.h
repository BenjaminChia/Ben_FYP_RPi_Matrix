// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/api/backend.proto

#ifndef PROTOBUF_INCLUDED_google_2fapi_2fbackend_2eproto
#define PROTOBUF_INCLUDED_google_2fapi_2fbackend_2eproto

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
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_google_2fapi_2fbackend_2eproto 

namespace protobuf_google_2fapi_2fbackend_2eproto {
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
}  // namespace protobuf_google_2fapi_2fbackend_2eproto
namespace google {
namespace api {
class Backend;
class BackendDefaultTypeInternal;
extern BackendDefaultTypeInternal _Backend_default_instance_;
class BackendRule;
class BackendRuleDefaultTypeInternal;
extern BackendRuleDefaultTypeInternal _BackendRule_default_instance_;
}  // namespace api
}  // namespace google
namespace google {
namespace protobuf {
template<> ::google::api::Backend* Arena::CreateMaybeMessage<::google::api::Backend>(Arena*);
template<> ::google::api::BackendRule* Arena::CreateMaybeMessage<::google::api::BackendRule>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace google {
namespace api {

// ===================================================================

class Backend : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.api.Backend) */ {
 public:
  Backend();
  virtual ~Backend();

  Backend(const Backend& from);

  inline Backend& operator=(const Backend& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Backend(Backend&& from) noexcept
    : Backend() {
    *this = ::std::move(from);
  }

  inline Backend& operator=(Backend&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Backend& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Backend* internal_default_instance() {
    return reinterpret_cast<const Backend*>(
               &_Backend_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Backend* other);
  friend void swap(Backend& a, Backend& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Backend* New() const final {
    return CreateMaybeMessage<Backend>(NULL);
  }

  Backend* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Backend>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Backend& from);
  void MergeFrom(const Backend& from);
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
  void InternalSwap(Backend* other);
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

  // repeated .google.api.BackendRule rules = 1;
  int rules_size() const;
  void clear_rules();
  static const int kRulesFieldNumber = 1;
  ::google::api::BackendRule* mutable_rules(int index);
  ::google::protobuf::RepeatedPtrField< ::google::api::BackendRule >*
      mutable_rules();
  const ::google::api::BackendRule& rules(int index) const;
  ::google::api::BackendRule* add_rules();
  const ::google::protobuf::RepeatedPtrField< ::google::api::BackendRule >&
      rules() const;

  // @@protoc_insertion_point(class_scope:google.api.Backend)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::google::api::BackendRule > rules_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_google_2fapi_2fbackend_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class BackendRule : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.api.BackendRule) */ {
 public:
  BackendRule();
  virtual ~BackendRule();

  BackendRule(const BackendRule& from);

  inline BackendRule& operator=(const BackendRule& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  BackendRule(BackendRule&& from) noexcept
    : BackendRule() {
    *this = ::std::move(from);
  }

  inline BackendRule& operator=(BackendRule&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const BackendRule& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const BackendRule* internal_default_instance() {
    return reinterpret_cast<const BackendRule*>(
               &_BackendRule_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(BackendRule* other);
  friend void swap(BackendRule& a, BackendRule& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline BackendRule* New() const final {
    return CreateMaybeMessage<BackendRule>(NULL);
  }

  BackendRule* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<BackendRule>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const BackendRule& from);
  void MergeFrom(const BackendRule& from);
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
  void InternalSwap(BackendRule* other);
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

  // string selector = 1;
  void clear_selector();
  static const int kSelectorFieldNumber = 1;
  const ::std::string& selector() const;
  void set_selector(const ::std::string& value);
  #if LANG_CXX11
  void set_selector(::std::string&& value);
  #endif
  void set_selector(const char* value);
  void set_selector(const char* value, size_t size);
  ::std::string* mutable_selector();
  ::std::string* release_selector();
  void set_allocated_selector(::std::string* selector);

  // string address = 2;
  void clear_address();
  static const int kAddressFieldNumber = 2;
  const ::std::string& address() const;
  void set_address(const ::std::string& value);
  #if LANG_CXX11
  void set_address(::std::string&& value);
  #endif
  void set_address(const char* value);
  void set_address(const char* value, size_t size);
  ::std::string* mutable_address();
  ::std::string* release_address();
  void set_allocated_address(::std::string* address);

  // double deadline = 3;
  void clear_deadline();
  static const int kDeadlineFieldNumber = 3;
  double deadline() const;
  void set_deadline(double value);

  // double min_deadline = 4;
  void clear_min_deadline();
  static const int kMinDeadlineFieldNumber = 4;
  double min_deadline() const;
  void set_min_deadline(double value);

  // @@protoc_insertion_point(class_scope:google.api.BackendRule)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr selector_;
  ::google::protobuf::internal::ArenaStringPtr address_;
  double deadline_;
  double min_deadline_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_google_2fapi_2fbackend_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Backend

// repeated .google.api.BackendRule rules = 1;
inline int Backend::rules_size() const {
  return rules_.size();
}
inline void Backend::clear_rules() {
  rules_.Clear();
}
inline ::google::api::BackendRule* Backend::mutable_rules(int index) {
  // @@protoc_insertion_point(field_mutable:google.api.Backend.rules)
  return rules_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::google::api::BackendRule >*
Backend::mutable_rules() {
  // @@protoc_insertion_point(field_mutable_list:google.api.Backend.rules)
  return &rules_;
}
inline const ::google::api::BackendRule& Backend::rules(int index) const {
  // @@protoc_insertion_point(field_get:google.api.Backend.rules)
  return rules_.Get(index);
}
inline ::google::api::BackendRule* Backend::add_rules() {
  // @@protoc_insertion_point(field_add:google.api.Backend.rules)
  return rules_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::google::api::BackendRule >&
Backend::rules() const {
  // @@protoc_insertion_point(field_list:google.api.Backend.rules)
  return rules_;
}

// -------------------------------------------------------------------

// BackendRule

// string selector = 1;
inline void BackendRule::clear_selector() {
  selector_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& BackendRule::selector() const {
  // @@protoc_insertion_point(field_get:google.api.BackendRule.selector)
  return selector_.GetNoArena();
}
inline void BackendRule::set_selector(const ::std::string& value) {
  
  selector_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.api.BackendRule.selector)
}
#if LANG_CXX11
inline void BackendRule::set_selector(::std::string&& value) {
  
  selector_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:google.api.BackendRule.selector)
}
#endif
inline void BackendRule::set_selector(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  selector_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.api.BackendRule.selector)
}
inline void BackendRule::set_selector(const char* value, size_t size) {
  
  selector_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.api.BackendRule.selector)
}
inline ::std::string* BackendRule::mutable_selector() {
  
  // @@protoc_insertion_point(field_mutable:google.api.BackendRule.selector)
  return selector_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* BackendRule::release_selector() {
  // @@protoc_insertion_point(field_release:google.api.BackendRule.selector)
  
  return selector_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void BackendRule::set_allocated_selector(::std::string* selector) {
  if (selector != NULL) {
    
  } else {
    
  }
  selector_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), selector);
  // @@protoc_insertion_point(field_set_allocated:google.api.BackendRule.selector)
}

// string address = 2;
inline void BackendRule::clear_address() {
  address_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& BackendRule::address() const {
  // @@protoc_insertion_point(field_get:google.api.BackendRule.address)
  return address_.GetNoArena();
}
inline void BackendRule::set_address(const ::std::string& value) {
  
  address_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.api.BackendRule.address)
}
#if LANG_CXX11
inline void BackendRule::set_address(::std::string&& value) {
  
  address_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:google.api.BackendRule.address)
}
#endif
inline void BackendRule::set_address(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  address_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.api.BackendRule.address)
}
inline void BackendRule::set_address(const char* value, size_t size) {
  
  address_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.api.BackendRule.address)
}
inline ::std::string* BackendRule::mutable_address() {
  
  // @@protoc_insertion_point(field_mutable:google.api.BackendRule.address)
  return address_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* BackendRule::release_address() {
  // @@protoc_insertion_point(field_release:google.api.BackendRule.address)
  
  return address_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void BackendRule::set_allocated_address(::std::string* address) {
  if (address != NULL) {
    
  } else {
    
  }
  address_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), address);
  // @@protoc_insertion_point(field_set_allocated:google.api.BackendRule.address)
}

// double deadline = 3;
inline void BackendRule::clear_deadline() {
  deadline_ = 0;
}
inline double BackendRule::deadline() const {
  // @@protoc_insertion_point(field_get:google.api.BackendRule.deadline)
  return deadline_;
}
inline void BackendRule::set_deadline(double value) {
  
  deadline_ = value;
  // @@protoc_insertion_point(field_set:google.api.BackendRule.deadline)
}

// double min_deadline = 4;
inline void BackendRule::clear_min_deadline() {
  min_deadline_ = 0;
}
inline double BackendRule::min_deadline() const {
  // @@protoc_insertion_point(field_get:google.api.BackendRule.min_deadline)
  return min_deadline_;
}
inline void BackendRule::set_min_deadline(double value) {
  
  min_deadline_ = value;
  // @@protoc_insertion_point(field_set:google.api.BackendRule.min_deadline)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace api
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_google_2fapi_2fbackend_2eproto
