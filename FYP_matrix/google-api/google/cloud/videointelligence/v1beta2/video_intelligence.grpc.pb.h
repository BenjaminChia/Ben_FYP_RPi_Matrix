// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: google/cloud/videointelligence/v1beta2/video_intelligence.proto
// Original file comments:
// Copyright 2017 Google Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
#ifndef GRPC_google_2fcloud_2fvideointelligence_2fv1beta2_2fvideo_5fintelligence_2eproto__INCLUDED
#define GRPC_google_2fcloud_2fvideointelligence_2fv1beta2_2fvideo_5fintelligence_2eproto__INCLUDED

#include "google/cloud/videointelligence/v1beta2/video_intelligence.pb.h"

#include <grpcpp/impl/codegen/async_generic_service.h>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/method_handler_impl.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

namespace grpc {
class CompletionQueue;
class Channel;
class ServerCompletionQueue;
class ServerContext;
}  // namespace grpc

namespace google {
namespace cloud {
namespace videointelligence {
namespace v1beta2 {

// Service that implements Google Cloud Video Intelligence API.
class VideoIntelligenceService final {
 public:
  static constexpr char const* service_full_name() {
    return "google.cloud.videointelligence.v1beta2.VideoIntelligenceService";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    // Performs asynchronous video annotation. Progress and results can be
    // retrieved through the `google.longrunning.Operations` interface.
    // `Operation.metadata` contains `AnnotateVideoProgress` (progress).
    // `Operation.response` contains `AnnotateVideoResponse` (results).
    virtual ::grpc::Status AnnotateVideo(::grpc::ClientContext* context, const ::google::cloud::videointelligence::v1beta2::AnnotateVideoRequest& request, ::google::longrunning::Operation* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::longrunning::Operation>> AsyncAnnotateVideo(::grpc::ClientContext* context, const ::google::cloud::videointelligence::v1beta2::AnnotateVideoRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::longrunning::Operation>>(AsyncAnnotateVideoRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::longrunning::Operation>> PrepareAsyncAnnotateVideo(::grpc::ClientContext* context, const ::google::cloud::videointelligence::v1beta2::AnnotateVideoRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::longrunning::Operation>>(PrepareAsyncAnnotateVideoRaw(context, request, cq));
    }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::longrunning::Operation>* AsyncAnnotateVideoRaw(::grpc::ClientContext* context, const ::google::cloud::videointelligence::v1beta2::AnnotateVideoRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::longrunning::Operation>* PrepareAsyncAnnotateVideoRaw(::grpc::ClientContext* context, const ::google::cloud::videointelligence::v1beta2::AnnotateVideoRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status AnnotateVideo(::grpc::ClientContext* context, const ::google::cloud::videointelligence::v1beta2::AnnotateVideoRequest& request, ::google::longrunning::Operation* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>> AsyncAnnotateVideo(::grpc::ClientContext* context, const ::google::cloud::videointelligence::v1beta2::AnnotateVideoRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>>(AsyncAnnotateVideoRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>> PrepareAsyncAnnotateVideo(::grpc::ClientContext* context, const ::google::cloud::videointelligence::v1beta2::AnnotateVideoRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>>(PrepareAsyncAnnotateVideoRaw(context, request, cq));
    }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    ::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>* AsyncAnnotateVideoRaw(::grpc::ClientContext* context, const ::google::cloud::videointelligence::v1beta2::AnnotateVideoRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>* PrepareAsyncAnnotateVideoRaw(::grpc::ClientContext* context, const ::google::cloud::videointelligence::v1beta2::AnnotateVideoRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_AnnotateVideo_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    // Performs asynchronous video annotation. Progress and results can be
    // retrieved through the `google.longrunning.Operations` interface.
    // `Operation.metadata` contains `AnnotateVideoProgress` (progress).
    // `Operation.response` contains `AnnotateVideoResponse` (results).
    virtual ::grpc::Status AnnotateVideo(::grpc::ServerContext* context, const ::google::cloud::videointelligence::v1beta2::AnnotateVideoRequest* request, ::google::longrunning::Operation* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_AnnotateVideo : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_AnnotateVideo() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_AnnotateVideo() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status AnnotateVideo(::grpc::ServerContext* context, const ::google::cloud::videointelligence::v1beta2::AnnotateVideoRequest* request, ::google::longrunning::Operation* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestAnnotateVideo(::grpc::ServerContext* context, ::google::cloud::videointelligence::v1beta2::AnnotateVideoRequest* request, ::grpc::ServerAsyncResponseWriter< ::google::longrunning::Operation>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_AnnotateVideo<Service > AsyncService;
  template <class BaseClass>
  class WithGenericMethod_AnnotateVideo : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_AnnotateVideo() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_AnnotateVideo() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status AnnotateVideo(::grpc::ServerContext* context, const ::google::cloud::videointelligence::v1beta2::AnnotateVideoRequest* request, ::google::longrunning::Operation* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_AnnotateVideo : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithRawMethod_AnnotateVideo() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_AnnotateVideo() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status AnnotateVideo(::grpc::ServerContext* context, const ::google::cloud::videointelligence::v1beta2::AnnotateVideoRequest* request, ::google::longrunning::Operation* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestAnnotateVideo(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_AnnotateVideo : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_AnnotateVideo() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler< ::google::cloud::videointelligence::v1beta2::AnnotateVideoRequest, ::google::longrunning::Operation>(std::bind(&WithStreamedUnaryMethod_AnnotateVideo<BaseClass>::StreamedAnnotateVideo, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_AnnotateVideo() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status AnnotateVideo(::grpc::ServerContext* context, const ::google::cloud::videointelligence::v1beta2::AnnotateVideoRequest* request, ::google::longrunning::Operation* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedAnnotateVideo(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::google::cloud::videointelligence::v1beta2::AnnotateVideoRequest,::google::longrunning::Operation>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_AnnotateVideo<Service > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_AnnotateVideo<Service > StreamedService;
};

}  // namespace v1beta2
}  // namespace videointelligence
}  // namespace cloud
}  // namespace google


#endif  // GRPC_google_2fcloud_2fvideointelligence_2fv1beta2_2fvideo_5fintelligence_2eproto__INCLUDED
