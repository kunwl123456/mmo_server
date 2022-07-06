// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Game_Define.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_Game_5fDefine_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_Game_5fDefine_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3012000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3012002 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_Game_5fDefine_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_Game_5fDefine_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_Game_5fDefine_2eproto;
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE

enum EObjectType : int {
  OT_NONE = 0,
  OT_PLAYER = 1,
  OT_NPC = 2,
  OT_MONSTER = 3,
  OT_PET = 4,
  OT_MOUNT = 5,
  OT_MACHINE = 6,
  OT_PARTNER = 7,
  OT_SUMMON = 8,
  EObjectType_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  EObjectType_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool EObjectType_IsValid(int value);
constexpr EObjectType EObjectType_MIN = OT_NONE;
constexpr EObjectType EObjectType_MAX = OT_SUMMON;
constexpr int EObjectType_ARRAYSIZE = EObjectType_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* EObjectType_descriptor();
template<typename T>
inline const std::string& EObjectType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, EObjectType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function EObjectType_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    EObjectType_descriptor(), enum_t_value);
}
inline bool EObjectType_Parse(
    const std::string& name, EObjectType* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<EObjectType>(
    EObjectType_descriptor(), name, value);
}
enum EActionType : int {
  AT_NONE = 0,
  AT_IDLE = 1,
  AT_FIXBODY = 2,
  AT_WALK = 3,
  AT_RUN = 4,
  AT_FLY = 5,
  AT_SKILL = 6,
  AT_MINE = 7,
  AT_ROLL = 8,
  AT_JUMP = 9,
  AT_BORN = 10,
  AT_DANCE = 11,
  AT_DEAD = 12,
  AT_WOUND = 13,
  AT_BEATBACK = 14,
  AT_BEATDOWN = 15,
  AT_BEATFLY = 16,
  EActionType_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  EActionType_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool EActionType_IsValid(int value);
constexpr EActionType EActionType_MIN = AT_NONE;
constexpr EActionType EActionType_MAX = AT_BEATFLY;
constexpr int EActionType_ARRAYSIZE = EActionType_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* EActionType_descriptor();
template<typename T>
inline const std::string& EActionType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, EActionType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function EActionType_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    EActionType_descriptor(), enum_t_value);
}
inline bool EActionType_Parse(
    const std::string& name, EActionType* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<EActionType>(
    EActionType_descriptor(), name, value);
}
enum EActionStatue : int {
  AS_NONE = 0,
  AS_HURT = 1,
  AS_START = 2,
  AS_END = 268435455,
  EActionStatue_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  EActionStatue_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool EActionStatue_IsValid(int value);
constexpr EActionStatue EActionStatue_MIN = AS_NONE;
constexpr EActionStatue EActionStatue_MAX = AS_END;
constexpr int EActionStatue_ARRAYSIZE = EActionStatue_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* EActionStatue_descriptor();
template<typename T>
inline const std::string& EActionStatue_Name(T enum_t_value) {
  static_assert(::std::is_same<T, EActionStatue>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function EActionStatue_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    EActionStatue_descriptor(), enum_t_value);
}
inline bool EActionStatue_Parse(
    const std::string& name, EActionStatue* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<EActionStatue>(
    EActionStatue_descriptor(), name, value);
}
enum ECopyType : int {
  CPT_NONE = 0,
  CPT_LOGIN = 1,
  CPT_SELROLE = 2,
  CPT_CITY = 3,
  CPT_MAIN = 4,
  CPT_WORLD = 5,
  CPT_END = 100,
  ECopyType_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  ECopyType_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool ECopyType_IsValid(int value);
constexpr ECopyType ECopyType_MIN = CPT_NONE;
constexpr ECopyType ECopyType_MAX = CPT_END;
constexpr int ECopyType_ARRAYSIZE = ECopyType_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ECopyType_descriptor();
template<typename T>
inline const std::string& ECopyType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, ECopyType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function ECopyType_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    ECopyType_descriptor(), enum_t_value);
}
inline bool ECopyType_Parse(
    const std::string& name, ECopyType* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<ECopyType>(
    ECopyType_descriptor(), name, value);
}
enum EObjectStatus : int {
  EOS_NONE = 0,
  EOS_DEAD = 1,
  EOS_NOT_MOVE = 2,
  EOS_NOT_CAST = 3,
  EOS_NOT_BEHURT = 4,
  EOS_NOT_BECONTROL = 5,
  EOS_STEALTH = 6,
  EOS_BLIND = 7,
  EObjectStatus_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  EObjectStatus_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool EObjectStatus_IsValid(int value);
constexpr EObjectStatus EObjectStatus_MIN = EOS_NONE;
constexpr EObjectStatus EObjectStatus_MAX = EOS_BLIND;
constexpr int EObjectStatus_ARRAYSIZE = EObjectStatus_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* EObjectStatus_descriptor();
template<typename T>
inline const std::string& EObjectStatus_Name(T enum_t_value) {
  static_assert(::std::is_same<T, EObjectStatus>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function EObjectStatus_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    EObjectStatus_descriptor(), enum_t_value);
}
inline bool EObjectStatus_Parse(
    const std::string& name, EObjectStatus* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<EObjectStatus>(
    EObjectStatus_descriptor(), name, value);
}
enum EItemType : int {
  EIT_NONE = 0,
  EIT_MONEY = 1,
  EIT_ACTION = 2,
  EIT_ITEM = 3,
  EIT_EQUIP = 4,
  EIT_GEM = 5,
  EIT_RELICS = 6,
  EIT_MOUNT = 7,
  EIT_PET = 8,
  EIT_PARTNER = 9,
  EIT_FASHION = 10,
  EIT_BOX = 11,
  EIT_ACTBOX = 12,
  EIT_CHIP = 13,
  EIT_RUNE = 14,
  EIT_DRUG = 15,
  EItemType_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  EItemType_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool EItemType_IsValid(int value);
constexpr EItemType EItemType_MIN = EIT_NONE;
constexpr EItemType EItemType_MAX = EIT_DRUG;
constexpr int EItemType_ARRAYSIZE = EItemType_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* EItemType_descriptor();
template<typename T>
inline const std::string& EItemType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, EItemType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function EItemType_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    EItemType_descriptor(), enum_t_value);
}
inline bool EItemType_Parse(
    const std::string& name, EItemType* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<EItemType>(
    EItemType_descriptor(), name, value);
}
enum EBagType : int {
  EBT_NONE = 0,
  EBT_ITEM = 1,
  EBT_GEM = 2,
  EBT_FASHION = 3,
  EBT_CHIP = 4,
  EBT_RUNE = 5,
  EBT_TASK = 6,
  EBT_SOUL = 7,
  EBT_CARD = 8,
  EBagType_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  EBagType_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool EBagType_IsValid(int value);
constexpr EBagType EBagType_MIN = EBT_NONE;
constexpr EBagType EBagType_MAX = EBT_CARD;
constexpr int EBagType_ARRAYSIZE = EBagType_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* EBagType_descriptor();
template<typename T>
inline const std::string& EBagType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, EBagType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function EBagType_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    EBagType_descriptor(), enum_t_value);
}
inline bool EBagType_Parse(
    const std::string& name, EBagType* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<EBagType>(
    EBagType_descriptor(), name, value);
}
enum EFunctionType : int {
  FUNC_BEGIN_ID = 0,
  FUNC_END_ID = 150,
  EFunctionType_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  EFunctionType_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool EFunctionType_IsValid(int value);
constexpr EFunctionType EFunctionType_MIN = FUNC_BEGIN_ID;
constexpr EFunctionType EFunctionType_MAX = FUNC_END_ID;
constexpr int EFunctionType_ARRAYSIZE = EFunctionType_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* EFunctionType_descriptor();
template<typename T>
inline const std::string& EFunctionType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, EFunctionType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function EFunctionType_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    EFunctionType_descriptor(), enum_t_value);
}
inline bool EFunctionType_Parse(
    const std::string& name, EFunctionType* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<EFunctionType>(
    EFunctionType_descriptor(), name, value);
}
enum EAttrID : int {
  EA_HP = 0,
  EA_MP = 1,
  EA_HP_MAX = 2,
  EA_MP_MAX = 3,
  EA_SPEED = 4,
  EA_ATTACK = 5,
  EA_ELEMENT = 6,
  EA_MAGIC_DEF = 7,
  EA_PHYSIC_DEF = 8,
  EA_HIT_RATE = 9,
  EA_DODGE = 10,
  EA_MORE_HURT = 11,
  EA_LESS_HURT = 12,
  EA_CRIT_HIT = 13,
  EA_CRIT_DEF = 14,
  EA_CRIT_HURT = 15,
  EA_ATTR_NUM = 16,
  EAttrID_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  EAttrID_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool EAttrID_IsValid(int value);
constexpr EAttrID EAttrID_MIN = EA_HP;
constexpr EAttrID EAttrID_MAX = EA_ATTR_NUM;
constexpr int EAttrID_ARRAYSIZE = EAttrID_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* EAttrID_descriptor();
template<typename T>
inline const std::string& EAttrID_Name(T enum_t_value) {
  static_assert(::std::is_same<T, EAttrID>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function EAttrID_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    EAttrID_descriptor(), enum_t_value);
}
inline bool EAttrID_Parse(
    const std::string& name, EAttrID* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<EAttrID>(
    EAttrID_descriptor(), name, value);
}
enum EShip : int {
  ES_NEUTRAL = 0,
  ES_FRIEND = 1,
  ES_ENEMY = 2,
  EShip_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  EShip_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool EShip_IsValid(int value);
constexpr EShip EShip_MIN = ES_NEUTRAL;
constexpr EShip EShip_MAX = ES_ENEMY;
constexpr int EShip_ARRAYSIZE = EShip_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* EShip_descriptor();
template<typename T>
inline const std::string& EShip_Name(T enum_t_value) {
  static_assert(::std::is_same<T, EShip>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function EShip_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    EShip_descriptor(), enum_t_value);
}
inline bool EShip_Parse(
    const std::string& name, EShip* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<EShip>(
    EShip_descriptor(), name, value);
}
enum EHitShipType : int {
  EHST_ALL = 0,
  EHST_FRIEND = 1,
  EHST_ENEMY = 2,
  EHitShipType_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  EHitShipType_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool EHitShipType_IsValid(int value);
constexpr EHitShipType EHitShipType_MIN = EHST_ALL;
constexpr EHitShipType EHitShipType_MAX = EHST_ENEMY;
constexpr int EHitShipType_ARRAYSIZE = EHitShipType_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* EHitShipType_descriptor();
template<typename T>
inline const std::string& EHitShipType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, EHitShipType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function EHitShipType_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    EHitShipType_descriptor(), enum_t_value);
}
inline bool EHitShipType_Parse(
    const std::string& name, EHitShipType* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<EHitShipType>(
    EHitShipType_descriptor(), name, value);
}
enum EBuffType : int {
  BFT_NONE = 0,
  EBuffType_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  EBuffType_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool EBuffType_IsValid(int value);
constexpr EBuffType EBuffType_MIN = BFT_NONE;
constexpr EBuffType EBuffType_MAX = BFT_NONE;
constexpr int EBuffType_ARRAYSIZE = EBuffType_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* EBuffType_descriptor();
template<typename T>
inline const std::string& EBuffType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, EBuffType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function EBuffType_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    EBuffType_descriptor(), enum_t_value);
}
inline bool EBuffType_Parse(
    const std::string& name, EBuffType* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<EBuffType>(
    EBuffType_descriptor(), name, value);
}
enum EChatChannel : int {
  CHL_NONE = 0,
  CHL_WORLD = 1,
  CHL_PRIVATE = 2,
  CHL_GUILD = 3,
  CHL_ROLLTIP = 4,
  EChatChannel_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  EChatChannel_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool EChatChannel_IsValid(int value);
constexpr EChatChannel EChatChannel_MIN = CHL_NONE;
constexpr EChatChannel EChatChannel_MAX = CHL_ROLLTIP;
constexpr int EChatChannel_ARRAYSIZE = EChatChannel_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* EChatChannel_descriptor();
template<typename T>
inline const std::string& EChatChannel_Name(T enum_t_value) {
  static_assert(::std::is_same<T, EChatChannel>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function EChatChannel_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    EChatChannel_descriptor(), enum_t_value);
}
inline bool EChatChannel_Parse(
    const std::string& name, EChatChannel* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<EChatChannel>(
    EChatChannel_descriptor(), name, value);
}
enum EEquipPos : int {
  EEP_NONE = 0,
  EEP_HELMET = 1,
  EEP_NECKLACE = 2,
  EEP_ARMOR = 3,
  EEP_SHOES = 4,
  EEP_WRIST = 5,
  EEP_RING = 6,
  EEP_TALISMAN = 7,
  EEP_WEAPON = 8,
  EEquipPos_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  EEquipPos_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool EEquipPos_IsValid(int value);
constexpr EEquipPos EEquipPos_MIN = EEP_NONE;
constexpr EEquipPos EEquipPos_MAX = EEP_WEAPON;
constexpr int EEquipPos_ARRAYSIZE = EEquipPos_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* EEquipPos_descriptor();
template<typename T>
inline const std::string& EEquipPos_Name(T enum_t_value) {
  static_assert(::std::is_same<T, EEquipPos>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function EEquipPos_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    EEquipPos_descriptor(), enum_t_value);
}
inline bool EEquipPos_Parse(
    const std::string& name, EEquipPos* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<EEquipPos>(
    EEquipPos_descriptor(), name, value);
}
enum ETaskStatus : int {
  ETS_INIT = 0,
  ETS_ACCEPT = 1,
  ETS_FINISH = 2,
  ETS_COMMIT = 3,
  ETaskStatus_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  ETaskStatus_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool ETaskStatus_IsValid(int value);
constexpr ETaskStatus ETaskStatus_MIN = ETS_INIT;
constexpr ETaskStatus ETaskStatus_MAX = ETS_COMMIT;
constexpr int ETaskStatus_ARRAYSIZE = ETaskStatus_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ETaskStatus_descriptor();
template<typename T>
inline const std::string& ETaskStatus_Name(T enum_t_value) {
  static_assert(::std::is_same<T, ETaskStatus>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function ETaskStatus_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    ETaskStatus_descriptor(), enum_t_value);
}
inline bool ETaskStatus_Parse(
    const std::string& name, ETaskStatus* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<ETaskStatus>(
    ETaskStatus_descriptor(), name, value);
}
enum ECopyResult : int {
  ECR_NONE = 0,
  ECR_WIN = 1,
  ECR_LOST = 2,
  ECR_DRAW = 3,
  ECopyResult_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  ECopyResult_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool ECopyResult_IsValid(int value);
constexpr ECopyResult ECopyResult_MIN = ECR_NONE;
constexpr ECopyResult ECopyResult_MAX = ECR_DRAW;
constexpr int ECopyResult_ARRAYSIZE = ECopyResult_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ECopyResult_descriptor();
template<typename T>
inline const std::string& ECopyResult_Name(T enum_t_value) {
  static_assert(::std::is_same<T, ECopyResult>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function ECopyResult_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    ECopyResult_descriptor(), enum_t_value);
}
inline bool ECopyResult_Parse(
    const std::string& name, ECopyResult* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<ECopyResult>(
    ECopyResult_descriptor(), name, value);
}
enum EGuildPos : int {
  EGP_MEMBER = 0,
  EGP_LEADER = 1,
  EGP_VICELEADER = 2,
  EGuildPos_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  EGuildPos_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool EGuildPos_IsValid(int value);
constexpr EGuildPos EGuildPos_MIN = EGP_MEMBER;
constexpr EGuildPos EGuildPos_MAX = EGP_VICELEADER;
constexpr int EGuildPos_ARRAYSIZE = EGuildPos_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* EGuildPos_descriptor();
template<typename T>
inline const std::string& EGuildPos_Name(T enum_t_value) {
  static_assert(::std::is_same<T, EGuildPos>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function EGuildPos_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    EGuildPos_descriptor(), enum_t_value);
}
inline bool EGuildPos_Parse(
    const std::string& name, EGuildPos* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<EGuildPos>(
    EGuildPos_descriptor(), name, value);
}
enum EMailType : int {
  EMT_BEGIN = 0,
  EMT_CUSTOM = 1,
  EMailType_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  EMailType_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool EMailType_IsValid(int value);
constexpr EMailType EMailType_MIN = EMT_BEGIN;
constexpr EMailType EMailType_MAX = EMT_CUSTOM;
constexpr int EMailType_ARRAYSIZE = EMailType_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* EMailType_descriptor();
template<typename T>
inline const std::string& EMailType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, EMailType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function EMailType_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    EMailType_descriptor(), enum_t_value);
}
inline bool EMailType_Parse(
    const std::string& name, EMailType* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<EMailType>(
    EMailType_descriptor(), name, value);
}
enum EMailStatus : int {
  EMS_NEWMAIL = 0,
  EMS_RECEIVED = 1,
  EMailStatus_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  EMailStatus_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool EMailStatus_IsValid(int value);
constexpr EMailStatus EMailStatus_MIN = EMS_NEWMAIL;
constexpr EMailStatus EMailStatus_MAX = EMS_RECEIVED;
constexpr int EMailStatus_ARRAYSIZE = EMailStatus_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* EMailStatus_descriptor();
template<typename T>
inline const std::string& EMailStatus_Name(T enum_t_value) {
  static_assert(::std::is_same<T, EMailStatus>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function EMailStatus_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    EMailStatus_descriptor(), enum_t_value);
}
inline bool EMailStatus_Parse(
    const std::string& name, EMailStatus* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<EMailStatus>(
    EMailStatus_descriptor(), name, value);
}
// ===================================================================


// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)


PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::EObjectType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::EObjectType>() {
  return ::EObjectType_descriptor();
}
template <> struct is_proto_enum< ::EActionType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::EActionType>() {
  return ::EActionType_descriptor();
}
template <> struct is_proto_enum< ::EActionStatue> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::EActionStatue>() {
  return ::EActionStatue_descriptor();
}
template <> struct is_proto_enum< ::ECopyType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::ECopyType>() {
  return ::ECopyType_descriptor();
}
template <> struct is_proto_enum< ::EObjectStatus> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::EObjectStatus>() {
  return ::EObjectStatus_descriptor();
}
template <> struct is_proto_enum< ::EItemType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::EItemType>() {
  return ::EItemType_descriptor();
}
template <> struct is_proto_enum< ::EBagType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::EBagType>() {
  return ::EBagType_descriptor();
}
template <> struct is_proto_enum< ::EFunctionType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::EFunctionType>() {
  return ::EFunctionType_descriptor();
}
template <> struct is_proto_enum< ::EAttrID> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::EAttrID>() {
  return ::EAttrID_descriptor();
}
template <> struct is_proto_enum< ::EShip> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::EShip>() {
  return ::EShip_descriptor();
}
template <> struct is_proto_enum< ::EHitShipType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::EHitShipType>() {
  return ::EHitShipType_descriptor();
}
template <> struct is_proto_enum< ::EBuffType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::EBuffType>() {
  return ::EBuffType_descriptor();
}
template <> struct is_proto_enum< ::EChatChannel> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::EChatChannel>() {
  return ::EChatChannel_descriptor();
}
template <> struct is_proto_enum< ::EEquipPos> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::EEquipPos>() {
  return ::EEquipPos_descriptor();
}
template <> struct is_proto_enum< ::ETaskStatus> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::ETaskStatus>() {
  return ::ETaskStatus_descriptor();
}
template <> struct is_proto_enum< ::ECopyResult> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::ECopyResult>() {
  return ::ECopyResult_descriptor();
}
template <> struct is_proto_enum< ::EGuildPos> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::EGuildPos>() {
  return ::EGuildPos_descriptor();
}
template <> struct is_proto_enum< ::EMailType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::EMailType>() {
  return ::EMailType_descriptor();
}
template <> struct is_proto_enum< ::EMailStatus> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::EMailStatus>() {
  return ::EMailStatus_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_Game_5fDefine_2eproto