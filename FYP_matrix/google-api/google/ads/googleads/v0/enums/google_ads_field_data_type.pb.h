// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/ads/googleads/v0/enums/google_ads_field_data_type.proto

#ifndef PROTOBUF_INCLUDED_google_2fads_2fgoogleads_2fv0_2fenums_2fgoogle_5fads_5ffield_5fdata_5ftype_2eproto
#define PROTOBUF_INCLUDED_google_2fads_2fgoogleads_2fv0_2fenums_2fgoogle_5fads_5ffield_5fdata_5ftype_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_protobuf_google_2fads_2fgoogleads_2fv0_2fenums_2fgoogle_5fads_5ffield_5fdata_5ftype_2eproto 

namespace protobuf_google_2fads_2fgoogleads_2fv0_2fenums_2fgoogle_5fads_5ffield_5fdata_5ftype_2eproto {
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
}  // namespace protobuf_google_2fads_2fgoogleads_2fv0_2fenums_2fgoogle_5fads_5ffield_5fdata_5ftype_2eproto
namespace google {
namespace ads {
namespace googleads {
namespace v0 {
namespace enums {
class GoogleAdsFieldDataTypeEnum;
class GoogleAdsFieldDataTypeEnumDefaultTypeInternal;
extern GoogleAdsFieldDataTypeEnumDefaultTypeInternal _GoogleAdsFieldDataTypeEnum_default_instance_;
}  // namespace enums
}  // namespace v0
}  // namespace googleads
}  // namespace ads
}  // namespace google
namespace google {
namespace protobuf {
template<> ::google::ads::googleads::v0::enums::GoogleAdsFieldDataTypeEnum* Arena::CreateMaybeMessage<::google::ads::googleads::v0::enums::GoogleAdsFieldDataTypeEnum>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace google {
namespace ads {
namespace googleads {
namespace v0 {
namespace enums {

enum GoogleAdsFieldDataTypeEnum_GoogleAdsFieldDataType {
  GoogleAdsFieldDataTypeEnum_GoogleAdsFieldDataType_UNSPECIFIED = 0,
  GoogleAdsFieldDataTypeEnum_GoogleAdsFieldDataType_UNKNOWN = 1,
  GoogleAdsFieldDataTypeEnum_GoogleAdsFieldDataType_BOOLEAN = 2,
  GoogleAdsFieldDataTypeEnum_GoogleAdsFieldDataType_DATE = 3,
  GoogleAdsFieldDataTypeEnum_GoogleAdsFieldDataType_DOUBLE = 4,
  GoogleAdsFieldDataTypeEnum_GoogleAdsFieldDataType_ENUM = 5,
  GoogleAdsFieldDataTypeEnum_GoogleAdsFieldDataType_FLOAT = 6,
  GoogleAdsFieldDataTypeEnum_GoogleAdsFieldDataType_INT32 = 7,
  GoogleAdsFieldDataTypeEnum_GoogleAdsFieldDataType_INT64 = 8,
  GoogleAdsFieldDataTypeEnum_GoogleAdsFieldDataType_MESSAGE = 9,
  GoogleAdsFieldDataTypeEnum_GoogleAdsFieldDataType_RESOURCE_NAME = 10,
  GoogleAdsFieldDataTypeEnum_GoogleAdsFieldDataType_STRING = 11,
  GoogleAdsFieldDataTypeEnum_GoogleAdsFieldDataType_GoogleAdsFieldDataTypeEnum_GoogleAdsFieldDataType_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  GoogleAdsFieldDataTypeEnum_GoogleAdsFieldDataType_GoogleAdsFieldDataTypeEnum_GoogleAdsFieldDataType_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool GoogleAdsFieldDataTypeEnum_GoogleAdsFieldDataType_IsValid(int value);
const GoogleAdsFieldDataTypeEnum_GoogleAdsFieldDataType GoogleAdsFieldDataTypeEnum_GoogleAdsFieldDataType_GoogleAdsFieldDataType_MIN = GoogleAdsFieldDataTypeEnum_GoogleAdsFieldDataType_UNSPECIFIED;
const GoogleAdsFieldDataTypeEnum_GoogleAdsFieldDataType GoogleAdsFieldDataTypeEnum_GoogleAdsFieldDataType_GoogleAdsFieldDataType_MAX = GoogleAdsFieldDataTypeEnum_GoogleAdsFieldDataType_STRING;
const int GoogleAdsFieldDataTypeEnum_GoogleAdsFieldDataType_GoogleAdsFieldDataType_ARRAYSIZE = GoogleAdsFieldDataTypeEnum_GoogleAdsFieldDataType_GoogleAdsFieldDataType_MAX + 1;

const ::google::protobuf::EnumDescriptor* GoogleAdsFieldDataTypeEnum_GoogleAdsFieldDataType_descriptor();
inline const ::std::string& GoogleAdsFieldDataTypeEnum_GoogleAdsFieldDataType_Name(GoogleAdsFieldDataTypeEnum_GoogleAdsFieldDataType value) {
  return ::google::protobuf::internal::NameOfEnum(
    GoogleAdsFieldDataTypeEnum_GoogleAdsFieldDataType_descriptor(), value);
}
inline bool GoogleAdsFieldDataTypeEnum_GoogleAdsFieldDataType_Parse(
    const ::std::string& name, GoogleAdsFieldDataTypeEnum_GoogleAdsFieldDataType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<GoogleAdsFieldDataTypeEnum_GoogleAdsFieldDataType>(
    GoogleAdsFieldDataTypeEnum_GoogleAdsFieldDataType_descriptor(), name, value);
}
// ===================================================================

class GoogleAdsFieldDataTypeEnum : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.ads.googleads.v0.enums.GoogleAdsFieldDataTypeEnum) */ {
 public:
  GoogleAdsFieldDataTypeEnum();
  virtual ~GoogleAdsFieldDataTypeEnum();

  GoogleAdsFieldDataTypeEnum(const GoogleAdsFieldDataTypeEnum& from);

  inline GoogleAdsFieldDataTypeEnum& operator=(const GoogleAdsFieldDataTypeEnum& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  GoogleAdsFieldDataTypeEnum(GoogleAdsFieldDataTypeEnum&& from) noexcept
    : GoogleAdsFieldDataTypeEnum() {
    *this = ::std::move(from);
  }

  inline GoogleAdsFieldDataTypeEnum& operator=(GoogleAdsFieldDataTypeEnum&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const GoogleAdsFieldDataTypeEnum& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const GoogleAdsFieldDataTypeEnum* internal_default_instance() {
    return reinterpret_cast<const GoogleAdsFieldDataTypeEnum*>(
               &_GoogleAdsFieldDataTypeEnum_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(GoogleAdsFieldDataTypeEnum* other);
  friend void swap(GoogleAdsFieldDataTypeEnum& a, GoogleAdsFieldDataTypeEnum& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline GoogleAdsFieldDataTypeEnum* New() const final {
    return CreateMaybeMessage<GoogleAdsFieldDataTypeEnum>(NULL);
  }

  GoogleAdsFieldDataTypeEnum* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<GoogleAdsFieldDataTypeEnum>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const GoogleAdsFieldDataTypeEnum& from);
  void MergeFrom(const GoogleAdsFieldDataTypeEnum& from);
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
  void InternalSwap(GoogleAdsFieldDataTypeEnum* other);
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

  typedef GoogleAdsFieldDataTypeEnum_GoogleAdsFieldDataType GoogleAdsFieldDataType;
  static const GoogleAdsFieldDataType UNSPECIFIED =
    GoogleAdsFieldDataTypeEnum_GoogleAdsFieldDataType_UNSPECIFIED;
  static const GoogleAdsFieldDataType UNKNOWN =
    GoogleAdsFieldDataTypeEnum_GoogleAdsFieldDataType_UNKNOWN;
  static const GoogleAdsFieldDataType BOOLEAN =
    GoogleAdsFieldDataTypeEnum_GoogleAdsFieldDataType_BOOLEAN;
  static const GoogleAdsFieldDataType DATE =
    GoogleAdsFieldDataTypeEnum_GoogleAdsFieldDataType_DATE;
  static const GoogleAdsFieldDataType DOUBLE =
    GoogleAdsFieldDataTypeEnum_GoogleAdsFieldDataType_DOUBLE;
  static const GoogleAdsFieldDataType ENUM =
    GoogleAdsFieldDataTypeEnum_GoogleAdsFieldDataType_ENUM;
  static const GoogleAdsFieldDataType FLOAT =
    GoogleAdsFieldDataTypeEnum_GoogleAdsFieldDataType_FLOAT;
  static const GoogleAdsFieldDataType INT32 =
    GoogleAdsFieldDataTypeEnum_GoogleAdsFieldDataType_INT32;
  static const GoogleAdsFieldDataType INT64 =
    GoogleAdsFieldDataTypeEnum_GoogleAdsFieldDataType_INT64;
  static const GoogleAdsFieldDataType MESSAGE =
    GoogleAdsFieldDataTypeEnum_GoogleAdsFieldDataType_MESSAGE;
  static const GoogleAdsFieldDataType RESOURCE_NAME =
    GoogleAdsFieldDataTypeEnum_GoogleAdsFieldDataType_RESOURCE_NAME;
  static const GoogleAdsFieldDataType STRING =
    GoogleAdsFieldDataTypeEnum_GoogleAdsFieldDataType_STRING;
  static inline bool GoogleAdsFieldDataType_IsValid(int value) {
    return GoogleAdsFieldDataTypeEnum_GoogleAdsFieldDataType_IsValid(value);
  }
  static const GoogleAdsFieldDataType GoogleAdsFieldDataType_MIN =
    GoogleAdsFieldDataTypeEnum_GoogleAdsFieldDataType_GoogleAdsFieldDataType_MIN;
  static const GoogleAdsFieldDataType GoogleAdsFieldDataType_MAX =
    GoogleAdsFieldDataTypeEnum_GoogleAdsFieldDataType_GoogleAdsFieldDataType_MAX;
  static const int GoogleAdsFieldDataType_ARRAYSIZE =
    GoogleAdsFieldDataTypeEnum_GoogleAdsFieldDataType_GoogleAdsFieldDataType_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  GoogleAdsFieldDataType_descriptor() {
    return GoogleAdsFieldDataTypeEnum_GoogleAdsFieldDataType_descriptor();
  }
  static inline const ::std::string& GoogleAdsFieldDataType_Name(GoogleAdsFieldDataType value) {
    return GoogleAdsFieldDataTypeEnum_GoogleAdsFieldDataType_Name(value);
  }
  static inline bool GoogleAdsFieldDataType_Parse(const ::std::string& name,
      GoogleAdsFieldDataType* value) {
    return GoogleAdsFieldDataTypeEnum_GoogleAdsFieldDataType_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:google.ads.googleads.v0.enums.GoogleAdsFieldDataTypeEnum)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_google_2fads_2fgoogleads_2fv0_2fenums_2fgoogle_5fads_5ffield_5fdata_5ftype_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// GoogleAdsFieldDataTypeEnum

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace enums
}  // namespace v0
}  // namespace googleads
}  // namespace ads
}  // namespace google

namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::google::ads::googleads::v0::enums::GoogleAdsFieldDataTypeEnum_GoogleAdsFieldDataType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::google::ads::googleads::v0::enums::GoogleAdsFieldDataTypeEnum_GoogleAdsFieldDataType>() {
  return ::google::ads::googleads::v0::enums::GoogleAdsFieldDataTypeEnum_GoogleAdsFieldDataType_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_google_2fads_2fgoogleads_2fv0_2fenums_2fgoogle_5fads_5ffield_5fdata_5ftype_2eproto