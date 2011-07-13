// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: msgtest.proto

#ifndef PROTOBUF_msgtest_2eproto__INCLUDED
#define PROTOBUF_msgtest_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2004000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_message_reflection.h>
// @@protoc_insertion_point(includes)

namespace msgtest {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_msgtest_2eproto();
void protobuf_AssignDesc_msgtest_2eproto();
void protobuf_ShutdownFile_msgtest_2eproto();

class request;
class response;

// ===================================================================

class request : public ::google::protobuf::Message {
 public:
  request();
  virtual ~request();
  
  request(const request& from);
  
  inline request& operator=(const request& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const request& default_instance();
  
  void Swap(request* other);
  
  // implements Message ----------------------------------------------
  
  request* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const request& from);
  void MergeFrom(const request& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // optional int64 id = 1;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 1;
  inline ::google::protobuf::int64 id() const;
  inline void set_id(::google::protobuf::int64 value);
  
  // optional string login = 2;
  inline bool has_login() const;
  inline void clear_login();
  static const int kLoginFieldNumber = 2;
  inline const ::std::string& login() const;
  inline void set_login(const ::std::string& value);
  inline void set_login(const char* value);
  inline void set_login(const char* value, size_t size);
  inline ::std::string* mutable_login();
  inline ::std::string* release_login();
  
  // @@protoc_insertion_point(class_scope:msgtest.request)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_login();
  inline void clear_has_login();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::google::protobuf::int64 id_;
  ::std::string* login_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];
  
  friend void  protobuf_AddDesc_msgtest_2eproto();
  friend void protobuf_AssignDesc_msgtest_2eproto();
  friend void protobuf_ShutdownFile_msgtest_2eproto();
  
  void InitAsDefaultInstance();
  static request* default_instance_;
};
// -------------------------------------------------------------------

class response : public ::google::protobuf::Message {
 public:
  response();
  virtual ~response();
  
  response(const response& from);
  
  inline response& operator=(const response& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const response& default_instance();
  
  void Swap(response* other);
  
  // implements Message ----------------------------------------------
  
  response* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const response& from);
  void MergeFrom(const response& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // optional string firstname = 1;
  inline bool has_firstname() const;
  inline void clear_firstname();
  static const int kFirstnameFieldNumber = 1;
  inline const ::std::string& firstname() const;
  inline void set_firstname(const ::std::string& value);
  inline void set_firstname(const char* value);
  inline void set_firstname(const char* value, size_t size);
  inline ::std::string* mutable_firstname();
  inline ::std::string* release_firstname();
  
  // optional string lastname = 2;
  inline bool has_lastname() const;
  inline void clear_lastname();
  static const int kLastnameFieldNumber = 2;
  inline const ::std::string& lastname() const;
  inline void set_lastname(const ::std::string& value);
  inline void set_lastname(const char* value);
  inline void set_lastname(const char* value, size_t size);
  inline ::std::string* mutable_lastname();
  inline ::std::string* release_lastname();
  
  // optional int32 age = 3;
  inline bool has_age() const;
  inline void clear_age();
  static const int kAgeFieldNumber = 3;
  inline ::google::protobuf::int32 age() const;
  inline void set_age(::google::protobuf::int32 value);
  
  // @@protoc_insertion_point(class_scope:msgtest.response)
 private:
  inline void set_has_firstname();
  inline void clear_has_firstname();
  inline void set_has_lastname();
  inline void clear_has_lastname();
  inline void set_has_age();
  inline void clear_has_age();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::std::string* firstname_;
  ::std::string* lastname_;
  ::google::protobuf::int32 age_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];
  
  friend void  protobuf_AddDesc_msgtest_2eproto();
  friend void protobuf_AssignDesc_msgtest_2eproto();
  friend void protobuf_ShutdownFile_msgtest_2eproto();
  
