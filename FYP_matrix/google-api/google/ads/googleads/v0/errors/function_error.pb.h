// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/ads/googleads/v0/errors/function_error.proto

#ifndef PROTOBUF_INCLUDED_google_2fads_2fgoogleads_2fv0_2ferrors_2ffunction_5ferror_2eproto
#define PROTOBUF_INCLUDED_google_2fads_2fgoogleads_2fv0_2ferrors_2ffunction_5ferror_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_protobuf_google_2fads_2fgoogleads_2fv0_2ferrors_2ffunction_5ferror_2eproto 

namespace protobuf_google_2fads_2fgoogleads_2fv0_2ferrors_2ffunction_5ferror_2eproto {
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
}  // namespace protobuf_google_2fads_2fgoogleads_2fv0_2ferrors_2ffunction_5ferror_2eproto
namespace google {
namespace ads {
namespace googleads {
namespace v0 {
namespace errors {
class FunctionErrorEnum;
class FunctionErrorEnumDefaultTypeInternal;
extern FunctionErrorEnumDefaultTypeInternal _FunctionErrorEnum_default_instance_;
}  // namespace errors
}  // namespace v0
}  // namespace googleads
}  // namespace ads
}  // namespace google
namespace google {
namespace protobuf {
template<> ::google::ads::googleads::v0::errors::FunctionErrorEnum* Arena::CreateMaybeMessage<::google::ads::googleads::v0::errors::FunctionErrorEnum>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace google {
namespace ads {
namespace googleads {
namespace v0 {
namespace errors {

enum FunctionErrorEnum_FunctionError {
  FunctionErrorEnum_FunctionError_UNSPECIFIED = 0,
  FunctionErrorEnum_FunctionError_UNKNOWN = 1,
  FunctionErrorEnum_FunctionError_INVALID_FUNCTION_FORMAT = 2,
  FunctionErrorEnum_FunctionError_DATA_TYPE_MISMATCH = 3,
  FunctionErrorEnum_FunctionError_INVALID_CONJUNCTION_OPERANDS = 4,
  FunctionErrorEnum_FunctionError_INVALID_NUMBER_OF_OPERANDS = 5,
  FunctionErrorEnum_FunctionError_INVALID_OPERAND_TYPE = 6,
  FunctionErrorEnum_FunctionError_INVALID_OPERATOR = 7,
  FunctionErrorEnum_FunctionError_INVALID_REQUEST_CONTEXT_TYPE = 8,
  FunctionErrorEnum_FunctionError_INVALID_FUNCTION_FOR_CALL_PLACEHOLDER = 9,
  FunctionErrorEnum_FunctionError_INVALID_FUNCTION_FOR_PLACEHOLDER = 10,
  FunctionErrorEnum_FunctionError_INVALID_OPERAND = 11,
  FunctionErrorEnum_FunctionError_MISSING_CONSTANT_OPERAND_VALUE = 12,
  FunctionErrorEnum_FunctionError_INVALID_CONSTANT_OPERAND_VALUE = 13,
  FunctionErrorEnum_FunctionError_INVALID_NESTING = 14,
  FunctionErrorEnum_FunctionError_MULTIPLE_FEED_IDS_NOT_SUPPORTED = 15,
  FunctionErrorEnum_FunctionError_INVALID_FUNCTION_FOR_FEED_WITH_FIXED_SCHEMA = 16,
  FunctionErrorEnum_FunctionError_INVALID_ATTRIBUTE_NAME = 17,
  FunctionErrorEnum_FunctionError_FunctionErrorEnum_FunctionError_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  FunctionErrorEnum_FunctionError_FunctionErrorEnum_FunctionError_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool FunctionErrorEnum_FunctionError_IsValid(int value);
const FunctionErrorEnum_FunctionError FunctionErrorEnum_FunctionError_FunctionError_MIN = FunctionErrorEnum_FunctionError_UNSPECIFIED;
const FunctionErrorEnum_FunctionError FunctionErrorEnum_FunctionError_FunctionError_MAX = FunctionErrorEnum_FunctionError_INVALID_ATTRIBUTE_NAME;
const int FunctionErrorEnum_FunctionError_FunctionError_ARRAYSIZE = FunctionErrorEnum_FunctionError_FunctionError_MAX + 1;

const ::google::protobuf::EnumDescriptor* FunctionErrorEnum_FunctionError_descriptor();
inline const ::std::string& FunctionErrorEnum_FunctionError_Name(FunctionErrorEnum_FunctionError value) {
  return ::google::protobuf::internal::NameOfEnum(
    FunctionErrorEnum_FunctionError_descriptor(), value);
}
inline bool FunctionErrorEnum_FunctionError_Parse(
    const ::std::string& name, FunctionErrorEnum_FunctionError* value) {
  return ::google::protobuf::internal::ParseNamedEnum<FunctionErrorEnum_FunctionError>(
    FunctionErrorEnum_FunctionError_descriptor(), name, value);
}
// ===================================================================

class FunctionErrorEnum : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.ads.googleads.v0.errors.FunctionErrorEnum) */ {
 public:
  FunctionErrorEnum();
  virtual ~FunctionErrorEnum();

  FunctionErrorEnum(const FunctionErrorEnum& from);

  inline FunctionErrorEnum& operator=(const FunctionErrorEnum& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  FunctionErrorEnum(FunctionErrorEnum&& from) noexcept
    : FunctionErrorEnum() {
    *this = ::std::move(from);
  }

  inline FunctionErrorEnum& operator=(FunctionErrorEnum&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const FunctionErrorEnum& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const FunctionErrorEnum* internal_default_instance() {
    return reinterpret_cast<const FunctionErrorEnum*>(
               &_FunctionErrorEnum_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(FunctionErrorEnum* other);
  friend void swap(FunctionErrorEnum& a, FunctionErrorEnum& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline FunctionErrorEnum* New() const final {
    return CreateMaybeMessage<FunctionErrorEnum>(NULL);
  }

  FunctionErrorEnum* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<FunctionErrorEnum>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const FunctionErrorEnum& from);
  void MergeFrom(const FunctionErrorEnum& from);
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
  void InternalSwap(FunctionErrorEnum* other);
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

  typedef FunctionErrorEnum_FunctionError FunctionError;
  static const FunctionError UNSPECIFIED =
    FunctionErrorEnum_FunctionError_UNSPECIFIED;
  static const FunctionError UNKNOWN =
    FunctionErrorEnum_FunctionError_UNKNOWN;
  static const FunctionError INVALID_FUNCTION_FORMAT =
    FunctionErrorEnum_FunctionError_INVALID_FUNCTION_FORMAT;
  static const FunctionError DATA_TYPE_MISMATCH =
    FunctionErrorEnum_FunctionError_DATA_TYPE_MISMATCH;
  static const FunctionError INVALID_CONJUNCTION_OPERANDS =
    FunctionErrorEnum_FunctionError_INVALID_CONJUNCTION_OPERANDS;
  static const FunctionError INVALID_NUMBER_OF_OPERANDS =
    FunctionErrorEnum_FunctionError_INVALID_NUMBER_OF_OPERANDS;
  static const FunctionError INVALID_OPERAND_TYPE =
    FunctionErrorEnum_FunctionError_INVALID_OPERAND_TYPE;
  static const FunctionError INVALID_OPERATOR =
    FunctionErrorEnum_FunctionError_INVALID_OPERATOR;
  static const FunctionError INVALID_REQUEST_CONTEXT_TYPE =
    FunctionErrorEnum_FunctionError_INVALID_REQUEST_CONTEXT_TYPE;
  static const FunctionError INVALID_FUNCTION_FOR_CALL_PLACEHOLDER =
    FunctionErrorEnum_FunctionError_INVALID_FUNCTION_FOR_CALL_PLACEHOLDER;
  static const FunctionError INVALID_FUNCTION_FOR_PLACEHOLDER =
    FunctionErrorEnum_FunctionError_INVALID_FUNCTION_FOR_PLACEHOLDER;
  static const FunctionError INVALID_OPERAND =
    FunctionErrorEnum_FunctionError_INVALID_OPERAND;
  static const FunctionError MISSING_CONSTANT_OPERAND_VALUE =
    FunctionErrorEnum_FunctionError_MISSING_CONSTANT_OPERAND_VALUE;
  static const FunctionError INVALID_CONSTANT_OPERAND_VALUE =
    FunctionErrorEnum_FunctionError_INVALID_CONSTANT_OPERAND_VALUE;
  static const FunctionError INVALID_NESTING =
    FunctionErrorEnum_FunctionError_INVALID_NESTING;
  static const FunctionError MULTIPLE_FEED_IDS_NOT_SUPPORTED =
    FunctionErrorEnum_FunctionError_MULTIPLE_FEED_IDS_NOT_SUPPORTED;
  static const FunctionError INVALID_FUNCTION_FOR_FEED_WITH_FIXED_SCHEMA =
    FunctionErrorEnum_FunctionError_INVALID_FUNCTION_FOR_FEED_WITH_FIXED_SCHEMA;
  static const FunctionError INVALID_ATTRIBUTE_NAME =
    FunctionErrorEnum_FunctionError_INVALID_ATTRIBUTE_NAME;
  static inline bool FunctionError_IsValid(int value) {
    return FunctionErrorEnum_FunctionError_IsValid(value);
  }
  static const FunctionError FunctionError_MIN =
    FunctionErrorEnum_FunctionError_FunctionError_MIN;
  static const FunctionError FunctionError_MAX =
    FunctionErrorEnum_FunctionError_FunctionError_MAX;
  static const int FunctionError_ARRAYSIZE =
    FunctionErrorEnum_FunctionError_FunctionError_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  FunctionError_descriptor() {
    return FunctionErrorEnum_FunctionError_descriptor();
  }
  static inline const ::std::string& FunctionError_Name(FunctionError value) {
    return FunctionErrorEnum_FunctionError_Name(value);
  }
  static inline bool FunctionError_Parse(const ::std::string& name,
      FunctionError* value) {
    return FunctionErrorEnum_FunctionError_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:google.ads.googleads.v0.errors.FunctionErrorEnum)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_google_2fads_2fgoogleads_2fv0_2ferrors_2ffunction_5ferror_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// FunctionErrorEnum

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

template <> struct is_proto_enum< ::google::ads::googleads::v0::errors::FunctionErrorEnum_FunctionError> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::google::ads::googleads::v0::errors::FunctionErrorEnum_FunctionError>() {
  return ::google::ads::googleads::v0::errors::FunctionErrorEnum_FunctionError_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_google_2fads_2fgoogleads_2fv0_2ferrors_2ffunction_5ferror_2eproto
