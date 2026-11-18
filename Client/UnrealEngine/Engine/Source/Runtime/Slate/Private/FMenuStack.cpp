// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 28

// ~FMenuStack @ 1426aabf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FMenuStack::~FMenuStack(FMenuStack *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  void *pvVar3;
  FScriptContainerElement *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->MenuDestroyedEvent).field_0x8,*(int *)&(this->MenuDestroyedEvent).field_0x10);
  pvVar3 = *(void **)&(this->MenuDestroyedEvent).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->MenuDestroyedEvent);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->PendingNewMenu).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->PendingNewWindow).SharedReferenceCount.ReferenceController);
  *(undefined4 *)&(this->CachedContentMap).field_0x48 = 0;
  pvVar3 = *(void **)&(this->CachedContentMap).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<TSharedPtr<SWidget_const_,1>,TSharedPtr<FMenuBase,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TSharedPtr<SWidget_const_,1>,TSharedPtr<FMenuBase,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TSharedPtr<SWidget_const_,1>,TSharedPtr<FMenuBase,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedContentMap);
  DestructItems<TSharedPtr<FMenuBase,1>,int>
            ((TSharedPtr<FMenuBase,1> *)(this->Stack).AllocatorInstance.Data,(this->Stack).ArrayNum)
  ;
  pFVar4 = (this->Stack).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->HostPopupLayer).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->HostWindowPopupPanel).SharedReferenceCount.ReferenceController);
  pTVar5 = (this->HostWidget).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar5->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->HostWindow).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)(this->ActiveMethod)._padding_);
  return;
}

// operator() @ 1426aca30

