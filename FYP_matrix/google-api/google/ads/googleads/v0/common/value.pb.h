// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/ads/googleads/v0/common/value.proto

#ifndef PROTOBUF_INCLUDED_google_2fads_2fgoogleads_2fv0_2fcommon_2fvalue_2eproto
#define PROTOBUF_INCLUDED_google_2fads_2fgoogleads_2fv0_2fcommon_2fvalue_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_protobuf_google_2fads_2fgoogleads_2fv0_2fcommon_2fvalue_2eproto 

namespace protobuf_google_2fads_2fgoogleads_2fv0_2fcommon_2fvalue_2eproto {
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
}  // namespace protobuf_google_2fads_2fgoogleads_2fv0_2fcommon_2fvalue_2eproto
namespace google {
namespace ads {
namespace googleads {
namespace v0 {
namespace common {
class Value;
class ValueDefaultTypeInternal;
extern ValueDefaultTypeInternal _Value_default_instance_;
}  // namespace common
}  // namespace v0
}  // namespace googleads
}  // namespace ads
}  // namespace google
namespace google {
namespace protobuf {
template<> ::google::ads::googleads::v0::common::Value* Arena::CreateMaybeMessage<::google::ads::googleads::v0::common::Value>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace google {
namespace ads {
namespace googleads {
namespace v0 {
namespace common {

// ===================================================================

class Value : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.ads.googleads.v0.common.Value) */ {
 public:
  Value();
  virtual ~Value();

  Value(const Value& from);

  inline Value& operator=(const Value& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Value(Value&& from) noexcept
    : Value() {
    *this = ::std::move(from);
  }

  inline Value& operator=(Value&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Value& default_instance();

  enum ValueCase {
    kBooleanValue = 1,
    kInt64Value = 2,
    kFloatValue = 3,
    kDoubleValue = 4,
    kStringValue = 5,
    VALUE_NOT_SET = 0,
  };

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Value* internal_default_instance() {
    return reinterpret_cast<const Value*>(
               &_Value_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Value* other);
  friend void swap(Value& a, Value& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Value* New() const final {
    return CreateMaybeMessage<Value>(NULL);
  }

  Value* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Value>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Value& from);
  void MergeFrom(const Value& from);
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
  void InternalSwap(Value* other);
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

  // bool boolean_value = 1;
  private:
  bool has_boolean_value() const;
  public:
  void clear_boolean_value();
  static const int kBooleanValueFieldNumber = 1;
  bool boolean_value() const;
  void set_boolean_value(bool value);

  // int64 int64_value = 2;
  private:
  bool has_int64_value() const;
  public:
  void clear_int64_value();
  static const int kInt64ValueFieldNumber = 2;
  ::google::protobuf::int64 int64_value() const;
  void set_int64_value(::google::protobuf::int64 value);

  // float float_value = 3;
  private:
  bool has_float_value() const;
  public:
  void clear_float_value();
  static const int kFloatValueFieldNumber = 3;
  float float_value() const;
  void set_float_value(float value);

  // double double_value = 4;
  private:
  bool has_double_value() const;
  public:
  void clear_double_value();
  static const int kDoubleValueFieldNumber = 4;
  double double_value() const;
  void set_double_value(double value);

  // string string_value = 5;
  private:
  bool has_string_value() const;
  public:
  void clear_string_value();
  static const int kStringValueFieldNumber = 5;
  const ::std::string& string_value() const;
  void set_string_value(const ::std::string& value);
  #if LANG_CXX11
  void set_string_value(::std::string&& value);
  #endif
  void set_string_value(const char* value);
  void set_string_value(const char* value, size_t size);
  ::std::string* mutable_string_value();
  ::std::string* release_string_value();
  void set_allocated_string_value(::std::string* string_value);

  void clear_value();
  ValueCase value_case() const;
  // @@protoc_insertion_point(class_scope:google.ads.googleads.v0.common.Value)
 private:
  void set_has_boolean_value();
  void set_has_int64_value();
  void set_has_float_value();
  void set_has_double_value();
  void set_has_string_value();

  inline bool has_value() const;
  inline void clear_has_value();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  union ValueUnion {
    ValueUnion() {}
    bool boolean_value_;
    ::google::protobuf::int64 int64_value_;
    float float_value_;
    double double_value_;
    ::google::protobuf::internal::ArenaStringPtr string_value_;
  } value_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::uint32 _oneof_case_[1];

  friend struct ::protobuf_google_2fads_2fgoogleads_2fv0_2fcommon_2fvalue_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Value

// bool boolean_value = 1;
inline bool Value::has_boolean_value() const {
  return value_case() == kBooleanValue;
}
inline void Value::set_has_boolean_value() {
  _oneof_case_[0] = kBooleanValue;
}
inline void Value::clear_boolean_value() {
  if (has_boolean_value()) {
    value_.boolean_value_ = false;
    clear_has_value();
  }
}
inline bool Value::boolean_value() const {
  // @@protoc_insertion_point(field_get:google.ads.googleads.v0.common.Value.boolean_value)
  if (has_boolean_value()) {
    return value_.boolean_value_;
  }
  return false;
}
inline void Value::set_boolean_value(bool value) {
  if (!has_boolean_value()) {
    clear_value();
    set_has_boolean_value();
  }
  value_.boolean_value_ = value;
  // @@protoc_insertion_point(field_set:google.ads.googleads.v0.common.Value.boolean_value)
}

// int64 int64_value = 2;
inline bool Value::has_int64_value() const {
  return value_case() == kInt64Value;
}
inline void Value::set_has_int64_value() {
  _oneof_case_[0] = kInt64Value;
}
inline void Value::clear_int64_value() {
  if (has_int64_value()) {
    value_.int64_value_ = GOOGLE_LONGLONG(0);
    clear_has_value();
  }
}
inline ::google::protobuf::int64 Value::int64_value() const {
  // @@protoc_insertion_point(field_get:google.ads.googleads.v0.common.Value.int64_value)
  if (has_int64_value()) {
    return value_.int64_value_;
  }
  return GOOGLE_LONGLONG(0);
}
inline void Value::set_int64_value(::google::protobuf::int64 value) {
  if (!has_int64_value()) {
    clear_value();
    set_has_int64_value();
  }
  value_.int64_value_ = value;
  // @@protoc_insertion_point(field_set:google.ads.googleads.v0.common.Value.int64_value)
}

// float float_value = 3;
inline bool Value::has_float_value() const {
  return value_case() == kFloatValue;
}
inline void Value::set_has_float_value() {
  _oneof_case_[0] = kFloatValue;
}
inline void Value::clear_float_value() {
  if (has_float_value()) {
    value_.float_value_ = 0;
    clear_has_value();
  }
}
inline float Value::float_value() const {
  // @@protoc_insertion_point(field_get:google.ads.googleads.v0.common.Value.float_value)
  if (has_float_value()) {
    return value_.float_value_;
  }
  return 0;
}
inline void Value::set_float_value(float value) {
  if (!has_float_value()) {
    clear_value();
    set_has_float_value();
  }
  value_.float_value_ = value;
  // @@protoc_insertion_point(field_set:google.ads.googleads.v0.common.Value.float_value)
}

// double double_value = 4;
inline bool Value::has_double_value() const {
  return value_case() == kDoubleValue;
}
inline void Value::set_has_double_value() {
  _oneof_case_[0] = kDoubleValue;
}
inline void Value::clear_double_value() {
  if (has_double_value()) {
    value_.double_value_ = 0;
    clear_has_value();
  }
}
inline double Value::double_value() const {
  // @@protoc_insertion_point(field_get:google.ads.googleads.v0.common.Value.double_value)
  if (has_double_value()) {
    return value_.double_value_;
  }
  return 0;
}
inline void Value::set_double_value(double value) {
  if (!has_double_value()) {
    clear_value();
    set_has_double_value();
  }
  value_.double_value_ = value;
  // @@protoc_insertion_point(field_set:google.ads.googleads.v0.common.Value.double_value)
}

// string string_value = 5;
inline bool Value::has_string_value() const {
  return value_case() == kStringValue;
}
inline void Value::set_has_string_value() {
  _oneof_case_[0] = kStringValue;
}
inline void Value::clear_string_value() {
  if (has_string_value()) {
    value_.string_value_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    clear_has_value();
  }
}
inline const ::std::string& Value::string_value() const {
  // @@protoc_insertion_point(field_get:google.ads.googleads.v0.common.Value.string_value)
  if (has_string_value()) {
    return value_.string_value_.GetNoArena();
  }
  return *&::google::protobuf::internal::GetEmptyStringAlreadyInited();
}
inline void Value::set_string_value(const ::std::string& value) {
  // @@protoc_insertion_point(field_set:google.ads.googleads.v0.common.Value.string_value)
  if (!has_string_value()) {
    clear_value();
    set_has_string_value();
    value_.string_value_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  value_.string_value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.ads.googleads.v0.common.Value.string_value)
}
#if LANG_CXX11
inline void Value::set_string_value(::std::string&& value) {
  // @@protoc_insertion_point(field_set:google.ads.googleads.v0.common.Value.string_value)
  if (!has_string_value()) {
    clear_value();
    set_has_string_value();
    value_.string_value_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  value_.string_value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:google.ads.googleads.v0.common.Value.string_value)
}
#endif
inline void Value::set_string_value(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  if (!has_string_value()) {
    clear_value();
    set_has_string_value();
    value_.string_value_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  value_.string_value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.ads.googleads.v0.common.Value.string_value)
}
inline void Value::set_string_value(const char* value, size_t size) {
  if (!has_string_value()) {
    clear_value();
    set_has_string_value();
    value_.string_value_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  value_.string_value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.ads.googleads.v0.common.Value.string_value)
}
inline ::std::string* Value::mutable_string_value() {
  if (!has_string_value()) {
    clear_value();
    set_has_string_value();
    value_.string_value_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_mutable:google.ads.googleads.v0.common.Value.string_value)
  return value_.string_value_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Value::release_string_value() {
  // @@protoc_insertion_point(field_release:google.ads.googleads.v0.common.Value.string_value)
  if (has_string_value()) {
    clear_has_value();
    return value_.string_value_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  } else {
    return NULL;
  }
}
inline void Value::set_allocated_string_value(::std::string* string_value) {
  if (!has_string_value()) {
    value_.string_value_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  clear_value();
  if (string_value != NULL) {
    set_has_string_value();
    value_.string_value_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), string_value);
  }
  // @@protoc_insertion_point(field_set_allocated:google.ads.googleads.v0.common.Value.string_value)
}

inline bool Value::has_value() const {
  return value_case() != VALUE_NOT_SET;
}
inline void Value::clear_has_value() {
  _oneof_case_[0] = VALUE_NOT_SET;
}
inline Value::ValueCase Value::value_case() const {
  return Value::ValueCase(_oneof_case_[0]);
}
#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace common
}  // namespace v0
}  // namespace googleads
}  // namespace ads
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_google_2fads_2fgoogleads_2fv0_2fcommon_2fvalue_2eproto
