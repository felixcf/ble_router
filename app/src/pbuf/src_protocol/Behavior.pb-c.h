/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: Behavior.proto */

#ifndef PROTOBUF_C_Behavior_2eproto__INCLUDED
#define PROTOBUF_C_Behavior_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1000000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1003000 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif

#include "IdentityMsg.pb-c.h"

typedef struct _Protocol__BehaviorReq Protocol__BehaviorReq;
typedef struct _Protocol__Behavior Protocol__Behavior;


/* --- enums --- */

typedef enum _Protocol__BehaviorType {
  /*
   * 位置活动
   */
  PROTOCOL__BEHAVIOR_TYPE__BehaviorTypeUnknown = 0,
  /*
   * 吃食
   */
  PROTOCOL__BEHAVIOR_TYPE__BehaviorTypeEat = 1,
  /*
   * 反刍
   */
  PROTOCOL__BEHAVIOR_TYPE__BehaviorTypeRumination = 2,
  /*
   * 活跃度微弱
   */
  PROTOCOL__BEHAVIOR_TYPE__BehaviorTypeActivityWeak = 3,
  /*
   * 活跃度中
   */
  PROTOCOL__BEHAVIOR_TYPE__BehaviorTypeActivityMid = 4,
  /*
   * 活跃度强
   */
  PROTOCOL__BEHAVIOR_TYPE__BehaviorTypeActivityStrong = 5,
  /*
   * 睡觉
   */
  PROTOCOL__BEHAVIOR_TYPE__BehaviorTypeSleep = 6,
  /*
   * 走路
   */
  PROTOCOL__BEHAVIOR_TYPE__BehaviorTypeWalk = 7
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(PROTOCOL__BEHAVIOR_TYPE)
} Protocol__BehaviorType;

/* --- messages --- */

struct  _Protocol__BehaviorReq
{
  ProtobufCMessage base;
  Protocol__IdentityMsg *iden;
  size_t n_behaviorinfo;
  Protocol__Behavior **behaviorinfo;
};
#define PROTOCOL__BEHAVIOR_REQ__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&protocol__behavior_req__descriptor) \
    , NULL, 0,NULL }


struct  _Protocol__Behavior
{
  ProtobufCMessage base;
  /*
   * 行为开始时间
   */
  protobuf_c_boolean has_timestamp;
  uint32_t timestamp;
  /*
   * 行为类型
   */
  protobuf_c_boolean has_type;
  Protocol__BehaviorType type;
};
#define PROTOCOL__BEHAVIOR__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&protocol__behavior__descriptor) \
    , 0, 0u, 0, PROTOCOL__BEHAVIOR_TYPE__BehaviorTypeUnknown }


/* Protocol__BehaviorReq methods */
void   protocol__behavior_req__init
                     (Protocol__BehaviorReq         *message);
size_t protocol__behavior_req__get_packed_size
                     (const Protocol__BehaviorReq   *message);
size_t protocol__behavior_req__pack
                     (const Protocol__BehaviorReq   *message,
                      uint8_t             *out);
size_t protocol__behavior_req__pack_to_buffer
                     (const Protocol__BehaviorReq   *message,
                      ProtobufCBuffer     *buffer);
Protocol__BehaviorReq *
       protocol__behavior_req__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   protocol__behavior_req__free_unpacked
                     (Protocol__BehaviorReq *message,
                      ProtobufCAllocator *allocator);
/* Protocol__Behavior methods */
void   protocol__behavior__init
                     (Protocol__Behavior         *message);
size_t protocol__behavior__get_packed_size
                     (const Protocol__Behavior   *message);
size_t protocol__behavior__pack
                     (const Protocol__Behavior   *message,
                      uint8_t             *out);
size_t protocol__behavior__pack_to_buffer
                     (const Protocol__Behavior   *message,
                      ProtobufCBuffer     *buffer);
Protocol__Behavior *
       protocol__behavior__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   protocol__behavior__free_unpacked
                     (Protocol__Behavior *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Protocol__BehaviorReq_Closure)
                 (const Protocol__BehaviorReq *message,
                  void *closure_data);
typedef void (*Protocol__Behavior_Closure)
                 (const Protocol__Behavior *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCEnumDescriptor    protocol__behavior_type__descriptor;
extern const ProtobufCMessageDescriptor protocol__behavior_req__descriptor;
extern const ProtobufCMessageDescriptor protocol__behavior__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_Behavior_2eproto__INCLUDED */
