// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: object_detection/protos/box_coder.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_object_5fdetection_2fprotos_2fbox_5fcoder_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_object_5fdetection_2fprotos_2fbox_5fcoder_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3018000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3018000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "object_detection/protos/faster_rcnn_box_coder.pb.h"
#include "object_detection/protos/keypoint_box_coder.pb.h"
#include "object_detection/protos/mean_stddev_box_coder.pb.h"
#include "object_detection/protos/square_box_coder.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_object_5fdetection_2fprotos_2fbox_5fcoder_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_object_5fdetection_2fprotos_2fbox_5fcoder_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_object_5fdetection_2fprotos_2fbox_5fcoder_2eproto;
namespace object_detection {
namespace protos {
class BoxCoder;
struct BoxCoderDefaultTypeInternal;
extern BoxCoderDefaultTypeInternal _BoxCoder_default_instance_;
}  // namespace protos
}  // namespace object_detection
PROTOBUF_NAMESPACE_OPEN
template<> ::object_detection::protos::BoxCoder* Arena::CreateMaybeMessage<::object_detection::protos::BoxCoder>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace object_detection {
namespace protos {

// ===================================================================

class BoxCoder final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:object_detection.protos.BoxCoder) */ {
 public:
  inline BoxCoder() : BoxCoder(nullptr) {}
  ~BoxCoder() override;
  explicit constexpr BoxCoder(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  BoxCoder(const BoxCoder& from);
  BoxCoder(BoxCoder&& from) noexcept
    : BoxCoder() {
    *this = ::std::move(from);
  }

  inline BoxCoder& operator=(const BoxCoder& from) {
    CopyFrom(from);
    return *this;
  }
  inline BoxCoder& operator=(BoxCoder&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const BoxCoder& default_instance() {
    return *internal_default_instance();
  }
  enum BoxCoderOneofCase {
    kFasterRcnnBoxCoder = 1,
    kMeanStddevBoxCoder = 2,
    kSquareBoxCoder = 3,
    kKeypointBoxCoder = 4,
    BOX_CODER_ONEOF_NOT_SET = 0,
  };

  static inline const BoxCoder* internal_default_instance() {
    return reinterpret_cast<const BoxCoder*>(
               &_BoxCoder_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(BoxCoder& a, BoxCoder& b) {
    a.Swap(&b);
  }
  inline void Swap(BoxCoder* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(BoxCoder* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline BoxCoder* New() const final {
    return new BoxCoder();
  }

  BoxCoder* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<BoxCoder>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const BoxCoder& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const BoxCoder& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to, const ::PROTOBUF_NAMESPACE_ID::Message& from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(BoxCoder* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "object_detection.protos.BoxCoder";
  }
  protected:
  explicit BoxCoder(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kFasterRcnnBoxCoderFieldNumber = 1,
    kMeanStddevBoxCoderFieldNumber = 2,
    kSquareBoxCoderFieldNumber = 3,
    kKeypointBoxCoderFieldNumber = 4,
  };
  // .object_detection.protos.FasterRcnnBoxCoder faster_rcnn_box_coder = 1;
  bool has_faster_rcnn_box_coder() const;
  private:
  bool _internal_has_faster_rcnn_box_coder() const;
  public:
  void clear_faster_rcnn_box_coder();
  const ::object_detection::protos::FasterRcnnBoxCoder& faster_rcnn_box_coder() const;
  PROTOBUF_MUST_USE_RESULT ::object_detection::protos::FasterRcnnBoxCoder* release_faster_rcnn_box_coder();
  ::object_detection::protos::FasterRcnnBoxCoder* mutable_faster_rcnn_box_coder();
  void set_allocated_faster_rcnn_box_coder(::object_detection::protos::FasterRcnnBoxCoder* faster_rcnn_box_coder);
  private:
  const ::object_detection::protos::FasterRcnnBoxCoder& _internal_faster_rcnn_box_coder() const;
  ::object_detection::protos::FasterRcnnBoxCoder* _internal_mutable_faster_rcnn_box_coder();
  public:
  void unsafe_arena_set_allocated_faster_rcnn_box_coder(
      ::object_detection::protos::FasterRcnnBoxCoder* faster_rcnn_box_coder);
  ::object_detection::protos::FasterRcnnBoxCoder* unsafe_arena_release_faster_rcnn_box_coder();

  // .object_detection.protos.MeanStddevBoxCoder mean_stddev_box_coder = 2;
  bool has_mean_stddev_box_coder() const;
  private:
  bool _internal_has_mean_stddev_box_coder() const;
  public:
  void clear_mean_stddev_box_coder();
  const ::object_detection::protos::MeanStddevBoxCoder& mean_stddev_box_coder() const;
  PROTOBUF_MUST_USE_RESULT ::object_detection::protos::MeanStddevBoxCoder* release_mean_stddev_box_coder();
  ::object_detection::protos::MeanStddevBoxCoder* mutable_mean_stddev_box_coder();
  void set_allocated_mean_stddev_box_coder(::object_detection::protos::MeanStddevBoxCoder* mean_stddev_box_coder);
  private:
  const ::object_detection::protos::MeanStddevBoxCoder& _internal_mean_stddev_box_coder() const;
  ::object_detection::protos::MeanStddevBoxCoder* _internal_mutable_mean_stddev_box_coder();
  public:
  void unsafe_arena_set_allocated_mean_stddev_box_coder(
      ::object_detection::protos::MeanStddevBoxCoder* mean_stddev_box_coder);
  ::object_detection::protos::MeanStddevBoxCoder* unsafe_arena_release_mean_stddev_box_coder();

  // .object_detection.protos.SquareBoxCoder square_box_coder = 3;
  bool has_square_box_coder() const;
  private:
  bool _internal_has_square_box_coder() const;
  public:
  void clear_square_box_coder();
  const ::object_detection::protos::SquareBoxCoder& square_box_coder() const;
  PROTOBUF_MUST_USE_RESULT ::object_detection::protos::SquareBoxCoder* release_square_box_coder();
  ::object_detection::protos::SquareBoxCoder* mutable_square_box_coder();
  void set_allocated_square_box_coder(::object_detection::protos::SquareBoxCoder* square_box_coder);
  private:
  const ::object_detection::protos::SquareBoxCoder& _internal_square_box_coder() const;
  ::object_detection::protos::SquareBoxCoder* _internal_mutable_square_box_coder();
  public:
  void unsafe_arena_set_allocated_square_box_coder(
      ::object_detection::protos::SquareBoxCoder* square_box_coder);
  ::object_detection::protos::SquareBoxCoder* unsafe_arena_release_square_box_coder();

  // .object_detection.protos.KeypointBoxCoder keypoint_box_coder = 4;
  bool has_keypoint_box_coder() const;
  private:
  bool _internal_has_keypoint_box_coder() const;
  public:
  void clear_keypoint_box_coder();
  const ::object_detection::protos::KeypointBoxCoder& keypoint_box_coder() const;
  PROTOBUF_MUST_USE_RESULT ::object_detection::protos::KeypointBoxCoder* release_keypoint_box_coder();
  ::object_detection::protos::KeypointBoxCoder* mutable_keypoint_box_coder();
  void set_allocated_keypoint_box_coder(::object_detection::protos::KeypointBoxCoder* keypoint_box_coder);
  private:
  const ::object_detection::protos::KeypointBoxCoder& _internal_keypoint_box_coder() const;
  ::object_detection::protos::KeypointBoxCoder* _internal_mutable_keypoint_box_coder();
  public:
  void unsafe_arena_set_allocated_keypoint_box_coder(
      ::object_detection::protos::KeypointBoxCoder* keypoint_box_coder);
  ::object_detection::protos::KeypointBoxCoder* unsafe_arena_release_keypoint_box_coder();

  void clear_box_coder_oneof();
  BoxCoderOneofCase box_coder_oneof_case() const;
  // @@protoc_insertion_point(class_scope:object_detection.protos.BoxCoder)
 private:
  class _Internal;
  void set_has_faster_rcnn_box_coder();
  void set_has_mean_stddev_box_coder();
  void set_has_square_box_coder();
  void set_has_keypoint_box_coder();

  inline bool has_box_coder_oneof() const;
  inline void clear_has_box_coder_oneof();

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  union BoxCoderOneofUnion {
    constexpr BoxCoderOneofUnion() : _constinit_{} {}
      ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized _constinit_;
    ::object_detection::protos::FasterRcnnBoxCoder* faster_rcnn_box_coder_;
    ::object_detection::protos::MeanStddevBoxCoder* mean_stddev_box_coder_;
    ::object_detection::protos::SquareBoxCoder* square_box_coder_;
    ::object_detection::protos::KeypointBoxCoder* keypoint_box_coder_;
  } box_coder_oneof_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::uint32 _oneof_case_[1];

  friend struct ::TableStruct_object_5fdetection_2fprotos_2fbox_5fcoder_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// BoxCoder

// .object_detection.protos.FasterRcnnBoxCoder faster_rcnn_box_coder = 1;
inline bool BoxCoder::_internal_has_faster_rcnn_box_coder() const {
  return box_coder_oneof_case() == kFasterRcnnBoxCoder;
}
inline bool BoxCoder::has_faster_rcnn_box_coder() const {
  return _internal_has_faster_rcnn_box_coder();
}
inline void BoxCoder::set_has_faster_rcnn_box_coder() {
  _oneof_case_[0] = kFasterRcnnBoxCoder;
}
inline ::object_detection::protos::FasterRcnnBoxCoder* BoxCoder::release_faster_rcnn_box_coder() {
  // @@protoc_insertion_point(field_release:object_detection.protos.BoxCoder.faster_rcnn_box_coder)
  if (_internal_has_faster_rcnn_box_coder()) {
    clear_has_box_coder_oneof();
      ::object_detection::protos::FasterRcnnBoxCoder* temp = box_coder_oneof_.faster_rcnn_box_coder_;
    if (GetArenaForAllocation() != nullptr) {
      temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
    }
    box_coder_oneof_.faster_rcnn_box_coder_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline const ::object_detection::protos::FasterRcnnBoxCoder& BoxCoder::_internal_faster_rcnn_box_coder() const {
  return _internal_has_faster_rcnn_box_coder()
      ? *box_coder_oneof_.faster_rcnn_box_coder_
      : reinterpret_cast< ::object_detection::protos::FasterRcnnBoxCoder&>(::object_detection::protos::_FasterRcnnBoxCoder_default_instance_);
}
inline const ::object_detection::protos::FasterRcnnBoxCoder& BoxCoder::faster_rcnn_box_coder() const {
  // @@protoc_insertion_point(field_get:object_detection.protos.BoxCoder.faster_rcnn_box_coder)
  return _internal_faster_rcnn_box_coder();
}
inline ::object_detection::protos::FasterRcnnBoxCoder* BoxCoder::unsafe_arena_release_faster_rcnn_box_coder() {
  // @@protoc_insertion_point(field_unsafe_arena_release:object_detection.protos.BoxCoder.faster_rcnn_box_coder)
  if (_internal_has_faster_rcnn_box_coder()) {
    clear_has_box_coder_oneof();
    ::object_detection::protos::FasterRcnnBoxCoder* temp = box_coder_oneof_.faster_rcnn_box_coder_;
    box_coder_oneof_.faster_rcnn_box_coder_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline void BoxCoder::unsafe_arena_set_allocated_faster_rcnn_box_coder(::object_detection::protos::FasterRcnnBoxCoder* faster_rcnn_box_coder) {
  clear_box_coder_oneof();
  if (faster_rcnn_box_coder) {
    set_has_faster_rcnn_box_coder();
    box_coder_oneof_.faster_rcnn_box_coder_ = faster_rcnn_box_coder;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:object_detection.protos.BoxCoder.faster_rcnn_box_coder)
}
inline ::object_detection::protos::FasterRcnnBoxCoder* BoxCoder::_internal_mutable_faster_rcnn_box_coder() {
  if (!_internal_has_faster_rcnn_box_coder()) {
    clear_box_coder_oneof();
    set_has_faster_rcnn_box_coder();
    box_coder_oneof_.faster_rcnn_box_coder_ = CreateMaybeMessage< ::object_detection::protos::FasterRcnnBoxCoder >(GetArenaForAllocation());
  }
  return box_coder_oneof_.faster_rcnn_box_coder_;
}
inline ::object_detection::protos::FasterRcnnBoxCoder* BoxCoder::mutable_faster_rcnn_box_coder() {
  ::object_detection::protos::FasterRcnnBoxCoder* _msg = _internal_mutable_faster_rcnn_box_coder();
  // @@protoc_insertion_point(field_mutable:object_detection.protos.BoxCoder.faster_rcnn_box_coder)
  return _msg;
}

// .object_detection.protos.MeanStddevBoxCoder mean_stddev_box_coder = 2;
inline bool BoxCoder::_internal_has_mean_stddev_box_coder() const {
  return box_coder_oneof_case() == kMeanStddevBoxCoder;
}
inline bool BoxCoder::has_mean_stddev_box_coder() const {
  return _internal_has_mean_stddev_box_coder();
}
inline void BoxCoder::set_has_mean_stddev_box_coder() {
  _oneof_case_[0] = kMeanStddevBoxCoder;
}
inline ::object_detection::protos::MeanStddevBoxCoder* BoxCoder::release_mean_stddev_box_coder() {
  // @@protoc_insertion_point(field_release:object_detection.protos.BoxCoder.mean_stddev_box_coder)
  if (_internal_has_mean_stddev_box_coder()) {
    clear_has_box_coder_oneof();
      ::object_detection::protos::MeanStddevBoxCoder* temp = box_coder_oneof_.mean_stddev_box_coder_;
    if (GetArenaForAllocation() != nullptr) {
      temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
    }
    box_coder_oneof_.mean_stddev_box_coder_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline const ::object_detection::protos::MeanStddevBoxCoder& BoxCoder::_internal_mean_stddev_box_coder() const {
  return _internal_has_mean_stddev_box_coder()
      ? *box_coder_oneof_.mean_stddev_box_coder_
      : reinterpret_cast< ::object_detection::protos::MeanStddevBoxCoder&>(::object_detection::protos::_MeanStddevBoxCoder_default_instance_);
}
inline const ::object_detection::protos::MeanStddevBoxCoder& BoxCoder::mean_stddev_box_coder() const {
  // @@protoc_insertion_point(field_get:object_detection.protos.BoxCoder.mean_stddev_box_coder)
  return _internal_mean_stddev_box_coder();
}
inline ::object_detection::protos::MeanStddevBoxCoder* BoxCoder::unsafe_arena_release_mean_stddev_box_coder() {
  // @@protoc_insertion_point(field_unsafe_arena_release:object_detection.protos.BoxCoder.mean_stddev_box_coder)
  if (_internal_has_mean_stddev_box_coder()) {
    clear_has_box_coder_oneof();
    ::object_detection::protos::MeanStddevBoxCoder* temp = box_coder_oneof_.mean_stddev_box_coder_;
    box_coder_oneof_.mean_stddev_box_coder_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline void BoxCoder::unsafe_arena_set_allocated_mean_stddev_box_coder(::object_detection::protos::MeanStddevBoxCoder* mean_stddev_box_coder) {
  clear_box_coder_oneof();
  if (mean_stddev_box_coder) {
    set_has_mean_stddev_box_coder();
    box_coder_oneof_.mean_stddev_box_coder_ = mean_stddev_box_coder;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:object_detection.protos.BoxCoder.mean_stddev_box_coder)
}
inline ::object_detection::protos::MeanStddevBoxCoder* BoxCoder::_internal_mutable_mean_stddev_box_coder() {
  if (!_internal_has_mean_stddev_box_coder()) {
    clear_box_coder_oneof();
    set_has_mean_stddev_box_coder();
    box_coder_oneof_.mean_stddev_box_coder_ = CreateMaybeMessage< ::object_detection::protos::MeanStddevBoxCoder >(GetArenaForAllocation());
  }
  return box_coder_oneof_.mean_stddev_box_coder_;
}
inline ::object_detection::protos::MeanStddevBoxCoder* BoxCoder::mutable_mean_stddev_box_coder() {
  ::object_detection::protos::MeanStddevBoxCoder* _msg = _internal_mutable_mean_stddev_box_coder();
  // @@protoc_insertion_point(field_mutable:object_detection.protos.BoxCoder.mean_stddev_box_coder)
  return _msg;
}

// .object_detection.protos.SquareBoxCoder square_box_coder = 3;
inline bool BoxCoder::_internal_has_square_box_coder() const {
  return box_coder_oneof_case() == kSquareBoxCoder;
}
inline bool BoxCoder::has_square_box_coder() const {
  return _internal_has_square_box_coder();
}
inline void BoxCoder::set_has_square_box_coder() {
  _oneof_case_[0] = kSquareBoxCoder;
}
inline ::object_detection::protos::SquareBoxCoder* BoxCoder::release_square_box_coder() {
  // @@protoc_insertion_point(field_release:object_detection.protos.BoxCoder.square_box_coder)
  if (_internal_has_square_box_coder()) {
    clear_has_box_coder_oneof();
      ::object_detection::protos::SquareBoxCoder* temp = box_coder_oneof_.square_box_coder_;
    if (GetArenaForAllocation() != nullptr) {
      temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
    }
    box_coder_oneof_.square_box_coder_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline const ::object_detection::protos::SquareBoxCoder& BoxCoder::_internal_square_box_coder() const {
  return _internal_has_square_box_coder()
      ? *box_coder_oneof_.square_box_coder_
      : reinterpret_cast< ::object_detection::protos::SquareBoxCoder&>(::object_detection::protos::_SquareBoxCoder_default_instance_);
}
inline const ::object_detection::protos::SquareBoxCoder& BoxCoder::square_box_coder() const {
  // @@protoc_insertion_point(field_get:object_detection.protos.BoxCoder.square_box_coder)
  return _internal_square_box_coder();
}
inline ::object_detection::protos::SquareBoxCoder* BoxCoder::unsafe_arena_release_square_box_coder() {
  // @@protoc_insertion_point(field_unsafe_arena_release:object_detection.protos.BoxCoder.square_box_coder)
  if (_internal_has_square_box_coder()) {
    clear_has_box_coder_oneof();
    ::object_detection::protos::SquareBoxCoder* temp = box_coder_oneof_.square_box_coder_;
    box_coder_oneof_.square_box_coder_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline void BoxCoder::unsafe_arena_set_allocated_square_box_coder(::object_detection::protos::SquareBoxCoder* square_box_coder) {
  clear_box_coder_oneof();
  if (square_box_coder) {
    set_has_square_box_coder();
    box_coder_oneof_.square_box_coder_ = square_box_coder;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:object_detection.protos.BoxCoder.square_box_coder)
}
inline ::object_detection::protos::SquareBoxCoder* BoxCoder::_internal_mutable_square_box_coder() {
  if (!_internal_has_square_box_coder()) {
    clear_box_coder_oneof();
    set_has_square_box_coder();
    box_coder_oneof_.square_box_coder_ = CreateMaybeMessage< ::object_detection::protos::SquareBoxCoder >(GetArenaForAllocation());
  }
  return box_coder_oneof_.square_box_coder_;
}
inline ::object_detection::protos::SquareBoxCoder* BoxCoder::mutable_square_box_coder() {
  ::object_detection::protos::SquareBoxCoder* _msg = _internal_mutable_square_box_coder();
  // @@protoc_insertion_point(field_mutable:object_detection.protos.BoxCoder.square_box_coder)
  return _msg;
}

// .object_detection.protos.KeypointBoxCoder keypoint_box_coder = 4;
inline bool BoxCoder::_internal_has_keypoint_box_coder() const {
  return box_coder_oneof_case() == kKeypointBoxCoder;
}
inline bool BoxCoder::has_keypoint_box_coder() const {
  return _internal_has_keypoint_box_coder();
}
inline void BoxCoder::set_has_keypoint_box_coder() {
  _oneof_case_[0] = kKeypointBoxCoder;
}
inline ::object_detection::protos::KeypointBoxCoder* BoxCoder::release_keypoint_box_coder() {
  // @@protoc_insertion_point(field_release:object_detection.protos.BoxCoder.keypoint_box_coder)
  if (_internal_has_keypoint_box_coder()) {
    clear_has_box_coder_oneof();
      ::object_detection::protos::KeypointBoxCoder* temp = box_coder_oneof_.keypoint_box_coder_;
    if (GetArenaForAllocation() != nullptr) {
      temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
    }
    box_coder_oneof_.keypoint_box_coder_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline const ::object_detection::protos::KeypointBoxCoder& BoxCoder::_internal_keypoint_box_coder() const {
  return _internal_has_keypoint_box_coder()
      ? *box_coder_oneof_.keypoint_box_coder_
      : reinterpret_cast< ::object_detection::protos::KeypointBoxCoder&>(::object_detection::protos::_KeypointBoxCoder_default_instance_);
}
inline const ::object_detection::protos::KeypointBoxCoder& BoxCoder::keypoint_box_coder() const {
  // @@protoc_insertion_point(field_get:object_detection.protos.BoxCoder.keypoint_box_coder)
  return _internal_keypoint_box_coder();
}
inline ::object_detection::protos::KeypointBoxCoder* BoxCoder::unsafe_arena_release_keypoint_box_coder() {
  // @@protoc_insertion_point(field_unsafe_arena_release:object_detection.protos.BoxCoder.keypoint_box_coder)
  if (_internal_has_keypoint_box_coder()) {
    clear_has_box_coder_oneof();
    ::object_detection::protos::KeypointBoxCoder* temp = box_coder_oneof_.keypoint_box_coder_;
    box_coder_oneof_.keypoint_box_coder_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline void BoxCoder::unsafe_arena_set_allocated_keypoint_box_coder(::object_detection::protos::KeypointBoxCoder* keypoint_box_coder) {
  clear_box_coder_oneof();
  if (keypoint_box_coder) {
    set_has_keypoint_box_coder();
    box_coder_oneof_.keypoint_box_coder_ = keypoint_box_coder;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:object_detection.protos.BoxCoder.keypoint_box_coder)
}
inline ::object_detection::protos::KeypointBoxCoder* BoxCoder::_internal_mutable_keypoint_box_coder() {
  if (!_internal_has_keypoint_box_coder()) {
    clear_box_coder_oneof();
    set_has_keypoint_box_coder();
    box_coder_oneof_.keypoint_box_coder_ = CreateMaybeMessage< ::object_detection::protos::KeypointBoxCoder >(GetArenaForAllocation());
  }
  return box_coder_oneof_.keypoint_box_coder_;
}
inline ::object_detection::protos::KeypointBoxCoder* BoxCoder::mutable_keypoint_box_coder() {
  ::object_detection::protos::KeypointBoxCoder* _msg = _internal_mutable_keypoint_box_coder();
  // @@protoc_insertion_point(field_mutable:object_detection.protos.BoxCoder.keypoint_box_coder)
  return _msg;
}

inline bool BoxCoder::has_box_coder_oneof() const {
  return box_coder_oneof_case() != BOX_CODER_ONEOF_NOT_SET;
}
inline void BoxCoder::clear_has_box_coder_oneof() {
  _oneof_case_[0] = BOX_CODER_ONEOF_NOT_SET;
}
inline BoxCoder::BoxCoderOneofCase BoxCoder::box_coder_oneof_case() const {
  return BoxCoder::BoxCoderOneofCase(_oneof_case_[0]);
}
#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace protos
}  // namespace object_detection

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_object_5fdetection_2fprotos_2fbox_5fcoder_2eproto
