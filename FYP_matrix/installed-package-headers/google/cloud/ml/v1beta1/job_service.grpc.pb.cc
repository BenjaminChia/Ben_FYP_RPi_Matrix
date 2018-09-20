// Generated by the gRPC protobuf plugin.
// If you make any local change, they will be lost.
// source: google/cloud/ml/v1beta1/job_service.proto

#include "google/cloud/ml/v1beta1/job_service.pb.h"
#include "google/cloud/ml/v1beta1/job_service.grpc.pb.h"

#include <grpc++/impl/codegen/async_stream.h>
#include <grpc++/impl/codegen/async_unary_call.h>
#include <grpc++/impl/codegen/channel_interface.h>
#include <grpc++/impl/codegen/client_unary_call.h>
#include <grpc++/impl/codegen/method_handler_impl.h>
#include <grpc++/impl/codegen/rpc_service_method.h>
#include <grpc++/impl/codegen/service_type.h>
#include <grpc++/impl/codegen/sync_stream.h>
namespace google {
namespace cloud {
namespace ml {
namespace v1beta1 {

static const char* JobService_method_names[] = {
  "/google.cloud.ml.v1beta1.JobService/CreateJob",
  "/google.cloud.ml.v1beta1.JobService/ListJobs",
  "/google.cloud.ml.v1beta1.JobService/GetJob",
  "/google.cloud.ml.v1beta1.JobService/CancelJob",
};

std::unique_ptr< JobService::Stub> JobService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  std::unique_ptr< JobService::Stub> stub(new JobService::Stub(channel));
  return stub;
}

JobService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_CreateJob_(JobService_method_names[0], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_ListJobs_(JobService_method_names[1], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetJob_(JobService_method_names[2], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_CancelJob_(JobService_method_names[3], ::grpc::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status JobService::Stub::CreateJob(::grpc::ClientContext* context, const ::google::cloud::ml::v1beta1::CreateJobRequest& request, ::google::cloud::ml::v1beta1::Job* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_CreateJob_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::cloud::ml::v1beta1::Job>* JobService::Stub::AsyncCreateJobRaw(::grpc::ClientContext* context, const ::google::cloud::ml::v1beta1::CreateJobRequest& request, ::grpc::CompletionQueue* cq) {
  return new ::grpc::ClientAsyncResponseReader< ::google::cloud::ml::v1beta1::Job>(channel_.get(), cq, rpcmethod_CreateJob_, context, request);
}

::grpc::Status JobService::Stub::ListJobs(::grpc::ClientContext* context, const ::google::cloud::ml::v1beta1::ListJobsRequest& request, ::google::cloud::ml::v1beta1::ListJobsResponse* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_ListJobs_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::cloud::ml::v1beta1::ListJobsResponse>* JobService::Stub::AsyncListJobsRaw(::grpc::ClientContext* context, const ::google::cloud::ml::v1beta1::ListJobsRequest& request, ::grpc::CompletionQueue* cq) {
  return new ::grpc::ClientAsyncResponseReader< ::google::cloud::ml::v1beta1::ListJobsResponse>(channel_.get(), cq, rpcmethod_ListJobs_, context, request);
}

::grpc::Status JobService::Stub::GetJob(::grpc::ClientContext* context, const ::google::cloud::ml::v1beta1::GetJobRequest& request, ::google::cloud::ml::v1beta1::Job* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_GetJob_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::cloud::ml::v1beta1::Job>* JobService::Stub::AsyncGetJobRaw(::grpc::ClientContext* context, const ::google::cloud::ml::v1beta1::GetJobRequest& request, ::grpc::CompletionQueue* cq) {
  return new ::grpc::ClientAsyncResponseReader< ::google::cloud::ml::v1beta1::Job>(channel_.get(), cq, rpcmethod_GetJob_, context, request);
}

::grpc::Status JobService::Stub::CancelJob(::grpc::ClientContext* context, const ::google::cloud::ml::v1beta1::CancelJobRequest& request, ::google::protobuf::Empty* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_CancelJob_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* JobService::Stub::AsyncCancelJobRaw(::grpc::ClientContext* context, const ::google::cloud::ml::v1beta1::CancelJobRequest& request, ::grpc::CompletionQueue* cq) {
  return new ::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>(channel_.get(), cq, rpcmethod_CancelJob_, context, request);
}

JobService::Service::Service() {
  (void)JobService_method_names;
  AddMethod(new ::grpc::RpcServiceMethod(
      JobService_method_names[0],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< JobService::Service, ::google::cloud::ml::v1beta1::CreateJobRequest, ::google::cloud::ml::v1beta1::Job>(
          std::mem_fn(&JobService::Service::CreateJob), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      JobService_method_names[1],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< JobService::Service, ::google::cloud::ml::v1beta1::ListJobsRequest, ::google::cloud::ml::v1beta1::ListJobsResponse>(
          std::mem_fn(&JobService::Service::ListJobs), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      JobService_method_names[2],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< JobService::Service, ::google::cloud::ml::v1beta1::GetJobRequest, ::google::cloud::ml::v1beta1::Job>(
          std::mem_fn(&JobService::Service::GetJob), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      JobService_method_names[3],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< JobService::Service, ::google::cloud::ml::v1beta1::CancelJobRequest, ::google::protobuf::Empty>(
          std::mem_fn(&JobService::Service::CancelJob), this)));
}

JobService::Service::~Service() {
}

::grpc::Status JobService::Service::CreateJob(::grpc::ServerContext* context, const ::google::cloud::ml::v1beta1::CreateJobRequest* request, ::google::cloud::ml::v1beta1::Job* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status JobService::Service::ListJobs(::grpc::ServerContext* context, const ::google::cloud::ml::v1beta1::ListJobsRequest* request, ::google::cloud::ml::v1beta1::ListJobsResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status JobService::Service::GetJob(::grpc::ServerContext* context, const ::google::cloud::ml::v1beta1::GetJobRequest* request, ::google::cloud::ml::v1beta1::Job* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status JobService::Service::CancelJob(::grpc::ServerContext* context, const ::google::cloud::ml::v1beta1::CancelJobRequest* request, ::google::protobuf::Empty* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace google
}  // namespace cloud
}  // namespace ml
}  // namespace v1beta1

