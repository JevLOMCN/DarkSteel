// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 3

// ~FChaosDDTimeline @ 1436f7510

void __thiscall ChaosDD::Private::FChaosDDTimeline::~FChaosDDTimeline(FChaosDDTimeline *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->FramesCS);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ActiveFrame).SharedReferenceCount.ReferenceController);
  DestructItems<TSharedPtr<ChaosDD::Private::FChaosDDFrame,1>,int>
            ((TSharedPtr<ChaosDD::Private::FChaosDDFrame,1> *)(this->Frames).AllocatorInstance.Data,
             (this->Frames).ArrayNum);
  pFVar3 = (this->Frames).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->Name).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  plVar4 = (longlong *)this->_padding_;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001436f7579. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4,1);
      return;
    }
  }
  return;
}

// BeginFrame @ 1436f8e30

void __thiscall
ChaosDD::Private::FChaosDDTimeline::BeginFrame(FChaosDDTimeline *this,double param_1,double param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  atomic<int> *paVar1;
  int *piVar2;
  atomic<int> aVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  code *pcVar8;
  bool bVar9;
  atomic<int> aVar10;
  TReferenceControllerBase<1> *pTVar11;
  FChaosDDTimeline *pFVar12;
  FChaosDDFrame *pFVar13;
  TReferenceControllerBase<1> *pTVar14;
  FChaosDDFrame *local_68;
  FSharedReferencer<1> local_60;
  TWeakPtr<ChaosDD::Private::FChaosDDTimeline,1> local_58 [3];
  
  lpCriticalSection = &this->FramesCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (((this->ActiveFrame).Object != (FChaosDDFrame *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ActiveFrame.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\ChaosDebugDraw\\ChaosDDTimeline.h"
                         ,0x3b,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  lVar6 = this->NextFrameIndex;
  pFVar12 = (FChaosDDTimeline *)0x0;
  this->NextFrameIndex = lVar6 + 1;
  pTVar14 = (TReferenceControllerBase<1> *)this->_padding_;
  if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar14->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar14 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1436f8ee8;
      }
      LOCK();
      aVar10 = pTVar14->SharedReferenceCount;
      bVar9 = aVar3 == aVar10;
      if (bVar9) {
        pTVar14->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar10 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar10;
    } while (!bVar9);
    pFVar12 = (FChaosDDTimeline *)this->_padding_;
  }
LAB_1436f8ee8:
  if ((pFVar12 != this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if (pFVar12 == (FChaosDDTimeline *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  pTVar11 = ::operator_new(0xd0);
  if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
    pTVar11 = (TReferenceControllerBase<1> *)0x0;
    pFVar13 = (FChaosDDFrame *)&DAT_00000010;
  }
  else {
    pTVar11->SharedReferenceCount = (atomic<int>)0x1;
    pTVar11->WeakReferenceCount = (atomic<int>)0x1;
    pTVar11->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFChaosDDFrame_Private_ChaosDD___00_SharedPointerInternals__6B_
    ;
    iVar4 = this->CommandQueueLength;
    iVar5 = this->CommandBudget;
    if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar14->WeakReferenceCount = (atomic<int>)((int)pTVar14->WeakReferenceCount + 1);
      UNLOCK();
    }
    local_58[0].Object = pFVar12;
    local_58[0].WeakReferenceCount.ReferenceController = pTVar14;
    FChaosDDFrame::FChaosDDFrame
              ((FChaosDDFrame *)(pTVar11 + 1),local_58,lVar6,param_1,param_2,&this->DrawRegion,iVar5
               ,iVar4);
    if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar14->WeakReferenceCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)(pTVar14->_padding_ + 8))(pTVar14,1);
      }
    }
    pFVar13 = (FChaosDDFrame *)(pTVar11 + 1);
    if (pFVar13 == (FChaosDDFrame *)0x0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      goto LAB_1436f90b0;
    }
  }
  if (((pFVar13->_padding_ == 0) || (pFVar13->_padding_ == 0)) ||
     (*(int *)(pFVar13->_padding_ + 8) < 1)) {
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar13->_padding_ = (longlong)pFVar13;
    if (pTVar11 != (TReferenceControllerBase<1> *)pFVar13->_padding_) {
      if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar11->WeakReferenceCount = (atomic<int>)((int)pTVar11->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar7 = (longlong *)pFVar13->_padding_;
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
      pFVar13->_padding_ = (longlong)pTVar11;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  }
LAB_1436f90b0:
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_68 = pFVar13;
  local_60.ReferenceController = pTVar11;
  if (&this->ActiveFrame != (TSharedPtr<ChaosDD::Private::FChaosDDFrame,1> *)&local_68) {
    (this->ActiveFrame).Object = pFVar13;
    local_68 = (FChaosDDFrame *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ActiveFrame).SharedReferenceCount,&local_60);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_60.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
                    /* WARNING: Could not recover jumptable at 0x0001436f9151. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// EndFrame @ 1436fe8a0

void __thiscall ChaosDD::Private::FChaosDDTimeline::EndFrame(FChaosDDTimeline *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TSharedPtr<ChaosDD::Private::FChaosDDFrame,1> *pTVar1;
  int *piVar2;
  FSharedReferencer<1> *this_00;
  FWindowsRecursiveMutex *lpCriticalSection_00;
  ulonglong uVar3;
  FChaosDDFrame *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  longlong local_28;
  FSharedReferencer<1> FStack_20;
  
  lpCriticalSection = &this->FramesCS;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pTVar1 = &this->ActiveFrame;
    if ((this->ActiveFrame).Object == (FChaosDDFrame *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ActiveFrame.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\ChaosDebugDraw\\ChaosDDTimeline.h"
                         ,0x47,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (pTVar1->Object == (FChaosDDFrame *)0x0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
    }
    pFVar4 = pTVar1->Object;
    lpCriticalSection_00 = &pFVar4->CommandsCS;
    if (lpCriticalSection_00 != (FWindowsRecursiveMutex *)0x0) {
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
      iVar10 = (pFVar4->Commands).ArrayNum;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
      if (iVar10 < this->CommandQueueLength) {
        iVar10 = this->CommandQueueLength;
      }
      iVar9 = 1;
      if (iVar10 != 0) {
        iVar9 = iVar10;
      }
      uVar3 = (ulonglong)(iVar9 - 1) * 2 + 1;
      lVar6 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      this->CommandQueueLength = 1 << ((byte)lVar6 & 0x1f);
      pFVar12 = (this->Frames).AllocatorInstance.Data;
      if ((pFVar12 <= pTVar1) && (pTVar1 < pFVar12 + (longlong)(this->Frames).ArrayMax * 0x10)) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      iVar10 = (this->Frames).ArrayNum;
      piVar2 = &(this->Frames).ArrayMax;
      if (iVar10 == *piVar2) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&(this->Frames).AllocatorInstance,piVar2);
      }
      (this->Frames).ArrayNum = iVar10 + 1;
      this_00 = &(this->ActiveFrame).SharedReferenceCount;
      pFVar12 = (this->Frames).AllocatorInstance.Data + (longlong)iVar10 * 0x10;
      *(FChaosDDFrame **)pFVar12 = pTVar1->Object;
      pTVar5 = this_00->ReferenceController;
      *(TReferenceControllerBase<1> **)(pFVar12 + 8) = pTVar5;
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_28 = 0;
      FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (pTVar1 != (TSharedPtr<ChaosDD::Private::FChaosDDFrame,1> *)&local_28) {
        pTVar1->Object = (FChaosDDFrame *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(this_00,&FStack_20);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_20.ReferenceController);
      iVar10 = (this->Frames).ArrayNum;
      uVar13 = iVar10 - this->MaxFrames;
      if (0 < (int)uVar13) {
        uVar11 = 0;
        if ((int)uVar13 <= iVar10) {
          uVar11 = ~uVar13 >> 0x1f;
        }
        if (uVar11 == 0) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            );
          if (bVar8) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        TArray<TSharedPtr<ChaosDD::Private::FChaosDDFrame,1>,TSizedDefaultAllocator<32>_>::
        RemoveAtImpl(&this->Frames,0,uVar13);
      }
                    /* WARNING: Could not recover jumptable at 0x0001436fead8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

