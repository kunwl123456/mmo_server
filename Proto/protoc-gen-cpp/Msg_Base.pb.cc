// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Msg_Base.proto

#include "Msg_Base.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
class ItemDataDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<ItemData> _instance;
} _ItemData_default_instance_;
class SkillItemDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<SkillItem> _instance;
} _SkillItem_default_instance_;
static void InitDefaultsscc_info_ItemData_Msg_5fBase_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_ItemData_default_instance_;
    new (ptr) ::ItemData();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::ItemData::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_ItemData_Msg_5fBase_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_ItemData_Msg_5fBase_2eproto}, {}};

static void InitDefaultsscc_info_SkillItem_Msg_5fBase_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_SkillItem_default_instance_;
    new (ptr) ::SkillItem();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::SkillItem::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_SkillItem_Msg_5fBase_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_SkillItem_Msg_5fBase_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_Msg_5fBase_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_Msg_5fBase_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_Msg_5fBase_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_Msg_5fBase_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::ItemData, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::ItemData, itemid_),
  PROTOBUF_FIELD_OFFSET(::ItemData, itemnum_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::SkillItem, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::SkillItem, skillid_),
  PROTOBUF_FIELD_OFFSET(::SkillItem, level_),
  PROTOBUF_FIELD_OFFSET(::SkillItem, keypos_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::ItemData)},
  { 7, -1, sizeof(::SkillItem)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_ItemData_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_SkillItem_default_instance_),
};

const char descriptor_table_protodef_Msg_5fBase_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\016Msg_Base.proto\"+\n\010ItemData\022\016\n\006ItemID\030\001"
  " \001(\005\022\017\n\007ItemNum\030\002 \001(\005\";\n\tSkillItem\022\017\n\007Sk"
  "illID\030\001 \001(\r\022\r\n\005Level\030\002 \001(\005\022\016\n\006KeyPos\030\003 \001"
  "(\005b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_Msg_5fBase_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_Msg_5fBase_2eproto_sccs[2] = {
  &scc_info_ItemData_Msg_5fBase_2eproto.base,
  &scc_info_SkillItem_Msg_5fBase_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_Msg_5fBase_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_Msg_5fBase_2eproto = {
  false, false, descriptor_table_protodef_Msg_5fBase_2eproto, "Msg_Base.proto", 130,
  &descriptor_table_Msg_5fBase_2eproto_once, descriptor_table_Msg_5fBase_2eproto_sccs, descriptor_table_Msg_5fBase_2eproto_deps, 2, 0,
  schemas, file_default_instances, TableStruct_Msg_5fBase_2eproto::offsets,
  file_level_metadata_Msg_5fBase_2eproto, 2, file_level_enum_descriptors_Msg_5fBase_2eproto, file_level_service_descriptors_Msg_5fBase_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_Msg_5fBase_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_Msg_5fBase_2eproto)), true);

// ===================================================================

void ItemData::InitAsDefaultInstance() {
}
class ItemData::_Internal {
 public:
};

ItemData::ItemData(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:ItemData)
}
ItemData::ItemData(const ItemData& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&itemid_, &from.itemid_,
    static_cast<size_t>(reinterpret_cast<char*>(&itemnum_) -
    reinterpret_cast<char*>(&itemid_)) + sizeof(itemnum_));
  // @@protoc_insertion_point(copy_constructor:ItemData)
}

void ItemData::SharedCtor() {
  ::memset(&itemid_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&itemnum_) -
      reinterpret_cast<char*>(&itemid_)) + sizeof(itemnum_));
}

ItemData::~ItemData() {
  // @@protoc_insertion_point(destructor:ItemData)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void ItemData::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
}

void ItemData::ArenaDtor(void* object) {
  ItemData* _this = reinterpret_cast< ItemData* >(object);
  (void)_this;
}
void ItemData::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void ItemData::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ItemData& ItemData::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_ItemData_Msg_5fBase_2eproto.base);
  return *internal_default_instance();
}


void ItemData::Clear() {
// @@protoc_insertion_point(message_clear_start:ItemData)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&itemid_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&itemnum_) -
      reinterpret_cast<char*>(&itemid_)) + sizeof(itemnum_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ItemData::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // int32 ItemID = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          itemid_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int32 ItemNum = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          itemnum_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* ItemData::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:ItemData)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 ItemID = 1;
  if (this->itemid() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->_internal_itemid(), target);
  }

  // int32 ItemNum = 2;
  if (this->itemnum() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(2, this->_internal_itemnum(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:ItemData)
  return target;
}

size_t ItemData::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:ItemData)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // int32 ItemID = 1;
  if (this->itemid() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_itemid());
  }

  // int32 ItemNum = 2;
  if (this->itemnum() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_itemnum());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ItemData::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:ItemData)
  GOOGLE_DCHECK_NE(&from, this);
  const ItemData* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<ItemData>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:ItemData)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:ItemData)
    MergeFrom(*source);
  }
}

