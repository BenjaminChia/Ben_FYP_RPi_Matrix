// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/ads/googleads/v0/errors/field_error.proto

#ifndef PROTOBUF_INCLUDED_google_2fads_2fgoogleads_2fv0_2ferrors_2ffield_5ferror_2eproto
#define PROTOBUF_INCLUDED_google_2fads_2fgoogleads_2fv0_2ferrors_2ffield_5ferror_2eproto

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
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_google_2fads_2fgoogleads_2fv0_2ferrors_2ffield_5ferror_2eproto 

namespace protobuf_google_2fads_2fgoogleads_2fv0_2ferrors_2ffield_5ferror_2eproto {
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
}  // namespace protobuf_google_2fads_2fgoogleads_2fv0_2ferrors_2ffield_5ferror_2eproto
namespace google {
namespace ads {
namespace googleads {
namespace v0 {
namespace errors {
class FieldErrorEnum;
class FieldErrorEnumDefaultTypeInternal;
extern FieldErrorEnumDefaultTypeInternal _FieldErrorEnum_default_instance_;
}  // namespace errors
}  // namespace v0
}  // namespace googleads
}  // namespace ads
}  // namespace google
namespace google {
namespace protobuf {
template<> ::google::ads::googleads::v0::errors::FieldErrorEnum* Arena::CreateMaybeMessage<::google::ads::googleads::v0::errors::FieldErrorEnum>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace google {
namespace ads {
namespace googleads {
namespace v0 {
namespace errors {

enum FieldErrorEnum_FieldError {
  FieldErrorEnum_FieldError_UNSPECIFIED = 0,
  FieldErrorEnum_FieldError_UNKNOWN = 1,
  FieldErrorEnum_FieldError_REQUIRED = 2,
  FieldErrorEnum_FieldError_IMMUTABLE_FIELD = 3,
  FieldErrorEnum_FieldError_INVALID_VALUE = 4,
  FieldErrorEnum_FieldError_VALUE_MUST_BE_UNSET = 5,
  FieldErrorEnum_FieldError_REQUIRED_NONEMPTY_LIST = 6,
  FieldErrorEnum_FieldError_FieldErrorEnum_FieldError_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  FieldErrorEnum_FieldError_FieldErrorEnum_FieldError_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool FieldErrorEnum_FieldError_IsValid(int value);
const FieldErrorEnum_FieldError FieldErrorEnum_FieldError_FieldError_MIN = FieldErrorEnum_FieldError_UNSPECIFIED;
const FieldErrorEnum_FieldError FieldErrorEnum_FieldError_FieldError_MAX = FieldErrorEnum_FieldError_REQUIRED_NONEMPTY_LIST;
const int FieldErrorEnum_FieldError_FieldError_ARRAYSIZE = FieldErrorEnum_FieldError_FieldError_MAX + 1;

const ::google::protobuf::EnumDescriptor* FieldErrorEnum_FieldError_descriptor();
inline const ::std::string& FieldErrorEnum_FieldError_Name(FieldErrorEnum_FieldError value) {
  return ::google::protobuf::internal::NameOfEnum(
    FieldErrorEnum_FieldError_descriptor(), value);
}
inline bool FieldErrorEnum_FieldError_Parse(
    const ::std::string& name, FieldErrorEnum_FieldError* value) {
  return ::google::protobuf::internal::ParseNamedEnum<FieldErrorEnum_FieldError>(
    FieldErrorEnum_FieldError_descriptor(), name, value);
}
// ===================================================================

class FieldErrorEnum : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.ads.googleads.v0.errors.FieldErrorEnum) */ {
 public:
  FieldErrorEnum();
  virtual ~FieldErrorEnum();

  FieldErrorEnum(const FieldErrorEnum& from);

  inline FieldErrorEnum& operator=(const FieldErrorEnum& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  FieldErrorEnum(FieldErrorEnum&& from) noexcept
    : FieldErrorEnum() {
    *this = ::std::move(from);
  }

  inline FieldErrorEnum& operator=(FieldErrorEnum&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const FieldErrorEnum& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const FieldErrorEnum* internal_default_instance() {
    return reinterpret_cast<const FieldErrorEnum*>(
               &_FieldErrorEnum_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(FieldErrorEnum* other);
  friend void swap(FieldErrorEnum& a, FieldErrorEnum& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline FieldErrorEnum* New() const final {
    return CreateMaybeMessage<FieldErrorEnum>(NULL);
  }

  FieldErrorEnum* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<FieldErrorEnum>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const FieldErrorEnum& from);
  void MergeFrom(const FieldErrorEnum& from);
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
  void InternalSwap(FieldErrorEnum* other);
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

  typedef FieldErrorEnum_FieldError FieldError;
  static const FieldError UNSPECIFIED =
    FieldErrorEnum_FieldError_UNSPECIFIED;
  static const FieldError UNKNOWN =
    FieldErrorEnum_FieldError_UNKNOWN;
  static const FieldError REQUIRED =
    FieldErrorEnum_FieldError_REQUIRED;
  static const FieldError IMMUTABLE_FIELD =
    FieldErrorEnum_FieldError_IMMUTABLE_FIELD;
  static const FieldError INVALID_VALUE =
    FieldErrorEnum_FieldError_INVALID_VALUE;
  static const FieldError VALUE_MUST_BE_UNSET =
    FieldErrorEnum_FieldError_VALUE_MUST_BE_UNSET;
  static const FieldError REQUIRED_NONEMPTY_LIST =
    FieldErrorEnum_FieldError_REQUIRED_NONEMPTY_LIST;
  static inline bool FieldError_IsValid(int value) {
    return FieldErrorEnum_FieldError_IsValid(value);
  }
  static const FieldError FieldError_MIN =
    FieldErrorEnum_FieldError_FieldError_MIN;
  static const FieldError FieldError_MAX =
    FieldErrorEnum_FieldError_FieldError_MAX;
  static const int FieldError_ARRAYSIZE =
    FieldErrorEnum_FieldError_FieldError_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  FieldError_descriptor() {
    return FieldErrorEnum_FieldError_descriptor();
  }
  static inline const ::std::string& FieldError_Name(FieldError value) {
    return FieldErrorEnum_FieldError_Name(value);
  }
  static inline bool FieldError_Parse(const ::std::string& name,
      FieldError* value) {
    return FieldErrorEnum_FieldError_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:google.ads.googleads.v0.errors.FieldErrorEnum)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_google_2fads_2fgoogleads_2fv0_2ferrors_2ffield_5ferror_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// FieldErrorEnum

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace errors
}  // namespace v0
}  // namespace googleads
}  // namespace ads
}  // namespace google

namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::google::ads::googleads::v0::errors::FieldErrorEnum_FieldError> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::google::ads::googleads::v0::errors::FieldErrorEnum_FieldError>() {
  return ::google::ads::googleads::v0::errors::FieldErrorEnum_FieldError_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_google_2fads_2fgoogleads_2fv0_2ferrors_2ffield_5ferror_2eproto