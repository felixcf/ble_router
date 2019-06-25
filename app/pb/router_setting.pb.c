/* Automatically generated nanopb constant definitions */
/* Generated by nanopb-0.3.6-dev at Wed Oct 24 15:48:43 2018. */

#include "router_setting.pb.h"

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif



const pb_field_t proto_router_setting_req_fields[11] = {
    PB_FIELD(  1, MESSAGE , REQUIRED, STATIC  , FIRST, proto_router_setting_req_t, Head, Head, &proto_router_identity_msg_fields),
    PB_FIELD(  2, UINT32  , REQUIRED, STATIC  , OTHER, proto_router_setting_req_t, RouterId, Head, 0),
    PB_FIELD(  3, UINT32  , REQUIRED, STATIC  , OTHER, proto_router_setting_req_t, Requester, RouterId, 0),
    PB_FIELD(  4, UINT32  , OPTIONAL, STATIC  , OTHER, proto_router_setting_req_t, TimeStamp, Requester, 0),
    PB_FIELD(  5, STRING  , OPTIONAL, CALLBACK, OTHER, proto_router_setting_req_t, TargetMac, TimeStamp, 0),
    PB_FIELD(  6, UINT32  , OPTIONAL, STATIC  , OTHER, proto_router_setting_req_t, AddOrDel, TargetMac, 0),
    PB_FIELD(  7, STRING  , OPTIONAL, CALLBACK, OTHER, proto_router_setting_req_t, TargetName, AddOrDel, 0),
    PB_FIELD(  8, UINT32  , OPTIONAL, STATIC  , OTHER, proto_router_setting_req_t, Mode, TargetName, 0),
    PB_FIELD(  9, STRING  , OPTIONAL, CALLBACK, OTHER, proto_router_setting_req_t, Ip, Mode, 0),
    PB_FIELD( 10, UINT32  , OPTIONAL, STATIC  , OTHER, proto_router_setting_req_t, Port, Ip, 0),
    PB_LAST_FIELD
};


/* Check that field information fits in pb_field_t */
#if !defined(PB_FIELD_32BIT)
/* If you get an error here, it means that you need to define PB_FIELD_32BIT
 * compile-time option. You can do that in pb.h or on compiler command line.
 * 
 * The reason you need to do this is that some of your messages contain tag
 * numbers or field sizes that are larger than what can fit in 8 or 16 bit
 * field descriptors.
 */
PB_STATIC_ASSERT((pb_membersize(proto_router_setting_req_t, Head) < 65536), YOU_MUST_DEFINE_PB_FIELD_32BIT_FOR_MESSAGES_proto_router_setting_req)
#endif

#if !defined(PB_FIELD_16BIT) && !defined(PB_FIELD_32BIT)
/* If you get an error here, it means that you need to define PB_FIELD_16BIT
 * compile-time option. You can do that in pb.h or on compiler command line.
 * 
 * The reason you need to do this is that some of your messages contain tag
 * numbers or field sizes that are larger than what can fit in the default
 * 8 bit descriptors.
 */
PB_STATIC_ASSERT((pb_membersize(proto_router_setting_req_t, Head) < 256), YOU_MUST_DEFINE_PB_FIELD_16BIT_FOR_MESSAGES_proto_router_setting_req)
#endif


/* @@protoc_insertion_point(eof) */
