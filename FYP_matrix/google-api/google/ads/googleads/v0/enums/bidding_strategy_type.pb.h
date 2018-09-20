// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/ads/googleads/v0/enums/bidding_strategy_type.proto

#ifndef PROTOBUF_INCLUDED_google_2fads_2fgoogleads_2fv0_2fenums_2fbidding_5fstrategy_5ftype_2eproto
#define PROTOBUF_INCLUDED_google_2fads_2fgoogleads_2fv0_2fenums_2fbidding_5fstrategy_5ftype_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_protobuf_google_2fads_2fgoogleads_2fv0_2fenums_2fbidding_5fstrategy_5ftype_2eproto 

namespace protobuf_google_2fads_2fgoogleads_2fv0_2fenums_2fbidding_5fstrategy_5ftype_2eproto {
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
}  // namespace protobuf_google_2fads_2fgoogleads_2fv0_2fenums_2fbidding_5fstrategy_5ftype_2eproto
namespace google {
namespace ads {
namespace googleads {
namespace v0 {
namespace enums {
class BiddingStrategyTypeEnum;
class BiddingStrategyTypeEnumDefaultTypeInternal;
extern BiddingStrategyTypeEnumDefaultTypeInternal _BiddingStrategyTypeEnum_default_instance_;
}  // namespace enums
}  // namespace v0
}  // namespace googleads
}  // namespace ads
}  // namespace google
namespace google {
namespace protobuf {
template<> ::google::ads::googleads::v0::enums::BiddingStrategyTypeEnum* Arena::CreateMaybeMessage<::google::ads::googleads::v0::enums::BiddingStrategyTypeEnum>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace google {
namespace ads {
namespace googleads {
namespace v0 {
namespace enums {

enum BiddingStrategyTypeEnum_BiddingStrategyType {
  BiddingStrategyTypeEnum_BiddingStrategyType_UNSPECIFIED = 0,
  BiddingStrategyTypeEnum_BiddingStrategyType_UNKNOWN = 1,
  BiddingStrategyTypeEnum_BiddingStrategyType_ENHANCED_CPC = 2,
  BiddingStrategyTypeEnum_BiddingStrategyType_MANUAL_CPC = 3,
  BiddingStrategyTypeEnum_BiddingStrategyType_MANUAL_CPM = 4,
  BiddingStrategyTypeEnum_BiddingStrategyType_MAXIMIZE_CONVERSIONS = 10,
  BiddingStrategyTypeEnum_BiddingStrategyType_MAXIMIZE_CONVERSION_VALUE = 11,
  BiddingStrategyTypeEnum_BiddingStrategyType_PAGE_ONE_PROMOTED = 5,
  BiddingStrategyTypeEnum_BiddingStrategyType_PERCENT_CPC = 12,
  BiddingStrategyTypeEnum_BiddingStrategyType_TARGET_CPA = 6,
  BiddingStrategyTypeEnum_BiddingStrategyType_TARGET_OUTRANK_SHARE = 7,
  BiddingStrategyTypeEnum_BiddingStrategyType_TARGET_ROAS = 8,
  BiddingStrategyTypeEnum_BiddingStrategyType_TARGET_SPEND = 9,
  BiddingStrategyTypeEnum_BiddingStrategyType_BiddingStrategyTypeEnum_BiddingStrategyType_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  BiddingStrategyTypeEnum_BiddingStrategyType_BiddingStrategyTypeEnum_BiddingStrategyType_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool BiddingStrategyTypeEnum_BiddingStrategyType_IsValid(int value);
const BiddingStrategyTypeEnum_BiddingStrategyType BiddingStrategyTypeEnum_BiddingStrategyType_BiddingStrategyType_MIN = BiddingStrategyTypeEnum_BiddingStrategyType_UNSPECIFIED;
const BiddingStrategyTypeEnum_BiddingStrategyType BiddingStrategyTypeEnum_BiddingStrategyType_BiddingStrategyType_MAX = BiddingStrategyTypeEnum_BiddingStrategyType_PERCENT_CPC;
const int BiddingStrategyTypeEnum_BiddingStrategyType_BiddingStrategyType_ARRAYSIZE = BiddingStrategyTypeEnum_BiddingStrategyType_BiddingStrategyType_MAX + 1;

const ::google::protobuf::EnumDescriptor* BiddingStrategyTypeEnum_BiddingStrategyType_descriptor();
inline const ::std::string& BiddingStrategyTypeEnum_BiddingStrategyType_Name(BiddingStrategyTypeEnum_BiddingStrategyType value) {
  return ::google::protobuf::internal::NameOfEnum(
    BiddingStrategyTypeEnum_BiddingStrategyType_descriptor(), value);
}
inline bool BiddingStrategyTypeEnum_BiddingStrategyType_Parse(
    const ::std::string& name, BiddingStrategyTypeEnum_BiddingStrategyType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<BiddingStrategyTypeEnum_BiddingStrategyType>(
    BiddingStrategyTypeEnum_BiddingStrategyType_descriptor(), name, value);
}
// ===================================================================

class BiddingStrategyTypeEnum : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.ads.googleads.v0.enums.BiddingStrategyTypeEnum) */ {
 public:
  BiddingStrategyTypeEnum();
  virtual ~BiddingStrategyTypeEnum();

  BiddingStrategyTypeEnum(const BiddingStrategyTypeEnum& from);

  inline BiddingStrategyTypeEnum& operator=(const BiddingStrategyTypeEnum& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  BiddingStrategyTypeEnum(BiddingStrategyTypeEnum&& from) noexcept
    : BiddingStrategyTypeEnum() {
    *this = ::std::move(from);
  }

  inline BiddingStrategyTypeEnum& operator=(BiddingStrategyTypeEnum&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const BiddingStrategyTypeEnum& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const BiddingStrategyTypeEnum* internal_default_instance() {
    return reinterpret_cast<const BiddingStrategyTypeEnum*>(
               &_BiddingStrategyTypeEnum_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(BiddingStrategyTypeEnum* other);
  friend void swap(BiddingStrategyTypeEnum& a, BiddingStrategyTypeEnum& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline BiddingStrategyTypeEnum* New() const final {
    return CreateMaybeMessage<BiddingStrategyTypeEnum>(NULL);
  }

  BiddingStrategyTypeEnum* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<BiddingStrategyTypeEnum>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const BiddingStrategyTypeEnum& from);
  void MergeFrom(const BiddingStrategyTypeEnum& from);
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
  void InternalSwap(BiddingStrategyTypeEnum* other);
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

  typedef BiddingStrategyTypeEnum_BiddingStrategyType BiddingStrategyType;
  static const BiddingStrategyType UNSPECIFIED =
    BiddingStrategyTypeEnum_BiddingStrategyType_UNSPECIFIED;
  static const BiddingStrategyType UNKNOWN =
    BiddingStrategyTypeEnum_BiddingStrategyType_UNKNOWN;
  static const BiddingStrategyType ENHANCED_CPC =
    BiddingStrategyTypeEnum_BiddingStrategyType_ENHANCED_CPC;
  static const BiddingStrategyType MANUAL_CPC =
    BiddingStrategyTypeEnum_BiddingStrategyType_MANUAL_CPC;
  static const BiddingStrategyType MANUAL_CPM =
    BiddingStrategyTypeEnum_BiddingStrategyType_MANUAL_CPM;
  static const BiddingStrategyType MAXIMIZE_CONVERSIONS =
    BiddingStrategyTypeEnum_BiddingStrategyType_MAXIMIZE_CONVERSIONS;
  static const BiddingStrategyType MAXIMIZE_CONVERSION_VALUE =
    BiddingStrategyTypeEnum_BiddingStrategyType_MAXIMIZE_CONVERSION_VALUE;
  static const BiddingStrategyType PAGE_ONE_PROMOTED =
    BiddingStrategyTypeEnum_BiddingStrategyType_PAGE_ONE_PROMOTED;
  static const BiddingStrategyType PERCENT_CPC =
    BiddingStrategyTypeEnum_BiddingStrategyType_PERCENT_CPC;
  static const BiddingStrategyType TARGET_CPA =
    BiddingStrategyTypeEnum_BiddingStrategyType_TARGET_CPA;
  static const BiddingStrategyType TARGET_OUTRANK_SHARE =
    BiddingStrategyTypeEnum_BiddingStrategyType_TARGET_OUTRANK_SHARE;
  static const BiddingStrategyType TARGET_ROAS =
    BiddingStrategyTypeEnum_BiddingStrategyType_TARGET_ROAS;
  static const BiddingStrategyType TARGET_SPEND =
    BiddingStrategyTypeEnum_BiddingStrategyType_TARGET_SPEND;
  static inline bool BiddingStrategyType_IsValid(int value) {
    return BiddingStrategyTypeEnum_BiddingStrategyType_IsValid(value);
  }
  static const BiddingStrategyType BiddingStrategyType_MIN =
    BiddingStrategyTypeEnum_BiddingStrategyType_BiddingStrategyType_MIN;
  static const BiddingStrategyType BiddingStrategyType_MAX =
    BiddingStrategyTypeEnum_BiddingStrategyType_BiddingStrategyType_MAX;
  static const int BiddingStrategyType_ARRAYSIZE =
    BiddingStrategyTypeEnum_BiddingStrategyType_BiddingStrategyType_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  BiddingStrategyType_descriptor() {
    return BiddingStrategyTypeEnum_BiddingStrategyType_descriptor();
  }
  static inline const ::std::string& BiddingStrategyType_Name(BiddingStrategyType value) {
    return BiddingStrategyTypeEnum_BiddingStrategyType_Name(value);
  }
  static inline bool BiddingStrategyType_Parse(const ::std::string& name,
      BiddingStrategyType* value) {
    return BiddingStrategyTypeEnum_BiddingStrategyType_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:google.ads.googleads.v0.enums.BiddingStrategyTypeEnum)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_google_2fads_2fgoogleads_2fv0_2fenums_2fbidding_5fstrategy_5ftype_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// BiddingStrategyTypeEnum

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

template <> struct is_proto_enum< ::google::ads::googleads::v0::enums::BiddingStrategyTypeEnum_BiddingStrategyType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::google::ads::googleads::v0::enums::BiddingStrategyTypeEnum_BiddingStrategyType>() {
  return ::google::ads::googleads::v0::enums::BiddingStrategyTypeEnum_BiddingStrategyType_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_google_2fads_2fgoogleads_2fv0_2fenums_2fbidding_5fstrategy_5ftype_2eproto