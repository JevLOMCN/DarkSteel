// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateReflector
// Functions: 83

// Expose<SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_>_> @ 142df3980

TSlateDecl<SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T0RequiredArgs> *
__thiscall
TSlateDecl<SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T0RequiredArgs>::
Expose<SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_>_>
          (TSlateDecl<SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T0RequiredArgs>
           *this,TSharedPtr<SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_>,1> *param_1)

{
  SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_> *pSVar1;
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

// Expose<SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>_> @ 142df39d0

TSlateDecl<SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,RequiredArgs::T0RequiredArgs>
* __thiscall
TSlateDecl<SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,RequiredArgs::T0RequiredArgs>
::Expose<SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>_>
          (TSlateDecl<SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,RequiredArgs::T0RequiredArgs>
           *this,TSharedPtr<SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,1>
                 *param_1)

{
  SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_> *pSVar1;
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

// Expose<STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_>_> @ 142df3a20

TSlateDecl<STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T0RequiredArgs> *
__thiscall
TSlateDecl<STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T0RequiredArgs>::
Expose<STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_>_>
          (TSlateDecl<STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T0RequiredArgs>
           *this,TSharedPtr<STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_>,1> *param_1)

{
  STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_> *pSVar1;
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

// Expose<SAtlasVisualizerPanel> @ 142df3a70

TSlateDecl<SAtlasVisualizerPanel,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SAtlasVisualizerPanel,RequiredArgs::T0RequiredArgs>::Expose<SAtlasVisualizerPanel>
          (TSlateDecl<SAtlasVisualizerPanel,RequiredArgs::T0RequiredArgs> *this,
          TSharedPtr<SAtlasVisualizerPanel,1> *param_1)

{
  SAtlasVisualizerPanel *pSVar1;
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

// Expose<SNavigationSimulationSnapshotList> @ 142df3ac0

TSlateDecl<SNavigationSimulationSnapshotList,RequiredArgs::T2RequiredArgs<TDelegate<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>_const_&,TDelegate<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>_const_&>_>
* __thiscall
TSlateDecl<SNavigationSimulationSnapshotList,RequiredArgs::T2RequiredArgs<TDelegate<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>_const_&,TDelegate<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>_const_&>_>
::Expose<SNavigationSimulationSnapshotList>
          (TSlateDecl<SNavigationSimulationSnapshotList,RequiredArgs::T2RequiredArgs<TDelegate<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>_const_&,TDelegate<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>_const_&>_>
           *this,TSharedPtr<SNavigationSimulationSnapshotList,1> *param_1)

{
  SNavigationSimulationSnapshotList *pSVar1;
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

// Expose<SScrollableSnapshotImage> @ 142df3b10

TSlateDecl<SScrollableSnapshotImage,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SScrollableSnapshotImage,RequiredArgs::T0RequiredArgs>::Expose<SScrollableSnapshotImage>
          (TSlateDecl<SScrollableSnapshotImage,RequiredArgs::T0RequiredArgs> *this,
          TSharedPtr<SScrollableSnapshotImage,1> *param_1)

{
  SScrollableSnapshotImage *pSVar1;
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

// Expose<SWidget> @ 142df3b60

TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::Expose<SWidget>
          (TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *this,TSharedPtr<SWidget,1> *param_1)

{
  TSharedPtr<SWidget,1> local_18;
  
  local_18.Object = (SWidget *)(this->_Widget).Object;
  local_18.SharedReferenceCount.ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (param_1 != &local_18) {
    param_1->Object = local_18.Object;
    local_18.Object = (SWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&param_1->SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this;
}

// TSlateDecl<SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T0RequiredArgs> @ 142e01cd0

TSlateDecl<SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T0RequiredArgs> *
__thiscall
TSlateDecl<SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T0RequiredArgs>
           *this,char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T0RequiredArgs>
  *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_> *pSVar9;
  SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_> *local_38;
  FSharedReferencer<1> local_30;
  
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_> *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_RequiredArgs = param_4;
  pTVar6 = ::operator_new(0x400);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pSVar9 = (SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__SBreadcrumbTrail_V__TSharedRef_VFWidgetReflectorNodeBase___00_____00_SharedPointerInternals__6B_
    ;
    memset(pTVar6 + 1,0,0x3f0);
    SCompoundWidget::SCompoundWidget((SCompoundWidget *)(pTVar6 + 1));
    pTVar6[0x2b].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2b].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[1]._padding_ =
         (longlong)&___7__SBreadcrumbTrail_V__TSharedRef_VFWidgetReflectorNodeBase___00____6B_;
    pSVar9 = (SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_> *)(pTVar6 + 1);
    pTVar6[0x2c]._padding_ = 0;
    pTVar6[0x2c].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2c].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2d]._padding_ = 0;
    *(undefined1 *)&pTVar6[0x30]._padding_ = 0;
    pTVar6[0x31]._padding_ = 0;
    pTVar6[0x2f]._padding_ = 0;
    pTVar6[0x2f].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2f].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x31].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x31].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x30].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x30].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x32]._padding_ = 0;
    *(undefined1 *)&pTVar6[0x32].SharedReferenceCount = 0;
    pTVar6[0x34]._padding_ = 0;
    pTVar6[0x33]._padding_ = 0;
    pTVar6[0x33].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x33].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x34].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x34].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x35]._padding_ = 0;
    pTVar6[0x35].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x36]._padding_ = 0;
    pTVar6[0x36].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x36].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar6[0x37]._padding_ = 0;
    pTVar6[0x37].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x37].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x38]._padding_ = 0;
    pTVar6[0x38].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x39]._padding_ = 0;
    pTVar6[0x39].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x39].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar6[0x3a]._padding_ = 0;
    pTVar6[0x3a].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x3a].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x3b]._padding_ = 0;
    pTVar6[0x3b].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x3c]._padding_ = 0;
    pTVar6[0x3c].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x3c].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar6[0x3d]._padding_ = 0;
    *(undefined2 *)&pTVar6[0x3d].SharedReferenceCount = 0;
    pTVar6[0x3f]._padding_ = 0;
    pTVar6[0x3e]._padding_ = 0;
    pTVar6[0x3e].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x3e].WeakReferenceCount = (atomic<int>)0x0;
    pTVar8 = pTVar6;
    if (pSVar9 == (SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T0RequiredArgs>
                  *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_142e01f0e;
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
LAB_142e01f0e:
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = pSVar9;
  local_30.ReferenceController = pTVar8;
  if (this != (TSlateDecl<SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T0RequiredArgs>
               *)&local_38) {
    (this->_Widget).Object = pSVar9;
    local_38 = (SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  if ((this->_Widget).Object == (SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T0RequiredArgs>
                *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x3f0);
  return this;
}

// TSlateDecl<SComboBox<TSharedPtr<int,1>_>,RequiredArgs::T0RequiredArgs> @ 142e01fd0

TSlateDecl<SComboBox<TSharedPtr<int,1>_>,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SComboBox<TSharedPtr<int,1>_>,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SComboBox<TSharedPtr<int,1>_>,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SComboBox<TSharedPtr<int,1>_>,RequiredArgs::T0RequiredArgs> *this,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  byte *pbVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  TReferenceControllerBase<1> *pTVar7;
  TSlateDecl<SComboBox<TSharedPtr<int,1>_>,RequiredArgs::T0RequiredArgs> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  SComboBox<TSharedPtr<int,1>_> *pSVar10;
  SComboBox<TSharedPtr<int,1>_> *local_38;
  FSharedReferencer<1> local_30;
  
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SComboBox<TSharedPtr<int,1>_> *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_RequiredArgs = param_4;
  pTVar7 = ::operator_new(0x4e0);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    pSVar10 = (SComboBox<TSharedPtr<int,1>_> *)&DAT_00000010;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__SComboBox_V__TSharedPtr_H_00_____00_SharedPointerInternals__6B_
    ;
    SComboButton::SComboButton((SComboButton *)(pTVar7 + 1));
    pTVar7[1]._padding_ = (longlong)&SComboBox<TSharedPtr<int,1>_>::_vftable__for__SPanel__;
    *(undefined ***)&pTVar7[0x22].SharedReferenceCount =
         &SComboBox<TSharedPtr<int,1>_>::_vftable__for__IMenuHost__;
    FSlateSound::FSlateSound((FSlateSound *)(pTVar7 + 0x40));
    FSlateSound::FSlateSound((FSlateSound *)&pTVar7[0x41].SharedReferenceCount);
    pbVar1 = (byte *)((longlong)&pTVar7[4]._padding_ + 2);
    *pbVar1 = *pbVar1 | 4;
    pSVar10 = (SComboBox<TSharedPtr<int,1>_> *)(pTVar7 + 1);
    pTVar7[0x44]._padding_ = 0;
    pTVar7[0x44].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0x44].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[0x45]._padding_ = 0;
    pTVar7[0x45].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0x45].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar7[0x46]._padding_ = 0;
    pTVar7[0x46].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0x46].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[0x47]._padding_ = 0;
    pTVar7[0x47].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0x47].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[0x48]._padding_ = 0;
    pTVar7[0x48].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0x48].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[0x49]._padding_ = 0;
    pTVar7[0x49].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0x49].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[0x4a]._padding_ = 0;
    pTVar7[0x4a].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0x4b]._padding_ = 0;
    pTVar7[0x4b].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0x4b].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar7[0x4c]._padding_ = 0;
    pTVar7[0x4d]._padding_ = 0;
    pTVar7[0x4d].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0x4d].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined1 *)((longlong)&pTVar7[4]._padding_ + 3) = 1;
    pTVar9 = pTVar7;
    if (pSVar10 == (SComboBox<TSharedPtr<int,1>_> *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TSlateDecl<SComboBox<TSharedPtr<int,1>_>,RequiredArgs::T0RequiredArgs> *)
                 (*pcVar5)();
        return pTVar8;
      }
      goto LAB_142e021ac;
    }
  }
  if (((pSVar10->_padding_ == 0) || (pSVar10->_padding_ == 0)) ||
     (*(int *)(pSVar10->_padding_ + 8) < 1)) {
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
    pSVar10->_padding_ = (longlong)pSVar10;
    if (pTVar9 != (TReferenceControllerBase<1> *)pSVar10->_padding_) {
      if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar9->WeakReferenceCount = (atomic<int>)((int)pTVar9->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = (longlong *)pSVar10->_padding_;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      pSVar10->_padding_ = (longlong)pTVar9;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  }
LAB_142e021ac:
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = pSVar10;
  local_30.ReferenceController = pTVar9;
  if (this != (TSlateDecl<SComboBox<TSharedPtr<int,1>_>,RequiredArgs::T0RequiredArgs> *)&local_38) {
    (this->_Widget).Object = pSVar10;
    local_38 = (SComboBox<TSharedPtr<int,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  if ((this->_Widget).Object == (SComboBox<TSharedPtr<int,1>_> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TSlateDecl<SComboBox<TSharedPtr<int,1>_>,RequiredArgs::T0RequiredArgs> *)(*pcVar5)()
      ;
      return pTVar8;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x4d0);
  return this;
}

// TSlateDecl<SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,RequiredArgs::T0RequiredArgs> @ 142e02270

TSlateDecl<SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,RequiredArgs::T0RequiredArgs>
* __thiscall
TSlateDecl<SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,RequiredArgs::T0RequiredArgs>
::
TSlateDecl<SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,RequiredArgs::T0RequiredArgs>
           *this,char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  byte *pbVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  TReferenceControllerBase<1> *pTVar7;
  TSlateDecl<SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,RequiredArgs::T0RequiredArgs>
  *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *pSVar10;
  SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *local_38;
  FSharedReferencer<1> local_30;
  
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object =
       (SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_RequiredArgs = param_4;
  pTVar7 = ::operator_new(0x4e0);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    pSVar10 = (SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *)&DAT_00000010;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__SComboBox_V__TSharedPtr_UFWidgetSnapshotTarget_WidgetReflectorImpl___00_____00_SharedPointerInternals__6B_
    ;
    SComboButton::SComboButton((SComboButton *)(pTVar7 + 1));
    pTVar7[1]._padding_ =
         (longlong)
         &SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::
          _vftable__for__SPanel__;
    *(undefined ***)&pTVar7[0x22].SharedReferenceCount =
         &SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::
          _vftable__for__IMenuHost__;
    FSlateSound::FSlateSound((FSlateSound *)(pTVar7 + 0x40));
    FSlateSound::FSlateSound((FSlateSound *)&pTVar7[0x41].SharedReferenceCount);
    pbVar1 = (byte *)((longlong)&pTVar7[4]._padding_ + 2);
    *pbVar1 = *pbVar1 | 4;
    pSVar10 = (SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *)(pTVar7 + 1);
    pTVar7[0x44]._padding_ = 0;
    pTVar7[0x44].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0x44].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[0x45]._padding_ = 0;
    pTVar7[0x45].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0x45].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar7[0x46]._padding_ = 0;
    pTVar7[0x46].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0x46].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[0x47]._padding_ = 0;
    pTVar7[0x47].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0x47].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[0x48]._padding_ = 0;
    pTVar7[0x48].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0x48].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[0x49]._padding_ = 0;
    pTVar7[0x49].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0x49].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[0x4a]._padding_ = 0;
    pTVar7[0x4a].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0x4b]._padding_ = 0;
    pTVar7[0x4b].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0x4b].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar7[0x4c]._padding_ = 0;
    pTVar7[0x4d]._padding_ = 0;
    pTVar7[0x4d].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0x4d].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined1 *)((longlong)&pTVar7[4]._padding_ + 3) = 1;
    pTVar9 = pTVar7;
    if (pSVar10 == (SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TSlateDecl<SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,RequiredArgs::T0RequiredArgs>
                  *)(*pcVar5)();
        return pTVar8;
      }
      goto LAB_142e0244c;
    }
  }
  if (((pSVar10->_padding_ == 0) || (pSVar10->_padding_ == 0)) ||
     (*(int *)(pSVar10->_padding_ + 8) < 1)) {
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
    pSVar10->_padding_ = (longlong)pSVar10;
    if (pTVar9 != (TReferenceControllerBase<1> *)pSVar10->_padding_) {
      if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar9->WeakReferenceCount = (atomic<int>)((int)pTVar9->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = (longlong *)pSVar10->_padding_;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      pSVar10->_padding_ = (longlong)pTVar9;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  }
LAB_142e0244c:
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = pSVar10;
  local_30.ReferenceController = pTVar9;
  if (this != (TSlateDecl<SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,RequiredArgs::T0RequiredArgs>
               *)&local_38) {
    (this->_Widget).Object = pSVar10;
    local_38 = (SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  if ((this->_Widget).Object ==
      (SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TSlateDecl<SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,RequiredArgs::T0RequiredArgs>
                *)(*pcVar5)();
      return pTVar8;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x4d0);
  return this;
}

// TSlateDecl<SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T0RequiredArgs> @ 142e02510

TSlateDecl<SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T0RequiredArgs> *
__thiscall
TSlateDecl<SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T0RequiredArgs>
           *this,char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  byte *pbVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  TReferenceControllerBase<1> *pTVar7;
  TSlateDecl<SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T0RequiredArgs>
  *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_> *pSVar10;
  SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_> *local_38;
  FSharedReferencer<1> local_30;
  
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_> *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_RequiredArgs = param_4;
  pTVar7 = ::operator_new(0x4e0);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    pSVar10 = (SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_> *)&DAT_00000010;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__SComboBox_V__TSharedPtr_VFWidgetReflectorNodeBase___00_____00_SharedPointerInternals__6B_
    ;
    SComboButton::SComboButton((SComboButton *)(pTVar7 + 1));
    pTVar7[1]._padding_ =
         (longlong)&SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_>::_vftable__for__SPanel__;
    *(undefined ***)&pTVar7[0x22].SharedReferenceCount =
         &SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_>::_vftable__for__IMenuHost__;
    FSlateSound::FSlateSound((FSlateSound *)(pTVar7 + 0x40));
    FSlateSound::FSlateSound((FSlateSound *)&pTVar7[0x41].SharedReferenceCount);
    pbVar1 = (byte *)((longlong)&pTVar7[4]._padding_ + 2);
    *pbVar1 = *pbVar1 | 4;
    pSVar10 = (SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_> *)(pTVar7 + 1);
    pTVar7[0x44]._padding_ = 0;
    pTVar7[0x44].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0x44].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[0x45]._padding_ = 0;
    pTVar7[0x45].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0x45].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar7[0x46]._padding_ = 0;
    pTVar7[0x46].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0x46].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[0x47]._padding_ = 0;
    pTVar7[0x47].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0x47].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[0x48]._padding_ = 0;
    pTVar7[0x48].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0x48].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[0x49]._padding_ = 0;
    pTVar7[0x49].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0x49].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[0x4a]._padding_ = 0;
    pTVar7[0x4a].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0x4b]._padding_ = 0;
    pTVar7[0x4b].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0x4b].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar7[0x4c]._padding_ = 0;
    pTVar7[0x4d]._padding_ = 0;
    pTVar7[0x4d].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0x4d].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined1 *)((longlong)&pTVar7[4]._padding_ + 3) = 1;
    pTVar9 = pTVar7;
    if (pSVar10 == (SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_> *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TSlateDecl<SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T0RequiredArgs>
                  *)(*pcVar5)();
        return pTVar8;
      }
      goto LAB_142e026ec;
    }
  }
  if (((pSVar10->_padding_ == 0) || (pSVar10->_padding_ == 0)) ||
     (*(int *)(pSVar10->_padding_ + 8) < 1)) {
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
    pSVar10->_padding_ = (longlong)pSVar10;
    if (pTVar9 != (TReferenceControllerBase<1> *)pSVar10->_padding_) {
      if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar9->WeakReferenceCount = (atomic<int>)((int)pTVar9->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = (longlong *)pSVar10->_padding_;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      pSVar10->_padding_ = (longlong)pTVar9;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  }
LAB_142e026ec:
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = pSVar10;
  local_30.ReferenceController = pTVar9;
  if (this != (TSlateDecl<SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T0RequiredArgs>
               *)&local_38) {
    (this->_Widget).Object = pSVar10;
    local_38 = (SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  if ((this->_Widget).Object == (SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TSlateDecl<SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T0RequiredArgs>
                *)(*pcVar5)();
      return pTVar8;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x4d0);
  return this;
}

// TSlateDecl<SListView<TSharedPtr<int,1>_>,RequiredArgs::T0RequiredArgs> @ 142e027b0

TSlateDecl<SListView<TSharedPtr<int,1>_>,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SListView<TSharedPtr<int,1>_>,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SListView<TSharedPtr<int,1>_>,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SListView<TSharedPtr<int,1>_>,RequiredArgs::T0RequiredArgs> *this,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SListView<TSharedPtr<int,1>_>,RequiredArgs::T0RequiredArgs> *pTVar7;
  SListView<TSharedPtr<int,1>_> *pSVar8;
  SListView<TSharedPtr<int,1>_> *local_28;
  FSharedReferencer<1> local_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (SListView<TSharedPtr<int,1>_> *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0xa10);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pSVar8 = (SListView<TSharedPtr<int,1>_> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__SListView_V__TSharedPtr_H_00_____00_SharedPointerInternals__6B_
    ;
    SListView<TSharedPtr<int,1>_>::SListView<TSharedPtr<int,1>_>
              ((SListView<TSharedPtr<int,1>_> *)(pTVar6 + 1),List);
    pSVar8 = (SListView<TSharedPtr<int,1>_> *)(pTVar6 + 1);
    if (pSVar8 == (SListView<TSharedPtr<int,1>_> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SListView<TSharedPtr<int,1>_>,RequiredArgs::T0RequiredArgs> *)
                 (*pcVar4)();
        return pTVar7;
      }
      goto LAB_142e028d1;
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
LAB_142e028d1:
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = pSVar8;
  local_20.ReferenceController = pTVar6;
  if (this != (TSlateDecl<SListView<TSharedPtr<int,1>_>,RequiredArgs::T0RequiredArgs> *)&local_28) {
    (this->_Widget).Object = pSVar8;
    local_28 = (SListView<TSharedPtr<int,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  if ((this->_Widget).Object == (SListView<TSharedPtr<int,1>_> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SListView<TSharedPtr<int,1>_>,RequiredArgs::T0RequiredArgs> *)(*pcVar4)()
      ;
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0xa00);
  return this;
}

// TSlateDecl<SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,RequiredArgs::T0RequiredArgs> @ 142e02990

TSlateDecl<SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,RequiredArgs::T0RequiredArgs> *
__thiscall
TSlateDecl<SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,RequiredArgs::T0RequiredArgs>
           *this,char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,RequiredArgs::T0RequiredArgs>
  *pTVar7;
  SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_> *pSVar8;
  SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_> *local_28;
  FSharedReferencer<1> local_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_> *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0xa10);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pSVar8 = (SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__SListView_V__TSharedPtr_UFNavigationSimulationWidgetNode___00_____00_SharedPointerInternals__6B_
    ;
    SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_>::
    SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_>
              ((SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_> *)(pTVar6 + 1),List);
    pSVar8 = (SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_> *)(pTVar6 + 1);
    if (pSVar8 == (SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,RequiredArgs::T0RequiredArgs>
                  *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_142e02ab1;
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
LAB_142e02ab1:
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = pSVar8;
  local_20.ReferenceController = pTVar6;
  if (this != (TSlateDecl<SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,RequiredArgs::T0RequiredArgs>
               *)&local_28) {
    (this->_Widget).Object = pSVar8;
    local_28 = (SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  if ((this->_Widget).Object == (SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,RequiredArgs::T0RequiredArgs>
                *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0xa00);
  return this;
}

// TSlateDecl<SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,RequiredArgs::T0RequiredArgs> @ 142e02b70

TSlateDecl<SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,RequiredArgs::T0RequiredArgs>
* __thiscall
TSlateDecl<SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,RequiredArgs::T0RequiredArgs>
::
TSlateDecl<SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,RequiredArgs::T0RequiredArgs>
           *this,char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,RequiredArgs::T0RequiredArgs>
  *pTVar7;
  SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *pSVar8;
  SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *local_28;
  FSharedReferencer<1> local_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object =
       (SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0xa10);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pSVar8 = (SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__SListView_V__TSharedPtr_UFWidgetSnapshotTarget_WidgetReflectorImpl___00_____00_SharedPointerInternals__6B_
    ;
    SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::
    SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>
              ((SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *)(pTVar6 + 1),
               List);
    pSVar8 = (SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *)(pTVar6 + 1);
    if (pSVar8 == (SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,RequiredArgs::T0RequiredArgs>
                  *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_142e02c91;
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
LAB_142e02c91:
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = pSVar8;
  local_20.ReferenceController = pTVar6;
  if (this != (TSlateDecl<SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,RequiredArgs::T0RequiredArgs>
               *)&local_28) {
    (this->_Widget).Object = pSVar8;
    local_28 = (SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  if ((this->_Widget).Object ==
      (SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,RequiredArgs::T0RequiredArgs>
                *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0xa00);
  return this;
}

// TSlateDecl<SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T0RequiredArgs> @ 142e02d50

TSlateDecl<SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T0RequiredArgs> *
__thiscall
TSlateDecl<SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T0RequiredArgs>
           *this,char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T0RequiredArgs>
  *pTVar7;
  SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_> *pSVar8;
  SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_> *local_28;
  FSharedReferencer<1> local_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_> *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0xa10);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pSVar8 = (SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__SListView_V__TSharedPtr_VFWidgetReflectorNodeBase___00_____00_SharedPointerInternals__6B_
    ;
    SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_>::
    SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_>
              ((SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_> *)(pTVar6 + 1),List);
    pSVar8 = (SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_> *)(pTVar6 + 1);
    if (pSVar8 == (SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T0RequiredArgs>
                  *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_142e02e71;
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
LAB_142e02e71:
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = pSVar8;
  local_20.ReferenceController = pTVar6;
  if (this != (TSlateDecl<SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T0RequiredArgs>
               *)&local_28) {
    (this->_Widget).Object = pSVar8;
    local_28 = (SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  if ((this->_Widget).Object == (SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T0RequiredArgs>
                *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0xa00);
  return this;
}

// TSlateDecl<SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,RequiredArgs::T0RequiredArgs> @ 142e02f30

TSlateDecl<SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,RequiredArgs::T0RequiredArgs>
* __thiscall
TSlateDecl<SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,RequiredArgs::T0RequiredArgs>
::
TSlateDecl<SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,RequiredArgs::T0RequiredArgs>
           *this,char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,RequiredArgs::T0RequiredArgs>
  *pTVar7;
  SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_> *pSVar8;
  SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_> *local_28;
  FSharedReferencer<1> local_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object =
       (SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_> *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0xa10);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pSVar8 = (SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_> *)
             &DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__SListView_V__TSharedRef_UFIntermediateResultNode_WidgetHittestGridInternal___00_____00_SharedPointerInternals__6B_
    ;
    SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>::
    SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>
              ((SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_> *)
               (pTVar6 + 1),List);
    pSVar8 = (SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_> *)
             (pTVar6 + 1);
    if (pSVar8 == (SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_> *)
                  0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,RequiredArgs::T0RequiredArgs>
                  *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_142e03051;
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
LAB_142e03051:
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = pSVar8;
  local_20.ReferenceController = pTVar6;
  if (this != (TSlateDecl<SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,RequiredArgs::T0RequiredArgs>
               *)&local_28) {
    (this->_Widget).Object = pSVar8;
    local_28 = (SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  if ((this->_Widget).Object ==
      (SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,RequiredArgs::T0RequiredArgs>
                *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0xa00);
  return this;
}

// TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs> @ 142e03110

/* WARNING: Enum "Type": Some values do not have unique names */

TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs> *this,char *param_1,
          char *param_2,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs> *pTVar7;
  SSpinBox<float> *pSVar8;
  SSpinBox<float> *local_28;
  FSharedReferencer<1> local_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (SSpinBox<float> *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0x710);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pSVar8 = (SSpinBox<float> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_V__SSpinBox_M___00_SharedPointerInternals__6B_;
    SSpinBox<float>::SSpinBox<float>((SSpinBox<float> *)(pTVar6 + 1));
    pSVar8 = (SSpinBox<float> *)(pTVar6 + 1);
    if (pSVar8 == (SSpinBox<float> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_142e0322f;
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
LAB_142e0322f:
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = pSVar8;
  local_20.ReferenceController = pTVar6;
  if (this != (TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs> *)&local_28) {
    (this->_Widget).Object = pSVar8;
    local_28 = (SSpinBox<float> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  if ((this->_Widget).Object == (SSpinBox<float> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x700);
  return this;
}

// TSlateDecl<STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T0RequiredArgs> @ 142e032f0

TSlateDecl<STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T0RequiredArgs> *
__thiscall
TSlateDecl<STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T0RequiredArgs>::
TSlateDecl<STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T0RequiredArgs>
           *this,char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  TTypeCompatibleBytes<STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_>_> *pTVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  TIntrusiveReferenceController<STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_>,1> *pTVar8;
  TSlateDecl<STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T0RequiredArgs>
  *pTVar9;
  STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_> *local_28;
  FSharedReferencer<1> local_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_> *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar8 = SharedPointerInternals::
           NewIntrusiveReferenceController<1,STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_>_>();
  pTVar1 = &pTVar8->ObjectStorage;
  if (pTVar1 == (TTypeCompatibleBytes<STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TSlateDecl<STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T0RequiredArgs>
                *)(*pcVar6)();
      return pTVar9;
    }
  }
  else if (((*(longlong *)((pTVar8->ObjectStorage).Pad + 8) == 0) ||
           (lVar4 = *(longlong *)((pTVar8->ObjectStorage).Pad + 0x10), lVar4 == 0)) ||
          (*(int *)(lVar4 + 8) < 1)) {
    if (pTVar8 != (TIntrusiveReferenceController<STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_>,1>
                   *)0x0) {
      LOCK();
      *(int *)&pTVar8->_padding_ = (int)pTVar8->_padding_ + 1;
      UNLOCK();
    }
    *(TTypeCompatibleBytes<STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_>_> **)
     ((pTVar8->ObjectStorage).Pad + 8) = pTVar1;
    if (pTVar8 != *(TIntrusiveReferenceController<STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_>,1>
                    **)((pTVar8->ObjectStorage).Pad + 0x10)) {
      if (pTVar8 != (TIntrusiveReferenceController<STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_>,1>
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
      *(TIntrusiveReferenceController<STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_>,1> **)
       ((pTVar8->ObjectStorage).Pad + 0x10) = pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pTVar8);
  }
  if (pTVar8 != (TIntrusiveReferenceController<STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_>,1>
                 *)0x0) {
    LOCK();
    *(int *)&pTVar8->_padding_ = (int)pTVar8->_padding_ + 1;
    UNLOCK();
  }
  local_28 = (STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_> *)pTVar1;
  local_20.ReferenceController = (TReferenceControllerBase<1> *)pTVar8;
  if (this != (TSlateDecl<STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T0RequiredArgs>
               *)&local_28) {
    (this->_Widget).Object = (STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_> *)pTVar1;
    local_28 = (STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pTVar8);
  if (((this->_Widget).Object == (STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_> *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pTVar9 = (TSlateDecl<STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T0RequiredArgs>
              *)(*pcVar6)();
    return pTVar9;
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0xb00);
  return this;
}

// TSlateDecl<SAtlasVisualizerPanel,RequiredArgs::T0RequiredArgs> @ 142e03490

TSlateDecl<SAtlasVisualizerPanel,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SAtlasVisualizerPanel,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SAtlasVisualizerPanel,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SAtlasVisualizerPanel,RequiredArgs::T0RequiredArgs> *this,char *param_1,
          char *param_2,int param_3,T0RequiredArgs *param_4)

{
  atomic<int> *paVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSlateDecl<SAtlasVisualizerPanel,RequiredArgs::T0RequiredArgs> *pTVar5;
  atomic<int> *this_00;
  TReferenceControllerBase<1> *pTVar6;
  undefined1 local_48 [24];
  TReferenceControllerBase<1> *pTStack_30;
  
  pTVar6 = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SAtlasVisualizerPanel *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_RequiredArgs = param_4;
  pTVar4 = ::operator_new(0x2e0);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6 = pTVar4 + 1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    this_00 = &pTVar4[1].SharedReferenceCount;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VSAtlasVisualizerPanel___00_SharedPointerInternals__6B_
    ;
    pTVar6->_padding_ = (longlong)&___7IScrollableZoomable__6B_;
    SPanel::SPanel((SPanel *)this_00);
    paVar1 = &pTVar4[0x24].SharedReferenceCount;
    *(undefined4 *)&pTVar4[0x24]._padding_ = 0x3f800000;
    *(undefined1 *)((longlong)&pTVar4[0x24]._padding_ + 4) = 1;
    pTVar6->_padding_ = (longlong)&SAtlasVisualizerPanel::_vftable__for__IScrollableZoomable__;
    *(undefined ***)this_00 = &SAtlasVisualizerPanel::_vftable__for__SPanel__;
    pTVar4[0x23]._padding_ = 0;
    pTVar4[0x23].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[0x23].WeakReferenceCount = (atomic<int>)0x0;
    if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
      this_00 = (atomic<int> *)0x0;
    }
    *(undefined ***)&paVar1->field_0x0 = &___7FChildren__6B_;
    pTVar4[0x25]._padding_ = (longlong)this_00;
    ::FName::FName((FName *)&pTVar4[0x25].SharedReferenceCount,"Children");
    *(undefined2 *)&pTVar4[0x26]._padding_ = 0xdc00;
    if ((this_00 == (atomic<int> *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InOwner",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\ChildrenBase.h"
                           ,0x21,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSlateDecl<SAtlasVisualizerPanel,RequiredArgs::T0RequiredArgs> *)(*pcVar2)();
      return pTVar5;
    }
    FSlotBase::FSlotBase((FSlotBase *)&pTVar4[0x26].SharedReferenceCount,(FChildren *)paVar1);
    *(undefined ***)&paVar1->field_0x0 = &FSingleWidgetChildrenWithSlot::_vftable__for__FChildren__;
    *(undefined ***)&pTVar4[0x26].SharedReferenceCount =
         &FSingleWidgetChildrenWithSlot::_vftable__for__TSlotBase<FSingleWidgetChildrenWithSlot>__;
    FScrollyZoomy::FScrollyZoomy((FScrollyZoomy *)&pTVar4[0x28].SharedReferenceCount,false);
    pTVar6 = pTVar4;
  }
  TSharedRef<SAtlasVisualizerPanel,1>::TSharedRef<SAtlasVisualizerPanel,1>
            ((TSharedRef<SAtlasVisualizerPanel,1> *)(local_48 + 0x10),
             (SAtlasVisualizerPanel *)(pTVar6 + 1),pTVar6);
  local_48._0_8_ = local_48._16_8_;
  local_48._8_8_ = pTStack_30;
  if (pTStack_30 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_30->SharedReferenceCount = (atomic<int>)((int)pTStack_30->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this != (TSlateDecl<SAtlasVisualizerPanel,RequiredArgs::T0RequiredArgs> *)local_48) {
    (this->_Widget).Object = (SAtlasVisualizerPanel *)local_48._16_8_;
    local_48._0_8_ = (SAtlasVisualizerPanel *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,(FSharedReferencer<1> *)(local_48 + 8));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_48._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  if (((this->_Widget).Object == (SAtlasVisualizerPanel *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TSlateDecl<SAtlasVisualizerPanel,RequiredArgs::T0RequiredArgs> *)(*pcVar2)();
    return pTVar5;
  }
  SWidget::SetDebugInfo
            ((SWidget *)&((this->_Widget).Object)->_padding_,param_1,param_2,param_3,0x2d0);
  return this;
}

// TSlateDecl<SNavigationSimulationListInternal::SDetailView,RequiredArgs::T0RequiredArgs> @ 142e036d0

TSlateDecl<SNavigationSimulationListInternal::SDetailView,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SNavigationSimulationListInternal::SDetailView,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SNavigationSimulationListInternal::SDetailView,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SNavigationSimulationListInternal::SDetailView,RequiredArgs::T0RequiredArgs>
           *this,char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SNavigationSimulationListInternal::SDetailView,RequiredArgs::T0RequiredArgs> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  SDetailView *pSVar9;
  SDetailView *local_38;
  FSharedReferencer<1> local_30;
  
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SDetailView *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_RequiredArgs = param_4;
  pTVar6 = ::operator_new(0x310);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pSVar9 = (SDetailView *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VSDetailView_SNavigationSimulationListInternal___00_SharedPointerInternals__6B_
    ;
    memset(pTVar6 + 1,0,0x300);
    SCompoundWidget::SCompoundWidget((SCompoundWidget *)(pTVar6 + 1));
    pTVar6[1]._padding_ = (longlong)&___7SDetailView_SNavigationSimulationListInternal__6B_;
    pSVar9 = (SDetailView *)(pTVar6 + 1);
    pTVar6[0x2b].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2b].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2c]._padding_ = 0;
    pTVar6[0x2d]._padding_ = 0;
    pTVar6[0x2d].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2d].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2e]._padding_ = 0;
    pTVar6[0x2e].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2e].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar6[0x2f]._padding_ = 0;
    pTVar6[0x2f].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2f].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x30]._padding_ = 0;
    pTVar6[0x30].SharedReferenceCount = (atomic<int>)0x0;
    pTVar8 = pTVar6;
    if (pSVar9 == (SDetailView *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SNavigationSimulationListInternal::SDetailView,RequiredArgs::T0RequiredArgs>
                  *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_142e03850;
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
LAB_142e03850:
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = pSVar9;
  local_30.ReferenceController = pTVar8;
  if (this != (TSlateDecl<SNavigationSimulationListInternal::SDetailView,RequiredArgs::T0RequiredArgs>
               *)&local_38) {
    (this->_Widget).Object = pSVar9;
    local_38 = (SDetailView *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  if ((this->_Widget).Object == (SDetailView *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SNavigationSimulationListInternal::SDetailView,RequiredArgs::T0RequiredArgs>
                *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x300);
  return this;
}

// TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<int,1>_>,1>_&&>_> @ 142e03910

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<int,1>_>,1>_&&>_>
* __thiscall
TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<int,1>_>,1>_&&>_>
::
TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<int,1>_>,1>_&&>_>
          (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<int,1>_>,1>_&&>_>
           *this,char *param_1,char *param_2,int param_3,
          T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<int,1>_>,1>_&&> *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<int,1>_>,1>_&&>_>
  *pTVar7;
  SExpanderArrow *pSVar8;
  undefined1 local_38 [24];
  TReferenceControllerBase<1> *pTStack_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (SExpanderArrow *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0x2f0);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    local_38._16_8_ = ___xmm_00000000000000000000000000000010;
    pTStack_20 = _UNK_150651568;
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
    local_38._16_8_ = pSVar8;
    pTStack_20 = pTVar6;
    if (pSVar8 == (SExpanderArrow *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<int,1>_>,1>_&&>_>
                  *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_142e03a34;
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
LAB_142e03a34:
  local_38._0_8_ = local_38._16_8_;
  local_38._8_8_ = pTStack_20;
  if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this != (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<int,1>_>,1>_&&>_>
               *)local_38) {
    (this->_Widget).Object = (SExpanderArrow *)local_38._16_8_;
    local_38._0_8_ = (SExpanderArrow *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,(FSharedReferencer<1> *)(local_38 + 8));
  }
  TSharedPtr<SExpanderArrow,1>::~TSharedPtr<SExpanderArrow,1>
            ((TSharedPtr<SExpanderArrow,1> *)local_38);
  TSharedRef<SExpanderArrow,1>::~TSharedRef<SExpanderArrow,1>
            ((TSharedRef<SExpanderArrow,1> *)(local_38 + 0x10));
  if ((this->_Widget).Object == (SExpanderArrow *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<int,1>_>,1>_&&>_>
                *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x2e0);
  return this;
}

// TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,1>_&&>_> @ 142e03b00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,1>_&&>_>
* __thiscall
TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,1>_&&>_>
::
TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,1>_&&>_>
          (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,1>_&&>_>
           *this,char *param_1,char *param_2,int param_3,
          T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,1>_&&>
          *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,1>_&&>_>
  *pTVar7;
  SExpanderArrow *pSVar8;
  undefined1 local_38 [24];
  TReferenceControllerBase<1> *pTStack_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (SExpanderArrow *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0x2f0);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    local_38._16_8_ = ___xmm_00000000000000000000000000000010;
    pTStack_20 = _UNK_150651568;
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
    local_38._16_8_ = pSVar8;
    pTStack_20 = pTVar6;
    if (pSVar8 == (SExpanderArrow *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,1>_&&>_>
                  *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_142e03c24;
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
LAB_142e03c24:
  local_38._0_8_ = local_38._16_8_;
  local_38._8_8_ = pTStack_20;
  if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this != (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,1>_&&>_>
               *)local_38) {
    (this->_Widget).Object = (SExpanderArrow *)local_38._16_8_;
    local_38._0_8_ = (SExpanderArrow *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,(FSharedReferencer<1> *)(local_38 + 8));
  }
  TSharedPtr<SExpanderArrow,1>::~TSharedPtr<SExpanderArrow,1>
            ((TSharedPtr<SExpanderArrow,1> *)local_38);
  TSharedRef<SExpanderArrow,1>::~TSharedRef<SExpanderArrow,1>
            ((TSharedRef<SExpanderArrow,1> *)(local_38 + 0x10));
  if ((this->_Widget).Object == (SExpanderArrow *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,1>_&&>_>
                *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x2e0);
  return this;
}

// TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FWidgetListEntry,1>_>,1>_&&>_> @ 142e03cf0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FWidgetListEntry,1>_>,1>_&&>_>
* __thiscall
TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FWidgetListEntry,1>_>,1>_&&>_>
::
TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FWidgetListEntry,1>_>,1>_&&>_>
          (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FWidgetListEntry,1>_>,1>_&&>_>
           *this,char *param_1,char *param_2,int param_3,
          T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FWidgetListEntry,1>_>,1>_&&> *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FWidgetListEntry,1>_>,1>_&&>_>
  *pTVar7;
  SExpanderArrow *pSVar8;
  undefined1 local_38 [24];
  TReferenceControllerBase<1> *pTStack_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (SExpanderArrow *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0x2f0);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    local_38._16_8_ = ___xmm_00000000000000000000000000000010;
    pTStack_20 = _UNK_150651568;
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
    local_38._16_8_ = pSVar8;
    pTStack_20 = pTVar6;
    if (pSVar8 == (SExpanderArrow *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FWidgetListEntry,1>_>,1>_&&>_>
                  *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_142e03e14;
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
LAB_142e03e14:
  local_38._0_8_ = local_38._16_8_;
  local_38._8_8_ = pTStack_20;
  if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this != (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FWidgetListEntry,1>_>,1>_&&>_>
               *)local_38) {
    (this->_Widget).Object = (SExpanderArrow *)local_38._16_8_;
    local_38._0_8_ = (SExpanderArrow *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,(FSharedReferencer<1> *)(local_38 + 8));
  }
  TSharedPtr<SExpanderArrow,1>::~TSharedPtr<SExpanderArrow,1>
            ((TSharedPtr<SExpanderArrow,1> *)local_38);
  TSharedRef<SExpanderArrow,1>::~TSharedRef<SExpanderArrow,1>
            ((TSharedRef<SExpanderArrow,1> *)(local_38 + 0x10));
  if ((this->_Widget).Object == (SExpanderArrow *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FWidgetListEntry,1>_>,1>_&&>_>
                *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x2e0);
  return this;
}

// TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1>_&&>_> @ 142e03ee0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1>_&&>_>
* __thiscall
TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1>_&&>_>
::
TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1>_&&>_>
          (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1>_&&>_>
           *this,char *param_1,char *param_2,int param_3,
          T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1>_&&>
          *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1>_&&>_>
  *pTVar7;
  SExpanderArrow *pSVar8;
  undefined1 local_38 [24];
  TReferenceControllerBase<1> *pTStack_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (SExpanderArrow *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0x2f0);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    local_38._16_8_ = ___xmm_00000000000000000000000000000010;
    pTStack_20 = _UNK_150651568;
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
    local_38._16_8_ = pSVar8;
    pTStack_20 = pTVar6;
    if (pSVar8 == (SExpanderArrow *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1>_&&>_>
                  *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_142e04004;
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
LAB_142e04004:
  local_38._0_8_ = local_38._16_8_;
  local_38._8_8_ = pTStack_20;
  if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this != (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1>_&&>_>
               *)local_38) {
    (this->_Widget).Object = (SExpanderArrow *)local_38._16_8_;
    local_38._0_8_ = (SExpanderArrow *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,(FSharedReferencer<1> *)(local_38 + 8));
  }
  TSharedPtr<SExpanderArrow,1>::~TSharedPtr<SExpanderArrow,1>
            ((TSharedPtr<SExpanderArrow,1> *)local_38);
  TSharedRef<SExpanderArrow,1>::~TSharedRef<SExpanderArrow,1>
            ((TSharedRef<SExpanderArrow,1> *)(local_38 + 0x10));
  if ((this->_Widget).Object == (SExpanderArrow *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1>_&&>_>
                *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x2e0);
  return this;
}

// TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1>_&&>_> @ 142e040d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1>_&&>_>
* __thiscall
TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1>_&&>_>
::
TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1>_&&>_>
          (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1>_&&>_>
           *this,char *param_1,char *param_2,int param_3,
          T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1>_&&>
          *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1>_&&>_>
  *pTVar7;
  SExpanderArrow *pSVar8;
  undefined1 local_38 [24];
  TReferenceControllerBase<1> *pTStack_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (SExpanderArrow *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0x2f0);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    local_38._16_8_ = ___xmm_00000000000000000000000000000010;
    pTStack_20 = _UNK_150651568;
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
    local_38._16_8_ = pSVar8;
    pTStack_20 = pTVar6;
    if (pSVar8 == (SExpanderArrow *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1>_&&>_>
                  *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_142e041f4;
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
LAB_142e041f4:
  local_38._0_8_ = local_38._16_8_;
  local_38._8_8_ = pTStack_20;
  if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this != (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1>_&&>_>
               *)local_38) {
    (this->_Widget).Object = (SExpanderArrow *)local_38._16_8_;
    local_38._0_8_ = (SExpanderArrow *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,(FSharedReferencer<1> *)(local_38 + 8));
  }
  TSharedPtr<SExpanderArrow,1>::~TSharedPtr<SExpanderArrow,1>
            ((TSharedPtr<SExpanderArrow,1> *)local_38);
  TSharedRef<SExpanderArrow,1>::~TSharedRef<SExpanderArrow,1>
            ((TSharedRef<SExpanderArrow,1> *)(local_38 + 0x10));
  if ((this->_Widget).Object == (SExpanderArrow *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1>_&&>_>
                *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x2e0);
  return this;
}

// TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,1>_&&>_> @ 142e042c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,1>_&&>_>
* __thiscall
TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,1>_&&>_>
::
TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,1>_&&>_>
          (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,1>_&&>_>
           *this,char *param_1,char *param_2,int param_3,
          T1RequiredArgs<TSharedRef<STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,1>_&&>
          *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,1>_&&>_>
  *pTVar7;
  SExpanderArrow *pSVar8;
  undefined1 local_38 [24];
  TReferenceControllerBase<1> *pTStack_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (SExpanderArrow *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0x2f0);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    local_38._16_8_ = ___xmm_00000000000000000000000000000010;
    pTStack_20 = _UNK_150651568;
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
    local_38._16_8_ = pSVar8;
    pTStack_20 = pTVar6;
    if (pSVar8 == (SExpanderArrow *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,1>_&&>_>
                  *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_142e043e4;
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
LAB_142e043e4:
  local_38._0_8_ = local_38._16_8_;
  local_38._8_8_ = pTStack_20;
  if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this != (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,1>_&&>_>
               *)local_38) {
    (this->_Widget).Object = (SExpanderArrow *)local_38._16_8_;
    local_38._0_8_ = (SExpanderArrow *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,(FSharedReferencer<1> *)(local_38 + 8));
  }
  TSharedPtr<SExpanderArrow,1>::~TSharedPtr<SExpanderArrow,1>
            ((TSharedPtr<SExpanderArrow,1> *)local_38);
  TSharedRef<SExpanderArrow,1>::~TSharedRef<SExpanderArrow,1>
            ((TSharedRef<SExpanderArrow,1> *)(local_38 + 0x10));
  if ((this->_Widget).Object == (SExpanderArrow *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,1>_&&>_>
                *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x2e0);
  return this;
}

// TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>,1>_&&>_> @ 142e044b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>,1>_&&>_>
* __thiscall
TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>,1>_&&>_>
::
TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>,1>_&&>_>
          (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>,1>_&&>_>
           *this,char *param_1,char *param_2,int param_3,
          T1RequiredArgs<TSharedRef<STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>,1>_&&>
          *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>,1>_&&>_>
  *pTVar7;
  SExpanderArrow *pSVar8;
  undefined1 local_38 [24];
  TReferenceControllerBase<1> *pTStack_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (SExpanderArrow *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0x2f0);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    local_38._16_8_ = ___xmm_00000000000000000000000000000010;
    pTStack_20 = _UNK_150651568;
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
    local_38._16_8_ = pSVar8;
    pTStack_20 = pTVar6;
    if (pSVar8 == (SExpanderArrow *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>,1>_&&>_>
                  *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_142e045d4;
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
LAB_142e045d4:
  local_38._0_8_ = local_38._16_8_;
  local_38._8_8_ = pTStack_20;
  if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this != (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>,1>_&&>_>
               *)local_38) {
    (this->_Widget).Object = (SExpanderArrow *)local_38._16_8_;
    local_38._0_8_ = (SExpanderArrow *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,(FSharedReferencer<1> *)(local_38 + 8));
  }
  TSharedPtr<SExpanderArrow,1>::~TSharedPtr<SExpanderArrow,1>
            ((TSharedPtr<SExpanderArrow,1> *)local_38);
  TSharedRef<SExpanderArrow,1>::~TSharedRef<SExpanderArrow,1>
            ((TSharedRef<SExpanderArrow,1> *)(local_38 + 0x10));
  if ((this->_Widget).Object == (SExpanderArrow *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>,1>_&&>_>
                *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x2e0);
  return this;
}

// TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<SReflectorTreeWidgetItem,1>_&&>_> @ 142e046a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<SReflectorTreeWidgetItem,1>_&&>_>
* __thiscall
TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<SReflectorTreeWidgetItem,1>_&&>_>
::
TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<SReflectorTreeWidgetItem,1>_&&>_>
          (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<SReflectorTreeWidgetItem,1>_&&>_>
           *this,char *param_1,char *param_2,int param_3,
          T1RequiredArgs<TSharedRef<SReflectorTreeWidgetItem,1>_&&> *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<SReflectorTreeWidgetItem,1>_&&>_>
  *pTVar7;
  SExpanderArrow *pSVar8;
  undefined1 local_38 [24];
  TReferenceControllerBase<1> *pTStack_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (SExpanderArrow *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0x2f0);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    local_38._16_8_ = ___xmm_00000000000000000000000000000010;
    pTStack_20 = _UNK_150651568;
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
    local_38._16_8_ = pSVar8;
    pTStack_20 = pTVar6;
    if (pSVar8 == (SExpanderArrow *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<SReflectorTreeWidgetItem,1>_&&>_>
                  *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_142e047c4;
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
LAB_142e047c4:
  local_38._0_8_ = local_38._16_8_;
  local_38._8_8_ = pTStack_20;
  if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this != (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<SReflectorTreeWidgetItem,1>_&&>_>
               *)local_38) {
    (this->_Widget).Object = (SExpanderArrow *)local_38._16_8_;
    local_38._0_8_ = (SExpanderArrow *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,(FSharedReferencer<1> *)(local_38 + 8));
  }
  TSharedPtr<SExpanderArrow,1>::~TSharedPtr<SExpanderArrow,1>
            ((TSharedPtr<SExpanderArrow,1> *)local_38);
  TSharedRef<SExpanderArrow,1>::~TSharedRef<SExpanderArrow,1>
            ((TSharedRef<SExpanderArrow,1> *)(local_38 + 0x10));
  if ((this->_Widget).Object == (SExpanderArrow *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<SReflectorTreeWidgetItem,1>_&&>_>
                *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x2e0);
  return this;
}

// TSlateDecl<SGridPanel,RequiredArgs::T0RequiredArgs> @ 142e04890

TSlateDecl<SGridPanel,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SGridPanel,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SGridPanel,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SGridPanel,RequiredArgs::T0RequiredArgs> *this,char *param_1,char *param_2,
          int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SGridPanel,RequiredArgs::T0RequiredArgs> *pTVar7;
  SGridPanel *pSVar8;
  SGridPanel *local_28;
  FSharedReferencer<1> local_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (SGridPanel *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0x2a8);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pSVar8 = (SGridPanel *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)&___7__TIntrusiveReferenceController_VSGridPanel___00_SharedPointerInternals__6B_
    ;
    SGridPanel::SGridPanel((SGridPanel *)(pTVar6 + 1));
    pSVar8 = (SGridPanel *)(pTVar6 + 1);
    if (pSVar8 == (SGridPanel *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SGridPanel,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_142e049af;
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
LAB_142e049af:
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = pSVar8;
  local_20.ReferenceController = pTVar6;
  if (this != (TSlateDecl<SGridPanel,RequiredArgs::T0RequiredArgs> *)&local_28) {
    (this->_Widget).Object = pSVar8;
    local_28 = (SGridPanel *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  if ((this->_Widget).Object == (SGridPanel *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SGridPanel,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x298);
  return this;
}

// TSlateDecl<SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>::SListViewPinnedRowWidget,RequiredArgs::T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>,1>_&&,int_&,int_&>_> @ 142e04a70

TSlateDecl<SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>::SListViewPinnedRowWidget,RequiredArgs::T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>,1>_&&,int_&,int_&>_>
* __thiscall
TSlateDecl<SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>::SListViewPinnedRowWidget,RequiredArgs::T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>,1>_&&,int_&,int_&>_>
::
TSlateDecl<SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>::SListViewPinnedRowWidget,RequiredArgs::T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>,1>_&&,int_&,int_&>_>
          (TSlateDecl<SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>::SListViewPinnedRowWidget,RequiredArgs::T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>,1>_&&,int_&,int_&>_>
           *this,char *param_1,char *param_2,int param_3,
          T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>,1>_&&,int_&,int_&>
          *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>::SListViewPinnedRowWidget,RequiredArgs::T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>,1>_&&,int_&,int_&>_>
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
         ___7__TIntrusiveReferenceController_VSListViewPinnedRowWidget___SListView_V__TSharedRef_VFWidgetReflectorNodeBase___00_____00_SharedPointerInternals__6B_
    ;
    memset(pTVar6 + 1,0,0x2c8);
    SCompoundWidget::SCompoundWidget((SCompoundWidget *)(pTVar6 + 1));
    pTVar6[1]._padding_ =
         (longlong)
         &
         ___7SListViewPinnedRowWidget___SListView_V__TSharedRef_VFWidgetReflectorNodeBase___00____6B_
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
        pTVar7 = (TSlateDecl<SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>::SListViewPinnedRowWidget,RequiredArgs::T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>,1>_&&,int_&,int_&>_>
                  *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_142e04bc6;
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
LAB_142e04bc6:
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = pSVar9;
  local_30.ReferenceController = pTVar8;
  if (this != (TSlateDecl<SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>::SListViewPinnedRowWidget,RequiredArgs::T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>,1>_&&,int_&,int_&>_>
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
      pTVar7 = (TSlateDecl<SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>::SListViewPinnedRowWidget,RequiredArgs::T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>,1>_&&,int_&,int_&>_>
                *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x2c8);
  return this;
}

// TSlateDecl<SNavigationSimulationLiveList,RequiredArgs::T2RequiredArgs<TDelegate<void___cdecl(TWeakPtr<SWidget_const_,1>),FDefaultDelegateUserPolicy>_const_&,TDelegate<void___cdecl(TWeakPtr<SWidget_const_,1>),FDefaultDelegateUserPolicy>_const_&>_> @ 142e04c90

TSlateDecl<SNavigationSimulationLiveList,RequiredArgs::T2RequiredArgs<TDelegate<void___cdecl(TWeakPtr<SWidget_const_,1>),FDefaultDelegateUserPolicy>_const_&,TDelegate<void___cdecl(TWeakPtr<SWidget_const_,1>),FDefaultDelegateUserPolicy>_const_&>_>
* __thiscall
TSlateDecl<SNavigationSimulationLiveList,RequiredArgs::T2RequiredArgs<TDelegate<void___cdecl(TWeakPtr<SWidget_const_,1>),FDefaultDelegateUserPolicy>_const_&,TDelegate<void___cdecl(TWeakPtr<SWidget_const_,1>),FDefaultDelegateUserPolicy>_const_&>_>
::
TSlateDecl<SNavigationSimulationLiveList,RequiredArgs::T2RequiredArgs<TDelegate<void___cdecl(TWeakPtr<SWidget_const_,1>),FDefaultDelegateUserPolicy>_const_&,TDelegate<void___cdecl(TWeakPtr<SWidget_const_,1>),FDefaultDelegateUserPolicy>_const_&>_>
          (TSlateDecl<SNavigationSimulationLiveList,RequiredArgs::T2RequiredArgs<TDelegate<void___cdecl(TWeakPtr<SWidget_const_,1>),FDefaultDelegateUserPolicy>_const_&,TDelegate<void___cdecl(TWeakPtr<SWidget_const_,1>),FDefaultDelegateUserPolicy>_const_&>_>
           *this,char *param_1,char *param_2,int param_3,
          T2RequiredArgs<TDelegate<void___cdecl(TWeakPtr<SWidget_const_,1>),FDefaultDelegateUserPolicy>_const_&,TDelegate<void___cdecl(TWeakPtr<SWidget_const_,1>),FDefaultDelegateUserPolicy>_const_&>
          *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SNavigationSimulationLiveList,RequiredArgs::T2RequiredArgs<TDelegate<void___cdecl(TWeakPtr<SWidget_const_,1>),FDefaultDelegateUserPolicy>_const_&,TDelegate<void___cdecl(TWeakPtr<SWidget_const_,1>),FDefaultDelegateUserPolicy>_const_&>_>
  *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  SNavigationSimulationLiveList *pSVar9;
  SNavigationSimulationLiveList *local_38;
  FSharedReferencer<1> local_30;
  
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SNavigationSimulationLiveList *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_RequiredArgs = param_4;
  pTVar6 = ::operator_new(0x328);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pSVar9 = (SNavigationSimulationLiveList *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VSNavigationSimulationLiveList___00_SharedPointerInternals__6B_
    ;
    memset(pTVar6 + 1,0,0x318);
    SCompoundWidget::SCompoundWidget((SCompoundWidget *)(pTVar6 + 1));
    pSVar9 = (SNavigationSimulationLiveList *)(pTVar6 + 1);
    pTVar6[0x2c]._padding_ = 0;
    pTVar6[0x2c].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2c].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[1]._padding_ = (longlong)&___7SNavigationSimulationLiveList__6B_;
    pTVar6[0x2d]._padding_ = 0;
    pTVar6[0x2d].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2d].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2e]._padding_ = 0;
    pTVar6[0x2e].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2e].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2f].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2f].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x30]._padding_ = 0;
    pTVar6[0x30].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x31]._padding_ = 0;
    pTVar6[0x31].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x31].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar6[0x32]._padding_ = 0;
    pTVar8 = pTVar6;
    if (pSVar9 == (SNavigationSimulationLiveList *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SNavigationSimulationLiveList,RequiredArgs::T2RequiredArgs<TDelegate<void___cdecl(TWeakPtr<SWidget_const_,1>),FDefaultDelegateUserPolicy>_const_&,TDelegate<void___cdecl(TWeakPtr<SWidget_const_,1>),FDefaultDelegateUserPolicy>_const_&>_>
                  *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_142e04e1e;
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
LAB_142e04e1e:
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = pSVar9;
  local_30.ReferenceController = pTVar8;
  if (this != (TSlateDecl<SNavigationSimulationLiveList,RequiredArgs::T2RequiredArgs<TDelegate<void___cdecl(TWeakPtr<SWidget_const_,1>),FDefaultDelegateUserPolicy>_const_&,TDelegate<void___cdecl(TWeakPtr<SWidget_const_,1>),FDefaultDelegateUserPolicy>_const_&>_>
               *)&local_38) {
    (this->_Widget).Object = pSVar9;
    local_38 = (SNavigationSimulationLiveList *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  if ((this->_Widget).Object == (SNavigationSimulationLiveList *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SNavigationSimulationLiveList,RequiredArgs::T2RequiredArgs<TDelegate<void___cdecl(TWeakPtr<SWidget_const_,1>),FDefaultDelegateUserPolicy>_const_&,TDelegate<void___cdecl(TWeakPtr<SWidget_const_,1>),FDefaultDelegateUserPolicy>_const_&>_>
                *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x318);
  return this;
}

// TSlateDecl<SNavigationSimulationSnapshotList,RequiredArgs::T2RequiredArgs<TDelegate<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>_const_&,TDelegate<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>_const_&>_> @ 142e04ee0

TSlateDecl<SNavigationSimulationSnapshotList,RequiredArgs::T2RequiredArgs<TDelegate<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>_const_&,TDelegate<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>_const_&>_>
* __thiscall
TSlateDecl<SNavigationSimulationSnapshotList,RequiredArgs::T2RequiredArgs<TDelegate<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>_const_&,TDelegate<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>_const_&>_>
::
TSlateDecl<SNavigationSimulationSnapshotList,RequiredArgs::T2RequiredArgs<TDelegate<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>_const_&,TDelegate<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>_const_&>_>
          (TSlateDecl<SNavigationSimulationSnapshotList,RequiredArgs::T2RequiredArgs<TDelegate<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>_const_&,TDelegate<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>_const_&>_>
           *this,char *param_1,char *param_2,int param_3,
          T2RequiredArgs<TDelegate<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>_const_&,TDelegate<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>_const_&>
          *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SNavigationSimulationSnapshotList,RequiredArgs::T2RequiredArgs<TDelegate<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>_const_&,TDelegate<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>_const_&>_>
  *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  SNavigationSimulationSnapshotList *pSVar9;
  SNavigationSimulationSnapshotList *local_38;
  FSharedReferencer<1> local_30;
  
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SNavigationSimulationSnapshotList *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_RequiredArgs = param_4;
  pTVar6 = ::operator_new(0x328);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pSVar9 = (SNavigationSimulationSnapshotList *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VSNavigationSimulationSnapshotList___00_SharedPointerInternals__6B_
    ;
    memset(pTVar6 + 1,0,0x318);
    SCompoundWidget::SCompoundWidget((SCompoundWidget *)(pTVar6 + 1));
    pSVar9 = (SNavigationSimulationSnapshotList *)(pTVar6 + 1);
    pTVar6[0x2c]._padding_ = 0;
    pTVar6[0x2c].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2c].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[1]._padding_ = (longlong)&___7SNavigationSimulationSnapshotList__6B_;
    pTVar6[0x2d]._padding_ = 0;
    pTVar6[0x2d].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2d].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2e]._padding_ = 0;
    pTVar6[0x2e].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2e].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2f].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2f].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x30]._padding_ = 0;
    pTVar6[0x30].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x31]._padding_ = 0;
    pTVar6[0x31].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x31].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar6[0x32]._padding_ = 0;
    pTVar8 = pTVar6;
    if (pSVar9 == (SNavigationSimulationSnapshotList *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SNavigationSimulationSnapshotList,RequiredArgs::T2RequiredArgs<TDelegate<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>_const_&,TDelegate<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>_const_&>_>
                  *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_142e0506e;
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
LAB_142e0506e:
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = pSVar9;
  local_30.ReferenceController = pTVar8;
  if (this != (TSlateDecl<SNavigationSimulationSnapshotList,RequiredArgs::T2RequiredArgs<TDelegate<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>_const_&,TDelegate<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>_const_&>_>
               *)&local_38) {
    (this->_Widget).Object = pSVar9;
    local_38 = (SNavigationSimulationSnapshotList *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  if ((this->_Widget).Object == (SNavigationSimulationSnapshotList *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SNavigationSimulationSnapshotList,RequiredArgs::T2RequiredArgs<TDelegate<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>_const_&,TDelegate<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>_const_&>_>
                *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x318);
  return this;
}

// TSlateDecl<SReflectorToolTipWidget,RequiredArgs::T0RequiredArgs> @ 142e05130

TSlateDecl<SReflectorToolTipWidget,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SReflectorToolTipWidget,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SReflectorToolTipWidget,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SReflectorToolTipWidget,RequiredArgs::T0RequiredArgs> *this,char *param_1,
          char *param_2,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SReflectorToolTipWidget,RequiredArgs::T0RequiredArgs> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  SReflectorToolTipWidget *pSVar9;
  SReflectorToolTipWidget *local_38;
  FSharedReferencer<1> local_30;
  
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SReflectorToolTipWidget *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_RequiredArgs = param_4;
  pTVar6 = ::operator_new(0x2d8);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pSVar9 = (SReflectorToolTipWidget *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VSReflectorToolTipWidget___00_SharedPointerInternals__6B_
    ;
    memset(pTVar6 + 1,0,0x2c8);
    SCompoundWidget::SCompoundWidget((SCompoundWidget *)(pTVar6 + 1));
    pTVar6[1]._padding_ = (longlong)&___7SReflectorToolTipWidget__6B_;
    pTVar6[0x2b].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2b].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2c]._padding_ = 0;
    FText::FText((FText *)&pTVar6[0x2c].SharedReferenceCount);
    pSVar9 = (SReflectorToolTipWidget *)(pTVar6 + 1);
    pTVar8 = pTVar6;
    if (pSVar9 == (SReflectorToolTipWidget *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SReflectorToolTipWidget,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_142e05284;
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
LAB_142e05284:
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = pSVar9;
  local_30.ReferenceController = pTVar8;
  if (this != (TSlateDecl<SReflectorToolTipWidget,RequiredArgs::T0RequiredArgs> *)&local_38) {
    (this->_Widget).Object = pSVar9;
    local_38 = (SReflectorToolTipWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  if ((this->_Widget).Object == (SReflectorToolTipWidget *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SReflectorToolTipWidget,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x2c8);
  return this;
}

// TSlateDecl<SScrollableSnapshotImage,RequiredArgs::T0RequiredArgs> @ 142e05350

TSlateDecl<SScrollableSnapshotImage,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SScrollableSnapshotImage,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SScrollableSnapshotImage,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SScrollableSnapshotImage,RequiredArgs::T0RequiredArgs> *this,char *param_1,
          char *param_2,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SScrollableSnapshotImage,RequiredArgs::T0RequiredArgs> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  SScrollableSnapshotImage *pSVar9;
  SScrollableSnapshotImage *local_38;
  FSharedReferencer<1> local_30;
  
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SScrollableSnapshotImage *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_RequiredArgs = param_4;
  pTVar6 = ::operator_new(0x388);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pSVar9 = (SScrollableSnapshotImage *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VSScrollableSnapshotImage___00_SharedPointerInternals__6B_
    ;
    SCompoundWidget::SCompoundWidget((SCompoundWidget *)(pTVar6 + 1));
    pTVar6[0x2c]._padding_ = 0;
    pTVar6[1]._padding_ = (longlong)&SScrollableSnapshotImage::_vftable__for__SCompoundWidget__;
    pTVar6[0x2c].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2c].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined ***)&pTVar6[0x2b].SharedReferenceCount =
         &SScrollableSnapshotImage::_vftable__for__IScrollableZoomable__;
    FScrollyZoomy::FScrollyZoomy((FScrollyZoomy *)(pTVar6 + 0x2d),false);
    pSVar9 = (SScrollableSnapshotImage *)(pTVar6 + 1);
    pTVar6[0x32].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x32].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x33].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x33].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x34]._padding_ = 0;
    pTVar6[0x34].SharedReferenceCount = (atomic<int>)0x0;
    *(undefined1 *)&pTVar6[0x35]._padding_ = 0;
    pTVar6[0x35].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x35].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x36]._padding_ = 0;
    pTVar6[0x36].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x36].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x37]._padding_ = 0;
    pTVar6[0x37].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x37].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x38]._padding_ = 0;
    pTVar8 = pTVar6;
    if (pSVar9 == (SScrollableSnapshotImage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SScrollableSnapshotImage,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_142e054f0;
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
LAB_142e054f0:
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = pSVar9;
  local_30.ReferenceController = pTVar8;
  if (this != (TSlateDecl<SScrollableSnapshotImage,RequiredArgs::T0RequiredArgs> *)&local_38) {
    (this->_Widget).Object = pSVar9;
    local_38 = (SScrollableSnapshotImage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  if ((this->_Widget).Object == (SScrollableSnapshotImage *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SScrollableSnapshotImage,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x378);
  return this;
}

// TSlateDecl<SSlateOptions,RequiredArgs::T0RequiredArgs> @ 142e055b0

TSlateDecl<SSlateOptions,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SSlateOptions,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SSlateOptions,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SSlateOptions,RequiredArgs::T0RequiredArgs> *this,char *param_1,char *param_2,
          int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SSlateOptions,RequiredArgs::T0RequiredArgs> *pTVar7;
  SSlateOptions *pSVar8;
  SSlateOptions *local_28;
  FSharedReferencer<1> local_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (SSlateOptions *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0x2b8);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pSVar8 = (SSlateOptions *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VSSlateOptions___00_SharedPointerInternals__6B_;
    memset(pTVar6 + 1,0,0x2a8);
    SCompoundWidget::SCompoundWidget((SCompoundWidget *)(pTVar6 + 1));
    pSVar8 = (SSlateOptions *)(pTVar6 + 1);
    pTVar6[1]._padding_ = (longlong)&___7SSlateOptions__6B_;
    if (pSVar8 == (SSlateOptions *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SSlateOptions,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_142e056eb;
    }
  }
  if (((*(longlong *)&pSVar8->field_0x8 == 0) || (*(longlong *)&pSVar8->field_0x10 == 0)) ||
     (*(int *)(*(longlong *)&pSVar8->field_0x10 + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(SSlateOptions **)&pSVar8->field_0x8 = pSVar8;
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
LAB_142e056eb:
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = pSVar8;
  local_20.ReferenceController = pTVar6;
  if (this != (TSlateDecl<SSlateOptions,RequiredArgs::T0RequiredArgs> *)&local_28) {
    (this->_Widget).Object = pSVar8;
    local_28 = (SSlateOptions *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  if ((this->_Widget).Object == (SSlateOptions *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SSlateOptions,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x2a8);
  return this;
}

// TSlateDecl<SUniformGridPanel,RequiredArgs::T0RequiredArgs> @ 142e057b0

TSlateDecl<SUniformGridPanel,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SUniformGridPanel,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SUniformGridPanel,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SUniformGridPanel,RequiredArgs::T0RequiredArgs> *this,char *param_1,
          char *param_2,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SUniformGridPanel,RequiredArgs::T0RequiredArgs> *pTVar7;
  SUniformGridPanel *pSVar8;
  SUniformGridPanel *local_28;
  FSharedReferencer<1> local_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (SUniformGridPanel *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0x318);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pSVar8 = (SUniformGridPanel *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VSUniformGridPanel___00_SharedPointerInternals__6B_;
    SUniformGridPanel::SUniformGridPanel((SUniformGridPanel *)(pTVar6 + 1));
    pSVar8 = (SUniformGridPanel *)(pTVar6 + 1);
    if (pSVar8 == (SUniformGridPanel *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SUniformGridPanel,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_142e058cf;
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
LAB_142e058cf:
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = pSVar8;
  local_20.ReferenceController = pTVar6;
  if (this != (TSlateDecl<SUniformGridPanel,RequiredArgs::T0RequiredArgs> *)&local_28) {
    (this->_Widget).Object = pSVar8;
    local_28 = (SUniformGridPanel *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  if ((this->_Widget).Object == (SUniformGridPanel *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SUniformGridPanel,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x308);
  return this;
}

// TSlateDecl<SViewport,RequiredArgs::T0RequiredArgs> @ 142e05990

/* WARNING: Enum "Type": Some values do not have unique names */

TSlateDecl<SViewport,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SViewport,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SViewport,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SViewport,RequiredArgs::T0RequiredArgs> *this,char *param_1,char *param_2,
          int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SViewport,RequiredArgs::T0RequiredArgs> *pTVar7;
  SViewport *pSVar8;
  SViewport *local_28;
  FSharedReferencer<1> local_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (SViewport *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0x318);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pSVar8 = (SViewport *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)&___7__TIntrusiveReferenceController_VSViewport___00_SharedPointerInternals__6B_;
    SViewport::SViewport((SViewport *)(pTVar6 + 1));
    pSVar8 = (SViewport *)(pTVar6 + 1);
    if (pSVar8 == (SViewport *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SViewport,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_142e05aaf;
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
LAB_142e05aaf:
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = pSVar8;
  local_20.ReferenceController = pTVar6;
  if (this != (TSlateDecl<SViewport,RequiredArgs::T0RequiredArgs> *)&local_28) {
    (this->_Widget).Object = pSVar8;
    local_28 = (SViewport *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  if ((this->_Widget).Object == (SViewport *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SViewport,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x308);
  return this;
}

// TSlateDecl<SWidgetEventLog,RequiredArgs::T1RequiredArgs<TSharedRef<SWidget,1>_&&>_> @ 142e05b70

TSlateDecl<SWidgetEventLog,RequiredArgs::T1RequiredArgs<TSharedRef<SWidget,1>_&&>_> * __thiscall
TSlateDecl<SWidgetEventLog,RequiredArgs::T1RequiredArgs<TSharedRef<SWidget,1>_&&>_>::
TSlateDecl<SWidgetEventLog,RequiredArgs::T1RequiredArgs<TSharedRef<SWidget,1>_&&>_>
          (TSlateDecl<SWidgetEventLog,RequiredArgs::T1RequiredArgs<TSharedRef<SWidget,1>_&&>_> *this
          ,char *param_1,char *param_2,int param_3,T1RequiredArgs<TSharedRef<SWidget,1>_&&> *param_4
          )

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SWidgetEventLog,RequiredArgs::T1RequiredArgs<TSharedRef<SWidget,1>_&&>_> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  SWidgetEventLog *pSVar9;
  SWidgetEventLog *local_38;
  FSharedReferencer<1> local_30;
  
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SWidgetEventLog *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_RequiredArgs = param_4;
  pTVar6 = ::operator_new(0x368);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pSVar9 = (SWidgetEventLog *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VSWidgetEventLog___00_SharedPointerInternals__6B_;
    memset(pTVar6 + 1,0,0x358);
    SCompoundWidget::SCompoundWidget((SCompoundWidget *)(pTVar6 + 1));
    pTVar6[1]._padding_ = (longlong)&___7SWidgetEventLog__6B_;
    pSVar9 = (SWidgetEventLog *)(pTVar6 + 1);
    pTVar6[0x2b].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2b].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2c]._padding_ = 0;
    pTVar6[0x2c].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2c].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2d]._padding_ = 0;
    pTVar6[0x2d].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2f]._padding_ = 0;
    pTVar6[0x2f].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2f].WeakReferenceCount = (atomic<int>)0x80;
    pTVar6[0x31]._padding_ = 0;
    pTVar6[0x31].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x31].WeakReferenceCount = (atomic<int>)0x80;
    pTVar6[0x33]._padding_ = 0;
    pTVar6[0x33].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x33].WeakReferenceCount = (atomic<int>)0x80;
    pTVar6[0x35]._padding_ = 0;
    pTVar6[0x35].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x35].WeakReferenceCount = (atomic<int>)0x80;
    pTVar8 = pTVar6;
    if (pSVar9 == (SWidgetEventLog *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SWidgetEventLog,RequiredArgs::T1RequiredArgs<TSharedRef<SWidget,1>_&&>_>
                  *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_142e05d2d;
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
LAB_142e05d2d:
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = pSVar9;
  local_30.ReferenceController = pTVar8;
  if (this != (TSlateDecl<SWidgetEventLog,RequiredArgs::T1RequiredArgs<TSharedRef<SWidget,1>_&&>_> *
              )&local_38) {
    (this->_Widget).Object = pSVar9;
    local_38 = (SWidgetEventLog *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  if ((this->_Widget).Object == (SWidgetEventLog *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SWidgetEventLog,RequiredArgs::T1RequiredArgs<TSharedRef<SWidget,1>_&&>_>
                *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x358);
  return this;
}

// TSlateDecl<SWidgetHittestGrid,RequiredArgs::T1RequiredArgs<TSharedRef<SWidget,1>_&&>_> @ 142e05df0

/* WARNING: Enum "Type": Some values do not have unique names */

TSlateDecl<SWidgetHittestGrid,RequiredArgs::T1RequiredArgs<TSharedRef<SWidget,1>_&&>_> * __thiscall
TSlateDecl<SWidgetHittestGrid,RequiredArgs::T1RequiredArgs<TSharedRef<SWidget,1>_&&>_>::
TSlateDecl<SWidgetHittestGrid,RequiredArgs::T1RequiredArgs<TSharedRef<SWidget,1>_&&>_>
          (TSlateDecl<SWidgetHittestGrid,RequiredArgs::T1RequiredArgs<TSharedRef<SWidget,1>_&&>_>
           *this,char *param_1,char *param_2,int param_3,
          T1RequiredArgs<TSharedRef<SWidget,1>_&&> *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SWidgetHittestGrid,RequiredArgs::T1RequiredArgs<TSharedRef<SWidget,1>_&&>_> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  SWidgetHittestGrid *pSVar9;
  SWidgetHittestGrid *local_38;
  FSharedReferencer<1> local_30;
  
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SWidgetHittestGrid *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_RequiredArgs = param_4;
  pTVar6 = ::operator_new(0x3c8);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pSVar9 = (SWidgetHittestGrid *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VSWidgetHittestGrid___00_SharedPointerInternals__6B_;
    memset(pTVar6 + 1,0,0x3b8);
    SCompoundWidget::SCompoundWidget((SCompoundWidget *)(pTVar6 + 1));
    pTVar6[1]._padding_ = (longlong)&___7SWidgetHittestGrid__6B_;
    pTVar6[0x2b].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2b].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2c]._padding_ = 0;
    pTVar6[0x2c].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2d]._padding_ = 0;
    pTVar6[0x2d].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2d].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar6[0x2e]._padding_ = 0;
    pTVar6[0x2e].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2e].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2f]._padding_ = 0;
    pTVar6[0x30]._padding_ = 0;
    pTVar6[0x30].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x30].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x31].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x31].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x32]._padding_ = 0;
    pTVar6[0x32].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x32].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x33]._padding_ = 0;
    FText::FText((FText *)&pTVar6[0x33].SharedReferenceCount);
    FText::FText((FText *)&pTVar6[0x34].SharedReferenceCount);
    FText::FText((FText *)&pTVar6[0x35].SharedReferenceCount);
    FText::FText((FText *)&pTVar6[0x36].SharedReferenceCount);
    FText::FText((FText *)&pTVar6[0x37].SharedReferenceCount);
    FText::FText((FText *)&pTVar6[0x38].SharedReferenceCount);
    pSVar9 = (SWidgetHittestGrid *)(pTVar6 + 1);
    pTVar6[0x39].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x39].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x3a]._padding_ = 0;
    pTVar6[0x3a].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x3a].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x3b]._padding_ = 0;
    pTVar6[0x3b].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x3b].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x3c]._padding_ = 0;
    pTVar8 = pTVar6;
    if (pSVar9 == (SWidgetHittestGrid *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SWidgetHittestGrid,RequiredArgs::T1RequiredArgs<TSharedRef<SWidget,1>_&&>_>
                  *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_142e05ffe;
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
LAB_142e05ffe:
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = pSVar9;
  local_30.ReferenceController = pTVar8;
  if (this != (TSlateDecl<SWidgetHittestGrid,RequiredArgs::T1RequiredArgs<TSharedRef<SWidget,1>_&&>_>
               *)&local_38) {
    (this->_Widget).Object = pSVar9;
    local_38 = (SWidgetHittestGrid *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  if ((this->_Widget).Object == (SWidgetHittestGrid *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SWidgetHittestGrid,RequiredArgs::T1RequiredArgs<TSharedRef<SWidget,1>_&&>_>
                *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x3b8);
  return this;
}

// TSlateDecl<SWidgetList,RequiredArgs::T0RequiredArgs> @ 142e060c0

TSlateDecl<SWidgetList,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SWidgetList,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SWidgetList,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SWidgetList,RequiredArgs::T0RequiredArgs> *this,char *param_1,char *param_2,
          int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SWidgetList,RequiredArgs::T0RequiredArgs> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  SWidgetList *pSVar9;
  SWidgetList *local_38;
  FSharedReferencer<1> local_30;
  
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SWidgetList *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_RequiredArgs = param_4;
  pTVar6 = ::operator_new(800);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pSVar9 = (SWidgetList *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VSWidgetList___00_SharedPointerInternals__6B_;
    memset(pTVar6 + 1,0,0x310);
    SCompoundWidget::SCompoundWidget((SCompoundWidget *)(pTVar6 + 1));
    pTVar6[0x30].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x30].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[1]._padding_ = (longlong)&___7SWidgetList__6B_;
    pSVar9 = (SWidgetList *)(pTVar6 + 1);
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
    pTVar6[0x2f]._padding_ = 0;
    pTVar6[0x2f].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2f].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar6[0x30]._padding_ = 0;
    pTVar6[0x31]._padding_ = 0;
    *(undefined1 *)&pTVar6[0x31].SharedReferenceCount = 0;
    pTVar8 = pTVar6;
    if (pSVar9 == (SWidgetList *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SWidgetList,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_142e06255;
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
LAB_142e06255:
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = pSVar9;
  local_30.ReferenceController = pTVar8;
  if (this != (TSlateDecl<SWidgetList,RequiredArgs::T0RequiredArgs> *)&local_38) {
    (this->_Widget).Object = pSVar9;
    local_38 = (SWidgetList *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  if ((this->_Widget).Object == (SWidgetList *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SWidgetList,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x310);
  return this;
}

// TSlateDecl<SWidgetSnapshotVisualizer,RequiredArgs::T0RequiredArgs> @ 142e06320

TSlateDecl<SWidgetSnapshotVisualizer,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SWidgetSnapshotVisualizer,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SWidgetSnapshotVisualizer,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SWidgetSnapshotVisualizer,RequiredArgs::T0RequiredArgs> *this,char *param_1,
          char *param_2,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SWidgetSnapshotVisualizer,RequiredArgs::T0RequiredArgs> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  SWidgetSnapshotVisualizer *pSVar9;
  SWidgetSnapshotVisualizer *local_38;
  FSharedReferencer<1> local_30;
  
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SWidgetSnapshotVisualizer *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_RequiredArgs = param_4;
  pTVar6 = ::operator_new(0x2f0);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pSVar9 = (SWidgetSnapshotVisualizer *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VSWidgetSnapshotVisualizer___00_SharedPointerInternals__6B_
    ;
    memset(pTVar6 + 1,0,0x2e0);
    SCompoundWidget::SCompoundWidget((SCompoundWidget *)(pTVar6 + 1));
    pTVar6[1]._padding_ = (longlong)&___7SWidgetSnapshotVisualizer__6B_;
    pSVar9 = (SWidgetSnapshotVisualizer *)(pTVar6 + 1);
    pTVar6[0x2c]._padding_ = 0;
    pTVar6[0x2c].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2c].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2d]._padding_ = 0;
    pTVar6[0x2d].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2d].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2e]._padding_ = 0;
    pTVar6[0x2e].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2e].WeakReferenceCount = (atomic<int>)0x0;
    pTVar8 = pTVar6;
    if (pSVar9 == (SWidgetSnapshotVisualizer *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SWidgetSnapshotVisualizer,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_142e06484;
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
LAB_142e06484:
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = pSVar9;
  local_30.ReferenceController = pTVar8;
  if (this != (TSlateDecl<SWidgetSnapshotVisualizer,RequiredArgs::T0RequiredArgs> *)&local_38) {
    (this->_Widget).Object = pSVar9;
    local_38 = (SWidgetSnapshotVisualizer *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  if ((this->_Widget).Object == (SWidgetSnapshotVisualizer *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SWidgetSnapshotVisualizer,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x2e0);
  return this;
}

// ~TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> @ 142e0fd90

void __thiscall
TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::~TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->_Widget).SharedReferenceCount.ReferenceController);
  return;
}

// ~TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs> @ 142e0fda0

void __thiscall
TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>::
~TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->_Widget).SharedReferenceCount.ReferenceController);
  return;
}

// ~TSlateDecl<SColorBlock,RequiredArgs::T0RequiredArgs> @ 142e0fdb0

void __thiscall
TSlateDecl<SColorBlock,RequiredArgs::T0RequiredArgs>::
~TSlateDecl<SColorBlock,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SColorBlock,RequiredArgs::T0RequiredArgs> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&(this->_Widget).SharedReferenceCount);
  return;
}

// ~TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> @ 142e0fde0

void __thiscall
TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
~TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->_Widget).SharedReferenceCount.ReferenceController);
  return;
}

// ~TSlateDecl<SHyperlink,RequiredArgs::T0RequiredArgs> @ 142e0fdf0

void __thiscall
TSlateDecl<SHyperlink,RequiredArgs::T0RequiredArgs>::
~TSlateDecl<SHyperlink,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SHyperlink,RequiredArgs::T0RequiredArgs> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->_Widget).SharedReferenceCount.ReferenceController);
  return;
}

// ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> @ 142e0fe00

void __thiscall
TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->_Widget).SharedReferenceCount.ReferenceController);
  return;
}

// operator<<= @ 142e1ded0

TSharedRef<SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_>,1> * __thiscall
TSlateDecl<SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T0RequiredArgs>::
operator<<=(TSlateDecl<SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T0RequiredArgs>
            *this,TSharedRef<SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_>,1>
                  *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_> *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_>,1> *pTVar7;
  
  if ((this->_Widget).Object == (SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_>,1> *)
               (*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_>::Construct
            ((this->_Widget).Object,param_1);
  if ((this->_Widget).Object == (SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_>,1> *)
               (*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar5 = (**(code **)(pSVar2->_padding_ + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_142e1df71;
  }
  bVar6 = 0x20;
LAB_142e1df71:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar6;
  if ((this->_Widget).Object == (SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_>,1> *)
               (*pcVar3)();
      return pTVar7;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_>,1> *)
               (*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_> *)0x0;
  if (__return_storage_ptr__->Object ==
      (SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_>,1> *)
               (*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 142e1e040

TSharedRef<SComboRow<TSharedPtr<int,1>_>,1> * __thiscall
TSlateDecl<SComboRow<TSharedPtr<int,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
::operator<<=(TSlateDecl<SComboRow<TSharedPtr<int,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
              *this,TSharedRef<SComboRow<TSharedPtr<int,1>_>,1> *__return_storage_ptr__,
             FArguments *param_1)

{
  undefined1 *puVar1;
  STableRow<TSharedPtr<int,1>_> *this_00;
  TSharedRef<STableViewBase,1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  SWidget *pSVar4;
  SComboRow<TSharedPtr<int,1>_> *pSVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  bool bVar11;
  char cVar12;
  byte bVar13;
  TSharedRef<SComboRow<TSharedPtr<int,1>_>,1> *pTVar14;
  FArguments *pFVar15;
  undefined1 local_360 [8];
  ForAnyElementType FStack_358;
  int local_350;
  FDestructionSentinel local_348;
  SWidget *local_330;
  TReferenceControllerBase<1> *pTStack_328;
  FArguments local_320;
  
  if ((this->_Widget).Object == (SComboRow<TSharedPtr<int,1>_> *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar11) {
      pcVar6 = (code *)swi(3);
      pTVar14 = (TSharedRef<SComboRow<TSharedPtr<int,1>_>,1> *)(*pcVar6)();
      return pTVar14;
    }
  }
  SWidget::SWidgetConstruct
            ((SWidget *)&((this->_Widget).Object)->field_0x8,(FSlateBaseNamedArgs *)param_1);
  this_00 = (STableRow<TSharedPtr<int,1>_> *)(this->_Widget).Object;
  pTVar2 = this->_RequiredArgs->Arg0;
  pFVar15 = STableRow<TSharedPtr<int,1>_>::FArguments::FArguments(&local_320);
  pFVar15->_Style = param_1->_Style;
  fVar7 = (param_1->_Padding).Value.Left;
  fVar8 = (param_1->_Padding).Value.Top;
  fVar9 = (param_1->_Padding).Value.Right;
  fVar10 = (param_1->_Padding).Value.Bottom;
  bVar11 = (param_1->_Padding).bIsSet;
  local_350 = 0;
  local_360 = (undefined1  [8])0x0;
  FStack_358.Data = (FScriptContainerElement *)0x0;
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> *)local_360,
             &(param_1->_Padding).Getter);
  (pFVar15->_Padding).Value.Left = fVar7;
  (pFVar15->_Padding).Value.Top = fVar8;
  (pFVar15->_Padding).Value.Right = fVar9;
  (pFVar15->_Padding).Value.Bottom = fVar10;
  (pFVar15->_Padding).bIsSet = bVar11;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar15->_Padding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_360);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_360,
             (FWriteAccessScope *)&local_348);
  if ((local_350 != 0) && (FStack_358.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_358.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_358,0,0,0x10);
    local_350 = 0;
  }
  if (local_348.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_348.Accessor,&local_348);
  }
  if (FStack_358.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_358.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_360);
  pTVar3 = (param_1->_Content).Widget.SharedReferenceCount.ReferenceController;
  pSVar4 = (param_1->_Content).Widget.Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_330 = (pFVar15->_Content).Widget.Object;
  pTStack_328 = (pFVar15->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar15->_Content).Widget.Object = pSVar4;
  (pFVar15->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_328);
  STableRow<TSharedPtr<int,1>_>::ConstructInternal(this_00,pFVar15,pTVar2);
  (**(code **)(this_00->_padding_ + 0x80))
            (this_00,pTVar2->Object->TableViewMode,&pFVar15->_Padding,&pFVar15->_Content);
  STableRow<TSharedPtr<int,1>_>::FArguments::~FArguments(&local_320);
  if ((this->_Widget).Object == (SComboRow<TSharedPtr<int,1>_> *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar11) {
      pcVar6 = (code *)swi(3);
      pTVar14 = (TSharedRef<SComboRow<TSharedPtr<int,1>_>,1> *)(*pcVar6)();
      return pTVar14;
    }
  }
  pSVar5 = (this->_Widget).Object;
  if ((pSVar5->field_0x38 & 0x10) == 0) {
    cVar12 = (**(code **)(*(longlong *)&pSVar5->field_0x8 + 0x228))(&pSVar5->field_0x8);
    bVar13 = 0;
    if (cVar12 == '\0') goto LAB_142e1e276;
  }
  bVar13 = 0x20;
LAB_142e1e276:
  pSVar5->field_0x38 = pSVar5->field_0x38 & 0xdf;
  pSVar5->field_0x38 = pSVar5->field_0x38 | bVar13;
  if ((this->_Widget).Object == (SComboRow<TSharedPtr<int,1>_> *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar11) {
      pcVar6 = (code *)swi(3);
      pTVar14 = (TSharedRef<SComboRow<TSharedPtr<int,1>_>,1> *)(*pcVar6)();
      return pTVar14;
    }
  }
  puVar1 = &((this->_Widget).Object)->field_0x39;
  *puVar1 = *puVar1 | 4;
  if ((this->_Widget).Object == (SComboRow<TSharedPtr<int,1>_> *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x416,L"");
    if (bVar11) {
      pcVar6 = (code *)swi(3);
      pTVar14 = (TSharedRef<SComboRow<TSharedPtr<int,1>_>,1> *)(*pcVar6)();
      return pTVar14;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SComboRow<TSharedPtr<int,1>_> *)0x0;
  if (__return_storage_ptr__->Object == (SComboRow<TSharedPtr<int,1>_> *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x26c,L"");
    if (bVar11) {
      pcVar6 = (code *)swi(3);
      pTVar14 = (TSharedRef<SComboRow<TSharedPtr<int,1>_>,1> *)(*pcVar6)();
      return pTVar14;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 142e1e350

TSharedRef<SComboRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1> * __thiscall
TSlateDecl<SComboRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
::operator<<=(TSlateDecl<SComboRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
              *this,TSharedRef<SComboRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1>
                    *__return_storage_ptr__,FArguments *param_1)

{
  undefined1 *puVar1;
  STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *this_00;
  TSharedRef<STableViewBase,1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  SWidget *pSVar4;
  SComboRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *pSVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  bool bVar11;
  char cVar12;
  byte bVar13;
  TSharedRef<SComboRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1> *pTVar14;
  FArguments *pFVar15;
  undefined1 local_360 [8];
  ForAnyElementType FStack_358;
  int local_350;
  FDestructionSentinel local_348;
  SWidget *local_330;
  TReferenceControllerBase<1> *pTStack_328;
  FArguments local_320;
  
  if ((this->_Widget).Object ==
      (SComboRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar11) {
      pcVar6 = (code *)swi(3);
      pTVar14 = (TSharedRef<SComboRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1>
                 *)(*pcVar6)();
      return pTVar14;
    }
  }
  SWidget::SWidgetConstruct
            ((SWidget *)&((this->_Widget).Object)->field_0x8,(FSlateBaseNamedArgs *)param_1);
  this_00 = (STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *)
            (this->_Widget).Object;
  pTVar2 = this->_RequiredArgs->Arg0;
  pFVar15 = STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::FArguments::
            FArguments(&local_320);
  pFVar15->_Style = param_1->_Style;
  fVar7 = (param_1->_Padding).Value.Left;
  fVar8 = (param_1->_Padding).Value.Top;
  fVar9 = (param_1->_Padding).Value.Right;
  fVar10 = (param_1->_Padding).Value.Bottom;
  bVar11 = (param_1->_Padding).bIsSet;
  local_350 = 0;
  local_360 = (undefined1  [8])0x0;
  FStack_358.Data = (FScriptContainerElement *)0x0;
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> *)local_360,
             &(param_1->_Padding).Getter);
  (pFVar15->_Padding).Value.Left = fVar7;
  (pFVar15->_Padding).Value.Top = fVar8;
  (pFVar15->_Padding).Value.Right = fVar9;
  (pFVar15->_Padding).Value.Bottom = fVar10;
  (pFVar15->_Padding).bIsSet = bVar11;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar15->_Padding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_360);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_360,
             (FWriteAccessScope *)&local_348);
  if ((local_350 != 0) && (FStack_358.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_358.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_358,0,0,0x10);
    local_350 = 0;
  }
  if (local_348.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_348.Accessor,&local_348);
  }
  if (FStack_358.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_358.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_360);
  pTVar3 = (param_1->_Content).Widget.SharedReferenceCount.ReferenceController;
  pSVar4 = (param_1->_Content).Widget.Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_330 = (pFVar15->_Content).Widget.Object;
  pTStack_328 = (pFVar15->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar15->_Content).Widget.Object = pSVar4;
  (pFVar15->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_328);
  STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::ConstructInternal
            (this_00,pFVar15,pTVar2);
  (**(code **)(this_00->_padding_ + 0x80))
            (this_00,pTVar2->Object->TableViewMode,&pFVar15->_Padding,&pFVar15->_Content);
  STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::FArguments::~FArguments
            (&local_320);
  if ((this->_Widget).Object ==
      (SComboRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar11) {
      pcVar6 = (code *)swi(3);
      pTVar14 = (TSharedRef<SComboRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1>
                 *)(*pcVar6)();
      return pTVar14;
    }
  }
  pSVar5 = (this->_Widget).Object;
  if ((pSVar5->field_0x38 & 0x10) == 0) {
    cVar12 = (**(code **)(*(longlong *)&pSVar5->field_0x8 + 0x228))(&pSVar5->field_0x8);
    bVar13 = 0;
    if (cVar12 == '\0') goto LAB_142e1e586;
  }
  bVar13 = 0x20;
LAB_142e1e586:
  pSVar5->field_0x38 = pSVar5->field_0x38 & 0xdf;
  pSVar5->field_0x38 = pSVar5->field_0x38 | bVar13;
  if ((this->_Widget).Object ==
      (SComboRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar11) {
      pcVar6 = (code *)swi(3);
      pTVar14 = (TSharedRef<SComboRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1>
                 *)(*pcVar6)();
      return pTVar14;
    }
  }
  puVar1 = &((this->_Widget).Object)->field_0x39;
  *puVar1 = *puVar1 | 4;
  if ((this->_Widget).Object ==
      (SComboRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x416,L"");
    if (bVar11) {
      pcVar6 = (code *)swi(3);
      pTVar14 = (TSharedRef<SComboRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1>
                 *)(*pcVar6)();
      return pTVar14;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object =
       (SComboRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *)0x0;
  if (__return_storage_ptr__->Object ==
      (SComboRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x26c,L"");
    if (bVar11) {
      pcVar6 = (code *)swi(3);
      pTVar14 = (TSharedRef<SComboRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1>
                 *)(*pcVar6)();
      return pTVar14;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 142e1e660

TSharedRef<SComboRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1> * __thiscall
TSlateDecl<SComboRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
::operator<<=(TSlateDecl<SComboRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
              *this,TSharedRef<SComboRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1>
                    *__return_storage_ptr__,FArguments *param_1)

{
  undefined1 *puVar1;
  STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_> *this_00;
  TSharedRef<STableViewBase,1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  SWidget *pSVar4;
  SComboRow<TSharedPtr<FWidgetReflectorNodeBase,1>_> *pSVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  bool bVar11;
  char cVar12;
  byte bVar13;
  TSharedRef<SComboRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1> *pTVar14;
  FArguments *pFVar15;
  undefined1 local_360 [8];
  ForAnyElementType FStack_358;
  int local_350;
  FDestructionSentinel local_348;
  SWidget *local_330;
  TReferenceControllerBase<1> *pTStack_328;
  FArguments local_320;
  
  if ((this->_Widget).Object == (SComboRow<TSharedPtr<FWidgetReflectorNodeBase,1>_> *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar11) {
      pcVar6 = (code *)swi(3);
      pTVar14 = (TSharedRef<SComboRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1> *)(*pcVar6)();
      return pTVar14;
    }
  }
  SWidget::SWidgetConstruct
            ((SWidget *)&((this->_Widget).Object)->field_0x8,(FSlateBaseNamedArgs *)param_1);
  this_00 = (STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_> *)(this->_Widget).Object;
  pTVar2 = this->_RequiredArgs->Arg0;
  pFVar15 = STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>::FArguments::FArguments(&local_320);
  pFVar15->_Style = param_1->_Style;
  fVar7 = (param_1->_Padding).Value.Left;
  fVar8 = (param_1->_Padding).Value.Top;
  fVar9 = (param_1->_Padding).Value.Right;
  fVar10 = (param_1->_Padding).Value.Bottom;
  bVar11 = (param_1->_Padding).bIsSet;
  local_350 = 0;
  local_360 = (undefined1  [8])0x0;
  FStack_358.Data = (FScriptContainerElement *)0x0;
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> *)local_360,
             &(param_1->_Padding).Getter);
  (pFVar15->_Padding).Value.Left = fVar7;
  (pFVar15->_Padding).Value.Top = fVar8;
  (pFVar15->_Padding).Value.Right = fVar9;
  (pFVar15->_Padding).Value.Bottom = fVar10;
  (pFVar15->_Padding).bIsSet = bVar11;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar15->_Padding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_360);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_360,
             (FWriteAccessScope *)&local_348);
  if ((local_350 != 0) && (FStack_358.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_358.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_358,0,0,0x10);
    local_350 = 0;
  }
  if (local_348.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_348.Accessor,&local_348);
  }
  if (FStack_358.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_358.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_360);
  pTVar3 = (param_1->_Content).Widget.SharedReferenceCount.ReferenceController;
  pSVar4 = (param_1->_Content).Widget.Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_330 = (pFVar15->_Content).Widget.Object;
  pTStack_328 = (pFVar15->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar15->_Content).Widget.Object = pSVar4;
  (pFVar15->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_328);
  STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>::ConstructInternal(this_00,pFVar15,pTVar2);
  (**(code **)(this_00->_padding_ + 0x80))
            (this_00,pTVar2->Object->TableViewMode,&pFVar15->_Padding,&pFVar15->_Content);
  STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>::FArguments::~FArguments(&local_320);
  if ((this->_Widget).Object == (SComboRow<TSharedPtr<FWidgetReflectorNodeBase,1>_> *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar11) {
      pcVar6 = (code *)swi(3);
      pTVar14 = (TSharedRef<SComboRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1> *)(*pcVar6)();
      return pTVar14;
    }
  }
  pSVar5 = (this->_Widget).Object;
  if ((pSVar5->field_0x38 & 0x10) == 0) {
    cVar12 = (**(code **)(*(longlong *)&pSVar5->field_0x8 + 0x228))(&pSVar5->field_0x8);
    bVar13 = 0;
    if (cVar12 == '\0') goto LAB_142e1e896;
  }
  bVar13 = 0x20;
LAB_142e1e896:
  pSVar5->field_0x38 = pSVar5->field_0x38 & 0xdf;
  pSVar5->field_0x38 = pSVar5->field_0x38 | bVar13;
  if ((this->_Widget).Object == (SComboRow<TSharedPtr<FWidgetReflectorNodeBase,1>_> *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar11) {
      pcVar6 = (code *)swi(3);
      pTVar14 = (TSharedRef<SComboRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1> *)(*pcVar6)();
      return pTVar14;
    }
  }
  puVar1 = &((this->_Widget).Object)->field_0x39;
  *puVar1 = *puVar1 | 4;
  if ((this->_Widget).Object == (SComboRow<TSharedPtr<FWidgetReflectorNodeBase,1>_> *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x416,L"");
    if (bVar11) {
      pcVar6 = (code *)swi(3);
      pTVar14 = (TSharedRef<SComboRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1> *)(*pcVar6)();
      return pTVar14;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SComboRow<TSharedPtr<FWidgetReflectorNodeBase,1>_> *)0x0;
  if (__return_storage_ptr__->Object == (SComboRow<TSharedPtr<FWidgetReflectorNodeBase,1>_> *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x26c,L"");
    if (bVar11) {
      pcVar6 = (code *)swi(3);
      pTVar14 = (TSharedRef<SComboRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1> *)(*pcVar6)();
      return pTVar14;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 142e1e970

TSharedRef<SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,1> *
__thiscall
TSlateDecl<SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,RequiredArgs::T0RequiredArgs>
::operator<<=(TSlateDecl<SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,RequiredArgs::T0RequiredArgs>
              *this,TSharedRef<SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,1>
                    *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_> *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,1> *pTVar7
  ;
  
  if ((this->_Widget).Object ==
      (SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,1>
                *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>::Construct
            ((this->_Widget).Object,param_1);
  if ((this->_Widget).Object ==
      (SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,1>
                *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar5 = (**(code **)(pSVar2->_padding_ + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_142e1ea11;
  }
  bVar6 = 0x20;
LAB_142e1ea11:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar6;
  if ((this->_Widget).Object ==
      (SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,1>
                *)(*pcVar3)();
      return pTVar7;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object ==
      (SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,1>
                *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object =
       (SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_> *)0x0;
  if (__return_storage_ptr__->Object ==
      (SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,1>
                *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 142e1eae0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SSpinBox<float>,1> * __thiscall
TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs>::operator<<=
          (TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs> *this,
          TSharedRef<SSpinBox<float>,1> *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  SSpinBox<float> *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<SSpinBox<float>,1> *pTVar7;
  
  if ((this->_Widget).Object == (SSpinBox<float> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SSpinBox<float>,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  SSpinBox<float>::Construct((this->_Widget).Object,param_1);
  if ((this->_Widget).Object == (SSpinBox<float> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SSpinBox<float>,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar5 = (**(code **)(pSVar2->_padding_ + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_142e1eb81;
  }
  bVar6 = 0x20;
LAB_142e1eb81:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar6;
  if ((this->_Widget).Object == (SSpinBox<float> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SSpinBox<float>,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SSpinBox<float> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SSpinBox<float>,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SSpinBox<float> *)0x0;
  if (__return_storage_ptr__->Object == (SSpinBox<float> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SSpinBox<float>,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 142e1ec50

TSharedRef<STableRow<TSharedPtr<int,1>_>,1> * __thiscall
TSlateDecl<STableRow<TSharedPtr<int,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<int,1>_>,1>_&&>_>
::operator<<=(TSlateDecl<STableRow<TSharedPtr<int,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<int,1>_>,1>_&&>_>
              *this,TSharedRef<STableRow<TSharedPtr<int,1>_>,1> *__return_storage_ptr__,
             FArguments *param_1)

{
  byte *pbVar1;
  STableRow<TSharedPtr<int,1>_> *pSVar2;
  TSharedRef<SListView<TSharedPtr<int,1>_>,1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  SListView<TSharedPtr<int,1>_> *pSVar5;
  code *pcVar6;
  bool bVar7;
  char cVar8;
  byte bVar9;
  TSharedRef<STableRow<TSharedPtr<int,1>_>,1> *pTVar10;
  TSharedRef<STableViewBase,1> local_28;
  
  if ((this->_Widget).Object == (STableRow<TSharedPtr<int,1>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<STableRow<TSharedPtr<int,1>_>,1> *)(*pcVar6)();
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
  STableRow<TSharedPtr<int,1>_>::ConstructInternal(pSVar2,param_1,&local_28);
  (**(code **)(pSVar2->_padding_ + 0x80))
            (pSVar2,(int)pSVar5->_padding_,&param_1->_Padding,&param_1->_Content);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  if ((this->_Widget).Object == (STableRow<TSharedPtr<int,1>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<STableRow<TSharedPtr<int,1>_>,1> *)(*pcVar6)();
      return pTVar10;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar8 = (**(code **)(pSVar2->_padding_ + 0x228))(&pSVar2->_padding_);
    bVar9 = 0;
    if (cVar8 == '\0') goto LAB_142e1ed52;
  }
  bVar9 = 0x20;
LAB_142e1ed52:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar9;
  if ((this->_Widget).Object == (STableRow<TSharedPtr<int,1>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<STableRow<TSharedPtr<int,1>_>,1> *)(*pcVar6)();
      return pTVar10;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (STableRow<TSharedPtr<int,1>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<STableRow<TSharedPtr<int,1>_>,1> *)(*pcVar6)();
      return pTVar10;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (STableRow<TSharedPtr<int,1>_> *)0x0;
  if (__return_storage_ptr__->Object == (STableRow<TSharedPtr<int,1>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<STableRow<TSharedPtr<int,1>_>,1> *)(*pcVar6)();
      return pTVar10;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 142e1ee20

TSharedRef<STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,1> * __thiscall
TSlateDecl<STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,1>_&&>_>
::operator<<=(TSlateDecl<STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,1>_&&>_>
              *this,TSharedRef<STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,1>
                    *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_> *pSVar2;
  TSharedRef<SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_> *pSVar5;
  code *pcVar6;
  bool bVar7;
  char cVar8;
  byte bVar9;
  TSharedRef<STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,1> *pTVar10;
  TSharedRef<STableViewBase,1> local_28;
  
  if ((this->_Widget).Object == (STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,1> *)
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
  STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>::ConstructInternal
            (pSVar2,param_1,&local_28);
  (**(code **)(pSVar2->_padding_ + 0x80))
            (pSVar2,(int)pSVar5->_padding_,&param_1->_Padding,&param_1->_Content);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  if ((this->_Widget).Object == (STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,1> *)
                (*pcVar6)();
      return pTVar10;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar8 = (**(code **)(pSVar2->_padding_ + 0x228))(&pSVar2->_padding_);
    bVar9 = 0;
    if (cVar8 == '\0') goto LAB_142e1ef22;
  }
  bVar9 = 0x20;
LAB_142e1ef22:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar9;
  if ((this->_Widget).Object == (STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,1> *)
                (*pcVar6)();
      return pTVar10;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,1> *)
                (*pcVar6)();
      return pTVar10;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_> *)0x0;
  if (__return_storage_ptr__->Object ==
      (STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,1> *)
                (*pcVar6)();
      return pTVar10;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 142e1eff0

TSharedRef<STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1> * __thiscall
TSlateDecl<STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1>_&&>_>
::operator<<=(TSlateDecl<STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1>_&&>_>
              *this,TSharedRef<STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1>
                    *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *pSVar2;
  TSharedRef<SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *pSVar5;
  code *pcVar6;
  bool bVar7;
  char cVar8;
  byte bVar9;
  TSharedRef<STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1> *pTVar10;
  TSharedRef<STableViewBase,1> local_28;
  
  if ((this->_Widget).Object ==
      (STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1>
                 *)(*pcVar6)();
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
  STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::ConstructInternal
            (pSVar2,param_1,&local_28);
  (**(code **)(pSVar2->_padding_ + 0x80))
            (pSVar2,(int)pSVar5->_padding_,&param_1->_Padding,&param_1->_Content);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  if ((this->_Widget).Object ==
      (STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1>
                 *)(*pcVar6)();
      return pTVar10;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar8 = (**(code **)(pSVar2->_padding_ + 0x228))(&pSVar2->_padding_);
    bVar9 = 0;
    if (cVar8 == '\0') goto LAB_142e1f0f2;
  }
  bVar9 = 0x20;
LAB_142e1f0f2:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar9;
  if ((this->_Widget).Object ==
      (STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1>
                 *)(*pcVar6)();
      return pTVar10;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object ==
      (STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1>
                 *)(*pcVar6)();
      return pTVar10;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object =
       (STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *)0x0;
  if (__return_storage_ptr__->Object ==
      (STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1>
                 *)(*pcVar6)();
      return pTVar10;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 142e1f1c0

TSharedRef<STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1> * __thiscall
TSlateDecl<STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1>_&&>_>
::operator<<=(TSlateDecl<STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1>_&&>_>
              *this,TSharedRef<STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1>
                    *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_> *pSVar2;
  TSharedRef<SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_> *pSVar5;
  code *pcVar6;
  bool bVar7;
  char cVar8;
  byte bVar9;
  TSharedRef<STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1> *pTVar10;
  TSharedRef<STableViewBase,1> local_28;
  
  if ((this->_Widget).Object == (STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1> *)(*pcVar6)();
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
  STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>::ConstructInternal(pSVar2,param_1,&local_28);
  (**(code **)(pSVar2->_padding_ + 0x80))
            (pSVar2,(int)pSVar5->_padding_,&param_1->_Padding,&param_1->_Content);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  if ((this->_Widget).Object == (STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1> *)(*pcVar6)();
      return pTVar10;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar8 = (**(code **)(pSVar2->_padding_ + 0x228))(&pSVar2->_padding_);
    bVar9 = 0;
    if (cVar8 == '\0') goto LAB_142e1f2c2;
  }
  bVar9 = 0x20;
LAB_142e1f2c2:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar9;
  if ((this->_Widget).Object == (STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1> *)(*pcVar6)();
      return pTVar10;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1> *)(*pcVar6)();
      return pTVar10;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_> *)0x0;
  if (__return_storage_ptr__->Object == (STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1> *)(*pcVar6)();
      return pTVar10;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 142e1f390

TSharedRef<STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,1> *
__thiscall
TSlateDecl<STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,1>_&&>_>
::operator<<=(TSlateDecl<STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,1>_&&>_>
              *this,TSharedRef<STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,1>
                    *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_> *pSVar2;
  TSharedRef<SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,1> *pTVar3
  ;
  TReferenceControllerBase<1> *pTVar4;
  SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_> *pSVar5;
  code *pcVar6;
  bool bVar7;
  char cVar8;
  byte bVar9;
  TSharedRef<STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,1>
  *pTVar10;
  TSharedRef<STableViewBase,1> local_28;
  
  if ((this->_Widget).Object ==
      (STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,1>
                 *)(*pcVar6)();
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
  STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>::ConstructInternal
            (pSVar2,param_1,&local_28);
  (**(code **)(pSVar2->_padding_ + 0x80))
            (pSVar2,(int)pSVar5->_padding_,&param_1->_Padding,&param_1->_Content);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  if ((this->_Widget).Object ==
      (STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,1>
                 *)(*pcVar6)();
      return pTVar10;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar8 = (**(code **)(pSVar2->_padding_ + 0x228))(&pSVar2->_padding_);
    bVar9 = 0;
    if (cVar8 == '\0') goto LAB_142e1f492;
  }
  bVar9 = 0x20;
LAB_142e1f492:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar9;
  if ((this->_Widget).Object ==
      (STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,1>
                 *)(*pcVar6)();
      return pTVar10;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object ==
      (STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,1>
                 *)(*pcVar6)();
      return pTVar10;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object =
       (STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_> *)0x0;
  if (__return_storage_ptr__->Object ==
      (STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,1>
                 *)(*pcVar6)();
      return pTVar10;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 142e1f560

TSharedRef<STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>,1> * __thiscall
TSlateDecl<STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>,1>_&&>_>
::operator<<=(TSlateDecl<STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>,1>_&&>_>
              *this,TSharedRef<STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>,1>
                    *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_> *pSVar2;
  TSharedRef<SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>,1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  SListView<TSharedRef<FWidgetReflectorNodeBase,1>_> *pSVar5;
  code *pcVar6;
  bool bVar7;
  char cVar8;
  byte bVar9;
  TSharedRef<STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>,1> *pTVar10;
  TSharedRef<STableViewBase,1> local_28;
  
  if ((this->_Widget).Object == (STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>,1> *)(*pcVar6)();
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
  STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>::ConstructInternal(pSVar2,param_1,&local_28);
  (**(code **)(pSVar2->_padding_ + 0x80))
            (pSVar2,(int)pSVar5->_padding_,&param_1->_Padding,&param_1->_Content);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  if ((this->_Widget).Object == (STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>,1> *)(*pcVar6)();
      return pTVar10;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar8 = (**(code **)(pSVar2->_padding_ + 0x228))(&pSVar2->_padding_);
    bVar9 = 0;
    if (cVar8 == '\0') goto LAB_142e1f662;
  }
  bVar9 = 0x20;
LAB_142e1f662:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar9;
  if ((this->_Widget).Object == (STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>,1> *)(*pcVar6)();
      return pTVar10;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>,1> *)(*pcVar6)();
      return pTVar10;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_> *)0x0;
  if (__return_storage_ptr__->Object == (STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>,1> *)(*pcVar6)();
      return pTVar10;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 142e1f730

TSharedRef<STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>,1> * __thiscall
TSlateDecl<STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_>,1>_&>_>
::operator<<=(TSlateDecl<STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_>,1>_&>_>
              *this,TSharedRef<STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>,1>
                    *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_> *pSVar2;
  TSharedRef<STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_>,1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_> *pSVar5;
  code *pcVar6;
  bool bVar7;
  char cVar8;
  byte bVar9;
  TSharedRef<STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>,1> *pTVar10;
  TSharedRef<STableViewBase,1> local_28;
  
  if ((this->_Widget).Object == (STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>,1> *)(*pcVar6)();
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
  STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>::ConstructInternal(pSVar2,param_1,&local_28);
  (**(code **)(pSVar2->_padding_ + 0x80))
            (pSVar2,*(undefined4 *)&pSVar5->field_0x2b0,&param_1->_Padding,&param_1->_Content);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  if ((this->_Widget).Object == (STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>,1> *)(*pcVar6)();
      return pTVar10;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar8 = (**(code **)(pSVar2->_padding_ + 0x228))(&pSVar2->_padding_);
    bVar9 = 0;
    if (cVar8 == '\0') goto LAB_142e1f832;
  }
  bVar9 = 0x20;
LAB_142e1f832:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar9;
  if ((this->_Widget).Object == (STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>,1> *)(*pcVar6)();
      return pTVar10;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>,1> *)(*pcVar6)();
      return pTVar10;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_> *)0x0;
  if (__return_storage_ptr__->Object == (STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>,1> *)(*pcVar6)();
      return pTVar10;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 142e1f900

TSharedRef<STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_>,1> * __thiscall
TSlateDecl<STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T0RequiredArgs>::
operator<<=(TSlateDecl<STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T0RequiredArgs>
            *this,TSharedRef<STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_>,1>
                  *__return_storage_ptr__,FArguments *param_1)

{
  undefined1 *puVar1;
  STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_> *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_>,1> *pTVar7;
  
  if ((this->_Widget).Object == (STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_>,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_>::Construct((this->_Widget).Object,param_1);
  if ((this->_Widget).Object == (STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_>,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->field_0x30 & 0x10) == 0) {
    cVar5 = (**(code **)(*(longlong *)pSVar2 + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_142e1f9a1;
  }
  bVar6 = 0x20;
LAB_142e1f9a1:
  pSVar2->field_0x30 = pSVar2->field_0x30 & 0xdf;
  pSVar2->field_0x30 = pSVar2->field_0x30 | bVar6;
  if ((this->_Widget).Object == (STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_>,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  puVar1 = &((this->_Widget).Object)->field_0x31;
  *puVar1 = *puVar1 | 4;
  if ((this->_Widget).Object == (STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_>,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_> *)0x0;
  if (__return_storage_ptr__->Object == (STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_>,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 142e1fa70

TSharedRef<SAtlasVisualizerPanel,1> * __thiscall
TSlateDecl<SAtlasVisualizerPanel,RequiredArgs::T0RequiredArgs>::operator<<=
          (TSlateDecl<SAtlasVisualizerPanel,RequiredArgs::T0RequiredArgs> *this,
          TSharedRef<SAtlasVisualizerPanel,1> *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  SAtlasVisualizerPanel *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  SWidget *pSVar4;
  code *pcVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  char cVar8;
  byte bVar9;
  TSharedRef<SAtlasVisualizerPanel,1> *pTVar10;
  
  if ((this->_Widget).Object == (SAtlasVisualizerPanel *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TSharedRef<SAtlasVisualizerPanel,1> *)(*pcVar5)();
      return pTVar10;
    }
  }
  SWidget::SWidgetConstruct
            ((SWidget *)&((this->_Widget).Object)->_padding_,(FSlateBaseNamedArgs *)param_1);
  pSVar2 = (this->_Widget).Object;
  FSlotBase::DetatchParentFromContent((FSlotBase *)&(pSVar2->ChildSlot).field_0x20);
  pTVar3 = (param_1->_Content).Widget.SharedReferenceCount.ReferenceController;
  pSVar4 = (param_1->_Content).Widget.Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar6 = *(TReferenceControllerBase<1> **)&(pSVar2->ChildSlot).field_0x38;
  *(SWidget **)&(pSVar2->ChildSlot).field_0x30 = pSVar4;
  *(TReferenceControllerBase<1> **)&(pSVar2->ChildSlot).field_0x38 = pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)&(pSVar2->ChildSlot).field_0x20);
  if ((this->_Widget).Object == (SAtlasVisualizerPanel *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TSharedRef<SAtlasVisualizerPanel,1> *)(*pcVar5)();
      return pTVar10;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar8 = (**(code **)(pSVar2->_padding_ + 0x228))(&pSVar2->_padding_);
    bVar9 = 0;
    if (cVar8 == '\0') goto LAB_142e1fb67;
  }
  bVar9 = 0x20;
LAB_142e1fb67:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar9;
  if ((this->_Widget).Object == (SAtlasVisualizerPanel *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TSharedRef<SAtlasVisualizerPanel,1> *)(*pcVar5)();
      return pTVar10;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SAtlasVisualizerPanel *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TSharedRef<SAtlasVisualizerPanel,1> *)(*pcVar5)();
      return pTVar10;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SAtlasVisualizerPanel *)0x0;
  if (__return_storage_ptr__->Object == (SAtlasVisualizerPanel *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TSharedRef<SAtlasVisualizerPanel,1> *)(*pcVar5)();
      return pTVar10;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 142e1fc30

TSharedRef<SColorBlock,1> * __thiscall
TSlateDecl<SColorBlock,RequiredArgs::T0RequiredArgs>::operator<<=
          (TSlateDecl<SColorBlock,RequiredArgs::T0RequiredArgs> *this,
          TSharedRef<SColorBlock,1> *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  SColorBlock *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<SColorBlock,1> *pTVar7;
  
  if ((this->_Widget).Object == (SColorBlock *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SColorBlock,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  SColorBlock::Construct((this->_Widget).Object,param_1);
  if ((this->_Widget).Object == (SColorBlock *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SColorBlock,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar5 = (**(code **)(pSVar2->_padding_ + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_142e1fcd1;
  }
  bVar6 = 0x20;
LAB_142e1fcd1:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar6;
  if ((this->_Widget).Object == (SColorBlock *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SColorBlock,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SColorBlock *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SColorBlock,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SColorBlock *)0x0;
  if (__return_storage_ptr__->Object == (SColorBlock *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SColorBlock,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 142e1fda0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SDockTab,1> * __thiscall
TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>::operator<<=
          (TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs> *this,
          TSharedRef<SDockTab,1> *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  SDockTab *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<SDockTab,1> *pTVar7;
  
  if ((this->_Widget).Object == (SDockTab *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SDockTab,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  SDockTab::Construct((this->_Widget).Object,param_1);
  if ((this->_Widget).Object == (SDockTab *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SDockTab,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar5 = (**(code **)(pSVar2->_padding_ + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_142e1fe41;
  }
  bVar6 = 0x20;
LAB_142e1fe41:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar6;
  if ((this->_Widget).Object == (SDockTab *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SDockTab,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SDockTab *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SDockTab,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SDockTab *)0x0;
  if (__return_storage_ptr__->Object == (SDockTab *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SDockTab,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 142e1ff10

TSharedRef<SExpanderArrow,1> * __thiscall
TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<int,1>_>,1>_&&>_>
::operator<<=(TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<int,1>_>,1>_&&>_>
              *this,TSharedRef<SExpanderArrow,1> *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  SExpanderArrow *pSVar2;
  TSharedRef<STableRow<TSharedPtr<int,1>_>,1> *pTVar3;
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
    if (cVar6 == '\0') goto LAB_142e1ffe1;
  }
  bVar7 = 0x20;
LAB_142e1ffe1:
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

// operator<<= @ 142e200b0

TSharedRef<SExpanderArrow,1> * __thiscall
TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,1>_&&>_>
::operator<<=(TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,1>_&&>_>
              *this,TSharedRef<SExpanderArrow,1> *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  SExpanderArrow *pSVar2;
  TSharedRef<STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,1> *pTVar3;
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
    if (cVar6 == '\0') goto LAB_142e20181;
  }
  bVar7 = 0x20;
LAB_142e20181:
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

// operator<<= @ 142e20250

TSharedRef<SExpanderArrow,1> * __thiscall
TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FWidgetListEntry,1>_>,1>_&&>_>
::operator<<=(TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FWidgetListEntry,1>_>,1>_&&>_>
              *this,TSharedRef<SExpanderArrow,1> *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  SExpanderArrow *pSVar2;
  TSharedRef<STableRow<TSharedPtr<FWidgetListEntry,1>_>,1> *pTVar3;
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
    if (cVar6 == '\0') goto LAB_142e20321;
  }
  bVar7 = 0x20;
LAB_142e20321:
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

// operator<<= @ 142e203f0

TSharedRef<SExpanderArrow,1> * __thiscall
TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1>_&&>_>
::operator<<=(TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1>_&&>_>
              *this,TSharedRef<SExpanderArrow,1> *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  SExpanderArrow *pSVar2;
  TSharedRef<STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1> *pTVar3;
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
    if (cVar6 == '\0') goto LAB_142e204c1;
  }
  bVar7 = 0x20;
LAB_142e204c1:
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

// operator<<= @ 142e20590

TSharedRef<SExpanderArrow,1> * __thiscall
TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1>_&&>_>
::operator<<=(TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1>_&&>_>
              *this,TSharedRef<SExpanderArrow,1> *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  SExpanderArrow *pSVar2;
  TSharedRef<STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1> *pTVar3;
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
    if (cVar6 == '\0') goto LAB_142e20661;
  }
  bVar7 = 0x20;
LAB_142e20661:
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

// operator<<= @ 142e20730

TSharedRef<SExpanderArrow,1> * __thiscall
TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,1>_&&>_>
::operator<<=(TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,1>_&&>_>
              *this,TSharedRef<SExpanderArrow,1> *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  SExpanderArrow *pSVar2;
  TSharedRef<STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,1> *pTVar3
  ;
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
    if (cVar6 == '\0') goto LAB_142e20801;
  }
  bVar7 = 0x20;
LAB_142e20801:
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

// operator<<= @ 142e208d0

TSharedRef<SExpanderArrow,1> * __thiscall
TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>,1>_&&>_>
::operator<<=(TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>,1>_&&>_>
              *this,TSharedRef<SExpanderArrow,1> *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  SExpanderArrow *pSVar2;
  TSharedRef<STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>,1> *pTVar3;
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
    if (cVar6 == '\0') goto LAB_142e209a1;
  }
  bVar7 = 0x20;
LAB_142e209a1:
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

// operator<<= @ 142e20a70

TSharedRef<SExpanderArrow,1> * __thiscall
TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<SReflectorTreeWidgetItem,1>_&&>_>
::operator<<=(TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<SReflectorTreeWidgetItem,1>_&&>_>
              *this,TSharedRef<SExpanderArrow,1> *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  SExpanderArrow *pSVar2;
  TSharedRef<SReflectorTreeWidgetItem,1> *pTVar3;
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
    if (cVar6 == '\0') goto LAB_142e20b41;
  }
  bVar7 = 0x20;
LAB_142e20b41:
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

// operator<<= @ 142e20c10

TSharedRef<SGridPanel,1> * __thiscall
TSlateDecl<SGridPanel,RequiredArgs::T0RequiredArgs>::operator<<=
          (TSlateDecl<SGridPanel,RequiredArgs::T0RequiredArgs> *this,
          TSharedRef<SGridPanel,1> *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  SGridPanel *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<SGridPanel,1> *pTVar7;
  
  if ((this->_Widget).Object == (SGridPanel *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SGridPanel,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  SGridPanel::Construct((this->_Widget).Object,param_1);
  if ((this->_Widget).Object == (SGridPanel *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SGridPanel,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar5 = (**(code **)(pSVar2->_padding_ + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_142e20cb1;
  }
  bVar6 = 0x20;
LAB_142e20cb1:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar6;
  if ((this->_Widget).Object == (SGridPanel *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SGridPanel,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SGridPanel *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SGridPanel,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SGridPanel *)0x0;
  if (__return_storage_ptr__->Object == (SGridPanel *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SGridPanel,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 142e20d80

TSharedRef<WidgetHittestGridInternal::SIntermediateResultNode,1> * __thiscall
TSlateDecl<WidgetHittestGridInternal::SIntermediateResultNode,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
::operator<<=(TSlateDecl<WidgetHittestGridInternal::SIntermediateResultNode,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
              *this,TSharedRef<WidgetHittestGridInternal::SIntermediateResultNode,1>
                    *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  SIntermediateResultNode *pSVar2;
  FIntermediateResultNode *pFVar3;
  TSharedRef<STableViewBase,1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  bool bVar7;
  char cVar8;
  byte bVar9;
  TSharedRef<WidgetHittestGridInternal::SIntermediateResultNode,1> *pTVar10;
  FArguments *pFVar11;
  undefined1 local_350 [8];
  ForAnyElementType FStack_348;
  ulonglong local_340;
  FDestructionSentinel local_338;
  FIntermediateResultNode *local_320;
  TReferenceControllerBase<1> *pTStack_318;
  FArguments local_310;
  
  if ((this->_Widget).Object == (SIntermediateResultNode *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<WidgetHittestGridInternal::SIntermediateResultNode,1> *)(*pcVar6)();
      return pTVar10;
    }
  }
  SWidget::SWidgetConstruct
            ((SWidget *)&((this->_Widget).Object)->_padding_,(FSlateBaseNamedArgs *)param_1);
  pSVar2 = (this->_Widget).Object;
  pFVar3 = (param_1->_NodeToVisualize).Object;
  pTVar4 = this->_RequiredArgs->Arg0;
  pTVar5 = (param_1->_NodeToVisualize).SharedReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_320 = (pSVar2->NodeToVisualize).Object;
  pTStack_318 = (pSVar2->NodeToVisualize).SharedReferenceCount.ReferenceController;
  (pSVar2->NodeToVisualize).Object = pFVar3;
  (pSVar2->NodeToVisualize).SharedReferenceCount.ReferenceController = pTVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_318);
  pFVar11 = STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>::FArguments
            ::FArguments(&local_310);
  local_340 = 0;
  local_350 = (undefined1  [8])0x0;
  FStack_348.Data = (FScriptContainerElement *)0x0;
  (pFVar11->_Padding).Value.Left = 0.0;
  (pFVar11->_Padding).Value.Top = 0.0;
  (pFVar11->_Padding).Value.Right = 0.0;
  (pFVar11->_Padding).Value.Bottom = 0.0;
  (pFVar11->_Padding).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar11->_Padding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_350);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_350,
             (FWriteAccessScope *)&local_338);
  if (((int)local_340 != 0) && (FStack_348.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_348.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_348,0,0,0x10);
    local_340 = local_340 & 0xffffffff00000000;
  }
  if (local_338.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_338.Accessor,&local_338);
  }
  if (FStack_348.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_348.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_350);
  SMultiColumnTableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>::Construct
            ((SMultiColumnTableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>
              *)pSVar2,pFVar11,pTVar4);
  STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>::FArguments::
  ~FArguments(&local_310);
  if ((this->_Widget).Object == (SIntermediateResultNode *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<WidgetHittestGridInternal::SIntermediateResultNode,1> *)(*pcVar6)();
      return pTVar10;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar8 = (**(code **)(pSVar2->_padding_ + 0x228))(&pSVar2->_padding_);
    bVar9 = 0;
    if (cVar8 == '\0') goto LAB_142e20f5c;
  }
  bVar9 = 0x20;
LAB_142e20f5c:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar9;
  if ((this->_Widget).Object == (SIntermediateResultNode *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<WidgetHittestGridInternal::SIntermediateResultNode,1> *)(*pcVar6)();
      return pTVar10;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SIntermediateResultNode *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<WidgetHittestGridInternal::SIntermediateResultNode,1> *)(*pcVar6)();
      return pTVar10;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SIntermediateResultNode *)0x0;
  if (__return_storage_ptr__->Object == (SIntermediateResultNode *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<WidgetHittestGridInternal::SIntermediateResultNode,1> *)(*pcVar6)();
      return pTVar10;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 142e21030

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSharedRef<SNavigationSimulationListInternal::SListElement,1> * __thiscall
TSlateDecl<SNavigationSimulationListInternal::SListElement,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
::operator<<=(TSlateDecl<SNavigationSimulationListInternal::SListElement,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
              *this,TSharedRef<SNavigationSimulationListInternal::SListElement,1>
                    *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  SListElement *pSVar2;
  FNavigationSimulationWidgetNode *pFVar3;
  TSharedRef<STableViewBase,1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  char cVar11;
  byte bVar12;
  TSharedRef<SNavigationSimulationListInternal::SListElement,1> *pTVar13;
  FArguments *pFVar14;
  undefined1 local_350 [8];
  ForAnyElementType FStack_348;
  ulonglong local_340;
  FDestructionSentinel local_338;
  FNavigationSimulationWidgetNode *local_320;
  TReferenceControllerBase<1> *pTStack_318;
  FArguments local_310;
  
  if ((this->_Widget).Object == (SListElement *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar6 = (code *)swi(3);
      pTVar13 = (TSharedRef<SNavigationSimulationListInternal::SListElement,1> *)(*pcVar6)();
      return pTVar13;
    }
  }
  SWidget::SWidgetConstruct
            ((SWidget *)&((this->_Widget).Object)->_padding_,(FSlateBaseNamedArgs *)param_1);
  pSVar2 = (this->_Widget).Object;
  pFVar3 = (param_1->_WidgetItem).Object;
  pTVar4 = this->_RequiredArgs->Arg0;
  pTVar5 = (param_1->_WidgetItem).SharedReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_320 = (pSVar2->WidgetItem).Object;
  pTStack_318 = (pSVar2->WidgetItem).SharedReferenceCount.ReferenceController;
  (pSVar2->WidgetItem).Object = pFVar3;
  (pSVar2->WidgetItem).SharedReferenceCount.ReferenceController = pTVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_318);
  pFVar14 = STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>::FArguments::FArguments
                      (&local_310);
  uVar8 = _UNK_15076b1f8;
  local_340 = 0;
  local_350 = (undefined1  [8])0x0;
  FStack_348.Data = (FScriptContainerElement *)0x0;
  uVar7 = _UNK_15076b1f4;
  (pFVar14->_Padding).Value.Left = (float)___xmm_3f8000003f8000003f8000003f800000;
  uVar9 = _UNK_15076b1f8;
  (pFVar14->_Padding).Value.Top = (float)uVar7;
  _UNK_15076b1f8 = (undefined4)uVar8;
  _UNK_15076b1fc = SUB84(uVar8,4);
  uVar7 = _UNK_15076b1fc;
  (pFVar14->_Padding).Value.Right = (float)_UNK_15076b1f8;
  _UNK_15076b1f8 = uVar9;
  (pFVar14->_Padding).Value.Bottom = (float)uVar7;
  (pFVar14->_Padding).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar14->_Padding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_350);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_350,
             (FWriteAccessScope *)&local_338);
  if (((int)local_340 != 0) && (FStack_348.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_348.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_348,0,0,0x10);
    local_340 = local_340 & 0xffffffff00000000;
  }
  if (local_338.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_338.Accessor,&local_338);
  }
  if (FStack_348.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_348.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_350);
  SMultiColumnTableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>::Construct
            ((SMultiColumnTableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_> *)pSVar2,pFVar14,
             pTVar4);
  STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>::FArguments::~FArguments(&local_310);
  if ((this->_Widget).Object == (SListElement *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar6 = (code *)swi(3);
      pTVar13 = (TSharedRef<SNavigationSimulationListInternal::SListElement,1> *)(*pcVar6)();
      return pTVar13;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar11 = (**(code **)(pSVar2->_padding_ + 0x228))(&pSVar2->_padding_);
    bVar12 = 0;
    if (cVar11 == '\0') goto LAB_142e21211;
  }
  bVar12 = 0x20;
LAB_142e21211:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar12;
  if ((this->_Widget).Object == (SListElement *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar6 = (code *)swi(3);
      pTVar13 = (TSharedRef<SNavigationSimulationListInternal::SListElement,1> *)(*pcVar6)();
      return pTVar13;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SListElement *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x416,L"");
    if (bVar10) {
      pcVar6 = (code *)swi(3);
      pTVar13 = (TSharedRef<SNavigationSimulationListInternal::SListElement,1> *)(*pcVar6)();
      return pTVar13;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SListElement *)0x0;
  if (__return_storage_ptr__->Object == (SListElement *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x26c,L"");
    if (bVar10) {
      pcVar6 = (code *)swi(3);
      pTVar13 = (TSharedRef<SNavigationSimulationListInternal::SListElement,1> *)(*pcVar6)();
      return pTVar13;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 142e212e0

TSharedRef<SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>::SListViewPinnedRowWidget,1> *
__thiscall
TSlateDecl<SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>::SListViewPinnedRowWidget,RequiredArgs::T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>,1>_&&,int_&,int_&>_>
::operator<<=(TSlateDecl<SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>::SListViewPinnedRowWidget,RequiredArgs::T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>,1>_&&,int_&,int_&>_>
              *this,TSharedRef<SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>::SListViewPinnedRowWidget,1>
                    *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>,1>_&&,int_&,int_&>
  *pTVar4;
  SListViewPinnedRowWidget *pSVar5;
  code *pcVar6;
  bool bVar7;
  char cVar8;
  byte bVar9;
  TSharedRef<SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>::SListViewPinnedRowWidget,1>
  *pTVar10;
  TSharedRef<SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>,1> local_28;
  TSharedPtr<ITableRow,1> local_18;
  
  if ((this->_Widget).Object == (SListViewPinnedRowWidget *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>::SListViewPinnedRowWidget,1>
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
  SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>::SListViewPinnedRowWidget::Construct
            (pSVar5,param_1,&local_18,&local_28,iVar3,iVar2);
  if ((this->_Widget).Object == (SListViewPinnedRowWidget *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>::SListViewPinnedRowWidget,1>
                 *)(*pcVar6)();
      return pTVar10;
    }
  }
  pSVar5 = (this->_Widget).Object;
  if ((pSVar5->_padding_ & 0x10) == 0) {
    cVar8 = (**(code **)(pSVar5->_padding_ + 0x228))(pSVar5);
    bVar9 = 0;
    if (cVar8 == '\0') goto LAB_142e213e5;
  }
  bVar9 = 0x20;
LAB_142e213e5:
  *(byte *)&pSVar5->_padding_ = (byte)pSVar5->_padding_ & 0xdf;
  *(byte *)&pSVar5->_padding_ = (byte)pSVar5->_padding_ | bVar9;
  if ((this->_Widget).Object == (SListViewPinnedRowWidget *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>::SListViewPinnedRowWidget,1>
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
      pTVar10 = (TSharedRef<SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>::SListViewPinnedRowWidget,1>
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
      pTVar10 = (TSharedRef<SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>::SListViewPinnedRowWidget,1>
                 *)(*pcVar6)();
      return pTVar10;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 142e214b0

TSharedRef<SNavigationSimulationLiveList,1> * __thiscall
TSlateDecl<SNavigationSimulationLiveList,RequiredArgs::T2RequiredArgs<TDelegate<void___cdecl(TWeakPtr<SWidget_const_,1>),FDefaultDelegateUserPolicy>_const_&,TDelegate<void___cdecl(TWeakPtr<SWidget_const_,1>),FDefaultDelegateUserPolicy>_const_&>_>
::operator<<=(TSlateDecl<SNavigationSimulationLiveList,RequiredArgs::T2RequiredArgs<TDelegate<void___cdecl(TWeakPtr<SWidget_const_,1>),FDefaultDelegateUserPolicy>_const_&,TDelegate<void___cdecl(TWeakPtr<SWidget_const_,1>),FDefaultDelegateUserPolicy>_const_&>_>
              *this,TSharedRef<SNavigationSimulationLiveList,1> *__return_storage_ptr__,
             FArguments *param_1)

{
  byte *pbVar1;
  SNavigationSimulationLiveList *pSVar2;
  TDelegate<void___cdecl(TWeakPtr<SWidget_const_,1>),FDefaultDelegateUserPolicy> *pTVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  byte bVar7;
  TSharedRef<SNavigationSimulationLiveList,1> *pTVar8;
  
  if ((this->_Widget).Object == (SNavigationSimulationLiveList *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedRef<SNavigationSimulationLiveList,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  pSVar2 = (this->_Widget).Object;
  pTVar3 = this->_RequiredArgs->Arg1;
  TDelegate<void___cdecl(TWeakPtr<SWidget_const_,1>),FDefaultDelegateUserPolicy>::operator=
            (&pSVar2->OnLiveWidgetSelected,this->_RequiredArgs->Arg0);
  TDelegate<void___cdecl(TWeakPtr<SWidget_const_,1>),FDefaultDelegateUserPolicy>::operator=
            (&pSVar2->OnNavigateToLiveWidget,pTVar3);
  SNavigationSimulationListBase::Construct((SNavigationSimulationListBase *)pSVar2,param_1,Live);
  if ((this->_Widget).Object == (SNavigationSimulationLiveList *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedRef<SNavigationSimulationLiveList,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar6 = (**(code **)(pSVar2->_padding_ + 0x228))(pSVar2);
    bVar7 = 0;
    if (cVar6 == '\0') goto LAB_142e21588;
  }
  bVar7 = 0x20;
LAB_142e21588:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar7;
  if ((this->_Widget).Object == (SNavigationSimulationLiveList *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedRef<SNavigationSimulationLiveList,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SNavigationSimulationLiveList *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedRef<SNavigationSimulationLiveList,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SNavigationSimulationLiveList *)0x0;
  if (__return_storage_ptr__->Object == (SNavigationSimulationLiveList *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedRef<SNavigationSimulationLiveList,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 142e21660

TSharedRef<SNavigationSimulationSnapshotList,1> * __thiscall
TSlateDecl<SNavigationSimulationSnapshotList,RequiredArgs::T2RequiredArgs<TDelegate<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>_const_&,TDelegate<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>_const_&>_>
::operator<<=(TSlateDecl<SNavigationSimulationSnapshotList,RequiredArgs::T2RequiredArgs<TDelegate<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>_const_&,TDelegate<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>_const_&>_>
              *this,TSharedRef<SNavigationSimulationSnapshotList,1> *__return_storage_ptr__,
             FArguments *param_1)

{
  byte *pbVar1;
  SNavigationSimulationSnapshotList *pSVar2;
  TDelegate<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy> *pTVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  byte bVar7;
  TSharedRef<SNavigationSimulationSnapshotList,1> *pTVar8;
  
  if ((this->_Widget).Object == (SNavigationSimulationSnapshotList *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedRef<SNavigationSimulationSnapshotList,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  pSVar2 = (this->_Widget).Object;
  pTVar3 = this->_RequiredArgs->Arg1;
  TDelegate<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>::operator=
            (&pSVar2->OnSnapshotWidgetSelected,this->_RequiredArgs->Arg0);
  TDelegate<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>::operator=
            (&pSVar2->OnNavigateToSnapshotWidget,pTVar3);
  SNavigationSimulationListBase::Construct((SNavigationSimulationListBase *)pSVar2,param_1,Snapshot)
  ;
  if ((this->_Widget).Object == (SNavigationSimulationSnapshotList *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedRef<SNavigationSimulationSnapshotList,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar6 = (**(code **)(pSVar2->_padding_ + 0x228))(pSVar2);
    bVar7 = 0;
    if (cVar6 == '\0') goto LAB_142e21738;
  }
  bVar7 = 0x20;
LAB_142e21738:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar7;
  if ((this->_Widget).Object == (SNavigationSimulationSnapshotList *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedRef<SNavigationSimulationSnapshotList,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SNavigationSimulationSnapshotList *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedRef<SNavigationSimulationSnapshotList,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SNavigationSimulationSnapshotList *)0x0;
  if (__return_storage_ptr__->Object == (SNavigationSimulationSnapshotList *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedRef<SNavigationSimulationSnapshotList,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 142e21810

TSharedRef<SScrollableSnapshotImage,1> * __thiscall
TSlateDecl<SScrollableSnapshotImage,RequiredArgs::T0RequiredArgs>::operator<<=
          (TSlateDecl<SScrollableSnapshotImage,RequiredArgs::T0RequiredArgs> *this,
          TSharedRef<SScrollableSnapshotImage,1> *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  SScrollableSnapshotImage *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<SScrollableSnapshotImage,1> *pTVar7;
  
  if ((this->_Widget).Object == (SScrollableSnapshotImage *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SScrollableSnapshotImage,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  SScrollableSnapshotImage::Construct((this->_Widget).Object,param_1);
  if ((this->_Widget).Object == (SScrollableSnapshotImage *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SScrollableSnapshotImage,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar5 = (**(code **)(pSVar2->_padding_ + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_142e218b1;
  }
  bVar6 = 0x20;
LAB_142e218b1:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar6;
  if ((this->_Widget).Object == (SScrollableSnapshotImage *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SScrollableSnapshotImage,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SScrollableSnapshotImage *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SScrollableSnapshotImage,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SScrollableSnapshotImage *)0x0;
  if (__return_storage_ptr__->Object == (SScrollableSnapshotImage *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SScrollableSnapshotImage,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 142e21980

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SViewport,1> * __thiscall
TSlateDecl<SViewport,RequiredArgs::T0RequiredArgs>::operator<<=
          (TSlateDecl<SViewport,RequiredArgs::T0RequiredArgs> *this,
          TSharedRef<SViewport,1> *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  SViewport *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<SViewport,1> *pTVar7;
  
  if ((this->_Widget).Object == (SViewport *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SViewport,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  SViewport::Construct((this->_Widget).Object,param_1);
  if ((this->_Widget).Object == (SViewport *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SViewport,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar5 = (**(code **)(pSVar2->_padding_ + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_142e21a21;
  }
  bVar6 = 0x20;
LAB_142e21a21:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar6;
  if ((this->_Widget).Object == (SViewport *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SViewport,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SViewport *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SViewport,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SViewport *)0x0;
  if (__return_storage_ptr__->Object == (SViewport *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SViewport,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 142e21af0

TSharedRef<SWidgetEventLog,1> * __thiscall
TSlateDecl<SWidgetEventLog,RequiredArgs::T1RequiredArgs<TSharedRef<SWidget,1>_&&>_>::operator<<=
          (TSlateDecl<SWidgetEventLog,RequiredArgs::T1RequiredArgs<TSharedRef<SWidget,1>_&&>_> *this
          ,TSharedRef<SWidgetEventLog,1> *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  SWidgetEventLog *pSVar2;
  TSharedRef<SWidget,1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  byte bVar7;
  TSharedRef<SWidgetEventLog,1> *pTVar8;
  TSharedPtr<SWidget_const_,1> local_18;
  
  if ((this->_Widget).Object == (SWidgetEventLog *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedRef<SWidgetEventLog,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  pSVar2 = (this->_Widget).Object;
  pTVar3 = this->_RequiredArgs->Arg0;
  local_18.Object = pTVar3->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (pTVar3->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SWidgetEventLog::Construct(pSVar2,param_1,&local_18);
  if ((this->_Widget).Object == (SWidgetEventLog *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedRef<SWidgetEventLog,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar6 = (**(code **)(pSVar2->_padding_ + 0x228))(pSVar2);
    bVar7 = 0;
    if (cVar6 == '\0') goto LAB_142e21bb7;
  }
  bVar7 = 0x20;
LAB_142e21bb7:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar7;
  if ((this->_Widget).Object == (SWidgetEventLog *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedRef<SWidgetEventLog,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SWidgetEventLog *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedRef<SWidgetEventLog,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SWidgetEventLog *)0x0;
  if (__return_storage_ptr__->Object == (SWidgetEventLog *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedRef<SWidgetEventLog,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 142e21c80

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWidgetHittestGrid,1> * __thiscall
TSlateDecl<SWidgetHittestGrid,RequiredArgs::T1RequiredArgs<TSharedRef<SWidget,1>_&&>_>::operator<<=
          (TSlateDecl<SWidgetHittestGrid,RequiredArgs::T1RequiredArgs<TSharedRef<SWidget,1>_&&>_>
           *this,TSharedRef<SWidgetHittestGrid,1> *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  SWidgetHittestGrid *pSVar2;
  TSharedRef<SWidget,1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  byte bVar7;
  TSharedRef<SWidgetHittestGrid,1> *pTVar8;
  TSharedPtr<SWidget_const_,1> local_18;
  
  if ((this->_Widget).Object == (SWidgetHittestGrid *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedRef<SWidgetHittestGrid,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  pSVar2 = (this->_Widget).Object;
  pTVar3 = this->_RequiredArgs->Arg0;
  local_18.Object = pTVar3->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (pTVar3->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SWidgetHittestGrid::Construct(pSVar2,param_1,&local_18);
  if ((this->_Widget).Object == (SWidgetHittestGrid *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedRef<SWidgetHittestGrid,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar6 = (**(code **)(pSVar2->_padding_ + 0x228))(pSVar2);
    bVar7 = 0;
    if (cVar6 == '\0') goto LAB_142e21d47;
  }
  bVar7 = 0x20;
LAB_142e21d47:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar7;
  if ((this->_Widget).Object == (SWidgetHittestGrid *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedRef<SWidgetHittestGrid,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SWidgetHittestGrid *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedRef<SWidgetHittestGrid,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SWidgetHittestGrid *)0x0;
  if (__return_storage_ptr__->Object == (SWidgetHittestGrid *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedRef<SWidgetHittestGrid,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 142e21e10

TSharedRef<SWidgetListRow,1> * __thiscall
TSlateDecl<SWidgetListRow,RequiredArgs::T2RequiredArgs<TSharedPtr<FWidgetListEntry,1>_&,TSharedRef<STableViewBase,1>_const_&>_>
::operator<<=(TSlateDecl<SWidgetListRow,RequiredArgs::T2RequiredArgs<TSharedPtr<FWidgetListEntry,1>_&,TSharedRef<STableViewBase,1>_const_&>_>
              *this,TSharedRef<SWidgetListRow,1> *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  SWidgetListRow *pSVar2;
  TSharedPtr<FWidgetListEntry,1> *pTVar3;
  TSharedRef<STableViewBase,1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  FWidgetListEntry *pFVar6;
  code *pcVar7;
  TReferenceControllerBase<1> *pTVar8;
  bool bVar9;
  char cVar10;
  byte bVar11;
  TSharedRef<SWidgetListRow,1> *pTVar12;
  FArguments local_308;
  
  if ((this->_Widget).Object == (SWidgetListRow *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      pTVar12 = (TSharedRef<SWidgetListRow,1> *)(*pcVar7)();
      return pTVar12;
    }
  }
  SWidget::SWidgetConstruct
            ((SWidget *)&((this->_Widget).Object)->_padding_,(FSlateBaseNamedArgs *)param_1);
  pSVar2 = (this->_Widget).Object;
  pTVar3 = this->_RequiredArgs->Arg0;
  pTVar4 = this->_RequiredArgs->Arg1;
  pTVar5 = (pTVar3->SharedReferenceCount).ReferenceController;
  pFVar6 = pTVar3->Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar8 = (pSVar2->Entry).SharedReferenceCount.ReferenceController;
  (pSVar2->Entry).Object = pFVar6;
  (pSVar2->Entry).SharedReferenceCount.ReferenceController = pTVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  TDelegate<bool___cdecl(FString_const_&,int,int),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&pSVar2->OnAccessSource,&param_1->_OnAccessSource);
  TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&pSVar2->OnAccessAsset,&param_1->_OnAccessAsset);
  STableRow<TSharedPtr<FWidgetListEntry,1>_>::FArguments::FArguments(&local_308);
  SMultiColumnTableRow<TSharedPtr<FWidgetListEntry,1>_>::Construct
            ((SMultiColumnTableRow<TSharedPtr<FWidgetListEntry,1>_> *)pSVar2,&local_308,pTVar4);
  STableRow<TSharedPtr<FWidgetListEntry,1>_>::FArguments::~FArguments(&local_308);
  if ((this->_Widget).Object == (SWidgetListRow *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      pTVar12 = (TSharedRef<SWidgetListRow,1> *)(*pcVar7)();
      return pTVar12;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar10 = (**(code **)(pSVar2->_padding_ + 0x228))(&pSVar2->_padding_);
    bVar11 = 0;
    if (cVar10 == '\0') goto LAB_142e21f46;
  }
  bVar11 = 0x20;
LAB_142e21f46:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar11;
  if ((this->_Widget).Object == (SWidgetListRow *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      pTVar12 = (TSharedRef<SWidgetListRow,1> *)(*pcVar7)();
      return pTVar12;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SWidgetListRow *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      pTVar12 = (TSharedRef<SWidgetListRow,1> *)(*pcVar7)();
      return pTVar12;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SWidgetListRow *)0x0;
  if (__return_storage_ptr__->Object == (SWidgetListRow *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      pTVar12 = (TSharedRef<SWidgetListRow,1> *)(*pcVar7)();
      return pTVar12;
    }
  }
  return __return_storage_ptr__;
}

