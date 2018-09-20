// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/ads/googleads/v0/resources/campaign_budget.proto

#include "google/ads/googleads/v0/resources/campaign_budget.pb.h"

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

namespace protobuf_google_2fprotobuf_2fwrappers_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_google_2fprotobuf_2fwrappers_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_BoolValue;
extern PROTOBUF_INTERNAL_EXPORT_protobuf_google_2fprotobuf_2fwrappers_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_Int64Value;
extern PROTOBUF_INTERNAL_EXPORT_protobuf_google_2fprotobuf_2fwrappers_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_StringValue;
}  // namespace protobuf_google_2fprotobuf_2fwrappers_2eproto
namespace google {
namespace ads {
namespace googleads {
namespace v0 {
namespace resources {
class CampaignBudgetDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<CampaignBudget>
      _instance;
} _CampaignBudget_default_instance_;
}  // namespace resources
}  // namespace v0
}  // namespace googleads
}  // namespace ads
}  // namespace google
namespace protobuf_google_2fads_2fgoogleads_2fv0_2fresources_2fcampaign_5fbudget_2eproto {
static void InitDefaultsCampaignBudget() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::google::ads::googleads::v0::resources::_CampaignBudget_default_instance_;
    new (ptr) ::google::ads::googleads::v0::resources::CampaignBudget();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::google::ads::googleads::v0::resources::CampaignBudget::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<3> scc_info_CampaignBudget =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 3, InitDefaultsCampaignBudget}, {
      &protobuf_google_2fprotobuf_2fwrappers_2eproto::scc_info_Int64Value.base,
      &protobuf_google_2fprotobuf_2fwrappers_2eproto::scc_info_StringValue.base,
      &protobuf_google_2fprotobuf_2fwrappers_2eproto::scc_info_BoolValue.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_CampaignBudget.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::ads::googleads::v0::resources::CampaignBudget, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::ads::googleads::v0::resources::CampaignBudget, resource_name_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::ads::googleads::v0::resources::CampaignBudget, id_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::ads::googleads::v0::resources::CampaignBudget, name_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::ads::googleads::v0::resources::CampaignBudget, amount_micros_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::ads::googleads::v0::resources::CampaignBudget, status_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::ads::googleads::v0::resources::CampaignBudget, delivery_method_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::ads::googleads::v0::resources::CampaignBudget, explicitly_shared_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::ads::googleads::v0::resources::CampaignBudget, reference_count_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::google::ads::googleads::v0::resources::CampaignBudget)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::google::ads::googleads::v0::resources::_CampaignBudget_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "google/ads/googleads/v0/resources/campaign_budget.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, NULL, NULL);
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
      "\n7google/ads/googleads/v0/resources/camp"
      "aign_budget.proto\022!google.ads.googleads."
      "v0.resources\032:google/ads/googleads/v0/en"
      "ums/budget_delivery_method.proto\0321google"
      "/ads/googleads/v0/enums/budget_status.pr"
      "oto\032\036google/protobuf/wrappers.proto\"\322\003\n\016"
      "CampaignBudget\022\025\n\rresource_name\030\001 \001(\t\022\'\n"
      "\002id\030\003 \001(\0132\033.google.protobuf.Int64Value\022*"
      "\n\004name\030\004 \001(\0132\034.google.protobuf.StringVal"
      "ue\0222\n\ramount_micros\030\005 \001(\0132\033.google.proto"
      "buf.Int64Value\022L\n\006status\030\006 \001(\0162<.google."
      "ads.googleads.v0.enums.BudgetStatusEnum."
      "BudgetStatus\022e\n\017delivery_method\030\007 \001(\0162L."
      "google.ads.googleads.v0.enums.BudgetDeli"
      "veryMethodEnum.BudgetDeliveryMethod\0225\n\021e"
      "xplicitly_shared\030\010 \001(\0132\032.google.protobuf"
      ".BoolValue\0224\n\017reference_count\030\t \001(\0132\033.go"
      "ogle.protobuf.Int64ValueB\260\001\n%com.google."
      "ads.googleads.v0.resourcesB\023CampaignBudg"
      "etProtoP\001\242\002\003GAA\252\002!Google.Ads.GoogleAds.V"
      "0.Resources\312\002!Google\\Ads\\GoogleAds\\V0\\Re"
      "sources\342\002!Google\\Ads\\GoogleAds\\V0\\Resour"
      "cesb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 891);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "google/ads/googleads/v0/resources/campaign_budget.proto", &protobuf_RegisterTypes);
  ::protobuf_google_2fads_2fgoogleads_2fv0_2fenums_2fbudget_5fdelivery_5fmethod_2eproto::AddDescriptors();
  ::protobuf_google_2fads_2fgoogleads_2fv0_2fenums_2fbudget_5fstatus_2eproto::AddDescriptors();
  ::protobuf_google_2fprotobuf_2fwrappers_2eproto::AddDescriptors();
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
}  // namespace protobuf_google_2fads_2fgoogleads_2fv0_2fresources_2fcampaign_5fbudget_2eproto
namespace google {
namespace ads {
namespace googleads {
namespace v0 {
namespace resources {

// ===================================================================

void CampaignBudget::InitAsDefaultInstance() {
  ::google::ads::googleads::v0::resources::_CampaignBudget_default_instance_._instance.get_mutable()->id_ = const_cast< ::google::protobuf::Int64Value*>(
      ::google::protobuf::Int64Value::internal_default_instance());
  ::google::ads::googleads::v0::resources::_CampaignBudget_default_instance_._instance.get_mutable()->name_ = const_cast< ::google::protobuf::StringValue*>(
      ::google::protobuf::StringValue::internal_default_instance());
  ::google::ads::googleads::v0::resources::_CampaignBudget_default_instance_._instance.get_mutable()->amount_micros_ = const_cast< ::google::protobuf::Int64Value*>(
      ::google::protobuf::Int64Value::internal_default_instance());
  ::google::ads::googleads::v0::resources::_CampaignBudget_default_instance_._instance.get_mutable()->explicitly_shared_ = const_cast< ::google::protobuf::BoolValue*>(
      ::google::protobuf::BoolValue::internal_default_instance());
  ::google::ads::googleads::v0::resources::_CampaignBudget_default_instance_._instance.get_mutable()->reference_count_ = const_cast< ::google::protobuf::Int64Value*>(
      ::google::protobuf::Int64Value::internal_default_instance());
}
void CampaignBudget::clear_id() {
  if (GetArenaNoVirtual() == NULL && id_ != NULL) {
    delete id_;
  }
  id_ = NULL;
}
void CampaignBudget::clear_name() {
  if (GetArenaNoVirtual() == NULL && name_ != NULL) {
    delete name_;
  }
  name_ = NULL;
}
void CampaignBudget::clear_amount_micros() {
  if (GetArenaNoVirtual() == NULL && amount_micros_ != NULL) {
    delete amount_micros_;
  }
  amount_micros_ = NULL;
}
void CampaignBudget::clear_explicitly_shared() {
  if (GetArenaNoVirtual() == NULL && explicitly_shared_ != NULL) {
    delete explicitly_shared_;
  }
  explicitly_shared_ = NULL;
}
void CampaignBudget::clear_reference_count() {
  if (GetArenaNoVirtual() == NULL && reference_count_ != NULL) {
    delete reference_count_;
  }
  reference_count_ = NULL;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int CampaignBudget::kResourceNameFieldNumber;
const int CampaignBudget::kIdFieldNumber;
const int CampaignBudget::kNameFieldNumber;
const int CampaignBudget::kAmountMicrosFieldNumber;
const int CampaignBudget::kStatusFieldNumber;
const int CampaignBudget::kDeliveryMethodFieldNumber;
const int CampaignBudget::kExplicitlySharedFieldNumber;
const int CampaignBudget::kReferenceCountFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

CampaignBudget::CampaignBudget()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_google_2fads_2fgoogleads_2fv0_2fresources_2fcampaign_5fbudget_2eproto::scc_info_CampaignBudget.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.ads.googleads.v0.resources.CampaignBudget)
}
CampaignBudget::CampaignBudget(const CampaignBudget& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  resource_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.resource_name().size() > 0) {
    resource_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.resource_name_);
  }
  if (from.has_id()) {
    id_ = new ::google::protobuf::Int64Value(*from.id_);
  } else {
    id_ = NULL;
  }
  if (from.has_name()) {
    name_ = new ::google::protobuf::StringValue(*from.name_);
  } else {
    name_ = NULL;
  }
  if (from.has_amount_micros()) {
    amount_micros_ = new ::google::protobuf::Int64Value(*from.amount_micros_);
  } else {
    amount_micros_ = NULL;
  }
  if (from.has_explicitly_shared()) {
    explicitly_shared_ = new ::google::protobuf::BoolValue(*from.explicitly_shared_);
  } else {
    explicitly_shared_ = NULL;
  }
  if (from.has_reference_count()) {
    reference_count_ = new ::google::protobuf::Int64Value(*from.reference_count_);
  } else {
    reference_count_ = NULL;
  }
  ::memcpy(&status_, &from.status_,
    static_cast<size_t>(reinterpret_cast<char*>(&delivery_method_) -
    reinterpret_cast<char*>(&status_)) + sizeof(delivery_method_));
  // @@protoc_insertion_point(copy_constructor:google.ads.googleads.v0.resources.CampaignBudget)
}

void CampaignBudget::SharedCtor() {
  resource_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&id_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&delivery_method_) -
      reinterpret_cast<char*>(&id_)) + sizeof(delivery_method_));
}

