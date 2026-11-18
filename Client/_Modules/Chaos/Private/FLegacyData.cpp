// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 4

// CopyFromCoreData @ 143b1a680

void __thiscall
Chaos::TRigidParticles<double,3>::FLegacyData::CopyFromCoreData
          (FLegacyData *this,TArrayCollectionArray<Chaos::FRigidParticleCoreData> *param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  
  (**(code **)(*(longlong *)&this->MCollisionGroup + 8))(this,*(undefined4 *)&param_1->field_0x10);
  (**(code **)(*(longlong *)&this->MObjectState + 8))
            (&this->MObjectState,*(undefined4 *)&param_1->field_0x10);
  (**(code **)(*(longlong *)&this->MDisabled + 8))
            (&this->MDisabled,*(undefined4 *)&param_1->field_0x10);
  uVar6 = 0;
  if (0 < *(int *)&param_1->field_0x10) {
    lVar9 = 0;
    lVar8 = 0;
    do {
      uVar7 = ~uVar6 >> 0x1f;
      uVar5 = 0;
      if ((int)uVar6 < *(int *)&param_1->field_0x10) {
        uVar5 = uVar7;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar2 = *(undefined4 *)(lVar8 + *(longlong *)&param_1->field_0x8);
      uVar5 = 0;
      if ((int)uVar6 < *(int *)&(this->MCollisionGroup).field_0x10) {
        uVar5 = uVar7;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(undefined4 *)(*(longlong *)&(this->MCollisionGroup).field_0x8 + lVar9 * 4) = uVar2;
      uVar5 = 0;
      if ((int)uVar6 < *(int *)&param_1->field_0x10) {
        uVar5 = uVar7;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar1 = *(undefined1 *)(lVar8 + 0xb + *(longlong *)&param_1->field_0x8);
      uVar5 = 0;
      if ((int)uVar6 < *(int *)&(this->MObjectState).field_0x10) {
        uVar5 = uVar7;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(undefined1 *)(lVar9 + *(longlong *)&(this->MObjectState).field_0x8) = uVar1;
      uVar5 = 0;
      if ((int)uVar6 < *(int *)&param_1->field_0x10) {
        uVar5 = uVar7;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar1 = *(undefined1 *)(lVar8 + 0xd + *(longlong *)&param_1->field_0x8);
      uVar5 = 0;
      if ((int)uVar6 < *(int *)&(this->MDisabled).field_0x10) {
        uVar5 = uVar7;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar6 = uVar6 + 1;
      lVar8 = lVar8 + 0x10;
      *(undefined1 *)(lVar9 + *(longlong *)&(this->MDisabled).field_0x8) = uVar1;
      lVar9 = lVar9 + 1;
    } while ((int)uVar6 < *(int *)&param_1->field_0x10);
  }
  return;
}

// CopyToCoreData @ 143b1ab90

void __thiscall
Chaos::TRigidParticles<double,3>::FLegacyData::CopyToCoreData
          (FLegacyData *this,TArrayCollectionArray<Chaos::FRigidParticleCoreData> *param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  
  (**(code **)(*(longlong *)param_1 + 8))
            (param_1,*(undefined4 *)&(this->MCollisionGroup).field_0x10);
  uVar6 = 0;
  if (0 < *(int *)&param_1->field_0x10) {
    lVar9 = 0;
    lVar8 = 0;
    do {
      uVar7 = ~uVar6 >> 0x1f;
      uVar5 = 0;
      if ((int)uVar6 < *(int *)&(this->MCollisionGroup).field_0x10) {
        uVar5 = uVar7;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar2 = *(undefined4 *)(*(longlong *)&(this->MCollisionGroup).field_0x8 + lVar9 * 4);
      uVar5 = 0;
      if ((int)uVar6 < *(int *)&param_1->field_0x10) {
        uVar5 = uVar7;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(undefined4 *)(lVar8 + *(longlong *)&param_1->field_0x8) = uVar2;
      uVar5 = 0;
      if ((int)uVar6 < *(int *)&(this->MObjectState).field_0x10) {
        uVar5 = uVar7;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar1 = *(undefined1 *)(lVar9 + *(longlong *)&(this->MObjectState).field_0x8);
      uVar5 = 0;
      if ((int)uVar6 < *(int *)&param_1->field_0x10) {
        uVar5 = uVar7;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(undefined1 *)(lVar8 + 0xb + *(longlong *)&param_1->field_0x8) = uVar1;
      uVar5 = 0;
      if ((int)uVar6 < *(int *)&(this->MDisabled).field_0x10) {
        uVar5 = uVar7;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar1 = *(undefined1 *)(lVar9 + *(longlong *)&(this->MDisabled).field_0x8);
      uVar5 = 0;
      if ((int)uVar6 < *(int *)&param_1->field_0x10) {
        uVar5 = uVar7;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar6 = uVar6 + 1;
      lVar9 = lVar9 + 1;
      *(undefined1 *)(lVar8 + 0xd + *(longlong *)&param_1->field_0x8) = uVar1;
      lVar8 = lVar8 + 0x10;
    } while ((int)uVar6 < *(int *)&param_1->field_0x10);
  }
  return;
}

// FLegacyData @ 143dfba20

FLegacyData * __thiscall
Chaos::TRigidParticles<double,3>::FLegacyData::FLegacyData(FLegacyData *this)

{
  *(undefined ***)&this->MCollisionGroup = &___7__TArrayCollectionArray_H_Chaos__6B_;
  *(undefined ***)&this->MObjectState =
       &___7__TArrayCollectionArray_W4EObjectStateType_Chaos___Chaos__6B_;
  *(undefined ***)&this->MDisabled = &___7__TArrayCollectionArray__N_Chaos__6B_;
  *(undefined8 *)&(this->MCollisionGroup).field_0x8 = 0;
  *(undefined8 *)&(this->MCollisionGroup).field_0x10 = 0;
  *(undefined8 *)&(this->MObjectState).field_0x8 = 0;
  *(undefined8 *)&(this->MObjectState).field_0x10 = 0;
  *(undefined8 *)&(this->MDisabled).field_0x8 = 0;
  *(undefined8 *)&(this->MDisabled).field_0x10 = 0;
  return this;
}

// ~FLegacyData @ 143dfe0b0

void __thiscall Chaos::TRigidParticles<double,3>::FLegacyData::~FLegacyData(FLegacyData *this)

{
  void *pvVar1;
  
  *(undefined ***)&this->MDisabled = &___7__TArrayCollectionArray__N_Chaos__6B_;
  pvVar1 = *(void **)&(this->MDisabled).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->MObjectState =
       &___7__TArrayCollectionArray_W4EObjectStateType_Chaos___Chaos__6B_;
  pvVar1 = *(void **)&(this->MObjectState).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->MCollisionGroup = &___7__TArrayCollectionArray_H_Chaos__6B_;
  pvVar1 = *(void **)&(this->MCollisionGroup).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

