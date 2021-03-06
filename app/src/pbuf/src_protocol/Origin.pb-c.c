/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: Origin.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "Origin.pb-c.h"
void   protocol__origin_req__init
                     (Protocol__OriginReq         *message)
{
  static const Protocol__OriginReq init_value = PROTOCOL__ORIGIN_REQ__INIT;
  *message = init_value;
}
size_t protocol__origin_req__get_packed_size
                     (const Protocol__OriginReq *message)
{
  assert(message->base.descriptor == &protocol__origin_req__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t protocol__origin_req__pack
                     (const Protocol__OriginReq *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &protocol__origin_req__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t protocol__origin_req__pack_to_buffer
                     (const Protocol__OriginReq *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &protocol__origin_req__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Protocol__OriginReq *
       protocol__origin_req__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Protocol__OriginReq *)
     protobuf_c_message_unpack (&protocol__origin_req__descriptor,
                                allocator, len, data);
}
void   protocol__origin_req__free_unpacked
                     (Protocol__OriginReq *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &protocol__origin_req__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   protocol__xyz__init
                     (Protocol__XYZ         *message)
{
  static const Protocol__XYZ init_value = PROTOCOL__XYZ__INIT;
  *message = init_value;
}
size_t protocol__xyz__get_packed_size
                     (const Protocol__XYZ *message)
{
  assert(message->base.descriptor == &protocol__xyz__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t protocol__xyz__pack
                     (const Protocol__XYZ *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &protocol__xyz__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t protocol__xyz__pack_to_buffer
                     (const Protocol__XYZ *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &protocol__xyz__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Protocol__XYZ *
       protocol__xyz__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Protocol__XYZ *)
     protobuf_c_message_unpack (&protocol__xyz__descriptor,
                                allocator, len, data);
}
void   protocol__xyz__free_unpacked
                     (Protocol__XYZ *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &protocol__xyz__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const uint32_t protocol__origin_req__sampling_freq__default_value = 0u;
static const ProtobufCFieldDescriptor protocol__origin_req__field_descriptors[4] =
{
  {
    "Iden",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Protocol__OriginReq, iden),
    &protocol__identity_msg__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "Timestamp",
    2,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(Protocol__OriginReq, timestamp),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "SamplingFreq",
    3,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__OriginReq, has_samplingfreq),
    offsetof(Protocol__OriginReq, samplingfreq),
    NULL,
    &protocol__origin_req__sampling_freq__default_value,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "XYZInfo",
    4,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(Protocol__OriginReq, n_xyzinfo),
    offsetof(Protocol__OriginReq, xyzinfo),
    &protocol__xyz__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned protocol__origin_req__field_indices_by_name[] = {
  0,   /* field[0] = Iden */
  2,   /* field[2] = SamplingFreq */
  1,   /* field[1] = Timestamp */
  3,   /* field[3] = XYZInfo */
};
static const ProtobufCIntRange protocol__origin_req__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 4 }
};
const ProtobufCMessageDescriptor protocol__origin_req__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "protocol.OriginReq",
  "OriginReq",
  "Protocol__OriginReq",
  "protocol",
  sizeof(Protocol__OriginReq),
  4,
  protocol__origin_req__field_descriptors,
  protocol__origin_req__field_indices_by_name,
  1,  protocol__origin_req__number_ranges,
  (ProtobufCMessageInit) protocol__origin_req__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor protocol__xyz__field_descriptors[3] =
{
  {
    "X",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_SINT32,
    offsetof(Protocol__XYZ, has_x),
    offsetof(Protocol__XYZ, x),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "Y",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_SINT32,
    offsetof(Protocol__XYZ, has_y),
    offsetof(Protocol__XYZ, y),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "Z",
    3,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_SINT32,
    offsetof(Protocol__XYZ, has_z),
    offsetof(Protocol__XYZ, z),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned protocol__xyz__field_indices_by_name[] = {
  0,   /* field[0] = X */
  1,   /* field[1] = Y */
  2,   /* field[2] = Z */
};
static const ProtobufCIntRange protocol__xyz__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 3 }
};
const ProtobufCMessageDescriptor protocol__xyz__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "protocol.XYZ",
  "XYZ",
  "Protocol__XYZ",
  "protocol",
  sizeof(Protocol__XYZ),
  3,
  protocol__xyz__field_descriptors,
  protocol__xyz__field_indices_by_name,
  1,  protocol__xyz__number_ranges,
  (ProtobufCMessageInit) protocol__xyz__init,
  NULL,NULL,NULL    /* reserved[123] */
};
