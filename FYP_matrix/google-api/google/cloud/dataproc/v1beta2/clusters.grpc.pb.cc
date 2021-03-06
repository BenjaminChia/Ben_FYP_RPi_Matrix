// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: google/cloud/dataproc/v1beta2/clusters.proto

#include "google/cloud/dataproc/v1beta2/clusters.pb.h"
#include "google/cloud/dataproc/v1beta2/clusters.grpc.pb.h"

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
namespace dataproc {
namespace v1beta2 {

static const char* ClusterController_method_names[] = {
  "/google.cloud.dataproc.v1beta2.ClusterController/CreateCluster",
  "/google.cloud.dataproc.v1beta2.ClusterController/UpdateCluster",
  "/google.cloud.dataproc.v1beta2.ClusterController/DeleteCluster",
  "/google.cloud.dataproc.v1beta2.ClusterController/GetCluster",
  "/google.cloud.dataproc.v1beta2.ClusterController/ListClusters",
  "/google.cloud.dataproc.v1beta2.ClusterController/DiagnoseCluster",
};

std::unique_ptr< ClusterController::Stub> ClusterController::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< ClusterController::Stub> stub(new ClusterController::Stub(channel));
  return stub;
}

ClusterController::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_CreateCluster_(ClusterController_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_UpdateCluster_(ClusterController_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_DeleteCluster_(ClusterController_method_names[2], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetCluster_(ClusterController_method_names[3], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_ListClusters_(ClusterController_method_names[4], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_DiagnoseCluster_(ClusterController_method_names[5], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status ClusterController::Stub::CreateCluster(::grpc::ClientContext* context, const ::google::cloud::dataproc::v1beta2::CreateClusterRequest& request, ::google::longrunning::Operation* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_CreateCluster_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>* ClusterController::Stub::AsyncCreateClusterRaw(::grpc::ClientContext* context, const ::google::cloud::dataproc::v1beta2::CreateClusterRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::longrunning::Operation>::Create(channel_.get(), cq, rpcmethod_CreateCluster_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>* ClusterController::Stub::PrepareAsyncCreateClusterRaw(::grpc::ClientContext* context, const ::google::cloud::dataproc::v1beta2::CreateClusterRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::longrunning::Operation>::Create(channel_.get(), cq, rpcmethod_CreateCluster_, context, request, false);
}

::grpc::Status ClusterController::Stub::UpdateCluster(::grpc::ClientContext* context, const ::google::cloud::dataproc::v1beta2::UpdateClusterRequest& request, ::google::longrunning::Operation* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_UpdateCluster_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>* ClusterController::Stub::AsyncUpdateClusterRaw(::grpc::ClientContext* context, const ::google::cloud::dataproc::v1beta2::UpdateClusterRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::longrunning::Operation>::Create(channel_.get(), cq, rpcmethod_UpdateCluster_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>* ClusterController::Stub::PrepareAsyncUpdateClusterRaw(::grpc::ClientContext* context, const ::google::cloud::dataproc::v1beta2::UpdateClusterRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::longrunning::Operation>::Create(channel_.get(), cq, rpcmethod_UpdateCluster_, context, request, false);
}

::grpc::Status ClusterController::Stub::DeleteCluster(::grpc::ClientContext* context, const ::google::cloud::dataproc::v1beta2::DeleteClusterRequest& request, ::google::longrunning::Operation* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_DeleteCluster_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>* ClusterController::Stub::AsyncDeleteClusterRaw(::grpc::ClientContext* context, const ::google::cloud::dataproc::v1beta2::DeleteClusterRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::longrunning::Operation>::Create(channel_.get(), cq, rpcmethod_DeleteCluster_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>* ClusterController::Stub::PrepareAsyncDeleteClusterRaw(::grpc::ClientContext* context, const ::google::cloud::dataproc::v1beta2::DeleteClusterRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::longrunning::Operation>::Create(channel_.get(), cq, rpcmethod_DeleteCluster_, context, request, false);
}

::grpc::Status ClusterController::Stub::GetCluster(::grpc::ClientContext* context, const ::google::cloud::dataproc::v1beta2::GetClusterRequest& request, ::google::cloud::dataproc::v1beta2::Cluster* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GetCluster_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::cloud::dataproc::v1beta2::Cluster>* ClusterController::Stub::AsyncGetClusterRaw(::grpc::ClientContext* context, const ::google::cloud::dataproc::v1beta2::GetClusterRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::cloud::dataproc::v1beta2::Cluster>::Create(channel_.get(), cq, rpcmethod_GetCluster_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::cloud::dataproc::v1beta2::Cluster>* ClusterController::Stub::PrepareAsyncGetClusterRaw(::grpc::ClientContext* context, const ::google::cloud::dataproc::v1beta2::GetClusterRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::cloud::dataproc::v1beta2::Cluster>::Create(channel_.get(), cq, rpcmethod_GetCluster_, context, request, false);
}

::grpc::Status ClusterController::Stub::ListClusters(::grpc::ClientContext* context, const ::google::cloud::dataproc::v1beta2::ListClustersRequest& request, ::google::cloud::dataproc::v1beta2::ListClustersResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_ListClusters_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::cloud::dataproc::v1beta2::ListClustersResponse>* ClusterController::Stub::AsyncListClustersRaw(::grpc::ClientContext* context, const ::google::cloud::dataproc::v1beta2::ListClustersRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::cloud::dataproc::v1beta2::ListClustersResponse>::Create(channel_.get(), cq, rpcmethod_ListClusters_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::cloud::dataproc::v1beta2::ListClustersResponse>* ClusterController::Stub::PrepareAsyncListClustersRaw(::grpc::ClientContext* context, const ::google::cloud::dataproc::v1beta2::ListClustersRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::cloud::dataproc::v1beta2::ListClustersResponse>::Create(channel_.get(), cq, rpcmethod_ListClusters_, context, request, false);
}

::grpc::Status ClusterController::Stub::DiagnoseCluster(::grpc::ClientContext* context, const ::google::cloud::dataproc::v1beta2::DiagnoseClusterRequest& request, ::google::longrunning::Operation* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_DiagnoseCluster_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>* ClusterController::Stub::AsyncDiagnoseClusterRaw(::grpc::ClientContext* context, const ::google::cloud::dataproc::v1beta2::DiagnoseClusterRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::longrunning::Operation>::Create(channel_.get(), cq, rpcmethod_DiagnoseCluster_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>* ClusterController::Stub::PrepareAsyncDiagnoseClusterRaw(::grpc::ClientContext* context, const ::google::cloud::dataproc::v1beta2::DiagnoseClusterRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::longrunning::Operation>::Create(channel_.get(), cq, rpcmethod_DiagnoseCluster_, context, request, false);
}

ClusterController::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      ClusterController_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< ClusterController::Service, ::google::cloud::dataproc::v1beta2::CreateClusterRequest, ::google::longrunning::Operation>(
          std::mem_fn(&ClusterController::Service::CreateCluster), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      ClusterController_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< ClusterController::Service, ::google::cloud::dataproc::v1beta2::UpdateClusterRequest, ::google::longrunning::Operation>(
          std::mem_fn(&ClusterController::Service::UpdateCluster), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      ClusterController_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< ClusterController::Service, ::google::cloud::dataproc::v1beta2::DeleteClusterRequest, ::google::longrunning::Operation>(
          std::mem_fn(&ClusterController::Service::DeleteCluster), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      ClusterController_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< ClusterController::Service, ::google::cloud::dataproc::v1beta2::GetClusterRequest, ::google::cloud::dataproc::v1beta2::Cluster>(
          std::mem_fn(&ClusterController::Service::GetCluster), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      ClusterController_method_names[4],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< ClusterController::Service, ::google::cloud::dataproc::v1beta2::ListClustersRequest, ::google::cloud::dataproc::v1beta2::ListClustersResponse>(
          std::mem_fn(&ClusterController::Service::ListClusters), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      ClusterController_method_names[5],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< ClusterController::Service, ::google::cloud::dataproc::v1beta2::DiagnoseClusterRequest, ::google::longrunning::Operation>(
          std::mem_fn(&ClusterController::Service::DiagnoseCluster), this)));
}

ClusterController::Service::~Service() {
}

::grpc::Status ClusterController::Service::CreateCluster(::grpc::ServerContext* context, const ::google::cloud::dataproc::v1beta2::CreateClusterRequest* request, ::google::longrunning::Operation* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status ClusterController::Service::UpdateCluster(::grpc::ServerContext* context, const ::google::cloud::dataproc::v1beta2::UpdateClusterRequest* request, ::google::longrunning::Operation* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status ClusterController::Service::DeleteCluster(::grpc::ServerContext* context, const ::google::cloud::dataproc::v1beta2::DeleteClusterRequest* request, ::google::longrunning::Operation* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status ClusterController::Service::GetCluster(::grpc::ServerContext* context, const ::google::cloud::dataproc::v1beta2::GetClusterRequest* request, ::google::cloud::dataproc::v1beta2::Cluster* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status ClusterController::Service::ListClusters(::grpc::ServerContext* context, const ::google::cloud::dataproc::v1beta2::ListClustersRequest* request, ::google::cloud::dataproc::v1beta2::ListClustersResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status ClusterController::Service::DiagnoseCluster(::grpc::ServerContext* context, const ::google::cloud::dataproc::v1beta2::DiagnoseClusterRequest* request, ::google::longrunning::Operation* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace google
}  // namespace cloud
}  // namespace dataproc
}  // namespace v1beta2

