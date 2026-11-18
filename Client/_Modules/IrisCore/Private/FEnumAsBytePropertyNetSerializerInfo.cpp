// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 5

// BuildNetSerializerConfig @ 1441ffd20

FNetSerializerConfig * __thiscall
UE::Net::Private::FEnumAsBytePropertyNetSerializerInfo::BuildNetSerializerConfig
          (FEnumAsBytePropertyNetSerializerInfo *this,void *param_1,FProperty *param_2)

{
  code *pcVar1;
  bool bVar2;
  FNetSerializerConfig *pFVar3;
  
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x13) = 0;
  *(undefined1 *)((longlong)param_1 + 0x17) = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FEnumUint8NetSerializerConfig__6B_;
  *(undefined2 *)((longlong)param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x12) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  if (((param_2 == (FProperty *)0x0) || ((*(byte *)(param_2->_padding_ + 0x18) & 0x40) == 0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("CastResult",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                         ,0x480,L"CastFieldChecked failed with 0x%016llx"),
     param_2 = (FProperty *)0x0, bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FNetSerializerConfig *)(*pcVar1)();
    return pFVar3;
  }
  InitEnumNetSerializerConfig(param_1,(UEnum *)param_2[1]._padding_);
  return param_1;
}

// CanUseDefaultConfig @ 144201010

bool __thiscall
UE::Net::Private::FEnumAsBytePropertyNetSerializerInfo::CanUseDefaultConfig
          (FEnumAsBytePropertyNetSerializerInfo *this,FProperty *param_1)

{
  return false;
}

// GetNetSerializer @ 14420ae10

FNetSerializer * __thiscall
UE::Net::Private::FEnumAsBytePropertyNetSerializerInfo::GetNetSerializer
          (FEnumAsBytePropertyNetSerializerInfo *this,FProperty *param_1)

{
  return &FEnumUint8NetSerializerNetSerializerInfo::Serializer;
}

// GetPropertyTypeClass @ 14420ce70

FFieldClass * __thiscall
UE::Net::Private::FEnumAsBytePropertyNetSerializerInfo::GetPropertyTypeClass
          (FEnumAsBytePropertyNetSerializerInfo *this)

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

// IsSupported @ 144211e70

bool __thiscall
UE::Net::Private::FEnumAsBytePropertyNetSerializerInfo::IsSupported
          (FEnumAsBytePropertyNetSerializerInfo *this,FProperty *param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  bool bVar3;
  longlong lVar4;
  
  if ((param_1 == (FProperty *)0x0) || ((*(byte *)(param_1->_padding_ + 0x18) & 0x40) == 0)) {
    param_1 = (FProperty *)0x0;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("CastResult",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                       ,0x480,L"CastFieldChecked failed with 0x%016llx");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar2 = (*pcVar1)();
      return (bool)uVar2;
    }
  }
  bVar3 = PropertyNetSerializerInfo_ShouldUseNetRoleSerializer((FByteProperty *)param_1);
  if (!bVar3) {
    lVar4 = (**(code **)(((FByteProperty *)param_1)->_padding_ + 0x1e0))(param_1);
    return lVar4 != 0;
  }
  return false;
}

