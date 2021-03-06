// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/ads/googleads/v0/errors/query_error.proto

#include "google/ads/googleads/v0/errors/query_error.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

namespace google {
namespace ads {
namespace googleads {
namespace v0 {
namespace errors {
class QueryErrorEnumDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<QueryErrorEnum>
      _instance;
} _QueryErrorEnum_default_instance_;
}  // namespace errors
}  // namespace v0
}  // namespace googleads
}  // namespace ads
}  // namespace google
namespace protobuf_google_2fads_2fgoogleads_2fv0_2ferrors_2fquery_5ferror_2eproto {
static void InitDefaultsQueryErrorEnum() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::google::ads::googleads::v0::errors::_QueryErrorEnum_default_instance_;
    new (ptr) ::google::ads::googleads::v0::errors::QueryErrorEnum();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::google::ads::googleads::v0::errors::QueryErrorEnum::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_QueryErrorEnum =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsQueryErrorEnum}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_QueryErrorEnum.base);
}

::google::protobuf::Metadata file_level_metadata[1];
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::ads::googleads::v0::errors::QueryErrorEnum, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::google::ads::googleads::v0::errors::QueryErrorEnum)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::google::ads::googleads::v0::errors::_QueryErrorEnum_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "google/ads/googleads/v0/errors/query_error.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, file_level_enum_descriptors, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n0google/ads/googleads/v0/errors/query_e"
      "rror.proto\022\036google.ads.googleads.v0.erro"
      "rs\"\266\014\n\016QueryErrorEnum\"\243\014\n\nQueryError\022\017\n\013"
      "UNSPECIFIED\020\000\022\013\n\007UNKNOWN\020\001\022\017\n\013QUERY_ERRO"
      "R\0202\022\025\n\021BAD_ENUM_CONSTANT\020\022\022\027\n\023BAD_ESCAPE"
      "_SEQUENCE\020\007\022\022\n\016BAD_FIELD_NAME\020\014\022\023\n\017BAD_L"
      "IMIT_VALUE\020\017\022\016\n\nBAD_NUMBER\020\005\022\020\n\014BAD_OPER"
      "ATOR\020\003\022$\n BAD_RESOURCE_TYPE_IN_FROM_CLAU"
      "SE\020-\022\016\n\nBAD_SYMBOL\020\002\022\r\n\tBAD_VALUE\020\004\022\027\n\023D"
      "ATE_RANGE_TOO_WIDE\020$\022\020\n\014EXPECTED_AND\020\036\022\017"
      "\n\013EXPECTED_BY\020\016\022-\n)EXPECTED_DIMENSION_FI"
      "ELD_IN_SELECT_CLAUSE\020%\022\"\n\036EXPECTED_FILTE"
      "RS_ON_DATE_RANGE\0207\022\021\n\rEXPECTED_FROM\020,\022\021\n"
      "\rEXPECTED_LIST\020)\022.\n*EXPECTED_REFERENCED_"
      "FIELD_IN_SELECT_CLAUSE\020\020\022\023\n\017EXPECTED_SEL"
      "ECT\020\r\022\031\n\025EXPECTED_SINGLE_VALUE\020*\022(\n$EXPE"
      "CTED_VALUE_WITH_BETWEEN_OPERATOR\020\035\022\027\n\023IN"
      "VALID_DATE_FORMAT\020&\022\030\n\024INVALID_STRING_VA"
      "LUE\0209\022\'\n#INVALID_VALUE_WITH_BETWEEN_OPER"
      "ATOR\020\032\022&\n\"INVALID_VALUE_WITH_DURING_OPER"
      "ATOR\020\026\022$\n INVALID_VALUE_WITH_LIKE_OPERAT"
      "OR\0208\022\033\n\027OPERATOR_FIELD_MISMATCH\020#\022&\n\"PRO"
      "HIBITED_EMPTY_LIST_IN_CONDITION\020\034\022\034\n\030PRO"
      "HIBITED_ENUM_CONSTANT\0206\0221\n-PROHIBITED_FI"
      "ELD_COMBINATION_IN_SELECT_CLAUSE\020\037\022\'\n#PR"
      "OHIBITED_FIELD_IN_ORDER_BY_CLAUSE\020(\022%\n!P"
      "ROHIBITED_FIELD_IN_SELECT_CLAUSE\020\027\022$\n PR"
      "OHIBITED_FIELD_IN_WHERE_CLAUSE\020\030\022+\n\'PROH"
      "IBITED_RESOURCE_TYPE_IN_FROM_CLAUSE\020+\022-\n"
      ")PROHIBITED_RESOURCE_TYPE_IN_SELECT_CLAU"
      "SE\0200\022/\n+PROHIBITED_METRIC_IN_SELECT_OR_W"
      "HERE_CLAUSE\0201\0220\n,PROHIBITED_SEGMENT_IN_S"
      "ELECT_OR_WHERE_CLAUSE\0203\022<\n8PROHIBITED_SE"
      "GMENT_WITH_METRIC_IN_SELECT_OR_WHERE_CLA"
      "USE\0205\022\027\n\023LIMIT_VALUE_TOO_LOW\020\031\022 \n\034PROHIB"
      "ITED_NEWLINE_IN_STRING\020\010\022(\n$PROHIBITED_V"
      "ALUE_COMBINATION_IN_LIST\020\n\0226\n2PROHIBITED"
      "_VALUE_COMBINATION_WITH_BETWEEN_OPERATOR"
      "\020\025\022\031\n\025STRING_NOT_TERMINATED\020\006\022\025\n\021TOO_MAN"
      "Y_SEGMENTS\020\"\022\033\n\027UNEXPECTED_END_OF_QUERY\020"
      "\t\022\032\n\026UNEXPECTED_FROM_CLAUSE\020/\022\026\n\022UNRECOG"
      "NIZED_FIELD\020 \022\024\n\020UNEXPECTED_INPUT\020\013B\240\001\n\""
      "com.google.ads.googleads.v0.errorsB\017Quer"
      "yErrorProtoP\001\242\002\003GAA\252\002\036Google.Ads.GoogleA"
      "ds.V0.Errors\312\002\036Google\\Ads\\GoogleAds\\V0\\E"
      "rrors\342\002\036Google\\Ads\\GoogleAds\\V0\\Errorsb\006"
      "proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 1846);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "google/ads/googleads/v0/errors/query_error.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_google_2fads_2fgoogleads_2fv0_2ferrors_2fquery_5ferror_2eproto
