// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: explainer.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "explainer.pb.h"

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

namespace explainer {

namespace {

const ::google::protobuf::Descriptor* ExplainerRequest_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ExplainerRequest_reflection_ = NULL;
const ::google::protobuf::Descriptor* ExplainerReply_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ExplainerReply_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_explainer_2eproto() {
  protobuf_AddDesc_explainer_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "explainer.proto");
  GOOGLE_CHECK(file != NULL);
  ExplainerRequest_descriptor_ = file->message_type(0);
  static const int ExplainerRequest_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ExplainerRequest, problem_),
  };
  ExplainerRequest_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      ExplainerRequest_descriptor_,
      ExplainerRequest::default_instance_,
      ExplainerRequest_offsets_,
      -1,
      -1,
      -1,
      sizeof(ExplainerRequest),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ExplainerRequest, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ExplainerRequest, _is_default_instance_));
  ExplainerReply_descriptor_ = file->message_type(1);
  static const int ExplainerReply_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ExplainerReply, explanation_),
  };
  ExplainerReply_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      ExplainerReply_descriptor_,
      ExplainerReply::default_instance_,
      ExplainerReply_offsets_,
      -1,
      -1,
      -1,
      sizeof(ExplainerReply),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ExplainerReply, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ExplainerReply, _is_default_instance_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_explainer_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      ExplainerRequest_descriptor_, &ExplainerRequest::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      ExplainerReply_descriptor_, &ExplainerReply::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_explainer_2eproto() {
  delete ExplainerRequest::default_instance_;
  delete ExplainerRequest_reflection_;
  delete ExplainerReply::default_instance_;
  delete ExplainerReply_reflection_;
}

void protobuf_AddDesc_explainer_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\017explainer.proto\022\texplainer\"#\n\020Explaine"
    "rRequest\022\017\n\007problem\030\001 \001(\t\"%\n\016ExplainerRe"
    "ply\022\023\n\013explanation\030\001 \001(\t2N\n\005ShiFu\022E\n\tTel"
    "lMeWhy\022\033.explainer.ExplainerRequest\032\031.ex"
    "plainer.ExplainerReply\"\000B3\n\031com.tardate."
    "lck.explainerB\016ExplainerProtoP\001\242\002\003EXPb\006p"
    "roto3", 245);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "explainer.proto", &protobuf_RegisterTypes);
  ExplainerRequest::default_instance_ = new ExplainerRequest();
  ExplainerReply::default_instance_ = new ExplainerReply();
  ExplainerRequest::default_instance_->InitAsDefaultInstance();
  ExplainerReply::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_explainer_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_explainer_2eproto {
  StaticDescriptorInitializer_explainer_2eproto() {
    protobuf_AddDesc_explainer_2eproto();
  }
} static_descriptor_initializer_explainer_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD;
static void MergeFromFail(int line) {
  GOOGLE_CHECK(false) << __FILE__ << ":" << line;
}

}  // namespace


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ExplainerRequest::kProblemFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ExplainerRequest::ExplainerRequest()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:explainer.ExplainerRequest)
}

void ExplainerRequest::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

ExplainerRequest::ExplainerRequest(const ExplainerRequest& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:explainer.ExplainerRequest)
}

void ExplainerRequest::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  problem_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

ExplainerRequest::~ExplainerRequest() {
  // @@protoc_insertion_point(destructor:explainer.ExplainerRequest)
  SharedDtor();
}

void ExplainerRequest::SharedDtor() {
  problem_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void ExplainerRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ExplainerRequest::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ExplainerRequest_descriptor_;
}

const ExplainerRequest& ExplainerRequest::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_explainer_2eproto();
  return *default_instance_;
}

ExplainerRequest* ExplainerRequest::default_instance_ = NULL;

ExplainerRequest* ExplainerRequest::New(::google::protobuf::Arena* arena) const {
  ExplainerRequest* n = new ExplainerRequest;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void ExplainerRequest::Clear() {
  problem_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool ExplainerRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:explainer.ExplainerRequest)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string problem = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_problem()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->problem().data(), this->problem().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "explainer.ExplainerRequest.problem"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:explainer.ExplainerRequest)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:explainer.ExplainerRequest)
  return false;
#undef DO_
}

void ExplainerRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:explainer.ExplainerRequest)
  // optional string problem = 1;
  if (this->problem().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->problem().data(), this->problem().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "explainer.ExplainerRequest.problem");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->problem(), output);
  }

  // @@protoc_insertion_point(serialize_end:explainer.ExplainerRequest)
}

::google::protobuf::uint8* ExplainerRequest::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:explainer.ExplainerRequest)
  // optional string problem = 1;
  if (this->problem().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->problem().data(), this->problem().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "explainer.ExplainerRequest.problem");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->problem(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:explainer.ExplainerRequest)
  return target;
}

