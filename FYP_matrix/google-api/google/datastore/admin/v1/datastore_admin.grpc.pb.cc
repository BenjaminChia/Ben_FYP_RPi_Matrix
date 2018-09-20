// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: google/datastore/admin/v1/datastore_admin.proto

#include "google/datastore/admin/v1/datastore_admin.pb.h"
#include "google/datastore/admin/v1/datastore_admin.grpc.pb.h"

#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/method_handler_impl.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace google {
namespace datastore {
namespace admin {
namespace v1 {

static const char* DatastoreAdmin_method_names[] = {
  "/google.datastore.admin.v1.DatastoreAdmin/ExportEntities",
  "/google.datastore.admin.v1.DatastoreAdmin/ImportEntities",
  "/google.datastore.admin.v1.DatastoreAdmin/GetIndex",
  "/google.datastore.admin.v1.DatastoreAdmin/ListIndexes",
};

std::unique_ptr< DatastoreAdmin::Stub> DatastoreAdmin::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< DatastoreAdmin::Stub> stub(new DatastoreAdmin::Stub(channel));
  return stub;
}

DatastoreAdmin::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_ExportEntities_(DatastoreAdmin_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_ImportEntities_(DatastoreAdmin_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetIndex_(DatastoreAdmin_method_names[2], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_ListIndexes_(DatastoreAdmin_method_names[3], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status DatastoreAdmin::Stub::ExportEntities(::grpc::ClientContext* context, const ::google::datastore::admin::v1::ExportEntitiesRequest& request, ::google::longrunning::Operation* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_ExportEntities_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>* DatastoreAdmin::Stub::AsyncExportEntitiesRaw(::grpc::ClientContext* context, const ::google::datastore::admin::v1::ExportEntitiesRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::longrunning::Operation>::Create(channel_.get(), cq, rpcmethod_ExportEntities_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>* DatastoreAdmin::Stub::PrepareAsyncExportEntitiesRaw(::grpc::ClientContext* context, const ::google::datastore::admin::v1::ExportEntitiesRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::longrunning::Operation>::Create(channel_.get(), cq, rpcmethod_ExportEntities_, context, request, false);
}

::grpc::Status DatastoreAdmin::Stub::ImportEntities(::grpc::ClientContext* context, const ::google::datastore::admin::v1::ImportEntitiesRequest& request, ::google::longrunning::Operation* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_ImportEntities_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>* DatastoreAdmin::Stub::AsyncImportEntitiesRaw(::grpc::ClientContext* context, const ::google::datastore::admin::v1::ImportEntitiesRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::longrunning::Operation>::Create(channel_.get(), cq, rpcmethod_ImportEntities_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>* DatastoreAdmin::Stub::PrepareAsyncImportEntitiesRaw(::grpc::ClientContext* context, const ::google::datastore::admin::v1::ImportEntitiesRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::longrunning::Operation>::Create(channel_.get(), cq, rpcmethod_ImportEntities_, context, request, false);
}

::grpc::Status DatastoreAdmin::Stub::GetIndex(::grpc::ClientContext* context, const ::google::datastore::admin::v1::GetIndexRequest& request, ::google::datastore::admin::v1::Index* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GetIndex_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::datastore::admin::v1::Index>* DatastoreAdmin::Stub::AsyncGetIndexRaw(::grpc::ClientContext* context, const ::google::datastore::admin::v1::GetIndexRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::datastore::admin::v1::Index>::Create(channel_.get(), cq, rpcmethod_GetIndex_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::datastore::admin::v1::Index>* DatastoreAdmin::Stub::PrepareAsyncGetIndexRaw(::grpc::ClientContext* context, const ::google::datastore::admin::v1::GetIndexRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::datastore::admin::v1::Index>::Create(channel_.get(), cq, rpcmethod_GetIndex_, context, request, false);
}

::grpc::Status DatastoreAdmin::Stub::ListIndexes(::grpc::ClientContext* context, const ::google::datastore::admin::v1::ListIndexesRequest& request, ::google::datastore::admin::v1::ListIndexesResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_ListIndexes_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::datastore::admin::v1::ListIndexesResponse>* DatastoreAdmin::Stub::AsyncListIndexesRaw(::grpc::ClientContext* context, const ::google::datastore::admin::v1::ListIndexesRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::datastore::admin::v1::ListIndexesResponse>::Create(channel_.get(), cq, rpcmethod_ListIndexes_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::datastore::admin::v1::ListIndexesResponse>* DatastoreAdmin::Stub::PrepareAsyncListIndexesRaw(::grpc::ClientContext* context, const ::google::datastore::admin::v1::ListIndexesRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::datastore::admin::v1::ListIndexesResponse>::Create(channel_.get(), cq, rpcmethod_ListIndexes_, context, request, false);
}

DatastoreAdmin::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      DatastoreAdmin_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< DatastoreAdmin::Service, ::google::datastore::admin::v1::ExportEntitiesRequest, ::google::longrunning::Operation>(
          std::mem_fn(&DatastoreAdmin::Service::ExportEntities), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      DatastoreAdmin_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< DatastoreAdmin::Service, ::google::datastore::admin::v1::ImportEntitiesRequest, ::google::longrunning::Operation>(
          std::mem_fn(&DatastoreAdmin::Service::ImportEntities), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      DatastoreAdmin_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< DatastoreAdmin::Service, ::google::datastore::admin::v1::GetIndexRequest, ::google::datastore::admin::v1::Index>(
          std::mem_fn(&DatastoreAdmin::Service::GetIndex), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      DatastoreAdmin_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< DatastoreAdmin::Service, ::google::datastore::admin::v1::ListIndexesRequest, ::google::datastore::admin::v1::ListIndexesResponse>(
          std::mem_fn(&DatastoreAdmin::Service::ListIndexes), this)));
}

DatastoreAdmin::Service::~Service() {
}

::grpc::Status DatastoreAdmin::Service::ExportEntities(::grpc::ServerContext* context, const ::google::datastore::admin::v1::ExportEntitiesRequest* request, ::google::longrunning::Operation* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status DatastoreAdmin::Service::ImportEntities(::grpc::ServerContext* context, const ::google::datastore::admin::v1::ImportEntitiesRequest* request, ::google::longrunning::Operation* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status DatastoreAdmin::Service::GetIndex(::grpc::ServerContext* context, const ::google::datastore::admin::v1::GetIndexRequest* request, ::google::datastore::admin::v1::Index* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status DatastoreAdmin::Service::ListIndexes(::grpc::ServerContext* context, const ::google::datastore::admin::v1::ListIndexesRequest* request, ::google::datastore::admin::v1::ListIndexesResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace google
}  // namespace datastore
}  // namespace admin
}  // namespace v1

