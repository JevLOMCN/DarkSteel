// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolWidgets
// Functions: 28

// Expose<SCheckBox> @ 142d584d0

TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>::Expose<SCheckBox>
          (TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs> *this,TSharedPtr<SCheckBox,1> *param_1
          )

{
  SCheckBox *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pSVar1 = (this->_Widget).Object;
  pTVar2 = (this->_Widget).SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  param_1->Object = pSVar1;
  (param_1->SharedReferenceCount).ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return this;
}

// TSlateDecl<SListView<TSharedPtr<FText,1>_>,RequiredArgs::T0RequiredArgs> @ 142d5de30

TSlateDecl<SListView<TSharedPtr<FText,1>_>,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SListView<TSharedPtr<FText,1>_>,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SListView<TSharedPtr<FText,1>_>,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SListView<TSharedPtr<FText,1>_>,RequiredArgs::T0RequiredArgs> *this,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SListView<TSharedPtr<FText,1>_>,RequiredArgs::T0RequiredArgs> *pTVar7;
  SListView<TSharedPtr<FText,1>_> *pSVar8;
  SListView<TSharedPtr<FText,1>_> *local_28;
  FSharedReferencer<1> local_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (SListView<TSharedPtr<FText,1>_> *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0xa10);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pSVar8 = (SListView<TSharedPtr<FText,1>_> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__SListView_V__TSharedPtr_VFText___00_____00_SharedPointerInternals__6B_
    ;
    SListView<TSharedPtr<FText,1>_>::SListView<TSharedPtr<FText,1>_>
              ((SListView<TSharedPtr<FText,1>_> *)(pTVar6 + 1),List);
    pSVar8 = (SListView<TSharedPtr<FText,1>_> *)(pTVar6 + 1);
    if (pSVar8 == (SListView<TSharedPtr<FText,1>_> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SListView<TSharedPtr<FText,1>_>,RequiredArgs::T0RequiredArgs> *)
                 (*pcVar4)();
        return pTVar7;
      }
      goto LAB_142d5df51;
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
LAB_142d5df51:
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = pSVar8;
  local_20.ReferenceController = pTVar6;
  if (this != (TSlateDecl<SListView<TSharedPtr<FText,1>_>,RequiredArgs::T0RequiredArgs> *)&local_28)
  {
    (this->_Widget).Object = pSVar8;
    local_28 = (SListView<TSharedPtr<FText,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  if ((this->_Widget).Object == (SListView<TSharedPtr<FText,1>_> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SListView<TSharedPtr<FText,1>_>,RequiredArgs::T0RequiredArgs> *)
               (*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0xa00);
  return this;
}

// TSlateDecl<SListView<TSharedRef<CheckBoxList::FItemPair,1>_>,RequiredArgs::T0RequiredArgs> @ 142d5e010

TSlateDecl<SListView<TSharedRef<CheckBoxList::FItemPair,1>_>,RequiredArgs::T0RequiredArgs> *
__thiscall
TSlateDecl<SListView<TSharedRef<CheckBoxList::FItemPair,1>_>,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SListView<TSharedRef<CheckBoxList::FItemPair,1>_>,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SListView<TSharedRef<CheckBoxList::FItemPair,1>_>,RequiredArgs::T0RequiredArgs>
           *this,char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SListView<TSharedRef<CheckBoxList::FItemPair,1>_>,RequiredArgs::T0RequiredArgs> *pTVar7
  ;
  SListView<TSharedRef<CheckBoxList::FItemPair,1>_> *pSVar8;
  SListView<TSharedRef<CheckBoxList::FItemPair,1>_> *local_28;
  FSharedReferencer<1> local_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (SListView<TSharedRef<CheckBoxList::FItemPair,1>_> *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0xa10);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pSVar8 = (SListView<TSharedRef<CheckBoxList::FItemPair,1>_> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__SListView_V__TSharedRef_UFItemPair_CheckBoxList___00_____00_SharedPointerInternals__6B_
    ;
    SListView<TSharedRef<CheckBoxList::FItemPair,1>_>::
    SListView<TSharedRef<CheckBoxList::FItemPair,1>_>
              ((SListView<TSharedRef<CheckBoxList::FItemPair,1>_> *)(pTVar6 + 1),List);
    pSVar8 = (SListView<TSharedRef<CheckBoxList::FItemPair,1>_> *)(pTVar6 + 1);
    if (pSVar8 == (SListView<TSharedRef<CheckBoxList::FItemPair,1>_> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SListView<TSharedRef<CheckBoxList::FItemPair,1>_>,RequiredArgs::T0RequiredArgs>
                  *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_142d5e131;
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
LAB_142d5e131:
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = pSVar8;
  local_20.ReferenceController = pTVar6;
  if (this != (TSlateDecl<SListView<TSharedRef<CheckBoxList::FItemPair,1>_>,RequiredArgs::T0RequiredArgs>
               *)&local_28) {
    (this->_Widget).Object = pSVar8;
    local_28 = (SListView<TSharedRef<CheckBoxList::FItemPair,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  if ((this->_Widget).Object == (SListView<TSharedRef<CheckBoxList::FItemPair,1>_> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SListView<TSharedRef<CheckBoxList::FItemPair,1>_>,RequiredArgs::T0RequiredArgs>
                *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0xa00);
  return this;
}

// TSlateDecl<STableRow<TSharedPtr<FText,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FText,1>_>,1>_&&>_> @ 142d5e1f0

TSlateDecl<STableRow<TSharedPtr<FText,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FText,1>_>,1>_&&>_>
* __thiscall
TSlateDecl<STableRow<TSharedPtr<FText,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FText,1>_>,1>_&&>_>
::
TSlateDecl<STableRow<TSharedPtr<FText,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FText,1>_>,1>_&&>_>
          (TSlateDecl<STableRow<TSharedPtr<FText,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FText,1>_>,1>_&&>_>
           *this,char *param_1,char *param_2,int param_3,
          T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FText,1>_>,1>_&&> *param_4)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSlateDecl<STableRow<TSharedPtr<FText,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FText,1>_>,1>_&&>_>
  *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  undefined1 local_48 [24];
  TReferenceControllerBase<1> *pTStack_30;
  
  pTVar6 = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (STableRow<TSharedPtr<FText,1>_> *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_RequiredArgs = param_4;
  pTVar4 = ::operator_new(0x408);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__STableRow_V__TSharedPtr_VFText___00_____00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ = (longlong)&___7ITableRow__6B_;
    SBorder::SBorder((SBorder *)&pTVar4[1].SharedReferenceCount);
    puVar1 = &pTVar4[4].SharedReferenceCount.field_0x2;
    *puVar1 = *puVar1 | 4;
    pTVar4[1]._padding_ = (longlong)&STableRow<TSharedPtr<FText,1>_>::_vftable__for__ITableRow__;
    *(undefined ***)&pTVar4[1].SharedReferenceCount =
         &STableRow<TSharedPtr<FText,1>_>::_vftable__for__SBorder__;
    pTVar4[0x2f].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[0x2f].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[0x30]._padding_ = 0;
    pTVar4[0x30].SharedReferenceCount = (atomic<int>)0x0;
    *(undefined1 *)&pTVar4[0x30].WeakReferenceCount = 1;
    *(undefined4 *)&pTVar4[0x31]._padding_ = 0;
    pTVar4[0x32].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[0x32].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[0x33]._padding_ = 0;
    pTVar4[0x33].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[0x33].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[0x34]._padding_ = 0;
    pTVar4[0x34].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[0x35]._padding_ = 0;
    pTVar4[0x35].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[0x35].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar4[0x36]._padding_ = 0;
    pTVar4[0x36].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[0x36].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[0x37]._padding_ = 0;
    pTVar4[0x37].SharedReferenceCount = (atomic<int>)0x0;
    *(undefined1 *)((longlong)&pTVar4[0x38]._padding_ + 4) = 0;
    pTVar4[0x38].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[0x38].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[0x39]._padding_ = 0;
    pTVar4[0x39].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[0x3a]._padding_ = 0;
    pTVar4[0x3a].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[0x3a].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar4[0x3b]._padding_ = 0;
    pTVar4[0x3b].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[0x3b].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[0x3c]._padding_ = 0;
    pTVar4[0x3c].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[0x3d]._padding_ = 0;
    pTVar4[0x3d].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[0x3d].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar4[0x3e]._padding_ = 0;
    pTVar4[0x3f]._padding_ = 0;
    pTVar4[0x3f].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[0x3f].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[4].SharedReferenceCount.field_0x3 = 2;
    pTVar6 = pTVar4;
  }
  TSharedRef<STableRow<TSharedPtr<FText,1>_>,1>::TSharedRef<STableRow<TSharedPtr<FText,1>_>,1>
            ((TSharedRef<STableRow<TSharedPtr<FText,1>_>,1> *)(local_48 + 0x10),
             (STableRow<TSharedPtr<FText,1>_> *)(pTVar6 + 1),pTVar6);
  local_48._0_8_ = local_48._16_8_;
  local_48._8_8_ = pTStack_30;
  if (pTStack_30 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_30->SharedReferenceCount = (atomic<int>)((int)pTStack_30->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this != (TSlateDecl<STableRow<TSharedPtr<FText,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FText,1>_>,1>_&&>_>
               *)local_48) {
    (this->_Widget).Object = (STableRow<TSharedPtr<FText,1>_> *)local_48._16_8_;
    local_48._0_8_ = (STableRow<TSharedPtr<FText,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,(FSharedReferencer<1> *)(local_48 + 8));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_48._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  if (((this->_Widget).Object == (STableRow<TSharedPtr<FText,1>_> *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TSlateDecl<STableRow<TSharedPtr<FText,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FText,1>_>,1>_&&>_>
              *)(*pcVar2)();
    return pTVar5;
  }
  SWidget::SetDebugInfo
            ((SWidget *)&((this->_Widget).Object)->_padding_,param_1,param_2,param_3,0x3f8);
  return this;
}

// TSlateDecl<SActionButton,RequiredArgs::T0RequiredArgs> @ 142d5e450

TSlateDecl<SActionButton,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SActionButton,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SActionButton,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SActionButton,RequiredArgs::T0RequiredArgs> *this,char *param_1,char *param_2,
          int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SActionButton,RequiredArgs::T0RequiredArgs> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  SActionButton *pSVar9;
  SActionButton *local_38;
  FSharedReferencer<1> local_30;
  
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SActionButton *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_RequiredArgs = param_4;
  pTVar6 = ::operator_new(0x328);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pSVar9 = (SActionButton *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VSActionButton___00_SharedPointerInternals__6B_;
    memset(pTVar6 + 1,0,0x318);
    SCompoundWidget::SCompoundWidget((SCompoundWidget *)(pTVar6 + 1));
    pTVar6[0x2c]._padding_ = 0;
    pTVar6[0x2c].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2c].WeakReferenceCount = (atomic<int>)0x0;
    pSVar9 = (SActionButton *)(pTVar6 + 1);
    pTVar6[0x2d]._padding_ = 0;
    pTVar6[0x2d].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2d].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined2 *)&pTVar6[0x2e]._padding_ = 0x100;
    pTVar6[1]._padding_ = (longlong)&SActionButton::_vftable__for__SCompoundWidget__;
    *(undefined ***)&pTVar6[0x2b].SharedReferenceCount =
         &SActionButton::_vftable__for__IActionButton__;
    pTVar6[0x2f].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2f].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2e].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2e].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2f]._padding_ = 0;
    pTVar6[0x30]._padding_ = 0;
    pTVar6[0x30].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x30].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x31]._padding_ = 0;
    pTVar6[0x31].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x31].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x32]._padding_ = 0;
    pTVar8 = pTVar6;
    if (pSVar9 == (SActionButton *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SActionButton,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_142d5e5f5;
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
LAB_142d5e5f5:
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = pSVar9;
  local_30.ReferenceController = pTVar8;
  if (this != (TSlateDecl<SActionButton,RequiredArgs::T0RequiredArgs> *)&local_38) {
    (this->_Widget).Object = pSVar9;
    local_38 = (SActionButton *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  if ((this->_Widget).Object == (SActionButton *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SActionButton,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x318);
  return this;
}

// TSlateDecl<UE::ToolWidgets::SDraggableBox,RequiredArgs::T1RequiredArgs<TSharedRef<UE::ToolWidgets::SDraggableBoxOverlay,1>_&&>_> @ 142d5e6c0

TSlateDecl<UE::ToolWidgets::SDraggableBox,RequiredArgs::T1RequiredArgs<TSharedRef<UE::ToolWidgets::SDraggableBoxOverlay,1>_&&>_>
* __thiscall
TSlateDecl<UE::ToolWidgets::SDraggableBox,RequiredArgs::T1RequiredArgs<TSharedRef<UE::ToolWidgets::SDraggableBoxOverlay,1>_&&>_>
::
TSlateDecl<UE::ToolWidgets::SDraggableBox,RequiredArgs::T1RequiredArgs<TSharedRef<UE::ToolWidgets::SDraggableBoxOverlay,1>_&&>_>
          (TSlateDecl<UE::ToolWidgets::SDraggableBox,RequiredArgs::T1RequiredArgs<TSharedRef<UE::ToolWidgets::SDraggableBoxOverlay,1>_&&>_>
           *this,char *param_1,char *param_2,int param_3,
          T1RequiredArgs<TSharedRef<UE::ToolWidgets::SDraggableBoxOverlay,1>_&&> *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<UE::ToolWidgets::SDraggableBox,RequiredArgs::T1RequiredArgs<TSharedRef<UE::ToolWidgets::SDraggableBoxOverlay,1>_&&>_>
  *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  SDraggableBox *pSVar9;
  SDraggableBox *local_38;
  FSharedReferencer<1> local_30;
  
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SDraggableBox *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_RequiredArgs = param_4;
  pTVar6 = ::operator_new(0x310);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pSVar9 = (SDraggableBox *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VSDraggableBox_ToolWidgets_UE___00_SharedPointerInternals__6B_
    ;
    memset(pTVar6 + 1,0,0x300);
    SCompoundWidget::SCompoundWidget((SCompoundWidget *)(pTVar6 + 1));
    pTVar6[1]._padding_ = (longlong)&___7SDraggableBox_ToolWidgets_UE__6B_;
    pSVar9 = (SDraggableBox *)(pTVar6 + 1);
    pTVar6[0x2b].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2b].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2c]._padding_ = 0;
    pTVar6[0x2c].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2c].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2d]._padding_ = 0;
    *(undefined2 *)&pTVar6[0x2d].SharedReferenceCount = 0;
    pTVar6[0x2f]._padding_ = 0;
    pTVar6[0x2e]._padding_ = 0;
    pTVar6[0x2e].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2e].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2f].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2f].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x30]._padding_ = 0;
    pTVar6[0x30].SharedReferenceCount = (atomic<int>)0x0;
    pTVar8 = pTVar6;
    if (pSVar9 == (SDraggableBox *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<UE::ToolWidgets::SDraggableBox,RequiredArgs::T1RequiredArgs<TSharedRef<UE::ToolWidgets::SDraggableBoxOverlay,1>_&&>_>
                  *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_142d5e848;
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
LAB_142d5e848:
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = pSVar9;
  local_30.ReferenceController = pTVar8;
  if (this != (TSlateDecl<UE::ToolWidgets::SDraggableBox,RequiredArgs::T1RequiredArgs<TSharedRef<UE::ToolWidgets::SDraggableBoxOverlay,1>_&&>_>
               *)&local_38) {
    (this->_Widget).Object = pSVar9;
    local_38 = (SDraggableBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  if ((this->_Widget).Object == (SDraggableBox *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<UE::ToolWidgets::SDraggableBox,RequiredArgs::T1RequiredArgs<TSharedRef<UE::ToolWidgets::SDraggableBoxOverlay,1>_&&>_>
                *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x300);
  return this;
}

// TSlateDecl<SDrawerOverlay,RequiredArgs::T0RequiredArgs> @ 142d5e910

TSlateDecl<SDrawerOverlay,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SDrawerOverlay,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SDrawerOverlay,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SDrawerOverlay,RequiredArgs::T0RequiredArgs> *this,char *param_1,char *param_2
          ,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SDrawerOverlay,RequiredArgs::T0RequiredArgs> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  SDrawerOverlay *pSVar9;
  SDrawerOverlay *local_38;
  FSharedReferencer<1> local_30;
  
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SDrawerOverlay *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_RequiredArgs = param_4;
  pTVar6 = ::operator_new(0x3f0);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pSVar9 = (SDrawerOverlay *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VSDrawerOverlay___00_SharedPointerInternals__6B_;
    memset(pTVar6 + 1,0,0x3e0);
    SCompoundWidget::SCompoundWidget((SCompoundWidget *)(pTVar6 + 1));
    pTVar6[1]._padding_ = (longlong)&___7SDrawerOverlay__6B_;
    FGeometry::FGeometry((FGeometry *)&pTVar6[0x2b].SharedReferenceCount);
    pTVar6[0x2f]._padding_ = 0;
    pTVar6[0x2f].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2f].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x30]._padding_ = 0;
    pTVar6[0x30].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x30].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar6[0x31]._padding_ = 0;
    FCurveSequence::FCurveSequence((FCurveSequence *)&pTVar6[0x31].SharedReferenceCount);
    pTVar6[0x38].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x38].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x39]._padding_ = 0;
    pTVar6[0x39].SharedReferenceCount = (atomic<int>)0x0;
    pSVar9 = (SDrawerOverlay *)(pTVar6 + 1);
    pTVar6[0x3c].SharedReferenceCount = (atomic<int>)0xffffffff;
    pTVar6[0x3c].WeakReferenceCount = (atomic<int>)0xffffffff;
    pTVar8 = pTVar6;
    if (pSVar9 == (SDrawerOverlay *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SDrawerOverlay,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_142d5ea9e;
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
LAB_142d5ea9e:
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = pSVar9;
  local_30.ReferenceController = pTVar8;
  if (this != (TSlateDecl<SDrawerOverlay,RequiredArgs::T0RequiredArgs> *)&local_38) {
    (this->_Widget).Object = pSVar9;
    local_38 = (SDrawerOverlay *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  if ((this->_Widget).Object == (SDrawerOverlay *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SDrawerOverlay,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x3e0);
  return this;
}

// TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FText,1>_>,1>_&&>_> @ 142d5eb60

TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FText,1>_>,1>_&&>_>
* __thiscall
TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FText,1>_>,1>_&&>_>
::
TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FText,1>_>,1>_&&>_>
          (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FText,1>_>,1>_&&>_>
           *this,char *param_1,char *param_2,int param_3,
          T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FText,1>_>,1>_&&> *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FText,1>_>,1>_&&>_>
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
        pTVar7 = (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FText,1>_>,1>_&&>_>
                  *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_142d5ec7f;
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
LAB_142d5ec7f:
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = pSVar8;
  local_20.ReferenceController = pTVar6;
  if (this != (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FText,1>_>,1>_&&>_>
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
      pTVar7 = (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FText,1>_>,1>_&&>_>
                *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x2e0);
  return this;
}

// TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedRef<CheckBoxList::FItemPair,1>_>,1>_&&>_> @ 142d5ed40

TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedRef<CheckBoxList::FItemPair,1>_>,1>_&&>_>
* __thiscall
TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedRef<CheckBoxList::FItemPair,1>_>,1>_&&>_>
::
TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedRef<CheckBoxList::FItemPair,1>_>,1>_&&>_>
          (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedRef<CheckBoxList::FItemPair,1>_>,1>_&&>_>
           *this,char *param_1,char *param_2,int param_3,
          T1RequiredArgs<TSharedRef<STableRow<TSharedRef<CheckBoxList::FItemPair,1>_>,1>_&&>
          *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedRef<CheckBoxList::FItemPair,1>_>,1>_&&>_>
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
        pTVar7 = (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedRef<CheckBoxList::FItemPair,1>_>,1>_&&>_>
                  *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_142d5ee5f;
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
LAB_142d5ee5f:
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = pSVar8;
  local_20.ReferenceController = pTVar6;
  if (this != (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedRef<CheckBoxList::FItemPair,1>_>,1>_&&>_>
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
      pTVar7 = (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedRef<CheckBoxList::FItemPair,1>_>,1>_&&>_>
                *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x2e0);
  return this;
}

// TSlateDecl<SFilterSearchBoxImpl,RequiredArgs::T0RequiredArgs> @ 142d5ef20

/* WARNING: Enum "Type": Some values do not have unique names */

TSlateDecl<SFilterSearchBoxImpl,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SFilterSearchBoxImpl,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SFilterSearchBoxImpl,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SFilterSearchBoxImpl,RequiredArgs::T0RequiredArgs> *this,char *param_1,
          char *param_2,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SFilterSearchBoxImpl,RequiredArgs::T0RequiredArgs> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  SFilterSearchBoxImpl *pSVar9;
  SFilterSearchBoxImpl *local_38;
  FSharedReferencer<1> local_30;
  
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SFilterSearchBoxImpl *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_RequiredArgs = param_4;
  pTVar6 = ::operator_new(0x700);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pSVar9 = (SFilterSearchBoxImpl *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VSFilterSearchBoxImpl___00_SharedPointerInternals__6B_
    ;
    memset(pTVar6 + 1,0,0x6f0);
    SEditableTextBox::SEditableTextBox((SEditableTextBox *)(pTVar6 + 1));
    pTVar6[1]._padding_ = (longlong)&___7SSearchBox__6B_;
    pTVar6[0x53]._padding_ = 0;
    pTVar6[0x53].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x53].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x54]._padding_ = 0;
    pTVar6[0x54].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x54].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar6[0x55]._padding_ = 0;
    pTVar6[0x55].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x55].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x56]._padding_ = 0;
    pTVar6[0x56].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x57]._padding_ = 0;
    pTVar6[0x57].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x57].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar6[0x58]._padding_ = 0;
    *(undefined2 *)&pTVar6[0x58].SharedReferenceCount = 0;
    pTVar6[0x5a]._padding_ = 0;
    pTVar6[0x59]._padding_ = 0;
    pTVar6[0x59].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x59].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x5a].SharedReferenceCount = (atomic<int>)0x0;
    *(undefined1 *)&pTVar6[0x5a].WeakReferenceCount = 0;
    pTVar6[0x5c]._padding_ = 0;
    pTVar6[0x5b]._padding_ = 0;
    pTVar6[0x5b].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x5b].WeakReferenceCount = (atomic<int>)0x0;
    FSlateFontInfo::FSlateFontInfo((FSlateFontInfo *)&pTVar6[0x5c].SharedReferenceCount);
    FSlateFontInfo::FSlateFontInfo((FSlateFontInfo *)&pTVar6[0x62].SharedReferenceCount);
    *(undefined1 *)&pTVar6[0x69]._padding_ = 0;
    *(undefined1 *)((longlong)&pTVar6[0x69]._padding_ + 4) = 0;
    pSVar9 = (SFilterSearchBoxImpl *)(pTVar6 + 1);
    pTVar6[0x6a].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x6a].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x69].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x69].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x6a]._padding_ = 0;
    *(undefined2 *)&pTVar6[0x6b]._padding_ = 0;
    pTVar6[0x6c].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x6c].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x6b].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x6b].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x6c]._padding_ = 0;
    pTVar6[1]._padding_ = (longlong)&___7SFilterSearchBoxImpl__6B_;
    pTVar6[0x6d]._padding_ = 0;
    pTVar6[0x6d].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x6d].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar6[0x6e]._padding_ = 0;
    pTVar6[0x6e].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x6e].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x6f]._padding_ = 0;
    pTVar6[0x6f].SharedReferenceCount = (atomic<int>)0x0;
    pTVar8 = pTVar6;
    if (pSVar9 == (SFilterSearchBoxImpl *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SFilterSearchBoxImpl,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_142d5f174;
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
LAB_142d5f174:
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = pSVar9;
  local_30.ReferenceController = pTVar8;
  if (this != (TSlateDecl<SFilterSearchBoxImpl,RequiredArgs::T0RequiredArgs> *)&local_38) {
    (this->_Widget).Object = pSVar9;
    local_38 = (SFilterSearchBoxImpl *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  if ((this->_Widget).Object == (SFilterSearchBoxImpl *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SFilterSearchBoxImpl,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x6f0);
  return this;
}

// TSlateDecl<SPrimaryButton,RequiredArgs::T0RequiredArgs> @ 142d5f240

TSlateDecl<SPrimaryButton,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SPrimaryButton,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SPrimaryButton,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SPrimaryButton,RequiredArgs::T0RequiredArgs> *this,char *param_1,char *param_2
          ,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SPrimaryButton,RequiredArgs::T0RequiredArgs> *pTVar7;
  SPrimaryButton *pSVar8;
  SPrimaryButton *local_28;
  FSharedReferencer<1> local_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (SPrimaryButton *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0x4c0);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pSVar8 = (SPrimaryButton *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VSPrimaryButton___00_SharedPointerInternals__6B_;
    memset(pTVar6 + 1,0,0x4b0);
    SButton::SButton((SButton *)(pTVar6 + 1));
    pSVar8 = (SPrimaryButton *)(pTVar6 + 1);
    pTVar6[1]._padding_ = (longlong)&___7SPrimaryButton__6B_;
    if (pSVar8 == (SPrimaryButton *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SPrimaryButton,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_142d5f37b;
    }
  }
  if (((*(longlong *)&pSVar8->field_0x8 == 0) || (*(longlong *)&pSVar8->field_0x10 == 0)) ||
     (*(int *)(*(longlong *)&pSVar8->field_0x10 + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(SPrimaryButton **)&pSVar8->field_0x8 = pSVar8;
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
LAB_142d5f37b:
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = pSVar8;
  local_20.ReferenceController = pTVar6;
  if (this != (TSlateDecl<SPrimaryButton,RequiredArgs::T0RequiredArgs> *)&local_28) {
    (this->_Widget).Object = pSVar8;
    local_28 = (SPrimaryButton *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  if ((this->_Widget).Object == (SPrimaryButton *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SPrimaryButton,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x4b0);
  return this;
}

// TSlateDecl<SRichTextBlock,RequiredArgs::T0RequiredArgs> @ 142d5f440

TSlateDecl<SRichTextBlock,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SRichTextBlock,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SRichTextBlock,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SRichTextBlock,RequiredArgs::T0RequiredArgs> *this,char *param_1,char *param_2
          ,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SRichTextBlock,RequiredArgs::T0RequiredArgs> *pTVar7;
  SRichTextBlock *pSVar8;
  SRichTextBlock *local_28;
  FSharedReferencer<1> local_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (SRichTextBlock *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0x6c0);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pSVar8 = (SRichTextBlock *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VSRichTextBlock___00_SharedPointerInternals__6B_;
    SRichTextBlock::SRichTextBlock((SRichTextBlock *)(pTVar6 + 1));
    pSVar8 = (SRichTextBlock *)(pTVar6 + 1);
    if (pSVar8 == (SRichTextBlock *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SRichTextBlock,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_142d5f55f;
    }
  }
  if (((*(longlong *)&pSVar8->field_0x8 == 0) || (*(longlong *)&pSVar8->field_0x10 == 0)) ||
     (*(int *)(*(longlong *)&pSVar8->field_0x10 + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(SRichTextBlock **)&pSVar8->field_0x8 = pSVar8;
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
LAB_142d5f55f:
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = pSVar8;
  local_20.ReferenceController = pTVar6;
  if (this != (TSlateDecl<SRichTextBlock,RequiredArgs::T0RequiredArgs> *)&local_28) {
    (this->_Widget).Object = pSVar8;
    local_28 = (SRichTextBlock *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  if ((this->_Widget).Object == (SRichTextBlock *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SRichTextBlock,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x6b0);
  return this;
}

// TSlateDecl<SSidebarButton,RequiredArgs::T2RequiredArgs<TSharedRef<FSidebarDrawer,1>_const_&,enum_ESidebarTabLocation_&&>_> @ 142d5f620

TSlateDecl<SSidebarButton,RequiredArgs::T2RequiredArgs<TSharedRef<FSidebarDrawer,1>_const_&,ESidebarTabLocation_&&>_>
* __thiscall
TSlateDecl<SSidebarButton,RequiredArgs::T2RequiredArgs<TSharedRef<FSidebarDrawer,1>_const_&,enum_ESidebarTabLocation_&&>_>
::
TSlateDecl<SSidebarButton,RequiredArgs::T2RequiredArgs<TSharedRef<FSidebarDrawer,1>_const_&,enum_ESidebarTabLocation_&&>_>
          (void *this,char *param_1,char *param_2,int param_3,
          T2RequiredArgs<TSharedRef<FSidebarDrawer,1>_const_&,ESidebarTabLocation_&&> *param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  TReferenceControllerBase<1> *pTVar7;
  TSlateDecl<SSidebarButton,RequiredArgs::T2RequiredArgs<TSharedRef<FSidebarDrawer,1>_const_&,ESidebarTabLocation_&&>_>
  *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  TReferenceControllerBase<1> *local_38;
  FSharedReferencer<1> local_30;
  
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)this = 0;
  *(undefined8 *)((longlong)this + 8) = 0;
  *(T2RequiredArgs<TSharedRef<FSidebarDrawer,1>_const_&,ESidebarTabLocation_&&> **)
   ((longlong)this + 0x10) = param_4;
  pTVar7 = ::operator_new(0x398);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VSSidebarButton___00_SharedPointerInternals__6B_;
    memset(pTVar7 + 1,0,0x388);
    SCompoundWidget::SCompoundWidget((SCompoundWidget *)(pTVar7 + 1));
    *(undefined1 *)&pTVar7[0x2c].SharedReferenceCount = 1;
    pTVar7[1]._padding_ = (longlong)&___7SSidebarButton__6B_;
    pTVar10 = pTVar7 + 1;
    pTVar7[0x2b].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0x2b].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[0x2c]._padding_ = 0;
    pTVar7[0x2d]._padding_ = 0;
    pTVar7[0x2d].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0x2d].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar7[0x2e]._padding_ = 0;
    pTVar7[0x2e].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0x2e].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[0x2f]._padding_ = 0;
    pTVar7[0x2f].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0x30]._padding_ = 0;
    pTVar7[0x30].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0x30].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar7[0x31]._padding_ = 0;
    pTVar7[0x31].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0x31].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[0x32]._padding_ = 0;
    pTVar7[0x32].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0x33].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0x33].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[0x34]._padding_ = 0;
    pTVar7[0x34].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0x34].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[0x35]._padding_ = 0;
    pTVar7[0x35].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0x35].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[0x36]._padding_ = 0;
    pTVar7[0x36].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0x36].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[0x37]._padding_ = 0;
    pTVar7[0x37].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0x37].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[0x38]._padding_ = 0;
    pTVar7[0x38].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0x38].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[0x39]._padding_ = 0;
    pTVar7[0x33]._padding_ = 0;
    pTVar9 = pTVar7;
    if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TSlateDecl<SSidebarButton,RequiredArgs::T2RequiredArgs<TSharedRef<FSidebarDrawer,1>_const_&,ESidebarTabLocation_&&>_>
                  *)(*pcVar5)();
        return pTVar8;
      }
      goto LAB_142d5f81e;
    }
  }
  lVar3._0_4_ = pTVar10->SharedReferenceCount;
  lVar3._4_4_ = pTVar10->WeakReferenceCount;
  if (((lVar3 == 0) || (pTVar10[1]._padding_ == 0)) || (*(int *)(pTVar10[1]._padding_ + 8) < 1)) {
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(TReferenceControllerBase<1> **)&pTVar10->SharedReferenceCount = pTVar10;
    if (pTVar9 != (TReferenceControllerBase<1> *)pTVar10[1]._padding_) {
      if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar9->WeakReferenceCount = (atomic<int>)((int)pTVar9->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = (longlong *)pTVar10[1]._padding_;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      pTVar10[1]._padding_ = (longlong)pTVar9;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  }
LAB_142d5f81e:
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = pTVar10;
  local_30.ReferenceController = pTVar9;
  if (this != &local_38) {
    *(TReferenceControllerBase<1> **)this = pTVar10;
    local_38 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)this + 8),&local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  if (*(longlong *)this == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TSlateDecl<SSidebarButton,RequiredArgs::T2RequiredArgs<TSharedRef<FSidebarDrawer,1>_const_&,ESidebarTabLocation_&&>_>
                *)(*pcVar5)();
      return pTVar8;
    }
  }
  SWidget::SetDebugInfo(*(SWidget **)this,param_1,param_2,param_3,0x388);
  return this;
}

