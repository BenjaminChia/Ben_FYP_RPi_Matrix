// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/type/money.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "google/type/money.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace google {
namespace type {

namespace {

const ::google::protobuf::Descriptor* Money_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Money_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_google_2ftype_2fmoney_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_google_2ftype_2fmoney_2eproto() {
  protobuf_AddDesc_google_2ftype_2fmoney_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "google/type/money.proto");
  GOOGLE_CHECK(file != NULL);
  Money_descriptor_ = file->message_type(0);
  static const int Money_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Money, currency_code_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Money, units_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Money, nanos_),
  };
  Money_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Money_descriptor_,
      Money::internal_default_instance(),
      Money_offsets_,
      -1,
      -1,
      -1,
      sizeof(Money),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Money, _internal_metadata_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_google_2ftype_2fmoney_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Money_descriptor_, Money::internal_default_instance());
}

}  // namespace

void protobuf_ShutdownFile_google_2ftype_2fmoney_2eproto() {
  Money_default_instance_.Shutdown();
  delete Money_reflection_;
}

void protobuf_InitDefaults_google_2ftype_2fmoney_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::GetEmptyString();
  Money_default_instance_.DefaultConstruct();
  Money_default_instance_.get_mutable()->InitAsDefaultInstance();
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_InitDefaults_google_2ftype_2fmoney_2eproto_once_);
void protobuf_InitDefaults_google_2ftype_2fmoney_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_InitDefaults_google_2ftype_2fmoney_2eproto_once_,
                 &protobuf_InitDefaults_google_2ftype_2fmoney_2eproto_impl);
}
void protobuf_AddDesc_google_2ftype_2fmoney_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  protobuf_InitDefaults_google_2ftype_2fmoney_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\027google/type/money.proto\022\013google.type\"<"
    "\n\005Money\022\025\n\rcurrency_code\030\001 \001(\t\022\r\n\005units\030"
    "\002 \001(\003\022\r\n\005nanos\030\003 \001(\005B]\n\017com.google.typeB"
    "\nMoneyProtoP\001Z6google.golang.org/genprot"
    "o/googleapis/type/money;money\242\002\003GTPb\006pro"
    "to3", 203);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "google/type/money.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_google_2ftype_2fmoney_2eproto);
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_google_2ftype_2fmoney_2eproto_once_);
void protobuf_AddDesc_google_2ftype_2fmoney_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_google_2ftype_2fmoney_2eproto_once_,
                 &protobuf_AddDesc_google_2ftype_2fmoney_2eproto_impl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_google_2ftype_2fmoney_2eproto {
  StaticDescriptorInitializer_google_2ftype_2fmoney_2eproto() {
    protobuf_AddDesc_google_2ftype_2fmoney_2eproto();
  }
} static_descriptor_initializer_google_2ftype_2fmoney_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD GOOGLE_ATTRIBUTE_NORETURN;
static void MergeFromFail(int line) {
  ::google::protobuf::internal::MergeFromFail(__FILE__, line);
}

}  // namespace


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Money::kCurrencyCodeFieldNumber;
const int Money::kUnitsFieldNumber;
const int Money::kNanosFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Money::Money()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (this != internal_default_instance()) protobuf_InitDefaults_google_2ftype_2fmoney_2eproto();
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.type.Money)
}

void Money::InitAsDefaultInstance() {
}

Money::Money(const Money& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  UnsafeMergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:google.type.Money)
}

void Money::SharedCtor() {
  currency_code_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&units_, 0, reinterpret_cast<char*>(&nanos_) -
    reinterpret_cast<char*>(&units_) + sizeof(nanos_));
  _cached_size_ = 0;
}

Money::~Money() {
  // @@protoc_insertion_point(destructor:google.type.Money)
  SharedDtor();
}

void Money::SharedDtor() {
  currency_code_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void Money::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Money::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Money_descriptor_;
}

const Money& Money::default_instance() {
  protobuf_InitDefaults_google_2ftype_2fmoney_2eproto();
  return *internal_default_instance();
}

::google::protobuf::internal::ExplicitlyConstructed<Money> Money_default_instance_;

Money* Money::New(::google::protobuf::Arena* arena) const {
  Money* n = new Money;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Money::Clear() {
// @@protoc_insertion_point(message_clear_start:google.type.Money)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(Money, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<Money*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&(first), 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(units_, nanos_);
  currency_code_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());

#undef ZR_HELPER_
#undef ZR_

}

bool Money::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.type.Money)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string currency_code = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_currency_code()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->currency_code().data(), this->currency_code().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "google.type.Money.currency_code"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_units;
        break;
      }

      // optional int64 units = 2;
      case 2: {
        if (tag == 16) {
         parse_units:

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &units_)));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_nanos;
        break;
      }

      // optional int32 nanos = 3;
      case 3: {
        if (tag == 24) {
         parse_nanos:

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &nanos_)));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:google.type.Money)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.type.Money)
  return false;
