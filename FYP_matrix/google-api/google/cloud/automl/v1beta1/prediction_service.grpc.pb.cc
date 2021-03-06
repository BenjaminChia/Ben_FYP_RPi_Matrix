// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: google/cloud/automl/v1beta1/prediction_service.proto

#include "google/cloud/automl/v1beta1/prediction_service.pb.h"
#include "google/cloud/automl/v1beta1/prediction_service.grpc.pb.h"

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
namespace automl {
namespace v1beta1 {

static const char* PredictionService_method_names[] = {
  "/google.cloud.automl.v1beta1.PredictionService/Predict",
};

std::unique_ptr< PredictionService::Stub> PredictionService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< PredictionService::Stub> stub(new PredictionService::Stub(channel));
  return stub;
}

PredictionService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_Predict_(PredictionService_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status PredictionService::Stub::Predict(::grpc::ClientContext* context, const ::google::cloud::automl::v1beta1::PredictRequest& request, ::google::cloud::automl::v1beta1::PredictResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Predict_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::cloud::automl::v1beta1::PredictResponse>* PredictionService::Stub::AsyncPredictRaw(::grpc::ClientContext* context, const ::google::cloud::automl::v1beta1::PredictRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::cloud::automl::v1beta1::PredictResponse>::Create(channel_.get(), cq, rpcmethod_Predict_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::cloud::automl::v1beta1::PredictResponse>* PredictionService::Stub::PrepareAsyncPredictRaw(::grpc::ClientContext* context, const ::google::cloud::automl::v1beta1::PredictRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::cloud::automl::v1beta1::PredictResponse>::Create(channel_.get(), cq, rpcmethod_Predict_, context, request, false);
}

PredictionService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      PredictionService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< PredictionService::Service, ::google::cloud::automl::v1beta1::PredictRequest, ::google::cloud::automl::v1beta1::PredictResponse>(
          std::mem_fn(&PredictionService::Service::Predict), this)));
}

PredictionService::Service::~Service() {
}

::grpc::Status PredictionService::Service::Predict(::grpc::ServerContext* context, const ::google::cloud::automl::v1beta1::PredictRequest* request, ::google::cloud::automl::v1beta1::PredictResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace google
}  // namespace cloud
}  // namespace automl
}  // namespace v1beta1

