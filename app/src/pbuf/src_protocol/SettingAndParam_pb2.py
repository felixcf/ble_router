# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: SettingAndParam.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


import IdentityMsg_pb2 as IdentityMsg__pb2
import Setting_pb2 as Setting__pb2
import Parameter_pb2 as Parameter__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='SettingAndParam.proto',
  package='protocol',
  syntax='proto2',
  serialized_pb=_b('\n\x15SettingAndParam.proto\x12\x08protocol\x1a\x11IdentityMsg.proto\x1a\rSetting.proto\x1a\x0fParameter.proto\"9\n\x12SettingAndParamReq\x12#\n\x04Iden\x18\x01 \x02(\x0b\x32\x15.protocol.IdentityMsg\"\x8d\x01\n\x12SettingAndParamRsp\x12#\n\x04Iden\x18\x01 \x02(\x0b\x32\x15.protocol.IdentityMsg\x12&\n\x0bSettingInfo\x18\x02 \x02(\x0b\x32\x11.protocol.Setting\x12*\n\rParameterInfo\x18\x03 \x02(\x0b\x32\x13.protocol.Parameter')
  ,
  dependencies=[IdentityMsg__pb2.DESCRIPTOR,Setting__pb2.DESCRIPTOR,Parameter__pb2.DESCRIPTOR,])




_SETTINGANDPARAMREQ = _descriptor.Descriptor(
  name='SettingAndParamReq',
  full_name='protocol.SettingAndParamReq',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='Iden', full_name='protocol.SettingAndParamReq.Iden', index=0,
      number=1, type=11, cpp_type=10, label=2,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto2',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=86,
  serialized_end=143,
)


_SETTINGANDPARAMRSP = _descriptor.Descriptor(
  name='SettingAndParamRsp',
  full_name='protocol.SettingAndParamRsp',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='Iden', full_name='protocol.SettingAndParamRsp.Iden', index=0,
      number=1, type=11, cpp_type=10, label=2,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='SettingInfo', full_name='protocol.SettingAndParamRsp.SettingInfo', index=1,
      number=2, type=11, cpp_type=10, label=2,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='ParameterInfo', full_name='protocol.SettingAndParamRsp.ParameterInfo', index=2,
      number=3, type=11, cpp_type=10, label=2,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto2',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=146,
  serialized_end=287,
)

_SETTINGANDPARAMREQ.fields_by_name['Iden'].message_type = IdentityMsg__pb2._IDENTITYMSG
_SETTINGANDPARAMRSP.fields_by_name['Iden'].message_type = IdentityMsg__pb2._IDENTITYMSG
_SETTINGANDPARAMRSP.fields_by_name['SettingInfo'].message_type = Setting__pb2._SETTING
_SETTINGANDPARAMRSP.fields_by_name['ParameterInfo'].message_type = Parameter__pb2._PARAMETER
DESCRIPTOR.message_types_by_name['SettingAndParamReq'] = _SETTINGANDPARAMREQ
DESCRIPTOR.message_types_by_name['SettingAndParamRsp'] = _SETTINGANDPARAMRSP
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

SettingAndParamReq = _reflection.GeneratedProtocolMessageType('SettingAndParamReq', (_message.Message,), dict(
  DESCRIPTOR = _SETTINGANDPARAMREQ,
  __module__ = 'SettingAndParam_pb2'
  # @@protoc_insertion_point(class_scope:protocol.SettingAndParamReq)
  ))
_sym_db.RegisterMessage(SettingAndParamReq)

SettingAndParamRsp = _reflection.GeneratedProtocolMessageType('SettingAndParamRsp', (_message.Message,), dict(
  DESCRIPTOR = _SETTINGANDPARAMRSP,
  __module__ = 'SettingAndParam_pb2'
  # @@protoc_insertion_point(class_scope:protocol.SettingAndParamRsp)
  ))
_sym_db.RegisterMessage(SettingAndParamRsp)


# @@protoc_insertion_point(module_scope)