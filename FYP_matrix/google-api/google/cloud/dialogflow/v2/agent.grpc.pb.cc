// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: google/cloud/dialogflow/v2/agent.proto

#include "google/cloud/dialogflow/v2/agent.pb.h"
#include "google/cloud/dialogflow/v2/agent.grpc.pb.h"

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

static const char* Agents_method_names[] = {
  "/google.cloud.dialogflow.v2.Agents/GetAgent",
  "/google.cloud.dialogflow.v2.Agents/SearchAgents",
  "/google.cloud.dialogflow.v2.Agents/TrainAgent",
  "/google.cloud.dialogflow.v2.Agents/ExportAgent",
  "/google.cloud.dialogflow.v2.Agents/ImportAgent",
  "/google.cloud.dialogflow.v2.Agents/RestoreAgent",
};

std::unique_ptr< Agents::Stub> Agents::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< Agents::Stub> stub(new Agents::Stub(channel));
  return stub;
}

Agents::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_GetAgent_(Agents_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_SearchAgents_(Agents_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_TrainAgent_(Agents_method_names[2], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_ExportAgent_(Agents_method_names[3], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_ImportAgent_(Agents_method_names[4], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_RestoreAgent_(Agents_method_names[5], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status Agents::Stub::GetAgent(::grpc::ClientContext* context, const ::google::cloud::dialogflow::v2::GetAgentRequest& request, ::google::cloud::dialogflow::v2::Agent* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GetAgent_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::cloud::dialogflow::v2::Agent>* Agents::Stub::AsyncGetAgentRaw(::grpc::ClientContext* context, const ::google::cloud::dialogflow::v2::GetAgentRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::cloud::dialogflow::v2::Agent>::Create(channel_.get(), cq, rpcmethod_GetAgent_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::cloud::dialogflow::v2::Agent>* Agents::Stub::PrepareAsyncGetAgentRaw(::grpc::ClientContext* context, const ::google::cloud::dialogflow::v2::GetAgentRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::cloud::dialogflow::v2::Agent>::Create(channel_.get(), cq, rpcmethod_GetAgent_, context, request, false);
}

::grpc::Status Agents::Stub::SearchAgents(::grpc::ClientContext* context, const ::google::cloud::dialogflow::v2::SearchAgentsRequest& request, ::google::cloud::dialogflow::v2::SearchAgentsResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_SearchAgents_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::cloud::dialogflow::v2::SearchAgentsResponse>* Agents::Stub::AsyncSearchAgentsRaw(::grpc::ClientContext* context, const ::google::cloud::dialogflow::v2::SearchAgentsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::cloud::dialogflow::v2::SearchAgentsResponse>::Create(channel_.get(), cq, rpcmethod_SearchAgents_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::cloud::dialogflow::v2::SearchAgentsResponse>* Agents::Stub::PrepareAsyncSearchAgentsRaw(::grpc::ClientContext* context, const ::google::cloud::dialogflow::v2::SearchAgentsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::cloud::dialogflow::v2::SearchAgentsResponse>::Create(channel_.get(), cq, rpcmethod_SearchAgents_, context, request, false);
}

::grpc::Status Agents::Stub::TrainAgent(::grpc::ClientContext* context, const ::google::cloud::dialogflow::v2::TrainAgentRequest& request, ::google::longrunning::Operation* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_TrainAgent_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>* Agents::Stub::AsyncTrainAgentRaw(::grpc::ClientContext* context, const ::google::cloud::dialogflow::v2::TrainAgentRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::longrunning::Operation>::Create(channel_.get(), cq, rpcmethod_TrainAgent_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>* Agents::Stub::PrepareAsyncTrainAgentRaw(::grpc::ClientContext* context, const ::google::cloud::dialogflow::v2::TrainAgentRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::longrunning::Operation>::Create(channel_.get(), cq, rpcmethod_TrainAgent_, context, request, false);
}

::grpc::Status Agents::Stub::ExportAgent(::grpc::ClientContext* context, const ::google::cloud::dialogflow::v2::ExportAgentRequest& request, ::google::longrunning::Operation* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_ExportAgent_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>* Agents::Stub::AsyncExportAgentRaw(::grpc::ClientContext* context, const ::google::cloud::dialogflow::v2::ExportAgentRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::longrunning::Operation>::Create(channel_.get(), cq, rpcmethod_ExportAgent_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>* Agents::Stub::PrepareAsyncExportAgentRaw(::grpc::ClientContext* context, const ::google::cloud::dialogflow::v2::ExportAgentRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::longrunning::Operation>::Create(channel_.get(), cq, rpcmethod_ExportAgent_, context, request, false);
}

::grpc::Status Agents::Stub::ImportAgent(::grpc::ClientContext* context, const ::google::cloud::dialogflow::v2::ImportAgentRequest& request, ::google::longrunning::Operation* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_ImportAgent_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>* Agents::Stub::AsyncImportAgentRaw(::grpc::ClientContext* context, const ::google::cloud::dialogflow::v2::ImportAgentRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::longrunning::Operation>::Create(channel_.get(), cq, rpcmethod_ImportAgent_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>* Agents::Stub::PrepareAsyncImportAgentRaw(::grpc::ClientContext* context, const ::google::cloud::dialogflow::v2::ImportAgentRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::longrunning::Operation>::Create(channel_.get(), cq, rpcmethod_ImportAgent_, context, request, false);
}

::grpc::Status Agents::Stub::RestoreAgent(::grpc::ClientContext* context, const ::google::cloud::dialogflow::v2::RestoreAgentRequest& request, ::google::longrunning::Operation* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_RestoreAgent_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>* Agents::Stub::AsyncRestoreAgentRaw(::grpc::ClientContext* context, const ::google::cloud::dialogflow::v2::RestoreAgentRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::longrunning::Operation>::Create(channel_.get(), cq, rpcmethod_RestoreAgent_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>* Agents::Stub::PrepareAsyncRestoreAgentRaw(::grpc::ClientContext* context, const ::google::cloud::dialogflow::v2::RestoreAgentRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::longrunning::Operation>::Create(channel_.get(), cq, rpcmethod_RestoreAgent_, context, request, false);
}

Agents::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Agents_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Agents::Service, ::google::cloud::dialogflow::v2::GetAgentRequest, ::google::cloud::dialogflow::v2::Agent>(
          std::mem_fn(&Agents::Service::GetAgent), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Agents_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Agents::Service, ::google::cloud::dialogflow::v2::SearchAgentsRequest, ::google::cloud::dialogflow::v2::SearchAgentsResponse>(
          std::mem_fn(&Agents::Service::SearchAgents), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Agents_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Agents::Service, ::google::cloud::dialogflow::v2::TrainAgentRequest, ::google::longrunning::Operation>(
          std::mem_fn(&Agents::Service::TrainAgent), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Agents_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Agents::Service, ::google::cloud::dialogflow::v2::ExportAgentRequest, ::google::longrunning::Operation>(
          std::mem_fn(&Agents::Service::ExportAgent), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Agents_method_names[4],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Agents::Service, ::google::cloud::dialogflow::v2::ImportAgentRequest, ::google::longrunning::Operation>(
          std::mem_fn(&Agents::Service::ImportAgent), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Agents_method_names[5],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Agents::Service, ::google::cloud::dialogflow::v2::RestoreAgentRequest, ::google::longrunning::Operation>(
          std::mem_fn(&Agents::Service::RestoreAgent), this)));
}

Agents::Service::~Service() {
}

::grpc::Status Agents::Service::GetAgent(::grpc::ServerContext* context, const ::google::cloud::dialogflow::v2::GetAgentRequest* request, ::google::cloud::dialogflow::v2::Agent* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Agents::Service::SearchAgents(::grpc::ServerContext* context, const ::google::cloud::dialogflow::v2::SearchAgentsRequest* request, ::google::cloud::dialogflow::v2::SearchAgentsResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Agents::Service::TrainAgent(::grpc::ServerContext* context, const ::google::cloud::dialogflow::v2::TrainAgentRequest* request, ::google::longrunning::Operation* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Agents::Service::ExportAgent(::grpc::ServerContext* context, const ::google::cloud::dialogflow::v2::ExportAgentRequest* request, ::google::longrunning::Operation* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Agents::Service::ImportAgent(::grpc::ServerContext* context, const ::google::cloud::dialogflow::v2::ImportAgentRequest* request, ::google::longrunning::Operation* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Agents::Service::RestoreAgent(::grpc::ServerContext* context, const ::google::cloud::dialogflow::v2::RestoreAgentRequest* request, ::google::longrunning::Operation* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace google
}  // namespace cloud
}  // namespace dialogflow
}  // namespace v2
