// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 16

// FSlateDrawBuffer @ 1424eab20

FSlateDrawBuffer * __thiscall FSlateDrawBuffer::FSlateDrawBuffer(FSlateDrawBuffer *this)

{
  *(undefined2 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::RegisterGCObject((FGCObject *)this);
  this->_padding_ = (longlong)&___7FSlateDrawBuffer__6B_;
  (this->WindowElementLists).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WindowElementLists).ArrayNum = 0;
  (this->WindowElementLists).ArrayMax = 0;
  (this->WindowElementListsPool).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WindowElementListsPool).ArrayNum = 0;
  (this->WindowElementListsPool).ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->GCLock,4000);
  this->bIsLocked = (atomic<bool>)0x0;
  this->bIsLockedBySlateThread = false;
  this->ResourceVersion = 0;
  return this;
}

// ~FSlateDrawBuffer @ 1424ec9d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSlateDrawBuffer::~FSlateDrawBuffer(FSlateDrawBuffer *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FSlateDrawBuffer__6B_;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->GCLock);
  DestructItems<TSharedRef<FSlateWindowElementList,1>,int>
            ((TSharedRef<FSlateWindowElementList,1> *)
             (this->WindowElementListsPool).AllocatorInstance.Data,
             (this->WindowElementListsPool).ArrayNum);
  pFVar1 = (this->WindowElementListsPool).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSharedRef<FSlateWindowElementList,1>,int>
            ((TSharedRef<FSlateWindowElementList,1> *)
             (this->WindowElementLists).AllocatorInstance.Data,(this->WindowElementLists).ArrayNum);
  pFVar1 = (this->WindowElementLists).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)this);
  return;
}

// operator() @ 1424fa210

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall `FSlateDrawBuffer::Unlock'::__l2::<lambda_1>::operator()(void *this)

{
  int iVar1;
  longlong lVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 local_res8 [8];
  
  if (*(char *)(*(longlong *)this + 0x58) == '\0') {
    ``FSlateDrawBuffer::Unlock'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()
              (local_res8);
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(*(longlong *)this + 0x30);
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    EnterCriticalSection(lpCriticalSection);
    lVar2 = *(longlong *)this;
    iVar1 = *(int *)(lVar2 + 0x18);
    puVar4 = *(undefined8 **)(lVar2 + 0x10);
    puVar3 = puVar4 + (longlong)iVar1 * 2;
    while( true ) {
      if (*(int *)(lVar2 + 0x18) != iVar1) {
        `TCheckedPointerIterator<TSharedRef<FSlateWindowElementList,1>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (puVar4 == puVar3) break;
      FSlateWindowElementList::ResetElementList((FSlateWindowElementList *)*puVar4);
      puVar4 = puVar4 + 2;
    }
    LOCK();
    *(undefined1 *)(*(longlong *)this + 0x58) = 0;
    UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x0001424fa2b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// AddReferencedObjects @ 1424ffdd0