namespace google {
namespace ads {
namespace googleads {
namespace v0 {
namespace errors {
const ::google::protobuf::EnumDescriptor* QueryErrorEnum_QueryError_descriptor() {
  protobuf_google_2fads_2fgoogleads_2fv0_2ferrors_2fquery_5ferror_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_google_2fads_2fgoogleads_2fv0_2ferrors_2fquery_5ferror_2eproto::file_level_enum_descriptors[0];
}
bool QueryErrorEnum_QueryError_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 18:
    case 21:
    case 22:
    case 23:
    case 24:
    case 25:
    case 26:
    case 28:
    case 29:
    case 30:
    case 31:
    case 32:
    case 34:
    case 35:
    case 36:
    case 37:
    case 38:
    case 40:
    case 41:
    case 42:
    case 43:
    case 44:
    case 45:
    case 47:
    case 48:
    case 49:
    case 50:
    case 51:
    case 53:
    case 54:
    case 55:
    case 56:
    case 57:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const QueryErrorEnum_QueryError QueryErrorEnum::UNSPECIFIED;
const QueryErrorEnum_QueryError QueryErrorEnum::UNKNOWN;
const QueryErrorEnum_QueryError QueryErrorEnum::QUERY_ERROR;
const QueryErrorEnum_QueryError QueryErrorEnum::BAD_ENUM_CONSTANT;
const QueryErrorEnum_QueryError QueryErrorEnum::BAD_ESCAPE_SEQUENCE;
const QueryErrorEnum_QueryError QueryErrorEnum::BAD_FIELD_NAME;
const QueryErrorEnum_QueryError QueryErrorEnum::BAD_LIMIT_VALUE;
const QueryErrorEnum_QueryError QueryErrorEnum::BAD_NUMBER;
const QueryErrorEnum_QueryError QueryErrorEnum::BAD_OPERATOR;
const QueryErrorEnum_QueryError QueryErrorEnum::BAD_RESOURCE_TYPE_IN_FROM_CLAUSE;
const QueryErrorEnum_QueryError QueryErrorEnum::BAD_SYMBOL;
const QueryErrorEnum_QueryError QueryErrorEnum::BAD_VALUE;
const QueryErrorEnum_QueryError QueryErrorEnum::DATE_RANGE_TOO_WIDE;
const QueryErrorEnum_QueryError QueryErrorEnum::EXPECTED_AND;
const QueryErrorEnum_QueryError QueryErrorEnum::EXPECTED_BY;
const QueryErrorEnum_QueryError QueryErrorEnum::EXPECTED_DIMENSION_FIELD_IN_SELECT_CLAUSE;
const QueryErrorEnum_QueryError QueryErrorEnum::EXPECTED_FILTERS_ON_DATE_RANGE;
const QueryErrorEnum_QueryError QueryErrorEnum::EXPECTED_FROM;
const QueryErrorEnum_QueryError QueryErrorEnum::EXPECTED_LIST;
const QueryErrorEnum_QueryError QueryErrorEnum::EXPECTED_REFERENCED_FIELD_IN_SELECT_CLAUSE;
const QueryErrorEnum_QueryError QueryErrorEnum::EXPECTED_SELECT;
const QueryErrorEnum_QueryError QueryErrorEnum::EXPECTED_SINGLE_VALUE;
const QueryErrorEnum_QueryError QueryErrorEnum::EXPECTED_VALUE_WITH_BETWEEN_OPERATOR;
const QueryErrorEnum_QueryError QueryErrorEnum::INVALID_DATE_FORMAT;
const QueryErrorEnum_QueryError QueryErrorEnum::INVALID_STRING_VALUE;
const QueryErrorEnum_QueryError QueryErrorEnum::INVALID_VALUE_WITH_BETWEEN_OPERATOR;
const QueryErrorEnum_QueryError QueryErrorEnum::INVALID_VALUE_WITH_DURING_OPERATOR;
const QueryErrorEnum_QueryError QueryErrorEnum::INVALID_VALUE_WITH_LIKE_OPERATOR;
const QueryErrorEnum_QueryError QueryErrorEnum::OPERATOR_FIELD_MISMATCH;
const QueryErrorEnum_QueryError QueryErrorEnum::PROHIBITED_EMPTY_LIST_IN_CONDITION;
const QueryErrorEnum_QueryError QueryErrorEnum::PROHIBITED_ENUM_CONSTANT;
const QueryErrorEnum_QueryError QueryErrorEnum::PROHIBITED_FIELD_COMBINATION_IN_SELECT_CLAUSE;
const QueryErrorEnum_QueryError QueryErrorEnum::PROHIBITED_FIELD_IN_ORDER_BY_CLAUSE;
const QueryErrorEnum_QueryError QueryErrorEnum::PROHIBITED_FIELD_IN_SELECT_CLAUSE;
const QueryErrorEnum_QueryError QueryErrorEnum::PROHIBITED_FIELD_IN_WHERE_CLAUSE;
const QueryErrorEnum_QueryError QueryErrorEnum::PROHIBITED_RESOURCE_TYPE_IN_FROM_CLAUSE;
const QueryErrorEnum_QueryError QueryErrorEnum::PROHIBITED_RESOURCE_TYPE_IN_SELECT_CLAUSE;
const QueryErrorEnum_QueryError QueryErrorEnum::PROHIBITED_METRIC_IN_SELECT_OR_WHERE_CLAUSE;
const QueryErrorEnum_QueryError QueryErrorEnum::PROHIBITED_SEGMENT_IN_SELECT_OR_WHERE_CLAUSE;
const QueryErrorEnum_QueryError QueryErrorEnum::PROHIBITED_SEGMENT_WITH_METRIC_IN_SELECT_OR_WHERE_CLAUSE;
const QueryErrorEnum_QueryError QueryErrorEnum::LIMIT_VALUE_TOO_LOW;
const QueryErrorEnum_QueryError QueryErrorEnum::PROHIBITED_NEWLINE_IN_STRING;
const QueryErrorEnum_QueryError QueryErrorEnum::PROHIBITED_VALUE_COMBINATION_IN_LIST;
const QueryErrorEnum_QueryError QueryErrorEnum::PROHIBITED_VALUE_COMBINATION_WITH_BETWEEN_OPERATOR;
const QueryErrorEnum_QueryError QueryErrorEnum::STRING_NOT_TERMINATED;
const QueryErrorEnum_QueryError QueryErrorEnum::TOO_MANY_SEGMENTS;
const QueryErrorEnum_QueryError QueryErrorEnum::UNEXPECTED_END_OF_QUERY;
const QueryErrorEnum_QueryError QueryErrorEnum::UNEXPECTED_FROM_CLAUSE;
const QueryErrorEnum_QueryError QueryErrorEnum::UNRECOGNIZED_FIELD;
const QueryErrorEnum_QueryError QueryErrorEnum::UNEXPECTED_INPUT;
const QueryErrorEnum_QueryError QueryErrorEnum::QueryError_MIN;
const QueryErrorEnum_QueryError QueryErrorEnum::QueryError_MAX;
const int QueryErrorEnum::QueryError_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

// ===================================================================

void QueryErrorEnum::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

QueryErrorEnum::QueryErrorEnum()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_google_2fads_2fgoogleads_2fv0_2ferrors_2fquery_5ferror_2eproto::scc_info_QueryErrorEnum.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.ads.googleads.v0.errors.QueryErrorEnum)
}
QueryErrorEnum::QueryErrorEnum(const QueryErrorEnum& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:google.ads.googleads.v0.errors.QueryErrorEnum)
}

void QueryErrorEnum::SharedCtor() {
}

QueryErrorEnum::~QueryErrorEnum() {
  // @@protoc_insertion_point(destructor:google.ads.googleads.v0.errors.QueryErrorEnum)
  SharedDtor();
}

void QueryErrorEnum::SharedDtor() {
}

void QueryErrorEnum::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* QueryErrorEnum::descriptor() {
  ::protobuf_google_2fads_2fgoogleads_2fv0_2ferrors_2fquery_5ferror_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_google_2fads_2fgoogleads_2fv0_2ferrors_2fquery_5ferror_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const QueryErrorEnum& QueryErrorEnum::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_google_2fads_2fgoogleads_2fv0_2ferrors_2fquery_5ferror_2eproto::scc_info_QueryErrorEnum.base);
  return *internal_default_instance();
}


void QueryErrorEnum::Clear() {
// @@protoc_insertion_point(message_clear_start:google.ads.googleads.v0.errors.QueryErrorEnum)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _internal_metadata_.Clear();
}

bool QueryErrorEnum::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.ads.googleads.v0.errors.QueryErrorEnum)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
  handle_unusual:
    if (tag == 0) {
      goto success;
    }
    DO_(::google::protobuf::internal::WireFormat::SkipField(
          input, tag, _internal_metadata_.mutable_unknown_fields()));
  }
