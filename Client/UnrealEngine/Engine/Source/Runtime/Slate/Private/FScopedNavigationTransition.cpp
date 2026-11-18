// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 4

// FScopedNavigationTransition @ 1426a8ac0

/* WARNING: Enum "Type": Some values do not have unique names */

FScopedNavigationTransition * __thiscall
FScopedNavigationTransition::FScopedNavigationTransition
          (FScopedNavigationTransition *this,EUINavigation param_1,TSharedPtr<FSlateUser,1> *param_2
          )

{
  TWeakPtr<SWidget,1> *pTVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  TWeakPtr<SWidget,1> *pTVar5;
  TWeakPtr<SWidget,1> local_18;
  
  this->NavigationType = param_1;
  (this->User).Object = param_2->Object;
  pTVar4 = (param_2->SharedReferenceCount).ReferenceController;
  (this->User).SharedReferenceCount.ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = &this->OldFocusedWidget;
  pTVar1->Object = (SWidget *)0x0;
  (this->OldFocusedWidget).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->NewFocusedWidget).Object = (SWidget *)0x0;
  (this->NewFocusedWidget).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar5 = GetFocusedWidget(this,&local_18);
  if (pTVar1 != pTVar5) {
    pTVar1->Object = pTVar5->Object;
    pTVar5->Object = (SWidget *)0x0;
    pTVar4 = (this->OldFocusedWidget).WeakReferenceCount.ReferenceController;
    (this->OldFocusedWidget).WeakReferenceCount.ReferenceController =
         (pTVar5->WeakReferenceCount).ReferenceController;
    (pTVar5->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &pTVar4->WeakReferenceCount;
      aVar3 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      }
    }
  }
  if (local_18.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar2 = &(local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar3 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)((local_18.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_18.WeakReferenceCount.ReferenceController,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// ~FScopedNavigationTransition @ 1426aaf50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FScopedNavigationTransition::~FScopedNavigationTransition(FScopedNavigationTransition *this)

{
  TWeakPtr<SWidget,1> *pTVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  TWeakPtr<SWidget,1> *pTVar5;
  ENavigationTransitionDirection local_res8 [2];
  TWeakPtr<SWidget,1> local_18;
  
  pTVar5 = GetFocusedWidget(this,&local_18);
  pTVar1 = &this->NewFocusedWidget;
  if (pTVar1 != pTVar5) {
    pTVar1->Object = pTVar5->Object;
    pTVar5->Object = (SWidget *)0x0;
    pTVar4 = (this->NewFocusedWidget).WeakReferenceCount.ReferenceController;
    (this->NewFocusedWidget).WeakReferenceCount.ReferenceController =
         (pTVar5->WeakReferenceCount).ReferenceController;
    (pTVar5->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &pTVar4->WeakReferenceCount;
      aVar3 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      }
    }
  }
  if (local_18.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar2 = &(local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar3 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)((local_18.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_18.WeakReferenceCount.ReferenceController,1);
    }
  }
  local_18.Object = (this->OldFocusedWidget).Object;
  local_18.WeakReferenceCount.ReferenceController =
       (this->OldFocusedWidget).WeakReferenceCount.ReferenceController;
  local_res8[0] = Outgoing;
  if (local_18.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  ExecuteNavigationTransition(this,&local_18,local_res8);
  local_18.Object = pTVar1->Object;
  local_18.WeakReferenceCount.ReferenceController =
       (this->NewFocusedWidget).WeakReferenceCount.ReferenceController;
  local_res8[0] = Incoming;
  if (local_18.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  ExecuteNavigationTransition(this,&local_18,local_res8);
  pTVar4 = (this->NewFocusedWidget).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar2 = &pTVar4->WeakReferenceCount;
    aVar3 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  pTVar4 = (this->OldFocusedWidget).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar2 = &pTVar4->WeakReferenceCount;
    aVar3 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->User).SharedReferenceCount.ReferenceController);
  return;
}

// ExecuteNavigationTransition @ 1426b9f90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FScopedNavigationTransition::ExecuteNavigationTransition
          (FScopedNavigationTransition *this,TWeakPtr<SWidget,1> *param_1,
          ENavigationTransitionDirection *param_2)

{
  FWeakReferencer<1> *pFVar1;
  atomic<int> aVar2;
  longlong *plVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  FNavigationTransitionMetadata *pFVar6;
  bool bVar7;
  atomic<int> aVar8;
  atomic<int> *paVar9;
  SWidget *pSVar10;
  TReferenceControllerBase<1> *pTVar11;
  SWidget *this_00;
  TReferenceControllerBase<1> *pTVar12;
  atomic<int> *paVar13;
  TSharedPtr<FNavigationTransitionMetadata,1> local_88;
  FReadAccessScope local_78;
  EUINavigation local_60;
  SWidget *local_58;
  TReferenceControllerBase<1> *local_50;
  SWidget *local_48;
  TReferenceControllerBase<1> *local_40;
  ENavigationTransitionDirection local_38;
  
  bVar7 = TWeakPtr<SWidget,1>::UEOpEquals<SWidget>(&this->OldFocusedWidget,&this->NewFocusedWidget);
  if (bVar7) {
    pTVar12 = (param_1->WeakReferenceCount).ReferenceController;
  }
  else {
    while (param_1->Object != (SWidget *)0x0) {
      pTVar12 = (param_1->WeakReferenceCount).ReferenceController;
      pFVar1 = &param_1->WeakReferenceCount;
      if ((pTVar12 == (TReferenceControllerBase<1> *)0x0) ||
         ((int)pTVar12->SharedReferenceCount < 1)) break;
      pTVar12 = pFVar1->ReferenceController;
      this_00 = (SWidget *)0x0;
      if (pTVar12 == (TReferenceControllerBase<1> *)0x0) {
LAB_1426ba050:
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      else {
        aVar2 = pTVar12->SharedReferenceCount;
        do {
          if (aVar2 == (atomic<int>)0x0) {
            pTVar12 = (TReferenceControllerBase<1> *)0x0;
            goto LAB_1426ba050;
          }
          LOCK();
          aVar8 = pTVar12->SharedReferenceCount;
          bVar7 = aVar2 == aVar8;
          if (bVar7) {
            pTVar12->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
            aVar8 = aVar2;
          }
          UNLOCK();
          aVar2 = aVar8;
        } while (!bVar7);
        this_00 = param_1->Object;
        if (this_00 == (SWidget *)0x0) goto LAB_1426ba050;
      }
      SWidget::GetMetaData<FNavigationTransitionMetadata>(this_00,&local_88);
      pFVar6 = local_88.Object;
      if (local_88.Object != (FNavigationTransitionMetadata *)0x0) {
        local_48 = (this->NewFocusedWidget).Object;
        pTVar11 = (this->NewFocusedWidget).WeakReferenceCount.ReferenceController;
        local_38 = *param_2;
        if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
          paVar9 = (atomic<int> *)&DAT_0000000c;
        }
        else {
          paVar9 = &pTVar11->WeakReferenceCount;
          LOCK();
          *paVar9 = (atomic<int>)((int)*paVar9 + 1);
          UNLOCK();
        }
        local_50 = (this->OldFocusedWidget).WeakReferenceCount.ReferenceController;
        local_58 = (this->OldFocusedWidget).Object;
        if (local_50 == (TReferenceControllerBase<1> *)0x0) {
          local_60 = this->NavigationType;
          paVar13 = (atomic<int> *)&DAT_0000000c;
        }
        else {
          paVar13 = &local_50->WeakReferenceCount;
          LOCK();
          *paVar13 = (atomic<int>)((int)*paVar13 + 1);
          UNLOCK();
          local_60 = this->NavigationType;
          LOCK();
          *paVar13 = (atomic<int>)((int)*paVar13 + 1);
          UNLOCK();
        }
        if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          *paVar9 = (atomic<int>)((int)*paVar9 + 1);
          UNLOCK();
        }
        local_40 = pTVar11;
        if (local_50 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          aVar2 = *paVar13;
          *paVar13 = (atomic<int>)((int)*paVar13 + -1);
          UNLOCK();
          if (aVar2 == (atomic<int>)0x1) {
            (**(code **)(local_50->_padding_ + 8))(local_50,1);
          }
        }
        if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar9 = &pTVar11->WeakReferenceCount;
          aVar2 = *paVar9;
          *paVar9 = (atomic<int>)((int)*paVar9 + -1);
          UNLOCK();
          if (aVar2 == (atomic<int>)0x1) {
            (**(code **)(pTVar11->_padding_ + 8))(pTVar11,1);
          }
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &pFVar6->OnNavigationTransition,&local_78);
        if ((*(int *)&(pFVar6->OnNavigationTransition).field_0x10 != 0) &&
           (plVar3 = *(longlong **)&(pFVar6->OnNavigationTransition).field_0x8,
           plVar3 != (longlong *)0x0)) {
          (**(code **)(*plVar3 + 0x68))();
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_78);
        if (local_40 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar9 = &local_40->WeakReferenceCount;
          aVar2 = *paVar9;
          *paVar9 = (atomic<int>)((int)*paVar9 + -1);
          UNLOCK();
          if (aVar2 == (atomic<int>)0x1) {
            (**(code **)(local_40->_padding_ + 8))();
          }
        }
        if (local_50 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar9 = &local_50->WeakReferenceCount;
          aVar2 = *paVar9;
          *paVar9 = (atomic<int>)((int)*paVar9 + -1);
          UNLOCK();
          if (aVar2 == (atomic<int>)0x1) {
            (**(code **)(local_50->_padding_ + 8))();
          }
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_88.SharedReferenceCount.ReferenceController);
      if ((this_00 == (SWidget *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pTVar11 = (this_00->ParentWidgetPtr).WeakReferenceCount.ReferenceController;
      pSVar10 = (SWidget *)0x0;
      if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
        aVar2 = pTVar11->SharedReferenceCount;
        do {
          if (aVar2 == (atomic<int>)0x0) {
            pTVar11 = (TReferenceControllerBase<1> *)0x0;
            goto LAB_1426ba230;
          }
          LOCK();
          aVar8 = pTVar11->SharedReferenceCount;
          bVar7 = aVar2 == aVar8;
          if (bVar7) {
            pTVar11->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
            aVar8 = aVar2;
          }
          UNLOCK();
          aVar2 = aVar8;
        } while (!bVar7);
        pSVar10 = (this_00->ParentWidgetPtr).Object;
      }
LAB_1426ba230:
      param_1->Object = pSVar10;
      if (pTVar11 != pFVar1->ReferenceController) {
        if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar11->WeakReferenceCount = (atomic<int>)((int)pTVar11->WeakReferenceCount + 1);
          UNLOCK();
        }
        pTVar4 = pFVar1->ReferenceController;
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar9 = &pTVar4->WeakReferenceCount;
          aVar2 = *paVar9;
          *paVar9 = (atomic<int>)((int)*paVar9 + -1);
          UNLOCK();
          if (aVar2 == (atomic<int>)0x1) {
            (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
          }
        }
        pFVar1->ReferenceController = pTVar11;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
    }
    pTVar12 = (param_1->WeakReferenceCount).ReferenceController;
  }
  if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar9 = &pTVar12->WeakReferenceCount;
    aVar2 = *paVar9;
    *paVar9 = (atomic<int>)((int)*paVar9 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar12->_padding_ + 8))(pTVar12,1);
    }
  }
  return;
}