  void InitAsDefaultInstance();
  static response* default_instance_;
};
// ===================================================================


// ===================================================================

// request

// optional int64 id = 1;
inline bool request::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void request::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void request::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void request::clear_id() {
  id_ = GOOGLE_LONGLONG(0);
  clear_has_id();
}
inline ::google::protobuf::int64 request::id() const {
  return id_;
}
inline void request::set_id(::google::protobuf::int64 value) {
  set_has_id();
  id_ = value;
}

// optional string login = 2;
inline bool request::has_login() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void request::set_has_login() {
  _has_bits_[0] |= 0x00000002u;
}
inline void request::clear_has_login() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void request::clear_login() {
  if (login_ != &::google::protobuf::internal::kEmptyString) {
    login_->clear();
  }
  clear_has_login();
}
inline const ::std::string& request::login() const {
  return *login_;
}
inline void request::set_login(const ::std::string& value) {
  set_has_login();
  if (login_ == &::google::protobuf::internal::kEmptyString) {
    login_ = new ::std::string;
  }
  login_->assign(value);
}
inline void request::set_login(const char* value) {
  set_has_login();
  if (login_ == &::google::protobuf::internal::kEmptyString) {
    login_ = new ::std::string;
  }
  login_->assign(value);
}
inline void request::set_login(const char* value, size_t size) {
  set_has_login();
  if (login_ == &::google::protobuf::internal::kEmptyString) {
    login_ = new ::std::string;
  }
  login_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* request::mutable_login() {
  set_has_login();
  if (login_ == &::google::protobuf::internal::kEmptyString) {
    login_ = new ::std::string;
  }
  return login_;
}
inline ::std::string* request::release_login() {
  clear_has_login();
  if (login_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = login_;
    login_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// -------------------------------------------------------------------

// response

// optional string firstname = 1;
inline bool response::has_firstname() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void response::set_has_firstname() {
  _has_bits_[0] |= 0x00000001u;
}
inline void response::clear_has_firstname() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void response::clear_firstname() {
  if (firstname_ != &::google::protobuf::internal::kEmptyString) {
    firstname_->clear();
  }
  clear_has_firstname();
}
inline const ::std::string& response::firstname() const {
  return *firstname_;
}
inline void response::set_firstname(const ::std::string& value) {
  set_has_firstname();
  if (firstname_ == &::google::protobuf::internal::kEmptyString) {
    firstname_ = new ::std::string;
  }
  firstname_->assign(value);
}
inline void response::set_firstname(const char* value) {
  set_has_firstname();
  if (firstname_ == &::google::protobuf::internal::kEmptyString) {
    firstname_ = new ::std::string;
  }
  firstname_->assign(value);
}
inline void response::set_firstname(const char* value, size_t size) {
  set_has_firstname();
  if (firstname_ == &::google::protobuf::internal::kEmptyString) {
    firstname_ = new ::std::string;
  }
  firstname_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* response::mutable_firstname() {
  set_has_firstname();
  if (firstname_ == &::google::protobuf::internal::kEmptyString) {
    firstname_ = new ::std::string;
  }
  return firstname_;
}
inline ::std::string* response::release_firstname() {
  clear_has_firstname();
  if (firstname_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = firstname_;
    firstname_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// optional string lastname = 2;
inline bool response::has_lastname() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void response::set_has_lastname() {
  _has_bits_[0] |= 0x00000002u;
}
inline void response::clear_has_lastname() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void response::clear_lastname() {
  if (lastname_ != &::google::protobuf::internal::kEmptyString) {
    lastname_->clear();
  }
  clear_has_lastname();
}
inline const ::std::string& response::lastname() const {
  return *lastname_;
}
inline void response::set_lastname(const ::std::string& value) {
  set_has_lastname();
  if (lastname_ == &::google::protobuf::internal::kEmptyString) {
    lastname_ = new ::std::string;
  }
  lastname_->assign(value);
}
inline void response::set_lastname(const char* value) {
  set_has_lastname();
  if (lastname_ == &::google::protobuf::internal::kEmptyString) {
    lastname_ = new ::std::string;
  }
  lastname_->assign(value);
}
inline void response::set_lastname(const char* value, size_t size) {
  set_has_lastname();
  if (lastname_ == &::google::protobuf::internal::kEmptyString) {
    lastname_ = new ::std::string;
  }
  lastname_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* response::mutable_lastname() {
  set_has_lastname();
  if (lastname_ == &::google::protobuf::internal::kEmptyString) {
    lastname_ = new ::std::string;
  }
  return lastname_;
}
inline ::std::string* response::release_lastname() {
  clear_has_lastname();
  if (lastname_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = lastname_;
    lastname_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// optional int32 age = 3;
inline bool response::has_age() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void response::set_has_age() {
  _has_bits_[0] |= 0x00000004u;
}
inline void response::clear_has_age() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void response::clear_age() {
  age_ = 0;
  clear_has_age();
}
inline ::google::protobuf::int32 response::age() const {
  return age_;
}
inline void response::set_age(::google::protobuf::int32 value) {
  set_has_age();
  age_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace msgtest

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_msgtest_2eproto__INCLUDED