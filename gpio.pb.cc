// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "gpio.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace {

const ::google::protobuf::Descriptor* GpioCmd_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  GpioCmd_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* GpioCmd_Cmd_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* GpioCmd_GpioMode_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_gpio_2eproto() {
  protobuf_AddDesc_gpio_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "gpio.proto");
  GOOGLE_CHECK(file != NULL);
  GpioCmd_descriptor_ = file->message_type(0);
  static const int GpioCmd_offsets_[8] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GpioCmd, cmd_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GpioCmd, spiport_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GpioCmd, gpioport_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GpioCmd, i2cport_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GpioCmd, spiclock_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GpioCmd, dataout_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GpioCmd, datain_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GpioCmd, gpiomode_),
  };
  GpioCmd_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      GpioCmd_descriptor_,
      GpioCmd::default_instance_,
      GpioCmd_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GpioCmd, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GpioCmd, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(GpioCmd));
  GpioCmd_Cmd_descriptor_ = GpioCmd_descriptor_->enum_type(0);
  GpioCmd_GpioMode_descriptor_ = GpioCmd_descriptor_->enum_type(1);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_gpio_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    GpioCmd_descriptor_, &GpioCmd::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_gpio_2eproto() {
  delete GpioCmd::default_instance_;
  delete GpioCmd_reflection_;
}

void protobuf_AddDesc_gpio_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\ngpio.proto\"\366\001\n\007GpioCmd\022\031\n\003cmd\030\001 \002(\0162\014."
    "GpioCmd.Cmd\022\017\n\007spiPort\030\002 \001(\005\022\020\n\010gpioPort"
    "\030\003 \001(\005\022\017\n\007i2cPort\030\004 \001(\005\022\020\n\010spiClock\030\005 \001("
    "\005\022\017\n\007dataOut\030\006 \001(\014\022\016\n\006dataIn\030\007 \001(\014\022#\n\010gp"
    "ioMode\030\010 \001(\0162\021.GpioCmd.GpioMode\"!\n\003Cmd\022\010"
    "\n\004GPIO\020\000\022\007\n\003SPI\020\001\022\007\n\003I2C\020\002\"!\n\010GpioMode\022\n"
    "\n\006OUTPUT\020\001\022\t\n\005INPUT\020\002", 261);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "gpio.proto", &protobuf_RegisterTypes);
  GpioCmd::default_instance_ = new GpioCmd();
  GpioCmd::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_gpio_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_gpio_2eproto {
  StaticDescriptorInitializer_gpio_2eproto() {
    protobuf_AddDesc_gpio_2eproto();
  }
} static_descriptor_initializer_gpio_2eproto_;


// ===================================================================

const ::google::protobuf::EnumDescriptor* GpioCmd_Cmd_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return GpioCmd_Cmd_descriptor_;
}
bool GpioCmd_Cmd_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

