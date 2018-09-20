// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: google/ads/googleads/v0/services/ad_group_criterion_service.proto
// Original file comments:
// Copyright 2018 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or
// implied. See the License for the specific language governing
// permissions and limitations under the License.
//
// Proto file describing the Ad Group Criterion service.
#ifndef GRPC_google_2fads_2fgoogleads_2fv0_2fservices_2fad_5fgroup_5fcriterion_5fservice_2eproto__INCLUDED
#define GRPC_google_2fads_2fgoogleads_2fv0_2fservices_2fad_5fgroup_5fcriterion_5fservice_2eproto__INCLUDED

#include "google/ads/googleads/v0/services/ad_group_criterion_service.pb.h"

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
namespace ads {
namespace googleads {
namespace v0 {
namespace services {

// Service to manage ad group criteria.
class AdGroupCriterionService final {
 public:
  static constexpr char const* service_full_name() {
    return "google.ads.googleads.v0.services.AdGroupCriterionService";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    // Returns the requested criterion in full detail.
    virtual ::grpc::Status GetAdGroupCriterion(::grpc::ClientContext* context, const ::google::ads::googleads::v0::services::GetAdGroupCriterionRequest& request, ::google::ads::googleads::v0::resources::AdGroupCriterion* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::ads::googleads::v0::resources::AdGroupCriterion>> AsyncGetAdGroupCriterion(::grpc::ClientContext* context, const ::google::ads::googleads::v0::services::GetAdGroupCriterionRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::ads::googleads::v0::resources::AdGroupCriterion>>(AsyncGetAdGroupCriterionRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::ads::googleads::v0::resources::AdGroupCriterion>> PrepareAsyncGetAdGroupCriterion(::grpc::ClientContext* context, const ::google::ads::googleads::v0::services::GetAdGroupCriterionRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::ads::googleads::v0::resources::AdGroupCriterion>>(PrepareAsyncGetAdGroupCriterionRaw(context, request, cq));
    }
    // Creates, updates, or removes criteria. Operation statuses are returned.
    virtual ::grpc::Status MutateAdGroupCriteria(::grpc::ClientContext* context, const ::google::ads::googleads::v0::services::MutateAdGroupCriteriaRequest& request, ::google::ads::googleads::v0::services::MutateAdGroupCriteriaResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::ads::googleads::v0::services::MutateAdGroupCriteriaResponse>> AsyncMutateAdGroupCriteria(::grpc::ClientContext* context, const ::google::ads::googleads::v0::services::MutateAdGroupCriteriaRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::ads::googleads::v0::services::MutateAdGroupCriteriaResponse>>(AsyncMutateAdGroupCriteriaRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::ads::googleads::v0::services::MutateAdGroupCriteriaResponse>> PrepareAsyncMutateAdGroupCriteria(::grpc::ClientContext* context, const ::google::ads::googleads::v0::services::MutateAdGroupCriteriaRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::ads::googleads::v0::services::MutateAdGroupCriteriaResponse>>(PrepareAsyncMutateAdGroupCriteriaRaw(context, request, cq));
    }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::ads::googleads::v0::resources::AdGroupCriterion>* AsyncGetAdGroupCriterionRaw(::grpc::ClientContext* context, const ::google::ads::googleads::v0::services::GetAdGroupCriterionRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::ads::googleads::v0::resources::AdGroupCriterion>* PrepareAsyncGetAdGroupCriterionRaw(::grpc::ClientContext* context, const ::google::ads::googleads::v0::services::GetAdGroupCriterionRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::ads::googleads::v0::services::MutateAdGroupCriteriaResponse>* AsyncMutateAdGroupCriteriaRaw(::grpc::ClientContext* context, const ::google::ads::googleads::v0::services::MutateAdGroupCriteriaRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::ads::googleads::v0::services::MutateAdGroupCriteriaResponse>* PrepareAsyncMutateAdGroupCriteriaRaw(::grpc::ClientContext* context, const ::google::ads::googleads::v0::services::MutateAdGroupCriteriaRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status GetAdGroupCriterion(::grpc::ClientContext* context, const ::google::ads::googleads::v0::services::GetAdGroupCriterionRequest& request, ::google::ads::googleads::v0::resources::AdGroupCriterion* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::ads::googleads::v0::resources::AdGroupCriterion>> AsyncGetAdGroupCriterion(::grpc::ClientContext* context, const ::google::ads::googleads::v0::services::GetAdGroupCriterionRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::ads::googleads::v0::resources::AdGroupCriterion>>(AsyncGetAdGroupCriterionRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::ads::googleads::v0::resources::AdGroupCriterion>> PrepareAsyncGetAdGroupCriterion(::grpc::ClientContext* context, const ::google::ads::googleads::v0::services::GetAdGroupCriterionRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::ads::googleads::v0::resources::AdGroupCriterion>>(PrepareAsyncGetAdGroupCriterionRaw(context, request, cq));
    }
    ::grpc::Status MutateAdGroupCriteria(::grpc::ClientContext* context, const ::google::ads::googleads::v0::services::MutateAdGroupCriteriaRequest& request, ::google::ads::googleads::v0::services::MutateAdGroupCriteriaResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::ads::googleads::v0::services::MutateAdGroupCriteriaResponse>> AsyncMutateAdGroupCriteria(::grpc::ClientContext* context, const ::google::ads::googleads::v0::services::MutateAdGroupCriteriaRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::ads::googleads::v0::services::MutateAdGroupCriteriaResponse>>(AsyncMutateAdGroupCriteriaRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::ads::googleads::v0::services::MutateAdGroupCriteriaResponse>> PrepareAsyncMutateAdGroupCriteria(::grpc::ClientContext* context, const ::google::ads::googleads::v0::services::MutateAdGroupCriteriaRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::ads::googleads::v0::services::MutateAdGroupCriteriaResponse>>(PrepareAsyncMutateAdGroupCriteriaRaw(context, request, cq));
    }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    ::grpc::ClientAsyncResponseReader< ::google::ads::googleads::v0::resources::AdGroupCriterion>* AsyncGetAdGroupCriterionRaw(::grpc::ClientContext* context, const ::google::ads::googleads::v0::services::GetAdGroupCriterionRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::google::ads::googleads::v0::resources::AdGroupCriterion>* PrepareAsyncGetAdGroupCriterionRaw(::grpc::ClientContext* context, const ::google::ads::googleads::v0::services::GetAdGroupCriterionRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::google::ads::googleads::v0::services::MutateAdGroupCriteriaResponse>* AsyncMutateAdGroupCriteriaRaw(::grpc::ClientContext* context, const ::google::ads::googleads::v0::services::MutateAdGroupCriteriaRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::google::ads::googleads::v0::services::MutateAdGroupCriteriaResponse>* PrepareAsyncMutateAdGroupCriteriaRaw(::grpc::ClientContext* context, const ::google::ads::googleads::v0::services::MutateAdGroupCriteriaRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_GetAdGroupCriterion_;
    const ::grpc::internal::RpcMethod rpcmethod_MutateAdGroupCriteria_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    // Returns the requested criterion in full detail.
    virtual ::grpc::Status GetAdGroupCriterion(::grpc::ServerContext* context, const ::google::ads::googleads::v0::services::GetAdGroupCriterionRequest* request, ::google::ads::googleads::v0::resources::AdGroupCriterion* response);
    // Creates, updates, or removes criteria. Operation statuses are returned.
    virtual ::grpc::Status MutateAdGroupCriteria(::grpc::ServerContext* context, const ::google::ads::googleads::v0::services::MutateAdGroupCriteriaRequest* request, ::google::ads::googleads::v0::services::MutateAdGroupCriteriaResponse* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_GetAdGroupCriterion : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_GetAdGroupCriterion() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_GetAdGroupCriterion() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetAdGroupCriterion(::grpc::ServerContext* context, const ::google::ads::googleads::v0::services::GetAdGroupCriterionRequest* request, ::google::ads::googleads::v0::resources::AdGroupCriterion* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetAdGroupCriterion(::grpc::ServerContext* context, ::google::ads::googleads::v0::services::GetAdGroupCriterionRequest* request, ::grpc::ServerAsyncResponseWriter< ::google::ads::googleads::v0::resources::AdGroupCriterion>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_MutateAdGroupCriteria : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_MutateAdGroupCriteria() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_MutateAdGroupCriteria() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status MutateAdGroupCriteria(::grpc::ServerContext* context, const ::google::ads::googleads::v0::services::MutateAdGroupCriteriaRequest* request, ::google::ads::googleads::v0::services::MutateAdGroupCriteriaResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestMutateAdGroupCriteria(::grpc::ServerContext* context, ::google::ads::googleads::v0::services::MutateAdGroupCriteriaRequest* request, ::grpc::ServerAsyncResponseWriter< ::google::ads::googleads::v0::services::MutateAdGroupCriteriaResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_GetAdGroupCriterion<WithAsyncMethod_MutateAdGroupCriteria<Service > > AsyncService;
  template <class BaseClass>
  class WithGenericMethod_GetAdGroupCriterion : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_GetAdGroupCriterion() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_GetAdGroupCriterion() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetAdGroupCriterion(::grpc::ServerContext* context, const ::google::ads::googleads::v0::services::GetAdGroupCriterionRequest* request, ::google::ads::googleads::v0::resources::AdGroupCriterion* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_MutateAdGroupCriteria : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_MutateAdGroupCriteria() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_MutateAdGroupCriteria() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status MutateAdGroupCriteria(::grpc::ServerContext* context, const ::google::ads::googleads::v0::services::MutateAdGroupCriteriaRequest* request, ::google::ads::googleads::v0::services::MutateAdGroupCriteriaResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_GetAdGroupCriterion : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithRawMethod_GetAdGroupCriterion() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_GetAdGroupCriterion() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetAdGroupCriterion(::grpc::ServerContext* context, const ::google::ads::googleads::v0::services::GetAdGroupCriterionRequest* request, ::google::ads::googleads::v0::resources::AdGroupCriterion* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetAdGroupCriterion(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_MutateAdGroupCriteria : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithRawMethod_MutateAdGroupCriteria() {
      ::grpc::Service::MarkMethodRaw(1);
    }
    ~WithRawMethod_MutateAdGroupCriteria() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status MutateAdGroupCriteria(::grpc::ServerContext* context, const ::google::ads::googleads::v0::services::MutateAdGroupCriteriaRequest* request, ::google::ads::googleads::v0::services::MutateAdGroupCriteriaResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestMutateAdGroupCriteria(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_GetAdGroupCriterion : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_GetAdGroupCriterion() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler< ::google::ads::googleads::v0::services::GetAdGroupCriterionRequest, ::google::ads::googleads::v0::resources::AdGroupCriterion>(std::bind(&WithStreamedUnaryMethod_GetAdGroupCriterion<BaseClass>::StreamedGetAdGroupCriterion, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_GetAdGroupCriterion() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status GetAdGroupCriterion(::grpc::ServerContext* context, const ::google::ads::googleads::v0::services::GetAdGroupCriterionRequest* request, ::google::ads::googleads::v0::resources::AdGroupCriterion* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedGetAdGroupCriterion(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::google::ads::googleads::v0::services::GetAdGroupCriterionRequest,::google::ads::googleads::v0::resources::AdGroupCriterion>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_MutateAdGroupCriteria : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_MutateAdGroupCriteria() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::internal::StreamedUnaryHandler< ::google::ads::googleads::v0::services::MutateAdGroupCriteriaRequest, ::google::ads::googleads::v0::services::MutateAdGroupCriteriaResponse>(std::bind(&WithStreamedUnaryMethod_MutateAdGroupCriteria<BaseClass>::StreamedMutateAdGroupCriteria, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_MutateAdGroupCriteria() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status MutateAdGroupCriteria(::grpc::ServerContext* context, const ::google::ads::googleads::v0::services::MutateAdGroupCriteriaRequest* request, ::google::ads::googleads::v0::services::MutateAdGroupCriteriaResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedMutateAdGroupCriteria(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::google::ads::googleads::v0::services::MutateAdGroupCriteriaRequest,::google::ads::googleads::v0::services::MutateAdGroupCriteriaResponse>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_GetAdGroupCriterion<WithStreamedUnaryMethod_MutateAdGroupCriteria<Service > > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_GetAdGroupCriterion<WithStreamedUnaryMethod_MutateAdGroupCriteria<Service > > StreamedService;
};

}  // namespace services
}  // namespace v0
}  // namespace googleads
}  // namespace ads
}  // namespace google


#endif  // GRPC_google_2fads_2fgoogleads_2fv0_2fservices_2fad_5fgroup_5fcriterion_5fservice_2eproto__INCLUDED