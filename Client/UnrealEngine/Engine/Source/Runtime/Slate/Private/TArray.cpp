// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 59

// AddUniqueImpl<TSharedRef<SWindow,1>_const_&> @ 14269d200

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
TArray<TSharedRef<SWindow,1>,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<TSharedRef<SWindow,1>_const_&>
          (TArray<TSharedRef<SWindow,1>,TSizedDefaultAllocator<32>_> *this,
          TSharedRef<SWindow,1> *param_1)

{
  TSharedRef<SWindow,1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TSharedRef<SWindow,1> *pTVar6;
  FScriptContainerElement *pFVar7;
  
  pTVar1 = (TSharedRef<SWindow,1> *)(this->AllocatorInstance).Data;
  if (pTVar1 != pTVar1 + this->ArrayNum) {
    pTVar6 = pTVar1;
    do {
      if (pTVar6->Object == param_1->Object) {
        iVar5 = (int)((longlong)pTVar6 - (longlong)pTVar1 >> 4);
        if (iVar5 != -1) {
          return iVar5;
        }
        break;
      }
      pTVar6 = pTVar6 + 1;
    } while (pTVar6 != pTVar1 + this->ArrayNum);
  }
  if (((pTVar1 <= param_1) && (param_1 < pTVar1 + this->ArrayMax)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  iVar5 = this->ArrayNum;
  if (iVar5 == this->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar5;
  }
  this->ArrayNum = iVar5 + 1;
  pFVar7 = (this->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
  *(SWindow **)pFVar7 = param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar7 + 8) = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  return iVar5;
}

// AddUniqueImpl<TSharedPtr<SWindow,1>_> @ 14269d330

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
TArray<TSharedPtr<SWindow,1>,TSizedDefaultAllocator<32>_>::AddUniqueImpl<TSharedPtr<SWindow,1>_>
          (TArray<TSharedPtr<SWindow,1>,TSizedDefaultAllocator<32>_> *this,
          TSharedPtr<SWindow,1> *param_1)

{
  TSharedPtr<SWindow,1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TSharedPtr<SWindow,1> *pTVar5;
  FScriptContainerElement *pFVar6;
  
  pTVar1 = (TSharedPtr<SWindow,1> *)(this->AllocatorInstance).Data;
  if (pTVar1 != pTVar1 + this->ArrayNum) {
    pTVar5 = pTVar1;
    do {
      if (pTVar5->Object == param_1->Object) {
        iVar4 = (int)((longlong)pTVar5 - (longlong)pTVar1 >> 4);
        if (iVar4 != -1) {
          return iVar4;
        }
        break;
      }
      pTVar5 = pTVar5 + 1;
    } while (pTVar5 != pTVar1 + this->ArrayNum);
  }
  if (((pTVar1 <= param_1) && (param_1 < pTVar1 + this->ArrayMax)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  iVar4 = this->ArrayNum;
  if (iVar4 == this->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar4;
  }
  this->ArrayNum = iVar4 + 1;
  pFVar6 = (this->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
  *(SWindow **)pFVar6 = param_1->Object;
  *(TReferenceControllerBase<1> **)(pFVar6 + 8) =
       (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (SWindow *)0x0;
  return iVar4;
}

// Remove @ 1426d8380

int __thiscall
TArray<TSharedPtr<IInputProcessor,1>,TSizedDefaultAllocator<32>_>::Remove
          (TArray<TSharedPtr<IInputProcessor,1>,TSizedDefaultAllocator<32>_> *this,
          TSharedPtr<IInputProcessor,1> *param_1)

{
  TSharedPtr<IInputProcessor,1> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  pTVar1 = (TSharedPtr<IInputProcessor,1> *)(this->AllocatorInstance).Data;
  if ((pTVar1 <= param_1) && (param_1 < pTVar1 + this->ArrayMax)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  iVar5 = this->ArrayNum;
  lVar6 = (longlong)iVar5;
  if (iVar5 == 0) {
    return 0;
  }
  pFVar2 = (this->AllocatorInstance).Data;
  iVar12 = 0;
  bVar4 = *(IInputProcessor **)pFVar2 != param_1->Object;
  lVar8 = 0;
  iVar10 = 0;
  do {
    lVar8 = lVar8 + 1;
    iVar11 = iVar10 + 1;
    if (lVar8 < lVar6) {
      pFVar7 = pFVar2 + lVar8 * 0x10;
      do {
        if (bVar4 != (*(IInputProcessor **)pFVar7 != param_1->Object)) break;
        iVar11 = iVar11 + 1;
        lVar8 = lVar8 + 1;
        pFVar7 = pFVar7 + 0x10;
      } while (lVar8 < lVar6);
    }
    iVar9 = iVar11 - iVar10;
    if (bVar4 == false) {
      DestructItems<TSharedPtr<IInputProcessor,1>,int>
                ((TSharedPtr<IInputProcessor,1> *)(pFVar2 + (longlong)iVar10 * 0x10),iVar9);
    }
    else {
      if (iVar12 != iVar10) {
        memmove(pFVar2 + (longlong)iVar12 * 0x10,pFVar2 + (longlong)iVar10 * 0x10,
                (longlong)iVar9 << 4);
      }
      iVar12 = iVar12 + iVar9;
    }
    bVar4 = (bool)(bVar4 ^ 1);
    iVar10 = iVar11;
    if (lVar6 <= lVar8) {
      this->ArrayNum = iVar12;
      return iVar5 - iVar12;
    }
  } while( true );
}

// RemoveAtImpl @ 1426d9060

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TArray<TSharedPtr<FSlateUser,1>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<TSharedPtr<FSlateUser,1>,TSizedDefaultAllocator<32>_> *this,int param_1,
          int param_2)

{
  int iVar1;
  TSharedPtr<FSlateUser,1> *_Dst;
  
  _Dst = (TSharedPtr<FSlateUser,1> *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x10);
  DestructItems<TSharedPtr<FSlateUser,1>,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 4);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 1426d90e0

void __thiscall
TArray<TWeakPtr<FSlateVirtualUserHandle,1>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<TWeakPtr<FSlateVirtualUserHandle,1>,TSizedDefaultAllocator<32>_> *this,int param_1
          ,int param_2)

{
  int iVar1;
  TWeakPtr<FSlateVirtualUserHandle,1> *_Dst;
  
  _Dst = (TWeakPtr<FSlateVirtualUserHandle,1> *)
         ((this->AllocatorInstance).Data + (longlong)param_1 * 0x10);
  DestructItems<TWeakPtr<FSlateVirtualUserHandle,1>,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 4);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtSwapImpl @ 1426d9160

void __thiscall
TArray<FPopupSupport::FClickSubscriber,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
          (TArray<FPopupSupport::FClickSubscriber,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  int iVar4;
  
  pFVar2 = (this->AllocatorInstance).Data;
  _Dst = pFVar2 + (longlong)param_1 * 0x28;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(_Dst + 0x10));
  if (*(void **)(_Dst + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)(_Dst + 0x18));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)(_Dst + 0x10));
  plVar3 = *(longlong **)(_Dst + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  iVar4 = ~param_1 + this->ArrayNum;
  if (1 < iVar4) {
    iVar4 = 1;
  }
  if (iVar4 != 0) {
    memmove(_Dst,pFVar2 + (longlong)(this->ArrayNum - iVar4) * 0x28,(longlong)iVar4 * 0x28);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// RemoveAtSwapImpl @ 1426d9230

void __thiscall
TArray<FInputPreprocessorRegistration,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
          (TArray<FInputPreprocessorRegistration,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  
  pFVar1 = (this->AllocatorInstance).Data;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)(pFVar1 + (longlong)param_1 * 0x18 + 0x10));
  iVar2 = ~param_1 + this->ArrayNum;
  if (1 < iVar2) {
    iVar2 = 1;
  }
  if (iVar2 != 0) {
    memmove(pFVar1 + (longlong)param_1 * 0x18,pFVar1 + (longlong)(this->ArrayNum - iVar2) * 0x18,
            (longlong)iVar2 * 0x18);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// RemoveAtSwapImpl @ 1426d92c0

void __thiscall
TArray<TDelegate<bool___cdecl(TSharedRef<FGenericWindow,1>_const_&,enum_EWindowAction::Type),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
::RemoveAtSwapImpl(void *this,int param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode> *this_00;
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)this;
  this_00 = (TDelegateBase<FNotThreadSafeDelegateMode> *)(lVar1 + (longlong)param_1 * 0x18);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind(this_00);
  if (*(void **)&this_00->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this_00->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  iVar2 = ~param_1 + *(int *)((longlong)this + 8);
  if (1 < iVar2) {
    iVar2 = 1;
  }
  if (iVar2 != 0) {
    memmove(this_00,(void *)(lVar1 + (longlong)(*(int *)((longlong)this + 8) - iVar2) * 0x18),
            (longlong)iVar2 * 0x18);
  }
  *(int *)((longlong)this + 8) = *(int *)((longlong)this + 8) + -1;
  return;
}

// AddUniqueImpl<TSharedPtr<SWindow,1>_const_&> @ 1426e8d50

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
TArray<TSharedPtr<SWindow,1>,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<TSharedPtr<SWindow,1>_const_&>
          (TArray<TSharedPtr<SWindow,1>,TSizedDefaultAllocator<32>_> *this,
          TSharedPtr<SWindow,1> *param_1)

{
  TSharedPtr<SWindow,1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TSharedPtr<SWindow,1> *pTVar6;
  FScriptContainerElement *pFVar7;
  
  pTVar1 = (TSharedPtr<SWindow,1> *)(this->AllocatorInstance).Data;
  if (pTVar1 != pTVar1 + this->ArrayNum) {
    pTVar6 = pTVar1;
    do {
      if (pTVar6->Object == param_1->Object) {
        iVar5 = (int)((longlong)pTVar6 - (longlong)pTVar1 >> 4);
        if (iVar5 != -1) {
          return iVar5;
        }
        break;
      }
      pTVar6 = pTVar6 + 1;
    } while (pTVar6 != pTVar1 + this->ArrayNum);
  }
  if (((pTVar1 <= param_1) && (param_1 < pTVar1 + this->ArrayMax)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  iVar5 = this->ArrayNum;
  if (iVar5 == this->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar5;
  }
  this->ArrayNum = iVar5 + 1;
  pFVar7 = (this->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
  *(SWindow **)pFVar7 = param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar7 + 8) = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  return iVar5;
}

// AddUniqueImpl<TWeakPtr<FTabSpawnerEntry,1>_> @ 1426e8e80

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
TArray<TWeakPtr<FTabSpawnerEntry,1>,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<TWeakPtr<FTabSpawnerEntry,1>_>
          (TArray<TWeakPtr<FTabSpawnerEntry,1>,TSizedDefaultAllocator<32>_> *this,
          TWeakPtr<FTabSpawnerEntry,1> *param_1)

{
  TWeakPtr<FTabSpawnerEntry,1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  iVar4 = Find(this,param_1);
  if (iVar4 == -1) {
    pTVar1 = (TWeakPtr<FTabSpawnerEntry,1> *)(this->AllocatorInstance).Data;
    if ((pTVar1 <= param_1) && (param_1 < pTVar1 + this->ArrayMax)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
    }
    iVar4 = this->ArrayNum;
    if (iVar4 == this->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&this->AllocatorInstance,&this->ArrayMax);
    }
    this->ArrayNum = iVar4 + 1;
    pFVar5 = (this->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
    *(FTabSpawnerEntry **)pFVar5 = param_1->Object;
    *(TReferenceControllerBase<1> **)(pFVar5 + 8) =
         (param_1->WeakReferenceCount).ReferenceController;
    (param_1->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    param_1->Object = (FTabSpawnerEntry *)0x0;
  }
  return iVar4;
}

// AddUniqueImpl<TWeakPtr<FUICommandList,1>_> @ 1426e8f60

int __thiscall
TArray<TWeakPtr<FUICommandList,1>,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<TWeakPtr<FUICommandList,1>_>
          (TArray<TWeakPtr<FUICommandList,1>,TSizedDefaultAllocator<32>_> *this,
          TWeakPtr<FUICommandList,1> *param_1)

{
  TWeakPtr<FUICommandList,1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  iVar4 = Find(this,param_1);
  if (iVar4 == -1) {
    pTVar1 = (TWeakPtr<FUICommandList,1> *)(this->AllocatorInstance).Data;
    if ((pTVar1 <= param_1) && (param_1 < pTVar1 + this->ArrayMax)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
    }
    iVar4 = this->ArrayNum;
    if (iVar4 == this->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&this->AllocatorInstance,&this->ArrayMax);
    }
    this->ArrayNum = iVar4 + 1;
    pFVar5 = (this->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
    *(FUICommandList **)pFVar5 = param_1->Object;
    *(TReferenceControllerBase<1> **)(pFVar5 + 8) =
         (param_1->WeakReferenceCount).ReferenceController;
    (param_1->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    param_1->Object = (FUICommandList *)0x0;
  }
  return iVar4;
}

// Append<TSharedRef<SDockTab,1>,TSizedDefaultAllocator<32>_> @ 1426e9040

void __thiscall
TArray<TSharedRef<SDockTab,1>,TSizedDefaultAllocator<32>_>::
Append<TSharedRef<SDockTab,1>,TSizedDefaultAllocator<32>_>
          (TArray<TSharedRef<SDockTab,1>,TSizedDefaultAllocator<32>_> *this,
          TArray<TSharedRef<SDockTab,1>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  if (this == param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x986,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = param_1->ArrayNum;
  if (iVar1 != 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,iVar1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
    memmove((this->AllocatorInstance).Data + (longlong)iVar4 * 0x10,
            (param_1->AllocatorInstance).Data,(longlong)iVar1 << 4);
    param_1->ArrayNum = 0;
  }
  return;
}

// IndexOfByPredicate<FGlobalTabmanager::FindByTab> @ 1426f1770

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
TArray<FGlobalTabmanager::FSubTabManager,TSizedDefaultAllocator<32>_>::
IndexOfByPredicate<FGlobalTabmanager::FindByTab>
          (TArray<FGlobalTabmanager::FSubTabManager,TSizedDefaultAllocator<32>_> *this,
          FindByTab param_1)

{
  int iVar1;
  FSubTabManager *pFVar2;
  bool bVar3;
  FSubTabManager *pFVar4;
  FindByTab local_res10;
  
  pFVar2 = (FSubTabManager *)(this->AllocatorInstance).Data;
  iVar1 = this->ArrayNum;
  pFVar4 = pFVar2;
  local_res10.TabToFind = param_1.TabToFind;
  while( true ) {
    if (pFVar4 == pFVar2 + iVar1) {
      return -1;
    }
    bVar3 = FGlobalTabmanager::FindByTab::operator()(&local_res10,pFVar4);
    if (bVar3) break;
    pFVar4 = pFVar4 + 1;
  }
  return (int)((longlong)pFVar4 - (longlong)pFVar2 >> 5);
}

// TArray<FLinearColor,TSizedDefaultAllocator<32>_> @ 1426f5450

TArray<FLinearColor,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FLinearColor,TSizedDefaultAllocator<32>_>::TArray<FLinearColor,TSizedDefaultAllocator<32>_>
          (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *this,
          initializer_list<FLinearColor> *param_1)

{
  FLinearColor *_Src;
  FLinearColor *pFVar1;
  int iVar2;
  
  _Src = param_1->_First;
  pFVar1 = param_1->_Last;
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar2 = (int)((longlong)pFVar1 - (longlong)_Src >> 4);
  this->ArrayNum = iVar2;
  if (iVar2 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,4,iVar2,0,&this->AllocatorInstance,iVar2,&this->ArrayMax);
  memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar2 << 4);
  return this;
}

// Find @ 1427347b0

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
TArray<TWeakPtr<FTabSpawnerEntry,1>,TSizedDefaultAllocator<32>_>::Find
          (TArray<TWeakPtr<FTabSpawnerEntry,1>,TSizedDefaultAllocator<32>_> *this,
          TWeakPtr<FTabSpawnerEntry,1> *param_1)

{
  int iVar1;
  TWeakPtr<FTabSpawnerEntry,1> *pTVar2;
  bool bVar3;
  TWeakPtr<FTabSpawnerEntry,1> *this_00;
  
  pTVar2 = (TWeakPtr<FTabSpawnerEntry,1> *)(this->AllocatorInstance).Data;
  iVar1 = this->ArrayNum;
  this_00 = pTVar2;
  while( true ) {
    if (this_00 == pTVar2 + iVar1) {
      return -1;
    }
    bVar3 = TWeakPtr<FTabSpawnerEntry,1>::UEOpEquals<FTabSpawnerEntry>(this_00,param_1);
    if (bVar3) break;
    this_00 = this_00 + 1;
  }
  return (int)((longlong)this_00 - (longlong)pTVar2 >> 4);
}

// Find @ 142734830

int __thiscall
TArray<TWeakPtr<FUICommandList,1>,TSizedDefaultAllocator<32>_>::Find
          (TArray<TWeakPtr<FUICommandList,1>,TSizedDefaultAllocator<32>_> *this,
          TWeakPtr<FUICommandList,1> *param_1)

{
  int iVar1;
  TWeakPtr<FUICommandList,1> *pTVar2;
  bool bVar3;
  TWeakPtr<FUICommandList,1> *this_00;
  
  pTVar2 = (TWeakPtr<FUICommandList,1> *)(this->AllocatorInstance).Data;
  iVar1 = this->ArrayNum;
  this_00 = pTVar2;
  while( true ) {
    if (this_00 == pTVar2 + iVar1) {
      return -1;
    }
    bVar3 = TWeakPtr<FUICommandList,1>::UEOpEquals<FUICommandList>(this_00,param_1);
    if (bVar3) break;
    this_00 = this_00 + 1;
  }
  return (int)((longlong)this_00 - (longlong)pTVar2 >> 4);
}

// Init @ 142749120

void __thiscall
TArray<FInputChord,TSizedDefaultAllocator<32>_>::Init
          (TArray<FInputChord,TSizedDefaultAllocator<32>_> *this,FInputChord *param_1,int param_2)

{
  int *piVar1;
  FInputChord *pFVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FName *pFVar8;
  ulonglong uVar9;
  
  uVar9 = (ulonglong)(uint)param_2;
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar9);
  }
  DestructItems<FInputChord,int>((FInputChord *)(this->AllocatorInstance).Data,this->ArrayNum);
  piVar1 = &this->ArrayMax;
  this->ArrayNum = 0;
  if (*piVar1 != param_2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,param_2,&this->AllocatorInstance,0,piVar1);
  }
  if (0 < param_2) {
    do {
      pFVar2 = (FInputChord *)(this->AllocatorInstance).Data;
      if ((pFVar2 <= param_1) && (param_1 < pFVar2 + *piVar1)) {
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
      iVar6 = this->ArrayNum;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,&this->AllocatorInstance,piVar1);
      }
      this->ArrayNum = iVar6 + 1;
      pFVar8 = (FName *)((this->AllocatorInstance).Data + (longlong)iVar6 * 0x20);
      *pFVar8 = (param_1->Key).KeyName;
      pFVar8[1] = (FName)(param_1->Key).KeyDetails.Object;
      FVar3 = (FName)(param_1->Key).KeyDetails.SharedReferenceCount.ReferenceController;
      pFVar8[2] = FVar3;
      if (FVar3 != (FName)0x0) {
        LOCK();
        *(int *)((longlong)FVar3 + 8) = *(int *)((longlong)FVar3 + 8) + 1;
        UNLOCK();
      }
      uVar7 = (pFVar8[3].ComparisonIndex.Value ^ param_1->bShift) & 1 ^
              pFVar8[3].ComparisonIndex.Value;
      pFVar8[3].ComparisonIndex.Value = uVar7;
      uVar7 = (uVar7 ^ *(uint *)&param_1->field_0x18) & 2 ^ uVar7;
      pFVar8[3].ComparisonIndex.Value = uVar7;
      uVar7 = (uVar7 ^ *(uint *)&param_1->field_0x18) & 4 ^ uVar7;
      pFVar8[3].ComparisonIndex.Value = uVar7;
      pFVar8[3].ComparisonIndex.Value = (uVar7 ^ *(uint *)&param_1->field_0x18) & 8 ^ uVar7;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  return;
}

// Insert @ 142749300

int __thiscall
TArray<FTabManager::FTab,TSizedDefaultAllocator<32>_>::Insert
          (TArray<FTabManager::FTab,TSizedDefaultAllocator<32>_> *this,FTab *param_1,int param_2)

{
  FScriptContainerElement FVar1;
  FTab *pFVar2;
  code *pcVar3;
  FName FVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  
  pFVar2 = (FTab *)(this->AllocatorInstance).Data;
  if ((pFVar2 <= param_1) && (param_1 < pFVar2 + this->ArrayMax)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return iVar6;
    }
  }
  iVar6 = this->ArrayNum;
  if (iVar6 == this->ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x420,&this->AllocatorInstance,&this->ArrayMax);
  }
  pFVar7 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar6 + 1;
  lVar8 = (longlong)param_2 * 0x20;
  pFVar7 = pFVar7 + lVar8;
  memmove(pFVar7 + 0x20,pFVar7,(longlong)(iVar6 - param_2) << 5);
  pFVar7 = (this->AllocatorInstance).Data;
  FVar4 = *(FName *)&(param_1->TabId).InstanceId;
  *(FName *)(pFVar7 + lVar8) = (param_1->TabId).TabType;
  ((FName *)(pFVar7 + lVar8))[1] = FVar4;
  *(Type *)(pFVar7 + lVar8 + 0x10) = param_1->TabState;
  pFVar7[lVar8 + 0x14] = (FScriptContainerElement)param_1->SidebarLocation;
  *(float *)(pFVar7 + lVar8 + 0x18) = param_1->SidebarSizeCoefficient;
  FVar1 = (FScriptContainerElement)param_1->bPinnedInSidebar;
  pFVar7[lVar8 + 0x1e] = (FScriptContainerElement)0x0;
  pFVar7[lVar8 + 0x1c] = FVar1;
  FVar1 = (FScriptContainerElement)(param_1->bIsLockedInPlace).bIsSet;
  pFVar7[lVar8 + 0x1e] = FVar1;
  if (FVar1 != (FScriptContainerElement)0x0) {
    pFVar7[lVar8 + 0x1d] = (FScriptContainerElement)(param_1->bIsLockedInPlace).TypedValue;
  }
  return param_2;
}

// Insert @ 142749420

int __thiscall
TArray<TSharedRef<FTabManager::FLayoutNode,1>,TSizedDefaultAllocator<32>_>::Insert
          (TArray<TSharedRef<FTabManager::FLayoutNode,1>,TSizedDefaultAllocator<32>_> *this,
          TSharedRef<FTabManager::FLayoutNode,1> *param_1,int param_2)

{
  TSharedRef<FTabManager::FLayoutNode,1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  
  pTVar1 = (TSharedRef<FTabManager::FLayoutNode,1> *)(this->AllocatorInstance).Data;
  if ((pTVar1 <= param_1) && (param_1 < pTVar1 + this->ArrayMax)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  iVar5 = this->ArrayNum;
  if (iVar5 == this->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&this->AllocatorInstance,&this->ArrayMax);
  }
  pFVar6 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar5 + 1;
  lVar7 = (longlong)param_2 * 0x10;
  pFVar6 = pFVar6 + lVar7;
  memmove(pFVar6 + 0x10,pFVar6,(longlong)(iVar5 - param_2) << 4);
  pFVar6 = (this->AllocatorInstance).Data;
  *(FLayoutNode **)(pFVar6 + lVar7) = param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar6 + lVar7 + 8) = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  return param_2;
}

// InsertUninitializedImpl @ 142749ad0

void __thiscall
TArray<FTabManager::FTab,TSizedDefaultAllocator<32>_>::InsertUninitializedImpl
          (TArray<FTabManager::FTab,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  iVar1 = this->ArrayNum;
  if (iVar1 == this->ArrayMax) {
    iVar1 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x420,&this->AllocatorInstance,&this->ArrayMax);
  }
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 0x20;
  this->ArrayNum = iVar1 + 1;
  memmove(_Src + 0x20,_Src,(longlong)(iVar1 - param_1) << 5);
  return;
}

// Remove @ 14277ab10

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
TArray<TSharedRef<STabDrawer,1>,TSizedDefaultAllocator<32>_>::Remove
          (TArray<TSharedRef<STabDrawer,1>,TSizedDefaultAllocator<32>_> *this,
          TSharedRef<STabDrawer,1> *param_1)

{
  TSharedRef<STabDrawer,1> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  pTVar1 = (TSharedRef<STabDrawer,1> *)(this->AllocatorInstance).Data;
  if ((pTVar1 <= param_1) && (param_1 < pTVar1 + this->ArrayMax)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  iVar5 = this->ArrayNum;
  lVar6 = (longlong)iVar5;
  if (iVar5 == 0) {
    return 0;
  }
  pFVar2 = (this->AllocatorInstance).Data;
  iVar12 = 0;
  bVar4 = *(STabDrawer **)pFVar2 != param_1->Object;
  lVar8 = 0;
  iVar10 = 0;
  do {
    lVar8 = lVar8 + 1;
    iVar11 = iVar10 + 1;
    if (lVar8 < lVar6) {
      pFVar7 = pFVar2 + lVar8 * 0x10;
      do {
        if (bVar4 != (*(STabDrawer **)pFVar7 != param_1->Object)) break;
        iVar11 = iVar11 + 1;
        lVar8 = lVar8 + 1;
        pFVar7 = pFVar7 + 0x10;
      } while (lVar8 < lVar6);
    }
    iVar9 = iVar11 - iVar10;
    if (bVar4 == false) {
      DestructItems<TSharedRef<STabDrawer,1>,int>
                ((TSharedRef<STabDrawer,1> *)(pFVar2 + (longlong)iVar10 * 0x10),iVar9);
    }
    else {
      if (iVar12 != iVar10) {
        memmove(pFVar2 + (longlong)iVar12 * 0x10,pFVar2 + (longlong)iVar10 * 0x10,
                (longlong)iVar9 << 4);
      }
      iVar12 = iVar12 + iVar9;
    }
    bVar4 = (bool)(bVar4 ^ 1);
    iVar10 = iVar11;
    if (lVar6 <= lVar8) {
      this->ArrayNum = iVar12;
      return iVar5 - iVar12;
    }
  } while( true );
}

// RemoveAt @ 14277b4d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FTabManager::FTab,TSizedDefaultAllocator<32>_>::RemoveAt
          (TArray<FTabManager::FTab,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FScriptContainerElement *_Dst;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x20;
  iVar4 = this->ArrayNum + ~param_1;
  if (iVar4 != 0) {
    memmove(_Dst,_Dst + 0x20,(longlong)iVar4 << 5);
  }
  iVar4 = this->ArrayNum + -1;
  this->ArrayNum = iVar4;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,4,&this->AllocatorInstance,iVar4,&this->ArrayMax);
  }
  return;
}

// AddUniqueImpl<TSharedPtr<FUICommandList_const_,1>_> @ 142797b30

int __thiscall
TArray<TSharedPtr<FUICommandList_const_,1>,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<TSharedPtr<FUICommandList_const_,1>_>
          (TArray<TSharedPtr<FUICommandList_const_,1>,TSizedDefaultAllocator<32>_> *this,
          TSharedPtr<FUICommandList_const_,1> *param_1)

{
  TSharedPtr<FUICommandList_const_,1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TSharedPtr<FUICommandList_const_,1> *pTVar5;
  FScriptContainerElement *pFVar6;
  
  pTVar1 = (TSharedPtr<FUICommandList_const_,1> *)(this->AllocatorInstance).Data;
  if (pTVar1 != pTVar1 + this->ArrayNum) {
    pTVar5 = pTVar1;
    do {
      if (pTVar5->Object == param_1->Object) {
        iVar4 = (int)((longlong)pTVar5 - (longlong)pTVar1 >> 4);
        if (iVar4 != -1) {
          return iVar4;
        }
        break;
      }
      pTVar5 = pTVar5 + 1;
    } while (pTVar5 != pTVar1 + this->ArrayNum);
  }
  if (((pTVar1 <= param_1) && (param_1 < pTVar1 + this->ArrayMax)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  iVar4 = this->ArrayNum;
  if (iVar4 == this->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar4;
  }
  this->ArrayNum = iVar4 + 1;
  pFVar6 = (this->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
  *(FUICommandList **)pFVar6 = param_1->Object;
  *(TReferenceControllerBase<1> **)(pFVar6 + 8) =
       (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (FUICommandList *)0x0;
  return iVar4;
}

// CopyToEmpty<FText,int> @ 14279aee0

void __thiscall
TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
          (TArray<FText,TSizedDefaultAllocator<32>_> *this,FText *param_1,int param_2,int param_3)

{
  this->ArrayNum = param_2;
  if ((param_2 == 0) && (param_3 == 0)) {
    this->ArrayMax = 0;
    return;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,param_2,param_3,&this->AllocatorInstance,param_2,&this->ArrayMax);
  ConstructItems<FText,FText,int>((this->AllocatorInstance).Data,param_1,param_2);
  return;
}

// Insert<TSizedDefaultAllocator<32>_> @ 1427a3070

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

int __thiscall
TArray<TSharedRef<FMultiBlock_const_,1>,TSizedDefaultAllocator<32>_>::
Insert<TSizedDefaultAllocator<32>_>
          (TArray<TSharedRef<FMultiBlock_const_,1>,TSizedDefaultAllocator<32>_> *this,
          TArray<TSharedRef<FMultiBlock_const_,1>,TSizedDefaultAllocator<32>_> *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  
  if (this == param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(const void*)this != (const void*)&Items",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x767,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  iVar3 = param_1->ArrayNum;
  iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,iVar3,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  _Src = (this->AllocatorInstance).Data + (longlong)param_2 * 0x10;
  memmove(_Src + (longlong)iVar3 * 0x10,_Src,(longlong)(iVar4 - param_2) << 4);
  ConstructItems<TSharedRef<FMultiBlock_const_,1>,TSharedRef<FMultiBlock_const_,1>,int>
            ((this->AllocatorInstance).Data + (longlong)param_2 * 0x10,
             (TSharedRef<FMultiBlock_const_,1> *)(param_1->AllocatorInstance).Data,iVar3);
  return param_2;
}

// ~TArray<SHorizontalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_> @ 1427b6df0

void __thiscall
TArray<SHorizontalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>::
~TArray<SHorizontalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>
          (TArray<SHorizontalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)(this->AllocatorInstance).Data,this->ArrayNum);
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator= @ 1427bae30

TArray<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,TSizedDefaultAllocator<32>_> *
__thiscall
TArray<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,TSizedDefaultAllocator<32>_>::operator=
          (TArray<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,TSizedDefaultAllocator<32>_>
           *this,TArray<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,TSizedDefaultAllocator<32>_>
                 *param_1)

{
  int *piVar1;
  int iVar2;
  FBlock *pFVar3;
  
  if (this != param_1) {
    DestructItems<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,int>
              ((FBlock *)(this->AllocatorInstance).Data,this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pFVar3 = (FBlock *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x78,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,int>
              ((this->AllocatorInstance).Data,pFVar3,iVar2);
  }
  return this;
}

// operator= @ 1427baed0

TArray<TSharedPtr<SWidget,1>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<TSharedPtr<SWidget,1>,TSizedDefaultAllocator<32>_>::operator=
          (TArray<TSharedPtr<SWidget,1>,TSizedDefaultAllocator<32>_> *this,
          TArray<TSharedPtr<SWidget,1>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  TSharedPtr<SWidget,1> *pTVar3;
  
  if (this != param_1) {
    DestructItems<TSharedPtr<SWidget,1>,int>
              ((TSharedPtr<SWidget,1> *)(this->AllocatorInstance).Data,this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pTVar3 = (TSharedPtr<SWidget,1> *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<TSharedPtr<SWidget,1>,TSharedPtr<SWidget,1>,int>
              ((this->AllocatorInstance).Data,pTVar3,iVar2);
  }
  return this;
}

// Find @ 142809260

int __thiscall
TArray<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,TSizedDefaultAllocator<32>_>::Find
          (TArray<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,TSizedDefaultAllocator<32>_>
           *this,FBlock *param_1)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 0x78) {
    pFVar3 = pFVar1;
    do {
      if (*(int *)pFVar3 == param_1->SequentialIndex) {
        lVar2 = SUB168(SEXT816(-0x7777777777777777) * SEXT816((longlong)pFVar3 - (longlong)pFVar1),8
                      ) + ((longlong)pFVar3 - (longlong)pFVar1);
        return (int)(lVar2 >> 6) - (int)(lVar2 >> 0x3f);
      }
      pFVar3 = pFVar3 + 0x78;
    } while (pFVar3 != pFVar1 + (longlong)this->ArrayNum * 0x78);
  }
  return -1;
}

// Insert @ 14281be50

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

int __thiscall
TArray<TSharedRef<FMultiBlock_const_,1>,TSizedDefaultAllocator<32>_>::Insert
          (TArray<TSharedRef<FMultiBlock_const_,1>,TSizedDefaultAllocator<32>_> *this,
          TSharedRef<FMultiBlock_const_,1> *param_1,int param_2)

{
  TSharedRef<FMultiBlock_const_,1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  
  pTVar1 = (TSharedRef<FMultiBlock_const_,1> *)(this->AllocatorInstance).Data;
  if ((pTVar1 <= param_1) && (param_1 < pTVar1 + this->ArrayMax)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  iVar5 = this->ArrayNum;
  if (iVar5 == this->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&this->AllocatorInstance,&this->ArrayMax);
  }
  pFVar6 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar5 + 1;
  lVar7 = (longlong)param_2 * 0x10;
  pFVar6 = pFVar6 + lVar7;
  memmove(pFVar6 + 0x10,pFVar6,(longlong)(iVar5 - param_2) << 4);
  pFVar6 = (this->AllocatorInstance).Data;
  *(FMultiBlock **)(pFVar6 + lVar7) = param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar6 + lVar7 + 8) = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  return param_2;
}

// Insert @ 14281bf50

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

int __thiscall
TArray<TSharedRef<FMultiBlock_const_,1>,TSizedDefaultAllocator<32>_>::Insert
          (TArray<TSharedRef<FMultiBlock_const_,1>,TSizedDefaultAllocator<32>_> *this,
          TSharedRef<FMultiBlock_const_,1> *param_1,int param_2)

{
  TSharedRef<FMultiBlock_const_,1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  
  pTVar1 = (TSharedRef<FMultiBlock_const_,1> *)(this->AllocatorInstance).Data;
  if ((pTVar1 <= param_1) && (param_1 < pTVar1 + this->ArrayMax)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  iVar5 = this->ArrayNum;
  if (iVar5 == this->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&this->AllocatorInstance,&this->ArrayMax);
  }
  pFVar6 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar5 + 1;
  lVar7 = (longlong)param_2 * 0x10;
  pFVar6 = pFVar6 + lVar7;
  memmove(pFVar6 + 0x10,pFVar6,(longlong)(iVar5 - param_2) << 4);
  pFVar6 = (this->AllocatorInstance).Data;
  *(FMultiBlock **)(pFVar6 + lVar7) = param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar6 + lVar7 + 8) = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  return param_2;
}

// RemoveAt @ 142832020

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,TSizedDefaultAllocator<32>_>::RemoveAt
          (TArray<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,TSizedDefaultAllocator<32>_>
           *this,int param_1,EAllowShrinking param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *_Dst;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x78;
  if (*(void **)(_Dst + 0x68) != (void *)0x0) {
    FMemory::Free(*(void **)(_Dst + 0x68));
  }
  iVar4 = this->ArrayNum + ~param_1;
  if (iVar4 != 0) {
    memmove(_Dst,_Dst + 0x78,(longlong)iVar4 * 0x78);
  }
  iVar4 = this->ArrayNum + -1;
  this->ArrayNum = iVar4;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x78,8,&this->AllocatorInstance,iVar4,&this->ArrayMax);
  }
  return;
}

// RemoveAt @ 142832100

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<TSharedRef<FMultiBlock_const_,1>,TSizedDefaultAllocator<32>_>::RemoveAt
          (TArray<TSharedRef<FMultiBlock_const_,1>,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *_Dst;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x10;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)(_Dst + 8));
  iVar4 = this->ArrayNum + ~param_1;
  if (iVar4 != 0) {
    memmove(_Dst,_Dst + 0x10,(longlong)iVar4 << 4);
  }
  iVar4 = this->ArrayNum + -1;
  this->ArrayNum = iVar4;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,&this->AllocatorInstance,iVar4,&this->ArrayMax);
  }
  return;
}

