// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FActorPriority @ 148013a30

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FActorPriority * __thiscall
FActorPriority::FActorPriority
          (FActorPriority *this,UNetConnection *param_1,FActorDestructionInfo *param_2,
          TArray<FNetViewer,TSizedDefaultAllocator<32>_> *param_3)

{
  FActorDestructionInfo *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  bool bVar13;
  uint uVar14;
  FActorPriority *pFVar15;
  longlong lVar16;
  uint uVar17;
  int iVar18;
  float fVar19;
  float fVar20;
  
  this->ActorInfo = (FNetworkObjectInfo *)0x0;
  uVar17 = 0;
  this->Channel = (UActorChannel *)0x0;
  this->DestructionInfo = param_2;
  this->Priority = 0;
  fVar12 = __real_4b188fa4;
  fVar11 = __real_4a742400;
  fVar10 = __real_48742400;
  fVar9 = __real_3ecccccd;
  fVar8 = __real_3e4ccccd;
  iVar18 = param_3->ArrayNum;
  if (0 < iVar18) {
    lVar16 = 0;
    do {
      pFVar1 = this->DestructionInfo;
      fVar19 = ((param_1->Driver).field0_0x0.DebugPtr)->SpawnPrioritySeconds;
      uVar14 = 0;
      if ((int)uVar17 < iVar18) {
        uVar14 = ~uVar17 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar3 = (code *)swi(3);
        pFVar15 = (FActorPriority *)(*pcVar3)();
        return pFVar15;
      }
      pFVar2 = (param_3->AllocatorInstance).Data;
      dVar5 = (pFVar1->DestroyedPosition).field0_0x0._s_0.X - *(double *)(pFVar2 + lVar16 + 0x18);
      dVar4 = (pFVar1->DestroyedPosition).field0_0x0._s_0.Y - *(double *)(pFVar2 + lVar16 + 0x20);
      dVar6 = (pFVar1->DestroyedPosition).field0_0x0._s_0.Z - *(double *)(pFVar2 + lVar16 + 0x28);
      uVar14 = 0;
      if ((int)uVar17 < param_3->ArrayNum) {
        uVar14 = ~uVar17 >> 0x1f;
      }
      fVar20 = (float)(dVar4 * dVar4 + dVar5 * dVar5 + dVar6 * dVar6);
      if ((uVar14 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar3 = (code *)swi(3);
        pFVar15 = (FActorPriority *)(*pcVar3)();
        return pFVar15;
      }
      pFVar2 = (param_3->AllocatorInstance).Data;
      fVar7 = fVar12;
      if ((__real_0000000000000000 <=
           dVar4 * *(double *)(pFVar2 + lVar16 + 0x38) + dVar5 * *(double *)(pFVar2 + lVar16 + 0x30)
           + dVar6 * *(double *)(pFVar2 + lVar16 + 0x40)) || (fVar7 = fVar10, fVar20 <= fVar11)) {
        if (fVar7 < fVar20) {
          fVar19 = fVar19 * fVar9;
        }
      }
      else {
        fVar19 = fVar19 * fVar8;
      }
      uVar17 = uVar17 + 1;
      lVar16 = lVar16 + 0x48;
      fVar20 = fVar19 * __real_47800000;
      if (fVar19 * __real_47800000 <= (float)this->Priority) {
        fVar20 = (float)this->Priority;
      }
      this->Priority = (int)fVar20;
      iVar18 = param_3->ArrayNum;
    } while ((int)uVar17 < iVar18);
  }
  return this;
}

// FActorPriority @ 148013cd0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FActorPriority * __thiscall
FActorPriority::FActorPriority
          (FActorPriority *this,UNetConnection *param_1,UActorChannel *param_2,
          FNetworkObjectInfo *param_3,TArray<FNetViewer,TSizedDefaultAllocator<32>_> *param_4,
          bool param_5)

{
  UNetDriver *pUVar1;
  AActor *pAVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  FScriptContainerElement *pFVar6;
  float fVar7;
  float fVar8;
  bool bVar9;
  uint uVar10;
  FActorPriority *pFVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  float fVar16;
  double dVar17;
  
  this->ActorInfo = param_3;
  this->Channel = param_2;
  this->DestructionInfo = (FActorDestructionInfo *)0x0;
  pUVar1 = (param_1->Driver).field0_0x0.DebugPtr;
  if (param_2 == (UActorChannel *)0x0) {
    dVar17 = (double)pUVar1->SpawnPrioritySeconds;
  }
  else {
    dVar17 = pUVar1->ElapsedTime - param_2->LastUpdateTime;
  }
  uVar13 = 0;
  this->Priority = 0;
  fVar8 = __real_48000000;
  fVar7 = __real_3f000000;
  iVar12 = param_4->ArrayNum;
  if (0 < iVar12) {
    lVar15 = 0;
    do {
      uVar14 = ~uVar13 >> 0x1f;
      pAVar2 = this->ActorInfo->Actor;
      pcVar3 = *(code **)(pAVar2->_padding_ + 0x470);
      uVar10 = 0;
      if ((int)uVar13 < iVar12) {
        uVar10 = uVar14;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar3 = (code *)swi(3);
        pFVar11 = (FActorPriority *)(*pcVar3)();
        return pFVar11;
      }
      uVar4 = *(undefined8 *)((param_4->AllocatorInstance).Data + lVar15 + 0x10);
      uVar10 = 0;
      if ((int)uVar13 < param_4->ArrayNum) {
        uVar10 = uVar14;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar3 = (code *)swi(3);
        pFVar11 = (FActorPriority *)(*pcVar3)();
        return pFVar11;
      }
      uVar5 = *(undefined8 *)((param_4->AllocatorInstance).Data + lVar15 + 8);
      uVar10 = 0;
      if ((int)uVar13 < param_4->ArrayNum) {
        uVar10 = uVar14;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar3 = (code *)swi(3);
        pFVar11 = (FActorPriority *)(*pcVar3)();
        return pFVar11;
      }
      pFVar6 = (param_4->AllocatorInstance).Data;
      uVar10 = 0;
      if ((int)uVar13 < param_4->ArrayNum) {
        uVar10 = uVar14;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar3 = (code *)swi(3);
        pFVar11 = (FActorPriority *)(*pcVar3)();
        return pFVar11;
      }
      fVar16 = (float)(*pcVar3)(pAVar2,(param_4->AllocatorInstance).Data +
                                       (longlong)(int)uVar13 * 0x48 + 0x18,
                                pFVar6 + (longlong)(int)uVar13 * 0x48 + 0x30,uVar5,uVar4,param_2,
                                (float)dVar17,param_5);
      iVar12 = (int)ROUND(fVar16 * fVar8 + fVar7) >> 1;
      if (iVar12 < this->Priority) {
        iVar12 = this->Priority;
      }
      uVar13 = uVar13 + 1;
      this->Priority = iVar12;
      lVar15 = lVar15 + 0x48;
      iVar12 = param_4->ArrayNum;
    } while ((int)uVar13 < iVar12);
  }
  return this;
}

