// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 5

// BuildNetSerializerConfig @ 144200190

FNetSerializerConfig * __thiscall
UE::Net::Private::FNetRoleNetSerializerInfo::BuildNetSerializerConfig
          (FNetRoleNetSerializerInfo *this,void *param_1,FProperty *param_2)

{
  code *pcVar1;
  bool bVar2;
  FNetSerializerConfig *pFVar3;
  
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined2 *)((longlong)param_1 + 0x1d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1f) = 0;
  *(undefined ***)param_1 = &___7FNetRoleNetSerializerConfig__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
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
  PartialInitNetRoleSerializerConfig(param_1,(UEnum *)param_2[1]._padding_);
  return param_1;
}

// CanUseDefaultConfig @ 144201040

bool __thiscall
UE::Net::Private::FNetRoleNetSerializerInfo::CanUseDefaultConfig
          (FNetRoleNetSerializerInfo *this,FProperty *param_1)

{
  return false;
}

// GetNetSerializer @ 14420afb0

FNetSerializer * __thiscall
UE::Net::Private::FNetRoleNetSerializerInfo::GetNetSerializer
          (FNetRoleNetSerializerInfo *this,FProperty *param_1)

{
  return &FNetRoleNetSerializerNetSerializerInfo::Serializer;
}

// GetPropertyTypeClass @ 14420cec0

FFieldClass * __thiscall
UE::Net::Private::FNetRoleNetSerializerInfo::GetPropertyTypeClass(FNetRoleNetSerializerInfo *this)

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

// IsSupported @ 144212130

bool __thiscall
UE::Net::Private::FNetRoleNetSerializerInfo::IsSupported
          (FNetRoleNetSerializerInfo *this,FProperty *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if ((param_1 != (FProperty *)0x0) && ((*(byte *)(param_1->_padding_ + 0x18) & 0x40) != 0)) {
    bVar2 = PropertyNetSerializerInfo_ShouldUseNetRoleSerializer((FByteProperty *)param_1);
    return bVar2;
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
  bVar2 = PropertyNetSerializerInfo_ShouldUseNetRoleSerializer((FByteProperty *)0x0);
  return bVar2;
}

