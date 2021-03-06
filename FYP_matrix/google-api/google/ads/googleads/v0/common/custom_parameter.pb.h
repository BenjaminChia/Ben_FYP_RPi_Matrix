// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/ads/googleads/v0/common/custom_parameter.proto

#ifndef PROTOBUF_INCLUDED_google_2fads_2fgoogleads_2fv0_2fcommon_2fcustom_5fparameter_2eproto
#define PROTOBUF_INCLUDED_google_2fads_2fgoogleads_2fv0_2fcommon_2fcustom_5fparameter_2eproto

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
#include <google/protobuf/wrappers.pb.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_google_2fads_2fgoogleads_2fv0_2fcommon_2fcustom_5fparameter_2eproto 

namespace protobuf_google_2fads_2fgoogleads_2fv0_2fcommon_2fcustom_5fparameter_2eproto {
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
}  // namespace protobuf_google_2fads_2fgoogleads_2fv0_2fcommon_2fcustom_5fparameter_2eproto
namespace google {
namespace ads {
namespace googleads {
namespace v0 {
namespace common {
class CustomParameter;
class CustomParameterDefaultTypeInternal;
extern CustomParameterDefaultTypeInternal _CustomParameter_default_instance_;
}  // namespace common
}  // namespace v0
}  // namespace googleads
}  // namespace ads
}  // namespace google
namespace google {
namespace protobuf {
template<> ::google::ads::googleads::v0::common::CustomParameter* Arena::CreateMaybeMessage<::google::ads::googleads::v0::common::CustomParameter>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace google {
namespace ads {
namespace googleads {
namespace v0 {
namespace common {

// ===================================================================

class CustomParameter : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.ads.googleads.v0.common.CustomParameter) */ {
 public:
  CustomParameter();
  virtual ~CustomParameter();

  CustomParameter(const CustomParameter& from);

  inline CustomParameter& operator=(const CustomParameter& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  CustomParameter(CustomParameter&& from) noexcept
    : CustomParameter() {
    *this = ::std::move(from);
  }

  inline CustomParameter& operator=(CustomParameter&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const CustomParameter& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const CustomParameter* internal_default_instance() {
    return reinterpret_cast<const CustomParameter*>(
               &_CustomParameter_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(CustomParameter* other);
  friend void swap(CustomParameter& a, CustomParameter& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline CustomParameter* New() const final {
    return CreateMaybeMessage<CustomParameter>(NULL);
  }

  CustomParameter* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<CustomParameter>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const CustomParameter& from);
  void MergeFrom(const CustomParameter& from);
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
  void InternalSwap(CustomParameter* other);
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

  // .google.protobuf.StringValue key = 1;
  bool has_key() const;
  void clear_key();
  static const int kKeyFieldNumber = 1;
  private:
  const ::google::protobuf::StringValue& _internal_key() const;
  public:
  const ::google::protobuf::StringValue& key() const;
  ::google::protobuf::StringValue* release_key();
  ::google::protobuf::StringValue* mutable_key();
  void set_allocated_key(::google::protobuf::StringValue* key);

  // .google.protobuf.StringValue value = 2;
  bool has_value() const;
  void clear_value();
  static const int kValueFieldNumber = 2;
  private:
  const ::google::protobuf::StringValue& _internal_value() const;
  public:
  const ::google::protobuf::StringValue& value() const;
  ::google::protobuf::StringValue* release_value();
  ::google::protobuf::StringValue* mutable_value();
  void set_allocated_value(::google::protobuf::StringValue* value);

  // @@protoc_insertion_point(class_scope:google.ads.googleads.v0.common.CustomParameter)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::StringValue* key_;
  ::google::protobuf::StringValue* value_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_google_2fads_2fgoogleads_2fv0_2fcommon_2fcustom_5fparameter_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// CustomParameter

// .google.protobuf.StringValue key = 1;
inline bool CustomParameter::has_key() const {
  return this != internal_default_instance() && key_ != NULL;
}
inline const ::google::protobuf::StringValue& CustomParameter::_internal_key() const {
  return *key_;
}
inline const ::google::protobuf::StringValue& CustomParameter::key() const {
  const ::google::protobuf::StringValue* p = key_;
  // @@protoc_insertion_point(field_get:google.ads.googleads.v0.common.CustomParameter.key)
  return p != NULL ? *p : *reinterpret_cast<const ::google::protobuf::StringValue*>(
      &::google::protobuf::_StringValue_default_instance_);
}
inline ::google::protobuf::StringValue* CustomParameter::release_key() {
  // @@protoc_insertion_point(field_release:google.ads.googleads.v0.common.CustomParameter.key)
  
  ::google::protobuf::StringValue* temp = key_;
  key_ = NULL;
  return temp;
}
inline ::google::protobuf::StringValue* CustomParameter::mutable_key() {
  
  if (key_ == NULL) {
    auto* p = CreateMaybeMessage<::google::protobuf::StringValue>(GetArenaNoVirtual());
    key_ = p;
  }
  // @@protoc_insertion_point(field_mutable:google.ads.googleads.v0.common.CustomParameter.key)
  return key_;
}
inline void CustomParameter::set_allocated_key(::google::protobuf::StringValue* key) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(key_);
  }
  if (key) {
    ::google::protobuf::Arena* submessage_arena =
      reinterpret_cast<::google::protobuf::MessageLite*>(key)->GetArena();
    if (message_arena != submessage_arena) {
      key = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, key, submessage_arena);
    }
    
  } else {
    
  }
  key_ = key;
  // @@protoc_insertion_point(field_set_allocated:google.ads.googleads.v0.common.CustomParameter.key)
}

// .google.protobuf.StringValue value = 2;
inline bool CustomParameter::has_value() const {
  return this != internal_default_instance() && value_ != NULL;
}
inline const ::google::protobuf::StringValue& CustomParameter::_internal_value() const {
  return *value_;
}
inline const ::google::protobuf::StringValue& CustomParameter::value() const {
  const ::google::protobuf::StringValue* p = value_;
  // @@protoc_insertion_point(field_get:google.ads.googleads.v0.common.CustomParameter.value)
  return p != NULL ? *p : *reinterpret_cast<const ::google::protobuf::StringValue*>(
      &::google::protobuf::_StringValue_default_instance_);
}
inline ::google::protobuf::StringValue* CustomParameter::release_value() {
  // @@protoc_insertion_point(field_release:google.ads.googleads.v0.common.CustomParameter.value)
  
  ::google::protobuf::StringValue* temp = value_;
  value_ = NULL;
  return temp;
}
inline ::google::protobuf::StringValue* CustomParameter::mutable_value() {
  
  if (value_ == NULL) {
    auto* p = CreateMaybeMessage<::google::protobuf::StringValue>(GetArenaNoVirtual());
    value_ = p;
  }
  // @@protoc_insertion_point(field_mutable:google.ads.googleads.v0.common.CustomParameter.value)
  return value_;
}
inline void CustomParameter::set_allocated_value(::google::protobuf::StringValue* value) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(value_);
  }
  if (value) {
    ::google::protobuf::Arena* submessage_arena =
      reinterpret_cast<::google::protobuf::MessageLite*>(value)->GetArena();
    if (message_arena != submessage_arena) {
      value = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, value, submessage_arena);
    }
    
  } else {
    
  }
  value_ = value;
  // @@protoc_insertion_point(field_set_allocated:google.ads.googleads.v0.common.CustomParameter.value)
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

#endif  // PROTOBUF_INCLUDED_google_2fads_2fgoogleads_2fv0_2fcommon_2fcustom_5fparameter_2eproto
