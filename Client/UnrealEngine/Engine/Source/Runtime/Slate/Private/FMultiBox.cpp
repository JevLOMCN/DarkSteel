// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 17

// FMultiBox @ 1427b3750

FMultiBox * __thiscall
FMultiBox::FMultiBox
          (FMultiBox *this,EMultiBoxType param_1,FMultiBoxCustomization param_2,bool param_3)

{
  ISlateStyle *pIVar1;
  FName local_res8;
  
  this->bHasSearchWidget = false;
  this->bIsFocusable = true;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FMultiBox__6B_;
  *(undefined8 *)&this->ModifyBlockWidgetAfterMake = 0;
  *(undefined8 *)&(this->ModifyBlockWidgetAfterMake).field_0x8 = 0;
  *(undefined4 *)&(this->ModifyBlockWidgetAfterMake).field_0x10 = 0;
  (this->WeakToolMenu).WeakPtr = (FWeakObjectPtr)0x0;
  (this->bAllowWrapButton).bIsSet = false;
  (this->CommandLists).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CommandLists).ArrayNum = 0;
  (this->CommandLists).ArrayMax = 0;
  (this->Blocks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Blocks).ArrayNum = 0;
  (this->Blocks).ArrayMax = 0;
  pIVar1 = FAppStyle::Get();
  this->StyleSet = pIVar1;
  ::FName::FName(&this->StyleName,"ToolBar");
  this->Type = param_1;
  *(undefined8 *)&this->EditSelectionChanged = 0;
  *(undefined8 *)&(this->EditSelectionChanged).field_0x8 = 0;
  *(undefined4 *)&(this->EditSelectionChanged).field_0x10 = 0;
  this->bShouldCloseWindowAfterMenuSelection = param_3;
  this->LastSelectedCommandIndex = -1;
  if ((param_1 - SlimHorizontalToolBar & 0xfb) == 0) {
    ::FName::FName(&local_res8,"SlimToolBar");
    this->StyleName = local_res8;
  }
  return this;
}

// ~FMultiBox @ 1427b94a0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall FMultiBox::~FMultiBox(FMultiBox *this)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  FScriptContainerElement *pFVar4;
  longlong *plVar5;
  UObject *pUVar6;
  
  this->_padding_ = (longlong)&___7FMultiBox__6B_;
  pUVar6 = FWeakObjectPtr::Get(&(this->WeakToolMenu).WeakPtr);
  if (pUVar6 != (UObject *)0x0) {
    (**(code **)(*(longlong *)pUVar6 + 0x308))(pUVar6);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->EditSelectionChanged);
  pvVar3 = *(void **)&(this->EditSelectionChanged).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->EditSelectionChanged);
  DestructItems<TSharedRef<FMultiBlock_const_,1>,int>
            ((TSharedRef<FMultiBlock_const_,1> *)(this->Blocks).AllocatorInstance.Data,
             (this->Blocks).ArrayNum);
  pFVar4 = (this->Blocks).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  DestructItems<TSharedPtr<FUICommandList_const_,1>,int>
            ((TSharedPtr<FUICommandList_const_,1> *)(this->CommandLists).AllocatorInstance.Data,
             (this->CommandLists).ArrayNum);
  pFVar4 = (this->CommandLists).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ModifyBlockWidgetAfterMake);
  pvVar3 = *(void **)&(this->ModifyBlockWidgetAfterMake).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ModifyBlockWidgetAfterMake);
  plVar5 = (longlong *)this->_padding_;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  return;
}

// AddMultiBlock @ 1427c8800

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall FMultiBox::AddMultiBlock(FMultiBox *this,TSharedRef<FMultiBlock_const_,1> *param_1)

{
  int *piVar1;
  TReferenceControllerBase<1> *pTVar2;
  FUICommandList *pFVar3;
  TSharedRef<FMultiBlock_const_,1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  TSharedPtr<FUICommandList_const_,1> local_18;
  
  pTVar2 = (param_1->Object->ActionList).SharedReferenceCount.ReferenceController;
  pFVar3 = (param_1->Object->ActionList).Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (pFVar3 != (FUICommandList *)0x0) {
    local_18.Object = (param_1->Object->ActionList).Object;
    local_18.SharedReferenceCount.ReferenceController =
         (param_1->Object->ActionList).SharedReferenceCount.ReferenceController;
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    TArray<TSharedPtr<FUICommandList_const_,1>,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<TSharedPtr<FUICommandList_const_,1>_>(&this->CommandLists,&local_18);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  pTVar4 = (TSharedRef<FMultiBlock_const_,1> *)(this->Blocks).AllocatorInstance.Data;
  if ((pTVar4 <= param_1) && (param_1 < pTVar4 + (this->Blocks).ArrayMax)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar7 = (this->Blocks).ArrayNum;
  piVar1 = &(this->Blocks).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->Blocks).AllocatorInstance,piVar1);
  }
  (this->Blocks).ArrayNum = iVar7 + 1;
  pFVar8 = (this->Blocks).AllocatorInstance.Data + (longlong)iVar7 * 0x10;
  *(FMultiBlock **)pFVar8 = param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar8 + 8) = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// AddMultiBlockToFront @ 1427c8940

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
FMultiBox::AddMultiBlockToFront(FMultiBox *this,TSharedRef<FMultiBlock_const_,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FUICommandList *pFVar2;
  TSharedPtr<FUICommandList_const_,1> local_18;
  
  pTVar1 = (param_1->Object->ActionList).SharedReferenceCount.ReferenceController;
  pFVar2 = (param_1->Object->ActionList).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (pFVar2 != (FUICommandList *)0x0) {
    local_18.Object = (param_1->Object->ActionList).Object;
    local_18.SharedReferenceCount.ReferenceController =
         (param_1->Object->ActionList).SharedReferenceCount.ReferenceController;
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    TArray<TSharedPtr<FUICommandList_const_,1>,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<TSharedPtr<FUICommandList_const_,1>_>(&this->CommandLists,&local_18);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  TArray<TSharedRef<FMultiBlock_const_,1>,TSizedDefaultAllocator<32>_>::Insert
            (&this->Blocks,param_1,0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// Create @ 1427f4920

TSharedRef<FMultiBox,1> * __cdecl
FMultiBox::Create(TSharedRef<FMultiBox,1> *__return_storage_ptr__,EMultiBoxType param_1,
                 FMultiBoxCustomization param_2,bool param_3)

{
  code *pcVar1;
  bool bVar2;
  FMultiBox *pFVar3;
  ISlateStyle *pIVar4;
  TSharedRef<FMultiBox,1> *pTVar5;
  FName local_res8;
  TRawPtrProxy<FMultiBox> local_28 [2];
  
  pFVar3 = ::operator_new(0x98);
  if (pFVar3 == (FMultiBox *)0x0) {
    pFVar3 = (FMultiBox *)0x0;
  }
  else {
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = (longlong)&___7FMultiBox__6B_;
    *(undefined8 *)&pFVar3->ModifyBlockWidgetAfterMake = 0;
    *(undefined8 *)&(pFVar3->ModifyBlockWidgetAfterMake).field_0x8 = 0;
    *(undefined4 *)&(pFVar3->ModifyBlockWidgetAfterMake).field_0x10 = 0;
    (pFVar3->WeakToolMenu).WeakPtr = (FWeakObjectPtr)0x0;
    pFVar3->bHasSearchWidget = false;
    pFVar3->bIsFocusable = true;
    (pFVar3->bAllowWrapButton).bIsSet = false;
    (pFVar3->CommandLists).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar3->CommandLists).ArrayNum = 0;
    (pFVar3->CommandLists).ArrayMax = 0;
    (pFVar3->Blocks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar3->Blocks).ArrayNum = 0;
    (pFVar3->Blocks).ArrayMax = 0;
    pIVar4 = FAppStyle::Get();
    pFVar3->StyleSet = pIVar4;
    ::FName::FName(&pFVar3->StyleName,"ToolBar");
    pFVar3->Type = param_1;
    *(undefined8 *)&pFVar3->EditSelectionChanged = 0;
    *(undefined8 *)&(pFVar3->EditSelectionChanged).field_0x8 = 0;
    *(undefined4 *)&(pFVar3->EditSelectionChanged).field_0x10 = 0;
    pFVar3->bShouldCloseWindowAfterMenuSelection = param_3;
    pFVar3->LastSelectedCommandIndex = -1;
    if ((param_1 - SlimHorizontalToolBar & 0xfb) == 0) {
      ::FName::FName(&local_res8,"SlimToolBar");
      pFVar3->StyleName = local_res8;
    }
    if (((pFVar3->_padding_ != 0) && (pFVar3->_padding_ != 0)) &&
       (0 < *(int *)(pFVar3->_padding_ + 8))) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InObject || !InObject->DoesSharedInstanceExist()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x7a5,L"Trying to share an already-shared object");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TSharedRef<FMultiBox,1> *)(*pcVar1)();
        return pTVar5;
      }
    }
  }
  local_28[0].Object = pFVar3;
  TSharedRef<FMultiBox,1>::TSharedRef<FMultiBox,1><FMultiBox>(__return_storage_ptr__,local_28);
  return __return_storage_ptr__;
}

