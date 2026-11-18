// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 4

// BuildNetSerializerConfig @ 144200360

FNetSerializerConfig * __thiscall
UE::Net::Private::FUint8PropertyNetSerializerInfo::BuildNetSerializerConfig
          (FUint8PropertyNetSerializerInfo *this,void *param_1,FProperty *param_2)

{
  code *pcVar1;
  bool bVar2;
  FNetSerializerConfig *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\DefaultPropertyNetSerializerInfos.cpp"
                     ,0xbb,L"%s");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FNetSerializerConfig *)(*pcVar1)();
    return pFVar3;
  }
  return (FNetSerializerConfig *)0x0;
}

// GetNetSerializer @ 14420b000

FNetSerializer * __thiscall
UE::Net::Private::FUint8PropertyNetSerializerInfo::GetNetSerializer
          (FUint8PropertyNetSerializerInfo *this,FProperty *param_1)

{
  return &FUint8NetSerializerNetSerializerInfo::Serializer;
}

// GetPropertyTypeClass @ 14420cf20

FFieldClass * __thiscall
UE::Net::Private::FUint8PropertyNetSerializerInfo::GetPropertyTypeClass
          (FUint8PropertyNetSerializerInfo *this)

{
  FFieldClass *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar1 = FNumericProperty::StaticClass();
      FFieldClass::FFieldClass
                (&::StaticFieldClass,L"FByteProperty",0x40,
                 CASTCLASS_FNumericProperty|CASTCLASS_FProperty|CASTCLASS_FByteProperty|
                 CASTCLASS_UField,pFVar1,FByteProperty::Construct);
      atexit(`FByteProperty::StaticClass'::__l2::_dynamic_atexit_destructor_for__StaticFieldClass__)
      ;
      _Init_thread_footer(&::_TSS0);
      return &::StaticFieldClass;
    }
  }
  return &::StaticFieldClass;
}

// IsSupported @ 1442121d0

bool __thiscall
UE::Net::Private::FUint8PropertyNetSerializerInfo::IsSupported
          (FUint8PropertyNetSerializerInfo *this,FProperty *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  longlong lVar4;
  
  if ((param_1 == (FProperty *)0x0) || ((*(byte *)(param_1->_padding_ + 0x18) & 0x40) == 0)) {
    param_1 = (FProperty *)0x0;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("CastResult",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                       ,0x480,L"CastFieldChecked failed with 0x%016llx");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  lVar4 = (**(code **)(param_1->_padding_ + 0x1e0))(param_1);
  return lVar4 == 0;
}

