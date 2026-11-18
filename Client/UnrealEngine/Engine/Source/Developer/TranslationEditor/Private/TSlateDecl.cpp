// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TranslationEditor
// Functions: 9

// TSlateDecl<SListView<TSharedPtr<FTranslationPickerTextItem,1>_>,RequiredArgs::T0RequiredArgs> @ 146b96b20

/* WARNING: Enum "Type": Some values do not have unique names */

TSlateDecl<SListView<TSharedPtr<FTranslationPickerTextItem,1>_>,RequiredArgs::T0RequiredArgs> *
__thiscall
TSlateDecl<SListView<TSharedPtr<FTranslationPickerTextItem,1>_>,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SListView<TSharedPtr<FTranslationPickerTextItem,1>_>,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SListView<TSharedPtr<FTranslationPickerTextItem,1>_>,RequiredArgs::T0RequiredArgs>
           *this,char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SListView<TSharedPtr<FTranslationPickerTextItem,1>_>,RequiredArgs::T0RequiredArgs>
  *pTVar7;
  SListView<TSharedPtr<FTranslationPickerTextItem,1>_> *pSVar8;
  SListView<TSharedPtr<FTranslationPickerTextItem,1>_> *local_28;
  FSharedReferencer<1> local_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (SListView<TSharedPtr<FTranslationPickerTextItem,1>_> *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0xa10);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pSVar8 = (SListView<TSharedPtr<FTranslationPickerTextItem,1>_> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__SListView_V__TSharedPtr_UFTranslationPickerTextItem___00_____00_SharedPointerInternals__6B_
    ;
    SListView<TSharedPtr<FTranslationPickerTextItem,1>_>::
    SListView<TSharedPtr<FTranslationPickerTextItem,1>_>
              ((SListView<TSharedPtr<FTranslationPickerTextItem,1>_> *)(pTVar6 + 1),List);
    pSVar8 = (SListView<TSharedPtr<FTranslationPickerTextItem,1>_> *)(pTVar6 + 1);
    if (pSVar8 == (SListView<TSharedPtr<FTranslationPickerTextItem,1>_> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SListView<TSharedPtr<FTranslationPickerTextItem,1>_>,RequiredArgs::T0RequiredArgs>
                  *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_146b96c41;
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
LAB_146b96c41:
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = pSVar8;
  local_20.ReferenceController = pTVar6;
  if (this != (TSlateDecl<SListView<TSharedPtr<FTranslationPickerTextItem,1>_>,RequiredArgs::T0RequiredArgs>
               *)&local_28) {
    (this->_Widget).Object = pSVar8;
    local_28 = (SListView<TSharedPtr<FTranslationPickerTextItem,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  if ((this->_Widget).Object == (SListView<TSharedPtr<FTranslationPickerTextItem,1>_> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SListView<TSharedPtr<FTranslationPickerTextItem,1>_>,RequiredArgs::T0RequiredArgs>
                *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0xa00);
  return this;
}

// TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>,1>_&&>_> @ 146b96d00

TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>,1>_&&>_>
* __thiscall
TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>,1>_&&>_>
::
TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>,1>_&&>_>
          (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>,1>_&&>_>
           *this,char *param_1,char *param_2,int param_3,
          T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>,1>_&&>
          *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>,1>_&&>_>
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
        pTVar7 = (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>,1>_&&>_>
                  *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_146b96e1f;
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
LAB_146b96e1f:
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = pSVar8;
  local_20.ReferenceController = pTVar6;
  if (this != (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>,1>_&&>_>
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
      pTVar7 = (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>,1>_&&>_>
                *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x2e0);
  return this;
}

// TSlateDecl<STranslationPickerEditWindow,RequiredArgs::T0RequiredArgs> @ 146b96ee0

/* WARNING: Enum "Type": Some values do not have unique names */

TSlateDecl<STranslationPickerEditWindow,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<STranslationPickerEditWindow,RequiredArgs::T0RequiredArgs>::
TSlateDecl<STranslationPickerEditWindow,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<STranslationPickerEditWindow,RequiredArgs::T0RequiredArgs> *this,char *param_1
          ,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<STranslationPickerEditWindow,RequiredArgs::T0RequiredArgs> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  STranslationPickerEditWindow *pSVar9;
  STranslationPickerEditWindow *local_38;
  FSharedReferencer<1> local_30;
  
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (STranslationPickerEditWindow *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_RequiredArgs = param_4;
  pTVar6 = ::operator_new(0x338);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pSVar9 = (STranslationPickerEditWindow *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VSTranslationPickerEditWindow___00_SharedPointerInternals__6B_
    ;
    memset(pTVar6 + 1,0,0x328);
    SCompoundWidget::SCompoundWidget((SCompoundWidget *)(pTVar6 + 1));
    pTVar6[1]._padding_ = (longlong)&___7STranslationPickerEditWindow__6B_;
    pTVar6[0x2b].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2b].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2c]._padding_ = 0;
    pTVar6[0x2c].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2c].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2d]._padding_ = 0;
    pTVar6[0x2d].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2d].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2e]._padding_ = 0;
    pTVar6[0x2e].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2e].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2f]._padding_ = 0;
    pTVar6[0x2f].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2f].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x30]._padding_ = 0;
    pTVar6[0x30].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x30].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x31]._padding_ = 0;
    pTVar6[0x31].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x31].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x32]._padding_ = 0;
    FText::FText((FText *)&pTVar6[0x32].SharedReferenceCount);
    pSVar9 = (STranslationPickerEditWindow *)(pTVar6 + 1);
    pTVar8 = pTVar6;
    if (pSVar9 == (STranslationPickerEditWindow *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<STranslationPickerEditWindow,RequiredArgs::T0RequiredArgs> *)
                 (*pcVar4)();
        return pTVar7;
      }
      goto LAB_146b97088;
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
LAB_146b97088:
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = pSVar9;
  local_30.ReferenceController = pTVar8;
  if (this != (TSlateDecl<STranslationPickerEditWindow,RequiredArgs::T0RequiredArgs> *)&local_38) {
    (this->_Widget).Object = pSVar9;
    local_38 = (STranslationPickerEditWindow *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  if ((this->_Widget).Object == (STranslationPickerEditWindow *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<STranslationPickerEditWindow,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x328);
  return this;
}

// TSlateDecl<STranslationPickerFloatingWindow,RequiredArgs::T0RequiredArgs> @ 146b97150

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSlateDecl<STranslationPickerFloatingWindow,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<STranslationPickerFloatingWindow,RequiredArgs::T0RequiredArgs>::
TSlateDecl<STranslationPickerFloatingWindow,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<STranslationPickerFloatingWindow,RequiredArgs::T0RequiredArgs> *this,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  FWidgetPath *pFVar7;
  TSlateDecl<STranslationPickerFloatingWindow,RequiredArgs::T0RequiredArgs> *pTVar8;
  FArrangedWidget *pFVar9;
  TReferenceControllerBase<1> *pTVar10;
  STranslationPickerFloatingWindow *pSVar11;
  undefined1 auStackY_1f8 [32];
  undefined1 local_1c8 [24];
  FArrangedWidget local_1b0 [4];
  FArrangedWidget *local_90;
  int local_88;
  TReferenceControllerBase<1> *local_70;
  void *local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  pTVar10 = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (STranslationPickerFloatingWindow *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_RequiredArgs = param_4;
  pTVar6 = ::operator_new(0x338);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pSVar11 = (STranslationPickerFloatingWindow *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VSTranslationPickerFloatingWindow___00_SharedPointerInternals__6B_
    ;
    memset(pTVar6 + 1,0,0x328);
    SCompoundWidget::SCompoundWidget((SCompoundWidget *)(pTVar6 + 1));
    pTVar6[1]._padding_ = (longlong)&___7STranslationPickerFloatingWindow__6B_;
    pTVar6[0x2b].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2b].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2c]._padding_ = 0;
    pTVar6[0x2c].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2c].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2d]._padding_ = 0;
    pTVar6[0x2d].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2d].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2e]._padding_ = 0;
    pTVar6[0x2e].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2e].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2f]._padding_ = 0;
    pTVar6[0x2f].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2f].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x30]._padding_ = 0;
    pFVar7 = FWidgetPath::FWidgetPath((FWidgetPath *)(local_1c8 + 0x10));
    FWeakWidgetPath::FWeakWidgetPath((FWeakWidgetPath *)(pTVar6 + 0x31),pFVar7);
    if (local_68 != (void *)0x0) {
      FMemory::Free(local_68);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_70);
    pFVar9 = local_1b0;
    if (local_90 != (FArrangedWidget *)0x0) {
      pFVar9 = local_90;
    }
    DestructItems<FArrangedWidget,int>(pFVar9,local_88);
    if (local_90 != (FArrangedWidget *)0x0) {
      FMemory::Free(local_90);
    }
    pSVar11 = (STranslationPickerFloatingWindow *)(pTVar6 + 1);
    *(undefined1 *)&pTVar6[0x33]._padding_ = 0;
    pTVar10 = pTVar6;
    if (pSVar11 == (STranslationPickerFloatingWindow *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TSlateDecl<STranslationPickerFloatingWindow,RequiredArgs::T0RequiredArgs> *)
                 (*pcVar4)();
        return pTVar8;
      }
      goto LAB_146b97356;
    }
  }
  if (((pSVar11->_padding_ == 0) || (pSVar11->_padding_ == 0)) ||
     (*(int *)(pSVar11->_padding_ + 8) < 1)) {
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    pSVar11->_padding_ = (longlong)pSVar11;
    if (pTVar10 != (TReferenceControllerBase<1> *)pSVar11->_padding_) {
      if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pSVar11->_padding_;
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
      pSVar11->_padding_ = (longlong)pTVar10;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
LAB_146b97356:
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1c8._0_8_ = pSVar11;
  local_1c8._8_8_ = pTVar10;
  if (this != (TSlateDecl<STranslationPickerFloatingWindow,RequiredArgs::T0RequiredArgs> *)local_1c8
     ) {
    (this->_Widget).Object = pSVar11;
    local_1c8._0_8_ = (STranslationPickerFloatingWindow *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,(FSharedReferencer<1> *)(local_1c8 + 8));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_1c8._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  if ((this->_Widget).Object == (STranslationPickerFloatingWindow *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSlateDecl<STranslationPickerFloatingWindow,RequiredArgs::T0RequiredArgs> *)
               (*pcVar4)();
      return pTVar8;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x328);
  return this;
}

// TSlateDecl<STranslationPickerOverlay,RequiredArgs::T0RequiredArgs> @ 146b97430

TSlateDecl<STranslationPickerOverlay,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<STranslationPickerOverlay,RequiredArgs::T0RequiredArgs>::
TSlateDecl<STranslationPickerOverlay,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<STranslationPickerOverlay,RequiredArgs::T0RequiredArgs> *this,char *param_1,
          char *param_2,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<STranslationPickerOverlay,RequiredArgs::T0RequiredArgs> *pTVar7;
  STranslationPickerOverlay *pSVar8;
  STranslationPickerOverlay *local_28;
  FSharedReferencer<1> local_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (STranslationPickerOverlay *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0x2b8);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pSVar8 = (STranslationPickerOverlay *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VSTranslationPickerOverlay___00_SharedPointerInternals__6B_
    ;
    memset(pTVar6 + 1,0,0x2a8);
    SCompoundWidget::SCompoundWidget((SCompoundWidget *)(pTVar6 + 1));
    pSVar8 = (STranslationPickerOverlay *)(pTVar6 + 1);
    pTVar6[1]._padding_ = (longlong)&___7STranslationPickerOverlay__6B_;
    if (pSVar8 == (STranslationPickerOverlay *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<STranslationPickerOverlay,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_146b9756b;
    }
  }
  if (((*(longlong *)&pSVar8->field_0x8 == 0) || (*(longlong *)&pSVar8->field_0x10 == 0)) ||
     (*(int *)(*(longlong *)&pSVar8->field_0x10 + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(STranslationPickerOverlay **)&pSVar8->field_0x8 = pSVar8;
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
LAB_146b9756b:
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = pSVar8;
  local_20.ReferenceController = pTVar6;
  if (this != (TSlateDecl<STranslationPickerOverlay,RequiredArgs::T0RequiredArgs> *)&local_28) {
    (this->_Widget).Object = pSVar8;
    local_28 = (STranslationPickerOverlay *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  if ((this->_Widget).Object == (STranslationPickerOverlay *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<STranslationPickerOverlay,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x2a8);
  return this;
}

// operator<<= @ 146b9af70

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SListView<TSharedPtr<FTranslationPickerTextItem,1>_>,1> * __thiscall
TSlateDecl<SListView<TSharedPtr<FTranslationPickerTextItem,1>_>,RequiredArgs::T0RequiredArgs>::
operator<<=(TSlateDecl<SListView<TSharedPtr<FTranslationPickerTextItem,1>_>,RequiredArgs::T0RequiredArgs>
            *this,TSharedRef<SListView<TSharedPtr<FTranslationPickerTextItem,1>_>,1>
                  *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  SListView<TSharedPtr<FTranslationPickerTextItem,1>_> *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<SListView<TSharedPtr<FTranslationPickerTextItem,1>_>,1> *pTVar7;
  
  if ((this->_Widget).Object == (SListView<TSharedPtr<FTranslationPickerTextItem,1>_> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SListView<TSharedPtr<FTranslationPickerTextItem,1>_>,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  SListView<TSharedPtr<FTranslationPickerTextItem,1>_>::Construct((this->_Widget).Object,param_1);
  if ((this->_Widget).Object == (SListView<TSharedPtr<FTranslationPickerTextItem,1>_> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SListView<TSharedPtr<FTranslationPickerTextItem,1>_>,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar5 = (**(code **)(pSVar2->_padding_ + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_146b9b011;
  }
  bVar6 = 0x20;
LAB_146b9b011:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar6;
  if ((this->_Widget).Object == (SListView<TSharedPtr<FTranslationPickerTextItem,1>_> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SListView<TSharedPtr<FTranslationPickerTextItem,1>_>,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SListView<TSharedPtr<FTranslationPickerTextItem,1>_> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SListView<TSharedPtr<FTranslationPickerTextItem,1>_>,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SListView<TSharedPtr<FTranslationPickerTextItem,1>_> *)0x0;
  if (__return_storage_ptr__->Object == (SListView<TSharedPtr<FTranslationPickerTextItem,1>_> *)0x0)
  {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SListView<TSharedPtr<FTranslationPickerTextItem,1>_>,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 146b9b0e0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>,1> * __thiscall
TSlateDecl<STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FTranslationPickerTextItem,1>_>,1>_&&>_>
::operator<<=(TSlateDecl<STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FTranslationPickerTextItem,1>_>,1>_&&>_>
              *this,TSharedRef<STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>,1>
                    *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  STableRow<TSharedPtr<FTranslationPickerTextItem,1>_> *pSVar2;
  TSharedRef<SListView<TSharedPtr<FTranslationPickerTextItem,1>_>,1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  SListView<TSharedPtr<FTranslationPickerTextItem,1>_> *pSVar5;
  code *pcVar6;
  bool bVar7;
  char cVar8;
  byte bVar9;
  TSharedRef<STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>,1> *pTVar10;
  TSharedRef<STableViewBase,1> local_28;
  
  if ((this->_Widget).Object == (STableRow<TSharedPtr<FTranslationPickerTextItem,1>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>,1> *)(*pcVar6)();
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
  STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>::ConstructInternal(pSVar2,param_1,&local_28);
  (**(code **)(pSVar2->_padding_ + 0x80))
            (pSVar2,(int)pSVar5->_padding_,&param_1->_Padding,&param_1->_Content);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  if ((this->_Widget).Object == (STableRow<TSharedPtr<FTranslationPickerTextItem,1>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>,1> *)(*pcVar6)();
      return pTVar10;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar8 = (**(code **)(pSVar2->_padding_ + 0x228))(&pSVar2->_padding_);
    bVar9 = 0;
    if (cVar8 == '\0') goto LAB_146b9b1e2;
  }
  bVar9 = 0x20;
LAB_146b9b1e2:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar9;
  if ((this->_Widget).Object == (STableRow<TSharedPtr<FTranslationPickerTextItem,1>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>,1> *)(*pcVar6)();
      return pTVar10;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (STableRow<TSharedPtr<FTranslationPickerTextItem,1>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>,1> *)(*pcVar6)();
      return pTVar10;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (STableRow<TSharedPtr<FTranslationPickerTextItem,1>_> *)0x0;
  if (__return_storage_ptr__->Object == (STableRow<TSharedPtr<FTranslationPickerTextItem,1>_> *)0x0)
  {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>,1> *)(*pcVar6)();
      return pTVar10;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 146b9b2b0

TSharedRef<SExpanderArrow,1> * __thiscall
TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>,1>_&&>_>
::operator<<=(TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>,1>_&&>_>
              *this,TSharedRef<SExpanderArrow,1> *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  SExpanderArrow *pSVar2;
  TSharedRef<STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>,1> *pTVar3;
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
    if (cVar6 == '\0') goto LAB_146b9b381;
  }
  bVar7 = 0x20;
LAB_146b9b381:
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

// operator<<= @ 146b9b450

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<STranslationPickerEditWidget,1> * __thiscall
TSlateDecl<STranslationPickerEditWidget,RequiredArgs::T2RequiredArgs<TSharedRef<STableViewBase,1>_const_&,TSharedPtr<FTranslationPickerTextItem,1>_&>_>
::operator<<=(TSlateDecl<STranslationPickerEditWidget,RequiredArgs::T2RequiredArgs<TSharedRef<STableViewBase,1>_const_&,TSharedPtr<FTranslationPickerTextItem,1>_&>_>
              *this,TSharedRef<STranslationPickerEditWidget,1> *__return_storage_ptr__,
             FArguments *param_1)

{
  byte *pbVar1;
  T2RequiredArgs<TSharedRef<STableViewBase,1>_const_&,TSharedPtr<FTranslationPickerTextItem,1>_&>
  *pTVar2;
  STranslationPickerEditWidget *pSVar3;
  TSharedPtr<FTranslationPickerTextItem,1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  byte bVar8;
  TSharedRef<STranslationPickerEditWidget,1> *pTVar9;
  TSharedPtr<FTranslationPickerTextItem,1> local_18;
  
  if ((this->_Widget).Object == (STranslationPickerEditWidget *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TSharedRef<STranslationPickerEditWidget,1> *)(*pcVar5)();
      return pTVar9;
    }
  }
  SWidget::SWidgetConstruct
            ((SWidget *)&((this->_Widget).Object)->_padding_,(FSlateBaseNamedArgs *)param_1);
  pTVar2 = this->_RequiredArgs;
  pSVar3 = (this->_Widget).Object;
  pTVar4 = pTVar2->Arg1;
  local_18.Object = pTVar4->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (pTVar4->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  STranslationPickerEditWidget::Construct(pSVar3,param_1,pTVar2->Arg0,&local_18);
  if ((this->_Widget).Object == (STranslationPickerEditWidget *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TSharedRef<STranslationPickerEditWidget,1> *)(*pcVar5)();
      return pTVar9;
    }
  }
  pSVar3 = (this->_Widget).Object;
  if ((pSVar3->_padding_ & 0x10) == 0) {
    cVar7 = (**(code **)(pSVar3->_padding_ + 0x228))(&pSVar3->_padding_);
    bVar8 = 0;
    if (cVar7 == '\0') goto LAB_146b9b521;
  }
  bVar8 = 0x20;
LAB_146b9b521:
  *(byte *)&pSVar3->_padding_ = (byte)pSVar3->_padding_ & 0xdf;
  *(byte *)&pSVar3->_padding_ = (byte)pSVar3->_padding_ | bVar8;
  if ((this->_Widget).Object == (STranslationPickerEditWidget *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TSharedRef<STranslationPickerEditWidget,1> *)(*pcVar5)();
      return pTVar9;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (STranslationPickerEditWidget *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TSharedRef<STranslationPickerEditWidget,1> *)(*pcVar5)();
      return pTVar9;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (STranslationPickerEditWidget *)0x0;
  if (__return_storage_ptr__->Object == (STranslationPickerEditWidget *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TSharedRef<STranslationPickerEditWidget,1> *)(*pcVar5)();
      return pTVar9;
    }
  }
  return __return_storage_ptr__;
}

