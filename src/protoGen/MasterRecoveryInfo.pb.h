// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MasterRecoveryInfo.proto

#ifndef PROTOBUF_MasterRecoveryInfo_2eproto__INCLUDED
#define PROTOBUF_MasterRecoveryInfo_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace RAMCloud {
namespace ProtoBuf {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_MasterRecoveryInfo_2eproto();
void protobuf_AssignDesc_MasterRecoveryInfo_2eproto();
void protobuf_ShutdownFile_MasterRecoveryInfo_2eproto();

class MasterRecoveryInfo;

// ===================================================================

class MasterRecoveryInfo : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:RAMCloud.ProtoBuf.MasterRecoveryInfo) */ {
 public:
  MasterRecoveryInfo();
  virtual ~MasterRecoveryInfo();

  MasterRecoveryInfo(const MasterRecoveryInfo& from);

  inline MasterRecoveryInfo& operator=(const MasterRecoveryInfo& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const MasterRecoveryInfo& default_instance();

  void Swap(MasterRecoveryInfo* other);

  // implements Message ----------------------------------------------

  inline MasterRecoveryInfo* New() const { return New(NULL); }

  MasterRecoveryInfo* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const MasterRecoveryInfo& from);
  void MergeFrom(const MasterRecoveryInfo& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(MasterRecoveryInfo* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional uint64 min_open_segment_id = 1 [default = 0];
  bool has_min_open_segment_id() const;
  void clear_min_open_segment_id();
  static const int kMinOpenSegmentIdFieldNumber = 1;
  ::google::protobuf::uint64 min_open_segment_id() const;
  void set_min_open_segment_id(::google::protobuf::uint64 value);

  // optional uint64 min_open_segment_epoch = 2 [default = 0];
  bool has_min_open_segment_epoch() const;
  void clear_min_open_segment_epoch();
  static const int kMinOpenSegmentEpochFieldNumber = 2;
  ::google::protobuf::uint64 min_open_segment_epoch() const;
  void set_min_open_segment_epoch(::google::protobuf::uint64 value);

  // @@protoc_insertion_point(class_scope:RAMCloud.ProtoBuf.MasterRecoveryInfo)
 private:
  inline void set_has_min_open_segment_id();
  inline void clear_has_min_open_segment_id();
  inline void set_has_min_open_segment_epoch();
  inline void clear_has_min_open_segment_epoch();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::uint64 min_open_segment_id_;
  ::google::protobuf::uint64 min_open_segment_epoch_;
  friend void  protobuf_AddDesc_MasterRecoveryInfo_2eproto();
  friend void protobuf_AssignDesc_MasterRecoveryInfo_2eproto();
  friend void protobuf_ShutdownFile_MasterRecoveryInfo_2eproto();

  void InitAsDefaultInstance();
  static MasterRecoveryInfo* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// MasterRecoveryInfo

// optional uint64 min_open_segment_id = 1 [default = 0];
inline bool MasterRecoveryInfo::has_min_open_segment_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void MasterRecoveryInfo::set_has_min_open_segment_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void MasterRecoveryInfo::clear_has_min_open_segment_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void MasterRecoveryInfo::clear_min_open_segment_id() {
  min_open_segment_id_ = GOOGLE_ULONGLONG(0);
  clear_has_min_open_segment_id();
}
inline ::google::protobuf::uint64 MasterRecoveryInfo::min_open_segment_id() const {
  // @@protoc_insertion_point(field_get:RAMCloud.ProtoBuf.MasterRecoveryInfo.min_open_segment_id)
  return min_open_segment_id_;
}
inline void MasterRecoveryInfo::set_min_open_segment_id(::google::protobuf::uint64 value) {
  set_has_min_open_segment_id();
  min_open_segment_id_ = value;
  // @@protoc_insertion_point(field_set:RAMCloud.ProtoBuf.MasterRecoveryInfo.min_open_segment_id)
}

// optional uint64 min_open_segment_epoch = 2 [default = 0];
inline bool MasterRecoveryInfo::has_min_open_segment_epoch() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void MasterRecoveryInfo::set_has_min_open_segment_epoch() {
  _has_bits_[0] |= 0x00000002u;
}
inline void MasterRecoveryInfo::clear_has_min_open_segment_epoch() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void MasterRecoveryInfo::clear_min_open_segment_epoch() {
  min_open_segment_epoch_ = GOOGLE_ULONGLONG(0);
  clear_has_min_open_segment_epoch();
}
inline ::google::protobuf::uint64 MasterRecoveryInfo::min_open_segment_epoch() const {
  // @@protoc_insertion_point(field_get:RAMCloud.ProtoBuf.MasterRecoveryInfo.min_open_segment_epoch)
  return min_open_segment_epoch_;
}
inline void MasterRecoveryInfo::set_min_open_segment_epoch(::google::protobuf::uint64 value) {
  set_has_min_open_segment_epoch();
  min_open_segment_epoch_ = value;
  // @@protoc_insertion_point(field_set:RAMCloud.ProtoBuf.MasterRecoveryInfo.min_open_segment_epoch)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace ProtoBuf
}  // namespace RAMCloud

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_MasterRecoveryInfo_2eproto__INCLUDED
// RAMCloud pragma [GCCWARN=0]
