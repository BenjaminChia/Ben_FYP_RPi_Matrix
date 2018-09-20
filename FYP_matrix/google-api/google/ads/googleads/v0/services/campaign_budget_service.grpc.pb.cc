// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: google/ads/googleads/v0/services/campaign_budget_service.proto

#include "google/ads/googleads/v0/services/campaign_budget_service.pb.h"
#include "google/ads/googleads/v0/services/campaign_budget_service.grpc.pb.h"

#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/method_handler_impl.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace google {
namespace ads {
namespace googleads {
namespace v0 {
namespace services {

static const char* CampaignBudgetService_method_names[] = {
  "/google.ads.googleads.v0.services.CampaignBudgetService/GetCampaignBudget",
  "/google.ads.googleads.v0.services.CampaignBudgetService/MutateCampaignBudgets",
};

std::unique_ptr< CampaignBudgetService::Stub> CampaignBudgetService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< CampaignBudgetService::Stub> stub(new CampaignBudgetService::Stub(channel));
  return stub;
}

CampaignBudgetService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_GetCampaignBudget_(CampaignBudgetService_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_MutateCampaignBudgets_(CampaignBudgetService_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status CampaignBudgetService::Stub::GetCampaignBudget(::grpc::ClientContext* context, const ::google::ads::googleads::v0::services::GetCampaignBudgetRequest& request, ::google::ads::googleads::v0::resources::CampaignBudget* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GetCampaignBudget_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::ads::googleads::v0::resources::CampaignBudget>* CampaignBudgetService::Stub::AsyncGetCampaignBudgetRaw(::grpc::ClientContext* context, const ::google::ads::googleads::v0::services::GetCampaignBudgetRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::ads::googleads::v0::resources::CampaignBudget>::Create(channel_.get(), cq, rpcmethod_GetCampaignBudget_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::ads::googleads::v0::resources::CampaignBudget>* CampaignBudgetService::Stub::PrepareAsyncGetCampaignBudgetRaw(::grpc::ClientContext* context, const ::google::ads::googleads::v0::services::GetCampaignBudgetRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::ads::googleads::v0::resources::CampaignBudget>::Create(channel_.get(), cq, rpcmethod_GetCampaignBudget_, context, request, false);
}

::grpc::Status CampaignBudgetService::Stub::MutateCampaignBudgets(::grpc::ClientContext* context, const ::google::ads::googleads::v0::services::MutateCampaignBudgetsRequest& request, ::google::ads::googleads::v0::services::MutateCampaignBudgetsResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_MutateCampaignBudgets_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::ads::googleads::v0::services::MutateCampaignBudgetsResponse>* CampaignBudgetService::Stub::AsyncMutateCampaignBudgetsRaw(::grpc::ClientContext* context, const ::google::ads::googleads::v0::services::MutateCampaignBudgetsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::ads::googleads::v0::services::MutateCampaignBudgetsResponse>::Create(channel_.get(), cq, rpcmethod_MutateCampaignBudgets_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::ads::googleads::v0::services::MutateCampaignBudgetsResponse>* CampaignBudgetService::Stub::PrepareAsyncMutateCampaignBudgetsRaw(::grpc::ClientContext* context, const ::google::ads::googleads::v0::services::MutateCampaignBudgetsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::ads::googleads::v0::services::MutateCampaignBudgetsResponse>::Create(channel_.get(), cq, rpcmethod_MutateCampaignBudgets_, context, request, false);
}

CampaignBudgetService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      CampaignBudgetService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< CampaignBudgetService::Service, ::google::ads::googleads::v0::services::GetCampaignBudgetRequest, ::google::ads::googleads::v0::resources::CampaignBudget>(
          std::mem_fn(&CampaignBudgetService::Service::GetCampaignBudget), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      CampaignBudgetService_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< CampaignBudgetService::Service, ::google::ads::googleads::v0::services::MutateCampaignBudgetsRequest, ::google::ads::googleads::v0::services::MutateCampaignBudgetsResponse>(
          std::mem_fn(&CampaignBudgetService::Service::MutateCampaignBudgets), this)));
}

CampaignBudgetService::Service::~Service() {
}

::grpc::Status CampaignBudgetService::Service::GetCampaignBudget(::grpc::ServerContext* context, const ::google::ads::googleads::v0::services::GetCampaignBudgetRequest* request, ::google::ads::googleads::v0::resources::CampaignBudget* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status CampaignBudgetService::Service::MutateCampaignBudgets(::grpc::ServerContext* context, const ::google::ads::googleads::v0::services::MutateCampaignBudgetsRequest* request, ::google::ads::googleads::v0::services::MutateCampaignBudgetsResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace google
}  // namespace ads
}  // namespace googleads
}  // namespace v0
}  // namespace services

