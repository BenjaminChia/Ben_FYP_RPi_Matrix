// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/ads/googleads/v0/errors/criterion_error.proto

#ifndef PROTOBUF_INCLUDED_google_2fads_2fgoogleads_2fv0_2ferrors_2fcriterion_5ferror_2eproto
#define PROTOBUF_INCLUDED_google_2fads_2fgoogleads_2fv0_2ferrors_2fcriterion_5ferror_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_protobuf_google_2fads_2fgoogleads_2fv0_2ferrors_2fcriterion_5ferror_2eproto 

namespace protobuf_google_2fads_2fgoogleads_2fv0_2ferrors_2fcriterion_5ferror_2eproto {
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
}  // namespace protobuf_google_2fads_2fgoogleads_2fv0_2ferrors_2fcriterion_5ferror_2eproto
namespace google {
namespace ads {
namespace googleads {
namespace v0 {
namespace errors {
class CriterionErrorEnum;
class CriterionErrorEnumDefaultTypeInternal;
extern CriterionErrorEnumDefaultTypeInternal _CriterionErrorEnum_default_instance_;
}  // namespace errors
}  // namespace v0
}  // namespace googleads
}  // namespace ads
}  // namespace google
namespace google {
namespace protobuf {
template<> ::google::ads::googleads::v0::errors::CriterionErrorEnum* Arena::CreateMaybeMessage<::google::ads::googleads::v0::errors::CriterionErrorEnum>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace google {
namespace ads {
namespace googleads {
namespace v0 {
namespace errors {

enum CriterionErrorEnum_CriterionError {
  CriterionErrorEnum_CriterionError_UNSPECIFIED = 0,
  CriterionErrorEnum_CriterionError_UNKNOWN = 1,
  CriterionErrorEnum_CriterionError_CONCRETE_TYPE_REQUIRED = 2,
  CriterionErrorEnum_CriterionError_INVALID_EXCLUDED_CATEGORY = 3,
  CriterionErrorEnum_CriterionError_INVALID_KEYWORD_TEXT = 4,
  CriterionErrorEnum_CriterionError_KEYWORD_TEXT_TOO_LONG = 5,
  CriterionErrorEnum_CriterionError_KEYWORD_HAS_TOO_MANY_WORDS = 6,
  CriterionErrorEnum_CriterionError_KEYWORD_HAS_INVALID_CHARS = 7,
  CriterionErrorEnum_CriterionError_INVALID_PLACEMENT_URL = 8,
  CriterionErrorEnum_CriterionError_INVALID_USER_LIST = 9,
  CriterionErrorEnum_CriterionError_INVALID_USER_INTEREST = 10,
  CriterionErrorEnum_CriterionError_INVALID_FORMAT_FOR_PLACEMENT_URL = 11,
  CriterionErrorEnum_CriterionError_PLACEMENT_URL_IS_TOO_LONG = 12,
  CriterionErrorEnum_CriterionError_PLACEMENT_URL_HAS_ILLEGAL_CHAR = 13,
  CriterionErrorEnum_CriterionError_PLACEMENT_URL_HAS_MULTIPLE_SITES_IN_LINE = 14,
  CriterionErrorEnum_CriterionError_PLACEMENT_IS_NOT_AVAILABLE_FOR_TARGETING_OR_EXCLUSION = 15,
  CriterionErrorEnum_CriterionError_INVALID_VERTICAL_PATH = 16,
  CriterionErrorEnum_CriterionError_INVALID_YOUTUBE_CHANNEL_ID = 17,
  CriterionErrorEnum_CriterionError_INVALID_YOUTUBE_VIDEO_ID = 18,
  CriterionErrorEnum_CriterionError_YOUTUBE_VERTICAL_CHANNEL_DEPRECATED = 19,
  CriterionErrorEnum_CriterionError_YOUTUBE_DEMOGRAPHIC_CHANNEL_DEPRECATED = 20,
  CriterionErrorEnum_CriterionError_YOUTUBE_URL_UNSUPPORTED = 21,
  CriterionErrorEnum_CriterionError_CANNOT_EXCLUDE_CRITERIA_TYPE = 22,
  CriterionErrorEnum_CriterionError_CANNOT_ADD_CRITERIA_TYPE = 23,
  CriterionErrorEnum_CriterionError_INVALID_PRODUCT_FILTER = 24,
  CriterionErrorEnum_CriterionError_PRODUCT_FILTER_TOO_LONG = 25,
  CriterionErrorEnum_CriterionError_CANNOT_EXCLUDE_SIMILAR_USER_LIST = 26,
  CriterionErrorEnum_CriterionError_CANNOT_ADD_CLOSED_USER_LIST = 27,
  CriterionErrorEnum_CriterionError_CANNOT_ADD_DISPLAY_ONLY_LISTS_TO_SEARCH_ONLY_CAMPAIGNS = 28,
  CriterionErrorEnum_CriterionError_CANNOT_ADD_DISPLAY_ONLY_LISTS_TO_SEARCH_CAMPAIGNS = 29,
  CriterionErrorEnum_CriterionError_CANNOT_ADD_DISPLAY_ONLY_LISTS_TO_SHOPPING_CAMPAIGNS = 30,
  CriterionErrorEnum_CriterionError_CANNOT_ADD_USER_INTERESTS_TO_SEARCH_CAMPAIGNS = 31,
  CriterionErrorEnum_CriterionError_CANNOT_SET_BIDS_ON_CRITERION_TYPE_IN_SEARCH_CAMPAIGNS = 32,
  CriterionErrorEnum_CriterionError_CANNOT_ADD_URLS_TO_CRITERION_TYPE_FOR_CAMPAIGN_TYPE = 33,
  CriterionErrorEnum_CriterionError_INVALID_IP_ADDRESS = 34,
  CriterionErrorEnum_CriterionError_INVALID_IP_FORMAT = 35,
  CriterionErrorEnum_CriterionError_INVALID_MOBILE_APP = 36,
  CriterionErrorEnum_CriterionError_INVALID_MOBILE_APP_CATEGORY = 37,
  CriterionErrorEnum_CriterionError_INVALID_CRITERION_ID = 38,
  CriterionErrorEnum_CriterionError_CANNOT_TARGET_CRITERION = 39,
  CriterionErrorEnum_CriterionError_CANNOT_TARGET_OBSOLETE_CRITERION = 40,
  CriterionErrorEnum_CriterionError_CRITERION_ID_AND_TYPE_MISMATCH = 41,
  CriterionErrorEnum_CriterionError_INVALID_PROXIMITY_RADIUS = 42,
  CriterionErrorEnum_CriterionError_INVALID_PROXIMITY_RADIUS_UNITS = 43,
  CriterionErrorEnum_CriterionError_INVALID_STREETADDRESS_LENGTH = 44,
  CriterionErrorEnum_CriterionError_INVALID_CITYNAME_LENGTH = 45,
  CriterionErrorEnum_CriterionError_INVALID_REGIONCODE_LENGTH = 46,
  CriterionErrorEnum_CriterionError_INVALID_REGIONNAME_LENGTH = 47,
  CriterionErrorEnum_CriterionError_INVALID_POSTALCODE_LENGTH = 48,
  CriterionErrorEnum_CriterionError_INVALID_COUNTRY_CODE = 49,
  CriterionErrorEnum_CriterionError_INVALID_LATITUDE = 50,
  CriterionErrorEnum_CriterionError_INVALID_LONGITUDE = 51,
  CriterionErrorEnum_CriterionError_PROXIMITY_GEOPOINT_AND_ADDRESS_BOTH_CANNOT_BE_NULL = 52,
  CriterionErrorEnum_CriterionError_INVALID_PROXIMITY_ADDRESS = 53,
  CriterionErrorEnum_CriterionError_INVALID_USER_DOMAIN_NAME = 54,
  CriterionErrorEnum_CriterionError_CRITERION_PARAMETER_TOO_LONG = 55,
  CriterionErrorEnum_CriterionError_AD_SCHEDULE_TIME_INTERVALS_OVERLAP = 56,
  CriterionErrorEnum_CriterionError_AD_SCHEDULE_INTERVAL_CANNOT_SPAN_MULTIPLE_DAYS = 57,
  CriterionErrorEnum_CriterionError_AD_SCHEDULE_INVALID_TIME_INTERVAL = 58,
  CriterionErrorEnum_CriterionError_AD_SCHEDULE_EXCEEDED_INTERVALS_PER_DAY_LIMIT = 59,
  CriterionErrorEnum_CriterionError_AD_SCHEDULE_CRITERION_ID_MISMATCHING_FIELDS = 60,
  CriterionErrorEnum_CriterionError_CANNOT_BID_MODIFY_CRITERION_TYPE = 61,
  CriterionErrorEnum_CriterionError_CANNOT_BID_MODIFY_CRITERION_CAMPAIGN_OPTED_OUT = 62,
  CriterionErrorEnum_CriterionError_CANNOT_BID_MODIFY_NEGATIVE_CRITERION = 63,
  CriterionErrorEnum_CriterionError_BID_MODIFIER_ALREADY_EXISTS = 64,
  CriterionErrorEnum_CriterionError_FEED_ID_NOT_ALLOWED = 65,
  CriterionErrorEnum_CriterionError_ACCOUNT_INELIGIBLE_FOR_CRITERIA_TYPE = 66,
  CriterionErrorEnum_CriterionError_CRITERIA_TYPE_INVALID_FOR_BIDDING_STRATEGY = 67,
  CriterionErrorEnum_CriterionError_CANNOT_EXCLUDE_CRITERION = 68,
  CriterionErrorEnum_CriterionError_CANNOT_REMOVE_CRITERION = 69,
  CriterionErrorEnum_CriterionError_PRODUCT_SCOPE_TOO_LONG = 70,
  CriterionErrorEnum_CriterionError_PRODUCT_SCOPE_TOO_MANY_DIMENSIONS = 71,
  CriterionErrorEnum_CriterionError_PRODUCT_PARTITION_TOO_LONG = 72,
  CriterionErrorEnum_CriterionError_PRODUCT_PARTITION_TOO_MANY_DIMENSIONS = 73,
  CriterionErrorEnum_CriterionError_INVALID_PRODUCT_DIMENSION = 74,
  CriterionErrorEnum_CriterionError_INVALID_PRODUCT_DIMENSION_TYPE = 75,
  CriterionErrorEnum_CriterionError_INVALID_PRODUCT_BIDDING_CATEGORY = 76,
  CriterionErrorEnum_CriterionError_MISSING_SHOPPING_SETTING = 77,
  CriterionErrorEnum_CriterionError_INVALID_MATCHING_FUNCTION = 78,
  CriterionErrorEnum_CriterionError_LOCATION_FILTER_NOT_ALLOWED = 79,
  CriterionErrorEnum_CriterionError_LOCATION_FILTER_INVALID = 80,
  CriterionErrorEnum_CriterionError_CANNOT_ATTACH_CRITERIA_AT_CAMPAIGN_AND_ADGROUP = 81,
  CriterionErrorEnum_CriterionError_HOTEL_LENGTH_OF_STAY_OVERLAPS_WITH_EXISTING_CRITERION = 82,
  CriterionErrorEnum_CriterionError_HOTEL_ADVANCE_BOOKING_WINDOW_OVERLAPS_WITH_EXISTING_CRITERION = 83,
  CriterionErrorEnum_CriterionError_FIELD_INCOMPATIBLE_WITH_NEGATIVE_TARGETING = 84,
  CriterionErrorEnum_CriterionError_CriterionErrorEnum_CriterionError_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  CriterionErrorEnum_CriterionError_CriterionErrorEnum_CriterionError_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool CriterionErrorEnum_CriterionError_IsValid(int value);
const CriterionErrorEnum_CriterionError CriterionErrorEnum_CriterionError_CriterionError_MIN = CriterionErrorEnum_CriterionError_UNSPECIFIED;
const CriterionErrorEnum_CriterionError CriterionErrorEnum_CriterionError_CriterionError_MAX = CriterionErrorEnum_CriterionError_FIELD_INCOMPATIBLE_WITH_NEGATIVE_TARGETING;
const int CriterionErrorEnum_CriterionError_CriterionError_ARRAYSIZE = CriterionErrorEnum_CriterionError_CriterionError_MAX + 1;

const ::google::protobuf::EnumDescriptor* CriterionErrorEnum_CriterionError_descriptor();
inline const ::std::string& CriterionErrorEnum_CriterionError_Name(CriterionErrorEnum_CriterionError value) {
  return ::google::protobuf::internal::NameOfEnum(
    CriterionErrorEnum_CriterionError_descriptor(), value);
}
inline bool CriterionErrorEnum_CriterionError_Parse(
    const ::std::string& name, CriterionErrorEnum_CriterionError* value) {
  return ::google::protobuf::internal::ParseNamedEnum<CriterionErrorEnum_CriterionError>(
    CriterionErrorEnum_CriterionError_descriptor(), name, value);
}
// ===================================================================

class CriterionErrorEnum : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.ads.googleads.v0.errors.CriterionErrorEnum) */ {
 public:
  CriterionErrorEnum();
  virtual ~CriterionErrorEnum();

  CriterionErrorEnum(const CriterionErrorEnum& from);

  inline CriterionErrorEnum& operator=(const CriterionErrorEnum& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  CriterionErrorEnum(CriterionErrorEnum&& from) noexcept
    : CriterionErrorEnum() {
    *this = ::std::move(from);
  }

  inline CriterionErrorEnum& operator=(CriterionErrorEnum&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const CriterionErrorEnum& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const CriterionErrorEnum* internal_default_instance() {
    return reinterpret_cast<const CriterionErrorEnum*>(
               &_CriterionErrorEnum_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(CriterionErrorEnum* other);
  friend void swap(CriterionErrorEnum& a, CriterionErrorEnum& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline CriterionErrorEnum* New() const final {
    return CreateMaybeMessage<CriterionErrorEnum>(NULL);
  }

  CriterionErrorEnum* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<CriterionErrorEnum>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const CriterionErrorEnum& from);
  void MergeFrom(const CriterionErrorEnum& from);
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
  void InternalSwap(CriterionErrorEnum* other);
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

  typedef CriterionErrorEnum_CriterionError CriterionError;
  static const CriterionError UNSPECIFIED =
    CriterionErrorEnum_CriterionError_UNSPECIFIED;
  static const CriterionError UNKNOWN =
    CriterionErrorEnum_CriterionError_UNKNOWN;
  static const CriterionError CONCRETE_TYPE_REQUIRED =
    CriterionErrorEnum_CriterionError_CONCRETE_TYPE_REQUIRED;
  static const CriterionError INVALID_EXCLUDED_CATEGORY =
    CriterionErrorEnum_CriterionError_INVALID_EXCLUDED_CATEGORY;
  static const CriterionError INVALID_KEYWORD_TEXT =
    CriterionErrorEnum_CriterionError_INVALID_KEYWORD_TEXT;
  static const CriterionError KEYWORD_TEXT_TOO_LONG =
    CriterionErrorEnum_CriterionError_KEYWORD_TEXT_TOO_LONG;
  static const CriterionError KEYWORD_HAS_TOO_MANY_WORDS =
    CriterionErrorEnum_CriterionError_KEYWORD_HAS_TOO_MANY_WORDS;
  static const CriterionError KEYWORD_HAS_INVALID_CHARS =
    CriterionErrorEnum_CriterionError_KEYWORD_HAS_INVALID_CHARS;
  static const CriterionError INVALID_PLACEMENT_URL =
    CriterionErrorEnum_CriterionError_INVALID_PLACEMENT_URL;
  static const CriterionError INVALID_USER_LIST =
    CriterionErrorEnum_CriterionError_INVALID_USER_LIST;
  static const CriterionError INVALID_USER_INTEREST =
    CriterionErrorEnum_CriterionError_INVALID_USER_INTEREST;
  static const CriterionError INVALID_FORMAT_FOR_PLACEMENT_URL =
    CriterionErrorEnum_CriterionError_INVALID_FORMAT_FOR_PLACEMENT_URL;
  static const CriterionError PLACEMENT_URL_IS_TOO_LONG =
    CriterionErrorEnum_CriterionError_PLACEMENT_URL_IS_TOO_LONG;
  static const CriterionError PLACEMENT_URL_HAS_ILLEGAL_CHAR =
    CriterionErrorEnum_CriterionError_PLACEMENT_URL_HAS_ILLEGAL_CHAR;
  static const CriterionError PLACEMENT_URL_HAS_MULTIPLE_SITES_IN_LINE =
    CriterionErrorEnum_CriterionError_PLACEMENT_URL_HAS_MULTIPLE_SITES_IN_LINE;
  static const CriterionError PLACEMENT_IS_NOT_AVAILABLE_FOR_TARGETING_OR_EXCLUSION =
    CriterionErrorEnum_CriterionError_PLACEMENT_IS_NOT_AVAILABLE_FOR_TARGETING_OR_EXCLUSION;
  static const CriterionError INVALID_VERTICAL_PATH =
    CriterionErrorEnum_CriterionError_INVALID_VERTICAL_PATH;
  static const CriterionError INVALID_YOUTUBE_CHANNEL_ID =
    CriterionErrorEnum_CriterionError_INVALID_YOUTUBE_CHANNEL_ID;
  static const CriterionError INVALID_YOUTUBE_VIDEO_ID =
    CriterionErrorEnum_CriterionError_INVALID_YOUTUBE_VIDEO_ID;
  static const CriterionError YOUTUBE_VERTICAL_CHANNEL_DEPRECATED =
    CriterionErrorEnum_CriterionError_YOUTUBE_VERTICAL_CHANNEL_DEPRECATED;
  static const CriterionError YOUTUBE_DEMOGRAPHIC_CHANNEL_DEPRECATED =
    CriterionErrorEnum_CriterionError_YOUTUBE_DEMOGRAPHIC_CHANNEL_DEPRECATED;
  static const CriterionError YOUTUBE_URL_UNSUPPORTED =
    CriterionErrorEnum_CriterionError_YOUTUBE_URL_UNSUPPORTED;
  static const CriterionError CANNOT_EXCLUDE_CRITERIA_TYPE =
    CriterionErrorEnum_CriterionError_CANNOT_EXCLUDE_CRITERIA_TYPE;
  static const CriterionError CANNOT_ADD_CRITERIA_TYPE =
    CriterionErrorEnum_CriterionError_CANNOT_ADD_CRITERIA_TYPE;
  static const CriterionError INVALID_PRODUCT_FILTER =
    CriterionErrorEnum_CriterionError_INVALID_PRODUCT_FILTER;
  static const CriterionError PRODUCT_FILTER_TOO_LONG =
    CriterionErrorEnum_CriterionError_PRODUCT_FILTER_TOO_LONG;
  static const CriterionError CANNOT_EXCLUDE_SIMILAR_USER_LIST =
    CriterionErrorEnum_CriterionError_CANNOT_EXCLUDE_SIMILAR_USER_LIST;
  static const CriterionError CANNOT_ADD_CLOSED_USER_LIST =
    CriterionErrorEnum_CriterionError_CANNOT_ADD_CLOSED_USER_LIST;
  static const CriterionError CANNOT_ADD_DISPLAY_ONLY_LISTS_TO_SEARCH_ONLY_CAMPAIGNS =
    CriterionErrorEnum_CriterionError_CANNOT_ADD_DISPLAY_ONLY_LISTS_TO_SEARCH_ONLY_CAMPAIGNS;
  static const CriterionError CANNOT_ADD_DISPLAY_ONLY_LISTS_TO_SEARCH_CAMPAIGNS =
    CriterionErrorEnum_CriterionError_CANNOT_ADD_DISPLAY_ONLY_LISTS_TO_SEARCH_CAMPAIGNS;
  static const CriterionError CANNOT_ADD_DISPLAY_ONLY_LISTS_TO_SHOPPING_CAMPAIGNS =
    CriterionErrorEnum_CriterionError_CANNOT_ADD_DISPLAY_ONLY_LISTS_TO_SHOPPING_CAMPAIGNS;
  static const CriterionError CANNOT_ADD_USER_INTERESTS_TO_SEARCH_CAMPAIGNS =
    CriterionErrorEnum_CriterionError_CANNOT_ADD_USER_INTERESTS_TO_SEARCH_CAMPAIGNS;
  static const CriterionError CANNOT_SET_BIDS_ON_CRITERION_TYPE_IN_SEARCH_CAMPAIGNS =
    CriterionErrorEnum_CriterionError_CANNOT_SET_BIDS_ON_CRITERION_TYPE_IN_SEARCH_CAMPAIGNS;
  static const CriterionError CANNOT_ADD_URLS_TO_CRITERION_TYPE_FOR_CAMPAIGN_TYPE =
    CriterionErrorEnum_CriterionError_CANNOT_ADD_URLS_TO_CRITERION_TYPE_FOR_CAMPAIGN_TYPE;
  static const CriterionError INVALID_IP_ADDRESS =
    CriterionErrorEnum_CriterionError_INVALID_IP_ADDRESS;
  static const CriterionError INVALID_IP_FORMAT =
    CriterionErrorEnum_CriterionError_INVALID_IP_FORMAT;
  static const CriterionError INVALID_MOBILE_APP =
    CriterionErrorEnum_CriterionError_INVALID_MOBILE_APP;
  static const CriterionError INVALID_MOBILE_APP_CATEGORY =
    CriterionErrorEnum_CriterionError_INVALID_MOBILE_APP_CATEGORY;
  static const CriterionError INVALID_CRITERION_ID =
    CriterionErrorEnum_CriterionError_INVALID_CRITERION_ID;
  static const CriterionError CANNOT_TARGET_CRITERION =
    CriterionErrorEnum_CriterionError_CANNOT_TARGET_CRITERION;
  static const CriterionError CANNOT_TARGET_OBSOLETE_CRITERION =
    CriterionErrorEnum_CriterionError_CANNOT_TARGET_OBSOLETE_CRITERION;
  static const CriterionError CRITERION_ID_AND_TYPE_MISMATCH =
    CriterionErrorEnum_CriterionError_CRITERION_ID_AND_TYPE_MISMATCH;
  static const CriterionError INVALID_PROXIMITY_RADIUS =
    CriterionErrorEnum_CriterionError_INVALID_PROXIMITY_RADIUS;
  static const CriterionError INVALID_PROXIMITY_RADIUS_UNITS =
    CriterionErrorEnum_CriterionError_INVALID_PROXIMITY_RADIUS_UNITS;
  static const CriterionError INVALID_STREETADDRESS_LENGTH =
    CriterionErrorEnum_CriterionError_INVALID_STREETADDRESS_LENGTH;
  static const CriterionError INVALID_CITYNAME_LENGTH =
    CriterionErrorEnum_CriterionError_INVALID_CITYNAME_LENGTH;
  static const CriterionError INVALID_REGIONCODE_LENGTH =
    CriterionErrorEnum_CriterionError_INVALID_REGIONCODE_LENGTH;
  static const CriterionError INVALID_REGIONNAME_LENGTH =
    CriterionErrorEnum_CriterionError_INVALID_REGIONNAME_LENGTH;
  static const CriterionError INVALID_POSTALCODE_LENGTH =
    CriterionErrorEnum_CriterionError_INVALID_POSTALCODE_LENGTH;
  static const CriterionError INVALID_COUNTRY_CODE =
    CriterionErrorEnum_CriterionError_INVALID_COUNTRY_CODE;
  static const CriterionError INVALID_LATITUDE =
    CriterionErrorEnum_CriterionError_INVALID_LATITUDE;
  static const CriterionError INVALID_LONGITUDE =
    CriterionErrorEnum_CriterionError_INVALID_LONGITUDE;
  static const CriterionError PROXIMITY_GEOPOINT_AND_ADDRESS_BOTH_CANNOT_BE_NULL =
    CriterionErrorEnum_CriterionError_PROXIMITY_GEOPOINT_AND_ADDRESS_BOTH_CANNOT_BE_NULL;
  static const CriterionError INVALID_PROXIMITY_ADDRESS =
    CriterionErrorEnum_CriterionError_INVALID_PROXIMITY_ADDRESS;
  static const CriterionError INVALID_USER_DOMAIN_NAME =
    CriterionErrorEnum_CriterionError_INVALID_USER_DOMAIN_NAME;
  static const CriterionError CRITERION_PARAMETER_TOO_LONG =
    CriterionErrorEnum_CriterionError_CRITERION_PARAMETER_TOO_LONG;
  static const CriterionError AD_SCHEDULE_TIME_INTERVALS_OVERLAP =
    CriterionErrorEnum_CriterionError_AD_SCHEDULE_TIME_INTERVALS_OVERLAP;
  static const CriterionError AD_SCHEDULE_INTERVAL_CANNOT_SPAN_MULTIPLE_DAYS =
    CriterionErrorEnum_CriterionError_AD_SCHEDULE_INTERVAL_CANNOT_SPAN_MULTIPLE_DAYS;
  static const CriterionError AD_SCHEDULE_INVALID_TIME_INTERVAL =
    CriterionErrorEnum_CriterionError_AD_SCHEDULE_INVALID_TIME_INTERVAL;
  static const CriterionError AD_SCHEDULE_EXCEEDED_INTERVALS_PER_DAY_LIMIT =
    CriterionErrorEnum_CriterionError_AD_SCHEDULE_EXCEEDED_INTERVALS_PER_DAY_LIMIT;
  static const CriterionError AD_SCHEDULE_CRITERION_ID_MISMATCHING_FIELDS =
    CriterionErrorEnum_CriterionError_AD_SCHEDULE_CRITERION_ID_MISMATCHING_FIELDS;
  static const CriterionError CANNOT_BID_MODIFY_CRITERION_TYPE =
    CriterionErrorEnum_CriterionError_CANNOT_BID_MODIFY_CRITERION_TYPE;
  static const CriterionError CANNOT_BID_MODIFY_CRITERION_CAMPAIGN_OPTED_OUT =
    CriterionErrorEnum_CriterionError_CANNOT_BID_MODIFY_CRITERION_CAMPAIGN_OPTED_OUT;
  static const CriterionError CANNOT_BID_MODIFY_NEGATIVE_CRITERION =
    CriterionErrorEnum_CriterionError_CANNOT_BID_MODIFY_NEGATIVE_CRITERION;
  static const CriterionError BID_MODIFIER_ALREADY_EXISTS =
    CriterionErrorEnum_CriterionError_BID_MODIFIER_ALREADY_EXISTS;
  static const CriterionError FEED_ID_NOT_ALLOWED =
    CriterionErrorEnum_CriterionError_FEED_ID_NOT_ALLOWED;
  static const CriterionError ACCOUNT_INELIGIBLE_FOR_CRITERIA_TYPE =
    CriterionErrorEnum_CriterionError_ACCOUNT_INELIGIBLE_FOR_CRITERIA_TYPE;
  static const CriterionError CRITERIA_TYPE_INVALID_FOR_BIDDING_STRATEGY =
    CriterionErrorEnum_CriterionError_CRITERIA_TYPE_INVALID_FOR_BIDDING_STRATEGY;
  static const CriterionError CANNOT_EXCLUDE_CRITERION =
    CriterionErrorEnum_CriterionError_CANNOT_EXCLUDE_CRITERION;
  static const CriterionError CANNOT_REMOVE_CRITERION =
    CriterionErrorEnum_CriterionError_CANNOT_REMOVE_CRITERION;
  static const CriterionError PRODUCT_SCOPE_TOO_LONG =
    CriterionErrorEnum_CriterionError_PRODUCT_SCOPE_TOO_LONG;
  static const CriterionError PRODUCT_SCOPE_TOO_MANY_DIMENSIONS =
    CriterionErrorEnum_CriterionError_PRODUCT_SCOPE_TOO_MANY_DIMENSIONS;
  static const CriterionError PRODUCT_PARTITION_TOO_LONG =
    CriterionErrorEnum_CriterionError_PRODUCT_PARTITION_TOO_LONG;
  static const CriterionError PRODUCT_PARTITION_TOO_MANY_DIMENSIONS =
    CriterionErrorEnum_CriterionError_PRODUCT_PARTITION_TOO_MANY_DIMENSIONS;
  static const CriterionError INVALID_PRODUCT_DIMENSION =
    CriterionErrorEnum_CriterionError_INVALID_PRODUCT_DIMENSION;
  static const CriterionError INVALID_PRODUCT_DIMENSION_TYPE =
    CriterionErrorEnum_CriterionError_INVALID_PRODUCT_DIMENSION_TYPE;
  static const CriterionError INVALID_PRODUCT_BIDDING_CATEGORY =
    CriterionErrorEnum_CriterionError_INVALID_PRODUCT_BIDDING_CATEGORY;
  static const CriterionError MISSING_SHOPPING_SETTING =
    CriterionErrorEnum_CriterionError_MISSING_SHOPPING_SETTING;
  static const CriterionError INVALID_MATCHING_FUNCTION =
    CriterionErrorEnum_CriterionError_INVALID_MATCHING_FUNCTION;
  static const CriterionError LOCATION_FILTER_NOT_ALLOWED =
    CriterionErrorEnum_CriterionError_LOCATION_FILTER_NOT_ALLOWED;
  static const CriterionError LOCATION_FILTER_INVALID =
    CriterionErrorEnum_CriterionError_LOCATION_FILTER_INVALID;
  static const CriterionError CANNOT_ATTACH_CRITERIA_AT_CAMPAIGN_AND_ADGROUP =
    CriterionErrorEnum_CriterionError_CANNOT_ATTACH_CRITERIA_AT_CAMPAIGN_AND_ADGROUP;
  static const CriterionError HOTEL_LENGTH_OF_STAY_OVERLAPS_WITH_EXISTING_CRITERION =
    CriterionErrorEnum_CriterionError_HOTEL_LENGTH_OF_STAY_OVERLAPS_WITH_EXISTING_CRITERION;
  static const CriterionError HOTEL_ADVANCE_BOOKING_WINDOW_OVERLAPS_WITH_EXISTING_CRITERION =
    CriterionErrorEnum_CriterionError_HOTEL_ADVANCE_BOOKING_WINDOW_OVERLAPS_WITH_EXISTING_CRITERION;
  static const CriterionError FIELD_INCOMPATIBLE_WITH_NEGATIVE_TARGETING =
    CriterionErrorEnum_CriterionError_FIELD_INCOMPATIBLE_WITH_NEGATIVE_TARGETING;
  static inline bool CriterionError_IsValid(int value) {
    return CriterionErrorEnum_CriterionError_IsValid(value);
  }
  static const CriterionError CriterionError_MIN =
    CriterionErrorEnum_CriterionError_CriterionError_MIN;
  static const CriterionError CriterionError_MAX =
    CriterionErrorEnum_CriterionError_CriterionError_MAX;
  static const int CriterionError_ARRAYSIZE =
    CriterionErrorEnum_CriterionError_CriterionError_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  CriterionError_descriptor() {
    return CriterionErrorEnum_CriterionError_descriptor();
  }
  static inline const ::std::string& CriterionError_Name(CriterionError value) {
    return CriterionErrorEnum_CriterionError_Name(value);
  }
  static inline bool CriterionError_Parse(const ::std::string& name,
      CriterionError* value) {
    return CriterionErrorEnum_CriterionError_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:google.ads.googleads.v0.errors.CriterionErrorEnum)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_google_2fads_2fgoogleads_2fv0_2ferrors_2fcriterion_5ferror_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// CriterionErrorEnum

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

template <> struct is_proto_enum< ::google::ads::googleads::v0::errors::CriterionErrorEnum_CriterionError> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::google::ads::googleads::v0::errors::CriterionErrorEnum_CriterionError>() {
  return ::google::ads::googleads::v0::errors::CriterionErrorEnum_CriterionError_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_google_2fads_2fgoogleads_2fv0_2ferrors_2fcriterion_5ferror_2eproto