int ExplainerRequest::ByteSize() const {
  int total_size = 0;

  // optional string problem = 1;
  if (this->problem().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->problem());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ExplainerRequest::MergeFrom(const ::google::protobuf::Message& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const ExplainerRequest* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const ExplainerRequest>(
          &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void ExplainerRequest::MergeFrom(const ExplainerRequest& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  if (from.problem().size() > 0) {

    problem_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.problem_);
  }
}

void ExplainerRequest::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ExplainerRequest::CopyFrom(const ExplainerRequest& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ExplainerRequest::IsInitialized() const {

  return true;
}

void ExplainerRequest::Swap(ExplainerRequest* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ExplainerRequest::InternalSwap(ExplainerRequest* other) {
  problem_.Swap(&other->problem_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata ExplainerRequest::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ExplainerRequest_descriptor_;
  metadata.reflection = ExplainerRequest_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// ExplainerRequest

// optional string problem = 1;
void ExplainerRequest::clear_problem() {
  problem_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& ExplainerRequest::problem() const {
  // @@protoc_insertion_point(field_get:explainer.ExplainerRequest.problem)
  return problem_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void ExplainerRequest::set_problem(const ::std::string& value) {
  
  problem_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:explainer.ExplainerRequest.problem)
}
 void ExplainerRequest::set_problem(const char* value) {
  
  problem_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:explainer.ExplainerRequest.problem)
}
 void ExplainerRequest::set_problem(const char* value, size_t size) {
  
  problem_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:explainer.ExplainerRequest.problem)
}
 ::std::string* ExplainerRequest::mutable_problem() {
  
  // @@protoc_insertion_point(field_mutable:explainer.ExplainerRequest.problem)
  return problem_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* ExplainerRequest::release_problem() {
  
  return problem_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void ExplainerRequest::set_allocated_problem(::std::string* problem) {
  if (problem != NULL) {
    
  } else {
    
  }
  problem_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), problem);
  // @@protoc_insertion_point(field_set_allocated:explainer.ExplainerRequest.problem)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ExplainerReply::kExplanationFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ExplainerReply::ExplainerReply()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:explainer.ExplainerReply)
}

void ExplainerReply::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

ExplainerReply::ExplainerReply(const ExplainerReply& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:explainer.ExplainerReply)
}

void ExplainerReply::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  explanation_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

ExplainerReply::~ExplainerReply() {
  // @@protoc_insertion_point(destructor:explainer.ExplainerReply)
  SharedDtor();
}

void ExplainerReply::SharedDtor() {
  explanation_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void ExplainerReply::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ExplainerReply::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ExplainerReply_descriptor_;
}

const ExplainerReply& ExplainerReply::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_explainer_2eproto();
  return *default_instance_;
}

ExplainerReply* ExplainerReply::default_instance_ = NULL;

ExplainerReply* ExplainerReply::New(::google::protobuf::Arena* arena) const {
  ExplainerReply* n = new ExplainerReply;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void ExplainerReply::Clear() {
  explanation_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool ExplainerReply::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:explainer.ExplainerReply)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string explanation = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_explanation()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->explanation().data(), this->explanation().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "explainer.ExplainerReply.explanation"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:explainer.ExplainerReply)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:explainer.ExplainerReply)
  return false;
#undef DO_
}

void ExplainerReply::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:explainer.ExplainerReply)
  // optional string explanation = 1;
  if (this->explanation().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->explanation().data(), this->explanation().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "explainer.ExplainerReply.explanation");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->explanation(), output);
  }

  // @@protoc_insertion_point(serialize_end:explainer.ExplainerReply)
}

::google::protobuf::uint8* ExplainerReply::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:explainer.ExplainerReply)
  // optional string explanation = 1;
  if (this->explanation().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->explanation().data(), this->explanation().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "explainer.ExplainerReply.explanation");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->explanation(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:explainer.ExplainerReply)
  return target;
}

int ExplainerReply::ByteSize() const {
  int total_size = 0;

  // optional string explanation = 1;
  if (this->explanation().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->explanation());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ExplainerReply::MergeFrom(const ::google::protobuf::Message& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const ExplainerReply* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const ExplainerReply>(
          &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void ExplainerReply::MergeFrom(const ExplainerReply& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  if (from.explanation().size() > 0) {

    explanation_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.explanation_);
  }
}

void ExplainerReply::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ExplainerReply::CopyFrom(const ExplainerReply& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ExplainerReply::IsInitialized() const {

  return true;
}

void ExplainerReply::Swap(ExplainerReply* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ExplainerReply::InternalSwap(ExplainerReply* other) {
  explanation_.Swap(&other->explanation_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata ExplainerReply::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ExplainerReply_descriptor_;
  metadata.reflection = ExplainerReply_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// ExplainerReply

// optional string explanation = 1;
void ExplainerReply::clear_explanation() {
  explanation_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& ExplainerReply::explanation() const {
  // @@protoc_insertion_point(field_get:explainer.ExplainerReply.explanation)
  return explanation_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void ExplainerReply::set_explanation(const ::std::string& value) {
  
  explanation_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:explainer.ExplainerReply.explanation)
}
 void ExplainerReply::set_explanation(const char* value) {
  
  explanation_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:explainer.ExplainerReply.explanation)
}
 void ExplainerReply::set_explanation(const char* value, size_t size) {
  
  explanation_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:explainer.ExplainerReply.explanation)
}
 ::std::string* ExplainerReply::mutable_explanation() {
  
  // @@protoc_insertion_point(field_mutable:explainer.ExplainerReply.explanation)
  return explanation_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* ExplainerReply::release_explanation() {
  
  return explanation_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void ExplainerReply::set_allocated_explanation(::std::string* explanation) {
  if (explanation != NULL) {
    
  } else {
    
  }
  explanation_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), explanation);
  // @@protoc_insertion_point(field_set_allocated:explainer.ExplainerReply.explanation)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace explainer

// @@protoc_insertion_point(global_scope)
