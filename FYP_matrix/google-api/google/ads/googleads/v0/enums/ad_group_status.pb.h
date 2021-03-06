// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/ads/googleads/v0/enums/ad_group_status.proto

#ifndef PROTOBUF_INCLUDED_google_2fads_2fgoogleads_2fv0_2fenums_2fad_5fgroup_5fstatus_2eproto
#define PROTOBUF_INCLUDED_google_2fads_2fgoogleads_2fv0_2fenums_2fad_5fgroup_5fstatus_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_protobuf_google_2fads_2fgoogleads_2fv0_2fenums_2fad_5fgroup_5fstatus_2eproto 

namespace protobuf_google_2fads_2fgoogleads_2fv0_2fenums_2fad_5fgroup_5fstatus_2eproto {
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
}  // namespace protobuf_google_2fads_2fgoogleads_2fv0_2fenums_2fad_5fgroup_5fstatus_2eproto
namespace google {
namespace ads {
namespace googleads {
namespace v0 {
namespace enums {
class AdGroupStatusEnum;
class AdGroupStatusEnumDefaultTypeInternal;
extern AdGroupStatusEnumDefaultTypeInternal _AdGroupStatusEnum_default_instance_;
}  // namespace enums
}  // namespace v0
}  // namespace googleads
}  // namespace ads
}  // namespace google
namespace google {
namespace protobuf {
template<> ::google::ads::googleads::v0::enums::AdGroupStatusEnum* Arena::CreateMaybeMessage<::google::ads::googleads::v0::enums::AdGroupStatusEnum>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace google {
namespace ads {
namespace googleads {
namespace v0 {
namespace enums {

enum AdGroupStatusEnum_AdGroupStatus {
  AdGroupStatusEnum_AdGroupStatus_UNSPECIFIED = 0,
  AdGroupStatusEnum_AdGroupStatus_UNKNOWN = 1,
  AdGroupStatusEnum_AdGroupStatus_ENABLED = 2,
  AdGroupStatusEnum_AdGroupStatus_PAUSED = 3,
  AdGroupStatusEnum_AdGroupStatus_REMOVED = 4,
  AdGroupStatusEnum_AdGroupStatus_AdGroupStatusEnum_AdGroupStatus_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  AdGroupStatusEnum_AdGroupStatus_AdGroupStatusEnum_AdGroupStatus_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool AdGroupStatusEnum_AdGroupStatus_IsValid(int value);
const AdGroupStatusEnum_AdGroupStatus AdGroupStatusEnum_AdGroupStatus_AdGroupStatus_MIN = AdGroupStatusEnum_AdGroupStatus_UNSPECIFIED;
const AdGroupStatusEnum_AdGroupStatus AdGroupStatusEnum_AdGroupStatus_AdGroupStatus_MAX = AdGroupStatusEnum_AdGroupStatus_REMOVED;
const int AdGroupStatusEnum_AdGroupStatus_AdGroupStatus_ARRAYSIZE = AdGroupStatusEnum_AdGroupStatus_AdGroupStatus_MAX + 1;

const ::google::protobuf::EnumDescriptor* AdGroupStatusEnum_AdGroupStatus_descriptor();
inline const ::std::string& AdGroupStatusEnum_AdGroupStatus_Name(AdGroupStatusEnum_AdGroupStatus value) {
  return ::google::protobuf::internal::NameOfEnum(
    AdGroupStatusEnum_AdGroupStatus_descriptor(), value);
}
inline bool AdGroupStatusEnum_AdGroupStatus_Parse(
    const ::std::string& name, AdGroupStatusEnum_AdGroupStatus* value) {
  return ::google::protobuf::internal::ParseNamedEnum<AdGroupStatusEnum_AdGroupStatus>(
    AdGroupStatusEnum_AdGroupStatus_descriptor(), name, value);
}
// ===================================================================

class AdGroupStatusEnum : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.ads.googleads.v0.enums.AdGroupStatusEnum) */ {
 public:
  AdGroupStatusEnum();
  virtual ~AdGroupStatusEnum();

  AdGroupStatusEnum(const AdGroupStatusEnum& from);

  inline AdGroupStatusEnum& operator=(const AdGroupStatusEnum& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  AdGroupStatusEnum(AdGroupStatusEnum&& from) noexcept
    : AdGroupStatusEnum() {
    *this = ::std::move(from);
  }

  inline AdGroupStatusEnum& operator=(AdGroupStatusEnum&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const AdGroupStatusEnum& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const AdGroupStatusEnum* internal_default_instance() {
    return reinterpret_cast<const AdGroupStatusEnum*>(
               &_AdGroupStatusEnum_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(AdGroupStatusEnum* other);
  friend void swap(AdGroupStatusEnum& a, AdGroupStatusEnum& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline AdGroupStatusEnum* New() const final {
    return CreateMaybeMessage<AdGroupStatusEnum>(NULL);
  }

  AdGroupStatusEnum* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<AdGroupStatusEnum>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const AdGroupStatusEnum& from);
  void MergeFrom(const AdGroupStatusEnum& from);
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
  void InternalSwap(AdGroupStatusEnum* other);
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

  typedef AdGroupStatusEnum_AdGroupStatus AdGroupStatus;
  static const AdGroupStatus UNSPECIFIED =
    AdGroupStatusEnum_AdGroupStatus_UNSPECIFIED;
  static const AdGroupStatus UNKNOWN =
    AdGroupStatusEnum_AdGroupStatus_UNKNOWN;
  static const AdGroupStatus ENABLED =
    AdGroupStatusEnum_AdGroupStatus_ENABLED;
  static const AdGroupStatus PAUSED =
    AdGroupStatusEnum_AdGroupStatus_PAUSED;
  static const AdGroupStatus REMOVED =
    AdGroupStatusEnum_AdGroupStatus_REMOVED;
  static inline bool AdGroupStatus_IsValid(int value) {
    return AdGroupStatusEnum_AdGroupStatus_IsValid(value);
  }
  static const AdGroupStatus AdGroupStatus_MIN =
    AdGroupStatusEnum_AdGroupStatus_AdGroupStatus_MIN;
  static const AdGroupStatus AdGroupStatus_MAX =
    AdGroupStatusEnum_AdGroupStatus_AdGroupStatus_MAX;
  static const int AdGroupStatus_ARRAYSIZE =
    AdGroupStatusEnum_AdGroupStatus_AdGroupStatus_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  AdGroupStatus_descriptor() {
    return AdGroupStatusEnum_AdGroupStatus_descriptor();
  }
  static inline const ::std::string& AdGroupStatus_Name(AdGroupStatus value) {
    return AdGroupStatusEnum_AdGroupStatus_Name(value);
  }
  static inline bool AdGroupStatus_Parse(const ::std::string& name,
      AdGroupStatus* value) {
    return AdGroupStatusEnum_AdGroupStatus_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:google.ads.googleads.v0.enums.AdGroupStatusEnum)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_google_2fads_2fgoogleads_2fv0_2fenums_2fad_5fgroup_5fstatus_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// AdGroupStatusEnum

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

template <> struct is_proto_enum< ::google::ads::googleads::v0::enums::AdGroupStatusEnum_AdGroupStatus> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::google::ads::googleads::v0::enums::AdGroupStatusEnum_AdGroupStatus>() {
  return ::google::ads::googleads::v0::enums::AdGroupStatusEnum_AdGroupStatus_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_google_2fads_2fgoogleads_2fv0_2fenums_2fad_5fgroup_5fstatus_2eproto
