// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/ads/googleads/v0/resources/customer.proto

#ifndef PROTOBUF_INCLUDED_google_2fads_2fgoogleads_2fv0_2fresources_2fcustomer_2eproto
#define PROTOBUF_INCLUDED_google_2fads_2fgoogleads_2fv0_2fresources_2fcustomer_2eproto

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
#include <google/protobuf/unknown_field_set.h>
#include <google/protobuf/wrappers.pb.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_google_2fads_2fgoogleads_2fv0_2fresources_2fcustomer_2eproto 

namespace protobuf_google_2fads_2fgoogleads_2fv0_2fresources_2fcustomer_2eproto {
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
}  // namespace protobuf_google_2fads_2fgoogleads_2fv0_2fresources_2fcustomer_2eproto
namespace google {
namespace ads {
namespace googleads {
namespace v0 {
namespace resources {
class Customer;
class CustomerDefaultTypeInternal;
extern CustomerDefaultTypeInternal _Customer_default_instance_;
}  // namespace resources
}  // namespace v0
}  // namespace googleads
}  // namespace ads
}  // namespace google
namespace google {
namespace protobuf {
template<> ::google::ads::googleads::v0::resources::Customer* Arena::CreateMaybeMessage<::google::ads::googleads::v0::resources::Customer>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace google {
namespace ads {
namespace googleads {
namespace v0 {
namespace resources {

// ===================================================================

class Customer : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.ads.googleads.v0.resources.Customer) */ {
 public:
  Customer();
  virtual ~Customer();

  Customer(const Customer& from);

  inline Customer& operator=(const Customer& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Customer(Customer&& from) noexcept
    : Customer() {
    *this = ::std::move(from);
  }

  inline Customer& operator=(Customer&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Customer& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Customer* internal_default_instance() {
    return reinterpret_cast<const Customer*>(
               &_Customer_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Customer* other);
  friend void swap(Customer& a, Customer& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Customer* New() const final {
    return CreateMaybeMessage<Customer>(NULL);
  }

  Customer* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Customer>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Customer& from);
  void MergeFrom(const Customer& from);
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
  void InternalSwap(Customer* other);
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

  // accessors -------------------------------------------------------

  // string resource_name = 1;
  void clear_resource_name();
  static const int kResourceNameFieldNumber = 1;
  const ::std::string& resource_name() const;
  void set_resource_name(const ::std::string& value);
  #if LANG_CXX11
  void set_resource_name(::std::string&& value);
  #endif
  void set_resource_name(const char* value);
  void set_resource_name(const char* value, size_t size);
  ::std::string* mutable_resource_name();
  ::std::string* release_resource_name();
  void set_allocated_resource_name(::std::string* resource_name);

  // .google.protobuf.Int64Value id = 3;
  bool has_id() const;
  void clear_id();
  static const int kIdFieldNumber = 3;
  private:
  const ::google::protobuf::Int64Value& _internal_id() const;
  public:
  const ::google::protobuf::Int64Value& id() const;
  ::google::protobuf::Int64Value* release_id();
  ::google::protobuf::Int64Value* mutable_id();
  void set_allocated_id(::google::protobuf::Int64Value* id);

  // .google.protobuf.StringValue descriptive_name = 4;
  bool has_descriptive_name() const;
  void clear_descriptive_name();
  static const int kDescriptiveNameFieldNumber = 4;
  private:
  const ::google::protobuf::StringValue& _internal_descriptive_name() const;
  public:
  const ::google::protobuf::StringValue& descriptive_name() const;
  ::google::protobuf::StringValue* release_descriptive_name();
  ::google::protobuf::StringValue* mutable_descriptive_name();
  void set_allocated_descriptive_name(::google::protobuf::StringValue* descriptive_name);

  // .google.protobuf.StringValue currency_code = 5;
  bool has_currency_code() const;
  void clear_currency_code();
  static const int kCurrencyCodeFieldNumber = 5;
  private:
  const ::google::protobuf::StringValue& _internal_currency_code() const;
  public:
  const ::google::protobuf::StringValue& currency_code() const;
  ::google::protobuf::StringValue* release_currency_code();
  ::google::protobuf::StringValue* mutable_currency_code();
  void set_allocated_currency_code(::google::protobuf::StringValue* currency_code);

  // .google.protobuf.StringValue time_zone = 6;
  bool has_time_zone() const;
  void clear_time_zone();
  static const int kTimeZoneFieldNumber = 6;
  private:
  const ::google::protobuf::StringValue& _internal_time_zone() const;
  public:
  const ::google::protobuf::StringValue& time_zone() const;
  ::google::protobuf::StringValue* release_time_zone();
  ::google::protobuf::StringValue* mutable_time_zone();
  void set_allocated_time_zone(::google::protobuf::StringValue* time_zone);

  // .google.protobuf.StringValue tracking_url_template = 7;
  bool has_tracking_url_template() const;
  void clear_tracking_url_template();
  static const int kTrackingUrlTemplateFieldNumber = 7;
  private:
  const ::google::protobuf::StringValue& _internal_tracking_url_template() const;
  public:
  const ::google::protobuf::StringValue& tracking_url_template() const;
  ::google::protobuf::StringValue* release_tracking_url_template();
  ::google::protobuf::StringValue* mutable_tracking_url_template();
  void set_allocated_tracking_url_template(::google::protobuf::StringValue* tracking_url_template);

  // .google.protobuf.BoolValue auto_tagging_enabled = 8;
  bool has_auto_tagging_enabled() const;
  void clear_auto_tagging_enabled();
  static const int kAutoTaggingEnabledFieldNumber = 8;
  private:
  const ::google::protobuf::BoolValue& _internal_auto_tagging_enabled() const;
  public:
  const ::google::protobuf::BoolValue& auto_tagging_enabled() const;
  ::google::protobuf::BoolValue* release_auto_tagging_enabled();
  ::google::protobuf::BoolValue* mutable_auto_tagging_enabled();
  void set_allocated_auto_tagging_enabled(::google::protobuf::BoolValue* auto_tagging_enabled);

  // .google.protobuf.BoolValue has_partners_badge = 9;
  bool has_has_partners_badge() const;
  void clear_has_partners_badge();
  static const int kHasPartnersBadgeFieldNumber = 9;
  private:
  const ::google::protobuf::BoolValue& _internal_has_partners_badge() const;
  public:
  const ::google::protobuf::BoolValue& has_partners_badge() const;
  ::google::protobuf::BoolValue* release_has_partners_badge();
  ::google::protobuf::BoolValue* mutable_has_partners_badge();
  void set_allocated_has_partners_badge(::google::protobuf::BoolValue* has_partners_badge);

  // @@protoc_insertion_point(class_scope:google.ads.googleads.v0.resources.Customer)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr resource_name_;
  ::google::protobuf::Int64Value* id_;
  ::google::protobuf::StringValue* descriptive_name_;
  ::google::protobuf::StringValue* currency_code_;
  ::google::protobuf::StringValue* time_zone_;
  ::google::protobuf::StringValue* tracking_url_template_;
  ::google::protobuf::BoolValue* auto_tagging_enabled_;
  ::google::protobuf::BoolValue* has_partners_badge_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_google_2fads_2fgoogleads_2fv0_2fresources_2fcustomer_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Customer

// string resource_name = 1;
inline void Customer::clear_resource_name() {
  resource_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Customer::resource_name() const {
  // @@protoc_insertion_point(field_get:google.ads.googleads.v0.resources.Customer.resource_name)
  return resource_name_.GetNoArena();
}
inline void Customer::set_resource_name(const ::std::string& value) {
  
  resource_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.ads.googleads.v0.resources.Customer.resource_name)
}
#if LANG_CXX11
inline void Customer::set_resource_name(::std::string&& value) {
  
  resource_name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:google.ads.googleads.v0.resources.Customer.resource_name)
}
#endif
inline void Customer::set_resource_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  resource_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.ads.googleads.v0.resources.Customer.resource_name)
}
inline void Customer::set_resource_name(const char* value, size_t size) {
  
  resource_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.ads.googleads.v0.resources.Customer.resource_name)
}
inline ::std::string* Customer::mutable_resource_name() {
  
  // @@protoc_insertion_point(field_mutable:google.ads.googleads.v0.resources.Customer.resource_name)
  return resource_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Customer::release_resource_name() {
  // @@protoc_insertion_point(field_release:google.ads.googleads.v0.resources.Customer.resource_name)
  
  return resource_name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Customer::set_allocated_resource_name(::std::string* resource_name) {
  if (resource_name != NULL) {
    
  } else {
    
  }
  resource_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), resource_name);
  // @@protoc_insertion_point(field_set_allocated:google.ads.googleads.v0.resources.Customer.resource_name)
}

// .google.protobuf.Int64Value id = 3;
inline bool Customer::has_id() const {
  return this != internal_default_instance() && id_ != NULL;
}
inline const ::google::protobuf::Int64Value& Customer::_internal_id() const {
  return *id_;
}
inline const ::google::protobuf::Int64Value& Customer::id() const {
  const ::google::protobuf::Int64Value* p = id_;
  // @@protoc_insertion_point(field_get:google.ads.googleads.v0.resources.Customer.id)
  return p != NULL ? *p : *reinterpret_cast<const ::google::protobuf::Int64Value*>(
      &::google::protobuf::_Int64Value_default_instance_);
}
inline ::google::protobuf::Int64Value* Customer::release_id() {
  // @@protoc_insertion_point(field_release:google.ads.googleads.v0.resources.Customer.id)
  
  ::google::protobuf::Int64Value* temp = id_;
  id_ = NULL;
  return temp;
}
inline ::google::protobuf::Int64Value* Customer::mutable_id() {
  
  if (id_ == NULL) {
    auto* p = CreateMaybeMessage<::google::protobuf::Int64Value>(GetArenaNoVirtual());
    id_ = p;
  }
  // @@protoc_insertion_point(field_mutable:google.ads.googleads.v0.resources.Customer.id)
  return id_;
}
inline void Customer::set_allocated_id(::google::protobuf::Int64Value* id) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(id_);
  }
  if (id) {
    ::google::protobuf::Arena* submessage_arena =
      reinterpret_cast<::google::protobuf::MessageLite*>(id)->GetArena();
    if (message_arena != submessage_arena) {
      id = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, id, submessage_arena);
    }
    
  } else {
    
  }
  id_ = id;
  // @@protoc_insertion_point(field_set_allocated:google.ads.googleads.v0.resources.Customer.id)
}

// .google.protobuf.StringValue descriptive_name = 4;
inline bool Customer::has_descriptive_name() const {
  return this != internal_default_instance() && descriptive_name_ != NULL;
}
inline const ::google::protobuf::StringValue& Customer::_internal_descriptive_name() const {
  return *descriptive_name_;
}
inline const ::google::protobuf::StringValue& Customer::descriptive_name() const {
  const ::google::protobuf::StringValue* p = descriptive_name_;
  // @@protoc_insertion_point(field_get:google.ads.googleads.v0.resources.Customer.descriptive_name)
  return p != NULL ? *p : *reinterpret_cast<const ::google::protobuf::StringValue*>(
      &::google::protobuf::_StringValue_default_instance_);
}
inline ::google::protobuf::StringValue* Customer::release_descriptive_name() {
  // @@protoc_insertion_point(field_release:google.ads.googleads.v0.resources.Customer.descriptive_name)
  
  ::google::protobuf::StringValue* temp = descriptive_name_;
  descriptive_name_ = NULL;
  return temp;
}
inline ::google::protobuf::StringValue* Customer::mutable_descriptive_name() {
  
  if (descriptive_name_ == NULL) {
    auto* p = CreateMaybeMessage<::google::protobuf::StringValue>(GetArenaNoVirtual());
    descriptive_name_ = p;
  }
  // @@protoc_insertion_point(field_mutable:google.ads.googleads.v0.resources.Customer.descriptive_name)
  return descriptive_name_;
}
inline void Customer::set_allocated_descriptive_name(::google::protobuf::StringValue* descriptive_name) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(descriptive_name_);
  }
  if (descriptive_name) {
    ::google::protobuf::Arena* submessage_arena =
      reinterpret_cast<::google::protobuf::MessageLite*>(descriptive_name)->GetArena();
    if (message_arena != submessage_arena) {
      descriptive_name = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, descriptive_name, submessage_arena);
    }
    
  } else {
    
  }
  descriptive_name_ = descriptive_name;
  // @@protoc_insertion_point(field_set_allocated:google.ads.googleads.v0.resources.Customer.descriptive_name)
}

