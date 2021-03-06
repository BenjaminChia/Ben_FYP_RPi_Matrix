// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/ads/googleads/v0/enums/google_ads_field_category.proto

#ifndef PROTOBUF_INCLUDED_google_2fads_2fgoogleads_2fv0_2fenums_2fgoogle_5fads_5ffield_5fcategory_2eproto
#define PROTOBUF_INCLUDED_google_2fads_2fgoogleads_2fv0_2fenums_2fgoogle_5fads_5ffield_5fcategory_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_protobuf_google_2fads_2fgoogleads_2fv0_2fenums_2fgoogle_5fads_5ffield_5fcategory_2eproto 

namespace protobuf_google_2fads_2fgoogleads_2fv0_2fenums_2fgoogle_5fads_5ffield_5fcategory_2eproto {
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
}  // namespace protobuf_google_2fads_2fgoogleads_2fv0_2fenums_2fgoogle_5fads_5ffield_5fcategory_2eproto
namespace google {
namespace ads {
namespace googleads {
namespace v0 {
namespace enums {
class GoogleAdsFieldCategoryEnum;
class GoogleAdsFieldCategoryEnumDefaultTypeInternal;
extern GoogleAdsFieldCategoryEnumDefaultTypeInternal _GoogleAdsFieldCategoryEnum_default_instance_;
}  // namespace enums
}  // namespace v0
}  // namespace googleads
}  // namespace ads
}  // namespace google
namespace google {
namespace protobuf {
template<> ::google::ads::googleads::v0::enums::GoogleAdsFieldCategoryEnum* Arena::CreateMaybeMessage<::google::ads::googleads::v0::enums::GoogleAdsFieldCategoryEnum>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace google {
namespace ads {
namespace googleads {
namespace v0 {
namespace enums {

enum GoogleAdsFieldCategoryEnum_GoogleAdsFieldCategory {
  GoogleAdsFieldCategoryEnum_GoogleAdsFieldCategory_UNSPECIFIED = 0,
  GoogleAdsFieldCategoryEnum_GoogleAdsFieldCategory_UNKNOWN = 1,
  GoogleAdsFieldCategoryEnum_GoogleAdsFieldCategory_RESOURCE = 2,
  GoogleAdsFieldCategoryEnum_GoogleAdsFieldCategory_ATTRIBUTE = 3,
  GoogleAdsFieldCategoryEnum_GoogleAdsFieldCategory_SEGMENT = 5,
  GoogleAdsFieldCategoryEnum_GoogleAdsFieldCategory_METRIC = 6,
  GoogleAdsFieldCategoryEnum_GoogleAdsFieldCategory_GoogleAdsFieldCategoryEnum_GoogleAdsFieldCategory_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  GoogleAdsFieldCategoryEnum_GoogleAdsFieldCategory_GoogleAdsFieldCategoryEnum_GoogleAdsFieldCategory_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool GoogleAdsFieldCategoryEnum_GoogleAdsFieldCategory_IsValid(int value);
const GoogleAdsFieldCategoryEnum_GoogleAdsFieldCategory GoogleAdsFieldCategoryEnum_GoogleAdsFieldCategory_GoogleAdsFieldCategory_MIN = GoogleAdsFieldCategoryEnum_GoogleAdsFieldCategory_UNSPECIFIED;
const GoogleAdsFieldCategoryEnum_GoogleAdsFieldCategory GoogleAdsFieldCategoryEnum_GoogleAdsFieldCategory_GoogleAdsFieldCategory_MAX = GoogleAdsFieldCategoryEnum_GoogleAdsFieldCategory_METRIC;
const int GoogleAdsFieldCategoryEnum_GoogleAdsFieldCategory_GoogleAdsFieldCategory_ARRAYSIZE = GoogleAdsFieldCategoryEnum_GoogleAdsFieldCategory_GoogleAdsFieldCategory_MAX + 1;

const ::google::protobuf::EnumDescriptor* GoogleAdsFieldCategoryEnum_GoogleAdsFieldCategory_descriptor();
inline const ::std::string& GoogleAdsFieldCategoryEnum_GoogleAdsFieldCategory_Name(GoogleAdsFieldCategoryEnum_GoogleAdsFieldCategory value) {
  return ::google::protobuf::internal::NameOfEnum(
    GoogleAdsFieldCategoryEnum_GoogleAdsFieldCategory_descriptor(), value);
}
inline bool GoogleAdsFieldCategoryEnum_GoogleAdsFieldCategory_Parse(
    const ::std::string& name, GoogleAdsFieldCategoryEnum_GoogleAdsFieldCategory* value) {
  return ::google::protobuf::internal::ParseNamedEnum<GoogleAdsFieldCategoryEnum_GoogleAdsFieldCategory>(
    GoogleAdsFieldCategoryEnum_GoogleAdsFieldCategory_descriptor(), name, value);
}
// ===================================================================

class GoogleAdsFieldCategoryEnum : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.ads.googleads.v0.enums.GoogleAdsFieldCategoryEnum) */ {
 public:
  GoogleAdsFieldCategoryEnum();
  virtual ~GoogleAdsFieldCategoryEnum();

  GoogleAdsFieldCategoryEnum(const GoogleAdsFieldCategoryEnum& from);

  inline GoogleAdsFieldCategoryEnum& operator=(const GoogleAdsFieldCategoryEnum& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  GoogleAdsFieldCategoryEnum(GoogleAdsFieldCategoryEnum&& from) noexcept
    : GoogleAdsFieldCategoryEnum() {
    *this = ::std::move(from);
  }

  inline GoogleAdsFieldCategoryEnum& operator=(GoogleAdsFieldCategoryEnum&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const GoogleAdsFieldCategoryEnum& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const GoogleAdsFieldCategoryEnum* internal_default_instance() {
    return reinterpret_cast<const GoogleAdsFieldCategoryEnum*>(
               &_GoogleAdsFieldCategoryEnum_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(GoogleAdsFieldCategoryEnum* other);
  friend void swap(GoogleAdsFieldCategoryEnum& a, GoogleAdsFieldCategoryEnum& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline GoogleAdsFieldCategoryEnum* New() const final {
    return CreateMaybeMessage<GoogleAdsFieldCategoryEnum>(NULL);
  }

  GoogleAdsFieldCategoryEnum* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<GoogleAdsFieldCategoryEnum>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const GoogleAdsFieldCategoryEnum& from);
  void MergeFrom(const GoogleAdsFieldCategoryEnum& from);
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
  void InternalSwap(GoogleAdsFieldCategoryEnum* other);
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

  typedef GoogleAdsFieldCategoryEnum_GoogleAdsFieldCategory GoogleAdsFieldCategory;
  static const GoogleAdsFieldCategory UNSPECIFIED =
    GoogleAdsFieldCategoryEnum_GoogleAdsFieldCategory_UNSPECIFIED;
  static const GoogleAdsFieldCategory UNKNOWN =
    GoogleAdsFieldCategoryEnum_GoogleAdsFieldCategory_UNKNOWN;
  static const GoogleAdsFieldCategory RESOURCE =
    GoogleAdsFieldCategoryEnum_GoogleAdsFieldCategory_RESOURCE;
  static const GoogleAdsFieldCategory ATTRIBUTE =
    GoogleAdsFieldCategoryEnum_GoogleAdsFieldCategory_ATTRIBUTE;
  static const GoogleAdsFieldCategory SEGMENT =
    GoogleAdsFieldCategoryEnum_GoogleAdsFieldCategory_SEGMENT;
  static const GoogleAdsFieldCategory METRIC =
    GoogleAdsFieldCategoryEnum_GoogleAdsFieldCategory_METRIC;
  static inline bool GoogleAdsFieldCategory_IsValid(int value) {
    return GoogleAdsFieldCategoryEnum_GoogleAdsFieldCategory_IsValid(value);
  }
  static const GoogleAdsFieldCategory GoogleAdsFieldCategory_MIN =
    GoogleAdsFieldCategoryEnum_GoogleAdsFieldCategory_GoogleAdsFieldCategory_MIN;
  static const GoogleAdsFieldCategory GoogleAdsFieldCategory_MAX =
    GoogleAdsFieldCategoryEnum_GoogleAdsFieldCategory_GoogleAdsFieldCategory_MAX;
  static const int GoogleAdsFieldCategory_ARRAYSIZE =
    GoogleAdsFieldCategoryEnum_GoogleAdsFieldCategory_GoogleAdsFieldCategory_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  GoogleAdsFieldCategory_descriptor() {
    return GoogleAdsFieldCategoryEnum_GoogleAdsFieldCategory_descriptor();
  }
  static inline const ::std::string& GoogleAdsFieldCategory_Name(GoogleAdsFieldCategory value) {
    return GoogleAdsFieldCategoryEnum_GoogleAdsFieldCategory_Name(value);
  }
  static inline bool GoogleAdsFieldCategory_Parse(const ::std::string& name,
      GoogleAdsFieldCategory* value) {
    return GoogleAdsFieldCategoryEnum_GoogleAdsFieldCategory_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:google.ads.googleads.v0.enums.GoogleAdsFieldCategoryEnum)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_google_2fads_2fgoogleads_2fv0_2fenums_2fgoogle_5fads_5ffield_5fcategory_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// GoogleAdsFieldCategoryEnum

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

template <> struct is_proto_enum< ::google::ads::googleads::v0::enums::GoogleAdsFieldCategoryEnum_GoogleAdsFieldCategory> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::google::ads::googleads::v0::enums::GoogleAdsFieldCategoryEnum_GoogleAdsFieldCategory>() {
  return ::google::ads::googleads::v0::enums::GoogleAdsFieldCategoryEnum_GoogleAdsFieldCategory_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_google_2fads_2fgoogleads_2fv0_2fenums_2fgoogle_5fads_5ffield_5fcategory_2eproto
