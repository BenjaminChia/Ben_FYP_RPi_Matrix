// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: google/cloud/oslogin/v1/oslogin.proto

#include "google/cloud/oslogin/v1/oslogin.pb.h"
#include "google/cloud/oslogin/v1/oslogin.grpc.pb.h"

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
namespace oslogin {
namespace v1 {

static const char* OsLoginService_method_names[] = {
  "/google.cloud.oslogin.v1.OsLoginService/DeletePosixAccount",
  "/google.cloud.oslogin.v1.OsLoginService/DeleteSshPublicKey",
  "/google.cloud.oslogin.v1.OsLoginService/GetLoginProfile",
  "/google.cloud.oslogin.v1.OsLoginService/GetSshPublicKey",
  "/google.cloud.oslogin.v1.OsLoginService/ImportSshPublicKey",
  "/google.cloud.oslogin.v1.OsLoginService/UpdateSshPublicKey",
};

std::unique_ptr< OsLoginService::Stub> OsLoginService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< OsLoginService::Stub> stub(new OsLoginService::Stub(channel));
  return stub;
}

OsLoginService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_DeletePosixAccount_(OsLoginService_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_DeleteSshPublicKey_(OsLoginService_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetLoginProfile_(OsLoginService_method_names[2], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetSshPublicKey_(OsLoginService_method_names[3], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_ImportSshPublicKey_(OsLoginService_method_names[4], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_UpdateSshPublicKey_(OsLoginService_method_names[5], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status OsLoginService::Stub::DeletePosixAccount(::grpc::ClientContext* context, const ::google::cloud::oslogin::v1::DeletePosixAccountRequest& request, ::google::protobuf::Empty* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_DeletePosixAccount_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* OsLoginService::Stub::AsyncDeletePosixAccountRaw(::grpc::ClientContext* context, const ::google::cloud::oslogin::v1::DeletePosixAccountRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::protobuf::Empty>::Create(channel_.get(), cq, rpcmethod_DeletePosixAccount_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* OsLoginService::Stub::PrepareAsyncDeletePosixAccountRaw(::grpc::ClientContext* context, const ::google::cloud::oslogin::v1::DeletePosixAccountRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::protobuf::Empty>::Create(channel_.get(), cq, rpcmethod_DeletePosixAccount_, context, request, false);
}

::grpc::Status OsLoginService::Stub::DeleteSshPublicKey(::grpc::ClientContext* context, const ::google::cloud::oslogin::v1::DeleteSshPublicKeyRequest& request, ::google::protobuf::Empty* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_DeleteSshPublicKey_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* OsLoginService::Stub::AsyncDeleteSshPublicKeyRaw(::grpc::ClientContext* context, const ::google::cloud::oslogin::v1::DeleteSshPublicKeyRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::protobuf::Empty>::Create(channel_.get(), cq, rpcmethod_DeleteSshPublicKey_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* OsLoginService::Stub::PrepareAsyncDeleteSshPublicKeyRaw(::grpc::ClientContext* context, const ::google::cloud::oslogin::v1::DeleteSshPublicKeyRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::protobuf::Empty>::Create(channel_.get(), cq, rpcmethod_DeleteSshPublicKey_, context, request, false);
}

::grpc::Status OsLoginService::Stub::GetLoginProfile(::grpc::ClientContext* context, const ::google::cloud::oslogin::v1::GetLoginProfileRequest& request, ::google::cloud::oslogin::v1::LoginProfile* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GetLoginProfile_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::cloud::oslogin::v1::LoginProfile>* OsLoginService::Stub::AsyncGetLoginProfileRaw(::grpc::ClientContext* context, const ::google::cloud::oslogin::v1::GetLoginProfileRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::cloud::oslogin::v1::LoginProfile>::Create(channel_.get(), cq, rpcmethod_GetLoginProfile_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::cloud::oslogin::v1::LoginProfile>* OsLoginService::Stub::PrepareAsyncGetLoginProfileRaw(::grpc::ClientContext* context, const ::google::cloud::oslogin::v1::GetLoginProfileRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::cloud::oslogin::v1::LoginProfile>::Create(channel_.get(), cq, rpcmethod_GetLoginProfile_, context, request, false);
}

::grpc::Status OsLoginService::Stub::GetSshPublicKey(::grpc::ClientContext* context, const ::google::cloud::oslogin::v1::GetSshPublicKeyRequest& request, ::google::cloud::oslogin::common::SshPublicKey* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GetSshPublicKey_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::cloud::oslogin::common::SshPublicKey>* OsLoginService::Stub::AsyncGetSshPublicKeyRaw(::grpc::ClientContext* context, const ::google::cloud::oslogin::v1::GetSshPublicKeyRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::cloud::oslogin::common::SshPublicKey>::Create(channel_.get(), cq, rpcmethod_GetSshPublicKey_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::cloud::oslogin::common::SshPublicKey>* OsLoginService::Stub::PrepareAsyncGetSshPublicKeyRaw(::grpc::ClientContext* context, const ::google::cloud::oslogin::v1::GetSshPublicKeyRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::cloud::oslogin::common::SshPublicKey>::Create(channel_.get(), cq, rpcmethod_GetSshPublicKey_, context, request, false);
}

::grpc::Status OsLoginService::Stub::ImportSshPublicKey(::grpc::ClientContext* context, const ::google::cloud::oslogin::v1::ImportSshPublicKeyRequest& request, ::google::cloud::oslogin::v1::ImportSshPublicKeyResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_ImportSshPublicKey_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::cloud::oslogin::v1::ImportSshPublicKeyResponse>* OsLoginService::Stub::AsyncImportSshPublicKeyRaw(::grpc::ClientContext* context, const ::google::cloud::oslogin::v1::ImportSshPublicKeyRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::cloud::oslogin::v1::ImportSshPublicKeyResponse>::Create(channel_.get(), cq, rpcmethod_ImportSshPublicKey_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::cloud::oslogin::v1::ImportSshPublicKeyResponse>* OsLoginService::Stub::PrepareAsyncImportSshPublicKeyRaw(::grpc::ClientContext* context, const ::google::cloud::oslogin::v1::ImportSshPublicKeyRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::cloud::oslogin::v1::ImportSshPublicKeyResponse>::Create(channel_.get(), cq, rpcmethod_ImportSshPublicKey_, context, request, false);
}

::grpc::Status OsLoginService::Stub::UpdateSshPublicKey(::grpc::ClientContext* context, const ::google::cloud::oslogin::v1::UpdateSshPublicKeyRequest& request, ::google::cloud::oslogin::common::SshPublicKey* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_UpdateSshPublicKey_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::cloud::oslogin::common::SshPublicKey>* OsLoginService::Stub::AsyncUpdateSshPublicKeyRaw(::grpc::ClientContext* context, const ::google::cloud::oslogin::v1::UpdateSshPublicKeyRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::cloud::oslogin::common::SshPublicKey>::Create(channel_.get(), cq, rpcmethod_UpdateSshPublicKey_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::cloud::oslogin::common::SshPublicKey>* OsLoginService::Stub::PrepareAsyncUpdateSshPublicKeyRaw(::grpc::ClientContext* context, const ::google::cloud::oslogin::v1::UpdateSshPublicKeyRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::cloud::oslogin::common::SshPublicKey>::Create(channel_.get(), cq, rpcmethod_UpdateSshPublicKey_, context, request, false);
}

OsLoginService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      OsLoginService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< OsLoginService::Service, ::google::cloud::oslogin::v1::DeletePosixAccountRequest, ::google::protobuf::Empty>(
          std::mem_fn(&OsLoginService::Service::DeletePosixAccount), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      OsLoginService_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< OsLoginService::Service, ::google::cloud::oslogin::v1::DeleteSshPublicKeyRequest, ::google::protobuf::Empty>(
          std::mem_fn(&OsLoginService::Service::DeleteSshPublicKey), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      OsLoginService_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< OsLoginService::Service, ::google::cloud::oslogin::v1::GetLoginProfileRequest, ::google::cloud::oslogin::v1::LoginProfile>(
          std::mem_fn(&OsLoginService::Service::GetLoginProfile), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      OsLoginService_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< OsLoginService::Service, ::google::cloud::oslogin::v1::GetSshPublicKeyRequest, ::google::cloud::oslogin::common::SshPublicKey>(
          std::mem_fn(&OsLoginService::Service::GetSshPublicKey), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      OsLoginService_method_names[4],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< OsLoginService::Service, ::google::cloud::oslogin::v1::ImportSshPublicKeyRequest, ::google::cloud::oslogin::v1::ImportSshPublicKeyResponse>(
          std::mem_fn(&OsLoginService::Service::ImportSshPublicKey), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      OsLoginService_method_names[5],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< OsLoginService::Service, ::google::cloud::oslogin::v1::UpdateSshPublicKeyRequest, ::google::cloud::oslogin::common::SshPublicKey>(
          std::mem_fn(&OsLoginService::Service::UpdateSshPublicKey), this)));
}

OsLoginService::Service::~Service() {
}

::grpc::Status OsLoginService::Service::DeletePosixAccount(::grpc::ServerContext* context, const ::google::cloud::oslogin::v1::DeletePosixAccountRequest* request, ::google::protobuf::Empty* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status OsLoginService::Service::DeleteSshPublicKey(::grpc::ServerContext* context, const ::google::cloud::oslogin::v1::DeleteSshPublicKeyRequest* request, ::google::protobuf::Empty* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status OsLoginService::Service::GetLoginProfile(::grpc::ServerContext* context, const ::google::cloud::oslogin::v1::GetLoginProfileRequest* request, ::google::cloud::oslogin::v1::LoginProfile* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status OsLoginService::Service::GetSshPublicKey(::grpc::ServerContext* context, const ::google::cloud::oslogin::v1::GetSshPublicKeyRequest* request, ::google::cloud::oslogin::common::SshPublicKey* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status OsLoginService::Service::ImportSshPublicKey(::grpc::ServerContext* context, const ::google::cloud::oslogin::v1::ImportSshPublicKeyRequest* request, ::google::cloud::oslogin::v1::ImportSshPublicKeyResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status OsLoginService::Service::UpdateSshPublicKey(::grpc::ServerContext* context, const ::google::cloud::oslogin::v1::UpdateSshPublicKeyRequest* request, ::google::cloud::oslogin::common::SshPublicKey* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace google
}  // namespace cloud
}  // namespace oslogin
}  // namespace v1

