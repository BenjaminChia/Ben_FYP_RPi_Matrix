// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: google/ads/googleads/v0/services/customer_service.proto
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
// Proto file describing the Customer service.
#ifndef GRPC_google_2fads_2fgoogleads_2fv0_2fservices_2fcustomer_5fservice_2eproto__INCLUDED
#define GRPC_google_2fads_2fgoogleads_2fv0_2fservices_2fcustomer_5fservice_2eproto__INCLUDED

#include "google/ads/googleads/v0/services/customer_service.pb.h"

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

// Service to manage customers.
class CustomerService final {
 public:
  static constexpr char const* service_full_name() {
    return "google.ads.googleads.v0.services.CustomerService";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    // Returns the requested customer in full detail.
    virtual ::grpc::Status GetCustomer(::grpc::ClientContext* context, const ::google::ads::googleads::v0::services::GetCustomerRequest& request, ::google::ads::googleads::v0::resources::Customer* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::ads::googleads::v0::resources::Customer>> AsyncGetCustomer(::grpc::ClientContext* context, const ::google::ads::googleads::v0::services::GetCustomerRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::ads::googleads::v0::resources::Customer>>(AsyncGetCustomerRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::ads::googleads::v0::resources::Customer>> PrepareAsyncGetCustomer(::grpc::ClientContext* context, const ::google::ads::googleads::v0::services::GetCustomerRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::ads::googleads::v0::resources::Customer>>(PrepareAsyncGetCustomerRaw(context, request, cq));
    }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::ads::googleads::v0::resources::Customer>* AsyncGetCustomerRaw(::grpc::ClientContext* context, const ::google::ads::googleads::v0::services::GetCustomerRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::ads::googleads::v0::resources::Customer>* PrepareAsyncGetCustomerRaw(::grpc::ClientContext* context, const ::google::ads::googleads::v0::services::GetCustomerRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status GetCustomer(::grpc::ClientContext* context, const ::google::ads::googleads::v0::services::GetCustomerRequest& request, ::google::ads::googleads::v0::resources::Customer* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::ads::googleads::v0::resources::Customer>> AsyncGetCustomer(::grpc::ClientContext* context, const ::google::ads::googleads::v0::services::GetCustomerRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::ads::googleads::v0::resources::Customer>>(AsyncGetCustomerRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::ads::googleads::v0::resources::Customer>> PrepareAsyncGetCustomer(::grpc::ClientContext* context, const ::google::ads::googleads::v0::services::GetCustomerRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::ads::googleads::v0::resources::Customer>>(PrepareAsyncGetCustomerRaw(context, request, cq));
    }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    ::grpc::ClientAsyncResponseReader< ::google::ads::googleads::v0::resources::Customer>* AsyncGetCustomerRaw(::grpc::ClientContext* context, const ::google::ads::googleads::v0::services::GetCustomerRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::google::ads::googleads::v0::resources::Customer>* PrepareAsyncGetCustomerRaw(::grpc::ClientContext* context, const ::google::ads::googleads::v0::services::GetCustomerRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_GetCustomer_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    // Returns the requested customer in full detail.
    virtual ::grpc::Status GetCustomer(::grpc::ServerContext* context, const ::google::ads::googleads::v0::services::GetCustomerRequest* request, ::google::ads::googleads::v0::resources::Customer* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_GetCustomer : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_GetCustomer() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_GetCustomer() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetCustomer(::grpc::ServerContext* context, const ::google::ads::googleads::v0::services::GetCustomerRequest* request, ::google::ads::googleads::v0::resources::Customer* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetCustomer(::grpc::ServerContext* context, ::google::ads::googleads::v0::services::GetCustomerRequest* request, ::grpc::ServerAsyncResponseWriter< ::google::ads::googleads::v0::resources::Customer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_GetCustomer<Service > AsyncService;
  template <class BaseClass>
  class WithGenericMethod_GetCustomer : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_GetCustomer() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_GetCustomer() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetCustomer(::grpc::ServerContext* context, const ::google::ads::googleads::v0::services::GetCustomerRequest* request, ::google::ads::googleads::v0::resources::Customer* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_GetCustomer : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithRawMethod_GetCustomer() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_GetCustomer() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetCustomer(::grpc::ServerContext* context, const ::google::ads::googleads::v0::services::GetCustomerRequest* request, ::google::ads::googleads::v0::resources::Customer* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetCustomer(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_GetCustomer : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_GetCustomer() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler< ::google::ads::googleads::v0::services::GetCustomerRequest, ::google::ads::googleads::v0::resources::Customer>(std::bind(&WithStreamedUnaryMethod_GetCustomer<BaseClass>::StreamedGetCustomer, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_GetCustomer() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status GetCustomer(::grpc::ServerContext* context, const ::google::ads::googleads::v0::services::GetCustomerRequest* request, ::google::ads::googleads::v0::resources::Customer* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedGetCustomer(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::google::ads::googleads::v0::services::GetCustomerRequest,::google::ads::googleads::v0::resources::Customer>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_GetCustomer<Service > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_GetCustomer<Service > StreamedService;
};

}  // namespace services
}  // namespace v0
}  // namespace googleads
}  // namespace ads
}  // namespace google


#endif  // GRPC_google_2fads_2fgoogleads_2fv0_2fservices_2fcustomer_5fservice_2eproto__INCLUDED
