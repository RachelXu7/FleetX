// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: brpc/get_favicon.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "brpc/get_favicon.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace brpc {

namespace {

const ::google::protobuf::Descriptor* GetFaviconRequest_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  GetFaviconRequest_reflection_ = NULL;
const ::google::protobuf::Descriptor* GetFaviconResponse_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  GetFaviconResponse_reflection_ = NULL;
const ::google::protobuf::ServiceDescriptor* ico_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_brpc_2fget_5ffavicon_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_brpc_2fget_5ffavicon_2eproto() {
  protobuf_AddDesc_brpc_2fget_5ffavicon_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "brpc/get_favicon.proto");
  GOOGLE_CHECK(file != NULL);
  GetFaviconRequest_descriptor_ = file->message_type(0);
  static const int GetFaviconRequest_offsets_[1] = {
  };
  GetFaviconRequest_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      GetFaviconRequest_descriptor_,
      GetFaviconRequest::default_instance_,
      GetFaviconRequest_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GetFaviconRequest, _has_bits_[0]),
      -1,
      -1,
      sizeof(GetFaviconRequest),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GetFaviconRequest, _internal_metadata_),
      -1);
  GetFaviconResponse_descriptor_ = file->message_type(1);
  static const int GetFaviconResponse_offsets_[1] = {
  };
  GetFaviconResponse_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      GetFaviconResponse_descriptor_,
      GetFaviconResponse::default_instance_,
      GetFaviconResponse_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GetFaviconResponse, _has_bits_[0]),
      -1,
      -1,
      sizeof(GetFaviconResponse),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GetFaviconResponse, _internal_metadata_),
      -1);
  ico_descriptor_ = file->service(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_brpc_2fget_5ffavicon_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      GetFaviconRequest_descriptor_, &GetFaviconRequest::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      GetFaviconResponse_descriptor_, &GetFaviconResponse::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_brpc_2fget_5ffavicon_2eproto() {
  delete GetFaviconRequest::default_instance_;
  delete GetFaviconRequest_reflection_;
  delete GetFaviconResponse::default_instance_;
  delete GetFaviconResponse_reflection_;
}

void protobuf_AddDesc_brpc_2fget_5ffavicon_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_brpc_2fget_5ffavicon_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\026brpc/get_favicon.proto\022\004brpc\"\023\n\021GetFav"
    "iconRequest\"\024\n\022GetFaviconResponse2J\n\003ico"
    "\022C\n\016default_method\022\027.brpc.GetFaviconRequ"
    "est\032\030.brpc.GetFaviconResponseB\034\n\010com.brp"
    "cB\nGetFavicon\200\001\001\210\001\001", 179);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "brpc/get_favicon.proto", &protobuf_RegisterTypes);
  GetFaviconRequest::default_instance_ = new GetFaviconRequest();
  GetFaviconResponse::default_instance_ = new GetFaviconResponse();
  GetFaviconRequest::default_instance_->InitAsDefaultInstance();
  GetFaviconResponse::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_brpc_2fget_5ffavicon_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_brpc_2fget_5ffavicon_2eproto {
  StaticDescriptorInitializer_brpc_2fget_5ffavicon_2eproto() {
    protobuf_AddDesc_brpc_2fget_5ffavicon_2eproto();
  }
} static_descriptor_initializer_brpc_2fget_5ffavicon_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

GetFaviconRequest::GetFaviconRequest()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:brpc.GetFaviconRequest)
}

void GetFaviconRequest::InitAsDefaultInstance() {
}

GetFaviconRequest::GetFaviconRequest(const GetFaviconRequest& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:brpc.GetFaviconRequest)
}

void GetFaviconRequest::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

GetFaviconRequest::~GetFaviconRequest() {
  // @@protoc_insertion_point(destructor:brpc.GetFaviconRequest)
  SharedDtor();
}

void GetFaviconRequest::SharedDtor() {
  if (this != default_instance_) {
  }
}

void GetFaviconRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* GetFaviconRequest::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return GetFaviconRequest_descriptor_;
}

