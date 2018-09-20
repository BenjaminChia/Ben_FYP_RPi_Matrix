// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/ads/googleads/v0/errors/internal_error.proto

#ifndef PROTOBUF_INCLUDED_google_2fads_2fgoogleads_2fv0_2ferrors_2finternal_5ferror_2eproto
#define PROTOBUF_INCLUDED_google_2fads_2fgoogleads_2fv0_2ferrors_2finternal_5ferror_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_protobuf_google_2fads_2fgoogleads_2fv0_2ferrors_2finternal_5ferror_2eproto 

namespace protobuf_google_2fads_2fgoogleads_2fv0_2ferrors_2finternal_5ferror_2eproto {
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
}  // namespace protobuf_google_2fads_2fgoogleads_2fv0_2ferrors_2finternal_5ferror_2eproto
namespace google {
namespace ads {
namespace googleads {
namespace v0 {
namespace errors {
class InternalErrorEnum;
class InternalErrorEnumDefaultTypeInternal;
extern InternalErrorEnumDefaultTypeInternal _InternalErrorEnum_default_instance_;
}  // namespace errors
}  // namespace v0
}  // namespace googleads
}  // namespace ads
}  // namespace google
namespace google {
namespace protobuf {
template<> ::google::ads::googleads::v0::errors::InternalErrorEnum* Arena::CreateMaybeMessage<::google::ads::googleads::v0::errors::InternalErrorEnum>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace google {
namespace ads {
namespace googleads {
namespace v0 {
namespace errors {

enum InternalErrorEnum_InternalError {
  InternalErrorEnum_InternalError_UNSPECIFIED = 0,
  InternalErrorEnum_InternalError_UNKNOWN = 1,
  InternalErrorEnum_InternalError_INTERNAL_ERROR = 2,
  InternalErrorEnum_InternalError_ERROR_CODE_NOT_PUBLISHED = 3,
  InternalErrorEnum_InternalError_TRANSIENT_ERROR = 4,
  InternalErrorEnum_InternalError_InternalErrorEnum_InternalError_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  InternalErrorEnum_InternalError_InternalErrorEnum_InternalError_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool InternalErrorEnum_InternalError_IsValid(int value);
const InternalErrorEnum_InternalError InternalErrorEnum_InternalError_InternalError_MIN = InternalErrorEnum_InternalError_UNSPECIFIED;
const InternalErrorEnum_InternalError InternalErrorEnum_InternalError_InternalError_MAX = InternalErrorEnum_InternalError_TRANSIENT_ERROR;
const int InternalErrorEnum_InternalError_InternalError_ARRAYSIZE = InternalErrorEnum_InternalError_InternalError_MAX + 1;

const ::google::protobuf::EnumDescriptor* InternalErrorEnum_InternalError_descriptor();
inline const ::std::string& InternalErrorEnum_InternalError_Name(InternalErrorEnum_InternalError value) {
  return ::google::protobuf::internal::NameOfEnum(
    InternalErrorEnum_InternalError_descriptor(), value);
}
inline bool InternalErrorEnum_InternalError_Parse(
    const ::std::string& name, InternalErrorEnum_InternalError* value) {
  return ::google::protobuf::internal::ParseNamedEnum<InternalErrorEnum_InternalError>(
    InternalErrorEnum_InternalError_descriptor(), name, value);
}
// ===================================================================

class InternalErrorEnum : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.ads.googleads.v0.errors.InternalErrorEnum) */ {
 public:
  InternalErrorEnum();
  virtual ~InternalErrorEnum();

  InternalErrorEnum(const InternalErrorEnum& from);

  inline InternalErrorEnum& operator=(const InternalErrorEnum& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  InternalErrorEnum(InternalErrorEnum&& from) noexcept
    : InternalErrorEnum() {
    *this = ::std::move(from);
  }

  inline InternalErrorEnum& operator=(InternalErrorEnum&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const InternalErrorEnum& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const InternalErrorEnum* internal_default_instance() {
    return reinterpret_cast<const InternalErrorEnum*>(
               &_InternalErrorEnum_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(InternalErrorEnum* other);
  friend void swap(InternalErrorEnum& a, InternalErrorEnum& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline InternalErrorEnum* New() const final {
    return CreateMaybeMessage<InternalErrorEnum>(NULL);
  }

  InternalErrorEnum* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<InternalErrorEnum>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const InternalErrorEnum& from);
  void MergeFrom(const InternalErrorEnum& from);
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
  void InternalSwap(InternalErrorEnum* other);
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

  typedef InternalErrorEnum_InternalError InternalError;
  static const InternalError UNSPECIFIED =
    InternalErrorEnum_InternalError_UNSPECIFIED;
  static const InternalError UNKNOWN =
    InternalErrorEnum_InternalError_UNKNOWN;
  static const InternalError INTERNAL_ERROR =
    InternalErrorEnum_InternalError_INTERNAL_ERROR;
  static const InternalError ERROR_CODE_NOT_PUBLISHED =
    InternalErrorEnum_InternalError_ERROR_CODE_NOT_PUBLISHED;
  static const InternalError TRANSIENT_ERROR =
    InternalErrorEnum_InternalError_TRANSIENT_ERROR;
  static inline bool InternalError_IsValid(int value) {
    return InternalErrorEnum_InternalError_IsValid(value);
  }
  static const InternalError InternalError_MIN =
    InternalErrorEnum_InternalError_InternalError_MIN;
  static const InternalError InternalError_MAX =
    InternalErrorEnum_InternalError_InternalError_MAX;
  static const int InternalError_ARRAYSIZE =
    InternalErrorEnum_InternalError_InternalError_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  InternalError_descriptor() {
    return InternalErrorEnum_InternalError_descriptor();
  }
  static inline const ::std::string& InternalError_Name(InternalError value) {
    return InternalErrorEnum_InternalError_Name(value);
  }
  static inline bool InternalError_Parse(const ::std::string& name,
      InternalError* value) {
    return InternalErrorEnum_InternalError_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:google.ads.googleads.v0.errors.InternalErrorEnum)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_google_2fads_2fgoogleads_2fv0_2ferrors_2finternal_5ferror_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// InternalErrorEnum

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

template <> struct is_proto_enum< ::google::ads::googleads::v0::errors::InternalErrorEnum_InternalError> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::google::ads::googleads::v0::errors::InternalErrorEnum_InternalError>() {
  return ::google::ads::googleads::v0::errors::InternalErrorEnum_InternalError_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_google_2fads_2fgoogleads_2fv0_2ferrors_2finternal_5ferror_2eproto
