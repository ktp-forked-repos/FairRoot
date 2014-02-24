// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: FairTestDetectorPayload.proto

#ifndef PROTOBUF_FairTestDetectorPayload_2eproto__INCLUDED
#define PROTOBUF_FairTestDetectorPayload_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace TestDetectorProto {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_FairTestDetectorPayload_2eproto();
void protobuf_AssignDesc_FairTestDetectorPayload_2eproto();
void protobuf_ShutdownFile_FairTestDetectorPayload_2eproto();

class Digi;
class Hit;
class DigiPayload;
class HitPayload;

// ===================================================================

class Digi : public ::google::protobuf::Message {
 public:
  Digi();
  virtual ~Digi();

  Digi(const Digi& from);

  inline Digi& operator=(const Digi& from) {
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
  static const Digi& default_instance();

  void Swap(Digi* other);

  // implements Message ----------------------------------------------

  Digi* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Digi& from);
  void MergeFrom(const Digi& from);
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

  // optional int32 fX = 1;
  inline bool has_fx() const;
  inline void clear_fx();
  static const int kFXFieldNumber = 1;
  inline ::google::protobuf::int32 fx() const;
  inline void set_fx(::google::protobuf::int32 value);

  // optional int32 fY = 2;
  inline bool has_fy() const;
  inline void clear_fy();
  static const int kFYFieldNumber = 2;
  inline ::google::protobuf::int32 fy() const;
  inline void set_fy(::google::protobuf::int32 value);

  // optional int32 fZ = 3;
  inline bool has_fz() const;
  inline void clear_fz();
  static const int kFZFieldNumber = 3;
  inline ::google::protobuf::int32 fz() const;
  inline void set_fz(::google::protobuf::int32 value);

  // optional double fTimeStamp = 4;
  inline bool has_ftimestamp() const;
  inline void clear_ftimestamp();
  static const int kFTimeStampFieldNumber = 4;
  inline double ftimestamp() const;
  inline void set_ftimestamp(double value);

  // optional double fTimeStampError = 5;
  inline bool has_ftimestamperror() const;
  inline void clear_ftimestamperror();
  static const int kFTimeStampErrorFieldNumber = 5;
  inline double ftimestamperror() const;
  inline void set_ftimestamperror(double value);

  // @@protoc_insertion_point(class_scope:TestDetectorProto.Digi)
 private:
  inline void set_has_fx();
  inline void clear_has_fx();
  inline void set_has_fy();
  inline void clear_has_fy();
  inline void set_has_fz();
  inline void clear_has_fz();
  inline void set_has_ftimestamp();
  inline void clear_has_ftimestamp();
  inline void set_has_ftimestamperror();
  inline void clear_has_ftimestamperror();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int32 fx_;
  ::google::protobuf::int32 fy_;
  double ftimestamp_;
  double ftimestamperror_;
  ::google::protobuf::int32 fz_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(5 + 31) / 32];

  friend void  protobuf_AddDesc_FairTestDetectorPayload_2eproto();
  friend void protobuf_AssignDesc_FairTestDetectorPayload_2eproto();
  friend void protobuf_ShutdownFile_FairTestDetectorPayload_2eproto();

  void InitAsDefaultInstance();
  static Digi* default_instance_;
};
// -------------------------------------------------------------------

class Hit : public ::google::protobuf::Message {
 public:
  Hit();
  virtual ~Hit();

  Hit(const Hit& from);

  inline Hit& operator=(const Hit& from) {
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
  static const Hit& default_instance();

  void Swap(Hit* other);

  // implements Message ----------------------------------------------

  Hit* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Hit& from);
  void MergeFrom(const Hit& from);
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

  // optional int32 detID = 1;
  inline bool has_detid() const;
  inline void clear_detid();
  static const int kDetIDFieldNumber = 1;
  inline ::google::protobuf::int32 detid() const;
  inline void set_detid(::google::protobuf::int32 value);