void ItemData::MergeFrom(const ItemData& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:ItemData)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.itemid() != 0) {
    _internal_set_itemid(from._internal_itemid());
  }
  if (from.itemnum() != 0) {
    _internal_set_itemnum(from._internal_itemnum());
  }
}

void ItemData::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:ItemData)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ItemData::CopyFrom(const ItemData& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:ItemData)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ItemData::IsInitialized() const {
  return true;
}

void ItemData::InternalSwap(ItemData* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(ItemData, itemnum_)
      + sizeof(ItemData::itemnum_)
      - PROTOBUF_FIELD_OFFSET(ItemData, itemid_)>(
          reinterpret_cast<char*>(&itemid_),
          reinterpret_cast<char*>(&other->itemid_));
}

::PROTOBUF_NAMESPACE_ID::Metadata ItemData::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void SkillItem::InitAsDefaultInstance() {
}
class SkillItem::_Internal {
 public:
};

SkillItem::SkillItem(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:SkillItem)
}
SkillItem::SkillItem(const SkillItem& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&skillid_, &from.skillid_,
    static_cast<size_t>(reinterpret_cast<char*>(&keypos_) -
    reinterpret_cast<char*>(&skillid_)) + sizeof(keypos_));
  // @@protoc_insertion_point(copy_constructor:SkillItem)
}

void SkillItem::SharedCtor() {
  ::memset(&skillid_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&keypos_) -
      reinterpret_cast<char*>(&skillid_)) + sizeof(keypos_));
}

SkillItem::~SkillItem() {
  // @@protoc_insertion_point(destructor:SkillItem)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void SkillItem::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
}

void SkillItem::ArenaDtor(void* object) {
  SkillItem* _this = reinterpret_cast< SkillItem* >(object);
  (void)_this;
}
void SkillItem::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void SkillItem::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const SkillItem& SkillItem::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_SkillItem_Msg_5fBase_2eproto.base);
  return *internal_default_instance();
}


void SkillItem::Clear() {
// @@protoc_insertion_point(message_clear_start:SkillItem)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&skillid_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&keypos_) -
      reinterpret_cast<char*>(&skillid_)) + sizeof(keypos_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* SkillItem::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // uint32 SkillID = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          skillid_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int32 Level = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          level_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int32 KeyPos = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          keypos_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* SkillItem::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:SkillItem)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 SkillID = 1;
  if (this->skillid() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(1, this->_internal_skillid(), target);
  }

  // int32 Level = 2;
  if (this->level() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(2, this->_internal_level(), target);
  }

  // int32 KeyPos = 3;
  if (this->keypos() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(3, this->_internal_keypos(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:SkillItem)
  return target;
}

size_t SkillItem::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:SkillItem)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // uint32 SkillID = 1;
  if (this->skillid() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_skillid());
  }

  // int32 Level = 2;
  if (this->level() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_level());
  }

  // int32 KeyPos = 3;
  if (this->keypos() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_keypos());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void SkillItem::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:SkillItem)
  GOOGLE_DCHECK_NE(&from, this);
  const SkillItem* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<SkillItem>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:SkillItem)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:SkillItem)
    MergeFrom(*source);
  }
}

void SkillItem::MergeFrom(const SkillItem& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:SkillItem)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.skillid() != 0) {
    _internal_set_skillid(from._internal_skillid());
  }
  if (from.level() != 0) {
    _internal_set_level(from._internal_level());
  }
  if (from.keypos() != 0) {
    _internal_set_keypos(from._internal_keypos());
  }
}

void SkillItem::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:SkillItem)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SkillItem::CopyFrom(const SkillItem& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:SkillItem)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SkillItem::IsInitialized() const {
  return true;
}

void SkillItem::InternalSwap(SkillItem* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(SkillItem, keypos_)
      + sizeof(SkillItem::keypos_)
      - PROTOBUF_FIELD_OFFSET(SkillItem, skillid_)>(
          reinterpret_cast<char*>(&skillid_),
          reinterpret_cast<char*>(&other->skillid_));
}

::PROTOBUF_NAMESPACE_ID::Metadata SkillItem::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::ItemData* Arena::CreateMaybeMessage< ::ItemData >(Arena* arena) {
  return Arena::CreateMessageInternal< ::ItemData >(arena);
}
template<> PROTOBUF_NOINLINE ::SkillItem* Arena::CreateMaybeMessage< ::SkillItem >(Arena* arena) {
  return Arena::CreateMessageInternal< ::SkillItem >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