CampaignBudget::~CampaignBudget() {
  // @@protoc_insertion_point(destructor:google.ads.googleads.v0.resources.CampaignBudget)
  SharedDtor();
}

void CampaignBudget::SharedDtor() {
  resource_name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete id_;
  if (this != internal_default_instance()) delete name_;
  if (this != internal_default_instance()) delete amount_micros_;
  if (this != internal_default_instance()) delete explicitly_shared_;
  if (this != internal_default_instance()) delete reference_count_;
}

void CampaignBudget::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* CampaignBudget::descriptor() {
  ::protobuf_google_2fads_2fgoogleads_2fv0_2fresources_2fcampaign_5fbudget_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_google_2fads_2fgoogleads_2fv0_2fresources_2fcampaign_5fbudget_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const CampaignBudget& CampaignBudget::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_google_2fads_2fgoogleads_2fv0_2fresources_2fcampaign_5fbudget_2eproto::scc_info_CampaignBudget.base);
  return *internal_default_instance();
}


void CampaignBudget::Clear() {
// @@protoc_insertion_point(message_clear_start:google.ads.googleads.v0.resources.CampaignBudget)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  resource_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (GetArenaNoVirtual() == NULL && id_ != NULL) {
    delete id_;
  }
  id_ = NULL;
  if (GetArenaNoVirtual() == NULL && name_ != NULL) {
    delete name_;
  }
  name_ = NULL;
  if (GetArenaNoVirtual() == NULL && amount_micros_ != NULL) {
    delete amount_micros_;
  }
  amount_micros_ = NULL;
  if (GetArenaNoVirtual() == NULL && explicitly_shared_ != NULL) {
    delete explicitly_shared_;
  }
  explicitly_shared_ = NULL;
  if (GetArenaNoVirtual() == NULL && reference_count_ != NULL) {
    delete reference_count_;
  }
  reference_count_ = NULL;
  ::memset(&status_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&delivery_method_) -
      reinterpret_cast<char*>(&status_)) + sizeof(delivery_method_));
  _internal_metadata_.Clear();
}