success:
  // @@protoc_insertion_point(parse_success:google.ads.googleads.v0.errors.QueryErrorEnum)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.ads.googleads.v0.errors.QueryErrorEnum)
  return false;
#undef DO_
}

void QueryErrorEnum::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.ads.googleads.v0.errors.QueryErrorEnum)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:google.ads.googleads.v0.errors.QueryErrorEnum)
}

::google::protobuf::uint8* QueryErrorEnum::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:google.ads.googleads.v0.errors.QueryErrorEnum)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.ads.googleads.v0.errors.QueryErrorEnum)
  return target;
}

size_t QueryErrorEnum::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.ads.googleads.v0.errors.QueryErrorEnum)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void QueryErrorEnum::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.ads.googleads.v0.errors.QueryErrorEnum)
  GOOGLE_DCHECK_NE(&from, this);
  const QueryErrorEnum* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const QueryErrorEnum>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.ads.googleads.v0.errors.QueryErrorEnum)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.ads.googleads.v0.errors.QueryErrorEnum)
    MergeFrom(*source);
  }
}

void QueryErrorEnum::MergeFrom(const QueryErrorEnum& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.ads.googleads.v0.errors.QueryErrorEnum)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

}

void QueryErrorEnum::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.ads.googleads.v0.errors.QueryErrorEnum)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void QueryErrorEnum::CopyFrom(const QueryErrorEnum& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.ads.googleads.v0.errors.QueryErrorEnum)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool QueryErrorEnum::IsInitialized() const {
  return true;
}

void QueryErrorEnum::Swap(QueryErrorEnum* other) {
  if (other == this) return;
  InternalSwap(other);
}
void QueryErrorEnum::InternalSwap(QueryErrorEnum* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata QueryErrorEnum::GetMetadata() const {
  protobuf_google_2fads_2fgoogleads_2fv0_2ferrors_2fquery_5ferror_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_google_2fads_2fgoogleads_2fv0_2ferrors_2fquery_5ferror_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace errors
}  // namespace v0
}  // namespace googleads
}  // namespace ads
}  // namespace google
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::google::ads::googleads::v0::errors::QueryErrorEnum* Arena::CreateMaybeMessage< ::google::ads::googleads::v0::errors::QueryErrorEnum >(Arena* arena) {
  return Arena::CreateInternal< ::google::ads::googleads::v0::errors::QueryErrorEnum >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
