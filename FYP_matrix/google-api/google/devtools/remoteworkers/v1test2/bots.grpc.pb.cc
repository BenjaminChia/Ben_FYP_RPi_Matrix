// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: google/devtools/remoteworkers/v1test2/bots.proto

#include "google/devtools/remoteworkers/v1test2/bots.pb.h"
#include "google/devtools/remoteworkers/v1test2/bots.grpc.pb.h"

#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/method_handler_impl.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace google {
namespace devtools {
namespace remoteworkers {
namespace v1test2 {

static const char* Bots_method_names[] = {
  "/google.devtools.remoteworkers.v1test2.Bots/CreateBotSession",
  "/google.devtools.remoteworkers.v1test2.Bots/UpdateBotSession",
  "/google.devtools.remoteworkers.v1test2.Bots/PostBotEventTemp",
};

std::unique_ptr< Bots::Stub> Bots::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< Bots::Stub> stub(new Bots::Stub(channel));
  return stub;
}

Bots::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_CreateBotSession_(Bots_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_UpdateBotSession_(Bots_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_PostBotEventTemp_(Bots_method_names[2], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status Bots::Stub::CreateBotSession(::grpc::ClientContext* context, const ::google::devtools::remoteworkers::v1test2::CreateBotSessionRequest& request, ::google::devtools::remoteworkers::v1test2::BotSession* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_CreateBotSession_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::devtools::remoteworkers::v1test2::BotSession>* Bots::Stub::AsyncCreateBotSessionRaw(::grpc::ClientContext* context, const ::google::devtools::remoteworkers::v1test2::CreateBotSessionRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::devtools::remoteworkers::v1test2::BotSession>::Create(channel_.get(), cq, rpcmethod_CreateBotSession_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::devtools::remoteworkers::v1test2::BotSession>* Bots::Stub::PrepareAsyncCreateBotSessionRaw(::grpc::ClientContext* context, const ::google::devtools::remoteworkers::v1test2::CreateBotSessionRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::devtools::remoteworkers::v1test2::BotSession>::Create(channel_.get(), cq, rpcmethod_CreateBotSession_, context, request, false);
}

::grpc::Status Bots::Stub::UpdateBotSession(::grpc::ClientContext* context, const ::google::devtools::remoteworkers::v1test2::UpdateBotSessionRequest& request, ::google::devtools::remoteworkers::v1test2::BotSession* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_UpdateBotSession_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::devtools::remoteworkers::v1test2::BotSession>* Bots::Stub::AsyncUpdateBotSessionRaw(::grpc::ClientContext* context, const ::google::devtools::remoteworkers::v1test2::UpdateBotSessionRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::devtools::remoteworkers::v1test2::BotSession>::Create(channel_.get(), cq, rpcmethod_UpdateBotSession_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::devtools::remoteworkers::v1test2::BotSession>* Bots::Stub::PrepareAsyncUpdateBotSessionRaw(::grpc::ClientContext* context, const ::google::devtools::remoteworkers::v1test2::UpdateBotSessionRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::devtools::remoteworkers::v1test2::BotSession>::Create(channel_.get(), cq, rpcmethod_UpdateBotSession_, context, request, false);
}

::grpc::Status Bots::Stub::PostBotEventTemp(::grpc::ClientContext* context, const ::google::devtools::remoteworkers::v1test2::PostBotEventTempRequest& request, ::google::protobuf::Empty* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_PostBotEventTemp_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* Bots::Stub::AsyncPostBotEventTempRaw(::grpc::ClientContext* context, const ::google::devtools::remoteworkers::v1test2::PostBotEventTempRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::protobuf::Empty>::Create(channel_.get(), cq, rpcmethod_PostBotEventTemp_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* Bots::Stub::PrepareAsyncPostBotEventTempRaw(::grpc::ClientContext* context, const ::google::devtools::remoteworkers::v1test2::PostBotEventTempRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::protobuf::Empty>::Create(channel_.get(), cq, rpcmethod_PostBotEventTemp_, context, request, false);
}

Bots::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Bots_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Bots::Service, ::google::devtools::remoteworkers::v1test2::CreateBotSessionRequest, ::google::devtools::remoteworkers::v1test2::BotSession>(
          std::mem_fn(&Bots::Service::CreateBotSession), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Bots_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Bots::Service, ::google::devtools::remoteworkers::v1test2::UpdateBotSessionRequest, ::google::devtools::remoteworkers::v1test2::BotSession>(
          std::mem_fn(&Bots::Service::UpdateBotSession), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Bots_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Bots::Service, ::google::devtools::remoteworkers::v1test2::PostBotEventTempRequest, ::google::protobuf::Empty>(
          std::mem_fn(&Bots::Service::PostBotEventTemp), this)));
}

Bots::Service::~Service() {
}

::grpc::Status Bots::Service::CreateBotSession(::grpc::ServerContext* context, const ::google::devtools::remoteworkers::v1test2::CreateBotSessionRequest* request, ::google::devtools::remoteworkers::v1test2::BotSession* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Bots::Service::UpdateBotSession(::grpc::ServerContext* context, const ::google::devtools::remoteworkers::v1test2::UpdateBotSessionRequest* request, ::google::devtools::remoteworkers::v1test2::BotSession* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Bots::Service::PostBotEventTemp(::grpc::ServerContext* context, const ::google::devtools::remoteworkers::v1test2::PostBotEventTempRequest* request, ::google::protobuf::Empty* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace google
}  // namespace devtools
}  // namespace remoteworkers
}  // namespace v1test2

