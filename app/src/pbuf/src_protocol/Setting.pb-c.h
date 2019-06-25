/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: Setting.proto */

#ifndef PROTOBUF_C_Setting_2eproto__INCLUDED
#define PROTOBUF_C_Setting_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1000000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1003000 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif

#include "IdentityMsg.pb-c.h"

typedef struct _Protocol__SettingReq Protocol__SettingReq;
typedef struct _Protocol__TimeRange Protocol__TimeRange;
typedef struct _Protocol__Setting Protocol__Setting;
typedef struct _Protocol__SettingRsp Protocol__SettingRsp;


/* --- enums --- */


/* --- messages --- */

/*
 * 请求读取配置信息
 */
struct  _Protocol__SettingReq
{
  ProtobufCMessage base;
  Protocol__IdentityMsg *iden;
};
#define PROTOCOL__SETTING_REQ__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&protocol__setting_req__descriptor) \
    , NULL }


struct  _Protocol__TimeRange
{
  ProtobufCMessage base;
  /*
   * 开始时间
   */
  uint32_t begin;
  /*
   * 结束时间
   */
  uint32_t end;
};
#define PROTOCOL__TIME_RANGE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&protocol__time_range__descriptor) \
    , 0, 0 }


struct  _Protocol__Setting
{
  ProtobufCMessage base;
  /*
   * 环境采样模式: 0 - 关闭, 1 - 定时采样
   */
  protobuf_c_boolean has_envsamplemode;
  int32_t envsamplemode;
  /*
   * 环境采样间隔: 秒
   */
  protobuf_c_boolean has_envsampleinterval;
  int32_t envsampleinterval;
  /*
   * 行为采样模式: 0 - 关闭, 1 - 定时采样
   */
  protobuf_c_boolean has_behaviorsamplemode;
  int32_t behaviorsamplemode;
  /*
   * 行为采样间隔: 秒
   */
  protobuf_c_boolean has_behaviorsampleinterval;
  int32_t behaviorsampleinterval;
  /*
   * GPS采样模式: 0 - 关闭, 1 - 定时采样, 2 - 持续开启(功耗高，不推荐)
   */
  protobuf_c_boolean has_gpssamplemode;
  int32_t gpssamplemode;
  /*
   * GPS采样间隔: 秒
   */
  protobuf_c_boolean has_gpssampleinterval;
  int32_t gpssampleinterval;
  /*
   * 通信模式: 0 - 未定义, 1 - 定时上传, 2 - 持续在线(适合eDRX), 3 - 准点回传
   */
  protobuf_c_boolean has_communicationmode;
  int32_t communicationmode;
  /*
   * 通信间隔: 秒
   */
  protobuf_c_boolean has_communicationinterval;
  int32_t communicationinterval;
  /*
   * 准点回传时间表
   */
  char *communicationtimetable;
  /*
   * 复位请求: 0 - 不复位, 1 - 这次通信结束后立即复位
   */
  protobuf_c_boolean has_resetdevice;
  int32_t resetdevice;
  /*
   * 计划关机时间范围
   */
  size_t n_powerofftime;
  Protocol__TimeRange **powerofftime;
  /*
   * 0: disable, 1: unix timestamp, 2：每小时从0分开始的秒数，3: 每天从0点开始的秒数， 4：每月从1号0点开始的秒数
   */
  protobuf_c_boolean has_poweroffmode;
  int32_t poweroffmode;
  /*
   * OTA固件版本
   */
  protobuf_c_boolean has_otafirmwareversion;
  int32_t otafirmwareversion;
  /*
   * OTA固件标识
   */
  char *otafirmwareid;
  /*
   * OTA强制执行(丢弃数据，立即升级)
   */
  protobuf_c_boolean has_otaforceupgrade;
  int32_t otaforceupgrade;
  /*
   * OTA服务器域名或地址
   */
  char *otaserverhost;
  /*
   * OTA服务器端口
   */
  protobuf_c_boolean has_otaserverport;
  int32_t otaserverport;
  /*
   * 短信上传模式: 0 - 关闭, 1 - 定时上传, 2 - 辅助上传(网络通信失败时上传)
   */
  protobuf_c_boolean has_smsmode;
  int32_t smsmode;
  /*
   * 短信上传间隔: 秒
   */
  protobuf_c_boolean has_smsinterval;
  int32_t smsinterval;
  /*
   * 报警模式: 0 - 关闭, 1 - 数传报警, 2 - 短信报警, 3 - 数传+短信
   */
  protobuf_c_boolean has_alarmmode;
  int32_t alarmmode;
  /*
   * 原始数据配置的时间范围
   */
  size_t n_origintime;
  Protocol__TimeRange **origintime;
  /*
   * 0: disable, 1: unix timestamp, 2：每小时从0分开始的秒数，2: 每天从0点开始的秒数， 3：每月从1号0点开始的秒数
   */
  protobuf_c_boolean has_originmode;
  int32_t originmode;
  /*
   * 发情中间结果模式: 0 - 关闭, 1 - 定时采样
   */
  protobuf_c_boolean has_estrussamplemode;
  int32_t estrussamplemode;
  /*
   * 发情中间结果间隔: 秒
   */
  protobuf_c_boolean has_estrussampleinterval;
  int32_t estrussampleinterval;
};
extern char protocol__setting__communication_time_table__default_value[];
extern char protocol__setting__otafirmware_id__default_value[];
extern char protocol__setting__otaserver_host__default_value[];
#define PROTOCOL__SETTING__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&protocol__setting__descriptor) \
    , 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, protocol__setting__communication_time_table__default_value, 0, 0, 0,NULL, 0, 0, 0, 0, protocol__setting__otafirmware_id__default_value, 0, 0, protocol__setting__otaserver_host__default_value, 0, 0, 0, 0, 0, 0, 0, 0, 0,NULL, 0, 0, 0, 0, 0, 0 }