// TSlateDecl<SSidebarButtonText,RequiredArgs::T0RequiredArgs> @ 142d5f8e0

TSlateDecl<SSidebarButtonText,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SSidebarButtonText,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SSidebarButtonText,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SSidebarButtonText,RequiredArgs::T0RequiredArgs> *this,char *param_1,
          char *param_2,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SSidebarButtonText,RequiredArgs::T0RequiredArgs> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  SSidebarButtonText *pSVar9;
  SSidebarButtonText *local_38;
  FSharedReferencer<1> local_30;
  
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SSidebarButtonText *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_RequiredArgs = param_4;
  pTVar6 = ::operator_new(0x570);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pSVar9 = (SSidebarButtonText *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VSSidebarButtonText___00_SharedPointerInternals__6B_;
    memset(pTVar6 + 1,0,0x560);
    SLeafWidget::SLeafWidget((SLeafWidget *)(pTVar6 + 1));
    pTVar6[1]._padding_ = (longlong)&___7SSidebarButtonText__6B_;
    FText::FText((FText *)&pTVar6[0x22].SharedReferenceCount);
    *(undefined1 *)&pTVar6[0x23].SharedReferenceCount = 0;
    pTVar6[0x25]._padding_ = 0;
    pTVar6[0x24]._padding_ = 0;
    pTVar6[0x24].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x24].WeakReferenceCount = (atomic<int>)0x0;
    FTextBlockStyle::FTextBlockStyle((FTextBlockStyle *)(pTVar6 + 0x26));
    *(undefined4 *)&pTVar6[0x54]._padding_ = 0;
    pSVar9 = (SSidebarButtonText *)(pTVar6 + 1);
    *(undefined1 *)((longlong)&pTVar6[0x54]._padding_ + 4) = 0;
    pTVar6[0x55].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x55].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x54].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x54].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x55]._padding_ = 0;
    pTVar6[0x56]._padding_ = 0;
    pTVar8 = pTVar6;
    if (pSVar9 == (SSidebarButtonText *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SSidebarButtonText,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_142d5fa78;
    }
  }
  if (((*(longlong *)&pSVar9->field_0x8 == 0) || (*(longlong *)&pSVar9->field_0x10 == 0)) ||
     (*(int *)(*(longlong *)&pSVar9->field_0x10 + 8) < 1)) {
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(SSidebarButtonText **)&pSVar9->field_0x8 = pSVar9;
    if (pTVar8 != *(TReferenceControllerBase<1> **)&pSVar9->field_0x10) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pSVar9->field_0x10;
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
      *(TReferenceControllerBase<1> **)&pSVar9->field_0x10 = pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
LAB_142d5fa78:
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = pSVar9;
  local_30.ReferenceController = pTVar8;
  if (this != (TSlateDecl<SSidebarButtonText,RequiredArgs::T0RequiredArgs> *)&local_38) {
    (this->_Widget).Object = pSVar9;
    local_38 = (SSidebarButtonText *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  if ((this->_Widget).Object == (SSidebarButtonText *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SSidebarButtonText,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x560);
  return this;
}

// TSlateDecl<SSidebarDrawer,RequiredArgs::T2RequiredArgs<TSharedRef<FSidebarDrawer,1>_const_&,enum_ESidebarTabLocation_&&>_> @ 142d5fb40

TSlateDecl<SSidebarDrawer,RequiredArgs::T2RequiredArgs<TSharedRef<FSidebarDrawer,1>_const_&,ESidebarTabLocation_&&>_>
* __thiscall
TSlateDecl<SSidebarDrawer,RequiredArgs::T2RequiredArgs<TSharedRef<FSidebarDrawer,1>_const_&,enum_ESidebarTabLocation_&&>_>
::
TSlateDecl<SSidebarDrawer,RequiredArgs::T2RequiredArgs<TSharedRef<FSidebarDrawer,1>_const_&,enum_ESidebarTabLocation_&&>_>
          (void *this,char *param_1,char *param_2,int param_3,
          T2RequiredArgs<TSharedRef<FSidebarDrawer,1>_const_&,ESidebarTabLocation_&&> *param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  TReferenceControllerBase<1> *pTVar7;
  TSlateDecl<SSidebarDrawer,RequiredArgs::T2RequiredArgs<TSharedRef<FSidebarDrawer,1>_const_&,ESidebarTabLocation_&&>_>
  *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  TReferenceControllerBase<1> *local_38;
  FSharedReferencer<1> local_30;
  
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)this = 0;
  *(undefined8 *)((longlong)this + 8) = 0;
  *(T2RequiredArgs<TSharedRef<FSidebarDrawer,1>_const_&,ESidebarTabLocation_&&> **)
   ((longlong)this + 0x10) = param_4;
  pTVar7 = ::operator_new(0x430);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VSSidebarDrawer___00_SharedPointerInternals__6B_;
    memset(pTVar7 + 1,0,0x420);
    SCompoundWidget::SCompoundWidget((SCompoundWidget *)(pTVar7 + 1));
    *(undefined1 *)&pTVar7[0x2c].SharedReferenceCount = 1;
    pTVar7[1]._padding_ = (longlong)&___7SSidebarDrawer__6B_;
    pTVar7[0x2b].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0x2b].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[0x2c]._padding_ = 0;
    *(undefined8 *)&pTVar7[0x2c].WeakReferenceCount = 0;
    *(undefined4 *)((longlong)&pTVar7[0x2d]._padding_ + 4) = 0;
    *(TVector2<float>_u_0 *)&pTVar7[0x2d].SharedReferenceCount =
         (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    pTVar7[0x2e].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0x2e].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[0x2f]._padding_ = 0;
    pTVar7[0x2f].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0x30]._padding_ = 0;
    pTVar7[0x30].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0x30].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar7[0x31]._padding_ = 0;
    pTVar7[0x31].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0x31].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[0x32]._padding_ = 0;
    pTVar7[0x32].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0x33]._padding_ = 0;
    pTVar7[0x33].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0x33].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar7[0x34]._padding_ = 0;
    pTVar7[0x34].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0x34].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[0x35]._padding_ = 0;
    pTVar7[0x35].SharedReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar7[0x2e]._padding_ = 0x40a00000;
    FCurveSequence::FCurveSequence((FCurveSequence *)(pTVar7 + 0x36));
    pTVar7[0x3d]._padding_ = 0;
    pTVar7[0x3d].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0x3d].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[0x3e]._padding_ = -1;
    pTVar7[0x3e].SharedReferenceCount = (atomic<int>)0x0;
    *(undefined2 *)&pTVar7[0x3e].WeakReferenceCount = 0;
    *(undefined4 *)&pTVar7[0x3f]._padding_ = 0;
    FGeometry::FGeometry((FGeometry *)((longlong)&pTVar7[0x3f]._padding_ + 4));
    pTVar10 = pTVar7 + 1;
    pTVar9 = pTVar7;
    if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TSlateDecl<SSidebarDrawer,RequiredArgs::T2RequiredArgs<TSharedRef<FSidebarDrawer,1>_const_&,ESidebarTabLocation_&&>_>
                  *)(*pcVar5)();
        return pTVar8;
      }
      goto LAB_142d5fd57;
    }
  }
  lVar3._0_4_ = pTVar10->SharedReferenceCount;
  lVar3._4_4_ = pTVar10->WeakReferenceCount;
  if (((lVar3 == 0) || (pTVar10[1]._padding_ == 0)) || (*(int *)(pTVar10[1]._padding_ + 8) < 1)) {
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(TReferenceControllerBase<1> **)&pTVar10->SharedReferenceCount = pTVar10;
    if (pTVar9 != (TReferenceControllerBase<1> *)pTVar10[1]._padding_) {
      if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar9->WeakReferenceCount = (atomic<int>)((int)pTVar9->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = (longlong *)pTVar10[1]._padding_;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      pTVar10[1]._padding_ = (longlong)pTVar9;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  }
LAB_142d5fd57:
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = pTVar10;
  local_30.ReferenceController = pTVar9;
  if (this != &local_38) {
    *(TReferenceControllerBase<1> **)this = pTVar10;
    local_38 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)this + 8),&local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  if (*(longlong *)this == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TSlateDecl<SSidebarDrawer,RequiredArgs::T2RequiredArgs<TSharedRef<FSidebarDrawer,1>_const_&,ESidebarTabLocation_&&>_>
                *)(*pcVar5)();
      return pTVar8;
    }
  }
  SWidget::SetDebugInfo(*(SWidget **)this,param_1,param_2,param_3,0x420);
  return this;
}