// GetFocusedWidget @ 1426bcf60

/* WARNING: Enum "Type": Some values do not have unique names */

TWeakPtr<SWidget,1> * __thiscall
FScopedNavigationTransition::GetFocusedWidget
          (FScopedNavigationTransition *this,TWeakPtr<SWidget,1> *__return_storage_ptr__)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FSlateUser *pFVar3;
  TWeakPtr<SWidget,1> *pTVar4;
  SWidget *pSVar5;
  FSharedReferencer<1> local_20;
  TWeakPtr<SWidget,1> local_18;
  
  pFVar3 = (this->User).Object;
  if ((pFVar3 == (FSlateUser *)0x0) || ((pFVar3->WeakFocusPath).Widgets.ArrayNum < 1)) {
    __return_storage_ptr__->Object = (SWidget *)0x0;
    (__return_storage_ptr__->WeakReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar4 = FWeakWidgetPath::GetLastWidget(&pFVar3->WeakFocusPath,&local_18);
    SharedPointerInternals::FSharedReferencer<1>::FSharedReferencer<1>
              (&local_20,&pTVar4->WeakReferenceCount);
    if (local_20.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      pSVar5 = (SWidget *)0x0;
    }
    else {
      pSVar5 = pTVar4->Object;
      pTVar4->Object = (SWidget *)0x0;
    }
    __return_storage_ptr__->Object = pSVar5;
    (__return_storage_ptr__->WeakReferenceCount).ReferenceController = local_20.ReferenceController;
    if (local_20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_20.ReferenceController)->WeakReferenceCount =
           (atomic<int>)((int)(local_20.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_20.ReferenceController);
    if (local_18.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_18.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_18.WeakReferenceCount.ReferenceController,1);
        return __return_storage_ptr__;
      }
    }
  }
  return __return_storage_ptr__;
}

