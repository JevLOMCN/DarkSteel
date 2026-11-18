// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 7

// FLastResortPropertyNetSerializerInfo @ 1441f8860

FLastResortPropertyNetSerializerInfo * __thiscall
UE::Net::FLastResortPropertyNetSerializerInfo::FLastResortPropertyNetSerializerInfo
          (FLastResortPropertyNetSerializerInfo *this,uint param_1)

{
  this->MaxQuantizedSizeBits = param_1;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FLastResortPropertyNetSerializerInfo_Net_UE__6B_;
  this->bExcludeFromDefaultStateHash = false;
  return this;
}

// FLastResortPropertyNetSerializerInfo @ 1441f8890

FLastResortPropertyNetSerializerInfo * __thiscall
UE::Net::FLastResortPropertyNetSerializerInfo::FLastResortPropertyNetSerializerInfo
          (FLastResortPropertyNetSerializerInfo *this)

{
  this->MaxQuantizedSizeBits = 0xffff;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FLastResortPropertyNetSerializerInfo_Net_UE__6B_;
  this->bExcludeFromDefaultStateHash = false;
  return this;
}

// BuildNetSerializerConfig @ 1442000d0

FNetSerializerConfig * __thiscall
UE::Net::FLastResortPropertyNetSerializerInfo::BuildNetSerializerConfig
          (FLastResortPropertyNetSerializerInfo *this,void *param_1,FProperty *param_2)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined2 *)((longlong)param_1 + 0x31) = 0;
  *(undefined1 *)((longlong)param_1 + 0x33) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined1 *)((longlong)param_1 + 0x30) = 0;
  *(undefined ***)param_1 = &___7FLastResortPropertyNetSerializerConfig__6B_;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0xffff;
  InitLastResortPropertyNetSerializerConfigFromProperty(param_1,param_2);
  *(bool *)((longlong)param_1 + 0x30) = this->bExcludeFromDefaultStateHash;
  *(uint *)((longlong)param_1 + 0x34) = this->MaxQuantizedSizeBits;
  return param_1;
}

// CanUseDefaultConfig @ 144201030

bool __thiscall
UE::Net::FLastResortPropertyNetSerializerInfo::CanUseDefaultConfig
          (FLastResortPropertyNetSerializerInfo *this,FProperty *param_1)

{
  return false;
}

// GetNetSerializer @ 14420af90

FNetSerializer * __thiscall
UE::Net::FLastResortPropertyNetSerializerInfo::GetNetSerializer
          (FLastResortPropertyNetSerializerInfo *this,FProperty *param_1)

{
  return &FLastResortPropertyNetSerializerNetSerializerInfo::Serializer;
}

// GetPropertyTypeClass @ 14420ce90

FFieldClass * __thiscall
UE::Net::FLastResortPropertyNetSerializerInfo::GetPropertyTypeClass
          (FLastResortPropertyNetSerializerInfo *this)

{
  FFieldClass *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar1 = FField::StaticClass();
      FFieldClass::FFieldClass
                (&::StaticFieldClass,L"FProperty",0x8000,CASTCLASS_FProperty|CASTCLASS_UField,pFVar1
                 ,FProperty::Construct);
      atexit(`FProperty::StaticClass'::__l2::_dynamic_atexit_destructor_for__StaticFieldClass__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticFieldClass;
    }
  }
  return &::StaticFieldClass;
}

// IsSupported @ 144211fb0

bool __thiscall
UE::Net::FLastResortPropertyNetSerializerInfo::IsSupported
          (FLastResortPropertyNetSerializerInfo *this,FProperty *param_1)

{
  return true;
}