/*
 * 读取配置信息回应
 */
struct  _Protocol__SettingRsp
{
  ProtobufCMessage base;
  Protocol__IdentityMsg *iden;
  Protocol__Setting *settinginfo;
};
#define PROTOCOL__SETTING_RSP__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&protocol__setting_rsp__descriptor) \
    , NULL, NULL }


/* Protocol__SettingReq methods */
void   protocol__setting_req__init
                     (Protocol__SettingReq         *message);
size_t protocol__setting_req__get_packed_size
                     (const Protocol__SettingReq   *message);
size_t protocol__setting_req__pack
                     (const Protocol__SettingReq   *message,
                      uint8_t             *out);
size_t protocol__setting_req__pack_to_buffer
                     (const Protocol__SettingReq   *message,
                      ProtobufCBuffer     *buffer);
Protocol__SettingReq *
       protocol__setting_req__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   protocol__setting_req__free_unpacked
                     (Protocol__SettingReq *message,
                      ProtobufCAllocator *allocator);
/* Protocol__TimeRange methods */
void   protocol__time_range__init
                     (Protocol__TimeRange         *message);
size_t protocol__time_range__get_packed_size
                     (const Protocol__TimeRange   *message);
size_t protocol__time_range__pack
                     (const Protocol__TimeRange   *message,
                      uint8_t             *out);
size_t protocol__time_range__pack_to_buffer
                     (const Protocol__TimeRange   *message,
                      ProtobufCBuffer     *buffer);
Protocol__TimeRange *
       protocol__time_range__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   protocol__time_range__free_unpacked
                     (Protocol__TimeRange *message,
                      ProtobufCAllocator *allocator);
/* Protocol__Setting methods */
void   protocol__setting__init
                     (Protocol__Setting         *message);
size_t protocol__setting__get_packed_size
                     (const Protocol__Setting   *message);
size_t protocol__setting__pack
                     (const Protocol__Setting   *message,
                      uint8_t             *out);
size_t protocol__setting__pack_to_buffer
                     (const Protocol__Setting   *message,
                      ProtobufCBuffer     *buffer);
Protocol__Setting *
       protocol__setting__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   protocol__setting__free_unpacked
                     (Protocol__Setting *message,
                      ProtobufCAllocator *allocator);
/* Protocol__SettingRsp methods */
void   protocol__setting_rsp__init
                     (Protocol__SettingRsp         *message);
size_t protocol__setting_rsp__get_packed_size
                     (const Protocol__SettingRsp   *message);
size_t protocol__setting_rsp__pack
                     (const Protocol__SettingRsp   *message,
                      uint8_t             *out);
size_t protocol__setting_rsp__pack_to_buffer
                     (const Protocol__SettingRsp   *message,
                      ProtobufCBuffer     *buffer);
Protocol__SettingRsp *
       protocol__setting_rsp__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   protocol__setting_rsp__free_unpacked
                     (Protocol__SettingRsp *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Protocol__SettingReq_Closure)
                 (const Protocol__SettingReq *message,
                  void *closure_data);
typedef void (*Protocol__TimeRange_Closure)
                 (const Protocol__TimeRange *message,
                  void *closure_data);
typedef void (*Protocol__Setting_Closure)
                 (const Protocol__Setting *message,
                  void *closure_data);
typedef void (*Protocol__SettingRsp_Closure)
                 (const Protocol__SettingRsp *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor protocol__setting_req__descriptor;
extern const ProtobufCMessageDescriptor protocol__time_range__descriptor;
extern const ProtobufCMessageDescriptor protocol__setting__descriptor;
extern const ProtobufCMessageDescriptor protocol__setting_rsp__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_Setting_2eproto__INCLUDED */
