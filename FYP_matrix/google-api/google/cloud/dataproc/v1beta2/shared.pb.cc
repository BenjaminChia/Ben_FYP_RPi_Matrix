// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/cloud/dataproc/v1beta2/shared.proto

#include "google/cloud/dataproc/v1beta2/shared.pb.h"

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
namespace cloud {
namespace dataproc {
namespace v1beta2 {
}  // namespace v1beta2
}  // namespace dataproc
}  // namespace cloud
}  // namespace google
namespace protobuf_google_2fcloud_2fdataproc_2fv1beta2_2fshared_2eproto {
void InitDefaults() {
}

const ::google::protobuf::uint32 TableStruct::offsets[1] = {};
static const ::google::protobuf::internal::MigrationSchema* schemas = NULL;
static const ::google::protobuf::Message* const* file_default_instances = NULL;

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "google/cloud/dataproc/v1beta2/shared.proto", schemas, file_default_instances, TableStruct::offsets,
      NULL, NULL, NULL);
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
      "\n*google/cloud/dataproc/v1beta2/shared.p"
      "roto\022\035google.cloud.dataproc.v1beta2\032\034goo"
      "gle/api/annotations.protoBy\n!com.google."
      "cloud.dataproc.v1beta2B\013SharedProtoP\001ZEg"
      "oogle.golang.org/genproto/googleapis/clo"
      "ud/dataproc/v1beta2;dataprocb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 236);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "google/cloud/dataproc/v1beta2/shared.proto", &protobuf_RegisterTypes);
  ::protobuf_google_2fapi_2fannotations_2eproto::AddDescriptors();
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
}  // namespace protobuf_google_2fcloud_2fdataproc_2fv1beta2_2fshared_2eproto
namespace google {
namespace cloud {
namespace dataproc {
namespace v1beta2 {

// @@protoc_insertion_point(namespace_scope)
}  // namespace v1beta2
}  // namespace dataproc
}  // namespace cloud
}  // namespace google
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
