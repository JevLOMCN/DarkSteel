// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AdvancedWidgets
// Functions: 30

// TSlateDecl<SSpinBox<__int64>,RequiredArgs::T0RequiredArgs> @ 14d8318b0

/* WARNING: Enum "Type": Some values do not have unique names */

TSlateDecl<SSpinBox<__int64>,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SSpinBox<__int64>,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SSpinBox<__int64>,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SSpinBox<__int64>,RequiredArgs::T0RequiredArgs> *this,char *param_1,
          char *param_2,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SSpinBox<__int64>,RequiredArgs::T0RequiredArgs> *pTVar7;
  SSpinBox<__int64> *pSVar8;
  SSpinBox<__int64> *local_28;
  FSharedReferencer<1> local_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (SSpinBox<__int64> *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0x758);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pSVar8 = (SSpinBox<__int64> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_V__SSpinBox__J___00_SharedPointerInternals__6B_;
    SSpinBox<__int64>::SSpinBox<__int64>((SSpinBox<__int64> *)(pTVar6 + 1));
    pSVar8 = (SSpinBox<__int64> *)(pTVar6 + 1);
    if (pSVar8 == (SSpinBox<__int64> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SSpinBox<__int64>,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14d8319cf;
    }
  }
  if (((pSVar8->_padding_ == 0) || (pSVar8->_padding_ == 0)) ||
     (*(int *)(pSVar8->_padding_ + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pSVar8->_padding_ = (longlong)pSVar8;
    if (pTVar6 != (TReferenceControllerBase<1> *)pSVar8->_padding_) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pSVar8->_padding_;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      pSVar8->_padding_ = (longlong)pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_14d8319cf:
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = pSVar8;
  local_20.ReferenceController = pTVar6;
  if (this != (TSlateDecl<SSpinBox<__int64>,RequiredArgs::T0RequiredArgs> *)&local_28) {
    (this->_Widget).Object = pSVar8;
    local_28 = (SSpinBox<__int64> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  if ((this->_Widget).Object == (SSpinBox<__int64> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SSpinBox<__int64>,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x748);
  return this;
}

// TSlateDecl<SSpinBox<unsigned___int64>,RequiredArgs::T0RequiredArgs> @ 14d831a90

/* WARNING: Enum "Type": Some values do not have unique names */

TSlateDecl<SSpinBox<unsigned___int64>,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SSpinBox<unsigned___int64>,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SSpinBox<unsigned___int64>,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SSpinBox<unsigned___int64>,RequiredArgs::T0RequiredArgs> *this,char *param_1,
          char *param_2,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SSpinBox<unsigned___int64>,RequiredArgs::T0RequiredArgs> *pTVar7;
  SSpinBox<unsigned___int64> *pSVar8;
  SSpinBox<unsigned___int64> *local_28;
  FSharedReferencer<1> local_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (SSpinBox<unsigned___int64> *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0x758);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pSVar8 = (SSpinBox<unsigned___int64> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_V__SSpinBox__K___00_SharedPointerInternals__6B_;
    SSpinBox<unsigned___int64>::SSpinBox<unsigned___int64>
              ((SSpinBox<unsigned___int64> *)(pTVar6 + 1));
    pSVar8 = (SSpinBox<unsigned___int64> *)(pTVar6 + 1);
    if (pSVar8 == (SSpinBox<unsigned___int64> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SSpinBox<unsigned___int64>,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14d831baf;
    }
  }
  if (((pSVar8->_padding_ == 0) || (pSVar8->_padding_ == 0)) ||
     (*(int *)(pSVar8->_padding_ + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pSVar8->_padding_ = (longlong)pSVar8;
    if (pTVar6 != (TReferenceControllerBase<1> *)pSVar8->_padding_) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pSVar8->_padding_;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      pSVar8->_padding_ = (longlong)pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_14d831baf:
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = pSVar8;
  local_20.ReferenceController = pTVar6;
  if (this != (TSlateDecl<SSpinBox<unsigned___int64>,RequiredArgs::T0RequiredArgs> *)&local_28) {
    (this->_Widget).Object = pSVar8;
    local_28 = (SSpinBox<unsigned___int64> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  if ((this->_Widget).Object == (SSpinBox<unsigned___int64> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SSpinBox<unsigned___int64>,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x748);
  return this;
}

// TSlateDecl<STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,RequiredArgs::T0RequiredArgs> @ 14d831c70

TSlateDecl<STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,RequiredArgs::T0RequiredArgs>
* __thiscall
TSlateDecl<STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,RequiredArgs::T0RequiredArgs>
::
TSlateDecl<STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,RequiredArgs::T0RequiredArgs>
           *this,char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  TTypeCompatibleBytes<STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>_> *pTVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  TIntrusiveReferenceController<STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>
  *pTVar8;
  TSlateDecl<STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,RequiredArgs::T0RequiredArgs>
  *pTVar9;
  STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *local_28;
  FSharedReferencer<1> local_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar8 = SharedPointerInternals::
           NewIntrusiveReferenceController<1,STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>_>
                     ();
  pTVar1 = &pTVar8->ObjectStorage;
  if (pTVar1 == (TTypeCompatibleBytes<STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>_>
                 *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TSlateDecl<STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,RequiredArgs::T0RequiredArgs>
                *)(*pcVar6)();
      return pTVar9;
    }
  }
  else if (((*(longlong *)((pTVar8->ObjectStorage).Pad + 8) == 0) ||
           (lVar4 = *(longlong *)((pTVar8->ObjectStorage).Pad + 0x10), lVar4 == 0)) ||
          (*(int *)(lVar4 + 8) < 1)) {
    if (pTVar8 != (TIntrusiveReferenceController<STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>
                   *)0x0) {
      LOCK();
      *(int *)&pTVar8->_padding_ = (int)pTVar8->_padding_ + 1;
      UNLOCK();
    }
    *(TTypeCompatibleBytes<STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>_> **)
     ((pTVar8->ObjectStorage).Pad + 8) = pTVar1;
    if (pTVar8 != *(TIntrusiveReferenceController<STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>
                    **)((pTVar8->ObjectStorage).Pad + 0x10)) {
      if (pTVar8 != (TIntrusiveReferenceController<STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>
                     *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)&pTVar8->_padding_ + 4);
        *piVar2 = *piVar2 + 1;
        UNLOCK();
      }
      plVar5 = *(longlong **)((pTVar8->ObjectStorage).Pad + 0x10);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      *(TIntrusiveReferenceController<STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>
        **)((pTVar8->ObjectStorage).Pad + 0x10) = pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pTVar8);
  }
  if (pTVar8 != (TIntrusiveReferenceController<STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>
                 *)0x0) {
    LOCK();
    *(int *)&pTVar8->_padding_ = (int)pTVar8->_padding_ + 1;
    UNLOCK();
  }
  local_28 = (STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)pTVar1;
  local_20.ReferenceController = (TReferenceControllerBase<1> *)pTVar8;
  if (this != (TSlateDecl<STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,RequiredArgs::T0RequiredArgs>
               *)&local_28) {
    (this->_Widget).Object =
         (STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)pTVar1;
    local_28 = (STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pTVar8);
  if (((this->_Widget).Object ==
       (STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pTVar9 = (TSlateDecl<STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,RequiredArgs::T0RequiredArgs>
              *)(*pcVar6)();
    return pTVar9;
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0xb00);
  return this;
}

// TSlateDecl<UE::PropertyViewer::SBoolPropertyValue,RequiredArgs::T0RequiredArgs> @ 14d831e10

TSlateDecl<UE::PropertyViewer::SBoolPropertyValue,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<UE::PropertyViewer::SBoolPropertyValue,RequiredArgs::T0RequiredArgs>::
TSlateDecl<UE::PropertyViewer::SBoolPropertyValue,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<UE::PropertyViewer::SBoolPropertyValue,RequiredArgs::T0RequiredArgs> *this,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<UE::PropertyViewer::SBoolPropertyValue,RequiredArgs::T0RequiredArgs> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  SBoolPropertyValue *pSVar9;
  undefined8 local_res8;
  SBoolPropertyValue *local_38;
  FSharedReferencer<1> local_30;
  
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SBoolPropertyValue *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_RequiredArgs = param_4;
  pTVar6 = ::operator_new(0x2f0);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pSVar9 = (SBoolPropertyValue *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VSBoolPropertyValue_PropertyViewer_UE___00_SharedPointerInternals__6B_
    ;
    memset(pTVar6 + 1,0,0x2e0);
    SCompoundWidget::SCompoundWidget((SCompoundWidget *)(pTVar6 + 1));
    param_4 = (T0RequiredArgs *)0x0;
    pTVar6[1]._padding_ = (longlong)&___7SBoolPropertyValue_PropertyViewer_UE__6B_;
    pTVar6[0x2b].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2b].WeakReferenceCount = (atomic<int>)0x0;
    FWeakObjectPtr::operator=
              ((FWeakObjectPtr *)&pTVar6[0x2b].SharedReferenceCount,(FObjectPtr)&param_4);
    local_res8 = 0;
    pTVar6[0x2c]._padding_ = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(pTVar6 + 0x2c),(FObjectPtr)&local_res8);
    pTVar6[0x2c].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2c].WeakReferenceCount = (atomic<int>)0x0;
    pSVar9 = (SBoolPropertyValue *)(pTVar6 + 1);
    pTVar6[0x2d].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2d].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar6[0x2e]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar6[0x2e]._padding_ + 4) = 1;
    pTVar6[0x2e].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2e].WeakReferenceCount = (atomic<int>)0x0;
    pTVar8 = pTVar6;
    if (pSVar9 == (SBoolPropertyValue *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<UE::PropertyViewer::SBoolPropertyValue,RequiredArgs::T0RequiredArgs> *)
                 (*pcVar4)();
        return pTVar7;
      }
      goto LAB_14d831f9c;
    }
  }
  if (((pSVar9->_padding_ == 0) || (pSVar9->_padding_ == 0)) ||
     (*(int *)(pSVar9->_padding_ + 8) < 1)) {
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pSVar9->_padding_ = (longlong)pSVar9;
    if (pTVar8 != (TReferenceControllerBase<1> *)pSVar9->_padding_) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pSVar9->_padding_;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      pSVar9->_padding_ = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
LAB_14d831f9c:
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = pSVar9;
  local_30.ReferenceController = pTVar8;
  if (this != (TSlateDecl<UE::PropertyViewer::SBoolPropertyValue,RequiredArgs::T0RequiredArgs> *)
              &local_38) {
    (this->_Widget).Object = pSVar9;
    local_38 = (SBoolPropertyValue *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  if ((this->_Widget).Object == (SBoolPropertyValue *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<UE::PropertyViewer::SBoolPropertyValue,RequiredArgs::T0RequiredArgs> *)
               (*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x2e0);
  return this;
}

// TSlateDecl<UE::ColorGrading::SColorGradingComponentSpinBox,RequiredArgs::T0RequiredArgs> @ 14d832060

TSlateDecl<UE::ColorGrading::SColorGradingComponentSpinBox,RequiredArgs::T0RequiredArgs> *
__thiscall
TSlateDecl<UE::ColorGrading::SColorGradingComponentSpinBox,RequiredArgs::T0RequiredArgs>::
TSlateDecl<UE::ColorGrading::SColorGradingComponentSpinBox,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<UE::ColorGrading::SColorGradingComponentSpinBox,RequiredArgs::T0RequiredArgs>
           *this,char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<UE::ColorGrading::SColorGradingComponentSpinBox,RequiredArgs::T0RequiredArgs> *pTVar7;
  SColorGradingComponentSpinBox *pSVar8;
  SColorGradingComponentSpinBox *local_28;
  FSharedReferencer<1> local_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (SColorGradingComponentSpinBox *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0x600);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pSVar8 = (SColorGradingComponentSpinBox *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VSColorGradingComponentSpinBox_ColorGrading_UE___00_SharedPointerInternals__6B_
    ;
    memset(pTVar6 + 1,0,0x5f0);
    UE::ColorGrading::SColorGradingComponentSpinBox::SColorGradingComponentSpinBox
              ((SColorGradingComponentSpinBox *)(pTVar6 + 1));
    pSVar8 = (SColorGradingComponentSpinBox *)(pTVar6 + 1);
    if (pSVar8 == (SColorGradingComponentSpinBox *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<UE::ColorGrading::SColorGradingComponentSpinBox,RequiredArgs::T0RequiredArgs>
                  *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14d832190;
    }
  }
  if (((pSVar8->_padding_ == 0) || (pSVar8->_padding_ == 0)) ||
     (*(int *)(pSVar8->_padding_ + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pSVar8->_padding_ = (longlong)pSVar8;
    if (pTVar6 != (TReferenceControllerBase<1> *)pSVar8->_padding_) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pSVar8->_padding_;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      pSVar8->_padding_ = (longlong)pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_14d832190:
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = pSVar8;
  local_20.ReferenceController = pTVar6;
  if (this != (TSlateDecl<UE::ColorGrading::SColorGradingComponentSpinBox,RequiredArgs::T0RequiredArgs>
               *)&local_28) {
    (this->_Widget).Object = pSVar8;
    local_28 = (SColorGradingComponentSpinBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  if ((this->_Widget).Object == (SColorGradingComponentSpinBox *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<UE::ColorGrading::SColorGradingComponentSpinBox,RequiredArgs::T0RequiredArgs>
                *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x5f0);
  return this;
}

// TSlateDecl<UE::ColorGrading::SColorGradingWheel,RequiredArgs::T0RequiredArgs> @ 14d832250

TSlateDecl<UE::ColorGrading::SColorGradingWheel,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<UE::ColorGrading::SColorGradingWheel,RequiredArgs::T0RequiredArgs>::
TSlateDecl<UE::ColorGrading::SColorGradingWheel,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<UE::ColorGrading::SColorGradingWheel,RequiredArgs::T0RequiredArgs> *this,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<UE::ColorGrading::SColorGradingWheel,RequiredArgs::T0RequiredArgs> *pTVar7;
  SColorGradingWheel *pSVar8;
  SColorGradingWheel *local_28;
  FSharedReferencer<1> local_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (SColorGradingWheel *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0x2c8);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pSVar8 = (SColorGradingWheel *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VSColorGradingWheel_ColorGrading_UE___00_SharedPointerInternals__6B_
    ;
    UE::ColorGrading::SColorGradingWheel::SColorGradingWheel((SColorGradingWheel *)(pTVar6 + 1));
    pSVar8 = (SColorGradingWheel *)(pTVar6 + 1);
    if (pSVar8 == (SColorGradingWheel *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<UE::ColorGrading::SColorGradingWheel,RequiredArgs::T0RequiredArgs> *)
                 (*pcVar4)();
        return pTVar7;
      }
      goto LAB_14d83236f;
    }
  }
  if (((pSVar8->_padding_ == 0) || (pSVar8->_padding_ == 0)) ||
     (*(int *)(pSVar8->_padding_ + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pSVar8->_padding_ = (longlong)pSVar8;
    if (pTVar6 != (TReferenceControllerBase<1> *)pSVar8->_padding_) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pSVar8->_padding_;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      pSVar8->_padding_ = (longlong)pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_14d83236f:
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = pSVar8;
  local_20.ReferenceController = pTVar6;
  if (this != (TSlateDecl<UE::ColorGrading::SColorGradingWheel,RequiredArgs::T0RequiredArgs> *)
              &local_28) {
    (this->_Widget).Object = pSVar8;
    local_28 = (SColorGradingWheel *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  if ((this->_Widget).Object == (SColorGradingWheel *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<UE::ColorGrading::SColorGradingWheel,RequiredArgs::T0RequiredArgs> *)
               (*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x2b8);
  return this;
}

// TSlateDecl<UE::PropertyViewer::SDefaultPropertyValue,RequiredArgs::T0RequiredArgs> @ 14d832430

TSlateDecl<UE::PropertyViewer::SDefaultPropertyValue,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<UE::PropertyViewer::SDefaultPropertyValue,RequiredArgs::T0RequiredArgs>::
TSlateDecl<UE::PropertyViewer::SDefaultPropertyValue,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<UE::PropertyViewer::SDefaultPropertyValue,RequiredArgs::T0RequiredArgs> *this,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  SCompoundWidget *this_00;
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<UE::PropertyViewer::SDefaultPropertyValue,RequiredArgs::T0RequiredArgs> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  SDefaultPropertyValue *pSVar9;
  undefined8 local_res8;
  SDefaultPropertyValue *local_38;
  FSharedReferencer<1> local_30;
  
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SDefaultPropertyValue *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_RequiredArgs = param_4;
  pTVar6 = ::operator_new(0x2e8);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pSVar9 = (SDefaultPropertyValue *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    this_00 = (SCompoundWidget *)(pTVar6 + 1);
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VSDefaultPropertyValue_PropertyViewer_UE___00_SharedPointerInternals__6B_
    ;
    memset(this_00,0,0x2d8);
    SCompoundWidget::SCompoundWidget(this_00);
    param_4 = (T0RequiredArgs *)0x0;
    this_00->_padding_ = (longlong)&___7SDefaultPropertyValue_PropertyViewer_UE__6B_;
    pTVar6[0x2b].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2b].WeakReferenceCount = (atomic<int>)0x0;
    FWeakObjectPtr::operator=
              ((FWeakObjectPtr *)&pTVar6[0x2b].SharedReferenceCount,(FObjectPtr)&param_4);
    local_res8 = 0;
    pTVar6[0x2c]._padding_ = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(pTVar6 + 0x2c),(FObjectPtr)&local_res8);
    pTVar6[0x2c].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2c].WeakReferenceCount = (atomic<int>)0x0;
    pSVar9 = (SDefaultPropertyValue *)(pTVar6 + 1);
    pTVar6[0x2d].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2d].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar6[0x2e]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar6[0x2e]._padding_ + 4) = 1;
    pTVar8 = pTVar6;
    if (pSVar9 == (SDefaultPropertyValue *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<UE::PropertyViewer::SDefaultPropertyValue,RequiredArgs::T0RequiredArgs>
                  *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14d8325b6;
    }
  }
  if (((pSVar9->_padding_ == 0) || (pSVar9->_padding_ == 0)) ||
     (*(int *)(pSVar9->_padding_ + 8) < 1)) {
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pSVar9->_padding_ = (longlong)pSVar9;
    if (pTVar8 != (TReferenceControllerBase<1> *)pSVar9->_padding_) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pSVar9->_padding_;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      pSVar9->_padding_ = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
LAB_14d8325b6:
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = pSVar9;
  local_30.ReferenceController = pTVar8;
  if (this != (TSlateDecl<UE::PropertyViewer::SDefaultPropertyValue,RequiredArgs::T0RequiredArgs> *)
              &local_38) {
    (this->_Widget).Object = pSVar9;
    local_38 = (SDefaultPropertyValue *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  if ((this->_Widget).Object == (SDefaultPropertyValue *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<UE::PropertyViewer::SDefaultPropertyValue,RequiredArgs::T0RequiredArgs> *
               )(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x2d8);
  return this;
}

// TSlateDecl<UE::PropertyViewer::SEnumPropertyValue,RequiredArgs::T0RequiredArgs> @ 14d832680

TSlateDecl<UE::PropertyViewer::SEnumPropertyValue,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<UE::PropertyViewer::SEnumPropertyValue,RequiredArgs::T0RequiredArgs>::
TSlateDecl<UE::PropertyViewer::SEnumPropertyValue,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<UE::PropertyViewer::SEnumPropertyValue,RequiredArgs::T0RequiredArgs> *this,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<UE::PropertyViewer::SEnumPropertyValue,RequiredArgs::T0RequiredArgs> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  SEnumPropertyValue *pSVar9;
  undefined8 local_res8;
  SEnumPropertyValue *local_38;
  FSharedReferencer<1> local_30;
  
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SEnumPropertyValue *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_RequiredArgs = param_4;
  pTVar6 = ::operator_new(0x2f8);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pSVar9 = (SEnumPropertyValue *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VSEnumPropertyValue_PropertyViewer_UE___00_SharedPointerInternals__6B_
    ;
    memset(pTVar6 + 1,0,0x2e8);
    SCompoundWidget::SCompoundWidget((SCompoundWidget *)(pTVar6 + 1));
    param_4 = (T0RequiredArgs *)0x0;
    pTVar6[1]._padding_ = (longlong)&___7SEnumPropertyValue_PropertyViewer_UE__6B_;
    pTVar6[0x2b].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2b].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2c]._padding_ = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(pTVar6 + 0x2c),(FObjectPtr)&param_4);
    local_res8 = 0;
    pTVar6[0x2c].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2c].WeakReferenceCount = (atomic<int>)0x0;
    FWeakObjectPtr::operator=
              ((FWeakObjectPtr *)&pTVar6[0x2c].SharedReferenceCount,(FObjectPtr)&local_res8);
    pTVar6[0x2d]._padding_ = 0;
    pSVar9 = (SEnumPropertyValue *)(pTVar6 + 1);
    pTVar6[0x2e]._padding_ = 0;
    pTVar6[0x2e].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2e].WeakReferenceCount = (atomic<int>)0x1;
    pTVar6[0x2f]._padding_ = 0;
    pTVar8 = pTVar6;
    if (pSVar9 == (SEnumPropertyValue *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<UE::PropertyViewer::SEnumPropertyValue,RequiredArgs::T0RequiredArgs> *)
                 (*pcVar4)();
        return pTVar7;
      }
      goto LAB_14d832813;
    }
  }
  if (((pSVar9->_padding_ == 0) || (pSVar9->_padding_ == 0)) ||
     (*(int *)(pSVar9->_padding_ + 8) < 1)) {
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pSVar9->_padding_ = (longlong)pSVar9;
    if (pTVar8 != (TReferenceControllerBase<1> *)pSVar9->_padding_) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pSVar9->_padding_;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      pSVar9->_padding_ = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
LAB_14d832813:
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = pSVar9;
  local_30.ReferenceController = pTVar8;
  if (this != (TSlateDecl<UE::PropertyViewer::SEnumPropertyValue,RequiredArgs::T0RequiredArgs> *)
              &local_38) {
    (this->_Widget).Object = pSVar9;
    local_38 = (SEnumPropertyValue *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  if ((this->_Widget).Object == (SEnumPropertyValue *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<UE::PropertyViewer::SEnumPropertyValue,RequiredArgs::T0RequiredArgs> *)
               (*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x2e8);
  return this;
}

// TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>_&&>_> @ 14d832ac0

TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>_&&>_>
* __thiscall
TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>_&&>_>
::
TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>_&&>_>
          (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>_&&>_>
           *this,char *param_1,char *param_2,int param_3,
          T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>_&&>
          *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>_&&>_>
  *pTVar7;
  SExpanderArrow *pSVar8;
  SExpanderArrow *local_28;
  FSharedReferencer<1> local_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (SExpanderArrow *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0x2f0);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pSVar8 = (SExpanderArrow *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VSExpanderArrow___00_SharedPointerInternals__6B_;
    SExpanderArrow::SExpanderArrow((SExpanderArrow *)(pTVar6 + 1));
    pSVar8 = (SExpanderArrow *)(pTVar6 + 1);
    if (pSVar8 == (SExpanderArrow *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>_&&>_>
                  *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14d832bdf;
    }
  }
  if (((pSVar8->_padding_ == 0) || (pSVar8->_padding_ == 0)) ||
     (*(int *)(pSVar8->_padding_ + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pSVar8->_padding_ = (longlong)pSVar8;
    if (pTVar6 != (TReferenceControllerBase<1> *)pSVar8->_padding_) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pSVar8->_padding_;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      pSVar8->_padding_ = (longlong)pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_14d832bdf:
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = pSVar8;
  local_20.ReferenceController = pTVar6;
  if (this != (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>_&&>_>
               *)&local_28) {
    (this->_Widget).Object = pSVar8;
    local_28 = (SExpanderArrow *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  if ((this->_Widget).Object == (SExpanderArrow *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>_&&>_>
                *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x2e0);
  return this;
}

// TSlateDecl<UE::PropertyViewer::SFieldIcon,RequiredArgs::T1RequiredArgs<FProperty_const_*_&>_> @ 14d832ca0

TSlateDecl<UE::PropertyViewer::SFieldIcon,RequiredArgs::T1RequiredArgs<FProperty_const_*_&>_> *
__thiscall
TSlateDecl<UE::PropertyViewer::SFieldIcon,RequiredArgs::T1RequiredArgs<FProperty_const_*_&>_>::
TSlateDecl<UE::PropertyViewer::SFieldIcon,RequiredArgs::T1RequiredArgs<FProperty_const_*_&>_>
          (TSlateDecl<UE::PropertyViewer::SFieldIcon,RequiredArgs::T1RequiredArgs<FProperty_const_*_&>_>
           *this,char *param_1,char *param_2,int param_3,
          T1RequiredArgs<FProperty_const_*_&> *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<UE::PropertyViewer::SFieldIcon,RequiredArgs::T1RequiredArgs<FProperty_const_*_&>_>
  *pTVar7;
  SFieldIcon *pSVar8;
  SFieldIcon *local_28;
  FSharedReferencer<1> local_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (SFieldIcon *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0x2b8);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pSVar8 = (SFieldIcon *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VSFieldIcon_PropertyViewer_UE___00_SharedPointerInternals__6B_
    ;
    memset(pTVar6 + 1,0,0x2a8);
    SCompoundWidget::SCompoundWidget((SCompoundWidget *)(pTVar6 + 1));
    pSVar8 = (SFieldIcon *)(pTVar6 + 1);
    pTVar6[1]._padding_ = (longlong)&___7SFieldIcon_PropertyViewer_UE__6B_;
    if (pSVar8 == (SFieldIcon *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<UE::PropertyViewer::SFieldIcon,RequiredArgs::T1RequiredArgs<FProperty_const_*_&>_>
                  *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14d832ddb;
    }
  }
  if (((*(longlong *)&pSVar8->field_0x8 == 0) || (*(longlong *)&pSVar8->field_0x10 == 0)) ||
     (*(int *)(*(longlong *)&pSVar8->field_0x10 + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(SFieldIcon **)&pSVar8->field_0x8 = pSVar8;
    if (pTVar6 != *(TReferenceControllerBase<1> **)&pSVar8->field_0x10) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pSVar8->field_0x10;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      *(TReferenceControllerBase<1> **)&pSVar8->field_0x10 = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_14d832ddb:
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = pSVar8;
  local_20.ReferenceController = pTVar6;
  if (this != (TSlateDecl<UE::PropertyViewer::SFieldIcon,RequiredArgs::T1RequiredArgs<FProperty_const_*_&>_>
               *)&local_28) {
    (this->_Widget).Object = pSVar8;
    local_28 = (SFieldIcon *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  if ((this->_Widget).Object == (SFieldIcon *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<UE::PropertyViewer::SFieldIcon,RequiredArgs::T1RequiredArgs<FProperty_const_*_&>_>
                *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x2a8);
  return this;
}

// TSlateDecl<UE::PropertyViewer::SFieldIcon,RequiredArgs::T1RequiredArgs<UClass_const_*_&>_> @ 14d832ea0

TSlateDecl<UE::PropertyViewer::SFieldIcon,RequiredArgs::T1RequiredArgs<UClass_const_*_&>_> *
__thiscall
TSlateDecl<UE::PropertyViewer::SFieldIcon,RequiredArgs::T1RequiredArgs<UClass_const_*_&>_>::
TSlateDecl<UE::PropertyViewer::SFieldIcon,RequiredArgs::T1RequiredArgs<UClass_const_*_&>_>
          (TSlateDecl<UE::PropertyViewer::SFieldIcon,RequiredArgs::T1RequiredArgs<UClass_const_*_&>_>
           *this,char *param_1,char *param_2,int param_3,T1RequiredArgs<UClass_const_*_&> *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<UE::PropertyViewer::SFieldIcon,RequiredArgs::T1RequiredArgs<UClass_const_*_&>_> *pTVar7
  ;
  SFieldIcon *pSVar8;
  SFieldIcon *local_28;
  FSharedReferencer<1> local_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (SFieldIcon *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0x2b8);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pSVar8 = (SFieldIcon *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VSFieldIcon_PropertyViewer_UE___00_SharedPointerInternals__6B_
    ;
    memset(pTVar6 + 1,0,0x2a8);
    SCompoundWidget::SCompoundWidget((SCompoundWidget *)(pTVar6 + 1));
    pSVar8 = (SFieldIcon *)(pTVar6 + 1);
    pTVar6[1]._padding_ = (longlong)&___7SFieldIcon_PropertyViewer_UE__6B_;
    if (pSVar8 == (SFieldIcon *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<UE::PropertyViewer::SFieldIcon,RequiredArgs::T1RequiredArgs<UClass_const_*_&>_>
                  *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14d832fdb;
    }
  }
  if (((*(longlong *)&pSVar8->field_0x8 == 0) || (*(longlong *)&pSVar8->field_0x10 == 0)) ||
     (*(int *)(*(longlong *)&pSVar8->field_0x10 + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(SFieldIcon **)&pSVar8->field_0x8 = pSVar8;
    if (pTVar6 != *(TReferenceControllerBase<1> **)&pSVar8->field_0x10) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pSVar8->field_0x10;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      *(TReferenceControllerBase<1> **)&pSVar8->field_0x10 = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_14d832fdb:
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = pSVar8;
  local_20.ReferenceController = pTVar6;
  if (this != (TSlateDecl<UE::PropertyViewer::SFieldIcon,RequiredArgs::T1RequiredArgs<UClass_const_*_&>_>
               *)&local_28) {
    (this->_Widget).Object = pSVar8;
    local_28 = (SFieldIcon *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  if ((this->_Widget).Object == (SFieldIcon *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<UE::PropertyViewer::SFieldIcon,RequiredArgs::T1RequiredArgs<UClass_const_*_&>_>
                *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x2a8);
  return this;
}

// TSlateDecl<UE::PropertyViewer::SFieldIcon,RequiredArgs::T1RequiredArgs<UFunction_const_*_&>_> @ 14d8330a0

TSlateDecl<UE::PropertyViewer::SFieldIcon,RequiredArgs::T1RequiredArgs<UFunction_const_*_&>_> *
__thiscall
TSlateDecl<UE::PropertyViewer::SFieldIcon,RequiredArgs::T1RequiredArgs<UFunction_const_*_&>_>::
TSlateDecl<UE::PropertyViewer::SFieldIcon,RequiredArgs::T1RequiredArgs<UFunction_const_*_&>_>
          (TSlateDecl<UE::PropertyViewer::SFieldIcon,RequiredArgs::T1RequiredArgs<UFunction_const_*_&>_>
           *this,char *param_1,char *param_2,int param_3,
          T1RequiredArgs<UFunction_const_*_&> *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<UE::PropertyViewer::SFieldIcon,RequiredArgs::T1RequiredArgs<UFunction_const_*_&>_>
  *pTVar7;
  SFieldIcon *pSVar8;
  SFieldIcon *local_28;
  FSharedReferencer<1> local_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (SFieldIcon *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0x2b8);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pSVar8 = (SFieldIcon *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VSFieldIcon_PropertyViewer_UE___00_SharedPointerInternals__6B_
    ;
    memset(pTVar6 + 1,0,0x2a8);
    SCompoundWidget::SCompoundWidget((SCompoundWidget *)(pTVar6 + 1));
    pSVar8 = (SFieldIcon *)(pTVar6 + 1);
    pTVar6[1]._padding_ = (longlong)&___7SFieldIcon_PropertyViewer_UE__6B_;
    if (pSVar8 == (SFieldIcon *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<UE::PropertyViewer::SFieldIcon,RequiredArgs::T1RequiredArgs<UFunction_const_*_&>_>
                  *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14d8331db;
    }
  }
  if (((*(longlong *)&pSVar8->field_0x8 == 0) || (*(longlong *)&pSVar8->field_0x10 == 0)) ||
     (*(int *)(*(longlong *)&pSVar8->field_0x10 + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(SFieldIcon **)&pSVar8->field_0x8 = pSVar8;
    if (pTVar6 != *(TReferenceControllerBase<1> **)&pSVar8->field_0x10) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pSVar8->field_0x10;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      *(TReferenceControllerBase<1> **)&pSVar8->field_0x10 = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_14d8331db:
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = pSVar8;
  local_20.ReferenceController = pTVar6;
  if (this != (TSlateDecl<UE::PropertyViewer::SFieldIcon,RequiredArgs::T1RequiredArgs<UFunction_const_*_&>_>
               *)&local_28) {
    (this->_Widget).Object = pSVar8;
    local_28 = (SFieldIcon *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  if ((this->_Widget).Object == (SFieldIcon *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<UE::PropertyViewer::SFieldIcon,RequiredArgs::T1RequiredArgs<UFunction_const_*_&>_>
                *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x2a8);
  return this;
}

// TSlateDecl<UE::PropertyViewer::SFieldIcon,RequiredArgs::T1RequiredArgs<UScriptStruct_const_*_&>_> @ 14d8332a0

TSlateDecl<UE::PropertyViewer::SFieldIcon,RequiredArgs::T1RequiredArgs<UScriptStruct_const_*_&>_> *
__thiscall
TSlateDecl<UE::PropertyViewer::SFieldIcon,RequiredArgs::T1RequiredArgs<UScriptStruct_const_*_&>_>::
TSlateDecl<UE::PropertyViewer::SFieldIcon,RequiredArgs::T1RequiredArgs<UScriptStruct_const_*_&>_>
          (TSlateDecl<UE::PropertyViewer::SFieldIcon,RequiredArgs::T1RequiredArgs<UScriptStruct_const_*_&>_>
           *this,char *param_1,char *param_2,int param_3,
          T1RequiredArgs<UScriptStruct_const_*_&> *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<UE::PropertyViewer::SFieldIcon,RequiredArgs::T1RequiredArgs<UScriptStruct_const_*_&>_>
  *pTVar7;
  SFieldIcon *pSVar8;
  SFieldIcon *local_28;
  FSharedReferencer<1> local_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (SFieldIcon *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0x2b8);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pSVar8 = (SFieldIcon *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VSFieldIcon_PropertyViewer_UE___00_SharedPointerInternals__6B_
    ;
    memset(pTVar6 + 1,0,0x2a8);
    SCompoundWidget::SCompoundWidget((SCompoundWidget *)(pTVar6 + 1));
    pSVar8 = (SFieldIcon *)(pTVar6 + 1);
    pTVar6[1]._padding_ = (longlong)&___7SFieldIcon_PropertyViewer_UE__6B_;
    if (pSVar8 == (SFieldIcon *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<UE::PropertyViewer::SFieldIcon,RequiredArgs::T1RequiredArgs<UScriptStruct_const_*_&>_>
                  *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14d8333db;
    }
  }
  if (((*(longlong *)&pSVar8->field_0x8 == 0) || (*(longlong *)&pSVar8->field_0x10 == 0)) ||
     (*(int *)(*(longlong *)&pSVar8->field_0x10 + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(SFieldIcon **)&pSVar8->field_0x8 = pSVar8;
    if (pTVar6 != *(TReferenceControllerBase<1> **)&pSVar8->field_0x10) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pSVar8->field_0x10;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      *(TReferenceControllerBase<1> **)&pSVar8->field_0x10 = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_14d8333db:
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = pSVar8;
  local_20.ReferenceController = pTVar6;
  if (this != (TSlateDecl<UE::PropertyViewer::SFieldIcon,RequiredArgs::T1RequiredArgs<UScriptStruct_const_*_&>_>
               *)&local_28) {
    (this->_Widget).Object = pSVar8;
    local_28 = (SFieldIcon *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  if ((this->_Widget).Object == (SFieldIcon *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<UE::PropertyViewer::SFieldIcon,RequiredArgs::T1RequiredArgs<UScriptStruct_const_*_&>_>
                *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x2a8);
  return this;
}

// TSlateDecl<UE::PropertyViewer::SFieldName,RequiredArgs::T1RequiredArgs<FProperty_*_&>_> @ 14d8334a0

TSlateDecl<UE::PropertyViewer::SFieldName,RequiredArgs::T1RequiredArgs<FProperty_*_&>_> * __thiscall
TSlateDecl<UE::PropertyViewer::SFieldName,RequiredArgs::T1RequiredArgs<FProperty_*_&>_>::
TSlateDecl<UE::PropertyViewer::SFieldName,RequiredArgs::T1RequiredArgs<FProperty_*_&>_>
          (TSlateDecl<UE::PropertyViewer::SFieldName,RequiredArgs::T1RequiredArgs<FProperty_*_&>_>
           *this,char *param_1,char *param_2,int param_3,T1RequiredArgs<FProperty_*_&> *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<UE::PropertyViewer::SFieldName,RequiredArgs::T1RequiredArgs<FProperty_*_&>_> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  SFieldName *pSVar9;
  SFieldName *local_38;
  FSharedReferencer<1> local_30;
  
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SFieldName *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_RequiredArgs = param_4;
  pTVar6 = ::operator_new(0x2d0);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pSVar9 = (SFieldName *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VSFieldName_PropertyViewer_UE___00_SharedPointerInternals__6B_
    ;
    memset(pTVar6 + 1,0,0x2c0);
    SCompoundWidget::SCompoundWidget((SCompoundWidget *)(pTVar6 + 1));
    pTVar6[1]._padding_ = (longlong)&___7SFieldName_PropertyViewer_UE__6B_;
    pSVar9 = (SFieldName *)(pTVar6 + 1);
    pTVar6[0x2b].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2b].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2c]._padding_ = 0;
    pTVar6[0x2c].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2c].WeakReferenceCount = (atomic<int>)0x0;
    pTVar8 = pTVar6;
    if (pSVar9 == (SFieldName *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<UE::PropertyViewer::SFieldName,RequiredArgs::T1RequiredArgs<FProperty_*_&>_>
                  *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14d8335ef;
    }
  }
  if (((pSVar9->_padding_ == 0) || (pSVar9->_padding_ == 0)) ||
     (*(int *)(pSVar9->_padding_ + 8) < 1)) {
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pSVar9->_padding_ = (longlong)pSVar9;
    if (pTVar8 != (TReferenceControllerBase<1> *)pSVar9->_padding_) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pSVar9->_padding_;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      pSVar9->_padding_ = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
LAB_14d8335ef:
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = pSVar9;
  local_30.ReferenceController = pTVar8;
  if (this != (TSlateDecl<UE::PropertyViewer::SFieldName,RequiredArgs::T1RequiredArgs<FProperty_*_&>_>
               *)&local_38) {
    (this->_Widget).Object = pSVar9;
    local_38 = (SFieldName *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  if ((this->_Widget).Object == (SFieldName *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<UE::PropertyViewer::SFieldName,RequiredArgs::T1RequiredArgs<FProperty_*_&>_>
                *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x2c0);
  return this;
}

// TSlateDecl<UE::PropertyViewer::SFieldName,RequiredArgs::T1RequiredArgs<UFunction_*_&>_> @ 14d8336b0

TSlateDecl<UE::PropertyViewer::SFieldName,RequiredArgs::T1RequiredArgs<UFunction_*_&>_> * __thiscall
TSlateDecl<UE::PropertyViewer::SFieldName,RequiredArgs::T1RequiredArgs<UFunction_*_&>_>::
TSlateDecl<UE::PropertyViewer::SFieldName,RequiredArgs::T1RequiredArgs<UFunction_*_&>_>
          (TSlateDecl<UE::PropertyViewer::SFieldName,RequiredArgs::T1RequiredArgs<UFunction_*_&>_>
           *this,char *param_1,char *param_2,int param_3,T1RequiredArgs<UFunction_*_&> *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<UE::PropertyViewer::SFieldName,RequiredArgs::T1RequiredArgs<UFunction_*_&>_> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  SFieldName *pSVar9;
  SFieldName *local_38;
  FSharedReferencer<1> local_30;
  
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SFieldName *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_RequiredArgs = param_4;
  pTVar6 = ::operator_new(0x2d0);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pSVar9 = (SFieldName *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VSFieldName_PropertyViewer_UE___00_SharedPointerInternals__6B_
    ;
    memset(pTVar6 + 1,0,0x2c0);
    SCompoundWidget::SCompoundWidget((SCompoundWidget *)(pTVar6 + 1));
    pTVar6[1]._padding_ = (longlong)&___7SFieldName_PropertyViewer_UE__6B_;
    pSVar9 = (SFieldName *)(pTVar6 + 1);
    pTVar6[0x2b].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2b].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2c]._padding_ = 0;
    pTVar6[0x2c].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2c].WeakReferenceCount = (atomic<int>)0x0;
    pTVar8 = pTVar6;
    if (pSVar9 == (SFieldName *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<UE::PropertyViewer::SFieldName,RequiredArgs::T1RequiredArgs<UFunction_*_&>_>
                  *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14d8337ff;
    }
  }
  if (((pSVar9->_padding_ == 0) || (pSVar9->_padding_ == 0)) ||
     (*(int *)(pSVar9->_padding_ + 8) < 1)) {
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pSVar9->_padding_ = (longlong)pSVar9;
    if (pTVar8 != (TReferenceControllerBase<1> *)pSVar9->_padding_) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pSVar9->_padding_;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      pSVar9->_padding_ = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
LAB_14d8337ff:
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = pSVar9;
  local_30.ReferenceController = pTVar8;
  if (this != (TSlateDecl<UE::PropertyViewer::SFieldName,RequiredArgs::T1RequiredArgs<UFunction_*_&>_>
               *)&local_38) {
    (this->_Widget).Object = pSVar9;
    local_38 = (SFieldName *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  if ((this->_Widget).Object == (SFieldName *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<UE::PropertyViewer::SFieldName,RequiredArgs::T1RequiredArgs<UFunction_*_&>_>
                *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x2c0);
  return this;
}

// TSlateDecl<UE::PropertyViewer::SFieldName,RequiredArgs::T1RequiredArgs<UClass_const_*_&>_> @ 14d8338c0

TSlateDecl<UE::PropertyViewer::SFieldName,RequiredArgs::T1RequiredArgs<UClass_const_*_&>_> *
__thiscall
TSlateDecl<UE::PropertyViewer::SFieldName,RequiredArgs::T1RequiredArgs<UClass_const_*_&>_>::
TSlateDecl<UE::PropertyViewer::SFieldName,RequiredArgs::T1RequiredArgs<UClass_const_*_&>_>
          (TSlateDecl<UE::PropertyViewer::SFieldName,RequiredArgs::T1RequiredArgs<UClass_const_*_&>_>
           *this,char *param_1,char *param_2,int param_3,T1RequiredArgs<UClass_const_*_&> *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<UE::PropertyViewer::SFieldName,RequiredArgs::T1RequiredArgs<UClass_const_*_&>_> *pTVar7
  ;
  TReferenceControllerBase<1> *pTVar8;
  SFieldName *pSVar9;
  SFieldName *local_38;
  FSharedReferencer<1> local_30;
  
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SFieldName *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_RequiredArgs = param_4;
  pTVar6 = ::operator_new(0x2d0);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pSVar9 = (SFieldName *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VSFieldName_PropertyViewer_UE___00_SharedPointerInternals__6B_
    ;
    memset(pTVar6 + 1,0,0x2c0);
    SCompoundWidget::SCompoundWidget((SCompoundWidget *)(pTVar6 + 1));
    pTVar6[1]._padding_ = (longlong)&___7SFieldName_PropertyViewer_UE__6B_;
    pSVar9 = (SFieldName *)(pTVar6 + 1);
    pTVar6[0x2b].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2b].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2c]._padding_ = 0;
    pTVar6[0x2c].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2c].WeakReferenceCount = (atomic<int>)0x0;
    pTVar8 = pTVar6;
    if (pSVar9 == (SFieldName *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<UE::PropertyViewer::SFieldName,RequiredArgs::T1RequiredArgs<UClass_const_*_&>_>
                  *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14d833a0f;
    }
  }
  if (((pSVar9->_padding_ == 0) || (pSVar9->_padding_ == 0)) ||
     (*(int *)(pSVar9->_padding_ + 8) < 1)) {
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pSVar9->_padding_ = (longlong)pSVar9;
    if (pTVar8 != (TReferenceControllerBase<1> *)pSVar9->_padding_) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pSVar9->_padding_;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      pSVar9->_padding_ = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
LAB_14d833a0f:
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = pSVar9;
  local_30.ReferenceController = pTVar8;
  if (this != (TSlateDecl<UE::PropertyViewer::SFieldName,RequiredArgs::T1RequiredArgs<UClass_const_*_&>_>
               *)&local_38) {
    (this->_Widget).Object = pSVar9;
    local_38 = (SFieldName *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  if ((this->_Widget).Object == (SFieldName *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<UE::PropertyViewer::SFieldName,RequiredArgs::T1RequiredArgs<UClass_const_*_&>_>
                *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x2c0);
  return this;
}

// TSlateDecl<UE::PropertyViewer::SFieldName,RequiredArgs::T1RequiredArgs<UScriptStruct_const_*_&>_> @ 14d833ad0

TSlateDecl<UE::PropertyViewer::SFieldName,RequiredArgs::T1RequiredArgs<UScriptStruct_const_*_&>_> *
__thiscall
TSlateDecl<UE::PropertyViewer::SFieldName,RequiredArgs::T1RequiredArgs<UScriptStruct_const_*_&>_>::
TSlateDecl<UE::PropertyViewer::SFieldName,RequiredArgs::T1RequiredArgs<UScriptStruct_const_*_&>_>
          (TSlateDecl<UE::PropertyViewer::SFieldName,RequiredArgs::T1RequiredArgs<UScriptStruct_const_*_&>_>
           *this,char *param_1,char *param_2,int param_3,
          T1RequiredArgs<UScriptStruct_const_*_&> *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<UE::PropertyViewer::SFieldName,RequiredArgs::T1RequiredArgs<UScriptStruct_const_*_&>_>
  *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  SFieldName *pSVar9;
  SFieldName *local_38;
  FSharedReferencer<1> local_30;
  
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SFieldName *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_RequiredArgs = param_4;
  pTVar6 = ::operator_new(0x2d0);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pSVar9 = (SFieldName *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VSFieldName_PropertyViewer_UE___00_SharedPointerInternals__6B_
    ;
    memset(pTVar6 + 1,0,0x2c0);
    SCompoundWidget::SCompoundWidget((SCompoundWidget *)(pTVar6 + 1));
    pTVar6[1]._padding_ = (longlong)&___7SFieldName_PropertyViewer_UE__6B_;
    pSVar9 = (SFieldName *)(pTVar6 + 1);
    pTVar6[0x2b].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2b].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2c]._padding_ = 0;
    pTVar6[0x2c].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2c].WeakReferenceCount = (atomic<int>)0x0;
    pTVar8 = pTVar6;
    if (pSVar9 == (SFieldName *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<UE::PropertyViewer::SFieldName,RequiredArgs::T1RequiredArgs<UScriptStruct_const_*_&>_>
                  *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14d833c1f;
    }
  }
  if (((pSVar9->_padding_ == 0) || (pSVar9->_padding_ == 0)) ||
     (*(int *)(pSVar9->_padding_ + 8) < 1)) {
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pSVar9->_padding_ = (longlong)pSVar9;
    if (pTVar8 != (TReferenceControllerBase<1> *)pSVar9->_padding_) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pSVar9->_padding_;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      pSVar9->_padding_ = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
LAB_14d833c1f:
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = pSVar9;
  local_30.ReferenceController = pTVar8;
  if (this != (TSlateDecl<UE::PropertyViewer::SFieldName,RequiredArgs::T1RequiredArgs<UScriptStruct_const_*_&>_>
               *)&local_38) {
    (this->_Widget).Object = pSVar9;
    local_38 = (SFieldName *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  if ((this->_Widget).Object == (SFieldName *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<UE::PropertyViewer::SFieldName,RequiredArgs::T1RequiredArgs<UScriptStruct_const_*_&>_>
                *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x2c0);
  return this;
}

// TSlateDecl<SLayeredImage,RequiredArgs::T1RequiredArgs<TArray<TTuple<TAttribute<FSlateBrush_const_*>,TAttribute<FSlateColor>_>,TSizedDefaultAllocator<32>_>_&&>_> @ 14d833ce0

TSlateDecl<SLayeredImage,RequiredArgs::T1RequiredArgs<TArray<TTuple<TAttribute<FSlateBrush_const_*>,TAttribute<FSlateColor>_>,TSizedDefaultAllocator<32>_>_&&>_>
* __thiscall
TSlateDecl<SLayeredImage,RequiredArgs::T1RequiredArgs<TArray<TTuple<TAttribute<FSlateBrush_const_*>,TAttribute<FSlateColor>_>,TSizedDefaultAllocator<32>_>_&&>_>
::
TSlateDecl<SLayeredImage,RequiredArgs::T1RequiredArgs<TArray<TTuple<TAttribute<FSlateBrush_const_*>,TAttribute<FSlateColor>_>,TSizedDefaultAllocator<32>_>_&&>_>
          (TSlateDecl<SLayeredImage,RequiredArgs::T1RequiredArgs<TArray<TTuple<TAttribute<FSlateBrush_const_*>,TAttribute<FSlateColor>_>,TSizedDefaultAllocator<32>_>_&&>_>
           *this,char *param_1,char *param_2,int param_3,
          T1RequiredArgs<TArray<TTuple<TAttribute<FSlateBrush_const_*>,TAttribute<FSlateColor>_>,TSizedDefaultAllocator<32>_>_&&>
          *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SLayeredImage,RequiredArgs::T1RequiredArgs<TArray<TTuple<TAttribute<FSlateBrush_const_*>,TAttribute<FSlateColor>_>,TSizedDefaultAllocator<32>_>_&&>_>
  *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  SLayeredImage *pSVar9;
  SLayeredImage *local_38;
  FSharedReferencer<1> local_30;
  
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SLayeredImage *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_RequiredArgs = param_4;
  pTVar6 = ::operator_new(0x2f8);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pSVar9 = (SLayeredImage *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VSLayeredImage___00_SharedPointerInternals__6B_;
    memset(pTVar6 + 1,0,0x2e8);
    SImage::SImage((SImage *)(pTVar6 + 1));
    pTVar6[1]._padding_ = (longlong)&___7SLayeredImage__6B_;
    pSVar9 = (SLayeredImage *)(pTVar6 + 1);
    pTVar6[0x2e].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2e].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar6[0x2f]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar6[0x2f]._padding_ + 4) = 2;
    pTVar8 = pTVar6;
    if (pSVar9 == (SLayeredImage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SLayeredImage,RequiredArgs::T1RequiredArgs<TArray<TTuple<TAttribute<FSlateBrush_const_*>,TAttribute<FSlateColor>_>,TSizedDefaultAllocator<32>_>_&&>_>
                  *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14d833e32;
    }
  }
  if (((pSVar9->_padding_ == 0) || (pSVar9->_padding_ == 0)) ||
     (*(int *)(pSVar9->_padding_ + 8) < 1)) {
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pSVar9->_padding_ = (longlong)pSVar9;
    if (pTVar8 != (TReferenceControllerBase<1> *)pSVar9->_padding_) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pSVar9->_padding_;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      pSVar9->_padding_ = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
LAB_14d833e32:
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = pSVar9;
  local_30.ReferenceController = pTVar8;
  if (this != (TSlateDecl<SLayeredImage,RequiredArgs::T1RequiredArgs<TArray<TTuple<TAttribute<FSlateBrush_const_*>,TAttribute<FSlateColor>_>,TSizedDefaultAllocator<32>_>_&&>_>
               *)&local_38) {
    (this->_Widget).Object = pSVar9;
    local_38 = (SLayeredImage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  if ((this->_Widget).Object == (SLayeredImage *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SLayeredImage,RequiredArgs::T1RequiredArgs<TArray<TTuple<TAttribute<FSlateBrush_const_*>,TAttribute<FSlateColor>_>,TSizedDefaultAllocator<32>_>_&&>_>
                *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x2e8);
  return this;
}

// TSlateDecl<SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::SListViewPinnedRowWidget,RequiredArgs::T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>_&&,int_&,int_&>_> @ 14d833ef0

TSlateDecl<SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::SListViewPinnedRowWidget,RequiredArgs::T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>_&&,int_&,int_&>_>
* __thiscall
TSlateDecl<SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::SListViewPinnedRowWidget,RequiredArgs::T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>_&&,int_&,int_&>_>
::
TSlateDecl<SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::SListViewPinnedRowWidget,RequiredArgs::T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>_&&,int_&,int_&>_>
          (TSlateDecl<SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::SListViewPinnedRowWidget,RequiredArgs::T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>_&&,int_&,int_&>_>
           *this,char *param_1,char *param_2,int param_3,
          T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>_&&,int_&,int_&>
          *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::SListViewPinnedRowWidget,RequiredArgs::T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>_&&,int_&,int_&>_>
  *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  SListViewPinnedRowWidget *pSVar9;
  SListViewPinnedRowWidget *local_38;
  FSharedReferencer<1> local_30;
  
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SListViewPinnedRowWidget *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_RequiredArgs = param_4;
  pTVar6 = ::operator_new(0x2d8);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pSVar9 = (SListViewPinnedRowWidget *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VSListViewPinnedRowWidget___SListView_V__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00_____00_SharedPointerInternals__6B_
    ;
    memset(pTVar6 + 1,0,0x2c8);
    SCompoundWidget::SCompoundWidget((SCompoundWidget *)(pTVar6 + 1));
    pTVar6[1]._padding_ =
         (longlong)
         &
         ___7SListViewPinnedRowWidget___SListView_V__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00____6B_
    ;
    pSVar9 = (SListViewPinnedRowWidget *)(pTVar6 + 1);
    pTVar6[0x2b].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2b].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2c]._padding_ = 0;
    pTVar6[0x2c].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2c].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2d]._padding_ = 0;
    pTVar8 = pTVar6;
    if (pSVar9 == (SListViewPinnedRowWidget *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::SListViewPinnedRowWidget,RequiredArgs::T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>_&&,int_&,int_&>_>
                  *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14d834046;
    }
  }
  if (((pSVar9->_padding_ == 0) || (pSVar9->_padding_ == 0)) ||
     (*(int *)(pSVar9->_padding_ + 8) < 1)) {
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pSVar9->_padding_ = (longlong)pSVar9;
    if (pTVar8 != (TReferenceControllerBase<1> *)pSVar9->_padding_) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pSVar9->_padding_;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      pSVar9->_padding_ = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
LAB_14d834046:
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = pSVar9;
  local_30.ReferenceController = pTVar8;
  if (this != (TSlateDecl<SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::SListViewPinnedRowWidget,RequiredArgs::T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>_&&,int_&,int_&>_>
               *)&local_38) {
    (this->_Widget).Object = pSVar9;
    local_38 = (SListViewPinnedRowWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  if ((this->_Widget).Object == (SListViewPinnedRowWidget *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::SListViewPinnedRowWidget,RequiredArgs::T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>_&&,int_&,int_&>_>
                *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x2c8);
  return this;
}

// TSlateDecl<UE::PropertyViewer::SNumericPropertyValue,RequiredArgs::T0RequiredArgs> @ 14d834110

TSlateDecl<UE::PropertyViewer::SNumericPropertyValue,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<UE::PropertyViewer::SNumericPropertyValue,RequiredArgs::T0RequiredArgs>::
TSlateDecl<UE::PropertyViewer::SNumericPropertyValue,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<UE::PropertyViewer::SNumericPropertyValue,RequiredArgs::T0RequiredArgs> *this,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<UE::PropertyViewer::SNumericPropertyValue,RequiredArgs::T0RequiredArgs> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  SNumericPropertyValue *pSVar9;
  undefined8 local_res8;
  SNumericPropertyValue *local_38;
  FSharedReferencer<1> local_30;
  
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SNumericPropertyValue *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_RequiredArgs = param_4;
  pTVar6 = ::operator_new(0x2f0);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pSVar9 = (SNumericPropertyValue *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VSNumericPropertyValue_PropertyViewer_UE___00_SharedPointerInternals__6B_
    ;
    memset(pTVar6 + 1,0,0x2e0);
    SCompoundWidget::SCompoundWidget((SCompoundWidget *)(pTVar6 + 1));
    param_4 = (T0RequiredArgs *)0x0;
    pTVar6[1]._padding_ = (longlong)&___7SNumericPropertyValue_PropertyViewer_UE__6B_;
    pTVar6[0x2b].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2b].WeakReferenceCount = (atomic<int>)0x0;
    FWeakObjectPtr::operator=
              ((FWeakObjectPtr *)&pTVar6[0x2b].SharedReferenceCount,(FObjectPtr)&param_4);
    local_res8 = 0;
    pTVar6[0x2c]._padding_ = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(pTVar6 + 0x2c),(FObjectPtr)&local_res8);
    pTVar6[0x2c].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2c].WeakReferenceCount = (atomic<int>)0x0;
    pSVar9 = (SNumericPropertyValue *)(pTVar6 + 1);
    pTVar6[0x2d].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2d].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar6[0x2e]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar6[0x2e]._padding_ + 4) = 1;
    pTVar6[0x2e].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2e].WeakReferenceCount = (atomic<int>)0x0;
    pTVar8 = pTVar6;
    if (pSVar9 == (SNumericPropertyValue *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<UE::PropertyViewer::SNumericPropertyValue,RequiredArgs::T0RequiredArgs>
                  *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14d83429c;
    }
  }
  if (((pSVar9->_padding_ == 0) || (pSVar9->_padding_ == 0)) ||
     (*(int *)(pSVar9->_padding_ + 8) < 1)) {
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pSVar9->_padding_ = (longlong)pSVar9;
    if (pTVar8 != (TReferenceControllerBase<1> *)pSVar9->_padding_) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pSVar9->_padding_;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      pSVar9->_padding_ = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
LAB_14d83429c:
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = pSVar9;
  local_30.ReferenceController = pTVar8;
  if (this != (TSlateDecl<UE::PropertyViewer::SNumericPropertyValue,RequiredArgs::T0RequiredArgs> *)
              &local_38) {
    (this->_Widget).Object = pSVar9;
    local_38 = (SNumericPropertyValue *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  if ((this->_Widget).Object == (SNumericPropertyValue *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<UE::PropertyViewer::SNumericPropertyValue,RequiredArgs::T0RequiredArgs> *
               )(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x2e0);
  return this;
}

// TSlateDecl<SRadialSlider,RequiredArgs::T0RequiredArgs> @ 14d834360

TSlateDecl<SRadialSlider,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SRadialSlider,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SRadialSlider,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SRadialSlider,RequiredArgs::T0RequiredArgs> *this,char *param_1,char *param_2,
          int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SRadialSlider,RequiredArgs::T0RequiredArgs> *pTVar7;
  SRadialSlider *pSVar8;
  SRadialSlider *local_28;
  FSharedReferencer<1> local_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (SRadialSlider *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0x600);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pSVar8 = (SRadialSlider *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VSRadialSlider___00_SharedPointerInternals__6B_;
    SRadialSlider::SRadialSlider((SRadialSlider *)(pTVar6 + 1));
    pSVar8 = (SRadialSlider *)(pTVar6 + 1);
    if (pSVar8 == (SRadialSlider *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SRadialSlider,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14d83447f;
    }
  }
  if (((pSVar8->_padding_ == 0) || (pSVar8->_padding_ == 0)) ||
     (*(int *)(pSVar8->_padding_ + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pSVar8->_padding_ = (longlong)pSVar8;
    if (pTVar6 != (TReferenceControllerBase<1> *)pSVar8->_padding_) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pSVar8->_padding_;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      pSVar8->_padding_ = (longlong)pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_14d83447f:
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = pSVar8;
  local_20.ReferenceController = pTVar6;
  if (this != (TSlateDecl<SRadialSlider,RequiredArgs::T0RequiredArgs> *)&local_28) {
    (this->_Widget).Object = pSVar8;
    local_28 = (SRadialSlider *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  if ((this->_Widget).Object == (SRadialSlider *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SRadialSlider,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x5f0);
  return this;
}

// TSlateDecl<UE::PropertyViewer::SStringPropertyValue,RequiredArgs::T0RequiredArgs> @ 14d834540

TSlateDecl<UE::PropertyViewer::SStringPropertyValue,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<UE::PropertyViewer::SStringPropertyValue,RequiredArgs::T0RequiredArgs>::
TSlateDecl<UE::PropertyViewer::SStringPropertyValue,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<UE::PropertyViewer::SStringPropertyValue,RequiredArgs::T0RequiredArgs> *this,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<UE::PropertyViewer::SStringPropertyValue,RequiredArgs::T0RequiredArgs> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  SStringPropertyValue *pSVar9;
  undefined8 local_res8;
  SStringPropertyValue *local_38;
  FSharedReferencer<1> local_30;
  
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SStringPropertyValue *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_RequiredArgs = param_4;
  pTVar6 = ::operator_new(0x2f0);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pSVar9 = (SStringPropertyValue *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VSStringPropertyValue_PropertyViewer_UE___00_SharedPointerInternals__6B_
    ;
    memset(pTVar6 + 1,0,0x2e0);
    SCompoundWidget::SCompoundWidget((SCompoundWidget *)(pTVar6 + 1));
    param_4 = (T0RequiredArgs *)0x0;
    pTVar6[1]._padding_ = (longlong)&___7SStringPropertyValue_PropertyViewer_UE__6B_;
    pTVar6[0x2b].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2b].WeakReferenceCount = (atomic<int>)0x0;
    FWeakObjectPtr::operator=
              ((FWeakObjectPtr *)&pTVar6[0x2b].SharedReferenceCount,(FObjectPtr)&param_4);
    local_res8 = 0;
    pTVar6[0x2c]._padding_ = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(pTVar6 + 0x2c),(FObjectPtr)&local_res8);
    pTVar6[0x2c].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2c].WeakReferenceCount = (atomic<int>)0x0;
    pSVar9 = (SStringPropertyValue *)(pTVar6 + 1);
    pTVar6[0x2d].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2d].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar6[0x2e]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar6[0x2e]._padding_ + 4) = 1;
    pTVar6[0x2e].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2e].WeakReferenceCount = (atomic<int>)0x0;
    pTVar8 = pTVar6;
    if (pSVar9 == (SStringPropertyValue *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<UE::PropertyViewer::SStringPropertyValue,RequiredArgs::T0RequiredArgs>
                  *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14d8346cc;
    }
  }
  if (((pSVar9->_padding_ == 0) || (pSVar9->_padding_ == 0)) ||
     (*(int *)(pSVar9->_padding_ + 8) < 1)) {
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pSVar9->_padding_ = (longlong)pSVar9;
    if (pTVar8 != (TReferenceControllerBase<1> *)pSVar9->_padding_) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pSVar9->_padding_;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      pSVar9->_padding_ = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
LAB_14d8346cc:
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = pSVar9;
  local_30.ReferenceController = pTVar8;
  if (this != (TSlateDecl<UE::PropertyViewer::SStringPropertyValue,RequiredArgs::T0RequiredArgs> *)
              &local_38) {
    (this->_Widget).Object = pSVar9;
    local_38 = (SStringPropertyValue *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  if ((this->_Widget).Object == (SStringPropertyValue *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<UE::PropertyViewer::SStringPropertyValue,RequiredArgs::T0RequiredArgs> *)
               (*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x2e0);
  return this;
}

// operator<<= @ 14d83da40

TSharedRef<STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1> * __thiscall
TSlateDecl<STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>_&&>_>
::operator<<=(TSlateDecl<STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>_&&>_>
              *this,TSharedRef<STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>
                    *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *pSVar2;
  TSharedRef<SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *pSVar5;
  code *pcVar6;
  bool bVar7;
  char cVar8;
  byte bVar9;
  TSharedRef<STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1> *pTVar10;
  TSharedRef<STableViewBase,1> local_28;
  
  if ((this->_Widget).Object ==
      (STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1> *)
                (*pcVar6)();
      return pTVar10;
    }
  }
  SWidget::SWidgetConstruct
            ((SWidget *)&((this->_Widget).Object)->_padding_,(FSlateBaseNamedArgs *)param_1);
  pSVar2 = (this->_Widget).Object;
  pTVar3 = this->_RequiredArgs->Arg0;
  pTVar4 = (pTVar3->SharedReferenceCount).ReferenceController;
  pSVar5 = pTVar3->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28.Object = (STableViewBase *)pSVar5;
  local_28.SharedReferenceCount.ReferenceController = pTVar4;
  STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::ConstructInternal
            (pSVar2,param_1,&local_28);
  (**(code **)(pSVar2->_padding_ + 0x80))
            (pSVar2,(int)pSVar5->_padding_,&param_1->_Padding,&param_1->_Content);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  if ((this->_Widget).Object ==
      (STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1> *)
                (*pcVar6)();
      return pTVar10;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar8 = (**(code **)(pSVar2->_padding_ + 0x228))(&pSVar2->_padding_);
    bVar9 = 0;
    if (cVar8 == '\0') goto LAB_14d83db42;
  }
  bVar9 = 0x20;
LAB_14d83db42:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar9;
  if ((this->_Widget).Object ==
      (STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1> *)
                (*pcVar6)();
      return pTVar10;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object ==
      (STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1> *)
                (*pcVar6)();
      return pTVar10;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0;
  if (__return_storage_ptr__->Object ==
      (STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1> *)
                (*pcVar6)();
      return pTVar10;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 14d83dc10

TSharedRef<STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1> * __thiscall
TSlateDecl<STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>_&>_>
::operator<<=(TSlateDecl<STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>_&>_>
              *this,TSharedRef<STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>
                    *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *pSVar2;
  TSharedRef<STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *pSVar5;
  code *pcVar6;
  bool bVar7;
  char cVar8;
  byte bVar9;
  TSharedRef<STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1> *pTVar10;
  TSharedRef<STableViewBase,1> local_28;
  
  if ((this->_Widget).Object ==
      (STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1> *)
                (*pcVar6)();
      return pTVar10;
    }
  }
  SWidget::SWidgetConstruct
            ((SWidget *)&((this->_Widget).Object)->_padding_,(FSlateBaseNamedArgs *)param_1);
  pSVar2 = (this->_Widget).Object;
  pTVar3 = this->_RequiredArgs->Arg0;
  pTVar4 = (pTVar3->SharedReferenceCount).ReferenceController;
  pSVar5 = pTVar3->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28.Object = (STableViewBase *)pSVar5;
  local_28.SharedReferenceCount.ReferenceController = pTVar4;
  STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::ConstructInternal
            (pSVar2,param_1,&local_28);
  (**(code **)(pSVar2->_padding_ + 0x80))
            (pSVar2,*(undefined4 *)&pSVar5->field_0x2b0,&param_1->_Padding,&param_1->_Content);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  if ((this->_Widget).Object ==
      (STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1> *)
                (*pcVar6)();
      return pTVar10;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar8 = (**(code **)(pSVar2->_padding_ + 0x228))(&pSVar2->_padding_);
    bVar9 = 0;
    if (cVar8 == '\0') goto LAB_14d83dd12;
  }
  bVar9 = 0x20;
LAB_14d83dd12:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar9;
  if ((this->_Widget).Object ==
      (STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1> *)
                (*pcVar6)();
      return pTVar10;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object ==
      (STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1> *)
                (*pcVar6)();
      return pTVar10;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0;
  if (__return_storage_ptr__->Object ==
      (STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1> *)
                (*pcVar6)();
      return pTVar10;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 14d83dde0

TSharedRef<STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1> * __thiscall
TSlateDecl<STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
::operator<<=(TSlateDecl<STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
              *this,TSharedRef<STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>
                    *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *pSVar2;
  TSharedRef<STableViewBase,1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  byte bVar7;
  TSharedRef<STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1> *pTVar8;
  
  if ((this->_Widget).Object ==
      (STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedRef<STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1> *)
               (*pcVar4)();
      return pTVar8;
    }
  }
  SWidget::SWidgetConstruct
            ((SWidget *)&((this->_Widget).Object)->_padding_,(FSlateBaseNamedArgs *)param_1);
  pSVar2 = (this->_Widget).Object;
  pTVar3 = this->_RequiredArgs->Arg0;
  STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::ConstructInternal
            (pSVar2,param_1,pTVar3);
  (**(code **)(pSVar2->_padding_ + 0x80))
            (pSVar2,pTVar3->Object->TableViewMode,&param_1->_Padding,&param_1->_Content);
  if ((this->_Widget).Object ==
      (STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedRef<STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1> *)
               (*pcVar4)();
      return pTVar8;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar6 = (**(code **)(pSVar2->_padding_ + 0x228))(&pSVar2->_padding_);
    bVar7 = 0;
    if (cVar6 == '\0') goto LAB_14d83dec2;
  }
  bVar7 = 0x20;
LAB_14d83dec2:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar7;
  if ((this->_Widget).Object ==
      (STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedRef<STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1> *)
               (*pcVar4)();
      return pTVar8;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object ==
      (STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedRef<STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1> *)
               (*pcVar4)();
      return pTVar8;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0;
  if (__return_storage_ptr__->Object ==
      (STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedRef<STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1> *)
               (*pcVar4)();
      return pTVar8;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 14d83df90

TSharedRef<STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1> * __thiscall
TSlateDecl<STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,RequiredArgs::T0RequiredArgs>
::operator<<=(TSlateDecl<STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,RequiredArgs::T0RequiredArgs>
              *this,TSharedRef<STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>
                    *__return_storage_ptr__,FArguments *param_1)

{
  undefined1 *puVar1;
  STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1> *pTVar7;
  
  if ((this->_Widget).Object ==
      (STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1> *)
               (*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::Construct
            ((this->_Widget).Object,param_1);
  if ((this->_Widget).Object ==
      (STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1> *)
               (*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->field_0x30 & 0x10) == 0) {
    cVar5 = (**(code **)(*(longlong *)pSVar2 + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_14d83e031;
  }
  bVar6 = 0x20;
LAB_14d83e031:
  pSVar2->field_0x30 = pSVar2->field_0x30 & 0xdf;
  pSVar2->field_0x30 = pSVar2->field_0x30 | bVar6;
  if ((this->_Widget).Object ==
      (STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1> *)
               (*pcVar3)();
      return pTVar7;
    }
  }
  puVar1 = &((this->_Widget).Object)->field_0x31;
  *puVar1 = *puVar1 | 4;
  if ((this->_Widget).Object ==
      (STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1> *)
               (*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0;
  if (__return_storage_ptr__->Object ==
      (STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1> *)
               (*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 14d83e100

TSharedRef<UE::ColorGrading::SColorGradingComponentSpinBox,1> * __thiscall
TSlateDecl<UE::ColorGrading::SColorGradingComponentSpinBox,RequiredArgs::T0RequiredArgs>::
operator<<=(TSlateDecl<UE::ColorGrading::SColorGradingComponentSpinBox,RequiredArgs::T0RequiredArgs>
            *this,TSharedRef<UE::ColorGrading::SColorGradingComponentSpinBox,1>
                  *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  SColorGradingComponentSpinBox *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<UE::ColorGrading::SColorGradingComponentSpinBox,1> *pTVar7;
  
  if ((this->_Widget).Object == (SColorGradingComponentSpinBox *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<UE::ColorGrading::SColorGradingComponentSpinBox,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  UE::ColorGrading::SColorGradingComponentSpinBox::Construct((this->_Widget).Object,param_1);
  if ((this->_Widget).Object == (SColorGradingComponentSpinBox *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<UE::ColorGrading::SColorGradingComponentSpinBox,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar5 = (**(code **)(pSVar2->_padding_ + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_14d83e1a1;
  }
  bVar6 = 0x20;
LAB_14d83e1a1:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar6;
  if ((this->_Widget).Object == (SColorGradingComponentSpinBox *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<UE::ColorGrading::SColorGradingComponentSpinBox,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SColorGradingComponentSpinBox *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<UE::ColorGrading::SColorGradingComponentSpinBox,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SColorGradingComponentSpinBox *)0x0;
  if (__return_storage_ptr__->Object == (SColorGradingComponentSpinBox *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<UE::ColorGrading::SColorGradingComponentSpinBox,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 14d83e270

TSharedRef<SExpanderArrow,1> * __thiscall
TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<`UE::PropertyViewer::Private::FPropertyViewerImpl::HandleGenerateRow'::__l2::SMultiRowType,1>_&&>_>
::operator<<=(void *this,TSharedRef<SExpanderArrow,1> *__return_storage_ptr__,FArguments *param_1)

{
  SExpanderArrow *this_00;
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  byte bVar5;
  TSharedRef<SExpanderArrow,1> *pTVar6;
  TSharedPtr<ITableRow,1> local_18;
  
  if (*(longlong *)this == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TSharedRef<SExpanderArrow,1> *)(*pcVar2)();
      return pTVar6;
    }
  }
  SWidget::SWidgetConstruct(*(SWidget **)this,(FSlateBaseNamedArgs *)param_1);
  this_00 = *(SExpanderArrow **)this;
  local_18.Object = *(ITableRow **)**(longlong **)((longlong)this + 0x10);
  local_18.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)((undefined8 *)**(longlong **)((longlong)this + 0x10))[1];
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SExpanderArrow::Construct(this_00,param_1,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  if (*(longlong *)this == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TSharedRef<SExpanderArrow,1> *)(*pcVar2)();
      return pTVar6;
    }
  }
  plVar1 = *(longlong **)this;
  if ((*(byte *)(plVar1 + 6) & 0x10) == 0) {
    cVar4 = (**(code **)(*plVar1 + 0x228))(plVar1);
    bVar5 = 0;
    if (cVar4 == '\0') goto LAB_14d83e341;
  }
  bVar5 = 0x20;
LAB_14d83e341:
  *(byte *)(plVar1 + 6) = *(byte *)(plVar1 + 6) & 0xdf;
  *(byte *)(plVar1 + 6) = *(byte *)(plVar1 + 6) | bVar5;
  if (*(longlong *)this == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TSharedRef<SExpanderArrow,1> *)(*pcVar2)();
      return pTVar6;
    }
  }
  *(byte *)(*(longlong *)this + 0x31) = *(byte *)(*(longlong *)this + 0x31) | 4;
  if (*(longlong *)this == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TSharedRef<SExpanderArrow,1> *)(*pcVar2)();
      return pTVar6;
    }
  }
  __return_storage_ptr__->Object = *(SExpanderArrow **)this;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       *(TReferenceControllerBase<1> **)((longlong)this + 8);
  *(undefined8 *)((longlong)this + 8) = 0;
  *(undefined8 *)this = 0;
  if (__return_storage_ptr__->Object == (SExpanderArrow *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TSharedRef<SExpanderArrow,1> *)(*pcVar2)();
      return pTVar6;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 14d83e410

TSharedRef<SExpanderArrow,1> * __thiscall
TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>_&&>_>
::operator<<=(TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>_&&>_>
              *this,TSharedRef<SExpanderArrow,1> *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  SExpanderArrow *pSVar2;
  TSharedRef<STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  byte bVar7;
  TSharedRef<SExpanderArrow,1> *pTVar8;
  TSharedPtr<ITableRow,1> local_18;
  
  if ((this->_Widget).Object == (SExpanderArrow *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedRef<SExpanderArrow,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  pSVar2 = (this->_Widget).Object;
  pTVar3 = this->_RequiredArgs->Arg0;
  local_18.Object = (ITableRow *)pTVar3->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (pTVar3->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SExpanderArrow::Construct(pSVar2,param_1,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  if ((this->_Widget).Object == (SExpanderArrow *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedRef<SExpanderArrow,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar6 = (**(code **)(pSVar2->_padding_ + 0x228))(pSVar2);
    bVar7 = 0;
    if (cVar6 == '\0') goto LAB_14d83e4e1;
  }
  bVar7 = 0x20;
LAB_14d83e4e1:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar7;
  if ((this->_Widget).Object == (SExpanderArrow *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedRef<SExpanderArrow,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SExpanderArrow *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedRef<SExpanderArrow,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SExpanderArrow *)0x0;
  if (__return_storage_ptr__->Object == (SExpanderArrow *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedRef<SExpanderArrow,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 14d83e5b0

TSharedRef<SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::SListViewPinnedRowWidget,1>
* __thiscall
TSlateDecl<SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::SListViewPinnedRowWidget,RequiredArgs::T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>_&&,int_&,int_&>_>
::operator<<=(TSlateDecl<SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::SListViewPinnedRowWidget,RequiredArgs::T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>_&&,int_&,int_&>_>
              *this,TSharedRef<SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::SListViewPinnedRowWidget,1>
                    *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>_&&,int_&,int_&>
  *pTVar4;
  SListViewPinnedRowWidget *pSVar5;
  code *pcVar6;
  bool bVar7;
  char cVar8;
  byte bVar9;
  TSharedRef<SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::SListViewPinnedRowWidget,1>
  *pTVar10;
  TSharedRef<SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1> local_28;
  TSharedPtr<ITableRow,1> local_18;
  
  if ((this->_Widget).Object == (SListViewPinnedRowWidget *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::SListViewPinnedRowWidget,1>
                 *)(*pcVar6)();
      return pTVar10;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  pTVar4 = this->_RequiredArgs;
  pSVar5 = (this->_Widget).Object;
  iVar2 = *pTVar4->Arg3;
  iVar3 = *pTVar4->Arg2;
  local_28.Object = pTVar4->Arg1->Object;
  local_28.SharedReferenceCount.ReferenceController =
       (pTVar4->Arg1->SharedReferenceCount).ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18.Object = pTVar4->Arg0->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (pTVar4->Arg0->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::SListViewPinnedRowWidget::
  Construct(pSVar5,param_1,&local_18,&local_28,iVar3,iVar2);
  if ((this->_Widget).Object == (SListViewPinnedRowWidget *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::SListViewPinnedRowWidget,1>
                 *)(*pcVar6)();
      return pTVar10;
    }
  }
  pSVar5 = (this->_Widget).Object;
  if ((pSVar5->_padding_ & 0x10) == 0) {
    cVar8 = (**(code **)(pSVar5->_padding_ + 0x228))(pSVar5);
    bVar9 = 0;
    if (cVar8 == '\0') goto LAB_14d83e6b5;
  }
  bVar9 = 0x20;
LAB_14d83e6b5:
  *(byte *)&pSVar5->_padding_ = (byte)pSVar5->_padding_ & 0xdf;
  *(byte *)&pSVar5->_padding_ = (byte)pSVar5->_padding_ | bVar9;
  if ((this->_Widget).Object == (SListViewPinnedRowWidget *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::SListViewPinnedRowWidget,1>
                 *)(*pcVar6)();
      return pTVar10;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SListViewPinnedRowWidget *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::SListViewPinnedRowWidget,1>
                 *)(*pcVar6)();
      return pTVar10;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SListViewPinnedRowWidget *)0x0;
  if (__return_storage_ptr__->Object == (SListViewPinnedRowWidget *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::SListViewPinnedRowWidget,1>
                 *)(*pcVar6)();
      return pTVar10;
    }
  }
  return __return_storage_ptr__;
}

