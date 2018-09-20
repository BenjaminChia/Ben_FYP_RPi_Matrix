// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/ads/googleads/v0/enums/recommendation_type.proto

#ifndef PROTOBUF_INCLUDED_google_2fads_2fgoogleads_2fv0_2fenums_2frecommendation_5ftype_2eproto
#define PROTOBUF_INCLUDED_google_2fads_2fgoogleads_2fv0_2fenums_2frecommendation_5ftype_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_protobuf_google_2fads_2fgoogleads_2fv0_2fenums_2frecommendation_5ftype_2eproto 

namespace protobuf_google_2fads_2fgoogleads_2fv0_2fenums_2frecommendation_5ftype_2eproto {
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
}  // namespace protobuf_google_2fads_2fgoogleads_2fv0_2fenums_2frecommendation_5ftype_2eproto
namespace google {
namespace ads {
namespace googleads {
namespace v0 {
namespace enums {
class RecommendationTypeEnum;
class RecommendationTypeEnumDefaultTypeInternal;
extern RecommendationTypeEnumDefaultTypeInternal _RecommendationTypeEnum_default_instance_;
}  // namespace enums
}  // namespace v0
}  // namespace googleads
}  // namespace ads
}  // namespace google
namespace google {
namespace protobuf {
template<> ::google::ads::googleads::v0::enums::RecommendationTypeEnum* Arena::CreateMaybeMessage<::google::ads::googleads::v0::enums::RecommendationTypeEnum>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace google {
namespace ads {
namespace googleads {
namespace v0 {
namespace enums {

enum RecommendationTypeEnum_RecommendationType {
  RecommendationTypeEnum_RecommendationType_UNSPECIFIED = 0,
  RecommendationTypeEnum_RecommendationType_UNKNOWN = 1,
  RecommendationTypeEnum_RecommendationType_CAMPAIGN_BUDGET = 2,
  RecommendationTypeEnum_RecommendationType_KEYWORD = 3,
  RecommendationTypeEnum_RecommendationType_TEXT_AD = 4,
  RecommendationTypeEnum_RecommendationType_TARGET_CPA_OPT_IN = 5,
  RecommendationTypeEnum_RecommendationType_RecommendationTypeEnum_RecommendationType_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  RecommendationTypeEnum_RecommendationType_RecommendationTypeEnum_RecommendationType_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool RecommendationTypeEnum_RecommendationType_IsValid(int value);
const RecommendationTypeEnum_RecommendationType RecommendationTypeEnum_RecommendationType_RecommendationType_MIN = RecommendationTypeEnum_RecommendationType_UNSPECIFIED;
const RecommendationTypeEnum_RecommendationType RecommendationTypeEnum_RecommendationType_RecommendationType_MAX = RecommendationTypeEnum_RecommendationType_TARGET_CPA_OPT_IN;
const int RecommendationTypeEnum_RecommendationType_RecommendationType_ARRAYSIZE = RecommendationTypeEnum_RecommendationType_RecommendationType_MAX + 1;

const ::google::protobuf::EnumDescriptor* RecommendationTypeEnum_RecommendationType_descriptor();
inline const ::std::string& RecommendationTypeEnum_RecommendationType_Name(RecommendationTypeEnum_RecommendationType value) {
  return ::google::protobuf::internal::NameOfEnum(
    RecommendationTypeEnum_RecommendationType_descriptor(), value);
}
inline bool RecommendationTypeEnum_RecommendationType_Parse(
    const ::std::string& name, RecommendationTypeEnum_RecommendationType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<RecommendationTypeEnum_RecommendationType>(
    RecommendationTypeEnum_RecommendationType_descriptor(), name, value);
}
// ===================================================================

class RecommendationTypeEnum : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.ads.googleads.v0.enums.RecommendationTypeEnum) */ {
 public:
  RecommendationTypeEnum();
  virtual ~RecommendationTypeEnum();

  RecommendationTypeEnum(const RecommendationTypeEnum& from);

  inline RecommendationTypeEnum& operator=(const RecommendationTypeEnum& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  RecommendationTypeEnum(RecommendationTypeEnum&& from) noexcept
    : RecommendationTypeEnum() {
    *this = ::std::move(from);
  }

  inline RecommendationTypeEnum& operator=(RecommendationTypeEnum&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const RecommendationTypeEnum& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const RecommendationTypeEnum* internal_default_instance() {
    return reinterpret_cast<const RecommendationTypeEnum*>(
               &_RecommendationTypeEnum_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(RecommendationTypeEnum* other);
  friend void swap(RecommendationTypeEnum& a, RecommendationTypeEnum& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline RecommendationTypeEnum* New() const final {
    return CreateMaybeMessage<RecommendationTypeEnum>(NULL);
  }

  RecommendationTypeEnum* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<RecommendationTypeEnum>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const RecommendationTypeEnum& from);
  void MergeFrom(const RecommendationTypeEnum& from);
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
  void InternalSwap(RecommendationTypeEnum* other);
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

  typedef RecommendationTypeEnum_RecommendationType RecommendationType;
  static const RecommendationType UNSPECIFIED =
    RecommendationTypeEnum_RecommendationType_UNSPECIFIED;
  static const RecommendationType UNKNOWN =
    RecommendationTypeEnum_RecommendationType_UNKNOWN;
  static const RecommendationType CAMPAIGN_BUDGET =
    RecommendationTypeEnum_RecommendationType_CAMPAIGN_BUDGET;
  static const RecommendationType KEYWORD =
    RecommendationTypeEnum_RecommendationType_KEYWORD;
  static const RecommendationType TEXT_AD =
    RecommendationTypeEnum_RecommendationType_TEXT_AD;
  static const RecommendationType TARGET_CPA_OPT_IN =
    RecommendationTypeEnum_RecommendationType_TARGET_CPA_OPT_IN;
  static inline bool RecommendationType_IsValid(int value) {
    return RecommendationTypeEnum_RecommendationType_IsValid(value);
  }
  static const RecommendationType RecommendationType_MIN =
    RecommendationTypeEnum_RecommendationType_RecommendationType_MIN;
  static const RecommendationType RecommendationType_MAX =
    RecommendationTypeEnum_RecommendationType_RecommendationType_MAX;
  static const int RecommendationType_ARRAYSIZE =
    RecommendationTypeEnum_RecommendationType_RecommendationType_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  RecommendationType_descriptor() {
    return RecommendationTypeEnum_RecommendationType_descriptor();
  }
  static inline const ::std::string& RecommendationType_Name(RecommendationType value) {
    return RecommendationTypeEnum_RecommendationType_Name(value);
  }
  static inline bool RecommendationType_Parse(const ::std::string& name,
      RecommendationType* value) {
    return RecommendationTypeEnum_RecommendationType_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:google.ads.googleads.v0.enums.RecommendationTypeEnum)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_google_2fads_2fgoogleads_2fv0_2fenums_2frecommendation_5ftype_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// RecommendationTypeEnum

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

template <> struct is_proto_enum< ::google::ads::googleads::v0::enums::RecommendationTypeEnum_RecommendationType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::google::ads::googleads::v0::enums::RecommendationTypeEnum_RecommendationType>() {
  return ::google::ads::googleads::v0::enums::RecommendationTypeEnum_RecommendationType_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_google_2fads_2fgoogleads_2fv0_2fenums_2frecommendation_5ftype_2eproto