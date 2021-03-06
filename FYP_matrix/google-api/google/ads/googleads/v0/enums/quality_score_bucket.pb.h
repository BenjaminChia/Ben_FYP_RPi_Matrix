// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/ads/googleads/v0/enums/quality_score_bucket.proto

#ifndef PROTOBUF_INCLUDED_google_2fads_2fgoogleads_2fv0_2fenums_2fquality_5fscore_5fbucket_2eproto
#define PROTOBUF_INCLUDED_google_2fads_2fgoogleads_2fv0_2fenums_2fquality_5fscore_5fbucket_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_protobuf_google_2fads_2fgoogleads_2fv0_2fenums_2fquality_5fscore_5fbucket_2eproto 

namespace protobuf_google_2fads_2fgoogleads_2fv0_2fenums_2fquality_5fscore_5fbucket_2eproto {
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
}  // namespace protobuf_google_2fads_2fgoogleads_2fv0_2fenums_2fquality_5fscore_5fbucket_2eproto
namespace google {
namespace ads {
namespace googleads {
namespace v0 {
namespace enums {
class QualityScoreBucketEnum;
class QualityScoreBucketEnumDefaultTypeInternal;
extern QualityScoreBucketEnumDefaultTypeInternal _QualityScoreBucketEnum_default_instance_;
}  // namespace enums
}  // namespace v0
}  // namespace googleads
}  // namespace ads
}  // namespace google
namespace google {
namespace protobuf {
template<> ::google::ads::googleads::v0::enums::QualityScoreBucketEnum* Arena::CreateMaybeMessage<::google::ads::googleads::v0::enums::QualityScoreBucketEnum>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace google {
namespace ads {
namespace googleads {
namespace v0 {
namespace enums {

enum QualityScoreBucketEnum_QualityScoreBucket {
  QualityScoreBucketEnum_QualityScoreBucket_UNSPECIFIED = 0,
  QualityScoreBucketEnum_QualityScoreBucket_UNKNOWN = 1,
  QualityScoreBucketEnum_QualityScoreBucket_BELOW_AVERAGE = 2,
  QualityScoreBucketEnum_QualityScoreBucket_AVERAGE = 3,
  QualityScoreBucketEnum_QualityScoreBucket_ABOVE_AVERAGE = 4,
  QualityScoreBucketEnum_QualityScoreBucket_QualityScoreBucketEnum_QualityScoreBucket_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  QualityScoreBucketEnum_QualityScoreBucket_QualityScoreBucketEnum_QualityScoreBucket_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool QualityScoreBucketEnum_QualityScoreBucket_IsValid(int value);
const QualityScoreBucketEnum_QualityScoreBucket QualityScoreBucketEnum_QualityScoreBucket_QualityScoreBucket_MIN = QualityScoreBucketEnum_QualityScoreBucket_UNSPECIFIED;
const QualityScoreBucketEnum_QualityScoreBucket QualityScoreBucketEnum_QualityScoreBucket_QualityScoreBucket_MAX = QualityScoreBucketEnum_QualityScoreBucket_ABOVE_AVERAGE;
const int QualityScoreBucketEnum_QualityScoreBucket_QualityScoreBucket_ARRAYSIZE = QualityScoreBucketEnum_QualityScoreBucket_QualityScoreBucket_MAX + 1;

const ::google::protobuf::EnumDescriptor* QualityScoreBucketEnum_QualityScoreBucket_descriptor();
inline const ::std::string& QualityScoreBucketEnum_QualityScoreBucket_Name(QualityScoreBucketEnum_QualityScoreBucket value) {
  return ::google::protobuf::internal::NameOfEnum(
    QualityScoreBucketEnum_QualityScoreBucket_descriptor(), value);
}
inline bool QualityScoreBucketEnum_QualityScoreBucket_Parse(
    const ::std::string& name, QualityScoreBucketEnum_QualityScoreBucket* value) {
  return ::google::protobuf::internal::ParseNamedEnum<QualityScoreBucketEnum_QualityScoreBucket>(
    QualityScoreBucketEnum_QualityScoreBucket_descriptor(), name, value);
}
// ===================================================================

class QualityScoreBucketEnum : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.ads.googleads.v0.enums.QualityScoreBucketEnum) */ {
 public:
  QualityScoreBucketEnum();
  virtual ~QualityScoreBucketEnum();

  QualityScoreBucketEnum(const QualityScoreBucketEnum& from);

  inline QualityScoreBucketEnum& operator=(const QualityScoreBucketEnum& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  QualityScoreBucketEnum(QualityScoreBucketEnum&& from) noexcept
    : QualityScoreBucketEnum() {
    *this = ::std::move(from);
  }

  inline QualityScoreBucketEnum& operator=(QualityScoreBucketEnum&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const QualityScoreBucketEnum& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const QualityScoreBucketEnum* internal_default_instance() {
    return reinterpret_cast<const QualityScoreBucketEnum*>(
               &_QualityScoreBucketEnum_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(QualityScoreBucketEnum* other);
  friend void swap(QualityScoreBucketEnum& a, QualityScoreBucketEnum& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline QualityScoreBucketEnum* New() const final {
    return CreateMaybeMessage<QualityScoreBucketEnum>(NULL);
  }

  QualityScoreBucketEnum* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<QualityScoreBucketEnum>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const QualityScoreBucketEnum& from);
  void MergeFrom(const QualityScoreBucketEnum& from);
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
  void InternalSwap(QualityScoreBucketEnum* other);
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

  typedef QualityScoreBucketEnum_QualityScoreBucket QualityScoreBucket;
  static const QualityScoreBucket UNSPECIFIED =
    QualityScoreBucketEnum_QualityScoreBucket_UNSPECIFIED;
  static const QualityScoreBucket UNKNOWN =
    QualityScoreBucketEnum_QualityScoreBucket_UNKNOWN;
  static const QualityScoreBucket BELOW_AVERAGE =
    QualityScoreBucketEnum_QualityScoreBucket_BELOW_AVERAGE;
  static const QualityScoreBucket AVERAGE =
    QualityScoreBucketEnum_QualityScoreBucket_AVERAGE;
  static const QualityScoreBucket ABOVE_AVERAGE =
    QualityScoreBucketEnum_QualityScoreBucket_ABOVE_AVERAGE;
  static inline bool QualityScoreBucket_IsValid(int value) {
    return QualityScoreBucketEnum_QualityScoreBucket_IsValid(value);
  }
  static const QualityScoreBucket QualityScoreBucket_MIN =
    QualityScoreBucketEnum_QualityScoreBucket_QualityScoreBucket_MIN;
  static const QualityScoreBucket QualityScoreBucket_MAX =
    QualityScoreBucketEnum_QualityScoreBucket_QualityScoreBucket_MAX;
  static const int QualityScoreBucket_ARRAYSIZE =
    QualityScoreBucketEnum_QualityScoreBucket_QualityScoreBucket_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  QualityScoreBucket_descriptor() {
    return QualityScoreBucketEnum_QualityScoreBucket_descriptor();
  }
  static inline const ::std::string& QualityScoreBucket_Name(QualityScoreBucket value) {
    return QualityScoreBucketEnum_QualityScoreBucket_Name(value);
  }
  static inline bool QualityScoreBucket_Parse(const ::std::string& name,
      QualityScoreBucket* value) {
    return QualityScoreBucketEnum_QualityScoreBucket_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:google.ads.googleads.v0.enums.QualityScoreBucketEnum)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_google_2fads_2fgoogleads_2fv0_2fenums_2fquality_5fscore_5fbucket_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// QualityScoreBucketEnum

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

template <> struct is_proto_enum< ::google::ads::googleads::v0::enums::QualityScoreBucketEnum_QualityScoreBucket> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::google::ads::googleads::v0::enums::QualityScoreBucketEnum_QualityScoreBucket>() {
  return ::google::ads::googleads::v0::enums::QualityScoreBucketEnum_QualityScoreBucket_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_google_2fads_2fgoogleads_2fv0_2fenums_2fquality_5fscore_5fbucket_2eproto