// .google.protobuf.StringValue currency_code = 5;
inline bool Customer::has_currency_code() const {
  return this != internal_default_instance() && currency_code_ != NULL;
}
inline const ::google::protobuf::StringValue& Customer::_internal_currency_code() const {
  return *currency_code_;
}
inline const ::google::protobuf::StringValue& Customer::currency_code() const {
  const ::google::protobuf::StringValue* p = currency_code_;
  // @@protoc_insertion_point(field_get:google.ads.googleads.v0.resources.Customer.currency_code)
  return p != NULL ? *p : *reinterpret_cast<const ::google::protobuf::StringValue*>(
      &::google::protobuf::_StringValue_default_instance_);
}
inline ::google::protobuf::StringValue* Customer::release_currency_code() {
  // @@protoc_insertion_point(field_release:google.ads.googleads.v0.resources.Customer.currency_code)
  
  ::google::protobuf::StringValue* temp = currency_code_;
  currency_code_ = NULL;
  return temp;
}
inline ::google::protobuf::StringValue* Customer::mutable_currency_code() {
  
  if (currency_code_ == NULL) {
    auto* p = CreateMaybeMessage<::google::protobuf::StringValue>(GetArenaNoVirtual());
    currency_code_ = p;
  }
  // @@protoc_insertion_point(field_mutable:google.ads.googleads.v0.resources.Customer.currency_code)
  return currency_code_;
}
inline void Customer::set_allocated_currency_code(::google::protobuf::StringValue* currency_code) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(currency_code_);
  }
  if (currency_code) {
    ::google::protobuf::Arena* submessage_arena =
      reinterpret_cast<::google::protobuf::MessageLite*>(currency_code)->GetArena();
    if (message_arena != submessage_arena) {
      currency_code = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, currency_code, submessage_arena);
    }
    
  } else {
    
  }
  currency_code_ = currency_code;
  // @@protoc_insertion_point(field_set_allocated:google.ads.googleads.v0.resources.Customer.currency_code)
}

