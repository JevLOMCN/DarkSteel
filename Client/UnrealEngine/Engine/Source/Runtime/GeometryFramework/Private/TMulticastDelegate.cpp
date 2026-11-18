// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryFramework
// Functions: 2

// Broadcast @ 149703510

void __thiscall
TMulticastDelegate<void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy>::
Broadcast(TMulticastDelegate<void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy>
          *this,UDynamicMesh *param_1,FDynamicMeshChangeInfo *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  FMeshChange *pFVar4;
  FMeshReplacementChange *pFVar5;
  FMeshVertexChange *pFVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  FDestructionSentinel local_58;
  undefined8 local_38;
  FMeshChange *pFStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uVar3._0_1_ = param_2->Type;
  uVar3._1_1_ = param_2->Flags;
  uVar3._2_1_ = param_2->bIsRevertChange;
  uVar3._3_5_ = *(undefined5 *)&param_2->field_0x3;
  pFVar4 = param_2->MeshChange;
  pFVar5 = param_2->ReplaceChange;
  pFVar6 = param_2->VertexChange;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_58);
  *(int *)&this->field_0x1c = *(int *)&this->field_0x1c + 1;
  bVar7 = false;
  uVar11 = *(int *)&this->field_0x10 - 1;
  if (-1 < (int)uVar11) {
    lVar12 = (longlong)(int)uVar11 << 4;
    bVar7 = false;
    do {
      uVar10 = 0;
      if ((int)uVar11 < *(int *)&this->field_0x10) {
        uVar10 = ~uVar11 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((*(int *)(lVar12 + 8 + *(longlong *)&this->field_0x8) == 0) ||
         (plVar1 = *(longlong **)(lVar12 + *(longlong *)&this->field_0x8), plVar1 == (longlong *)0x0
         )) {
LAB_149703603:
        bVar7 = true;
      }
      else {
        local_68 = SUB84(pFVar5,0);
        uStack_64 = (undefined4)((ulonglong)pFVar5 >> 0x20);
        uStack_60 = SUB84(pFVar6,0);
        uStack_5c = (undefined4)((ulonglong)pFVar6 >> 0x20);
        local_28 = local_68;
        uStack_24 = uStack_64;
        uStack_20 = uStack_60;
        uStack_1c = uStack_5c;
        local_38 = uVar3;
        pFStack_30 = pFVar4;
        cVar9 = (**(code **)(*plVar1 + 0x68))(plVar1,param_1,&local_38);
        if (cVar9 == '\0') goto LAB_149703603;
      }
      lVar12 = lVar12 + -0x10;
      uVar11 = uVar11 - 1;
    } while (-1 < (int)uVar11);
  }
  *(int *)&this->field_0x1c = *(int *)&this->field_0x1c + -1;
  if (bVar7) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,false);
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  return;
}

// Broadcast @ 149703680

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
TMulticastDelegate<void___cdecl(USceneComponent_*,bool),FDefaultDelegateUserPolicy>::Broadcast
          (TMulticastDelegate<void___cdecl(USceneComponent_*,bool),FDefaultDelegateUserPolicy> *this
          ,USceneComponent *param_1,bool param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  FDestructionSentinel local_38;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  *(int *)&this->field_0x1c = *(int *)&this->field_0x1c + 1;
  bVar3 = false;
  uVar7 = *(int *)&this->field_0x10 - 1;
  if (-1 < (int)uVar7) {
    lVar8 = (longlong)(int)uVar7 << 4;
    bVar3 = false;
    do {
      uVar6 = 0;
      if ((int)uVar7 < *(int *)&this->field_0x10) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (((*(int *)(lVar8 + 8 + *(longlong *)&this->field_0x8) == 0) ||
          (plVar1 = *(longlong **)(lVar8 + *(longlong *)&this->field_0x8), plVar1 == (longlong *)0x0
          )) || (cVar5 = (**(code **)(*plVar1 + 0x68))(plVar1,param_1,param_2), cVar5 == '\0')) {
        bVar3 = true;
      }
      lVar8 = lVar8 + -0x10;
      uVar7 = uVar7 - 1;
    } while (-1 < (int)uVar7);
  }
  *(int *)&this->field_0x1c = *(int *)&this->field_0x1c + -1;
  if (bVar3) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,false);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

