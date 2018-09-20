// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/appengine/legacy/audit_data.proto

#ifndef PROTOBUF_INCLUDED_google_2fappengine_2flegacy_2faudit_5fdata_2eproto
#define PROTOBUF_INCLUDED_google_2fappengine_2flegacy_2faudit_5fdata_2eproto

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
#include <google/protobuf/map.h>  // IWYU pragma: export
#include <google/protobuf/map_entry.h>
#include <google/protobuf/map_field_inl.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_google_2fappengine_2flegacy_2faudit_5fdata_2eproto 

namespace protobuf_google_2fappengine_2flegacy_2faudit_5fdata_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[2];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_google_2fappengine_2flegacy_2faudit_5fdata_2eproto
namespace google {
namespace appengine {
namespace legacy {
class AuditData;
class AuditDataDefaultTypeInternal;
extern AuditDataDefaultTypeInternal _AuditData_default_instance_;
class AuditData_EventDataEntry_DoNotUse;
class AuditData_EventDataEntry_DoNotUseDefaultTypeInternal;
extern AuditData_EventDataEntry_DoNotUseDefaultTypeInternal _AuditData_EventDataEntry_DoNotUse_default_instance_;
}  // namespace legacy
}  // namespace appengine
}  // namespace google
namespace google {
namespace protobuf {
template<> ::google::appengine::legacy::AuditData* Arena::CreateMaybeMessage<::google::appengine::legacy::AuditData>(Arena*);
template<> ::google::appengine::legacy::AuditData_EventDataEntry_DoNotUse* Arena::CreateMaybeMessage<::google::appengine::legacy::AuditData_EventDataEntry_DoNotUse>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace google {
namespace appengine {
namespace legacy {

// ===================================================================

class AuditData_EventDataEntry_DoNotUse : public ::google::protobuf::internal::MapEntry<AuditData_EventDataEntry_DoNotUse, 
    ::std::string, ::std::string,
    ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
    ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
    0 > {
public:
  typedef ::google::protobuf::internal::MapEntry<AuditData_EventDataEntry_DoNotUse, 
    ::std::string, ::std::string,
    ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
    ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
    0 > SuperType;
  AuditData_EventDataEntry_DoNotUse();
  AuditData_EventDataEntry_DoNotUse(::google::protobuf::Arena* arena);
  void MergeFrom(const AuditData_EventDataEntry_DoNotUse& other);
  static const AuditData_EventDataEntry_DoNotUse* internal_default_instance() { return reinterpret_cast<const AuditData_EventDataEntry_DoNotUse*>(&_AuditData_EventDataEntry_DoNotUse_default_instance_); }
  void MergeFrom(const ::google::protobuf::Message& other) final;
  ::google::protobuf::Metadata GetMetadata() const;
};

// -------------------------------------------------------------------

class AuditData : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.appengine.legacy.AuditData) */ {
 public:
  AuditData();
  virtual ~AuditData();

  AuditData(const AuditData& from);

  inline AuditData& operator=(const AuditData& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  AuditData(AuditData&& from) noexcept
    : AuditData() {
    *this = ::std::move(from);
  }

  inline AuditData& operator=(AuditData&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const AuditData& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const AuditData* internal_default_instance() {
    return reinterpret_cast<const AuditData*>(
               &_AuditData_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(AuditData* other);
  friend void swap(AuditData& a, AuditData& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline AuditData* New() const final {
    return CreateMaybeMessage<AuditData>(NULL);
  }

  AuditData* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<AuditData>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const AuditData& from);
  void MergeFrom(const AuditData& from);
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
  void InternalSwap(AuditData* other);
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

  // map<string, string> event_data = 2;
  int event_data_size() const;
  void clear_event_data();
  static const int kEventDataFieldNumber = 2;
  const ::google::protobuf::Map< ::std::string, ::std::string >&
      event_data() const;
  ::google::protobuf::Map< ::std::string, ::std::string >*
      mutable_event_data();

  // string event_message = 1;
  void clear_event_message();
  static const int kEventMessageFieldNumber = 1;
  const ::std::string& event_message() const;
  void set_event_message(const ::std::string& value);
  #if LANG_CXX11
  void set_event_message(::std::string&& value);
  #endif
  void set_event_message(const char* value);
  void set_event_message(const char* value, size_t size);
  ::std::string* mutable_event_message();
  ::std::string* release_event_message();
  void set_allocated_event_message(::std::string* event_message);

  // @@protoc_insertion_point(class_scope:google.appengine.legacy.AuditData)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::MapField<
      AuditData_EventDataEntry_DoNotUse,
      ::std::string, ::std::string,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      0 > event_data_;
  ::google::protobuf::internal::ArenaStringPtr event_message_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_google_2fappengine_2flegacy_2faudit_5fdata_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// AuditData

// string event_message = 1;
inline void AuditData::clear_event_message() {
  event_message_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& AuditData::event_message() const {
  // @@protoc_insertion_point(field_get:google.appengine.legacy.AuditData.event_message)
  return event_message_.GetNoArena();
}
inline void AuditData::set_event_message(const ::std::string& value) {
  
  event_message_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.appengine.legacy.AuditData.event_message)
}
#if LANG_CXX11
inline void AuditData::set_event_message(::std::string&& value) {
  
  event_message_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:google.appengine.legacy.AuditData.event_message)
}
#endif
inline void AuditData::set_event_message(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  event_message_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.appengine.legacy.AuditData.event_message)
}
inline void AuditData::set_event_message(const char* value, size_t size) {
  
  event_message_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.appengine.legacy.AuditData.event_message)
}
inline ::std::string* AuditData::mutable_event_message() {
  
  // @@protoc_insertion_point(field_mutable:google.appengine.legacy.AuditData.event_message)
  return event_message_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* AuditData::release_event_message() {
  // @@protoc_insertion_point(field_release:google.appengine.legacy.AuditData.event_message)
  
  return event_message_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void AuditData::set_allocated_event_message(::std::string* event_message) {
  if (event_message != NULL) {
    
  } else {
    
  }
  event_message_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), event_message);
  // @@protoc_insertion_point(field_set_allocated:google.appengine.legacy.AuditData.event_message)
}

// map<string, string> event_data = 2;
inline int AuditData::event_data_size() const {
  return event_data_.size();
}
inline void AuditData::clear_event_data() {
  event_data_.Clear();
}
inline const ::google::protobuf::Map< ::std::string, ::std::string >&
AuditData::event_data() const {
  // @@protoc_insertion_point(field_map:google.appengine.legacy.AuditData.event_data)
  return event_data_.GetMap();
}
inline ::google::protobuf::Map< ::std::string, ::std::string >*
AuditData::mutable_event_data() {
  // @@protoc_insertion_point(field_mutable_map:google.appengine.legacy.AuditData.event_data)
  return event_data_.MutableMap();
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace legacy
}  // namespace appengine
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_google_2fappengine_2flegacy_2faudit_5fdata_2eproto