// .google.protobuf.StringValue time_zone = 6;
inline bool Customer::has_time_zone() const {
  return this != internal_default_instance() && time_zone_ != NULL;
}
inline const ::google::protobuf::StringValue& Customer::_internal_time_zone() const {
  return *time_zone_;
}
inline const ::google::protobuf::StringValue& Customer::time_zone() const {
  const ::google::protobuf::StringValue* p = time_zone_;
  // @@protoc_insertion_point(field_get:google.ads.googleads.v0.resources.Customer.time_zone)
  return p != NULL ? *p : *reinterpret_cast<const ::google::protobuf::StringValue*>(
      &::google::protobuf::_StringValue_default_instance_);
}
inline ::google::protobuf::StringValue* Customer::release_time_zone() {
  // @@protoc_insertion_point(field_release:google.ads.googleads.v0.resources.Customer.time_zone)
  
  ::google::protobuf::StringValue* temp = time_zone_;
  time_zone_ = NULL;
  return temp;
}
inline ::google::protobuf::StringValue* Customer::mutable_time_zone() {
  
  if (time_zone_ == NULL) {
    auto* p = CreateMaybeMessage<::google::protobuf::StringValue>(GetArenaNoVirtual());
    time_zone_ = p;
  }
  // @@protoc_insertion_point(field_mutable:google.ads.googleads.v0.resources.Customer.time_zone)
  return time_zone_;
}
inline void Customer::set_allocated_time_zone(::google::protobuf::StringValue* time_zone) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(time_zone_);
  }
  if (time_zone) {
    ::google::protobuf::Arena* submessage_arena =
      reinterpret_cast<::google::protobuf::MessageLite*>(time_zone)->GetArena();
    if (message_arena != submessage_arena) {
      time_zone = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, time_zone, submessage_arena);
    }
    
  } else {
    
  }
  time_zone_ = time_zone;
  // @@protoc_insertion_point(field_set_allocated:google.ads.googleads.v0.resources.Customer.time_zone)
}

