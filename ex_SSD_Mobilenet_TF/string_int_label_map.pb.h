// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: string_int_label_map.proto

#ifndef PROTOBUF_string_5fint_5flabel_5fmap_2eproto__INCLUDED
#define PROTOBUF_string_5fint_5flabel_5fmap_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3003000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3003002 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
namespace object_detection {
namespace protos {
class StringIntLabelMap;
class StringIntLabelMapDefaultTypeInternal;
extern StringIntLabelMapDefaultTypeInternal _StringIntLabelMap_default_instance_;
class StringIntLabelMapItem;
class StringIntLabelMapItemDefaultTypeInternal;
extern StringIntLabelMapItemDefaultTypeInternal _StringIntLabelMapItem_default_instance_;
}  // namespace protos
}  // namespace object_detection

namespace object_detection {
namespace protos {

namespace protobuf_string_5fint_5flabel_5fmap_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[];
  static const ::google::protobuf::uint32 offsets[];
  static void InitDefaultsImpl();
  static void Shutdown();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_string_5fint_5flabel_5fmap_2eproto

// ===================================================================

class StringIntLabelMapItem : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:object_detection.protos.StringIntLabelMapItem) */ {
 public:
  StringIntLabelMapItem();
  virtual ~StringIntLabelMapItem();

  StringIntLabelMapItem(const StringIntLabelMapItem& from);

  inline StringIntLabelMapItem& operator=(const StringIntLabelMapItem& from) {
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
  static const StringIntLabelMapItem& default_instance();

  static inline const StringIntLabelMapItem* internal_default_instance() {
    return reinterpret_cast<const StringIntLabelMapItem*>(
               &_StringIntLabelMapItem_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(StringIntLabelMapItem* other);

  // implements Message ----------------------------------------------

  inline StringIntLabelMapItem* New() const PROTOBUF_FINAL { return New(NULL); }

  StringIntLabelMapItem* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const StringIntLabelMapItem& from);
  void MergeFrom(const StringIntLabelMapItem& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(StringIntLabelMapItem* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string name = 1;
  bool has_name() const;
  void clear_name();
  static const int kNameFieldNumber = 1;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  #if LANG_CXX11
  void set_name(::std::string&& value);
  #endif
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // optional string display_name = 3;
  bool has_display_name() const;
  void clear_display_name();
  static const int kDisplayNameFieldNumber = 3;
  const ::std::string& display_name() const;
  void set_display_name(const ::std::string& value);
  #if LANG_CXX11
  void set_display_name(::std::string&& value);
  #endif
  void set_display_name(const char* value);
  void set_display_name(const char* value, size_t size);
  ::std::string* mutable_display_name();
  ::std::string* release_display_name();
  void set_allocated_display_name(::std::string* display_name);

  // optional int32 id = 2;
  bool has_id() const;
  void clear_id();
  static const int kIdFieldNumber = 2;
  ::google::protobuf::int32 id() const;
  void set_id(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:object_detection.protos.StringIntLabelMapItem)
 private:
  void set_has_name();
  void clear_has_name();
  void set_has_id();
  void clear_has_id();
  void set_has_display_name();
  void clear_has_display_name();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::internal::ArenaStringPtr display_name_;
  ::google::protobuf::int32 id_;
  friend struct protobuf_string_5fint_5flabel_5fmap_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class StringIntLabelMap : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:object_detection.protos.StringIntLabelMap) */ {
 public:
  StringIntLabelMap();
  virtual ~StringIntLabelMap();

  StringIntLabelMap(const StringIntLabelMap& from);

  inline StringIntLabelMap& operator=(const StringIntLabelMap& from) {
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
  static const StringIntLabelMap& default_instance();

  static inline const StringIntLabelMap* internal_default_instance() {
    return reinterpret_cast<const StringIntLabelMap*>(
               &_StringIntLabelMap_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(StringIntLabelMap* other);

  // implements Message ----------------------------------------------

  inline StringIntLabelMap* New() const PROTOBUF_FINAL { return New(NULL); }

  StringIntLabelMap* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const StringIntLabelMap& from);
  void MergeFrom(const StringIntLabelMap& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(StringIntLabelMap* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .object_detection.protos.StringIntLabelMapItem item = 1;
  int item_size() const;
  void clear_item();
  static const int kItemFieldNumber = 1;
  const ::object_detection::protos::StringIntLabelMapItem& item(int index) const;
  ::object_detection::protos::StringIntLabelMapItem* mutable_item(int index);
  ::object_detection::protos::StringIntLabelMapItem* add_item();
  ::google::protobuf::RepeatedPtrField< ::object_detection::protos::StringIntLabelMapItem >*
      mutable_item();
  const ::google::protobuf::RepeatedPtrField< ::object_detection::protos::StringIntLabelMapItem >&
      item() const;

  // @@protoc_insertion_point(class_scope:object_detection.protos.StringIntLabelMap)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::object_detection::protos::StringIntLabelMapItem > item_;
  friend struct protobuf_string_5fint_5flabel_5fmap_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// StringIntLabelMapItem

// optional string name = 1;
inline bool StringIntLabelMapItem::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void StringIntLabelMapItem::set_has_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void StringIntLabelMapItem::clear_has_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void StringIntLabelMapItem::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_name();
}
inline const ::std::string& StringIntLabelMapItem::name() const {
  // @@protoc_insertion_point(field_get:object_detection.protos.StringIntLabelMapItem.name)
  return name_.GetNoArena();
}
inline void StringIntLabelMapItem::set_name(const ::std::string& value) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:object_detection.protos.StringIntLabelMapItem.name)
}
#if LANG_CXX11
inline void StringIntLabelMapItem::set_name(::std::string&& value) {
  set_has_name();
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:object_detection.protos.StringIntLabelMapItem.name)
}
#endif
inline void StringIntLabelMapItem::set_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:object_detection.protos.StringIntLabelMapItem.name)
}
inline void StringIntLabelMapItem::set_name(const char* value, size_t size) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:object_detection.protos.StringIntLabelMapItem.name)
}
inline ::std::string* StringIntLabelMapItem::mutable_name() {
  set_has_name();
  // @@protoc_insertion_point(field_mutable:object_detection.protos.StringIntLabelMapItem.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* StringIntLabelMapItem::release_name() {
  // @@protoc_insertion_point(field_release:object_detection.protos.StringIntLabelMapItem.name)
  clear_has_name();
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void StringIntLabelMapItem::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    set_has_name();
  } else {
    clear_has_name();
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:object_detection.protos.StringIntLabelMapItem.name)
}

// optional int32 id = 2;
inline bool StringIntLabelMapItem::has_id() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void StringIntLabelMapItem::set_has_id() {
  _has_bits_[0] |= 0x00000004u;
}
inline void StringIntLabelMapItem::clear_has_id() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void StringIntLabelMapItem::clear_id() {
  id_ = 0;
  clear_has_id();
}
inline ::google::protobuf::int32 StringIntLabelMapItem::id() const {
  // @@protoc_insertion_point(field_get:object_detection.protos.StringIntLabelMapItem.id)
  return id_;
}
inline void StringIntLabelMapItem::set_id(::google::protobuf::int32 value) {
  set_has_id();
  id_ = value;
  // @@protoc_insertion_point(field_set:object_detection.protos.StringIntLabelMapItem.id)
}

// optional string display_name = 3;
inline bool StringIntLabelMapItem::has_display_name() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void StringIntLabelMapItem::set_has_display_name() {
  _has_bits_[0] |= 0x00000002u;
}
inline void StringIntLabelMapItem::clear_has_display_name() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void StringIntLabelMapItem::clear_display_name() {
  display_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_display_name();
}
inline const ::std::string& StringIntLabelMapItem::display_name() const {
  // @@protoc_insertion_point(field_get:object_detection.protos.StringIntLabelMapItem.display_name)
  return display_name_.GetNoArena();
}
inline void StringIntLabelMapItem::set_display_name(const ::std::string& value) {
  set_has_display_name();
  display_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:object_detection.protos.StringIntLabelMapItem.display_name)
}
#if LANG_CXX11
inline void StringIntLabelMapItem::set_display_name(::std::string&& value) {
  set_has_display_name();
  display_name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:object_detection.protos.StringIntLabelMapItem.display_name)
}
#endif
inline void StringIntLabelMapItem::set_display_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_display_name();
  display_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:object_detection.protos.StringIntLabelMapItem.display_name)
}
inline void StringIntLabelMapItem::set_display_name(const char* value, size_t size) {
  set_has_display_name();
  display_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:object_detection.protos.StringIntLabelMapItem.display_name)
}
inline ::std::string* StringIntLabelMapItem::mutable_display_name() {
  set_has_display_name();
  // @@protoc_insertion_point(field_mutable:object_detection.protos.StringIntLabelMapItem.display_name)
  return display_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* StringIntLabelMapItem::release_display_name() {
  // @@protoc_insertion_point(field_release:object_detection.protos.StringIntLabelMapItem.display_name)
  clear_has_display_name();
  return display_name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void StringIntLabelMapItem::set_allocated_display_name(::std::string* display_name) {
  if (display_name != NULL) {
    set_has_display_name();
  } else {
    clear_has_display_name();
  }
  display_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), display_name);
  // @@protoc_insertion_point(field_set_allocated:object_detection.protos.StringIntLabelMapItem.display_name)
}