const GetFaviconRequest& GetFaviconRequest::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_brpc_2fget_5ffavicon_2eproto();
  return *default_instance_;
}

GetFaviconRequest* GetFaviconRequest::default_instance_ = NULL;

GetFaviconRequest* GetFaviconRequest::New(::google::protobuf::Arena* arena) const {
  GetFaviconRequest* n = new GetFaviconRequest;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void GetFaviconRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:brpc.GetFaviconRequest)
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool GetFaviconRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:brpc.GetFaviconRequest)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
  handle_unusual:
    if (tag == 0 ||
        ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
        ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
      goto success;
    }
    DO_(::google::protobuf::internal::WireFormat::SkipField(
          input, tag, mutable_unknown_fields()));
  }
success:
  // @@protoc_insertion_point(parse_success:brpc.GetFaviconRequest)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:brpc.GetFaviconRequest)
  return false;
#undef DO_
}

void GetFaviconRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:brpc.GetFaviconRequest)
  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:brpc.GetFaviconRequest)
}

::google::protobuf::uint8* GetFaviconRequest::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:brpc.GetFaviconRequest)
  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:brpc.GetFaviconRequest)
  return target;
}

int GetFaviconRequest::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:brpc.GetFaviconRequest)
  int total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void GetFaviconRequest::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:brpc.GetFaviconRequest)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const GetFaviconRequest* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const GetFaviconRequest>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:brpc.GetFaviconRequest)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:brpc.GetFaviconRequest)
    MergeFrom(*source);
  }
}

void GetFaviconRequest::MergeFrom(const GetFaviconRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:brpc.GetFaviconRequest)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void GetFaviconRequest::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:brpc.GetFaviconRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void GetFaviconRequest::CopyFrom(const GetFaviconRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:brpc.GetFaviconRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GetFaviconRequest::IsInitialized() const {

  return true;
}

void GetFaviconRequest::Swap(GetFaviconRequest* other) {
  if (other == this) return;
  InternalSwap(other);
}
void GetFaviconRequest::InternalSwap(GetFaviconRequest* other) {
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata GetFaviconRequest::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = GetFaviconRequest_descriptor_;
  metadata.reflection = GetFaviconRequest_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// GetFaviconRequest

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

GetFaviconResponse::GetFaviconResponse()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:brpc.GetFaviconResponse)
}

void GetFaviconResponse::InitAsDefaultInstance() {
}

GetFaviconResponse::GetFaviconResponse(const GetFaviconResponse& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:brpc.GetFaviconResponse)
}

void GetFaviconResponse::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

GetFaviconResponse::~GetFaviconResponse() {
  // @@protoc_insertion_point(destructor:brpc.GetFaviconResponse)
  SharedDtor();
}

void GetFaviconResponse::SharedDtor() {
  if (this != default_instance_) {
  }
}

void GetFaviconResponse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* GetFaviconResponse::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return GetFaviconResponse_descriptor_;
}

const GetFaviconResponse& GetFaviconResponse::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_brpc_2fget_5ffavicon_2eproto();
  return *default_instance_;
}

GetFaviconResponse* GetFaviconResponse::default_instance_ = NULL;

GetFaviconResponse* GetFaviconResponse::New(::google::protobuf::Arena* arena) const {
  GetFaviconResponse* n = new GetFaviconResponse;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void GetFaviconResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:brpc.GetFaviconResponse)
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool GetFaviconResponse::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:brpc.GetFaviconResponse)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
  handle_unusual:
    if (tag == 0 ||
        ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
        ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
      goto success;
    }
    DO_(::google::protobuf::internal::WireFormat::SkipField(
          input, tag, mutable_unknown_fields()));
  }
success:
  // @@protoc_insertion_point(parse_success:brpc.GetFaviconResponse)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:brpc.GetFaviconResponse)
  return false;
#undef DO_
}

void GetFaviconResponse::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:brpc.GetFaviconResponse)
  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:brpc.GetFaviconResponse)
}

::google::protobuf::uint8* GetFaviconResponse::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:brpc.GetFaviconResponse)
  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:brpc.GetFaviconResponse)
  return target;
}

