// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/cloud/vision/v1/geometry.proto

#ifndef PROTOBUF_google_2fcloud_2fvision_2fv1_2fgeometry_2eproto__INCLUDED
#define PROTOBUF_google_2fcloud_2fvision_2fv1_2fgeometry_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3001000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3001000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
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

namespace google {
namespace cloud {
namespace vision {
namespace v1 {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_google_2fcloud_2fvision_2fv1_2fgeometry_2eproto();
void protobuf_InitDefaults_google_2fcloud_2fvision_2fv1_2fgeometry_2eproto();
void protobuf_AssignDesc_google_2fcloud_2fvision_2fv1_2fgeometry_2eproto();
void protobuf_ShutdownFile_google_2fcloud_2fvision_2fv1_2fgeometry_2eproto();

class BoundingPoly;
class Position;
class Vertex;

// ===================================================================

class Vertex : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.cloud.vision.v1.Vertex) */ {
 public:
  Vertex();
  virtual ~Vertex();

  Vertex(const Vertex& from);

  inline Vertex& operator=(const Vertex& from) {
    CopyFrom(from);
    return *this;
  }

  inline ::google::protobuf::Arena* GetArena() const { return GetArenaNoVirtual(); }
  inline void* GetMaybeArenaPointer() const {
    return MaybeArenaPtr();
  }
  static const ::google::protobuf::Descriptor* descriptor();
  static const Vertex& default_instance();

  static const Vertex* internal_default_instance();

  void UnsafeArenaSwap(Vertex* other);
  void Swap(Vertex* other);

  // implements Message ----------------------------------------------

  inline Vertex* New() const { return New(NULL); }

  Vertex* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Vertex& from);
  void MergeFrom(const Vertex& from);
  void Clear();
  bool IsInitialized() const;

  size_t ByteSizeLong() const;
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
  void InternalSwap(Vertex* other);
  void UnsafeMergeFrom(const Vertex& from);
  protected:
  explicit Vertex(::google::protobuf::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::google::protobuf::Arena* arena);
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

  // optional int32 x = 1;
  void clear_x();
  static const int kXFieldNumber = 1;
  ::google::protobuf::int32 x() const;
  void set_x(::google::protobuf::int32 value);

  // optional int32 y = 2;
  void clear_y();
  static const int kYFieldNumber = 2;
  ::google::protobuf::int32 y() const;
  void set_y(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:google.cloud.vision.v1.Vertex)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  friend class ::google::protobuf::Arena;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::google::protobuf::int32 x_;
  ::google::protobuf::int32 y_;
  mutable int _cached_size_;
  friend void  protobuf_InitDefaults_google_2fcloud_2fvision_2fv1_2fgeometry_2eproto_impl();
  friend void  protobuf_AddDesc_google_2fcloud_2fvision_2fv1_2fgeometry_2eproto_impl();
  friend void protobuf_AssignDesc_google_2fcloud_2fvision_2fv1_2fgeometry_2eproto();
  friend void protobuf_ShutdownFile_google_2fcloud_2fvision_2fv1_2fgeometry_2eproto();

  void InitAsDefaultInstance();
};
extern ::google::protobuf::internal::ExplicitlyConstructed<Vertex> Vertex_default_instance_;

// -------------------------------------------------------------------

class BoundingPoly : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.cloud.vision.v1.BoundingPoly) */ {
 public:
  BoundingPoly();
  virtual ~BoundingPoly();

  BoundingPoly(const BoundingPoly& from);

  inline BoundingPoly& operator=(const BoundingPoly& from) {
    CopyFrom(from);
    return *this;
  }

  inline ::google::protobuf::Arena* GetArena() const { return GetArenaNoVirtual(); }
  inline void* GetMaybeArenaPointer() const {
    return MaybeArenaPtr();
  }
  static const ::google::protobuf::Descriptor* descriptor();
  static const BoundingPoly& default_instance();

  static const BoundingPoly* internal_default_instance();

  void UnsafeArenaSwap(BoundingPoly* other);
  void Swap(BoundingPoly* other);

  // implements Message ----------------------------------------------

  inline BoundingPoly* New() const { return New(NULL); }

  BoundingPoly* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const BoundingPoly& from);
  void MergeFrom(const BoundingPoly& from);
  void Clear();
  bool IsInitialized() const;

