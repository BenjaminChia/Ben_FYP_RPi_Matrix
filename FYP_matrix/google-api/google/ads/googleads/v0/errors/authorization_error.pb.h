// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/ads/googleads/v0/errors/authorization_error.proto

#ifndef PROTOBUF_INCLUDED_google_2fads_2fgoogleads_2fv0_2ferrors_2fauthorization_5ferror_2eproto
#define PROTOBUF_INCLUDED_google_2fads_2fgoogleads_2fv0_2ferrors_2fauthorization_5ferror_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_protobuf_google_2fads_2fgoogleads_2fv0_2ferrors_2fauthorization_5ferror_2eproto 

namespace protobuf_google_2fads_2fgoogleads_2fv0_2ferrors_2fauthorization_5ferror_2eproto {
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
}  // namespace protobuf_google_2fads_2fgoogleads_2fv0_2ferrors_2fauthorization_5ferror_2eproto
namespace google {
namespace ads {
namespace googleads {
namespace v0 {
namespace errors {
class AuthorizationErrorEnum;
class AuthorizationErrorEnumDefaultTypeInternal;
extern AuthorizationErrorEnumDefaultTypeInternal _AuthorizationErrorEnum_default_instance_;
}  // namespace errors
}  // namespace v0
}  // namespace googleads
}  // namespace ads
}  // namespace google
namespace google {
namespace protobuf {
template<> ::google::ads::googleads::v0::errors::AuthorizationErrorEnum* Arena::CreateMaybeMessage<::google::ads::googleads::v0::errors::AuthorizationErrorEnum>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace google {
namespace ads {
namespace googleads {
namespace v0 {
namespace errors {

enum AuthorizationErrorEnum_AuthorizationError {
  AuthorizationErrorEnum_AuthorizationError_UNSPECIFIED = 0,
  AuthorizationErrorEnum_AuthorizationError_UNKNOWN = 1,
  AuthorizationErrorEnum_AuthorizationError_USER_PERMISSION_DENIED = 2,
  AuthorizationErrorEnum_AuthorizationError_DEVELOPER_TOKEN_NOT_WHITELISTED = 3,
  AuthorizationErrorEnum_AuthorizationError_DEVELOPER_TOKEN_PROHIBITED = 4,
  AuthorizationErrorEnum_AuthorizationError_PROJECT_DISABLED = 5,
  AuthorizationErrorEnum_AuthorizationError_AUTHORIZATION_ERROR = 6,
  AuthorizationErrorEnum_AuthorizationError_AuthorizationErrorEnum_AuthorizationError_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  AuthorizationErrorEnum_AuthorizationError_AuthorizationErrorEnum_AuthorizationError_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool AuthorizationErrorEnum_AuthorizationError_IsValid(int value);
const AuthorizationErrorEnum_AuthorizationError AuthorizationErrorEnum_AuthorizationError_AuthorizationError_MIN = AuthorizationErrorEnum_AuthorizationError_UNSPECIFIED;
const AuthorizationErrorEnum_AuthorizationError AuthorizationErrorEnum_AuthorizationError_AuthorizationError_MAX = AuthorizationErrorEnum_AuthorizationError_AUTHORIZATION_ERROR;
const int AuthorizationErrorEnum_AuthorizationError_AuthorizationError_ARRAYSIZE = AuthorizationErrorEnum_AuthorizationError_AuthorizationError_MAX + 1;

const ::google::protobuf::EnumDescriptor* AuthorizationErrorEnum_AuthorizationError_descriptor();
inline const ::std::string& AuthorizationErrorEnum_AuthorizationError_Name(AuthorizationErrorEnum_AuthorizationError value) {
  return ::google::protobuf::internal::NameOfEnum(
    AuthorizationErrorEnum_AuthorizationError_descriptor(), value);
}
inline bool AuthorizationErrorEnum_AuthorizationError_Parse(
    const ::std::string& name, AuthorizationErrorEnum_AuthorizationError* value) {
  return ::google::protobuf::internal::ParseNamedEnum<AuthorizationErrorEnum_AuthorizationError>(
    AuthorizationErrorEnum_AuthorizationError_descriptor(), name, value);
}
// ===================================================================

class AuthorizationErrorEnum : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.ads.googleads.v0.errors.AuthorizationErrorEnum) */ {
 public:
  AuthorizationErrorEnum();
  virtual ~AuthorizationErrorEnum();

  AuthorizationErrorEnum(const AuthorizationErrorEnum& from);

  inline AuthorizationErrorEnum& operator=(const AuthorizationErrorEnum& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  AuthorizationErrorEnum(AuthorizationErrorEnum&& from) noexcept
    : AuthorizationErrorEnum() {
    *this = ::std::move(from);
  }

  inline AuthorizationErrorEnum& operator=(AuthorizationErrorEnum&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const AuthorizationErrorEnum& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const AuthorizationErrorEnum* internal_default_instance() {
    return reinterpret_cast<const AuthorizationErrorEnum*>(
               &_AuthorizationErrorEnum_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(AuthorizationErrorEnum* other);
  friend void swap(AuthorizationErrorEnum& a, AuthorizationErrorEnum& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline AuthorizationErrorEnum* New() const final {
    return CreateMaybeMessage<AuthorizationErrorEnum>(NULL);
  }

  AuthorizationErrorEnum* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<AuthorizationErrorEnum>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const AuthorizationErrorEnum& from);
  void MergeFrom(const AuthorizationErrorEnum& from);
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
  void InternalSwap(AuthorizationErrorEnum* other);
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

  typedef AuthorizationErrorEnum_AuthorizationError AuthorizationError;
  static const AuthorizationError UNSPECIFIED =
    AuthorizationErrorEnum_AuthorizationError_UNSPECIFIED;
  static const AuthorizationError UNKNOWN =
    AuthorizationErrorEnum_AuthorizationError_UNKNOWN;
  static const AuthorizationError USER_PERMISSION_DENIED =
    AuthorizationErrorEnum_AuthorizationError_USER_PERMISSION_DENIED;
  static const AuthorizationError DEVELOPER_TOKEN_NOT_WHITELISTED =
    AuthorizationErrorEnum_AuthorizationError_DEVELOPER_TOKEN_NOT_WHITELISTED;
  static const AuthorizationError DEVELOPER_TOKEN_PROHIBITED =
    AuthorizationErrorEnum_AuthorizationError_DEVELOPER_TOKEN_PROHIBITED;
  static const AuthorizationError PROJECT_DISABLED =
    AuthorizationErrorEnum_AuthorizationError_PROJECT_DISABLED;
  static const AuthorizationError AUTHORIZATION_ERROR =
    AuthorizationErrorEnum_AuthorizationError_AUTHORIZATION_ERROR;
  static inline bool AuthorizationError_IsValid(int value) {
    return AuthorizationErrorEnum_AuthorizationError_IsValid(value);
  }
  static const AuthorizationError AuthorizationError_MIN =
    AuthorizationErrorEnum_AuthorizationError_AuthorizationError_MIN;
  static const AuthorizationError AuthorizationError_MAX =
    AuthorizationErrorEnum_AuthorizationError_AuthorizationError_MAX;
  static const int AuthorizationError_ARRAYSIZE =
    AuthorizationErrorEnum_AuthorizationError_AuthorizationError_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  AuthorizationError_descriptor() {
    return AuthorizationErrorEnum_AuthorizationError_descriptor();
  }
  static inline const ::std::string& AuthorizationError_Name(AuthorizationError value) {
    return AuthorizationErrorEnum_AuthorizationError_Name(value);
  }
  static inline bool AuthorizationError_Parse(const ::std::string& name,
      AuthorizationError* value) {
    return AuthorizationErrorEnum_AuthorizationError_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:google.ads.googleads.v0.errors.AuthorizationErrorEnum)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_google_2fads_2fgoogleads_2fv0_2ferrors_2fauthorization_5ferror_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// AuthorizationErrorEnum

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

template <> struct is_proto_enum< ::google::ads::googleads::v0::errors::AuthorizationErrorEnum_AuthorizationError> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::google::ads::googleads::v0::errors::AuthorizationErrorEnum_AuthorizationError>() {
  return ::google::ads::googleads::v0::errors::AuthorizationErrorEnum_AuthorizationError_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_google_2fads_2fgoogleads_2fv0_2ferrors_2fauthorization_5ferror_2eproto
