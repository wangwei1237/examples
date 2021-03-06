// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: kydroid_rpc.proto

#ifndef PROTOBUF_kydroid_5frpc_2eproto__INCLUDED
#define PROTOBUF_kydroid_5frpc_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
// @@protoc_insertion_point(includes)

namespace kydroid {
namespace protobuf {
namespace rpc {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_kydroid_5frpc_2eproto();
void protobuf_AssignDesc_kydroid_5frpc_2eproto();
void protobuf_ShutdownFile_kydroid_5frpc_2eproto();

class Invocation;
class Result;
class StructuredError;
class Void;

// ===================================================================

class Invocation : public ::google::protobuf::MessageLite {
 public:
  Invocation();
  virtual ~Invocation();

  Invocation(const Invocation& from);

  inline Invocation& operator=(const Invocation& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::std::string& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::std::string* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const Invocation& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const Invocation* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(Invocation* other);

  // implements Message ----------------------------------------------

  Invocation* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const Invocation& from);
  void MergeFrom(const Invocation& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  void DiscardUnknownFields();
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::std::string GetTypeName() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required uint32 id = 1;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 1;
  inline ::google::protobuf::uint32 id() const;
  inline void set_id(::google::protobuf::uint32 value);

  // required string method_name = 2;
  inline bool has_method_name() const;
  inline void clear_method_name();
  static const int kMethodNameFieldNumber = 2;
  inline const ::std::string& method_name() const;
  inline void set_method_name(const ::std::string& value);
  inline void set_method_name(const char* value);
  inline void set_method_name(const char* value, size_t size);
  inline ::std::string* mutable_method_name();
  inline ::std::string* release_method_name();
  inline void set_allocated_method_name(::std::string* method_name);

  // required bytes parameters = 3;
  inline bool has_parameters() const;
  inline void clear_parameters();
  static const int kParametersFieldNumber = 3;
  inline const ::std::string& parameters() const;
  inline void set_parameters(const ::std::string& value);
  inline void set_parameters(const char* value);
  inline void set_parameters(const void* value, size_t size);
  inline ::std::string* mutable_parameters();
  inline ::std::string* release_parameters();
  inline void set_allocated_parameters(::std::string* parameters);

  // required uint32 protocol_version = 4;
  inline bool has_protocol_version() const;
  inline void clear_protocol_version();
  static const int kProtocolVersionFieldNumber = 4;
  inline ::google::protobuf::uint32 protocol_version() const;
  inline void set_protocol_version(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:kydroid.protobuf.rpc.Invocation)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_method_name();
  inline void clear_has_method_name();
  inline void set_has_parameters();
  inline void clear_has_parameters();
  inline void set_has_protocol_version();
  inline void clear_has_protocol_version();

  ::std::string _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* method_name_;
  ::google::protobuf::uint32 id_;
  ::google::protobuf::uint32 protocol_version_;
  ::std::string* parameters_;
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_kydroid_5frpc_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_kydroid_5frpc_2eproto();
  #endif
  friend void protobuf_AssignDesc_kydroid_5frpc_2eproto();
  friend void protobuf_ShutdownFile_kydroid_5frpc_2eproto();

  void InitAsDefaultInstance();
  static Invocation* default_instance_;
};
// -------------------------------------------------------------------

class Result : public ::google::protobuf::MessageLite {
 public:
  Result();
  virtual ~Result();

  Result(const Result& from);

