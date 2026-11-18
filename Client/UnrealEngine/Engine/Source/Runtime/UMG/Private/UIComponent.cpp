// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 3

// operator() @ 146a59550

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
`UIComponent::Private::FindUMGWidget'::__l2::<lambda_1>::operator()(void *this,UWidget *param_1)

{
  longlong *plVar1;
  undefined1 *puVar2;
  TWeakPtr<SWidget,1> *pTVar3;
  code *pcVar4;
  longlong lVar5;
  undefined1 uVar6;
  int iVar7;
  TSharedPtr<SWidget,1> *pTVar8;
  SWidget *pSVar9;
  SWidget *pSVar10;
  SWidget *pSVar11;
  SWidget *pSVar12;
  int iVar13;
  SWidget *pSVar14;
  SWidget *pSVar15;
  SWidget *pSVar16;
  bool bVar17;
  TSharedPtr<SWidget,1> local_58;
  TSharedPtr<SWidget,1> local_48;
  
  pSVar16 = (SWidget *)0x0;
  if (**(longlong **)((longlong)this + 0x10) == 0) {
    **(longlong **)((longlong)this + 0x10) = (longlong)param_1;
  }
  else {
    pSVar11 = *(SWidget **)((longlong)this + 8);
    pSVar9 = pSVar11;
    if (pSVar11 != (SWidget *)0x0) {
      iVar13 = (int)pSVar11->_padding_;
      do {
        pSVar9 = pSVar16;
        if (iVar13 == 0) goto LAB_146a595b1;
        LOCK();
        iVar7 = (int)pSVar11->_padding_;
        bVar17 = iVar13 == iVar7;
        if (bVar17) {
          *(int *)&pSVar11->_padding_ = iVar13 + 1;
          iVar7 = iVar13;
        }
        UNLOCK();
        iVar13 = iVar7;
      } while (!bVar17);
      pSVar15 = *(SWidget **)this;
      pSVar14 = pSVar16;
      while (pSVar9 = pSVar11, pSVar15 != (SWidget *)0x0) {
        pTVar8 = UWidget::GetCachedWidget(param_1,&local_58);
        iVar13 = (int)pSVar14;
        if ((pTVar8->Object == pSVar15) && (iVar13 < **(int **)((longlong)this + 0x18))) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_58.SharedReferenceCount.ReferenceController);
          **(undefined8 **)((longlong)this + 0x10) = param_1;
          **(int **)((longlong)this + 0x18) = iVar13;
          iVar13 = **(int **)((longlong)this + 0x18);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)pSVar11);
          return iVar13 != 0;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_58.SharedReferenceCount.ReferenceController);
        pSVar14 = (SWidget *)(ulonglong)(iVar13 + 1);
        if ((pSVar15 == (SWidget *)0x0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar17)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        pTVar3 = &pSVar15->ParentWidgetPtr;
        pSVar9 = (SWidget *)(pSVar15->ParentWidgetPtr).WeakReferenceCount.ReferenceController;
        pSVar10 = pSVar9;
        pSVar15 = pSVar16;
        if (pSVar9 != (SWidget *)0x0) {
          iVar13 = (int)pSVar9->_padding_;
          do {
            pSVar10 = pSVar16;
            if (iVar13 == 0) goto LAB_146a596c1;
            LOCK();
            iVar7 = (int)pSVar9->_padding_;
            bVar17 = iVar13 == iVar7;
            if (bVar17) {
              *(int *)&pSVar9->_padding_ = iVar13 + 1;
              iVar7 = iVar13;
            }
            UNLOCK();
            iVar13 = iVar7;
          } while (!bVar17);
          pSVar10 = pSVar9;
          pSVar15 = pTVar3->Object;
        }
LAB_146a596c1:
        pSVar9 = pSVar10;
        pSVar12 = pSVar11;
        if ((pSVar10 != pSVar11) && (pSVar9 = pSVar16, pSVar12 = pSVar10, pSVar11 != (SWidget *)0x0)
           ) {
          LOCK();
          plVar1 = &pSVar11->_padding_;
          lVar5 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)pSVar11->_padding_)(pSVar11);
            LOCK();
            puVar2 = (undefined1 *)((longlong)&pSVar11->_padding_ + 4);
            iVar13 = *(int *)puVar2;
            *(int *)puVar2 = *(int *)puVar2 + -1;
            UNLOCK();
            pSVar9 = (SWidget *)0x0;
            if (iVar13 == 1) {
              (**(code **)(pSVar11->_padding_ + 8))(pSVar11,1);
            }
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pSVar9);
        pSVar11 = pSVar12;
      }
    }
LAB_146a595b1:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar9);
  }
  pTVar8 = UWidget::GetCachedWidget(param_1,&local_48);
  pSVar11 = *(SWidget **)((longlong)this + 8);
  pSVar9 = pSVar11;
  if (pSVar11 != (SWidget *)0x0) {
    iVar13 = (int)pSVar11->_padding_;
    do {
      pSVar9 = pSVar16;
      if (iVar13 == 0) goto LAB_146a595f5;
      LOCK();
      iVar7 = (int)pSVar11->_padding_;
      bVar17 = iVar13 == iVar7;
      if (bVar17) {
        *(int *)&pSVar11->_padding_ = iVar13 + 1;
        iVar7 = iVar13;
      }
      UNLOCK();
      iVar13 = iVar7;
    } while (!bVar17);
    pSVar16 = *(SWidget **)this;
    pSVar9 = pSVar11;
  }
LAB_146a595f5:
  pSVar11 = pTVar8->Object;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar9);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  return pSVar11 != pSVar16;
}

// FindNearestUserWidget @ 146a71d50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UUserWidget * __cdecl UIComponent::Private::FindNearestUserWidget(TWeakPtr<SWidget,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FName FVar4;
  FDeprecateSlateVector2D FVar5;
  code *pcVar6;
  SWidget *pSVar7;
  FSharedReferencer<1> FVar8;
  atomic<int> aVar9;
  FSlateWidgetClassData *pFVar10;
  UUserWidget *pUVar11;
  longlong lVar12;
  SWidget *pSVar13;
  SWidget *pSVar14;
  bool bVar15;
  FSharedReferencer<1> local_20;
  undefined8 local_18;
  FSharedReferencer<1> local_10;
  
  local_20.ReferenceController = (param_1->WeakReferenceCount).ReferenceController;
  pSVar14 = (SWidget *)0x0;
  pSVar13 = (SWidget *)local_20.ReferenceController;
  if ((SWidget *)local_20.ReferenceController != (SWidget *)0x0) {
    aVar2 = *(atomic<int> *)&((SWidget *)local_20.ReferenceController)->_padding_;
    do {
      pSVar13 = pSVar14;
      if (aVar2 == (atomic<int>)0x0) goto LAB_146a71d95;
      LOCK();
      aVar9 = *(atomic<int> *)&((SWidget *)local_20.ReferenceController)->_padding_;
      bVar15 = aVar2 == aVar9;
      if (bVar15) {
        *(atomic<int> *)&((SWidget *)local_20.ReferenceController)->_padding_ =
             (atomic<int>)((int)aVar2 + 1);
        aVar9 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar9;
    } while (!bVar15);
    pSVar13 = (SWidget *)local_20.ReferenceController;
    if ((SWidget *)local_20.ReferenceController != (SWidget *)0x0) {
      pSVar7 = param_1->Object;
      while (pSVar13 = (SWidget *)local_20.ReferenceController, pSVar7 != (SWidget *)0x0) {
        pFVar10 = SObjectWidget::GetPrivateWidgetClass();
        FVar4 = pFVar10->WidgetType;
        if ((pSVar7 == (SWidget *)0x0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar15)) {
          pcVar6 = (code *)swi(3);
          pUVar11 = (UUserWidget *)(*pcVar6)();
          return pUVar11;
        }
        lVar12 = (**(code **)(pSVar7->_padding_ + 8))(pSVar7);
        FVar8.ReferenceController = local_20.ReferenceController;
        if (*(FName *)(lVar12 + 0x30) == FVar4) {
          if ((SWidget *)local_20.ReferenceController != (SWidget *)0x0) {
            LOCK();
            (local_20.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(local_20.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          if ((pSVar7 == (SWidget *)0x0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar15)) {
            pcVar6 = (code *)swi(3);
            pUVar11 = (UUserWidget *)(*pcVar6)();
            return pUVar11;
          }
          FVar5 = pSVar7[1].PersistentState.AllottedGeometry.Size;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar8.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar8.ReferenceController);
          pTVar3 = (param_1->WeakReferenceCount).ReferenceController;
          if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
            return (UUserWidget *)FVar5;
          }
          LOCK();
          paVar1 = &pTVar3->WeakReferenceCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar2 != (atomic<int>)0x1) {
            return (UUserWidget *)FVar5;
          }
          (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
          return (UUserWidget *)FVar5;
        }
        if ((pSVar7 == (SWidget *)0x0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar15)) {
          pcVar6 = (code *)swi(3);
          pUVar11 = (UUserWidget *)(*pcVar6)();
          return pUVar11;
        }
        local_10.ReferenceController =
             (pSVar7->ParentWidgetPtr).WeakReferenceCount.ReferenceController;
        pSVar13 = pSVar14;
        if (local_10.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          aVar2 = (local_10.ReferenceController)->SharedReferenceCount;
          do {
            if (aVar2 == (atomic<int>)0x0) {
              local_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
              goto LAB_146a71e93;
            }
            LOCK();
            aVar9 = (local_10.ReferenceController)->SharedReferenceCount;
            bVar15 = aVar2 == aVar9;
            if (bVar15) {
              (local_10.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
              aVar9 = aVar2;
            }
            UNLOCK();
            aVar2 = aVar9;
          } while (!bVar15);
          pSVar13 = (pSVar7->ParentWidgetPtr).Object;
        }
LAB_146a71e93:
        local_18 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&local_20,&local_10);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_10.ReferenceController);
        pSVar7 = pSVar13;
      }
    }
  }
LAB_146a71d95:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar13);
  pTVar3 = (param_1->WeakReferenceCount).ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))();
    }
  }
  return (UUserWidget *)0x0;
}

// FindUMGWidget @ 146a71f70

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UWidget * __cdecl UIComponent::Private::FindUMGWidget(TWeakPtr<SWidget,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  UWidgetTree *this;
  TReferenceControllerBase<1> *pTVar3;
  UWidget *pUVar4;
  UUserWidget *pUVar5;
  undefined4 local_res8 [2];
  UWidget *local_res10;
  TWeakPtr<SWidget,1> local_38;
  undefined1 local_28 [16];
  UWidget **local_18;
  undefined4 *local_10;
  
  local_38.Object = param_1->Object;
  local_38.WeakReferenceCount.ReferenceController =
       (param_1->WeakReferenceCount).ReferenceController;
  if (local_38.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_38.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  pUVar5 = FindNearestUserWidget(&local_38);
  if ((pUVar5 != (UUserWidget *)0x0) &&
     ((pUVar5->WidgetTree).field0_0x0.DebugPtr != (UWidgetTree *)0x0)) {
    local_res10 = (UWidget *)0x0;
    local_res8[0] = 0x7fffffff;
    this = (pUVar5->WidgetTree).field0_0x0.DebugPtr;
    local_28._0_8_ = param_1->Object;
    local_28._8_8_ = (param_1->WeakReferenceCount).ReferenceController;
    if ((TReferenceControllerBase<1> *)local_28._8_8_ != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      ((TReferenceControllerBase<1> *)local_28._8_8_)->WeakReferenceCount =
           (atomic<int>)
           ((int)((TReferenceControllerBase<1> *)local_28._8_8_)->WeakReferenceCount + 1);
      UNLOCK();
    }
    local_18 = &local_res10;
    local_10 = local_res8;
    local_38.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)local_28;
    local_38.Object =
         (SWidget *)
         UE::Core::Private::Function::
         TFunctionRefCaller<`UIComponent::Private::FindUMGWidget'::__l2::<lambda_1>,bool,UWidget_*>
         ::Call;
    UWidgetTree::ForEachWidgetUntil(this,(TFunctionRef<bool___cdecl(UWidget_*)> *)&local_38);
    if ((TReferenceControllerBase<1> *)local_28._8_8_ != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = (atomic<int> *)(local_28._8_8_ + 0xc);
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(*(longlong *)local_28._8_8_ + 8))(local_28._8_8_,1);
      }
    }
    pUVar4 = local_res10;
    pTVar3 = (param_1->WeakReferenceCount).ReferenceController;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar3->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
      }
    }
    return pUVar4;
  }
  pTVar3 = (param_1->WeakReferenceCount).ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  return (UWidget *)0x0;
}

