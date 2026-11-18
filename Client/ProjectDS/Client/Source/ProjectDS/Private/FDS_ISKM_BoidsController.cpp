// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 15

// ~FDS_ISKM_BoidsController @ 14b8659a0

void __thiscall FDS_ISKM_BoidsController::~FDS_ISKM_BoidsController(FDS_ISKM_BoidsController *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnStatesAddFinishDelegate);
  pvVar1 = *(void **)&(this->OnStatesAddFinishDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnStatesAddFinishDelegate);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->BoidFSM).SharedReferenceCount.ReferenceController);
  DestructItems<TSharedPtr<FDS_ISKM_BoidsTargetInfo,1>,int>
            ((TSharedPtr<FDS_ISKM_BoidsTargetInfo,1> *)(this->TargetInfoList).AllocatorInstance.Data
             ,(this->TargetInfoList).ArrayNum);
  pFVar2 = (this->TargetInfoList).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FDS_ISKM_BoidsFSM_ExecutionContext,int>
            ((FDS_ISKM_BoidsFSM_ExecutionContext *)
             (this->BoidExecutionContexts).AllocatorInstance.Data,
             (this->BoidExecutionContexts).ArrayNum);
  pFVar2 = (this->BoidExecutionContexts).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// AddTargetInfo @ 14b868390

void __thiscall
FDS_ISKM_BoidsController::AddTargetInfo
          (FDS_ISKM_BoidsController *this,TSharedPtr<FDS_ISKM_BoidsTargetInfo,1> *param_1)

{
  int *piVar1;
  TSharedPtr<FDS_ISKM_BoidsTargetInfo,1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FDS_ISKM_BoidsFSM_ExecutionContext *this_00;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  
  pTVar2 = (TSharedPtr<FDS_ISKM_BoidsTargetInfo,1> *)(this->TargetInfoList).AllocatorInstance.Data;
  if ((pTVar2 <= param_1) && (param_1 < pTVar2 + (this->TargetInfoList).ArrayMax)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->TargetInfoList).ArrayNum;
  piVar1 = &(this->TargetInfoList).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->TargetInfoList).AllocatorInstance,piVar1);
  }
  (this->TargetInfoList).ArrayNum = iVar6 + 1;
  pFVar8 = (this->TargetInfoList).AllocatorInstance.Data + (longlong)iVar6 * 0x10;
  *(FDS_ISKM_BoidsTargetInfo **)pFVar8 = param_1->Object;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar8 + 8) = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  iVar6 = (this->BoidExecutionContexts).ArrayNum;
  uVar9 = 0;
  if (0 < iVar6) {
    do {
      if (((int)uVar9 < 0) || (iVar6 <= (int)uVar9)) {
        this_00 = (FDS_ISKM_BoidsFSM_ExecutionContext *)0x0;
      }
      else {
        uVar7 = 0;
        if ((int)uVar9 < (this->BoidExecutionContexts).ArrayNum) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if (uVar7 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        this_00 = (FDS_ISKM_BoidsFSM_ExecutionContext *)
                  ((this->BoidExecutionContexts).AllocatorInstance.Data +
                  (longlong)(int)uVar9 * 0x280);
      }
      FDS_ISKM_BoidsFSM_ExecutionContext::SetTargetInfoList(this_00,&this->TargetInfoList);
      iVar6 = (this->BoidExecutionContexts).ArrayNum;
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < iVar6);
  }
  return;
}

// GetExecutionContext @ 14b877680

FDS_ISKM_BoidsFSM_ExecutionContext * __thiscall
FDS_ISKM_BoidsController::GetExecutionContext(FDS_ISKM_BoidsController *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FDS_ISKM_BoidsFSM_ExecutionContext *pFVar4;
  
  if ((-1 < param_1) && (param_1 < (this->BoidExecutionContexts).ArrayNum)) {
    uVar3 = 0;
    if (param_1 < (this->BoidExecutionContexts).ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FDS_ISKM_BoidsFSM_ExecutionContext *)(*pcVar1)();
        return pFVar4;
      }
    }
    return (FDS_ISKM_BoidsFSM_ExecutionContext *)
           ((this->BoidExecutionContexts).AllocatorInstance.Data + (longlong)param_1 * 0x280);
  }
  return (FDS_ISKM_BoidsFSM_ExecutionContext *)0x0;
}

// GetMainPlayerInfo @ 14b877ea0