// RemoveAtImpl @ 1428321e0

void __thiscall
TArray<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,TSizedDefaultAllocator<32>_>::
RemoveAtImpl(TArray<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,TSizedDefaultAllocator<32>_>
             *this,int param_1,int param_2)

{
  int iVar1;
  FBlock *_Dst;
  
  _Dst = (FBlock *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x78);
  DestructItems<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x78);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 142832250

void __thiscall
TArray<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlockLine,TSizedDefaultAllocator<32>_>::
RemoveAtImpl(TArray<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlockLine,TSizedDefaultAllocator<32>_>
             *this,int param_1,int param_2)

{
  FBlockLine *_Dst;
  int iVar1;
  
  _Dst = (FBlockLine *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x28);
  DestructItems<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlockLine,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x28);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 1428322d0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
TArray<UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy,TSizedDefaultAllocator<32>_>::
RemoveAtImpl(TArray<UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy,TSizedDefaultAllocator<32>_>
             *this,int param_1,int param_2)

{
  int iVar1;
  FSlotProxy *_Dst;
  
  _Dst = (FSlotProxy *)((this->AllocatorInstance).Data + (longlong)param_1 * 0xd0);
  DestructItems<UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0xd0);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 142832350

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
TArray<TSharedRef<FMultiBlock_const_,1>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<TSharedRef<FMultiBlock_const_,1>,TSizedDefaultAllocator<32>_> *this,int param_1,
          int param_2)

