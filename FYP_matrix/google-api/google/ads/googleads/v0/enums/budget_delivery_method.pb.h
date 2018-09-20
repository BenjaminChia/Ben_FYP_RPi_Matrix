// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/ads/googleads/v0/enums/budget_delivery_method.proto

#ifndef PROTOBUF_INCLUDED_google_2fads_2fgoogleads_2fv0_2fenums_2fbudget_5fdelivery_5fmethod_2eproto
#define PROTOBUF_INCLUDED_google_2fads_2fgoogleads_2fv0_2fenums_2fbudget_5fdelivery_5fmethod_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_protobuf_google_2fads_2fgoogleads_2fv0_2fenums_2fbudget_5fdelivery_5fmethod_2eproto 

namespace protobuf_google_2fads_2fgoogleads_2fv0_2fenums_2fbudget_5fdelivery_5fmethod_2eproto {
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
}  // namespace protobuf_google_2fads_2fgoogleads_2fv0_2fenums_2fbudget_5fdelivery_5fmethod_2eproto
namespace google {
namespace ads {
namespace googleads {
namespace v0 {
namespace enums {
class BudgetDeliveryMethodEnum;
class BudgetDeliveryMethodEnumDefaultTypeInternal;
extern BudgetDeliveryMethodEnumDefaultTypeInternal _BudgetDeliveryMethodEnum_default_instance_;
}  // namespace enums
}  // namespace v0
}  // namespace googleads
}  // namespace ads
}  // namespace google
namespace google {
namespace protobuf {
template<> ::google::ads::googleads::v0::enums::BudgetDeliveryMethodEnum* Arena::CreateMaybeMessage<::google::ads::googleads::v0::enums::BudgetDeliveryMethodEnum>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace google {
namespace ads {
namespace googleads {
namespace v0 {
namespace enums {

enum BudgetDeliveryMethodEnum_BudgetDeliveryMethod {
  BudgetDeliveryMethodEnum_BudgetDeliveryMethod_UNSPECIFIED = 0,
  BudgetDeliveryMethodEnum_BudgetDeliveryMethod_UNKNOWN = 1,
  BudgetDeliveryMethodEnum_BudgetDeliveryMethod_STANDARD = 2,
  BudgetDeliveryMethodEnum_BudgetDeliveryMethod_ACCELERATED = 3,
  BudgetDeliveryMethodEnum_BudgetDeliveryMethod_BudgetDeliveryMethodEnum_BudgetDeliveryMethod_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  BudgetDeliveryMethodEnum_BudgetDeliveryMethod_BudgetDeliveryMethodEnum_BudgetDeliveryMethod_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool BudgetDeliveryMethodEnum_BudgetDeliveryMethod_IsValid(int value);
const BudgetDeliveryMethodEnum_BudgetDeliveryMethod BudgetDeliveryMethodEnum_BudgetDeliveryMethod_BudgetDeliveryMethod_MIN = BudgetDeliveryMethodEnum_BudgetDeliveryMethod_UNSPECIFIED;
const BudgetDeliveryMethodEnum_BudgetDeliveryMethod BudgetDeliveryMethodEnum_BudgetDeliveryMethod_BudgetDeliveryMethod_MAX = BudgetDeliveryMethodEnum_BudgetDeliveryMethod_ACCELERATED;
const int BudgetDeliveryMethodEnum_BudgetDeliveryMethod_BudgetDeliveryMethod_ARRAYSIZE = BudgetDeliveryMethodEnum_BudgetDeliveryMethod_BudgetDeliveryMethod_MAX + 1;

const ::google::protobuf::EnumDescriptor* BudgetDeliveryMethodEnum_BudgetDeliveryMethod_descriptor();
inline const ::std::string& BudgetDeliveryMethodEnum_BudgetDeliveryMethod_Name(BudgetDeliveryMethodEnum_BudgetDeliveryMethod value) {
  return ::google::protobuf::internal::NameOfEnum(
    BudgetDeliveryMethodEnum_BudgetDeliveryMethod_descriptor(), value);
}
inline bool BudgetDeliveryMethodEnum_BudgetDeliveryMethod_Parse(
    const ::std::string& name, BudgetDeliveryMethodEnum_BudgetDeliveryMethod* value) {
  return ::google::protobuf::internal::ParseNamedEnum<BudgetDeliveryMethodEnum_BudgetDeliveryMethod>(
    BudgetDeliveryMethodEnum_BudgetDeliveryMethod_descriptor(), name, value);
}
// ===================================================================

class BudgetDeliveryMethodEnum : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.ads.googleads.v0.enums.BudgetDeliveryMethodEnum) */ {
 public:
  BudgetDeliveryMethodEnum();
  virtual ~BudgetDeliveryMethodEnum();

  BudgetDeliveryMethodEnum(const BudgetDeliveryMethodEnum& from);

  inline BudgetDeliveryMethodEnum& operator=(const BudgetDeliveryMethodEnum& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  BudgetDeliveryMethodEnum(BudgetDeliveryMethodEnum&& from) noexcept
    : BudgetDeliveryMethodEnum() {
    *this = ::std::move(from);
  }

  inline BudgetDeliveryMethodEnum& operator=(BudgetDeliveryMethodEnum&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const BudgetDeliveryMethodEnum& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const BudgetDeliveryMethodEnum* internal_default_instance() {
    return reinterpret_cast<const BudgetDeliveryMethodEnum*>(
               &_BudgetDeliveryMethodEnum_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(BudgetDeliveryMethodEnum* other);
  friend void swap(BudgetDeliveryMethodEnum& a, BudgetDeliveryMethodEnum& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline BudgetDeliveryMethodEnum* New() const final {
    return CreateMaybeMessage<BudgetDeliveryMethodEnum>(NULL);
  }

  BudgetDeliveryMethodEnum* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<BudgetDeliveryMethodEnum>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const BudgetDeliveryMethodEnum& from);
  void MergeFrom(const BudgetDeliveryMethodEnum& from);
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
  void InternalSwap(BudgetDeliveryMethodEnum* other);
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

  typedef BudgetDeliveryMethodEnum_BudgetDeliveryMethod BudgetDeliveryMethod;
  static const BudgetDeliveryMethod UNSPECIFIED =
    BudgetDeliveryMethodEnum_BudgetDeliveryMethod_UNSPECIFIED;
  static const BudgetDeliveryMethod UNKNOWN =
    BudgetDeliveryMethodEnum_BudgetDeliveryMethod_UNKNOWN;
  static const BudgetDeliveryMethod STANDARD =
    BudgetDeliveryMethodEnum_BudgetDeliveryMethod_STANDARD;
  static const BudgetDeliveryMethod ACCELERATED =
    BudgetDeliveryMethodEnum_BudgetDeliveryMethod_ACCELERATED;
  static inline bool BudgetDeliveryMethod_IsValid(int value) {
    return BudgetDeliveryMethodEnum_BudgetDeliveryMethod_IsValid(value);
  }
  static const BudgetDeliveryMethod BudgetDeliveryMethod_MIN =
    BudgetDeliveryMethodEnum_BudgetDeliveryMethod_BudgetDeliveryMethod_MIN;
  static const BudgetDeliveryMethod BudgetDeliveryMethod_MAX =
    BudgetDeliveryMethodEnum_BudgetDeliveryMethod_BudgetDeliveryMethod_MAX;
  static const int BudgetDeliveryMethod_ARRAYSIZE =
    BudgetDeliveryMethodEnum_BudgetDeliveryMethod_BudgetDeliveryMethod_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  BudgetDeliveryMethod_descriptor() {
    return BudgetDeliveryMethodEnum_BudgetDeliveryMethod_descriptor();
  }
  static inline const ::std::string& BudgetDeliveryMethod_Name(BudgetDeliveryMethod value) {
    return BudgetDeliveryMethodEnum_BudgetDeliveryMethod_Name(value);
  }
  static inline bool BudgetDeliveryMethod_Parse(const ::std::string& name,
      BudgetDeliveryMethod* value) {
    return BudgetDeliveryMethodEnum_BudgetDeliveryMethod_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:google.ads.googleads.v0.enums.BudgetDeliveryMethodEnum)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_google_2fads_2fgoogleads_2fv0_2fenums_2fbudget_5fdelivery_5fmethod_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// BudgetDeliveryMethodEnum

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

template <> struct is_proto_enum< ::google::ads::googleads::v0::enums::BudgetDeliveryMethodEnum_BudgetDeliveryMethod> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::google::ads::googleads::v0::enums::BudgetDeliveryMethodEnum_BudgetDeliveryMethod>() {
  return ::google::ads::googleads::v0::enums::BudgetDeliveryMethodEnum_BudgetDeliveryMethod_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_google_2fads_2fgoogleads_2fv0_2fenums_2fbudget_5fdelivery_5fmethod_2eproto