bool __thiscall
`FMenuStack::FindMenuFromWindow'::__l2::<lambda_1>::operator()
          (void *this,TSharedPtr<FMenuBase,1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  longlong *plVar4;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  if (param_1->Object == (FMenuBase *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  plVar4 = (longlong *)(**(code **)(param_1->Object->_padding_ + 0x18))(param_1->Object,local_18);
  if ((*plVar4 == 0) || (*plVar4 != *(longlong *)this)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return bVar2;
}

// DismissAll @ 1426b7010

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FMenuStack::DismissAll(FMenuStack *this)

{
  DismissInternal(this,0);
  return;
}

// DismissFrom @ 1426b7040

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FMenuStack::DismissFrom(FMenuStack *this,TSharedPtr<IMenu,1> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  longlong lVar8;
  
  pFVar1 = (this->Stack).AllocatorInstance.Data;
  if (pFVar1 != pFVar1 + (longlong)(this->Stack).ArrayNum * 0x10) {
    pFVar6 = pFVar1;
    while (*(IMenu **)pFVar6 != param_1->Object) {
      pFVar6 = pFVar6 + 0x10;
      if (pFVar6 == pFVar1 + (longlong)(this->Stack).ArrayNum * 0x10) {
        return;
      }
    }
    iVar5 = (int)((longlong)pFVar6 - (longlong)pFVar1 >> 4);
    if (iVar5 != -1) {
      uVar7 = (this->Stack).ArrayNum - 1;
      if (iVar5 <= (int)uVar7) {
        lVar8 = (longlong)(int)uVar7 << 4;
        do {
          if ((-1 < (int)uVar7) && ((int)uVar7 < (this->Stack).ArrayNum)) {
            uVar4 = 0;
            if ((int)uVar7 < (this->Stack).ArrayNum) {
              uVar4 = ~uVar7 >> 0x1f;
            }
            if ((uVar4 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pFVar1 = (this->Stack).AllocatorInstance.Data;
            if ((*(longlong *)(pFVar1 + lVar8) == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            (**(code **)(**(longlong **)(pFVar1 + lVar8) + 0x38))();
          }
          uVar7 = uVar7 - 1;
          lVar8 = lVar8 + -0x10;
        } while (iVar5 <= (int)uVar7);
      }
      return;
    }
  }
  return;
}

// DismissInternal @ 1426b7090

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FMenuStack::DismissInternal(FMenuStack *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = (this->Stack).ArrayNum - 1;
  if (param_1 <= (int)uVar5) {
    lVar6 = (longlong)(int)uVar5 << 4;
    do {
      if ((-1 < (int)uVar5) && ((int)uVar5 < (this->Stack).ArrayNum)) {
        uVar4 = 0;
        if ((int)uVar5 < (this->Stack).ArrayNum) {
          uVar4 = ~uVar5 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar1 = (this->Stack).AllocatorInstance.Data;
        if ((*(longlong *)(pFVar1 + lVar6) == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        (**(code **)(**(longlong **)(pFVar1 + lVar6) + 0x38))();
      }
      uVar5 = uVar5 - 1;
      lVar6 = lVar6 + -0x10;
    } while (param_1 <= (int)uVar5);
  }
  return;
}

// FindMenuFromWindow @ 1426baf10

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<IMenu,1> * __thiscall
FMenuStack::FindMenuFromWindow
          (FMenuStack *this,TSharedPtr<IMenu,1> *__return_storage_ptr__,
          TSharedRef<SWindow,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedPtr<FMenuBase,1> *pTVar2;
  <lambda_1> local_18;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  local_18.InWindow.Object = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18.InWindow.SharedReferenceCount.ReferenceController = pTVar1;
  pTVar2 = TArray<TSharedPtr<FMenuBase,1>,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FMenuStack::FindMenuFromWindow_::__l2::<lambda_1>_>
                     (&this->Stack,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (pTVar2 == (TSharedPtr<FMenuBase,1> *)0x0) {
    __return_storage_ptr__->Object = (IMenu *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    __return_storage_ptr__->Object = (IMenu *)pTVar2->Object;
    pTVar1 = (pTVar2->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// FindMenuInWidgetPath @ 1426bafc0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<IMenu,1> * __thiscall
FMenuStack::FindMenuInWidgetPath
          (FMenuStack *this,TSharedPtr<IMenu,1> *__return_storage_ptr__,FWidgetPath *param_1)

{
  ForElementType<FArrangedWidget> FVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  TSharedPtr<IMenu,1> *pTVar7;
  TSharedPtr<FMenuBase,1> *pTVar8;
  ForElementType<FArrangedWidget> FVar9;
  longlong lVar10;
  uint uVar11;
  TSharedPtr<SWidget_const_,1> local_28;
  
  uVar11 = (param_1->Widgets).Array.ArrayNum - 1;
  if (-1 < (int)uVar11) {
    lVar10 = (longlong)(int)uVar11 * 0x48;
    do {
      uVar6 = 0;
      if ((int)uVar11 < (param_1->Widgets).Array.ArrayNum) {
        uVar6 = ~uVar11 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSharedPtr<IMenu,1> *)(*pcVar4)();
        return pTVar7;
      }
      FVar1 = (param_1->Widgets).Array.AllocatorInstance.SecondaryData;
      FVar9 = (ForElementType<FArrangedWidget>)&(param_1->Widgets).Array;
      if (FVar1 != (ForElementType<FArrangedWidget>)0x0) {
        FVar9 = FVar1;
      }
      local_28.Object = *(SWidget **)((uchar *)((longlong)FVar9 + 0x38) + lVar10);
      pTVar2 = *(TReferenceControllerBase<1> **)((uchar *)((longlong)FVar9 + 0x40) + lVar10);
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_28.SharedReferenceCount.ReferenceController = pTVar2;
      pTVar8 = TMapBase<TSharedPtr<SWidget_const_,1>,TSharedPtr<FMenuBase,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<SWidget_const_,1>,TSharedPtr<FMenuBase,1>,0>_>
               ::Find((TMapBase<TSharedPtr<SWidget_const_,1>,TSharedPtr<FMenuBase,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<SWidget_const_,1>,TSharedPtr<FMenuBase,1>,0>_>
                       *)&this->CachedContentMap,&local_28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      if (pTVar8 != (TSharedPtr<FMenuBase,1> *)0x0) {
        __return_storage_ptr__->Object = (IMenu *)pTVar8->Object;
        pTVar3 = (pTVar8->SharedReferenceCount).ReferenceController;
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
        if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
        return __return_storage_ptr__;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      lVar10 = lVar10 + -0x48;
      uVar11 = uVar11 - 1;
    } while (-1 < (int)uVar11);
  }
  __return_storage_ptr__->Object = (IMenu *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetHostWidget @ 1426bd120

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<SWidget,1> * __thiscall
FMenuStack::GetHostWidget(FMenuStack *this,TSharedPtr<SWidget,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  bool bVar4;
  
  __return_storage_ptr__->Object = (SWidget *)0x0;
  pTVar1 = (this->HostWidget).WeakReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar1->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        break;
      }
      LOCK();
      aVar3 = pTVar1->SharedReferenceCount;
      bVar4 = aVar2 == aVar3;
      if (bVar4) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar4);
  }
  if ((__return_storage_ptr__->SharedReferenceCount).ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (this->HostWidget).Object;
  }
  return __return_storage_ptr__;
}

// GetHostWindow @ 1426bd170

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<SWindow,1> * __thiscall
FMenuStack::GetHostWindow(FMenuStack *this,TSharedPtr<SWindow,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->HostWindow).Object;
  pTVar1 = (this->HostWindow).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetToolTipForceFieldRect @ 1426bf3b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FMenuStack::GetToolTipForceFieldRect
          (FMenuStack *this,TSharedRef<IMenu,1> *param_1,FWidgetPath *param_2,FSlateRect *param_3)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  FDeprecateSlateVector2D FVar3;
  TVector2<float>_u_0 TVar4;
  code *pcVar5;
  EVisibility EVar6;
  SWidget *pSVar7;
  TReferenceControllerBase<1> *pTVar8;
  TVector2<float>_u_0 TVar9;
  bool bVar10;
  undefined1 uVar11;
  int iVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  FSlateApplication *this_00;
  longlong lVar15;
  ForElementType<FArrangedWidget> FVar16;
  uint uVar17;
  char cVar18;
  longlong lVar19;
  uint uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auStack_2d8 [32];
  longlong local_2b8;
  longlong local_2b0;
  char local_2a8;
  undefined8 local_2a4;
  longlong local_29c;
  ulonglong local_294;
  SWidget *local_288;
  TReferenceControllerBase<1> *local_280;
  undefined8 local_278;
  float local_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  float local_264;
  undefined8 local_260;
  float local_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  float local_24c;
  FSlateRect local_248;
  TVector2<float>_u_0 local_238;
  float local_230;
  float local_22c;
  float local_228;
  float local_224;
  TVector2<float>_u_0 local_220;
  float local_218;
  float local_214;
  float local_210;
  float local_20c;
  FWidgetPath *local_208;
  FSlateRect *local_200;
  undefined8 local_1f4;
  TVector2<float>_u_0 local_1e8;
  TSharedRef<SWidget_const_,1> local_1e0;
  TSharedRef<SWidget_const_,1> local_1d0;
  FSlateRect local_1c0;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  FWidgetPath local_1a0;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_2d8;
  param_3->Left = 0.0;
  param_3->Top = 0.0;
  param_3->Right = 0.0;
  param_3->Bottom = 0.0;
  pFVar1 = (this->Stack).AllocatorInstance.Data;
  cVar18 = '\0';
  local_2a8 = '\0';
  local_1b0 = 0;
  uStack_1a8 = 0;
  pFVar14 = pFVar1;
  while( true ) {
    if (pFVar14 == pFVar1 + (longlong)(this->Stack).ArrayNum * 0x10) {
      return false;
    }
    if ((*(IMenu **)pFVar14 != (IMenu *)0x0) && (*(IMenu **)pFVar14 == param_1->Object)) break;
    pFVar14 = pFVar14 + 0x10;
  }
  iVar12 = (int)((longlong)pFVar14 - (longlong)pFVar1 >> 4);
  if (iVar12 == -1) {
    return false;
  }
  uVar20 = iVar12 + 1;
  if ((this->Stack).ArrayNum <= (int)uVar20) {
    return false;
  }
  lVar19 = (longlong)(int)uVar20 << 4;
  local_208 = param_2;
  local_200 = param_3;
  do {
    iVar12 = (this->Stack).ArrayNum;
    uVar13 = 0;
    if ((int)uVar20 < iVar12) {
      uVar13 = ~uVar20 >> 0x1f;
    }
    if (uVar13 == 0) {
      local_2b8 = (longlong)(int)uVar20;
      local_2b0 = (longlong)iVar12;
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar10) {
        pcVar5 = (code *)swi(3);
        uVar11 = (*pcVar5)();
        return (bool)uVar11;
      }
    }
    pFVar1 = (this->Stack).AllocatorInstance.Data;
    if ((*(longlong *)(pFVar1 + lVar19) == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      uVar11 = (*pcVar5)();
      return (bool)uVar11;
    }
    plVar2 = *(longlong **)(pFVar1 + lVar19);
    (**(code **)(*plVar2 + 0x20))(plVar2,&local_288);
    if (local_288 != (SWidget *)0x0) {
      if ((local_288 == (SWidget *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x408,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        uVar11 = (*pcVar5)();
        return (bool)uVar11;
      }
      pTVar8 = local_280;
      pSVar7 = local_288;
      if (local_280 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_280->SharedReferenceCount = (atomic<int>)((int)local_280->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((local_288 == (SWidget *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x25d,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        uVar11 = (*pcVar5)();
        return (bool)uVar11;
      }
      local_1e0.Object = pSVar7;
      local_1e0.SharedReferenceCount.ReferenceController = pTVar8;
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
        UNLOCK();
      }
      FWidgetPath::GetPathDownTo(local_208,&local_1a0,&local_1e0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
      bVar10 = FWidgetPath::IsValid(&local_1a0);
      if (!bVar10) {
        this_00 = FSlateApplication::Get();
        EVar6 = EVisibility::Visible;
        if ((local_288 == (SWidget *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x408,L""), bVar10)) {
          pcVar5 = (code *)swi(3);
          uVar11 = (*pcVar5)();
          return (bool)uVar11;
        }
        pTVar8 = local_280;
        pSVar7 = local_288;
        if (local_280 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_280->SharedReferenceCount = (atomic<int>)((int)local_280->SharedReferenceCount + 1);
          UNLOCK();
        }
        if ((local_288 == (SWidget *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x25d,L""), bVar10)) {
          pcVar5 = (code *)swi(3);
          uVar11 = (*pcVar5)();
          return (bool)uVar11;
        }
        local_1d0.Object = pSVar7;
        local_1d0.SharedReferenceCount.ReferenceController = pTVar8;
        if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
          UNLOCK();
        }
        FSlateApplication::GeneratePathToWidgetChecked(this_00,&local_1d0,&local_1a0,EVar6);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
        param_3 = local_200;
        cVar18 = local_2a8;
      }
      bVar10 = FWidgetPath::IsValid(&local_1a0);
      if (bVar10) {
        uVar17 = local_1a0.Widgets.Array.ArrayNum - 1;
        uVar13 = 0;
        if ((int)uVar17 < local_1a0.Widgets.Array.ArrayNum) {
          uVar13 = ~uVar17 >> 0x1f;
        }
        if (uVar13 == 0) {
          local_2b8 = (longlong)(int)uVar17;
          local_2b0 = (longlong)local_1a0.Widgets.Array.ArrayNum;
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar10) {
            pcVar5 = (code *)swi(3);
            uVar11 = (*pcVar5)();
            return (bool)uVar11;
          }
        }
        TVar9 = local_1f4;
        FVar16 = (ForElementType<FArrangedWidget>)&local_1a0.Widgets.Array;
        if (local_1a0.Widgets.Array.AllocatorInstance.SecondaryData !=
            (ForElementType<FArrangedWidget>)0x0) {
          FVar16 = local_1a0.Widgets.Array.AllocatorInstance.SecondaryData;
        }
        lVar15 = (longlong)local_1a0.Widgets.Array.ArrayNum;
        fVar21 = ((float *)((longlong)FVar16 + -0x40))[lVar15 * 0x12];
        FVar3 = ((FArrangedWidget *)((longlong)FVar16 + -0x48))[lVar15].Geometry.Size;
        TVar4 = (TVector2<float>_u_0)
                *(TVector2<float>_u_0 *)
                 &((TVector2<float> *)((longlong)FVar16 + -0x3c))[lVar15 * 9].field0_0x0._s_0;
        local_2a4._0_4_ = FVar3._0_4_;
        fVar22 = (float)local_2a4;
        local_2a4._4_4_ = FVar3._4_4_;
        fVar23 = local_2a4._4_4_;
        local_1f4._0_4_ = TVar4._s_0.X;
        local_1f4._4_4_ = TVar4._s_0.Y;
        if (cVar18 == '\0') {
          local_258 = (float)local_2a4;
          local_24c = local_2a4._4_4_;
          uStack_254 = 0;
          uStack_250 = 0;
          local_294 = (ulonglong)FVar3 & 0xffffffff;
          local_260 = 0;
          local_29c = 0;
          local_220._s_0.X = fVar21 * 0.0 + (float)local_1f4;
          local_220._s_0.Y = fVar21 * 0.0 + local_1f4._4_4_;
          local_218 = fVar21 * (float)local_2a4;
          local_214 = fVar21 * 0.0;
          local_210 = fVar21 * 0.0;
          local_20c = fVar21 * local_2a4._4_4_;
          local_2a4 = (ulonglong)(uint)local_2a4._4_4_ << 0x20;
          local_1f4 = TVar9;
          local_1e8 = TVar4;
          FSlateRotatedRect::ToBoundingRect((FSlateRotatedRect *)&local_220._s_0,&local_1c0);
          cVar18 = '\x01';
          local_2a8 = '\x01';
          param_3->Left = local_1c0.Left;
          param_3->Top = local_1c0.Top;
          param_3->Right = local_1c0.Right;
          param_3->Bottom = local_1c0.Bottom;
        }
        else {
          local_270 = (float)local_2a4;
          local_264 = local_2a4._4_4_;
          uStack_26c = 0;
          uStack_268 = 0;
          local_29c = (ulonglong)(uint)local_2a4._4_4_ << 0x20;
          local_294 = (ulonglong)FVar3 & 0xffffffff;
          local_278 = 0;
          local_2a4 = 0;
          local_238._s_0.X = fVar21 * 0.0 + (float)local_1f4;
          local_238._s_0.Y = fVar21 * 0.0 + local_1f4._4_4_;
          local_230 = fVar21 * fVar22;
          local_22c = fVar21 * 0.0;
          local_228 = fVar21 * 0.0;
          local_224 = fVar21 * fVar23;
          local_1f4 = TVar4;
          FSlateRotatedRect::ToBoundingRect((FSlateRotatedRect *)&local_238._s_0,&local_248);
          fVar21 = local_248.Left;
          if (param_3->Left <= local_248.Left) {
            fVar21 = param_3->Left;
          }
          fVar22 = local_248.Top;
          if (param_3->Top <= local_248.Top) {
            fVar22 = param_3->Top;
          }
          fVar23 = local_248.Right;
          if (local_248.Right <= param_3->Right) {
            fVar23 = param_3->Right;
          }
          fVar24 = local_248.Bottom;
          if (local_248.Bottom <= param_3->Bottom) {
            fVar24 = param_3->Bottom;
          }
          param_3->Left = fVar21;
          param_3->Top = fVar22;
          param_3->Right = fVar23;
          param_3->Bottom = fVar24;
        }
      }
      if (local_1a0.VirtualPointerPositions.AllocatorInstance.Data != (FScriptContainerElement *)0x0
         ) {
        FMemory::Free(local_1a0.VirtualPointerPositions.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1a0.TopLevelWindow.SharedReferenceCount.ReferenceController);
      FVar16 = (ForElementType<FArrangedWidget>)&local_1a0.Widgets.Array;
      if (local_1a0.Widgets.Array.AllocatorInstance.SecondaryData !=
          (ForElementType<FArrangedWidget>)0x0) {
        FVar16 = local_1a0.Widgets.Array.AllocatorInstance.SecondaryData;
      }
      DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar16,local_1a0.Widgets.Array.ArrayNum)
      ;
      if (local_1a0.Widgets.Array.AllocatorInstance.SecondaryData !=
          (ForElementType<FArrangedWidget>)0x0) {
        FMemory::Free((void *)local_1a0.Widgets.Array.AllocatorInstance.SecondaryData);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_280);
    uVar20 = uVar20 + 1;
    lVar19 = lVar19 + 0x10;
    if ((this->Stack).ArrayNum <= (int)uVar20) {
      return (bool)cVar18;
    }
  } while( true );
}

// HasMenus @ 1426c12b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FMenuStack::HasMenus(FMenuStack *this)

{
  return 0 < (this->Stack).ArrayNum;
}

// HasOpenSubMenus @ 1426c12c0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FMenuStack::HasOpenSubMenus(FMenuStack *this,TSharedPtr<IMenu,1> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  
  pFVar2 = (this->Stack).AllocatorInstance.Data;
  iVar1 = (this->Stack).ArrayNum;
  if (pFVar2 != pFVar2 + (longlong)iVar1 * 0x10) {
    pFVar4 = pFVar2;
    do {
      if (*(IMenu **)pFVar4 == param_1->Object) {
        iVar3 = (int)((longlong)pFVar4 - (longlong)pFVar2 >> 4);
        if ((iVar3 != -1) && (iVar3 < iVar1 + -1)) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((param_1->SharedReferenceCount).ReferenceController);
          return true;
        }
        break;
      }
      pFVar4 = pFVar4 + 0x10;
    } while (pFVar4 != pFVar2 + (longlong)iVar1 * 0x10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return false;
}

// OnMenuContentLostFocus @ 1426c6b50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FMenuStack::OnMenuContentLostFocus(FMenuStack *this,FWidgetPath *param_1)

{
  FScriptContainerElement *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  longlong lVar10;
  TSharedPtr<IMenu,1> local_28;
  
  if ((this->Stack).ArrayNum < 1) {
    return;
  }
  if ((this->PendingNewMenu).Object != (FMenuBase *)0x0) {
    return;
  }
  FindMenuInWidgetPath(this,&local_28,param_1);
  if (local_28.Object == (IMenu *)0x0) {
    cVar5 = (**(code **)(*(longlong *)CVarSlateDismissMenuStacksOnFocusLost._8_8_ + 0xc0))();
    if (cVar5 != '\0') {
      DismissInternal(this,0);
    }
  }
  else {
    pFVar1 = (this->Stack).AllocatorInstance.Data;
    for (pFVar8 = pFVar1; pFVar8 != pFVar1 + (longlong)(this->Stack).ArrayNum * 0x10;
        pFVar8 = pFVar8 + 0x10) {
      if (*(IMenu **)pFVar8 == local_28.Object) {
        iVar7 = (int)((longlong)pFVar8 - (longlong)pFVar1 >> 4);
        if (iVar7 != -1) goto LAB_1426c6bfd;
        goto LAB_1426c6bd7;
      }
    }
    iVar7 = -1;
LAB_1426c6bd7:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("FocussedIndex != INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Application\\MenuStack.cpp"
                       ,0x2ff,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
LAB_1426c6bfd:
    uVar9 = iVar7 + 1;
    if ((int)uVar9 < (this->Stack).ArrayNum) {
      lVar10 = (longlong)(int)uVar9 << 4;
      do {
        uVar6 = 0;
        if ((int)uVar9 < (this->Stack).ArrayNum) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar1 = (this->Stack).AllocatorInstance.Data;
        if ((*(longlong *)(pFVar1 + lVar10) == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (*(char *)(*(longlong *)(pFVar1 + lVar10) + 0x49) != '\0') {
          uVar6 = 0;
          if ((int)uVar9 < (this->Stack).ArrayNum) {
            uVar6 = ~uVar9 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar1 = (this->Stack).AllocatorInstance.Data;
          pTVar2 = *(TReferenceControllerBase<1> **)(pFVar1 + (longlong)(int)uVar9 * 0x10 + 8);
          lVar10 = *(longlong *)(pFVar1 + (longlong)(int)uVar9 * 0x10);
          if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
            UNLOCK();
          }
          pFVar1 = (this->Stack).AllocatorInstance.Data;
          pFVar8 = pFVar1;
          if (pFVar1 == pFVar1 + (longlong)(this->Stack).ArrayNum * 0x10) goto LAB_1426c6d60;
          goto LAB_1426c6d34;
        }
        uVar9 = uVar9 + 1;
        lVar10 = lVar10 + 0x10;
      } while ((int)uVar9 < (this->Stack).ArrayNum);
    }
  }
  goto LAB_1426c6d88;
  while (pFVar8 = pFVar8 + 0x10, pFVar8 != pFVar1 + (longlong)(this->Stack).ArrayNum * 0x10) {
LAB_1426c6d34:
    if (*(longlong *)pFVar8 == lVar10) {
      iVar7 = (int)((longlong)pFVar8 - (longlong)pFVar1 >> 4);
      if (iVar7 != -1) {
        DismissInternal(this,iVar7);
      }
LAB_1426c6d60:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      goto LAB_1426c6d88;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
LAB_1426c6d88:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return;
}

// OnMenuDestroyed @ 1426c6dc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FMenuStack::OnMenuDestroyed(FMenuStack *this,TSharedRef<IMenu,1> *param_1)

{
  TArray<TSharedPtr<FMenuBase,1>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  longlong *plVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  ulonglong *puVar9;
  FSlateThrottleManager *this_00;
  FWidgetPath *pFVar10;
  uint uVar11;
  int iVar12;
  atomic<int> *paVar13;
  ForElementType<FArrangedWidget> FVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  longlong lVar17;
  longlong lVar18;
  uint uVar19;
  longlong lVar20;
  undefined1 auStackY_208 [32];
  TSharedPtr<SWidget_const_,1> local_1c8;
  TSharedRef<IMenu,1> *local_1b8;
  undefined1 local_1b0 [8];
  TReferenceControllerBase<1> *local_1a8;
  FWidgetPath local_1a0;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_208;
  pFVar16 = (this->Stack).AllocatorInstance.Data;
  pTVar1 = &this->Stack;
  iVar12 = (this->Stack).ArrayNum;
  pFVar8 = pFVar16;
  do {
    local_1b8 = param_1;
    if (pFVar8 == pFVar16 + (longlong)iVar12 * 0x10) {
LAB_1426c71d3:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_1->SharedReferenceCount).ReferenceController);
      return;
    }
    if ((*(IMenu **)pFVar8 != (IMenu *)0x0) && (*(IMenu **)pFVar8 == param_1->Object)) {
      iVar7 = (int)((longlong)pFVar8 - (longlong)pFVar16 >> 4);
      if (iVar7 != -1) {
        uVar15 = iVar12 - 1;
        lVar20 = (longlong)iVar7;
        lVar17 = (longlong)(int)uVar15;
        if (lVar20 < lVar17) {
          lVar18 = lVar17 << 4;
          lVar17 = lVar17 - lVar20;
          do {
            uVar11 = 0;
            if ((int)uVar15 < (this->Stack).ArrayNum) {
              uVar11 = ~uVar15 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar16 = (pTVar1->AllocatorInstance).Data;
            if ((*(longlong *)(pFVar16 + lVar18) == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            (**(code **)(**(longlong **)(pFVar16 + lVar18) + 0x38))();
            uVar15 = uVar15 - 1;
            lVar18 = lVar18 + -0x10;
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
        }
        bVar6 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                          ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                           &this->MenuDestroyedEvent);
        if (bVar6) {
          TMulticastDelegate<void___cdecl(TSharedRef<IMenu,1>_const_&),FDefaultDelegateUserPolicy>::
          Broadcast(&this->MenuDestroyedEvent,param_1);
        }
        uVar15 = (this->Stack).ArrayNum - 1;
        lVar17 = (longlong)(int)uVar15;
        if (lVar20 <= lVar17) {
          lVar18 = lVar17 << 4;
          do {
            uVar19 = ~uVar15 >> 0x1f;
            uVar11 = 0;
            if ((int)uVar15 < (this->Stack).ArrayNum) {
              uVar11 = uVar19;
            }
            if ((uVar11 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar16 = (pTVar1->AllocatorInstance).Data;
            if ((*(longlong *)(pFVar16 + lVar18) == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            plVar3 = *(longlong **)(pFVar16 + lVar18);
            puVar9 = (ulonglong *)(**(code **)(*plVar3 + 0x20))(plVar3,local_1b0);
            pTVar4 = (TReferenceControllerBase<1> *)puVar9[1];
            local_1c8.Object = (SWidget *)*puVar9;
            if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
              paVar13 = (atomic<int> *)&DAT_00000008;
            }
            else {
              paVar13 = &pTVar4->SharedReferenceCount;
              LOCK();
              *paVar13 = (atomic<int>)((int)*paVar13 + 1);
              UNLOCK();
              LOCK();
              *paVar13 = (atomic<int>)((int)*paVar13 + 1);
              UNLOCK();
            }
            local_1c8.SharedReferenceCount.ReferenceController = pTVar4;
            if (*(int *)&(this->CachedContentMap).field_0x8 !=
                *(int *)&(this->CachedContentMap).field_0x34) {
              if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                *paVar13 = (atomic<int>)((int)*paVar13 + 1);
                UNLOCK();
              }
              uVar11 = ((uint)((ulonglong)local_1c8.Object >> 0x14) & 0xffff ^
                       (uint)((ulonglong)local_1c8.Object >> 4)) * -0x7a143595;
              uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar4);
              TSet<TTuple<TSharedPtr<SWidget_const_,1>,TSharedPtr<FMenuBase,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<SWidget_const_,1>,TSharedPtr<FMenuBase,1>,0>,FDefaultSetAllocator>
              ::RemoveImpl<TSharedPtr<SWidget_const_,1>_>
                        ((TSet<TTuple<TSharedPtr<SWidget_const_,1>,TSharedPtr<FMenuBase,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<SWidget_const_,1>,TSharedPtr<FMenuBase,1>,0>,FDefaultSetAllocator>
                          *)&this->CachedContentMap,uVar11 >> 0x10 ^ uVar11,&local_1c8);
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar4);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar4);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_1a8);
            uVar11 = 0;
            if ((int)uVar15 < (this->Stack).ArrayNum) {
              uVar11 = uVar19;
            }
            if ((uVar11 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar16 = (pTVar1->AllocatorInstance).Data + lVar18;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (*(TReferenceControllerBase<1> **)(pFVar16 + 8));
            iVar12 = (this->Stack).ArrayNum + ~uVar15;
            if (iVar12 != 0) {
              memmove(pFVar16,pFVar16 + 0x10,(longlong)iVar12 << 4);
            }
            piVar2 = &(this->Stack).ArrayNum;
            *piVar2 = *piVar2 + -1;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,&pTVar1->AllocatorInstance,(this->Stack).ArrayNum,
                       &(this->Stack).ArrayMax);
            uVar15 = uVar15 - 1;
            lVar17 = lVar17 + -1;
            lVar18 = lVar18 + -0x10;
            param_1 = local_1b8;
          } while (lVar20 <= lVar17);
        }
        if ((this->Stack).ArrayNum == 0) {
          if ((this->ThrottleHandle).Index != -1) {
            this_00 = FSlateThrottleManager::Get();
            FSlateThrottleManager::LeaveResponsiveMode(this_00,&this->ThrottleHandle);
          }
          pFVar10 = FWidgetPath::FWidgetPath(&local_1a0);
          SetHostPath(this,pFVar10);
          if (local_1a0.VirtualPointerPositions.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1a0.VirtualPointerPositions.AllocatorInstance.Data);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_1a0.TopLevelWindow.SharedReferenceCount.ReferenceController);
          FVar14 = (ForElementType<FArrangedWidget>)&local_1a0.Widgets.Array;
          if (local_1a0.Widgets.Array.AllocatorInstance.SecondaryData !=
              (ForElementType<FArrangedWidget>)0x0) {
            FVar14 = local_1a0.Widgets.Array.AllocatorInstance.SecondaryData;
          }
          DestructItems<FArrangedWidget,int>
                    ((FArrangedWidget *)FVar14,local_1a0.Widgets.Array.ArrayNum);
          if (local_1a0.Widgets.Array.AllocatorInstance.SecondaryData !=
              (ForElementType<FArrangedWidget>)0x0) {
            FMemory::Free((void *)local_1a0.Widgets.Array.AllocatorInstance.SecondaryData);
          }
        }
      }
      goto LAB_1426c71d3;
    }
    pFVar8 = pFVar8 + 0x10;
  } while( true );
}

// OnWindowActivated @ 1426ca0f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FMenuStack::OnWindowActivated(FMenuStack *this,TSharedRef<SWindow,1> *param_1)

{
  undefined1 *puVar1;
  SWindow *pSVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  FScriptContainerElement *pFVar5;
  FMenuBase *pFVar6;
  int iVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  FSlateApplication *pFVar11;
  TSharedPtr<FMenuBase,1> *pTVar12;
  int iVar13;
  FMenuBase *pFVar14;
  FScriptContainerElement *pFVar15;
  FMenuBase *pFVar16;
  longlong lVar17;
  uint uVar18;
  FMenuBase *pFVar19;
  FMenuBase *pFVar20;
  FMenuBase *pFVar21;
  bool bVar22;
  <lambda_1> local_58;
  SWindow *local_48;
  TReferenceControllerBase<1> *local_40;
  
  pSVar2 = (this->PendingNewWindow).Object;
  pFVar21 = (FMenuBase *)0x0;
  if (((pSVar2 == (SWindow *)0x0) || (pFVar16 = pFVar21, pSVar2 != param_1->Object)) &&
     (pFVar16 = (FMenuBase *)0x0, 0 < (this->Stack).ArrayNum)) {
    pFVar11 = FSlateApplication::Get();
    pcVar3 = *(code **)(*(longlong *)pFVar11 + 0x118);
    local_48 = param_1->Object;
    local_40 = (param_1->SharedReferenceCount).ReferenceController;
    if (local_40 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_40->SharedReferenceCount = (atomic<int>)((int)local_40->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar16 = (FMenuBase *)&DAT_00000001;
    cVar8 = (*pcVar3)(pFVar11,&local_48);
    if (cVar8 != '\0') goto LAB_1426ca16a;
    bVar22 = true;
  }
  else {
LAB_1426ca16a:
    bVar22 = false;
  }
  if (pFVar16 != (FMenuBase *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
  }
  if (!bVar22) goto LAB_1426ca3a4;
  pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
  local_58.InWindow.Object = param_1->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_58.InWindow.SharedReferenceCount.ReferenceController = pTVar4;
  pTVar12 = TArray<TSharedPtr<FMenuBase,1>,TSizedDefaultAllocator<32>_>::
            FindByPredicate<_FMenuStack::FindMenuFromWindow_::__l2::<lambda_1>_>
                      (&this->Stack,&local_58);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  if (pTVar12 == (TSharedPtr<FMenuBase,1> *)0x0) {
    pFVar19 = (FMenuBase *)0x0;
    pFVar16 = (FMenuBase *)0x0;
  }
  else {
    pFVar16 = pTVar12->Object;
    pFVar19 = (FMenuBase *)(pTVar12->SharedReferenceCount).ReferenceController;
    if (pFVar19 != (FMenuBase *)0x0) {
      LOCK();
      *(int *)&pFVar19->_padding_ = (int)pFVar19->_padding_ + 1;
      UNLOCK();
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  if (pFVar19 != (FMenuBase *)0x0) {
    LOCK();
    puVar1 = (undefined1 *)((longlong)&pFVar19->_padding_ + 4);
    *(int *)puVar1 = *(int *)puVar1 + 1;
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar19);
  if (((pFVar16 == (FMenuBase *)0x0) || (pFVar19 == (FMenuBase *)0x0)) ||
     ((int)pFVar19->_padding_ < 1)) {
    cVar8 = (**(code **)(*(longlong *)CVarSlateDismissMenuStacksOnFocusLost._8_8_ + 0xc0))();
    if (cVar8 != '\0') {
      DismissInternal(this,0);
    }
  }
  else {
    pFVar5 = (this->Stack).AllocatorInstance.Data;
    iVar13 = (this->Stack).ArrayNum;
    for (pFVar15 = pFVar5; pFVar15 != pFVar5 + (longlong)iVar13 * 0x10; pFVar15 = pFVar15 + 0x10) {
      iVar7 = (int)pFVar19->_padding_;
      do {
        pFVar14 = pFVar21;
        pFVar20 = pFVar21;
        if (iVar7 == 0) break;
        LOCK();
        iVar9 = (int)pFVar19->_padding_;
        bVar22 = iVar7 == iVar9;
        if (bVar22) {
          *(int *)&pFVar19->_padding_ = iVar7 + 1;
          iVar9 = iVar7;
        }
        UNLOCK();
        pFVar14 = pFVar19;
        pFVar20 = pFVar16;
        iVar7 = iVar9;
      } while (!bVar22);
      pFVar6 = *(FMenuBase **)pFVar15;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar14);
      if (pFVar6 == pFVar20) {
        iVar13 = (int)((longlong)pFVar15 - (longlong)pFVar5 >> 4);
        if (iVar13 != -1) goto LAB_1426ca2bf;
        goto LAB_1426ca299;
      }
    }
    iVar13 = -1;
LAB_1426ca299:
    bVar22 = ::FDebug::CheckVerifyFailedImpl2
                       ("ActivatedIndex != INDEX_NONE",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Application\\MenuStack.cpp"
                        ,0x358,L"");
    if (bVar22) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
LAB_1426ca2bf:
    uVar18 = iVar13 + 1;
    if ((int)uVar18 < (this->Stack).ArrayNum) {
      lVar17 = (longlong)(int)uVar18 << 4;
      do {
        uVar10 = 0;
        if ((int)uVar18 < (this->Stack).ArrayNum) {
          uVar10 = ~uVar18 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar22)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar5 = (this->Stack).AllocatorInstance.Data;
        if ((*(longlong *)(pFVar5 + lVar17) == 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar22)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (*(char *)(*(longlong *)(pFVar5 + lVar17) + 0x49) != '\0') {
          uVar10 = 0;
          if ((int)uVar18 < (this->Stack).ArrayNum) {
            uVar10 = ~uVar18 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar5 = (this->Stack).AllocatorInstance.Data;
          pTVar4 = *(TReferenceControllerBase<1> **)(pFVar5 + (longlong)(int)uVar18 * 0x10 + 8);
          lVar17 = *(longlong *)(pFVar5 + (longlong)(int)uVar18 * 0x10);
          if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
            UNLOCK();
          }
          pFVar5 = (this->Stack).AllocatorInstance.Data;
          pFVar15 = pFVar5;
          if (pFVar5 == pFVar5 + (longlong)(this->Stack).ArrayNum * 0x10) goto LAB_1426ca485;
          goto LAB_1426ca456;
        }
        uVar18 = uVar18 + 1;
        lVar17 = lVar17 + 0x10;
      } while ((int)uVar18 < (this->Stack).ArrayNum);
    }
  }
LAB_1426ca385:
  if (pFVar19 != (FMenuBase *)0x0) {
    LOCK();
    puVar1 = (undefined1 *)((longlong)&pFVar19->_padding_ + 4);
    iVar13 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if (iVar13 == 1) {
      (**(code **)(pFVar19->_padding_ + 8))(pFVar19,1);
    }
  }
LAB_1426ca3a4:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
LAB_1426ca456:
  if (*(longlong *)pFVar15 != lVar17) goto code_r0x0001426ca45b;
  iVar13 = (int)((longlong)pFVar15 - (longlong)pFVar5 >> 4);
  if (iVar13 != -1) {
    DismissInternal(this,iVar13);
  }
LAB_1426ca485:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  goto LAB_1426ca385;
code_r0x0001426ca45b:
  pFVar15 = pFVar15 + 0x10;
  if (pFVar15 == pFVar5 + (longlong)(this->Stack).ArrayNum * 0x10) goto code_r0x0001426ca464;
  goto LAB_1426ca456;
code_r0x0001426ca464:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  goto LAB_1426ca385;
}

// OnWindowDestroyed @ 1426ca800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FMenuStack::OnWindowDestroyed(FMenuStack *this,TSharedRef<SWindow,1> *param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  SWindow *pSVar4;
  TReferenceControllerBase<1> *pTVar5;
  FMenuBase *pFVar6;
  code *pcVar7;
  bool bVar8;
  FWidgetPath *pFVar9;
  TSharedPtr<FMenuBase,1> *pTVar10;
  ForElementType<FArrangedWidget> FVar11;
  TReferenceControllerBase<1> *pTVar12;
  undefined1 auStackY_1d8 [32];
  <lambda_1> local_1a8;
  TSharedRef<IMenu,1> local_198;
  FWidgetPath local_188;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  pSVar4 = (this->HostWindow).Object;
  if ((pSVar4 == (SWindow *)0x0) || (pSVar4 != param_1->Object)) {
    pTVar5 = (param_1->SharedReferenceCount).ReferenceController;
    local_1a8.InWindow.Object = param_1->Object;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_1a8.InWindow.SharedReferenceCount.ReferenceController = pTVar5;
    pTVar10 = TArray<TSharedPtr<FMenuBase,1>,TSizedDefaultAllocator<32>_>::
              FindByPredicate<_FMenuStack::FindMenuFromWindow_::__l2::<lambda_1>_>
                        (&this->Stack,&local_1a8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    if (pTVar10 == (TSharedPtr<FMenuBase,1> *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
      pTVar12 = (TReferenceControllerBase<1> *)0x0;
    }
    else {
      pFVar6 = pTVar10->Object;
      pTVar12 = (pTVar10->SharedReferenceCount).ReferenceController;
      if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
      if (pFVar6 != (FMenuBase *)0x0) {
        if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_198.Object = (IMenu *)pFVar6;
        local_198.SharedReferenceCount.ReferenceController = pTVar12;
        if ((pFVar6 == (FMenuBase *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x25d,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        OnMenuDestroyed(this,&local_198);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  }
  else {
    DestructItems<TSharedPtr<FMenuBase,1>,int>
              ((TSharedPtr<FMenuBase,1> *)(this->Stack).AllocatorInstance.Data,
               (this->Stack).ArrayNum);
    piVar1 = &(this->Stack).ArrayMax;
    (this->Stack).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->Stack).AllocatorInstance,0,piVar1);
    }
    bVar8 = 1 < *(int *)&(this->CachedContentMap).field_0x48;
    if (!bVar8) {
      TSet<TTuple<TSharedPtr<SWidget_const_,1>,TSharedPtr<FMenuBase,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<SWidget_const_,1>,TSharedPtr<FMenuBase,1>,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<TSharedPtr<SWidget_const_,1>,TSharedPtr<FMenuBase,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<SWidget_const_,1>,TSharedPtr<FMenuBase,1>,0>,FDefaultSetAllocator>
                        *)&this->CachedContentMap);
    }
    TSparseArray<TSparseSetElement<TTuple<TSharedPtr<SWidget_const_,1>,TSharedPtr<FMenuBase,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<TSharedPtr<SWidget_const_,1>,TSharedPtr<FMenuBase,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)&this->CachedContentMap,0,*(int *)&(this->CachedContentMap).field_0x8);
    puVar2 = &(this->CachedContentMap).field_0xc;
    *(undefined4 *)&(this->CachedContentMap).field_0x8 = 0;
    if (*(int *)puVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,(ForAnyElementType *)&this->CachedContentMap,0,(int *)puVar2);
    }
    *(undefined4 *)&(this->CachedContentMap).field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->CachedContentMap).field_0x34 = 0;
    iVar3 = *(int *)&(this->CachedContentMap).field_0x2c;
    *(undefined4 *)&(this->CachedContentMap).field_0x28 = 0;
    if ((iVar3 < 0) || (0x80 < iVar3)) {
      *(undefined4 *)&(this->CachedContentMap).field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&(this->CachedContentMap).field_0x10,0);
    }
    if (bVar8) {
      *(undefined4 *)&(this->CachedContentMap).field_0x48 = 1;
      TSet<TTuple<TSharedPtr<SWidget_const_,1>,TSharedPtr<FMenuBase,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<SWidget_const_,1>,TSharedPtr<FMenuBase,1>,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<TSharedPtr<SWidget_const_,1>,TSharedPtr<FMenuBase,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<SWidget_const_,1>,TSharedPtr<FMenuBase,1>,0>,FDefaultSetAllocator>
                *)&this->CachedContentMap);
    }
    pFVar9 = FWidgetPath::FWidgetPath(&local_188);
    SetHostPath(this,pFVar9);
    if (local_188.VirtualPointerPositions.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_188.VirtualPointerPositions.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_188.TopLevelWindow.SharedReferenceCount.ReferenceController);
    FVar11 = (ForElementType<FArrangedWidget>)&local_188.Widgets.Array;
    if (local_188.Widgets.Array.AllocatorInstance.SecondaryData !=
        (ForElementType<FArrangedWidget>)0x0) {
      FVar11 = local_188.Widgets.Array.AllocatorInstance.SecondaryData;
    }
    DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar11,local_188.Widgets.Array.ArrayNum);
    if (local_188.Widgets.Array.AllocatorInstance.SecondaryData !=
        (ForElementType<FArrangedWidget>)0x0) {
      FMemory::Free((void *)local_188.Widgets.Array.AllocatorInstance.SecondaryData);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// PostPush @ 1426caf00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMenuStack::PostPush
          (FMenuStack *this,TSharedPtr<IMenu,1> *param_1,TSharedRef<FMenuBase,1> *param_2,
          EShouldThrottle param_3,bool param_4)

{
  TArray<TSharedPtr<FMenuBase,1>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FThrottleRequest FVar8;
  undefined8 *puVar9;
  ulonglong *puVar10;
  FSlateThrottleManager *this_00;
  undefined4 extraout_var;
  uint uVar11;
  atomic<int> *paVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  int local_148;
  FMenuBase *local_140;
  TReferenceControllerBase<1> *local_138;
  FMenuBase *local_130;
  TReferenceControllerBase<1> *local_128;
  TSet<TTuple<TSharedPtr<SWidget_const_,1>,TSharedPtr<FMenuBase,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<SWidget_const_,1>,TSharedPtr<FMenuBase,1>,0>,FDefaultSetAllocator>
  *local_120;
  TSharedPtr<SWidget_const_,1> local_118;
  undefined1 local_108 [16];
  longlong local_f8;
  undefined8 local_f0;
  TReferenceControllerBase<1> *local_e8;
  FMenuBase *local_e0;
  TReferenceControllerBase<1> *local_d8;
  undefined8 local_d0;
  TReferenceControllerBase<1> *local_c8;
  FMenuBase *local_c0;
  TReferenceControllerBase<1> *local_b8;
  undefined8 *local_b0;
  FMenuBase **local_a8;
  undefined8 *local_a0;
  FMenuBase **local_98;
  undefined1 local_90 [8];
  TReferenceControllerBase<1> *local_88;
  undefined1 local_80 [8];
  TReferenceControllerBase<1> *local_78;
  undefined1 local_70 [8];
  TReferenceControllerBase<1> *local_68;
  FReadAccessScope local_60;
  
  pTVar1 = &this->Stack;
  local_148 = 0;
  if (param_1->Object != (IMenu *)0x0) {
    pFVar13 = (pTVar1->AllocatorInstance).Data;
    for (pFVar14 = pFVar13; pFVar14 != pFVar13 + (longlong)(this->Stack).ArrayNum * 0x10;
        pFVar14 = pFVar14 + 0x10) {
      if (*(IMenu **)pFVar14 == param_1->Object) {
        local_148 = (int)((longlong)pFVar14 - (longlong)pFVar13 >> 4);
        if (local_148 != -1) goto LAB_1426cafa1;
        goto LAB_1426caf7b;
      }
    }
    local_148 = -1;
LAB_1426caf7b:
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("ParentIndex != INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Application\\MenuStack.cpp"
                       ,0x249,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
LAB_1426cafa1:
    local_148 = local_148 + 1;
  }
  iVar7 = local_148;
  if (!param_4) {
    local_140 = param_2->Object;
    local_138 = (param_2->SharedReferenceCount).ReferenceController;
    if (local_138 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_138->SharedReferenceCount = (atomic<int>)((int)local_138->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar13 = (pTVar1->AllocatorInstance).Data;
    if (((pFVar13 <= (FScriptContainerElement *)&local_140) &&
        ((FScriptContainerElement *)&local_140 < pFVar13 + (longlong)(this->Stack).ArrayMax * 0x10))
       && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar7 = (this->Stack).ArrayNum;
    piVar2 = &(this->Stack).ArrayMax;
    if (iVar7 == *piVar2) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar1->AllocatorInstance,piVar2);
      (this->Stack).ArrayNum = iVar7;
    }
    pFVar13 = (pTVar1->AllocatorInstance).Data;
    (this->Stack).ArrayNum = iVar7 + 1;
    lVar15 = (longlong)local_148 * 0x10;
    pFVar13 = pFVar13 + lVar15;
    memmove(pFVar13 + 0x10,pFVar13,(longlong)(iVar7 - local_148) << 4);
    pFVar13 = (pTVar1->AllocatorInstance).Data;
    *(FMenuBase **)(pFVar13 + lVar15) = local_140;
    *(TReferenceControllerBase<1> **)(pFVar13 + lVar15 + 8) = local_138;
    local_138 = (TReferenceControllerBase<1> *)0x0;
    local_140 = (FMenuBase *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    local_e0 = param_2->Object;
    local_d8 = (param_2->SharedReferenceCount).ReferenceController;
    if (local_d8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_d8->SharedReferenceCount = (atomic<int>)((int)local_d8->SharedReferenceCount + 1);
      UNLOCK();
    }
    puVar9 = (undefined8 *)
             (**(code **)(param_2->Object->_padding_ + 0x20))(param_2->Object,local_90);
    local_f0 = *puVar9;
    local_e8 = (TReferenceControllerBase<1> *)puVar9[1];
    if (local_e8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_e8->SharedReferenceCount = (atomic<int>)((int)local_e8->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_b0 = &local_f0;
    local_a8 = &local_e0;
    TSet<TTuple<TSharedPtr<SWidget_const_,1>,TSharedPtr<FMenuBase,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<SWidget_const_,1>,TSharedPtr<FMenuBase,1>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<TSharedPtr<SWidget_const_,1>_&&,TSharedPtr<FMenuBase,1>_&&>_>
              ((TSet<TTuple<TSharedPtr<SWidget_const_,1>,TSharedPtr<FMenuBase,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<SWidget_const_,1>,TSharedPtr<FMenuBase,1>,0>,FDefaultSetAllocator>
                *)&this->CachedContentMap,
               (TPairInitializer<TSharedPtr<SWidget_const_,1>_&&,TSharedPtr<FMenuBase,1>_&&> *)
               local_108,(bool *)&local_b0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_e8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_88);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_d8);
    iVar7 = local_148 + 1;
  }
  if (iVar7 < (this->Stack).ArrayNum) {
    if ((iVar7 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar13 = (this->Stack).AllocatorInstance.Data;
    lVar16 = (longlong)iVar7;
    pTVar3 = *(TReferenceControllerBase<1> **)(pFVar13 + lVar16 * 0x10 + 8);
    lVar15 = *(longlong *)(pFVar13 + lVar16 * 0x10);
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar13 = (this->Stack).AllocatorInstance.Data;
    for (pFVar14 = pFVar13; local_f8 = lVar16,
        pFVar14 != pFVar13 + (longlong)(this->Stack).ArrayNum * 0x10; pFVar14 = pFVar14 + 0x10) {
      if (*(longlong *)pFVar14 == lVar15) {
        iVar7 = (int)((longlong)pFVar14 - (longlong)pFVar13 >> 4);
        if (iVar7 != -1) {
          DismissInternal(this,iVar7);
        }
        break;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    uVar17 = (this->Stack).ArrayNum - 1;
    lVar15 = (longlong)(int)uVar17;
    if (lVar16 <= lVar15) {
      local_120 = (TSet<TTuple<TSharedPtr<SWidget_const_,1>,TSharedPtr<FMenuBase,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<SWidget_const_,1>,TSharedPtr<FMenuBase,1>,0>,FDefaultSetAllocator>
                   *)&this->CachedContentMap;
      pTVar1 = &this->Stack;
      lVar16 = lVar15 << 4;
      do {
        uVar11 = 0;
        if ((int)uVar17 < (this->Stack).ArrayNum) {
          uVar11 = ~uVar17 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar13 = (pTVar1->AllocatorInstance).Data;
        if ((*(longlong *)(pFVar13 + lVar16) == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        plVar4 = *(longlong **)(pFVar13 + lVar16);
        puVar10 = (ulonglong *)(**(code **)(*plVar4 + 0x20))(plVar4,local_80);
        pTVar3 = (TReferenceControllerBase<1> *)puVar10[1];
        local_118.Object = (SWidget *)*puVar10;
        if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
          paVar12 = (atomic<int> *)&DAT_00000008;
        }
        else {
          paVar12 = &pTVar3->SharedReferenceCount;
          LOCK();
          *paVar12 = (atomic<int>)((int)*paVar12 + 1);
          UNLOCK();
          LOCK();
          *paVar12 = (atomic<int>)((int)*paVar12 + 1);
          UNLOCK();
        }
        local_118.SharedReferenceCount.ReferenceController = pTVar3;
        if (*(int *)&(local_120->Elements).field_0x8 != *(int *)&(local_120->Elements).field_0x34) {
          if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            *paVar12 = (atomic<int>)((int)*paVar12 + 1);
            UNLOCK();
          }
          uVar11 = ((uint)((ulonglong)local_118.Object >> 0x14) & 0xffff ^
                   (uint)((ulonglong)local_118.Object >> 4)) * -0x7a143595;
          uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar3);
          TSet<TTuple<TSharedPtr<SWidget_const_,1>,TSharedPtr<FMenuBase,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<SWidget_const_,1>,TSharedPtr<FMenuBase,1>,0>,FDefaultSetAllocator>
          ::RemoveImpl<TSharedPtr<SWidget_const_,1>_>(local_120,uVar11 >> 0x10 ^ uVar11,&local_118);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_78);
        uVar11 = 0;
        if ((int)uVar17 < (this->Stack).ArrayNum) {
          uVar11 = ~uVar17 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar13 = (pTVar1->AllocatorInstance).Data + lVar16;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (*(TReferenceControllerBase<1> **)(pFVar13 + 8));
        iVar7 = ~uVar17 + (this->Stack).ArrayNum;
        if (iVar7 != 0) {
          memmove(pFVar13,pFVar13 + 0x10,(longlong)iVar7 << 4);
        }
        piVar2 = &(this->Stack).ArrayNum;
        *piVar2 = *piVar2 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&pTVar1->AllocatorInstance,(this->Stack).ArrayNum,&(this->Stack).ArrayMax)
        ;
        uVar17 = uVar17 - 1;
        lVar15 = lVar15 + -1;
        lVar16 = lVar16 + -0x10;
      } while (local_f8 <= lVar15);
    }
  }
  if (param_4) {
    if (local_148 != (this->Stack).ArrayNum) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &MenuStackInternal::MenuStackPushDebuggingInfo,&local_60);
      if ((MenuStackInternal::MenuStackPushDebuggingInfo._16_4_ != 0) &&
         (MenuStackInternal::MenuStackPushDebuggingInfo._8_8_ != 0)) {
        (**(code **)(*(longlong *)MenuStackInternal::MenuStackPushDebuggingInfo._8_8_ + 0x68))();
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_60);
      if (2 < (byte)LogSlate._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
      }
    }
    local_130 = param_2->Object;
    local_128 = (param_2->SharedReferenceCount).ReferenceController;
    if (local_128 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_128->SharedReferenceCount = (atomic<int>)((int)local_128->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar13 = (this->Stack).AllocatorInstance.Data;
    if (((pFVar13 <= (FScriptContainerElement *)&local_130) &&
        ((FScriptContainerElement *)&local_130 < pFVar13 + (longlong)(this->Stack).ArrayMax * 0x10))
       && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar7 = (this->Stack).ArrayNum;
    piVar2 = &(this->Stack).ArrayMax;
    if (iVar7 == *piVar2) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&(this->Stack).AllocatorInstance,piVar2);
    }
    (this->Stack).ArrayNum = iVar7 + 1;
    pFVar13 = (this->Stack).AllocatorInstance.Data + (longlong)iVar7 * 0x10;
    *(FMenuBase **)pFVar13 = local_130;
    *(TReferenceControllerBase<1> **)(pFVar13 + 8) = local_128;
    local_128 = (TReferenceControllerBase<1> *)0x0;
    local_130 = (FMenuBase *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    local_c0 = param_2->Object;
    local_b8 = (param_2->SharedReferenceCount).ReferenceController;
    if (local_b8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_b8->SharedReferenceCount = (atomic<int>)((int)local_b8->SharedReferenceCount + 1);
      UNLOCK();
    }
    puVar9 = (undefined8 *)
             (**(code **)(param_2->Object->_padding_ + 0x20))(param_2->Object,local_70);
    local_d0 = *puVar9;
    local_c8 = (TReferenceControllerBase<1> *)puVar9[1];
    if (local_c8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_c8->SharedReferenceCount = (atomic<int>)((int)local_c8->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_a0 = &local_d0;
    local_98 = &local_c0;
    TSet<TTuple<TSharedPtr<SWidget_const_,1>,TSharedPtr<FMenuBase,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<SWidget_const_,1>,TSharedPtr<FMenuBase,1>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<TSharedPtr<SWidget_const_,1>_&&,TSharedPtr<FMenuBase,1>_&&>_>
              ((TSet<TTuple<TSharedPtr<SWidget_const_,1>,TSharedPtr<FMenuBase,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<SWidget_const_,1>,TSharedPtr<FMenuBase,1>,0>,FDefaultSetAllocator>
                *)&this->CachedContentMap,
               (TPairInitializer<TSharedPtr<SWidget_const_,1>_&&,TSharedPtr<FMenuBase,1>_&&> *)
               (local_108 + 4),(bool *)&local_a0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_c8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_68);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_b8);
  }
  if (((this->ThrottleHandle).Index == -1) && (param_3 == Yes)) {
    this_00 = FSlateThrottleManager::Get();
    FVar8 = FSlateThrottleManager::EnterResponsiveMode(this_00);
    (this->ThrottleHandle).Index = *(int *)CONCAT44(extraout_var,FVar8.Index);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// PrePush @ 1426cbde0

/* WARNING: Enum "Type": Some values do not have unique names */

FPrePushResults * __thiscall
FMenuStack::PrePush(FMenuStack *this,FPrePushResults *__return_storage_ptr__,FPrePushArgs *param_1)

{
  FSlateRect *pFVar1;
  float *pfVar2;
  ESlideDirection EVar3;
  TReferenceControllerBase<1> *pTVar4;
  SWidget *pSVar5;
  TVector2<float>_u_0 TVar6;
  code *pcVar7;
  int iVar8;
  TConsoleVariableData<int> *pTVar9;
  SPopup *pSVar10;
  FSharedReferencer<1> FVar11;
  bool bVar12;
  char cVar13;
  byte bVar14;
  FSlateApplication *pFVar15;
  FPrePushResults *pFVar16;
  TSharedPtr<FGenericWindow,1> *pTVar17;
  FArguments *pFVar18;
  TSharedRef<SWidget,1> *pTVar19;
  FDeprecateSlateVector2D FVar20;
  longlong lVar21;
  FSlateRect *pFVar22;
  int iVar23;
  float fVar24;
  float fVar25;
  FOptionalSize FVar26;
  FOptionalSize FVar27;
  undefined8 local_res8;
  T0RequiredArgs local_res10 [8];
  FLLMScope local_res18 [2];
  float local_res20;
  T0RequiredArgs *pTVar28;
  undefined4 uVar30;
  ulonglong uVar29;
  TSlateDecl<SPopup,RequiredArgs::T0RequiredArgs> local_368;
  undefined1 local_350 [16];
  float local_340;
  float local_33c;
  float local_338;
  float local_334;
  FName local_330;
  FMemScope local_328;
  TVector2<float>_u_0 local_320;
  TVector2<float>_u_0 local_318;
  FSlateRect local_310;
  TSharedRef<SWidget,1> local_300 [2];
  undefined1 local_2e0 [8];
  undefined1 local_2d8 [16];
  TReferenceControllerBase<1> *pTStack_2c8;
  TSharedPtr<FGenericWindow,1> local_2c0;
  SWidget *local_2b0;
  TReferenceControllerBase<1> *pTStack_2a8;
  TSharedRef<SWidget,1> local_2a0;
  FSlateRect local_290;
  FArguments local_280;
  
  (__return_storage_ptr__->WrappedContent).Object = (SWidget *)0x0;
  (__return_storage_ptr__->WrappedContent).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (__return_storage_ptr__->WidgetToFocus).Object = (SWidget *)0x0;
  (__return_storage_ptr__->WidgetToFocus).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  __return_storage_ptr__->bIsCollapsedByParent = param_1->bIsCollapsedByParent;
  __return_storage_ptr__->bFocusImmediately = param_1->bFocusImmediately;
  if (param_1->bFocusImmediately != false) {
    pTVar4 = (param_1->Content).SharedReferenceCount.ReferenceController;
    pSVar5 = (param_1->Content).Object;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_2d8._8_8_ = (__return_storage_ptr__->WidgetToFocus).Object;
    pTStack_2c8 = (__return_storage_ptr__->WidgetToFocus).SharedReferenceCount.ReferenceController;
    (__return_storage_ptr__->WidgetToFocus).Object = pSVar5;
    (__return_storage_ptr__->WidgetToFocus).SharedReferenceCount.ReferenceController = pTVar4;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_2c8)
    ;
  }
  pFVar15 = FSlateApplication::Get();
  if (pFVar15->bMenuAnimationsEnabled == false) {
LAB_1426cbee6:
    bVar12 = false;
  }
  else {
    pFVar15 = FSlateApplication::Get();
    pTVar9 = TargetFrameRateForResponsiveness.Ref;
    bVar12 = IsInParallelGameThread();
    if (((!bVar12) && (bVar12 = IsInGameThread(), !bVar12)) &&
       (bVar12 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6409875433831007945>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x6c9,"GetShadowIndex() == 0"), bVar12)) {
      pcVar7 = (code *)swi(3);
      pFVar16 = (FPrePushResults *)(*pcVar7)();
      return pFVar16;
    }
    if (__real_3f800000 / (float)pTVar9->ShadowedValue[0] <
        pFVar15->AverageDeltaTimeForResponsiveness) goto LAB_1426cbee6;
    bVar12 = true;
  }
  __return_storage_ptr__->bAllowAnimations = bVar12;
  pFVar15 = FSlateApplication::Get();
  if (((this->HostWindow).Object == (SWindow *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    pFVar16 = (FPrePushResults *)(*pcVar7)();
    return pFVar16;
  }
  pTVar17 = SWindow::GetNativeWindow((this->HostWindow).Object,&local_2c0);
  if ((pTVar17->Object == (FGenericWindow *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    pFVar16 = (FPrePushResults *)(*pcVar7)();
    return pFVar16;
  }
  fVar24 = (float)(**(code **)(pTVar17->Object->_padding_ + 0xf8))();
  fVar25 = (float)(**(code **)(*(longlong *)pFVar15 + 0x58))(pFVar15);
  fVar25 = fVar25 * fVar24;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2c0.SharedReferenceCount.ReferenceController);
  if ((this->ActiveMethod).PopupMethod == CreateNewWindow) {
    pFVar15 = FSlateApplication::Get();
    FSlateApplication::GetWorkArea(pFVar15,&local_310,&param_1->Anchor);
    local_310.Bottom = local_310.Bottom - local_310.Top;
  }
  else {
    if (((this->HostWindow).Object == (SWindow *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar7 = (code *)swi(3);
      pFVar16 = (FPrePushResults *)(*pcVar7)();
      return pFVar16;
    }
    FVar20 = SWindow::GetClientSizeInScreen((this->HostWindow).Object);
    local_310.Bottom = *(float *)((longlong)FVar20 + 4);
  }
  FVar26.Size = (local_310.Bottom * __real_3f4ccccd) / fVar25;
  FVar27.Size = FOptionalSize::Unspecified;
  if ((param_1->TransitionEffect).SlideDirection == ComboButton) {
    FVar27.Size = (param_1->Anchor).Right - (param_1->Anchor).Left;
  }
  pFVar18 = SPopup::FArguments::FArguments(&local_280);
  if (((param_1->Content).Object == (SWidget *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    pFVar16 = (FPrePushResults *)(*pcVar7)();
    return pFVar16;
  }
  pTVar4 = (param_1->Content).SharedReferenceCount.ReferenceController;
  pSVar5 = (param_1->Content).Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pSVar5 == (SWidget *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    pFVar16 = (FPrePushResults *)(*pcVar7)();
    return pFVar16;
  }
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2b0 = (pFVar18->_Content).Widget.Object;
  pTStack_2a8 = (pFVar18->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar18->_Content).Widget.Object = pSVar5;
  (pFVar18->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_2a8);
  FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_330 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_328,&local_330,true);
  pTVar28 = local_res10;
  TSlateDecl<SPopup,RequiredArgs::T0RequiredArgs>::TSlateDecl<SPopup,RequiredArgs::T0RequiredArgs>
            (&local_368,"SPopup",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Application\\MenuStack.cpp"
             ,0x18c,pTVar28);
  uVar30 = (undefined4)((ulonglong)pTVar28 >> 0x20);
  FMemScope::~FMemScope(&local_328);
  FLLMScope::~FLLMScope(local_res18);
  pSVar10 = local_368._Widget.Object;
  if ((local_368._Widget.Object == (SPopup *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    pFVar16 = (FPrePushResults *)(*pcVar7)();
    return pFVar16;
  }
  SWidget::SWidgetConstruct((SWidget *)local_368._Widget.Object,(FSlateBaseNamedArgs *)pFVar18);
  SPopup::Construct(local_368._Widget.Object,pFVar18);
  if ((local_368._Widget.Object == (SPopup *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    pFVar16 = (FPrePushResults *)(*pcVar7)();
    return pFVar16;
  }
  if (((local_368._Widget.Object)->field_0x30 & 0x10) == 0) {
    cVar13 = (**(code **)(*(longlong *)local_368._Widget.Object + 0x228))(local_368._Widget.Object);
    bVar14 = 0;
    if (cVar13 != '\0') goto LAB_1426cc1ca;
  }
  else {
LAB_1426cc1ca:
    bVar14 = 0x20;
  }
  (local_368._Widget.Object)->field_0x30 = (local_368._Widget.Object)->field_0x30 & 0xdf;
  (local_368._Widget.Object)->field_0x30 = (local_368._Widget.Object)->field_0x30 | bVar14;
  if ((local_368._Widget.Object == (SPopup *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    pFVar16 = (FPrePushResults *)(*pcVar7)();
    return pFVar16;
  }
  (local_368._Widget.Object)->field_0x31 = (local_368._Widget.Object)->field_0x31 | 4;
  if ((local_368._Widget.Object == (SPopup *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    pFVar16 = (FPrePushResults *)(*pcVar7)();
    return pFVar16;
  }
  FVar11.ReferenceController = local_368._Widget.SharedReferenceCount.ReferenceController;
  local_368._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_368._Widget.Object = (SPopup *)0x0;
  if ((pSVar10 == (SPopup *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    pFVar16 = (FPrePushResults *)(*pcVar7)();
    return pFVar16;
  }
  if (FVar11.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar11.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar11.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar11.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_368._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_280._Content.Widget.SharedReferenceCount.ReferenceController);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_280);
  local_300[0].Object = (SWidget *)pSVar10;
  local_300[0].SharedReferenceCount.ReferenceController = FVar11.ReferenceController;
  if (FVar11.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar11.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar11.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar29 = CONCAT44(uVar30,FVar26.Size);
  pTVar19 = WrapContent(this,&local_2a0,local_300,FVar27,FVar26,true);
  local_350._8_8_ = (pTVar19->SharedReferenceCount).ReferenceController;
  local_350._0_8_ = pTVar19->Object;
  if ((TReferenceControllerBase<1> *)local_350._8_8_ != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    ((TReferenceControllerBase<1> *)local_350._8_8_)->SharedReferenceCount =
         (atomic<int>)
         ((int)((TReferenceControllerBase<1> *)local_350._8_8_)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__ != (FPrePushResults *)local_350) {
    (__return_storage_ptr__->WrappedContent).Object = (SWidget *)local_350._0_8_;
    local_350._0_8_ = (SWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->WrappedContent).SharedReferenceCount,
               (FSharedReferencer<1> *)(local_350 + 8));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_350._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2a0.SharedReferenceCount.ReferenceController);
  if (((__return_storage_ptr__->WrappedContent).Object == (SWidget *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    pFVar16 = (FPrePushResults *)(*pcVar7)();
    return pFVar16;
  }
  SWidget::SlatePrepass((__return_storage_ptr__->WrappedContent).Object,fVar25);
  if (((__return_storage_ptr__->WrappedContent).Object == (SWidget *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    pFVar16 = (FPrePushResults *)(*pcVar7)();
    return pFVar16;
  }
  FVar20 = SWidget::GetDesiredSize((__return_storage_ptr__->WrappedContent).Object);
  pFVar1 = &param_1->Anchor;
  local_res8._4_4_ = fVar25 * *(float *)((longlong)FVar20 + 4);
  local_res8._0_4_ = fVar25 * *(float *)FVar20;
  (__return_storage_ptr__->ExpectedSize).field0_0x0 = local_res8;
  EVar3 = (param_1->TransitionEffect).SlideDirection;
  local_res20 = (float)(uint)(EVar3 != SubMenu);
  if ((this->ActiveMethod).PopupMethod == CreateNewWindow) {
    pFVar15 = FSlateApplication::Get();
    local_320 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    local_318 = (__return_storage_ptr__->ExpectedSize).field0_0x0;
    FVar20 = (FDeprecateSlateVector2D)
             (**(code **)(*(longlong *)pFVar15 + 0x1d8))
                       (pFVar15,local_2e0,pFVar1,&local_318,uVar29 & 0xffffffffffffff00,&local_320,
                        local_res20,0);
  }
  else {
    lVar21 = 4;
    if (EVar3 != SubMenu) {
      lVar21 = 0xc;
    }
    fVar24 = *(float *)((longlong)&pFVar1->Left + lVar21);
    pFVar22 = (FSlateRect *)&(param_1->Anchor).Right;
    if (EVar3 != SubMenu) {
      pFVar22 = pFVar1;
    }
    fVar25 = pFVar22->Left;
    if (((this->HostWindow).Object == (SWindow *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar7 = (code *)swi(3);
      pFVar16 = (FPrePushResults *)(*pcVar7)();
      return pFVar16;
    }
    pFVar22 = SWindow::GetClientRectInScreen((this->HostWindow).Object,&local_290);
    local_338 = fVar25 + (__return_storage_ptr__->ExpectedSize).field0_0x0._s_0.X;
    local_334 = fVar24 + (__return_storage_ptr__->ExpectedSize).field0_0x0._s_0.Y;
    local_340 = fVar25;
    local_33c = fVar24;
    FVar20 = ComputePopupFitInRect
                       ((FSlateRect *)local_2d8,pFVar1,(EOrientation *)&local_340,
                        (FSlateRect *)&local_res20,SUB81(pFVar22,0));
  }
  TVar6 = *(TVector2<float>_u_0 *)FVar20;
  (__return_storage_ptr__->AnimFinalLocation).field0_0x0 = TVar6;
  (__return_storage_ptr__->AnimStartLocation).field0_0x0 = TVar6;
  if (__return_storage_ptr__->bAllowAnimations == false) goto LAB_1426cc5a0;
  fVar24 = (__return_storage_ptr__->AnimStartLocation).field0_0x0._s_0.X;
  EVar3 = (param_1->TransitionEffect).SlideDirection;
  iVar23 = -1;
  fVar25 = (__return_storage_ptr__->AnimStartLocation).field0_0x0._s_0.Y;
  iVar8 = iVar23;
  if (fVar24 < (__return_storage_ptr__->AnimFinalLocation).field0_0x0._s_0.X ||
      fVar24 == (__return_storage_ptr__->AnimFinalLocation).field0_0x0._s_0.X) {
    iVar8 = 1;
  }
  pfVar2 = &(__return_storage_ptr__->AnimFinalLocation).field0_0x0._s_0.Y;
  if (fVar25 < *pfVar2 || fVar25 == *pfVar2) {
    iVar23 = 1;
  }
  if (EVar3 == ComboButton) {
LAB_1426cc581:
    fVar24 = (float)iVar23 * __real_41f00000;
LAB_1426cc590:
    fVar25 = fVar24 + fVar25;
    if (fVar25 <= 0.0) {
      fVar25 = 0.0;
    }
  }
  else {
    if (EVar3 == TopMenu) {
      fVar24 = (float)iVar23 * __real_42700000;
      goto LAB_1426cc590;
    }
    if (EVar3 == SubMenu) {
      (__return_storage_ptr__->AnimStartLocation).field0_0x0._s_0.X =
           (float)iVar8 * __real_42700000 + fVar24;
      goto LAB_1426cc5a0;
    }
    if (EVar3 == TypeInPopup) goto LAB_1426cc581;
    if (EVar3 != ContextMenu) goto LAB_1426cc5a0;
    (__return_storage_ptr__->AnimStartLocation).field0_0x0._s_0.X =
         (float)iVar8 * __real_41f00000 + fVar24;
    fVar25 = (float)iVar23 * __real_42480000 + fVar25;
  }
  (__return_storage_ptr__->AnimStartLocation).field0_0x0._s_0.Y = fVar25;
LAB_1426cc5a0:
  if (param_1->bFocusImmediately != false) {
    if (param_1->FocusUserIndex == -1) {
      pFVar15 = FSlateApplication::Get();
      FSlateApplication::ReleaseAllPointerCapture(pFVar15);
    }
    else {
      pFVar15 = FSlateApplication::Get();
      FSlateApplication::ReleaseAllPointerCapture(pFVar15,param_1->FocusUserIndex);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar11.ReferenceController);
  return __return_storage_ptr__;
}

// Push @ 1426d3580

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<IMenu,1> * __thiscall
FMenuStack::Push(FMenuStack *this,TSharedRef<IMenu,1> *__return_storage_ptr__,
                TSharedPtr<IMenu,1> *param_1,TSharedRef<SWidget,1> *param_2,
                FDeprecateVector2DParameter *param_3,FPopupTransitionEffect *param_4,bool param_5,
                FDeprecateVector2DParameter *param_6,bool param_7,bool param_8,int param_9)

{
  code *pcVar1;
  bool bVar2;
  FScriptContainerElement *pFVar3;
  TSharedRef<IMenu,1> *pTVar4;
  FScriptContainerElement *pFVar5;
  FSlateRect local_18;
  
  pFVar3 = (this->Stack).AllocatorInstance.Data;
  pFVar5 = pFVar3 + (longlong)(this->Stack).ArrayNum * 0x10;
  if (pFVar3 != pFVar5) {
    do {
      if (*(IMenu **)pFVar3 == param_1->Object) goto LAB_1426d35eb;
      pFVar3 = pFVar3 + 0x10;
    } while (pFVar3 != pFVar5);
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Stack.Contains(InParentMenu)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Application\\MenuStack.cpp"
                     ,0x115,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TSharedRef<IMenu,1> *)(*pcVar1)();
    return pTVar4;
  }
LAB_1426d35eb:
  if ((this->HostWindow).Object == (SWindow *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("HostWindow.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Application\\MenuStack.cpp"
                       ,0x116,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSharedRef<IMenu,1> *)(*pcVar1)();
      return pTVar4;
    }
  }
  local_18.Left = *(float *)param_3;
  local_18.Top = *(float *)&param_3->field_0x4;
  local_18.Right = local_18.Left + *(float *)param_6;
  local_18.Bottom = local_18.Top + *(float *)&param_6->field_0x4;
  PushInternal(this,__return_storage_ptr__,param_1,param_2,&local_18,param_4,param_5,Yes,param_7,
               param_8,param_9);
  return __return_storage_ptr__;
}

// Push @ 1426d36d0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<IMenu,1> * __thiscall
FMenuStack::Push(FMenuStack *this,TSharedRef<IMenu,1> *__return_storage_ptr__,FWidgetPath *param_1,
                TSharedRef<SWidget,1> *param_2,FDeprecateVector2DParameter *param_3,
                FPopupTransitionEffect *param_4,bool param_5,FDeprecateVector2DParameter *param_6,
                TOptional<EPopupMethod> param_7,bool param_8,bool param_9,int param_10)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  SWindow *this_00;
  ForElementType<FArrangedWidget> FVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  FSlateApplication *pFVar11;
  longlong *plVar12;
  TSharedRef<SWindow,1> *pTVar13;
  TSharedPtr<IMenu,1> *pTVar14;
  TSharedRef<IMenu,1> *pTVar15;
  ForElementType<FArrangedWidget> FVar16;
  uint uVar17;
  TReferenceControllerBase<1> *pTVar18;
  TReferenceControllerBase<1> *pTVar19;
  SWidget *pSVar20;
  longlong lVar21;
  EPopupMethod *pEVar22;
  EShouldThrottle *pEVar23;
  undefined6 in_stack_0000004a;
  TSharedPtr<IMenu,1> local_178;
  char local_168;
  longlong local_160;
  TReferenceControllerBase<1> *pTStack_158;
  EPopupMethod local_150;
  EShouldThrottle aEStack_14f [7];
  FSlateRect local_148;
  char local_138 [8];
  longlong local_130;
  TReferenceControllerBase<1> *local_128;
  undefined1 local_120;
  undefined1 local_11f;
  undefined1 local_118;
  longlong local_110;
  TReferenceControllerBase<1> *pTStack_108;
  EPopupMethod local_100 [8];
  TSharedPtr<SWidget,1> local_f8;
  FDestructionSentinel local_e8;
  undefined1 local_d0 [8];
  TReferenceControllerBase<1> *local_c8;
  undefined1 local_c0 [8];
  TReferenceControllerBase<1> *local_b8;
  TSharedRef<SWindow,1> local_b0;
  TSharedPtr<IMenu,1> local_a0 [6];
  
  pFVar11 = FSlateApplication::Get();
  if (param_10 == -1) {
    plVar12 = (longlong *)(**(code **)(*(longlong *)pFVar11 + 0x98))(pFVar11,local_d0);
    pSVar20 = (SWidget *)*plVar12;
    pTVar18 = (TReferenceControllerBase<1> *)plVar12[1];
    plVar12[1] = 0;
    *plVar12 = 0;
  }
  else {
    plVar12 = (longlong *)(**(code **)(*(longlong *)pFVar11 + 0x170))(pFVar11,local_c0);
    pSVar20 = (SWidget *)*plVar12;
    pTVar18 = (TReferenceControllerBase<1> *)plVar12[1];
    plVar12[1] = 0;
    *plVar12 = 0;
    local_c8 = local_b8;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_c8);
  if (pSVar20 != (SWidget *)0x0) {
    pTVar13 = FWidgetPath::GetWindow(param_1,&local_b0);
    this_00 = pTVar13->Object;
    if (pTVar18 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar18->SharedReferenceCount = (atomic<int>)((int)pTVar18->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_f8.Object = pSVar20;
    local_f8.SharedReferenceCount.ReferenceController = pTVar18;
    SWindow::SetWidgetToFocusOnActivate(this_00,&local_f8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b0.SharedReferenceCount.ReferenceController);
  }
  local_178.Object = (IMenu *)0x0;
  local_178.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  fVar2 = *(float *)param_3;
  fVar3 = *(float *)&param_3->field_0x4;
  fVar4 = *(float *)param_6;
  fVar5 = *(float *)&param_6->field_0x4;
  if (0 < (this->Stack).ArrayNum) {
    pTVar14 = FindMenuInWidgetPath(this,local_a0,param_1);
    if (&local_178 != pTVar14) {
      local_178.Object = pTVar14->Object;
      pTVar14->Object = (IMenu *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&local_178.SharedReferenceCount,&pTVar14->SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a0[0].SharedReferenceCount.ReferenceController);
    if (((this->HostWindow).Object == (SWindow *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("HostWindow.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Application\\MenuStack.cpp"
                           ,0xe8,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      pTVar15 = (TSharedRef<IMenu,1> *)(*pcVar7)();
      return pTVar15;
    }
    if (local_178.Object != (IMenu *)0x0) goto LAB_1426d3a0d;
  }
  if (((EPopupMethod *)CONCAT62(in_stack_0000004a,param_7))[1] == CreateNewWindow) {
    uVar17 = (param_1->Widgets).Array.ArrayNum - 1;
    if (-1 < (int)uVar17) {
      lVar21 = (longlong)(int)uVar17 * 0x48;
      do {
        uVar10 = 0;
        if ((int)uVar17 < (param_1->Widgets).Array.ArrayNum) {
          uVar10 = ~uVar17 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          pTVar15 = (TSharedRef<IMenu,1> *)(*pcVar7)();
          return pTVar15;
        }
        FVar6 = (param_1->Widgets).Array.AllocatorInstance.SecondaryData;
        FVar16 = (ForElementType<FArrangedWidget>)&(param_1->Widgets).Array;
        if (FVar6 != (ForElementType<FArrangedWidget>)0x0) {
          FVar16 = FVar6;
        }
        plVar12 = *(longlong **)((longlong)FVar16 + 0x38 + lVar21);
        (**(code **)(*plVar12 + 0x120))(plVar12,local_138);
        pTVar19 = local_128;
        if (local_138[0] != '\0') {
          local_160 = local_130;
          _local_150 = CONCAT11(local_11f,local_120);
          local_168 = local_138[0];
          pTStack_158 = local_128;
          local_128 = (TReferenceControllerBase<1> *)0x0;
          local_130 = 0;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          goto LAB_1426d3984;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_128);
        lVar21 = lVar21 + -0x48;
        uVar17 = uVar17 - 1;
      } while (-1 < (int)uVar17);
    }
    _local_150 = 0x100;
    local_160 = 0;
    pTStack_158 = (TReferenceControllerBase<1> *)0x0;
    local_138[0] = '\x01';
    pTVar19 = (TReferenceControllerBase<1> *)0x0;
    local_168 = '\x01';
LAB_1426d3984:
    bVar8 = false;
    pEVar22 = &local_150;
    bVar9 = true;
    pEVar23 = aEStack_14f;
    plVar12 = &local_160;
  }
  else {
    pEVar22 = local_100;
    pEVar23 = (EShouldThrottle *)((longlong)local_100 + 1);
    local_100[0] = *(EPopupMethod *)CONCAT62(in_stack_0000004a,param_7);
    local_110 = 0;
    pTStack_108 = (TReferenceControllerBase<1> *)0x0;
    local_118 = 1;
    plVar12 = &local_110;
    local_100[1] = Yes;
    local_138[0] = '\x01';
    bVar8 = true;
    bVar9 = false;
    pTVar19 = pTStack_158;
  }
  plVar1 = &(this->ActiveMethod)._padding_;
  *(char *)&(this->ActiveMethod)._padding_ = local_138[0];
  if (plVar1 != plVar12) {
    *plVar1 = *plVar12;
    *plVar12 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&(this->ActiveMethod)._padding_,
               (FSharedReferencer<1> *)(plVar12 + 1));
    pTVar19 = pTStack_158;
  }
  (this->ActiveMethod).PopupMethod = *pEVar22;
  (this->ActiveMethod).ShouldThrottle = *pEVar23;
  if (bVar9) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar19);
  }
  if (bVar8) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_108)
    ;
  }
  SetHostPath(this,param_1);
LAB_1426d3a0d:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &MenuStackInternal::MenuStackPushDebuggingInfo,(FWriteAccessScope *)&local_e8);
  if ((MenuStackInternal::MenuStackPushDebuggingInfo._16_4_ != 0) &&
     (MenuStackInternal::MenuStackPushDebuggingInfo._8_8_ != 0)) {
    (*(code *)**(undefined8 **)MenuStackInternal::MenuStackPushDebuggingInfo._8_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&MenuStackInternal::MenuStackPushDebuggingInfo.field_0x8,0,0,
               0x10);
    MenuStackInternal::MenuStackPushDebuggingInfo._16_4_ = 0;
  }
  if (local_e8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e8.Accessor,&local_e8);
  }
  bVar9 = this->bHostWindowGuard;
  this->bHostWindowGuard = true;
  local_148.Left = fVar2;
  local_148.Top = fVar3;
  local_148.Right = fVar2 + fVar4;
  local_148.Bottom = fVar3 + fVar5;
  PushInternal(this,__return_storage_ptr__,&local_178,param_2,&local_148,param_4,param_5,
               (this->ActiveMethod).ShouldThrottle,param_8,param_9,param_10);
  this->bHostWindowGuard = bVar9;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_178.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar18);
  return __return_storage_ptr__;
}

// PushHosted @ 1426d3b80

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<IMenu,1> * __thiscall
FMenuStack::PushHosted
          (FMenuStack *this,TSharedRef<IMenu,1> *__return_storage_ptr__,TSharedPtr<IMenu,1> *param_1
          ,TSharedRef<IMenuHost,1> *param_2,TSharedRef<SWidget,1> *param_3,
          TSharedPtr<SWidget,1> *param_4,FPopupTransitionEffect *param_5,EShouldThrottle param_6,
          bool param_7)

{
  TSharedPtr<FMenuBase,1> *pTVar1;
  IMenuHost *pIVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  float fVar5;
  FSharedReferencer<1> FVar6;
  bool bVar7;
  TSharedRef<IMenu,1> *pTVar8;
  FMenuInHostWidget *pFVar9;
  TMulticastDelegateRegistration<void___cdecl(TSharedRef<IMenu,1>),FDefaultDelegateUserPolicy>
  *this_00;
  atomic<int> *paVar10;
  TRawPtrProxy<FMenuInHostWidget> local_res8 [2];
  TSharedPtr<IMenu,1> *local_res18;
  TSharedRef<SWidget,1> local_c8;
  FMenuInHostWidget *local_b8;
  FSharedReferencer<1> FStack_b0;
  TSharedPtr<SWidget,1> local_a8;
  undefined8 local_98;
  FSharedReferencer<1> FStack_90;
  TSharedRef<SWidget,1> local_88;
  TSharedPtr<IMenu,1> local_78;
  TSharedRef<FMenuInHostWidget,1> local_68;
  TSharedRef<FMenuBase,1> local_58 [2];
  
  local_res18 = param_1;
  if ((this->HostWindow).Object == (SWindow *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("HostWindow.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Application\\MenuStack.cpp"
                       ,0x138,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedRef<IMenu,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  fVar5 = FOptionalSize::Unspecified;
  bVar7 = param_2->Object->bShowMenuBackground;
  local_88.Object = param_3->Object;
  local_88.SharedReferenceCount.ReferenceController =
       (param_3->SharedReferenceCount).ReferenceController;
  if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  WrapContent(this,&local_c8,&local_88,(FOptionalSize)fVar5,(FOptionalSize)fVar5,bVar7);
  pFVar9 = ::operator_new(0x60);
  FVar6.ReferenceController = local_c8.SharedReferenceCount.ReferenceController;
  if (pFVar9 == (FMenuInHostWidget *)0x0) {
    pFVar9 = (FMenuInHostWidget *)0x0;
  }
  else {
    pIVar2 = param_2->Object;
    pTVar3 = (param_2->SharedReferenceCount).ReferenceController;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (local_c8.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      paVar10 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar10 = &(local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
      LOCK();
      *paVar10 = (atomic<int>)((int)*paVar10 + 1);
      UNLOCK();
    }
    pFVar9->_padding_ = 0;
    pFVar9->_padding_ = 0;
    pFVar9->_padding_ = (longlong)&___7FMenuBase__6B_;
    pFVar9->_padding_ = (longlong)local_c8.Object;
    pFVar9->_padding_ = 0;
    pFVar9->_padding_ = 0;
    pFVar9->_padding_ = 0;
    pFVar9->_padding_ = 2;
    pFVar9->_padding_ = (longlong)local_c8.SharedReferenceCount.ReferenceController;
    if (local_c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar10 = (atomic<int>)((int)*paVar10 + 1);
      UNLOCK();
    }
    *(bool *)((longlong)&pFVar9->_padding_ + 1) = param_7;
    *(undefined1 *)&pFVar9->_padding_ = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_c8.SharedReferenceCount.ReferenceController);
    pFVar9->_padding_ = (longlong)&___7FMenuInHostWidget__6B_;
    (pFVar9->MenuHost).Object = pIVar2;
    (pFVar9->MenuHost).WeakReferenceCount.ReferenceController = pTVar3;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    if (((pFVar9->_padding_ != 0) && (pFVar9->_padding_ != 0)) &&
       (0 < *(int *)(pFVar9->_padding_ + 8))) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InObject || !InObject->DoesSharedInstanceExist()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x7a5,L"Trying to share an already-shared object");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TSharedRef<IMenu,1> *)(*pcVar4)();
        return pTVar8;
      }
    }
  }
  local_res8[0].Object = pFVar9;
  TSharedRef<FMenuInHostWidget,1>::TSharedRef<FMenuInHostWidget,1><FMenuInHostWidget>
            (&local_68,local_res8);
  local_b8 = local_68.Object;
  FStack_b0.ReferenceController = local_68.SharedReferenceCount.ReferenceController;
  if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = &this->PendingNewMenu;
  if (pTVar1 != (TSharedPtr<FMenuBase,1> *)&local_b8) {
    pTVar1->Object = (FMenuBase *)local_68.Object;
    local_b8 = (FMenuInHostWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->PendingNewMenu).SharedReferenceCount,&FStack_b0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_b0.ReferenceController);
  local_a8.Object = local_c8.Object;
  local_a8.SharedReferenceCount.ReferenceController =
       local_c8.SharedReferenceCount.ReferenceController;
  if (FVar6.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar6.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar6.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (param_4 != &local_a8) {
    param_4->Object = local_c8.Object;
    local_a8.Object = (SWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&param_4->SharedReferenceCount,&local_a8.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a8.SharedReferenceCount.ReferenceController);
  this_00 = (TMulticastDelegateRegistration<void___cdecl(TSharedRef<IMenu,1>),FDefaultDelegateUserPolicy>
             *)(**(code **)((local_68.Object)->_padding_ + 0x28))(local_68.Object);
  TMulticastDelegateRegistration<void___cdecl(TSharedRef<IMenu,1>),FDefaultDelegateUserPolicy>::
  AddRaw<FMenuStack>(this_00,(FMenuStack *)(local_res8 + 1),(pmf_423200bd)this);
  local_58[0].Object = (FMenuBase *)local_68.Object;
  local_58[0].SharedReferenceCount.ReferenceController =
       local_68.SharedReferenceCount.ReferenceController;
  if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_78.Object = local_res18->Object;
  local_78.SharedReferenceCount.ReferenceController =
       (local_res18->SharedReferenceCount).ReferenceController;
  if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  PostPush(this,&local_78,local_58,param_6,false);
  local_98 = 0;
  FStack_90.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pTVar1 != (TSharedPtr<FMenuBase,1> *)&local_98) {
    pTVar1->Object = (FMenuBase *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->PendingNewMenu).SharedReferenceCount,&FStack_90);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_90.ReferenceController);
  __return_storage_ptr__->Object = (IMenu *)local_68.Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       local_68.SharedReferenceCount.ReferenceController;
  if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar6.ReferenceController);
  return __return_storage_ptr__;
}

// PushHosted @ 1426d3ec0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<IMenu,1> * __thiscall
FMenuStack::PushHosted
          (FMenuStack *this,TSharedRef<IMenu,1> *__return_storage_ptr__,FWidgetPath *param_1,
          TSharedRef<IMenuHost,1> *param_2,TSharedRef<SWidget,1> *param_3,
          TSharedPtr<SWidget,1> *param_4,FPopupTransitionEffect *param_5,EShouldThrottle param_6,
          bool param_7)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  TSharedPtr<IMenu,1> *pTVar4;
  TSharedRef<IMenu,1> *pTVar5;
  TSharedPtr<IMenu,1> local_48;
  TSharedPtr<IMenu,1> local_38;
  undefined1 local_28;
  undefined8 local_20;
  FSharedReferencer<1> FStack_18;
  undefined2 local_10;
  
  local_48.Object = (IMenu *)0x0;
  local_48.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (0 < (this->Stack).ArrayNum) {
    pTVar4 = FindMenuInWidgetPath(this,&local_38,param_1);
    if (&local_48 != pTVar4) {
      local_48.Object = pTVar4->Object;
      pTVar4->Object = (IMenu *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&local_48.SharedReferenceCount,&pTVar4->SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
    if ((this->HostWindow).Object == (SWindow *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("HostWindow.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Application\\MenuStack.cpp"
                         ,0x125,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TSharedRef<IMenu,1> *)(*pcVar2)();
        return pTVar5;
      }
    }
    if (local_48.Object != (IMenu *)0x0) goto LAB_1426d3fd5;
  }
  local_10._0_1_ = UseCurrentWindow;
  local_28 = 1;
  plVar1 = &(this->ActiveMethod)._padding_;
  local_10 = 0x101;
  local_10._1_1_ = Yes;
  *(undefined1 *)&(this->ActiveMethod)._padding_ = 1;
  local_20 = 0;
  FStack_18.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (plVar1 != &local_20) {
    *plVar1 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&(this->ActiveMethod)._padding_,&FStack_18);
  }
  (this->ActiveMethod).ShouldThrottle = local_10._1_1_;
  (this->ActiveMethod).PopupMethod = (EPopupMethod)local_10;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_18.ReferenceController);
  SetHostPath(this,param_1);
LAB_1426d3fd5:
  PushHosted(this,__return_storage_ptr__,&local_48,param_2,param_3,param_4,param_5,param_6,true);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// PushInternal @ 1426d42e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<IMenu,1> * __thiscall
FMenuStack::PushInternal
          (FMenuStack *this,TSharedRef<IMenu,1> *__return_storage_ptr__,TSharedPtr<IMenu,1> *param_1
          ,TSharedRef<SWidget,1> *param_2,FSlateRect *param_3,FPopupTransitionEffect *param_4,
          bool param_5,EShouldThrottle param_6,bool param_7,bool param_8,int param_9)

{
  EPopupMethod EVar1;
  TReferenceControllerBase<1> *pTVar2;
  FMenuBase *pFVar3;
  bool bVar4;
  bool bVar5;
  TSharedRef<FMenuBase,1> *pTVar6;
  TSharedRef<FMenuBase,1> local_d8;
  TSharedRef<FMenuBase,1> local_c8;
  FPrePushArgs local_b8;
  undefined8 local_88;
  FSharedReferencer<1> FStack_80;
  TSharedRef<FMenuBase,1> local_78;
  FPrePushResults local_68;
  
  local_d8.SharedReferenceCount.ReferenceController =
       (param_2->SharedReferenceCount).ReferenceController;
  local_b8.Content.Object = param_2->Object;
  local_b8.Content.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  bVar4 = false;
  local_b8.TransitionEffect.SlideDirection = None;
  local_b8.FocusUserIndex = -1;
  local_b8.Anchor._0_8_ = ___xmm_bf800000bf800000bf800000bf800000;
  local_b8.Anchor._8_8_ = _UNK_15076c668;
  if (local_d8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_d8.Object = (FMenuBase *)0x0;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            (&local_b8.Content.SharedReferenceCount,&local_d8.SharedReferenceCount);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d8.SharedReferenceCount.ReferenceController);
  local_b8.FocusUserIndex = param_9;
  local_b8.Anchor.Left = param_3->Left;
  local_b8.Anchor.Top = param_3->Top;
  local_b8.Anchor.Right = param_3->Right;
  local_b8.Anchor.Bottom = param_3->Bottom;
  local_b8.TransitionEffect = (FPopupTransitionEffect)param_4->SlideDirection;
  local_b8.bFocusImmediately = param_5;
  local_b8.bIsCollapsedByParent = param_7;
  PrePush(this,&local_68,&local_b8);
  local_d8.Object = (FMenuBase *)param_1->Object;
  local_d8.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if ((this->ActiveMethod).PopupMethod == CreateNewWindow) {
    if (local_d8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar6 = PushNewWindow(this,&local_78,(TSharedPtr<IMenu,1> *)&local_d8,&local_68,param_8,param_9
                          );
    bVar5 = true;
  }
  else {
    if (local_d8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar6 = PushPopup(this,&local_c8,(TSharedPtr<IMenu,1> *)&local_d8,&local_68,param_9);
    bVar4 = true;
    bVar5 = false;
  }
  pTVar2 = (pTVar6->SharedReferenceCount).ReferenceController;
  pFVar3 = pTVar6->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_c8.SharedReferenceCount.ReferenceController);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.SharedReferenceCount.ReferenceController);
  }
  EVar1 = (this->ActiveMethod).PopupMethod;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_c8.Object = (FMenuBase *)param_1->Object;
  local_c8.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_d8.Object = pFVar3;
  local_d8.SharedReferenceCount.ReferenceController = pTVar2;
  PostPush(this,(TSharedPtr<IMenu,1> *)&local_c8,&local_d8,param_6,EVar1 == CreateNewWindow);
  local_88 = 0;
  FStack_80.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->PendingNewMenu != (TSharedPtr<FMenuBase,1> *)&local_88) {
    (this->PendingNewMenu).Object = (FMenuBase *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->PendingNewMenu).SharedReferenceCount,&FStack_80);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_80.ReferenceController);
  __return_storage_ptr__->Object = (IMenu *)pFVar3;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.WidgetToFocus.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.WrappedContent.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.Content.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// PushNewWindow @ 1426d4e40

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<FMenuBase,1> * __thiscall
FMenuStack::PushNewWindow
          (FMenuStack *this,TSharedRef<FMenuBase,1> *__return_storage_ptr__,
          TSharedPtr<IMenu,1> *param_1,FPrePushResults *param_2,bool param_3,int param_4)

{
  byte *pbVar1;
  TReferenceControllerBase<1> *pTVar2;
  SWidget *pSVar3;
  IMenu *pIVar4;
  code *pcVar5;
  float fVar6;
  SWindow *this_00;
  FSharedReferencer<1> FVar7;
  bool bVar8;
  char cVar9;
  byte bVar10;
  TSharedRef<FMenuBase,1> *pTVar11;
  FArguments *pFVar12;
  FMenuInWindow *pFVar13;
  TSharedRef<SWidget,1> *pTVar14;
  atomic<int> *paVar15;
  SWindow **ppSVar16;
  FSlateApplication *this_01;
  SWindow *pSVar17;
  FSharedReferencer<1> FVar18;
  float fVar19;
  SWindow *pSVar20;
  FSharedReferencer<1> FVar21;
  T0RequiredArgs local_res20 [8];
  SWindow *local_4f8;
  FSharedReferencer<1> FStack_4f0;
  FLLMScope local_4e8 [2];
  TSlateDecl<SWindow,RequiredArgs::T0RequiredArgs> local_4e0;
  SWindow *local_4c8;
  FSharedReferencer<1> local_4c0;
  TSharedRef<FMenuInWindow,1> local_4b8;
  FMenuInWindow *local_4a8;
  FSharedReferencer<1> FStack_4a0;
  FName local_498;
  FMemScope local_490;
  TRawPtrProxy<FMenuInWindow> local_488;
  TVector2<float>_u_0 local_480;
  undefined8 local_478;
  FSharedReferencer<1> FStack_470;
  TSharedPtr<SWidget,1> local_468;
  TSharedRef<SWindow,1> local_458;
  SWidget *local_448;
  TReferenceControllerBase<1> *pTStack_440;
  undefined1 local_438 [8];
  TReferenceControllerBase<1> *local_430;
  TSharedRef<SWindow,1> local_428;
  TSharedRef<SWindow,1> local_418;
  TSharedRef<SWidget,1> local_408;
  FCurveHandle local_3f8;
  FCurveSequence local_3e8;
  undefined1 local_378 [544];
  undefined1 local_158 [160];
  FSharedReferencer<1> local_b8;
  TRefCountPtr<ITextData> local_b0;
  undefined1 local_98 [88];
  
  if (((this->ActiveMethod).PopupMethod != CreateNewWindow) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ActiveMethod.GetPopupMethod() == EPopupMethod::CreateNewWindow",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Application\\MenuStack.cpp"
                         ,0x1e1,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    pTVar11 = (TSharedRef<FMenuBase,1> *)(*pcVar5)();
    return pTVar11;
  }
  fVar6 = __real_3f800000;
  bVar8 = param_2->bAllowAnimations;
  fVar19 = __real_3f800000;
  if (bVar8 != false) {
    fVar19 = 0.0;
  }
  pFVar12 = SWindow::FArguments::FArguments((FArguments *)local_378);
  pFVar12->_Type = Menu;
  pFVar12->_SizingRule = Autosized;
  pFVar12->_IsPopupWindow = true;
  pFVar12->_ScreenPosition = (FDeprecateVector2DParameter)(param_2->AnimStartLocation).field0_0x0;
  pFVar12->_AutoCenter = None;
  pFVar12->_ClientSize = (FDeprecateVector2DParameter)(param_2->ExpectedSize).field0_0x0;
  pFVar12->_InitialOpacity = fVar19;
  pFVar12->_AdjustInitialSizeAndPositionForDPIScale = false;
  (pFVar12->_SupportsTransparency).Value = (uint)(bVar8 != false);
  pFVar12->_FocusWhenFirstShown = param_2->bFocusImmediately;
  pFVar12->_FocusUserIndex = param_4;
  pFVar12->_ActivationPolicy = (uint)(param_2->bFocusImmediately != false);
  if (((param_2->WrappedContent).Object == (SWidget *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    pTVar11 = (TSharedRef<FMenuBase,1> *)(*pcVar5)();
    return pTVar11;
  }
  pTVar2 = (param_2->WrappedContent).SharedReferenceCount.ReferenceController;
  pSVar3 = (param_2->WrappedContent).Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pSVar3 == (SWidget *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    pTVar11 = (TSharedRef<FMenuBase,1> *)(*pcVar5)();
    return pTVar11;
  }
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_448 = (pFVar12->_Content).Widget.Object;
  pTStack_440 = (pFVar12->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar12->_Content).Widget.Object = pSVar3;
  (pFVar12->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_440);
  FLLMScope::FLLMScope(local_4e8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_498 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_490,&local_498,true);
  TSlateDecl<SWindow,RequiredArgs::T0RequiredArgs>::TSlateDecl<SWindow,RequiredArgs::T0RequiredArgs>
            (&local_4e0,"SWindow",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Application\\MenuStack.cpp"
             ,0x1ee,local_res20);
  FMemScope::~FMemScope(&local_490);
  FLLMScope::~FLLMScope(local_4e8);
  this_00 = local_4e0._Widget.Object;
  if ((local_4e0._Widget.Object == (SWindow *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    pTVar11 = (TSharedRef<FMenuBase,1> *)(*pcVar5)();
    return pTVar11;
  }
  SWidget::SWidgetConstruct((SWidget *)local_4e0._Widget.Object,(FSlateBaseNamedArgs *)pFVar12);
  SWindow::Construct(local_4e0._Widget.Object,pFVar12);
  if ((local_4e0._Widget.Object == (SWindow *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    pTVar11 = (TSharedRef<FMenuBase,1> *)(*pcVar5)();
    return pTVar11;
  }
  if (((local_4e0._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar9 = (**(code **)((local_4e0._Widget.Object)->_padding_ + 0x228))(local_4e0._Widget.Object);
    bVar10 = 0;
    if (cVar9 == '\0') goto LAB_1426d50e5;
  }
  bVar10 = 0x20;
LAB_1426d50e5:
  *(byte *)&(local_4e0._Widget.Object)->_padding_ =
       (byte)(local_4e0._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_4e0._Widget.Object)->_padding_ =
       (byte)(local_4e0._Widget.Object)->_padding_ | bVar10;
  if ((local_4e0._Widget.Object == (SWindow *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    pTVar11 = (TSharedRef<FMenuBase,1> *)(*pcVar5)();
    return pTVar11;
  }
  pbVar1 = (byte *)((longlong)&(local_4e0._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((local_4e0._Widget.Object == (SWindow *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    pTVar11 = (TSharedRef<FMenuBase,1> *)(*pcVar5)();
    return pTVar11;
  }
  FVar7.ReferenceController = local_4e0._Widget.SharedReferenceCount.ReferenceController;
  local_4e0._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_4e0._Widget.Object = (SWindow *)0x0;
  if ((this_00 == (SWindow *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    pTVar11 = (TSharedRef<FMenuBase,1> *)(*pcVar5)();
    return pTVar11;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_98);
  if ((void *)local_98._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_98._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_98);
  if (local_b0.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_b0.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_158);
  if ((void *)local_158._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_158._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_158);
  if ((ITextData *)local_378._520_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_378._520_8_ + 0x10))();
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_378);
  local_4c8 = this_00;
  local_4c0.ReferenceController = FVar7.ReferenceController;
  if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar7.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar7.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->PendingNewWindow != (TSharedPtr<SWindow,1> *)&local_4c8) {
    (this->PendingNewWindow).Object = this_00;
    local_4c8 = (SWindow *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->PendingNewWindow).SharedReferenceCount,&local_4c0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4c0.ReferenceController);
  if ((param_2->bFocusImmediately != false) &&
     (pSVar3 = (param_2->WidgetToFocus).Object, pSVar3 != (SWidget *)0x0)) {
    local_468.SharedReferenceCount.ReferenceController =
         (param_2->WidgetToFocus).SharedReferenceCount.ReferenceController;
    if (local_468.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_468.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_468.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_468.Object = pSVar3;
    SWindow::SetWidgetToFocusOnActivate(this_00,&local_468);
  }
  pFVar13 = ::operator_new(0x60);
  if (pFVar13 == (FMenuInWindow *)0x0) {
    pFVar13 = (FMenuInWindow *)0x0;
  }
  else {
    bVar8 = param_2->bIsCollapsedByParent;
    pTVar14 = TSharedPtr<SWidget,1>::ToSharedRef(&param_2->WrappedContent,&local_408);
    if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar7.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar7.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar2 = (pTVar14->SharedReferenceCount).ReferenceController;
    pSVar3 = pTVar14->Object;
    if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
      paVar15 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar15 = &pTVar2->SharedReferenceCount;
      LOCK();
      *paVar15 = (atomic<int>)((int)*paVar15 + 1);
      UNLOCK();
    }
    pFVar13->_padding_ = 0;
    pFVar13->_padding_ = 0;
    pFVar13->_padding_ = (longlong)&___7FMenuBase__6B_;
    pFVar13->_padding_ = 0;
    pFVar13->_padding_ = 0;
    pFVar13->_padding_ = 0;
    pFVar13->_padding_ = 2;
    pFVar13->_padding_ = (longlong)pSVar3;
    pFVar13->_padding_ = (longlong)pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar15 = (atomic<int>)((int)*paVar15 + 1);
      UNLOCK();
    }
    *(undefined1 *)&pFVar13->_padding_ = 0;
    *(bool *)((longlong)&pFVar13->_padding_ + 1) = bVar8;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pFVar13->_padding_ = (longlong)&___7FMenuInWindow__6B_;
    (pFVar13->Window).Object = this_00;
    (pFVar13->Window).WeakReferenceCount.ReferenceController = FVar7.ReferenceController;
    if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar7.ReferenceController)->WeakReferenceCount =
           (atomic<int>)((int)(FVar7.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar7.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pTVar14->SharedReferenceCount).ReferenceController);
    if ((((pFVar13->_padding_ != 0) && (pFVar13->_padding_ != 0)) &&
        (0 < *(int *)(pFVar13->_padding_ + 8))) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("!InObject || !InObject->DoesSharedInstanceExist()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x7a5,L"Trying to share an already-shared object"), bVar8)) {
      pcVar5 = (code *)swi(3);
      pTVar11 = (TSharedRef<FMenuBase,1> *)(*pcVar5)();
      return pTVar11;
    }
  }
  local_488.Object = pFVar13;
  TSharedRef<FMenuInWindow,1>::TSharedRef<FMenuInWindow,1><FMenuInWindow>(&local_4b8,&local_488);
  local_4a8 = local_4b8.Object;
  FStack_4a0.ReferenceController = local_4b8.SharedReferenceCount.ReferenceController;
  if (local_4b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_4b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_4b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->PendingNewMenu != (TSharedPtr<FMenuBase,1> *)&local_4a8) {
    (this->PendingNewMenu).Object = (FMenuBase *)local_4b8.Object;
    local_4a8 = (FMenuInWindow *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->PendingNewMenu).SharedReferenceCount,&FStack_4a0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_4a0.ReferenceController);
  pIVar4 = param_1->Object;
  local_4f8 = (SWindow *)0x0;
  FStack_4f0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pIVar4 == (IMenu *)0x0) {
    FVar18.ReferenceController = (this->HostWindow).SharedReferenceCount.ReferenceController;
    pSVar17 = (this->HostWindow).Object;
    if (FVar18.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar18.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar18.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_4f8 = pSVar17;
    FStack_4f0.ReferenceController = FVar18.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    pSVar20 = local_4f8;
    FVar21.ReferenceController = FStack_4f0.ReferenceController;
  }
  else {
    ppSVar16 = (SWindow **)(**(code **)((longlong)*pIVar4 + 0x10))(pIVar4,local_438);
    pSVar17 = (SWindow *)0x0;
    FVar18.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&local_4f8 != ppSVar16) {
      local_4f8 = *ppSVar16;
      *ppSVar16 = (SWindow *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&FStack_4f0,(FSharedReferencer<1> *)(ppSVar16 + 1));
      pSVar17 = local_4f8;
      FVar18.ReferenceController = FStack_4f0.ReferenceController;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_430);
    pSVar20 = pSVar17;
    FVar21.ReferenceController = FVar18.ReferenceController;
  }
  this_01 = FSlateApplication::Get();
  if ((pSVar17 == (SWindow *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    pTVar11 = (TSharedRef<FMenuBase,1> *)(*pcVar5)();
    return pTVar11;
  }
  if (FVar18.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar18.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar18.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_428.Object = pSVar20;
  local_428.SharedReferenceCount.ReferenceController = FVar21.ReferenceController;
  if ((pSVar17 == (SWindow *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    pTVar11 = (TSharedRef<FMenuBase,1> *)(*pcVar5)();
    return pTVar11;
  }
  local_458.Object = this_00;
  local_458.SharedReferenceCount.ReferenceController = FVar7.ReferenceController;
  if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar7.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar7.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FSlateApplication::AddWindowAsNativeChild(this_01,&local_418,&local_458,&local_428,true);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_418.SharedReferenceCount.ReferenceController);
  if (param_2->bAllowAnimations != false) {
    FCurveSequence::FCurveSequence(&local_3e8);
    FCurveSequence::AddCurve(&local_3e8,&local_3f8,0.0,__real_3e19999a,CubicOut);
    local_480 = (param_2->AnimFinalLocation).field0_0x0;
    SWindow::MorphToPosition
              (this_00,&local_3e8,fVar6,(FDeprecateVector2DParameter *)&local_480._s_0);
    FCurveSequence::~FCurveSequence(&local_3e8);
  }
  local_478 = 0;
  FStack_470.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->PendingNewWindow != (TSharedPtr<SWindow,1> *)&local_478) {
    (this->PendingNewWindow).Object = (SWindow *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->PendingNewWindow).SharedReferenceCount,&FStack_470);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_470.ReferenceController);
  __return_storage_ptr__->Object = (FMenuBase *)local_4b8.Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       local_4b8.SharedReferenceCount.ReferenceController;
  if (local_4b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_4b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_4b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar18.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4b8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar7.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// PushPopup @ 1426d5670

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<FMenuBase,1> * __thiscall
FMenuStack::PushPopup
          (FMenuStack *this,TSharedRef<FMenuBase,1> *__return_storage_ptr__,
          TSharedPtr<IMenu,1> *param_1,FPrePushResults *param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  SMenuPanel *this_00;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  TSharedRef<FMenuBase,1> *pTVar6;
  FMenuInPopup *pFVar7;
  TMulticastDelegateRegistration<void___cdecl(TSharedRef<IMenu,1>),FDefaultDelegateUserPolicy>
  *this_01;
  FSlateApplication *this_02;
  TRawPtrProxy<FMenuInPopup> local_res8 [2];
  TSharedPtr<IMenu,1> *local_res18;
  FMenuBase *local_78;
  FSharedReferencer<1> FStack_70;
  TSharedRef<FMenuInPopup,1> local_68;
  TSharedRef<FMenuBase,1> local_58 [2];
  
  local_res18 = param_1;
  if (((this->ActiveMethod).PopupMethod != UseCurrentWindow) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ActiveMethod.GetPopupMethod() == EPopupMethod::UseCurrentWindow",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Application\\MenuStack.cpp"
                         ,0x226,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TSharedRef<FMenuBase,1> *)(*pcVar3)();
    return pTVar6;
  }
  if (((param_2->WrappedContent).Object == (SWidget *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InPrePushResults.WrappedContent.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Application\\MenuStack.cpp"
                         ,0x229,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TSharedRef<FMenuBase,1> *)(*pcVar3)();
    return pTVar6;
  }
  pFVar7 = ::operator_new(0x50);
  if (pFVar7 == (FMenuInPopup *)0x0) {
    pFVar7 = (FMenuInPopup *)0x0;
  }
  else {
    bVar4 = param_2->bIsCollapsedByParent;
    if (((param_2->WrappedContent).Object == (SWidget *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedRef<FMenuBase,1> *)(*pcVar3)();
      return pTVar6;
    }
    pTVar1 = (param_2->WrappedContent).SharedReferenceCount.ReferenceController;
    pSVar2 = (param_2->WrappedContent).Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pSVar2 == (SWidget *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedRef<FMenuBase,1> *)(*pcVar3)();
      return pTVar6;
    }
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(undefined8 *)&pFVar7->field_0x8 = 0;
    *(undefined8 *)&pFVar7->field_0x10 = 0;
    *(undefined ***)pFVar7 = &___7FMenuBase__6B_;
    *(undefined8 *)&pFVar7->field_0x18 = 0;
    *(undefined8 *)&pFVar7->field_0x20 = 0;
    *(undefined8 *)&pFVar7->field_0x28 = 0;
    *(undefined8 *)&pFVar7->field_0x30 = 2;
    *(SWidget **)&pFVar7->field_0x38 = pSVar2;
    *(TReferenceControllerBase<1> **)&pFVar7->field_0x40 = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar7->field_0x48 = 0;
    pFVar7->field_0x49 = bVar4;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    *(undefined ***)pFVar7 = &___7FMenuInPopup__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    param_1 = local_res18;
    if ((((*(longlong *)&pFVar7->field_0x8 != 0) && (*(longlong *)&pFVar7->field_0x10 != 0)) &&
        (0 < *(int *)(*(longlong *)&pFVar7->field_0x10 + 8))) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!InObject || !InObject->DoesSharedInstanceExist()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x7a5,L"Trying to share an already-shared object"),
       param_1 = local_res18, bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedRef<FMenuBase,1> *)(*pcVar3)();
      return pTVar6;
    }
  }
  local_res8[0].Object = pFVar7;
  TSharedRef<FMenuInPopup,1>::TSharedRef<FMenuInPopup,1><FMenuInPopup>(&local_68,local_res8);
  local_78 = (FMenuBase *)local_68.Object;
  FStack_70.ReferenceController = local_68.SharedReferenceCount.ReferenceController;
  if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->PendingNewMenu != (TSharedPtr<FMenuBase,1> *)&local_78) {
    (this->PendingNewMenu).Object = (FMenuBase *)local_68.Object;
    local_78 = (FMenuBase *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->PendingNewMenu).SharedReferenceCount,&FStack_70);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_70.ReferenceController);
  this_01 = (TMulticastDelegateRegistration<void___cdecl(TSharedRef<IMenu,1>),FDefaultDelegateUserPolicy>
             *)(**(code **)(*(longlong *)&(local_68.Object)->field_0x0 + 0x28))(local_68.Object);
  TMulticastDelegateRegistration<void___cdecl(TSharedRef<IMenu,1>),FDefaultDelegateUserPolicy>::
  AddRaw<FMenuStack>(this_01,(FMenuStack *)(local_res8 + 1),(pmf_423200bd)this);
  if (((this->HostWindowPopupPanel).Object == (SMenuPanel *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TSharedRef<FMenuBase,1> *)(*pcVar3)();
    return pTVar6;
  }
  this_00 = (this->HostWindowPopupPanel).Object;
  local_58[0].Object = (FMenuBase *)local_68.Object;
  local_58[0].SharedReferenceCount.ReferenceController =
       local_68.SharedReferenceCount.ReferenceController;
  if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SMenuPanel::PushMenu(this_00,local_58,&param_2->AnimFinalLocation);
  if ((param_2->bFocusImmediately != false) && ((param_2->WidgetToFocus).Object != (SWidget *)0x0))
  {
    this_02 = FSlateApplication::Get();
    if (param_3 == -1) {
      param_3 = (**(code **)((longlong)*(this_02->InputManager).Object + 0x10))();
    }
    FSlateApplication::SetUserFocus(this_02,param_3,&param_2->WidgetToFocus,SetDirectly);
  }
  __return_storage_ptr__->Object = (FMenuBase *)local_68.Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       local_68.SharedReferenceCount.ReferenceController;
  if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// QueryPopupMethod @ 1426d5a60

/* WARNING: Enum "Type": Some values do not have unique names */

FPopupMethodReply * __thiscall
FMenuStack::QueryPopupMethod
          (FMenuStack *this,FPopupMethodReply *__return_storage_ptr__,FWidgetPath *param_1)

{
  ForElementType<FArrangedWidget> FVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FPopupMethodReply *pFVar6;
  ForElementType<FArrangedWidget> FVar7;
  uint uVar8;
  longlong lVar9;
  char local_28 [8];
  longlong local_20;
  TReferenceControllerBase<1> *local_18;
  EPopupMethod local_10;
  EShouldThrottle local_f;
  
  uVar8 = (param_1->Widgets).Array.ArrayNum - 1;
  if (-1 < (int)uVar8) {
    lVar9 = (longlong)(int)uVar8 * 0x48;
    do {
      uVar5 = 0;
      if ((int)uVar8 < (param_1->Widgets).Array.ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FPopupMethodReply *)(*pcVar3)();
        return pFVar6;
      }
      FVar1 = (param_1->Widgets).Array.AllocatorInstance.SecondaryData;
      FVar7 = (ForElementType<FArrangedWidget>)&(param_1->Widgets).Array;
      if (FVar1 != (ForElementType<FArrangedWidget>)0x0) {
        FVar7 = FVar1;
      }
      plVar2 = *(longlong **)(lVar9 + 0x38 + (longlong)FVar7);
      (**(code **)(*plVar2 + 0x120))(plVar2,local_28);
      if (local_28[0] != '\0') {
        *(char *)&__return_storage_ptr__->_padding_ = local_28[0];
        __return_storage_ptr__->_padding_ = local_20;
        __return_storage_ptr__->_padding_ = (longlong)local_18;
        __return_storage_ptr__->PopupMethod = local_10;
        __return_storage_ptr__->ShouldThrottle = local_f;
        local_18 = (TReferenceControllerBase<1> *)0x0;
        local_20 = 0;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        return __return_storage_ptr__;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_18);
      lVar9 = lVar9 + -0x48;
      uVar8 = uVar8 - 1;
    } while (-1 < (int)uVar8);
  }
  *(undefined1 *)&__return_storage_ptr__->_padding_ = 1;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->PopupMethod = CreateNewWindow;
  __return_storage_ptr__->ShouldThrottle = Yes;
  return __return_storage_ptr__;
}

// SetHostPath @ 1426dbfd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FMenuStack::SetHostPath(FMenuStack *this,FWidgetPath *param_1)

{
  TSharedPtr<FPopupLayer,1> *this_00;
  atomic<int> *paVar1;
  int *piVar2;
  atomic<int> aVar3;
  int iVar4;
  TReferenceControllerBase<1> *pTVar5;
  SWidget *pSVar6;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  undefined8 *puVar12;
  FPopupLayer *pFVar13;
  TSharedRef<SWindow,1> *pTVar14;
  FArrangedWidget *pFVar15;
  FArguments *pFVar16;
  SWindow *pSVar17;
  SWindow **ppSVar18;
  SWindow *pSVar19;
  TSharedPtr<SMenuPanel,1> *pTVar20;
  TReferenceControllerBase<1> *pTVar21;
  undefined4 local_res8;
  undefined4 uStackX_c;
  FLLMScope local_res18 [2];
  FName local_res20;
  SWindow *local_328;
  TReferenceControllerBase<1> *local_320;
  SMenuPanel *local_318;
  FSharedReferencer<1> FStack_310;
  FMemScope local_308;
  TSharedPtr<FPopupLayer,1> local_300;
  undefined8 local_2f0;
  FSharedReferencer<1> FStack_2e8;
  SWindow *local_2e0;
  TReferenceControllerBase<1> *local_2d8;
  SWindow *local_2d0;
  TReferenceControllerBase<1> *pTStack_2c8;
  SWindow *local_2c0;
  longlong *plStack_2b8;
  TSharedRef<SMenuPanel,1> local_2a8;
  SMenuPanel *local_298;
  TReferenceControllerBase<1> *pTStack_290;
  undefined1 local_288 [8];
  TReferenceControllerBase<1> *local_280;
  TSharedRef<SWindow,1> local_278;
  undefined1 local_268 [8];
  TReferenceControllerBase<1> *local_260;
  TSlateDecl<SMenuPanel,RequiredArgs::T0RequiredArgs> local_258;
  FSlateBaseNamedArgs local_240;
  
  pSVar17 = (SWindow *)0x0;
  local_res8 = 0;
  if (this->bHostWindowGuard == false) {
    this_00 = &this->HostPopupLayer;
    pFVar13 = (this->HostPopupLayer).Object;
    if (pFVar13 != (FPopupLayer *)0x0) {
      puVar12 = (undefined8 *)(**(code **)(pFVar13->_padding_ + 8))(pFVar13,local_288);
      bVar11 = FWidgetPath::ContainsWidget(param_1,(SWidget *)*puVar12);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_280)
      ;
      if (!bVar11) {
        pFVar13 = TSharedPtr<FPopupLayer,1>::operator->(this_00);
        (**(code **)(pFVar13->_padding_ + 0x20))(pFVar13);
        local_300.Object = (FPopupLayer *)0x0;
        local_300.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        if (this_00 != &local_300) {
          this_00->Object = (FPopupLayer *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(this->HostPopupLayer).SharedReferenceCount,&local_300.SharedReferenceCount);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_300.SharedReferenceCount.ReferenceController);
        local_2f0 = 0;
        FStack_2e8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        if (&this->HostWindowPopupPanel != (TSharedPtr<SMenuPanel,1> *)&local_2f0) {
          (this->HostWindowPopupPanel).Object = (SMenuPanel *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(this->HostWindowPopupPanel).SharedReferenceCount,&FStack_2e8);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FStack_2e8.ReferenceController);
      }
    }
    bVar11 = FWidgetPath::IsValid(param_1);
    if (bVar11) {
      pTVar14 = FWidgetPath::GetWindow(param_1,&local_278);
      local_2d8 = (pTVar14->SharedReferenceCount).ReferenceController;
      local_2e0 = pTVar14->Object;
      if (local_2d8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_2d8->SharedReferenceCount = (atomic<int>)((int)local_2d8->SharedReferenceCount + 1);
        UNLOCK();
      }
      ppSVar18 = &local_2e0;
      bVar10 = true;
      bVar9 = true;
      bVar11 = false;
      pSVar19 = local_2e0;
    }
    else {
      ppSVar18 = &local_2d0;
      local_2d0 = (SWindow *)0x0;
      pTStack_2c8 = (TReferenceControllerBase<1> *)0x0;
      bVar10 = false;
      bVar9 = false;
      bVar11 = true;
      pSVar19 = pSVar17;
    }
    if (&this->HostWindow != (TSharedPtr<SWindow,1> *)ppSVar18) {
      *ppSVar18 = (SWindow *)0x0;
      (this->HostWindow).Object = pSVar19;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->HostWindow).SharedReferenceCount,(FSharedReferencer<1> *)(ppSVar18 + 1));
    }
    if (bVar11) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_2c8);
    }
    if (bVar9) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2d8)
      ;
    }
    if (bVar10) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_278.SharedReferenceCount.ReferenceController);
    }
    bVar11 = FWidgetPath::IsValid(param_1);
    if (bVar11) {
      bVar11 = FWidgetPath::IsValid(param_1);
      if ((!bVar11) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\WidgetPath.h"
                              ,0xac,L""), bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar15 = FArrangedChildren::operator[]
                          (&param_1->Widgets,(param_1->Widgets).Array.ArrayNum + -1);
      pTVar21 = (pFVar15->Widget).SharedReferenceCount.ReferenceController;
      pSVar17 = (SWindow *)(pFVar15->Widget).Object;
      local_320 = pTVar21;
      if (pTVar21 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar21->SharedReferenceCount = (atomic<int>)((int)pTVar21->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar21->WeakReferenceCount = (atomic<int>)((int)pTVar21->WeakReferenceCount + 1);
        UNLOCK();
      }
      ppSVar18 = &local_328;
      bVar10 = true;
      bVar9 = true;
      bVar11 = false;
      local_328 = pSVar17;
    }
    else {
      pTVar21 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
      ppSVar18 = &local_2c0;
      bVar10 = false;
      bVar9 = false;
      bVar11 = true;
      local_2c0 = (SWindow *)0x0;
      plStack_2b8 = (longlong *)0x0;
    }
    if (&this->HostWidget != (TWeakPtr<SWidget,1> *)ppSVar18) {
      pSVar19 = ppSVar18[1];
      (this->HostWidget).Object = (SWidget *)pSVar17;
      pTVar5 = (this->HostWidget).WeakReferenceCount.ReferenceController;
      *ppSVar18 = (SWindow *)0x0;
      (this->HostWidget).WeakReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)pSVar19;
      ppSVar18[1] = (SWindow *)0x0;
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar5->WeakReferenceCount;
        aVar3 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar3 == (atomic<int>)0x1) {
          (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
        }
      }
    }
    pTVar5 = local_320;
    if ((bVar11) && (plStack_2b8 != (longlong *)0x0)) {
      LOCK();
      piVar2 = (int *)((longlong)plStack_2b8 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_2b8 + 8))(plStack_2b8,1);
      }
    }
    if ((bVar9) && (pTVar5 != (TReferenceControllerBase<1> *)0x0)) {
      LOCK();
      paVar1 = &pTVar5->WeakReferenceCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
      }
    }
    if (bVar10) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar21);
    }
    if (((this->HostWindow).Object != (SWindow *)0x0) &&
       (pTVar20 = &this->HostWindowPopupPanel, pTVar20->Object == (SMenuPanel *)0x0)) {
      pFVar16 = SMenuPanel::FArguments::FArguments((FArguments *)&local_240);
      FLLMScope::FLLMScope
                (local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
      local_res20 = LLMTagDeclaration_UI_Slate.UniqueName;
      FMemScope::FMemScope(&local_308,&local_res20,true);
      TSlateDecl<SMenuPanel,RequiredArgs::T0RequiredArgs>::
      TSlateDecl<SMenuPanel,RequiredArgs::T0RequiredArgs>
                (&local_258,"SMenuPanel",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Application\\MenuStack.cpp"
                 ,0x2be,(T0RequiredArgs *)&local_res8);
      FMemScope::~FMemScope(&local_308);
      FLLMScope::~FLLMScope(local_res18);
      TSlateDecl<SMenuPanel,RequiredArgs::T0RequiredArgs>::operator<<=
                (&local_258,&local_2a8,pFVar16);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_258._Widget.SharedReferenceCount.ReferenceController);
      FSlateBaseNamedArgs::~FSlateBaseNamedArgs(&local_240);
      iVar4 = (param_1->Widgets).Array.ArrayNum;
      do {
        iVar4 = iVar4 + -1;
        if (iVar4 < 0) goto LAB_1426dc44d;
        pFVar15 = FArrangedChildren::operator[](&param_1->Widgets,iVar4);
        pSVar6 = (pFVar15->Widget).Object;
        lVar7 = pSVar6->_padding_;
        local_298 = local_2a8.Object;
        pTStack_290 = local_2a8.SharedReferenceCount.ReferenceController;
        if (local_2a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_2a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_2a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        puVar12 = (undefined8 *)(**(code **)(lVar7 + 0xb0))(pSVar6,local_268,&local_298);
        if (this_00 != (TSharedPtr<FPopupLayer,1> *)puVar12) {
          this_00->Object = (FPopupLayer *)*puVar12;
          *puVar12 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(this->HostPopupLayer).SharedReferenceCount,
                     (FSharedReferencer<1> *)(puVar12 + 1));
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_260);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_290);
      } while (this_00->Object == (FPopupLayer *)0x0);
      local_318 = local_2a8.Object;
      FStack_310.ReferenceController = local_2a8.SharedReferenceCount.ReferenceController;
      if (local_2a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_2a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_2a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (pTVar20 != (TSharedPtr<SMenuPanel,1> *)&local_318) {
        pTVar20->Object = local_2a8.Object;
        local_318 = (SMenuPanel *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->HostWindowPopupPanel).SharedReferenceCount,&FStack_310);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_310.ReferenceController);
LAB_1426dc44d:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2a8.SharedReferenceCount.ReferenceController);
    }
  }
  return;
}

// WrapContent @ 1426e57d0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
FMenuStack::WrapContent
          (FMenuStack *this,TSharedRef<SWidget,1> *__return_storage_ptr__,
          TSharedRef<SWidget,1> *param_1,FOptionalSize param_2,FOptionalSize param_3,bool param_4)

{
  byte *pbVar1;
  TReferenceControllerBase<1> *pTVar2;
  SWidget *pSVar3;
  code *pcVar4;
  SMenuContentWrapper *pSVar5;
  FSharedReferencer<1> FVar6;
  bool bVar7;
  char cVar8;
  byte bVar9;
  FArguments *pFVar10;
  undefined8 *puVar11;
  ulong64 uVar12;
  TSharedRef<SWidget,1> *pTVar13;
  T0RequiredArgs local_res10 [8];
  FLLMScope local_res18 [5];
  TSlateDecl<MenuStackInternal::SMenuContentWrapper,RequiredArgs::T0RequiredArgs> local_2f8;
  FName local_2e0;
  FMemScope local_2d8;
  FDestructionSentinel local_2d0;
  undefined1 *local_2b8;
  FDestructionSentinel local_2b0;
  undefined1 *local_298;
  SWidget *local_290;
  TReferenceControllerBase<1> *pTStack_288;
  undefined1 local_280 [520];
  undefined1 local_78 [24];
  undefined1 local_60 [56];
  
  pFVar10 = MenuStackInternal::SMenuContentWrapper::FArguments::FArguments((FArguments *)local_280);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar10->_OnKeyDown,
             (FWriteAccessScope *)&local_2d0);
  local_2b8 = &(pFVar10->_OnKeyDown).field_0x8;
  puVar11 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_2b8);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &
               ___7__TCommonDelegateInstanceState___A6A_AVFReply__UFKey___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar12;
    *puVar11 = &
               ___7__TBaseStaticDelegateInstance___A6A_AVFReply__UFKey___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar11[3] = MenuStackInternal::OnMenuKeyDown;
  }
  if (local_2d0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2d0.Accessor,&local_2d0);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar10->_OnMenuLostFocus,
             (FWriteAccessScope *)&local_2b0);
  local_298 = &(pFVar10->_OnMenuLostFocus).field_0x8;
  puVar11 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_298);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &
               ___7__TCommonDelegateInstanceState___A6AXAEBVFWidgetPath___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar12;
    *puVar11 = &
               ___7__TBaseRawMethodDelegateInstance__0A_VFMenuStack____A6AXAEBVFWidgetPath___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar11[4] = OnMenuContentLostFocus;
    puVar11[3] = this;
    if (this == (FMenuStack *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && MethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x1d8,L"");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar4)();
        return pTVar13;
      }
    }
  }
  if (local_2b0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2b0.Accessor,&local_2b0);
  }
  (pFVar10->_OptionalMinMenuWidth).Size = param_2.Size;
  (pFVar10->_OptionalMinMenuHeight).Size = param_3.Size;
  pFVar10->_bShowBackground = param_4;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  pSVar3 = param_1->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_290 = (pFVar10->_MenuContent).Widget.Object;
  pTStack_288 = (pFVar10->_MenuContent).Widget.SharedReferenceCount.ReferenceController;
  (pFVar10->_MenuContent).Widget.Object = pSVar3;
  (pFVar10->_MenuContent).Widget.SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_288);
  FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2e0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2d8,&local_2e0,true);
  TSlateDecl<MenuStackInternal::SMenuContentWrapper,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<MenuStackInternal::SMenuContentWrapper,RequiredArgs::T0RequiredArgs>
            (&local_2f8,"MenuStackInternal::SMenuContentWrapper",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Application\\MenuStack.cpp"
             ,0x31d,local_res10);
  FMemScope::~FMemScope(&local_2d8);
  FLLMScope::~FLLMScope(local_res18);
  pSVar5 = local_2f8._Widget.Object;
  if (local_2f8._Widget.Object == (SMenuContentWrapper *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar4)();
      return pTVar13;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)local_2f8._Widget.Object,(FSlateBaseNamedArgs *)pFVar10);
  MenuStackInternal::SMenuContentWrapper::Construct(local_2f8._Widget.Object,pFVar10);
  if (local_2f8._Widget.Object == (SMenuContentWrapper *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar4)();
      return pTVar13;
    }
  }
  if (((local_2f8._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar8 = (**(code **)((local_2f8._Widget.Object)->_padding_ + 0x228))(local_2f8._Widget.Object);
    bVar9 = 0;
    if (cVar8 == '\0') goto LAB_1426e5a7e;
  }
  bVar9 = 0x20;
LAB_1426e5a7e:
  *(byte *)&(local_2f8._Widget.Object)->_padding_ =
       (byte)(local_2f8._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_2f8._Widget.Object)->_padding_ =
       (byte)(local_2f8._Widget.Object)->_padding_ | bVar9;
  if (local_2f8._Widget.Object == (SMenuContentWrapper *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar4)();
      return pTVar13;
    }
  }
  pbVar1 = (byte *)((longlong)&(local_2f8._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if (local_2f8._Widget.Object == (SMenuContentWrapper *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar4)();
      return pTVar13;
    }
  }
  FVar6.ReferenceController = local_2f8._Widget.SharedReferenceCount.ReferenceController;
  local_2f8._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_2f8._Widget.Object = (SMenuContentWrapper *)0x0;
  if (pSVar5 == (SMenuContentWrapper *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar4)();
      return pTVar13;
    }
  }
  __return_storage_ptr__->Object = (SWidget *)pSVar5;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = FVar6.ReferenceController;
  if (FVar6.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar6.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar6.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar6.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_60);
  if ((void *)local_60._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_60._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_60);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_78);
  if ((void *)local_78._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_78._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_78);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_280._512_8_);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_280);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

