// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/ads/googleads/v0/errors/null_error.proto

#ifndef PROTOBUF_INCLUDED_google_2fads_2fgoogleads_2fv0_2ferrors_2fnull_5ferror_2eproto
#define PROTOBUF_INCLUDED_google_2fads_2fgoogleads_2fv0_2ferrors_2fnull_5ferror_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_protobuf_google_2fads_2fgoogleads_2fv0_2ferrors_2fnull_5ferror_2eproto 

namespace protobuf_google_2fads_2fgoogleads_2fv0_2ferrors_2fnull_5ferror_2eproto {
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
}  // namespace protobuf_google_2fads_2fgoogleads_2fv0_2ferrors_2fnull_5ferror_2eproto
namespace google {
namespace ads {
namespace googleads {
namespace v0 {
namespace errors {
class NullErrorEnum;
class NullErrorEnumDefaultTypeInternal;
extern NullErrorEnumDefaultTypeInternal _NullErrorEnum_default_instance_;
}  // namespace errors
}  // namespace v0
}  // namespace googleads
}  // namespace ads
}  // namespace google
namespace google {
namespace protobuf {
template<> ::google::ads::googleads::v0::errors::NullErrorEnum* Arena::CreateMaybeMessage<::google::ads::googleads::v0::errors::NullErrorEnum>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace google {
namespace ads {
namespace googleads {
namespace v0 {
namespace errors {

enum NullErrorEnum_NullError {
  NullErrorEnum_NullError_UNSPECIFIED = 0,
  NullErrorEnum_NullError_UNKNOWN = 1,
  NullErrorEnum_NullError_NULL_CONTENT = 2,
  NullErrorEnum_NullError_NullErrorEnum_NullError_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  NullErrorEnum_NullError_NullErrorEnum_NullError_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool NullErrorEnum_NullError_IsValid(int value);
const NullErrorEnum_NullError NullErrorEnum_NullError_NullError_MIN = NullErrorEnum_NullError_UNSPECIFIED;
const NullErrorEnum_NullError NullErrorEnum_NullError_NullError_MAX = NullErrorEnum_NullError_NULL_CONTENT;
const int NullErrorEnum_NullError_NullError_ARRAYSIZE = NullErrorEnum_NullError_NullError_MAX + 1;

const ::google::protobuf::EnumDescriptor* NullErrorEnum_NullError_descriptor();
inline const ::std::string& NullErrorEnum_NullError_Name(NullErrorEnum_NullError value) {
  return ::google::protobuf::internal::NameOfEnum(
    NullErrorEnum_NullError_descriptor(), value);
}
inline bool NullErrorEnum_NullError_Parse(
    const ::std::string& name, NullErrorEnum_NullError* value) {
  return ::google::protobuf::internal::ParseNamedEnum<NullErrorEnum_NullError>(
    NullErrorEnum_NullError_descriptor(), name, value);
}
// ===================================================================

class NullErrorEnum : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.ads.googleads.v0.errors.NullErrorEnum) */ {
 public:
  NullErrorEnum();
  virtual ~NullErrorEnum();

  NullErrorEnum(const NullErrorEnum& from);

  inline NullErrorEnum& operator=(const NullErrorEnum& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  NullErrorEnum(NullErrorEnum&& from) noexcept
    : NullErrorEnum() {
    *this = ::std::move(from);
  }

  inline NullErrorEnum& operator=(NullErrorEnum&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const NullErrorEnum& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const NullErrorEnum* internal_default_instance() {
    return reinterpret_cast<const NullErrorEnum*>(
               &_NullErrorEnum_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(NullErrorEnum* other);
  friend void swap(NullErrorEnum& a, NullErrorEnum& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline NullErrorEnum* New() const final {
    return CreateMaybeMessage<NullErrorEnum>(NULL);
  }

  NullErrorEnum* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<NullErrorEnum>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const NullErrorEnum& from);
  void MergeFrom(const NullErrorEnum& from);
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
  void InternalSwap(NullErrorEnum* other);
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

  typedef NullErrorEnum_NullError NullError;
  static const NullError UNSPECIFIED =
    NullErrorEnum_NullError_UNSPECIFIED;
  static const NullError UNKNOWN =
    NullErrorEnum_NullError_UNKNOWN;
  static const NullError NULL_CONTENT =
    NullErrorEnum_NullError_NULL_CONTENT;
  static inline bool NullError_IsValid(int value) {
    return NullErrorEnum_NullError_IsValid(value);
  }
  static const NullError NullError_MIN =
    NullErrorEnum_NullError_NullError_MIN;
  static const NullError NullError_MAX =
    NullErrorEnum_NullError_NullError_MAX;
  static const int NullError_ARRAYSIZE =
    NullErrorEnum_NullError_NullError_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  NullError_descriptor() {
    return NullErrorEnum_NullError_descriptor();
  }
  static inline const ::std::string& NullError_Name(NullError value) {
    return NullErrorEnum_NullError_Name(value);
  }
  static inline bool NullError_Parse(const ::std::string& name,
      NullError* value) {
    return NullErrorEnum_NullError_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:google.ads.googleads.v0.errors.NullErrorEnum)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_google_2fads_2fgoogleads_2fv0_2ferrors_2fnull_5ferror_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// NullErrorEnum

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

template <> struct is_proto_enum< ::google::ads::googleads::v0::errors::NullErrorEnum_NullError> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::google::ads::googleads::v0::errors::NullErrorEnum_NullError>() {
  return ::google::ads::googleads::v0::errors::NullErrorEnum_NullError_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_google_2fads_2fgoogleads_2fv0_2ferrors_2fnull_5ferror_2eproto