// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 13

// FChaosDDScene @ 1436f5690

FChaosDDScene * __thiscall
ChaosDD::Private::FChaosDDScene::FChaosDDScene(FChaosDDScene *this,FString *param_1,bool param_2)

{
  undefined8 uVar1;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->TimelinesCS,4000);
  ::FString::FString(&this->Name,param_1);
  (this->Timelines).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Timelines).ArrayNum = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Timelines).ArrayMax = 0;
  (this->DrawRegion).Center.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->DrawRegion).Center.field0_0x0._s_0.Y = (double)uVar1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->DrawRegion).W = 0.0;
  (this->DrawRegion).Center.field0_0x0._s_0.Z = (double)uVar1;
  this->CommandBudget = 20000;
  this->bIsServer = param_2;
  this->bRenderEnabled = true;
  return this;
}

// ~FChaosDDScene @ 1436f72c0

void __thiscall ChaosDD::Private::FChaosDDScene::~FChaosDDScene(FChaosDDScene *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  
  DestructItems<TWeakPtr<ChaosDD::Private::FChaosDDTimeline,1>,int>
            ((TWeakPtr<ChaosDD::Private::FChaosDDTimeline,1> *)
             (this->Timelines).AllocatorInstance.Data,(this->Timelines).ArrayNum);
  pFVar3 = (this->Timelines).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->Name).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->TimelinesCS);
  plVar4 = (longlong *)this->_padding_;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001436f7320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4,1);
      return;
    }
  }
  return;
}

// CreateTimeline @ 1436fde10

TSharedPtr<ChaosDD::Private::FChaosDDTimeline,1> * __thiscall
ChaosDD::Private::FChaosDDScene::CreateTimeline
          (FChaosDDScene *this,
          TSharedPtr<ChaosDD::Private::FChaosDDTimeline,1> *__return_storage_ptr__,FString *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  longlong *plVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  TReferenceControllerBase<1> *pTVar8;
  TSharedPtr<ChaosDD::Private::FChaosDDTimeline,1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  FChaosDDTimeline *pFVar11;
  FChaosDDTimeline *local_28;
  TReferenceControllerBase<1> *local_20;
  
  lpCriticalSection = &this->TimelinesCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pTVar8 = ::operator_new(0xb0);
  pTVar10 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
    pFVar11 = (FChaosDDTimeline *)&DAT_00000010;
  }
  else {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFChaosDDTimeline_Private_ChaosDD___00_SharedPointerInternals__6B_
    ;
    iVar7 = this->CommandBudget;
    pTVar8[1]._padding_ = 0;
    pTVar8[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar8[1].WeakReferenceCount = (atomic<int>)0x0;
    ::FString::FString((FString *)(pTVar8 + 2),param_1);
    pTVar8[3]._padding_ = 0;
    pTVar8[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar8[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar8[4]._padding_ = 0;
    pTVar8[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar8[4].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar8[5]._padding_ = 1;
    pTVar8[5].SharedReferenceCount = (atomic<int>)0x0;
    uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    pTVar8[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar8[6]._padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    *(undefined8 *)&pTVar8[6].SharedReferenceCount = uVar5;
    pTVar8[7]._padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    pTVar8[7].SharedReferenceCount = (atomic<int>)0x0;
    pTVar8[7].WeakReferenceCount = (atomic<int>)0x0;
    *(int *)&pTVar8[8]._padding_ = iVar7;
    *(undefined4 *)((longlong)&pTVar8[8]._padding_ + 4) = 0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&pTVar8[8].SharedReferenceCount,4000);
    pFVar11 = (FChaosDDTimeline *)(pTVar8 + 1);
    pTVar10 = pTVar8;
    if (pFVar11 == (FChaosDDTimeline *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pTVar9 = (TSharedPtr<ChaosDD::Private::FChaosDDTimeline,1> *)(*pcVar4)();
        return pTVar9;
      }
      goto LAB_1436fdf8f;
    }
  }
  if (((pFVar11->_padding_ == 0) || (pFVar11->_padding_ == 0)) ||
     (*(int *)(pFVar11->_padding_ + 8) < 1)) {
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar11->_padding_ = (longlong)pFVar11;
    if (pTVar10 != (TReferenceControllerBase<1> *)pFVar11->_padding_) {
      if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar2 = (longlong *)pFVar11->_padding_;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plVar2 + 8))(plVar2,1);
        }
      }
      pFVar11->_padding_ = (longlong)pTVar10;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
LAB_1436fdf8f:
  __return_storage_ptr__->Object = pFVar11;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar10;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  local_28 = __return_storage_ptr__->Object;
  local_20 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  if (local_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_20->WeakReferenceCount = (atomic<int>)((int)local_20->WeakReferenceCount + 1);
    UNLOCK();
  }
  pFVar3 = (this->Timelines).AllocatorInstance.Data;
  if ((pFVar3 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 < pFVar3 + (longlong)(this->Timelines).ArrayMax * 0x10))
  {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar9 = (TSharedPtr<ChaosDD::Private::FChaosDDTimeline,1> *)(*pcVar4)();
      return pTVar9;
    }
  }
  iVar7 = (this->Timelines).ArrayNum;
  piVar1 = &(this->Timelines).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->Timelines).AllocatorInstance,piVar1);
  }
  (this->Timelines).ArrayNum = iVar7 + 1;
  pFVar3 = (this->Timelines).AllocatorInstance.Data;
  *(FChaosDDTimeline **)(pFVar3 + (longlong)iVar7 * 0x10) = local_28;
  *(TReferenceControllerBase<1> **)(pFVar3 + (longlong)iVar7 * 0x10 + 8) = local_20;
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return __return_storage_ptr__;
}

