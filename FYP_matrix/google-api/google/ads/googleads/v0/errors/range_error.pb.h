// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/ads/googleads/v0/errors/range_error.proto

#ifndef PROTOBUF_INCLUDED_google_2fads_2fgoogleads_2fv0_2ferrors_2frange_5ferror_2eproto
#define PROTOBUF_INCLUDED_google_2fads_2fgoogleads_2fv0_2ferrors_2frange_5ferror_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_protobuf_google_2fads_2fgoogleads_2fv0_2ferrors_2frange_5ferror_2eproto 

namespace protobuf_google_2fads_2fgoogleads_2fv0_2ferrors_2frange_5ferror_2eproto {
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
}  // namespace protobuf_google_2fads_2fgoogleads_2fv0_2ferrors_2frange_5ferror_2eproto
namespace google {
namespace ads {
namespace googleads {
namespace v0 {
namespace errors {
class RangeErrorEnum;
class RangeErrorEnumDefaultTypeInternal;
extern RangeErrorEnumDefaultTypeInternal _RangeErrorEnum_default_instance_;
}  // namespace errors
}  // namespace v0
}  // namespace googleads
}  // namespace ads
}  // namespace google
namespace google {
namespace protobuf {
template<> ::google::ads::googleads::v0::errors::RangeErrorEnum* Arena::CreateMaybeMessage<::google::ads::googleads::v0::errors::RangeErrorEnum>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace google {
namespace ads {
namespace googleads {
namespace v0 {
namespace errors {

enum RangeErrorEnum_RangeError {
  RangeErrorEnum_RangeError_UNSPECIFIED = 0,
  RangeErrorEnum_RangeError_UNKNOWN = 1,
  RangeErrorEnum_RangeError_TOO_LOW = 2,
  RangeErrorEnum_RangeError_TOO_HIGH = 3,
  RangeErrorEnum_RangeError_RangeErrorEnum_RangeError_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  RangeErrorEnum_RangeError_RangeErrorEnum_RangeError_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool RangeErrorEnum_RangeError_IsValid(int value);
const RangeErrorEnum_RangeError RangeErrorEnum_RangeError_RangeError_MIN = RangeErrorEnum_RangeError_UNSPECIFIED;
const RangeErrorEnum_RangeError RangeErrorEnum_RangeError_RangeError_MAX = RangeErrorEnum_RangeError_TOO_HIGH;
const int RangeErrorEnum_RangeError_RangeError_ARRAYSIZE = RangeErrorEnum_RangeError_RangeError_MAX + 1;

const ::google::protobuf::EnumDescriptor* RangeErrorEnum_RangeError_descriptor();
inline const ::std::string& RangeErrorEnum_RangeError_Name(RangeErrorEnum_RangeError value) {
  return ::google::protobuf::internal::NameOfEnum(
    RangeErrorEnum_RangeError_descriptor(), value);
}
inline bool RangeErrorEnum_RangeError_Parse(
    const ::std::string& name, RangeErrorEnum_RangeError* value) {
  return ::google::protobuf::internal::ParseNamedEnum<RangeErrorEnum_RangeError>(
    RangeErrorEnum_RangeError_descriptor(), name, value);
}
// ===================================================================

class RangeErrorEnum : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.ads.googleads.v0.errors.RangeErrorEnum) */ {
 public:
  RangeErrorEnum();
  virtual ~RangeErrorEnum();

  RangeErrorEnum(const RangeErrorEnum& from);

  inline RangeErrorEnum& operator=(const RangeErrorEnum& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  RangeErrorEnum(RangeErrorEnum&& from) noexcept
    : RangeErrorEnum() {
    *this = ::std::move(from);
  }

  inline RangeErrorEnum& operator=(RangeErrorEnum&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const RangeErrorEnum& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const RangeErrorEnum* internal_default_instance() {
    return reinterpret_cast<const RangeErrorEnum*>(
               &_RangeErrorEnum_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(RangeErrorEnum* other);
  friend void swap(RangeErrorEnum& a, RangeErrorEnum& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline RangeErrorEnum* New() const final {
    return CreateMaybeMessage<RangeErrorEnum>(NULL);
  }

  RangeErrorEnum* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<RangeErrorEnum>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const RangeErrorEnum& from);
  void MergeFrom(const RangeErrorEnum& from);
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
  void InternalSwap(RangeErrorEnum* other);
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

  typedef RangeErrorEnum_RangeError RangeError;
  static const RangeError UNSPECIFIED =
    RangeErrorEnum_RangeError_UNSPECIFIED;
  static const RangeError UNKNOWN =
    RangeErrorEnum_RangeError_UNKNOWN;
  static const RangeError TOO_LOW =
    RangeErrorEnum_RangeError_TOO_LOW;
  static const RangeError TOO_HIGH =
    RangeErrorEnum_RangeError_TOO_HIGH;
  static inline bool RangeError_IsValid(int value) {
    return RangeErrorEnum_RangeError_IsValid(value);
  }
  static const RangeError RangeError_MIN =
    RangeErrorEnum_RangeError_RangeError_MIN;
  static const RangeError RangeError_MAX =
    RangeErrorEnum_RangeError_RangeError_MAX;
  static const int RangeError_ARRAYSIZE =
    RangeErrorEnum_RangeError_RangeError_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  RangeError_descriptor() {
    return RangeErrorEnum_RangeError_descriptor();
  }
  static inline const ::std::string& RangeError_Name(RangeError value) {
    return RangeErrorEnum_RangeError_Name(value);
  }
  static inline bool RangeError_Parse(const ::std::string& name,
      RangeError* value) {
    return RangeErrorEnum_RangeError_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:google.ads.googleads.v0.errors.RangeErrorEnum)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_google_2fads_2fgoogleads_2fv0_2ferrors_2frange_5ferror_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// RangeErrorEnum

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

template <> struct is_proto_enum< ::google::ads::googleads::v0::errors::RangeErrorEnum_RangeError> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::google::ads::googleads::v0::errors::RangeErrorEnum_RangeError>() {
  return ::google::ads::googleads::v0::errors::RangeErrorEnum_RangeError_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_google_2fads_2fgoogleads_2fv0_2ferrors_2frange_5ferror_2eproto