#undef DO_
}

void Money::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.type.Money)
  // optional string currency_code = 1;
  if (this->currency_code().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->currency_code().data(), this->currency_code().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.type.Money.currency_code");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->currency_code(), output);
  }

  // optional int64 units = 2;
  if (this->units() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(2, this->units(), output);
  }

  // optional int32 nanos = 3;
  if (this->nanos() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->nanos(), output);
  }

  // @@protoc_insertion_point(serialize_end:google.type.Money)
}

::google::protobuf::uint8* Money::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:google.type.Money)
  // optional string currency_code = 1;
  if (this->currency_code().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->currency_code().data(), this->currency_code().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.type.Money.currency_code");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->currency_code(), target);
  }

  // optional int64 units = 2;
  if (this->units() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(2, this->units(), target);
  }

  // optional int32 nanos = 3;
  if (this->nanos() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->nanos(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:google.type.Money)
  return target;
}

size_t Money::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.type.Money)
  size_t total_size = 0;

  // optional string currency_code = 1;
  if (this->currency_code().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->currency_code());
  }

  // optional int64 units = 2;
  if (this->units() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->units());
  }

  // optional int32 nanos = 3;
  if (this->nanos() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->nanos());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Money::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.type.Money)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const Money* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Money>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.type.Money)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.type.Money)
    UnsafeMergeFrom(*source);
  }
}

void Money::MergeFrom(const Money& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.type.Money)
  if (GOOGLE_PREDICT_TRUE(&from != this)) {
    UnsafeMergeFrom(from);
  } else {
    MergeFromFail(__LINE__);
  }
}

void Money::UnsafeMergeFrom(const Money& from) {
  GOOGLE_DCHECK(&from != this);
  if (from.currency_code().size() > 0) {

    currency_code_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.currency_code_);
  }
  if (from.units() != 0) {
    set_units(from.units());
  }
  if (from.nanos() != 0) {
    set_nanos(from.nanos());
  }
}

void Money::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.type.Money)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Money::CopyFrom(const Money& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.type.Money)
  if (&from == this) return;
  Clear();
  UnsafeMergeFrom(from);
}

bool Money::IsInitialized() const {

  return true;
}

void Money::Swap(Money* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Money::InternalSwap(Money* other) {
  currency_code_.Swap(&other->currency_code_);
  std::swap(units_, other->units_);
  std::swap(nanos_, other->nanos_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Money::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Money_descriptor_;
  metadata.reflection = Money_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Money

// optional string currency_code = 1;
void Money::clear_currency_code() {
  currency_code_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& Money::currency_code() const {
  // @@protoc_insertion_point(field_get:google.type.Money.currency_code)
  return currency_code_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void Money::set_currency_code(const ::std::string& value) {
  
  currency_code_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.type.Money.currency_code)
}
void Money::set_currency_code(const char* value) {
  
  currency_code_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.type.Money.currency_code)
}
void Money::set_currency_code(const char* value, size_t size) {
  
  currency_code_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.type.Money.currency_code)
}
::std::string* Money::mutable_currency_code() {
  
  // @@protoc_insertion_point(field_mutable:google.type.Money.currency_code)
  return currency_code_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* Money::release_currency_code() {
  // @@protoc_insertion_point(field_release:google.type.Money.currency_code)
  
  return currency_code_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void Money::set_allocated_currency_code(::std::string* currency_code) {
  if (currency_code != NULL) {
    
  } else {
    
  }
  currency_code_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), currency_code);
  // @@protoc_insertion_point(field_set_allocated:google.type.Money.currency_code)
}

// optional int64 units = 2;
void Money::clear_units() {
  units_ = GOOGLE_LONGLONG(0);
}
::google::protobuf::int64 Money::units() const {
  // @@protoc_insertion_point(field_get:google.type.Money.units)
  return units_;
}
void Money::set_units(::google::protobuf::int64 value) {
  
  units_ = value;
  // @@protoc_insertion_point(field_set:google.type.Money.units)
}

// optional int32 nanos = 3;
void Money::clear_nanos() {
  nanos_ = 0;
}
::google::protobuf::int32 Money::nanos() const {
  // @@protoc_insertion_point(field_get:google.type.Money.nanos)
  return nanos_;
}
void Money::set_nanos(::google::protobuf::int32 value) {
  
  nanos_ = value;
  // @@protoc_insertion_point(field_set:google.type.Money.nanos)
}

inline const Money* Money::internal_default_instance() {
  return &Money_default_instance_.get();
}
#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace type
}  // namespace google

// @@protoc_insertion_point(global_scope)