int GetFaviconResponse::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:brpc.GetFaviconResponse)
  int total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void GetFaviconResponse::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:brpc.GetFaviconResponse)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const GetFaviconResponse* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const GetFaviconResponse>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:brpc.GetFaviconResponse)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:brpc.GetFaviconResponse)
    MergeFrom(*source);
  }
}

void GetFaviconResponse::MergeFrom(const GetFaviconResponse& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:brpc.GetFaviconResponse)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void GetFaviconResponse::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:brpc.GetFaviconResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void GetFaviconResponse::CopyFrom(const GetFaviconResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:brpc.GetFaviconResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GetFaviconResponse::IsInitialized() const {

  return true;
}

void GetFaviconResponse::Swap(GetFaviconResponse* other) {
  if (other == this) return;
  InternalSwap(other);
}
void GetFaviconResponse::InternalSwap(GetFaviconResponse* other) {
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata GetFaviconResponse::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = GetFaviconResponse_descriptor_;
  metadata.reflection = GetFaviconResponse_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// GetFaviconResponse

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

ico::~ico() {}

const ::google::protobuf::ServiceDescriptor* ico::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ico_descriptor_;
}

const ::google::protobuf::ServiceDescriptor* ico::GetDescriptor() {
  protobuf_AssignDescriptorsOnce();
  return ico_descriptor_;
}

void ico::default_method(::google::protobuf::RpcController* controller,
                         const ::brpc::GetFaviconRequest*,
                         ::brpc::GetFaviconResponse*,
                         ::google::protobuf::Closure* done) {
  controller->SetFailed("Method default_method() not implemented.");
  done->Run();
}

void ico::CallMethod(const ::google::protobuf::MethodDescriptor* method,
                             ::google::protobuf::RpcController* controller,
                             const ::google::protobuf::Message* request,
                             ::google::protobuf::Message* response,
                             ::google::protobuf::Closure* done) {
  GOOGLE_DCHECK_EQ(method->service(), ico_descriptor_);
  switch(method->index()) {
    case 0:
      default_method(controller,
             ::google::protobuf::down_cast<const ::brpc::GetFaviconRequest*>(request),
             ::google::protobuf::down_cast< ::brpc::GetFaviconResponse*>(response),
             done);
      break;
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      break;
  }
}

const ::google::protobuf::Message& ico::GetRequestPrototype(
    const ::google::protobuf::MethodDescriptor* method) const {
  GOOGLE_DCHECK_EQ(method->service(), descriptor());
  switch(method->index()) {
    case 0:
      return ::brpc::GetFaviconRequest::default_instance();
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      return *::google::protobuf::MessageFactory::generated_factory()
          ->GetPrototype(method->input_type());
  }
}

const ::google::protobuf::Message& ico::GetResponsePrototype(
    const ::google::protobuf::MethodDescriptor* method) const {
  GOOGLE_DCHECK_EQ(method->service(), descriptor());
  switch(method->index()) {
    case 0:
      return ::brpc::GetFaviconResponse::default_instance();
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      return *::google::protobuf::MessageFactory::generated_factory()
          ->GetPrototype(method->output_type());
  }
}

ico_Stub::ico_Stub(::google::protobuf::RpcChannel* channel)
  : channel_(channel), owns_channel_(false) {}
ico_Stub::ico_Stub(
    ::google::protobuf::RpcChannel* channel,
    ::google::protobuf::Service::ChannelOwnership ownership)
  : channel_(channel),
    owns_channel_(ownership == ::google::protobuf::Service::STUB_OWNS_CHANNEL) {}
ico_Stub::~ico_Stub() {
  if (owns_channel_) delete channel_;
}

void ico_Stub::default_method(::google::protobuf::RpcController* controller,
                              const ::brpc::GetFaviconRequest* request,
                              ::brpc::GetFaviconResponse* response,
                              ::google::protobuf::Closure* done) {
  channel_->CallMethod(descriptor()->method(0),
                       controller, request, response, done);
}

// @@protoc_insertion_point(namespace_scope)

}  // namespace brpc

// @@protoc_insertion_point(global_scope)
