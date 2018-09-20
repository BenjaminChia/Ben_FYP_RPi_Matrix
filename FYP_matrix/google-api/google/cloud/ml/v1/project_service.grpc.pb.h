// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: google/cloud/ml/v1/project_service.proto
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
#ifndef GRPC_google_2fcloud_2fml_2fv1_2fproject_5fservice_2eproto__INCLUDED
#define GRPC_google_2fcloud_2fml_2fv1_2fproject_5fservice_2eproto__INCLUDED

#include "google/cloud/ml/v1/project_service.pb.h"

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
namespace ml {
namespace v1 {

// Copyright 2017 Google Inc. All Rights Reserved.
//
// Proto file for the Google Cloud Machine Learning Engine.
// Describes the project management service.
//
// Allows retrieving project related information.
class ProjectManagementService final {
 public:
  static constexpr char const* service_full_name() {
    return "google.cloud.ml.v1.ProjectManagementService";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    // Get the service account information associated with your project. You need
    // this information in order to grant the service account persmissions for
    // the Google Cloud Storage location where you put your model training code
    // for training the model with Google Cloud Machine Learning.
    virtual ::grpc::Status GetConfig(::grpc::ClientContext* context, const ::google::cloud::ml::v1::GetConfigRequest& request, ::google::cloud::ml::v1::GetConfigResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::cloud::ml::v1::GetConfigResponse>> AsyncGetConfig(::grpc::ClientContext* context, const ::google::cloud::ml::v1::GetConfigRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::cloud::ml::v1::GetConfigResponse>>(AsyncGetConfigRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::cloud::ml::v1::GetConfigResponse>> PrepareAsyncGetConfig(::grpc::ClientContext* context, const ::google::cloud::ml::v1::GetConfigRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::cloud::ml::v1::GetConfigResponse>>(PrepareAsyncGetConfigRaw(context, request, cq));
    }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::cloud::ml::v1::GetConfigResponse>* AsyncGetConfigRaw(::grpc::ClientContext* context, const ::google::cloud::ml::v1::GetConfigRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::cloud::ml::v1::GetConfigResponse>* PrepareAsyncGetConfigRaw(::grpc::ClientContext* context, const ::google::cloud::ml::v1::GetConfigRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status GetConfig(::grpc::ClientContext* context, const ::google::cloud::ml::v1::GetConfigRequest& request, ::google::cloud::ml::v1::GetConfigResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::cloud::ml::v1::GetConfigResponse>> AsyncGetConfig(::grpc::ClientContext* context, const ::google::cloud::ml::v1::GetConfigRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::cloud::ml::v1::GetConfigResponse>>(AsyncGetConfigRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::cloud::ml::v1::GetConfigResponse>> PrepareAsyncGetConfig(::grpc::ClientContext* context, const ::google::cloud::ml::v1::GetConfigRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::cloud::ml::v1::GetConfigResponse>>(PrepareAsyncGetConfigRaw(context, request, cq));
    }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    ::grpc::ClientAsyncResponseReader< ::google::cloud::ml::v1::GetConfigResponse>* AsyncGetConfigRaw(::grpc::ClientContext* context, const ::google::cloud::ml::v1::GetConfigRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::google::cloud::ml::v1::GetConfigResponse>* PrepareAsyncGetConfigRaw(::grpc::ClientContext* context, const ::google::cloud::ml::v1::GetConfigRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_GetConfig_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    // Get the service account information associated with your project. You need
    // this information in order to grant the service account persmissions for
    // the Google Cloud Storage location where you put your model training code
    // for training the model with Google Cloud Machine Learning.
    virtual ::grpc::Status GetConfig(::grpc::ServerContext* context, const ::google::cloud::ml::v1::GetConfigRequest* request, ::google::cloud::ml::v1::GetConfigResponse* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_GetConfig : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_GetConfig() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_GetConfig() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetConfig(::grpc::ServerContext* context, const ::google::cloud::ml::v1::GetConfigRequest* request, ::google::cloud::ml::v1::GetConfigResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetConfig(::grpc::ServerContext* context, ::google::cloud::ml::v1::GetConfigRequest* request, ::grpc::ServerAsyncResponseWriter< ::google::cloud::ml::v1::GetConfigResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_GetConfig<Service > AsyncService;
  template <class BaseClass>
  class WithGenericMethod_GetConfig : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_GetConfig() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_GetConfig() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetConfig(::grpc::ServerContext* context, const ::google::cloud::ml::v1::GetConfigRequest* request, ::google::cloud::ml::v1::GetConfigResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_GetConfig : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithRawMethod_GetConfig() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_GetConfig() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetConfig(::grpc::ServerContext* context, const ::google::cloud::ml::v1::GetConfigRequest* request, ::google::cloud::ml::v1::GetConfigResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetConfig(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_GetConfig : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_GetConfig() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler< ::google::cloud::ml::v1::GetConfigRequest, ::google::cloud::ml::v1::GetConfigResponse>(std::bind(&WithStreamedUnaryMethod_GetConfig<BaseClass>::StreamedGetConfig, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_GetConfig() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status GetConfig(::grpc::ServerContext* context, const ::google::cloud::ml::v1::GetConfigRequest* request, ::google::cloud::ml::v1::GetConfigResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedGetConfig(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::google::cloud::ml::v1::GetConfigRequest,::google::cloud::ml::v1::GetConfigResponse>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_GetConfig<Service > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_GetConfig<Service > StreamedService;
};

}  // namespace v1
}  // namespace ml
}  // namespace cloud
}  // namespace google


#endif  // GRPC_google_2fcloud_2fml_2fv1_2fproject_5fservice_2eproto__INCLUDED