TSharedPtr<FDS_ISKM_BoidsTargetInfo,1> * __thiscall
FDS_ISKM_BoidsController::GetMainPlayerInfo
          (FDS_ISKM_BoidsController *this,
          TSharedPtr<FDS_ISKM_BoidsTargetInfo,1> *__return_storage_ptr__)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TSharedPtr<FDS_ISKM_BoidsTargetInfo,1> *pTVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  
  iVar1 = (this->TargetInfoList).ArrayNum;
  pFVar6 = (this->TargetInfoList).AllocatorInstance.Data;
  pFVar7 = pFVar6 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->TargetInfoList).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<FDS_ISKM_BoidsTargetInfo,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar6 == pFVar7) break;
    if ((*(longlong *)pFVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TSharedPtr<FDS_ISKM_BoidsTargetInfo,1> *)(*pcVar3)();
      return pTVar5;
    }
    if ((*(FDS_ISKM_BoidsTargetInfo **)pFVar6)->TargetType == MainPlayer) {
      __return_storage_ptr__->Object = *(FDS_ISKM_BoidsTargetInfo **)pFVar6;
      pTVar2 = *(TReferenceControllerBase<1> **)(pFVar6 + 8);
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      return __return_storage_ptr__;
    }
    pFVar6 = pFVar6 + 0x10;
  }
  __return_storage_ptr__->Object = (FDS_ISKM_BoidsTargetInfo *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetTargetInfo @ 14b879450

TArray<TSharedPtr<FDS_ISKM_BoidsTargetInfo,1>,TSizedDefaultAllocator<32>_> * __thiscall
FDS_ISKM_BoidsController::GetTargetInfo
          (FDS_ISKM_BoidsController *this,
          TArray<TSharedPtr<FDS_ISKM_BoidsTargetInfo,1>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,EDS_ISKM_BoidsTargetType *param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArray<TSharedPtr<FDS_ISKM_BoidsTargetInfo,1>,TSizedDefaultAllocator<32>_> *pTVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar1 = (this->TargetInfoList).ArrayNum;
  pFVar8 = (this->TargetInfoList).AllocatorInstance.Data;
  pFVar9 = pFVar8 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->TargetInfoList).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<FDS_ISKM_BoidsTargetInfo,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar9) break;
    if (*(longlong *)pFVar8 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TArray<TSharedPtr<FDS_ISKM_BoidsTargetInfo,1>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar3)();
        return pTVar6;
      }
    }
    if (*(EDS_ISKM_BoidsTargetType *)(*(longlong *)pFVar8 + 8) == *param_1) {
      iVar5 = __return_storage_ptr__->ArrayNum;
      if (iVar5 == __return_storage_ptr__->ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar5 + 1;
      pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
      *(longlong *)pFVar7 = *(longlong *)pFVar8;
      lVar2 = *(longlong *)(pFVar8 + 8);
      *(longlong *)(pFVar7 + 8) = lVar2;
      if (lVar2 != 0) {
        LOCK();
        *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        UNLOCK();
      }
    }
    pFVar8 = pFVar8 + 0x10;
  }
  return __return_storage_ptr__;
}

// Initialize @ 14b87abb0

void __thiscall FDS_ISKM_BoidsController::Initialize(FDS_ISKM_BoidsController *this)

{
  return;
}

// OnBoidAdded @ 14b881980

void __thiscall
FDS_ISKM_BoidsController::OnBoidAdded
          (FDS_ISKM_BoidsController *this,int param_1,FWN_ISKM_BoidInfo *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FDS_ISKM_BoidsFSM_ExecutionContext *this_00;
  uint uVar5;
  uint uVar6;
  
  iVar1 = (this->BoidExecutionContexts).ArrayNum;
  if (iVar1 <= param_1) {
    uVar5 = param_1 + 1;
    if (iVar1 < (int)uVar5) {
      iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x280,0x10,uVar5 - iVar1,&(this->BoidExecutionContexts).AllocatorInstance,
                         &(this->BoidExecutionContexts).ArrayNum,
                         &(this->BoidExecutionContexts).ArrayMax);
      DefaultConstructItems<FDS_ISKM_BoidsFSM_ExecutionContext,int>
                ((this->BoidExecutionContexts).AllocatorInstance.Data + (longlong)iVar4 * 0x280,
                 uVar5 - iVar1);
    }
    else {
      if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
      }
      if ((int)uVar5 < iVar1) {
        uVar6 = iVar1 - uVar5;
        if (((int)(uVar6 | uVar5) < 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (uVar6 != 0) {
          TArray<FDS_ISKM_BoidsFSM_ExecutionContext,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                    (&this->BoidExecutionContexts,uVar5,uVar6);
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x280,0x10,&(this->BoidExecutionContexts).AllocatorInstance,
                     (this->BoidExecutionContexts).ArrayNum,&(this->BoidExecutionContexts).ArrayMax)
          ;
        }
      }
    }
  }
  this_00 = GetExecutionContext(this,param_1);
  if (this_00 != (FDS_ISKM_BoidsFSM_ExecutionContext *)0x0) {
    FDS_ISKM_BoidsFSM_ExecutionContext::SetTargetInfoList(this_00,&this->TargetInfoList);
    FDS_ISKM_BoidsFSM_ExecutionContext::Initialize(this_00,param_1,param_2);
  }
  return;
}

