// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: google/firestore/admin/v1beta1/firestore_admin.proto

#include "google/firestore/admin/v1beta1/firestore_admin.pb.h"
#include "google/firestore/admin/v1beta1/firestore_admin.grpc.pb.h"

#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/method_handler_impl.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace google {
namespace firestore {
namespace admin {
namespace v1beta1 {

static const char* FirestoreAdmin_method_names[] = {
  "/google.firestore.admin.v1beta1.FirestoreAdmin/CreateIndex",
  "/google.firestore.admin.v1beta1.FirestoreAdmin/ListIndexes",
  "/google.firestore.admin.v1beta1.FirestoreAdmin/GetIndex",
  "/google.firestore.admin.v1beta1.FirestoreAdmin/DeleteIndex",
  "/google.firestore.admin.v1beta1.FirestoreAdmin/ExportDocuments",
  "/google.firestore.admin.v1beta1.FirestoreAdmin/ImportDocuments",
};

std::unique_ptr< FirestoreAdmin::Stub> FirestoreAdmin::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< FirestoreAdmin::Stub> stub(new FirestoreAdmin::Stub(channel));
  return stub;
}

FirestoreAdmin::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_CreateIndex_(FirestoreAdmin_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_ListIndexes_(FirestoreAdmin_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetIndex_(FirestoreAdmin_method_names[2], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_DeleteIndex_(FirestoreAdmin_method_names[3], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_ExportDocuments_(FirestoreAdmin_method_names[4], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_ImportDocuments_(FirestoreAdmin_method_names[5], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status FirestoreAdmin::Stub::CreateIndex(::grpc::ClientContext* context, const ::google::firestore::admin::v1beta1::CreateIndexRequest& request, ::google::longrunning::Operation* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_CreateIndex_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>* FirestoreAdmin::Stub::AsyncCreateIndexRaw(::grpc::ClientContext* context, const ::google::firestore::admin::v1beta1::CreateIndexRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::longrunning::Operation>::Create(channel_.get(), cq, rpcmethod_CreateIndex_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>* FirestoreAdmin::Stub::PrepareAsyncCreateIndexRaw(::grpc::ClientContext* context, const ::google::firestore::admin::v1beta1::CreateIndexRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::longrunning::Operation>::Create(channel_.get(), cq, rpcmethod_CreateIndex_, context, request, false);
}

::grpc::Status FirestoreAdmin::Stub::ListIndexes(::grpc::ClientContext* context, const ::google::firestore::admin::v1beta1::ListIndexesRequest& request, ::google::firestore::admin::v1beta1::ListIndexesResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_ListIndexes_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::firestore::admin::v1beta1::ListIndexesResponse>* FirestoreAdmin::Stub::AsyncListIndexesRaw(::grpc::ClientContext* context, const ::google::firestore::admin::v1beta1::ListIndexesRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::firestore::admin::v1beta1::ListIndexesResponse>::Create(channel_.get(), cq, rpcmethod_ListIndexes_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::firestore::admin::v1beta1::ListIndexesResponse>* FirestoreAdmin::Stub::PrepareAsyncListIndexesRaw(::grpc::ClientContext* context, const ::google::firestore::admin::v1beta1::ListIndexesRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::firestore::admin::v1beta1::ListIndexesResponse>::Create(channel_.get(), cq, rpcmethod_ListIndexes_, context, request, false);
}

::grpc::Status FirestoreAdmin::Stub::GetIndex(::grpc::ClientContext* context, const ::google::firestore::admin::v1beta1::GetIndexRequest& request, ::google::firestore::admin::v1beta1::Index* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GetIndex_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::firestore::admin::v1beta1::Index>* FirestoreAdmin::Stub::AsyncGetIndexRaw(::grpc::ClientContext* context, const ::google::firestore::admin::v1beta1::GetIndexRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::firestore::admin::v1beta1::Index>::Create(channel_.get(), cq, rpcmethod_GetIndex_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::firestore::admin::v1beta1::Index>* FirestoreAdmin::Stub::PrepareAsyncGetIndexRaw(::grpc::ClientContext* context, const ::google::firestore::admin::v1beta1::GetIndexRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::firestore::admin::v1beta1::Index>::Create(channel_.get(), cq, rpcmethod_GetIndex_, context, request, false);
}

::grpc::Status FirestoreAdmin::Stub::DeleteIndex(::grpc::ClientContext* context, const ::google::firestore::admin::v1beta1::DeleteIndexRequest& request, ::google::protobuf::Empty* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_DeleteIndex_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* FirestoreAdmin::Stub::AsyncDeleteIndexRaw(::grpc::ClientContext* context, const ::google::firestore::admin::v1beta1::DeleteIndexRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::protobuf::Empty>::Create(channel_.get(), cq, rpcmethod_DeleteIndex_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* FirestoreAdmin::Stub::PrepareAsyncDeleteIndexRaw(::grpc::ClientContext* context, const ::google::firestore::admin::v1beta1::DeleteIndexRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::protobuf::Empty>::Create(channel_.get(), cq, rpcmethod_DeleteIndex_, context, request, false);
}

::grpc::Status FirestoreAdmin::Stub::ExportDocuments(::grpc::ClientContext* context, const ::google::firestore::admin::v1beta1::ExportDocumentsRequest& request, ::google::longrunning::Operation* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_ExportDocuments_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>* FirestoreAdmin::Stub::AsyncExportDocumentsRaw(::grpc::ClientContext* context, const ::google::firestore::admin::v1beta1::ExportDocumentsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::longrunning::Operation>::Create(channel_.get(), cq, rpcmethod_ExportDocuments_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>* FirestoreAdmin::Stub::PrepareAsyncExportDocumentsRaw(::grpc::ClientContext* context, const ::google::firestore::admin::v1beta1::ExportDocumentsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::longrunning::Operation>::Create(channel_.get(), cq, rpcmethod_ExportDocuments_, context, request, false);
}

::grpc::Status FirestoreAdmin::Stub::ImportDocuments(::grpc::ClientContext* context, const ::google::firestore::admin::v1beta1::ImportDocumentsRequest& request, ::google::longrunning::Operation* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_ImportDocuments_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>* FirestoreAdmin::Stub::AsyncImportDocumentsRaw(::grpc::ClientContext* context, const ::google::firestore::admin::v1beta1::ImportDocumentsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::longrunning::Operation>::Create(channel_.get(), cq, rpcmethod_ImportDocuments_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>* FirestoreAdmin::Stub::PrepareAsyncImportDocumentsRaw(::grpc::ClientContext* context, const ::google::firestore::admin::v1beta1::ImportDocumentsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::longrunning::Operation>::Create(channel_.get(), cq, rpcmethod_ImportDocuments_, context, request, false);
}

FirestoreAdmin::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      FirestoreAdmin_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< FirestoreAdmin::Service, ::google::firestore::admin::v1beta1::CreateIndexRequest, ::google::longrunning::Operation>(
          std::mem_fn(&FirestoreAdmin::Service::CreateIndex), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      FirestoreAdmin_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< FirestoreAdmin::Service, ::google::firestore::admin::v1beta1::ListIndexesRequest, ::google::firestore::admin::v1beta1::ListIndexesResponse>(
          std::mem_fn(&FirestoreAdmin::Service::ListIndexes), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      FirestoreAdmin_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< FirestoreAdmin::Service, ::google::firestore::admin::v1beta1::GetIndexRequest, ::google::firestore::admin::v1beta1::Index>(
          std::mem_fn(&FirestoreAdmin::Service::GetIndex), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      FirestoreAdmin_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< FirestoreAdmin::Service, ::google::firestore::admin::v1beta1::DeleteIndexRequest, ::google::protobuf::Empty>(
          std::mem_fn(&FirestoreAdmin::Service::DeleteIndex), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      FirestoreAdmin_method_names[4],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< FirestoreAdmin::Service, ::google::firestore::admin::v1beta1::ExportDocumentsRequest, ::google::longrunning::Operation>(
          std::mem_fn(&FirestoreAdmin::Service::ExportDocuments), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      FirestoreAdmin_method_names[5],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< FirestoreAdmin::Service, ::google::firestore::admin::v1beta1::ImportDocumentsRequest, ::google::longrunning::Operation>(
          std::mem_fn(&FirestoreAdmin::Service::ImportDocuments), this)));
}

FirestoreAdmin::Service::~Service() {
}

::grpc::Status FirestoreAdmin::Service::CreateIndex(::grpc::ServerContext* context, const ::google::firestore::admin::v1beta1::CreateIndexRequest* request, ::google::longrunning::Operation* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status FirestoreAdmin::Service::ListIndexes(::grpc::ServerContext* context, const ::google::firestore::admin::v1beta1::ListIndexesRequest* request, ::google::firestore::admin::v1beta1::ListIndexesResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status FirestoreAdmin::Service::GetIndex(::grpc::ServerContext* context, const ::google::firestore::admin::v1beta1::GetIndexRequest* request, ::google::firestore::admin::v1beta1::Index* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status FirestoreAdmin::Service::DeleteIndex(::grpc::ServerContext* context, const ::google::firestore::admin::v1beta1::DeleteIndexRequest* request, ::google::protobuf::Empty* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status FirestoreAdmin::Service::ExportDocuments(::grpc::ServerContext* context, const ::google::firestore::admin::v1beta1::ExportDocumentsRequest* request, ::google::longrunning::Operation* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status FirestoreAdmin::Service::ImportDocuments(::grpc::ServerContext* context, const ::google::firestore::admin::v1beta1::ImportDocumentsRequest* request, ::google::longrunning::Operation* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace google
}  // namespace firestore
}  // namespace admin
}  // namespace v1beta1

