// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/ads/googleads/v0/enums/criterion_type.proto

#ifndef PROTOBUF_INCLUDED_google_2fads_2fgoogleads_2fv0_2fenums_2fcriterion_5ftype_2eproto
#define PROTOBUF_INCLUDED_google_2fads_2fgoogleads_2fv0_2fenums_2fcriterion_5ftype_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_protobuf_google_2fads_2fgoogleads_2fv0_2fenums_2fcriterion_5ftype_2eproto 

namespace protobuf_google_2fads_2fgoogleads_2fv0_2fenums_2fcriterion_5ftype_2eproto {
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
}  // namespace protobuf_google_2fads_2fgoogleads_2fv0_2fenums_2fcriterion_5ftype_2eproto
namespace google {
namespace ads {
namespace googleads {
namespace v0 {
namespace enums {
class CriterionTypeEnum;
class CriterionTypeEnumDefaultTypeInternal;
extern CriterionTypeEnumDefaultTypeInternal _CriterionTypeEnum_default_instance_;
}  // namespace enums
}  // namespace v0
}  // namespace googleads
}  // namespace ads
}  // namespace google
namespace google {
namespace protobuf {
template<> ::google::ads::googleads::v0::enums::CriterionTypeEnum* Arena::CreateMaybeMessage<::google::ads::googleads::v0::enums::CriterionTypeEnum>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace google {
namespace ads {
namespace googleads {
namespace v0 {
namespace enums {

enum CriterionTypeEnum_CriterionType {
  CriterionTypeEnum_CriterionType_UNSPECIFIED = 0,
  CriterionTypeEnum_CriterionType_UNKNOWN = 1,
  CriterionTypeEnum_CriterionType_KEYWORD = 2,
  CriterionTypeEnum_CriterionType_PLATFORM = 6,
  CriterionTypeEnum_CriterionType_LOCATION = 7,
  CriterionTypeEnum_CriterionType_LISTING_GROUP = 8,
  CriterionTypeEnum_CriterionType_CriterionTypeEnum_CriterionType_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  CriterionTypeEnum_CriterionType_CriterionTypeEnum_CriterionType_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool CriterionTypeEnum_CriterionType_IsValid(int value);
const CriterionTypeEnum_CriterionType CriterionTypeEnum_CriterionType_CriterionType_MIN = CriterionTypeEnum_CriterionType_UNSPECIFIED;
const CriterionTypeEnum_CriterionType CriterionTypeEnum_CriterionType_CriterionType_MAX = CriterionTypeEnum_CriterionType_LISTING_GROUP;
const int CriterionTypeEnum_CriterionType_CriterionType_ARRAYSIZE = CriterionTypeEnum_CriterionType_CriterionType_MAX + 1;

const ::google::protobuf::EnumDescriptor* CriterionTypeEnum_CriterionType_descriptor();
inline const ::std::string& CriterionTypeEnum_CriterionType_Name(CriterionTypeEnum_CriterionType value) {
  return ::google::protobuf::internal::NameOfEnum(
    CriterionTypeEnum_CriterionType_descriptor(), value);
}
inline bool CriterionTypeEnum_CriterionType_Parse(
    const ::std::string& name, CriterionTypeEnum_CriterionType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<CriterionTypeEnum_CriterionType>(
    CriterionTypeEnum_CriterionType_descriptor(), name, value);
}
// ===================================================================

class CriterionTypeEnum : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.ads.googleads.v0.enums.CriterionTypeEnum) */ {
 public:
  CriterionTypeEnum();
  virtual ~CriterionTypeEnum();

  CriterionTypeEnum(const CriterionTypeEnum& from);

  inline CriterionTypeEnum& operator=(const CriterionTypeEnum& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  CriterionTypeEnum(CriterionTypeEnum&& from) noexcept
    : CriterionTypeEnum() {
    *this = ::std::move(from);
  }

  inline CriterionTypeEnum& operator=(CriterionTypeEnum&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const CriterionTypeEnum& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const CriterionTypeEnum* internal_default_instance() {
    return reinterpret_cast<const CriterionTypeEnum*>(
               &_CriterionTypeEnum_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(CriterionTypeEnum* other);
  friend void swap(CriterionTypeEnum& a, CriterionTypeEnum& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline CriterionTypeEnum* New() const final {
    return CreateMaybeMessage<CriterionTypeEnum>(NULL);
  }

  CriterionTypeEnum* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<CriterionTypeEnum>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const CriterionTypeEnum& from);
  void MergeFrom(const CriterionTypeEnum& from);
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
  void InternalSwap(CriterionTypeEnum* other);
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

  typedef CriterionTypeEnum_CriterionType CriterionType;
  static const CriterionType UNSPECIFIED =
    CriterionTypeEnum_CriterionType_UNSPECIFIED;
  static const CriterionType UNKNOWN =
    CriterionTypeEnum_CriterionType_UNKNOWN;
  static const CriterionType KEYWORD =
    CriterionTypeEnum_CriterionType_KEYWORD;
  static const CriterionType PLATFORM =
    CriterionTypeEnum_CriterionType_PLATFORM;
  static const CriterionType LOCATION =
    CriterionTypeEnum_CriterionType_LOCATION;
  static const CriterionType LISTING_GROUP =
    CriterionTypeEnum_CriterionType_LISTING_GROUP;
  static inline bool CriterionType_IsValid(int value) {
    return CriterionTypeEnum_CriterionType_IsValid(value);
  }
  static const CriterionType CriterionType_MIN =
    CriterionTypeEnum_CriterionType_CriterionType_MIN;
  static const CriterionType CriterionType_MAX =
    CriterionTypeEnum_CriterionType_CriterionType_MAX;
  static const int CriterionType_ARRAYSIZE =
    CriterionTypeEnum_CriterionType_CriterionType_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  CriterionType_descriptor() {
    return CriterionTypeEnum_CriterionType_descriptor();
  }
  static inline const ::std::string& CriterionType_Name(CriterionType value) {
    return CriterionTypeEnum_CriterionType_Name(value);
  }
  static inline bool CriterionType_Parse(const ::std::string& name,
      CriterionType* value) {
    return CriterionTypeEnum_CriterionType_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:google.ads.googleads.v0.enums.CriterionTypeEnum)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_google_2fads_2fgoogleads_2fv0_2fenums_2fcriterion_5ftype_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// CriterionTypeEnum

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

template <> struct is_proto_enum< ::google::ads::googleads::v0::enums::CriterionTypeEnum_CriterionType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::google::ads::googleads::v0::enums::CriterionTypeEnum_CriterionType>() {
  return ::google::ads::googleads::v0::enums::CriterionTypeEnum_CriterionType_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_google_2fads_2fgoogleads_2fv0_2fenums_2fcriterion_5ftype_2eproto