bool CampaignBudget::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.ads.googleads.v0.resources.CampaignBudget)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string resource_name = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_resource_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->resource_name().data(), static_cast<int>(this->resource_name().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "google.ads.googleads.v0.resources.CampaignBudget.resource_name"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .google.protobuf.Int64Value id = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_id()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .google.protobuf.StringValue name = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_name()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .google.protobuf.Int64Value amount_micros = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u /* 42 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_amount_micros()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .google.ads.googleads.v0.enums.BudgetStatusEnum.BudgetStatus status = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(48u /* 48 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_status(static_cast< ::google::ads::googleads::v0::enums::BudgetStatusEnum_BudgetStatus >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .google.ads.googleads.v0.enums.BudgetDeliveryMethodEnum.BudgetDeliveryMethod delivery_method = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(56u /* 56 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_delivery_method(static_cast< ::google::ads::googleads::v0::enums::BudgetDeliveryMethodEnum_BudgetDeliveryMethod >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .google.protobuf.BoolValue explicitly_shared = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(66u /* 66 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_explicitly_shared()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .google.protobuf.Int64Value reference_count = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(74u /* 74 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_reference_count()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:google.ads.googleads.v0.resources.CampaignBudget)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.ads.googleads.v0.resources.CampaignBudget)
  return false;
#undef DO_
}

void CampaignBudget::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.ads.googleads.v0.resources.CampaignBudget)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string resource_name = 1;
  if (this->resource_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->resource_name().data(), static_cast<int>(this->resource_name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.ads.googleads.v0.resources.CampaignBudget.resource_name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->resource_name(), output);
  }

  // .google.protobuf.Int64Value id = 3;
  if (this->has_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, this->_internal_id(), output);
  }

  // .google.protobuf.StringValue name = 4;
  if (this->has_name()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, this->_internal_name(), output);
  }

  // .google.protobuf.Int64Value amount_micros = 5;
  if (this->has_amount_micros()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      5, this->_internal_amount_micros(), output);
  }

  // .google.ads.googleads.v0.enums.BudgetStatusEnum.BudgetStatus status = 6;
  if (this->status() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      6, this->status(), output);
  }

  // .google.ads.googleads.v0.enums.BudgetDeliveryMethodEnum.BudgetDeliveryMethod delivery_method = 7;
  if (this->delivery_method() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      7, this->delivery_method(), output);
  }

  // .google.protobuf.BoolValue explicitly_shared = 8;
  if (this->has_explicitly_shared()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      8, this->_internal_explicitly_shared(), output);
  }

  // .google.protobuf.Int64Value reference_count = 9;
  if (this->has_reference_count()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      9, this->_internal_reference_count(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:google.ads.googleads.v0.resources.CampaignBudget)
}

::google::protobuf::uint8* CampaignBudget::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:google.ads.googleads.v0.resources.CampaignBudget)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string resource_name = 1;
  if (this->resource_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->resource_name().data(), static_cast<int>(this->resource_name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.ads.googleads.v0.resources.CampaignBudget.resource_name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->resource_name(), target);
  }

  // .google.protobuf.Int64Value id = 3;
  if (this->has_id()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        3, this->_internal_id(), deterministic, target);
  }

  // .google.protobuf.StringValue name = 4;
  if (this->has_name()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        4, this->_internal_name(), deterministic, target);
  }

  // .google.protobuf.Int64Value amount_micros = 5;
  if (this->has_amount_micros()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        5, this->_internal_amount_micros(), deterministic, target);
  }

  // .google.ads.googleads.v0.enums.BudgetStatusEnum.BudgetStatus status = 6;
  if (this->status() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      6, this->status(), target);
  }

  // .google.ads.googleads.v0.enums.BudgetDeliveryMethodEnum.BudgetDeliveryMethod delivery_method = 7;
  if (this->delivery_method() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      7, this->delivery_method(), target);
  }

  // .google.protobuf.BoolValue explicitly_shared = 8;
  if (this->has_explicitly_shared()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        8, this->_internal_explicitly_shared(), deterministic, target);
  }

  // .google.protobuf.Int64Value reference_count = 9;
  if (this->has_reference_count()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        9, this->_internal_reference_count(), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.ads.googleads.v0.resources.CampaignBudget)
  return target;
}

size_t CampaignBudget::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.ads.googleads.v0.resources.CampaignBudget)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string resource_name = 1;
  if (this->resource_name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->resource_name());
  }

  // .google.protobuf.Int64Value id = 3;
  if (this->has_id()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *id_);
  }

  // .google.protobuf.StringValue name = 4;
  if (this->has_name()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *name_);
  }

  // .google.protobuf.Int64Value amount_micros = 5;
  if (this->has_amount_micros()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *amount_micros_);
  }

  // .google.protobuf.BoolValue explicitly_shared = 8;
  if (this->has_explicitly_shared()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *explicitly_shared_);
  }

  // .google.protobuf.Int64Value reference_count = 9;
  if (this->has_reference_count()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *reference_count_);
  }

  // .google.ads.googleads.v0.enums.BudgetStatusEnum.BudgetStatus status = 6;
  if (this->status() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->status());
  }

  // .google.ads.googleads.v0.enums.BudgetDeliveryMethodEnum.BudgetDeliveryMethod delivery_method = 7;
  if (this->delivery_method() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->delivery_method());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void CampaignBudget::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.ads.googleads.v0.resources.CampaignBudget)
  GOOGLE_DCHECK_NE(&from, this);
  const CampaignBudget* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const CampaignBudget>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.ads.googleads.v0.resources.CampaignBudget)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.ads.googleads.v0.resources.CampaignBudget)
    MergeFrom(*source);
  }
}

void CampaignBudget::MergeFrom(const CampaignBudget& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.ads.googleads.v0.resources.CampaignBudget)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.resource_name().size() > 0) {

    resource_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.resource_name_);
  }
  if (from.has_id()) {
    mutable_id()->::google::protobuf::Int64Value::MergeFrom(from.id());
  }
  if (from.has_name()) {
    mutable_name()->::google::protobuf::StringValue::MergeFrom(from.name());
  }
  if (from.has_amount_micros()) {
    mutable_amount_micros()->::google::protobuf::Int64Value::MergeFrom(from.amount_micros());
  }
  if (from.has_explicitly_shared()) {
    mutable_explicitly_shared()->::google::protobuf::BoolValue::MergeFrom(from.explicitly_shared());
  }
  if (from.has_reference_count()) {
    mutable_reference_count()->::google::protobuf::Int64Value::MergeFrom(from.reference_count());
  }
  if (from.status() != 0) {
    set_status(from.status());
  }
  if (from.delivery_method() != 0) {
    set_delivery_method(from.delivery_method());
  }
}

void CampaignBudget::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.ads.googleads.v0.resources.CampaignBudget)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CampaignBudget::CopyFrom(const CampaignBudget& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.ads.googleads.v0.resources.CampaignBudget)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CampaignBudget::IsInitialized() const {
  return true;
}

void CampaignBudget::Swap(CampaignBudget* other) {
  if (other == this) return;
  InternalSwap(other);
}
void CampaignBudget::InternalSwap(CampaignBudget* other) {
  using std::swap;
  resource_name_.Swap(&other->resource_name_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(id_, other->id_);
  swap(name_, other->name_);
  swap(amount_micros_, other->amount_micros_);
  swap(explicitly_shared_, other->explicitly_shared_);
  swap(reference_count_, other->reference_count_);
  swap(status_, other->status_);
  swap(delivery_method_, other->delivery_method_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata CampaignBudget::GetMetadata() const {
  protobuf_google_2fads_2fgoogleads_2fv0_2fresources_2fcampaign_5fbudget_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_google_2fads_2fgoogleads_2fv0_2fresources_2fcampaign_5fbudget_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace resources
}  // namespace v0
}  // namespace googleads
}  // namespace ads
}  // namespace google
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::google::ads::googleads::v0::resources::CampaignBudget* Arena::CreateMaybeMessage< ::google::ads::googleads::v0::resources::CampaignBudget >(Arena* arena) {
  return Arena::CreateInternal< ::google::ads::googleads::v0::resources::CampaignBudget >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)