  inline Result& operator=(const Result& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::std::string& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::std::string* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const Result& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const Result* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(Result* other);

  // implements Message ----------------------------------------------

  Result* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const Result& from);
  void MergeFrom(const Result& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  void DiscardUnknownFields();
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::std::string GetTypeName() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional uint32 id = 1;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 1;
  inline ::google::protobuf::uint32 id() const;
  inline void set_id(::google::protobuf::uint32 value);

  // optional bytes response = 2;
  inline bool has_response() const;
  inline void clear_response();
  static const int kResponseFieldNumber = 2;
  inline const ::std::string& response() const;
  inline void set_response(const ::std::string& value);
  inline void set_response(const char* value);
  inline void set_response(const void* value, size_t size);
  inline ::std::string* mutable_response();
  inline ::std::string* release_response();
  inline void set_allocated_response(::std::string* response);

  // repeated bytes events = 3;
  inline int events_size() const;
  inline void clear_events();
  static const int kEventsFieldNumber = 3;
  inline const ::std::string& events(int index) const;
  inline ::std::string* mutable_events(int index);
  inline void set_events(int index, const ::std::string& value);
  inline void set_events(int index, const char* value);
  inline void set_events(int index, const void* value, size_t size);
  inline ::std::string* add_events();
  inline void add_events(const ::std::string& value);
  inline void add_events(const char* value);
  inline void add_events(const void* value, size_t size);
  inline const ::google::protobuf::RepeatedPtrField< ::std::string>& events() const;
  inline ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_events();

  // @@protoc_insertion_point(class_scope:kydroid.protobuf.rpc.Result)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_response();
  inline void clear_has_response();

  ::std::string _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* response_;
  ::google::protobuf::RepeatedPtrField< ::std::string> events_;
  ::google::protobuf::uint32 id_;
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_kydroid_5frpc_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_kydroid_5frpc_2eproto();
  #endif
  friend void protobuf_AssignDesc_kydroid_5frpc_2eproto();
  friend void protobuf_ShutdownFile_kydroid_5frpc_2eproto();

  void InitAsDefaultInstance();
  static Result* default_instance_;
};
// -------------------------------------------------------------------

class StructuredError : public ::google::protobuf::MessageLite {
 public:
  StructuredError();
  virtual ~StructuredError();

  StructuredError(const StructuredError& from);

  inline StructuredError& operator=(const StructuredError& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::std::string& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::std::string* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const StructuredError& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const StructuredError* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(StructuredError* other);

  // implements Message ----------------------------------------------

  StructuredError* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const StructuredError& from);
  void MergeFrom(const StructuredError& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  void DiscardUnknownFields();
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::std::string GetTypeName() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional uint32 domain = 1;
  inline bool has_domain() const;
  inline void clear_domain();
  static const int kDomainFieldNumber = 1;
  inline ::google::protobuf::uint32 domain() const;
  inline void set_domain(::google::protobuf::uint32 value);

  // optional uint32 code = 2;
  inline bool has_code() const;
  inline void clear_code();
  static const int kCodeFieldNumber = 2;
  inline ::google::protobuf::uint32 code() const;
  inline void set_code(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:kydroid.protobuf.rpc.StructuredError)
 private:
  inline void set_has_domain();
  inline void clear_has_domain();
  inline void set_has_code();
  inline void clear_has_code();

  ::std::string _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::uint32 domain_;
  ::google::protobuf::uint32 code_;
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_kydroid_5frpc_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_kydroid_5frpc_2eproto();
  #endif
  friend void protobuf_AssignDesc_kydroid_5frpc_2eproto();
  friend void protobuf_ShutdownFile_kydroid_5frpc_2eproto();

  void InitAsDefaultInstance();
  static StructuredError* default_instance_;
};
// -------------------------------------------------------------------

class Void : public ::google::protobuf::MessageLite {
 public:
  Void();
  virtual ~Void();

  Void(const Void& from);