{
  int iVar1;
  TSharedRef<FMultiBlock_const_,1> *_Dst;
  
  _Dst = (TSharedRef<FMultiBlock_const_,1> *)
         ((this->AllocatorInstance).Data + (longlong)param_1 * 0x10);
  DestructItems<TSharedRef<FMultiBlock_const_,1>,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 4);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// SetNum @ 142835230

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,TSizedDefaultAllocator<32>_>
           *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar2 = *piVar1;
  if (iVar2 < param_1) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x78,8,param_1 - iVar2,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,int>
              ((this->AllocatorInstance).Data + (longlong)iVar5 * 0x78,param_1 - iVar2);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar2) {
      uVar6 = iVar2 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((uVar6 != 0) && (RemoveAtImpl(this,param_1,uVar6), param_2 == Default)) {
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x78,8,&this->AllocatorInstance,*piVar1,&this->ArrayMax);
      }
    }
  }
  return;
}

// SetNum @ 142835360

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlockLine,TSizedDefaultAllocator<32>_>::
SetNum(TArray<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlockLine,TSizedDefaultAllocator<32>_>
       *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar2 = *piVar1;
  if (iVar2 < param_1) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,param_1 - iVar2,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlockLine,int>
              ((this->AllocatorInstance).Data + (longlong)iVar5 * 0x28,param_1 - iVar2);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar2) {
      uVar6 = iVar2 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((uVar6 != 0) && (RemoveAtImpl(this,param_1,uVar6), param_2 == Default)) {
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,&this->AllocatorInstance,*piVar1,&this->ArrayMax);
      }
    }
  }
  return;
}

