/* Automatically generated nanopb header */
/* Generated by nanopb-0.3.6-dev at Wed Oct 24 15:48:43 2018. */

#ifndef PB_ROUTER_SETTING_PB_H_INCLUDED
#define PB_ROUTER_SETTING_PB_H_INCLUDED
#include <pb.h>

#include "IdentityMsg.pb.h"

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Struct definitions */
typedef struct {
    proto_router_identity_msg_t Head;
    uint32_t RouterId;
    uint32_t Requester;
    bool has_TimeStamp;
    uint32_t TimeStamp;
    pb_callback_t TargetMac;
    bool has_AddOrDel;
    uint32_t AddOrDel;
    pb_callback_t TargetName;
    bool has_Mode;
    uint32_t Mode;
    pb_callback_t Ip;
    bool has_Port;
    uint32_t Port;
/* @@protoc_insertion_point(struct:proto_router_setting_req_t) */
} proto_router_setting_req_t;

/* Default values for struct fields */

/* Initializer values for message structs */
#define PROTO_ROUTER_SETTING_REQ_INIT_DEFAULT    {PROTO_ROUTER_IDENTITY_MSG_INIT_DEFAULT, 0, 0, false, 0, {{NULL}, NULL}, false, 0, {{NULL}, NULL}, false, 0, {{NULL}, NULL}, false, 0}
#define PROTO_ROUTER_SETTING_REQ_INIT_ZERO       {PROTO_ROUTER_IDENTITY_MSG_INIT_ZERO, 0, 0, false, 0, {{NULL}, NULL}, false, 0, {{NULL}, NULL}, false, 0, {{NULL}, NULL}, false, 0}

/* Field tags (for use in manual encoding/decoding) */
#define PROTO_ROUTER_SETTING_REQ_HEAD_TAG        1
#define PROTO_ROUTER_SETTING_REQ_ROUTERID_TAG    2
#define PROTO_ROUTER_SETTING_REQ_REQUESTER_TAG   3
#define PROTO_ROUTER_SETTING_REQ_TIMESTAMP_TAG   4
#define PROTO_ROUTER_SETTING_REQ_TARGETMAC_TAG   5
#define PROTO_ROUTER_SETTING_REQ_ADDORDEL_TAG    6
#define PROTO_ROUTER_SETTING_REQ_TARGETNAME_TAG  7
#define PROTO_ROUTER_SETTING_REQ_MODE_TAG        8
#define PROTO_ROUTER_SETTING_REQ_IP_TAG          9
#define PROTO_ROUTER_SETTING_REQ_PORT_TAG        10

/* Struct field encoding specification for nanopb */
extern const pb_field_t proto_router_setting_req_fields[11];

/* Maximum encoded size of messages (where known) */
/* PROTO_ROUTER_SETTING_REQ_SIZE depends on runtime parameters */

/* Message IDs (where set with "msgid" option) */
#ifdef PB_MSGID

#define ROUTER_SETTING_MESSAGES \


#endif

#ifdef __cplusplus
} /* extern "C" */
#endif
/* @@protoc_insertion_point(eof) */

#endif