// TSlateDecl<SSidebarDrawerContent,RequiredArgs::T1RequiredArgs<TSharedRef<FSidebarDrawer,1>_const_&>_> @ 142d5fe20

TSlateDecl<SSidebarDrawerContent,RequiredArgs::T1RequiredArgs<TSharedRef<FSidebarDrawer,1>_const_&>_>
* __thiscall
TSlateDecl<SSidebarDrawerContent,RequiredArgs::T1RequiredArgs<TSharedRef<FSidebarDrawer,1>_const_&>_>
::
TSlateDecl<SSidebarDrawerContent,RequiredArgs::T1RequiredArgs<TSharedRef<FSidebarDrawer,1>_const_&>_>
          (TSlateDecl<SSidebarDrawerContent,RequiredArgs::T1RequiredArgs<TSharedRef<FSidebarDrawer,1>_const_&>_>
           *this,char *param_1,char *param_2,int param_3,
          T1RequiredArgs<TSharedRef<FSidebarDrawer,1>_const_&> *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SSidebarDrawerContent,RequiredArgs::T1RequiredArgs<TSharedRef<FSidebarDrawer,1>_const_&>_>
  *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  SSidebarDrawerContent *pSVar9;
  SSidebarDrawerContent *local_38;
  FSharedReferencer<1> local_30;
  
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SSidebarDrawerContent *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_RequiredArgs = param_4;
  pTVar6 = ::operator_new(0x2e8);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pSVar9 = (SSidebarDrawerContent *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VSSidebarDrawerContent___00_SharedPointerInternals__6B_
    ;
    memset(pTVar6 + 1,0,0x2d8);
    SCompoundWidget::SCompoundWidget((SCompoundWidget *)(pTVar6 + 1));
    pTVar6[1]._padding_ = (longlong)&___7SSidebarDrawerContent__6B_;
    pSVar9 = (SSidebarDrawerContent *)(pTVar6 + 1);
    pTVar6[0x2b].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2b].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2c]._padding_ = 0;
    pTVar6[0x2c].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2c].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2d]._padding_ = 0;
    pTVar6[0x2d].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2d].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2e]._padding_ = 0;
    pTVar8 = pTVar6;
    if (pSVar9 == (SSidebarDrawerContent *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SSidebarDrawerContent,RequiredArgs::T1RequiredArgs<TSharedRef<FSidebarDrawer,1>_const_&>_>
                  *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_142d5ff84;
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
LAB_142d5ff84:
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = pSVar9;
  local_30.ReferenceController = pTVar8;
  if (this != (TSlateDecl<SSidebarDrawerContent,RequiredArgs::T1RequiredArgs<TSharedRef<FSidebarDrawer,1>_const_&>_>
               *)&local_38) {
    (this->_Widget).Object = pSVar9;
    local_38 = (SSidebarDrawerContent *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  if ((this->_Widget).Object == (SSidebarDrawerContent *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SSidebarDrawerContent,RequiredArgs::T1RequiredArgs<TSharedRef<FSidebarDrawer,1>_const_&>_>
                *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x2d8);
  return this;
}

// TSlateDecl<SWidgetSwitcher,RequiredArgs::T0RequiredArgs> @ 142d60050

TSlateDecl<SWidgetSwitcher,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SWidgetSwitcher,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SWidgetSwitcher,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SWidgetSwitcher,RequiredArgs::T0RequiredArgs> *this,char *param_1,
          char *param_2,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SWidgetSwitcher,RequiredArgs::T0RequiredArgs> *pTVar7;
  SWidgetSwitcher *pSVar8;
  SWidgetSwitcher *local_28;
  FSharedReferencer<1> local_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (SWidgetSwitcher *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0x2b8);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pSVar8 = (SWidgetSwitcher *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VSWidgetSwitcher___00_SharedPointerInternals__6B_;
    SWidgetSwitcher::SWidgetSwitcher((SWidgetSwitcher *)(pTVar6 + 1));
    pSVar8 = (SWidgetSwitcher *)(pTVar6 + 1);
    if (pSVar8 == (SWidgetSwitcher *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SWidgetSwitcher,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_142d6016f;
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
LAB_142d6016f:
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = pSVar8;
  local_20.ReferenceController = pTVar6;
  if (this != (TSlateDecl<SWidgetSwitcher,RequiredArgs::T0RequiredArgs> *)&local_28) {
    (this->_Widget).Object = pSVar8;
    local_28 = (SWidgetSwitcher *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  if ((this->_Widget).Object == (SWidgetSwitcher *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SWidgetSwitcher,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x2a8);
  return this;
}

// TSlateDecl<SWrapBox,RequiredArgs::T0RequiredArgs> @ 142d60230

TSlateDecl<SWrapBox,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SWrapBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SWrapBox,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SWrapBox,RequiredArgs::T0RequiredArgs> *this,char *param_1,char *param_2,
          int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SWrapBox,RequiredArgs::T0RequiredArgs> *pTVar7;
  SWrapBox *pSVar8;
  SWrapBox *local_28;
  FSharedReferencer<1> local_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (SWrapBox *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0x278);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pSVar8 = (SWrapBox *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)&___7__TIntrusiveReferenceController_VSWrapBox___00_SharedPointerInternals__6B_;
    SWrapBox::SWrapBox((SWrapBox *)(pTVar6 + 1));
    pSVar8 = (SWrapBox *)(pTVar6 + 1);
    if (pSVar8 == (SWrapBox *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SWrapBox,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_142d6034f;
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
LAB_142d6034f:
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = pSVar8;
  local_20.ReferenceController = pTVar6;
  if (this != (TSlateDecl<SWrapBox,RequiredArgs::T0RequiredArgs> *)&local_28) {
    (this->_Widget).Object = pSVar8;
    local_28 = (SWrapBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  if ((this->_Widget).Object == (SWrapBox *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SWrapBox,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x268);
  return this;
}

// operator<<= @ 142d6b3e0

TSharedRef<STableRow<TSharedPtr<FText,1>_>,1> * __thiscall
TSlateDecl<STableRow<TSharedPtr<FText,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FText,1>_>,1>_&&>_>
::operator<<=(TSlateDecl<STableRow<TSharedPtr<FText,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FText,1>_>,1>_&&>_>
              *this,TSharedRef<STableRow<TSharedPtr<FText,1>_>,1> *__return_storage_ptr__,
             FArguments *param_1)

{
  byte *pbVar1;
  STableRow<TSharedPtr<FText,1>_> *pSVar2;
  TSharedRef<SListView<TSharedPtr<FText,1>_>,1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  SListView<TSharedPtr<FText,1>_> *pSVar5;
  code *pcVar6;
  bool bVar7;
  char cVar8;
  byte bVar9;
  TSharedRef<STableRow<TSharedPtr<FText,1>_>,1> *pTVar10;
  TSharedRef<STableViewBase,1> local_28;
  
  if ((this->_Widget).Object == (STableRow<TSharedPtr<FText,1>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<STableRow<TSharedPtr<FText,1>_>,1> *)(*pcVar6)();
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
  STableRow<TSharedPtr<FText,1>_>::ConstructInternal(pSVar2,param_1,&local_28);
  (**(code **)(pSVar2->_padding_ + 0x80))
            (pSVar2,(int)pSVar5->_padding_,&param_1->_Padding,&param_1->_Content);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  if ((this->_Widget).Object == (STableRow<TSharedPtr<FText,1>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<STableRow<TSharedPtr<FText,1>_>,1> *)(*pcVar6)();
      return pTVar10;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar8 = (**(code **)(pSVar2->_padding_ + 0x228))(&pSVar2->_padding_);
    bVar9 = 0;
    if (cVar8 == '\0') goto LAB_142d6b4e2;
  }
  bVar9 = 0x20;
LAB_142d6b4e2:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar9;
  if ((this->_Widget).Object == (STableRow<TSharedPtr<FText,1>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<STableRow<TSharedPtr<FText,1>_>,1> *)(*pcVar6)();
      return pTVar10;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (STableRow<TSharedPtr<FText,1>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<STableRow<TSharedPtr<FText,1>_>,1> *)(*pcVar6)();
      return pTVar10;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (STableRow<TSharedPtr<FText,1>_> *)0x0;
  if (__return_storage_ptr__->Object == (STableRow<TSharedPtr<FText,1>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<STableRow<TSharedPtr<FText,1>_>,1> *)(*pcVar6)();
      return pTVar10;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 142d6b5b0

TSharedRef<STableRow<TSharedRef<CheckBoxList::FItemPair,1>_>,1> * __thiscall
TSlateDecl<STableRow<TSharedRef<CheckBoxList::FItemPair,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedRef<CheckBoxList::FItemPair,1>_>,1>_&&>_>
::operator<<=(TSlateDecl<STableRow<TSharedRef<CheckBoxList::FItemPair,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedRef<CheckBoxList::FItemPair,1>_>,1>_&&>_>
              *this,TSharedRef<STableRow<TSharedRef<CheckBoxList::FItemPair,1>_>,1>
                    *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  STableRow<TSharedRef<CheckBoxList::FItemPair,1>_> *pSVar2;
  TSharedRef<SListView<TSharedRef<CheckBoxList::FItemPair,1>_>,1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  SListView<TSharedRef<CheckBoxList::FItemPair,1>_> *pSVar5;
  code *pcVar6;
  bool bVar7;
  char cVar8;
  byte bVar9;
  TSharedRef<STableRow<TSharedRef<CheckBoxList::FItemPair,1>_>,1> *pTVar10;
  TSharedRef<STableViewBase,1> local_28;
  
  if ((this->_Widget).Object == (STableRow<TSharedRef<CheckBoxList::FItemPair,1>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<STableRow<TSharedRef<CheckBoxList::FItemPair,1>_>,1> *)(*pcVar6)();
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
  STableRow<TSharedRef<CheckBoxList::FItemPair,1>_>::ConstructInternal(pSVar2,param_1,&local_28);
  (**(code **)(pSVar2->_padding_ + 0x80))
            (pSVar2,(int)pSVar5->_padding_,&param_1->_Padding,&param_1->_Content);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  if ((this->_Widget).Object == (STableRow<TSharedRef<CheckBoxList::FItemPair,1>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<STableRow<TSharedRef<CheckBoxList::FItemPair,1>_>,1> *)(*pcVar6)();
      return pTVar10;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar8 = (**(code **)(pSVar2->_padding_ + 0x228))(&pSVar2->_padding_);
    bVar9 = 0;
    if (cVar8 == '\0') goto LAB_142d6b6b2;
  }
  bVar9 = 0x20;
LAB_142d6b6b2:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar9;
  if ((this->_Widget).Object == (STableRow<TSharedRef<CheckBoxList::FItemPair,1>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<STableRow<TSharedRef<CheckBoxList::FItemPair,1>_>,1> *)(*pcVar6)();
      return pTVar10;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (STableRow<TSharedRef<CheckBoxList::FItemPair,1>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<STableRow<TSharedRef<CheckBoxList::FItemPair,1>_>,1> *)(*pcVar6)();
      return pTVar10;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (STableRow<TSharedRef<CheckBoxList::FItemPair,1>_> *)0x0;
  if (__return_storage_ptr__->Object == (STableRow<TSharedRef<CheckBoxList::FItemPair,1>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<STableRow<TSharedRef<CheckBoxList::FItemPair,1>_>,1> *)(*pcVar6)();
      return pTVar10;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 142d6b780

TSharedRef<SActionButton,1> * __thiscall
TSlateDecl<SActionButton,RequiredArgs::T0RequiredArgs>::operator<<=
          (TSlateDecl<SActionButton,RequiredArgs::T0RequiredArgs> *this,
          TSharedRef<SActionButton,1> *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  SActionButton *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<SActionButton,1> *pTVar7;
  
  if ((this->_Widget).Object == (SActionButton *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SActionButton,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  SActionButton::Construct((this->_Widget).Object,param_1);
  if ((this->_Widget).Object == (SActionButton *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SActionButton,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar5 = (**(code **)(pSVar2->_padding_ + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_142d6b821;
  }
  bVar6 = 0x20;
LAB_142d6b821:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar6;
  if ((this->_Widget).Object == (SActionButton *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SActionButton,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SActionButton *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SActionButton,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SActionButton *)0x0;
  if (__return_storage_ptr__->Object == (SActionButton *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SActionButton,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 142d6b8f0

TSharedRef<UE::ToolWidgets::SDraggableBox,1> * __thiscall
TSlateDecl<UE::ToolWidgets::SDraggableBox,RequiredArgs::T1RequiredArgs<TSharedRef<UE::ToolWidgets::SDraggableBoxOverlay,1>_&&>_>
::operator<<=(TSlateDecl<UE::ToolWidgets::SDraggableBox,RequiredArgs::T1RequiredArgs<TSharedRef<UE::ToolWidgets::SDraggableBoxOverlay,1>_&&>_>
              *this,TSharedRef<UE::ToolWidgets::SDraggableBox,1> *__return_storage_ptr__,
             FArguments *param_1)

{
  atomic<int> *paVar1;
  byte *pbVar2;
  atomic<int> aVar3;
  SDraggableBox *pSVar4;
  TSharedRef<UE::ToolWidgets::SDraggableBoxOverlay,1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  SWidget *pSVar8;
  code *pcVar9;
  bool bVar10;
  char cVar11;
  byte bVar12;
  TSharedRef<UE::ToolWidgets::SDraggableBox,1> *pTVar13;
  SWidget *local_28;
  FSharedReferencer<1> local_20;
  longlong local_18;
  TReferenceControllerBase<1> *pTStack_10;
  
  if ((this->_Widget).Object == (SDraggableBox *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      pTVar13 = (TSharedRef<UE::ToolWidgets::SDraggableBox,1> *)(*pcVar9)();
      return pTVar13;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  pSVar4 = (this->_Widget).Object;
  pTVar5 = this->_RequiredArgs->Arg0;
  (pSVar4->DraggableOverlayWeak).Object = pTVar5->Object;
  pTVar6 = (pTVar5->SharedReferenceCount).ReferenceController;
  if (pTVar6 != (pSVar4->DraggableOverlayWeak).WeakReferenceCount.ReferenceController) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar7 = (pSVar4->DraggableOverlayWeak).WeakReferenceCount.ReferenceController;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar7->WeakReferenceCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)(pTVar7->_padding_ + 8))(pTVar7,1);
      }
    }
    (pSVar4->DraggableOverlayWeak).WeakReferenceCount.ReferenceController = pTVar6;
  }
  local_20.ReferenceController = (param_1->_Content).Widget.SharedReferenceCount.ReferenceController
  ;
  local_28 = (param_1->_Content).Widget.Object;
  if (local_20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_20.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_20.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&pSVar4->InnerWidget != (TSharedPtr<SWidget,1> *)&local_28) {
    (pSVar4->InnerWidget).Object = local_28;
    local_28 = (SWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(pSVar4->InnerWidget).SharedReferenceCount,&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  (pSVar4->IsDraggableAttr).Value = (param_1->_IsDraggable).Value;
  (pSVar4->IsDraggableAttr).bIsSet = (param_1->_IsDraggable).bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(pSVar4->IsDraggableAttr).Getter,&(param_1->_IsDraggable).Getter);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&pSVar4->OnUserDraggedToNewPositionDelegate,&param_1->_OnUserDraggedToNewPosition);
  FSlotBase::DetatchParentFromContent((FSlotBase *)&pSVar4->_padding_);
  pTVar6 = (param_1->_Content).Widget.SharedReferenceCount.ReferenceController;
  pSVar8 = (param_1->_Content).Widget.Object;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18 = pSVar4->_padding_;
  pTStack_10 = (TReferenceControllerBase<1> *)pSVar4->_padding_;
  pSVar4->_padding_ = (longlong)pSVar8;
  pSVar4->_padding_ = (longlong)pTVar6;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_10);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)&pSVar4->_padding_);
  if ((this->_Widget).Object == (SDraggableBox *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      pTVar13 = (TSharedRef<UE::ToolWidgets::SDraggableBox,1> *)(*pcVar9)();
      return pTVar13;
    }
  }
  pSVar4 = (this->_Widget).Object;
  if ((pSVar4->_padding_ & 0x10) == 0) {
    cVar11 = (**(code **)(pSVar4->_padding_ + 0x228))(pSVar4);
    bVar12 = 0;
    if (cVar11 == '\0') goto LAB_142d6bad3;
  }
  bVar12 = 0x20;
LAB_142d6bad3:
  *(byte *)&pSVar4->_padding_ = (byte)pSVar4->_padding_ & 0xdf;
  *(byte *)&pSVar4->_padding_ = (byte)pSVar4->_padding_ | bVar12;
  if ((this->_Widget).Object == (SDraggableBox *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      pTVar13 = (TSharedRef<UE::ToolWidgets::SDraggableBox,1> *)(*pcVar9)();
      return pTVar13;
    }
  }
  pbVar2 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar2 = *pbVar2 | 4;
  if ((this->_Widget).Object == (SDraggableBox *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x416,L"");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      pTVar13 = (TSharedRef<UE::ToolWidgets::SDraggableBox,1> *)(*pcVar9)();
      return pTVar13;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SDraggableBox *)0x0;
  if (__return_storage_ptr__->Object == (SDraggableBox *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x26c,L"");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      pTVar13 = (TSharedRef<UE::ToolWidgets::SDraggableBox,1> *)(*pcVar9)();
      return pTVar13;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 142d6bbb0

TSharedRef<SExpanderArrow,1> * __thiscall
TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FText,1>_>,1>_&&>_>
::operator<<=(TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FText,1>_>,1>_&&>_>
              *this,TSharedRef<SExpanderArrow,1> *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  SExpanderArrow *pSVar2;
  TSharedRef<STableRow<TSharedPtr<FText,1>_>,1> *pTVar3;
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
    if (cVar6 == '\0') goto LAB_142d6bc81;
  }
  bVar7 = 0x20;
LAB_142d6bc81:
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

// operator<<= @ 142d6bd50

TSharedRef<SExpanderArrow,1> * __thiscall
TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedRef<CheckBoxList::FItemPair,1>_>,1>_&&>_>
::operator<<=(TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedRef<CheckBoxList::FItemPair,1>_>,1>_&&>_>
              *this,TSharedRef<SExpanderArrow,1> *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  SExpanderArrow *pSVar2;
  TSharedRef<STableRow<TSharedRef<CheckBoxList::FItemPair,1>_>,1> *pTVar3;
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
    if (cVar6 == '\0') goto LAB_142d6be21;
  }
  bVar7 = 0x20;
LAB_142d6be21:
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

// operator<<= @ 142d6bef0

TSharedRef<CheckBoxList::SItemPair,1> * __thiscall
TSlateDecl<CheckBoxList::SItemPair,RequiredArgs::T2RequiredArgs<TSharedRef<STableViewBase,1>_const_&,TSharedRef<CheckBoxList::FItemPair,1>_&>_>
::operator<<=(TSlateDecl<CheckBoxList::SItemPair,RequiredArgs::T2RequiredArgs<TSharedRef<STableViewBase,1>_const_&,TSharedRef<CheckBoxList::FItemPair,1>_&>_>
              *this,TSharedRef<CheckBoxList::SItemPair,1> *__return_storage_ptr__,
             FArguments *param_1)

{
  byte *pbVar1;
  T2RequiredArgs<TSharedRef<STableViewBase,1>_const_&,TSharedRef<CheckBoxList::FItemPair,1>_&>
  *pTVar2;
  SItemPair *pSVar3;
  TSharedRef<CheckBoxList::FItemPair,1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  TSharedRef<STableViewBase,1> *pTVar6;
  code *pcVar7;
  bool bVar8;
  char cVar9;
  byte bVar10;
  TSharedRef<CheckBoxList::SItemPair,1> *pTVar11;
  FArguments *pFVar12;
  atomic<int> *paVar13;
  FItemPair *local_338;
  FSharedReferencer<1> local_330;
  FArguments local_328;
  
  if ((this->_Widget).Object == (SItemPair *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar11 = (TSharedRef<CheckBoxList::SItemPair,1> *)(*pcVar7)();
      return pTVar11;
    }
  }
  SWidget::SWidgetConstruct
            ((SWidget *)&((this->_Widget).Object)->_padding_,(FSlateBaseNamedArgs *)param_1);
  pTVar2 = this->_RequiredArgs;
  pSVar3 = (this->_Widget).Object;
  pTVar4 = pTVar2->Arg1;
  pTVar5 = (pTVar4->SharedReferenceCount).ReferenceController;
  local_338 = pTVar4->Object;
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    paVar13 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar13 = &pTVar5->SharedReferenceCount;
    LOCK();
    *paVar13 = (atomic<int>)((int)*paVar13 + 1);
    UNLOCK();
  }
  pTVar6 = pTVar2->Arg0;
  pSVar3->CheckBoxStyle = param_1->_CheckBoxStyle;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&pSVar3->OnCheckUpdated,&param_1->_OnCheckUpdated);
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar13 = (atomic<int>)((int)*paVar13 + 1);
    UNLOCK();
  }
  local_330.ReferenceController = pTVar5;
  if (&pSVar3->Item != (TSharedPtr<CheckBoxList::FItemPair,1> *)&local_338) {
    (pSVar3->Item).Object = local_338;
    local_338 = (FItemPair *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(pSVar3->Item).SharedReferenceCount,&local_330);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_330.ReferenceController);
  pFVar12 = STableRow<TSharedRef<CheckBoxList::FItemPair,1>_>::FArguments::FArguments(&local_328);
  SMultiColumnTableRow<TSharedRef<CheckBoxList::FItemPair,1>_>::Construct
            ((SMultiColumnTableRow<TSharedRef<CheckBoxList::FItemPair,1>_> *)pSVar3,pFVar12,pTVar6);
  STableRow<TSharedRef<CheckBoxList::FItemPair,1>_>::FArguments::~FArguments(&local_328);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  if ((this->_Widget).Object == (SItemPair *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar11 = (TSharedRef<CheckBoxList::SItemPair,1> *)(*pcVar7)();
      return pTVar11;
    }
  }
  pSVar3 = (this->_Widget).Object;
  if ((pSVar3->_padding_ & 0x10) == 0) {
    cVar9 = (**(code **)(pSVar3->_padding_ + 0x228))(&pSVar3->_padding_);
    bVar10 = 0;
    if (cVar9 == '\0') goto LAB_142d6c05a;
  }
  bVar10 = 0x20;
LAB_142d6c05a:
  *(byte *)&pSVar3->_padding_ = (byte)pSVar3->_padding_ & 0xdf;
  *(byte *)&pSVar3->_padding_ = (byte)pSVar3->_padding_ | bVar10;
  if ((this->_Widget).Object == (SItemPair *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar11 = (TSharedRef<CheckBoxList::SItemPair,1> *)(*pcVar7)();
      return pTVar11;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SItemPair *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar11 = (TSharedRef<CheckBoxList::SItemPair,1> *)(*pcVar7)();
      return pTVar11;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SItemPair *)0x0;
  if (__return_storage_ptr__->Object == (SItemPair *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar11 = (TSharedRef<CheckBoxList::SItemPair,1> *)(*pcVar7)();
      return pTVar11;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 142d6c130

TSharedRef<SPrimaryButton,1> * __thiscall
TSlateDecl<SPrimaryButton,RequiredArgs::T0RequiredArgs>::operator<<=
          (TSlateDecl<SPrimaryButton,RequiredArgs::T0RequiredArgs> *this,
          TSharedRef<SPrimaryButton,1> *__return_storage_ptr__,FArguments *param_1)

{
  undefined1 *puVar1;
  SPrimaryButton *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<SPrimaryButton,1> *pTVar7;
  
  if ((this->_Widget).Object == (SPrimaryButton *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SPrimaryButton,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  SPrimaryButton::Construct((this->_Widget).Object,param_1);
  if ((this->_Widget).Object == (SPrimaryButton *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SPrimaryButton,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->field_0x30 & 0x10) == 0) {
    cVar5 = (**(code **)(*(longlong *)pSVar2 + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_142d6c1d1;
  }
  bVar6 = 0x20;
LAB_142d6c1d1:
  pSVar2->field_0x30 = pSVar2->field_0x30 & 0xdf;
  pSVar2->field_0x30 = pSVar2->field_0x30 | bVar6;
  if ((this->_Widget).Object == (SPrimaryButton *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SPrimaryButton,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  puVar1 = &((this->_Widget).Object)->field_0x31;
  *puVar1 = *puVar1 | 4;
  if ((this->_Widget).Object == (SPrimaryButton *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SPrimaryButton,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SPrimaryButton *)0x0;
  if (__return_storage_ptr__->Object == (SPrimaryButton *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SPrimaryButton,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 142d6c2a0

TSharedRef<SRichTextBlock,1> * __thiscall
TSlateDecl<SRichTextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
          (TSlateDecl<SRichTextBlock,RequiredArgs::T0RequiredArgs> *this,
          TSharedRef<SRichTextBlock,1> *__return_storage_ptr__,FArguments *param_1)

{
  undefined1 *puVar1;
  SRichTextBlock *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<SRichTextBlock,1> *pTVar7;
  
  if ((this->_Widget).Object == (SRichTextBlock *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SRichTextBlock,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  SRichTextBlock::Construct((this->_Widget).Object,param_1);
  if ((this->_Widget).Object == (SRichTextBlock *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SRichTextBlock,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->field_0x30 & 0x10) == 0) {
    cVar5 = (**(code **)(*(longlong *)pSVar2 + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_142d6c341;
  }
  bVar6 = 0x20;
LAB_142d6c341:
  pSVar2->field_0x30 = pSVar2->field_0x30 & 0xdf;
  pSVar2->field_0x30 = pSVar2->field_0x30 | bVar6;
  if ((this->_Widget).Object == (SRichTextBlock *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SRichTextBlock,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  puVar1 = &((this->_Widget).Object)->field_0x31;
  *puVar1 = *puVar1 | 4;
  if ((this->_Widget).Object == (SRichTextBlock *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SRichTextBlock,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SRichTextBlock *)0x0;
  if (__return_storage_ptr__->Object == (SRichTextBlock *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SRichTextBlock,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 142d6c410

TSharedRef<SSidebarDrawerContent,1> * __thiscall
TSlateDecl<SSidebarDrawerContent,RequiredArgs::T1RequiredArgs<TSharedRef<FSidebarDrawer,1>_const_&>_>
::operator<<=(TSlateDecl<SSidebarDrawerContent,RequiredArgs::T1RequiredArgs<TSharedRef<FSidebarDrawer,1>_const_&>_>
              *this,TSharedRef<SSidebarDrawerContent,1> *__return_storage_ptr__,FArguments *param_1)

{
  atomic<int> *paVar1;
  byte *pbVar2;
  atomic<int> aVar3;
  SSidebarDrawerContent *pSVar4;
  TSharedRef<FSidebarDrawer,1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  code *pcVar7;
  bool bVar8;
  char cVar9;
  byte bVar10;
  TSharedRef<SSidebarDrawerContent,1> *pTVar11;
  TWeakPtr<FSidebarDrawer,1> local_18;
  
  if ((this->_Widget).Object == (SSidebarDrawerContent *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar11 = (TSharedRef<SSidebarDrawerContent,1> *)(*pcVar7)();
      return pTVar11;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  pSVar4 = (this->_Widget).Object;
  pTVar5 = this->_RequiredArgs->Arg0;
  pTVar6 = (pTVar5->SharedReferenceCount).ReferenceController;
  local_18.Object = pTVar5->Object;
  local_18.WeakReferenceCount.ReferenceController = pTVar6;
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    SSidebarDrawerContent::Construct(pSVar4,param_1,&local_18);
  }
  else {
    LOCK();
    pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
    UNLOCK();
    SSidebarDrawerContent::Construct(pSVar4,param_1,&local_18);
    LOCK();
    paVar1 = &pTVar6->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
    }
  }
  if ((this->_Widget).Object == (SSidebarDrawerContent *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar11 = (TSharedRef<SSidebarDrawerContent,1> *)(*pcVar7)();
      return pTVar11;
    }
  }
  pSVar4 = (this->_Widget).Object;
  if ((pSVar4->_padding_ & 0x10) == 0) {
    cVar9 = (**(code **)(pSVar4->_padding_ + 0x228))(pSVar4);
    bVar10 = 0;
    if (cVar9 == '\0') goto LAB_142d6c500;
  }
  bVar10 = 0x20;
LAB_142d6c500:
  *(byte *)&pSVar4->_padding_ = (byte)pSVar4->_padding_ & 0xdf;
  *(byte *)&pSVar4->_padding_ = (byte)pSVar4->_padding_ | bVar10;
  if ((this->_Widget).Object == (SSidebarDrawerContent *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar11 = (TSharedRef<SSidebarDrawerContent,1> *)(*pcVar7)();
      return pTVar11;
    }
  }
  pbVar2 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar2 = *pbVar2 | 4;
  if ((this->_Widget).Object == (SSidebarDrawerContent *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar11 = (TSharedRef<SSidebarDrawerContent,1> *)(*pcVar7)();
      return pTVar11;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SSidebarDrawerContent *)0x0;
  if (__return_storage_ptr__->Object == (SSidebarDrawerContent *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar11 = (TSharedRef<SSidebarDrawerContent,1> *)(*pcVar7)();
      return pTVar11;
    }
  }
  return __return_storage_ptr__;
}

