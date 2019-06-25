/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: Define.proto */

#ifndef PROTOBUF_C_Define_2eproto__INCLUDED
#define PROTOBUF_C_Define_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1000000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1003000 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif




/* --- enums --- */

/*
 * 命令类型定义
 */
typedef enum _Protocol__HeaderType {
  PROTOCOL__HEADER_TYPE__TypeRegisterReq = 2,
  /*
   * 设备上传注册信息
   */
  PROTOCOL__HEADER_TYPE__TypeRegisterRsp = 3,
  PROTOCOL__HEADER_TYPE__TypeParameterReq = 4,
  /*
   * 设备读取参数信息
   */
  PROTOCOL__HEADER_TYPE__TypeParameterRsp = 5,
  PROTOCOL__HEADER_TYPE__TypeSettingReq = 6,
  /*
   * 设备读取配置信息
   */
  PROTOCOL__HEADER_TYPE__TypeSettingRsp = 7,
  PROTOCOL__HEADER_TYPE__TypeEnvReq = 8,
  /*
   * 设备上传环境数据
   */
  PROTOCOL__HEADER_TYPE__TypeEnvRsp = 9,
  PROTOCOL__HEADER_TYPE__TypeBehaviorReq = 10,
  /*
   * 设备上传行为数据
   */
  PROTOCOL__HEADER_TYPE__TypeBehaviorRsp = 11,
  PROTOCOL__HEADER_TYPE__TypeGPSReq = 12,
  /*
   * 设备上传定位数据
   */
  PROTOCOL__HEADER_TYPE__TypeGPSRsp = 13,
  PROTOCOL__HEADER_TYPE__TypeCellularReq = 14,
  /*
   * 设备上传基站数据
   */
  PROTOCOL__HEADER_TYPE__TypeCellularRsp = 15,
  PROTOCOL__HEADER_TYPE__TypeWarningReq = 16,
  /*
   * 设备上传报警数据
   */
  PROTOCOL__HEADER_TYPE__TypewarningRsp = 17,
  PROTOCOL__HEADER_TYPE__TypeDownloadReq = 18,
  /*
   * 设备读取固件数据
   */
  PROTOCOL__HEADER_TYPE__TypeDownloadRsp = 19,
  PROTOCOL__HEADER_TYPE__TypeUploadReq = 20,
  /*
   * 设备打包上传多种类型数据
   */
  PROTOCOL__HEADER_TYPE__TypeUploadRsp = 21,
  PROTOCOL__HEADER_TYPE__TypeSettingAndParamReq = 22,
  /*
   * 设备打包读取参数和配置信息
   */
  PROTOCOL__HEADER_TYPE__TypeSettingAndParamRsp = 23,
  PROTOCOL__HEADER_TYPE__TypeSMSMsg = 24,
  /*
   * 手机短信控制设备: 封装成协议包后进行Base64编码, 然后通过短信传输
   */
  PROTOCOL__HEADER_TYPE__TypeSMSRply = 25,
  PROTOCOL__HEADER_TYPE__TypeBehavior2Req = 26,
  /*
   * 设备上传行为feature
   */
  PROTOCOL__HEADER_TYPE__TypeBehavior2Rsp = 27,
  PROTOCOL__HEADER_TYPE__TypeEstrusReq = 28,
  /*
   * 设备上传发情feature
   */
  PROTOCOL__HEADER_TYPE__TypeEstrusRsp = 29,
  PROTOCOL__HEADER_TYPE__TypeOriginReq = 30,
  /*
   * 设备上传加速度原始数据
   */
  PROTOCOL__HEADER_TYPE__TypeOriginRsp = 31,
  PROTOCOL__HEADER_TYPE__TypeStatusReq = 32,
  /*
   * 设备上传状态数据
   */
  PROTOCOL__HEADER_TYPE__TypeStatusRsp = 33,
  PROTOCOL__HEADER_TYPE__TypeDebugReq = 1002,
  /*
   * 设备上传调试请求
   */
  PROTOCOL__HEADER_TYPE__TypeDebugRsp = 1003,
  PROTOCOL__HEADER_TYPE__TypeSensorReq = 1004,
  /*
   * 设备上传传感器数据
   */
  PROTOCOL__HEADER_TYPE__TypeSensorRsp = 1005,
  PROTOCOL__HEADER_TYPE__TypePingReq = 1006,
  /*
   * 设备测试链路
   */
  PROTOCOL__HEADER_TYPE__TypePingRsp = 1007,
  PROTOCOL__HEADER_TYPE__TypeAppReq = 1008,
  /*
   * 手机App协商命令
   */
  PROTOCOL__HEADER_TYPE__TypeAppRsp = 1009
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(PROTOCOL__HEADER_TYPE)
} Protocol__HeaderType;

/* --- messages --- */

/* --- per-message closures --- */


/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCEnumDescriptor    protocol__header_type__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_Define_2eproto__INCLUDED */