  inline Void& operator=(const Void& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::std::string& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::std::string* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const Void& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const Void* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(Void* other);

  // implements Message ----------------------------------------------

  Void* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const Void& from);
  void MergeFrom(const Void& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  void DiscardUnknownFields();
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::std::string GetTypeName() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string error = 127;
  inline bool has_error() const;
  inline void clear_error();
  static const int kErrorFieldNumber = 127;
  inline const ::std::string& error() const;
  inline void set_error(const ::std::string& value);
  inline void set_error(const char* value);
  inline void set_error(const char* value, size_t size);
  inline ::std::string* mutable_error();
  inline ::std::string* release_error();
  inline void set_allocated_error(::std::string* error);

  // optional .kydroid.protobuf.rpc.StructuredError structured_error = 128;
  inline bool has_structured_error() const;
  inline void clear_structured_error();
  static const int kStructuredErrorFieldNumber = 128;
  inline const ::kydroid::protobuf::rpc::StructuredError& structured_error() const;
  inline ::kydroid::protobuf::rpc::StructuredError* mutable_structured_error();
  inline ::kydroid::protobuf::rpc::StructuredError* release_structured_error();
  inline void set_allocated_structured_error(::kydroid::protobuf::rpc::StructuredError* structured_error);

  // @@protoc_insertion_point(class_scope:kydroid.protobuf.rpc.Void)
 private:
  inline void set_has_error();
  inline void clear_has_error();
  inline void set_has_structured_error();
  inline void clear_has_structured_error();

  ::std::string _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* error_;
  ::kydroid::protobuf::rpc::StructuredError* structured_error_;
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_kydroid_5frpc_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_kydroid_5frpc_2eproto();
  #endif
  friend void protobuf_AssignDesc_kydroid_5frpc_2eproto();
  friend void protobuf_ShutdownFile_kydroid_5frpc_2eproto();

  void InitAsDefaultInstance();
  static Void* default_instance_;
};
// ===================================================================


// ===================================================================

// Invocation

// required uint32 id = 1;
inline bool Invocation::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Invocation::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Invocation::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Invocation::clear_id() {
  id_ = 0u;
  clear_has_id();
}
inline ::google::protobuf::uint32 Invocation::id() const {
  // @@protoc_insertion_point(field_get:kydroid.protobuf.rpc.Invocation.id)
  return id_;
}
inline void Invocation::set_id(::google::protobuf::uint32 value) {
  set_has_id();
  id_ = value;
  // @@protoc_insertion_point(field_set:kydroid.protobuf.rpc.Invocation.id)
}

// required string method_name = 2;
inline bool Invocation::has_method_name() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Invocation::set_has_method_name() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Invocation::clear_has_method_name() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Invocation::clear_method_name() {
  if (method_name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    method_name_->clear();
  }
  clear_has_method_name();
}
inline const ::std::string& Invocation::method_name() const {
  // @@protoc_insertion_point(field_get:kydroid.protobuf.rpc.Invocation.method_name)
  return *method_name_;
}
inline void Invocation::set_method_name(const ::std::string& value) {
  set_has_method_name();
  if (method_name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    method_name_ = new ::std::string;
  }
  method_name_->assign(value);
  // @@protoc_insertion_point(field_set:kydroid.protobuf.rpc.Invocation.method_name)
}
inline void Invocation::set_method_name(const char* value) {
  set_has_method_name();
  if (method_name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    method_name_ = new ::std::string;
  }
  method_name_->assign(value);
  // @@protoc_insertion_point(field_set_char:kydroid.protobuf.rpc.Invocation.method_name)
}
inline void Invocation::set_method_name(const char* value, size_t size) {
  set_has_method_name();
  if (method_name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    method_name_ = new ::std::string;
  }
  method_name_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:kydroid.protobuf.rpc.Invocation.method_name)
}
inline ::std::string* Invocation::mutable_method_name() {
  set_has_method_name();
  if (method_name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    method_name_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:kydroid.protobuf.rpc.Invocation.method_name)
  return method_name_;
}
inline ::std::string* Invocation::release_method_name() {
  clear_has_method_name();
  if (method_name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = method_name_;
    method_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void Invocation::set_allocated_method_name(::std::string* method_name) {
  if (method_name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete method_name_;
  }
  if (method_name) {
    set_has_method_name();
    method_name_ = method_name;
  } else {
    clear_has_method_name();
    method_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:kydroid.protobuf.rpc.Invocation.method_name)
}

// required bytes parameters = 3;
inline bool Invocation::has_parameters() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Invocation::set_has_parameters() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Invocation::clear_has_parameters() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Invocation::clear_parameters() {
  if (parameters_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    parameters_->clear();
  }
  clear_has_parameters();
}
inline const ::std::string& Invocation::parameters() const {
  // @@protoc_insertion_point(field_get:kydroid.protobuf.rpc.Invocation.parameters)
  return *parameters_;
}
inline void Invocation::set_parameters(const ::std::string& value) {
  set_has_parameters();
  if (parameters_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    parameters_ = new ::std::string;
  }
  parameters_->assign(value);
  // @@protoc_insertion_point(field_set:kydroid.protobuf.rpc.Invocation.parameters)
}
inline void Invocation::set_parameters(const char* value) {
  set_has_parameters();
  if (parameters_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    parameters_ = new ::std::string;
  }
  parameters_->assign(value);
  // @@protoc_insertion_point(field_set_char:kydroid.protobuf.rpc.Invocation.parameters)
}
inline void Invocation::set_parameters(const void* value, size_t size) {
  set_has_parameters();
  if (parameters_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    parameters_ = new ::std::string;
  }
  parameters_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:kydroid.protobuf.rpc.Invocation.parameters)
}
inline ::std::string* Invocation::mutable_parameters() {
  set_has_parameters();
  if (parameters_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    parameters_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:kydroid.protobuf.rpc.Invocation.parameters)
  return parameters_;
}
inline ::std::string* Invocation::release_parameters() {
  clear_has_parameters();
  if (parameters_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = parameters_;
    parameters_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void Invocation::set_allocated_parameters(::std::string* parameters) {
  if (parameters_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete parameters_;
  }
  if (parameters) {
    set_has_parameters();
    parameters_ = parameters;
  } else {
    clear_has_parameters();
    parameters_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:kydroid.protobuf.rpc.Invocation.parameters)
}

// required uint32 protocol_version = 4;
inline bool Invocation::has_protocol_version() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Invocation::set_has_protocol_version() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Invocation::clear_has_protocol_version() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Invocation::clear_protocol_version() {
  protocol_version_ = 0u;
  clear_has_protocol_version();
}
inline ::google::protobuf::uint32 Invocation::protocol_version() const {
  // @@protoc_insertion_point(field_get:kydroid.protobuf.rpc.Invocation.protocol_version)
  return protocol_version_;
}
inline void Invocation::set_protocol_version(::google::protobuf::uint32 value) {
  set_has_protocol_version();
  protocol_version_ = value;
  // @@protoc_insertion_point(field_set:kydroid.protobuf.rpc.Invocation.protocol_version)
}

// -------------------------------------------------------------------

// Result

// optional uint32 id = 1;
inline bool Result::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Result::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Result::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Result::clear_id() {
  id_ = 0u;
  clear_has_id();
}
inline ::google::protobuf::uint32 Result::id() const {
  // @@protoc_insertion_point(field_get:kydroid.protobuf.rpc.Result.id)
  return id_;
}
inline void Result::set_id(::google::protobuf::uint32 value) {
  set_has_id();
  id_ = value;
  // @@protoc_insertion_point(field_set:kydroid.protobuf.rpc.Result.id)
}

// optional bytes response = 2;
inline bool Result::has_response() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Result::set_has_response() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Result::clear_has_response() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Result::clear_response() {
  if (response_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    response_->clear();
  }
  clear_has_response();
}
inline const ::std::string& Result::response() const {
  // @@protoc_insertion_point(field_get:kydroid.protobuf.rpc.Result.response)
  return *response_;
}
inline void Result::set_response(const ::std::string& value) {
  set_has_response();
  if (response_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    response_ = new ::std::string;
  }
  response_->assign(value);
  // @@protoc_insertion_point(field_set:kydroid.protobuf.rpc.Result.response)
}
inline void Result::set_response(const char* value) {
  set_has_response();
  if (response_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    response_ = new ::std::string;
  }
  response_->assign(value);
  // @@protoc_insertion_point(field_set_char:kydroid.protobuf.rpc.Result.response)
}
inline void Result::set_response(const void* value, size_t size) {
  set_has_response();
  if (response_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    response_ = new ::std::string;
  }
  response_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:kydroid.protobuf.rpc.Result.response)
}
inline ::std::string* Result::mutable_response() {
  set_has_response();
  if (response_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    response_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:kydroid.protobuf.rpc.Result.response)
  return response_;
}
inline ::std::string* Result::release_response() {
  clear_has_response();
  if (response_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = response_;
    response_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void Result::set_allocated_response(::std::string* response) {
  if (response_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete response_;
  }
  if (response) {
    set_has_response();
    response_ = response;
  } else {
    clear_has_response();
    response_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:kydroid.protobuf.rpc.Result.response)
}

// repeated bytes events = 3;
inline int Result::events_size() const {
  return events_.size();
}
inline void Result::clear_events() {
  events_.Clear();
}
inline const ::std::string& Result::events(int index) const {
  // @@protoc_insertion_point(field_get:kydroid.protobuf.rpc.Result.events)
  return events_.Get(index);
}
inline ::std::string* Result::mutable_events(int index) {
  // @@protoc_insertion_point(field_mutable:kydroid.protobuf.rpc.Result.events)
  return events_.Mutable(index);
}
inline void Result::set_events(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:kydroid.protobuf.rpc.Result.events)
  events_.Mutable(index)->assign(value);
}
inline void Result::set_events(int index, const char* value) {
  events_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:kydroid.protobuf.rpc.Result.events)
}
inline void Result::set_events(int index, const void* value, size_t size) {
  events_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:kydroid.protobuf.rpc.Result.events)
}
inline ::std::string* Result::add_events() {
  return events_.Add();
}
inline void Result::add_events(const ::std::string& value) {
  events_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:kydroid.protobuf.rpc.Result.events)
}
inline void Result::add_events(const char* value) {
  events_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:kydroid.protobuf.rpc.Result.events)
}
inline void Result::add_events(const void* value, size_t size) {
  events_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:kydroid.protobuf.rpc.Result.events)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
Result::events() const {
  // @@protoc_insertion_point(field_list:kydroid.protobuf.rpc.Result.events)
  return events_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
Result::mutable_events() {
  // @@protoc_insertion_point(field_mutable_list:kydroid.protobuf.rpc.Result.events)
  return &events_;
}

// -------------------------------------------------------------------

// StructuredError

// optional uint32 domain = 1;
inline bool StructuredError::has_domain() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void StructuredError::set_has_domain() {
  _has_bits_[0] |= 0x00000001u;
}
inline void StructuredError::clear_has_domain() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void StructuredError::clear_domain() {
  domain_ = 0u;
  clear_has_domain();
}
inline ::google::protobuf::uint32 StructuredError::domain() const {
  // @@protoc_insertion_point(field_get:kydroid.protobuf.rpc.StructuredError.domain)
  return domain_;
}
inline void StructuredError::set_domain(::google::protobuf::uint32 value) {
  set_has_domain();
  domain_ = value;
  // @@protoc_insertion_point(field_set:kydroid.protobuf.rpc.StructuredError.domain)
}

// optional uint32 code = 2;
inline bool StructuredError::has_code() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void StructuredError::set_has_code() {
  _has_bits_[0] |= 0x00000002u;
}
inline void StructuredError::clear_has_code() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void StructuredError::clear_code() {
  code_ = 0u;
  clear_has_code();
}
inline ::google::protobuf::uint32 StructuredError::code() const {
  // @@protoc_insertion_point(field_get:kydroid.protobuf.rpc.StructuredError.code)
  return code_;
}
inline void StructuredError::set_code(::google::protobuf::uint32 value) {
  set_has_code();
  code_ = value;
  // @@protoc_insertion_point(field_set:kydroid.protobuf.rpc.StructuredError.code)
}

// -------------------------------------------------------------------

// Void

// optional string error = 127;
inline bool Void::has_error() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Void::set_has_error() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Void::clear_has_error() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Void::clear_error() {
  if (error_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    error_->clear();
  }
  clear_has_error();
}
inline const ::std::string& Void::error() const {
  // @@protoc_insertion_point(field_get:kydroid.protobuf.rpc.Void.error)
  return *error_;
}
inline void Void::set_error(const ::std::string& value) {
  set_has_error();
  if (error_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    error_ = new ::std::string;
  }
  error_->assign(value);
  // @@protoc_insertion_point(field_set:kydroid.protobuf.rpc.Void.error)
}
inline void Void::set_error(const char* value) {
  set_has_error();
  if (error_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    error_ = new ::std::string;
  }
  error_->assign(value);
  // @@protoc_insertion_point(field_set_char:kydroid.protobuf.rpc.Void.error)
}
inline void Void::set_error(const char* value, size_t size) {
  set_has_error();
  if (error_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    error_ = new ::std::string;
  }
  error_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:kydroid.protobuf.rpc.Void.error)
}
inline ::std::string* Void::mutable_error() {
  set_has_error();
  if (error_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    error_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:kydroid.protobuf.rpc.Void.error)
  return error_;
}
inline ::std::string* Void::release_error() {
  clear_has_error();
  if (error_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = error_;
    error_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void Void::set_allocated_error(::std::string* error) {
  if (error_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete error_;
  }
  if (error) {
    set_has_error();
    error_ = error;
  } else {
    clear_has_error();
    error_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:kydroid.protobuf.rpc.Void.error)
}

// optional .kydroid.protobuf.rpc.StructuredError structured_error = 128;
inline bool Void::has_structured_error() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Void::set_has_structured_error() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Void::clear_has_structured_error() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Void::clear_structured_error() {
  if (structured_error_ != NULL) structured_error_->::kydroid::protobuf::rpc::StructuredError::Clear();
  clear_has_structured_error();
}
inline const ::kydroid::protobuf::rpc::StructuredError& Void::structured_error() const {
  // @@protoc_insertion_point(field_get:kydroid.protobuf.rpc.Void.structured_error)
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  return structured_error_ != NULL ? *structured_error_ : *default_instance().structured_error_;
#else
  return structured_error_ != NULL ? *structured_error_ : *default_instance_->structured_error_;
#endif
}
inline ::kydroid::protobuf::rpc::StructuredError* Void::mutable_structured_error() {
  set_has_structured_error();
  if (structured_error_ == NULL) structured_error_ = new ::kydroid::protobuf::rpc::StructuredError;
  // @@protoc_insertion_point(field_mutable:kydroid.protobuf.rpc.Void.structured_error)
  return structured_error_;
}
inline ::kydroid::protobuf::rpc::StructuredError* Void::release_structured_error() {
  clear_has_structured_error();
  ::kydroid::protobuf::rpc::StructuredError* temp = structured_error_;
  structured_error_ = NULL;
  return temp;
}
inline void Void::set_allocated_structured_error(::kydroid::protobuf::rpc::StructuredError* structured_error) {
  delete structured_error_;
  structured_error_ = structured_error;
  if (structured_error) {
    set_has_structured_error();
  } else {
    clear_has_structured_error();
  }
  // @@protoc_insertion_point(field_set_allocated:kydroid.protobuf.rpc.Void.structured_error)
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace rpc
}  // namespace protobuf
}  // namespace kydroid

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_kydroid_5frpc_2eproto__INCLUDED
