// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: google/devtools/remoteworkers/v1test2/bots.proto
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
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
#ifndef GRPC_google_2fdevtools_2fremoteworkers_2fv1test2_2fbots_2eproto__INCLUDED
#define GRPC_google_2fdevtools_2fremoteworkers_2fv1test2_2fbots_2eproto__INCLUDED

#include "google/devtools/remoteworkers/v1test2/bots.pb.h"

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
namespace devtools {
namespace remoteworkers {
namespace v1test2 {

// Design doc: https://goo.gl/oojM5H
//
// Loosely speaking, the Bots interface monitors a collection of workers (think
// of them as "computers" for a moment). This collection is known as a "farm,"
// and its purpose is to perform work on behalf of a client.
//
// Each worker runs a small program known as a "bot" that allows it to be
// controlled by the server. This interface contains only methods that are
// called by the bots themselves; admin functionality is out of scope for this
// interface.
//
// More precisely, we use the term "worker" to refer to the physical "thing"
// running the bot. We use the term "worker," and not "machine" or "computer,"
// since a worker may consist of more than one machine - e.g., a computer with
// multiple attached devices, or even a cluster of computers, with only one of
// them running the bot. Conversely, a single machine may host several bots, in
// which case each bot has a "worker" corresponding to the slice of the machine
// being managed by that bot.
//
// The main resource in the Bots interface is not, surprisingly, a Bot - it is a
// BotSession, which represents a period of time in which a bot is in continuous
// contact with the server (see the BotSession message for more information).
// The parent of a bot session can be thought of as an instance of a farm. That
// is, one endpoint may be able to manage many farms for many users. For
// example, for a farm managed through GCP, the parent resource will typically
// take the form "projects/{project_id}". This is referred to below as "the farm
// resource."
class Bots final {
 public:
  static constexpr char const* service_full_name() {
    return "google.devtools.remoteworkers.v1test2.Bots";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    // CreateBotSession is called when the bot first joins the farm, and
    // establishes a session ID to ensure that multiple machines do not register
    // using the same name accidentally.
    virtual ::grpc::Status CreateBotSession(::grpc::ClientContext* context, const ::google::devtools::remoteworkers::v1test2::CreateBotSessionRequest& request, ::google::devtools::remoteworkers::v1test2::BotSession* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::devtools::remoteworkers::v1test2::BotSession>> AsyncCreateBotSession(::grpc::ClientContext* context, const ::google::devtools::remoteworkers::v1test2::CreateBotSessionRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::devtools::remoteworkers::v1test2::BotSession>>(AsyncCreateBotSessionRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::devtools::remoteworkers::v1test2::BotSession>> PrepareAsyncCreateBotSession(::grpc::ClientContext* context, const ::google::devtools::remoteworkers::v1test2::CreateBotSessionRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::devtools::remoteworkers::v1test2::BotSession>>(PrepareAsyncCreateBotSessionRaw(context, request, cq));
    }
    // UpdateBotSession must be called periodically by the bot (on a schedule
    // determined by the server) to let the server know about its status, and to
    // pick up new lease requests from the server.
    virtual ::grpc::Status UpdateBotSession(::grpc::ClientContext* context, const ::google::devtools::remoteworkers::v1test2::UpdateBotSessionRequest& request, ::google::devtools::remoteworkers::v1test2::BotSession* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::devtools::remoteworkers::v1test2::BotSession>> AsyncUpdateBotSession(::grpc::ClientContext* context, const ::google::devtools::remoteworkers::v1test2::UpdateBotSessionRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::devtools::remoteworkers::v1test2::BotSession>>(AsyncUpdateBotSessionRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::devtools::remoteworkers::v1test2::BotSession>> PrepareAsyncUpdateBotSession(::grpc::ClientContext* context, const ::google::devtools::remoteworkers::v1test2::UpdateBotSessionRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::devtools::remoteworkers::v1test2::BotSession>>(PrepareAsyncUpdateBotSessionRaw(context, request, cq));
    }
    // PostBotEventTemp may be called by the bot to indicate that some exceptional
    // event has occurred. This method is subject to change or removal in future
    // revisions of this API; we may simply want to replace it with StackDriver or
    // some other common interface.
    virtual ::grpc::Status PostBotEventTemp(::grpc::ClientContext* context, const ::google::devtools::remoteworkers::v1test2::PostBotEventTempRequest& request, ::google::protobuf::Empty* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::protobuf::Empty>> AsyncPostBotEventTemp(::grpc::ClientContext* context, const ::google::devtools::remoteworkers::v1test2::PostBotEventTempRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::protobuf::Empty>>(AsyncPostBotEventTempRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::protobuf::Empty>> PrepareAsyncPostBotEventTemp(::grpc::ClientContext* context, const ::google::devtools::remoteworkers::v1test2::PostBotEventTempRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::protobuf::Empty>>(PrepareAsyncPostBotEventTempRaw(context, request, cq));
    }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::devtools::remoteworkers::v1test2::BotSession>* AsyncCreateBotSessionRaw(::grpc::ClientContext* context, const ::google::devtools::remoteworkers::v1test2::CreateBotSessionRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::devtools::remoteworkers::v1test2::BotSession>* PrepareAsyncCreateBotSessionRaw(::grpc::ClientContext* context, const ::google::devtools::remoteworkers::v1test2::CreateBotSessionRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::devtools::remoteworkers::v1test2::BotSession>* AsyncUpdateBotSessionRaw(::grpc::ClientContext* context, const ::google::devtools::remoteworkers::v1test2::UpdateBotSessionRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::devtools::remoteworkers::v1test2::BotSession>* PrepareAsyncUpdateBotSessionRaw(::grpc::ClientContext* context, const ::google::devtools::remoteworkers::v1test2::UpdateBotSessionRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::protobuf::Empty>* AsyncPostBotEventTempRaw(::grpc::ClientContext* context, const ::google::devtools::remoteworkers::v1test2::PostBotEventTempRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::protobuf::Empty>* PrepareAsyncPostBotEventTempRaw(::grpc::ClientContext* context, const ::google::devtools::remoteworkers::v1test2::PostBotEventTempRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status CreateBotSession(::grpc::ClientContext* context, const ::google::devtools::remoteworkers::v1test2::CreateBotSessionRequest& request, ::google::devtools::remoteworkers::v1test2::BotSession* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::devtools::remoteworkers::v1test2::BotSession>> AsyncCreateBotSession(::grpc::ClientContext* context, const ::google::devtools::remoteworkers::v1test2::CreateBotSessionRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::devtools::remoteworkers::v1test2::BotSession>>(AsyncCreateBotSessionRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::devtools::remoteworkers::v1test2::BotSession>> PrepareAsyncCreateBotSession(::grpc::ClientContext* context, const ::google::devtools::remoteworkers::v1test2::CreateBotSessionRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::devtools::remoteworkers::v1test2::BotSession>>(PrepareAsyncCreateBotSessionRaw(context, request, cq));
    }
    ::grpc::Status UpdateBotSession(::grpc::ClientContext* context, const ::google::devtools::remoteworkers::v1test2::UpdateBotSessionRequest& request, ::google::devtools::remoteworkers::v1test2::BotSession* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::devtools::remoteworkers::v1test2::BotSession>> AsyncUpdateBotSession(::grpc::ClientContext* context, const ::google::devtools::remoteworkers::v1test2::UpdateBotSessionRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::devtools::remoteworkers::v1test2::BotSession>>(AsyncUpdateBotSessionRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::devtools::remoteworkers::v1test2::BotSession>> PrepareAsyncUpdateBotSession(::grpc::ClientContext* context, const ::google::devtools::remoteworkers::v1test2::UpdateBotSessionRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::devtools::remoteworkers::v1test2::BotSession>>(PrepareAsyncUpdateBotSessionRaw(context, request, cq));
    }
    ::grpc::Status PostBotEventTemp(::grpc::ClientContext* context, const ::google::devtools::remoteworkers::v1test2::PostBotEventTempRequest& request, ::google::protobuf::Empty* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>> AsyncPostBotEventTemp(::grpc::ClientContext* context, const ::google::devtools::remoteworkers::v1test2::PostBotEventTempRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>>(AsyncPostBotEventTempRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>> PrepareAsyncPostBotEventTemp(::grpc::ClientContext* context, const ::google::devtools::remoteworkers::v1test2::PostBotEventTempRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>>(PrepareAsyncPostBotEventTempRaw(context, request, cq));
    }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    ::grpc::ClientAsyncResponseReader< ::google::devtools::remoteworkers::v1test2::BotSession>* AsyncCreateBotSessionRaw(::grpc::ClientContext* context, const ::google::devtools::remoteworkers::v1test2::CreateBotSessionRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::google::devtools::remoteworkers::v1test2::BotSession>* PrepareAsyncCreateBotSessionRaw(::grpc::ClientContext* context, const ::google::devtools::remoteworkers::v1test2::CreateBotSessionRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::google::devtools::remoteworkers::v1test2::BotSession>* AsyncUpdateBotSessionRaw(::grpc::ClientContext* context, const ::google::devtools::remoteworkers::v1test2::UpdateBotSessionRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::google::devtools::remoteworkers::v1test2::BotSession>* PrepareAsyncUpdateBotSessionRaw(::grpc::ClientContext* context, const ::google::devtools::remoteworkers::v1test2::UpdateBotSessionRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* AsyncPostBotEventTempRaw(::grpc::ClientContext* context, const ::google::devtools::remoteworkers::v1test2::PostBotEventTempRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* PrepareAsyncPostBotEventTempRaw(::grpc::ClientContext* context, const ::google::devtools::remoteworkers::v1test2::PostBotEventTempRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_CreateBotSession_;
    const ::grpc::internal::RpcMethod rpcmethod_UpdateBotSession_;
    const ::grpc::internal::RpcMethod rpcmethod_PostBotEventTemp_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    // CreateBotSession is called when the bot first joins the farm, and
    // establishes a session ID to ensure that multiple machines do not register
    // using the same name accidentally.
    virtual ::grpc::Status CreateBotSession(::grpc::ServerContext* context, const ::google::devtools::remoteworkers::v1test2::CreateBotSessionRequest* request, ::google::devtools::remoteworkers::v1test2::BotSession* response);
    // UpdateBotSession must be called periodically by the bot (on a schedule
    // determined by the server) to let the server know about its status, and to
    // pick up new lease requests from the server.
    virtual ::grpc::Status UpdateBotSession(::grpc::ServerContext* context, const ::google::devtools::remoteworkers::v1test2::UpdateBotSessionRequest* request, ::google::devtools::remoteworkers::v1test2::BotSession* response);
    // PostBotEventTemp may be called by the bot to indicate that some exceptional
    // event has occurred. This method is subject to change or removal in future
    // revisions of this API; we may simply want to replace it with StackDriver or
    // some other common interface.
    virtual ::grpc::Status PostBotEventTemp(::grpc::ServerContext* context, const ::google::devtools::remoteworkers::v1test2::PostBotEventTempRequest* request, ::google::protobuf::Empty* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_CreateBotSession : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_CreateBotSession() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_CreateBotSession() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status CreateBotSession(::grpc::ServerContext* context, const ::google::devtools::remoteworkers::v1test2::CreateBotSessionRequest* request, ::google::devtools::remoteworkers::v1test2::BotSession* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestCreateBotSession(::grpc::ServerContext* context, ::google::devtools::remoteworkers::v1test2::CreateBotSessionRequest* request, ::grpc::ServerAsyncResponseWriter< ::google::devtools::remoteworkers::v1test2::BotSession>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_UpdateBotSession : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_UpdateBotSession() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_UpdateBotSession() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status UpdateBotSession(::grpc::ServerContext* context, const ::google::devtools::remoteworkers::v1test2::UpdateBotSessionRequest* request, ::google::devtools::remoteworkers::v1test2::BotSession* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestUpdateBotSession(::grpc::ServerContext* context, ::google::devtools::remoteworkers::v1test2::UpdateBotSessionRequest* request, ::grpc::ServerAsyncResponseWriter< ::google::devtools::remoteworkers::v1test2::BotSession>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_PostBotEventTemp : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_PostBotEventTemp() {
      ::grpc::Service::MarkMethodAsync(2);
    }
    ~WithAsyncMethod_PostBotEventTemp() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status PostBotEventTemp(::grpc::ServerContext* context, const ::google::devtools::remoteworkers::v1test2::PostBotEventTempRequest* request, ::google::protobuf::Empty* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestPostBotEventTemp(::grpc::ServerContext* context, ::google::devtools::remoteworkers::v1test2::PostBotEventTempRequest* request, ::grpc::ServerAsyncResponseWriter< ::google::protobuf::Empty>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(2, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_CreateBotSession<WithAsyncMethod_UpdateBotSession<WithAsyncMethod_PostBotEventTemp<Service > > > AsyncService;
  template <class BaseClass>
  class WithGenericMethod_CreateBotSession : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_CreateBotSession() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_CreateBotSession() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status CreateBotSession(::grpc::ServerContext* context, const ::google::devtools::remoteworkers::v1test2::CreateBotSessionRequest* request, ::google::devtools::remoteworkers::v1test2::BotSession* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_UpdateBotSession : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_UpdateBotSession() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_UpdateBotSession() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status UpdateBotSession(::grpc::ServerContext* context, const ::google::devtools::remoteworkers::v1test2::UpdateBotSessionRequest* request, ::google::devtools::remoteworkers::v1test2::BotSession* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_PostBotEventTemp : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_PostBotEventTemp() {
      ::grpc::Service::MarkMethodGeneric(2);
    }
    ~WithGenericMethod_PostBotEventTemp() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status PostBotEventTemp(::grpc::ServerContext* context, const ::google::devtools::remoteworkers::v1test2::PostBotEventTempRequest* request, ::google::protobuf::Empty* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_CreateBotSession : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithRawMethod_CreateBotSession() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_CreateBotSession() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status CreateBotSession(::grpc::ServerContext* context, const ::google::devtools::remoteworkers::v1test2::CreateBotSessionRequest* request, ::google::devtools::remoteworkers::v1test2::BotSession* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestCreateBotSession(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_UpdateBotSession : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithRawMethod_UpdateBotSession() {
      ::grpc::Service::MarkMethodRaw(1);
    }
    ~WithRawMethod_UpdateBotSession() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status UpdateBotSession(::grpc::ServerContext* context, const ::google::devtools::remoteworkers::v1test2::UpdateBotSessionRequest* request, ::google::devtools::remoteworkers::v1test2::BotSession* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestUpdateBotSession(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_PostBotEventTemp : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithRawMethod_PostBotEventTemp() {
      ::grpc::Service::MarkMethodRaw(2);
    }
    ~WithRawMethod_PostBotEventTemp() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status PostBotEventTemp(::grpc::ServerContext* context, const ::google::devtools::remoteworkers::v1test2::PostBotEventTempRequest* request, ::google::protobuf::Empty* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestPostBotEventTemp(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(2, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_CreateBotSession : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_CreateBotSession() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler< ::google::devtools::remoteworkers::v1test2::CreateBotSessionRequest, ::google::devtools::remoteworkers::v1test2::BotSession>(std::bind(&WithStreamedUnaryMethod_CreateBotSession<BaseClass>::StreamedCreateBotSession, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_CreateBotSession() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status CreateBotSession(::grpc::ServerContext* context, const ::google::devtools::remoteworkers::v1test2::CreateBotSessionRequest* request, ::google::devtools::remoteworkers::v1test2::BotSession* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedCreateBotSession(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::google::devtools::remoteworkers::v1test2::CreateBotSessionRequest,::google::devtools::remoteworkers::v1test2::BotSession>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_UpdateBotSession : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_UpdateBotSession() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::internal::StreamedUnaryHandler< ::google::devtools::remoteworkers::v1test2::UpdateBotSessionRequest, ::google::devtools::remoteworkers::v1test2::BotSession>(std::bind(&WithStreamedUnaryMethod_UpdateBotSession<BaseClass>::StreamedUpdateBotSession, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_UpdateBotSession() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status UpdateBotSession(::grpc::ServerContext* context, const ::google::devtools::remoteworkers::v1test2::UpdateBotSessionRequest* request, ::google::devtools::remoteworkers::v1test2::BotSession* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedUpdateBotSession(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::google::devtools::remoteworkers::v1test2::UpdateBotSessionRequest,::google::devtools::remoteworkers::v1test2::BotSession>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_PostBotEventTemp : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_PostBotEventTemp() {
      ::grpc::Service::MarkMethodStreamed(2,
        new ::grpc::internal::StreamedUnaryHandler< ::google::devtools::remoteworkers::v1test2::PostBotEventTempRequest, ::google::protobuf::Empty>(std::bind(&WithStreamedUnaryMethod_PostBotEventTemp<BaseClass>::StreamedPostBotEventTemp, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_PostBotEventTemp() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status PostBotEventTemp(::grpc::ServerContext* context, const ::google::devtools::remoteworkers::v1test2::PostBotEventTempRequest* request, ::google::protobuf::Empty* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedPostBotEventTemp(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::google::devtools::remoteworkers::v1test2::PostBotEventTempRequest,::google::protobuf::Empty>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_CreateBotSession<WithStreamedUnaryMethod_UpdateBotSession<WithStreamedUnaryMethod_PostBotEventTemp<Service > > > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_CreateBotSession<WithStreamedUnaryMethod_UpdateBotSession<WithStreamedUnaryMethod_PostBotEventTemp<Service > > > StreamedService;
};

}  // namespace v1test2
}  // namespace remoteworkers
}  // namespace devtools
}  // namespace google


#endif  // GRPC_google_2fdevtools_2fremoteworkers_2fv1test2_2fbots_2eproto__INCLUDED