// SetNum @ 142835490

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy,TSizedDefaultAllocator<32>_>::
SetNum(TArray<UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy,TSizedDefaultAllocator<32>_>
       *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar2 = *piVar1;
  if (iVar2 < param_1) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xd0,8,param_1 - iVar2,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy,int>
              ((this->AllocatorInstance).Data + (longlong)iVar5 * 0xd0,param_1 - iVar2);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar2) {
      uVar6 = iVar2 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((uVar6 != 0) && (RemoveAtImpl(this,param_1,uVar6), param_2 == Default)) {
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xd0,8,&this->AllocatorInstance,*piVar1,&this->ArrayMax);
      }
    }
  }
  return;
}

// Insert @ 142880030

int __thiscall
TArray<FTextRunRenderer,TSizedDefaultAllocator<32>_>::Insert
          (TArray<FTextRunRenderer,TSizedDefaultAllocator<32>_> *this,FTextRunRenderer *param_1,
          int param_2)

{
  FTextRunRenderer *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  
  pFVar1 = (FTextRunRenderer *)(this->AllocatorInstance).Data;
  if ((pFVar1 <= param_1) && (param_1 < pFVar1 + this->ArrayMax)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  iVar5 = this->ArrayNum;
  if (iVar5 == this->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&this->AllocatorInstance,&this->ArrayMax);
  }
  pFVar6 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar5 + 1;
  pFVar6 = pFVar6 + (longlong)param_2 * 0x20;
  memmove(pFVar6 + 0x20,pFVar6,(longlong)(iVar5 - param_2) << 5);
  pFVar6 = (this->AllocatorInstance).Data + (longlong)param_2 * 0x20;
  *(int *)pFVar6 = param_1->LineIndex;
  *(FTextRange *)(pFVar6 + 4) = param_1->Range;
  *(IRunRenderer **)(pFVar6 + 0x10) = (param_1->Renderer).Object;
  pTVar2 = (param_1->Renderer).SharedReferenceCount.ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar6 + 0x18) = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  return param_2;
}