// .google.protobuf.StringValue tracking_url_template = 7;
inline bool Customer::has_tracking_url_template() const {
  return this != internal_default_instance() && tracking_url_template_ != NULL;
}
inline const ::google::protobuf::StringValue& Customer::_internal_tracking_url_template() const {
  return *tracking_url_template_;
}
inline const ::google::protobuf::StringValue& Customer::tracking_url_template() const {
  const ::google::protobuf::StringValue* p = tracking_url_template_;
  // @@protoc_insertion_point(field_get:google.ads.googleads.v0.resources.Customer.tracking_url_template)
  return p != NULL ? *p : *reinterpret_cast<const ::google::protobuf::StringValue*>(
      &::google::protobuf::_StringValue_default_instance_);
}
inline ::google::protobuf::StringValue* Customer::release_tracking_url_template() {
  // @@protoc_insertion_point(field_release:google.ads.googleads.v0.resources.Customer.tracking_url_template)
  
  ::google::protobuf::StringValue* temp = tracking_url_template_;
  tracking_url_template_ = NULL;
  return temp;
}
inline ::google::protobuf::StringValue* Customer::mutable_tracking_url_template() {
  
  if (tracking_url_template_ == NULL) {
    auto* p = CreateMaybeMessage<::google::protobuf::StringValue>(GetArenaNoVirtual());
    tracking_url_template_ = p;
  }
  // @@protoc_insertion_point(field_mutable:google.ads.googleads.v0.resources.Customer.tracking_url_template)
  return tracking_url_template_;
}
inline void Customer::set_allocated_tracking_url_template(::google::protobuf::StringValue* tracking_url_template) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(tracking_url_template_);
  }
  if (tracking_url_template) {
    ::google::protobuf::Arena* submessage_arena =
      reinterpret_cast<::google::protobuf::MessageLite*>(tracking_url_template)->GetArena();
    if (message_arena != submessage_arena) {
      tracking_url_template = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, tracking_url_template, submessage_arena);
    }
    
  } else {
    
  }
  tracking_url_template_ = tracking_url_template;
  // @@protoc_insertion_point(field_set_allocated:google.ads.googleads.v0.resources.Customer.tracking_url_template)
}

