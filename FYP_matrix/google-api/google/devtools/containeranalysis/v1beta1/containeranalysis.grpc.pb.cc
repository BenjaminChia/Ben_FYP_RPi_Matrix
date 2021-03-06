// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: google/devtools/containeranalysis/v1beta1/containeranalysis.proto

#include "google/devtools/containeranalysis/v1beta1/containeranalysis.pb.h"
#include "google/devtools/containeranalysis/v1beta1/containeranalysis.grpc.pb.h"

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
namespace containeranalysis {
namespace v1beta1 {

static const char* ContainerAnalysisV1Beta1_method_names[] = {
  "/google.devtools.containeranalysis.v1beta1.ContainerAnalysisV1Beta1/SetIamPolicy",
  "/google.devtools.containeranalysis.v1beta1.ContainerAnalysisV1Beta1/GetIamPolicy",
  "/google.devtools.containeranalysis.v1beta1.ContainerAnalysisV1Beta1/TestIamPermissions",
  "/google.devtools.containeranalysis.v1beta1.ContainerAnalysisV1Beta1/GetScanConfig",
  "/google.devtools.containeranalysis.v1beta1.ContainerAnalysisV1Beta1/ListScanConfigs",
  "/google.devtools.containeranalysis.v1beta1.ContainerAnalysisV1Beta1/UpdateScanConfig",
};

std::unique_ptr< ContainerAnalysisV1Beta1::Stub> ContainerAnalysisV1Beta1::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< ContainerAnalysisV1Beta1::Stub> stub(new ContainerAnalysisV1Beta1::Stub(channel));
  return stub;
}

ContainerAnalysisV1Beta1::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_SetIamPolicy_(ContainerAnalysisV1Beta1_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetIamPolicy_(ContainerAnalysisV1Beta1_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_TestIamPermissions_(ContainerAnalysisV1Beta1_method_names[2], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetScanConfig_(ContainerAnalysisV1Beta1_method_names[3], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_ListScanConfigs_(ContainerAnalysisV1Beta1_method_names[4], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_UpdateScanConfig_(ContainerAnalysisV1Beta1_method_names[5], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status ContainerAnalysisV1Beta1::Stub::SetIamPolicy(::grpc::ClientContext* context, const ::google::iam::v1::SetIamPolicyRequest& request, ::google::iam::v1::Policy* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_SetIamPolicy_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::iam::v1::Policy>* ContainerAnalysisV1Beta1::Stub::AsyncSetIamPolicyRaw(::grpc::ClientContext* context, const ::google::iam::v1::SetIamPolicyRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::iam::v1::Policy>::Create(channel_.get(), cq, rpcmethod_SetIamPolicy_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::iam::v1::Policy>* ContainerAnalysisV1Beta1::Stub::PrepareAsyncSetIamPolicyRaw(::grpc::ClientContext* context, const ::google::iam::v1::SetIamPolicyRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::iam::v1::Policy>::Create(channel_.get(), cq, rpcmethod_SetIamPolicy_, context, request, false);
}

::grpc::Status ContainerAnalysisV1Beta1::Stub::GetIamPolicy(::grpc::ClientContext* context, const ::google::iam::v1::GetIamPolicyRequest& request, ::google::iam::v1::Policy* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GetIamPolicy_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::iam::v1::Policy>* ContainerAnalysisV1Beta1::Stub::AsyncGetIamPolicyRaw(::grpc::ClientContext* context, const ::google::iam::v1::GetIamPolicyRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::iam::v1::Policy>::Create(channel_.get(), cq, rpcmethod_GetIamPolicy_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::iam::v1::Policy>* ContainerAnalysisV1Beta1::Stub::PrepareAsyncGetIamPolicyRaw(::grpc::ClientContext* context, const ::google::iam::v1::GetIamPolicyRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::iam::v1::Policy>::Create(channel_.get(), cq, rpcmethod_GetIamPolicy_, context, request, false);
}

::grpc::Status ContainerAnalysisV1Beta1::Stub::TestIamPermissions(::grpc::ClientContext* context, const ::google::iam::v1::TestIamPermissionsRequest& request, ::google::iam::v1::TestIamPermissionsResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_TestIamPermissions_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::iam::v1::TestIamPermissionsResponse>* ContainerAnalysisV1Beta1::Stub::AsyncTestIamPermissionsRaw(::grpc::ClientContext* context, const ::google::iam::v1::TestIamPermissionsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::iam::v1::TestIamPermissionsResponse>::Create(channel_.get(), cq, rpcmethod_TestIamPermissions_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::iam::v1::TestIamPermissionsResponse>* ContainerAnalysisV1Beta1::Stub::PrepareAsyncTestIamPermissionsRaw(::grpc::ClientContext* context, const ::google::iam::v1::TestIamPermissionsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::iam::v1::TestIamPermissionsResponse>::Create(channel_.get(), cq, rpcmethod_TestIamPermissions_, context, request, false);
}

::grpc::Status ContainerAnalysisV1Beta1::Stub::GetScanConfig(::grpc::ClientContext* context, const ::google::devtools::containeranalysis::v1beta1::GetScanConfigRequest& request, ::google::devtools::containeranalysis::v1beta1::ScanConfig* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GetScanConfig_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::devtools::containeranalysis::v1beta1::ScanConfig>* ContainerAnalysisV1Beta1::Stub::AsyncGetScanConfigRaw(::grpc::ClientContext* context, const ::google::devtools::containeranalysis::v1beta1::GetScanConfigRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::devtools::containeranalysis::v1beta1::ScanConfig>::Create(channel_.get(), cq, rpcmethod_GetScanConfig_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::devtools::containeranalysis::v1beta1::ScanConfig>* ContainerAnalysisV1Beta1::Stub::PrepareAsyncGetScanConfigRaw(::grpc::ClientContext* context, const ::google::devtools::containeranalysis::v1beta1::GetScanConfigRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::devtools::containeranalysis::v1beta1::ScanConfig>::Create(channel_.get(), cq, rpcmethod_GetScanConfig_, context, request, false);
}

::grpc::Status ContainerAnalysisV1Beta1::Stub::ListScanConfigs(::grpc::ClientContext* context, const ::google::devtools::containeranalysis::v1beta1::ListScanConfigsRequest& request, ::google::devtools::containeranalysis::v1beta1::ListScanConfigsResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_ListScanConfigs_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::devtools::containeranalysis::v1beta1::ListScanConfigsResponse>* ContainerAnalysisV1Beta1::Stub::AsyncListScanConfigsRaw(::grpc::ClientContext* context, const ::google::devtools::containeranalysis::v1beta1::ListScanConfigsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::devtools::containeranalysis::v1beta1::ListScanConfigsResponse>::Create(channel_.get(), cq, rpcmethod_ListScanConfigs_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::devtools::containeranalysis::v1beta1::ListScanConfigsResponse>* ContainerAnalysisV1Beta1::Stub::PrepareAsyncListScanConfigsRaw(::grpc::ClientContext* context, const ::google::devtools::containeranalysis::v1beta1::ListScanConfigsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::devtools::containeranalysis::v1beta1::ListScanConfigsResponse>::Create(channel_.get(), cq, rpcmethod_ListScanConfigs_, context, request, false);
}

::grpc::Status ContainerAnalysisV1Beta1::Stub::UpdateScanConfig(::grpc::ClientContext* context, const ::google::devtools::containeranalysis::v1beta1::UpdateScanConfigRequest& request, ::google::devtools::containeranalysis::v1beta1::ScanConfig* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_UpdateScanConfig_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::devtools::containeranalysis::v1beta1::ScanConfig>* ContainerAnalysisV1Beta1::Stub::AsyncUpdateScanConfigRaw(::grpc::ClientContext* context, const ::google::devtools::containeranalysis::v1beta1::UpdateScanConfigRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::devtools::containeranalysis::v1beta1::ScanConfig>::Create(channel_.get(), cq, rpcmethod_UpdateScanConfig_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::devtools::containeranalysis::v1beta1::ScanConfig>* ContainerAnalysisV1Beta1::Stub::PrepareAsyncUpdateScanConfigRaw(::grpc::ClientContext* context, const ::google::devtools::containeranalysis::v1beta1::UpdateScanConfigRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::devtools::containeranalysis::v1beta1::ScanConfig>::Create(channel_.get(), cq, rpcmethod_UpdateScanConfig_, context, request, false);
}

ContainerAnalysisV1Beta1::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      ContainerAnalysisV1Beta1_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< ContainerAnalysisV1Beta1::Service, ::google::iam::v1::SetIamPolicyRequest, ::google::iam::v1::Policy>(
          std::mem_fn(&ContainerAnalysisV1Beta1::Service::SetIamPolicy), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      ContainerAnalysisV1Beta1_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< ContainerAnalysisV1Beta1::Service, ::google::iam::v1::GetIamPolicyRequest, ::google::iam::v1::Policy>(
          std::mem_fn(&ContainerAnalysisV1Beta1::Service::GetIamPolicy), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      ContainerAnalysisV1Beta1_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< ContainerAnalysisV1Beta1::Service, ::google::iam::v1::TestIamPermissionsRequest, ::google::iam::v1::TestIamPermissionsResponse>(
          std::mem_fn(&ContainerAnalysisV1Beta1::Service::TestIamPermissions), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      ContainerAnalysisV1Beta1_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< ContainerAnalysisV1Beta1::Service, ::google::devtools::containeranalysis::v1beta1::GetScanConfigRequest, ::google::devtools::containeranalysis::v1beta1::ScanConfig>(
          std::mem_fn(&ContainerAnalysisV1Beta1::Service::GetScanConfig), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      ContainerAnalysisV1Beta1_method_names[4],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< ContainerAnalysisV1Beta1::Service, ::google::devtools::containeranalysis::v1beta1::ListScanConfigsRequest, ::google::devtools::containeranalysis::v1beta1::ListScanConfigsResponse>(
          std::mem_fn(&ContainerAnalysisV1Beta1::Service::ListScanConfigs), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      ContainerAnalysisV1Beta1_method_names[5],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< ContainerAnalysisV1Beta1::Service, ::google::devtools::containeranalysis::v1beta1::UpdateScanConfigRequest, ::google::devtools::containeranalysis::v1beta1::ScanConfig>(
          std::mem_fn(&ContainerAnalysisV1Beta1::Service::UpdateScanConfig), this)));
}

ContainerAnalysisV1Beta1::Service::~Service() {
}

::grpc::Status ContainerAnalysisV1Beta1::Service::SetIamPolicy(::grpc::ServerContext* context, const ::google::iam::v1::SetIamPolicyRequest* request, ::google::iam::v1::Policy* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status ContainerAnalysisV1Beta1::Service::GetIamPolicy(::grpc::ServerContext* context, const ::google::iam::v1::GetIamPolicyRequest* request, ::google::iam::v1::Policy* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status ContainerAnalysisV1Beta1::Service::TestIamPermissions(::grpc::ServerContext* context, const ::google::iam::v1::TestIamPermissionsRequest* request, ::google::iam::v1::TestIamPermissionsResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status ContainerAnalysisV1Beta1::Service::GetScanConfig(::grpc::ServerContext* context, const ::google::devtools::containeranalysis::v1beta1::GetScanConfigRequest* request, ::google::devtools::containeranalysis::v1beta1::ScanConfig* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status ContainerAnalysisV1Beta1::Service::ListScanConfigs(::grpc::ServerContext* context, const ::google::devtools::containeranalysis::v1beta1::ListScanConfigsRequest* request, ::google::devtools::containeranalysis::v1beta1::ListScanConfigsResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status ContainerAnalysisV1Beta1::Service::UpdateScanConfig(::grpc::ServerContext* context, const ::google::devtools::containeranalysis::v1beta1::UpdateScanConfigRequest* request, ::google::devtools::containeranalysis::v1beta1::ScanConfig* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace google
}  // namespace devtools
}  // namespace containeranalysis
}  // namespace v1beta1