  size_t ByteSizeLong() const;
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
  void InternalSwap(BoundingPoly* other);
  void UnsafeMergeFrom(const BoundingPoly& from);
  protected:
  explicit BoundingPoly(::google::protobuf::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::google::protobuf::Arena* arena);
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

  // repeated .google.cloud.vision.v1.Vertex vertices = 1;
  int vertices_size() const;
  void clear_vertices();
  static const int kVerticesFieldNumber = 1;
  const ::google::cloud::vision::v1::Vertex& vertices(int index) const;
  ::google::cloud::vision::v1::Vertex* mutable_vertices(int index);
  ::google::cloud::vision::v1::Vertex* add_vertices();
  ::google::protobuf::RepeatedPtrField< ::google::cloud::vision::v1::Vertex >*
      mutable_vertices();
  const ::google::protobuf::RepeatedPtrField< ::google::cloud::vision::v1::Vertex >&
      vertices() const;

  // @@protoc_insertion_point(class_scope:google.cloud.vision.v1.BoundingPoly)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  friend class ::google::protobuf::Arena;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::google::protobuf::RepeatedPtrField< ::google::cloud::vision::v1::Vertex > vertices_;
  mutable int _cached_size_;
  friend void  protobuf_InitDefaults_google_2fcloud_2fvision_2fv1_2fgeometry_2eproto_impl();
  friend void  protobuf_AddDesc_google_2fcloud_2fvision_2fv1_2fgeometry_2eproto_impl();
  friend void protobuf_AssignDesc_google_2fcloud_2fvision_2fv1_2fgeometry_2eproto();
  friend void protobuf_ShutdownFile_google_2fcloud_2fvision_2fv1_2fgeometry_2eproto();

  void InitAsDefaultInstance();
};
extern ::google::protobuf::internal::ExplicitlyConstructed<BoundingPoly> BoundingPoly_default_instance_;

// -------------------------------------------------------------------

class Position : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.cloud.vision.v1.Position) */ {
 public:
  Position();
  virtual ~Position();

  Position(const Position& from);

  inline Position& operator=(const Position& from) {
    CopyFrom(from);
    return *this;
  }

  inline ::google::protobuf::Arena* GetArena() const { return GetArenaNoVirtual(); }
  inline void* GetMaybeArenaPointer() const {
    return MaybeArenaPtr();
  }
  static const ::google::protobuf::Descriptor* descriptor();
  static const Position& default_instance();

  static const Position* internal_default_instance();

  void UnsafeArenaSwap(Position* other);
  void Swap(Position* other);

  // implements Message ----------------------------------------------

  inline Position* New() const { return New(NULL); }

  Position* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Position& from);
  void MergeFrom(const Position& from);
  void Clear();
  bool IsInitialized() const;

  size_t ByteSizeLong() const;
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
  void InternalSwap(Position* other);
  void UnsafeMergeFrom(const Position& from);
  protected:
  explicit Position(::google::protobuf::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::google::protobuf::Arena* arena);
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

  // optional float x = 1;
  void clear_x();
  static const int kXFieldNumber = 1;
  float x() const;
  void set_x(float value);

  // optional float y = 2;
  void clear_y();
  static const int kYFieldNumber = 2;
  float y() const;
  void set_y(float value);

  // optional float z = 3;
  void clear_z();
  static const int kZFieldNumber = 3;
  float z() const;
  void set_z(float value);

  // @@protoc_insertion_point(class_scope:google.cloud.vision.v1.Position)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  friend class ::google::protobuf::Arena;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  float x_;
  float y_;
  float z_;
  mutable int _cached_size_;
  friend void  protobuf_InitDefaults_google_2fcloud_2fvision_2fv1_2fgeometry_2eproto_impl();
  friend void  protobuf_AddDesc_google_2fcloud_2fvision_2fv1_2fgeometry_2eproto_impl();
  friend void protobuf_AssignDesc_google_2fcloud_2fvision_2fv1_2fgeometry_2eproto();
  friend void protobuf_ShutdownFile_google_2fcloud_2fvision_2fv1_2fgeometry_2eproto();

  void InitAsDefaultInstance();
};
extern ::google::protobuf::internal::ExplicitlyConstructed<Position> Position_default_instance_;

// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// Vertex

// optional int32 x = 1;
inline void Vertex::clear_x() {
  x_ = 0;
}
inline ::google::protobuf::int32 Vertex::x() const {
  // @@protoc_insertion_point(field_get:google.cloud.vision.v1.Vertex.x)
  return x_;
}
inline void Vertex::set_x(::google::protobuf::int32 value) {
  
  x_ = value;
  // @@protoc_insertion_point(field_set:google.cloud.vision.v1.Vertex.x)
}

// optional int32 y = 2;
inline void Vertex::clear_y() {
  y_ = 0;
}
inline ::google::protobuf::int32 Vertex::y() const {
  // @@protoc_insertion_point(field_get:google.cloud.vision.v1.Vertex.y)
  return y_;
}
inline void Vertex::set_y(::google::protobuf::int32 value) {
  
  y_ = value;
  // @@protoc_insertion_point(field_set:google.cloud.vision.v1.Vertex.y)
}

inline const Vertex* Vertex::internal_default_instance() {
  return &Vertex_default_instance_.get();
}
// -------------------------------------------------------------------

// BoundingPoly

// repeated .google.cloud.vision.v1.Vertex vertices = 1;
inline int BoundingPoly::vertices_size() const {
  return vertices_.size();
}
inline void BoundingPoly::clear_vertices() {
  vertices_.Clear();
}
inline const ::google::cloud::vision::v1::Vertex& BoundingPoly::vertices(int index) const {
  // @@protoc_insertion_point(field_get:google.cloud.vision.v1.BoundingPoly.vertices)
  return vertices_.Get(index);
}
inline ::google::cloud::vision::v1::Vertex* BoundingPoly::mutable_vertices(int index) {
  // @@protoc_insertion_point(field_mutable:google.cloud.vision.v1.BoundingPoly.vertices)
  return vertices_.Mutable(index);
}
inline ::google::cloud::vision::v1::Vertex* BoundingPoly::add_vertices() {
  // @@protoc_insertion_point(field_add:google.cloud.vision.v1.BoundingPoly.vertices)
  return vertices_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::google::cloud::vision::v1::Vertex >*
BoundingPoly::mutable_vertices() {
  // @@protoc_insertion_point(field_mutable_list:google.cloud.vision.v1.BoundingPoly.vertices)
  return &vertices_;
}
inline const ::google::protobuf::RepeatedPtrField< ::google::cloud::vision::v1::Vertex >&
BoundingPoly::vertices() const {
  // @@protoc_insertion_point(field_list:google.cloud.vision.v1.BoundingPoly.vertices)
  return vertices_;
}

inline const BoundingPoly* BoundingPoly::internal_default_instance() {
  return &BoundingPoly_default_instance_.get();
}
// -------------------------------------------------------------------

// Position

// optional float x = 1;
inline void Position::clear_x() {
  x_ = 0;
}
inline float Position::x() const {
  // @@protoc_insertion_point(field_get:google.cloud.vision.v1.Position.x)
  return x_;
}
inline void Position::set_x(float value) {
  
  x_ = value;
  // @@protoc_insertion_point(field_set:google.cloud.vision.v1.Position.x)
}

// optional float y = 2;
inline void Position::clear_y() {
  y_ = 0;
}
inline float Position::y() const {
  // @@protoc_insertion_point(field_get:google.cloud.vision.v1.Position.y)
  return y_;
}
inline void Position::set_y(float value) {
  
  y_ = value;
  // @@protoc_insertion_point(field_set:google.cloud.vision.v1.Position.y)
}

// optional float z = 3;
inline void Position::clear_z() {
  z_ = 0;
}
inline float Position::z() const {
  // @@protoc_insertion_point(field_get:google.cloud.vision.v1.Position.z)
  return z_;
}
inline void Position::set_z(float value) {
  
  z_ = value;
  // @@protoc_insertion_point(field_set:google.cloud.vision.v1.Position.z)
}

inline const Position* Position::internal_default_instance() {
  return &Position_default_instance_.get();
}
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace v1
}  // namespace vision
}  // namespace cloud
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_google_2fcloud_2fvision_2fv1_2fgeometry_2eproto__INCLUDED
