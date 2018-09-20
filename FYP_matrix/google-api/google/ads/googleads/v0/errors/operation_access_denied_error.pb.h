// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/ads/googleads/v0/errors/operation_access_denied_error.proto

#ifndef PROTOBUF_INCLUDED_google_2fads_2fgoogleads_2fv0_2ferrors_2foperation_5faccess_5fdenied_5ferror_2eproto
#define PROTOBUF_INCLUDED_google_2fads_2fgoogleads_2fv0_2ferrors_2foperation_5faccess_5fdenied_5ferror_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_protobuf_google_2fads_2fgoogleads_2fv0_2ferrors_2foperation_5faccess_5fdenied_5ferror_2eproto 

namespace protobuf_google_2fads_2fgoogleads_2fv0_2ferrors_2foperation_5faccess_5fdenied_5ferror_2eproto {
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
}  // namespace protobuf_google_2fads_2fgoogleads_2fv0_2ferrors_2foperation_5faccess_5fdenied_5ferror_2eproto
namespace google {
namespace ads {
namespace googleads {
namespace v0 {
namespace errors {
class OperationAccessDeniedErrorEnum;
class OperationAccessDeniedErrorEnumDefaultTypeInternal;
extern OperationAccessDeniedErrorEnumDefaultTypeInternal _OperationAccessDeniedErrorEnum_default_instance_;
}  // namespace errors
}  // namespace v0
}  // namespace googleads
}  // namespace ads
}  // namespace google
namespace google {
namespace protobuf {
template<> ::google::ads::googleads::v0::errors::OperationAccessDeniedErrorEnum* Arena::CreateMaybeMessage<::google::ads::googleads::v0::errors::OperationAccessDeniedErrorEnum>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace google {
namespace ads {
namespace googleads {
namespace v0 {
namespace errors {

enum OperationAccessDeniedErrorEnum_OperationAccessDeniedError {
  OperationAccessDeniedErrorEnum_OperationAccessDeniedError_UNSPECIFIED = 0,
  OperationAccessDeniedErrorEnum_OperationAccessDeniedError_UNKNOWN = 1,
  OperationAccessDeniedErrorEnum_OperationAccessDeniedError_ACTION_NOT_PERMITTED = 2,
  OperationAccessDeniedErrorEnum_OperationAccessDeniedError_CREATE_OPERATION_NOT_PERMITTED = 3,
  OperationAccessDeniedErrorEnum_OperationAccessDeniedError_REMOVE_OPERATION_NOT_PERMITTED = 4,
  OperationAccessDeniedErrorEnum_OperationAccessDeniedError_UPDATE_OPERATION_NOT_PERMITTED = 5,
  OperationAccessDeniedErrorEnum_OperationAccessDeniedError_MUTATE_ACTION_NOT_PERMITTED_FOR_CLIENT = 6,
  OperationAccessDeniedErrorEnum_OperationAccessDeniedError_OPERATION_NOT_PERMITTED_FOR_CAMPAIGN_TYPE = 7,
  OperationAccessDeniedErrorEnum_OperationAccessDeniedError_CREATE_AS_REMOVED_NOT_PERMITTED = 8,
  OperationAccessDeniedErrorEnum_OperationAccessDeniedError_OPERATION_NOT_PERMITTED_FOR_REMOVED_RESOURCE = 9,
  OperationAccessDeniedErrorEnum_OperationAccessDeniedError_OPERATION_NOT_PERMITTED_FOR_AD_GROUP_TYPE = 10,
  OperationAccessDeniedErrorEnum_OperationAccessDeniedError_OperationAccessDeniedErrorEnum_OperationAccessDeniedError_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  OperationAccessDeniedErrorEnum_OperationAccessDeniedError_OperationAccessDeniedErrorEnum_OperationAccessDeniedError_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool OperationAccessDeniedErrorEnum_OperationAccessDeniedError_IsValid(int value);
const OperationAccessDeniedErrorEnum_OperationAccessDeniedError OperationAccessDeniedErrorEnum_OperationAccessDeniedError_OperationAccessDeniedError_MIN = OperationAccessDeniedErrorEnum_OperationAccessDeniedError_UNSPECIFIED;
const OperationAccessDeniedErrorEnum_OperationAccessDeniedError OperationAccessDeniedErrorEnum_OperationAccessDeniedError_OperationAccessDeniedError_MAX = OperationAccessDeniedErrorEnum_OperationAccessDeniedError_OPERATION_NOT_PERMITTED_FOR_AD_GROUP_TYPE;
const int OperationAccessDeniedErrorEnum_OperationAccessDeniedError_OperationAccessDeniedError_ARRAYSIZE = OperationAccessDeniedErrorEnum_OperationAccessDeniedError_OperationAccessDeniedError_MAX + 1;

const ::google::protobuf::EnumDescriptor* OperationAccessDeniedErrorEnum_OperationAccessDeniedError_descriptor();
inline const ::std::string& OperationAccessDeniedErrorEnum_OperationAccessDeniedError_Name(OperationAccessDeniedErrorEnum_OperationAccessDeniedError value) {
  return ::google::protobuf::internal::NameOfEnum(
    OperationAccessDeniedErrorEnum_OperationAccessDeniedError_descriptor(), value);
}
inline bool OperationAccessDeniedErrorEnum_OperationAccessDeniedError_Parse(
    const ::std::string& name, OperationAccessDeniedErrorEnum_OperationAccessDeniedError* value) {
  return ::google::protobuf::internal::ParseNamedEnum<OperationAccessDeniedErrorEnum_OperationAccessDeniedError>(
    OperationAccessDeniedErrorEnum_OperationAccessDeniedError_descriptor(), name, value);
}
// ===================================================================

class OperationAccessDeniedErrorEnum : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.ads.googleads.v0.errors.OperationAccessDeniedErrorEnum) */ {
 public:
  OperationAccessDeniedErrorEnum();
  virtual ~OperationAccessDeniedErrorEnum();

  OperationAccessDeniedErrorEnum(const OperationAccessDeniedErrorEnum& from);

  inline OperationAccessDeniedErrorEnum& operator=(const OperationAccessDeniedErrorEnum& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  OperationAccessDeniedErrorEnum(OperationAccessDeniedErrorEnum&& from) noexcept
    : OperationAccessDeniedErrorEnum() {
    *this = ::std::move(from);
  }

  inline OperationAccessDeniedErrorEnum& operator=(OperationAccessDeniedErrorEnum&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const OperationAccessDeniedErrorEnum& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const OperationAccessDeniedErrorEnum* internal_default_instance() {
    return reinterpret_cast<const OperationAccessDeniedErrorEnum*>(
               &_OperationAccessDeniedErrorEnum_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(OperationAccessDeniedErrorEnum* other);
  friend void swap(OperationAccessDeniedErrorEnum& a, OperationAccessDeniedErrorEnum& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline OperationAccessDeniedErrorEnum* New() const final {
    return CreateMaybeMessage<OperationAccessDeniedErrorEnum>(NULL);
  }

  OperationAccessDeniedErrorEnum* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<OperationAccessDeniedErrorEnum>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const OperationAccessDeniedErrorEnum& from);
  void MergeFrom(const OperationAccessDeniedErrorEnum& from);
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
  void InternalSwap(OperationAccessDeniedErrorEnum* other);
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

  typedef OperationAccessDeniedErrorEnum_OperationAccessDeniedError OperationAccessDeniedError;
  static const OperationAccessDeniedError UNSPECIFIED =
    OperationAccessDeniedErrorEnum_OperationAccessDeniedError_UNSPECIFIED;
  static const OperationAccessDeniedError UNKNOWN =
    OperationAccessDeniedErrorEnum_OperationAccessDeniedError_UNKNOWN;
  static const OperationAccessDeniedError ACTION_NOT_PERMITTED =
    OperationAccessDeniedErrorEnum_OperationAccessDeniedError_ACTION_NOT_PERMITTED;
  static const OperationAccessDeniedError CREATE_OPERATION_NOT_PERMITTED =
    OperationAccessDeniedErrorEnum_OperationAccessDeniedError_CREATE_OPERATION_NOT_PERMITTED;
  static const OperationAccessDeniedError REMOVE_OPERATION_NOT_PERMITTED =
    OperationAccessDeniedErrorEnum_OperationAccessDeniedError_REMOVE_OPERATION_NOT_PERMITTED;
  static const OperationAccessDeniedError UPDATE_OPERATION_NOT_PERMITTED =
    OperationAccessDeniedErrorEnum_OperationAccessDeniedError_UPDATE_OPERATION_NOT_PERMITTED;
  static const OperationAccessDeniedError MUTATE_ACTION_NOT_PERMITTED_FOR_CLIENT =
    OperationAccessDeniedErrorEnum_OperationAccessDeniedError_MUTATE_ACTION_NOT_PERMITTED_FOR_CLIENT;
  static const OperationAccessDeniedError OPERATION_NOT_PERMITTED_FOR_CAMPAIGN_TYPE =
    OperationAccessDeniedErrorEnum_OperationAccessDeniedError_OPERATION_NOT_PERMITTED_FOR_CAMPAIGN_TYPE;
  static const OperationAccessDeniedError CREATE_AS_REMOVED_NOT_PERMITTED =
    OperationAccessDeniedErrorEnum_OperationAccessDeniedError_CREATE_AS_REMOVED_NOT_PERMITTED;
  static const OperationAccessDeniedError OPERATION_NOT_PERMITTED_FOR_REMOVED_RESOURCE =
    OperationAccessDeniedErrorEnum_OperationAccessDeniedError_OPERATION_NOT_PERMITTED_FOR_REMOVED_RESOURCE;
  static const OperationAccessDeniedError OPERATION_NOT_PERMITTED_FOR_AD_GROUP_TYPE =
    OperationAccessDeniedErrorEnum_OperationAccessDeniedError_OPERATION_NOT_PERMITTED_FOR_AD_GROUP_TYPE;
  static inline bool OperationAccessDeniedError_IsValid(int value) {
    return OperationAccessDeniedErrorEnum_OperationAccessDeniedError_IsValid(value);
  }
  static const OperationAccessDeniedError OperationAccessDeniedError_MIN =
    OperationAccessDeniedErrorEnum_OperationAccessDeniedError_OperationAccessDeniedError_MIN;
  static const OperationAccessDeniedError OperationAccessDeniedError_MAX =
    OperationAccessDeniedErrorEnum_OperationAccessDeniedError_OperationAccessDeniedError_MAX;
  static const int OperationAccessDeniedError_ARRAYSIZE =
    OperationAccessDeniedErrorEnum_OperationAccessDeniedError_OperationAccessDeniedError_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  OperationAccessDeniedError_descriptor() {
    return OperationAccessDeniedErrorEnum_OperationAccessDeniedError_descriptor();
  }
  static inline const ::std::string& OperationAccessDeniedError_Name(OperationAccessDeniedError value) {
    return OperationAccessDeniedErrorEnum_OperationAccessDeniedError_Name(value);
  }
  static inline bool OperationAccessDeniedError_Parse(const ::std::string& name,
      OperationAccessDeniedError* value) {
    return OperationAccessDeniedErrorEnum_OperationAccessDeniedError_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:google.ads.googleads.v0.errors.OperationAccessDeniedErrorEnum)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_google_2fads_2fgoogleads_2fv0_2ferrors_2foperation_5faccess_5fdenied_5ferror_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// OperationAccessDeniedErrorEnum

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

template <> struct is_proto_enum< ::google::ads::googleads::v0::errors::OperationAccessDeniedErrorEnum_OperationAccessDeniedError> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::google::ads::googleads::v0::errors::OperationAccessDeniedErrorEnum_OperationAccessDeniedError>() {
  return ::google::ads::googleads::v0::errors::OperationAccessDeniedErrorEnum_OperationAccessDeniedError_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_google_2fads_2fgoogleads_2fv0_2ferrors_2foperation_5faccess_5fdenied_5ferror_2eproto