#ifndef _MSC_VER
const GpioCmd_Cmd GpioCmd::GPIO;
const GpioCmd_Cmd GpioCmd::SPI;
const GpioCmd_Cmd GpioCmd::I2C;
const GpioCmd_Cmd GpioCmd::Cmd_MIN;
const GpioCmd_Cmd GpioCmd::Cmd_MAX;
const int GpioCmd::Cmd_ARRAYSIZE;
#endif  // _MSC_VER
const ::google::protobuf::EnumDescriptor* GpioCmd_GpioMode_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return GpioCmd_GpioMode_descriptor_;
}
bool GpioCmd_GpioMode_IsValid(int value) {
  switch(value) {
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

#ifndef _MSC_VER
const GpioCmd_GpioMode GpioCmd::OUTPUT;
const GpioCmd_GpioMode GpioCmd::INPUT;
const GpioCmd_GpioMode GpioCmd::GpioMode_MIN;
const GpioCmd_GpioMode GpioCmd::GpioMode_MAX;
const int GpioCmd::GpioMode_ARRAYSIZE;
#endif  // _MSC_VER
#ifndef _MSC_VER
const int GpioCmd::kCmdFieldNumber;
const int GpioCmd::kSpiPortFieldNumber;
const int GpioCmd::kGpioPortFieldNumber;
const int GpioCmd::kI2CPortFieldNumber;
const int GpioCmd::kSpiClockFieldNumber;
const int GpioCmd::kDataOutFieldNumber;
const int GpioCmd::kDataInFieldNumber;
const int GpioCmd::kGpioModeFieldNumber;
#endif  // !_MSC_VER

GpioCmd::GpioCmd()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void GpioCmd::InitAsDefaultInstance() {
}

GpioCmd::GpioCmd(const GpioCmd& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void GpioCmd::SharedCtor() {
  _cached_size_ = 0;
  cmd_ = 0;
  spiport_ = 0;
  gpioport_ = 0;
  i2cport_ = 0;
  spiclock_ = 0;
  dataout_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  datain_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  gpiomode_ = 1;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

GpioCmd::~GpioCmd() {
  SharedDtor();
}

void GpioCmd::SharedDtor() {
  if (dataout_ != &::google::protobuf::internal::kEmptyString) {
    delete dataout_;
  }
  if (datain_ != &::google::protobuf::internal::kEmptyString) {
    delete datain_;
  }
  if (this != default_instance_) {
  }
}

void GpioCmd::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* GpioCmd::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return GpioCmd_descriptor_;
}

const GpioCmd& GpioCmd::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_gpio_2eproto();  return *default_instance_;
}

GpioCmd* GpioCmd::default_instance_ = NULL;

GpioCmd* GpioCmd::New() const {
  return new GpioCmd;
}

void GpioCmd::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    cmd_ = 0;
    spiport_ = 0;
    gpioport_ = 0;
    i2cport_ = 0;
    spiclock_ = 0;
    if (has_dataout()) {
      if (dataout_ != &::google::protobuf::internal::kEmptyString) {
        dataout_->clear();
      }
    }
    if (has_datain()) {
      if (datain_ != &::google::protobuf::internal::kEmptyString) {
        datain_->clear();
      }
    }
    gpiomode_ = 1;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool GpioCmd::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .GpioCmd.Cmd cmd = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::GpioCmd_Cmd_IsValid(value)) {
            set_cmd(static_cast< ::GpioCmd_Cmd >(value));
          } else {
            mutable_unknown_fields()->AddVarint(1, value);
          }
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_spiPort;
        break;
      }
      
      // optional int32 spiPort = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_spiPort:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &spiport_)));
          set_has_spiport();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_gpioPort;
        break;
      }
      
      // optional int32 gpioPort = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_gpioPort:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &gpioport_)));
          set_has_gpioport();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_i2cPort;
        break;
      }
      
      // optional int32 i2cPort = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_i2cPort:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &i2cport_)));
          set_has_i2cport();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(40)) goto parse_spiClock;
        break;
      }
      
      // optional int32 spiClock = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_spiClock:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &spiclock_)));
          set_has_spiclock();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(50)) goto parse_dataOut;
        break;
      }
      
      // optional bytes dataOut = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_dataOut:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_dataout()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(58)) goto parse_dataIn;
        break;
      }
      
      // optional bytes dataIn = 7;
      case 7: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_dataIn:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_datain()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(64)) goto parse_gpioMode;
        break;
      }
      
      // optional .GpioCmd.GpioMode gpioMode = 8;
      case 8: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_gpioMode:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::GpioCmd_GpioMode_IsValid(value)) {
            set_gpiomode(static_cast< ::GpioCmd_GpioMode >(value));
          } else {
            mutable_unknown_fields()->AddVarint(8, value);
          }
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void GpioCmd::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required .GpioCmd.Cmd cmd = 1;
  if (has_cmd()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->cmd(), output);
  }
  
  // optional int32 spiPort = 2;
  if (has_spiport()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->spiport(), output);
  }
  
  // optional int32 gpioPort = 3;
  if (has_gpioport()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->gpioport(), output);
  }
  
  // optional int32 i2cPort = 4;
  if (has_i2cport()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->i2cport(), output);
  }
  
  // optional int32 spiClock = 5;
  if (has_spiclock()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(5, this->spiclock(), output);
  }
  
  // optional bytes dataOut = 6;
  if (has_dataout()) {
    ::google::protobuf::internal::WireFormatLite::WriteBytes(
      6, this->dataout(), output);
  }
  
  // optional bytes dataIn = 7;
  if (has_datain()) {
    ::google::protobuf::internal::WireFormatLite::WriteBytes(
      7, this->datain(), output);
  }
  
  // optional .GpioCmd.GpioMode gpioMode = 8;
  if (has_gpiomode()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      8, this->gpiomode(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* GpioCmd::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required .GpioCmd.Cmd cmd = 1;
  if (has_cmd()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->cmd(), target);
  }
  
  // optional int32 spiPort = 2;
  if (has_spiport()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->spiport(), target);
  }
  
  // optional int32 gpioPort = 3;
  if (has_gpioport()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->gpioport(), target);
  }
  
  // optional int32 i2cPort = 4;
  if (has_i2cport()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(4, this->i2cport(), target);
  }
  
  // optional int32 spiClock = 5;
  if (has_spiclock()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(5, this->spiclock(), target);
  }
  
  // optional bytes dataOut = 6;
  if (has_dataout()) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        6, this->dataout(), target);
  }
  
  // optional bytes dataIn = 7;
  if (has_datain()) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        7, this->datain(), target);
  }
  
  // optional .GpioCmd.GpioMode gpioMode = 8;
  if (has_gpiomode()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      8, this->gpiomode(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int GpioCmd::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required .GpioCmd.Cmd cmd = 1;
    if (has_cmd()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->cmd());
    }
    
    // optional int32 spiPort = 2;
    if (has_spiport()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->spiport());
    }
    
    // optional int32 gpioPort = 3;
    if (has_gpioport()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->gpioport());
    }
    
    // optional int32 i2cPort = 4;
    if (has_i2cport()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->i2cport());
    }
    
    // optional int32 spiClock = 5;
    if (has_spiclock()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->spiclock());
    }
    
    // optional bytes dataOut = 6;
    if (has_dataout()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->dataout());
    }
    
    // optional bytes dataIn = 7;
    if (has_datain()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->datain());
    }
    
    // optional .GpioCmd.GpioMode gpioMode = 8;
    if (has_gpiomode()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->gpiomode());
    }
    
  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void GpioCmd::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const GpioCmd* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const GpioCmd*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void GpioCmd::MergeFrom(const GpioCmd& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_cmd()) {
      set_cmd(from.cmd());
    }
    if (from.has_spiport()) {
      set_spiport(from.spiport());
    }
    if (from.has_gpioport()) {
      set_gpioport(from.gpioport());
    }
    if (from.has_i2cport()) {
      set_i2cport(from.i2cport());
    }
    if (from.has_spiclock()) {
      set_spiclock(from.spiclock());
    }
    if (from.has_dataout()) {
      set_dataout(from.dataout());
    }
    if (from.has_datain()) {
      set_datain(from.datain());
    }
    if (from.has_gpiomode()) {
      set_gpiomode(from.gpiomode());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void GpioCmd::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void GpioCmd::CopyFrom(const GpioCmd& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GpioCmd::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;
  
  return true;
}

void GpioCmd::Swap(GpioCmd* other) {
  if (other != this) {
    std::swap(cmd_, other->cmd_);
    std::swap(spiport_, other->spiport_);
    std::swap(gpioport_, other->gpioport_);
    std::swap(i2cport_, other->i2cport_);
    std::swap(spiclock_, other->spiclock_);
    std::swap(dataout_, other->dataout_);
    std::swap(datain_, other->datain_);
    std::swap(gpiomode_, other->gpiomode_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata GpioCmd::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = GpioCmd_descriptor_;
  metadata.reflection = GpioCmd_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
