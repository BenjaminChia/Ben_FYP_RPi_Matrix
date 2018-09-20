// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/ads/googleads/v0/errors/query_error.proto

#ifndef PROTOBUF_INCLUDED_google_2fads_2fgoogleads_2fv0_2ferrors_2fquery_5ferror_2eproto
#define PROTOBUF_INCLUDED_google_2fads_2fgoogleads_2fv0_2ferrors_2fquery_5ferror_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_protobuf_google_2fads_2fgoogleads_2fv0_2ferrors_2fquery_5ferror_2eproto 

namespace protobuf_google_2fads_2fgoogleads_2fv0_2ferrors_2fquery_5ferror_2eproto {
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
}  // namespace protobuf_google_2fads_2fgoogleads_2fv0_2ferrors_2fquery_5ferror_2eproto
namespace google {
namespace ads {
namespace googleads {
namespace v0 {
namespace errors {
class QueryErrorEnum;
class QueryErrorEnumDefaultTypeInternal;
extern QueryErrorEnumDefaultTypeInternal _QueryErrorEnum_default_instance_;
}  // namespace errors
}  // namespace v0
}  // namespace googleads
}  // namespace ads
}  // namespace google
namespace google {
namespace protobuf {
template<> ::google::ads::googleads::v0::errors::QueryErrorEnum* Arena::CreateMaybeMessage<::google::ads::googleads::v0::errors::QueryErrorEnum>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace google {
namespace ads {
namespace googleads {
namespace v0 {
namespace errors {

enum QueryErrorEnum_QueryError {
  QueryErrorEnum_QueryError_UNSPECIFIED = 0,
  QueryErrorEnum_QueryError_UNKNOWN = 1,
  QueryErrorEnum_QueryError_QUERY_ERROR = 50,
  QueryErrorEnum_QueryError_BAD_ENUM_CONSTANT = 18,
  QueryErrorEnum_QueryError_BAD_ESCAPE_SEQUENCE = 7,
  QueryErrorEnum_QueryError_BAD_FIELD_NAME = 12,
  QueryErrorEnum_QueryError_BAD_LIMIT_VALUE = 15,
  QueryErrorEnum_QueryError_BAD_NUMBER = 5,
  QueryErrorEnum_QueryError_BAD_OPERATOR = 3,
  QueryErrorEnum_QueryError_BAD_RESOURCE_TYPE_IN_FROM_CLAUSE = 45,
  QueryErrorEnum_QueryError_BAD_SYMBOL = 2,
  QueryErrorEnum_QueryError_BAD_VALUE = 4,
  QueryErrorEnum_QueryError_DATE_RANGE_TOO_WIDE = 36,
  QueryErrorEnum_QueryError_EXPECTED_AND = 30,
  QueryErrorEnum_QueryError_EXPECTED_BY = 14,
  QueryErrorEnum_QueryError_EXPECTED_DIMENSION_FIELD_IN_SELECT_CLAUSE = 37,
  QueryErrorEnum_QueryError_EXPECTED_FILTERS_ON_DATE_RANGE = 55,
  QueryErrorEnum_QueryError_EXPECTED_FROM = 44,
  QueryErrorEnum_QueryError_EXPECTED_LIST = 41,
  QueryErrorEnum_QueryError_EXPECTED_REFERENCED_FIELD_IN_SELECT_CLAUSE = 16,
  QueryErrorEnum_QueryError_EXPECTED_SELECT = 13,
  QueryErrorEnum_QueryError_EXPECTED_SINGLE_VALUE = 42,
  QueryErrorEnum_QueryError_EXPECTED_VALUE_WITH_BETWEEN_OPERATOR = 29,
  QueryErrorEnum_QueryError_INVALID_DATE_FORMAT = 38,
  QueryErrorEnum_QueryError_INVALID_STRING_VALUE = 57,
  QueryErrorEnum_QueryError_INVALID_VALUE_WITH_BETWEEN_OPERATOR = 26,
  QueryErrorEnum_QueryError_INVALID_VALUE_WITH_DURING_OPERATOR = 22,
  QueryErrorEnum_QueryError_INVALID_VALUE_WITH_LIKE_OPERATOR = 56,
  QueryErrorEnum_QueryError_OPERATOR_FIELD_MISMATCH = 35,
  QueryErrorEnum_QueryError_PROHIBITED_EMPTY_LIST_IN_CONDITION = 28,
  QueryErrorEnum_QueryError_PROHIBITED_ENUM_CONSTANT = 54,
  QueryErrorEnum_QueryError_PROHIBITED_FIELD_COMBINATION_IN_SELECT_CLAUSE = 31,
  QueryErrorEnum_QueryError_PROHIBITED_FIELD_IN_ORDER_BY_CLAUSE = 40,
  QueryErrorEnum_QueryError_PROHIBITED_FIELD_IN_SELECT_CLAUSE = 23,
  QueryErrorEnum_QueryError_PROHIBITED_FIELD_IN_WHERE_CLAUSE = 24,
  QueryErrorEnum_QueryError_PROHIBITED_RESOURCE_TYPE_IN_FROM_CLAUSE = 43,
  QueryErrorEnum_QueryError_PROHIBITED_RESOURCE_TYPE_IN_SELECT_CLAUSE = 48,
  QueryErrorEnum_QueryError_PROHIBITED_METRIC_IN_SELECT_OR_WHERE_CLAUSE = 49,
  QueryErrorEnum_QueryError_PROHIBITED_SEGMENT_IN_SELECT_OR_WHERE_CLAUSE = 51,
  QueryErrorEnum_QueryError_PROHIBITED_SEGMENT_WITH_METRIC_IN_SELECT_OR_WHERE_CLAUSE = 53,
  QueryErrorEnum_QueryError_LIMIT_VALUE_TOO_LOW = 25,
  QueryErrorEnum_QueryError_PROHIBITED_NEWLINE_IN_STRING = 8,
  QueryErrorEnum_QueryError_PROHIBITED_VALUE_COMBINATION_IN_LIST = 10,
  QueryErrorEnum_QueryError_PROHIBITED_VALUE_COMBINATION_WITH_BETWEEN_OPERATOR = 21,
  QueryErrorEnum_QueryError_STRING_NOT_TERMINATED = 6,
  QueryErrorEnum_QueryError_TOO_MANY_SEGMENTS = 34,
  QueryErrorEnum_QueryError_UNEXPECTED_END_OF_QUERY = 9,
  QueryErrorEnum_QueryError_UNEXPECTED_FROM_CLAUSE = 47,
  QueryErrorEnum_QueryError_UNRECOGNIZED_FIELD = 32,
  QueryErrorEnum_QueryError_UNEXPECTED_INPUT = 11,
  QueryErrorEnum_QueryError_QueryErrorEnum_QueryError_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  QueryErrorEnum_QueryError_QueryErrorEnum_QueryError_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool QueryErrorEnum_QueryError_IsValid(int value);
const QueryErrorEnum_QueryError QueryErrorEnum_QueryError_QueryError_MIN = QueryErrorEnum_QueryError_UNSPECIFIED;
const QueryErrorEnum_QueryError QueryErrorEnum_QueryError_QueryError_MAX = QueryErrorEnum_QueryError_INVALID_STRING_VALUE;
const int QueryErrorEnum_QueryError_QueryError_ARRAYSIZE = QueryErrorEnum_QueryError_QueryError_MAX + 1;

const ::google::protobuf::EnumDescriptor* QueryErrorEnum_QueryError_descriptor();
inline const ::std::string& QueryErrorEnum_QueryError_Name(QueryErrorEnum_QueryError value) {
  return ::google::protobuf::internal::NameOfEnum(
    QueryErrorEnum_QueryError_descriptor(), value);
}
inline bool QueryErrorEnum_QueryError_Parse(
    const ::std::string& name, QueryErrorEnum_QueryError* value) {
  return ::google::protobuf::internal::ParseNamedEnum<QueryErrorEnum_QueryError>(
    QueryErrorEnum_QueryError_descriptor(), name, value);
}
// ===================================================================

class QueryErrorEnum : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.ads.googleads.v0.errors.QueryErrorEnum) */ {
 public:
  QueryErrorEnum();
  virtual ~QueryErrorEnum();

  QueryErrorEnum(const QueryErrorEnum& from);

  inline QueryErrorEnum& operator=(const QueryErrorEnum& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  QueryErrorEnum(QueryErrorEnum&& from) noexcept
    : QueryErrorEnum() {
    *this = ::std::move(from);
  }

  inline QueryErrorEnum& operator=(QueryErrorEnum&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const QueryErrorEnum& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const QueryErrorEnum* internal_default_instance() {
    return reinterpret_cast<const QueryErrorEnum*>(
               &_QueryErrorEnum_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(QueryErrorEnum* other);
  friend void swap(QueryErrorEnum& a, QueryErrorEnum& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline QueryErrorEnum* New() const final {
    return CreateMaybeMessage<QueryErrorEnum>(NULL);
  }

  QueryErrorEnum* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<QueryErrorEnum>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const QueryErrorEnum& from);
  void MergeFrom(const QueryErrorEnum& from);
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
  void InternalSwap(QueryErrorEnum* other);
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

  typedef QueryErrorEnum_QueryError QueryError;
  static const QueryError UNSPECIFIED =
    QueryErrorEnum_QueryError_UNSPECIFIED;
  static const QueryError UNKNOWN =
    QueryErrorEnum_QueryError_UNKNOWN;
  static const QueryError QUERY_ERROR =
    QueryErrorEnum_QueryError_QUERY_ERROR;
  static const QueryError BAD_ENUM_CONSTANT =
    QueryErrorEnum_QueryError_BAD_ENUM_CONSTANT;
  static const QueryError BAD_ESCAPE_SEQUENCE =
    QueryErrorEnum_QueryError_BAD_ESCAPE_SEQUENCE;
  static const QueryError BAD_FIELD_NAME =
    QueryErrorEnum_QueryError_BAD_FIELD_NAME;
  static const QueryError BAD_LIMIT_VALUE =
    QueryErrorEnum_QueryError_BAD_LIMIT_VALUE;
  static const QueryError BAD_NUMBER =
    QueryErrorEnum_QueryError_BAD_NUMBER;
  static const QueryError BAD_OPERATOR =
    QueryErrorEnum_QueryError_BAD_OPERATOR;
  static const QueryError BAD_RESOURCE_TYPE_IN_FROM_CLAUSE =
    QueryErrorEnum_QueryError_BAD_RESOURCE_TYPE_IN_FROM_CLAUSE;
  static const QueryError BAD_SYMBOL =
    QueryErrorEnum_QueryError_BAD_SYMBOL;
  static const QueryError BAD_VALUE =
    QueryErrorEnum_QueryError_BAD_VALUE;
  static const QueryError DATE_RANGE_TOO_WIDE =
    QueryErrorEnum_QueryError_DATE_RANGE_TOO_WIDE;
  static const QueryError EXPECTED_AND =
    QueryErrorEnum_QueryError_EXPECTED_AND;
  static const QueryError EXPECTED_BY =
    QueryErrorEnum_QueryError_EXPECTED_BY;
  static const QueryError EXPECTED_DIMENSION_FIELD_IN_SELECT_CLAUSE =
    QueryErrorEnum_QueryError_EXPECTED_DIMENSION_FIELD_IN_SELECT_CLAUSE;
  static const QueryError EXPECTED_FILTERS_ON_DATE_RANGE =
    QueryErrorEnum_QueryError_EXPECTED_FILTERS_ON_DATE_RANGE;
  static const QueryError EXPECTED_FROM =
    QueryErrorEnum_QueryError_EXPECTED_FROM;
  static const QueryError EXPECTED_LIST =
    QueryErrorEnum_QueryError_EXPECTED_LIST;
  static const QueryError EXPECTED_REFERENCED_FIELD_IN_SELECT_CLAUSE =
    QueryErrorEnum_QueryError_EXPECTED_REFERENCED_FIELD_IN_SELECT_CLAUSE;
  static const QueryError EXPECTED_SELECT =
    QueryErrorEnum_QueryError_EXPECTED_SELECT;
  static const QueryError EXPECTED_SINGLE_VALUE =
    QueryErrorEnum_QueryError_EXPECTED_SINGLE_VALUE;
  static const QueryError EXPECTED_VALUE_WITH_BETWEEN_OPERATOR =
    QueryErrorEnum_QueryError_EXPECTED_VALUE_WITH_BETWEEN_OPERATOR;
  static const QueryError INVALID_DATE_FORMAT =
    QueryErrorEnum_QueryError_INVALID_DATE_FORMAT;
  static const QueryError INVALID_STRING_VALUE =
    QueryErrorEnum_QueryError_INVALID_STRING_VALUE;
  static const QueryError INVALID_VALUE_WITH_BETWEEN_OPERATOR =
    QueryErrorEnum_QueryError_INVALID_VALUE_WITH_BETWEEN_OPERATOR;
  static const QueryError INVALID_VALUE_WITH_DURING_OPERATOR =
    QueryErrorEnum_QueryError_INVALID_VALUE_WITH_DURING_OPERATOR;
  static const QueryError INVALID_VALUE_WITH_LIKE_OPERATOR =
    QueryErrorEnum_QueryError_INVALID_VALUE_WITH_LIKE_OPERATOR;
  static const QueryError OPERATOR_FIELD_MISMATCH =
    QueryErrorEnum_QueryError_OPERATOR_FIELD_MISMATCH;
  static const QueryError PROHIBITED_EMPTY_LIST_IN_CONDITION =
    QueryErrorEnum_QueryError_PROHIBITED_EMPTY_LIST_IN_CONDITION;
  static const QueryError PROHIBITED_ENUM_CONSTANT =
    QueryErrorEnum_QueryError_PROHIBITED_ENUM_CONSTANT;
  static const QueryError PROHIBITED_FIELD_COMBINATION_IN_SELECT_CLAUSE =
    QueryErrorEnum_QueryError_PROHIBITED_FIELD_COMBINATION_IN_SELECT_CLAUSE;
  static const QueryError PROHIBITED_FIELD_IN_ORDER_BY_CLAUSE =
    QueryErrorEnum_QueryError_PROHIBITED_FIELD_IN_ORDER_BY_CLAUSE;
  static const QueryError PROHIBITED_FIELD_IN_SELECT_CLAUSE =
    QueryErrorEnum_QueryError_PROHIBITED_FIELD_IN_SELECT_CLAUSE;
  static const QueryError PROHIBITED_FIELD_IN_WHERE_CLAUSE =
    QueryErrorEnum_QueryError_PROHIBITED_FIELD_IN_WHERE_CLAUSE;
  static const QueryError PROHIBITED_RESOURCE_TYPE_IN_FROM_CLAUSE =
    QueryErrorEnum_QueryError_PROHIBITED_RESOURCE_TYPE_IN_FROM_CLAUSE;
  static const QueryError PROHIBITED_RESOURCE_TYPE_IN_SELECT_CLAUSE =
    QueryErrorEnum_QueryError_PROHIBITED_RESOURCE_TYPE_IN_SELECT_CLAUSE;
  static const QueryError PROHIBITED_METRIC_IN_SELECT_OR_WHERE_CLAUSE =
    QueryErrorEnum_QueryError_PROHIBITED_METRIC_IN_SELECT_OR_WHERE_CLAUSE;
  static const QueryError PROHIBITED_SEGMENT_IN_SELECT_OR_WHERE_CLAUSE =
    QueryErrorEnum_QueryError_PROHIBITED_SEGMENT_IN_SELECT_OR_WHERE_CLAUSE;
  static const QueryError PROHIBITED_SEGMENT_WITH_METRIC_IN_SELECT_OR_WHERE_CLAUSE =
    QueryErrorEnum_QueryError_PROHIBITED_SEGMENT_WITH_METRIC_IN_SELECT_OR_WHERE_CLAUSE;
  static const QueryError LIMIT_VALUE_TOO_LOW =
    QueryErrorEnum_QueryError_LIMIT_VALUE_TOO_LOW;
  static const QueryError PROHIBITED_NEWLINE_IN_STRING =
    QueryErrorEnum_QueryError_PROHIBITED_NEWLINE_IN_STRING;
  static const QueryError PROHIBITED_VALUE_COMBINATION_IN_LIST =
    QueryErrorEnum_QueryError_PROHIBITED_VALUE_COMBINATION_IN_LIST;
  static const QueryError PROHIBITED_VALUE_COMBINATION_WITH_BETWEEN_OPERATOR =
    QueryErrorEnum_QueryError_PROHIBITED_VALUE_COMBINATION_WITH_BETWEEN_OPERATOR;
  static const QueryError STRING_NOT_TERMINATED =
    QueryErrorEnum_QueryError_STRING_NOT_TERMINATED;
  static const QueryError TOO_MANY_SEGMENTS =
    QueryErrorEnum_QueryError_TOO_MANY_SEGMENTS;
  static const QueryError UNEXPECTED_END_OF_QUERY =
    QueryErrorEnum_QueryError_UNEXPECTED_END_OF_QUERY;
  static const QueryError UNEXPECTED_FROM_CLAUSE =
    QueryErrorEnum_QueryError_UNEXPECTED_FROM_CLAUSE;
  static const QueryError UNRECOGNIZED_FIELD =
    QueryErrorEnum_QueryError_UNRECOGNIZED_FIELD;
  static const QueryError UNEXPECTED_INPUT =
    QueryErrorEnum_QueryError_UNEXPECTED_INPUT;
  static inline bool QueryError_IsValid(int value) {
    return QueryErrorEnum_QueryError_IsValid(value);
  }
  static const QueryError QueryError_MIN =
    QueryErrorEnum_QueryError_QueryError_MIN;
  static const QueryError QueryError_MAX =
    QueryErrorEnum_QueryError_QueryError_MAX;
  static const int QueryError_ARRAYSIZE =
    QueryErrorEnum_QueryError_QueryError_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  QueryError_descriptor() {
    return QueryErrorEnum_QueryError_descriptor();
  }
  static inline const ::std::string& QueryError_Name(QueryError value) {
    return QueryErrorEnum_QueryError_Name(value);
  }
  static inline bool QueryError_Parse(const ::std::string& name,
      QueryError* value) {
    return QueryErrorEnum_QueryError_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:google.ads.googleads.v0.errors.QueryErrorEnum)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_google_2fads_2fgoogleads_2fv0_2ferrors_2fquery_5ferror_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// QueryErrorEnum

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

template <> struct is_proto_enum< ::google::ads::googleads::v0::errors::QueryErrorEnum_QueryError> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::google::ads::googleads::v0::errors::QueryErrorEnum_QueryError>() {
  return ::google::ads::googleads::v0::errors::QueryErrorEnum_QueryError_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_google_2fads_2fgoogleads_2fv0_2ferrors_2fquery_5ferror_2eproto
