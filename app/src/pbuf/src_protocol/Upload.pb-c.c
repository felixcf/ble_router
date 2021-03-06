/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: Upload.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "Upload.pb-c.h"
void   protocol__upload_req__init
                     (Protocol__UploadReq         *message)
{
  static const Protocol__UploadReq init_value = PROTOCOL__UPLOAD_REQ__INIT;
  *message = init_value;
}
size_t protocol__upload_req__get_packed_size
                     (const Protocol__UploadReq *message)
{
  assert(message->base.descriptor == &protocol__upload_req__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t protocol__upload_req__pack
                     (const Protocol__UploadReq *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &protocol__upload_req__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t protocol__upload_req__pack_to_buffer
                     (const Protocol__UploadReq *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &protocol__upload_req__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Protocol__UploadReq *
       protocol__upload_req__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Protocol__UploadReq *)
     protobuf_c_message_unpack (&protocol__upload_req__descriptor,
                                allocator, len, data);
}
void   protocol__upload_req__free_unpacked
                     (Protocol__UploadReq *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &protocol__upload_req__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor protocol__upload_req__field_descriptors[7] =
{
  {
    "Iden",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Protocol__UploadReq, iden),
    &protocol__identity_msg__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "EnvInfo",
    2,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(Protocol__UploadReq, n_envinfo),
    offsetof(Protocol__UploadReq, envinfo),
    &protocol__env__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "BehaviorInfo",
    3,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(Protocol__UploadReq, n_behaviorinfo),
    offsetof(Protocol__UploadReq, behaviorinfo),
    &protocol__behavior__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "GPSInfo",
    4,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(Protocol__UploadReq, n_gpsinfo),
    offsetof(Protocol__UploadReq, gpsinfo),
    &protocol__gps__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "StatusInfo",
    5,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(Protocol__UploadReq, n_statusinfo),
    offsetof(Protocol__UploadReq, statusinfo),
    &protocol__status__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "CellularInfo",
    6,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(Protocol__UploadReq, n_cellularinfo),
    offsetof(Protocol__UploadReq, cellularinfo),
    &protocol__cellular__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "SMS",
    10,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    offsetof(Protocol__UploadReq, has_sms),
    offsetof(Protocol__UploadReq, sms),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned protocol__upload_req__field_indices_by_name[] = {
  2,   /* field[2] = BehaviorInfo */
  5,   /* field[5] = CellularInfo */
  1,   /* field[1] = EnvInfo */
  3,   /* field[3] = GPSInfo */
  0,   /* field[0] = Iden */
  6,   /* field[6] = SMS */
  4,   /* field[4] = StatusInfo */
};
static const ProtobufCIntRange protocol__upload_req__number_ranges[2 + 1] =
{
  { 1, 0 },
  { 10, 6 },
  { 0, 7 }
};
const ProtobufCMessageDescriptor protocol__upload_req__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "protocol.UploadReq",
  "UploadReq",
  "Protocol__UploadReq",
  "protocol",
  sizeof(Protocol__UploadReq),
  7,
  protocol__upload_req__field_descriptors,
  protocol__upload_req__field_indices_by_name,
  2,  protocol__upload_req__number_ranges,
  (ProtobufCMessageInit) protocol__upload_req__init,
  NULL,NULL,NULL    /* reserved[123] */
};
