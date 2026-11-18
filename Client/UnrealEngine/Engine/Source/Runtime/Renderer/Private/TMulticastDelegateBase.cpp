// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// CopyFrom<IBaseDelegateInstance<void___cdecl(FRDGBuilder_&,FViewInfo_const_&,LumenRadianceCache::FRadianceCacheMarkParameters_const_&),FDefaultDelegateUserPolicy>_> @ 144c199c0

/* WARNING: Removing unreachable block (ram,0x000144c19b1a) */

void __thiscall
TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
CopyFrom<IBaseDelegateInstance<void___cdecl(FRDGBuilder_&,FViewInfo_const_&,LumenRadianceCache::FRadianceCacheMarkParameters_const_&),FDefaultDelegateUserPolicy>_>
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

// Broadcast<IBaseDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy>_> @ 14528e5c0

void __thiscall
TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
Broadcast<IBaseDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy>_>
          (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this)

{
  ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> FVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> FVar10;
  ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> FVar11;
  uint uVar12;
  longlong lVar13;
  FDestructionSentinel *local_28;
  FDestructionSentinel local_20;
  
  local_20.AccessType = Writer;
  local_20.bDestroyed = false;
  local_20.Accessor = (FMRSWRecursiveAccessDetector *)this;
  FVar10 = (ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*>)
           FMRSWRecursiveAccessDetector::GetDestructionSentinelStackTls();
  local_28 = &local_20;
  FVar1 = *(ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> *)
           ((longlong)FVar10 + 0x20);
  FVar11 = FVar10;
  if (FVar1 != (ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*>)0x0) {
    FVar11 = FVar1;
  }
  if ((ulonglong)FVar11 <= &local_28) {
    FVar11 = FVar10;
    if (FVar1 != (ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*>)0x0) {
      FVar11 = FVar1;
    }
    if ((&local_28 <
         (FDestructionSentinel **)
         ((longlong)FVar11 + (longlong)*(int *)((longlong)FVar10 + 0x2c) * 8)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar8 = *(int *)((longlong)FVar10 + 0x28);
  if (iVar8 == *(int *)((longlong)FVar10 + 0x2c)) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*>_>
                      (0x808,(ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> *
                             )FVar10,(int *)((longlong)FVar10 + 0x2c));
  }
  *(int *)((longlong)FVar10 + 0x28) = iVar8 + 1;
  if (*(ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> *)
       ((longlong)FVar10 + 0x20) !=
      (ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*>)0x0) {
    FVar10 = *(ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> *)
              ((longlong)FVar10 + 0x20);
  }
  *(FDestructionSentinel **)((longlong)FVar10 + (longlong)iVar8 * 8) = local_28;
  FMRSWRecursiveAccessDetector::AcquireWriteAccess((FMRSWRecursiveAccessDetector *)this);
  this->InvocationListLockCount = this->InvocationListLockCount + 1;
  bVar5 = false;
  uVar12 = (this->InvocationList).ArrayNum - 1;
  if (-1 < (int)uVar12) {
    lVar13 = (longlong)(int)uVar12 << 4;
    bVar5 = false;
    do {
      uVar9 = 0;
      if ((int)uVar12 < (this->InvocationList).ArrayNum) {
        uVar9 = ~uVar12 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar2 = (this->InvocationList).AllocatorInstance.Data;
      if (((*(int *)(pFVar2 + lVar13 + 8) == 0) ||
          (plVar3 = *(longlong **)(pFVar2 + lVar13), plVar3 == (longlong *)0x0)) ||
         (cVar7 = (**(code **)(*plVar3 + 0x68))(), cVar7 == '\0')) {
        bVar5 = true;
      }
      lVar13 = lVar13 + -0x10;
      uVar12 = uVar12 - 1;
    } while (-1 < (int)uVar12);
  }
  this->InvocationListLockCount = this->InvocationListLockCount + -1;
  if (bVar5) {
    CompactInvocationList(this,false);
  }
  if (local_20.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
  }
  return;
}

