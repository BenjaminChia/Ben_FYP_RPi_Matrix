// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/api/launch_stage.proto

#include "google/api/launch_stage.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

namespace google {
namespace api {
}  // namespace api
}  // namespace google
namespace protobuf_google_2fapi_2flaunch_5fstage_2eproto {
void InitDefaults() {
}

const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[1];
const ::google::protobuf::uint32 TableStruct::offsets[1] = {};
static const ::google::protobuf::internal::MigrationSchema* schemas = NULL;
static const ::google::protobuf::Message* const* file_default_instances = NULL;

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "google/api/launch_stage.proto", schemas, file_default_instances, TableStruct::offsets,
      NULL, file_level_enum_descriptors, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\035google/api/launch_stage.proto\022\ngoogle."
      "api*j\n\013LaunchStage\022\034\n\030LAUNCH_STAGE_UNSPE"
      "CIFIED\020\000\022\020\n\014EARLY_ACCESS\020\001\022\t\n\005ALPHA\020\002\022\010\n"
      "\004BETA\020\003\022\006\n\002GA\020\004\022\016\n\nDEPRECATED\020\005BZ\n\016com.g"
      "oogle.apiB\020LaunchStageProtoP\001Z-google.go"
      "lang.org/genproto/googleapis/api;api\242\002\004G"
      "APIb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 251);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "google/api/launch_stage.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_google_2fapi_2flaunch_5fstage_2eproto
namespace google {
namespace api {
const ::google::protobuf::EnumDescriptor* LaunchStage_descriptor() {
  protobuf_google_2fapi_2flaunch_5fstage_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_google_2fapi_2flaunch_5fstage_2eproto::file_level_enum_descriptors[0];
}
bool LaunchStage_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      return true;
    default:
      return false;
  }
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace api
}  // namespace google
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
