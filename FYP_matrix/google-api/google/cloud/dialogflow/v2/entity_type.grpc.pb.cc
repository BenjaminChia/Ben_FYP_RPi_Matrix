// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: google/cloud/dialogflow/v2/entity_type.proto

#include "google/cloud/dialogflow/v2/entity_type.pb.h"
#include "google/cloud/dialogflow/v2/entity_type.grpc.pb.h"

#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/method_handler_impl.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace google {
namespace cloud {
namespace dialogflow {
namespace v2 {

static const char* EntityTypes_method_names[] = {
  "/google.cloud.dialogflow.v2.EntityTypes/ListEntityTypes",
  "/google.cloud.dialogflow.v2.EntityTypes/GetEntityType",
  "/google.cloud.dialogflow.v2.EntityTypes/CreateEntityType",
  "/google.cloud.dialogflow.v2.EntityTypes/UpdateEntityType",
  "/google.cloud.dialogflow.v2.EntityTypes/DeleteEntityType",
  "/google.cloud.dialogflow.v2.EntityTypes/BatchUpdateEntityTypes",
  "/google.cloud.dialogflow.v2.EntityTypes/BatchDeleteEntityTypes",
  "/google.cloud.dialogflow.v2.EntityTypes/BatchCreateEntities",
  "/google.cloud.dialogflow.v2.EntityTypes/BatchUpdateEntities",
  "/google.cloud.dialogflow.v2.EntityTypes/BatchDeleteEntities",
};

std::unique_ptr< EntityTypes::Stub> EntityTypes::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< EntityTypes::Stub> stub(new EntityTypes::Stub(channel));
  return stub;
}

EntityTypes::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_ListEntityTypes_(EntityTypes_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetEntityType_(EntityTypes_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_CreateEntityType_(EntityTypes_method_names[2], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_UpdateEntityType_(EntityTypes_method_names[3], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_DeleteEntityType_(EntityTypes_method_names[4], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_BatchUpdateEntityTypes_(EntityTypes_method_names[5], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_BatchDeleteEntityTypes_(EntityTypes_method_names[6], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_BatchCreateEntities_(EntityTypes_method_names[7], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_BatchUpdateEntities_(EntityTypes_method_names[8], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_BatchDeleteEntities_(EntityTypes_method_names[9], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status EntityTypes::Stub::ListEntityTypes(::grpc::ClientContext* context, const ::google::cloud::dialogflow::v2::ListEntityTypesRequest& request, ::google::cloud::dialogflow::v2::ListEntityTypesResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_ListEntityTypes_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::cloud::dialogflow::v2::ListEntityTypesResponse>* EntityTypes::Stub::AsyncListEntityTypesRaw(::grpc::ClientContext* context, const ::google::cloud::dialogflow::v2::ListEntityTypesRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::cloud::dialogflow::v2::ListEntityTypesResponse>::Create(channel_.get(), cq, rpcmethod_ListEntityTypes_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::cloud::dialogflow::v2::ListEntityTypesResponse>* EntityTypes::Stub::PrepareAsyncListEntityTypesRaw(::grpc::ClientContext* context, const ::google::cloud::dialogflow::v2::ListEntityTypesRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::cloud::dialogflow::v2::ListEntityTypesResponse>::Create(channel_.get(), cq, rpcmethod_ListEntityTypes_, context, request, false);
}

::grpc::Status EntityTypes::Stub::GetEntityType(::grpc::ClientContext* context, const ::google::cloud::dialogflow::v2::GetEntityTypeRequest& request, ::google::cloud::dialogflow::v2::EntityType* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GetEntityType_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::cloud::dialogflow::v2::EntityType>* EntityTypes::Stub::AsyncGetEntityTypeRaw(::grpc::ClientContext* context, const ::google::cloud::dialogflow::v2::GetEntityTypeRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::cloud::dialogflow::v2::EntityType>::Create(channel_.get(), cq, rpcmethod_GetEntityType_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::cloud::dialogflow::v2::EntityType>* EntityTypes::Stub::PrepareAsyncGetEntityTypeRaw(::grpc::ClientContext* context, const ::google::cloud::dialogflow::v2::GetEntityTypeRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::cloud::dialogflow::v2::EntityType>::Create(channel_.get(), cq, rpcmethod_GetEntityType_, context, request, false);
}

::grpc::Status EntityTypes::Stub::CreateEntityType(::grpc::ClientContext* context, const ::google::cloud::dialogflow::v2::CreateEntityTypeRequest& request, ::google::cloud::dialogflow::v2::EntityType* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_CreateEntityType_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::cloud::dialogflow::v2::EntityType>* EntityTypes::Stub::AsyncCreateEntityTypeRaw(::grpc::ClientContext* context, const ::google::cloud::dialogflow::v2::CreateEntityTypeRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::cloud::dialogflow::v2::EntityType>::Create(channel_.get(), cq, rpcmethod_CreateEntityType_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::cloud::dialogflow::v2::EntityType>* EntityTypes::Stub::PrepareAsyncCreateEntityTypeRaw(::grpc::ClientContext* context, const ::google::cloud::dialogflow::v2::CreateEntityTypeRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::cloud::dialogflow::v2::EntityType>::Create(channel_.get(), cq, rpcmethod_CreateEntityType_, context, request, false);
}

::grpc::Status EntityTypes::Stub::UpdateEntityType(::grpc::ClientContext* context, const ::google::cloud::dialogflow::v2::UpdateEntityTypeRequest& request, ::google::cloud::dialogflow::v2::EntityType* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_UpdateEntityType_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::cloud::dialogflow::v2::EntityType>* EntityTypes::Stub::AsyncUpdateEntityTypeRaw(::grpc::ClientContext* context, const ::google::cloud::dialogflow::v2::UpdateEntityTypeRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::cloud::dialogflow::v2::EntityType>::Create(channel_.get(), cq, rpcmethod_UpdateEntityType_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::cloud::dialogflow::v2::EntityType>* EntityTypes::Stub::PrepareAsyncUpdateEntityTypeRaw(::grpc::ClientContext* context, const ::google::cloud::dialogflow::v2::UpdateEntityTypeRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::cloud::dialogflow::v2::EntityType>::Create(channel_.get(), cq, rpcmethod_UpdateEntityType_, context, request, false);
}

::grpc::Status EntityTypes::Stub::DeleteEntityType(::grpc::ClientContext* context, const ::google::cloud::dialogflow::v2::DeleteEntityTypeRequest& request, ::google::protobuf::Empty* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_DeleteEntityType_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* EntityTypes::Stub::AsyncDeleteEntityTypeRaw(::grpc::ClientContext* context, const ::google::cloud::dialogflow::v2::DeleteEntityTypeRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::protobuf::Empty>::Create(channel_.get(), cq, rpcmethod_DeleteEntityType_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* EntityTypes::Stub::PrepareAsyncDeleteEntityTypeRaw(::grpc::ClientContext* context, const ::google::cloud::dialogflow::v2::DeleteEntityTypeRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::protobuf::Empty>::Create(channel_.get(), cq, rpcmethod_DeleteEntityType_, context, request, false);
}

::grpc::Status EntityTypes::Stub::BatchUpdateEntityTypes(::grpc::ClientContext* context, const ::google::cloud::dialogflow::v2::BatchUpdateEntityTypesRequest& request, ::google::longrunning::Operation* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_BatchUpdateEntityTypes_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>* EntityTypes::Stub::AsyncBatchUpdateEntityTypesRaw(::grpc::ClientContext* context, const ::google::cloud::dialogflow::v2::BatchUpdateEntityTypesRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::longrunning::Operation>::Create(channel_.get(), cq, rpcmethod_BatchUpdateEntityTypes_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>* EntityTypes::Stub::PrepareAsyncBatchUpdateEntityTypesRaw(::grpc::ClientContext* context, const ::google::cloud::dialogflow::v2::BatchUpdateEntityTypesRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::longrunning::Operation>::Create(channel_.get(), cq, rpcmethod_BatchUpdateEntityTypes_, context, request, false);
}

::grpc::Status EntityTypes::Stub::BatchDeleteEntityTypes(::grpc::ClientContext* context, const ::google::cloud::dialogflow::v2::BatchDeleteEntityTypesRequest& request, ::google::longrunning::Operation* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_BatchDeleteEntityTypes_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>* EntityTypes::Stub::AsyncBatchDeleteEntityTypesRaw(::grpc::ClientContext* context, const ::google::cloud::dialogflow::v2::BatchDeleteEntityTypesRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::longrunning::Operation>::Create(channel_.get(), cq, rpcmethod_BatchDeleteEntityTypes_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>* EntityTypes::Stub::PrepareAsyncBatchDeleteEntityTypesRaw(::grpc::ClientContext* context, const ::google::cloud::dialogflow::v2::BatchDeleteEntityTypesRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::longrunning::Operation>::Create(channel_.get(), cq, rpcmethod_BatchDeleteEntityTypes_, context, request, false);
}

::grpc::Status EntityTypes::Stub::BatchCreateEntities(::grpc::ClientContext* context, const ::google::cloud::dialogflow::v2::BatchCreateEntitiesRequest& request, ::google::longrunning::Operation* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_BatchCreateEntities_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>* EntityTypes::Stub::AsyncBatchCreateEntitiesRaw(::grpc::ClientContext* context, const ::google::cloud::dialogflow::v2::BatchCreateEntitiesRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::longrunning::Operation>::Create(channel_.get(), cq, rpcmethod_BatchCreateEntities_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>* EntityTypes::Stub::PrepareAsyncBatchCreateEntitiesRaw(::grpc::ClientContext* context, const ::google::cloud::dialogflow::v2::BatchCreateEntitiesRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::longrunning::Operation>::Create(channel_.get(), cq, rpcmethod_BatchCreateEntities_, context, request, false);
}

::grpc::Status EntityTypes::Stub::BatchUpdateEntities(::grpc::ClientContext* context, const ::google::cloud::dialogflow::v2::BatchUpdateEntitiesRequest& request, ::google::longrunning::Operation* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_BatchUpdateEntities_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>* EntityTypes::Stub::AsyncBatchUpdateEntitiesRaw(::grpc::ClientContext* context, const ::google::cloud::dialogflow::v2::BatchUpdateEntitiesRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::longrunning::Operation>::Create(channel_.get(), cq, rpcmethod_BatchUpdateEntities_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>* EntityTypes::Stub::PrepareAsyncBatchUpdateEntitiesRaw(::grpc::ClientContext* context, const ::google::cloud::dialogflow::v2::BatchUpdateEntitiesRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::longrunning::Operation>::Create(channel_.get(), cq, rpcmethod_BatchUpdateEntities_, context, request, false);
}

::grpc::Status EntityTypes::Stub::BatchDeleteEntities(::grpc::ClientContext* context, const ::google::cloud::dialogflow::v2::BatchDeleteEntitiesRequest& request, ::google::longrunning::Operation* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_BatchDeleteEntities_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>* EntityTypes::Stub::AsyncBatchDeleteEntitiesRaw(::grpc::ClientContext* context, const ::google::cloud::dialogflow::v2::BatchDeleteEntitiesRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::longrunning::Operation>::Create(channel_.get(), cq, rpcmethod_BatchDeleteEntities_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>* EntityTypes::Stub::PrepareAsyncBatchDeleteEntitiesRaw(::grpc::ClientContext* context, const ::google::cloud::dialogflow::v2::BatchDeleteEntitiesRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::longrunning::Operation>::Create(channel_.get(), cq, rpcmethod_BatchDeleteEntities_, context, request, false);
}

EntityTypes::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      EntityTypes_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< EntityTypes::Service, ::google::cloud::dialogflow::v2::ListEntityTypesRequest, ::google::cloud::dialogflow::v2::ListEntityTypesResponse>(
          std::mem_fn(&EntityTypes::Service::ListEntityTypes), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      EntityTypes_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< EntityTypes::Service, ::google::cloud::dialogflow::v2::GetEntityTypeRequest, ::google::cloud::dialogflow::v2::EntityType>(
          std::mem_fn(&EntityTypes::Service::GetEntityType), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      EntityTypes_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< EntityTypes::Service, ::google::cloud::dialogflow::v2::CreateEntityTypeRequest, ::google::cloud::dialogflow::v2::EntityType>(
          std::mem_fn(&EntityTypes::Service::CreateEntityType), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      EntityTypes_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< EntityTypes::Service, ::google::cloud::dialogflow::v2::UpdateEntityTypeRequest, ::google::cloud::dialogflow::v2::EntityType>(
          std::mem_fn(&EntityTypes::Service::UpdateEntityType), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      EntityTypes_method_names[4],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< EntityTypes::Service, ::google::cloud::dialogflow::v2::DeleteEntityTypeRequest, ::google::protobuf::Empty>(
          std::mem_fn(&EntityTypes::Service::DeleteEntityType), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      EntityTypes_method_names[5],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< EntityTypes::Service, ::google::cloud::dialogflow::v2::BatchUpdateEntityTypesRequest, ::google::longrunning::Operation>(
          std::mem_fn(&EntityTypes::Service::BatchUpdateEntityTypes), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      EntityTypes_method_names[6],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< EntityTypes::Service, ::google::cloud::dialogflow::v2::BatchDeleteEntityTypesRequest, ::google::longrunning::Operation>(
          std::mem_fn(&EntityTypes::Service::BatchDeleteEntityTypes), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      EntityTypes_method_names[7],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< EntityTypes::Service, ::google::cloud::dialogflow::v2::BatchCreateEntitiesRequest, ::google::longrunning::Operation>(
          std::mem_fn(&EntityTypes::Service::BatchCreateEntities), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      EntityTypes_method_names[8],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< EntityTypes::Service, ::google::cloud::dialogflow::v2::BatchUpdateEntitiesRequest, ::google::longrunning::Operation>(
          std::mem_fn(&EntityTypes::Service::BatchUpdateEntities), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      EntityTypes_method_names[9],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< EntityTypes::Service, ::google::cloud::dialogflow::v2::BatchDeleteEntitiesRequest, ::google::longrunning::Operation>(
          std::mem_fn(&EntityTypes::Service::BatchDeleteEntities), this)));
}

EntityTypes::Service::~Service() {
}

::grpc::Status EntityTypes::Service::ListEntityTypes(::grpc::ServerContext* context, const ::google::cloud::dialogflow::v2::ListEntityTypesRequest* request, ::google::cloud::dialogflow::v2::ListEntityTypesResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status EntityTypes::Service::GetEntityType(::grpc::ServerContext* context, const ::google::cloud::dialogflow::v2::GetEntityTypeRequest* request, ::google::cloud::dialogflow::v2::EntityType* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status EntityTypes::Service::CreateEntityType(::grpc::ServerContext* context, const ::google::cloud::dialogflow::v2::CreateEntityTypeRequest* request, ::google::cloud::dialogflow::v2::EntityType* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status EntityTypes::Service::UpdateEntityType(::grpc::ServerContext* context, const ::google::cloud::dialogflow::v2::UpdateEntityTypeRequest* request, ::google::cloud::dialogflow::v2::EntityType* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status EntityTypes::Service::DeleteEntityType(::grpc::ServerContext* context, const ::google::cloud::dialogflow::v2::DeleteEntityTypeRequest* request, ::google::protobuf::Empty* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status EntityTypes::Service::BatchUpdateEntityTypes(::grpc::ServerContext* context, const ::google::cloud::dialogflow::v2::BatchUpdateEntityTypesRequest* request, ::google::longrunning::Operation* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status EntityTypes::Service::BatchDeleteEntityTypes(::grpc::ServerContext* context, const ::google::cloud::dialogflow::v2::BatchDeleteEntityTypesRequest* request, ::google::longrunning::Operation* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status EntityTypes::Service::BatchCreateEntities(::grpc::ServerContext* context, const ::google::cloud::dialogflow::v2::BatchCreateEntitiesRequest* request, ::google::longrunning::Operation* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status EntityTypes::Service::BatchUpdateEntities(::grpc::ServerContext* context, const ::google::cloud::dialogflow::v2::BatchUpdateEntitiesRequest* request, ::google::longrunning::Operation* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status EntityTypes::Service::BatchDeleteEntities(::grpc::ServerContext* context, const ::google::cloud::dialogflow::v2::BatchDeleteEntitiesRequest* request, ::google::longrunning::Operation* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace google
}  // namespace cloud
}  // namespace dialogflow
}  // namespace v2
