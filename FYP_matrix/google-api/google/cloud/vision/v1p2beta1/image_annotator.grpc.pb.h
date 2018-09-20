// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: google/cloud/vision/v1p2beta1/image_annotator.proto
// Original file comments:
// Copyright 2018 Google Inc.
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
#ifndef GRPC_google_2fcloud_2fvision_2fv1p2beta1_2fimage_5fannotator_2eproto__INCLUDED
#define GRPC_google_2fcloud_2fvision_2fv1p2beta1_2fimage_5fannotator_2eproto__INCLUDED

#include "google/cloud/vision/v1p2beta1/image_annotator.pb.h"

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
namespace vision {
namespace v1p2beta1 {

// Service that performs Google Cloud Vision API detection tasks over client
// images, such as face, landmark, logo, label, and text detection. The
// ImageAnnotator service returns detected entities from the images.
class ImageAnnotator final {
 public:
  static constexpr char const* service_full_name() {
    return "google.cloud.vision.v1p2beta1.ImageAnnotator";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    // Run image detection and annotation for a batch of images.
    virtual ::grpc::Status BatchAnnotateImages(::grpc::ClientContext* context, const ::google::cloud::vision::v1p2beta1::BatchAnnotateImagesRequest& request, ::google::cloud::vision::v1p2beta1::BatchAnnotateImagesResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::cloud::vision::v1p2beta1::BatchAnnotateImagesResponse>> AsyncBatchAnnotateImages(::grpc::ClientContext* context, const ::google::cloud::vision::v1p2beta1::BatchAnnotateImagesRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::cloud::vision::v1p2beta1::BatchAnnotateImagesResponse>>(AsyncBatchAnnotateImagesRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::cloud::vision::v1p2beta1::BatchAnnotateImagesResponse>> PrepareAsyncBatchAnnotateImages(::grpc::ClientContext* context, const ::google::cloud::vision::v1p2beta1::BatchAnnotateImagesRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::cloud::vision::v1p2beta1::BatchAnnotateImagesResponse>>(PrepareAsyncBatchAnnotateImagesRaw(context, request, cq));
    }
    // Run async image detection and annotation for a list of generic files (e.g.
    // PDF) which may contain multiple pages and multiple images per page.
    // Progress and results can be retrieved through the
    // `google.longrunning.Operations` interface.
    // `Operation.metadata` contains `OperationMetadata` (metadata).
    // `Operation.response` contains `AsyncBatchAnnotateFilesResponse` (results).
    virtual ::grpc::Status AsyncBatchAnnotateFiles(::grpc::ClientContext* context, const ::google::cloud::vision::v1p2beta1::AsyncBatchAnnotateFilesRequest& request, ::google::longrunning::Operation* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::longrunning::Operation>> AsyncAsyncBatchAnnotateFiles(::grpc::ClientContext* context, const ::google::cloud::vision::v1p2beta1::AsyncBatchAnnotateFilesRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::longrunning::Operation>>(AsyncAsyncBatchAnnotateFilesRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::longrunning::Operation>> PrepareAsyncAsyncBatchAnnotateFiles(::grpc::ClientContext* context, const ::google::cloud::vision::v1p2beta1::AsyncBatchAnnotateFilesRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::longrunning::Operation>>(PrepareAsyncAsyncBatchAnnotateFilesRaw(context, request, cq));
    }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::cloud::vision::v1p2beta1::BatchAnnotateImagesResponse>* AsyncBatchAnnotateImagesRaw(::grpc::ClientContext* context, const ::google::cloud::vision::v1p2beta1::BatchAnnotateImagesRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::cloud::vision::v1p2beta1::BatchAnnotateImagesResponse>* PrepareAsyncBatchAnnotateImagesRaw(::grpc::ClientContext* context, const ::google::cloud::vision::v1p2beta1::BatchAnnotateImagesRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::longrunning::Operation>* AsyncAsyncBatchAnnotateFilesRaw(::grpc::ClientContext* context, const ::google::cloud::vision::v1p2beta1::AsyncBatchAnnotateFilesRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::longrunning::Operation>* PrepareAsyncAsyncBatchAnnotateFilesRaw(::grpc::ClientContext* context, const ::google::cloud::vision::v1p2beta1::AsyncBatchAnnotateFilesRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status BatchAnnotateImages(::grpc::ClientContext* context, const ::google::cloud::vision::v1p2beta1::BatchAnnotateImagesRequest& request, ::google::cloud::vision::v1p2beta1::BatchAnnotateImagesResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::cloud::vision::v1p2beta1::BatchAnnotateImagesResponse>> AsyncBatchAnnotateImages(::grpc::ClientContext* context, const ::google::cloud::vision::v1p2beta1::BatchAnnotateImagesRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::cloud::vision::v1p2beta1::BatchAnnotateImagesResponse>>(AsyncBatchAnnotateImagesRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::cloud::vision::v1p2beta1::BatchAnnotateImagesResponse>> PrepareAsyncBatchAnnotateImages(::grpc::ClientContext* context, const ::google::cloud::vision::v1p2beta1::BatchAnnotateImagesRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::cloud::vision::v1p2beta1::BatchAnnotateImagesResponse>>(PrepareAsyncBatchAnnotateImagesRaw(context, request, cq));
    }
    ::grpc::Status AsyncBatchAnnotateFiles(::grpc::ClientContext* context, const ::google::cloud::vision::v1p2beta1::AsyncBatchAnnotateFilesRequest& request, ::google::longrunning::Operation* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>> AsyncAsyncBatchAnnotateFiles(::grpc::ClientContext* context, const ::google::cloud::vision::v1p2beta1::AsyncBatchAnnotateFilesRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>>(AsyncAsyncBatchAnnotateFilesRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>> PrepareAsyncAsyncBatchAnnotateFiles(::grpc::ClientContext* context, const ::google::cloud::vision::v1p2beta1::AsyncBatchAnnotateFilesRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>>(PrepareAsyncAsyncBatchAnnotateFilesRaw(context, request, cq));
    }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    ::grpc::ClientAsyncResponseReader< ::google::cloud::vision::v1p2beta1::BatchAnnotateImagesResponse>* AsyncBatchAnnotateImagesRaw(::grpc::ClientContext* context, const ::google::cloud::vision::v1p2beta1::BatchAnnotateImagesRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::google::cloud::vision::v1p2beta1::BatchAnnotateImagesResponse>* PrepareAsyncBatchAnnotateImagesRaw(::grpc::ClientContext* context, const ::google::cloud::vision::v1p2beta1::BatchAnnotateImagesRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>* AsyncAsyncBatchAnnotateFilesRaw(::grpc::ClientContext* context, const ::google::cloud::vision::v1p2beta1::AsyncBatchAnnotateFilesRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>* PrepareAsyncAsyncBatchAnnotateFilesRaw(::grpc::ClientContext* context, const ::google::cloud::vision::v1p2beta1::AsyncBatchAnnotateFilesRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_BatchAnnotateImages_;
    const ::grpc::internal::RpcMethod rpcmethod_AsyncBatchAnnotateFiles_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    // Run image detection and annotation for a batch of images.
    virtual ::grpc::Status BatchAnnotateImages(::grpc::ServerContext* context, const ::google::cloud::vision::v1p2beta1::BatchAnnotateImagesRequest* request, ::google::cloud::vision::v1p2beta1::BatchAnnotateImagesResponse* response);
    // Run async image detection and annotation for a list of generic files (e.g.
    // PDF) which may contain multiple pages and multiple images per page.
    // Progress and results can be retrieved through the
    // `google.longrunning.Operations` interface.
    // `Operation.metadata` contains `OperationMetadata` (metadata).
    // `Operation.response` contains `AsyncBatchAnnotateFilesResponse` (results).
    virtual ::grpc::Status AsyncBatchAnnotateFiles(::grpc::ServerContext* context, const ::google::cloud::vision::v1p2beta1::AsyncBatchAnnotateFilesRequest* request, ::google::longrunning::Operation* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_BatchAnnotateImages : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_BatchAnnotateImages() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_BatchAnnotateImages() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status BatchAnnotateImages(::grpc::ServerContext* context, const ::google::cloud::vision::v1p2beta1::BatchAnnotateImagesRequest* request, ::google::cloud::vision::v1p2beta1::BatchAnnotateImagesResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestBatchAnnotateImages(::grpc::ServerContext* context, ::google::cloud::vision::v1p2beta1::BatchAnnotateImagesRequest* request, ::grpc::ServerAsyncResponseWriter< ::google::cloud::vision::v1p2beta1::BatchAnnotateImagesResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_AsyncBatchAnnotateFiles : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_AsyncBatchAnnotateFiles() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_AsyncBatchAnnotateFiles() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status AsyncBatchAnnotateFiles(::grpc::ServerContext* context, const ::google::cloud::vision::v1p2beta1::AsyncBatchAnnotateFilesRequest* request, ::google::longrunning::Operation* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestAsyncBatchAnnotateFiles(::grpc::ServerContext* context, ::google::cloud::vision::v1p2beta1::AsyncBatchAnnotateFilesRequest* request, ::grpc::ServerAsyncResponseWriter< ::google::longrunning::Operation>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_BatchAnnotateImages<WithAsyncMethod_AsyncBatchAnnotateFiles<Service > > AsyncService;
  template <class BaseClass>
  class WithGenericMethod_BatchAnnotateImages : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_BatchAnnotateImages() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_BatchAnnotateImages() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status BatchAnnotateImages(::grpc::ServerContext* context, const ::google::cloud::vision::v1p2beta1::BatchAnnotateImagesRequest* request, ::google::cloud::vision::v1p2beta1::BatchAnnotateImagesResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_AsyncBatchAnnotateFiles : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_AsyncBatchAnnotateFiles() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_AsyncBatchAnnotateFiles() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status AsyncBatchAnnotateFiles(::grpc::ServerContext* context, const ::google::cloud::vision::v1p2beta1::AsyncBatchAnnotateFilesRequest* request, ::google::longrunning::Operation* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_BatchAnnotateImages : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithRawMethod_BatchAnnotateImages() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_BatchAnnotateImages() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status BatchAnnotateImages(::grpc::ServerContext* context, const ::google::cloud::vision::v1p2beta1::BatchAnnotateImagesRequest* request, ::google::cloud::vision::v1p2beta1::BatchAnnotateImagesResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestBatchAnnotateImages(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_AsyncBatchAnnotateFiles : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithRawMethod_AsyncBatchAnnotateFiles() {
      ::grpc::Service::MarkMethodRaw(1);
    }
    ~WithRawMethod_AsyncBatchAnnotateFiles() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status AsyncBatchAnnotateFiles(::grpc::ServerContext* context, const ::google::cloud::vision::v1p2beta1::AsyncBatchAnnotateFilesRequest* request, ::google::longrunning::Operation* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestAsyncBatchAnnotateFiles(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_BatchAnnotateImages : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_BatchAnnotateImages() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler< ::google::cloud::vision::v1p2beta1::BatchAnnotateImagesRequest, ::google::cloud::vision::v1p2beta1::BatchAnnotateImagesResponse>(std::bind(&WithStreamedUnaryMethod_BatchAnnotateImages<BaseClass>::StreamedBatchAnnotateImages, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_BatchAnnotateImages() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status BatchAnnotateImages(::grpc::ServerContext* context, const ::google::cloud::vision::v1p2beta1::BatchAnnotateImagesRequest* request, ::google::cloud::vision::v1p2beta1::BatchAnnotateImagesResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedBatchAnnotateImages(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::google::cloud::vision::v1p2beta1::BatchAnnotateImagesRequest,::google::cloud::vision::v1p2beta1::BatchAnnotateImagesResponse>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_AsyncBatchAnnotateFiles : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_AsyncBatchAnnotateFiles() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::internal::StreamedUnaryHandler< ::google::cloud::vision::v1p2beta1::AsyncBatchAnnotateFilesRequest, ::google::longrunning::Operation>(std::bind(&WithStreamedUnaryMethod_AsyncBatchAnnotateFiles<BaseClass>::StreamedAsyncBatchAnnotateFiles, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_AsyncBatchAnnotateFiles() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status AsyncBatchAnnotateFiles(::grpc::ServerContext* context, const ::google::cloud::vision::v1p2beta1::AsyncBatchAnnotateFilesRequest* request, ::google::longrunning::Operation* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedAsyncBatchAnnotateFiles(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::google::cloud::vision::v1p2beta1::AsyncBatchAnnotateFilesRequest,::google::longrunning::Operation>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_BatchAnnotateImages<WithStreamedUnaryMethod_AsyncBatchAnnotateFiles<Service > > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_BatchAnnotateImages<WithStreamedUnaryMethod_AsyncBatchAnnotateFiles<Service > > StreamedService;
};

}  // namespace v1p2beta1
}  // namespace vision
}  // namespace cloud
}  // namespace google


#endif  // GRPC_google_2fcloud_2fvision_2fv1p2beta1_2fimage_5fannotator_2eproto__INCLUDED