  // optional int32 mcindex = 2;
  inline bool has_mcindex() const;
  inline void clear_mcindex();
  static const int kMcindexFieldNumber = 2;
  inline ::google::protobuf::int32 mcindex() const;
  inline void set_mcindex(::google::protobuf::int32 value);

  // optional double posX = 3;
  inline bool has_posx() const;
  inline void clear_posx();
  static const int kPosXFieldNumber = 3;
  inline double posx() const;
  inline void set_posx(double value);

  // optional double posY = 4;
  inline bool has_posy() const;
  inline void clear_posy();
  static const int kPosYFieldNumber = 4;
  inline double posy() const;
  inline void set_posy(double value);

  // optional double posZ = 5;
  inline bool has_posz() const;
  inline void clear_posz();
  static const int kPosZFieldNumber = 5;
  inline double posz() const;
  inline void set_posz(double value);

  // optional double dposX = 6;
  inline bool has_dposx() const;
  inline void clear_dposx();
  static const int kDposXFieldNumber = 6;
  inline double dposx() const;
  inline void set_dposx(double value);

  // optional double dposY = 7;
  inline bool has_dposy() const;
  inline void clear_dposy();
  static const int kDposYFieldNumber = 7;
  inline double dposy() const;
  inline void set_dposy(double value);

  // optional double dposZ = 8;
  inline bool has_dposz() const;
  inline void clear_dposz();
  static const int kDposZFieldNumber = 8;
  inline double dposz() const;
  inline void set_dposz(double value);

  // optional double fTimeStamp = 9;
  inline bool has_ftimestamp() const;
  inline void clear_ftimestamp();
  static const int kFTimeStampFieldNumber = 9;
  inline double ftimestamp() const;
  inline void set_ftimestamp(double value);

  // optional double fTimeStampError = 10;
  inline bool has_ftimestamperror() const;
  inline void clear_ftimestamperror();
  static const int kFTimeStampErrorFieldNumber = 10;
  inline double ftimestamperror() const;
  inline void set_ftimestamperror(double value);

  // @@protoc_insertion_point(class_scope:TestDetectorProto.Hit)
 private:
  inline void set_has_detid();
  inline void clear_has_detid();
  inline void set_has_mcindex();
  inline void clear_has_mcindex();
  inline void set_has_posx();
  inline void clear_has_posx();
  inline void set_has_posy();
  inline void clear_has_posy();
  inline void set_has_posz();
  inline void clear_has_posz();
  inline void set_has_dposx();
  inline void clear_has_dposx();
  inline void set_has_dposy();
  inline void clear_has_dposy();
  inline void set_has_dposz();
  inline void clear_has_dposz();
  inline void set_has_ftimestamp();
  inline void clear_has_ftimestamp();
  inline void set_has_ftimestamperror();
  inline void clear_has_ftimestamperror();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int32 detid_;
  ::google::protobuf::int32 mcindex_;
  double posx_;
  double posy_;
  double posz_;
  double dposx_;
  double dposy_;
  double dposz_;
  double ftimestamp_;
  double ftimestamperror_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(10 + 31) / 32];

  friend void  protobuf_AddDesc_FairTestDetectorPayload_2eproto();
  friend void protobuf_AssignDesc_FairTestDetectorPayload_2eproto();
  friend void protobuf_ShutdownFile_FairTestDetectorPayload_2eproto();

  void InitAsDefaultInstance();
  static Hit* default_instance_;
};
// -------------------------------------------------------------------

class DigiPayload : public ::google::protobuf::Message {
 public:
  DigiPayload();
  virtual ~DigiPayload();

  DigiPayload(const DigiPayload& from);

  inline DigiPayload& operator=(const DigiPayload& from) {
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
  static const DigiPayload& default_instance();

  void Swap(DigiPayload* other);

  // implements Message ----------------------------------------------

  DigiPayload* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const DigiPayload& from);
  void MergeFrom(const DigiPayload& from);
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

