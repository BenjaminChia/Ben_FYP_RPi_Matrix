// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/ads/googleads/v0/resources/bidding_strategy.proto

#ifndef PROTOBUF_INCLUDED_google_2fads_2fgoogleads_2fv0_2fresources_2fbidding_5fstrategy_2eproto
#define PROTOBUF_INCLUDED_google_2fads_2fgoogleads_2fv0_2fresources_2fbidding_5fstrategy_2eproto

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
#include "google/ads/googleads/v0/common/bidding.pb.h"
#include "google/ads/googleads/v0/enums/bidding_strategy_type.pb.h"
#include <google/protobuf/wrappers.pb.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_google_2fads_2fgoogleads_2fv0_2fresources_2fbidding_5fstrategy_2eproto 

namespace protobuf_google_2fads_2fgoogleads_2fv0_2fresources_2fbidding_5fstrategy_2eproto {
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
}  // namespace protobuf_google_2fads_2fgoogleads_2fv0_2fresources_2fbidding_5fstrategy_2eproto
namespace google {
namespace ads {
namespace googleads {
namespace v0 {
namespace resources {
class BiddingStrategy;
class BiddingStrategyDefaultTypeInternal;
extern BiddingStrategyDefaultTypeInternal _BiddingStrategy_default_instance_;
}  // namespace resources
}  // namespace v0
}  // namespace googleads
}  // namespace ads
}  // namespace google
namespace google {
namespace protobuf {
template<> ::google::ads::googleads::v0::resources::BiddingStrategy* Arena::CreateMaybeMessage<::google::ads::googleads::v0::resources::BiddingStrategy>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace google {
namespace ads {
namespace googleads {
namespace v0 {
namespace resources {

// ===================================================================

class BiddingStrategy : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.ads.googleads.v0.resources.BiddingStrategy) */ {
 public:
  BiddingStrategy();
  virtual ~BiddingStrategy();

  BiddingStrategy(const BiddingStrategy& from);

  inline BiddingStrategy& operator=(const BiddingStrategy& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  BiddingStrategy(BiddingStrategy&& from) noexcept
    : BiddingStrategy() {
    *this = ::std::move(from);
  }

  inline BiddingStrategy& operator=(BiddingStrategy&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const BiddingStrategy& default_instance();

  enum SchemeCase {
    kEnhancedCpc = 7,
    kPageOnePromoted = 8,
    kTargetCpa = 9,
    kTargetOutrankShare = 10,
    kTargetRoas = 11,
    kTargetSpend = 12,
    SCHEME_NOT_SET = 0,
  };

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const BiddingStrategy* internal_default_instance() {
    return reinterpret_cast<const BiddingStrategy*>(
               &_BiddingStrategy_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(BiddingStrategy* other);
  friend void swap(BiddingStrategy& a, BiddingStrategy& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline BiddingStrategy* New() const final {
    return CreateMaybeMessage<BiddingStrategy>(NULL);
  }

  BiddingStrategy* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<BiddingStrategy>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const BiddingStrategy& from);
  void MergeFrom(const BiddingStrategy& from);
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
  void InternalSwap(BiddingStrategy* other);
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

  // .google.protobuf.StringValue name = 4;
  bool has_name() const;
  void clear_name();
  static const int kNameFieldNumber = 4;
  private:
  const ::google::protobuf::StringValue& _internal_name() const;
  public:
  const ::google::protobuf::StringValue& name() const;
  ::google::protobuf::StringValue* release_name();
  ::google::protobuf::StringValue* mutable_name();
  void set_allocated_name(::google::protobuf::StringValue* name);

  // .google.ads.googleads.v0.enums.BiddingStrategyTypeEnum.BiddingStrategyType type = 5;
  void clear_type();
  static const int kTypeFieldNumber = 5;
  ::google::ads::googleads::v0::enums::BiddingStrategyTypeEnum_BiddingStrategyType type() const;
  void set_type(::google::ads::googleads::v0::enums::BiddingStrategyTypeEnum_BiddingStrategyType value);

  // .google.ads.googleads.v0.common.EnhancedCpc enhanced_cpc = 7;
  bool has_enhanced_cpc() const;
  void clear_enhanced_cpc();
  static const int kEnhancedCpcFieldNumber = 7;
  private:
  const ::google::ads::googleads::v0::common::EnhancedCpc& _internal_enhanced_cpc() const;
  public:
  const ::google::ads::googleads::v0::common::EnhancedCpc& enhanced_cpc() const;
  ::google::ads::googleads::v0::common::EnhancedCpc* release_enhanced_cpc();
  ::google::ads::googleads::v0::common::EnhancedCpc* mutable_enhanced_cpc();
  void set_allocated_enhanced_cpc(::google::ads::googleads::v0::common::EnhancedCpc* enhanced_cpc);

  // .google.ads.googleads.v0.common.PageOnePromoted page_one_promoted = 8;
  bool has_page_one_promoted() const;
  void clear_page_one_promoted();
  static const int kPageOnePromotedFieldNumber = 8;
  private:
  const ::google::ads::googleads::v0::common::PageOnePromoted& _internal_page_one_promoted() const;
  public:
  const ::google::ads::googleads::v0::common::PageOnePromoted& page_one_promoted() const;
  ::google::ads::googleads::v0::common::PageOnePromoted* release_page_one_promoted();
  ::google::ads::googleads::v0::common::PageOnePromoted* mutable_page_one_promoted();
  void set_allocated_page_one_promoted(::google::ads::googleads::v0::common::PageOnePromoted* page_one_promoted);

  // .google.ads.googleads.v0.common.TargetCpa target_cpa = 9;
  bool has_target_cpa() const;
  void clear_target_cpa();
  static const int kTargetCpaFieldNumber = 9;
  private:
  const ::google::ads::googleads::v0::common::TargetCpa& _internal_target_cpa() const;
  public:
  const ::google::ads::googleads::v0::common::TargetCpa& target_cpa() const;
  ::google::ads::googleads::v0::common::TargetCpa* release_target_cpa();
  ::google::ads::googleads::v0::common::TargetCpa* mutable_target_cpa();
  void set_allocated_target_cpa(::google::ads::googleads::v0::common::TargetCpa* target_cpa);

  // .google.ads.googleads.v0.common.TargetOutrankShare target_outrank_share = 10;
  bool has_target_outrank_share() const;
  void clear_target_outrank_share();
  static const int kTargetOutrankShareFieldNumber = 10;
  private:
  const ::google::ads::googleads::v0::common::TargetOutrankShare& _internal_target_outrank_share() const;
  public:
  const ::google::ads::googleads::v0::common::TargetOutrankShare& target_outrank_share() const;
  ::google::ads::googleads::v0::common::TargetOutrankShare* release_target_outrank_share();
  ::google::ads::googleads::v0::common::TargetOutrankShare* mutable_target_outrank_share();
  void set_allocated_target_outrank_share(::google::ads::googleads::v0::common::TargetOutrankShare* target_outrank_share);

  // .google.ads.googleads.v0.common.TargetRoas target_roas = 11;
  bool has_target_roas() const;
  void clear_target_roas();
  static const int kTargetRoasFieldNumber = 11;
  private:
  const ::google::ads::googleads::v0::common::TargetRoas& _internal_target_roas() const;
  public:
  const ::google::ads::googleads::v0::common::TargetRoas& target_roas() const;
  ::google::ads::googleads::v0::common::TargetRoas* release_target_roas();
  ::google::ads::googleads::v0::common::TargetRoas* mutable_target_roas();
  void set_allocated_target_roas(::google::ads::googleads::v0::common::TargetRoas* target_roas);

  // .google.ads.googleads.v0.common.TargetSpend target_spend = 12;
  bool has_target_spend() const;
  void clear_target_spend();
  static const int kTargetSpendFieldNumber = 12;
  private:
  const ::google::ads::googleads::v0::common::TargetSpend& _internal_target_spend() const;
  public:
  const ::google::ads::googleads::v0::common::TargetSpend& target_spend() const;
  ::google::ads::googleads::v0::common::TargetSpend* release_target_spend();
  ::google::ads::googleads::v0::common::TargetSpend* mutable_target_spend();
  void set_allocated_target_spend(::google::ads::googleads::v0::common::TargetSpend* target_spend);

  void clear_scheme();
  SchemeCase scheme_case() const;
  // @@protoc_insertion_point(class_scope:google.ads.googleads.v0.resources.BiddingStrategy)
 private:
  void set_has_enhanced_cpc();
  void set_has_page_one_promoted();
  void set_has_target_cpa();
  void set_has_target_outrank_share();
  void set_has_target_roas();
  void set_has_target_spend();

  inline bool has_scheme() const;
  inline void clear_has_scheme();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr resource_name_;
  ::google::protobuf::Int64Value* id_;
  ::google::protobuf::StringValue* name_;
  int type_;
  union SchemeUnion {
    SchemeUnion() {}
    ::google::ads::googleads::v0::common::EnhancedCpc* enhanced_cpc_;
    ::google::ads::googleads::v0::common::PageOnePromoted* page_one_promoted_;
    ::google::ads::googleads::v0::common::TargetCpa* target_cpa_;
    ::google::ads::googleads::v0::common::TargetOutrankShare* target_outrank_share_;
    ::google::ads::googleads::v0::common::TargetRoas* target_roas_;
    ::google::ads::googleads::v0::common::TargetSpend* target_spend_;
  } scheme_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::uint32 _oneof_case_[1];

  friend struct ::protobuf_google_2fads_2fgoogleads_2fv0_2fresources_2fbidding_5fstrategy_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// BiddingStrategy

// string resource_name = 1;
inline void BiddingStrategy::clear_resource_name() {
  resource_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& BiddingStrategy::resource_name() const {
  // @@protoc_insertion_point(field_get:google.ads.googleads.v0.resources.BiddingStrategy.resource_name)
  return resource_name_.GetNoArena();
}
inline void BiddingStrategy::set_resource_name(const ::std::string& value) {
  
  resource_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.ads.googleads.v0.resources.BiddingStrategy.resource_name)
}
#if LANG_CXX11
inline void BiddingStrategy::set_resource_name(::std::string&& value) {
  
  resource_name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:google.ads.googleads.v0.resources.BiddingStrategy.resource_name)
}
#endif
inline void BiddingStrategy::set_resource_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  resource_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.ads.googleads.v0.resources.BiddingStrategy.resource_name)
}
inline void BiddingStrategy::set_resource_name(const char* value, size_t size) {
  
  resource_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.ads.googleads.v0.resources.BiddingStrategy.resource_name)
}
inline ::std::string* BiddingStrategy::mutable_resource_name() {
  
  // @@protoc_insertion_point(field_mutable:google.ads.googleads.v0.resources.BiddingStrategy.resource_name)
  return resource_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* BiddingStrategy::release_resource_name() {
  // @@protoc_insertion_point(field_release:google.ads.googleads.v0.resources.BiddingStrategy.resource_name)
  
  return resource_name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void BiddingStrategy::set_allocated_resource_name(::std::string* resource_name) {
  if (resource_name != NULL) {
    
  } else {
    
  }
  resource_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), resource_name);
  // @@protoc_insertion_point(field_set_allocated:google.ads.googleads.v0.resources.BiddingStrategy.resource_name)
}

// .google.protobuf.Int64Value id = 3;
inline bool BiddingStrategy::has_id() const {
  return this != internal_default_instance() && id_ != NULL;
}
inline const ::google::protobuf::Int64Value& BiddingStrategy::_internal_id() const {
  return *id_;
}
inline const ::google::protobuf::Int64Value& BiddingStrategy::id() const {
  const ::google::protobuf::Int64Value* p = id_;
  // @@protoc_insertion_point(field_get:google.ads.googleads.v0.resources.BiddingStrategy.id)
  return p != NULL ? *p : *reinterpret_cast<const ::google::protobuf::Int64Value*>(
      &::google::protobuf::_Int64Value_default_instance_);
}
inline ::google::protobuf::Int64Value* BiddingStrategy::release_id() {
  // @@protoc_insertion_point(field_release:google.ads.googleads.v0.resources.BiddingStrategy.id)
  
  ::google::protobuf::Int64Value* temp = id_;
  id_ = NULL;
  return temp;
}
inline ::google::protobuf::Int64Value* BiddingStrategy::mutable_id() {
  
  if (id_ == NULL) {
    auto* p = CreateMaybeMessage<::google::protobuf::Int64Value>(GetArenaNoVirtual());
    id_ = p;
  }
  // @@protoc_insertion_point(field_mutable:google.ads.googleads.v0.resources.BiddingStrategy.id)
  return id_;
}
inline void BiddingStrategy::set_allocated_id(::google::protobuf::Int64Value* id) {
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
  // @@protoc_insertion_point(field_set_allocated:google.ads.googleads.v0.resources.BiddingStrategy.id)
}

// .google.protobuf.StringValue name = 4;
inline bool BiddingStrategy::has_name() const {
  return this != internal_default_instance() && name_ != NULL;
}
inline const ::google::protobuf::StringValue& BiddingStrategy::_internal_name() const {
  return *name_;
}
inline const ::google::protobuf::StringValue& BiddingStrategy::name() const {
  const ::google::protobuf::StringValue* p = name_;
  // @@protoc_insertion_point(field_get:google.ads.googleads.v0.resources.BiddingStrategy.name)
  return p != NULL ? *p : *reinterpret_cast<const ::google::protobuf::StringValue*>(
      &::google::protobuf::_StringValue_default_instance_);
}
inline ::google::protobuf::StringValue* BiddingStrategy::release_name() {
  // @@protoc_insertion_point(field_release:google.ads.googleads.v0.resources.BiddingStrategy.name)
  
  ::google::protobuf::StringValue* temp = name_;
  name_ = NULL;
  return temp;
}
inline ::google::protobuf::StringValue* BiddingStrategy::mutable_name() {
  
  if (name_ == NULL) {
    auto* p = CreateMaybeMessage<::google::protobuf::StringValue>(GetArenaNoVirtual());
    name_ = p;
  }
  // @@protoc_insertion_point(field_mutable:google.ads.googleads.v0.resources.BiddingStrategy.name)
  return name_;
}
inline void BiddingStrategy::set_allocated_name(::google::protobuf::StringValue* name) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(name_);
  }
  if (name) {
    ::google::protobuf::Arena* submessage_arena =
      reinterpret_cast<::google::protobuf::MessageLite*>(name)->GetArena();
    if (message_arena != submessage_arena) {
      name = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, name, submessage_arena);
    }
    
  } else {
    
  }
  name_ = name;
  // @@protoc_insertion_point(field_set_allocated:google.ads.googleads.v0.resources.BiddingStrategy.name)
}

// .google.ads.googleads.v0.enums.BiddingStrategyTypeEnum.BiddingStrategyType type = 5;
inline void BiddingStrategy::clear_type() {
  type_ = 0;
}
inline ::google::ads::googleads::v0::enums::BiddingStrategyTypeEnum_BiddingStrategyType BiddingStrategy::type() const {
  // @@protoc_insertion_point(field_get:google.ads.googleads.v0.resources.BiddingStrategy.type)
  return static_cast< ::google::ads::googleads::v0::enums::BiddingStrategyTypeEnum_BiddingStrategyType >(type_);
}
inline void BiddingStrategy::set_type(::google::ads::googleads::v0::enums::BiddingStrategyTypeEnum_BiddingStrategyType value) {
  
  type_ = value;
  // @@protoc_insertion_point(field_set:google.ads.googleads.v0.resources.BiddingStrategy.type)
}

// .google.ads.googleads.v0.common.EnhancedCpc enhanced_cpc = 7;
inline bool BiddingStrategy::has_enhanced_cpc() const {
  return scheme_case() == kEnhancedCpc;
}
inline void BiddingStrategy::set_has_enhanced_cpc() {
  _oneof_case_[0] = kEnhancedCpc;
}
inline const ::google::ads::googleads::v0::common::EnhancedCpc& BiddingStrategy::_internal_enhanced_cpc() const {
  return *scheme_.enhanced_cpc_;
}
inline ::google::ads::googleads::v0::common::EnhancedCpc* BiddingStrategy::release_enhanced_cpc() {
  // @@protoc_insertion_point(field_release:google.ads.googleads.v0.resources.BiddingStrategy.enhanced_cpc)
  if (has_enhanced_cpc()) {
    clear_has_scheme();
      ::google::ads::googleads::v0::common::EnhancedCpc* temp = scheme_.enhanced_cpc_;
    scheme_.enhanced_cpc_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline const ::google::ads::googleads::v0::common::EnhancedCpc& BiddingStrategy::enhanced_cpc() const {
  // @@protoc_insertion_point(field_get:google.ads.googleads.v0.resources.BiddingStrategy.enhanced_cpc)
  return has_enhanced_cpc()
      ? *scheme_.enhanced_cpc_
      : *reinterpret_cast< ::google::ads::googleads::v0::common::EnhancedCpc*>(&::google::ads::googleads::v0::common::_EnhancedCpc_default_instance_);
}
inline ::google::ads::googleads::v0::common::EnhancedCpc* BiddingStrategy::mutable_enhanced_cpc() {
  if (!has_enhanced_cpc()) {
    clear_scheme();
    set_has_enhanced_cpc();
    scheme_.enhanced_cpc_ = CreateMaybeMessage< ::google::ads::googleads::v0::common::EnhancedCpc >(
        GetArenaNoVirtual());
  }
  // @@protoc_insertion_point(field_mutable:google.ads.googleads.v0.resources.BiddingStrategy.enhanced_cpc)
  return scheme_.enhanced_cpc_;
}

// .google.ads.googleads.v0.common.PageOnePromoted page_one_promoted = 8;
inline bool BiddingStrategy::has_page_one_promoted() const {
  return scheme_case() == kPageOnePromoted;
}
inline void BiddingStrategy::set_has_page_one_promoted() {
  _oneof_case_[0] = kPageOnePromoted;
}
inline const ::google::ads::googleads::v0::common::PageOnePromoted& BiddingStrategy::_internal_page_one_promoted() const {
  return *scheme_.page_one_promoted_;
}
inline ::google::ads::googleads::v0::common::PageOnePromoted* BiddingStrategy::release_page_one_promoted() {
  // @@protoc_insertion_point(field_release:google.ads.googleads.v0.resources.BiddingStrategy.page_one_promoted)
  if (has_page_one_promoted()) {
    clear_has_scheme();
      ::google::ads::googleads::v0::common::PageOnePromoted* temp = scheme_.page_one_promoted_;
    scheme_.page_one_promoted_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline const ::google::ads::googleads::v0::common::PageOnePromoted& BiddingStrategy::page_one_promoted() const {
  // @@protoc_insertion_point(field_get:google.ads.googleads.v0.resources.BiddingStrategy.page_one_promoted)
  return has_page_one_promoted()
      ? *scheme_.page_one_promoted_
      : *reinterpret_cast< ::google::ads::googleads::v0::common::PageOnePromoted*>(&::google::ads::googleads::v0::common::_PageOnePromoted_default_instance_);
}
inline ::google::ads::googleads::v0::common::PageOnePromoted* BiddingStrategy::mutable_page_one_promoted() {
  if (!has_page_one_promoted()) {
    clear_scheme();
    set_has_page_one_promoted();
    scheme_.page_one_promoted_ = CreateMaybeMessage< ::google::ads::googleads::v0::common::PageOnePromoted >(
        GetArenaNoVirtual());
  }
  // @@protoc_insertion_point(field_mutable:google.ads.googleads.v0.resources.BiddingStrategy.page_one_promoted)
  return scheme_.page_one_promoted_;
}

// .google.ads.googleads.v0.common.TargetCpa target_cpa = 9;
inline bool BiddingStrategy::has_target_cpa() const {
  return scheme_case() == kTargetCpa;
}
inline void BiddingStrategy::set_has_target_cpa() {
  _oneof_case_[0] = kTargetCpa;
}
inline const ::google::ads::googleads::v0::common::TargetCpa& BiddingStrategy::_internal_target_cpa() const {
  return *scheme_.target_cpa_;
}
inline ::google::ads::googleads::v0::common::TargetCpa* BiddingStrategy::release_target_cpa() {
  // @@protoc_insertion_point(field_release:google.ads.googleads.v0.resources.BiddingStrategy.target_cpa)
  if (has_target_cpa()) {
    clear_has_scheme();
      ::google::ads::googleads::v0::common::TargetCpa* temp = scheme_.target_cpa_;
    scheme_.target_cpa_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline const ::google::ads::googleads::v0::common::TargetCpa& BiddingStrategy::target_cpa() const {
  // @@protoc_insertion_point(field_get:google.ads.googleads.v0.resources.BiddingStrategy.target_cpa)
  return has_target_cpa()
      ? *scheme_.target_cpa_
      : *reinterpret_cast< ::google::ads::googleads::v0::common::TargetCpa*>(&::google::ads::googleads::v0::common::_TargetCpa_default_instance_);
}
inline ::google::ads::googleads::v0::common::TargetCpa* BiddingStrategy::mutable_target_cpa() {
  if (!has_target_cpa()) {
    clear_scheme();
    set_has_target_cpa();
    scheme_.target_cpa_ = CreateMaybeMessage< ::google::ads::googleads::v0::common::TargetCpa >(
        GetArenaNoVirtual());
  }
  // @@protoc_insertion_point(field_mutable:google.ads.googleads.v0.resources.BiddingStrategy.target_cpa)
  return scheme_.target_cpa_;
}

// .google.ads.googleads.v0.common.TargetOutrankShare target_outrank_share = 10;
inline bool BiddingStrategy::has_target_outrank_share() const {
  return scheme_case() == kTargetOutrankShare;
}
inline void BiddingStrategy::set_has_target_outrank_share() {
  _oneof_case_[0] = kTargetOutrankShare;
}
inline const ::google::ads::googleads::v0::common::TargetOutrankShare& BiddingStrategy::_internal_target_outrank_share() const {
  return *scheme_.target_outrank_share_;
}
inline ::google::ads::googleads::v0::common::TargetOutrankShare* BiddingStrategy::release_target_outrank_share() {
  // @@protoc_insertion_point(field_release:google.ads.googleads.v0.resources.BiddingStrategy.target_outrank_share)
  if (has_target_outrank_share()) {
    clear_has_scheme();
      ::google::ads::googleads::v0::common::TargetOutrankShare* temp = scheme_.target_outrank_share_;
    scheme_.target_outrank_share_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline const ::google::ads::googleads::v0::common::TargetOutrankShare& BiddingStrategy::target_outrank_share() const {
  // @@protoc_insertion_point(field_get:google.ads.googleads.v0.resources.BiddingStrategy.target_outrank_share)
  return has_target_outrank_share()
      ? *scheme_.target_outrank_share_
      : *reinterpret_cast< ::google::ads::googleads::v0::common::TargetOutrankShare*>(&::google::ads::googleads::v0::common::_TargetOutrankShare_default_instance_);
}
inline ::google::ads::googleads::v0::common::TargetOutrankShare* BiddingStrategy::mutable_target_outrank_share() {
  if (!has_target_outrank_share()) {
    clear_scheme();
    set_has_target_outrank_share();
    scheme_.target_outrank_share_ = CreateMaybeMessage< ::google::ads::googleads::v0::common::TargetOutrankShare >(
        GetArenaNoVirtual());
  }
  // @@protoc_insertion_point(field_mutable:google.ads.googleads.v0.resources.BiddingStrategy.target_outrank_share)
  return scheme_.target_outrank_share_;
}

// .google.ads.googleads.v0.common.TargetRoas target_roas = 11;
inline bool BiddingStrategy::has_target_roas() const {
  return scheme_case() == kTargetRoas;
}
inline void BiddingStrategy::set_has_target_roas() {
  _oneof_case_[0] = kTargetRoas;
}
inline const ::google::ads::googleads::v0::common::TargetRoas& BiddingStrategy::_internal_target_roas() const {
  return *scheme_.target_roas_;
}
inline ::google::ads::googleads::v0::common::TargetRoas* BiddingStrategy::release_target_roas() {
  // @@protoc_insertion_point(field_release:google.ads.googleads.v0.resources.BiddingStrategy.target_roas)
  if (has_target_roas()) {
    clear_has_scheme();
      ::google::ads::googleads::v0::common::TargetRoas* temp = scheme_.target_roas_;
    scheme_.target_roas_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline const ::google::ads::googleads::v0::common::TargetRoas& BiddingStrategy::target_roas() const {
  // @@protoc_insertion_point(field_get:google.ads.googleads.v0.resources.BiddingStrategy.target_roas)
  return has_target_roas()
      ? *scheme_.target_roas_
      : *reinterpret_cast< ::google::ads::googleads::v0::common::TargetRoas*>(&::google::ads::googleads::v0::common::_TargetRoas_default_instance_);
}
inline ::google::ads::googleads::v0::common::TargetRoas* BiddingStrategy::mutable_target_roas() {
  if (!has_target_roas()) {
    clear_scheme();
    set_has_target_roas();
    scheme_.target_roas_ = CreateMaybeMessage< ::google::ads::googleads::v0::common::TargetRoas >(
        GetArenaNoVirtual());
  }
  // @@protoc_insertion_point(field_mutable:google.ads.googleads.v0.resources.BiddingStrategy.target_roas)
  return scheme_.target_roas_;
}

// .google.ads.googleads.v0.common.TargetSpend target_spend = 12;
inline bool BiddingStrategy::has_target_spend() const {
  return scheme_case() == kTargetSpend;
}
inline void BiddingStrategy::set_has_target_spend() {
  _oneof_case_[0] = kTargetSpend;
}
inline const ::google::ads::googleads::v0::common::TargetSpend& BiddingStrategy::_internal_target_spend() const {
  return *scheme_.target_spend_;
}
inline ::google::ads::googleads::v0::common::TargetSpend* BiddingStrategy::release_target_spend() {
  // @@protoc_insertion_point(field_release:google.ads.googleads.v0.resources.BiddingStrategy.target_spend)
  if (has_target_spend()) {
    clear_has_scheme();
      ::google::ads::googleads::v0::common::TargetSpend* temp = scheme_.target_spend_;
    scheme_.target_spend_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline const ::google::ads::googleads::v0::common::TargetSpend& BiddingStrategy::target_spend() const {
  // @@protoc_insertion_point(field_get:google.ads.googleads.v0.resources.BiddingStrategy.target_spend)
  return has_target_spend()
      ? *scheme_.target_spend_
      : *reinterpret_cast< ::google::ads::googleads::v0::common::TargetSpend*>(&::google::ads::googleads::v0::common::_TargetSpend_default_instance_);
}
inline ::google::ads::googleads::v0::common::TargetSpend* BiddingStrategy::mutable_target_spend() {
  if (!has_target_spend()) {
    clear_scheme();
    set_has_target_spend();
    scheme_.target_spend_ = CreateMaybeMessage< ::google::ads::googleads::v0::common::TargetSpend >(
        GetArenaNoVirtual());
  }
  // @@protoc_insertion_point(field_mutable:google.ads.googleads.v0.resources.BiddingStrategy.target_spend)
  return scheme_.target_spend_;
}

inline bool BiddingStrategy::has_scheme() const {
  return scheme_case() != SCHEME_NOT_SET;
}
inline void BiddingStrategy::clear_has_scheme() {
  _oneof_case_[0] = SCHEME_NOT_SET;
}
inline BiddingStrategy::SchemeCase BiddingStrategy::scheme_case() const {
  return BiddingStrategy::SchemeCase(_oneof_case_[0]);
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

#endif  // PROTOBUF_INCLUDED_google_2fads_2fgoogleads_2fv0_2fresources_2fbidding_5fstrategy_2eproto
