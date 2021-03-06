// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: google/monitoring/v3/notification_service.proto

#include "google/monitoring/v3/notification_service.pb.h"
#include "google/monitoring/v3/notification_service.grpc.pb.h"

#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/method_handler_impl.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace google {
namespace monitoring {
namespace v3 {

static const char* NotificationChannelService_method_names[] = {
  "/google.monitoring.v3.NotificationChannelService/ListNotificationChannelDescriptors",
  "/google.monitoring.v3.NotificationChannelService/GetNotificationChannelDescriptor",
  "/google.monitoring.v3.NotificationChannelService/ListNotificationChannels",
  "/google.monitoring.v3.NotificationChannelService/GetNotificationChannel",
  "/google.monitoring.v3.NotificationChannelService/CreateNotificationChannel",
  "/google.monitoring.v3.NotificationChannelService/UpdateNotificationChannel",
  "/google.monitoring.v3.NotificationChannelService/DeleteNotificationChannel",
  "/google.monitoring.v3.NotificationChannelService/SendNotificationChannelVerificationCode",
  "/google.monitoring.v3.NotificationChannelService/GetNotificationChannelVerificationCode",
  "/google.monitoring.v3.NotificationChannelService/VerifyNotificationChannel",
};

std::unique_ptr< NotificationChannelService::Stub> NotificationChannelService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< NotificationChannelService::Stub> stub(new NotificationChannelService::Stub(channel));
  return stub;
}

NotificationChannelService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_ListNotificationChannelDescriptors_(NotificationChannelService_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetNotificationChannelDescriptor_(NotificationChannelService_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_ListNotificationChannels_(NotificationChannelService_method_names[2], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetNotificationChannel_(NotificationChannelService_method_names[3], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_CreateNotificationChannel_(NotificationChannelService_method_names[4], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_UpdateNotificationChannel_(NotificationChannelService_method_names[5], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_DeleteNotificationChannel_(NotificationChannelService_method_names[6], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_SendNotificationChannelVerificationCode_(NotificationChannelService_method_names[7], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetNotificationChannelVerificationCode_(NotificationChannelService_method_names[8], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_VerifyNotificationChannel_(NotificationChannelService_method_names[9], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status NotificationChannelService::Stub::ListNotificationChannelDescriptors(::grpc::ClientContext* context, const ::google::monitoring::v3::ListNotificationChannelDescriptorsRequest& request, ::google::monitoring::v3::ListNotificationChannelDescriptorsResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_ListNotificationChannelDescriptors_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::monitoring::v3::ListNotificationChannelDescriptorsResponse>* NotificationChannelService::Stub::AsyncListNotificationChannelDescriptorsRaw(::grpc::ClientContext* context, const ::google::monitoring::v3::ListNotificationChannelDescriptorsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::monitoring::v3::ListNotificationChannelDescriptorsResponse>::Create(channel_.get(), cq, rpcmethod_ListNotificationChannelDescriptors_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::monitoring::v3::ListNotificationChannelDescriptorsResponse>* NotificationChannelService::Stub::PrepareAsyncListNotificationChannelDescriptorsRaw(::grpc::ClientContext* context, const ::google::monitoring::v3::ListNotificationChannelDescriptorsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::monitoring::v3::ListNotificationChannelDescriptorsResponse>::Create(channel_.get(), cq, rpcmethod_ListNotificationChannelDescriptors_, context, request, false);
}

::grpc::Status NotificationChannelService::Stub::GetNotificationChannelDescriptor(::grpc::ClientContext* context, const ::google::monitoring::v3::GetNotificationChannelDescriptorRequest& request, ::google::monitoring::v3::NotificationChannelDescriptor* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GetNotificationChannelDescriptor_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::monitoring::v3::NotificationChannelDescriptor>* NotificationChannelService::Stub::AsyncGetNotificationChannelDescriptorRaw(::grpc::ClientContext* context, const ::google::monitoring::v3::GetNotificationChannelDescriptorRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::monitoring::v3::NotificationChannelDescriptor>::Create(channel_.get(), cq, rpcmethod_GetNotificationChannelDescriptor_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::monitoring::v3::NotificationChannelDescriptor>* NotificationChannelService::Stub::PrepareAsyncGetNotificationChannelDescriptorRaw(::grpc::ClientContext* context, const ::google::monitoring::v3::GetNotificationChannelDescriptorRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::monitoring::v3::NotificationChannelDescriptor>::Create(channel_.get(), cq, rpcmethod_GetNotificationChannelDescriptor_, context, request, false);
}

::grpc::Status NotificationChannelService::Stub::ListNotificationChannels(::grpc::ClientContext* context, const ::google::monitoring::v3::ListNotificationChannelsRequest& request, ::google::monitoring::v3::ListNotificationChannelsResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_ListNotificationChannels_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::monitoring::v3::ListNotificationChannelsResponse>* NotificationChannelService::Stub::AsyncListNotificationChannelsRaw(::grpc::ClientContext* context, const ::google::monitoring::v3::ListNotificationChannelsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::monitoring::v3::ListNotificationChannelsResponse>::Create(channel_.get(), cq, rpcmethod_ListNotificationChannels_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::monitoring::v3::ListNotificationChannelsResponse>* NotificationChannelService::Stub::PrepareAsyncListNotificationChannelsRaw(::grpc::ClientContext* context, const ::google::monitoring::v3::ListNotificationChannelsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::monitoring::v3::ListNotificationChannelsResponse>::Create(channel_.get(), cq, rpcmethod_ListNotificationChannels_, context, request, false);
}

::grpc::Status NotificationChannelService::Stub::GetNotificationChannel(::grpc::ClientContext* context, const ::google::monitoring::v3::GetNotificationChannelRequest& request, ::google::monitoring::v3::NotificationChannel* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GetNotificationChannel_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::monitoring::v3::NotificationChannel>* NotificationChannelService::Stub::AsyncGetNotificationChannelRaw(::grpc::ClientContext* context, const ::google::monitoring::v3::GetNotificationChannelRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::monitoring::v3::NotificationChannel>::Create(channel_.get(), cq, rpcmethod_GetNotificationChannel_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::monitoring::v3::NotificationChannel>* NotificationChannelService::Stub::PrepareAsyncGetNotificationChannelRaw(::grpc::ClientContext* context, const ::google::monitoring::v3::GetNotificationChannelRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::monitoring::v3::NotificationChannel>::Create(channel_.get(), cq, rpcmethod_GetNotificationChannel_, context, request, false);
}

::grpc::Status NotificationChannelService::Stub::CreateNotificationChannel(::grpc::ClientContext* context, const ::google::monitoring::v3::CreateNotificationChannelRequest& request, ::google::monitoring::v3::NotificationChannel* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_CreateNotificationChannel_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::monitoring::v3::NotificationChannel>* NotificationChannelService::Stub::AsyncCreateNotificationChannelRaw(::grpc::ClientContext* context, const ::google::monitoring::v3::CreateNotificationChannelRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::monitoring::v3::NotificationChannel>::Create(channel_.get(), cq, rpcmethod_CreateNotificationChannel_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::monitoring::v3::NotificationChannel>* NotificationChannelService::Stub::PrepareAsyncCreateNotificationChannelRaw(::grpc::ClientContext* context, const ::google::monitoring::v3::CreateNotificationChannelRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::monitoring::v3::NotificationChannel>::Create(channel_.get(), cq, rpcmethod_CreateNotificationChannel_, context, request, false);
}

::grpc::Status NotificationChannelService::Stub::UpdateNotificationChannel(::grpc::ClientContext* context, const ::google::monitoring::v3::UpdateNotificationChannelRequest& request, ::google::monitoring::v3::NotificationChannel* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_UpdateNotificationChannel_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::monitoring::v3::NotificationChannel>* NotificationChannelService::Stub::AsyncUpdateNotificationChannelRaw(::grpc::ClientContext* context, const ::google::monitoring::v3::UpdateNotificationChannelRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::monitoring::v3::NotificationChannel>::Create(channel_.get(), cq, rpcmethod_UpdateNotificationChannel_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::monitoring::v3::NotificationChannel>* NotificationChannelService::Stub::PrepareAsyncUpdateNotificationChannelRaw(::grpc::ClientContext* context, const ::google::monitoring::v3::UpdateNotificationChannelRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::monitoring::v3::NotificationChannel>::Create(channel_.get(), cq, rpcmethod_UpdateNotificationChannel_, context, request, false);
}

::grpc::Status NotificationChannelService::Stub::DeleteNotificationChannel(::grpc::ClientContext* context, const ::google::monitoring::v3::DeleteNotificationChannelRequest& request, ::google::protobuf::Empty* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_DeleteNotificationChannel_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* NotificationChannelService::Stub::AsyncDeleteNotificationChannelRaw(::grpc::ClientContext* context, const ::google::monitoring::v3::DeleteNotificationChannelRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::protobuf::Empty>::Create(channel_.get(), cq, rpcmethod_DeleteNotificationChannel_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* NotificationChannelService::Stub::PrepareAsyncDeleteNotificationChannelRaw(::grpc::ClientContext* context, const ::google::monitoring::v3::DeleteNotificationChannelRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::protobuf::Empty>::Create(channel_.get(), cq, rpcmethod_DeleteNotificationChannel_, context, request, false);
}

::grpc::Status NotificationChannelService::Stub::SendNotificationChannelVerificationCode(::grpc::ClientContext* context, const ::google::monitoring::v3::SendNotificationChannelVerificationCodeRequest& request, ::google::protobuf::Empty* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_SendNotificationChannelVerificationCode_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* NotificationChannelService::Stub::AsyncSendNotificationChannelVerificationCodeRaw(::grpc::ClientContext* context, const ::google::monitoring::v3::SendNotificationChannelVerificationCodeRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::protobuf::Empty>::Create(channel_.get(), cq, rpcmethod_SendNotificationChannelVerificationCode_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* NotificationChannelService::Stub::PrepareAsyncSendNotificationChannelVerificationCodeRaw(::grpc::ClientContext* context, const ::google::monitoring::v3::SendNotificationChannelVerificationCodeRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::protobuf::Empty>::Create(channel_.get(), cq, rpcmethod_SendNotificationChannelVerificationCode_, context, request, false);
}

::grpc::Status NotificationChannelService::Stub::GetNotificationChannelVerificationCode(::grpc::ClientContext* context, const ::google::monitoring::v3::GetNotificationChannelVerificationCodeRequest& request, ::google::monitoring::v3::GetNotificationChannelVerificationCodeResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GetNotificationChannelVerificationCode_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::monitoring::v3::GetNotificationChannelVerificationCodeResponse>* NotificationChannelService::Stub::AsyncGetNotificationChannelVerificationCodeRaw(::grpc::ClientContext* context, const ::google::monitoring::v3::GetNotificationChannelVerificationCodeRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::monitoring::v3::GetNotificationChannelVerificationCodeResponse>::Create(channel_.get(), cq, rpcmethod_GetNotificationChannelVerificationCode_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::monitoring::v3::GetNotificationChannelVerificationCodeResponse>* NotificationChannelService::Stub::PrepareAsyncGetNotificationChannelVerificationCodeRaw(::grpc::ClientContext* context, const ::google::monitoring::v3::GetNotificationChannelVerificationCodeRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::monitoring::v3::GetNotificationChannelVerificationCodeResponse>::Create(channel_.get(), cq, rpcmethod_GetNotificationChannelVerificationCode_, context, request, false);
}

::grpc::Status NotificationChannelService::Stub::VerifyNotificationChannel(::grpc::ClientContext* context, const ::google::monitoring::v3::VerifyNotificationChannelRequest& request, ::google::monitoring::v3::NotificationChannel* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_VerifyNotificationChannel_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::monitoring::v3::NotificationChannel>* NotificationChannelService::Stub::AsyncVerifyNotificationChannelRaw(::grpc::ClientContext* context, const ::google::monitoring::v3::VerifyNotificationChannelRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::monitoring::v3::NotificationChannel>::Create(channel_.get(), cq, rpcmethod_VerifyNotificationChannel_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::monitoring::v3::NotificationChannel>* NotificationChannelService::Stub::PrepareAsyncVerifyNotificationChannelRaw(::grpc::ClientContext* context, const ::google::monitoring::v3::VerifyNotificationChannelRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::monitoring::v3::NotificationChannel>::Create(channel_.get(), cq, rpcmethod_VerifyNotificationChannel_, context, request, false);
}

NotificationChannelService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      NotificationChannelService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< NotificationChannelService::Service, ::google::monitoring::v3::ListNotificationChannelDescriptorsRequest, ::google::monitoring::v3::ListNotificationChannelDescriptorsResponse>(
          std::mem_fn(&NotificationChannelService::Service::ListNotificationChannelDescriptors), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      NotificationChannelService_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< NotificationChannelService::Service, ::google::monitoring::v3::GetNotificationChannelDescriptorRequest, ::google::monitoring::v3::NotificationChannelDescriptor>(
          std::mem_fn(&NotificationChannelService::Service::GetNotificationChannelDescriptor), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      NotificationChannelService_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< NotificationChannelService::Service, ::google::monitoring::v3::ListNotificationChannelsRequest, ::google::monitoring::v3::ListNotificationChannelsResponse>(
          std::mem_fn(&NotificationChannelService::Service::ListNotificationChannels), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      NotificationChannelService_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< NotificationChannelService::Service, ::google::monitoring::v3::GetNotificationChannelRequest, ::google::monitoring::v3::NotificationChannel>(
          std::mem_fn(&NotificationChannelService::Service::GetNotificationChannel), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      NotificationChannelService_method_names[4],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< NotificationChannelService::Service, ::google::monitoring::v3::CreateNotificationChannelRequest, ::google::monitoring::v3::NotificationChannel>(
          std::mem_fn(&NotificationChannelService::Service::CreateNotificationChannel), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      NotificationChannelService_method_names[5],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< NotificationChannelService::Service, ::google::monitoring::v3::UpdateNotificationChannelRequest, ::google::monitoring::v3::NotificationChannel>(
          std::mem_fn(&NotificationChannelService::Service::UpdateNotificationChannel), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      NotificationChannelService_method_names[6],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< NotificationChannelService::Service, ::google::monitoring::v3::DeleteNotificationChannelRequest, ::google::protobuf::Empty>(
          std::mem_fn(&NotificationChannelService::Service::DeleteNotificationChannel), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      NotificationChannelService_method_names[7],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< NotificationChannelService::Service, ::google::monitoring::v3::SendNotificationChannelVerificationCodeRequest, ::google::protobuf::Empty>(
          std::mem_fn(&NotificationChannelService::Service::SendNotificationChannelVerificationCode), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      NotificationChannelService_method_names[8],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< NotificationChannelService::Service, ::google::monitoring::v3::GetNotificationChannelVerificationCodeRequest, ::google::monitoring::v3::GetNotificationChannelVerificationCodeResponse>(
          std::mem_fn(&NotificationChannelService::Service::GetNotificationChannelVerificationCode), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      NotificationChannelService_method_names[9],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< NotificationChannelService::Service, ::google::monitoring::v3::VerifyNotificationChannelRequest, ::google::monitoring::v3::NotificationChannel>(
          std::mem_fn(&NotificationChannelService::Service::VerifyNotificationChannel), this)));
}

NotificationChannelService::Service::~Service() {
}

::grpc::Status NotificationChannelService::Service::ListNotificationChannelDescriptors(::grpc::ServerContext* context, const ::google::monitoring::v3::ListNotificationChannelDescriptorsRequest* request, ::google::monitoring::v3::ListNotificationChannelDescriptorsResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status NotificationChannelService::Service::GetNotificationChannelDescriptor(::grpc::ServerContext* context, const ::google::monitoring::v3::GetNotificationChannelDescriptorRequest* request, ::google::monitoring::v3::NotificationChannelDescriptor* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status NotificationChannelService::Service::ListNotificationChannels(::grpc::ServerContext* context, const ::google::monitoring::v3::ListNotificationChannelsRequest* request, ::google::monitoring::v3::ListNotificationChannelsResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status NotificationChannelService::Service::GetNotificationChannel(::grpc::ServerContext* context, const ::google::monitoring::v3::GetNotificationChannelRequest* request, ::google::monitoring::v3::NotificationChannel* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status NotificationChannelService::Service::CreateNotificationChannel(::grpc::ServerContext* context, const ::google::monitoring::v3::CreateNotificationChannelRequest* request, ::google::monitoring::v3::NotificationChannel* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status NotificationChannelService::Service::UpdateNotificationChannel(::grpc::ServerContext* context, const ::google::monitoring::v3::UpdateNotificationChannelRequest* request, ::google::monitoring::v3::NotificationChannel* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status NotificationChannelService::Service::DeleteNotificationChannel(::grpc::ServerContext* context, const ::google::monitoring::v3::DeleteNotificationChannelRequest* request, ::google::protobuf::Empty* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status NotificationChannelService::Service::SendNotificationChannelVerificationCode(::grpc::ServerContext* context, const ::google::monitoring::v3::SendNotificationChannelVerificationCodeRequest* request, ::google::protobuf::Empty* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status NotificationChannelService::Service::GetNotificationChannelVerificationCode(::grpc::ServerContext* context, const ::google::monitoring::v3::GetNotificationChannelVerificationCodeRequest* request, ::google::monitoring::v3::GetNotificationChannelVerificationCodeResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status NotificationChannelService::Service::VerifyNotificationChannel(::grpc::ServerContext* context, const ::google::monitoring::v3::VerifyNotificationChannelRequest* request, ::google::monitoring::v3::NotificationChannel* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace google
}  // namespace monitoring
}  // namespace v3

