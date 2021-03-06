// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: google/ads/googleads/v0/services/bidding_strategy_service.proto

#include "google/ads/googleads/v0/services/bidding_strategy_service.pb.h"
#include "google/ads/googleads/v0/services/bidding_strategy_service.grpc.pb.h"

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

static const char* BiddingStrategyService_method_names[] = {
  "/google.ads.googleads.v0.services.BiddingStrategyService/GetBiddingStrategy",
  "/google.ads.googleads.v0.services.BiddingStrategyService/MutateBiddingStrategies",
};

std::unique_ptr< BiddingStrategyService::Stub> BiddingStrategyService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< BiddingStrategyService::Stub> stub(new BiddingStrategyService::Stub(channel));
  return stub;
}

BiddingStrategyService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_GetBiddingStrategy_(BiddingStrategyService_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_MutateBiddingStrategies_(BiddingStrategyService_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status BiddingStrategyService::Stub::GetBiddingStrategy(::grpc::ClientContext* context, const ::google::ads::googleads::v0::services::GetBiddingStrategyRequest& request, ::google::ads::googleads::v0::resources::BiddingStrategy* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GetBiddingStrategy_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::ads::googleads::v0::resources::BiddingStrategy>* BiddingStrategyService::Stub::AsyncGetBiddingStrategyRaw(::grpc::ClientContext* context, const ::google::ads::googleads::v0::services::GetBiddingStrategyRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::ads::googleads::v0::resources::BiddingStrategy>::Create(channel_.get(), cq, rpcmethod_GetBiddingStrategy_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::ads::googleads::v0::resources::BiddingStrategy>* BiddingStrategyService::Stub::PrepareAsyncGetBiddingStrategyRaw(::grpc::ClientContext* context, const ::google::ads::googleads::v0::services::GetBiddingStrategyRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::ads::googleads::v0::resources::BiddingStrategy>::Create(channel_.get(), cq, rpcmethod_GetBiddingStrategy_, context, request, false);
}

::grpc::Status BiddingStrategyService::Stub::MutateBiddingStrategies(::grpc::ClientContext* context, const ::google::ads::googleads::v0::services::MutateBiddingStrategiesRequest& request, ::google::ads::googleads::v0::services::MutateBiddingStrategiesResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_MutateBiddingStrategies_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::ads::googleads::v0::services::MutateBiddingStrategiesResponse>* BiddingStrategyService::Stub::AsyncMutateBiddingStrategiesRaw(::grpc::ClientContext* context, const ::google::ads::googleads::v0::services::MutateBiddingStrategiesRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::ads::googleads::v0::services::MutateBiddingStrategiesResponse>::Create(channel_.get(), cq, rpcmethod_MutateBiddingStrategies_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::ads::googleads::v0::services::MutateBiddingStrategiesResponse>* BiddingStrategyService::Stub::PrepareAsyncMutateBiddingStrategiesRaw(::grpc::ClientContext* context, const ::google::ads::googleads::v0::services::MutateBiddingStrategiesRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::ads::googleads::v0::services::MutateBiddingStrategiesResponse>::Create(channel_.get(), cq, rpcmethod_MutateBiddingStrategies_, context, request, false);
}

BiddingStrategyService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      BiddingStrategyService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< BiddingStrategyService::Service, ::google::ads::googleads::v0::services::GetBiddingStrategyRequest, ::google::ads::googleads::v0::resources::BiddingStrategy>(
          std::mem_fn(&BiddingStrategyService::Service::GetBiddingStrategy), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      BiddingStrategyService_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< BiddingStrategyService::Service, ::google::ads::googleads::v0::services::MutateBiddingStrategiesRequest, ::google::ads::googleads::v0::services::MutateBiddingStrategiesResponse>(
          std::mem_fn(&BiddingStrategyService::Service::MutateBiddingStrategies), this)));
}

BiddingStrategyService::Service::~Service() {
}

::grpc::Status BiddingStrategyService::Service::GetBiddingStrategy(::grpc::ServerContext* context, const ::google::ads::googleads::v0::services::GetBiddingStrategyRequest* request, ::google::ads::googleads::v0::resources::BiddingStrategy* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status BiddingStrategyService::Service::MutateBiddingStrategies(::grpc::ServerContext* context, const ::google::ads::googleads::v0::services::MutateBiddingStrategiesRequest* request, ::google::ads::googleads::v0::services::MutateBiddingStrategiesResponse* response) {
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

