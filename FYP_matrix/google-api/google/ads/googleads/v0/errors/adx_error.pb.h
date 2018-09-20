// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/ads/googleads/v0/errors/adx_error.proto

#ifndef PROTOBUF_INCLUDED_google_2fads_2fgoogleads_2fv0_2ferrors_2fadx_5ferror_2eproto
#define PROTOBUF_INCLUDED_google_2fads_2fgoogleads_2fv0_2ferrors_2fadx_5ferror_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_protobuf_google_2fads_2fgoogleads_2fv0_2ferrors_2fadx_5ferror_2eproto 

namespace protobuf_google_2fads_2fgoogleads_2fv0_2ferrors_2fadx_5ferror_2eproto {
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
}  // namespace protobuf_google_2fads_2fgoogleads_2fv0_2ferrors_2fadx_5ferror_2eproto
namespace google {
namespace ads {
namespace googleads {
namespace v0 {
namespace errors {
class AdxErrorEnum;
class AdxErrorEnumDefaultTypeInternal;
extern AdxErrorEnumDefaultTypeInternal _AdxErrorEnum_default_instance_;
}  // namespace errors
}  // namespace v0
}  // namespace googleads
}  // namespace ads
}  // namespace google
namespace google {
namespace protobuf {
template<> ::google::ads::googleads::v0::errors::AdxErrorEnum* Arena::CreateMaybeMessage<::google::ads::googleads::v0::errors::AdxErrorEnum>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace google {
namespace ads {
namespace googleads {
namespace v0 {
namespace errors {

enum AdxErrorEnum_AdxError {
  AdxErrorEnum_AdxError_UNSPECIFIED = 0,
  AdxErrorEnum_AdxError_UNKNOWN = 1,
  AdxErrorEnum_AdxError_UNSUPPORTED_FEATURE = 2,
  AdxErrorEnum_AdxError_AdxErrorEnum_AdxError_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  AdxErrorEnum_AdxError_AdxErrorEnum_AdxError_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool AdxErrorEnum_AdxError_IsValid(int value);
const AdxErrorEnum_AdxError AdxErrorEnum_AdxError_AdxError_MIN = AdxErrorEnum_AdxError_UNSPECIFIED;
const AdxErrorEnum_AdxError AdxErrorEnum_AdxError_AdxError_MAX = AdxErrorEnum_AdxError_UNSUPPORTED_FEATURE;
const int AdxErrorEnum_AdxError_AdxError_ARRAYSIZE = AdxErrorEnum_AdxError_AdxError_MAX + 1;

const ::google::protobuf::EnumDescriptor* AdxErrorEnum_AdxError_descriptor();
inline const ::std::string& AdxErrorEnum_AdxError_Name(AdxErrorEnum_AdxError value) {
  return ::google::protobuf::internal::NameOfEnum(
    AdxErrorEnum_AdxError_descriptor(), value);
}
inline bool AdxErrorEnum_AdxError_Parse(
    const ::std::string& name, AdxErrorEnum_AdxError* value) {
  return ::google::protobuf::internal::ParseNamedEnum<AdxErrorEnum_AdxError>(
    AdxErrorEnum_AdxError_descriptor(), name, value);
}
// ===================================================================

class AdxErrorEnum : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.ads.googleads.v0.errors.AdxErrorEnum) */ {
 public:
  AdxErrorEnum();
  virtual ~AdxErrorEnum();

  AdxErrorEnum(const AdxErrorEnum& from);

  inline AdxErrorEnum& operator=(const AdxErrorEnum& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  AdxErrorEnum(AdxErrorEnum&& from) noexcept
    : AdxErrorEnum() {
    *this = ::std::move(from);
  }

  inline AdxErrorEnum& operator=(AdxErrorEnum&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const AdxErrorEnum& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const AdxErrorEnum* internal_default_instance() {
    return reinterpret_cast<const AdxErrorEnum*>(
               &_AdxErrorEnum_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(AdxErrorEnum* other);
  friend void swap(AdxErrorEnum& a, AdxErrorEnum& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline AdxErrorEnum* New() const final {
    return CreateMaybeMessage<AdxErrorEnum>(NULL);
  }

  AdxErrorEnum* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<AdxErrorEnum>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const AdxErrorEnum& from);
  void MergeFrom(const AdxErrorEnum& from);
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
  void InternalSwap(AdxErrorEnum* other);
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

  typedef AdxErrorEnum_AdxError AdxError;
  static const AdxError UNSPECIFIED =
    AdxErrorEnum_AdxError_UNSPECIFIED;
  static const AdxError UNKNOWN =
    AdxErrorEnum_AdxError_UNKNOWN;
  static const AdxError UNSUPPORTED_FEATURE =
    AdxErrorEnum_AdxError_UNSUPPORTED_FEATURE;
  static inline bool AdxError_IsValid(int value) {
    return AdxErrorEnum_AdxError_IsValid(value);
  }
  static const AdxError AdxError_MIN =
    AdxErrorEnum_AdxError_AdxError_MIN;
  static const AdxError AdxError_MAX =
    AdxErrorEnum_AdxError_AdxError_MAX;
  static const int AdxError_ARRAYSIZE =
    AdxErrorEnum_AdxError_AdxError_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  AdxError_descriptor() {
    return AdxErrorEnum_AdxError_descriptor();
  }
  static inline const ::std::string& AdxError_Name(AdxError value) {
    return AdxErrorEnum_AdxError_Name(value);
  }
  static inline bool AdxError_Parse(const ::std::string& name,
      AdxError* value) {
    return AdxErrorEnum_AdxError_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:google.ads.googleads.v0.errors.AdxErrorEnum)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_google_2fads_2fgoogleads_2fv0_2ferrors_2fadx_5ferror_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// AdxErrorEnum

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

template <> struct is_proto_enum< ::google::ads::googleads::v0::errors::AdxErrorEnum_AdxError> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::google::ads::googleads::v0::errors::AdxErrorEnum_AdxError>() {
  return ::google::ads::googleads::v0::errors::AdxErrorEnum_AdxError_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_google_2fads_2fgoogleads_2fv0_2ferrors_2fadx_5ferror_2eproto