// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 3

// CopyFrom<IBaseDelegateInstance<void___cdecl(FUpdateContext_const_&),FDefaultDelegateUserPolicy>_> @ 14abaef50

/* WARNING: Removing unreachable block (ram,0x00014abaf0aa) */

void __thiscall
TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
CopyFrom<IBaseDelegateInstance<void___cdecl(FUpdateContext_const_&),FDefaultDelegateUserPolicy>_>
          (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this,
          TMulticastDelegateBase<FDefaultDelegateUserPolicy> *param_1)

{
  TArray<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,TSizedHeapAllocator<32,FMemory>_>
  *pTVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  undefined1 local_res10;
  undefined1 local_res18;
  ForAnyElementType local_88;
  undefined8 local_80;
  TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> local_78;
  FDestructionSentinel local_68;
  FReadAccessScope local_50;
  
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,&local_50);
  iVar2 = (param_1->InvocationList).ArrayNum;
  pFVar8 = (param_1->InvocationList).AllocatorInstance.Data;
  pFVar9 = pFVar8 + (longlong)iVar2 * 0x10;
  while( true ) {
    if ((param_1->InvocationList).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar9) break;
    if ((*(int *)(pFVar8 + 8) != 0) && (plVar3 = *(longlong **)pFVar8, plVar3 != (longlong *)0x0)) {
      local_78._0_8_ = 0;
      local_78._8_4_ = 0;
      (**(code **)(*plVar3 + 0x48))(plVar3,&local_78);
      if ((local_88.Data <= &local_78) &&
         ((&local_78 <
           (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
           (local_88.Data + (longlong)local_80._4_4_ * 0x10) &&
          (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar5)))) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar6 = (int)local_80;
      if ((int)local_80 == local_80._4_4_) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_88,(int *)((longlong)&local_80 + 4));
      }
      local_80 = CONCAT44(local_80._4_4_,iVar6 + 1);
      pFVar7 = local_88.Data + (longlong)iVar6 * 0x10;
      local_res10 = 0;
      *(undefined8 *)pFVar7 = 0;
      *(undefined4 *)(pFVar7 + 8) = 0;
      *(undefined8 *)pFVar7 = local_78._0_8_;
      local_78._0_8_ = 0;
      *(undefined4 *)(pFVar7 + 8) = local_78._8_4_;
      local_78._8_4_ = 0;
      local_res18 = 0;
    }
    pFVar8 = pFVar8 + 0x10;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_50);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_68);
  ClearUnchecked(this);
  pTVar1 = &this->InvocationList;
  if (pTVar1 != (TArray<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,TSizedHeapAllocator<32,FMemory>_>
                 *)&local_88) {
    DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
              ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
               (pTVar1->AllocatorInstance).Data,(this->InvocationList).ArrayNum);
    pFVar8 = (pTVar1->AllocatorInstance).Data;
    if (pFVar8 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar8);
    }
    (pTVar1->AllocatorInstance).Data = local_88.Data;
    (this->InvocationList).ArrayNum = (int)local_80;
    (this->InvocationList).ArrayMax = local_80._4_4_;
    local_80 = 0;
    local_88.Data = (FScriptContainerElement *)0x0;
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)local_88.Data,(int)local_80);
  if ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)local_88.Data !=
      (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0) {
    FMemory::Free(local_88.Data);
  }
  return;
}

// Broadcast<IBaseDelegateInstance<void___cdecl(FInstanceUpdateStats),FDefaultDelegateUserPolicy>,FInstanceUpdateStats> @ 14ac04be0

void __thiscall
TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
Broadcast<IBaseDelegateInstance<void___cdecl(FInstanceUpdateStats),FDefaultDelegateUserPolicy>,FInstanceUpdateStats>
          (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this,FInstanceUpdateStats *param_1)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  FDestructionSentinel local_e8;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  EUpdateResult local_90;
  undefined1 local_8f;
  uint local_8c;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_e8);
  this->InvocationListLockCount = this->InvocationListLockCount + 1;
  uVar8 = (this->InvocationList).ArrayNum - 1;
  bVar4 = false;
  if ((int)uVar8 < 0) {
    this->InvocationListLockCount = this->InvocationListLockCount + -1;
  }
  else {
    lVar9 = (longlong)(int)uVar8 << 4;
    do {
      uVar7 = 0;
      if ((int)uVar8 < (this->InvocationList).ArrayNum) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = (this->InvocationList).AllocatorInstance.Data;
      if ((*(int *)(pFVar1 + lVar9 + 8) == 0) ||
         (plVar2 = *(longlong **)(pFVar1 + lVar9), plVar2 == (longlong *)0x0)) {
LAB_14ac04d53:
        bVar4 = true;
      }
      else {
        pcVar3 = *(code **)(*plVar2 + 0x68);
        ::FString::FString(&local_d0,&param_1->CustomizableObjectPathName);
        ::FString::FString(&local_c0,&param_1->CustomizableObjectInstancePathName);
        ::FString::FString(&local_b0,&param_1->UpdateType);
        ::FString::FString(&local_a0,&param_1->Descriptor);
        local_90 = param_1->UpdateResult;
        local_88 = param_1->QueueTime;
        dStack_80 = param_1->UpdateTime;
        local_8f = param_1->bLevelBegunPlay;
        local_78 = param_1->TaskGetMeshTime;
        dStack_70 = param_1->TaskLockCacheTime;
        local_8c = param_1->TriangleCount;
        local_68 = param_1->TaskGetImagesTime;
        dStack_60 = param_1->TaskConvertResourcesTime;
        local_58 = param_1->TaskCallbacksTime;
        dStack_50 = param_1->UpdatePeakMemory;
        local_48 = param_1->UpdateRealPeakMemory;
        dStack_40 = param_1->TaskUpdateImageTime;
        local_38 = *(undefined4 *)&param_1->TaskUpdateImagePeakMemory;
        uStack_34 = *(undefined4 *)((longlong)&param_1->TaskUpdateImagePeakMemory + 4);
        uStack_30 = *(undefined4 *)&param_1->TaskUpdateImageRealPeakMemory;
        uStack_2c = *(undefined4 *)((longlong)&param_1->TaskUpdateImageRealPeakMemory + 4);
        cVar6 = (*pcVar3)(plVar2);
        if (cVar6 == '\0') goto LAB_14ac04d53;
      }
      lVar9 = lVar9 + -0x10;
      uVar8 = uVar8 - 1;
    } while (-1 < (int)uVar8);
    this->InvocationListLockCount = this->InvocationListLockCount + -1;
    if (bVar4) {
      CompactInvocationList(this,false);
    }
  }
  if (local_e8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e8.Accessor,&local_e8);
  }
  pFVar1 = (param_1->Descriptor).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_1->UpdateType).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_1->CustomizableObjectInstancePathName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_1->CustomizableObjectPathName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// Broadcast<IBaseDelegateInstance<void___cdecl(TSharedRef<FUpdateContextPrivate,1>,FInstanceUpdateStats),FDefaultDelegateUserPolicy>,TSharedRef<FUpdateContextPrivate,1>,FInstanceUpdateStats> @ 14ac04e20

