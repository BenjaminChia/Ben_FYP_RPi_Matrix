// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/ads/googleads/v0/errors/authentication_error.proto

#ifndef PROTOBUF_INCLUDED_google_2fads_2fgoogleads_2fv0_2ferrors_2fauthentication_5ferror_2eproto
#define PROTOBUF_INCLUDED_google_2fads_2fgoogleads_2fv0_2ferrors_2fauthentication_5ferror_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_protobuf_google_2fads_2fgoogleads_2fv0_2ferrors_2fauthentication_5ferror_2eproto 

namespace protobuf_google_2fads_2fgoogleads_2fv0_2ferrors_2fauthentication_5ferror_2eproto {
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
}  // namespace protobuf_google_2fads_2fgoogleads_2fv0_2ferrors_2fauthentication_5ferror_2eproto
namespace google {
namespace ads {
namespace googleads {
namespace v0 {
namespace errors {
class AuthenticationErrorEnum;
class AuthenticationErrorEnumDefaultTypeInternal;
extern AuthenticationErrorEnumDefaultTypeInternal _AuthenticationErrorEnum_default_instance_;
}  // namespace errors
}  // namespace v0
}  // namespace googleads
}  // namespace ads
}  // namespace google
namespace google {
namespace protobuf {
template<> ::google::ads::googleads::v0::errors::AuthenticationErrorEnum* Arena::CreateMaybeMessage<::google::ads::googleads::v0::errors::AuthenticationErrorEnum>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace google {
namespace ads {
namespace googleads {
namespace v0 {
namespace errors {

enum AuthenticationErrorEnum_AuthenticationError {
  AuthenticationErrorEnum_AuthenticationError_UNSPECIFIED = 0,
  AuthenticationErrorEnum_AuthenticationError_UNKNOWN = 1,
  AuthenticationErrorEnum_AuthenticationError_AUTHENTICATION_ERROR = 2,
  AuthenticationErrorEnum_AuthenticationError_CLIENT_CUSTOMER_ID_INVALID = 5,
  AuthenticationErrorEnum_AuthenticationError_CUSTOMER_NOT_FOUND = 8,
  AuthenticationErrorEnum_AuthenticationError_GOOGLE_ACCOUNT_DELETED = 9,
  AuthenticationErrorEnum_AuthenticationError_GOOGLE_ACCOUNT_COOKIE_INVALID = 10,
  AuthenticationErrorEnum_AuthenticationError_FAILED_TO_AUTHENTICATE_GOOGLE_ACCOUNT = 11,
  AuthenticationErrorEnum_AuthenticationError_GOOGLE_ACCOUNT_USER_AND_ADS_USER_MISMATCH = 12,
  AuthenticationErrorEnum_AuthenticationError_LOGIN_COOKIE_REQUIRED = 13,
  AuthenticationErrorEnum_AuthenticationError_NOT_ADS_USER = 14,
  AuthenticationErrorEnum_AuthenticationError_OAUTH_TOKEN_INVALID = 15,
  AuthenticationErrorEnum_AuthenticationError_OAUTH_TOKEN_EXPIRED = 16,
  AuthenticationErrorEnum_AuthenticationError_OAUTH_TOKEN_DISABLED = 17,
  AuthenticationErrorEnum_AuthenticationError_OAUTH_TOKEN_REVOKED = 18,
  AuthenticationErrorEnum_AuthenticationError_OAUTH_TOKEN_HEADER_INVALID = 19,
  AuthenticationErrorEnum_AuthenticationError_LOGIN_COOKIE_INVALID = 20,
  AuthenticationErrorEnum_AuthenticationError_FAILED_TO_RETRIEVE_LOGIN_COOKIE = 21,
  AuthenticationErrorEnum_AuthenticationError_USER_ID_INVALID = 22,
  AuthenticationErrorEnum_AuthenticationError_AuthenticationErrorEnum_AuthenticationError_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  AuthenticationErrorEnum_AuthenticationError_AuthenticationErrorEnum_AuthenticationError_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool AuthenticationErrorEnum_AuthenticationError_IsValid(int value);
const AuthenticationErrorEnum_AuthenticationError AuthenticationErrorEnum_AuthenticationError_AuthenticationError_MIN = AuthenticationErrorEnum_AuthenticationError_UNSPECIFIED;
const AuthenticationErrorEnum_AuthenticationError AuthenticationErrorEnum_AuthenticationError_AuthenticationError_MAX = AuthenticationErrorEnum_AuthenticationError_USER_ID_INVALID;
const int AuthenticationErrorEnum_AuthenticationError_AuthenticationError_ARRAYSIZE = AuthenticationErrorEnum_AuthenticationError_AuthenticationError_MAX + 1;

const ::google::protobuf::EnumDescriptor* AuthenticationErrorEnum_AuthenticationError_descriptor();
inline const ::std::string& AuthenticationErrorEnum_AuthenticationError_Name(AuthenticationErrorEnum_AuthenticationError value) {
  return ::google::protobuf::internal::NameOfEnum(
    AuthenticationErrorEnum_AuthenticationError_descriptor(), value);
}
inline bool AuthenticationErrorEnum_AuthenticationError_Parse(
    const ::std::string& name, AuthenticationErrorEnum_AuthenticationError* value) {
  return ::google::protobuf::internal::ParseNamedEnum<AuthenticationErrorEnum_AuthenticationError>(
    AuthenticationErrorEnum_AuthenticationError_descriptor(), name, value);
}
// ===================================================================

class AuthenticationErrorEnum : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.ads.googleads.v0.errors.AuthenticationErrorEnum) */ {
 public:
  AuthenticationErrorEnum();
  virtual ~AuthenticationErrorEnum();

  AuthenticationErrorEnum(const AuthenticationErrorEnum& from);

  inline AuthenticationErrorEnum& operator=(const AuthenticationErrorEnum& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  AuthenticationErrorEnum(AuthenticationErrorEnum&& from) noexcept
    : AuthenticationErrorEnum() {
    *this = ::std::move(from);
  }

  inline AuthenticationErrorEnum& operator=(AuthenticationErrorEnum&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const AuthenticationErrorEnum& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const AuthenticationErrorEnum* internal_default_instance() {
    return reinterpret_cast<const AuthenticationErrorEnum*>(
               &_AuthenticationErrorEnum_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(AuthenticationErrorEnum* other);
  friend void swap(AuthenticationErrorEnum& a, AuthenticationErrorEnum& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline AuthenticationErrorEnum* New() const final {
    return CreateMaybeMessage<AuthenticationErrorEnum>(NULL);
  }

  AuthenticationErrorEnum* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<AuthenticationErrorEnum>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const AuthenticationErrorEnum& from);
  void MergeFrom(const AuthenticationErrorEnum& from);
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
  void InternalSwap(AuthenticationErrorEnum* other);
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

  typedef AuthenticationErrorEnum_AuthenticationError AuthenticationError;
  static const AuthenticationError UNSPECIFIED =
    AuthenticationErrorEnum_AuthenticationError_UNSPECIFIED;
  static const AuthenticationError UNKNOWN =
    AuthenticationErrorEnum_AuthenticationError_UNKNOWN;
  static const AuthenticationError AUTHENTICATION_ERROR =
    AuthenticationErrorEnum_AuthenticationError_AUTHENTICATION_ERROR;
  static const AuthenticationError CLIENT_CUSTOMER_ID_INVALID =
    AuthenticationErrorEnum_AuthenticationError_CLIENT_CUSTOMER_ID_INVALID;
  static const AuthenticationError CUSTOMER_NOT_FOUND =
    AuthenticationErrorEnum_AuthenticationError_CUSTOMER_NOT_FOUND;
  static const AuthenticationError GOOGLE_ACCOUNT_DELETED =
    AuthenticationErrorEnum_AuthenticationError_GOOGLE_ACCOUNT_DELETED;
  static const AuthenticationError GOOGLE_ACCOUNT_COOKIE_INVALID =
    AuthenticationErrorEnum_AuthenticationError_GOOGLE_ACCOUNT_COOKIE_INVALID;
  static const AuthenticationError FAILED_TO_AUTHENTICATE_GOOGLE_ACCOUNT =
    AuthenticationErrorEnum_AuthenticationError_FAILED_TO_AUTHENTICATE_GOOGLE_ACCOUNT;
  static const AuthenticationError GOOGLE_ACCOUNT_USER_AND_ADS_USER_MISMATCH =
    AuthenticationErrorEnum_AuthenticationError_GOOGLE_ACCOUNT_USER_AND_ADS_USER_MISMATCH;
  static const AuthenticationError LOGIN_COOKIE_REQUIRED =
    AuthenticationErrorEnum_AuthenticationError_LOGIN_COOKIE_REQUIRED;
  static const AuthenticationError NOT_ADS_USER =
    AuthenticationErrorEnum_AuthenticationError_NOT_ADS_USER;
  static const AuthenticationError OAUTH_TOKEN_INVALID =
    AuthenticationErrorEnum_AuthenticationError_OAUTH_TOKEN_INVALID;
  static const AuthenticationError OAUTH_TOKEN_EXPIRED =
    AuthenticationErrorEnum_AuthenticationError_OAUTH_TOKEN_EXPIRED;
  static const AuthenticationError OAUTH_TOKEN_DISABLED =
    AuthenticationErrorEnum_AuthenticationError_OAUTH_TOKEN_DISABLED;
  static const AuthenticationError OAUTH_TOKEN_REVOKED =
    AuthenticationErrorEnum_AuthenticationError_OAUTH_TOKEN_REVOKED;
  static const AuthenticationError OAUTH_TOKEN_HEADER_INVALID =
    AuthenticationErrorEnum_AuthenticationError_OAUTH_TOKEN_HEADER_INVALID;
  static const AuthenticationError LOGIN_COOKIE_INVALID =
    AuthenticationErrorEnum_AuthenticationError_LOGIN_COOKIE_INVALID;
  static const AuthenticationError FAILED_TO_RETRIEVE_LOGIN_COOKIE =
    AuthenticationErrorEnum_AuthenticationError_FAILED_TO_RETRIEVE_LOGIN_COOKIE;
  static const AuthenticationError USER_ID_INVALID =
    AuthenticationErrorEnum_AuthenticationError_USER_ID_INVALID;
  static inline bool AuthenticationError_IsValid(int value) {
    return AuthenticationErrorEnum_AuthenticationError_IsValid(value);
  }
  static const AuthenticationError AuthenticationError_MIN =
    AuthenticationErrorEnum_AuthenticationError_AuthenticationError_MIN;
  static const AuthenticationError AuthenticationError_MAX =
    AuthenticationErrorEnum_AuthenticationError_AuthenticationError_MAX;
  static const int AuthenticationError_ARRAYSIZE =
    AuthenticationErrorEnum_AuthenticationError_AuthenticationError_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  AuthenticationError_descriptor() {
    return AuthenticationErrorEnum_AuthenticationError_descriptor();
  }
  static inline const ::std::string& AuthenticationError_Name(AuthenticationError value) {
    return AuthenticationErrorEnum_AuthenticationError_Name(value);
  }
  static inline bool AuthenticationError_Parse(const ::std::string& name,
      AuthenticationError* value) {
    return AuthenticationErrorEnum_AuthenticationError_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:google.ads.googleads.v0.errors.AuthenticationErrorEnum)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_google_2fads_2fgoogleads_2fv0_2ferrors_2fauthentication_5ferror_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// AuthenticationErrorEnum

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

template <> struct is_proto_enum< ::google::ads::googleads::v0::errors::AuthenticationErrorEnum_AuthenticationError> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::google::ads::googleads::v0::errors::AuthenticationErrorEnum_AuthenticationError>() {
  return ::google::ads::googleads::v0::errors::AuthenticationErrorEnum_AuthenticationError_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_google_2fads_2fgoogleads_2fv0_2ferrors_2fauthentication_5ferror_2eproto