// Insert @ 142880130

int __thiscall
TArray<FTextLayout::FRunModel,TSizedDefaultAllocator<32>_>::Insert
          (TArray<FTextLayout::FRunModel,TSizedDefaultAllocator<32>_> *this,FRunModel *param_1,
          int param_2)

{
  FRunModel *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  
  pFVar1 = (FRunModel *)(this->AllocatorInstance).Data;
  if ((pFVar1 <= param_1) && (param_1 < pFVar1 + this->ArrayMax)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  iVar5 = this->ArrayNum;
  if (iVar5 == this->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&this->AllocatorInstance,&this->ArrayMax);
  }
  pFVar6 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar5 + 1;
  pFVar6 = pFVar6 + (longlong)param_2 * 0x30;
  memmove(pFVar6 + 0x30,pFVar6,(longlong)(iVar5 - param_2) * 0x30);
  pFVar6 = (this->AllocatorInstance).Data + (longlong)param_2 * 0x30;
  *(IRun **)pFVar6 = (param_1->Run).Object;
  pTVar2 = (param_1->Run).SharedReferenceCount.ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar6 + 8) = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  *(undefined8 *)(pFVar6 + 0x10) = 0;
  *(FScriptContainerElement **)(pFVar6 + 0x10) = (param_1->MeasuredRanges).AllocatorInstance.Data;
  (param_1->MeasuredRanges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar6 + 0x18) = (param_1->MeasuredRanges).ArrayNum;
  *(int *)(pFVar6 + 0x1c) = (param_1->MeasuredRanges).ArrayMax;
  (param_1->MeasuredRanges).ArrayNum = 0;
  (param_1->MeasuredRanges).ArrayMax = 0;
  *(undefined8 *)(pFVar6 + 0x20) = 0;
  *(FScriptContainerElement **)(pFVar6 + 0x20) =
       (param_1->MeasuredRangeSizes).AllocatorInstance.Data;
  (param_1->MeasuredRangeSizes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar6 + 0x28) = (param_1->MeasuredRangeSizes).ArrayNum;
  *(int *)(pFVar6 + 0x2c) = (param_1->MeasuredRangeSizes).ArrayMax;
  (param_1->MeasuredRangeSizes).ArrayNum = 0;
  (param_1->MeasuredRangeSizes).ArrayMax = 0;
  return param_2;
}

