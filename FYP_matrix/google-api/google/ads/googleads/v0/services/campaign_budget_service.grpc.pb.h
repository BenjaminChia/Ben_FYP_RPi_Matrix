// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: google/ads/googleads/v0/services/campaign_budget_service.proto
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
// Proto file describing the Campaign Budget service.
#ifndef GRPC_google_2fads_2fgoogleads_2fv0_2fservices_2fcampaign_5fbudget_5fservice_2eproto__INCLUDED
#define GRPC_google_2fads_2fgoogleads_2fv0_2fservices_2fcampaign_5fbudget_5fservice_2eproto__INCLUDED

#include "google/ads/googleads/v0/services/campaign_budget_service.pb.h"

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

// Service to manage campaign budgets.
class CampaignBudgetService final {
 public:
  static constexpr char const* service_full_name() {
    return "google.ads.googleads.v0.services.CampaignBudgetService";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    // Returns the requested Campaign Budget in full detail.
    virtual ::grpc::Status GetCampaignBudget(::grpc::ClientContext* context, const ::google::ads::googleads::v0::services::GetCampaignBudgetRequest& request, ::google::ads::googleads::v0::resources::CampaignBudget* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::ads::googleads::v0::resources::CampaignBudget>> AsyncGetCampaignBudget(::grpc::ClientContext* context, const ::google::ads::googleads::v0::services::GetCampaignBudgetRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::ads::googleads::v0::resources::CampaignBudget>>(AsyncGetCampaignBudgetRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::ads::googleads::v0::resources::CampaignBudget>> PrepareAsyncGetCampaignBudget(::grpc::ClientContext* context, const ::google::ads::googleads::v0::services::GetCampaignBudgetRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::ads::googleads::v0::resources::CampaignBudget>>(PrepareAsyncGetCampaignBudgetRaw(context, request, cq));
    }
    // Creates, updates, or removes campaign budgets. Operation statuses are
    // returned.
    virtual ::grpc::Status MutateCampaignBudgets(::grpc::ClientContext* context, const ::google::ads::googleads::v0::services::MutateCampaignBudgetsRequest& request, ::google::ads::googleads::v0::services::MutateCampaignBudgetsResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::ads::googleads::v0::services::MutateCampaignBudgetsResponse>> AsyncMutateCampaignBudgets(::grpc::ClientContext* context, const ::google::ads::googleads::v0::services::MutateCampaignBudgetsRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::ads::googleads::v0::services::MutateCampaignBudgetsResponse>>(AsyncMutateCampaignBudgetsRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::ads::googleads::v0::services::MutateCampaignBudgetsResponse>> PrepareAsyncMutateCampaignBudgets(::grpc::ClientContext* context, const ::google::ads::googleads::v0::services::MutateCampaignBudgetsRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::ads::googleads::v0::services::MutateCampaignBudgetsResponse>>(PrepareAsyncMutateCampaignBudgetsRaw(context, request, cq));
    }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::ads::googleads::v0::resources::CampaignBudget>* AsyncGetCampaignBudgetRaw(::grpc::ClientContext* context, const ::google::ads::googleads::v0::services::GetCampaignBudgetRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::ads::googleads::v0::resources::CampaignBudget>* PrepareAsyncGetCampaignBudgetRaw(::grpc::ClientContext* context, const ::google::ads::googleads::v0::services::GetCampaignBudgetRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::ads::googleads::v0::services::MutateCampaignBudgetsResponse>* AsyncMutateCampaignBudgetsRaw(::grpc::ClientContext* context, const ::google::ads::googleads::v0::services::MutateCampaignBudgetsRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::ads::googleads::v0::services::MutateCampaignBudgetsResponse>* PrepareAsyncMutateCampaignBudgetsRaw(::grpc::ClientContext* context, const ::google::ads::googleads::v0::services::MutateCampaignBudgetsRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status GetCampaignBudget(::grpc::ClientContext* context, const ::google::ads::googleads::v0::services::GetCampaignBudgetRequest& request, ::google::ads::googleads::v0::resources::CampaignBudget* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::ads::googleads::v0::resources::CampaignBudget>> AsyncGetCampaignBudget(::grpc::ClientContext* context, const ::google::ads::googleads::v0::services::GetCampaignBudgetRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::ads::googleads::v0::resources::CampaignBudget>>(AsyncGetCampaignBudgetRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::ads::googleads::v0::resources::CampaignBudget>> PrepareAsyncGetCampaignBudget(::grpc::ClientContext* context, const ::google::ads::googleads::v0::services::GetCampaignBudgetRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::ads::googleads::v0::resources::CampaignBudget>>(PrepareAsyncGetCampaignBudgetRaw(context, request, cq));
    }
    ::grpc::Status MutateCampaignBudgets(::grpc::ClientContext* context, const ::google::ads::googleads::v0::services::MutateCampaignBudgetsRequest& request, ::google::ads::googleads::v0::services::MutateCampaignBudgetsResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::ads::googleads::v0::services::MutateCampaignBudgetsResponse>> AsyncMutateCampaignBudgets(::grpc::ClientContext* context, const ::google::ads::googleads::v0::services::MutateCampaignBudgetsRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::ads::googleads::v0::services::MutateCampaignBudgetsResponse>>(AsyncMutateCampaignBudgetsRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::ads::googleads::v0::services::MutateCampaignBudgetsResponse>> PrepareAsyncMutateCampaignBudgets(::grpc::ClientContext* context, const ::google::ads::googleads::v0::services::MutateCampaignBudgetsRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::ads::googleads::v0::services::MutateCampaignBudgetsResponse>>(PrepareAsyncMutateCampaignBudgetsRaw(context, request, cq));
    }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    ::grpc::ClientAsyncResponseReader< ::google::ads::googleads::v0::resources::CampaignBudget>* AsyncGetCampaignBudgetRaw(::grpc::ClientContext* context, const ::google::ads::googleads::v0::services::GetCampaignBudgetRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::google::ads::googleads::v0::resources::CampaignBudget>* PrepareAsyncGetCampaignBudgetRaw(::grpc::ClientContext* context, const ::google::ads::googleads::v0::services::GetCampaignBudgetRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::google::ads::googleads::v0::services::MutateCampaignBudgetsResponse>* AsyncMutateCampaignBudgetsRaw(::grpc::ClientContext* context, const ::google::ads::googleads::v0::services::MutateCampaignBudgetsRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::google::ads::googleads::v0::services::MutateCampaignBudgetsResponse>* PrepareAsyncMutateCampaignBudgetsRaw(::grpc::ClientContext* context, const ::google::ads::googleads::v0::services::MutateCampaignBudgetsRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_GetCampaignBudget_;
    const ::grpc::internal::RpcMethod rpcmethod_MutateCampaignBudgets_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    // Returns the requested Campaign Budget in full detail.
    virtual ::grpc::Status GetCampaignBudget(::grpc::ServerContext* context, const ::google::ads::googleads::v0::services::GetCampaignBudgetRequest* request, ::google::ads::googleads::v0::resources::CampaignBudget* response);
    // Creates, updates, or removes campaign budgets. Operation statuses are
    // returned.
    virtual ::grpc::Status MutateCampaignBudgets(::grpc::ServerContext* context, const ::google::ads::googleads::v0::services::MutateCampaignBudgetsRequest* request, ::google::ads::googleads::v0::services::MutateCampaignBudgetsResponse* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_GetCampaignBudget : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_GetCampaignBudget() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_GetCampaignBudget() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetCampaignBudget(::grpc::ServerContext* context, const ::google::ads::googleads::v0::services::GetCampaignBudgetRequest* request, ::google::ads::googleads::v0::resources::CampaignBudget* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetCampaignBudget(::grpc::ServerContext* context, ::google::ads::googleads::v0::services::GetCampaignBudgetRequest* request, ::grpc::ServerAsyncResponseWriter< ::google::ads::googleads::v0::resources::CampaignBudget>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_MutateCampaignBudgets : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_MutateCampaignBudgets() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_MutateCampaignBudgets() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status MutateCampaignBudgets(::grpc::ServerContext* context, const ::google::ads::googleads::v0::services::MutateCampaignBudgetsRequest* request, ::google::ads::googleads::v0::services::MutateCampaignBudgetsResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestMutateCampaignBudgets(::grpc::ServerContext* context, ::google::ads::googleads::v0::services::MutateCampaignBudgetsRequest* request, ::grpc::ServerAsyncResponseWriter< ::google::ads::googleads::v0::services::MutateCampaignBudgetsResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_GetCampaignBudget<WithAsyncMethod_MutateCampaignBudgets<Service > > AsyncService;
  template <class BaseClass>
  class WithGenericMethod_GetCampaignBudget : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_GetCampaignBudget() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_GetCampaignBudget() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetCampaignBudget(::grpc::ServerContext* context, const ::google::ads::googleads::v0::services::GetCampaignBudgetRequest* request, ::google::ads::googleads::v0::resources::CampaignBudget* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_MutateCampaignBudgets : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_MutateCampaignBudgets() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_MutateCampaignBudgets() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status MutateCampaignBudgets(::grpc::ServerContext* context, const ::google::ads::googleads::v0::services::MutateCampaignBudgetsRequest* request, ::google::ads::googleads::v0::services::MutateCampaignBudgetsResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_GetCampaignBudget : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithRawMethod_GetCampaignBudget() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_GetCampaignBudget() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetCampaignBudget(::grpc::ServerContext* context, const ::google::ads::googleads::v0::services::GetCampaignBudgetRequest* request, ::google::ads::googleads::v0::resources::CampaignBudget* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetCampaignBudget(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_MutateCampaignBudgets : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithRawMethod_MutateCampaignBudgets() {
      ::grpc::Service::MarkMethodRaw(1);
    }
    ~WithRawMethod_MutateCampaignBudgets() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status MutateCampaignBudgets(::grpc::ServerContext* context, const ::google::ads::googleads::v0::services::MutateCampaignBudgetsRequest* request, ::google::ads::googleads::v0::services::MutateCampaignBudgetsResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestMutateCampaignBudgets(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_GetCampaignBudget : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_GetCampaignBudget() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler< ::google::ads::googleads::v0::services::GetCampaignBudgetRequest, ::google::ads::googleads::v0::resources::CampaignBudget>(std::bind(&WithStreamedUnaryMethod_GetCampaignBudget<BaseClass>::StreamedGetCampaignBudget, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_GetCampaignBudget() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status GetCampaignBudget(::grpc::ServerContext* context, const ::google::ads::googleads::v0::services::GetCampaignBudgetRequest* request, ::google::ads::googleads::v0::resources::CampaignBudget* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedGetCampaignBudget(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::google::ads::googleads::v0::services::GetCampaignBudgetRequest,::google::ads::googleads::v0::resources::CampaignBudget>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_MutateCampaignBudgets : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_MutateCampaignBudgets() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::internal::StreamedUnaryHandler< ::google::ads::googleads::v0::services::MutateCampaignBudgetsRequest, ::google::ads::googleads::v0::services::MutateCampaignBudgetsResponse>(std::bind(&WithStreamedUnaryMethod_MutateCampaignBudgets<BaseClass>::StreamedMutateCampaignBudgets, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_MutateCampaignBudgets() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status MutateCampaignBudgets(::grpc::ServerContext* context, const ::google::ads::googleads::v0::services::MutateCampaignBudgetsRequest* request, ::google::ads::googleads::v0::services::MutateCampaignBudgetsResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedMutateCampaignBudgets(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::google::ads::googleads::v0::services::MutateCampaignBudgetsRequest,::google::ads::googleads::v0::services::MutateCampaignBudgetsResponse>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_GetCampaignBudget<WithStreamedUnaryMethod_MutateCampaignBudgets<Service > > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_GetCampaignBudget<WithStreamedUnaryMethod_MutateCampaignBudgets<Service > > StreamedService;
};

}  // namespace services
}  // namespace v0
}  // namespace googleads
}  // namespace ads
}  // namespace google


#endif  // GRPC_google_2fads_2fgoogleads_2fv0_2fservices_2fcampaign_5fbudget_5fservice_2eproto__INCLUDED