// OnBoidRemoved @ 14b884310

void __thiscall
FDS_ISKM_BoidsController::OnBoidRemoved
          (FDS_ISKM_BoidsController *this,int param_1,FWN_ISKM_BoidInfo *param_2)

{
  FDS_ISKM_BoidsFSM_ExecutionContext *this_00;
  
  this_00 = GetExecutionContext(this,param_1);
  if (this_00 != (FDS_ISKM_BoidsFSM_ExecutionContext *)0x0) {
    FDS_ISKM_BoidsFSM_ExecutionContext::Finalize(this_00,param_1,param_2);
  }
  return;
}

// OnBoundToActor @ 14b8844a0

void __thiscall
FDS_ISKM_BoidsController::OnBoundToActor
          (FDS_ISKM_BoidsController *this,AWN_ISKM_BoidsActor *param_1)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (AWN_ISKM_BoidsActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
    this->_padding_ = (longlong)param_1;
    return;
  }
  this->_padding_ = (longlong)param_1;
  return;
}

// OnUnboundToActor @ 14b8946b0

void __thiscall
FDS_ISKM_BoidsController::OnUnboundToActor
          (FDS_ISKM_BoidsController *this,AWN_ISKM_BoidsActor *param_1)

{
  return;
}

// SetInitialProperty @ 14b898e60

void __thiscall
FDS_ISKM_BoidsController::SetInitialProperty
          (FDS_ISKM_BoidsController *this,FDS_Boids_InitialProperty *param_1)

{
  int iVar1;
  FDS_ISKM_BoidsFSM_ExecutionContext *this_00;
  FDS_ISKM_BoidsFSM_ExecutionContext *pFVar2;
  undefined1 local_res8 [8];
  
  iVar1 = (this->BoidExecutionContexts).ArrayNum;
  this_00 = (FDS_ISKM_BoidsFSM_ExecutionContext *)
            (this->BoidExecutionContexts).AllocatorInstance.Data;
  pFVar2 = this_00 + iVar1;
  while( true ) {
    if ((this->BoidExecutionContexts).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FDS_ISKM_BoidsFSM_ExecutionContext,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (this_00 == pFVar2) break;
    FDS_ISKM_BoidsFSM_ExecutionContext::SetInitialProperty(this_00,param_1);
    this_00 = this_00 + 1;
  }
  return;
}

// SetNavInfo @ 14b898fe0

void __thiscall
FDS_ISKM_BoidsController::SetNavInfo(FDS_ISKM_BoidsController *this,FWN_NavInfo *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->BoidExecutionContexts).ArrayNum;
  pFVar2 = (this->BoidExecutionContexts).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x280;
  while( true ) {
    if ((this->BoidExecutionContexts).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FDS_ISKM_BoidsFSM_ExecutionContext,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    *(FWN_NavInfo **)(pFVar2 + 0x1e8) = param_1;
    pFVar2 = pFVar2 + 0x280;
  }
  return;
}

// UpdateActor_PostUpdateBoids @ 14b89ebe0

void __thiscall
FDS_ISKM_BoidsController::UpdateActor_PostUpdateBoids(FDS_ISKM_BoidsController *this,float param_1)

{
  return;
}

// UpdateActor_PreUpdateBoids @ 14b8a0460

void __thiscall
FDS_ISKM_BoidsController::UpdateActor_PreUpdateBoids(FDS_ISKM_BoidsController *this,float param_1)

{
  return;
}

// UpdateBoid_AnyThread @ 14b8a1c60

void __thiscall
FDS_ISKM_BoidsController::UpdateBoid_AnyThread
          (FDS_ISKM_BoidsController *this,int param_1,FWN_ISKM_BoidInfo *param_2,float param_3)

{
  FWN_StateMachine *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  FDS_ISKM_BoidsFSM_ExecutionContext *this_00;
  
  this_00 = GetExecutionContext(this,param_1);
  if (this_00 != (FDS_ISKM_BoidsFSM_ExecutionContext *)0x0) {
    pFVar1 = (this->BoidFSM).Object;
    pTVar2 = (this->BoidFSM).SharedReferenceCount.ReferenceController;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar3 = *(TReferenceControllerBase<1> **)&this_00->field_0x10;
    *(FWN_StateMachine **)&this_00->field_0x8 = pFVar1;
    *(TReferenceControllerBase<1> **)&this_00->field_0x10 = pTVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    if (param_2 != (FWN_ISKM_BoidInfo *)0x0) {
      this_00->BoidInfo = param_2;
    }
    FWN_StateMachine_ExecutionContext::Execute((FWN_StateMachine_ExecutionContext *)this_00,param_3)
    ;
  }
  return;
}

