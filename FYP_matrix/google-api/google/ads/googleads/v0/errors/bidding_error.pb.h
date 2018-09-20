// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/ads/googleads/v0/errors/bidding_error.proto

#ifndef PROTOBUF_INCLUDED_google_2fads_2fgoogleads_2fv0_2ferrors_2fbidding_5ferror_2eproto
#define PROTOBUF_INCLUDED_google_2fads_2fgoogleads_2fv0_2ferrors_2fbidding_5ferror_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_protobuf_google_2fads_2fgoogleads_2fv0_2ferrors_2fbidding_5ferror_2eproto 

namespace protobuf_google_2fads_2fgoogleads_2fv0_2ferrors_2fbidding_5ferror_2eproto {
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
}  // namespace protobuf_google_2fads_2fgoogleads_2fv0_2ferrors_2fbidding_5ferror_2eproto
namespace google {
namespace ads {
namespace googleads {
namespace v0 {
namespace errors {
class BiddingErrorEnum;
class BiddingErrorEnumDefaultTypeInternal;
extern BiddingErrorEnumDefaultTypeInternal _BiddingErrorEnum_default_instance_;
}  // namespace errors
}  // namespace v0
}  // namespace googleads
}  // namespace ads
}  // namespace google
namespace google {
namespace protobuf {
template<> ::google::ads::googleads::v0::errors::BiddingErrorEnum* Arena::CreateMaybeMessage<::google::ads::googleads::v0::errors::BiddingErrorEnum>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace google {
namespace ads {
namespace googleads {
namespace v0 {
namespace errors {

enum BiddingErrorEnum_BiddingError {
  BiddingErrorEnum_BiddingError_UNSPECIFIED = 0,
  BiddingErrorEnum_BiddingError_UNKNOWN = 1,
  BiddingErrorEnum_BiddingError_BIDDING_STRATEGY_TRANSITION_NOT_ALLOWED = 2,
  BiddingErrorEnum_BiddingError_CANNOT_ATTACH_BIDDING_STRATEGY_TO_CAMPAIGN = 7,
  BiddingErrorEnum_BiddingError_INVALID_ANONYMOUS_BIDDING_STRATEGY_TYPE = 10,
  BiddingErrorEnum_BiddingError_INVALID_BIDDING_STRATEGY_TYPE = 14,
  BiddingErrorEnum_BiddingError_INVALID_BID = 17,
  BiddingErrorEnum_BiddingError_BIDDING_STRATEGY_NOT_AVAILABLE_FOR_ACCOUNT_TYPE = 18,
  BiddingErrorEnum_BiddingError_CONVERSION_TRACKING_NOT_ENABLED = 19,
  BiddingErrorEnum_BiddingError_NOT_ENOUGH_CONVERSIONS = 20,
  BiddingErrorEnum_BiddingError_CANNOT_CREATE_CAMPAIGN_WITH_BIDDING_STRATEGY = 21,
  BiddingErrorEnum_BiddingError_CANNOT_TARGET_CONTENT_NETWORK_ONLY_WITH_CAMPAIGN_LEVEL_POP_BIDDING_STRATEGY = 23,
  BiddingErrorEnum_BiddingError_BIDDING_STRATEGY_NOT_SUPPORTED_WITH_AD_SCHEDULE = 24,
  BiddingErrorEnum_BiddingError_PAY_PER_CONVERSION_NOT_AVAILABLE_FOR_CUSTOMER = 25,
  BiddingErrorEnum_BiddingError_PAY_PER_CONVERSION_NOT_ALLOWED_WITH_TARGET_CPA = 26,
  BiddingErrorEnum_BiddingError_BIDDING_STRATEGY_NOT_ALLOWED_FOR_SEARCH_ONLY_CAMPAIGNS = 27,
  BiddingErrorEnum_BiddingError_BIDDING_STRATEGY_NOT_SUPPORTED_IN_DRAFTS_OR_EXPERIMENTS = 28,
  BiddingErrorEnum_BiddingError_BIDDING_STRATEGY_TYPE_DOES_NOT_SUPPORT_PRODUCT_TYPE_ADGROUP_CRITERION = 29,
  BiddingErrorEnum_BiddingError_BID_TOO_SMALL = 30,
  BiddingErrorEnum_BiddingError_BID_TOO_BIG = 31,
  BiddingErrorEnum_BiddingError_BID_TOO_MANY_FRACTIONAL_DIGITS = 32,
  BiddingErrorEnum_BiddingError_INVALID_DOMAIN_NAME = 33,
  BiddingErrorEnum_BiddingError_BiddingErrorEnum_BiddingError_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  BiddingErrorEnum_BiddingError_BiddingErrorEnum_BiddingError_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool BiddingErrorEnum_BiddingError_IsValid(int value);
const BiddingErrorEnum_BiddingError BiddingErrorEnum_BiddingError_BiddingError_MIN = BiddingErrorEnum_BiddingError_UNSPECIFIED;
const BiddingErrorEnum_BiddingError BiddingErrorEnum_BiddingError_BiddingError_MAX = BiddingErrorEnum_BiddingError_INVALID_DOMAIN_NAME;
const int BiddingErrorEnum_BiddingError_BiddingError_ARRAYSIZE = BiddingErrorEnum_BiddingError_BiddingError_MAX + 1;

const ::google::protobuf::EnumDescriptor* BiddingErrorEnum_BiddingError_descriptor();
inline const ::std::string& BiddingErrorEnum_BiddingError_Name(BiddingErrorEnum_BiddingError value) {
  return ::google::protobuf::internal::NameOfEnum(
    BiddingErrorEnum_BiddingError_descriptor(), value);
}
inline bool BiddingErrorEnum_BiddingError_Parse(
    const ::std::string& name, BiddingErrorEnum_BiddingError* value) {
  return ::google::protobuf::internal::ParseNamedEnum<BiddingErrorEnum_BiddingError>(
    BiddingErrorEnum_BiddingError_descriptor(), name, value);
}
// ===================================================================

class BiddingErrorEnum : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.ads.googleads.v0.errors.BiddingErrorEnum) */ {
 public:
  BiddingErrorEnum();
  virtual ~BiddingErrorEnum();

  BiddingErrorEnum(const BiddingErrorEnum& from);

  inline BiddingErrorEnum& operator=(const BiddingErrorEnum& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  BiddingErrorEnum(BiddingErrorEnum&& from) noexcept
    : BiddingErrorEnum() {
    *this = ::std::move(from);
  }

  inline BiddingErrorEnum& operator=(BiddingErrorEnum&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const BiddingErrorEnum& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const BiddingErrorEnum* internal_default_instance() {
    return reinterpret_cast<const BiddingErrorEnum*>(
               &_BiddingErrorEnum_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(BiddingErrorEnum* other);
  friend void swap(BiddingErrorEnum& a, BiddingErrorEnum& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline BiddingErrorEnum* New() const final {
    return CreateMaybeMessage<BiddingErrorEnum>(NULL);
  }

  BiddingErrorEnum* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<BiddingErrorEnum>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const BiddingErrorEnum& from);
  void MergeFrom(const BiddingErrorEnum& from);
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
  void InternalSwap(BiddingErrorEnum* other);
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

  typedef BiddingErrorEnum_BiddingError BiddingError;
  static const BiddingError UNSPECIFIED =
    BiddingErrorEnum_BiddingError_UNSPECIFIED;
  static const BiddingError UNKNOWN =
    BiddingErrorEnum_BiddingError_UNKNOWN;
  static const BiddingError BIDDING_STRATEGY_TRANSITION_NOT_ALLOWED =
    BiddingErrorEnum_BiddingError_BIDDING_STRATEGY_TRANSITION_NOT_ALLOWED;
  static const BiddingError CANNOT_ATTACH_BIDDING_STRATEGY_TO_CAMPAIGN =
    BiddingErrorEnum_BiddingError_CANNOT_ATTACH_BIDDING_STRATEGY_TO_CAMPAIGN;
  static const BiddingError INVALID_ANONYMOUS_BIDDING_STRATEGY_TYPE =
    BiddingErrorEnum_BiddingError_INVALID_ANONYMOUS_BIDDING_STRATEGY_TYPE;
  static const BiddingError INVALID_BIDDING_STRATEGY_TYPE =
    BiddingErrorEnum_BiddingError_INVALID_BIDDING_STRATEGY_TYPE;
  static const BiddingError INVALID_BID =
    BiddingErrorEnum_BiddingError_INVALID_BID;
  static const BiddingError BIDDING_STRATEGY_NOT_AVAILABLE_FOR_ACCOUNT_TYPE =
    BiddingErrorEnum_BiddingError_BIDDING_STRATEGY_NOT_AVAILABLE_FOR_ACCOUNT_TYPE;
  static const BiddingError CONVERSION_TRACKING_NOT_ENABLED =
    BiddingErrorEnum_BiddingError_CONVERSION_TRACKING_NOT_ENABLED;
  static const BiddingError NOT_ENOUGH_CONVERSIONS =
    BiddingErrorEnum_BiddingError_NOT_ENOUGH_CONVERSIONS;
  static const BiddingError CANNOT_CREATE_CAMPAIGN_WITH_BIDDING_STRATEGY =
    BiddingErrorEnum_BiddingError_CANNOT_CREATE_CAMPAIGN_WITH_BIDDING_STRATEGY;
  static const BiddingError CANNOT_TARGET_CONTENT_NETWORK_ONLY_WITH_CAMPAIGN_LEVEL_POP_BIDDING_STRATEGY =
    BiddingErrorEnum_BiddingError_CANNOT_TARGET_CONTENT_NETWORK_ONLY_WITH_CAMPAIGN_LEVEL_POP_BIDDING_STRATEGY;
  static const BiddingError BIDDING_STRATEGY_NOT_SUPPORTED_WITH_AD_SCHEDULE =
    BiddingErrorEnum_BiddingError_BIDDING_STRATEGY_NOT_SUPPORTED_WITH_AD_SCHEDULE;
  static const BiddingError PAY_PER_CONVERSION_NOT_AVAILABLE_FOR_CUSTOMER =
    BiddingErrorEnum_BiddingError_PAY_PER_CONVERSION_NOT_AVAILABLE_FOR_CUSTOMER;
  static const BiddingError PAY_PER_CONVERSION_NOT_ALLOWED_WITH_TARGET_CPA =
    BiddingErrorEnum_BiddingError_PAY_PER_CONVERSION_NOT_ALLOWED_WITH_TARGET_CPA;
  static const BiddingError BIDDING_STRATEGY_NOT_ALLOWED_FOR_SEARCH_ONLY_CAMPAIGNS =
    BiddingErrorEnum_BiddingError_BIDDING_STRATEGY_NOT_ALLOWED_FOR_SEARCH_ONLY_CAMPAIGNS;
  static const BiddingError BIDDING_STRATEGY_NOT_SUPPORTED_IN_DRAFTS_OR_EXPERIMENTS =
    BiddingErrorEnum_BiddingError_BIDDING_STRATEGY_NOT_SUPPORTED_IN_DRAFTS_OR_EXPERIMENTS;
  static const BiddingError BIDDING_STRATEGY_TYPE_DOES_NOT_SUPPORT_PRODUCT_TYPE_ADGROUP_CRITERION =
    BiddingErrorEnum_BiddingError_BIDDING_STRATEGY_TYPE_DOES_NOT_SUPPORT_PRODUCT_TYPE_ADGROUP_CRITERION;
  static const BiddingError BID_TOO_SMALL =
    BiddingErrorEnum_BiddingError_BID_TOO_SMALL;
  static const BiddingError BID_TOO_BIG =
    BiddingErrorEnum_BiddingError_BID_TOO_BIG;
  static const BiddingError BID_TOO_MANY_FRACTIONAL_DIGITS =
    BiddingErrorEnum_BiddingError_BID_TOO_MANY_FRACTIONAL_DIGITS;
  static const BiddingError INVALID_DOMAIN_NAME =
    BiddingErrorEnum_BiddingError_INVALID_DOMAIN_NAME;
  static inline bool BiddingError_IsValid(int value) {
    return BiddingErrorEnum_BiddingError_IsValid(value);
  }
  static const BiddingError BiddingError_MIN =
    BiddingErrorEnum_BiddingError_BiddingError_MIN;
  static const BiddingError BiddingError_MAX =
    BiddingErrorEnum_BiddingError_BiddingError_MAX;
  static const int BiddingError_ARRAYSIZE =
    BiddingErrorEnum_BiddingError_BiddingError_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  BiddingError_descriptor() {
    return BiddingErrorEnum_BiddingError_descriptor();
  }
  static inline const ::std::string& BiddingError_Name(BiddingError value) {
    return BiddingErrorEnum_BiddingError_Name(value);
  }
  static inline bool BiddingError_Parse(const ::std::string& name,
      BiddingError* value) {
    return BiddingErrorEnum_BiddingError_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:google.ads.googleads.v0.errors.BiddingErrorEnum)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_google_2fads_2fgoogleads_2fv0_2ferrors_2fbidding_5ferror_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// BiddingErrorEnum

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

template <> struct is_proto_enum< ::google::ads::googleads::v0::errors::BiddingErrorEnum_BiddingError> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::google::ads::googleads::v0::errors::BiddingErrorEnum_BiddingError>() {
  return ::google::ads::googleads::v0::errors::BiddingErrorEnum_BiddingError_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_google_2fads_2fgoogleads_2fv0_2ferrors_2fbidding_5ferror_2eproto