// FindBlockFromNameAndType @ 1428096f0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TSharedPtr<FMultiBlock_const_,1> * __thiscall
FMultiBox::FindBlockFromNameAndType
          (FMultiBox *this,TSharedPtr<FMultiBlock_const_,1> *__return_storage_ptr__,FName param_1,
          EMultiBlockType param_2)

{
  int iVar1;
  FMultiBlock *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Blocks).ArrayNum;
  pFVar5 = (this->Blocks).AllocatorInstance.Data;
  pFVar4 = pFVar5 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->Blocks).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedRef<FMultiBlock_const_,1>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar4) break;
    pFVar2 = *(FMultiBlock **)pFVar5;
    if ((pFVar2->ExtensionHook == param_1) && (pFVar2->Type == param_2)) {
      __return_storage_ptr__->Object = pFVar2;
      pTVar3 = *(TReferenceControllerBase<1> **)(pFVar5 + 8);
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      return __return_storage_ptr__;
    }
    pFVar5 = pFVar5 + 0x10;
  }
  __return_storage_ptr__->Object = (FMultiBlock *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetCustomizationName @ 14280f1d0

FName __thiscall FMultiBox::GetCustomizationName(FMultiBox *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetLastSelectedCommandIndex @ 142811000

int __thiscall FMultiBox::GetLastSelectedCommandIndex(FMultiBox *this)

{
  return this->LastSelectedCommandIndex;
}

// GetSectionEditBounds @ 142814560

int __thiscall FMultiBox::GetSectionEditBounds(FMultiBox *this,int param_1,int *param_2)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  UObject *pUVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  
  pUVar7 = FWeakObjectPtr::Get(&(this->WeakToolMenu).WeakPtr);
  if ((pUVar7 == (UObject *)0x0) ||
     (cVar2 = (**(code **)(*(longlong *)pUVar7 + 0x2b0))(pUVar7), cVar2 == '\0')) {
    return -1;
  }
  uVar10 = 0xffffffff;
  if (-1 < param_1) {
    lVar8 = (longlong)param_1 << 4;
    uVar9 = param_1;
    do {
      uVar4 = 0;
      if ((int)uVar9 < (this->Blocks).ArrayNum) {
        uVar4 = ~uVar9 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        iVar5 = (*pcVar1)();
        return iVar5;
      }
      if (*(char *)(*(longlong *)((this->Blocks).AllocatorInstance.Data + lVar8) + 0xa8) == '\x03')
      {
        if (uVar9 != 0) {
          uVar10 = uVar9 - 1;
          uVar4 = 0;
          if ((int)uVar10 < (this->Blocks).ArrayNum) {
            uVar4 = ~uVar10 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar1 = (code *)swi(3);
            iVar5 = (*pcVar1)();
            return iVar5;
          }
          if (*(char *)(*(longlong *)
                         ((this->Blocks).AllocatorInstance.Data +
                         (longlong)(int)uVar9 * 0x10 + -0x10) + 0xa8) == '\x05') {
            uVar4 = 0;
            if ((int)uVar10 < (this->Blocks).ArrayNum) {
              uVar4 = ~uVar10 >> 0x1f;
            }
            if ((uVar4 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar1 = (code *)swi(3);
              iVar5 = (*pcVar1)();
              return iVar5;
            }
            uVar4 = 0;
            if ((int)uVar9 < (this->Blocks).ArrayNum) {
              uVar4 = ~uVar9 >> 0x1f;
            }
            lVar8 = *(longlong *)
                     (*(longlong *)
                       ((this->Blocks).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x10 + -0x10)
                     + 0xa0);
            if ((uVar4 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar1 = (code *)swi(3);
              iVar5 = (*pcVar1)();
              return iVar5;
            }
            if (*(longlong *)
                 (*(longlong *)((this->Blocks).AllocatorInstance.Data + (ulonglong)uVar9 * 0x10) +
                 0xa0) == lVar8) break;
          }
        }
        uVar10 = uVar9;
        break;
      }
      lVar8 = lVar8 + -0x10;
      uVar9 = uVar9 - 1;
    } while (-1 < (int)uVar9);
  }
  uVar9 = param_1 + 1;
  *param_2 = (this->Blocks).ArrayNum;
  if ((int)uVar9 < (this->Blocks).ArrayNum) {
    lVar8 = (longlong)(int)uVar9 << 4;
    do {
      uVar4 = 0;
      if ((int)uVar9 < (this->Blocks).ArrayNum) {
        uVar4 = ~uVar9 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        iVar5 = (*pcVar1)();
        return iVar5;
      }
      if (*(char *)(*(longlong *)((this->Blocks).AllocatorInstance.Data + lVar8) + 0xa8) == '\x03')
      {
        if (0 < (int)uVar9) {
          uVar4 = uVar9 - 1;
          uVar6 = 0;
          if ((int)uVar4 < (this->Blocks).ArrayNum) {
            uVar6 = ~uVar4 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar1 = (code *)swi(3);
            iVar5 = (*pcVar1)();
            return iVar5;
          }
          if (*(char *)(*(longlong *)
                         ((this->Blocks).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x10) +
                       0xa8) == '\x05') {
            uVar6 = 0;
            if ((int)uVar4 < (this->Blocks).ArrayNum) {
              uVar6 = ~uVar4 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar1 = (code *)swi(3);
              iVar5 = (*pcVar1)();
              return iVar5;
            }
            lVar8 = *(longlong *)
                     (*(longlong *)
                       ((this->Blocks).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x10) + 0xa0)
            ;
            uVar6 = 0;
            if ((int)uVar9 < (this->Blocks).ArrayNum) {
              uVar6 = ~uVar9 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar1 = (code *)swi(3);
              iVar5 = (*pcVar1)();
              return iVar5;
            }
            if (*(longlong *)
                 (*(longlong *)((this->Blocks).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x10)
                 + 0xa0) == lVar8) {
              *param_2 = uVar4;
              return uVar10;
            }
          }
        }
        *param_2 = uVar9;
        return uVar10;
      }
      uVar9 = uVar9 + 1;
      lVar8 = lVar8 + 0x10;
    } while ((int)uVar9 < (this->Blocks).ArrayNum);
  }
  return uVar10;
}

// GetToolMenu @ 142815d60

UToolMenuBase * __thiscall FMultiBox::GetToolMenu(FMultiBox *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->WeakToolMenu).WeakPtr);
  return (UToolMenuBase *)pUVar1;
}

// InsertCustomMultiBlock @ 14281c050

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FMultiBox::InsertCustomMultiBlock
          (FMultiBox *this,TSharedRef<FMultiBlock_const_,1> *param_1,int param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  FMultiBox *pFVar4;
  code *pcVar5;
  char cVar6;
  bool bVar7;
  uint uVar8;
  UObject *pUVar9;
  FName FVar10;
  TSharedRef<FMultiBox,1> *pTVar11;
  FMultiBlock *pFVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  ulonglong uVar18;
  TSharedRef<FMultiBlock_const_,1> *pTVar19;
  longlong lVar20;
  int local_res8 [2];
  TSharedRef<FMultiBlock_const_,1> *local_res10;
  int local_res20 [2];
  TArray<TSharedRef<FMultiBlock_const_,1>,TSizedDefaultAllocator<32>_> local_108;
  uint local_f8;
  TSharedRef<FMultiBlock_const_,1> local_f0;
  FName local_e0;
  FMultiBox *local_d8;
  TReferenceControllerBase<1> *local_d0;
  FMultiBox *local_c8;
  TReferenceControllerBase<1> *local_c0;
  TRawPtrProxy<FMenuSeparatorBlock> local_b8;
  TRawPtrProxy<FMenuSeparatorBlock> local_b0;
  TSharedRef<FMultiBox,1> local_a8;
  TSharedRef<FMultiBlock_const_,1> local_98;
  TSharedRef<FMultiBox,1> local_88;
  TSharedPtr<FUICommandList_const_,1> local_78;
  TSharedPtr<FUICommandInfo_const_,1> local_68;
  TSharedPtr<FUICommandList_const_,1> local_58;
  TSharedPtr<FUICommandInfo_const_,1> local_48;
  
  local_res10 = param_1;
  pUVar9 = FWeakObjectPtr::Get(&(this->WeakToolMenu).WeakPtr);
  if ((pUVar9 == (UObject *)0x0) ||
     (cVar6 = (**(code **)(*(longlong *)pUVar9 + 0x2b0))(pUVar9), cVar6 == '\0'))
  goto LAB_14281c946;
  if (param_1->Object->ExtensionHook == (FName)0x0) {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5944554094252261000>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\MultiBox.cpp"
                       ,0x178,"InBlock->GetExtensionHook() != NAME_None");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    goto LAB_14281c946;
  }
  pFVar2 = (this->Blocks).AllocatorInstance.Data;
  iVar1 = (this->Blocks).ArrayNum;
  for (pFVar16 = pFVar2; pFVar16 != pFVar2 + (longlong)iVar1 * 0x10; pFVar16 = pFVar16 + 0x10) {
    if (*(FMultiBlock **)pFVar16 == param_1->Object) {
      iVar14 = (int)((longlong)pFVar16 - (longlong)pFVar2 >> 4);
      goto LAB_14281c117;
    }
  }
  iVar14 = -1;
LAB_14281c117:
  local_e0.ComparisonIndex.Value = 0;
  local_e0.Number = 0;
  FVar10 = local_e0;
  if ((-1 < param_2) && (param_2 < iVar1)) {
    if ((param_2 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_res20[0] = -1;
    uVar8 = GetSectionEditBounds(this,param_2,local_res20);
    FVar10 = local_e0;
    if ((-1 < (int)uVar8) && ((int)uVar8 < (this->Blocks).ArrayNum)) {
      uVar17 = 0;
      if ((int)uVar8 < (this->Blocks).ArrayNum) {
        uVar17 = ~uVar8 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar10 = *(FName *)(*(longlong *)
                           ((this->Blocks).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x10) +
                         0xa0);
    }
  }
  pFVar12 = param_1->Object;
  if ((pFVar12->Type != Heading) && (pFVar12->bIsPartOfHeading == false)) {
    if ((iVar14 != -1) &&
       (TArray<TSharedRef<FMultiBlock_const_,1>,TSizedDefaultAllocator<32>_>::RemoveAt
                  (&this->Blocks,iVar14,Default), iVar14 < param_2)) {
      param_2 = param_2 + -1;
    }
    TArray<TSharedRef<FMultiBlock_const_,1>,TSizedDefaultAllocator<32>_>::Insert
              (&this->Blocks,param_1,param_2);
    pUVar9 = FWeakObjectPtr::Get(&(this->WeakToolMenu).WeakPtr);
    if (pUVar9 != (UObject *)0x0) {
      pcVar5 = *(code **)(*(longlong *)pUVar9 + 0x300);
      pTVar11 = TSharedFromThis<FMultiBox,1>::AsShared
                          ((TSharedFromThis<FMultiBox,1> *)&this->_padding_,&local_a8);
      pTVar3 = (pTVar11->SharedReferenceCount).ReferenceController;
      pFVar4 = pTVar11->Object;
      if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_a8.SharedReferenceCount.ReferenceController);
      }
      else {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_a8.SharedReferenceCount.ReferenceController);
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_d8 = pFVar4;
      local_d0 = pTVar3;
      (*pcVar5)(pUVar9,&local_d8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_d0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    }
    goto LAB_14281c946;
  }
  if ((pFVar12->ExtensionHook == FVar10) || (iVar14 == -1)) goto LAB_14281c946;
  local_res8[0] = -1;
  uVar8 = GetSectionEditBounds(this,iVar14,local_res8);
  iVar1 = local_res8[0];
  uVar18 = (ulonglong)(int)uVar8;
  if ((uVar8 == 0xffffffff) || (local_res8[0] == -1)) goto LAB_14281c946;
  local_f8 = ~uVar8 >> 0x1f;
  uVar17 = 0;
  if ((int)uVar8 < (this->Blocks).ArrayNum) {
    uVar17 = local_f8;
  }
  if ((uVar17 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.ArrayMax = 0;
  uVar17 = (iVar1 - uVar8) + 1;
  if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
  }
  DestructItems<TSharedRef<FMultiBlock_const_,1>,int>((TSharedRef<FMultiBlock_const_,1> *)0x0,0);
  local_108.ArrayNum = 0;
  if ((0 < (int)uVar17) && (local_108.ArrayMax != uVar17)) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar17,&local_108.AllocatorInstance,0,&local_108.ArrayMax);
  }
  if ((int)uVar8 < iVar1) {
    lVar20 = uVar18 << 4;
    do {
      uVar15 = (uint)uVar18;
      uVar17 = 0;
      if ((int)uVar15 < (this->Blocks).ArrayNum) {
        uVar17 = ~uVar15 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pTVar19 = (TSharedRef<FMultiBlock_const_,1> *)((this->Blocks).AllocatorInstance.Data + lVar20)
      ;
      if (((local_108.AllocatorInstance.Data <= pTVar19) &&
          (pTVar19 < (TSharedRef<FMultiBlock_const_,1> *)
                     (local_108.AllocatorInstance.Data + (longlong)local_108.ArrayMax * 0x10))) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (local_108.ArrayNum == local_108.ArrayMax) {
        local_108.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&local_108.AllocatorInstance,&local_108.ArrayMax);
      }
      lVar13 = (longlong)local_108.ArrayNum;
      local_108.ArrayNum = local_108.ArrayNum + 1;
      *(FMultiBlock **)&local_108.AllocatorInstance.Data[lVar13 * 0x10].field_0x0 = pTVar19->Object;
      pTVar3 = (pTVar19->SharedReferenceCount).ReferenceController;
      *(TReferenceControllerBase<1> **)(local_108.AllocatorInstance.Data + lVar13 * 0x10 + 8) =
           pTVar3;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      uVar18 = (ulonglong)(uVar15 + 1);
      lVar20 = lVar20 + 0x10;
      param_1 = local_res10;
    } while ((int)(uVar15 + 1) < iVar1);
  }
  uVar15 = iVar1 - uVar8;
  uVar17 = 0;
  if ((int)(uVar15 + uVar8) <= (this->Blocks).ArrayNum) {
    uVar17 = ~uVar15 >> 0x1f & local_f8;
  }
  if ((uVar17 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        ), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (uVar15 != 0) {
    TArray<TSharedRef<FMultiBlock_const_,1>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
              (&this->Blocks,uVar8,uVar15);
  }
  if ((int)uVar8 < param_2) {
    param_2 = param_2 - local_108.ArrayNum;
  }
  if (param_2 == 0) {
    if ((0 < (this->Blocks).ArrayNum) &&
       (*(char *)(*(longlong *)(this->Blocks).AllocatorInstance.Data + 0xa8) == '\x03')) {
      pFVar12 = ::operator_new(0x1c8);
      if (pFVar12 == (FMultiBlock *)0x0) {
        pFVar12 = (FMultiBlock *)0x0;
      }
      else {
        if (((this->Blocks).ArrayNum < 1) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_78.Object = (FUICommandList *)0x0;
        local_78.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        local_68.Object = (FUICommandInfo *)0x0;
        local_68.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        FMultiBlock::FMultiBlock
                  (pFVar12,&local_68,&local_78,
                   *(FName *)(*(longlong *)(this->Blocks).AllocatorInstance.Data + 0xa0),Separator,
                   true);
        pFVar12->bSearchable = false;
        pFVar12->_padding_ = (longlong)&___7FMenuSeparatorBlock__6B_;
        if ((((pFVar12->_padding_ != 0) && (pFVar12->_padding_ != 0)) &&
            (0 < *(int *)(pFVar12->_padding_ + 8))) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("!InObject || !InObject->DoesSharedInstanceExist()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x7a5,L"Trying to share an already-shared object"), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      local_b8.Object = (FMenuSeparatorBlock *)pFVar12;
      TSharedRef<FMultiBlock_const_,1>::TSharedRef<FMultiBlock_const_,1><FMenuSeparatorBlock>
                (&local_f0,&local_b8);
      if (((local_108.AllocatorInstance.Data <= &local_f0) &&
          (&local_f0 <
           (TSharedRef<FMultiBlock_const_,1> *)
           (local_108.AllocatorInstance.Data + (longlong)local_108.ArrayMax * 0x10))) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (local_108.ArrayNum == local_108.ArrayMax) {
        local_108.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&local_108.AllocatorInstance,&local_108.ArrayMax);
      }
      uVar8 = local_108.ArrayNum + 1;
      *(FMultiBlock **)
       &local_108.AllocatorInstance.Data[(longlong)local_108.ArrayNum * 0x10].field_0x0 =
           local_f0.Object;
      *(TReferenceControllerBase<1> **)
       (local_108.AllocatorInstance.Data + (longlong)local_108.ArrayNum * 0x10 + 8) =
           local_f0.SharedReferenceCount.ReferenceController;
      local_98.SharedReferenceCount.ReferenceController =
           local_f0.SharedReferenceCount.ReferenceController;
      local_108.ArrayNum = uVar8;
      if (local_f0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_f0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_f0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
LAB_14281c874:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_98.SharedReferenceCount.ReferenceController);
    }
  }
  else if ((0 < local_108.ArrayNum) &&
          (*(char *)(*(longlong *)local_108.AllocatorInstance.Data + 0xa8) == '\x03')) {
    pFVar12 = ::operator_new(0x1c8);
    if (pFVar12 == (FMultiBlock *)0x0) {
      pFVar12 = (FMultiBlock *)0x0;
    }
    else {
      if ((local_108.ArrayNum < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_58.Object = (FUICommandList *)0x0;
      local_58.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      local_48.Object = (FUICommandInfo *)0x0;
      local_48.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      FMultiBlock::FMultiBlock
                (pFVar12,&local_48,&local_58,
                 *(FName *)(*(longlong *)local_108.AllocatorInstance.Data + 0xa0),Separator,true);
      pFVar12->bSearchable = false;
      pFVar12->_padding_ = (longlong)&___7FMenuSeparatorBlock__6B_;
      if ((((pFVar12->_padding_ != 0) && (pFVar12->_padding_ != 0)) &&
          (0 < *(int *)(pFVar12->_padding_ + 8))) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("!InObject || !InObject->DoesSharedInstanceExist()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x7a5,L"Trying to share an already-shared object"), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    local_b0.Object = (FMenuSeparatorBlock *)pFVar12;
    TSharedRef<FMultiBlock_const_,1>::TSharedRef<FMultiBlock_const_,1><FMenuSeparatorBlock>
              (&local_98,&local_b0);
    TArray<TSharedRef<FMultiBlock_const_,1>,TSizedDefaultAllocator<32>_>::Insert
              (&local_108,&local_98,0);
    goto LAB_14281c874;
  }
  TArray<TSharedRef<FMultiBlock_const_,1>,TSizedDefaultAllocator<32>_>::
  Insert<TSizedDefaultAllocator<32>_>(&this->Blocks,&local_108,param_2);
  if ((0 < (this->Blocks).ArrayNum) &&
     (*(char *)(*(longlong *)(this->Blocks).AllocatorInstance.Data + 0xa8) == '\x05')) {
    TArray<TSharedRef<FMultiBlock_const_,1>,TSizedDefaultAllocator<32>_>::RemoveAt
              (&this->Blocks,0,No);
  }
  pUVar9 = FWeakObjectPtr::Get(&(this->WeakToolMenu).WeakPtr);
  if (pUVar9 != (UObject *)0x0) {
    pcVar5 = *(code **)(*(longlong *)pUVar9 + 0x300);
    pTVar11 = TSharedFromThis<FMultiBox,1>::AsShared
                        ((TSharedFromThis<FMultiBox,1> *)&this->_padding_,&local_88);
    pTVar3 = (pTVar11->SharedReferenceCount).ReferenceController;
    pFVar4 = pTVar11->Object;
    if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_88.SharedReferenceCount.ReferenceController);
    }
    else {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_88.SharedReferenceCount.ReferenceController);
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_c8 = pFVar4;
    local_c0 = pTVar3;
    (*pcVar5)(pUVar9,&local_c8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_c0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  DestructItems<TSharedRef<FMultiBlock_const_,1>,int>
            ((TSharedRef<FMultiBlock_const_,1> *)local_108.AllocatorInstance.Data,local_108.ArrayNum
            );
  if ((TSharedRef<FMultiBlock_const_,1> *)local_108.AllocatorInstance.Data !=
      (TSharedRef<FMultiBlock_const_,1> *)0x0) {
    FMemory::Free(local_108.AllocatorInstance.Data);
  }
LAB_14281c946:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// IsCustomizable @ 14281d150

bool __thiscall FMultiBox::IsCustomizable(FMultiBox *this)

{
  undefined1 uVar1;
  UObject *pUVar2;
  
  pUVar2 = FWeakObjectPtr::Get(&(this->WeakToolMenu).WeakPtr);
  if (pUVar2 != (UObject *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014281d173. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*(longlong *)pUVar2 + 0x2b0))
                      (pUVar2,*(code **)(*(longlong *)pUVar2 + 0x2b0));
    return (bool)uVar1;
  }
  return false;
}

// IsInEditMode @ 14281e120

bool __thiscall FMultiBox::IsInEditMode(FMultiBox *this)

{
  char cVar1;
  UObject *pUVar2;
  
  pUVar2 = FWeakObjectPtr::Get(&(this->WeakToolMenu).WeakPtr);
  if (pUVar2 != (UObject *)0x0) {
    cVar1 = (**(code **)(*(longlong *)pUVar2 + 0x2b0))(pUVar2);
    if (cVar1 != '\0') {
      return true;
    }
  }
  return false;
}

// MakeMultiBlockFromCommand @ 14281fd50

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TSharedPtr<FMultiBlock,1> * __thiscall
FMultiBox::MakeMultiBlockFromCommand
          (FMultiBox *this,TSharedPtr<FMultiBlock,1> *__return_storage_ptr__,
          TSharedPtr<FUICommandInfo_const_,1> *param_1,bool param_2)

{
  EMultiBoxType EVar1;
  FScriptContainerElement *pFVar2;
  FUICommandList *pFVar3;
  FUICommandInfo *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  uint uVar13;
  TSharedPtr<FMultiBlock,1> *pTVar14;
  FUIAction *pFVar15;
  FMenuEntryBlock *this_00;
  FSlateIcon *pFVar16;
  FToolBarButtonBlock *this_01;
  FUICommandList *this_02;
  FUICommandList *pFVar17;
  uint uVar18;
  longlong local_288;
  FName local_278;
  undefined1 local_270 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_258;
  ForAnyElementType FStack_250;
  ulonglong local_248;
  undefined1 local_240 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_228;
  ForAnyElementType FStack_220;
  ulonglong local_218;
  undefined1 local_210 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1f8;
  ForAnyElementType FStack_1f0;
  ulonglong local_1e8;
  undefined1 local_1e0 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1c8;
  ForAnyElementType FStack_1c0;
  ulonglong local_1b8;
  TRawPtrProxy<FMenuEntryBlock> local_1b0;
  TRawPtrProxy<FToolBarButtonBlock> local_1a8;
  undefined1 local_1a0 [40];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_178;
  ForAnyElementType FStack_170;
  ulonglong local_168;
  TSharedPtr<FUICommandInfo_const_,1> local_160;
  TSharedPtr<FUICommandList_const_,1> local_150;
  TSharedPtr<FUICommandInfo_const_,1> local_140;
  TSharedPtr<FUICommandList_const_,1> local_130;
  TSharedPtr<FUICommandInfo_const_,1> local_120;
  FDestructionSentinel local_110;
  FDestructionSentinel local_f8;
  FDestructionSentinel local_e0;
  FDestructionSentinel local_c8;
  FDestructionSentinel local_b0;
  TAttribute<FText> local_98;
  FSlateIcon local_68;
  
  bVar9 = false;
  bVar8 = false;
  bVar11 = false;
  bVar7 = false;
  bVar12 = false;
  pFVar17 = (FUICommandList *)0x0;
  __return_storage_ptr__->Object = (FMultiBlock *)0x0;
  uVar18 = 0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this_02 = (FUICommandList *)0x0;
  if (0 < (this->CommandLists).ArrayNum) {
    local_288 = 0;
    do {
      uVar13 = 0;
      if ((int)uVar18 < (this->CommandLists).ArrayNum) {
        uVar13 = ~uVar18 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        pTVar14 = (TSharedPtr<FMultiBlock,1> *)(*pcVar6)();
        return pTVar14;
      }
      pFVar2 = (this->CommandLists).AllocatorInstance.Data;
      pFVar3 = *(FUICommandList **)(pFVar2 + local_288 + 8);
      this_02 = *(FUICommandList **)(pFVar2 + local_288);
      if (pFVar3 != (FUICommandList *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar3->_padding_ =
             (atomic<int>)((int)*(atomic<int> *)&pFVar3->_padding_ + 1);
        UNLOCK();
      }
      if ((this_02 == (FUICommandList *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        pTVar14 = (TSharedPtr<FMultiBlock,1> *)(*pcVar6)();
        return pTVar14;
      }
      if ((param_1->Object == (FUICommandInfo *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x408,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        pTVar14 = (TSharedPtr<FMultiBlock,1> *)(*pcVar6)();
        return pTVar14;
      }
      pFVar4 = param_1->Object;
      pTVar5 = (param_1->SharedReferenceCount).ReferenceController;
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((pFVar4 == (FUICommandInfo *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x25d,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        pTVar14 = (TSharedPtr<FMultiBlock,1> *)(*pcVar6)();
        return pTVar14;
      }
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_160.Object = pFVar4;
      local_160.SharedReferenceCount.ReferenceController = pTVar5;
      pFVar15 = FUICommandList::GetActionForCommand(this_02,&local_160);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
      if (pFVar15 != (FUIAction *)0x0) {
        if (pFVar3 != (FUICommandList *)0x0) {
          LOCK();
          *(atomic<int> *)&pFVar3->_padding_ =
               (atomic<int>)((int)*(atomic<int> *)&pFVar3->_padding_ + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar3);
        pFVar17 = pFVar3;
        break;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar3);
      uVar18 = uVar18 + 1;
      local_288 = local_288 + 0x10;
      this_02 = pFVar17;
    } while ((int)uVar18 < (this->CommandLists).ArrayNum);
  }
  if (param_2) {
    if (this_02 == (FUICommandList *)0x0) goto LAB_142820548;
  }
  else if ((this_02 == (FUICommandList *)0x0) && (0 < (this->CommandLists).ArrayNum)) {
    pFVar2 = (this->CommandLists).AllocatorInstance.Data;
    pFVar3 = *(FUICommandList **)(pFVar2 + 8);
    this_02 = *(FUICommandList **)pFVar2;
    if (pFVar3 != (FUICommandList *)0x0) {
      LOCK();
      *(int *)&pFVar3->_padding_ = (int)pFVar3->_padding_ + 1;
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar17);
    pFVar17 = pFVar3;
  }
  EVar1 = this->Type;
  if ((EVar1 == ToolBar) || (EVar1 == UniformToolBar)) {
    this_01 = ::operator_new(0x328);
    if (this_01 == (FToolBarButtonBlock *)0x0) {
      local_1a8.Object = (FToolBarButtonBlock *)0x0;
    }
    else {
      FText::FText(&local_98.Value);
      local_98.bIsSet = false;
      local_98.Getter._16_8_ = 0;
      local_98.Getter._0_8_ = 0;
      local_98.Getter._8_8_ = 0;
      FSlateIcon::FSlateIcon((FSlateIcon *)local_1a0);
      local_1a0[0x20] = false;
      local_168 = 0;
      local_178.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_170.Data = (FScriptContainerElement *)0x0;
      FText::FText((FText *)local_1e0);
      local_1e0[0x10] = false;
      local_1b8 = 0;
      local_1c8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_1c0.Data = (FScriptContainerElement *)0x0;
      FText::FText((FText *)local_210);
      local_210[0x10] = false;
      local_1e8 = 0;
      local_1f8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_1f0.Data = (FScriptContainerElement *)0x0;
      if (pFVar17 != (FUICommandList *)0x0) {
        LOCK();
        *(int *)&pFVar17->_padding_ = (int)pFVar17->_padding_ + 1;
        UNLOCK();
      }
      local_120.Object = param_1->Object;
      local_120.SharedReferenceCount.ReferenceController =
           (param_1->SharedReferenceCount).ReferenceController;
      if (local_120.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_120.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_120.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_130.Object = this_02;
      local_130.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar17;
      local_1a8.Object =
           FToolBarButtonBlock::FToolBarButtonBlock
                     (this_01,&local_120,&local_130,(TAttribute<FText> *)local_210,
                      (TAttribute<FText> *)local_1e0,(TAttribute<FSlateIcon> *)local_1a0,&local_98);
      bVar9 = true;
      bVar8 = true;
      bVar11 = true;
      if ((((local_1a8.Object != (FToolBarButtonBlock *)0x0) && ((local_1a8.Object)->_padding_ != 0)
           ) && ((local_1a8.Object)->_padding_ != 0)) &&
         ((0 < *(int *)((local_1a8.Object)->_padding_ + 8) &&
          (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                              ("!InObject || !InObject->DoesSharedInstanceExist()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x7a5,L"Trying to share an already-shared object"), bVar12)))) {
        pcVar6 = (code *)swi(3);
        pTVar14 = (TSharedPtr<FMultiBlock,1> *)(*pcVar6)();
        return pTVar14;
      }
    }
    TSharedPtr<FMultiBlock,1>::operator=<FToolBarButtonBlock>(__return_storage_ptr__,&local_1a8);
    if (bVar11) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_1f8,(FWriteAccessScope *)&local_e0);
      if (((int)local_1e8 != 0) && (FStack_1f0.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_1f0.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1f0,0,0,0x10);
        local_1e8 = local_1e8 & 0xffffffff00000000;
      }
      if (local_e0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e0.Accessor,&local_e0);
      }
      if (FStack_1f0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_1f0.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1f8.AccessDetector);
      if ((ITextData *)local_210._0_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_210._0_8_ + 0x10))();
      }
    }
    if (bVar8) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_1c8,(FWriteAccessScope *)&local_c8);
      if (((int)local_1b8 != 0) && (FStack_1c0.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_1c0.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1c0,0,0,0x10);
        local_1b8 = local_1b8 & 0xffffffff00000000;
      }
      if (local_c8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c8.Accessor,&local_c8);
      }
      if (FStack_1c0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_1c0.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1c8.AccessDetector);
      if ((ITextData *)local_1e0._0_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_1e0._0_8_ + 0x10))();
      }
    }
    if (bVar9) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_178,(FWriteAccessScope *)&local_b0);
      if (((int)local_168 != 0) && (FStack_170.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_170.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_170,0,0,0x10);
        local_168 = local_168 & 0xffffffff00000000;
      }
      if (local_b0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
      }
      if (FStack_170.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_170.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_178.AccessDetector);
    }
  }
  else if (EVar1 == Menu) {
    this_00 = ::operator_new(0x2e0);
    if (this_00 == (FMenuEntryBlock *)0x0) {
      local_1b0.Object = (FMenuEntryBlock *)0x0;
    }
    else {
      pFVar16 = FSlateIcon::FSlateIcon(&local_68);
      FText::FText((FText *)local_240);
      local_240[0x10] = false;
      local_218 = 0;
      local_228.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_220.Data = (FScriptContainerElement *)0x0;
      FText::FText((FText *)local_270);
      local_270[0x10] = false;
      local_248 = 0;
      local_258.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_250.Data = (FScriptContainerElement *)0x0;
      if (pFVar17 != (FUICommandList *)0x0) {
        LOCK();
        *(int *)&pFVar17->_padding_ = (int)pFVar17->_padding_ + 1;
        UNLOCK();
      }
      local_140.Object = param_1->Object;
      local_140.SharedReferenceCount.ReferenceController =
           (param_1->SharedReferenceCount).ReferenceController;
      if (local_140.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_140.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_140.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_278.ComparisonIndex.Value = 0;
      local_278.Number = 0;
      local_150.Object = this_02;
      local_150.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar17;
      local_1b0.Object =
           FMenuEntryBlock::FMenuEntryBlock
                     (this_00,&local_278,&local_140,&local_150,(TAttribute<FText> *)local_270,
                      (TAttribute<FText> *)local_240,pFVar16,false,true);
      bVar7 = true;
      bVar12 = true;
      if ((((local_1b0.Object != (FMenuEntryBlock *)0x0) && ((local_1b0.Object)->_padding_ != 0)) &&
          ((local_1b0.Object)->_padding_ != 0)) &&
         ((0 < *(int *)((local_1b0.Object)->_padding_ + 8) &&
          (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                              ("!InObject || !InObject->DoesSharedInstanceExist()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x7a5,L"Trying to share an already-shared object"), bVar11)))) {
        pcVar6 = (code *)swi(3);
        pTVar14 = (TSharedPtr<FMultiBlock,1> *)(*pcVar6)();
        return pTVar14;
      }
    }
    TSharedPtr<FMultiBlock,1>::operator=<FMenuEntryBlock>(__return_storage_ptr__,&local_1b0);
    if (bVar12) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_258,(FWriteAccessScope *)&local_110);
      if (((int)local_248 != 0) && (FStack_250.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_250.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_250,0,0,0x10);
        local_248 = local_248 & 0xffffffff00000000;
      }
      if (local_110.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_110.Accessor,&local_110);
      }
      if (FStack_250.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_250.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_258.AccessDetector);
      if ((ITextData *)local_270._0_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_270._0_8_ + 0x10))();
      }
    }
    if (bVar7) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_228,(FWriteAccessScope *)&local_f8);
      if (((int)local_218 != 0) && (FStack_220.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_220.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_220,0,0,0x10);
        local_218 = local_218 & 0xffffffff00000000;
      }
      if (local_f8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_f8.Accessor,&local_f8);
      }
      if (FStack_220.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_220.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_228.AccessDetector);
      if ((ITextData *)local_240._0_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_240._0_8_ + 0x10))();
      }
    }
  }
LAB_142820548:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar17);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// MakeWidget @ 1428213b0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TSharedRef<SMultiBoxWidget,1> * __thiscall
FMultiBox::MakeWidget
          (FMultiBox *this,TSharedRef<SMultiBoxWidget,1> *__return_storage_ptr__,bool param_1,
          TDelegate<void___cdecl(TSharedRef<FMultiBox,1>_const_&,TSharedRef<SMultiBoxWidget,1>_const_&),FDefaultDelegateUserPolicy>
          *param_2,TAttribute<float> *param_3)

{
  byte *pbVar1;
  float fVar2;
  SMultiBoxWidget *pSVar3;
  void *pvVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  byte bVar8;
  FArguments *pFVar9;
  TSharedRef<SMultiBoxWidget,1> *pTVar10;
  TSharedRef<FMultiBox,1> *pTVar11;
  longlong *plVar12;
  FLLMScope local_res8 [2];
  FName local_res10;
  T0RequiredArgs local_res18 [8];
  FMemScope local_res20;
  undefined1 local_310 [8];
  ForAnyElementType FStack_308;
  int local_300;
  TSlateDecl<SMultiBoxWidget,RequiredArgs::T0RequiredArgs> local_2f8;
  TSharedRef<FMultiBox,1> local_2e0;
  FDestructionSentinel local_2d0;
  FReadAccessScope local_2b8;
  FReadAccessScope local_2a0;
  TSharedRef<FMultiBox,1> local_288;
  undefined1 local_278 [528];
  undefined1 local_68 [40];
  
  pFVar9 = SMultiBoxWidget::FArguments::FArguments((FArguments *)local_278);
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res10 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res10,true);
  TSlateDecl<SMultiBoxWidget,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SMultiBoxWidget,RequiredArgs::T0RequiredArgs>
            (&local_2f8,"SMultiBoxWidget",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\MultiBox.cpp"
             ,0x1e4,local_res18);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  pSVar3 = local_2f8._Widget.Object;
  if (local_2f8._Widget.Object == (SMultiBoxWidget *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TSharedRef<SMultiBoxWidget,1> *)(*pcVar5)();
      return pTVar10;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)local_2f8._Widget.Object,(FSlateBaseNamedArgs *)pFVar9);
  SMultiBoxWidget::Construct(local_2f8._Widget.Object,pFVar9);
  if (local_2f8._Widget.Object == (SMultiBoxWidget *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TSharedRef<SMultiBoxWidget,1> *)(*pcVar5)();
      return pTVar10;
    }
  }
  if (((local_2f8._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar7 = (**(code **)((local_2f8._Widget.Object)->_padding_ + 0x228))(local_2f8._Widget.Object);
    bVar8 = 0;
    if (cVar7 != '\0') goto LAB_1428214ff;
  }
  else {
LAB_1428214ff:
    bVar8 = 0x20;
  }
  *(byte *)&(local_2f8._Widget.Object)->_padding_ =
       (byte)(local_2f8._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_2f8._Widget.Object)->_padding_ =
       (byte)(local_2f8._Widget.Object)->_padding_ | bVar8;
  if (local_2f8._Widget.Object == (SMultiBoxWidget *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TSharedRef<SMultiBoxWidget,1> *)(*pcVar5)();
      return pTVar10;
    }
  }
  pbVar1 = (byte *)((longlong)&(local_2f8._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if (local_2f8._Widget.Object == (SMultiBoxWidget *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TSharedRef<SMultiBoxWidget,1> *)(*pcVar5)();
      return pTVar10;
    }
  }
  plVar12 = (longlong *)0x0;
  __return_storage_ptr__->Object = local_2f8._Widget.Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       local_2f8._Widget.SharedReferenceCount.ReferenceController;
  local_2f8._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_2f8._Widget.Object = (SMultiBoxWidget *)0x0;
  if (pSVar3 == (SMultiBoxWidget *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TSharedRef<SMultiBoxWidget,1> *)(*pcVar5)();
      return pTVar10;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_68);
  if ((void *)local_68._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_68._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_68);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_278);
  __return_storage_ptr__->Object->bSearchable = param_1;
  pSVar3 = __return_storage_ptr__->Object;
  pTVar11 = TSharedFromThis<FMultiBox,1>::AsShared
                      ((TSharedFromThis<FMultiBox,1> *)&this->_padding_,&local_288);
  SMultiBoxWidget::SetMultiBox(pSVar3,pTVar11);
  pSVar3 = __return_storage_ptr__->Object;
  local_300 = 0;
  fVar2 = param_3->Value;
  bVar6 = param_3->bIsSet;
  local_310 = (undefined1  [8])0x0;
  FStack_308.Data = (FScriptContainerElement *)0x0;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)local_310,&param_3->Getter
            );
  (pSVar3->MaxHeight).Value = fVar2;
  (pSVar3->MaxHeight).bIsSet = bVar6;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(pSVar3->MaxHeight).Getter,
             (TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)local_310);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_310,
             (FWriteAccessScope *)&local_2d0);
  if ((local_300 != 0) && (FStack_308.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_308.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_308,0,0,0x10);
    local_300 = 0;
  }
  if (local_2d0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2d0.Accessor,&local_2d0);
  }
  if (FStack_308.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_308.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_310);
  if (param_2 !=
      (TDelegate<void___cdecl(TSharedRef<FMultiBox,1>_const_&,TSharedRef<SMultiBoxWidget,1>_const_&),FDefaultDelegateUserPolicy>
       *)0x0) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_2b8);
    if ((*(int *)&param_2->field_0x10 != 0) &&
       (*(longlong **)&param_2->field_0x8 != (longlong *)0x0)) {
      cVar7 = (**(code **)(**(longlong **)&param_2->field_0x8 + 0x38))();
      if (cVar7 != '\0') {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_2b8);
        TSharedFromThis<FMultiBox,1>::AsShared
                  ((TSharedFromThis<FMultiBox,1> *)&this->_padding_,&local_2e0);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_2a0);
        if (*(int *)&param_2->field_0x10 != 0) {
          plVar12 = *(longlong **)&param_2->field_0x8;
        }
        (**(code **)(*plVar12 + 0x60))(plVar12,&local_2e0,__return_storage_ptr__);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_2a0);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_2e0.SharedReferenceCount.ReferenceController);
        goto LAB_142821776;
      }
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_2b8);
  }
  SMultiBoxWidget::BuildMultiBoxWidget(__return_storage_ptr__->Object);
