// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// FArchiveSavePackageCollector @ 1421fdbc0

FArchiveSavePackageCollector * __thiscall
UE::SavePackageUtilities::Private::FArchiveSavePackageCollector::FArchiveSavePackageCollector
          (FArchiveSavePackageCollector *this,FArchiveSavePackageData *param_1,bool param_2,
          bool param_3,bool param_4)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  FArchiveSavePackageCollector *pFVar4;
  FArchiveSavePackageData *pFVar5;
  undefined7 uVar6;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined8 *)&this->field_0x18 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined8 *)&this->field_0x48 = 0;
  *(undefined8 *)&this->field_0x50 = 0;
  *(undefined8 *)&this->field_0x58 = 0;
  *(undefined8 *)&this->field_0x60 = 0;
  *(undefined8 *)&this->field_0x68 = 0;
  *(undefined8 *)&this->field_0x70 = 0;
  *(undefined8 *)&this->field_0x78 = 0;
  *(undefined8 *)&this->field_0x80 = 0;
  *(undefined8 *)&this->field_0x88 = 0;
  pFVar5 = param_1;
  FArchiveState::FArchiveState((FArchiveState *)this);
  uVar6 = (undefined7)((ulonglong)pFVar5 >> 8);
  *(undefined ***)this = &___7FArchiveSavePackageCollector_Private_SavePackageUtilities_UE__6B_;
  FArchiveState::SetIsSaving((FArchiveState *)this,true);
  (**(code **)(*(longlong *)this + 0x108))(this,CONCAT71(uVar6,1));
  this->field_0x2a = this->field_0x2a & 0xdf;
  bVar1 = this->field_0x2b;
  this->field_0x2a = this->field_0x2a | param_4 << 5;
  this->field_0x2b = bVar1 | 9;
  *(undefined4 *)&this->field_0x34 = 0x600;
  if (*(code **)(*(longlong *)this + 0x80) == FArchiveState::SetFilterEditorOnly) {
    this->field_0x2b = bVar1 & 0xef | 9 | param_2 << 4;
  }
  else {
    (**(code **)(*(longlong *)this + 0x80))(this,param_2);
  }
  if (param_1 == (FArchiveSavePackageData *)0x0) {
    if (*(longlong *)&this->field_0x68 != 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!(InSavePackageData == nullptr && SavePackageData)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\Archive.h"
                         ,0x28e,L"Can\'t turn off cooking once you turn it on!");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FArchiveSavePackageCollector *)(*pcVar2)();
        return pFVar4;
      }
    }
  }
  else {
    if (((this->field_0x28 & 1) != 0) || ((this->field_0x28 & 4) == 0)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsLoading() && !IsTransacting() && IsSaving()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\Archive.h"
                         ,0x292,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FArchiveSavePackageCollector *)(*pcVar2)();
        return pFVar4;
      }
    }
    *(FArchiveSavePackageData **)&this->field_0x68 = param_1;
  }
  (**(code **)(*(longlong *)this + 0xf8))(this,param_3);
  return this;
}

// SetArchiveFlags @ 14222aaa0

void __thiscall
UE::SavePackageUtilities::Private::FArchiveSavePackageCollector::SetArchiveFlags
          (FArchiveSavePackageCollector *this,FArchiveSavePackageData *param_1,bool param_2,
          bool param_3,bool param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined7 in_register_00000081;
  undefined7 in_register_00000089;
  
  (**(code **)(*(longlong *)this + 0xd8))
            (this,1,CONCAT71(in_register_00000081,param_2),CONCAT71(in_register_00000089,param_3));
  (**(code **)(*(longlong *)this + 0x108))(this,1);
  this->field_0x2a = this->field_0x2a & 0xdf;
  this->field_0x2b = this->field_0x2b | 9;
  this->field_0x2a = this->field_0x2a | param_4 << 5;
  *(undefined4 *)&this->field_0x34 = 0x600;
  (**(code **)(*(longlong *)this + 0x80))(this,param_2);
  if (param_1 == (FArchiveSavePackageData *)0x0) {
    if (*(longlong *)&this->field_0x68 != 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!(InSavePackageData == nullptr && SavePackageData)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\Archive.h"
                         ,0x28e,L"Can\'t turn off cooking once you turn it on!");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  else {
    if (((this->field_0x28 & 1) != 0) || ((this->field_0x28 & 4) == 0)) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsLoading() && !IsTransacting() && IsSaving()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\Archive.h"
                         ,0x292,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    *(FArchiveSavePackageData **)&this->field_0x68 = param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014222ab8b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0xf8))(this,param_3);
  return;
}