// .google.protobuf.BoolValue auto_tagging_enabled = 8;
inline bool Customer::has_auto_tagging_enabled() const {
  return this != internal_default_instance() && auto_tagging_enabled_ != NULL;
}
inline const ::google::protobuf::BoolValue& Customer::_internal_auto_tagging_enabled() const {
  return *auto_tagging_enabled_;
}
inline const ::google::protobuf::BoolValue& Customer::auto_tagging_enabled() const {
  const ::google::protobuf::BoolValue* p = auto_tagging_enabled_;
  // @@protoc_insertion_point(field_get:google.ads.googleads.v0.resources.Customer.auto_tagging_enabled)
  return p != NULL ? *p : *reinterpret_cast<const ::google::protobuf::BoolValue*>(
      &::google::protobuf::_BoolValue_default_instance_);
}
inline ::google::protobuf::BoolValue* Customer::release_auto_tagging_enabled() {
  // @@protoc_insertion_point(field_release:google.ads.googleads.v0.resources.Customer.auto_tagging_enabled)
  
  ::google::protobuf::BoolValue* temp = auto_tagging_enabled_;
  auto_tagging_enabled_ = NULL;
  return temp;
}
inline ::google::protobuf::BoolValue* Customer::mutable_auto_tagging_enabled() {
  
  if (auto_tagging_enabled_ == NULL) {
    auto* p = CreateMaybeMessage<::google::protobuf::BoolValue>(GetArenaNoVirtual());
    auto_tagging_enabled_ = p;
  }
  // @@protoc_insertion_point(field_mutable:google.ads.googleads.v0.resources.Customer.auto_tagging_enabled)
  return auto_tagging_enabled_;
}
inline void Customer::set_allocated_auto_tagging_enabled(::google::protobuf::BoolValue* auto_tagging_enabled) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(auto_tagging_enabled_);
  }
  if (auto_tagging_enabled) {
    ::google::protobuf::Arena* submessage_arena =
      reinterpret_cast<::google::protobuf::MessageLite*>(auto_tagging_enabled)->GetArena();
    if (message_arena != submessage_arena) {
      auto_tagging_enabled = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, auto_tagging_enabled, submessage_arena);
    }
    
  } else {
    
  }
  auto_tagging_enabled_ = auto_tagging_enabled;
  // @@protoc_insertion_point(field_set_allocated:google.ads.googleads.v0.resources.Customer.auto_tagging_enabled)
}