  // repeated .TestDetectorProto.Digi digi = 1;
  inline int digi_size() const;
  inline void clear_digi();
  static const int kDigiFieldNumber = 1;
  inline const ::TestDetectorProto::Digi& digi(int index) const;
  inline ::TestDetectorProto::Digi* mutable_digi(int index);
  inline ::TestDetectorProto::Digi* add_digi();
  inline const ::google::protobuf::RepeatedPtrField< ::TestDetectorProto::Digi >&
      digi() const;
  inline ::google::protobuf::RepeatedPtrField< ::TestDetectorProto::Digi >*
      mutable_digi();

  // @@protoc_insertion_point(class_scope:TestDetectorProto.DigiPayload)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::RepeatedPtrField< ::TestDetectorProto::Digi > digi_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_FairTestDetectorPayload_2eproto();
  friend void protobuf_AssignDesc_FairTestDetectorPayload_2eproto();
  friend void protobuf_ShutdownFile_FairTestDetectorPayload_2eproto();

  void InitAsDefaultInstance();
  static DigiPayload* default_instance_;
};
// -------------------------------------------------------------------

class HitPayload : public ::google::protobuf::Message {
 public:
  HitPayload();
  virtual ~HitPayload();

  HitPayload(const HitPayload& from);

  inline HitPayload& operator=(const HitPayload& from) {
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
  static const HitPayload& default_instance();

  void Swap(HitPayload* other);

  // implements Message ----------------------------------------------

  HitPayload* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const HitPayload& from);
  void MergeFrom(const HitPayload& from);
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

  // repeated .TestDetectorProto.Hit hit = 1;
  inline int hit_size() const;
  inline void clear_hit();
  static const int kHitFieldNumber = 1;
  inline const ::TestDetectorProto::Hit& hit(int index) const;
  inline ::TestDetectorProto::Hit* mutable_hit(int index);
  inline ::TestDetectorProto::Hit* add_hit();
  inline const ::google::protobuf::RepeatedPtrField< ::TestDetectorProto::Hit >&
      hit() const;
  inline ::google::protobuf::RepeatedPtrField< ::TestDetectorProto::Hit >*
      mutable_hit();

  // @@protoc_insertion_point(class_scope:TestDetectorProto.HitPayload)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::RepeatedPtrField< ::TestDetectorProto::Hit > hit_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_FairTestDetectorPayload_2eproto();
  friend void protobuf_AssignDesc_FairTestDetectorPayload_2eproto();
  friend void protobuf_ShutdownFile_FairTestDetectorPayload_2eproto();

  void InitAsDefaultInstance();
  static HitPayload* default_instance_;
};
// ===================================================================


// ===================================================================

// Digi

// optional int32 fX = 1;
inline bool Digi::has_fx() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Digi::set_has_fx() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Digi::clear_has_fx() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Digi::clear_fx() {
  fx_ = 0;
  clear_has_fx();
}
inline ::google::protobuf::int32 Digi::fx() const {
  return fx_;
}
inline void Digi::set_fx(::google::protobuf::int32 value) {
  set_has_fx();
  fx_ = value;
}

// optional int32 fY = 2;
inline bool Digi::has_fy() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Digi::set_has_fy() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Digi::clear_has_fy() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Digi::clear_fy() {
  fy_ = 0;
  clear_has_fy();
}
inline ::google::protobuf::int32 Digi::fy() const {
  return fy_;
}
inline void Digi::set_fy(::google::protobuf::int32 value) {
  set_has_fy();
  fy_ = value;
}

// optional int32 fZ = 3;
inline bool Digi::has_fz() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Digi::set_has_fz() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Digi::clear_has_fz() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Digi::clear_fz() {
  fz_ = 0;
  clear_has_fz();
}
inline ::google::protobuf::int32 Digi::fz() const {
  return fz_;
}
inline void Digi::set_fz(::google::protobuf::int32 value) {
  set_has_fz();
  fz_ = value;
}