// RemoveAt @ 142893b90

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
TArray<FTextLayout::FLineModel,TSizedDefaultAllocator<32>_>::RemoveAt
          (TArray<FTextLayout::FLineModel,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FLineModel *this_00;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = (FLineModel *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x70);
  FTextLayout::FLineModel::~FLineModel(this_00);
  iVar4 = this->ArrayNum + ~param_1;
  if (iVar4 != 0) {
    memmove(this_00,this_00 + 1,(longlong)iVar4 * 0x70);
  }
  iVar4 = this->ArrayNum + -1;
  this->ArrayNum = iVar4;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x70,8,&this->AllocatorInstance,iVar4,&this->ArrayMax);
  }
  return;
}

// RemoveAt @ 142893c70

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FTextLayout::FRunModel,TSizedDefaultAllocator<32>_>::RemoveAt
          (TArray<FTextLayout::FRunModel,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *_Dst;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x30;
  if (*(void **)(_Dst + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)(_Dst + 0x20));
  }
  if (*(void **)(_Dst + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)(_Dst + 0x10));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)(_Dst + 8));
  iVar4 = this->ArrayNum + ~param_1;
  if (iVar4 != 0) {
    memmove(_Dst,_Dst + 0x30,(longlong)iVar4 * 0x30);
  }
  iVar4 = this->ArrayNum + -1;
  this->ArrayNum = iVar4;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,&this->AllocatorInstance,iVar4,&this->ArrayMax);
  }
  return;
}