// .google.protobuf.BoolValue has_partners_badge = 9;
inline bool Customer::has_has_partners_badge() const {
  return this != internal_default_instance() && has_partners_badge_ != NULL;
}
inline const ::google::protobuf::BoolValue& Customer::_internal_has_partners_badge() const {
  return *has_partners_badge_;
}
inline const ::google::protobuf::BoolValue& Customer::has_partners_badge() const {
  const ::google::protobuf::BoolValue* p = has_partners_badge_;
  // @@protoc_insertion_point(field_get:google.ads.googleads.v0.resources.Customer.has_partners_badge)
  return p != NULL ? *p : *reinterpret_cast<const ::google::protobuf::BoolValue*>(
      &::google::protobuf::_BoolValue_default_instance_);
}
inline ::google::protobuf::BoolValue* Customer::release_has_partners_badge() {
  // @@protoc_insertion_point(field_release:google.ads.googleads.v0.resources.Customer.has_partners_badge)
  
  ::google::protobuf::BoolValue* temp = has_partners_badge_;
  has_partners_badge_ = NULL;
  return temp;
}
inline ::google::protobuf::BoolValue* Customer::mutable_has_partners_badge() {
  
  if (has_partners_badge_ == NULL) {
    auto* p = CreateMaybeMessage<::google::protobuf::BoolValue>(GetArenaNoVirtual());
    has_partners_badge_ = p;
  }
  // @@protoc_insertion_point(field_mutable:google.ads.googleads.v0.resources.Customer.has_partners_badge)
  return has_partners_badge_;
}
inline void Customer::set_allocated_has_partners_badge(::google::protobuf::BoolValue* has_partners_badge) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(has_partners_badge_);
  }
  if (has_partners_badge) {
    ::google::protobuf::Arena* submessage_arena =
      reinterpret_cast<::google::protobuf::MessageLite*>(has_partners_badge)->GetArena();
    if (message_arena != submessage_arena) {
      has_partners_badge = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, has_partners_badge, submessage_arena);
    }
    
  } else {
    
  }
  has_partners_badge_ = has_partners_badge;
  // @@protoc_insertion_point(field_set_allocated:google.ads.googleads.v0.resources.Customer.has_partners_badge)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace resources
}  // namespace v0
}  // namespace googleads
}  // namespace ads
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_google_2fads_2fgoogleads_2fv0_2fresources_2fcustomer_2eproto
