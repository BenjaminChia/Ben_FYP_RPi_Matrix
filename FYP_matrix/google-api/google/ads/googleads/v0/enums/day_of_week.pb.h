// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/ads/googleads/v0/enums/day_of_week.proto

#ifndef PROTOBUF_INCLUDED_google_2fads_2fgoogleads_2fv0_2fenums_2fday_5fof_5fweek_2eproto
#define PROTOBUF_INCLUDED_google_2fads_2fgoogleads_2fv0_2fenums_2fday_5fof_5fweek_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_protobuf_google_2fads_2fgoogleads_2fv0_2fenums_2fday_5fof_5fweek_2eproto 

namespace protobuf_google_2fads_2fgoogleads_2fv0_2fenums_2fday_5fof_5fweek_2eproto {
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
}  // namespace protobuf_google_2fads_2fgoogleads_2fv0_2fenums_2fday_5fof_5fweek_2eproto
namespace google {
namespace ads {
namespace googleads {
namespace v0 {
namespace enums {
class DayOfWeekEnum;
class DayOfWeekEnumDefaultTypeInternal;
extern DayOfWeekEnumDefaultTypeInternal _DayOfWeekEnum_default_instance_;
}  // namespace enums
}  // namespace v0
}  // namespace googleads
}  // namespace ads
}  // namespace google
namespace google {
namespace protobuf {
template<> ::google::ads::googleads::v0::enums::DayOfWeekEnum* Arena::CreateMaybeMessage<::google::ads::googleads::v0::enums::DayOfWeekEnum>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace google {
namespace ads {
namespace googleads {
namespace v0 {
namespace enums {

enum DayOfWeekEnum_DayOfWeek {
  DayOfWeekEnum_DayOfWeek_UNSPECIFIED = 0,
  DayOfWeekEnum_DayOfWeek_UNKNOWN = 1,
  DayOfWeekEnum_DayOfWeek_MONDAY = 2,
  DayOfWeekEnum_DayOfWeek_TUESDAY = 3,
  DayOfWeekEnum_DayOfWeek_WEDNESDAY = 4,
  DayOfWeekEnum_DayOfWeek_THURSDAY = 5,
  DayOfWeekEnum_DayOfWeek_FRIDAY = 6,
  DayOfWeekEnum_DayOfWeek_SATURDAY = 7,
  DayOfWeekEnum_DayOfWeek_SUNDAY = 8,
  DayOfWeekEnum_DayOfWeek_DayOfWeekEnum_DayOfWeek_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  DayOfWeekEnum_DayOfWeek_DayOfWeekEnum_DayOfWeek_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool DayOfWeekEnum_DayOfWeek_IsValid(int value);
const DayOfWeekEnum_DayOfWeek DayOfWeekEnum_DayOfWeek_DayOfWeek_MIN = DayOfWeekEnum_DayOfWeek_UNSPECIFIED;
const DayOfWeekEnum_DayOfWeek DayOfWeekEnum_DayOfWeek_DayOfWeek_MAX = DayOfWeekEnum_DayOfWeek_SUNDAY;
const int DayOfWeekEnum_DayOfWeek_DayOfWeek_ARRAYSIZE = DayOfWeekEnum_DayOfWeek_DayOfWeek_MAX + 1;

const ::google::protobuf::EnumDescriptor* DayOfWeekEnum_DayOfWeek_descriptor();
inline const ::std::string& DayOfWeekEnum_DayOfWeek_Name(DayOfWeekEnum_DayOfWeek value) {
  return ::google::protobuf::internal::NameOfEnum(
    DayOfWeekEnum_DayOfWeek_descriptor(), value);
}
inline bool DayOfWeekEnum_DayOfWeek_Parse(
    const ::std::string& name, DayOfWeekEnum_DayOfWeek* value) {
  return ::google::protobuf::internal::ParseNamedEnum<DayOfWeekEnum_DayOfWeek>(
    DayOfWeekEnum_DayOfWeek_descriptor(), name, value);
}
// ===================================================================

class DayOfWeekEnum : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.ads.googleads.v0.enums.DayOfWeekEnum) */ {
 public:
  DayOfWeekEnum();
  virtual ~DayOfWeekEnum();

  DayOfWeekEnum(const DayOfWeekEnum& from);

  inline DayOfWeekEnum& operator=(const DayOfWeekEnum& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  DayOfWeekEnum(DayOfWeekEnum&& from) noexcept
    : DayOfWeekEnum() {
    *this = ::std::move(from);
  }

  inline DayOfWeekEnum& operator=(DayOfWeekEnum&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const DayOfWeekEnum& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const DayOfWeekEnum* internal_default_instance() {
    return reinterpret_cast<const DayOfWeekEnum*>(
               &_DayOfWeekEnum_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(DayOfWeekEnum* other);
  friend void swap(DayOfWeekEnum& a, DayOfWeekEnum& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline DayOfWeekEnum* New() const final {
    return CreateMaybeMessage<DayOfWeekEnum>(NULL);
  }

  DayOfWeekEnum* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<DayOfWeekEnum>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const DayOfWeekEnum& from);
  void MergeFrom(const DayOfWeekEnum& from);
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
  void InternalSwap(DayOfWeekEnum* other);
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

  typedef DayOfWeekEnum_DayOfWeek DayOfWeek;
  static const DayOfWeek UNSPECIFIED =
    DayOfWeekEnum_DayOfWeek_UNSPECIFIED;
  static const DayOfWeek UNKNOWN =
    DayOfWeekEnum_DayOfWeek_UNKNOWN;
  static const DayOfWeek MONDAY =
    DayOfWeekEnum_DayOfWeek_MONDAY;
  static const DayOfWeek TUESDAY =
    DayOfWeekEnum_DayOfWeek_TUESDAY;
  static const DayOfWeek WEDNESDAY =
    DayOfWeekEnum_DayOfWeek_WEDNESDAY;
  static const DayOfWeek THURSDAY =
    DayOfWeekEnum_DayOfWeek_THURSDAY;
  static const DayOfWeek FRIDAY =
    DayOfWeekEnum_DayOfWeek_FRIDAY;
  static const DayOfWeek SATURDAY =
    DayOfWeekEnum_DayOfWeek_SATURDAY;
  static const DayOfWeek SUNDAY =
    DayOfWeekEnum_DayOfWeek_SUNDAY;
  static inline bool DayOfWeek_IsValid(int value) {
    return DayOfWeekEnum_DayOfWeek_IsValid(value);
  }
  static const DayOfWeek DayOfWeek_MIN =
    DayOfWeekEnum_DayOfWeek_DayOfWeek_MIN;
  static const DayOfWeek DayOfWeek_MAX =
    DayOfWeekEnum_DayOfWeek_DayOfWeek_MAX;
  static const int DayOfWeek_ARRAYSIZE =
    DayOfWeekEnum_DayOfWeek_DayOfWeek_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  DayOfWeek_descriptor() {
    return DayOfWeekEnum_DayOfWeek_descriptor();
  }
  static inline const ::std::string& DayOfWeek_Name(DayOfWeek value) {
    return DayOfWeekEnum_DayOfWeek_Name(value);
  }
  static inline bool DayOfWeek_Parse(const ::std::string& name,
      DayOfWeek* value) {
    return DayOfWeekEnum_DayOfWeek_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:google.ads.googleads.v0.enums.DayOfWeekEnum)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_google_2fads_2fgoogleads_2fv0_2fenums_2fday_5fof_5fweek_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// DayOfWeekEnum

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

template <> struct is_proto_enum< ::google::ads::googleads::v0::enums::DayOfWeekEnum_DayOfWeek> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::google::ads::googleads::v0::enums::DayOfWeekEnum_DayOfWeek>() {
  return ::google::ads::googleads::v0::enums::DayOfWeekEnum_DayOfWeek_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_google_2fads_2fgoogleads_2fv0_2fenums_2fday_5fof_5fweek_2eproto