// GetCommandBudget @ 1436ff550

int __thiscall ChaosDD::Private::FChaosDDScene::GetCommandBudget(FChaosDDScene *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  
  lpCriticalSection = &this->TimelinesCS;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar1 = this->CommandBudget;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetDrawRegion @ 1436ff820

TSphere<double> * __thiscall ChaosDD::Private::FChaosDDScene::GetDrawRegion(FChaosDDScene *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  lpCriticalSection = &this->TimelinesCS;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return &this->DrawRegion;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetFrames @ 1436ff8d0

TArray<TSharedPtr<ChaosDD::Private::FChaosDDFrame,1>,TSizedDefaultAllocator<32>_> * __thiscall
ChaosDD::Private::FChaosDDScene::GetFrames
          (FChaosDDScene *this,
          TArray<TSharedPtr<ChaosDD::Private::FChaosDDFrame,1>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  <lambda_1> local_res8;
  
  lpCriticalSection = &this->TimelinesCS;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    local_res8.Frames = __return_storage_ptr__;
    VisitTimelines<_ChaosDD::Private::FChaosDDScene::GetFrames_::__l2::<lambda_1>_>
              (&this->Timelines,&local_res8);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetLatestFrames @ 1436ffb30

TArray<TSharedPtr<ChaosDD::Private::FChaosDDFrame,1>,TSizedDefaultAllocator<32>_> * __thiscall
ChaosDD::Private::FChaosDDScene::GetLatestFrames
          (FChaosDDScene *this,
          TArray<TSharedPtr<ChaosDD::Private::FChaosDDFrame,1>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  <lambda_1> local_res8;
  
  lpCriticalSection = &this->TimelinesCS;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    local_res8.Frames = __return_storage_ptr__;
    VisitTimelines<_ChaosDD::Private::FChaosDDScene::GetFrames_::__l2::<lambda_1>_>
              (&this->Timelines,&local_res8);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// IsRenderEnabled @ 1437018f0

bool __thiscall ChaosDD::Private::FChaosDDScene::IsRenderEnabled(FChaosDDScene *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  bool bVar1;
  
  lpCriticalSection = &this->TimelinesCS;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    bVar1 = this->bRenderEnabled;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// IsServer @ 143701960

bool __thiscall ChaosDD::Private::FChaosDDScene::IsServer(FChaosDDScene *this)

{
  return this->bIsServer;
}

// PruneTimelines @ 1437030d0

void __thiscall ChaosDD::Private::FChaosDDScene::PruneTimelines(FChaosDDScene *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  byte bVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  byte bVar10;
  
  lpCriticalSection = &this->TimelinesCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar9 = (this->Timelines).ArrayNum;
  lVar4 = (longlong)iVar9;
  if (iVar9 != 0) {
    iVar9 = 0;
    pFVar1 = (this->Timelines).AllocatorInstance.Data;
    if (((*(longlong *)pFVar1 == 0) || (*(longlong *)(pFVar1 + 8) == 0)) ||
       (*(int *)(*(longlong *)(pFVar1 + 8) + 8) < 1)) {
      bVar10 = 0;
    }
    else {
      bVar10 = 1;
    }
    lVar8 = 0;
    iVar6 = 0;
    do {
      lVar8 = lVar8 + 1;
      iVar7 = iVar6 + 1;
      if (lVar8 < lVar4) {
        pFVar2 = pFVar1 + lVar8 * 0x10;
        do {
          if (((*(longlong *)pFVar2 == 0) || (*(longlong *)(pFVar2 + 8) == 0)) ||
             (*(int *)(*(longlong *)(pFVar2 + 8) + 8) < 1)) {
            bVar3 = 0;
          }
          else {
            bVar3 = 1;
          }
          if (bVar10 != bVar3) break;
          iVar7 = iVar7 + 1;
          lVar8 = lVar8 + 1;
          pFVar2 = pFVar2 + 0x10;
        } while (lVar8 < lVar4);
      }
      iVar5 = iVar7 - iVar6;
      if (bVar10 == 0) {
        DestructItems<TWeakPtr<ChaosDD::Private::FChaosDDTimeline,1>,int>
                  ((TWeakPtr<ChaosDD::Private::FChaosDDTimeline,1> *)
                   (pFVar1 + (longlong)iVar6 * 0x10),iVar5);
      }
      else {
        if (iVar9 != iVar6) {
          memmove(pFVar1 + (longlong)iVar9 * 0x10,pFVar1 + (longlong)iVar6 * 0x10,
                  (longlong)iVar5 << 4);
        }
        iVar9 = iVar9 + iVar5;
      }
      bVar10 = bVar10 ^ 1;
      iVar6 = iVar7;
    } while (lVar8 < lVar4);
    (this->Timelines).ArrayNum = iVar9;
  }
                    /* WARNING: Could not recover jumptable at 0x000143703223. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// SetCommandBudget @ 143703da0

void __thiscall ChaosDD::Private::FChaosDDScene::SetCommandBudget(FChaosDDScene *this,int param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  LPCRITICAL_SECTION lpCriticalSection_00;
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  atomic<int> aVar4;
  atomic<int> aVar5;
  ulonglong uVar6;
  TReferenceControllerBase<1> *pTVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  bool bVar10;
  undefined1 local_res8 [8];
  
  lpCriticalSection = &this->TimelinesCS;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    this->CommandBudget = param_1;
    uVar1 = (this->Timelines).ArrayNum;
    uVar6 = (ulonglong)(int)uVar1;
    pFVar9 = (this->Timelines).AllocatorInstance.Data;
    pFVar8 = pFVar9 + uVar6 * 0x10;
    do {
      while( true ) {
        if ((this->Timelines).ArrayNum != (int)uVar6) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<TWeakPtr<ChaosDD::Private::FChaosDDTimeline,1>_const_,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if (pFVar9 == pFVar8) {
          EnterCriticalSection((LPCRITICAL_SECTION)&FChaosDDContext::GlobalFrameCS);
          FChaosDDContext::GlobalCommandBudget = param_1;
          if (FChaosDDContext::GlobalFrame.Object != (FChaosDDFrame *)0x0) {
            if ((FChaosDDContext::GlobalFrame.Object == (FChaosDDFrame *)0x0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar10)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            (FChaosDDContext::GlobalFrame.Object)->CommandBudget = param_1;
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)&FChaosDDContext::GlobalFrameCS);
                    /* WARNING: Could not recover jumptable at 0x000143703f01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
          return;
        }
        pTVar7 = *(TReferenceControllerBase<1> **)(pFVar9 + 8);
        if (pTVar7 != (TReferenceControllerBase<1> *)0x0) break;
LAB_143703e30:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
        uVar6 = (ulonglong)uVar1;
        pFVar9 = pFVar9 + 0x10;
      }
      aVar4 = pTVar7->SharedReferenceCount;
      do {
        if (aVar4 == (atomic<int>)0x0) {
          pTVar7 = (TReferenceControllerBase<1> *)0x0;
          goto LAB_143703e30;
        }
        LOCK();
        aVar5 = pTVar7->SharedReferenceCount;
        bVar10 = aVar4 == aVar5;
        if (bVar10) {
          pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
          aVar5 = aVar4;
        }
        UNLOCK();
        aVar4 = aVar5;
      } while (!bVar10);
      lVar2 = *(longlong *)pFVar9;
      if (lVar2 == 0) goto LAB_143703e30;
      lpCriticalSection_00 = (LPCRITICAL_SECTION)(lVar2 + 0x78);
      if (lpCriticalSection_00 == (LPCRITICAL_SECTION)0x0) break;
      EnterCriticalSection(lpCriticalSection_00);
      *(int *)(lVar2 + 0x70) = param_1;
      LeaveCriticalSection(lpCriticalSection_00);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
      uVar6 = (ulonglong)uVar1;
      pFVar9 = pFVar9 + 0x10;
    } while( true );
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// SetDrawRegion @ 143703f20

void __thiscall
ChaosDD::Private::FChaosDDScene::SetDrawRegion(FChaosDDScene *this,TSphere<double> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  LPCRITICAL_SECTION lpCriticalSection_00;
  uint uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  double dVar6;
  atomic<int> aVar7;
  atomic<int> aVar8;
  ulonglong uVar9;
  TReferenceControllerBase<1> *pTVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  bool bVar13;
  undefined1 local_res8 [8];
  
  lpCriticalSection = &this->TimelinesCS;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    dVar6 = (param_1->Center).field0_0x0._s_0.Y;
    (this->DrawRegion).Center.field0_0x0._s_0.X = (param_1->Center).field0_0x0._s_0.X;
    (this->DrawRegion).Center.field0_0x0._s_0.Y = dVar6;
    dVar6 = param_1->W;
    (this->DrawRegion).Center.field0_0x0._s_0.Z = (param_1->Center).field0_0x0._s_0.Z;
    (this->DrawRegion).W = dVar6;
    uVar1 = (this->Timelines).ArrayNum;
    uVar9 = (ulonglong)(int)uVar1;
    pFVar12 = (this->Timelines).AllocatorInstance.Data;
    pFVar11 = pFVar12 + uVar9 * 0x10;
    do {
      while( true ) {
        if ((this->Timelines).ArrayNum != (int)uVar9) {
          `TCheckedPointerIterator<TWeakPtr<ChaosDD::Private::FChaosDDTimeline,1>_const_,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if (pFVar12 == pFVar11) {
                    /* WARNING: Could not recover jumptable at 0x000143704029. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
          return;
        }
        pTVar10 = *(TReferenceControllerBase<1> **)(pFVar12 + 8);
        if (pTVar10 != (TReferenceControllerBase<1> *)0x0) break;
LAB_143703fb5:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10)
        ;
        uVar9 = (ulonglong)uVar1;
        pFVar12 = pFVar12 + 0x10;
      }
      aVar7 = pTVar10->SharedReferenceCount;
      do {
        if (aVar7 == (atomic<int>)0x0) {
          pTVar10 = (TReferenceControllerBase<1> *)0x0;
          goto LAB_143703fb5;
        }
        LOCK();
        aVar8 = pTVar10->SharedReferenceCount;
        bVar13 = aVar7 == aVar8;
        if (bVar13) {
          pTVar10->SharedReferenceCount = (atomic<int>)((int)aVar7 + 1);
          aVar8 = aVar7;
        }
        UNLOCK();
        aVar7 = aVar8;
      } while (!bVar13);
      lVar2 = *(longlong *)pFVar12;
      if (lVar2 == 0) goto LAB_143703fb5;
      lpCriticalSection_00 = (LPCRITICAL_SECTION)(lVar2 + 0x78);
      if (lpCriticalSection_00 == (LPCRITICAL_SECTION)0x0) break;
      EnterCriticalSection(lpCriticalSection_00);
      uVar3 = *(undefined4 *)((longlong)&(param_1->Center).field0_0x0 + 4);
      uVar4 = *(undefined4 *)((longlong)&(param_1->Center).field0_0x0 + 8);
      uVar5 = *(undefined4 *)((longlong)&(param_1->Center).field0_0x0 + 0xc);
      *(undefined4 *)(lVar2 + 0x50) = *(undefined4 *)&(param_1->Center).field0_0x0;
      *(undefined4 *)(lVar2 + 0x54) = uVar3;
      *(undefined4 *)(lVar2 + 0x58) = uVar4;
      *(undefined4 *)(lVar2 + 0x5c) = uVar5;
      uVar3 = *(undefined4 *)((longlong)&(param_1->Center).field0_0x0 + 0x14);
      uVar4 = *(undefined4 *)&param_1->W;
      uVar5 = *(undefined4 *)((longlong)&param_1->W + 4);
      *(undefined4 *)(lVar2 + 0x60) =
           *(undefined4 *)((longlong)&(param_1->Center).field0_0x0 + 0x10);
      *(undefined4 *)(lVar2 + 100) = uVar3;
      *(undefined4 *)(lVar2 + 0x68) = uVar4;
      *(undefined4 *)(lVar2 + 0x6c) = uVar5;
      LeaveCriticalSection(lpCriticalSection_00);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
      uVar9 = (ulonglong)uVar1;
      pFVar12 = pFVar12 + 0x10;
    } while( true );
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// SetRenderEnabled @ 143704280

void __thiscall ChaosDD::Private::FChaosDDScene::SetRenderEnabled(FChaosDDScene *this,bool param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  lpCriticalSection = &this->TimelinesCS;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    this->bRenderEnabled = param_1;
                    /* WARNING: Could not recover jumptable at 0x0001437042bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

