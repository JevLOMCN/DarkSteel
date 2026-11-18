// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 5

// BuildNetSerializerConfig @ 1441ffd10

FNetSerializerConfig * __thiscall
UE::Net::FDefaultStructPropertyNetSerializerInfo::BuildNetSerializerConfig
          (FDefaultStructPropertyNetSerializerInfo *this,void *param_1,FProperty *param_2)

{
  return (FNetSerializerConfig *)0x0;
}

// CanUseDefaultConfig @ 144201000

bool __thiscall
UE::Net::FDefaultStructPropertyNetSerializerInfo::CanUseDefaultConfig
          (FDefaultStructPropertyNetSerializerInfo *this,FProperty *param_1)

{
  return false;
}

// GetNetSerializer @ 14420ae00

FNetSerializer * __thiscall
UE::Net::FDefaultStructPropertyNetSerializerInfo::GetNetSerializer
          (FDefaultStructPropertyNetSerializerInfo *this,FProperty *param_1)

{
  return &FStructNetSerializerNetSerializerInfo::Serializer;
}

// GetPropertyTypeClass @ 14420ce60

FFieldClass * __thiscall
UE::Net::FDefaultStructPropertyNetSerializerInfo::GetPropertyTypeClass
          (FDefaultStructPropertyNetSerializerInfo *this)

{
  FFieldClass *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar1 = FProperty::StaticClass();
      FFieldClass::FFieldClass
                (&::StaticFieldClass,L"FStructProperty",0x100000,
                 CASTCLASS_FStructProperty|CASTCLASS_FProperty|CASTCLASS_UField,pFVar1,
                 FStructProperty::Construct);
      atexit(`FStructProperty::StaticClass'::__l2::
             _dynamic_atexit_destructor_for__StaticFieldClass__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticFieldClass;
    }
  }
  return &::StaticFieldClass;
}

// IsSupported @ 144211e60

bool __thiscall
UE::Net::FDefaultStructPropertyNetSerializerInfo::IsSupported
          (FDefaultStructPropertyNetSerializerInfo *this,FProperty *param_1)

{
  return true;
}