// ~TArray<SVerticalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_> @ 1428bf2d0

void __thiscall
TArray<SVerticalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>::
~TArray<SVerticalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>
          (TArray<SVerticalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)(this->AllocatorInstance).Data,this->ArrayNum);
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator= @ 1428c1e60

TArray<TAttribute<float>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<TAttribute<float>,TSizedDefaultAllocator<32>_>::operator=
          (TArray<TAttribute<float>,TSizedDefaultAllocator<32>_> *this,
          TArray<TAttribute<float>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  TAttribute<float> *pTVar3;
  
  if (this != param_1) {
    DestructItems<TAttribute<float>,int>
              ((TAttribute<float> *)(this->AllocatorInstance).Data,this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pTVar3 = (TAttribute<float> *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<TAttribute<float>,TAttribute<float>,int>
              ((this->AllocatorInstance).Data,pTVar3,iVar2);
  }
  return this;
}

// operator= @ 1428c1f00

TArray<TSharedPtr<FString,1>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<TSharedPtr<FString,1>,TSizedDefaultAllocator<32>_>::operator=
          (TArray<TSharedPtr<FString,1>,TSizedDefaultAllocator<32>_> *this,
          TArray<TSharedPtr<FString,1>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  TSharedPtr<FString,1> *pTVar3;
  
  if (this != param_1) {
    DestructItems<TSharedPtr<FString,1>,int>
              ((TSharedPtr<FString,1> *)(this->AllocatorInstance).Data,this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pTVar3 = (TSharedPtr<FString,1> *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<TSharedPtr<FString,1>,TSharedPtr<FString,1>,int>
              ((this->AllocatorInstance).Data,pTVar3,iVar2);
  }
  return this;
}

// AddZeroed @ 1428d2160

int __thiscall
TArray<float,TSizedDefaultAllocator<32>_>::AddZeroed
          (TArray<float,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,param_1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  memset((this->AllocatorInstance).Data + (longlong)iVar1 * 4,0,(longlong)param_1 << 2);
  return iVar1;
}

// Insert @ 142951f70

int __thiscall
TArray<TUniquePtr<SConstraintCanvas::FSlot,TDefaultDelete<SConstraintCanvas::FSlot>_>,TSizedDefaultAllocator<32>_>
::Insert(TArray<TUniquePtr<SConstraintCanvas::FSlot,TDefaultDelete<SConstraintCanvas::FSlot>_>,TSizedDefaultAllocator<32>_>
         *this,TUniquePtr<SConstraintCanvas::FSlot,TDefaultDelete<SConstraintCanvas::FSlot>_>
               *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  
  pFVar4 = (this->AllocatorInstance).Data;
  if ((pFVar4 <= param_1) && (param_1 < pFVar4 + (longlong)this->ArrayMax * 8)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  iVar3 = this->ArrayNum;
  if (iVar3 == this->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
  }
  pFVar4 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar3 + 1;
  pFVar4 = pFVar4 + (longlong)param_2 * 8;
  memmove(pFVar4 + 8,pFVar4,(longlong)(iVar3 - param_2) << 3);
  *(FSlot **)((this->AllocatorInstance).Data + (longlong)param_2 * 8) = param_1->Ptr;
  param_1->Ptr = (FSlot *)0x0;
  return param_2;
}

// RemoveAt @ 1429896d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<TUniquePtr<SConstraintCanvas::FSlot,TDefaultDelete<SConstraintCanvas::FSlot>_>,TSizedDefaultAllocator<32>_>
::RemoveAt(TArray<TUniquePtr<SConstraintCanvas::FSlot,TDefaultDelete<SConstraintCanvas::FSlot>_>,TSizedDefaultAllocator<32>_>
           *this,int param_1,EAllowShrinking param_2)

{
  FScriptContainerElement *pFVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  
  uVar5 = 0;
  if (param_1 < this->ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar1 = (this->AllocatorInstance).Data;
  puVar2 = *(undefined8 **)(pFVar1 + (longlong)param_1 * 8);
  pFVar1 = pFVar1 + (longlong)param_1 * 8;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  iVar6 = this->ArrayNum + ~param_1;
  if (iVar6 != 0) {
    memmove(pFVar1,pFVar1 + 8,(longlong)iVar6 << 3);
  }
  iVar6 = this->ArrayNum + -1;
  this->ArrayNum = iVar6;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,&this->AllocatorInstance,iVar6,&this->ArrayMax);
  }
  return;
}

// RemoveAt @ 1429897c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<TUniquePtr<SSplitter::FSlot,TDefaultDelete<SSplitter::FSlot>_>,TSizedDefaultAllocator<32>_>::
RemoveAt(TArray<TUniquePtr<SSplitter::FSlot,TDefaultDelete<SSplitter::FSlot>_>,TSizedDefaultAllocator<32>_>
         *this,int param_1,EAllowShrinking param_2)

{
  FScriptContainerElement *pFVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  
  uVar5 = 0;
  if (param_1 < this->ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar1 = (this->AllocatorInstance).Data;
  puVar2 = *(undefined8 **)(pFVar1 + (longlong)param_1 * 8);
  pFVar1 = pFVar1 + (longlong)param_1 * 8;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  iVar6 = this->ArrayNum + ~param_1;
  if (iVar6 != 0) {
    memmove(pFVar1,pFVar1 + 8,(longlong)iVar6 << 3);
  }
  iVar6 = this->ArrayNum + -1;
  this->ArrayNum = iVar6;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,&this->AllocatorInstance,iVar6,&this->ArrayMax);
  }
  return;
}

// RemoveAtSwapImpl @ 142989960

void __thiscall
TArray<TWeakPtr<IMenu,1>,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
          (TArray<TWeakPtr<IMenu,1>,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  int iVar4;
  FScriptContainerElement *_Dst;
  
  pFVar2 = (this->AllocatorInstance).Data;
  _Dst = pFVar2 + (longlong)param_1 * 0x10;
  plVar3 = *(longlong **)(_Dst + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  iVar4 = ~param_1 + this->ArrayNum;
  if (1 < iVar4) {
    iVar4 = 1;
  }
  if (iVar4 != 0) {
    memmove(_Dst,pFVar2 + (longlong)(this->ArrayNum - iVar4) * 0x10,(longlong)iVar4 << 4);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// operator=<TSharedRef<ITextDecorator,1>,int> @ 1429b1b90

TArray<TSharedRef<ITextDecorator,1>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<TSharedRef<ITextDecorator,1>,TSizedDefaultAllocator<32>_>::
operator=<TSharedRef<ITextDecorator,1>,int>
          (TArray<TSharedRef<ITextDecorator,1>,TSizedDefaultAllocator<32>_> *this,
          TArrayView<TSharedRef<ITextDecorator,1>,int> *param_1)

{
  int *piVar1;
  int iVar2;
  TSharedRef<ITextDecorator,1> *pTVar3;
  
  DestructItems<TSharedRef<ITextDecorator,1>,int>
            ((TSharedRef<ITextDecorator,1> *)(this->AllocatorInstance).Data,this->ArrayNum);
  iVar2 = param_1->ArrayNum;
  piVar1 = &this->ArrayMax;
  pTVar3 = param_1->DataPtr;
  this->ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
  ConstructItems<TSharedRef<ITextDecorator,1>,TSharedRef<ITextDecorator,1>,int>
            ((this->AllocatorInstance).Data,pTVar3,iVar2);
  return this;
}

// CopyToEmpty<FNotificationButtonInfo,int> @ 1429b3330

void __thiscall
TArray<FNotificationButtonInfo,TSizedDefaultAllocator<32>_>::
CopyToEmpty<FNotificationButtonInfo,int>
          (TArray<FNotificationButtonInfo,TSizedDefaultAllocator<32>_> *this,
          FNotificationButtonInfo *param_1,int param_2,int param_3)

{
  this->ArrayNum = param_2;
  if ((param_2 == 0) && (param_3 == 0)) {
    this->ArrayMax = 0;
    return;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xb0,8,param_2,param_3,&this->AllocatorInstance,param_2,&this->ArrayMax);
  ConstructItems<FNotificationButtonInfo,FNotificationButtonInfo,int>
            ((this->AllocatorInstance).Data,param_1,param_2);
  return;
}

// ~TArray<SOverlay::FOverlaySlot::FSlotArguments,TSizedDefaultAllocator<32>_> @ 1429bded0

void __thiscall
TArray<SOverlay::FOverlaySlot::FSlotArguments,TSizedDefaultAllocator<32>_>::
~TArray<SOverlay::FOverlaySlot::FSlotArguments,TSizedDefaultAllocator<32>_>
          (TArray<SOverlay::FOverlaySlot::FSlotArguments,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<SOverlay::FOverlaySlot::FSlotArguments,int>
            ((FSlotArguments *)(this->AllocatorInstance).Data,this->ArrayNum);
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// RemoveAt @ 142a05930

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<SlateEditableTextTypes::FUndoState,TSizedDefaultAllocator<32>_>::RemoveAt
          (TArray<SlateEditableTextTypes::FUndoState,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *_Dst;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x38;
  if (*(longlong **)_Dst != (longlong *)0x0) {
    (**(code **)(**(longlong **)_Dst + 0x10))();
  }
  iVar4 = this->ArrayNum + ~param_1;
  if (iVar4 != 0) {
    memmove(_Dst,_Dst + 0x38,(longlong)iVar4 * 0x38);
  }
  iVar4 = this->ArrayNum + -1;
  this->ArrayNum = iVar4;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,&this->AllocatorInstance,iVar4,&this->ArrayMax);
  }
  return;
}

// RemoveAtImpl @ 142a05a10

void __thiscall
TArray<SlateEditableTextTypes::FUndoState,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<SlateEditableTextTypes::FUndoState,TSizedDefaultAllocator<32>_> *this,int param_1,
          int param_2)

{
  int iVar1;
  FUndoState *_Dst;
  
  _Dst = (FUndoState *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x38);
  DestructItems<SlateEditableTextTypes::FUndoState,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x38);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// Empty @ 142a267b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TArray<TSharedPtr<STableColumnHeader,1>,TSizedDefaultAllocator<32>_>::Empty
          (TArray<TSharedPtr<STableColumnHeader,1>,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    DestructItems<TSharedPtr<STableColumnHeader,1>,int>
              ((TSharedPtr<STableColumnHeader,1> *)(this->AllocatorInstance).Data,this->ArrayNum);
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Insert @ 142a2c380

int __thiscall
TArray<void_*,TSizedDefaultAllocator<32>_>::Insert
          (TArray<void_*,TSizedDefaultAllocator<32>_> *this,void **param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  
  pFVar4 = (this->AllocatorInstance).Data;
  if ((pFVar4 <= param_1) && (param_1 < pFVar4 + (longlong)this->ArrayMax * 8)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  iVar3 = this->ArrayNum;
  if (iVar3 == this->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
  }
  pFVar4 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar3 + 1;
  pFVar4 = pFVar4 + (longlong)param_2 * 8;
  memmove(pFVar4 + 8,pFVar4,(longlong)(iVar3 - param_2) << 3);
  *(void **)((this->AllocatorInstance).Data + (longlong)param_2 * 8) = *param_1;
  return param_2;
}

