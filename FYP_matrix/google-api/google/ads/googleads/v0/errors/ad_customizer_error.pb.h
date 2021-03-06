// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/ads/googleads/v0/errors/ad_customizer_error.proto

#ifndef PROTOBUF_INCLUDED_google_2fads_2fgoogleads_2fv0_2ferrors_2fad_5fcustomizer_5ferror_2eproto
#define PROTOBUF_INCLUDED_google_2fads_2fgoogleads_2fv0_2ferrors_2fad_5fcustomizer_5ferror_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_protobuf_google_2fads_2fgoogleads_2fv0_2ferrors_2fad_5fcustomizer_5ferror_2eproto 

namespace protobuf_google_2fads_2fgoogleads_2fv0_2ferrors_2fad_5fcustomizer_5ferror_2eproto {
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
}  // namespace protobuf_google_2fads_2fgoogleads_2fv0_2ferrors_2fad_5fcustomizer_5ferror_2eproto
namespace google {
namespace ads {
namespace googleads {
namespace v0 {
namespace errors {
class AdCustomizerErrorEnum;
class AdCustomizerErrorEnumDefaultTypeInternal;
extern AdCustomizerErrorEnumDefaultTypeInternal _AdCustomizerErrorEnum_default_instance_;
}  // namespace errors
}  // namespace v0
}  // namespace googleads
}  // namespace ads
}  // namespace google
namespace google {
namespace protobuf {
template<> ::google::ads::googleads::v0::errors::AdCustomizerErrorEnum* Arena::CreateMaybeMessage<::google::ads::googleads::v0::errors::AdCustomizerErrorEnum>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace google {
namespace ads {
namespace googleads {
namespace v0 {
namespace errors {

enum AdCustomizerErrorEnum_AdCustomizerError {
  AdCustomizerErrorEnum_AdCustomizerError_UNSPECIFIED = 0,
  AdCustomizerErrorEnum_AdCustomizerError_UNKNOWN = 1,
  AdCustomizerErrorEnum_AdCustomizerError_COUNTDOWN_INVALID_DATE_FORMAT = 2,
  AdCustomizerErrorEnum_AdCustomizerError_COUNTDOWN_DATE_IN_PAST = 3,
  AdCustomizerErrorEnum_AdCustomizerError_COUNTDOWN_INVALID_LOCALE = 4,
  AdCustomizerErrorEnum_AdCustomizerError_COUNTDOWN_INVALID_START_DAYS_BEFORE = 5,
  AdCustomizerErrorEnum_AdCustomizerError_UNKNOWN_USER_LIST = 6,
  AdCustomizerErrorEnum_AdCustomizerError_AdCustomizerErrorEnum_AdCustomizerError_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  AdCustomizerErrorEnum_AdCustomizerError_AdCustomizerErrorEnum_AdCustomizerError_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool AdCustomizerErrorEnum_AdCustomizerError_IsValid(int value);
const AdCustomizerErrorEnum_AdCustomizerError AdCustomizerErrorEnum_AdCustomizerError_AdCustomizerError_MIN = AdCustomizerErrorEnum_AdCustomizerError_UNSPECIFIED;
const AdCustomizerErrorEnum_AdCustomizerError AdCustomizerErrorEnum_AdCustomizerError_AdCustomizerError_MAX = AdCustomizerErrorEnum_AdCustomizerError_UNKNOWN_USER_LIST;
const int AdCustomizerErrorEnum_AdCustomizerError_AdCustomizerError_ARRAYSIZE = AdCustomizerErrorEnum_AdCustomizerError_AdCustomizerError_MAX + 1;

const ::google::protobuf::EnumDescriptor* AdCustomizerErrorEnum_AdCustomizerError_descriptor();
inline const ::std::string& AdCustomizerErrorEnum_AdCustomizerError_Name(AdCustomizerErrorEnum_AdCustomizerError value) {
  return ::google::protobuf::internal::NameOfEnum(
    AdCustomizerErrorEnum_AdCustomizerError_descriptor(), value);
}
inline bool AdCustomizerErrorEnum_AdCustomizerError_Parse(
    const ::std::string& name, AdCustomizerErrorEnum_AdCustomizerError* value) {
  return ::google::protobuf::internal::ParseNamedEnum<AdCustomizerErrorEnum_AdCustomizerError>(
    AdCustomizerErrorEnum_AdCustomizerError_descriptor(), name, value);
}
// ===================================================================

class AdCustomizerErrorEnum : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.ads.googleads.v0.errors.AdCustomizerErrorEnum) */ {
 public:
  AdCustomizerErrorEnum();
  virtual ~AdCustomizerErrorEnum();

  AdCustomizerErrorEnum(const AdCustomizerErrorEnum& from);

  inline AdCustomizerErrorEnum& operator=(const AdCustomizerErrorEnum& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  AdCustomizerErrorEnum(AdCustomizerErrorEnum&& from) noexcept
    : AdCustomizerErrorEnum() {
    *this = ::std::move(from);
  }

  inline AdCustomizerErrorEnum& operator=(AdCustomizerErrorEnum&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const AdCustomizerErrorEnum& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const AdCustomizerErrorEnum* internal_default_instance() {
    return reinterpret_cast<const AdCustomizerErrorEnum*>(
               &_AdCustomizerErrorEnum_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(AdCustomizerErrorEnum* other);
  friend void swap(AdCustomizerErrorEnum& a, AdCustomizerErrorEnum& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline AdCustomizerErrorEnum* New() const final {
    return CreateMaybeMessage<AdCustomizerErrorEnum>(NULL);
  }

  AdCustomizerErrorEnum* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<AdCustomizerErrorEnum>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const AdCustomizerErrorEnum& from);
  void MergeFrom(const AdCustomizerErrorEnum& from);
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
  void InternalSwap(AdCustomizerErrorEnum* other);
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

  typedef AdCustomizerErrorEnum_AdCustomizerError AdCustomizerError;
  static const AdCustomizerError UNSPECIFIED =
    AdCustomizerErrorEnum_AdCustomizerError_UNSPECIFIED;
  static const AdCustomizerError UNKNOWN =
    AdCustomizerErrorEnum_AdCustomizerError_UNKNOWN;
  static const AdCustomizerError COUNTDOWN_INVALID_DATE_FORMAT =
    AdCustomizerErrorEnum_AdCustomizerError_COUNTDOWN_INVALID_DATE_FORMAT;
  static const AdCustomizerError COUNTDOWN_DATE_IN_PAST =
    AdCustomizerErrorEnum_AdCustomizerError_COUNTDOWN_DATE_IN_PAST;
  static const AdCustomizerError COUNTDOWN_INVALID_LOCALE =
    AdCustomizerErrorEnum_AdCustomizerError_COUNTDOWN_INVALID_LOCALE;
  static const AdCustomizerError COUNTDOWN_INVALID_START_DAYS_BEFORE =
    AdCustomizerErrorEnum_AdCustomizerError_COUNTDOWN_INVALID_START_DAYS_BEFORE;
  static const AdCustomizerError UNKNOWN_USER_LIST =
    AdCustomizerErrorEnum_AdCustomizerError_UNKNOWN_USER_LIST;
  static inline bool AdCustomizerError_IsValid(int value) {
    return AdCustomizerErrorEnum_AdCustomizerError_IsValid(value);
  }
  static const AdCustomizerError AdCustomizerError_MIN =
    AdCustomizerErrorEnum_AdCustomizerError_AdCustomizerError_MIN;
  static const AdCustomizerError AdCustomizerError_MAX =
    AdCustomizerErrorEnum_AdCustomizerError_AdCustomizerError_MAX;
  static const int AdCustomizerError_ARRAYSIZE =
    AdCustomizerErrorEnum_AdCustomizerError_AdCustomizerError_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  AdCustomizerError_descriptor() {
    return AdCustomizerErrorEnum_AdCustomizerError_descriptor();
  }
  static inline const ::std::string& AdCustomizerError_Name(AdCustomizerError value) {
    return AdCustomizerErrorEnum_AdCustomizerError_Name(value);
  }
  static inline bool AdCustomizerError_Parse(const ::std::string& name,
      AdCustomizerError* value) {
    return AdCustomizerErrorEnum_AdCustomizerError_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:google.ads.googleads.v0.errors.AdCustomizerErrorEnum)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_google_2fads_2fgoogleads_2fv0_2ferrors_2fad_5fcustomizer_5ferror_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// AdCustomizerErrorEnum

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

template <> struct is_proto_enum< ::google::ads::googleads::v0::errors::AdCustomizerErrorEnum_AdCustomizerError> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::google::ads::googleads::v0::errors::AdCustomizerErrorEnum_AdCustomizerError>() {
  return ::google::ads::googleads::v0::errors::AdCustomizerErrorEnum_AdCustomizerError_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_google_2fads_2fgoogleads_2fv0_2ferrors_2fad_5fcustomizer_5ferror_2eproto