// optional double fTimeStamp = 4;
inline bool Digi::has_ftimestamp() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Digi::set_has_ftimestamp() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Digi::clear_has_ftimestamp() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Digi::clear_ftimestamp() {
  ftimestamp_ = 0;
  clear_has_ftimestamp();
}
inline double Digi::ftimestamp() const {
  return ftimestamp_;
}
inline void Digi::set_ftimestamp(double value) {
  set_has_ftimestamp();
  ftimestamp_ = value;
}

// optional double fTimeStampError = 5;
inline bool Digi::has_ftimestamperror() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void Digi::set_has_ftimestamperror() {
  _has_bits_[0] |= 0x00000010u;
}
inline void Digi::clear_has_ftimestamperror() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void Digi::clear_ftimestamperror() {
  ftimestamperror_ = 0;
  clear_has_ftimestamperror();
}
inline double Digi::ftimestamperror() const {
  return ftimestamperror_;
}
inline void Digi::set_ftimestamperror(double value) {
  set_has_ftimestamperror();
  ftimestamperror_ = value;
}

// -------------------------------------------------------------------

// Hit

// optional int32 detID = 1;
inline bool Hit::has_detid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Hit::set_has_detid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Hit::clear_has_detid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Hit::clear_detid() {
  detid_ = 0;
  clear_has_detid();
}
inline ::google::protobuf::int32 Hit::detid() const {
  return detid_;
}
inline void Hit::set_detid(::google::protobuf::int32 value) {
  set_has_detid();
  detid_ = value;
}

// optional int32 mcindex = 2;
inline bool Hit::has_mcindex() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Hit::set_has_mcindex() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Hit::clear_has_mcindex() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Hit::clear_mcindex() {
  mcindex_ = 0;
  clear_has_mcindex();
}
inline ::google::protobuf::int32 Hit::mcindex() const {
  return mcindex_;
}
inline void Hit::set_mcindex(::google::protobuf::int32 value) {
  set_has_mcindex();
  mcindex_ = value;
}

// optional double posX = 3;
inline bool Hit::has_posx() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Hit::set_has_posx() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Hit::clear_has_posx() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Hit::clear_posx() {
  posx_ = 0;
  clear_has_posx();
}
inline double Hit::posx() const {
  return posx_;
}
inline void Hit::set_posx(double value) {
  set_has_posx();
  posx_ = value;
}

// optional double posY = 4;
inline bool Hit::has_posy() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Hit::set_has_posy() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Hit::clear_has_posy() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Hit::clear_posy() {
  posy_ = 0;
  clear_has_posy();
}
inline double Hit::posy() const {
  return posy_;
}
inline void Hit::set_posy(double value) {
  set_has_posy();
  posy_ = value;
}

// optional double posZ = 5;
inline bool Hit::has_posz() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void Hit::set_has_posz() {
  _has_bits_[0] |= 0x00000010u;
}
inline void Hit::clear_has_posz() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void Hit::clear_posz() {
  posz_ = 0;
  clear_has_posz();
}
inline double Hit::posz() const {
  return posz_;
}
inline void Hit::set_posz(double value) {
  set_has_posz();
  posz_ = value;
}

// optional double dposX = 6;
inline bool Hit::has_dposx() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void Hit::set_has_dposx() {
  _has_bits_[0] |= 0x00000020u;
}
inline void Hit::clear_has_dposx() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void Hit::clear_dposx() {
  dposx_ = 0;
  clear_has_dposx();
}
inline double Hit::dposx() const {
  return dposx_;
}
inline void Hit::set_dposx(double value) {
  set_has_dposx();
  dposx_ = value;
}

