// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: google/cloud/texttospeech/v1/cloud_tts.proto

#include "google/cloud/texttospeech/v1/cloud_tts.pb.h"
#include "google/cloud/texttospeech/v1/cloud_tts.grpc.pb.h"

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
namespace texttospeech {
namespace v1 {

static const char* TextToSpeech_method_names[] = {
  "/google.cloud.texttospeech.v1.TextToSpeech/ListVoices",
  "/google.cloud.texttospeech.v1.TextToSpeech/SynthesizeSpeech",
};

std::unique_ptr< TextToSpeech::Stub> TextToSpeech::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< TextToSpeech::Stub> stub(new TextToSpeech::Stub(channel));
  return stub;
}

TextToSpeech::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_ListVoices_(TextToSpeech_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_SynthesizeSpeech_(TextToSpeech_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status TextToSpeech::Stub::ListVoices(::grpc::ClientContext* context, const ::google::cloud::texttospeech::v1::ListVoicesRequest& request, ::google::cloud::texttospeech::v1::ListVoicesResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_ListVoices_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::cloud::texttospeech::v1::ListVoicesResponse>* TextToSpeech::Stub::AsyncListVoicesRaw(::grpc::ClientContext* context, const ::google::cloud::texttospeech::v1::ListVoicesRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::cloud::texttospeech::v1::ListVoicesResponse>::Create(channel_.get(), cq, rpcmethod_ListVoices_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::cloud::texttospeech::v1::ListVoicesResponse>* TextToSpeech::Stub::PrepareAsyncListVoicesRaw(::grpc::ClientContext* context, const ::google::cloud::texttospeech::v1::ListVoicesRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::cloud::texttospeech::v1::ListVoicesResponse>::Create(channel_.get(), cq, rpcmethod_ListVoices_, context, request, false);
}

::grpc::Status TextToSpeech::Stub::SynthesizeSpeech(::grpc::ClientContext* context, const ::google::cloud::texttospeech::v1::SynthesizeSpeechRequest& request, ::google::cloud::texttospeech::v1::SynthesizeSpeechResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_SynthesizeSpeech_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::cloud::texttospeech::v1::SynthesizeSpeechResponse>* TextToSpeech::Stub::AsyncSynthesizeSpeechRaw(::grpc::ClientContext* context, const ::google::cloud::texttospeech::v1::SynthesizeSpeechRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::cloud::texttospeech::v1::SynthesizeSpeechResponse>::Create(channel_.get(), cq, rpcmethod_SynthesizeSpeech_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::cloud::texttospeech::v1::SynthesizeSpeechResponse>* TextToSpeech::Stub::PrepareAsyncSynthesizeSpeechRaw(::grpc::ClientContext* context, const ::google::cloud::texttospeech::v1::SynthesizeSpeechRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::cloud::texttospeech::v1::SynthesizeSpeechResponse>::Create(channel_.get(), cq, rpcmethod_SynthesizeSpeech_, context, request, false);
}

TextToSpeech::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      TextToSpeech_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< TextToSpeech::Service, ::google::cloud::texttospeech::v1::ListVoicesRequest, ::google::cloud::texttospeech::v1::ListVoicesResponse>(
          std::mem_fn(&TextToSpeech::Service::ListVoices), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      TextToSpeech_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< TextToSpeech::Service, ::google::cloud::texttospeech::v1::SynthesizeSpeechRequest, ::google::cloud::texttospeech::v1::SynthesizeSpeechResponse>(
          std::mem_fn(&TextToSpeech::Service::SynthesizeSpeech), this)));
}

TextToSpeech::Service::~Service() {
}

::grpc::Status TextToSpeech::Service::ListVoices(::grpc::ServerContext* context, const ::google::cloud::texttospeech::v1::ListVoicesRequest* request, ::google::cloud::texttospeech::v1::ListVoicesResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status TextToSpeech::Service::SynthesizeSpeech(::grpc::ServerContext* context, const ::google::cloud::texttospeech::v1::SynthesizeSpeechRequest* request, ::google::cloud::texttospeech::v1::SynthesizeSpeechResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace google
}  // namespace cloud
}  // namespace texttospeech
}  // namespace v1

