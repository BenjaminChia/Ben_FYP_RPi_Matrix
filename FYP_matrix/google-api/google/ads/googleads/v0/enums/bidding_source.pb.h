// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/ads/googleads/v0/enums/bidding_source.proto

#ifndef PROTOBUF_INCLUDED_google_2fads_2fgoogleads_2fv0_2fenums_2fbidding_5fsource_2eproto
#define PROTOBUF_INCLUDED_google_2fads_2fgoogleads_2fv0_2fenums_2fbidding_5fsource_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_protobuf_google_2fads_2fgoogleads_2fv0_2fenums_2fbidding_5fsource_2eproto 

namespace protobuf_google_2fads_2fgoogleads_2fv0_2fenums_2fbidding_5fsource_2eproto {
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
}  // namespace protobuf_google_2fads_2fgoogleads_2fv0_2fenums_2fbidding_5fsource_2eproto
namespace google {
namespace ads {
namespace googleads {
namespace v0 {
namespace enums {
class BiddingSourceEnum;
class BiddingSourceEnumDefaultTypeInternal;
extern BiddingSourceEnumDefaultTypeInternal _BiddingSourceEnum_default_instance_;
}  // namespace enums
}  // namespace v0
}  // namespace googleads
}  // namespace ads
}  // namespace google
namespace google {
namespace protobuf {
template<> ::google::ads::googleads::v0::enums::BiddingSourceEnum* Arena::CreateMaybeMessage<::google::ads::googleads::v0::enums::BiddingSourceEnum>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace google {
namespace ads {
namespace googleads {
namespace v0 {
namespace enums {

enum BiddingSourceEnum_BiddingSource {
  BiddingSourceEnum_BiddingSource_UNSPECIFIED = 0,
  BiddingSourceEnum_BiddingSource_UNKNOWN = 1,
  BiddingSourceEnum_BiddingSource_ADGROUP = 2,
  BiddingSourceEnum_BiddingSource_CRITERION = 3,
  BiddingSourceEnum_BiddingSource_CAMPAIGN_BIDDING_STRATEGY = 5,
  BiddingSourceEnum_BiddingSource_BiddingSourceEnum_BiddingSource_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  BiddingSourceEnum_BiddingSource_BiddingSourceEnum_BiddingSource_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool BiddingSourceEnum_BiddingSource_IsValid(int value);
const BiddingSourceEnum_BiddingSource BiddingSourceEnum_BiddingSource_BiddingSource_MIN = BiddingSourceEnum_BiddingSource_UNSPECIFIED;
const BiddingSourceEnum_BiddingSource BiddingSourceEnum_BiddingSource_BiddingSource_MAX = BiddingSourceEnum_BiddingSource_CAMPAIGN_BIDDING_STRATEGY;
const int BiddingSourceEnum_BiddingSource_BiddingSource_ARRAYSIZE = BiddingSourceEnum_BiddingSource_BiddingSource_MAX + 1;

const ::google::protobuf::EnumDescriptor* BiddingSourceEnum_BiddingSource_descriptor();
inline const ::std::string& BiddingSourceEnum_BiddingSource_Name(BiddingSourceEnum_BiddingSource value) {
  return ::google::protobuf::internal::NameOfEnum(
    BiddingSourceEnum_BiddingSource_descriptor(), value);
}
inline bool BiddingSourceEnum_BiddingSource_Parse(
    const ::std::string& name, BiddingSourceEnum_BiddingSource* value) {
  return ::google::protobuf::internal::ParseNamedEnum<BiddingSourceEnum_BiddingSource>(
    BiddingSourceEnum_BiddingSource_descriptor(), name, value);
}
// ===================================================================

class BiddingSourceEnum : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.ads.googleads.v0.enums.BiddingSourceEnum) */ {
 public:
  BiddingSourceEnum();
  virtual ~BiddingSourceEnum();

  BiddingSourceEnum(const BiddingSourceEnum& from);

  inline BiddingSourceEnum& operator=(const BiddingSourceEnum& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  BiddingSourceEnum(BiddingSourceEnum&& from) noexcept
    : BiddingSourceEnum() {
    *this = ::std::move(from);
  }

  inline BiddingSourceEnum& operator=(BiddingSourceEnum&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const BiddingSourceEnum& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const BiddingSourceEnum* internal_default_instance() {
    return reinterpret_cast<const BiddingSourceEnum*>(
               &_BiddingSourceEnum_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(BiddingSourceEnum* other);
  friend void swap(BiddingSourceEnum& a, BiddingSourceEnum& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline BiddingSourceEnum* New() const final {
    return CreateMaybeMessage<BiddingSourceEnum>(NULL);
  }

  BiddingSourceEnum* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<BiddingSourceEnum>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const BiddingSourceEnum& from);
  void MergeFrom(const BiddingSourceEnum& from);
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
  void InternalSwap(BiddingSourceEnum* other);
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

  typedef BiddingSourceEnum_BiddingSource BiddingSource;
  static const BiddingSource UNSPECIFIED =
    BiddingSourceEnum_BiddingSource_UNSPECIFIED;
  static const BiddingSource UNKNOWN =
    BiddingSourceEnum_BiddingSource_UNKNOWN;
  static const BiddingSource ADGROUP =
    BiddingSourceEnum_BiddingSource_ADGROUP;
  static const BiddingSource CRITERION =
    BiddingSourceEnum_BiddingSource_CRITERION;
  static const BiddingSource CAMPAIGN_BIDDING_STRATEGY =
    BiddingSourceEnum_BiddingSource_CAMPAIGN_BIDDING_STRATEGY;
  static inline bool BiddingSource_IsValid(int value) {
    return BiddingSourceEnum_BiddingSource_IsValid(value);
  }
  static const BiddingSource BiddingSource_MIN =
    BiddingSourceEnum_BiddingSource_BiddingSource_MIN;
  static const BiddingSource BiddingSource_MAX =
    BiddingSourceEnum_BiddingSource_BiddingSource_MAX;
  static const int BiddingSource_ARRAYSIZE =
    BiddingSourceEnum_BiddingSource_BiddingSource_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  BiddingSource_descriptor() {
    return BiddingSourceEnum_BiddingSource_descriptor();
  }
  static inline const ::std::string& BiddingSource_Name(BiddingSource value) {
    return BiddingSourceEnum_BiddingSource_Name(value);
  }
  static inline bool BiddingSource_Parse(const ::std::string& name,
      BiddingSource* value) {
    return BiddingSourceEnum_BiddingSource_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:google.ads.googleads.v0.enums.BiddingSourceEnum)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_google_2fads_2fgoogleads_2fv0_2fenums_2fbidding_5fsource_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// BiddingSourceEnum

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

template <> struct is_proto_enum< ::google::ads::googleads::v0::enums::BiddingSourceEnum_BiddingSource> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::google::ads::googleads::v0::enums::BiddingSourceEnum_BiddingSource>() {
  return ::google::ads::googleads::v0::enums::BiddingSourceEnum_BiddingSource_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_google_2fads_2fgoogleads_2fv0_2fenums_2fbidding_5fsource_2eproto