// optional double dposY = 7;
inline bool Hit::has_dposy() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void Hit::set_has_dposy() {
  _has_bits_[0] |= 0x00000040u;
}
inline void Hit::clear_has_dposy() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void Hit::clear_dposy() {
  dposy_ = 0;
  clear_has_dposy();
}
inline double Hit::dposy() const {
  return dposy_;
}
inline void Hit::set_dposy(double value) {
  set_has_dposy();
  dposy_ = value;
}

// optional double dposZ = 8;
inline bool Hit::has_dposz() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void Hit::set_has_dposz() {
  _has_bits_[0] |= 0x00000080u;
}
inline void Hit::clear_has_dposz() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void Hit::clear_dposz() {
  dposz_ = 0;
  clear_has_dposz();
}
inline double Hit::dposz() const {
  return dposz_;
}
inline void Hit::set_dposz(double value) {
  set_has_dposz();
  dposz_ = value;
}

// optional double fTimeStamp = 9;
inline bool Hit::has_ftimestamp() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void Hit::set_has_ftimestamp() {
  _has_bits_[0] |= 0x00000100u;
}
inline void Hit::clear_has_ftimestamp() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void Hit::clear_ftimestamp() {
  ftimestamp_ = 0;
  clear_has_ftimestamp();
}
inline double Hit::ftimestamp() const {
  return ftimestamp_;
}
inline void Hit::set_ftimestamp(double value) {
  set_has_ftimestamp();
  ftimestamp_ = value;
}

// optional double fTimeStampError = 10;
inline bool Hit::has_ftimestamperror() const {
  return (_has_bits_[0] & 0x00000200u) != 0;
}
inline void Hit::set_has_ftimestamperror() {
  _has_bits_[0] |= 0x00000200u;
}
inline void Hit::clear_has_ftimestamperror() {
  _has_bits_[0] &= ~0x00000200u;
}
inline void Hit::clear_ftimestamperror() {
  ftimestamperror_ = 0;
  clear_has_ftimestamperror();
}
inline double Hit::ftimestamperror() const {
  return ftimestamperror_;
}
inline void Hit::set_ftimestamperror(double value) {
  set_has_ftimestamperror();
  ftimestamperror_ = value;
}

// -------------------------------------------------------------------

// DigiPayload

// repeated .TestDetectorProto.Digi digi = 1;
inline int DigiPayload::digi_size() const {
  return digi_.size();
}
inline void DigiPayload::clear_digi() {
  digi_.Clear();
}
inline const ::TestDetectorProto::Digi& DigiPayload::digi(int index) const {
  return digi_.Get(index);
}
inline ::TestDetectorProto::Digi* DigiPayload::mutable_digi(int index) {
  return digi_.Mutable(index);
}
inline ::TestDetectorProto::Digi* DigiPayload::add_digi() {
  return digi_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::TestDetectorProto::Digi >&
DigiPayload::digi() const {
  return digi_;
}
inline ::google::protobuf::RepeatedPtrField< ::TestDetectorProto::Digi >*
DigiPayload::mutable_digi() {
  return &digi_;
}

// -------------------------------------------------------------------

// HitPayload

// repeated .TestDetectorProto.Hit hit = 1;
inline int HitPayload::hit_size() const {
  return hit_.size();
}
inline void HitPayload::clear_hit() {
  hit_.Clear();
}
inline const ::TestDetectorProto::Hit& HitPayload::hit(int index) const {
  return hit_.Get(index);
}
inline ::TestDetectorProto::Hit* HitPayload::mutable_hit(int index) {
  return hit_.Mutable(index);
}
inline ::TestDetectorProto::Hit* HitPayload::add_hit() {
  return hit_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::TestDetectorProto::Hit >&
HitPayload::hit() const {
  return hit_;
}
inline ::google::protobuf::RepeatedPtrField< ::TestDetectorProto::Hit >*
HitPayload::mutable_hit() {
  return &hit_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace TestDetectorProto

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_FairTestDetectorPayload_2eproto__INCLUDED
