// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/ads/googleads/v0/enums/ad_network_type.proto

#ifndef PROTOBUF_INCLUDED_google_2fads_2fgoogleads_2fv0_2fenums_2fad_5fnetwork_5ftype_2eproto
#define PROTOBUF_INCLUDED_google_2fads_2fgoogleads_2fv0_2fenums_2fad_5fnetwork_5ftype_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_protobuf_google_2fads_2fgoogleads_2fv0_2fenums_2fad_5fnetwork_5ftype_2eproto 

namespace protobuf_google_2fads_2fgoogleads_2fv0_2fenums_2fad_5fnetwork_5ftype_2eproto {
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
}  // namespace protobuf_google_2fads_2fgoogleads_2fv0_2fenums_2fad_5fnetwork_5ftype_2eproto
namespace google {
namespace ads {
namespace googleads {
namespace v0 {
namespace enums {
class AdNetworkTypeEnum;
class AdNetworkTypeEnumDefaultTypeInternal;
extern AdNetworkTypeEnumDefaultTypeInternal _AdNetworkTypeEnum_default_instance_;
}  // namespace enums
}  // namespace v0
}  // namespace googleads
}  // namespace ads
}  // namespace google
namespace google {
namespace protobuf {
template<> ::google::ads::googleads::v0::enums::AdNetworkTypeEnum* Arena::CreateMaybeMessage<::google::ads::googleads::v0::enums::AdNetworkTypeEnum>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace google {
namespace ads {
namespace googleads {
namespace v0 {
namespace enums {

enum AdNetworkTypeEnum_AdNetworkType {
  AdNetworkTypeEnum_AdNetworkType_UNSPECIFIED = 0,
  AdNetworkTypeEnum_AdNetworkType_UNKNOWN = 1,
  AdNetworkTypeEnum_AdNetworkType_SEARCH = 2,
  AdNetworkTypeEnum_AdNetworkType_SEARCH_PARTNERS = 3,
  AdNetworkTypeEnum_AdNetworkType_CONTENT = 4,
  AdNetworkTypeEnum_AdNetworkType_YOUTUBE_SEARCH = 5,
  AdNetworkTypeEnum_AdNetworkType_YOUTUBE_WATCH = 6,
  AdNetworkTypeEnum_AdNetworkType_AdNetworkTypeEnum_AdNetworkType_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  AdNetworkTypeEnum_AdNetworkType_AdNetworkTypeEnum_AdNetworkType_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool AdNetworkTypeEnum_AdNetworkType_IsValid(int value);
const AdNetworkTypeEnum_AdNetworkType AdNetworkTypeEnum_AdNetworkType_AdNetworkType_MIN = AdNetworkTypeEnum_AdNetworkType_UNSPECIFIED;
const AdNetworkTypeEnum_AdNetworkType AdNetworkTypeEnum_AdNetworkType_AdNetworkType_MAX = AdNetworkTypeEnum_AdNetworkType_YOUTUBE_WATCH;
const int AdNetworkTypeEnum_AdNetworkType_AdNetworkType_ARRAYSIZE = AdNetworkTypeEnum_AdNetworkType_AdNetworkType_MAX + 1;

const ::google::protobuf::EnumDescriptor* AdNetworkTypeEnum_AdNetworkType_descriptor();
inline const ::std::string& AdNetworkTypeEnum_AdNetworkType_Name(AdNetworkTypeEnum_AdNetworkType value) {
  return ::google::protobuf::internal::NameOfEnum(
    AdNetworkTypeEnum_AdNetworkType_descriptor(), value);
}
inline bool AdNetworkTypeEnum_AdNetworkType_Parse(
    const ::std::string& name, AdNetworkTypeEnum_AdNetworkType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<AdNetworkTypeEnum_AdNetworkType>(
    AdNetworkTypeEnum_AdNetworkType_descriptor(), name, value);
}
// ===================================================================

class AdNetworkTypeEnum : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.ads.googleads.v0.enums.AdNetworkTypeEnum) */ {
 public:
  AdNetworkTypeEnum();
  virtual ~AdNetworkTypeEnum();

  AdNetworkTypeEnum(const AdNetworkTypeEnum& from);

  inline AdNetworkTypeEnum& operator=(const AdNetworkTypeEnum& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  AdNetworkTypeEnum(AdNetworkTypeEnum&& from) noexcept
    : AdNetworkTypeEnum() {
    *this = ::std::move(from);
  }

  inline AdNetworkTypeEnum& operator=(AdNetworkTypeEnum&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const AdNetworkTypeEnum& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const AdNetworkTypeEnum* internal_default_instance() {
    return reinterpret_cast<const AdNetworkTypeEnum*>(
               &_AdNetworkTypeEnum_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(AdNetworkTypeEnum* other);
  friend void swap(AdNetworkTypeEnum& a, AdNetworkTypeEnum& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline AdNetworkTypeEnum* New() const final {
    return CreateMaybeMessage<AdNetworkTypeEnum>(NULL);
  }

  AdNetworkTypeEnum* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<AdNetworkTypeEnum>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const AdNetworkTypeEnum& from);
  void MergeFrom(const AdNetworkTypeEnum& from);
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
  void InternalSwap(AdNetworkTypeEnum* other);
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

  typedef AdNetworkTypeEnum_AdNetworkType AdNetworkType;
  static const AdNetworkType UNSPECIFIED =
    AdNetworkTypeEnum_AdNetworkType_UNSPECIFIED;
  static const AdNetworkType UNKNOWN =
    AdNetworkTypeEnum_AdNetworkType_UNKNOWN;
  static const AdNetworkType SEARCH =
    AdNetworkTypeEnum_AdNetworkType_SEARCH;
  static const AdNetworkType SEARCH_PARTNERS =
    AdNetworkTypeEnum_AdNetworkType_SEARCH_PARTNERS;
  static const AdNetworkType CONTENT =
    AdNetworkTypeEnum_AdNetworkType_CONTENT;
  static const AdNetworkType YOUTUBE_SEARCH =
    AdNetworkTypeEnum_AdNetworkType_YOUTUBE_SEARCH;
  static const AdNetworkType YOUTUBE_WATCH =
    AdNetworkTypeEnum_AdNetworkType_YOUTUBE_WATCH;
  static inline bool AdNetworkType_IsValid(int value) {
    return AdNetworkTypeEnum_AdNetworkType_IsValid(value);
  }
  static const AdNetworkType AdNetworkType_MIN =
    AdNetworkTypeEnum_AdNetworkType_AdNetworkType_MIN;
  static const AdNetworkType AdNetworkType_MAX =
    AdNetworkTypeEnum_AdNetworkType_AdNetworkType_MAX;
  static const int AdNetworkType_ARRAYSIZE =
    AdNetworkTypeEnum_AdNetworkType_AdNetworkType_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  AdNetworkType_descriptor() {
    return AdNetworkTypeEnum_AdNetworkType_descriptor();
  }
  static inline const ::std::string& AdNetworkType_Name(AdNetworkType value) {
    return AdNetworkTypeEnum_AdNetworkType_Name(value);
  }
  static inline bool AdNetworkType_Parse(const ::std::string& name,
      AdNetworkType* value) {
    return AdNetworkTypeEnum_AdNetworkType_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:google.ads.googleads.v0.enums.AdNetworkTypeEnum)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_google_2fads_2fgoogleads_2fv0_2fenums_2fad_5fnetwork_5ftype_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// AdNetworkTypeEnum

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

template <> struct is_proto_enum< ::google::ads::googleads::v0::enums::AdNetworkTypeEnum_AdNetworkType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::google::ads::googleads::v0::enums::AdNetworkTypeEnum_AdNetworkType>() {
  return ::google::ads::googleads::v0::enums::AdNetworkTypeEnum_AdNetworkType_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_google_2fads_2fgoogleads_2fv0_2fenums_2fad_5fnetwork_5ftype_2eproto
