// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: zippy.proto
#ifndef GRPC_zippy_2eproto__INCLUDED
#define GRPC_zippy_2eproto__INCLUDED

#include "zippy.pb.h"

#include <functional>
#include <grpcpp/generic/async_generic_service.h>
#include <grpcpp/support/async_stream.h>
#include <grpcpp/support/async_unary_call.h>
#include <grpcpp/support/client_callback.h>
#include <grpcpp/client_context.h>
#include <grpcpp/completion_queue.h>
#include <grpcpp/support/message_allocator.h>
#include <grpcpp/support/method_handler.h>
#include <grpcpp/impl/proto_utils.h>
#include <grpcpp/impl/rpc_method.h>
#include <grpcpp/support/server_callback.h>
#include <grpcpp/impl/server_callback_handlers.h>
#include <grpcpp/server_context.h>
#include <grpcpp/impl/service_type.h>
#include <grpcpp/support/status.h>
#include <grpcpp/support/stub_options.h>
#include <grpcpp/support/sync_stream.h>

namespace zippy {

class ZippyService final {
 public:
  static constexpr char const* service_full_name() {
    return "zippy.ZippyService";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status Set(::grpc::ClientContext* context, const ::zippy::SetRequest& request, ::zippy::SetResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::zippy::SetResponse>> AsyncSet(::grpc::ClientContext* context, const ::zippy::SetRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::zippy::SetResponse>>(AsyncSetRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::zippy::SetResponse>> PrepareAsyncSet(::grpc::ClientContext* context, const ::zippy::SetRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::zippy::SetResponse>>(PrepareAsyncSetRaw(context, request, cq));
    }
    virtual ::grpc::Status Get(::grpc::ClientContext* context, const ::zippy::GetRequest& request, ::zippy::GetResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::zippy::GetResponse>> AsyncGet(::grpc::ClientContext* context, const ::zippy::GetRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::zippy::GetResponse>>(AsyncGetRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::zippy::GetResponse>> PrepareAsyncGet(::grpc::ClientContext* context, const ::zippy::GetRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::zippy::GetResponse>>(PrepareAsyncGetRaw(context, request, cq));
    }
    virtual ::grpc::Status Del(::grpc::ClientContext* context, const ::zippy::DelRequest& request, ::zippy::DelResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::zippy::DelResponse>> AsyncDel(::grpc::ClientContext* context, const ::zippy::DelRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::zippy::DelResponse>>(AsyncDelRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::zippy::DelResponse>> PrepareAsyncDel(::grpc::ClientContext* context, const ::zippy::DelRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::zippy::DelResponse>>(PrepareAsyncDelRaw(context, request, cq));
    }
    class async_interface {
     public:
      virtual ~async_interface() {}
      virtual void Set(::grpc::ClientContext* context, const ::zippy::SetRequest* request, ::zippy::SetResponse* response, std::function<void(::grpc::Status)>) = 0;
      virtual void Set(::grpc::ClientContext* context, const ::zippy::SetRequest* request, ::zippy::SetResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      virtual void Get(::grpc::ClientContext* context, const ::zippy::GetRequest* request, ::zippy::GetResponse* response, std::function<void(::grpc::Status)>) = 0;
      virtual void Get(::grpc::ClientContext* context, const ::zippy::GetRequest* request, ::zippy::GetResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      virtual void Del(::grpc::ClientContext* context, const ::zippy::DelRequest* request, ::zippy::DelResponse* response, std::function<void(::grpc::Status)>) = 0;
      virtual void Del(::grpc::ClientContext* context, const ::zippy::DelRequest* request, ::zippy::DelResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
    };
    typedef class async_interface experimental_async_interface;
    virtual class async_interface* async() { return nullptr; }
    class async_interface* experimental_async() { return async(); }
   private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::zippy::SetResponse>* AsyncSetRaw(::grpc::ClientContext* context, const ::zippy::SetRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::zippy::SetResponse>* PrepareAsyncSetRaw(::grpc::ClientContext* context, const ::zippy::SetRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::zippy::GetResponse>* AsyncGetRaw(::grpc::ClientContext* context, const ::zippy::GetRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::zippy::GetResponse>* PrepareAsyncGetRaw(::grpc::ClientContext* context, const ::zippy::GetRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::zippy::DelResponse>* AsyncDelRaw(::grpc::ClientContext* context, const ::zippy::DelRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::zippy::DelResponse>* PrepareAsyncDelRaw(::grpc::ClientContext* context, const ::zippy::DelRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());
    ::grpc::Status Set(::grpc::ClientContext* context, const ::zippy::SetRequest& request, ::zippy::SetResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::zippy::SetResponse>> AsyncSet(::grpc::ClientContext* context, const ::zippy::SetRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::zippy::SetResponse>>(AsyncSetRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::zippy::SetResponse>> PrepareAsyncSet(::grpc::ClientContext* context, const ::zippy::SetRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::zippy::SetResponse>>(PrepareAsyncSetRaw(context, request, cq));
    }
    ::grpc::Status Get(::grpc::ClientContext* context, const ::zippy::GetRequest& request, ::zippy::GetResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::zippy::GetResponse>> AsyncGet(::grpc::ClientContext* context, const ::zippy::GetRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::zippy::GetResponse>>(AsyncGetRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::zippy::GetResponse>> PrepareAsyncGet(::grpc::ClientContext* context, const ::zippy::GetRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::zippy::GetResponse>>(PrepareAsyncGetRaw(context, request, cq));
    }
    ::grpc::Status Del(::grpc::ClientContext* context, const ::zippy::DelRequest& request, ::zippy::DelResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::zippy::DelResponse>> AsyncDel(::grpc::ClientContext* context, const ::zippy::DelRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::zippy::DelResponse>>(AsyncDelRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::zippy::DelResponse>> PrepareAsyncDel(::grpc::ClientContext* context, const ::zippy::DelRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::zippy::DelResponse>>(PrepareAsyncDelRaw(context, request, cq));
    }
    class async final :
      public StubInterface::async_interface {
     public:
      void Set(::grpc::ClientContext* context, const ::zippy::SetRequest* request, ::zippy::SetResponse* response, std::function<void(::grpc::Status)>) override;
      void Set(::grpc::ClientContext* context, const ::zippy::SetRequest* request, ::zippy::SetResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
      void Get(::grpc::ClientContext* context, const ::zippy::GetRequest* request, ::zippy::GetResponse* response, std::function<void(::grpc::Status)>) override;
      void Get(::grpc::ClientContext* context, const ::zippy::GetRequest* request, ::zippy::GetResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
      void Del(::grpc::ClientContext* context, const ::zippy::DelRequest* request, ::zippy::DelResponse* response, std::function<void(::grpc::Status)>) override;
      void Del(::grpc::ClientContext* context, const ::zippy::DelRequest* request, ::zippy::DelResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
     private:
      friend class Stub;
      explicit async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class async* async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class async async_stub_{this};
    ::grpc::ClientAsyncResponseReader< ::zippy::SetResponse>* AsyncSetRaw(::grpc::ClientContext* context, const ::zippy::SetRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::zippy::SetResponse>* PrepareAsyncSetRaw(::grpc::ClientContext* context, const ::zippy::SetRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::zippy::GetResponse>* AsyncGetRaw(::grpc::ClientContext* context, const ::zippy::GetRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::zippy::GetResponse>* PrepareAsyncGetRaw(::grpc::ClientContext* context, const ::zippy::GetRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::zippy::DelResponse>* AsyncDelRaw(::grpc::ClientContext* context, const ::zippy::DelRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::zippy::DelResponse>* PrepareAsyncDelRaw(::grpc::ClientContext* context, const ::zippy::DelRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_Set_;
    const ::grpc::internal::RpcMethod rpcmethod_Get_;
    const ::grpc::internal::RpcMethod rpcmethod_Del_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status Set(::grpc::ServerContext* context, const ::zippy::SetRequest* request, ::zippy::SetResponse* response);
    virtual ::grpc::Status Get(::grpc::ServerContext* context, const ::zippy::GetRequest* request, ::zippy::GetResponse* response);
    virtual ::grpc::Status Del(::grpc::ServerContext* context, const ::zippy::DelRequest* request, ::zippy::DelResponse* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_Set : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_Set() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_Set() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Set(::grpc::ServerContext* /*context*/, const ::zippy::SetRequest* /*request*/, ::zippy::SetResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSet(::grpc::ServerContext* context, ::zippy::SetRequest* request, ::grpc::ServerAsyncResponseWriter< ::zippy::SetResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_Get : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_Get() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_Get() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Get(::grpc::ServerContext* /*context*/, const ::zippy::GetRequest* /*request*/, ::zippy::GetResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGet(::grpc::ServerContext* context, ::zippy::GetRequest* request, ::grpc::ServerAsyncResponseWriter< ::zippy::GetResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_Del : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_Del() {
      ::grpc::Service::MarkMethodAsync(2);
    }
    ~WithAsyncMethod_Del() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Del(::grpc::ServerContext* /*context*/, const ::zippy::DelRequest* /*request*/, ::zippy::DelResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestDel(::grpc::ServerContext* context, ::zippy::DelRequest* request, ::grpc::ServerAsyncResponseWriter< ::zippy::DelResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(2, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_Set<WithAsyncMethod_Get<WithAsyncMethod_Del<Service > > > AsyncService;
  template <class BaseClass>
  class WithCallbackMethod_Set : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_Set() {
      ::grpc::Service::MarkMethodCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::zippy::SetRequest, ::zippy::SetResponse>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::zippy::SetRequest* request, ::zippy::SetResponse* response) { return this->Set(context, request, response); }));}
    void SetMessageAllocatorFor_Set(
        ::grpc::MessageAllocator< ::zippy::SetRequest, ::zippy::SetResponse>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(0);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::zippy::SetRequest, ::zippy::SetResponse>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_Set() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Set(::grpc::ServerContext* /*context*/, const ::zippy::SetRequest* /*request*/, ::zippy::SetResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* Set(
      ::grpc::CallbackServerContext* /*context*/, const ::zippy::SetRequest* /*request*/, ::zippy::SetResponse* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithCallbackMethod_Get : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_Get() {
      ::grpc::Service::MarkMethodCallback(1,
          new ::grpc::internal::CallbackUnaryHandler< ::zippy::GetRequest, ::zippy::GetResponse>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::zippy::GetRequest* request, ::zippy::GetResponse* response) { return this->Get(context, request, response); }));}
    void SetMessageAllocatorFor_Get(
        ::grpc::MessageAllocator< ::zippy::GetRequest, ::zippy::GetResponse>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(1);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::zippy::GetRequest, ::zippy::GetResponse>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_Get() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Get(::grpc::ServerContext* /*context*/, const ::zippy::GetRequest* /*request*/, ::zippy::GetResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* Get(
      ::grpc::CallbackServerContext* /*context*/, const ::zippy::GetRequest* /*request*/, ::zippy::GetResponse* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithCallbackMethod_Del : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_Del() {
      ::grpc::Service::MarkMethodCallback(2,
          new ::grpc::internal::CallbackUnaryHandler< ::zippy::DelRequest, ::zippy::DelResponse>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::zippy::DelRequest* request, ::zippy::DelResponse* response) { return this->Del(context, request, response); }));}
    void SetMessageAllocatorFor_Del(
        ::grpc::MessageAllocator< ::zippy::DelRequest, ::zippy::DelResponse>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(2);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::zippy::DelRequest, ::zippy::DelResponse>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_Del() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Del(::grpc::ServerContext* /*context*/, const ::zippy::DelRequest* /*request*/, ::zippy::DelResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* Del(
      ::grpc::CallbackServerContext* /*context*/, const ::zippy::DelRequest* /*request*/, ::zippy::DelResponse* /*response*/)  { return nullptr; }
  };
  typedef WithCallbackMethod_Set<WithCallbackMethod_Get<WithCallbackMethod_Del<Service > > > CallbackService;
  typedef CallbackService ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_Set : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_Set() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_Set() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Set(::grpc::ServerContext* /*context*/, const ::zippy::SetRequest* /*request*/, ::zippy::SetResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_Get : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_Get() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_Get() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Get(::grpc::ServerContext* /*context*/, const ::zippy::GetRequest* /*request*/, ::zippy::GetResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_Del : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_Del() {
      ::grpc::Service::MarkMethodGeneric(2);
    }
    ~WithGenericMethod_Del() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Del(::grpc::ServerContext* /*context*/, const ::zippy::DelRequest* /*request*/, ::zippy::DelResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_Set : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_Set() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_Set() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Set(::grpc::ServerContext* /*context*/, const ::zippy::SetRequest* /*request*/, ::zippy::SetResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSet(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_Get : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_Get() {
      ::grpc::Service::MarkMethodRaw(1);
    }
    ~WithRawMethod_Get() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Get(::grpc::ServerContext* /*context*/, const ::zippy::GetRequest* /*request*/, ::zippy::GetResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGet(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_Del : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_Del() {
      ::grpc::Service::MarkMethodRaw(2);
    }
    ~WithRawMethod_Del() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Del(::grpc::ServerContext* /*context*/, const ::zippy::DelRequest* /*request*/, ::zippy::DelResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestDel(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(2, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_Set : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_Set() {
      ::grpc::Service::MarkMethodRawCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->Set(context, request, response); }));
    }
    ~WithRawCallbackMethod_Set() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Set(::grpc::ServerContext* /*context*/, const ::zippy::SetRequest* /*request*/, ::zippy::SetResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* Set(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_Get : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_Get() {
      ::grpc::Service::MarkMethodRawCallback(1,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->Get(context, request, response); }));
    }
    ~WithRawCallbackMethod_Get() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Get(::grpc::ServerContext* /*context*/, const ::zippy::GetRequest* /*request*/, ::zippy::GetResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* Get(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_Del : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_Del() {
      ::grpc::Service::MarkMethodRawCallback(2,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->Del(context, request, response); }));
    }
    ~WithRawCallbackMethod_Del() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Del(::grpc::ServerContext* /*context*/, const ::zippy::DelRequest* /*request*/, ::zippy::DelResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* Del(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_Set : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_Set() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler<
          ::zippy::SetRequest, ::zippy::SetResponse>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::zippy::SetRequest, ::zippy::SetResponse>* streamer) {
                       return this->StreamedSet(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_Set() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status Set(::grpc::ServerContext* /*context*/, const ::zippy::SetRequest* /*request*/, ::zippy::SetResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedSet(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::zippy::SetRequest,::zippy::SetResponse>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_Get : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_Get() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::internal::StreamedUnaryHandler<
          ::zippy::GetRequest, ::zippy::GetResponse>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::zippy::GetRequest, ::zippy::GetResponse>* streamer) {
                       return this->StreamedGet(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_Get() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status Get(::grpc::ServerContext* /*context*/, const ::zippy::GetRequest* /*request*/, ::zippy::GetResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedGet(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::zippy::GetRequest,::zippy::GetResponse>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_Del : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_Del() {
      ::grpc::Service::MarkMethodStreamed(2,
        new ::grpc::internal::StreamedUnaryHandler<
          ::zippy::DelRequest, ::zippy::DelResponse>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::zippy::DelRequest, ::zippy::DelResponse>* streamer) {
                       return this->StreamedDel(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_Del() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status Del(::grpc::ServerContext* /*context*/, const ::zippy::DelRequest* /*request*/, ::zippy::DelResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedDel(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::zippy::DelRequest,::zippy::DelResponse>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_Set<WithStreamedUnaryMethod_Get<WithStreamedUnaryMethod_Del<Service > > > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_Set<WithStreamedUnaryMethod_Get<WithStreamedUnaryMethod_Del<Service > > > StreamedService;
};

}  // namespace zippy


#endif  // GRPC_zippy_2eproto__INCLUDED