void __thiscall
FSlateDrawBuffer::AddReferencedObjects(FSlateDrawBuffer *this,FReferenceCollector *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  uint uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  
  if ((this->bIsLocked != (atomic<bool>)0x0) && (this->bIsLockedBySlateThread == false)) {
    lpCriticalSection = &this->GCLock;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    uVar1 = (this->WindowElementLists).ArrayNum;
    uVar4 = (ulonglong)(int)uVar1;
    pFVar8 = (this->WindowElementLists).AllocatorInstance.Data;
    pFVar5 = pFVar8 + uVar4 * 0x10;
    while( true ) {
      if ((this->WindowElementLists).ArrayNum != (int)uVar4) {
        `TCheckedPointerIterator<TSharedRef<FSlateWindowElementList,1>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar8 == pFVar5) break;
      lVar3 = *(longlong *)pFVar8;
      iVar2 = *(int *)(lVar3 + 0x208);
      lVar7 = *(longlong *)(lVar3 + 0x1f8);
      lVar6 = (longlong)iVar2 * 200 + lVar7;
      while( true ) {
        if (*(int *)(lVar3 + 0x208) != iVar2) {
          `TCheckedPointerIterator<FSlateTextElement,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res8);
        }
        if (lVar7 == lVar6) break;
        FSlateFontInfo::AddReferencedObjects((FSlateFontInfo *)(lVar7 + 0x58),param_1);
        lVar7 = lVar7 + 200;
      }
      iVar2 = *(int *)(lVar3 + 0x220);
      lVar7 = *(longlong *)(lVar3 + 0x210);
      lVar6 = (longlong)iVar2 * 0x90 + lVar7;
      while( true ) {
        if (*(int *)(lVar3 + 0x220) != iVar2) {
          `TCheckedPointerIterator<FSlateShapedTextElement,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res8);
        }
        if (lVar7 == lVar6) break;
        if (*(FShapedGlyphSequence **)(lVar7 + 0x58) != (FShapedGlyphSequence *)0x0) {
          FShapedGlyphSequence::AddReferencedObjects
                    (*(FShapedGlyphSequence **)(lVar7 + 0x58),param_1);
        }
        if (*(FShapedGlyphSequence **)(lVar7 + 0x78) != (FShapedGlyphSequence *)0x0) {
          FShapedGlyphSequence::AddReferencedObjects
                    (*(FShapedGlyphSequence **)(lVar7 + 0x78),param_1);
        }
        lVar7 = lVar7 + 0x90;
      }
      uVar4 = (ulonglong)uVar1;
      pFVar8 = pFVar8 + 0x10;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// AddWindowElementList @ 142501410

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

FSlateWindowElementList * __thiscall
FSlateDrawBuffer::AddWindowElementList(FSlateDrawBuffer *this,TSharedRef<SWindow,1> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FSlateWindowElementList *pFVar6;
  SWindow *pSVar7;
  FSlateBatchData *pFVar8;
  TReferenceControllerBase<1> *pTVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  SWindow *pSVar12;
  SWindow *pSVar13;
  atomic<bool> local_res8 [8];
  TSharedRef<SWindow,1> *local_res10;
  undefined1 local_res18 [8];
  FSlateWindowElementList *local_68;
  TReferenceControllerBase<1> *local_60;
  FSlateWindowElementList *local_58;
  TReferenceControllerBase<1> *pTStack_50;
  TSharedPtr<SWindow,1> local_48;
  
  local_res10 = param_1;
  if (this->bIsLocked == (atomic<bool>)0x0) {
    local_res8[0] = this->bIsLocked;
    `FSlateDrawBuffer::AddWindowElementList'::__l2::<lambda_1>::operator()(local_res8);
  }
  lpCriticalSection = &this->GCLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pSVar13 = (SWindow *)0x0;
  pSVar7 = pSVar13;
  pSVar12 = pSVar13;
  if (0 < (this->WindowElementListsPool).ArrayNum) {
    do {
      uVar11 = (uint)pSVar7;
      uVar4 = 0;
      if ((int)uVar11 < (this->WindowElementListsPool).ArrayNum) {
        uVar4 = ~uVar11 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FSlateWindowElementList *)(*pcVar2)();
        return pFVar6;
      }
      pFVar10 = (this->WindowElementListsPool).AllocatorInstance.Data;
      pFVar6 = *(FSlateWindowElementList **)((longlong)&pSVar12->_padding_ + (longlong)pFVar10);
      local_60 = *(TReferenceControllerBase<1> **)
                  ((longlong)&pSVar12->_padding_ + (longlong)pFVar10);
      if (local_60 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_60->SharedReferenceCount = (atomic<int>)((int)local_60->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_68 = pFVar6;
      bVar3 = IsInGameThread();
      if (((!bVar3) && (bVar3 = IsInSlateThread(), !bVar3)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread() || IsInSlateThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Rendering\\DrawElements.h"
                             ,0xec,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FSlateWindowElementList *)(*pcVar2)();
        return pFVar6;
      }
      pSVar7 = pSVar13;
      if ((((pFVar6->WeakPaintWindow).Object != (SWindow *)0x0) &&
          (pTVar9 = (pFVar6->WeakPaintWindow).WeakReferenceCount.ReferenceController,
          pTVar9 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar9->SharedReferenceCount))
      {
        pSVar7 = pFVar6->RawPaintWindow;
      }
      if (pSVar7 == local_res10->Object) {
        pFVar10 = (this->WindowElementLists).AllocatorInstance.Data;
        if (((pFVar10 <= (FScriptContainerElement *)&local_68) &&
            ((FScriptContainerElement *)&local_68 <
             pFVar10 + (longlong)(this->WindowElementLists).ArrayMax * 0x10)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          pFVar6 = (FSlateWindowElementList *)(*pcVar2)();
          return pFVar6;
        }
        iVar5 = (this->WindowElementLists).ArrayNum;
        piVar1 = &(this->WindowElementLists).ArrayMax;
        if (iVar5 == *piVar1) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&(this->WindowElementLists).AllocatorInstance,piVar1);
        }
        pFVar10 = (this->WindowElementLists).AllocatorInstance.Data + (longlong)iVar5 * 0x10;
        (this->WindowElementLists).ArrayNum = iVar5 + 1;
        *(FSlateWindowElementList **)pFVar10 = local_68;
        *(TReferenceControllerBase<1> **)(pFVar10 + 8) = local_60;
        if (local_60 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_60->SharedReferenceCount = (atomic<int>)((int)local_60->SharedReferenceCount + 1);
          UNLOCK();
        }
        uVar4 = 0;
        if ((int)uVar11 < (this->WindowElementListsPool).ArrayNum) {
          uVar4 = ~uVar11 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          pFVar6 = (FSlateWindowElementList *)(*pcVar2)();
          return pFVar6;
        }
        TArray<TSharedRef<FSlateWindowElementList,1>,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                  (&this->WindowElementListsPool,uVar11);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&(this->WindowElementListsPool).AllocatorInstance,
                   (this->WindowElementListsPool).ArrayNum,&(this->WindowElementListsPool).ArrayMax)
        ;
        pFVar8 = FSlateWindowElementList::GetBatchData(local_68);
        if (pFVar8->NumBatches != 0) {
          `FSlateDrawBuffer::AddWindowElementList'::__l7::<lambda_2>::operator()(local_res18);
        }
        FSlateWindowElementList::ResetElementList(local_68);
        pFVar6 = local_68;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_60);
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        pTVar9 = (local_res10->SharedReferenceCount).ReferenceController;
        goto LAB_142501877;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_60);
      pSVar7 = (SWindow *)(ulonglong)(uVar11 + 1);
      param_1 = local_res10;
      pSVar12 = (SWindow *)&pSVar12->_padding_;
    } while ((int)(uVar11 + 1) < (this->WindowElementListsPool).ArrayNum);
  }
  pTStack_50 = ::operator_new(0x9d8);
  if (pTStack_50 == (TReferenceControllerBase<1> *)0x0) {
    local_58 = ___xmm_00000000000000000000000000000010;
    pTStack_50 = _UNK_150651568;
  }
  else {
    pTStack_50->SharedReferenceCount = (atomic<int>)0x1;
    pTStack_50->WeakReferenceCount = (atomic<int>)0x1;
    pTStack_50->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFSlateWindowElementList___00_SharedPointerInternals__6B_
    ;
    pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
    local_48.Object = param_1->Object;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_48.SharedReferenceCount.ReferenceController = pTVar9;
    FSlateWindowElementList::FSlateWindowElementList
              ((FSlateWindowElementList *)(pTStack_50 + 1),&local_48);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
    local_58 = (FSlateWindowElementList *)(pTStack_50 + 1);
    if ((local_58 == (FSlateWindowElementList *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FSlateWindowElementList *)(*pcVar2)();
      return pFVar6;
    }
  }
  FSlateWindowElementList::ResetElementList(local_58);
  pFVar10 = (this->WindowElementLists).AllocatorInstance.Data;
  if (((pFVar10 <= (FScriptContainerElement *)&local_58) &&
      ((FScriptContainerElement *)&local_58 <
       pFVar10 + (longlong)(this->WindowElementLists).ArrayMax * 0x10)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FSlateWindowElementList *)(*pcVar2)();
    return pFVar6;
  }
  iVar5 = (this->WindowElementLists).ArrayNum;
  piVar1 = &(this->WindowElementLists).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->WindowElementLists).AllocatorInstance,piVar1);
  }
  pFVar6 = local_58;
  (this->WindowElementLists).ArrayNum = iVar5 + 1;
  pFVar10 = (this->WindowElementLists).AllocatorInstance.Data + (longlong)iVar5 * 0x10;
  *(FSlateWindowElementList **)pFVar10 = local_58;
  *(TReferenceControllerBase<1> **)(pFVar10 + 8) = pTStack_50;
  if (pTStack_50 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_50->SharedReferenceCount = (atomic<int>)((int)pTStack_50->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_50);
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
LAB_142501877:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return pFVar6;
}

// ClearBuffer @ 142503d60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSlateDrawBuffer::ClearBuffer(FSlateDrawBuffer *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  TSharedRef<FSlateWindowElementList,1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  longlong lVar13;
  atomic<bool> local_res8 [8];
  undefined1 local_res10 [8];
  longlong *local_38;
  TReferenceControllerBase<1> *local_30;
  
  if (this->bIsLocked == (atomic<bool>)0x0) {
    local_res8[0] = this->bIsLocked;
    `FSlateDrawBuffer::ClearBuffer'::__l2::<lambda_1>::operator()(local_res8);
  }
  lpCriticalSection = &this->GCLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar12 = 0;
  if (0 < (this->WindowElementListsPool).ArrayNum) {
    lVar13 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar12 < (this->WindowElementListsPool).ArrayNum) {
        uVar7 = ~uVar12 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      plVar3 = *(longlong **)((this->WindowElementListsPool).AllocatorInstance.Data + lVar13);
      bVar6 = IsInGameThread();
      if (((!bVar6) && (bVar6 = IsInSlateThread(), !bVar6)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread() || IsInSlateThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Rendering\\DrawElements.h"
                             ,0xec,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (((*plVar3 == 0) || (plVar3[1] == 0)) ||
         ((*(int *)(plVar3[1] + 8) < 1 || (plVar3[2] == 0)))) {
        uVar7 = 0;
        if ((int)uVar12 < (this->WindowElementListsPool).ArrayNum) {
          uVar7 = ~uVar12 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        TArray<TSharedRef<FSlateWindowElementList,1>,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                  (&this->WindowElementListsPool,uVar12);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&(this->WindowElementListsPool).AllocatorInstance,
                   (this->WindowElementListsPool).ArrayNum,&(this->WindowElementListsPool).ArrayMax)
        ;
        uVar12 = uVar12 - 1;
        lVar13 = lVar13 + -0x10;
      }
      uVar12 = uVar12 + 1;
      lVar13 = lVar13 + 0x10;
    } while ((int)uVar12 < (this->WindowElementListsPool).ArrayNum);
  }
  iVar2 = (this->WindowElementLists).ArrayNum;
  pFVar11 = (this->WindowElementLists).AllocatorInstance.Data;
  pFVar10 = pFVar11 + (longlong)iVar2 * 0x10;
  while( true ) {
    if ((this->WindowElementLists).ArrayNum != iVar2) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TSharedRef<FSlateWindowElementList,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar11 == pFVar10) {
      piVar1 = &(this->WindowElementLists).ArrayMax;
      pTVar4 = (TSharedRef<FSlateWindowElementList,1> *)
               (this->WindowElementLists).AllocatorInstance.Data;
      iVar2 = (this->WindowElementLists).ArrayNum;
      if ((this->WindowElementLists).ArrayMax < 0) {
        DestructItems<TSharedRef<FSlateWindowElementList,1>,int>(pTVar4,iVar2);
        (this->WindowElementLists).ArrayNum = 0;
        if (*piVar1 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,0,&(this->WindowElementLists).AllocatorInstance,0,piVar1);
        }
      }
      else {
        DestructItems<TSharedRef<FSlateWindowElementList,1>,int>(pTVar4,iVar2);
        (this->WindowElementLists).ArrayNum = 0;
      }
                    /* WARNING: Could not recover jumptable at 0x00014250410a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      return;
    }
    local_30 = *(TReferenceControllerBase<1> **)(pFVar11 + 8);
    plVar3 = *(longlong **)pFVar11;
    if (local_30 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_30->SharedReferenceCount = (atomic<int>)((int)local_30->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_38 = plVar3;
    bVar6 = IsInGameThread();
    if (((!bVar6) && (bVar6 = IsInSlateThread(), !bVar6)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInGameThread() || IsInSlateThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Rendering\\DrawElements.h"
                           ,0xec,L""), bVar6)) break;
    if (((*plVar3 != 0) && (plVar3[1] != 0)) && ((0 < *(int *)(plVar3[1] + 8) && (plVar3[2] != 0))))
    {
      pFVar9 = (this->WindowElementListsPool).AllocatorInstance.Data;
      if (((pFVar9 <= (FScriptContainerElement *)&local_38) &&
          ((FScriptContainerElement *)&local_38 <
           pFVar9 + (longlong)(this->WindowElementListsPool).ArrayMax * 0x10)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar8 = (this->WindowElementListsPool).ArrayNum;
      piVar1 = &(this->WindowElementListsPool).ArrayMax;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&(this->WindowElementListsPool).AllocatorInstance,piVar1);
      }
      (this->WindowElementListsPool).ArrayNum = iVar8 + 1;
      pFVar9 = (this->WindowElementListsPool).AllocatorInstance.Data + (longlong)iVar8 * 0x10;
      *(longlong **)pFVar9 = local_38;
      *(TReferenceControllerBase<1> **)(pFVar9 + 8) = local_30;
      if (local_30 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_30->SharedReferenceCount = (atomic<int>)((int)local_30->SharedReferenceCount + 1);
        UNLOCK();
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
    pFVar11 = pFVar11 + 0x10;
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// GetReferencerName @ 14250ebb0

FString * __thiscall
FSlateDrawBuffer::GetReferencerName(FSlateDrawBuffer *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FSlateDrawBuffer for Uncached Elements");
  return __return_storage_ptr__;
}

// Lock @ 142511bc0

bool __thiscall FSlateDrawBuffer::Lock(FSlateDrawBuffer *this)

{
  bool bVar1;
  
  LOCK();
  bVar1 = this->bIsLocked == (atomic<bool>)0x0;
  if (bVar1) {
    this->bIsLocked = (atomic<bool>)0x1;
  }
  UNLOCK();
  if (!bVar1) {
    return false;
  }
  bVar1 = IsInSlateThread();
  this->bIsLockedBySlateThread = bVar1;
  return true;
}

// RemoveUnusedWindowElement @ 14251c3b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateDrawBuffer::RemoveUnusedWindowElement
          (FSlateDrawBuffer *this,TArray<SWindow_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  atomic<bool> local_res8 [8];
  
  if (this->bIsLocked == (atomic<bool>)0x0) {
    local_res8[0] = this->bIsLocked;
    `FSlateDrawBuffer::RemoveUnusedWindowElement'::__l2::<lambda_1>::operator()(local_res8);
  }
  lpCriticalSection = &this->GCLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar8 = 0;
  if (0 < (this->WindowElementLists).ArrayNum) {
    lVar9 = 0;
    do {
      uVar7 = ~uVar8 >> 0x1f;
      uVar5 = 0;
      if ((int)uVar8 < (this->WindowElementLists).ArrayNum) {
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
      plVar2 = *(longlong **)((this->WindowElementLists).AllocatorInstance.Data + lVar9);
      bVar4 = IsInGameThread();
      if (((!bVar4) && (bVar4 = IsInSlateThread(), !bVar4)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread() || IsInSlateThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Rendering\\DrawElements.h"
                             ,0xec,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (((*plVar2 != 0) && (plVar2[1] != 0)) &&
         ((0 < *(int *)(plVar2[1] + 8) && (plVar2[2] != 0)))) {
        pFVar6 = (param_1->AllocatorInstance).Data;
        pFVar1 = pFVar6 + (longlong)param_1->ArrayNum * 8;
        for (; pFVar6 != pFVar1; pFVar6 = pFVar6 + 8) {
          if (*(longlong *)pFVar6 == plVar2[2]) goto LAB_14251c5ba;
        }
      }
      uVar5 = 0;
      if ((int)uVar8 < (this->WindowElementLists).ArrayNum) {
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
      FSlateWindowElementList::ResetElementList
                (*(FSlateWindowElementList **)
                  ((this->WindowElementLists).AllocatorInstance.Data + lVar9));
      uVar5 = 0;
      if ((int)uVar8 < (this->WindowElementLists).ArrayNum) {
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
      TArray<TSharedRef<FSlateWindowElementList,1>,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                (&this->WindowElementLists,uVar8);
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,&(this->WindowElementLists).AllocatorInstance,
                 (this->WindowElementLists).ArrayNum,&(this->WindowElementLists).ArrayMax);
      uVar8 = uVar8 - 1;
      lVar9 = lVar9 + -0x10;
LAB_14251c5ba:
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 0x10;
    } while ((int)uVar8 < (this->WindowElementLists).ArrayNum);
  }
                    /* WARNING: Could not recover jumptable at 0x00014251c5ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// Unlock @ 142523740

void __thiscall FSlateDrawBuffer::Unlock(FSlateDrawBuffer *this,FTaskHandle *param_1)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  FTaskBase *pFVar3;
  code *pcVar4;
  bool bVar5;
  FTaskBase *this_00;
  FTask *pFVar6;
  undefined8 uVar7;
  
  this_00 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
            ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                        *)&UE::Tasks::Private::SmallTaskAllocator);
  if (this_00 != (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::FTaskBase(this_00,2,true);
    this_00->_padding_ =
         (longlong)
         &UE::Tasks::Private::
          TExecutableTaskBase<`FSlateDrawBuffer::Unlock'::`2'::<lambda_1>,void,void>::_vftable_;
    if (((*(ulonglong *)&(this_00->LowLevelTask).field_0x38 & 0x20) == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsCompleted()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                           ,0x1dd,L"State: %d"), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    (**(code **)(*(longlong *)&(this_00->LowLevelTask).field_0x28 + 0x18))
              (&(this_00->LowLevelTask).field_0x28,&this_00->LowLevelTask);
    *(FTaskBase **)&this_00->LowLevelTask = this_00;
    *(undefined ***)&(this_00->LowLevelTask).field_0x28 =
         &
         ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__0FTaskBase_Private_Tasks_UE__IEAAXPEB_WW4ETaskPriority_LowLevelTasks__W4EExtendedTaskPriority_45_W4ETaskFlags_45__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__Init_FTaskBase_Private_Tasks_UE__IEAAX01W4EExtendedTaskPriority_89_W4ETaskFlags_89__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    *(FTaskBase **)&(this_00->LowLevelTask).field_0x8 = this_00;
    pFVar6 = LowLevelTasks::FTask::GetActiveTask();
    uVar7 = 0;
    if (pFVar6 != (FTask *)0x0) {
      uVar7 = *(undefined8 *)&pFVar6->field_0x30;
    }
    *(undefined8 *)&(this_00->LowLevelTask).field_0x30 = uVar7;
    *(undefined8 *)&(this_00->LowLevelTask).field_0x38 = 0xc8000054242d3c00;
    this_00->ExtendedPriority = Inline;
    UE::FInheritedContextBase::CaptureInheritedContext((FInheritedContextBase *)&this_00->_padding_)
    ;
    this_00[1]._padding_ = (longlong)this;
    this_00->_padding_ =
         (longlong)
         &UE::Tasks::Private::TExecutableTask<`FSlateDrawBuffer::Unlock'::`2'::<lambda_1>_>::
          _vftable_;
  }
  pFVar3 = (param_1->Pimpl).Reference;
  if (pFVar3 != (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::AddPrerequisites(this_00,pFVar3);
  }
  UE::Tasks::Private::FTaskBase::TryLaunch(this_00,0x100);
  if (this_00 != (FTaskBase *)0x0) {
    LOCK();
    paVar1 = &this_00->RefCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<unsigned_int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x0001425238ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)this_00->_padding_)(this_00,1);
      return;
    }
  }
  return;
}

// UpdateResourceVersion @ 142524200

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSlateDrawBuffer::UpdateResourceVersion(FSlateDrawBuffer *this,uint param_1)

{
  int *piVar1;
  bool bVar2;
  undefined1 local_res8 [8];
  
  if (this->bIsLocked == (atomic<bool>)0x0) {
    `FSlateDrawBuffer::UpdateResourceVersion'::__l2::<lambda_1>::operator()(local_res8);
  }
  bVar2 = IsInGameThread();
  if ((bVar2) && (param_1 != this->ResourceVersion)) {
    DestructItems<TSharedRef<FSlateWindowElementList,1>,int>
              ((TSharedRef<FSlateWindowElementList,1> *)
               (this->WindowElementListsPool).AllocatorInstance.Data,
               (this->WindowElementListsPool).ArrayNum);
    piVar1 = &(this->WindowElementListsPool).ArrayMax;
    (this->WindowElementListsPool).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->WindowElementListsPool).AllocatorInstance,0,piVar1);
    }
    this->ResourceVersion = param_1;
  }
  return;
}

// operator() @ 15048f680

bool __thiscall `FSlateDrawBuffer::AddWindowElementList'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1467977619424149481>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1467977619424149481>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15048f6c0

bool __thiscall `FSlateDrawBuffer::ClearBuffer'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1467977619424149391>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1467977619424149391>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15048f700

bool __thiscall
`FSlateDrawBuffer::RemoveUnusedWindowElement'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1467977619424149453>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1467977619424149453>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15048f780

bool __thiscall `FSlateDrawBuffer::UpdateResourceVersion'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1467977619424149363>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1467977619424149363>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15048fa80

bool __thiscall `FSlateDrawBuffer::AddWindowElementList'::__l7::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1467977619424149469>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1467977619424149469>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

