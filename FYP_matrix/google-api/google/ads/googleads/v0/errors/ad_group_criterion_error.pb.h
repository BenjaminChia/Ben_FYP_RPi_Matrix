// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/ads/googleads/v0/errors/ad_group_criterion_error.proto

#ifndef PROTOBUF_INCLUDED_google_2fads_2fgoogleads_2fv0_2ferrors_2fad_5fgroup_5fcriterion_5ferror_2eproto
#define PROTOBUF_INCLUDED_google_2fads_2fgoogleads_2fv0_2ferrors_2fad_5fgroup_5fcriterion_5ferror_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_protobuf_google_2fads_2fgoogleads_2fv0_2ferrors_2fad_5fgroup_5fcriterion_5ferror_2eproto 

namespace protobuf_google_2fads_2fgoogleads_2fv0_2ferrors_2fad_5fgroup_5fcriterion_5ferror_2eproto {
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
}  // namespace protobuf_google_2fads_2fgoogleads_2fv0_2ferrors_2fad_5fgroup_5fcriterion_5ferror_2eproto
namespace google {
namespace ads {
namespace googleads {
namespace v0 {
namespace errors {
class AdGroupCriterionErrorEnum;
class AdGroupCriterionErrorEnumDefaultTypeInternal;
extern AdGroupCriterionErrorEnumDefaultTypeInternal _AdGroupCriterionErrorEnum_default_instance_;
}  // namespace errors
}  // namespace v0
}  // namespace googleads
}  // namespace ads
}  // namespace google
namespace google {
namespace protobuf {
template<> ::google::ads::googleads::v0::errors::AdGroupCriterionErrorEnum* Arena::CreateMaybeMessage<::google::ads::googleads::v0::errors::AdGroupCriterionErrorEnum>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace google {
namespace ads {
namespace googleads {
namespace v0 {
namespace errors {

enum AdGroupCriterionErrorEnum_AdGroupCriterionError {
  AdGroupCriterionErrorEnum_AdGroupCriterionError_UNSPECIFIED = 0,
  AdGroupCriterionErrorEnum_AdGroupCriterionError_UNKNOWN = 1,
  AdGroupCriterionErrorEnum_AdGroupCriterionError_AD_GROUP_CRITERION_LABEL_DOES_NOT_EXIST = 2,
  AdGroupCriterionErrorEnum_AdGroupCriterionError_AD_GROUP_CRITERION_LABEL_ALREADY_EXISTS = 3,
  AdGroupCriterionErrorEnum_AdGroupCriterionError_CANNOT_ADD_LABEL_TO_NEGATIVE_CRITERION = 4,
  AdGroupCriterionErrorEnum_AdGroupCriterionError_TOO_MANY_OPERATIONS = 5,
  AdGroupCriterionErrorEnum_AdGroupCriterionError_CANT_UPDATE_NEGATIVE = 6,
  AdGroupCriterionErrorEnum_AdGroupCriterionError_CONCRETE_TYPE_REQUIRED = 7,
  AdGroupCriterionErrorEnum_AdGroupCriterionError_BID_INCOMPATIBLE_WITH_ADGROUP = 8,
  AdGroupCriterionErrorEnum_AdGroupCriterionError_CANNOT_TARGET_AND_EXCLUDE = 9,
  AdGroupCriterionErrorEnum_AdGroupCriterionError_ILLEGAL_URL = 10,
  AdGroupCriterionErrorEnum_AdGroupCriterionError_INVALID_KEYWORD_TEXT = 11,
  AdGroupCriterionErrorEnum_AdGroupCriterionError_INVALID_DESTINATION_URL = 12,
  AdGroupCriterionErrorEnum_AdGroupCriterionError_MISSING_DESTINATION_URL_TAG = 13,
  AdGroupCriterionErrorEnum_AdGroupCriterionError_KEYWORD_LEVEL_BID_NOT_SUPPORTED_FOR_MANUALCPM = 14,
  AdGroupCriterionErrorEnum_AdGroupCriterionError_INVALID_USER_STATUS = 15,
  AdGroupCriterionErrorEnum_AdGroupCriterionError_CANNOT_ADD_CRITERIA_TYPE = 16,
  AdGroupCriterionErrorEnum_AdGroupCriterionError_CANNOT_EXCLUDE_CRITERIA_TYPE = 17,
  AdGroupCriterionErrorEnum_AdGroupCriterionError_CAMPAIGN_TYPE_NOT_COMPATIBLE_WITH_PARTIAL_FAILURE = 27,
  AdGroupCriterionErrorEnum_AdGroupCriterionError_OPERATIONS_FOR_TOO_MANY_SHOPPING_ADGROUPS = 28,
  AdGroupCriterionErrorEnum_AdGroupCriterionError_CANNOT_MODIFY_URL_FIELDS_WITH_DUPLICATE_ELEMENTS = 29,
  AdGroupCriterionErrorEnum_AdGroupCriterionError_CANNOT_SET_WITHOUT_FINAL_URLS = 30,
  AdGroupCriterionErrorEnum_AdGroupCriterionError_CANNOT_CLEAR_FINAL_URLS_IF_FINAL_MOBILE_URLS_EXIST = 31,
  AdGroupCriterionErrorEnum_AdGroupCriterionError_CANNOT_CLEAR_FINAL_URLS_IF_FINAL_APP_URLS_EXIST = 32,
  AdGroupCriterionErrorEnum_AdGroupCriterionError_CANNOT_CLEAR_FINAL_URLS_IF_TRACKING_URL_TEMPLATE_EXISTS = 33,
  AdGroupCriterionErrorEnum_AdGroupCriterionError_CANNOT_CLEAR_FINAL_URLS_IF_URL_CUSTOM_PARAMETERS_EXIST = 34,
  AdGroupCriterionErrorEnum_AdGroupCriterionError_CANNOT_SET_BOTH_DESTINATION_URL_AND_FINAL_URLS = 35,
  AdGroupCriterionErrorEnum_AdGroupCriterionError_CANNOT_SET_BOTH_DESTINATION_URL_AND_TRACKING_URL_TEMPLATE = 36,
  AdGroupCriterionErrorEnum_AdGroupCriterionError_FINAL_URLS_NOT_SUPPORTED_FOR_CRITERION_TYPE = 37,
  AdGroupCriterionErrorEnum_AdGroupCriterionError_FINAL_MOBILE_URLS_NOT_SUPPORTED_FOR_CRITERION_TYPE = 38,
  AdGroupCriterionErrorEnum_AdGroupCriterionError_INVALID_LISTING_GROUP_HIERARCHY = 39,
  AdGroupCriterionErrorEnum_AdGroupCriterionError_LISTING_GROUP_UNIT_CANNOT_HAVE_CHILDREN = 40,
  AdGroupCriterionErrorEnum_AdGroupCriterionError_LISTING_GROUP_SUBDIVISION_REQUIRES_OTHERS_CASE = 41,
  AdGroupCriterionErrorEnum_AdGroupCriterionError_LISTING_GROUP_REQUIRES_SAME_DIMENSION_TYPE_AS_SIBLINGS = 42,
  AdGroupCriterionErrorEnum_AdGroupCriterionError_LISTING_GROUP_ALREADY_EXISTS = 43,
  AdGroupCriterionErrorEnum_AdGroupCriterionError_LISTING_GROUP_DOES_NOT_EXIST = 44,
  AdGroupCriterionErrorEnum_AdGroupCriterionError_LISTING_GROUP_CANNOT_BE_REMOVED = 45,
  AdGroupCriterionErrorEnum_AdGroupCriterionError_INVALID_LISTING_GROUP_TYPE = 46,
  AdGroupCriterionErrorEnum_AdGroupCriterionError_LISTING_GROUP_ADD_MAY_ONLY_USE_TEMP_ID = 47,
  AdGroupCriterionErrorEnum_AdGroupCriterionError_AdGroupCriterionErrorEnum_AdGroupCriterionError_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  AdGroupCriterionErrorEnum_AdGroupCriterionError_AdGroupCriterionErrorEnum_AdGroupCriterionError_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool AdGroupCriterionErrorEnum_AdGroupCriterionError_IsValid(int value);
const AdGroupCriterionErrorEnum_AdGroupCriterionError AdGroupCriterionErrorEnum_AdGroupCriterionError_AdGroupCriterionError_MIN = AdGroupCriterionErrorEnum_AdGroupCriterionError_UNSPECIFIED;
const AdGroupCriterionErrorEnum_AdGroupCriterionError AdGroupCriterionErrorEnum_AdGroupCriterionError_AdGroupCriterionError_MAX = AdGroupCriterionErrorEnum_AdGroupCriterionError_LISTING_GROUP_ADD_MAY_ONLY_USE_TEMP_ID;
const int AdGroupCriterionErrorEnum_AdGroupCriterionError_AdGroupCriterionError_ARRAYSIZE = AdGroupCriterionErrorEnum_AdGroupCriterionError_AdGroupCriterionError_MAX + 1;

const ::google::protobuf::EnumDescriptor* AdGroupCriterionErrorEnum_AdGroupCriterionError_descriptor();
inline const ::std::string& AdGroupCriterionErrorEnum_AdGroupCriterionError_Name(AdGroupCriterionErrorEnum_AdGroupCriterionError value) {
  return ::google::protobuf::internal::NameOfEnum(
    AdGroupCriterionErrorEnum_AdGroupCriterionError_descriptor(), value);
}
inline bool AdGroupCriterionErrorEnum_AdGroupCriterionError_Parse(
    const ::std::string& name, AdGroupCriterionErrorEnum_AdGroupCriterionError* value) {
  return ::google::protobuf::internal::ParseNamedEnum<AdGroupCriterionErrorEnum_AdGroupCriterionError>(
    AdGroupCriterionErrorEnum_AdGroupCriterionError_descriptor(), name, value);
}
// ===================================================================

class AdGroupCriterionErrorEnum : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.ads.googleads.v0.errors.AdGroupCriterionErrorEnum) */ {
 public:
  AdGroupCriterionErrorEnum();
  virtual ~AdGroupCriterionErrorEnum();

  AdGroupCriterionErrorEnum(const AdGroupCriterionErrorEnum& from);

  inline AdGroupCriterionErrorEnum& operator=(const AdGroupCriterionErrorEnum& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  AdGroupCriterionErrorEnum(AdGroupCriterionErrorEnum&& from) noexcept
    : AdGroupCriterionErrorEnum() {
    *this = ::std::move(from);
  }

  inline AdGroupCriterionErrorEnum& operator=(AdGroupCriterionErrorEnum&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const AdGroupCriterionErrorEnum& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const AdGroupCriterionErrorEnum* internal_default_instance() {
    return reinterpret_cast<const AdGroupCriterionErrorEnum*>(
               &_AdGroupCriterionErrorEnum_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(AdGroupCriterionErrorEnum* other);
  friend void swap(AdGroupCriterionErrorEnum& a, AdGroupCriterionErrorEnum& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline AdGroupCriterionErrorEnum* New() const final {
    return CreateMaybeMessage<AdGroupCriterionErrorEnum>(NULL);
  }

  AdGroupCriterionErrorEnum* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<AdGroupCriterionErrorEnum>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const AdGroupCriterionErrorEnum& from);
  void MergeFrom(const AdGroupCriterionErrorEnum& from);
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
  void InternalSwap(AdGroupCriterionErrorEnum* other);
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

  typedef AdGroupCriterionErrorEnum_AdGroupCriterionError AdGroupCriterionError;
  static const AdGroupCriterionError UNSPECIFIED =
    AdGroupCriterionErrorEnum_AdGroupCriterionError_UNSPECIFIED;
  static const AdGroupCriterionError UNKNOWN =
    AdGroupCriterionErrorEnum_AdGroupCriterionError_UNKNOWN;
  static const AdGroupCriterionError AD_GROUP_CRITERION_LABEL_DOES_NOT_EXIST =
    AdGroupCriterionErrorEnum_AdGroupCriterionError_AD_GROUP_CRITERION_LABEL_DOES_NOT_EXIST;
  static const AdGroupCriterionError AD_GROUP_CRITERION_LABEL_ALREADY_EXISTS =
    AdGroupCriterionErrorEnum_AdGroupCriterionError_AD_GROUP_CRITERION_LABEL_ALREADY_EXISTS;
  static const AdGroupCriterionError CANNOT_ADD_LABEL_TO_NEGATIVE_CRITERION =
    AdGroupCriterionErrorEnum_AdGroupCriterionError_CANNOT_ADD_LABEL_TO_NEGATIVE_CRITERION;
  static const AdGroupCriterionError TOO_MANY_OPERATIONS =
    AdGroupCriterionErrorEnum_AdGroupCriterionError_TOO_MANY_OPERATIONS;
  static const AdGroupCriterionError CANT_UPDATE_NEGATIVE =
    AdGroupCriterionErrorEnum_AdGroupCriterionError_CANT_UPDATE_NEGATIVE;
  static const AdGroupCriterionError CONCRETE_TYPE_REQUIRED =
    AdGroupCriterionErrorEnum_AdGroupCriterionError_CONCRETE_TYPE_REQUIRED;
  static const AdGroupCriterionError BID_INCOMPATIBLE_WITH_ADGROUP =
    AdGroupCriterionErrorEnum_AdGroupCriterionError_BID_INCOMPATIBLE_WITH_ADGROUP;
  static const AdGroupCriterionError CANNOT_TARGET_AND_EXCLUDE =
    AdGroupCriterionErrorEnum_AdGroupCriterionError_CANNOT_TARGET_AND_EXCLUDE;
  static const AdGroupCriterionError ILLEGAL_URL =
    AdGroupCriterionErrorEnum_AdGroupCriterionError_ILLEGAL_URL;
  static const AdGroupCriterionError INVALID_KEYWORD_TEXT =
    AdGroupCriterionErrorEnum_AdGroupCriterionError_INVALID_KEYWORD_TEXT;
  static const AdGroupCriterionError INVALID_DESTINATION_URL =
    AdGroupCriterionErrorEnum_AdGroupCriterionError_INVALID_DESTINATION_URL;
  static const AdGroupCriterionError MISSING_DESTINATION_URL_TAG =
    AdGroupCriterionErrorEnum_AdGroupCriterionError_MISSING_DESTINATION_URL_TAG;
  static const AdGroupCriterionError KEYWORD_LEVEL_BID_NOT_SUPPORTED_FOR_MANUALCPM =
    AdGroupCriterionErrorEnum_AdGroupCriterionError_KEYWORD_LEVEL_BID_NOT_SUPPORTED_FOR_MANUALCPM;
  static const AdGroupCriterionError INVALID_USER_STATUS =
    AdGroupCriterionErrorEnum_AdGroupCriterionError_INVALID_USER_STATUS;
  static const AdGroupCriterionError CANNOT_ADD_CRITERIA_TYPE =
    AdGroupCriterionErrorEnum_AdGroupCriterionError_CANNOT_ADD_CRITERIA_TYPE;
  static const AdGroupCriterionError CANNOT_EXCLUDE_CRITERIA_TYPE =
    AdGroupCriterionErrorEnum_AdGroupCriterionError_CANNOT_EXCLUDE_CRITERIA_TYPE;
  static const AdGroupCriterionError CAMPAIGN_TYPE_NOT_COMPATIBLE_WITH_PARTIAL_FAILURE =
    AdGroupCriterionErrorEnum_AdGroupCriterionError_CAMPAIGN_TYPE_NOT_COMPATIBLE_WITH_PARTIAL_FAILURE;
  static const AdGroupCriterionError OPERATIONS_FOR_TOO_MANY_SHOPPING_ADGROUPS =
    AdGroupCriterionErrorEnum_AdGroupCriterionError_OPERATIONS_FOR_TOO_MANY_SHOPPING_ADGROUPS;
  static const AdGroupCriterionError CANNOT_MODIFY_URL_FIELDS_WITH_DUPLICATE_ELEMENTS =
    AdGroupCriterionErrorEnum_AdGroupCriterionError_CANNOT_MODIFY_URL_FIELDS_WITH_DUPLICATE_ELEMENTS;
  static const AdGroupCriterionError CANNOT_SET_WITHOUT_FINAL_URLS =
    AdGroupCriterionErrorEnum_AdGroupCriterionError_CANNOT_SET_WITHOUT_FINAL_URLS;
  static const AdGroupCriterionError CANNOT_CLEAR_FINAL_URLS_IF_FINAL_MOBILE_URLS_EXIST =
    AdGroupCriterionErrorEnum_AdGroupCriterionError_CANNOT_CLEAR_FINAL_URLS_IF_FINAL_MOBILE_URLS_EXIST;
  static const AdGroupCriterionError CANNOT_CLEAR_FINAL_URLS_IF_FINAL_APP_URLS_EXIST =
    AdGroupCriterionErrorEnum_AdGroupCriterionError_CANNOT_CLEAR_FINAL_URLS_IF_FINAL_APP_URLS_EXIST;
  static const AdGroupCriterionError CANNOT_CLEAR_FINAL_URLS_IF_TRACKING_URL_TEMPLATE_EXISTS =
    AdGroupCriterionErrorEnum_AdGroupCriterionError_CANNOT_CLEAR_FINAL_URLS_IF_TRACKING_URL_TEMPLATE_EXISTS;
  static const AdGroupCriterionError CANNOT_CLEAR_FINAL_URLS_IF_URL_CUSTOM_PARAMETERS_EXIST =
    AdGroupCriterionErrorEnum_AdGroupCriterionError_CANNOT_CLEAR_FINAL_URLS_IF_URL_CUSTOM_PARAMETERS_EXIST;
  static const AdGroupCriterionError CANNOT_SET_BOTH_DESTINATION_URL_AND_FINAL_URLS =
    AdGroupCriterionErrorEnum_AdGroupCriterionError_CANNOT_SET_BOTH_DESTINATION_URL_AND_FINAL_URLS;
  static const AdGroupCriterionError CANNOT_SET_BOTH_DESTINATION_URL_AND_TRACKING_URL_TEMPLATE =
    AdGroupCriterionErrorEnum_AdGroupCriterionError_CANNOT_SET_BOTH_DESTINATION_URL_AND_TRACKING_URL_TEMPLATE;
  static const AdGroupCriterionError FINAL_URLS_NOT_SUPPORTED_FOR_CRITERION_TYPE =
    AdGroupCriterionErrorEnum_AdGroupCriterionError_FINAL_URLS_NOT_SUPPORTED_FOR_CRITERION_TYPE;
  static const AdGroupCriterionError FINAL_MOBILE_URLS_NOT_SUPPORTED_FOR_CRITERION_TYPE =
    AdGroupCriterionErrorEnum_AdGroupCriterionError_FINAL_MOBILE_URLS_NOT_SUPPORTED_FOR_CRITERION_TYPE;
  static const AdGroupCriterionError INVALID_LISTING_GROUP_HIERARCHY =
    AdGroupCriterionErrorEnum_AdGroupCriterionError_INVALID_LISTING_GROUP_HIERARCHY;
  static const AdGroupCriterionError LISTING_GROUP_UNIT_CANNOT_HAVE_CHILDREN =
    AdGroupCriterionErrorEnum_AdGroupCriterionError_LISTING_GROUP_UNIT_CANNOT_HAVE_CHILDREN;
  static const AdGroupCriterionError LISTING_GROUP_SUBDIVISION_REQUIRES_OTHERS_CASE =
    AdGroupCriterionErrorEnum_AdGroupCriterionError_LISTING_GROUP_SUBDIVISION_REQUIRES_OTHERS_CASE;
  static const AdGroupCriterionError LISTING_GROUP_REQUIRES_SAME_DIMENSION_TYPE_AS_SIBLINGS =
    AdGroupCriterionErrorEnum_AdGroupCriterionError_LISTING_GROUP_REQUIRES_SAME_DIMENSION_TYPE_AS_SIBLINGS;
  static const AdGroupCriterionError LISTING_GROUP_ALREADY_EXISTS =
    AdGroupCriterionErrorEnum_AdGroupCriterionError_LISTING_GROUP_ALREADY_EXISTS;
  static const AdGroupCriterionError LISTING_GROUP_DOES_NOT_EXIST =
    AdGroupCriterionErrorEnum_AdGroupCriterionError_LISTING_GROUP_DOES_NOT_EXIST;
  static const AdGroupCriterionError LISTING_GROUP_CANNOT_BE_REMOVED =
    AdGroupCriterionErrorEnum_AdGroupCriterionError_LISTING_GROUP_CANNOT_BE_REMOVED;
  static const AdGroupCriterionError INVALID_LISTING_GROUP_TYPE =
    AdGroupCriterionErrorEnum_AdGroupCriterionError_INVALID_LISTING_GROUP_TYPE;
  static const AdGroupCriterionError LISTING_GROUP_ADD_MAY_ONLY_USE_TEMP_ID =
    AdGroupCriterionErrorEnum_AdGroupCriterionError_LISTING_GROUP_ADD_MAY_ONLY_USE_TEMP_ID;
  static inline bool AdGroupCriterionError_IsValid(int value) {
    return AdGroupCriterionErrorEnum_AdGroupCriterionError_IsValid(value);
  }
  static const AdGroupCriterionError AdGroupCriterionError_MIN =
    AdGroupCriterionErrorEnum_AdGroupCriterionError_AdGroupCriterionError_MIN;
  static const AdGroupCriterionError AdGroupCriterionError_MAX =
    AdGroupCriterionErrorEnum_AdGroupCriterionError_AdGroupCriterionError_MAX;
  static const int AdGroupCriterionError_ARRAYSIZE =
    AdGroupCriterionErrorEnum_AdGroupCriterionError_AdGroupCriterionError_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  AdGroupCriterionError_descriptor() {
    return AdGroupCriterionErrorEnum_AdGroupCriterionError_descriptor();
  }
  static inline const ::std::string& AdGroupCriterionError_Name(AdGroupCriterionError value) {
    return AdGroupCriterionErrorEnum_AdGroupCriterionError_Name(value);
  }
  static inline bool AdGroupCriterionError_Parse(const ::std::string& name,
      AdGroupCriterionError* value) {
    return AdGroupCriterionErrorEnum_AdGroupCriterionError_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:google.ads.googleads.v0.errors.AdGroupCriterionErrorEnum)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_google_2fads_2fgoogleads_2fv0_2ferrors_2fad_5fgroup_5fcriterion_5ferror_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// AdGroupCriterionErrorEnum

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

template <> struct is_proto_enum< ::google::ads::googleads::v0::errors::AdGroupCriterionErrorEnum_AdGroupCriterionError> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::google::ads::googleads::v0::errors::AdGroupCriterionErrorEnum_AdGroupCriterionError>() {
  return ::google::ads::googleads::v0::errors::AdGroupCriterionErrorEnum_AdGroupCriterionError_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_google_2fads_2fgoogleads_2fv0_2ferrors_2fad_5fgroup_5fcriterion_5ferror_2eproto