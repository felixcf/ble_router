# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: SimpleRsp.proto

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


DESCRIPTOR = _descriptor.FileDescriptor(
  name='SimpleRsp.proto',
  package='protocol',
  syntax='proto2',
  serialized_pb=_b('\n\x0fSimpleRsp.proto\x12\x08protocol\x1a\x11IdentityMsg.proto\"0\n\tSimpleRsp\x12#\n\x04Iden\x18\x01 \x02(\x0b\x32\x15.protocol.IdentityMsg')
  ,
  dependencies=[IdentityMsg__pb2.DESCRIPTOR,])




_SIMPLERSP = _descriptor.Descriptor(
  name='SimpleRsp',
  full_name='protocol.SimpleRsp',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='Iden', full_name='protocol.SimpleRsp.Iden', index=0,
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
  serialized_start=48,
  serialized_end=96,
)

_SIMPLERSP.fields_by_name['Iden'].message_type = IdentityMsg__pb2._IDENTITYMSG
DESCRIPTOR.message_types_by_name['SimpleRsp'] = _SIMPLERSP
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

SimpleRsp = _reflection.GeneratedProtocolMessageType('SimpleRsp', (_message.Message,), dict(
  DESCRIPTOR = _SIMPLERSP,
  __module__ = 'SimpleRsp_pb2'
  # @@protoc_insertion_point(class_scope:protocol.SimpleRsp)
  ))
_sym_db.RegisterMessage(SimpleRsp)


# @@protoc_insertion_point(module_scope)
