// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 4

// BuildNetSerializerConfig @ 144200140

FNetSerializerConfig * __thiscall
UE::Net::Private::FNativeBoolPropertyNetSerializerInfo::BuildNetSerializerConfig
          (FNativeBoolPropertyNetSerializerInfo *this,void *param_1,FProperty *param_2)

{
  code *pcVar1;
  bool bVar2;
  FNetSerializerConfig *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\DefaultPropertyNetSerializerInfos.cpp"
                     ,199,L"%s");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FNetSerializerConfig *)(*pcVar1)();
    return pFVar3;
  }
  return (FNetSerializerConfig *)0x0;
}

// GetNetSerializer @ 14420afa0

FNetSerializer * __thiscall
UE::Net::Private::FNativeBoolPropertyNetSerializerInfo::GetNetSerializer
          (FNativeBoolPropertyNetSerializerInfo *this,FProperty *param_1)

{
  return &FBoolNetSerializerNetSerializerInfo::Serializer;
}

// GetPropertyTypeClass @ 14420ceb0

FFieldClass * __thiscall
UE::Net::Private::FNativeBoolPropertyNetSerializerInfo::GetPropertyTypeClass
          (FNativeBoolPropertyNetSerializerInfo *this)

{
  FFieldClass *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar1 = FProperty::StaticClass();
      FFieldClass::FFieldClass
                (&::StaticFieldClass,L"FBoolProperty",0x20000,
                 CASTCLASS_FBoolProperty|CASTCLASS_FProperty|CASTCLASS_UField,pFVar1,
                 FBoolProperty::Construct);
      atexit(`FBoolProperty::StaticClass'::__l2::_dynamic_atexit_destructor_for__StaticFieldClass__)
      ;
      _Init_thread_footer(&::_TSS0);
      return &::StaticFieldClass;
    }
  }
  return &::StaticFieldClass;
}

// IsSupported @ 1442120c0

bool __thiscall
UE::Net::Private::FNativeBoolPropertyNetSerializerInfo::IsSupported
          (FNativeBoolPropertyNetSerializerInfo *this,FProperty *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if ((param_1 != (FProperty *)0x0) && ((*(uint *)(param_1->_padding_ + 0x18) >> 0x11 & 1) != 0)) {
    return *(char *)((longlong)&param_1[1]._padding_ + 3) == -1;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("CastResult",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                     ,0x480,L"CastFieldChecked failed with 0x%016llx");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return cRam0000000000000073 == -1;
}

