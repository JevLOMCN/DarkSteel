// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 12

// CreateCopy @ 14dd19cb0

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FString_const_&,UPackage_*,FObjectPostSaveContext),FDefaultDelegateUserPolicy,`UMovieGraphSubgraphNode::RefreshOnSubgraphAssetSaved'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVFString__PEAVUPackage__VFObjectPostSaveContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TWeakBaseFunctorDelegateInstance<void___cdecl(FString_const_&,UPackage_*,FObjectPostSaveContext),FDefaultDelegateUserPolicy,`UMovieGraphSubgraphNode::RefreshOnSubgraphAssetSaved'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14dd19d40

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FString_const_&,UPackage_*,FObjectPostSaveContext),FDefaultDelegateUserPolicy,`UMovieGraphSubgraphNode::RefreshOnSubgraphAssetSaved'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVFString__PEAVUPackage__VFObjectPostSaveContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TWeakBaseFunctorDelegateInstance<void___cdecl(FString_const_&,UPackage_*,FObjectPostSaveContext),FDefaultDelegateUserPolicy,`UMovieGraphSubgraphNode::RefreshOnSubgraphAssetSaved'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  return;
}

// CreateCopy @ 14dd19d90

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FString_const_&,UPackage_*,FObjectPostSaveContext),FDefaultDelegateUserPolicy,`UMovieGraphSubgraphNode::RefreshOnSubgraphAssetSaved'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVFString__PEAVUPackage__VFObjectPostSaveContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TWeakBaseFunctorDelegateInstance<void___cdecl(FString_const_&,UPackage_*,FObjectPostSaveContext),FDefaultDelegateUserPolicy,`UMovieGraphSubgraphNode::RefreshOnSubgraphAssetSaved'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar3[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14dd1d4d0

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FString_const_&,UPackage_*,FObjectPostSaveContext),FDefaultDelegateUserPolicy,`UMovieGraphSubgraphNode::RefreshOnSubgraphAssetSaved'::__l2::<lambda_1>_>
::Execute(void *this,FString *param_1,UPackage *param_2,FObjectPostSaveContext param_3)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  UMovieGraphConfig *this_00;
  UPackage *pUVar3;
  
  pFVar2 = ((param_3.Data)->TargetFilename).Data.AllocatorInstance.Data;
  pFVar1 = pFVar2 + 0x9c;
  *(int *)pFVar1 = *(int *)pFVar1 + 1;
  if (pFVar2[0x41] == (FScriptContainerElement)0x0) {
    this_00 = TSoftObjectPtr<UMovieGraphConfig>::LoadSynchronous
                        ((TSoftObjectPtr<UMovieGraphConfig> *)
                         (*(longlong *)((longlong)this + 0x20) + 0xb0));
    if (this_00 != (UMovieGraphConfig *)0x0) {
      pUVar3 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)this_00);
      if (pUVar3 == param_2) {
        UMovieGraphNode::UpdatePins(*(UMovieGraphNode **)((longlong)this + 0x20));
      }
    }
  }
  return;
}

// ExecuteIfSafe @ 14dd1da80

/* WARNING: Removing unreachable block (ram,0x00014dd1dabc) */
/* WARNING: Removing unreachable block (ram,0x00014dd1db00) */

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FString_const_&,UPackage_*,FObjectPostSaveContext),FDefaultDelegateUserPolicy,`UMovieGraphSubgraphNode::RefreshOnSubgraphAssetSaved'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FString *param_1,UPackage *param_2,FObjectPostSaveContext param_3)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar4;
  UMovieGraphConfig *this_00;
  UPackage *pUVar5;
  UObject *pUVar6;
  UObject *local_res8;
  
  pUVar6 = (UObject *)0x0;
  bVar3 = IsInGameThread();
  if (!bVar3) {
    TVar4 = FWeakObjectPtr::Pin((FWeakObjectPtr *)((longlong)this + 0x18));
                    /* WARNING: Load size is inaccurate */
    pUVar6 = *TVar4.Object;
    *(undefined8 *)TVar4.Object = 0;
    if (local_res8 != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject(local_res8);
    }
  }
  bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)this + 0x18));
  if (bVar3) {
    pFVar2 = ((param_3.Data)->TargetFilename).Data.AllocatorInstance.Data;
    pFVar1 = pFVar2 + 0x9c;
    *(int *)pFVar1 = *(int *)pFVar1 + 1;
    if (((pFVar2[0x41] == (FScriptContainerElement)0x0) &&
        (this_00 = TSoftObjectPtr<UMovieGraphConfig>::LoadSynchronous
                             ((TSoftObjectPtr<UMovieGraphConfig> *)
                              (*(longlong *)((longlong)this + 0x20) + 0xb0)),
        this_00 != (UMovieGraphConfig *)0x0)) &&
       (pUVar5 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)this_00), pUVar5 == param_2))
    {
      UMovieGraphNode::UpdatePins(*(UMovieGraphNode **)((longlong)this + 0x20));
    }
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if (pUVar6 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar6);
  }
  return bVar3;
}

// GetBoundProgramCounterForTimerManager @ 14dd23e50

ulong64 __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FString_const_&,UPackage_*,FObjectPostSaveContext),FDefaultDelegateUserPolicy,`UMovieGraphSubgraphNode::RefreshOnSubgraphAssetSaved'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 14dd29500

void * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FString_const_&,UPackage_*,FObjectPostSaveContext),FDefaultDelegateUserPolicy,`UMovieGraphSubgraphNode::RefreshOnSubgraphAssetSaved'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetUObject @ 14dd30380

UObject * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FString_const_&,UPackage_*,FObjectPostSaveContext),FDefaultDelegateUserPolicy,`UMovieGraphSubgraphNode::RefreshOnSubgraphAssetSaved'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// HasSameObject @ 14dd32270

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FString_const_&,UPackage_*,FObjectPostSaveContext),FDefaultDelegateUserPolicy,`UMovieGraphSubgraphNode::RefreshOnSubgraphAssetSaved'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 == param_1;
}

// IsCompactable @ 14dd33870

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FString_const_&,UPackage_*,FObjectPostSaveContext),FDefaultDelegateUserPolicy,`UMovieGraphSubgraphNode::RefreshOnSubgraphAssetSaved'::__l2::<lambda_1>_>
::IsCompactable(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18),true);
  return pUVar1 == (UObject *)0x0;
}

// IsSafeToExecute @ 14dd33b50

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FString_const_&,UPackage_*,FObjectPostSaveContext),FDefaultDelegateUserPolicy,`UMovieGraphSubgraphNode::RefreshOnSubgraphAssetSaved'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)this + 0x18));
  return bVar1;
}

// TryGetBoundFunctionName @ 14dd47460

FName __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FString_const_&,UPackage_*,FObjectPostSaveContext),FDefaultDelegateUserPolicy,`UMovieGraphSubgraphNode::RefreshOnSubgraphAssetSaved'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

