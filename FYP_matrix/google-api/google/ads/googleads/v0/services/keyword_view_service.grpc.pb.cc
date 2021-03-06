// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: google/ads/googleads/v0/services/keyword_view_service.proto

#include "google/ads/googleads/v0/services/keyword_view_service.pb.h"
#include "google/ads/googleads/v0/services/keyword_view_service.grpc.pb.h"

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

static const char* KeywordViewService_method_names[] = {
  "/google.ads.googleads.v0.services.KeywordViewService/GetKeywordView",
};

std::unique_ptr< KeywordViewService::Stub> KeywordViewService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< KeywordViewService::Stub> stub(new KeywordViewService::Stub(channel));
  return stub;
}

KeywordViewService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_GetKeywordView_(KeywordViewService_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status KeywordViewService::Stub::GetKeywordView(::grpc::ClientContext* context, const ::google::ads::googleads::v0::services::GetKeywordViewRequest& request, ::google::ads::googleads::v0::resources::KeywordView* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GetKeywordView_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::ads::googleads::v0::resources::KeywordView>* KeywordViewService::Stub::AsyncGetKeywordViewRaw(::grpc::ClientContext* context, const ::google::ads::googleads::v0::services::GetKeywordViewRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::ads::googleads::v0::resources::KeywordView>::Create(channel_.get(), cq, rpcmethod_GetKeywordView_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::ads::googleads::v0::resources::KeywordView>* KeywordViewService::Stub::PrepareAsyncGetKeywordViewRaw(::grpc::ClientContext* context, const ::google::ads::googleads::v0::services::GetKeywordViewRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::ads::googleads::v0::resources::KeywordView>::Create(channel_.get(), cq, rpcmethod_GetKeywordView_, context, request, false);
}

KeywordViewService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      KeywordViewService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< KeywordViewService::Service, ::google::ads::googleads::v0::services::GetKeywordViewRequest, ::google::ads::googleads::v0::resources::KeywordView>(
          std::mem_fn(&KeywordViewService::Service::GetKeywordView), this)));
}

KeywordViewService::Service::~Service() {
}

::grpc::Status KeywordViewService::Service::GetKeywordView(::grpc::ServerContext* context, const ::google::ads::googleads::v0::services::GetKeywordViewRequest* request, ::google::ads::googleads::v0::resources::KeywordView* response) {
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

