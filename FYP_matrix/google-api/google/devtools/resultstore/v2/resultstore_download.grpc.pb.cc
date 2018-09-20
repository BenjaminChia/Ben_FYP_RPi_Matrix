// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: google/devtools/resultstore/v2/resultstore_download.proto

#include "google/devtools/resultstore/v2/resultstore_download.pb.h"
#include "google/devtools/resultstore/v2/resultstore_download.grpc.pb.h"

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
namespace resultstore {
namespace v2 {

static const char* ResultStoreDownload_method_names[] = {
  "/google.devtools.resultstore.v2.ResultStoreDownload/GetInvocation",
  "/google.devtools.resultstore.v2.ResultStoreDownload/SearchInvocations",
  "/google.devtools.resultstore.v2.ResultStoreDownload/GetConfiguration",
  "/google.devtools.resultstore.v2.ResultStoreDownload/ListConfigurations",
  "/google.devtools.resultstore.v2.ResultStoreDownload/GetTarget",
  "/google.devtools.resultstore.v2.ResultStoreDownload/ListTargets",
  "/google.devtools.resultstore.v2.ResultStoreDownload/GetConfiguredTarget",
  "/google.devtools.resultstore.v2.ResultStoreDownload/ListConfiguredTargets",
  "/google.devtools.resultstore.v2.ResultStoreDownload/GetAction",
  "/google.devtools.resultstore.v2.ResultStoreDownload/ListActions",
  "/google.devtools.resultstore.v2.ResultStoreDownload/GetFileSet",
  "/google.devtools.resultstore.v2.ResultStoreDownload/ListFileSets",
};

std::unique_ptr< ResultStoreDownload::Stub> ResultStoreDownload::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< ResultStoreDownload::Stub> stub(new ResultStoreDownload::Stub(channel));
  return stub;
}

ResultStoreDownload::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_GetInvocation_(ResultStoreDownload_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_SearchInvocations_(ResultStoreDownload_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetConfiguration_(ResultStoreDownload_method_names[2], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_ListConfigurations_(ResultStoreDownload_method_names[3], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetTarget_(ResultStoreDownload_method_names[4], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_ListTargets_(ResultStoreDownload_method_names[5], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetConfiguredTarget_(ResultStoreDownload_method_names[6], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_ListConfiguredTargets_(ResultStoreDownload_method_names[7], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetAction_(ResultStoreDownload_method_names[8], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_ListActions_(ResultStoreDownload_method_names[9], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetFileSet_(ResultStoreDownload_method_names[10], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_ListFileSets_(ResultStoreDownload_method_names[11], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status ResultStoreDownload::Stub::GetInvocation(::grpc::ClientContext* context, const ::google::devtools::resultstore::v2::GetInvocationRequest& request, ::google::devtools::resultstore::v2::Invocation* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GetInvocation_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::devtools::resultstore::v2::Invocation>* ResultStoreDownload::Stub::AsyncGetInvocationRaw(::grpc::ClientContext* context, const ::google::devtools::resultstore::v2::GetInvocationRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::devtools::resultstore::v2::Invocation>::Create(channel_.get(), cq, rpcmethod_GetInvocation_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::devtools::resultstore::v2::Invocation>* ResultStoreDownload::Stub::PrepareAsyncGetInvocationRaw(::grpc::ClientContext* context, const ::google::devtools::resultstore::v2::GetInvocationRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::devtools::resultstore::v2::Invocation>::Create(channel_.get(), cq, rpcmethod_GetInvocation_, context, request, false);
}

::grpc::Status ResultStoreDownload::Stub::SearchInvocations(::grpc::ClientContext* context, const ::google::devtools::resultstore::v2::SearchInvocationsRequest& request, ::google::devtools::resultstore::v2::SearchInvocationsResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_SearchInvocations_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::devtools::resultstore::v2::SearchInvocationsResponse>* ResultStoreDownload::Stub::AsyncSearchInvocationsRaw(::grpc::ClientContext* context, const ::google::devtools::resultstore::v2::SearchInvocationsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::devtools::resultstore::v2::SearchInvocationsResponse>::Create(channel_.get(), cq, rpcmethod_SearchInvocations_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::devtools::resultstore::v2::SearchInvocationsResponse>* ResultStoreDownload::Stub::PrepareAsyncSearchInvocationsRaw(::grpc::ClientContext* context, const ::google::devtools::resultstore::v2::SearchInvocationsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::devtools::resultstore::v2::SearchInvocationsResponse>::Create(channel_.get(), cq, rpcmethod_SearchInvocations_, context, request, false);
}

::grpc::Status ResultStoreDownload::Stub::GetConfiguration(::grpc::ClientContext* context, const ::google::devtools::resultstore::v2::GetConfigurationRequest& request, ::google::devtools::resultstore::v2::Configuration* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GetConfiguration_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::devtools::resultstore::v2::Configuration>* ResultStoreDownload::Stub::AsyncGetConfigurationRaw(::grpc::ClientContext* context, const ::google::devtools::resultstore::v2::GetConfigurationRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::devtools::resultstore::v2::Configuration>::Create(channel_.get(), cq, rpcmethod_GetConfiguration_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::devtools::resultstore::v2::Configuration>* ResultStoreDownload::Stub::PrepareAsyncGetConfigurationRaw(::grpc::ClientContext* context, const ::google::devtools::resultstore::v2::GetConfigurationRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::devtools::resultstore::v2::Configuration>::Create(channel_.get(), cq, rpcmethod_GetConfiguration_, context, request, false);
}

::grpc::Status ResultStoreDownload::Stub::ListConfigurations(::grpc::ClientContext* context, const ::google::devtools::resultstore::v2::ListConfigurationsRequest& request, ::google::devtools::resultstore::v2::ListConfigurationsResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_ListConfigurations_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::devtools::resultstore::v2::ListConfigurationsResponse>* ResultStoreDownload::Stub::AsyncListConfigurationsRaw(::grpc::ClientContext* context, const ::google::devtools::resultstore::v2::ListConfigurationsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::devtools::resultstore::v2::ListConfigurationsResponse>::Create(channel_.get(), cq, rpcmethod_ListConfigurations_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::devtools::resultstore::v2::ListConfigurationsResponse>* ResultStoreDownload::Stub::PrepareAsyncListConfigurationsRaw(::grpc::ClientContext* context, const ::google::devtools::resultstore::v2::ListConfigurationsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::devtools::resultstore::v2::ListConfigurationsResponse>::Create(channel_.get(), cq, rpcmethod_ListConfigurations_, context, request, false);
}

::grpc::Status ResultStoreDownload::Stub::GetTarget(::grpc::ClientContext* context, const ::google::devtools::resultstore::v2::GetTargetRequest& request, ::google::devtools::resultstore::v2::Target* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GetTarget_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::devtools::resultstore::v2::Target>* ResultStoreDownload::Stub::AsyncGetTargetRaw(::grpc::ClientContext* context, const ::google::devtools::resultstore::v2::GetTargetRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::devtools::resultstore::v2::Target>::Create(channel_.get(), cq, rpcmethod_GetTarget_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::devtools::resultstore::v2::Target>* ResultStoreDownload::Stub::PrepareAsyncGetTargetRaw(::grpc::ClientContext* context, const ::google::devtools::resultstore::v2::GetTargetRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::devtools::resultstore::v2::Target>::Create(channel_.get(), cq, rpcmethod_GetTarget_, context, request, false);
}

::grpc::Status ResultStoreDownload::Stub::ListTargets(::grpc::ClientContext* context, const ::google::devtools::resultstore::v2::ListTargetsRequest& request, ::google::devtools::resultstore::v2::ListTargetsResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_ListTargets_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::devtools::resultstore::v2::ListTargetsResponse>* ResultStoreDownload::Stub::AsyncListTargetsRaw(::grpc::ClientContext* context, const ::google::devtools::resultstore::v2::ListTargetsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::devtools::resultstore::v2::ListTargetsResponse>::Create(channel_.get(), cq, rpcmethod_ListTargets_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::devtools::resultstore::v2::ListTargetsResponse>* ResultStoreDownload::Stub::PrepareAsyncListTargetsRaw(::grpc::ClientContext* context, const ::google::devtools::resultstore::v2::ListTargetsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::devtools::resultstore::v2::ListTargetsResponse>::Create(channel_.get(), cq, rpcmethod_ListTargets_, context, request, false);
}

::grpc::Status ResultStoreDownload::Stub::GetConfiguredTarget(::grpc::ClientContext* context, const ::google::devtools::resultstore::v2::GetConfiguredTargetRequest& request, ::google::devtools::resultstore::v2::ConfiguredTarget* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GetConfiguredTarget_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::devtools::resultstore::v2::ConfiguredTarget>* ResultStoreDownload::Stub::AsyncGetConfiguredTargetRaw(::grpc::ClientContext* context, const ::google::devtools::resultstore::v2::GetConfiguredTargetRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::devtools::resultstore::v2::ConfiguredTarget>::Create(channel_.get(), cq, rpcmethod_GetConfiguredTarget_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::devtools::resultstore::v2::ConfiguredTarget>* ResultStoreDownload::Stub::PrepareAsyncGetConfiguredTargetRaw(::grpc::ClientContext* context, const ::google::devtools::resultstore::v2::GetConfiguredTargetRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::devtools::resultstore::v2::ConfiguredTarget>::Create(channel_.get(), cq, rpcmethod_GetConfiguredTarget_, context, request, false);
}

::grpc::Status ResultStoreDownload::Stub::ListConfiguredTargets(::grpc::ClientContext* context, const ::google::devtools::resultstore::v2::ListConfiguredTargetsRequest& request, ::google::devtools::resultstore::v2::ListConfiguredTargetsResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_ListConfiguredTargets_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::devtools::resultstore::v2::ListConfiguredTargetsResponse>* ResultStoreDownload::Stub::AsyncListConfiguredTargetsRaw(::grpc::ClientContext* context, const ::google::devtools::resultstore::v2::ListConfiguredTargetsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::devtools::resultstore::v2::ListConfiguredTargetsResponse>::Create(channel_.get(), cq, rpcmethod_ListConfiguredTargets_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::devtools::resultstore::v2::ListConfiguredTargetsResponse>* ResultStoreDownload::Stub::PrepareAsyncListConfiguredTargetsRaw(::grpc::ClientContext* context, const ::google::devtools::resultstore::v2::ListConfiguredTargetsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::devtools::resultstore::v2::ListConfiguredTargetsResponse>::Create(channel_.get(), cq, rpcmethod_ListConfiguredTargets_, context, request, false);
}

::grpc::Status ResultStoreDownload::Stub::GetAction(::grpc::ClientContext* context, const ::google::devtools::resultstore::v2::GetActionRequest& request, ::google::devtools::resultstore::v2::Action* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GetAction_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::devtools::resultstore::v2::Action>* ResultStoreDownload::Stub::AsyncGetActionRaw(::grpc::ClientContext* context, const ::google::devtools::resultstore::v2::GetActionRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::devtools::resultstore::v2::Action>::Create(channel_.get(), cq, rpcmethod_GetAction_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::devtools::resultstore::v2::Action>* ResultStoreDownload::Stub::PrepareAsyncGetActionRaw(::grpc::ClientContext* context, const ::google::devtools::resultstore::v2::GetActionRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::devtools::resultstore::v2::Action>::Create(channel_.get(), cq, rpcmethod_GetAction_, context, request, false);
}

::grpc::Status ResultStoreDownload::Stub::ListActions(::grpc::ClientContext* context, const ::google::devtools::resultstore::v2::ListActionsRequest& request, ::google::devtools::resultstore::v2::ListActionsResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_ListActions_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::devtools::resultstore::v2::ListActionsResponse>* ResultStoreDownload::Stub::AsyncListActionsRaw(::grpc::ClientContext* context, const ::google::devtools::resultstore::v2::ListActionsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::devtools::resultstore::v2::ListActionsResponse>::Create(channel_.get(), cq, rpcmethod_ListActions_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::devtools::resultstore::v2::ListActionsResponse>* ResultStoreDownload::Stub::PrepareAsyncListActionsRaw(::grpc::ClientContext* context, const ::google::devtools::resultstore::v2::ListActionsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::devtools::resultstore::v2::ListActionsResponse>::Create(channel_.get(), cq, rpcmethod_ListActions_, context, request, false);
}

::grpc::Status ResultStoreDownload::Stub::GetFileSet(::grpc::ClientContext* context, const ::google::devtools::resultstore::v2::GetFileSetRequest& request, ::google::devtools::resultstore::v2::FileSet* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GetFileSet_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::devtools::resultstore::v2::FileSet>* ResultStoreDownload::Stub::AsyncGetFileSetRaw(::grpc::ClientContext* context, const ::google::devtools::resultstore::v2::GetFileSetRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::devtools::resultstore::v2::FileSet>::Create(channel_.get(), cq, rpcmethod_GetFileSet_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::devtools::resultstore::v2::FileSet>* ResultStoreDownload::Stub::PrepareAsyncGetFileSetRaw(::grpc::ClientContext* context, const ::google::devtools::resultstore::v2::GetFileSetRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::devtools::resultstore::v2::FileSet>::Create(channel_.get(), cq, rpcmethod_GetFileSet_, context, request, false);
}

::grpc::Status ResultStoreDownload::Stub::ListFileSets(::grpc::ClientContext* context, const ::google::devtools::resultstore::v2::ListFileSetsRequest& request, ::google::devtools::resultstore::v2::ListFileSetsResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_ListFileSets_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::devtools::resultstore::v2::ListFileSetsResponse>* ResultStoreDownload::Stub::AsyncListFileSetsRaw(::grpc::ClientContext* context, const ::google::devtools::resultstore::v2::ListFileSetsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::devtools::resultstore::v2::ListFileSetsResponse>::Create(channel_.get(), cq, rpcmethod_ListFileSets_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::devtools::resultstore::v2::ListFileSetsResponse>* ResultStoreDownload::Stub::PrepareAsyncListFileSetsRaw(::grpc::ClientContext* context, const ::google::devtools::resultstore::v2::ListFileSetsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::devtools::resultstore::v2::ListFileSetsResponse>::Create(channel_.get(), cq, rpcmethod_ListFileSets_, context, request, false);
}

ResultStoreDownload::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      ResultStoreDownload_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< ResultStoreDownload::Service, ::google::devtools::resultstore::v2::GetInvocationRequest, ::google::devtools::resultstore::v2::Invocation>(
          std::mem_fn(&ResultStoreDownload::Service::GetInvocation), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      ResultStoreDownload_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< ResultStoreDownload::Service, ::google::devtools::resultstore::v2::SearchInvocationsRequest, ::google::devtools::resultstore::v2::SearchInvocationsResponse>(
          std::mem_fn(&ResultStoreDownload::Service::SearchInvocations), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      ResultStoreDownload_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< ResultStoreDownload::Service, ::google::devtools::resultstore::v2::GetConfigurationRequest, ::google::devtools::resultstore::v2::Configuration>(
          std::mem_fn(&ResultStoreDownload::Service::GetConfiguration), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      ResultStoreDownload_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< ResultStoreDownload::Service, ::google::devtools::resultstore::v2::ListConfigurationsRequest, ::google::devtools::resultstore::v2::ListConfigurationsResponse>(
          std::mem_fn(&ResultStoreDownload::Service::ListConfigurations), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      ResultStoreDownload_method_names[4],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< ResultStoreDownload::Service, ::google::devtools::resultstore::v2::GetTargetRequest, ::google::devtools::resultstore::v2::Target>(
          std::mem_fn(&ResultStoreDownload::Service::GetTarget), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      ResultStoreDownload_method_names[5],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< ResultStoreDownload::Service, ::google::devtools::resultstore::v2::ListTargetsRequest, ::google::devtools::resultstore::v2::ListTargetsResponse>(
          std::mem_fn(&ResultStoreDownload::Service::ListTargets), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      ResultStoreDownload_method_names[6],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< ResultStoreDownload::Service, ::google::devtools::resultstore::v2::GetConfiguredTargetRequest, ::google::devtools::resultstore::v2::ConfiguredTarget>(
          std::mem_fn(&ResultStoreDownload::Service::GetConfiguredTarget), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      ResultStoreDownload_method_names[7],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< ResultStoreDownload::Service, ::google::devtools::resultstore::v2::ListConfiguredTargetsRequest, ::google::devtools::resultstore::v2::ListConfiguredTargetsResponse>(
          std::mem_fn(&ResultStoreDownload::Service::ListConfiguredTargets), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      ResultStoreDownload_method_names[8],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< ResultStoreDownload::Service, ::google::devtools::resultstore::v2::GetActionRequest, ::google::devtools::resultstore::v2::Action>(
          std::mem_fn(&ResultStoreDownload::Service::GetAction), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      ResultStoreDownload_method_names[9],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< ResultStoreDownload::Service, ::google::devtools::resultstore::v2::ListActionsRequest, ::google::devtools::resultstore::v2::ListActionsResponse>(
          std::mem_fn(&ResultStoreDownload::Service::ListActions), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      ResultStoreDownload_method_names[10],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< ResultStoreDownload::Service, ::google::devtools::resultstore::v2::GetFileSetRequest, ::google::devtools::resultstore::v2::FileSet>(
          std::mem_fn(&ResultStoreDownload::Service::GetFileSet), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      ResultStoreDownload_method_names[11],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< ResultStoreDownload::Service, ::google::devtools::resultstore::v2::ListFileSetsRequest, ::google::devtools::resultstore::v2::ListFileSetsResponse>(
          std::mem_fn(&ResultStoreDownload::Service::ListFileSets), this)));
}

ResultStoreDownload::Service::~Service() {
}

::grpc::Status ResultStoreDownload::Service::GetInvocation(::grpc::ServerContext* context, const ::google::devtools::resultstore::v2::GetInvocationRequest* request, ::google::devtools::resultstore::v2::Invocation* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status ResultStoreDownload::Service::SearchInvocations(::grpc::ServerContext* context, const ::google::devtools::resultstore::v2::SearchInvocationsRequest* request, ::google::devtools::resultstore::v2::SearchInvocationsResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status ResultStoreDownload::Service::GetConfiguration(::grpc::ServerContext* context, const ::google::devtools::resultstore::v2::GetConfigurationRequest* request, ::google::devtools::resultstore::v2::Configuration* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status ResultStoreDownload::Service::ListConfigurations(::grpc::ServerContext* context, const ::google::devtools::resultstore::v2::ListConfigurationsRequest* request, ::google::devtools::resultstore::v2::ListConfigurationsResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status ResultStoreDownload::Service::GetTarget(::grpc::ServerContext* context, const ::google::devtools::resultstore::v2::GetTargetRequest* request, ::google::devtools::resultstore::v2::Target* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status ResultStoreDownload::Service::ListTargets(::grpc::ServerContext* context, const ::google::devtools::resultstore::v2::ListTargetsRequest* request, ::google::devtools::resultstore::v2::ListTargetsResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status ResultStoreDownload::Service::GetConfiguredTarget(::grpc::ServerContext* context, const ::google::devtools::resultstore::v2::GetConfiguredTargetRequest* request, ::google::devtools::resultstore::v2::ConfiguredTarget* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status ResultStoreDownload::Service::ListConfiguredTargets(::grpc::ServerContext* context, const ::google::devtools::resultstore::v2::ListConfiguredTargetsRequest* request, ::google::devtools::resultstore::v2::ListConfiguredTargetsResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status ResultStoreDownload::Service::GetAction(::grpc::ServerContext* context, const ::google::devtools::resultstore::v2::GetActionRequest* request, ::google::devtools::resultstore::v2::Action* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status ResultStoreDownload::Service::ListActions(::grpc::ServerContext* context, const ::google::devtools::resultstore::v2::ListActionsRequest* request, ::google::devtools::resultstore::v2::ListActionsResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status ResultStoreDownload::Service::GetFileSet(::grpc::ServerContext* context, const ::google::devtools::resultstore::v2::GetFileSetRequest* request, ::google::devtools::resultstore::v2::FileSet* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status ResultStoreDownload::Service::ListFileSets(::grpc::ServerContext* context, const ::google::devtools::resultstore::v2::ListFileSetsRequest* request, ::google::devtools::resultstore::v2::ListFileSetsResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace google
}  // namespace devtools
}  // namespace resultstore
}  // namespace v2
