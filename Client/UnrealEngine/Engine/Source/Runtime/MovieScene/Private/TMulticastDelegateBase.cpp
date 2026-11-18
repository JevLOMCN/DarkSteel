// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 2

// CopyFrom<IBaseDelegateInstance<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_> @ 146070ac0

/* WARNING: Removing unreachable block (ram,0x000146070c1a) */

void __thiscall
TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
CopyFrom<IBaseDelegateInstance<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_>
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

// CopyFrom<IBaseDelegateInstance<void___cdecl(FMovieSceneChannel_*,TArray<FKeyMoveEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_> @ 146070cd0

/* WARNING: Removing unreachable block (ram,0x000146070e2a) */

void __thiscall
TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
CopyFrom<IBaseDelegateInstance<void___cdecl(FMovieSceneChannel_*,TArray<FKeyMoveEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_>
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