LAB_142821776:
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_3->Getter);
  pvVar4 = *(void **)&(param_3->Getter).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&param_3->Getter);
  return __return_storage_ptr__;
}

// RemoveCustomMultiBlock @ 1428324f0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FMultiBox::RemoveCustomMultiBlock(FMultiBox *this,TSharedRef<FMultiBlock_const_,1> *param_1)

{
  FScriptContainerElement *pFVar1;
  char cVar2;
  UObject *pUVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  pUVar3 = FWeakObjectPtr::Get(&(this->WeakToolMenu).WeakPtr);
  if (pUVar3 != (UObject *)0x0) {
    cVar2 = (**(code **)(*(longlong *)pUVar3 + 0x2b0))(pUVar3);
    if (cVar2 != '\0') {
      pFVar1 = (this->Blocks).AllocatorInstance.Data;
      if (pFVar1 != pFVar1 + (longlong)(this->Blocks).ArrayNum * 0x10) {
        pFVar5 = pFVar1;
        while (*(FMultiBlock **)pFVar5 != param_1->Object) {
          pFVar5 = pFVar5 + 0x10;
          if (pFVar5 == pFVar1 + (longlong)(this->Blocks).ArrayNum * 0x10) {
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((param_1->SharedReferenceCount).ReferenceController);
            return;
          }
        }
        iVar4 = (int)((longlong)pFVar5 - (longlong)pFVar1 >> 4);
        if (iVar4 != -1) {
          TArray<TSharedRef<FMultiBlock_const_,1>,TSizedDefaultAllocator<32>_>::RemoveAt
                    (&this->Blocks,iVar4,Default);
        }
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetLastSelectedCommandIndex @ 142835100

void __thiscall FMultiBox::SetLastSelectedCommandIndex(FMultiBox *this,int param_1)

{
  this->LastSelectedCommandIndex = param_1;
  return;
}

