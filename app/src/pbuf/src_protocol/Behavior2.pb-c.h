/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: Behavior2.proto */

#ifndef PROTOBUF_C_Behavior2_2eproto__INCLUDED
#define PROTOBUF_C_Behavior2_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1000000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1003000 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif

#include "IdentityMsg.pb-c.h"

typedef struct _Protocol__Behavior2Req Protocol__Behavior2Req;
typedef struct _Protocol__Behavior2 Protocol__Behavior2;


/* --- enums --- */


/* --- messages --- */

struct  _Protocol__Behavior2Req
{
  ProtobufCMessage base;
  Protocol__IdentityMsg *iden;
  size_t n_behaviorinfo;
  Protocol__Behavior2 **behaviorinfo;
};
#define PROTOCOL__BEHAVIOR2_REQ__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&protocol__behavior2_req__descriptor) \
    , NULL, 0,NULL }


struct  _Protocol__Behavior2
{
  ProtobufCMessage base;
  protobuf_c_boolean has_timestamp;
  uint32_t timestamp;
  /*
   * odbax value in 0.0001g
   */
  protobuf_c_boolean has_odbax;
  int32_t odbax;
  /*
   * odbay value in 0.0001g
   */
  protobuf_c_boolean has_odbay;
  int32_t odbay;
  /*
   * odbaz value in 0.0001g
   */
  protobuf_c_boolean has_odbaz;
  int32_t odbaz;
  /*
   * mean(|X(i) - X(i-1)|) in 0.0001g
   */
  protobuf_c_boolean has_meandlx;
  int32_t meandlx;
  /*
   * mean(|Y(i) - Y(i-1)|) in 0.0001g
   */
  protobuf_c_boolean has_meandly;
  int32_t meandly;
  /*
   * mean(|Z(i) - Z(i-1)|) in 0.0001g
   */
  protobuf_c_boolean has_meandlz;
  int32_t meandlz;
  /*
   * odba value in 0.0001g
   */
  protobuf_c_boolean has_odba;
  int32_t odba;
};
#define PROTOCOL__BEHAVIOR2__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&protocol__behavior2__descriptor) \
    , 0, 0u, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }


/* Protocol__Behavior2Req methods */
void   protocol__behavior2_req__init
                     (Protocol__Behavior2Req         *message);
size_t protocol__behavior2_req__get_packed_size
                     (const Protocol__Behavior2Req   *message);
size_t protocol__behavior2_req__pack
                     (const Protocol__Behavior2Req   *message,
                      uint8_t             *out);
size_t protocol__behavior2_req__pack_to_buffer
                     (const Protocol__Behavior2Req   *message,
                      ProtobufCBuffer     *buffer);
Protocol__Behavior2Req *
       protocol__behavior2_req__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   protocol__behavior2_req__free_unpacked
                     (Protocol__Behavior2Req *message,
                      ProtobufCAllocator *allocator);
/* Protocol__Behavior2 methods */
void   protocol__behavior2__init
                     (Protocol__Behavior2         *message);
size_t protocol__behavior2__get_packed_size
                     (const Protocol__Behavior2   *message);
size_t protocol__behavior2__pack
                     (const Protocol__Behavior2   *message,
                      uint8_t             *out);
size_t protocol__behavior2__pack_to_buffer
                     (const Protocol__Behavior2   *message,
                      ProtobufCBuffer     *buffer);
Protocol__Behavior2 *
       protocol__behavior2__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   protocol__behavior2__free_unpacked
                     (Protocol__Behavior2 *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Protocol__Behavior2Req_Closure)
                 (const Protocol__Behavior2Req *message,
                  void *closure_data);
typedef void (*Protocol__Behavior2_Closure)
                 (const Protocol__Behavior2 *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor protocol__behavior2_req__descriptor;
extern const ProtobufCMessageDescriptor protocol__behavior2__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_Behavior2_2eproto__INCLUDED */