// -------------------------------------------------------------------

// StringIntLabelMap

// repeated .object_detection.protos.StringIntLabelMapItem item = 1;
inline int StringIntLabelMap::item_size() const {
  return item_.size();
}
inline void StringIntLabelMap::clear_item() {
  item_.Clear();
}
inline const ::object_detection::protos::StringIntLabelMapItem& StringIntLabelMap::item(int index) const {
  // @@protoc_insertion_point(field_get:object_detection.protos.StringIntLabelMap.item)
  return item_.Get(index);
}
inline ::object_detection::protos::StringIntLabelMapItem* StringIntLabelMap::mutable_item(int index) {
  // @@protoc_insertion_point(field_mutable:object_detection.protos.StringIntLabelMap.item)
  return item_.Mutable(index);
}
inline ::object_detection::protos::StringIntLabelMapItem* StringIntLabelMap::add_item() {
  // @@protoc_insertion_point(field_add:object_detection.protos.StringIntLabelMap.item)
  return item_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::object_detection::protos::StringIntLabelMapItem >*
StringIntLabelMap::mutable_item() {
  // @@protoc_insertion_point(field_mutable_list:object_detection.protos.StringIntLabelMap.item)
  return &item_;
}
inline const ::google::protobuf::RepeatedPtrField< ::object_detection::protos::StringIntLabelMapItem >&
StringIntLabelMap::item() const {
  // @@protoc_insertion_point(field_list:object_detection.protos.StringIntLabelMap.item)
  return item_;
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


}  // namespace protos
}  // namespace object_detection

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_string_5fint_5flabel_5fmap_2eproto__INCLUDED