void __thiscall
TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
Broadcast<IBaseDelegateInstance<void___cdecl(TSharedRef<FUpdateContextPrivate,1>,FInstanceUpdateStats),FDefaultDelegateUserPolicy>,TSharedRef<FUpdateContextPrivate,1>,FInstanceUpdateStats>
          (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this,
          TSharedRef<FUpdateContextPrivate,1> *param_1,FInstanceUpdateStats *param_2)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  FUpdateContextPrivate *local_108;
  TReferenceControllerBase<1> *local_100;
  FDestructionSentinel local_f8;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  EUpdateResult local_a0;
  undefined1 local_9f;
  uint local_9c;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_f8);
  this->InvocationListLockCount = this->InvocationListLockCount + 1;
  uVar8 = (this->InvocationList).ArrayNum - 1;
  bVar4 = false;
  if ((int)uVar8 < 0) {
    this->InvocationListLockCount = this->InvocationListLockCount + -1;
  }
  else {
    lVar9 = (longlong)(int)uVar8 << 4;
    do {
      uVar7 = 0;
      if ((int)uVar8 < (this->InvocationList).ArrayNum) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = (this->InvocationList).AllocatorInstance.Data;
      if ((*(int *)(pFVar1 + lVar9 + 8) == 0) ||
         (plVar2 = *(longlong **)(pFVar1 + lVar9), plVar2 == (longlong *)0x0)) {
LAB_14ac04fb4:
        bVar4 = true;
      }
      else {
        pcVar3 = *(code **)(*plVar2 + 0x68);
        ::FString::FString(&local_e0,&param_2->CustomizableObjectPathName);
        ::FString::FString(&local_d0,&param_2->CustomizableObjectInstancePathName);
        ::FString::FString(&local_c0,&param_2->UpdateType);
        ::FString::FString(&local_b0,&param_2->Descriptor);
        local_a0 = param_2->UpdateResult;
        local_98 = param_2->QueueTime;
        dStack_90 = param_2->UpdateTime;
        local_9f = param_2->bLevelBegunPlay;
        local_88 = param_2->TaskGetMeshTime;
        dStack_80 = param_2->TaskLockCacheTime;
        local_9c = param_2->TriangleCount;
        local_108 = param_1->Object;
        local_78 = param_2->TaskGetImagesTime;
        dStack_70 = param_2->TaskConvertResourcesTime;
        local_100 = (param_1->SharedReferenceCount).ReferenceController;
        local_68 = param_2->TaskCallbacksTime;
        dStack_60 = param_2->UpdatePeakMemory;
        local_58 = param_2->UpdateRealPeakMemory;
        dStack_50 = param_2->TaskUpdateImageTime;
        local_48 = *(undefined4 *)&param_2->TaskUpdateImagePeakMemory;
        uStack_44 = *(undefined4 *)((longlong)&param_2->TaskUpdateImagePeakMemory + 4);
        uStack_40 = *(undefined4 *)&param_2->TaskUpdateImageRealPeakMemory;
        uStack_3c = *(undefined4 *)((longlong)&param_2->TaskUpdateImageRealPeakMemory + 4);
        if (local_100 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_100->SharedReferenceCount = (atomic<int>)((int)local_100->SharedReferenceCount + 1);
          UNLOCK();
        }
        cVar6 = (*pcVar3)(plVar2,&local_108,&local_e0);
        if (cVar6 == '\0') goto LAB_14ac04fb4;
      }
      lVar9 = lVar9 + -0x10;
      uVar8 = uVar8 - 1;
    } while (-1 < (int)uVar8);
    this->InvocationListLockCount = this->InvocationListLockCount + -1;
    if (bVar4) {
      CompactInvocationList(this,false);
    }
  }
  if (local_f8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_f8.Accessor,&local_f8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  pFVar1 = (param_2->Descriptor).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_2->UpdateType).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_2->CustomizableObjectInstancePathName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_2->CustomizableObjectPathName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

