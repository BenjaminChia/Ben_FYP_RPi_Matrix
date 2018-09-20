// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/ads/googleads/v0/enums/slot.proto

#ifndef PROTOBUF_INCLUDED_google_2fads_2fgoogleads_2fv0_2fenums_2fslot_2eproto
#define PROTOBUF_INCLUDED_google_2fads_2fgoogleads_2fv0_2fenums_2fslot_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_protobuf_google_2fads_2fgoogleads_2fv0_2fenums_2fslot_2eproto 

namespace protobuf_google_2fads_2fgoogleads_2fv0_2fenums_2fslot_2eproto {
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
}  // namespace protobuf_google_2fads_2fgoogleads_2fv0_2fenums_2fslot_2eproto
namespace google {
namespace ads {
namespace googleads {
namespace v0 {
namespace enums {
class SlotEnum;
class SlotEnumDefaultTypeInternal;
extern SlotEnumDefaultTypeInternal _SlotEnum_default_instance_;
}  // namespace enums
}  // namespace v0
}  // namespace googleads
}  // namespace ads
}  // namespace google
namespace google {
namespace protobuf {
template<> ::google::ads::googleads::v0::enums::SlotEnum* Arena::CreateMaybeMessage<::google::ads::googleads::v0::enums::SlotEnum>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace google {
namespace ads {
namespace googleads {
namespace v0 {
namespace enums {

enum SlotEnum_Slot {
  SlotEnum_Slot_UNSPECIFIED = 0,
  SlotEnum_Slot_UNKNOWN = 1,
  SlotEnum_Slot_SEARCH_SIDE = 2,
  SlotEnum_Slot_SEARCH_TOP = 3,
  SlotEnum_Slot_SEARCH_OTHER = 4,
  SlotEnum_Slot_CONTENT = 5,
  SlotEnum_Slot_SEARCH_PARTNER_TOP = 6,
  SlotEnum_Slot_SEARCH_PARTNER_OTHER = 7,
  SlotEnum_Slot_SlotEnum_Slot_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  SlotEnum_Slot_SlotEnum_Slot_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool SlotEnum_Slot_IsValid(int value);
const SlotEnum_Slot SlotEnum_Slot_Slot_MIN = SlotEnum_Slot_UNSPECIFIED;
const SlotEnum_Slot SlotEnum_Slot_Slot_MAX = SlotEnum_Slot_SEARCH_PARTNER_OTHER;
const int SlotEnum_Slot_Slot_ARRAYSIZE = SlotEnum_Slot_Slot_MAX + 1;

const ::google::protobuf::EnumDescriptor* SlotEnum_Slot_descriptor();
inline const ::std::string& SlotEnum_Slot_Name(SlotEnum_Slot value) {
  return ::google::protobuf::internal::NameOfEnum(
    SlotEnum_Slot_descriptor(), value);
}
inline bool SlotEnum_Slot_Parse(
    const ::std::string& name, SlotEnum_Slot* value) {
  return ::google::protobuf::internal::ParseNamedEnum<SlotEnum_Slot>(
    SlotEnum_Slot_descriptor(), name, value);
}
// ===================================================================

class SlotEnum : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.ads.googleads.v0.enums.SlotEnum) */ {
 public:
  SlotEnum();
  virtual ~SlotEnum();

  SlotEnum(const SlotEnum& from);

  inline SlotEnum& operator=(const SlotEnum& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  SlotEnum(SlotEnum&& from) noexcept
    : SlotEnum() {
    *this = ::std::move(from);
  }

  inline SlotEnum& operator=(SlotEnum&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const SlotEnum& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SlotEnum* internal_default_instance() {
    return reinterpret_cast<const SlotEnum*>(
               &_SlotEnum_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(SlotEnum* other);
  friend void swap(SlotEnum& a, SlotEnum& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline SlotEnum* New() const final {
    return CreateMaybeMessage<SlotEnum>(NULL);
  }

  SlotEnum* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<SlotEnum>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const SlotEnum& from);
  void MergeFrom(const SlotEnum& from);
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
  void InternalSwap(SlotEnum* other);
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

  typedef SlotEnum_Slot Slot;
  static const Slot UNSPECIFIED =
    SlotEnum_Slot_UNSPECIFIED;
  static const Slot UNKNOWN =
    SlotEnum_Slot_UNKNOWN;
  static const Slot SEARCH_SIDE =
    SlotEnum_Slot_SEARCH_SIDE;
  static const Slot SEARCH_TOP =
    SlotEnum_Slot_SEARCH_TOP;
  static const Slot SEARCH_OTHER =
    SlotEnum_Slot_SEARCH_OTHER;
  static const Slot CONTENT =
    SlotEnum_Slot_CONTENT;
  static const Slot SEARCH_PARTNER_TOP =
    SlotEnum_Slot_SEARCH_PARTNER_TOP;
  static const Slot SEARCH_PARTNER_OTHER =
    SlotEnum_Slot_SEARCH_PARTNER_OTHER;
  static inline bool Slot_IsValid(int value) {
    return SlotEnum_Slot_IsValid(value);
  }
  static const Slot Slot_MIN =
    SlotEnum_Slot_Slot_MIN;
  static const Slot Slot_MAX =
    SlotEnum_Slot_Slot_MAX;
  static const int Slot_ARRAYSIZE =
    SlotEnum_Slot_Slot_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Slot_descriptor() {
    return SlotEnum_Slot_descriptor();
  }
  static inline const ::std::string& Slot_Name(Slot value) {
    return SlotEnum_Slot_Name(value);
  }
  static inline bool Slot_Parse(const ::std::string& name,
      Slot* value) {
    return SlotEnum_Slot_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:google.ads.googleads.v0.enums.SlotEnum)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_google_2fads_2fgoogleads_2fv0_2fenums_2fslot_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// SlotEnum

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

template <> struct is_proto_enum< ::google::ads::googleads::v0::enums::SlotEnum_Slot> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::google::ads::googleads::v0::enums::SlotEnum_Slot>() {
  return ::google::ads::googleads::v0::enums::SlotEnum_Slot_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_google_2fads_2fgoogleads_2fv0_2fenums_2fslot_2eproto
