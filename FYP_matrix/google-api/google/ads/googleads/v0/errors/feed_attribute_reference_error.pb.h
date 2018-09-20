// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/ads/googleads/v0/errors/feed_attribute_reference_error.proto

#ifndef PROTOBUF_INCLUDED_google_2fads_2fgoogleads_2fv0_2ferrors_2ffeed_5fattribute_5freference_5ferror_2eproto
#define PROTOBUF_INCLUDED_google_2fads_2fgoogleads_2fv0_2ferrors_2ffeed_5fattribute_5freference_5ferror_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_protobuf_google_2fads_2fgoogleads_2fv0_2ferrors_2ffeed_5fattribute_5freference_5ferror_2eproto 

namespace protobuf_google_2fads_2fgoogleads_2fv0_2ferrors_2ffeed_5fattribute_5freference_5ferror_2eproto {
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
}  // namespace protobuf_google_2fads_2fgoogleads_2fv0_2ferrors_2ffeed_5fattribute_5freference_5ferror_2eproto
namespace google {
namespace ads {
namespace googleads {
namespace v0 {
namespace errors {
class FeedAttributeReferenceErrorEnum;
class FeedAttributeReferenceErrorEnumDefaultTypeInternal;
extern FeedAttributeReferenceErrorEnumDefaultTypeInternal _FeedAttributeReferenceErrorEnum_default_instance_;
}  // namespace errors
}  // namespace v0
}  // namespace googleads
}  // namespace ads
}  // namespace google
namespace google {
namespace protobuf {
template<> ::google::ads::googleads::v0::errors::FeedAttributeReferenceErrorEnum* Arena::CreateMaybeMessage<::google::ads::googleads::v0::errors::FeedAttributeReferenceErrorEnum>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace google {
namespace ads {
namespace googleads {
namespace v0 {
namespace errors {

enum FeedAttributeReferenceErrorEnum_FeedAttributeReferenceError {
  FeedAttributeReferenceErrorEnum_FeedAttributeReferenceError_UNSPECIFIED = 0,
  FeedAttributeReferenceErrorEnum_FeedAttributeReferenceError_UNKNOWN = 1,
  FeedAttributeReferenceErrorEnum_FeedAttributeReferenceError_CANNOT_REFERENCE_DELETED_FEED = 2,
  FeedAttributeReferenceErrorEnum_FeedAttributeReferenceError_INVALID_FEED_NAME = 3,
  FeedAttributeReferenceErrorEnum_FeedAttributeReferenceError_INVALID_FEED_ATTRIBUTE_NAME = 4,
  FeedAttributeReferenceErrorEnum_FeedAttributeReferenceError_FeedAttributeReferenceErrorEnum_FeedAttributeReferenceError_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  FeedAttributeReferenceErrorEnum_FeedAttributeReferenceError_FeedAttributeReferenceErrorEnum_FeedAttributeReferenceError_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool FeedAttributeReferenceErrorEnum_FeedAttributeReferenceError_IsValid(int value);
const FeedAttributeReferenceErrorEnum_FeedAttributeReferenceError FeedAttributeReferenceErrorEnum_FeedAttributeReferenceError_FeedAttributeReferenceError_MIN = FeedAttributeReferenceErrorEnum_FeedAttributeReferenceError_UNSPECIFIED;
const FeedAttributeReferenceErrorEnum_FeedAttributeReferenceError FeedAttributeReferenceErrorEnum_FeedAttributeReferenceError_FeedAttributeReferenceError_MAX = FeedAttributeReferenceErrorEnum_FeedAttributeReferenceError_INVALID_FEED_ATTRIBUTE_NAME;
const int FeedAttributeReferenceErrorEnum_FeedAttributeReferenceError_FeedAttributeReferenceError_ARRAYSIZE = FeedAttributeReferenceErrorEnum_FeedAttributeReferenceError_FeedAttributeReferenceError_MAX + 1;

const ::google::protobuf::EnumDescriptor* FeedAttributeReferenceErrorEnum_FeedAttributeReferenceError_descriptor();
inline const ::std::string& FeedAttributeReferenceErrorEnum_FeedAttributeReferenceError_Name(FeedAttributeReferenceErrorEnum_FeedAttributeReferenceError value) {
  return ::google::protobuf::internal::NameOfEnum(
    FeedAttributeReferenceErrorEnum_FeedAttributeReferenceError_descriptor(), value);
}
inline bool FeedAttributeReferenceErrorEnum_FeedAttributeReferenceError_Parse(
    const ::std::string& name, FeedAttributeReferenceErrorEnum_FeedAttributeReferenceError* value) {
  return ::google::protobuf::internal::ParseNamedEnum<FeedAttributeReferenceErrorEnum_FeedAttributeReferenceError>(
    FeedAttributeReferenceErrorEnum_FeedAttributeReferenceError_descriptor(), name, value);
}
// ===================================================================

class FeedAttributeReferenceErrorEnum : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.ads.googleads.v0.errors.FeedAttributeReferenceErrorEnum) */ {
 public:
  FeedAttributeReferenceErrorEnum();
  virtual ~FeedAttributeReferenceErrorEnum();

  FeedAttributeReferenceErrorEnum(const FeedAttributeReferenceErrorEnum& from);

  inline FeedAttributeReferenceErrorEnum& operator=(const FeedAttributeReferenceErrorEnum& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  FeedAttributeReferenceErrorEnum(FeedAttributeReferenceErrorEnum&& from) noexcept
    : FeedAttributeReferenceErrorEnum() {
    *this = ::std::move(from);
  }

  inline FeedAttributeReferenceErrorEnum& operator=(FeedAttributeReferenceErrorEnum&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const FeedAttributeReferenceErrorEnum& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const FeedAttributeReferenceErrorEnum* internal_default_instance() {
    return reinterpret_cast<const FeedAttributeReferenceErrorEnum*>(
               &_FeedAttributeReferenceErrorEnum_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(FeedAttributeReferenceErrorEnum* other);
  friend void swap(FeedAttributeReferenceErrorEnum& a, FeedAttributeReferenceErrorEnum& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline FeedAttributeReferenceErrorEnum* New() const final {
    return CreateMaybeMessage<FeedAttributeReferenceErrorEnum>(NULL);
  }

  FeedAttributeReferenceErrorEnum* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<FeedAttributeReferenceErrorEnum>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const FeedAttributeReferenceErrorEnum& from);
  void MergeFrom(const FeedAttributeReferenceErrorEnum& from);
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
  void InternalSwap(FeedAttributeReferenceErrorEnum* other);
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

  typedef FeedAttributeReferenceErrorEnum_FeedAttributeReferenceError FeedAttributeReferenceError;
  static const FeedAttributeReferenceError UNSPECIFIED =
    FeedAttributeReferenceErrorEnum_FeedAttributeReferenceError_UNSPECIFIED;
  static const FeedAttributeReferenceError UNKNOWN =
    FeedAttributeReferenceErrorEnum_FeedAttributeReferenceError_UNKNOWN;
  static const FeedAttributeReferenceError CANNOT_REFERENCE_DELETED_FEED =
    FeedAttributeReferenceErrorEnum_FeedAttributeReferenceError_CANNOT_REFERENCE_DELETED_FEED;
  static const FeedAttributeReferenceError INVALID_FEED_NAME =
    FeedAttributeReferenceErrorEnum_FeedAttributeReferenceError_INVALID_FEED_NAME;
  static const FeedAttributeReferenceError INVALID_FEED_ATTRIBUTE_NAME =
    FeedAttributeReferenceErrorEnum_FeedAttributeReferenceError_INVALID_FEED_ATTRIBUTE_NAME;
  static inline bool FeedAttributeReferenceError_IsValid(int value) {
    return FeedAttributeReferenceErrorEnum_FeedAttributeReferenceError_IsValid(value);
  }
  static const FeedAttributeReferenceError FeedAttributeReferenceError_MIN =
    FeedAttributeReferenceErrorEnum_FeedAttributeReferenceError_FeedAttributeReferenceError_MIN;
  static const FeedAttributeReferenceError FeedAttributeReferenceError_MAX =
    FeedAttributeReferenceErrorEnum_FeedAttributeReferenceError_FeedAttributeReferenceError_MAX;
  static const int FeedAttributeReferenceError_ARRAYSIZE =
    FeedAttributeReferenceErrorEnum_FeedAttributeReferenceError_FeedAttributeReferenceError_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  FeedAttributeReferenceError_descriptor() {
    return FeedAttributeReferenceErrorEnum_FeedAttributeReferenceError_descriptor();
  }
  static inline const ::std::string& FeedAttributeReferenceError_Name(FeedAttributeReferenceError value) {
    return FeedAttributeReferenceErrorEnum_FeedAttributeReferenceError_Name(value);
  }
  static inline bool FeedAttributeReferenceError_Parse(const ::std::string& name,
      FeedAttributeReferenceError* value) {
    return FeedAttributeReferenceErrorEnum_FeedAttributeReferenceError_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:google.ads.googleads.v0.errors.FeedAttributeReferenceErrorEnum)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_google_2fads_2fgoogleads_2fv0_2ferrors_2ffeed_5fattribute_5freference_5ferror_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// FeedAttributeReferenceErrorEnum

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

template <> struct is_proto_enum< ::google::ads::googleads::v0::errors::FeedAttributeReferenceErrorEnum_FeedAttributeReferenceError> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::google::ads::googleads::v0::errors::FeedAttributeReferenceErrorEnum_FeedAttributeReferenceError>() {
  return ::google::ads::googleads::v0::errors::FeedAttributeReferenceErrorEnum_FeedAttributeReferenceError_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_google_2fads_2fgoogleads_2fv0_2ferrors_2ffeed_5fattribute_5freference_5ferror_2eproto
