// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 56

// Expose<SAudioMaterialKnob> @ 14d89c6c0

TSlateDecl<SAudioMaterialKnob,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SAudioMaterialKnob,RequiredArgs::T0RequiredArgs>::Expose<SAudioMaterialKnob>
          (TSlateDecl<SAudioMaterialKnob,RequiredArgs::T0RequiredArgs> *this,
          TSharedPtr<SAudioMaterialKnob,1> *param_1)

{
  SAudioMaterialKnob *pSVar1;
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

// Expose<SAudioTextBox> @ 14d89c710

/* WARNING: Enum "Type": Some values do not have unique names */

TSlateDecl<SAudioTextBox,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SAudioTextBox,RequiredArgs::T0RequiredArgs>::Expose<SAudioTextBox>
          (TSlateDecl<SAudioTextBox,RequiredArgs::T0RequiredArgs> *this,
          TSharedPtr<SAudioTextBox,1> *param_1)

{
  SAudioTextBox *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  TSharedPtr<SAudioTextBox,1> local_18;
  
  pSVar1 = (this->_Widget).Object;
  pTVar2 = (this->_Widget).SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  param_1->Object = pSVar1;
  (param_1->SharedReferenceCount).ReferenceController = pTVar2;
  TSharedPtr<SAudioTextBox,1>::~TSharedPtr<SAudioTextBox,1>(&local_18);
  return this;
}

// TSlateDecl<SComboBox<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,RequiredArgs::T0RequiredArgs> @ 14d8a7db0

TSlateDecl<SComboBox<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>,RequiredArgs::T0RequiredArgs> *
__thiscall
TSlateDecl<SComboBox<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,RequiredArgs::T0RequiredArgs>
::
TSlateDecl<SComboBox<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,RequiredArgs::T0RequiredArgs>
          (void *this,char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  byte *pbVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  TReferenceControllerBase<1> *pTVar8;
  TSlateDecl<SComboBox<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>,RequiredArgs::T0RequiredArgs>
  *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  TReferenceControllerBase<1> *local_38;
  FSharedReferencer<1> local_30;
  
  pTVar10 = (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)this = 0;
  *(undefined8 *)((longlong)this + 8) = 0;
  *(T0RequiredArgs **)((longlong)this + 0x10) = param_4;
  pTVar8 = ::operator_new(0x4e0);
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
    pTVar11 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__SComboBox_V__TSharedPtr_W4EAudioOscilloscopeTriggerMode___00_____00_SharedPointerInternals__6B_
    ;
    SComboButton::SComboButton((SComboButton *)(pTVar8 + 1));
    pTVar8[1]._padding_ =
         (longlong)&SComboBox<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>::_vftable__for__SPanel__
    ;
    *(undefined ***)&pTVar8[0x22].SharedReferenceCount =
         &SComboBox<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>::_vftable__for__IMenuHost__;
    FSlateSound::FSlateSound((FSlateSound *)(pTVar8 + 0x40));
    FSlateSound::FSlateSound((FSlateSound *)&pTVar8[0x41].SharedReferenceCount);
    pbVar1 = (byte *)((longlong)&pTVar8[4]._padding_ + 2);
    *pbVar1 = *pbVar1 | 4;
    pTVar11 = pTVar8 + 1;
    pTVar8[0x44]._padding_ = 0;
    pTVar8[0x44].SharedReferenceCount = (atomic<int>)0x0;
    pTVar8[0x44].WeakReferenceCount = (atomic<int>)0x0;
    pTVar8[0x45]._padding_ = 0;
    pTVar8[0x45].SharedReferenceCount = (atomic<int>)0x0;
    pTVar8[0x45].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar8[0x46]._padding_ = 0;
    pTVar8[0x46].SharedReferenceCount = (atomic<int>)0x0;
    pTVar8[0x46].WeakReferenceCount = (atomic<int>)0x0;
    pTVar8[0x47]._padding_ = 0;
    pTVar8[0x47].SharedReferenceCount = (atomic<int>)0x0;
    pTVar8[0x47].WeakReferenceCount = (atomic<int>)0x0;
    pTVar8[0x48]._padding_ = 0;
    pTVar8[0x48].SharedReferenceCount = (atomic<int>)0x0;
    pTVar8[0x48].WeakReferenceCount = (atomic<int>)0x0;
    pTVar8[0x49]._padding_ = 0;
    pTVar8[0x49].SharedReferenceCount = (atomic<int>)0x0;
    pTVar8[0x49].WeakReferenceCount = (atomic<int>)0x0;
    pTVar8[0x4a]._padding_ = 0;
    pTVar8[0x4a].SharedReferenceCount = (atomic<int>)0x0;
    pTVar8[0x4b]._padding_ = 0;
    pTVar8[0x4b].SharedReferenceCount = (atomic<int>)0x0;
    pTVar8[0x4b].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar8[0x4c]._padding_ = 0;
    pTVar8[0x4d]._padding_ = 0;
    pTVar8[0x4d].SharedReferenceCount = (atomic<int>)0x0;
    pTVar8[0x4d].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined1 *)((longlong)&pTVar8[4]._padding_ + 3) = 1;
    pTVar10 = pTVar8;
    if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        pTVar9 = (TSlateDecl<SComboBox<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>,RequiredArgs::T0RequiredArgs>
                  *)(*pcVar6)();
        return pTVar9;
      }
      goto LAB_14d8a7f8c;
    }
  }
  lVar4._0_4_ = pTVar11->SharedReferenceCount;
  lVar4._4_4_ = pTVar11->WeakReferenceCount;
  if (((lVar4 == 0) || (pTVar11[1]._padding_ == 0)) || (*(int *)(pTVar11[1]._padding_ + 8) < 1)) {
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(TReferenceControllerBase<1> **)&pTVar11->SharedReferenceCount = pTVar11;
    if (pTVar10 != (TReferenceControllerBase<1> *)pTVar11[1]._padding_) {
      if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)pTVar11[1]._padding_;
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
      pTVar11[1]._padding_ = (longlong)pTVar10;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
LAB_14d8a7f8c:
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = pTVar11;
  local_30.ReferenceController = pTVar10;
  if (this != &local_38) {
    *(TReferenceControllerBase<1> **)this = pTVar11;
    local_38 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)this + 8),&local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  if (*(longlong *)this == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TSlateDecl<SComboBox<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>,RequiredArgs::T0RequiredArgs>
                *)(*pcVar6)();
      return pTVar9;
    }
  }
  SWidget::SetDebugInfo(*(SWidget **)this,param_1,param_2,param_3,0x4d0);
  return this;
}

// TSlateDecl<SListView<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,RequiredArgs::T0RequiredArgs> @ 14d8a8050

TSlateDecl<SListView<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>,RequiredArgs::T0RequiredArgs> *
__thiscall
TSlateDecl<SListView<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,RequiredArgs::T0RequiredArgs>
::
TSlateDecl<SListView<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,RequiredArgs::T0RequiredArgs>
          (void *this,char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  TReferenceControllerBase<1> *pTVar7;
  TSlateDecl<SListView<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>,RequiredArgs::T0RequiredArgs>
  *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *local_28;
  FSharedReferencer<1> local_20;
  
  *(T0RequiredArgs **)((longlong)this + 0x10) = param_4;
  *(undefined8 *)this = 0;
  *(undefined8 *)((longlong)this + 8) = 0;
  pTVar7 = ::operator_new(0xa10);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    pTVar7 = (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__SListView_V__TSharedPtr_W4EAudioOscilloscopeTriggerMode___00_____00_SharedPointerInternals__6B_
    ;
    SListView<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>::
    SListView<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>(pTVar7 + 1,List);
    pTVar9 = pTVar7 + 1;
    if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TSlateDecl<SListView<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>,RequiredArgs::T0RequiredArgs>
                  *)(*pcVar5)();
        return pTVar8;
      }
      goto LAB_14d8a8171;
    }
  }
  lVar3._0_4_ = pTVar9->SharedReferenceCount;
  lVar3._4_4_ = pTVar9->WeakReferenceCount;
  if (((lVar3 == 0) || (pTVar9[1]._padding_ == 0)) || (*(int *)(pTVar9[1]._padding_ + 8) < 1)) {
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(TReferenceControllerBase<1> **)&pTVar9->SharedReferenceCount = pTVar9;
    if (pTVar7 != (TReferenceControllerBase<1> *)pTVar9[1]._padding_) {
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar7->WeakReferenceCount = (atomic<int>)((int)pTVar7->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = (longlong *)pTVar9[1]._padding_;
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
      pTVar9[1]._padding_ = (longlong)pTVar7;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  }
LAB_14d8a8171:
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = pTVar9;
  local_20.ReferenceController = pTVar7;
  if (this != &local_28) {
    *(TReferenceControllerBase<1> **)this = pTVar9;
    local_28 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)this + 8),&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  if (*(longlong *)this == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TSlateDecl<SListView<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>,RequiredArgs::T0RequiredArgs>
                *)(*pcVar5)();
      return pTVar8;
    }
  }
  SWidget::SetDebugInfo(*(SWidget **)this,param_1,param_2,param_3,0xa00);
  return this;
}

// TSlateDecl<STileView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,RequiredArgs::T0RequiredArgs> @ 14d8a8230

TSlateDecl<STileView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,RequiredArgs::T0RequiredArgs>
* __thiscall
TSlateDecl<STileView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,RequiredArgs::T0RequiredArgs>
::
TSlateDecl<STileView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<STileView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,RequiredArgs::T0RequiredArgs>
           *this,char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<STileView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,RequiredArgs::T0RequiredArgs>
  *pTVar7;
  STileView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_> *pSVar8;
  STileView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_> *local_28
  ;
  FSharedReferencer<1> local_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object =
       (STileView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_> *)
       0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0xa20);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pSVar8 = (STileView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
              *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__STileView_V__TSharedRef___CBUFLoudnessMetric_FLoudnessMeterWidgetView_AudioWidgets___00_____00_SharedPointerInternals__6B_
    ;
    SListView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>::
    SListView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
              ((SListView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
                *)(pTVar6 + 1),Tile);
    *(undefined1 *)&pTVar6[0xa1]._padding_ = 1;
    pTVar6[1]._padding_ =
         (longlong)
         &STileView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>::
          _vftable__for__SCompoundWidget__;
    pSVar8 = (STileView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
              *)(pTVar6 + 1);
    *(undefined ***)&pTVar6[0x2b].SharedReferenceCount =
         &STileView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>::
          _vftable__for__IScrollableWidget__;
    *(undefined ***)&pTVar6[0x59].SharedReferenceCount =
         &
         ___7__STileView_V__TSharedRef___CBUFLoudnessMetric_FLoudnessMeterWidgetView_AudioWidgets___00____6B_
    ;
    if (pSVar8 == (STileView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
                   *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<STileView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,RequiredArgs::T0RequiredArgs>
                  *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14d8a8386;
    }
  }
  if (((*(longlong *)&pSVar8->field_0x8 == 0) || (*(longlong *)&pSVar8->field_0x10 == 0)) ||
     (*(int *)(*(longlong *)&pSVar8->field_0x10 + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(STileView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_> **)
     &pSVar8->field_0x8 = pSVar8;
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
LAB_14d8a8386:
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = pSVar8;
  local_20.ReferenceController = pTVar6;
  if (this != (TSlateDecl<STileView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,RequiredArgs::T0RequiredArgs>
               *)&local_28) {
    (this->_Widget).Object = pSVar8;
    local_28 = (STileView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
                *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  if ((this->_Widget).Object ==
      (STileView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_> *)
      0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<STileView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,RequiredArgs::T0RequiredArgs>
                *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0xa10);
  return this;
}

// TSlateDecl<SAudioFrequencyRadialSlider,RequiredArgs::T0RequiredArgs> @ 14d8a8450

/* WARNING: Enum "Type": Some values do not have unique names */

TSlateDecl<SAudioFrequencyRadialSlider,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SAudioFrequencyRadialSlider,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SAudioFrequencyRadialSlider,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SAudioFrequencyRadialSlider,RequiredArgs::T0RequiredArgs> *this,char *param_1,
          char *param_2,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SAudioFrequencyRadialSlider,RequiredArgs::T0RequiredArgs> *pTVar7;
  SAudioFrequencyRadialSlider *pSVar8;
  SAudioFrequencyRadialSlider *local_28;
  FSharedReferencer<1> local_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (SAudioFrequencyRadialSlider *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0x558);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pSVar8 = (SAudioFrequencyRadialSlider *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VSAudioFrequencyRadialSlider___00_SharedPointerInternals__6B_
    ;
    SAudioRadialSlider::SAudioRadialSlider((SAudioRadialSlider *)(pTVar6 + 1));
    pSVar8 = (SAudioFrequencyRadialSlider *)(pTVar6 + 1);
    pTVar6[1]._padding_ = (longlong)&___7SAudioFrequencyRadialSlider__6B_;
    if (pSVar8 == (SAudioFrequencyRadialSlider *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SAudioFrequencyRadialSlider,RequiredArgs::T0RequiredArgs> *)(*pcVar4)()
        ;
        return pTVar7;
      }
      goto LAB_14d8a857a;
    }
  }
  if (((*(longlong *)&pSVar8->field_0x8 == 0) || (*(longlong *)&pSVar8->field_0x10 == 0)) ||
     (*(int *)(*(longlong *)&pSVar8->field_0x10 + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(SAudioFrequencyRadialSlider **)&pSVar8->field_0x8 = pSVar8;
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
LAB_14d8a857a:
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = pSVar8;
  local_20.ReferenceController = pTVar6;
  if (this != (TSlateDecl<SAudioFrequencyRadialSlider,RequiredArgs::T0RequiredArgs> *)&local_28) {
    (this->_Widget).Object = pSVar8;
    local_28 = (SAudioFrequencyRadialSlider *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  if ((this->_Widget).Object == (SAudioFrequencyRadialSlider *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SAudioFrequencyRadialSlider,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x548);
  return this;
}

// TSlateDecl<SAudioFrequencySlider,RequiredArgs::T0RequiredArgs> @ 14d8a8640

/* WARNING: Enum "Type": Some values do not have unique names */

TSlateDecl<SAudioFrequencySlider,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SAudioFrequencySlider,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SAudioFrequencySlider,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SAudioFrequencySlider,RequiredArgs::T0RequiredArgs> *this,char *param_1,
          char *param_2,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SAudioFrequencySlider,RequiredArgs::T0RequiredArgs> *pTVar7;
  SAudioFrequencySlider *pSVar8;
  SAudioFrequencySlider *local_28;
  FSharedReferencer<1> local_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (SAudioFrequencySlider *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0x580);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pSVar8 = (SAudioFrequencySlider *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VSAudioFrequencySlider___00_SharedPointerInternals__6B_
    ;
    SAudioSliderBase::SAudioSliderBase((SAudioSliderBase *)(pTVar6 + 1));
    pSVar8 = (SAudioFrequencySlider *)(pTVar6 + 1);
    pTVar6[1]._padding_ = (longlong)&___7SAudioFrequencySlider__6B_;
    if (pSVar8 == (SAudioFrequencySlider *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SAudioFrequencySlider,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14d8a876a;
    }
  }
  if (((*(longlong *)&pSVar8->field_0x8 == 0) || (*(longlong *)&pSVar8->field_0x10 == 0)) ||
     (*(int *)(*(longlong *)&pSVar8->field_0x10 + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(SAudioFrequencySlider **)&pSVar8->field_0x8 = pSVar8;
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
LAB_14d8a876a:
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = pSVar8;
  local_20.ReferenceController = pTVar6;
  if (this != (TSlateDecl<SAudioFrequencySlider,RequiredArgs::T0RequiredArgs> *)&local_28) {
    (this->_Widget).Object = pSVar8;
    local_28 = (SAudioFrequencySlider *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  if ((this->_Widget).Object == (SAudioFrequencySlider *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SAudioFrequencySlider,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x570);
  return this;
}

// TSlateDecl<SAudioMaterialButton,RequiredArgs::T0RequiredArgs> @ 14d8a8830

TSlateDecl<SAudioMaterialButton,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SAudioMaterialButton,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SAudioMaterialButton,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SAudioMaterialButton,RequiredArgs::T0RequiredArgs> *this,char *param_1,
          char *param_2,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SAudioMaterialButton,RequiredArgs::T0RequiredArgs> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  SAudioMaterialButton *pSVar9;
  SAudioMaterialButton *local_38;
  FSharedReferencer<1> local_30;
  
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SAudioMaterialButton *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_RequiredArgs = param_4;
  pTVar6 = ::operator_new(0x2c8);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pSVar9 = (SAudioMaterialButton *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VSAudioMaterialButton___00_SharedPointerInternals__6B_
    ;
    memset(pTVar6 + 1,0,0x2b8);
    SLeafWidget::SLeafWidget((SLeafWidget *)(pTVar6 + 1));
    pTVar6[0x26].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x26].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[1]._padding_ = (longlong)&___7SAudioMaterialButton__6B_;
    pSVar9 = (SAudioMaterialButton *)(pTVar6 + 1);
    pTVar6[0x22].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x22].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x23]._padding_ = 0;
    pTVar6[0x23].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x24]._padding_ = 0;
    pTVar6[0x24].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x24].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar6[0x25]._padding_ = 0;
    pTVar6[0x25].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x25].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x26]._padding_ = 0;
    *(undefined2 *)&pTVar6[0x27]._padding_ = 0x100;
    pTVar6[0x28].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x28].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x27].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x27].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x28]._padding_ = 0;
    *(undefined1 *)&pTVar6[0x2a]._padding_ = 0;
    *(undefined1 *)&pTVar6[0x2a].SharedReferenceCount = 0;
    pTVar6[0x2c]._padding_ = 0;
    pTVar6[0x2b]._padding_ = 0;
    pTVar6[0x2b].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2b].WeakReferenceCount = (atomic<int>)0x0;
    pTVar8 = pTVar6;
    if (pSVar9 == (SAudioMaterialButton *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SAudioMaterialButton,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14d8a89ea;
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
LAB_14d8a89ea:
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = pSVar9;
  local_30.ReferenceController = pTVar8;
  if (this != (TSlateDecl<SAudioMaterialButton,RequiredArgs::T0RequiredArgs> *)&local_38) {
    (this->_Widget).Object = pSVar9;
    local_38 = (SAudioMaterialButton *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  if ((this->_Widget).Object == (SAudioMaterialButton *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SAudioMaterialButton,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x2b8);
  return this;
}

// TSlateDecl<SAudioMaterialEnvelope,RequiredArgs::T0RequiredArgs> @ 14d8a8ab0

TSlateDecl<SAudioMaterialEnvelope,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SAudioMaterialEnvelope,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SAudioMaterialEnvelope,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SAudioMaterialEnvelope,RequiredArgs::T0RequiredArgs> *this,char *param_1,
          char *param_2,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SAudioMaterialEnvelope,RequiredArgs::T0RequiredArgs> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  SAudioMaterialEnvelope *pSVar9;
  SAudioMaterialEnvelope *local_38;
  FSharedReferencer<1> local_30;
  
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SAudioMaterialEnvelope *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_RequiredArgs = param_4;
  pTVar6 = ::operator_new(0x248);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pSVar9 = (SAudioMaterialEnvelope *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VSAudioMaterialEnvelope___00_SharedPointerInternals__6B_
    ;
    memset(pTVar6 + 1,0,0x238);
    SLeafWidget::SLeafWidget((SLeafWidget *)(pTVar6 + 1));
    pTVar6[0x23]._padding_ = 0;
    pTVar6[1]._padding_ = (longlong)&___7SAudioMaterialEnvelope__6B_;
    pSVar9 = (SAudioMaterialEnvelope *)(pTVar6 + 1);
    pTVar6[0x22].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x22].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x23].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x23].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x24]._padding_ = 0;
    pTVar8 = pTVar6;
    if (pSVar9 == (SAudioMaterialEnvelope *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SAudioMaterialEnvelope,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14d8a8c06;
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
LAB_14d8a8c06:
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = pSVar9;
  local_30.ReferenceController = pTVar8;
  if (this != (TSlateDecl<SAudioMaterialEnvelope,RequiredArgs::T0RequiredArgs> *)&local_38) {
    (this->_Widget).Object = pSVar9;
    local_38 = (SAudioMaterialEnvelope *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  if ((this->_Widget).Object == (SAudioMaterialEnvelope *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SAudioMaterialEnvelope,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x238);
  return this;
}

// TSlateDecl<SAudioMaterialKnob,RequiredArgs::T0RequiredArgs> @ 14d8a8cd0

TSlateDecl<SAudioMaterialKnob,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SAudioMaterialKnob,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SAudioMaterialKnob,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SAudioMaterialKnob,RequiredArgs::T0RequiredArgs> *this,char *param_1,
          char *param_2,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SAudioMaterialKnob,RequiredArgs::T0RequiredArgs> *pTVar7;
  SAudioMaterialKnob *pSVar8;
  SAudioMaterialKnob *local_28;
  FSharedReferencer<1> local_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (SAudioMaterialKnob *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0x3e0);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pSVar8 = (SAudioMaterialKnob *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VSAudioMaterialKnob___00_SharedPointerInternals__6B_;
    memset(pTVar6 + 1,0,0x3d0);
    SAudioMaterialKnob::SAudioMaterialKnob((SAudioMaterialKnob *)(pTVar6 + 1));
    pSVar8 = (SAudioMaterialKnob *)(pTVar6 + 1);
    if (pSVar8 == (SAudioMaterialKnob *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SAudioMaterialKnob,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14d8a8e00;
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
LAB_14d8a8e00:
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = pSVar8;
  local_20.ReferenceController = pTVar6;
  if (this != (TSlateDecl<SAudioMaterialKnob,RequiredArgs::T0RequiredArgs> *)&local_28) {
    (this->_Widget).Object = pSVar8;
    local_28 = (SAudioMaterialKnob *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  if ((this->_Widget).Object == (SAudioMaterialKnob *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SAudioMaterialKnob,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x3d0);
  return this;
}

// TSlateDecl<SAudioMaterialMeter,RequiredArgs::T0RequiredArgs> @ 14d8a8ec0

TSlateDecl<SAudioMaterialMeter,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SAudioMaterialMeter,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SAudioMaterialMeter,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SAudioMaterialMeter,RequiredArgs::T0RequiredArgs> *this,char *param_1,
          char *param_2,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SAudioMaterialMeter,RequiredArgs::T0RequiredArgs> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  SAudioMaterialMeter *pSVar9;
  SAudioMaterialMeter *local_38;
  FSharedReferencer<1> local_30;
  
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SAudioMaterialMeter *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_RequiredArgs = param_4;
  pTVar6 = ::operator_new(0x288);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pSVar9 = (SAudioMaterialMeter *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VSAudioMaterialMeter___00_SharedPointerInternals__6B_;
    memset(pTVar6 + 1,0,0x278);
    SLeafWidget::SLeafWidget((SLeafWidget *)(pTVar6 + 1));
    *(undefined1 *)&pTVar6[0x22].SharedReferenceCount = 0;
    pTVar6[1]._padding_ = (longlong)&___7SAudioMaterialMeter__6B_;
    pSVar9 = (SAudioMaterialMeter *)(pTVar6 + 1);
    pTVar6[0x23]._padding_ = 0;
    pTVar6[0x23].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x23].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x24]._padding_ = 0;
    pTVar6[0x24].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x24].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x25].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x25].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x26]._padding_ = 0;
    *(undefined1 *)&pTVar6[0x26].SharedReferenceCount = 0;
    pTVar6[0x28]._padding_ = 0;
    pTVar6[0x27]._padding_ = 0;
    pTVar6[0x27].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x27].WeakReferenceCount = (atomic<int>)0x0;
    pTVar8 = pTVar6;
    if (pSVar9 == (SAudioMaterialMeter *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SAudioMaterialMeter,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14d8a9047;
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
LAB_14d8a9047:
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = pSVar9;
  local_30.ReferenceController = pTVar8;
  if (this != (TSlateDecl<SAudioMaterialMeter,RequiredArgs::T0RequiredArgs> *)&local_38) {
    (this->_Widget).Object = pSVar9;
    local_38 = (SAudioMaterialMeter *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  if ((this->_Widget).Object == (SAudioMaterialMeter *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SAudioMaterialMeter,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x278);
  return this;
}

// TSlateDecl<SAudioMaterialSlider,RequiredArgs::T0RequiredArgs> @ 14d8a9110

TSlateDecl<SAudioMaterialSlider,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SAudioMaterialSlider,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SAudioMaterialSlider,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SAudioMaterialSlider,RequiredArgs::T0RequiredArgs> *this,char *param_1,
          char *param_2,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TIntrusiveReferenceController<SAudioMaterialSlider,1> *pTVar6;
  TSlateDecl<SAudioMaterialSlider,RequiredArgs::T0RequiredArgs> *pTVar7;
  SAudioMaterialSlider *pSVar8;
  SAudioMaterialSlider *local_28;
  FSharedReferencer<1> local_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (SAudioMaterialSlider *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0x3b0);
  if (pTVar6 == (TIntrusiveReferenceController<SAudioMaterialSlider,1> *)0x0) {
    pTVar6 = (TIntrusiveReferenceController<SAudioMaterialSlider,1> *)0x0;
    pSVar8 = (SAudioMaterialSlider *)&DAT_00000010;
  }
  else {
    pTVar6 = SharedPointerInternals::TIntrusiveReferenceController<SAudioMaterialSlider,1>::
             TIntrusiveReferenceController<SAudioMaterialSlider,1><>(pTVar6);
    pSVar8 = (SAudioMaterialSlider *)&pTVar6->ObjectStorage;
    if (pSVar8 == (SAudioMaterialSlider *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SAudioMaterialSlider,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14d8a920c;
    }
  }
  if (((pSVar8->_padding_ == 0) || (pSVar8->_padding_ == 0)) ||
     (*(int *)(pSVar8->_padding_ + 8) < 1)) {
    if (pTVar6 != (TIntrusiveReferenceController<SAudioMaterialSlider,1> *)0x0) {
      LOCK();
      *(int *)&pTVar6->_padding_ = (int)pTVar6->_padding_ + 1;
      UNLOCK();
    }
    pSVar8->_padding_ = (longlong)pSVar8;
    if (pTVar6 != (TIntrusiveReferenceController<SAudioMaterialSlider,1> *)pSVar8->_padding_) {
      if (pTVar6 != (TIntrusiveReferenceController<SAudioMaterialSlider,1> *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)&pTVar6->_padding_ + 4);
        *piVar1 = *piVar1 + 1;
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
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pTVar6);
  }
LAB_14d8a920c:
  if (pTVar6 != (TIntrusiveReferenceController<SAudioMaterialSlider,1> *)0x0) {
    LOCK();
    *(int *)&pTVar6->_padding_ = (int)pTVar6->_padding_ + 1;
    UNLOCK();
  }
  local_28 = pSVar8;
  local_20.ReferenceController = (TReferenceControllerBase<1> *)pTVar6;
  if (this != (TSlateDecl<SAudioMaterialSlider,RequiredArgs::T0RequiredArgs> *)&local_28) {
    (this->_Widget).Object = pSVar8;
    local_28 = (SAudioMaterialSlider *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pTVar6);
  if ((this->_Widget).Object == (SAudioMaterialSlider *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SAudioMaterialSlider,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x3a0);
  return this;
}

// TSlateDecl<SAudioMeter,RequiredArgs::T0RequiredArgs> @ 14d8a92d0

TSlateDecl<SAudioMeter,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SAudioMeter,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SAudioMeter,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SAudioMeter,RequiredArgs::T0RequiredArgs> *this,char *param_1,char *param_2,
          int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SAudioMeter,RequiredArgs::T0RequiredArgs> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  SAudioMeter *pSVar9;
  SAudioMeter *local_38;
  FSharedReferencer<1> local_30;
  
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SAudioMeter *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_RequiredArgs = param_4;
  pTVar6 = ::operator_new(0x240);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pSVar9 = (SAudioMeter *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VSAudioMeter___00_SharedPointerInternals__6B_;
    memset(pTVar6 + 1,0,0x230);
    SLeafWidget::SLeafWidget((SLeafWidget *)(pTVar6 + 1));
    pSVar9 = (SAudioMeter *)(pTVar6 + 1);
    *(undefined1 *)&pTVar6[0x22].SharedReferenceCount = 0;
    pTVar6[0x23]._padding_ = 0;
    pTVar6[1]._padding_ = (longlong)&___7SAudioMeter__6B_;
    pTVar6[0x23].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x23].WeakReferenceCount = (atomic<int>)0x0;
    pTVar8 = pTVar6;
    if (pSVar9 == (SAudioMeter *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SAudioMeter,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14d8a941f;
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
LAB_14d8a941f:
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = pSVar9;
  local_30.ReferenceController = pTVar8;
  if (this != (TSlateDecl<SAudioMeter,RequiredArgs::T0RequiredArgs> *)&local_38) {
    (this->_Widget).Object = pSVar9;
    local_38 = (SAudioMeter *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  if ((this->_Widget).Object == (SAudioMeter *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SAudioMeter,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x230);
  return this;
}

// TSlateDecl<SAudioMeterWidget,RequiredArgs::T0RequiredArgs> @ 14d8a94e0

TSlateDecl<SAudioMeterWidget,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SAudioMeterWidget,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SAudioMeterWidget,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SAudioMeterWidget,RequiredArgs::T0RequiredArgs> *this,char *param_1,
          char *param_2,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SAudioMeterWidget,RequiredArgs::T0RequiredArgs> *pTVar7;
  SAudioMeterWidget *pSVar8;
  SAudioMeterWidget *local_28;
  FSharedReferencer<1> local_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (SAudioMeterWidget *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0x3c0);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pSVar8 = (SAudioMeterWidget *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VSAudioMeterWidget___00_SharedPointerInternals__6B_;
    memset(pTVar6 + 1,0,0x3b0);
    SAudioMeterWidget::SAudioMeterWidget((SAudioMeterWidget *)(pTVar6 + 1));
    pSVar8 = (SAudioMeterWidget *)(pTVar6 + 1);
    if (pSVar8 == (SAudioMeterWidget *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SAudioMeterWidget,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14d8a9610;
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
LAB_14d8a9610:
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = pSVar8;
  local_20.ReferenceController = pTVar6;
  if (this != (TSlateDecl<SAudioMeterWidget,RequiredArgs::T0RequiredArgs> *)&local_28) {
    (this->_Widget).Object = pSVar8;
    local_28 = (SAudioMeterWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  if ((this->_Widget).Object == (SAudioMeterWidget *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SAudioMeterWidget,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x3b0);
  return this;
}

// TSlateDecl<SAudioOscilloscopePanelWidget,RequiredArgs::T2RequiredArgs<FFixedSampledSequenceView_&,int_const_&>_> @ 14d8a96d0

/* WARNING: Enum "Type": Some values do not have unique names */

TSlateDecl<SAudioOscilloscopePanelWidget,RequiredArgs::T2RequiredArgs<FFixedSampledSequenceView_&,int_const_&>_>
* __thiscall
TSlateDecl<SAudioOscilloscopePanelWidget,RequiredArgs::T2RequiredArgs<FFixedSampledSequenceView_&,int_const_&>_>
::
TSlateDecl<SAudioOscilloscopePanelWidget,RequiredArgs::T2RequiredArgs<FFixedSampledSequenceView_&,int_const_&>_>
          (TSlateDecl<SAudioOscilloscopePanelWidget,RequiredArgs::T2RequiredArgs<FFixedSampledSequenceView_&,int_const_&>_>
           *this,char *param_1,char *param_2,int param_3,
          T2RequiredArgs<FFixedSampledSequenceView_&,int_const_&> *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SAudioOscilloscopePanelWidget,RequiredArgs::T2RequiredArgs<FFixedSampledSequenceView_&,int_const_&>_>
  *pTVar7;
  SAudioOscilloscopePanelWidget *pSVar8;
  SAudioOscilloscopePanelWidget *local_28;
  FSharedReferencer<1> local_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (SAudioOscilloscopePanelWidget *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0x4d0);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pSVar8 = (SAudioOscilloscopePanelWidget *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VSAudioOscilloscopePanelWidget___00_SharedPointerInternals__6B_
    ;
    memset(pTVar6 + 1,0,0x4c0);
    SAudioOscilloscopePanelWidget::SAudioOscilloscopePanelWidget
              ((SAudioOscilloscopePanelWidget *)(pTVar6 + 1));
    pSVar8 = (SAudioOscilloscopePanelWidget *)(pTVar6 + 1);
    if (pSVar8 == (SAudioOscilloscopePanelWidget *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SAudioOscilloscopePanelWidget,RequiredArgs::T2RequiredArgs<FFixedSampledSequenceView_&,int_const_&>_>
                  *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14d8a9800;
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
LAB_14d8a9800:
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = pSVar8;
  local_20.ReferenceController = pTVar6;
  if (this != (TSlateDecl<SAudioOscilloscopePanelWidget,RequiredArgs::T2RequiredArgs<FFixedSampledSequenceView_&,int_const_&>_>
               *)&local_28) {
    (this->_Widget).Object = pSVar8;
    local_28 = (SAudioOscilloscopePanelWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  if ((this->_Widget).Object == (SAudioOscilloscopePanelWidget *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SAudioOscilloscopePanelWidget,RequiredArgs::T2RequiredArgs<FFixedSampledSequenceView_&,int_const_&>_>
                *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x4c0);
  return this;
}

// TSlateDecl<SAudioOscilloscopePanelWidget,RequiredArgs::T2RequiredArgs<FFixedSampledSequenceView_&,unsigned_int_const_&>_> @ 14d8a98c0

/* WARNING: Enum "Type": Some values do not have unique names */

TSlateDecl<SAudioOscilloscopePanelWidget,RequiredArgs::T2RequiredArgs<FFixedSampledSequenceView_&,unsigned_int_const_&>_>
* __thiscall
TSlateDecl<SAudioOscilloscopePanelWidget,RequiredArgs::T2RequiredArgs<FFixedSampledSequenceView_&,unsigned_int_const_&>_>
::
TSlateDecl<SAudioOscilloscopePanelWidget,RequiredArgs::T2RequiredArgs<FFixedSampledSequenceView_&,unsigned_int_const_&>_>
          (TSlateDecl<SAudioOscilloscopePanelWidget,RequiredArgs::T2RequiredArgs<FFixedSampledSequenceView_&,unsigned_int_const_&>_>
           *this,char *param_1,char *param_2,int param_3,
          T2RequiredArgs<FFixedSampledSequenceView_&,unsigned_int_const_&> *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SAudioOscilloscopePanelWidget,RequiredArgs::T2RequiredArgs<FFixedSampledSequenceView_&,unsigned_int_const_&>_>
  *pTVar7;
  SAudioOscilloscopePanelWidget *pSVar8;
  SAudioOscilloscopePanelWidget *local_28;
  FSharedReferencer<1> local_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (SAudioOscilloscopePanelWidget *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0x4d0);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pSVar8 = (SAudioOscilloscopePanelWidget *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VSAudioOscilloscopePanelWidget___00_SharedPointerInternals__6B_
    ;
    memset(pTVar6 + 1,0,0x4c0);
    SAudioOscilloscopePanelWidget::SAudioOscilloscopePanelWidget
              ((SAudioOscilloscopePanelWidget *)(pTVar6 + 1));
    pSVar8 = (SAudioOscilloscopePanelWidget *)(pTVar6 + 1);
    if (pSVar8 == (SAudioOscilloscopePanelWidget *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SAudioOscilloscopePanelWidget,RequiredArgs::T2RequiredArgs<FFixedSampledSequenceView_&,unsigned_int_const_&>_>
                  *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14d8a99f0;
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
LAB_14d8a99f0:
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = pSVar8;
  local_20.ReferenceController = pTVar6;
  if (this != (TSlateDecl<SAudioOscilloscopePanelWidget,RequiredArgs::T2RequiredArgs<FFixedSampledSequenceView_&,unsigned_int_const_&>_>
               *)&local_28) {
    (this->_Widget).Object = pSVar8;
    local_28 = (SAudioOscilloscopePanelWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  if ((this->_Widget).Object == (SAudioOscilloscopePanelWidget *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SAudioOscilloscopePanelWidget,RequiredArgs::T2RequiredArgs<FFixedSampledSequenceView_&,unsigned_int_const_&>_>
                *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x4c0);
  return this;
}

// TSlateDecl<SAudioOscilloscopePanelWidget,RequiredArgs::T2RequiredArgs<FFixedSampledSequenceView_const_&,unsigned_int_&&>_> @ 14d8a9ab0

/* WARNING: Enum "Type": Some values do not have unique names */

TSlateDecl<SAudioOscilloscopePanelWidget,RequiredArgs::T2RequiredArgs<FFixedSampledSequenceView_const_&,unsigned_int_&&>_>
* __thiscall
TSlateDecl<SAudioOscilloscopePanelWidget,RequiredArgs::T2RequiredArgs<FFixedSampledSequenceView_const_&,unsigned_int_&&>_>
::
TSlateDecl<SAudioOscilloscopePanelWidget,RequiredArgs::T2RequiredArgs<FFixedSampledSequenceView_const_&,unsigned_int_&&>_>
          (TSlateDecl<SAudioOscilloscopePanelWidget,RequiredArgs::T2RequiredArgs<FFixedSampledSequenceView_const_&,unsigned_int_&&>_>
           *this,char *param_1,char *param_2,int param_3,
          T2RequiredArgs<FFixedSampledSequenceView_const_&,unsigned_int_&&> *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SAudioOscilloscopePanelWidget,RequiredArgs::T2RequiredArgs<FFixedSampledSequenceView_const_&,unsigned_int_&&>_>
  *pTVar7;
  SAudioOscilloscopePanelWidget *pSVar8;
  SAudioOscilloscopePanelWidget *local_28;
  FSharedReferencer<1> local_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (SAudioOscilloscopePanelWidget *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0x4d0);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pSVar8 = (SAudioOscilloscopePanelWidget *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VSAudioOscilloscopePanelWidget___00_SharedPointerInternals__6B_
    ;
    memset(pTVar6 + 1,0,0x4c0);
    SAudioOscilloscopePanelWidget::SAudioOscilloscopePanelWidget
              ((SAudioOscilloscopePanelWidget *)(pTVar6 + 1));
    pSVar8 = (SAudioOscilloscopePanelWidget *)(pTVar6 + 1);
    if (pSVar8 == (SAudioOscilloscopePanelWidget *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SAudioOscilloscopePanelWidget,RequiredArgs::T2RequiredArgs<FFixedSampledSequenceView_const_&,unsigned_int_&&>_>
                  *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14d8a9be0;
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
LAB_14d8a9be0:
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = pSVar8;
  local_20.ReferenceController = pTVar6;
  if (this != (TSlateDecl<SAudioOscilloscopePanelWidget,RequiredArgs::T2RequiredArgs<FFixedSampledSequenceView_const_&,unsigned_int_&&>_>
               *)&local_28) {
    (this->_Widget).Object = pSVar8;
    local_28 = (SAudioOscilloscopePanelWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  if ((this->_Widget).Object == (SAudioOscilloscopePanelWidget *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SAudioOscilloscopePanelWidget,RequiredArgs::T2RequiredArgs<FFixedSampledSequenceView_const_&,unsigned_int_&&>_>
                *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x4c0);
  return this;
}

// TSlateDecl<SAudioRadialSlider,RequiredArgs::T0RequiredArgs> @ 14d8a9ca0

/* WARNING: Enum "Type": Some values do not have unique names */

TSlateDecl<SAudioRadialSlider,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SAudioRadialSlider,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SAudioRadialSlider,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SAudioRadialSlider,RequiredArgs::T0RequiredArgs> *this,char *param_1,
          char *param_2,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SAudioRadialSlider,RequiredArgs::T0RequiredArgs> *pTVar7;
  SAudioRadialSlider *pSVar8;
  SAudioRadialSlider *local_28;
  FSharedReferencer<1> local_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (SAudioRadialSlider *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0x558);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pSVar8 = (SAudioRadialSlider *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VSAudioRadialSlider___00_SharedPointerInternals__6B_;
    SAudioRadialSlider::SAudioRadialSlider((SAudioRadialSlider *)(pTVar6 + 1));
    pSVar8 = (SAudioRadialSlider *)(pTVar6 + 1);
    if (pSVar8 == (SAudioRadialSlider *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SAudioRadialSlider,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14d8a9dbf;
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
LAB_14d8a9dbf:
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = pSVar8;
  local_20.ReferenceController = pTVar6;
  if (this != (TSlateDecl<SAudioRadialSlider,RequiredArgs::T0RequiredArgs> *)&local_28) {
    (this->_Widget).Object = pSVar8;
    local_28 = (SAudioRadialSlider *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  if ((this->_Widget).Object == (SAudioRadialSlider *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SAudioRadialSlider,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x548);
  return this;
}

// TSlateDecl<SAudioSlider,RequiredArgs::T0RequiredArgs> @ 14d8a9e80

/* WARNING: Enum "Type": Some values do not have unique names */

TSlateDecl<SAudioSlider,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SAudioSlider,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SAudioSlider,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SAudioSlider,RequiredArgs::T0RequiredArgs> *this,char *param_1,char *param_2,
          int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SAudioSlider,RequiredArgs::T0RequiredArgs> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  SAudioSlider *pSVar9;
  undefined8 local_res8;
  SAudioSlider *local_38;
  FSharedReferencer<1> local_30;
  
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SAudioSlider *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_RequiredArgs = param_4;
  pTVar6 = ::operator_new(0x590);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pSVar9 = (SAudioSlider *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VSAudioSlider___00_SharedPointerInternals__6B_;
    SAudioSliderBase::SAudioSliderBase((SAudioSliderBase *)(pTVar6 + 1));
    param_4 = (T0RequiredArgs *)0x0;
    pTVar6[1]._padding_ = (longlong)&___7SAudioSlider__6B_;
    pTVar6[0x58]._padding_ = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(pTVar6 + 0x58),(FObjectPtr)&param_4);
    local_res8 = 0;
    pTVar6[0x58].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x58].WeakReferenceCount = (atomic<int>)0x0;
    FWeakObjectPtr::operator=
              ((FWeakObjectPtr *)&pTVar6[0x58].SharedReferenceCount,(FObjectPtr)&local_res8);
    pSVar9 = (SAudioSlider *)(pTVar6 + 1);
    pTVar8 = pTVar6;
    if (pSVar9 == (SAudioSlider *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SAudioSlider,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14d8a9fe1;
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
LAB_14d8a9fe1:
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = pSVar9;
  local_30.ReferenceController = pTVar8;
  if (this != (TSlateDecl<SAudioSlider,RequiredArgs::T0RequiredArgs> *)&local_38) {
    (this->_Widget).Object = pSVar9;
    local_38 = (SAudioSlider *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  if ((this->_Widget).Object == (SAudioSlider *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SAudioSlider,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x580);
  return this;
}

// TSlateDecl<SAudioSliderBase,RequiredArgs::T0RequiredArgs> @ 14d8aa0b0

/* WARNING: Enum "Type": Some values do not have unique names */

TSlateDecl<SAudioSliderBase,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SAudioSliderBase,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SAudioSliderBase,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SAudioSliderBase,RequiredArgs::T0RequiredArgs> *this,char *param_1,
          char *param_2,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SAudioSliderBase,RequiredArgs::T0RequiredArgs> *pTVar7;
  SAudioSliderBase *pSVar8;
  SAudioSliderBase *local_28;
  FSharedReferencer<1> local_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (SAudioSliderBase *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0x580);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pSVar8 = (SAudioSliderBase *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VSAudioSliderBase___00_SharedPointerInternals__6B_;
    SAudioSliderBase::SAudioSliderBase((SAudioSliderBase *)(pTVar6 + 1));
    pSVar8 = (SAudioSliderBase *)(pTVar6 + 1);
    if (pSVar8 == (SAudioSliderBase *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SAudioSliderBase,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14d8aa1cf;
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
LAB_14d8aa1cf:
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = pSVar8;
  local_20.ReferenceController = pTVar6;
  if (this != (TSlateDecl<SAudioSliderBase,RequiredArgs::T0RequiredArgs> *)&local_28) {
    (this->_Widget).Object = pSVar8;
    local_28 = (SAudioSliderBase *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  if ((this->_Widget).Object == (SAudioSliderBase *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SAudioSliderBase,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x570);
  return this;
}

// TSlateDecl<SAudioSpectrogram,RequiredArgs::T0RequiredArgs> @ 14d8aa290

TSlateDecl<SAudioSpectrogram,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SAudioSpectrogram,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SAudioSpectrogram,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SAudioSpectrogram,RequiredArgs::T0RequiredArgs> *this,char *param_1,
          char *param_2,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SAudioSpectrogram,RequiredArgs::T0RequiredArgs> *pTVar7;
  SAudioSpectrogram *pSVar8;
  SAudioSpectrogram *local_28;
  FSharedReferencer<1> local_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (SAudioSpectrogram *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0x490);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pSVar8 = (SAudioSpectrogram *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VSAudioSpectrogram___00_SharedPointerInternals__6B_;
    memset(pTVar6 + 1,0,0x480);
    SAudioSpectrogram::SAudioSpectrogram((SAudioSpectrogram *)(pTVar6 + 1));
    pSVar8 = (SAudioSpectrogram *)(pTVar6 + 1);
    if (pSVar8 == (SAudioSpectrogram *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SAudioSpectrogram,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14d8aa3c0;
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
LAB_14d8aa3c0:
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = pSVar8;
  local_20.ReferenceController = pTVar6;
  if (this != (TSlateDecl<SAudioSpectrogram,RequiredArgs::T0RequiredArgs> *)&local_28) {
    (this->_Widget).Object = pSVar8;
    local_28 = (SAudioSpectrogram *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  if ((this->_Widget).Object == (SAudioSpectrogram *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SAudioSpectrogram,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x480);
  return this;
}

// TSlateDecl<SAudioSpectrumPlot,RequiredArgs::T0RequiredArgs> @ 14d8aa480

TSlateDecl<SAudioSpectrumPlot,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SAudioSpectrumPlot,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SAudioSpectrumPlot,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SAudioSpectrumPlot,RequiredArgs::T0RequiredArgs> *this,char *param_1,
          char *param_2,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SAudioSpectrumPlot,RequiredArgs::T0RequiredArgs> *pTVar7;
  SAudioSpectrumPlot *pSVar8;
  SAudioSpectrumPlot *local_28;
  FSharedReferencer<1> local_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (SAudioSpectrumPlot *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0x650);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pSVar8 = (SAudioSpectrumPlot *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VSAudioSpectrumPlot___00_SharedPointerInternals__6B_;
    memset(pTVar6 + 1,0,0x640);
    SAudioSpectrumPlot::SAudioSpectrumPlot((SAudioSpectrumPlot *)(pTVar6 + 1));
    pSVar8 = (SAudioSpectrumPlot *)(pTVar6 + 1);
    if (pSVar8 == (SAudioSpectrumPlot *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SAudioSpectrumPlot,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14d8aa5b0;
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
LAB_14d8aa5b0:
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = pSVar8;
  local_20.ReferenceController = pTVar6;
  if (this != (TSlateDecl<SAudioSpectrumPlot,RequiredArgs::T0RequiredArgs> *)&local_28) {
    (this->_Widget).Object = pSVar8;
    local_28 = (SAudioSpectrumPlot *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  if ((this->_Widget).Object == (SAudioSpectrumPlot *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SAudioSpectrumPlot,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x640);
  return this;
}

// TSlateDecl<SAudioTextBox,RequiredArgs::T0RequiredArgs> @ 14d8aa670

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TSlateDecl<SAudioTextBox,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SAudioTextBox,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SAudioTextBox,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SAudioTextBox,RequiredArgs::T0RequiredArgs> *this,char *param_1,char *param_2,
          int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TSlateDecl<SAudioTextBox,RequiredArgs::T0RequiredArgs> *pTVar6;
  SAudioTextBox *pSVar7;
  TReferenceControllerBase<1> *pTVar8;
  undefined1 local_38 [24];
  TReferenceControllerBase<1> *pTStack_20;
  
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SAudioTextBox *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_RequiredArgs = param_4;
  pTStack_20 = ::operator_new(0x390);
  if (pTStack_20 == (TReferenceControllerBase<1> *)0x0) {
    local_38._16_8_ = ___xmm_00000000000000000000000000000010;
    pTStack_20 = _UNK_150651568;
    pSVar7 = (SAudioTextBox *)&DAT_00000010;
  }
  else {
    pTStack_20->SharedReferenceCount = (atomic<int>)0x1;
    pTStack_20->WeakReferenceCount = (atomic<int>)0x1;
    pTStack_20->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VSAudioTextBox___00_SharedPointerInternals__6B_;
    memset(pTStack_20 + 1,0,0x380);
    SCompoundWidget::SCompoundWidget((SCompoundWidget *)(pTStack_20 + 1));
    pTStack_20[0x2f]._padding_ = 0;
    pTStack_20[1]._padding_ = (longlong)&___7SAudioTextBox__6B_;
    pSVar7 = (SAudioTextBox *)(pTStack_20 + 1);
    *(undefined2 *)&pTStack_20[0x2f].SharedReferenceCount = 0;
    pTStack_20[0x2c]._padding_ = 0;
    pTStack_20[0x2c].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x2c].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x2d]._padding_ = 0;
    pTStack_20[0x2d].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x2d].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x2e]._padding_ = 0;
    pTStack_20[0x2e].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x2e].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x31]._padding_ = 0;
    pTStack_20[0x30]._padding_ = 0;
    pTStack_20[0x30].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x30].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined2 *)&pTStack_20[0x31].SharedReferenceCount = 0;
    pTStack_20[0x33]._padding_ = 0;
    pTStack_20[0x32]._padding_ = 0;
    pTStack_20[0x32].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x32].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined1 *)&pTStack_20[0x34].SharedReferenceCount = 0;
    *(undefined1 *)&pTStack_20[0x34].WeakReferenceCount = 0;
    pTStack_20[0x33].SharedReferenceCount = (atomic<int>)0x3f800000;
    pTStack_20[0x33].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTStack_20[0x34]._padding_ = 0x3f800000;
    *(undefined4 *)((longlong)&pTStack_20[0x34]._padding_ + 4) = 0x3f800000;
    pTStack_20[0x36]._padding_ = 0;
    pTStack_20[0x35]._padding_ = 0;
    pTStack_20[0x35].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x35].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x36].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x36].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x37]._padding_ = 0;
    pTStack_20[0x37].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x38]._padding_ = 0;
    pTStack_20[0x38].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_20[0x38].WeakReferenceCount = (atomic<int>)0x3ff00000;
    pTVar8 = pTStack_20;
    local_38._16_8_ = pSVar7;
    if (pSVar7 == (SAudioTextBox *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar6 = (TSlateDecl<SAudioTextBox,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
        return pTVar6;
      }
      goto LAB_14d8aa88d;
    }
  }
  if (((pSVar7->_padding_ == 0) || (pSVar7->_padding_ == 0)) ||
     (*(int *)(pSVar7->_padding_ + 8) < 1)) {
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pSVar7->_padding_ = (longlong)pSVar7;
    if (pTVar8 != (TReferenceControllerBase<1> *)pSVar7->_padding_) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pSVar7->_padding_;
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
      pSVar7->_padding_ = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
LAB_14d8aa88d:
  local_38._0_8_ = local_38._16_8_;
  local_38._8_8_ = pTStack_20;
  if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this != (TSlateDecl<SAudioTextBox,RequiredArgs::T0RequiredArgs> *)local_38) {
    (this->_Widget).Object = (SAudioTextBox *)local_38._16_8_;
    local_38._0_8_ = (SAudioTextBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,(FSharedReferencer<1> *)(local_38 + 8));
  }
  TSharedPtr<SAudioTextBox,1>::~TSharedPtr<SAudioTextBox,1>((TSharedPtr<SAudioTextBox,1> *)local_38)
  ;
  TSharedRef<SAudioTextBox,1>::~TSharedRef<SAudioTextBox,1>
            ((TSharedRef<SAudioTextBox,1> *)(local_38 + 0x10));
  if ((this->_Widget).Object == (SAudioTextBox *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TSlateDecl<SAudioTextBox,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
      return pTVar6;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x380);
  return this;
}

// TSlateDecl<SAudioVolumeRadialSlider,RequiredArgs::T0RequiredArgs> @ 14d8aa960

/* WARNING: Enum "Type": Some values do not have unique names */

TSlateDecl<SAudioVolumeRadialSlider,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SAudioVolumeRadialSlider,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SAudioVolumeRadialSlider,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SAudioVolumeRadialSlider,RequiredArgs::T0RequiredArgs> *this,char *param_1,
          char *param_2,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SAudioVolumeRadialSlider,RequiredArgs::T0RequiredArgs> *pTVar7;
  SAudioVolumeRadialSlider *pSVar8;
  SAudioVolumeRadialSlider *local_28;
  FSharedReferencer<1> local_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (SAudioVolumeRadialSlider *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0x560);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pSVar8 = (SAudioVolumeRadialSlider *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VSAudioVolumeRadialSlider___00_SharedPointerInternals__6B_
    ;
    SAudioRadialSlider::SAudioRadialSlider((SAudioRadialSlider *)(pTVar6 + 1));
    pSVar8 = (SAudioVolumeRadialSlider *)(pTVar6 + 1);
    *(undefined1 *)&pTVar6[0x55].SharedReferenceCount = 1;
    pTVar6[1]._padding_ = (longlong)&___7SAudioVolumeRadialSlider__6B_;
    if (pSVar8 == (SAudioVolumeRadialSlider *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SAudioVolumeRadialSlider,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14d8aaa91;
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
LAB_14d8aaa91:
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = pSVar8;
  local_20.ReferenceController = pTVar6;
  if (this != (TSlateDecl<SAudioVolumeRadialSlider,RequiredArgs::T0RequiredArgs> *)&local_28) {
    (this->_Widget).Object = pSVar8;
    local_28 = (SAudioVolumeRadialSlider *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  if ((this->_Widget).Object == (SAudioVolumeRadialSlider *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SAudioVolumeRadialSlider,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x550);
  return this;
}

// TSlateDecl<SAudioVolumeSlider,RequiredArgs::T0RequiredArgs> @ 14d8aab50

/* WARNING: Enum "Type": Some values do not have unique names */

TSlateDecl<SAudioVolumeSlider,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SAudioVolumeSlider,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SAudioVolumeSlider,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SAudioVolumeSlider,RequiredArgs::T0RequiredArgs> *this,char *param_1,
          char *param_2,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SAudioVolumeSlider,RequiredArgs::T0RequiredArgs> *pTVar7;
  SAudioVolumeSlider *pSVar8;
  SAudioVolumeSlider *local_28;
  FSharedReferencer<1> local_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (SAudioVolumeSlider *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0x590);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pSVar8 = (SAudioVolumeSlider *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VSAudioVolumeSlider___00_SharedPointerInternals__6B_;
    SAudioSliderBase::SAudioSliderBase((SAudioSliderBase *)(pTVar6 + 1));
    pSVar8 = (SAudioVolumeSlider *)(pTVar6 + 1);
    *(undefined1 *)&pTVar6[0x58]._padding_ = 1;
    pTVar6[1]._padding_ = (longlong)&___7SAudioVolumeSlider__6B_;
    if (pSVar8 == (SAudioVolumeSlider *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SAudioVolumeSlider,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14d8aac81;
    }
  }
  if (((*(longlong *)&pSVar8->field_0x8 == 0) || (*(longlong *)&pSVar8->field_0x10 == 0)) ||
     (*(int *)(*(longlong *)&pSVar8->field_0x10 + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(SAudioVolumeSlider **)&pSVar8->field_0x8 = pSVar8;
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
LAB_14d8aac81:
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = pSVar8;
  local_20.ReferenceController = pTVar6;
  if (this != (TSlateDecl<SAudioVolumeSlider,RequiredArgs::T0RequiredArgs> *)&local_28) {
    (this->_Widget).Object = pSVar8;
    local_28 = (SAudioVolumeSlider *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  if ((this->_Widget).Object == (SAudioVolumeSlider *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SAudioVolumeSlider,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x580);
  return this;
}

// TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,1>_&&>_> @ 14d8aad40

TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>,1>_&&>_>
* __thiscall
TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,1>_&&>_>
::
TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,1>_&&>_>
          (void *this,char *param_1,char *param_2,int param_3,
          T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>,1>_&&>
          *param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  TReferenceControllerBase<1> *pTVar7;
  TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>,1>_&&>_>
  *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *local_28;
  FSharedReferencer<1> local_20;
  
  *(T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>,1>_&&> **)
   ((longlong)this + 0x10) = param_4;
  *(undefined8 *)this = 0;
  *(undefined8 *)((longlong)this + 8) = 0;
  pTVar7 = ::operator_new(0x2f0);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    pTVar7 = (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VSExpanderArrow___00_SharedPointerInternals__6B_;
    SExpanderArrow::SExpanderArrow((SExpanderArrow *)(pTVar7 + 1));
    pTVar9 = pTVar7 + 1;
    if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>,1>_&&>_>
                  *)(*pcVar5)();
        return pTVar8;
      }
      goto LAB_14d8aae5f;
    }
  }
  lVar3._0_4_ = pTVar9->SharedReferenceCount;
  lVar3._4_4_ = pTVar9->WeakReferenceCount;
  if (((lVar3 == 0) || (pTVar9[1]._padding_ == 0)) || (*(int *)(pTVar9[1]._padding_ + 8) < 1)) {
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(TReferenceControllerBase<1> **)&pTVar9->SharedReferenceCount = pTVar9;
    if (pTVar7 != (TReferenceControllerBase<1> *)pTVar9[1]._padding_) {
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar7->WeakReferenceCount = (atomic<int>)((int)pTVar7->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = (longlong *)pTVar9[1]._padding_;
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
      pTVar9[1]._padding_ = (longlong)pTVar7;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  }
LAB_14d8aae5f:
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = pTVar9;
  local_20.ReferenceController = pTVar7;
  if (this != &local_28) {
    *(TReferenceControllerBase<1> **)this = pTVar9;
    local_28 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)this + 8),&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  if (*(longlong *)this == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>,1>_&&>_>
                *)(*pcVar5)();
      return pTVar8;
    }
  }
  SWidget::SetDebugInfo(*(SWidget **)this,param_1,param_2,param_3,0x2e0);
  return this;
}

// TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>_&&>_> @ 14d8aaf20

TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>_&&>_>
* __thiscall
TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>_&&>_>
::
TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>_&&>_>
          (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>_&&>_>
           *this,char *param_1,char *param_2,int param_3,
          T1RequiredArgs<TSharedRef<STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>_&&>
          *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>_&&>_>
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
        pTVar7 = (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>_&&>_>
                  *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14d8ab03f;
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
LAB_14d8ab03f:
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = pSVar8;
  local_20.ReferenceController = pTVar6;
  if (this != (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>_&&>_>
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
      pTVar7 = (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>_&&>_>
                *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x2e0);
  return this;
}

// TSlateDecl<SFixedSampledSequenceRuler,RequiredArgs::T1RequiredArgs<TSharedRef<FFixedSampledSequenceGridData,1>_&>_> @ 14d8ab100

TSlateDecl<SFixedSampledSequenceRuler,RequiredArgs::T1RequiredArgs<TSharedRef<FFixedSampledSequenceGridData,1>_&>_>
* __thiscall
TSlateDecl<SFixedSampledSequenceRuler,RequiredArgs::T1RequiredArgs<TSharedRef<FFixedSampledSequenceGridData,1>_&>_>
::
TSlateDecl<SFixedSampledSequenceRuler,RequiredArgs::T1RequiredArgs<TSharedRef<FFixedSampledSequenceGridData,1>_&>_>
          (TSlateDecl<SFixedSampledSequenceRuler,RequiredArgs::T1RequiredArgs<TSharedRef<FFixedSampledSequenceGridData,1>_&>_>
           *this,char *param_1,char *param_2,int param_3,
          T1RequiredArgs<TSharedRef<FFixedSampledSequenceGridData,1>_&> *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  FLinearColor FVar5;
  bool bVar6;
  TReferenceControllerBase<1> *pTVar7;
  TSlateDecl<SFixedSampledSequenceRuler,RequiredArgs::T1RequiredArgs<TSharedRef<FFixedSampledSequenceGridData,1>_&>_>
  *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  SFixedSampledSequenceRuler *pSVar10;
  SFixedSampledSequenceRuler *local_38;
  FSharedReferencer<1> local_30;
  
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SFixedSampledSequenceRuler *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_RequiredArgs = param_4;
  pTVar7 = ::operator_new(0x550);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    pSVar10 = (SFixedSampledSequenceRuler *)&DAT_00000010;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VSFixedSampledSequenceRuler___00_SharedPointerInternals__6B_
    ;
    memset(pTVar7 + 1,0,0x540);
    SCompoundWidget::SCompoundWidget((SCompoundWidget *)(pTVar7 + 1));
    pTVar7[1]._padding_ = (longlong)&___7SFixedSampledSequenceRuler__6B_;
    pTVar7[0x2b].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0x2b].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[0x2c]._padding_ = 0;
    pTVar7[0x2c].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0x2c].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[0x2d]._padding_ = 2;
    pTVar7[0x2d].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0x2d].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar7[0x2e]._padding_ = 0;
    pTVar7[0x2e].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0x2e].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[0x2f]._padding_ = 0;
    pTVar7[0x2f].SharedReferenceCount = (atomic<int>)0x0;
    FVar5 = FLinearColor::Black;
    pTVar7[0x2f].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined1 *)&pTVar7[0x31]._padding_ = 0;
    ((FLinearColor_u_0 *)(pTVar7 + 0x30))->_s_0 = (FLinearColor_u_0_s_0)FVar5.field0_0x0;
    FSlateBrush::FSlateBrush((FSlateBrush *)(pTVar7 + 0x32));
    FSlateBrush::FSlateBrush((FSlateBrush *)(pTVar7 + 0x3d));
    *(undefined4 *)&pTVar7[0x48]._padding_ = 0x437f0000;
    *(undefined4 *)((longlong)&pTVar7[0x48]._padding_ + 4) = 0x3dcccccd;
    pTVar7[0x48].SharedReferenceCount = (atomic<int>)0x3e4ccccd;
    pTVar7[0x48].WeakReferenceCount = (atomic<int>)0x3f800000;
    *(undefined1 *)&pTVar7[0x49]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar7[0x49]._padding_ + 4) = 0x3f800000;
    pTVar7[0x49].SharedReferenceCount = (atomic<int>)0x3f800000;
    pTVar7[0x49].WeakReferenceCount = (atomic<int>)0x3f800000;
    *(undefined4 *)&pTVar7[0x4a]._padding_ = 0x3f666666;
    *(undefined1 *)((longlong)&pTVar7[0x4a]._padding_ + 4) = 0;
    pTVar7[0x4a].SharedReferenceCount = (atomic<int>)0x3f800000;
    pTVar7[0x4a].WeakReferenceCount = (atomic<int>)0x3f800000;
    *(undefined4 *)&pTVar7[0x4b]._padding_ = 0x3f800000;
    *(undefined4 *)((longlong)&pTVar7[0x4b]._padding_ + 4) = 0x3f666666;
    *(undefined1 *)&pTVar7[0x4b].SharedReferenceCount = 0;
    *(undefined8 *)&pTVar7[0x4b].WeakReferenceCount = 0;
    *(undefined4 *)((longlong)&pTVar7[0x4c]._padding_ + 4) = 0x41700000;
    pTVar7[0x4c].SharedReferenceCount = (atomic<int>)0x40a00000;
    pTVar7[0x4c].WeakReferenceCount = (atomic<int>)0x0;
    FSlateFontInfo::FSlateFontInfo((FSlateFontInfo *)(pTVar7 + 0x4d));
    pSVar10 = (SFixedSampledSequenceRuler *)(pTVar7 + 1);
    pTVar7[0x53]._padding_ = 0;
    pTVar7[0x53].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0x53].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined1 *)((longlong)&pTVar7[0x54]._padding_ + 4) = 1;
    pTVar9 = pTVar7;
    if (pSVar10 == (SFixedSampledSequenceRuler *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TSlateDecl<SFixedSampledSequenceRuler,RequiredArgs::T1RequiredArgs<TSharedRef<FFixedSampledSequenceGridData,1>_&>_>
                  *)(*pcVar4)();
        return pTVar8;
      }
      goto LAB_14d8ab374;
    }
  }
  if (((*(longlong *)&pSVar10->field_0x8 == 0) || (*(longlong *)&pSVar10->field_0x10 == 0)) ||
     (*(int *)(*(longlong *)&pSVar10->field_0x10 + 8) < 1)) {
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(SFixedSampledSequenceRuler **)&pSVar10->field_0x8 = pSVar10;
    if (pTVar9 != *(TReferenceControllerBase<1> **)&pSVar10->field_0x10) {
      if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar9->WeakReferenceCount = (atomic<int>)((int)pTVar9->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pSVar10->field_0x10;
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
      *(TReferenceControllerBase<1> **)&pSVar10->field_0x10 = pTVar9;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  }
LAB_14d8ab374:
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = pSVar10;
  local_30.ReferenceController = pTVar9;
  if (this != (TSlateDecl<SFixedSampledSequenceRuler,RequiredArgs::T1RequiredArgs<TSharedRef<FFixedSampledSequenceGridData,1>_&>_>
               *)&local_38) {
    (this->_Widget).Object = pSVar10;
    local_38 = (SFixedSampledSequenceRuler *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  if ((this->_Widget).Object == (SFixedSampledSequenceRuler *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSlateDecl<SFixedSampledSequenceRuler,RequiredArgs::T1RequiredArgs<TSharedRef<FFixedSampledSequenceGridData,1>_&>_>
                *)(*pcVar4)();
      return pTVar8;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x540);
  return this;
}

// TSlateDecl<SFixedSampledSequenceVectorViewer,RequiredArgs::T2RequiredArgs<TArrayView<float_const_,int>_const_&,unsigned_int_const_&>_> @ 14d8ab440

TSlateDecl<SFixedSampledSequenceVectorViewer,RequiredArgs::T2RequiredArgs<TArrayView<float_const_,int>_const_&,unsigned_int_const_&>_>
* __thiscall
TSlateDecl<SFixedSampledSequenceVectorViewer,RequiredArgs::T2RequiredArgs<TArrayView<float_const_,int>_const_&,unsigned_int_const_&>_>
::
TSlateDecl<SFixedSampledSequenceVectorViewer,RequiredArgs::T2RequiredArgs<TArrayView<float_const_,int>_const_&,unsigned_int_const_&>_>
          (TSlateDecl<SFixedSampledSequenceVectorViewer,RequiredArgs::T2RequiredArgs<TArrayView<float_const_,int>_const_&,unsigned_int_const_&>_>
           *this,char *param_1,char *param_2,int param_3,
          T2RequiredArgs<TArrayView<float_const_,int>_const_&,unsigned_int_const_&> *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  FLinearColor FVar5;
  bool bVar6;
  TReferenceControllerBase<1> *pTVar7;
  TSlateDecl<SFixedSampledSequenceVectorViewer,RequiredArgs::T2RequiredArgs<TArrayView<float_const_,int>_const_&,unsigned_int_const_&>_>
  *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  SFixedSampledSequenceVectorViewer *pSVar10;
  SFixedSampledSequenceVectorViewer *local_38;
  FSharedReferencer<1> local_30;
  
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SFixedSampledSequenceVectorViewer *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_RequiredArgs = param_4;
  pTVar7 = ::operator_new(0x288);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    pSVar10 = (SFixedSampledSequenceVectorViewer *)&DAT_00000010;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VSFixedSampledSequenceVectorViewer___00_SharedPointerInternals__6B_
    ;
    memset(pTVar7 + 1,0,0x278);
    SLeafWidget::SLeafWidget((SLeafWidget *)(pTVar7 + 1));
    *(undefined1 *)&pTVar7[0x22].SharedReferenceCount = 0;
    pTVar7[1]._padding_ = (longlong)&___7SFixedSampledSequenceVectorViewer__6B_;
    pSVar10 = (SFixedSampledSequenceVectorViewer *)(pTVar7 + 1);
    pTVar7[0x23]._padding_ = 0;
    pTVar7[0x24]._padding_ = 0x3ff0000000000000;
    pTVar7[0x23].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0x24].SharedReferenceCount = (atomic<int>)0x40000000;
    pTVar7[0x24].WeakReferenceCount = (atomic<int>)0x3f733333;
    *(undefined4 *)&pTVar7[0x25]._padding_ = 0x3dcccccd;
    *(undefined4 *)((longlong)&pTVar7[0x25]._padding_ + 4) = 0x3dcccccd;
    pTVar7[0x25].SharedReferenceCount = (atomic<int>)0x3f800000;
    pTVar7[0x25].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined1 *)&pTVar7[0x26]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar7[0x26]._padding_ + 4) = 0x44340000;
    pTVar7[0x26].SharedReferenceCount = (atomic<int>)0x44340000;
    FVar5 = FLinearColor::White;
    pTVar7[0x27].WeakReferenceCount = (atomic<int>)0x3f800000;
    *(undefined4 *)&pTVar7[0x28]._padding_ = 0x3f800000;
    *(FLinearColor_u_0 *)&pTVar7[0x26].WeakReferenceCount = (FLinearColor_u_0_s_0)FVar5.field0_0x0;
    pTVar9 = pTVar7;
    if (pSVar10 == (SFixedSampledSequenceVectorViewer *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TSlateDecl<SFixedSampledSequenceVectorViewer,RequiredArgs::T2RequiredArgs<TArrayView<float_const_,int>_const_&,unsigned_int_const_&>_>
                  *)(*pcVar4)();
        return pTVar8;
      }
      goto LAB_14d8ab610;
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
      plVar3 = (longlong *)pSVar10->_padding_;
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
      pSVar10->_padding_ = (longlong)pTVar9;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  }
LAB_14d8ab610:
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = pSVar10;
  local_30.ReferenceController = pTVar9;
  if (this != (TSlateDecl<SFixedSampledSequenceVectorViewer,RequiredArgs::T2RequiredArgs<TArrayView<float_const_,int>_const_&,unsigned_int_const_&>_>
               *)&local_38) {
    (this->_Widget).Object = pSVar10;
    local_38 = (SFixedSampledSequenceVectorViewer *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  if ((this->_Widget).Object == (SFixedSampledSequenceVectorViewer *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSlateDecl<SFixedSampledSequenceVectorViewer,RequiredArgs::T2RequiredArgs<TArrayView<float_const_,int>_const_&,unsigned_int_const_&>_>
                *)(*pcVar4)();
      return pTVar8;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x278);
  return this;
}

// TSlateDecl<SFixedSampledSequenceViewer,RequiredArgs::T3RequiredArgs<TArrayView<float_const_,int>_const_&,unsigned_int_const_&,TSharedRef<FFixedSampledSequenceGridData,1>_&>_> @ 14d8ab6d0

TSlateDecl<SFixedSampledSequenceViewer,RequiredArgs::T3RequiredArgs<TArrayView<float_const_,int>_const_&,unsigned_int_const_&,TSharedRef<FFixedSampledSequenceGridData,1>_&>_>
* __thiscall
TSlateDecl<SFixedSampledSequenceViewer,RequiredArgs::T3RequiredArgs<TArrayView<float_const_,int>_const_&,unsigned_int_const_&,TSharedRef<FFixedSampledSequenceGridData,1>_&>_>
::
TSlateDecl<SFixedSampledSequenceViewer,RequiredArgs::T3RequiredArgs<TArrayView<float_const_,int>_const_&,unsigned_int_const_&,TSharedRef<FFixedSampledSequenceGridData,1>_&>_>
          (TSlateDecl<SFixedSampledSequenceViewer,RequiredArgs::T3RequiredArgs<TArrayView<float_const_,int>_const_&,unsigned_int_const_&,TSharedRef<FFixedSampledSequenceGridData,1>_&>_>
           *this,char *param_1,char *param_2,int param_3,
          T3RequiredArgs<TArrayView<float_const_,int>_const_&,unsigned_int_const_&,TSharedRef<FFixedSampledSequenceGridData,1>_&>
          *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  FLinearColor FVar5;
  bool bVar6;
  TReferenceControllerBase<1> *pTVar7;
  TSlateDecl<SFixedSampledSequenceViewer,RequiredArgs::T3RequiredArgs<TArrayView<float_const_,int>_const_&,unsigned_int_const_&,TSharedRef<FFixedSampledSequenceGridData,1>_&>_>
  *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  SFixedSampledSequenceViewer *pSVar10;
  SFixedSampledSequenceViewer *local_38;
  FSharedReferencer<1> local_30;
  
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SFixedSampledSequenceViewer *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_RequiredArgs = param_4;
  pTVar7 = ::operator_new(0x410);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    pSVar10 = (SFixedSampledSequenceViewer *)&DAT_00000010;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VSFixedSampledSequenceViewer___00_SharedPointerInternals__6B_
    ;
    memset(pTVar7 + 1,0,0x400);
    SLeafWidget::SLeafWidget((SLeafWidget *)(pTVar7 + 1));
    *(undefined1 *)&pTVar7[0x22].SharedReferenceCount = 0;
    pTVar7[1]._padding_ = (longlong)&___7SFixedSampledSequenceViewer__6B_;
    pTVar7[0x23]._padding_ = 0;
    pTVar7[0x23].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0x24].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0x24].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[0x25]._padding_ = 0;
    pTVar7[0x25].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0x25].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar7[0x26]._padding_ = 0;
    pTVar7[0x26].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0x26].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[0x27]._padding_ = 0;
    pTVar7[0x27].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0x27].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined1 *)&pTVar7[0x24]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar7[0x24]._padding_ + 4) = 0;
    FSlateBrush::FSlateBrush((FSlateBrush *)(pTVar7 + 0x28));
    *(undefined4 *)&pTVar7[0x33]._padding_ = 0x3ca3d70a;
    pSVar10 = (SFixedSampledSequenceViewer *)(pTVar7 + 1);
    *(undefined4 *)((longlong)&pTVar7[0x33]._padding_ + 4) = 0x3ca3d70a;
    pTVar7[0x33].SharedReferenceCount = (atomic<int>)0x3ca3d70a;
    pTVar7[0x33].WeakReferenceCount = (atomic<int>)0x3f800000;
    *(undefined1 *)&pTVar7[0x34]._padding_ = 0;
    FVar5 = FLinearColor::White;
    *(undefined1 *)((longlong)&pTVar7[0x35]._padding_ + 4) = 0;
    ((FLinearColor_u_0 *)((longlong)&pTVar7[0x34]._padding_ + 4))->_s_0 =
         (FLinearColor_u_0_s_0)FVar5.field0_0x0;
    FVar5 = FLinearColor::Black;
    *(undefined1 *)&pTVar7[0x36].SharedReferenceCount = 0;
    *(FLinearColor_u_0 *)&pTVar7[0x35].SharedReferenceCount = (FLinearColor_u_0_s_0)FVar5.field0_0x0
    ;
    *(undefined8 *)&pTVar7[0x36].WeakReferenceCount = 0;
    *(undefined4 *)((longlong)&pTVar7[0x37]._padding_ + 4) = 0;
    pTVar7[0x37].SharedReferenceCount = (atomic<int>)0x3f000000;
    *(undefined1 *)&pTVar7[0x37].WeakReferenceCount = 0;
    FVar5 = FLinearColor::Black;
    *(undefined1 *)&pTVar7[0x39]._padding_ = 0;
    ((FLinearColor_u_0 *)(pTVar7 + 0x38))->_s_0 = (FLinearColor_u_0_s_0)FVar5.field0_0x0;
    *(undefined8 *)((longlong)&pTVar7[0x39]._padding_ + 4) = 0x3f800000;
    pTVar7[0x39].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar7[0x3a]._padding_ = 0x40200000;
    *(undefined4 *)((longlong)&pTVar7[0x3a]._padding_ + 4) = 0x3f800000;
    *(undefined2 *)&pTVar7[0x3a].SharedReferenceCount = 0;
    *(undefined8 *)&pTVar7[0x3a].WeakReferenceCount = 0;
    pTVar7[0x3b].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0x3b].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[0x3c]._padding_ = 0;
    pTVar7[0x3c].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0x3c].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[0x3d]._padding_ = 0;
    pTVar7[0x3d].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0x3d].WeakReferenceCount = (atomic<int>)0x3ff00000;
    *(undefined4 *)&pTVar7[0x3e]._padding_ = 0x40000000;
    *(undefined4 *)((longlong)&pTVar7[0x3e]._padding_ + 4) = 0x3f733333;
    pTVar7[0x3e].SharedReferenceCount = (atomic<int>)0x3dcccccd;
    pTVar7[0x3e].WeakReferenceCount = (atomic<int>)0x3dcccccd;
    pTVar7[0x3f]._padding_ = 0x3f800000;
    pTVar7[0x3f].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0x3f].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[0x40]._padding_ = 0;
    pTVar9 = pTVar7;
    if (pSVar10 == (SFixedSampledSequenceViewer *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TSlateDecl<SFixedSampledSequenceViewer,RequiredArgs::T3RequiredArgs<TArrayView<float_const_,int>_const_&,unsigned_int_const_&,TSharedRef<FFixedSampledSequenceGridData,1>_&>_>
                  *)(*pcVar4)();
        return pTVar8;
      }
      goto LAB_14d8ab99a;
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
      plVar3 = (longlong *)pSVar10->_padding_;
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
      pSVar10->_padding_ = (longlong)pTVar9;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  }
LAB_14d8ab99a:
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = pSVar10;
  local_30.ReferenceController = pTVar9;
  if (this != (TSlateDecl<SFixedSampledSequenceViewer,RequiredArgs::T3RequiredArgs<TArrayView<float_const_,int>_const_&,unsigned_int_const_&,TSharedRef<FFixedSampledSequenceGridData,1>_&>_>
               *)&local_38) {
    (this->_Widget).Object = pSVar10;
    local_38 = (SFixedSampledSequenceViewer *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  if ((this->_Widget).Object == (SFixedSampledSequenceViewer *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSlateDecl<SFixedSampledSequenceViewer,RequiredArgs::T3RequiredArgs<TArrayView<float_const_,int>_const_&,unsigned_int_const_&,TSharedRef<FFixedSampledSequenceGridData,1>_&>_>
                *)(*pcVar4)();
      return pTVar8;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x400);
  return this;
}

// TSlateDecl<SPlayheadOverlay,RequiredArgs::T0RequiredArgs> @ 14d8aba60

TSlateDecl<SPlayheadOverlay,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SPlayheadOverlay,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SPlayheadOverlay,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SPlayheadOverlay,RequiredArgs::T0RequiredArgs> *this,char *param_1,
          char *param_2,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SPlayheadOverlay,RequiredArgs::T0RequiredArgs> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  SPlayheadOverlay *pSVar9;
  SPlayheadOverlay *local_38;
  FSharedReferencer<1> local_30;
  
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SPlayheadOverlay *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_RequiredArgs = param_4;
  pTVar6 = ::operator_new(600);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pSVar9 = (SPlayheadOverlay *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VSPlayheadOverlay___00_SharedPointerInternals__6B_;
    memset(pTVar6 + 1,0,0x248);
    SLeafWidget::SLeafWidget((SLeafWidget *)(pTVar6 + 1));
    pTVar6[0x22].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x22].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[1]._padding_ = (longlong)&___7SPlayheadOverlay__6B_;
    pSVar9 = (SPlayheadOverlay *)(pTVar6 + 1);
    *(undefined4 *)&pTVar6[0x23]._padding_ = 0x437f0000;
    *(undefined4 *)((longlong)&pTVar6[0x23]._padding_ + 4) = 0x3dcccccd;
    pTVar6[0x23].SharedReferenceCount = (atomic<int>)0x3e4ccccd;
    pTVar6[0x23].WeakReferenceCount = (atomic<int>)0x3f800000;
    *(undefined1 *)&pTVar6[0x24]._padding_ = 0;
    *(undefined8 *)((longlong)&pTVar6[0x24]._padding_ + 4) = 0x3f800000;
    *(undefined8 *)&pTVar6[0x24].WeakReferenceCount = 0;
    pTVar8 = pTVar6;
    if (pSVar9 == (SPlayheadOverlay *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SPlayheadOverlay,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14d8abbe2;
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
LAB_14d8abbe2:
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = pSVar9;
  local_30.ReferenceController = pTVar8;
  if (this != (TSlateDecl<SPlayheadOverlay,RequiredArgs::T0RequiredArgs> *)&local_38) {
    (this->_Widget).Object = pSVar9;
    local_38 = (SPlayheadOverlay *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  if ((this->_Widget).Object == (SPlayheadOverlay *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SPlayheadOverlay,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x248);
  return this;
}

// TSlateDecl<SSampledSequenceValueGridOverlay,RequiredArgs::T0RequiredArgs> @ 14d8abca0

TSlateDecl<SSampledSequenceValueGridOverlay,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SSampledSequenceValueGridOverlay,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SSampledSequenceValueGridOverlay,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SSampledSequenceValueGridOverlay,RequiredArgs::T0RequiredArgs> *this,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SSampledSequenceValueGridOverlay,RequiredArgs::T0RequiredArgs> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  SSampledSequenceValueGridOverlay *pSVar9;
  SSampledSequenceValueGridOverlay *local_38;
  FSharedReferencer<1> local_30;
  
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SSampledSequenceValueGridOverlay *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_RequiredArgs = param_4;
  pTVar6 = ::operator_new(0x390);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pSVar9 = (SSampledSequenceValueGridOverlay *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VSSampledSequenceValueGridOverlay___00_SharedPointerInternals__6B_
    ;
    memset(pTVar6 + 1,0,0x380);
    SLeafWidget::SLeafWidget((SLeafWidget *)(pTVar6 + 1));
    *(undefined2 *)&pTVar6[0x2a]._padding_ = 0;
    pTVar6[1]._padding_ = (longlong)&___7SSampledSequenceValueGridOverlay__6B_;
    pTVar6[0x24]._padding_ = 0;
    pTVar6[0x27]._padding_ = 0x3ff0000000000000;
    pTVar6[0x26].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x26].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x27].SharedReferenceCount = (atomic<int>)0x40000000;
    pTVar6[0x27].WeakReferenceCount = (atomic<int>)0x3f733333;
    *(undefined4 *)&pTVar6[0x28]._padding_ = 0x3dcccccd;
    *(undefined4 *)((longlong)&pTVar6[0x28]._padding_ + 4) = 0x3dcccccd;
    pTVar6[0x28].SharedReferenceCount = (atomic<int>)0x3f800000;
    pTVar6[0x28].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined1 *)((longlong)&pTVar6[0x2a]._padding_ + 2) = 0;
    pTVar6[0x2a].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2a].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2b]._padding_ = 0;
    FNumberFormattingOptions::FNumberFormattingOptions
              ((FNumberFormattingOptions *)&pTVar6[0x2b].SharedReferenceCount);
    *(undefined4 *)&pTVar6[0x2d]._padding_ = 0x40000000;
    pTVar6[0x2d].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2d].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2e]._padding_ = 0x3f800000;
    pTVar6[0x2e].SharedReferenceCount = (atomic<int>)0x3f800000;
    pTVar6[0x2e].WeakReferenceCount = (atomic<int>)0x3f800000;
    *(undefined1 *)&pTVar6[0x2f]._padding_ = 0;
    *(undefined8 *)((longlong)&pTVar6[0x2f]._padding_ + 4) = 0x3f800000;
    pTVar6[0x2f].WeakReferenceCount = (atomic<int>)0x3f800000;
    *(undefined4 *)&pTVar6[0x30]._padding_ = 0x3f800000;
    *(undefined1 *)((longlong)&pTVar6[0x30]._padding_ + 4) = 0;
    FSlateFontInfo::FSlateFontInfo((FSlateFontInfo *)&pTVar6[0x30].SharedReferenceCount);
    pSVar9 = (SSampledSequenceValueGridOverlay *)(pTVar6 + 1);
    pTVar6[0x37].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x37].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x38]._padding_ = 0;
    pTVar8 = pTVar6;
    if (pSVar9 == (SSampledSequenceValueGridOverlay *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SSampledSequenceValueGridOverlay,RequiredArgs::T0RequiredArgs> *)
                 (*pcVar4)();
        return pTVar7;
      }
      goto LAB_14d8abecc;
    }
  }
  if (((*(longlong *)&pSVar9->field_0x8 == 0) || (*(longlong *)&pSVar9->field_0x10 == 0)) ||
     (*(int *)(*(longlong *)&pSVar9->field_0x10 + 8) < 1)) {
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(SSampledSequenceValueGridOverlay **)&pSVar9->field_0x8 = pSVar9;
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
LAB_14d8abecc:
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = pSVar9;
  local_30.ReferenceController = pTVar8;
  if (this != (TSlateDecl<SSampledSequenceValueGridOverlay,RequiredArgs::T0RequiredArgs> *)&local_38
     ) {
    (this->_Widget).Object = pSVar9;
    local_38 = (SSampledSequenceValueGridOverlay *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  if ((this->_Widget).Object == (SSampledSequenceValueGridOverlay *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SSampledSequenceValueGridOverlay,RequiredArgs::T0RequiredArgs> *)
               (*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x380);
  return this;
}

// TSlateDecl<STriggerThresholdLineWidget,RequiredArgs::T0RequiredArgs> @ 14d8abf90

TSlateDecl<STriggerThresholdLineWidget,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<STriggerThresholdLineWidget,RequiredArgs::T0RequiredArgs>::
TSlateDecl<STriggerThresholdLineWidget,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<STriggerThresholdLineWidget,RequiredArgs::T0RequiredArgs> *this,char *param_1,
          char *param_2,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<STriggerThresholdLineWidget,RequiredArgs::T0RequiredArgs> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  STriggerThresholdLineWidget *pSVar9;
  STriggerThresholdLineWidget *local_38;
  FSharedReferencer<1> local_30;
  
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (STriggerThresholdLineWidget *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_RequiredArgs = param_4;
  pTVar6 = ::operator_new(0x268);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pSVar9 = (STriggerThresholdLineWidget *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VSTriggerThresholdLineWidget___00_SharedPointerInternals__6B_
    ;
    memset(pTVar6 + 1,0,600);
    SLeafWidget::SLeafWidget((SLeafWidget *)(pTVar6 + 1));
    pTVar6[0x26]._padding_ = 0;
    pTVar6[1]._padding_ = (longlong)&___7STriggerThresholdLineWidget__6B_;
    pSVar9 = (STriggerThresholdLineWidget *)(pTVar6 + 1);
    pTVar6[0x24].SharedReferenceCount = (atomic<int>)0x40000000;
    pTVar6[0x24]._padding_ = 0x3ff0000000000000;
    pTVar6[0x24].WeakReferenceCount = (atomic<int>)0x3f733333;
    *(undefined4 *)&pTVar6[0x25]._padding_ = 0x3dcccccd;
    *(undefined4 *)((longlong)&pTVar6[0x25]._padding_ + 4) = 0x3dcccccd;
    pTVar6[0x25].SharedReferenceCount = (atomic<int>)0x3f800000;
    pTVar6[0x25].WeakReferenceCount = (atomic<int>)0x0;
    pTVar8 = pTVar6;
    if (pSVar9 == (STriggerThresholdLineWidget *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<STriggerThresholdLineWidget,RequiredArgs::T0RequiredArgs> *)(*pcVar4)()
        ;
        return pTVar7;
      }
      goto LAB_14d8ac115;
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
LAB_14d8ac115:
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = pSVar9;
  local_30.ReferenceController = pTVar8;
  if (this != (TSlateDecl<STriggerThresholdLineWidget,RequiredArgs::T0RequiredArgs> *)&local_38) {
    (this->_Widget).Object = pSVar9;
    local_38 = (STriggerThresholdLineWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  if ((this->_Widget).Object == (STriggerThresholdLineWidget *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<STriggerThresholdLineWidget,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,600);
  return this;
}

// ~TSlateDecl<SAudioMaterialKnob,RequiredArgs::T0RequiredArgs> @ 14d8bba80

void __thiscall
TSlateDecl<SAudioMaterialKnob,RequiredArgs::T0RequiredArgs>::
~TSlateDecl<SAudioMaterialKnob,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SAudioMaterialKnob,RequiredArgs::T0RequiredArgs> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->_Widget).SharedReferenceCount.ReferenceController);
  return;
}

// ~TSlateDecl<SAudioTextBox,RequiredArgs::T0RequiredArgs> @ 14d8bba90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TSlateDecl<SAudioTextBox,RequiredArgs::T0RequiredArgs>::
~TSlateDecl<SAudioTextBox,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SAudioTextBox,RequiredArgs::T0RequiredArgs> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&(this->_Widget).SharedReferenceCount);
  return;
}

// operator<<= @ 14d8cf870

TSharedRef<SComboRow<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>,1> * __thiscall
TSlateDecl<SComboRow<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
::operator<<=(void *this,
             TSharedRef<SComboRow<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>,1>
             *__return_storage_ptr__,FArguments *param_1)

{
  longlong *this_00;
  TSharedRef<STableViewBase,1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  SWidget *pSVar3;
  longlong lVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  bool bVar10;
  char cVar11;
  byte bVar12;
  TSharedRef<SComboRow<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>,1> *pTVar13;
  FArguments *pFVar14;
  undefined1 local_350 [24];
  SWidget *local_338;
  TReferenceControllerBase<1> *pTStack_330;
  undefined1 local_328 [768];
  
  if (*(longlong *)this == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      pTVar13 = (TSharedRef<SComboRow<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>,1> *)(*pcVar5)()
      ;
      return pTVar13;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(*(longlong *)this + 8),(FSlateBaseNamedArgs *)param_1);
  this_00 = *(longlong **)this;
  pTVar1 = (TSharedRef<STableViewBase,1> *)**(undefined8 **)((longlong)this + 0x10);
  pFVar14 = STableRow<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>::FArguments::FArguments
                      (local_328);
  pFVar14->_Style = param_1->_Style;
  bVar10 = (param_1->_Padding).bIsSet;
  fVar6 = (param_1->_Padding).Value.Left;
  fVar7 = (param_1->_Padding).Value.Top;
  fVar8 = (param_1->_Padding).Value.Right;
  fVar9 = (param_1->_Padding).Value.Bottom;
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> *)local_350,
             &(param_1->_Padding).Getter);
  (pFVar14->_Padding).Value.Left = fVar6;
  (pFVar14->_Padding).Value.Top = fVar7;
  (pFVar14->_Padding).Value.Right = fVar8;
  (pFVar14->_Padding).Value.Bottom = fVar9;
  (pFVar14->_Padding).bIsSet = bVar10;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar14->_Padding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_350);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_350);
  if ((void *)local_350._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_350._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_350);
  pTVar2 = (param_1->_Content).Widget.SharedReferenceCount.ReferenceController;
  pSVar3 = (param_1->_Content).Widget.Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_338 = (pFVar14->_Content).Widget.Object;
  pTStack_330 = (pFVar14->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar14->_Content).Widget.Object = pSVar3;
  (pFVar14->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_330);
  STableRow<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>::ConstructInternal
            (this_00,pFVar14,pTVar1);
  (**(code **)(*this_00 + 0x80))
            (this_00,pTVar1->Object->TableViewMode,&pFVar14->_Padding,&pFVar14->_Content);
  STableRow<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>::FArguments::~FArguments(local_328);
  if (*(longlong *)this == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      pTVar13 = (TSharedRef<SComboRow<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>,1> *)(*pcVar5)()
      ;
      return pTVar13;
    }
  }
  lVar4 = *(longlong *)this;
  if ((*(byte *)(lVar4 + 0x38) & 0x10) == 0) {
    cVar11 = (**(code **)(*(longlong *)(lVar4 + 8) + 0x228))(lVar4 + 8);
    bVar12 = 0;
    if (cVar11 == '\0') goto LAB_14d8cfa2b;
  }
  bVar12 = 0x20;
LAB_14d8cfa2b:
  *(byte *)(lVar4 + 0x38) = *(byte *)(lVar4 + 0x38) & 0xdf;
  *(byte *)(lVar4 + 0x38) = *(byte *)(lVar4 + 0x38) | bVar12;
  if (*(longlong *)this == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      pTVar13 = (TSharedRef<SComboRow<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>,1> *)(*pcVar5)()
      ;
      return pTVar13;
    }
  }
  *(byte *)(*(longlong *)this + 0x39) = *(byte *)(*(longlong *)this + 0x39) | 4;
  if (*(longlong *)this == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x416,L"");
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      pTVar13 = (TSharedRef<SComboRow<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>,1> *)(*pcVar5)()
      ;
      return pTVar13;
    }
  }
  __return_storage_ptr__->Object = *(SComboRow<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_> **)this
  ;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       *(TReferenceControllerBase<1> **)((longlong)this + 8);
  *(undefined8 *)((longlong)this + 8) = 0;
  *(undefined8 *)this = 0;
  if (__return_storage_ptr__->Object ==
      (SComboRow<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_> *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x26c,L"");
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      pTVar13 = (TSharedRef<SComboRow<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>,1> *)(*pcVar5)()
      ;
      return pTVar13;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 14d8cfb00

TSharedRef<STableRow<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>,1> * __thiscall
TSlateDecl<STableRow<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,1>_&&>_>
::operator<<=(void *this,
             TSharedRef<STableRow<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>,1>
             *__return_storage_ptr__,FArguments *param_1)

{
  longlong *this_00;
  TReferenceControllerBase<1> *pTVar1;
  STableViewBase *pSVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  byte bVar7;
  TSharedRef<STableRow<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>,1> *pTVar8;
  TSharedRef<STableViewBase,1> local_28;
  
  if (*(longlong *)this == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedRef<STableRow<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(*(longlong *)this + 8),(FSlateBaseNamedArgs *)param_1);
  this_00 = *(longlong **)this;
  pTVar1 = (TReferenceControllerBase<1> *)((longlong *)**(longlong **)((longlong)this + 0x10))[1];
  pSVar2 = *(STableViewBase **)**(longlong **)((longlong)this + 0x10);
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28.Object = pSVar2;
  local_28.SharedReferenceCount.ReferenceController = pTVar1;
  STableRow<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>::ConstructInternal
            (this_00,param_1,&local_28);
  (**(code **)(*this_00 + 0x80))
            (this_00,pSVar2->TableViewMode,&param_1->_Padding,&param_1->_Content);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (*(longlong *)this == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedRef<STableRow<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  lVar3 = *(longlong *)this;
  if ((*(byte *)(lVar3 + 0x38) & 0x10) == 0) {
    cVar6 = (**(code **)(*(longlong *)(lVar3 + 8) + 0x228))(lVar3 + 8);
    bVar7 = 0;
    if (cVar6 == '\0') goto LAB_14d8cfc02;
  }
  bVar7 = 0x20;
LAB_14d8cfc02:
  *(byte *)(lVar3 + 0x38) = *(byte *)(lVar3 + 0x38) & 0xdf;
  *(byte *)(lVar3 + 0x38) = *(byte *)(lVar3 + 0x38) | bVar7;
  if (*(longlong *)this == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedRef<STableRow<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  *(byte *)(*(longlong *)this + 0x39) = *(byte *)(*(longlong *)this + 0x39) | 4;
  if (*(longlong *)this == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedRef<STableRow<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  __return_storage_ptr__->Object = *(STableRow<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_> **)this
  ;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       *(TReferenceControllerBase<1> **)((longlong)this + 8);
  *(undefined8 *)((longlong)this + 8) = 0;
  *(undefined8 *)this = 0;
  if (__return_storage_ptr__->Object ==
      (STableRow<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedRef<STableRow<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 14d8cfcd0

TSharedRef<STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>
* __thiscall
TSlateDecl<STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>_&&>_>
::operator<<=(TSlateDecl<STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>_&&>_>
              *this,TSharedRef<STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>
                    *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_> *pSVar2;
  TSharedRef<SListView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>
  *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  SListView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_> *pSVar5;
  code *pcVar6;
  bool bVar7;
  char cVar8;
  byte bVar9;
  TSharedRef<STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>
  *pTVar10;
  TSharedRef<STableViewBase,1> local_28;
  
  if ((this->_Widget).Object ==
      (STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_> *)
      0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>
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
  STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>::
  ConstructInternal(pSVar2,param_1,&local_28);
  (**(code **)(pSVar2->_padding_ + 0x80))
            (pSVar2,(int)pSVar5->_padding_,&param_1->_Padding,&param_1->_Content);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  if ((this->_Widget).Object ==
      (STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_> *)
      0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>
                 *)(*pcVar6)();
      return pTVar10;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar8 = (**(code **)(pSVar2->_padding_ + 0x228))(&pSVar2->_padding_);
    bVar9 = 0;
    if (cVar8 == '\0') goto LAB_14d8cfdd2;
  }
  bVar9 = 0x20;
LAB_14d8cfdd2:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar9;
  if ((this->_Widget).Object ==
      (STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_> *)
      0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>
                 *)(*pcVar6)();
      return pTVar10;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object ==
      (STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_> *)
      0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>
                 *)(*pcVar6)();
      return pTVar10;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object =
       (STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_> *)
       0x0;
  if (__return_storage_ptr__->Object ==
      (STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_> *)
      0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedRef<STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>
                 *)(*pcVar6)();
      return pTVar10;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 14d8cfea0

TSharedRef<STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>
* __thiscall
TSlateDecl<STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
::operator<<=(TSlateDecl<STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
              *this,TSharedRef<STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>
                    *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_> *pSVar2;
  TSharedRef<STableViewBase,1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  byte bVar7;
  TSharedRef<STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>
  *pTVar8;
  
  if ((this->_Widget).Object ==
      (STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_> *)
      0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedRef<STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>
                *)(*pcVar4)();
      return pTVar8;
    }
  }
  SWidget::SWidgetConstruct
            ((SWidget *)&((this->_Widget).Object)->_padding_,(FSlateBaseNamedArgs *)param_1);
  pSVar2 = (this->_Widget).Object;
  pTVar3 = this->_RequiredArgs->Arg0;
  STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>::
  ConstructInternal(pSVar2,param_1,pTVar3);
  (**(code **)(pSVar2->_padding_ + 0x80))
            (pSVar2,pTVar3->Object->TableViewMode,&param_1->_Padding,&param_1->_Content);
  if ((this->_Widget).Object ==
      (STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_> *)
      0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedRef<STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>
                *)(*pcVar4)();
      return pTVar8;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar6 = (**(code **)(pSVar2->_padding_ + 0x228))(&pSVar2->_padding_);
    bVar7 = 0;
    if (cVar6 == '\0') goto LAB_14d8cff82;
  }
  bVar7 = 0x20;
LAB_14d8cff82:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar7;
  if ((this->_Widget).Object ==
      (STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_> *)
      0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedRef<STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>
                *)(*pcVar4)();
      return pTVar8;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object ==
      (STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_> *)
      0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedRef<STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>
                *)(*pcVar4)();
      return pTVar8;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object =
       (STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_> *)
       0x0;
  if (__return_storage_ptr__->Object ==
      (STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_> *)
      0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedRef<STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>
                *)(*pcVar4)();
      return pTVar8;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 14d8d0050

TSharedRef<STileView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>
* __thiscall
TSlateDecl<STileView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,RequiredArgs::T0RequiredArgs>
::operator<<=(TSlateDecl<STileView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,RequiredArgs::T0RequiredArgs>
              *this,TSharedRef<STileView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>
                    *__return_storage_ptr__,FArguments *param_1)

{
  undefined1 *puVar1;
  STileView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_> *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<STileView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>
  *pTVar7;
  
  if ((this->_Widget).Object ==
      (STileView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_> *)
      0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<STileView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>
                *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  STileView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>::
  Construct((this->_Widget).Object,param_1);
  if ((this->_Widget).Object ==
      (STileView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_> *)
      0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<STileView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>
                *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->field_0x30 & 0x10) == 0) {
    cVar5 = (**(code **)(*(longlong *)pSVar2 + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_14d8d00f1;
  }
  bVar6 = 0x20;
LAB_14d8d00f1:
  pSVar2->field_0x30 = pSVar2->field_0x30 & 0xdf;
  pSVar2->field_0x30 = pSVar2->field_0x30 | bVar6;
  if ((this->_Widget).Object ==
      (STileView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_> *)
      0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<STileView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>
                *)(*pcVar3)();
      return pTVar7;
    }
  }
  puVar1 = &((this->_Widget).Object)->field_0x31;
  *puVar1 = *puVar1 | 4;
  if ((this->_Widget).Object ==
      (STileView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_> *)
      0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<STileView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>
                *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object =
       (STileView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_> *)
       0x0;
  if (__return_storage_ptr__->Object ==
      (STileView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_> *)
      0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<STileView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>
                *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 14d8d01c0

TSharedRef<SAudioMaterialKnob,1> * __thiscall
TSlateDecl<SAudioMaterialKnob,RequiredArgs::T0RequiredArgs>::operator<<=
          (TSlateDecl<SAudioMaterialKnob,RequiredArgs::T0RequiredArgs> *this,
          TSharedRef<SAudioMaterialKnob,1> *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  SAudioMaterialKnob *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<SAudioMaterialKnob,1> *pTVar7;
  
  if ((this->_Widget).Object == (SAudioMaterialKnob *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SAudioMaterialKnob,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  SAudioMaterialKnob::Construct((this->_Widget).Object,param_1);
  if ((this->_Widget).Object == (SAudioMaterialKnob *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SAudioMaterialKnob,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar5 = (**(code **)(pSVar2->_padding_ + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_14d8d0261;
  }
  bVar6 = 0x20;
LAB_14d8d0261:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar6;
  if ((this->_Widget).Object == (SAudioMaterialKnob *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SAudioMaterialKnob,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SAudioMaterialKnob *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SAudioMaterialKnob,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SAudioMaterialKnob *)0x0;
  if (__return_storage_ptr__->Object == (SAudioMaterialKnob *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SAudioMaterialKnob,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 14d8d0330

TSharedRef<SAudioMaterialMeter,1> * __thiscall
TSlateDecl<SAudioMaterialMeter,RequiredArgs::T0RequiredArgs>::operator<<=
          (TSlateDecl<SAudioMaterialMeter,RequiredArgs::T0RequiredArgs> *this,
          TSharedRef<SAudioMaterialMeter,1> *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  SAudioMaterialMeter *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<SAudioMaterialMeter,1> *pTVar7;
  
  if ((this->_Widget).Object == (SAudioMaterialMeter *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SAudioMaterialMeter,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  SAudioMaterialMeter::Construct((this->_Widget).Object,param_1);
  if ((this->_Widget).Object == (SAudioMaterialMeter *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SAudioMaterialMeter,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar5 = (**(code **)(pSVar2->_padding_ + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_14d8d03d1;
  }
  bVar6 = 0x20;
LAB_14d8d03d1:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar6;
  if ((this->_Widget).Object == (SAudioMaterialMeter *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SAudioMaterialMeter,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SAudioMaterialMeter *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SAudioMaterialMeter,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SAudioMaterialMeter *)0x0;
  if (__return_storage_ptr__->Object == (SAudioMaterialMeter *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SAudioMaterialMeter,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 14d8d04a0

TSharedRef<SAudioMaterialSlider,1> * __thiscall
TSlateDecl<SAudioMaterialSlider,RequiredArgs::T0RequiredArgs>::operator<<=
          (TSlateDecl<SAudioMaterialSlider,RequiredArgs::T0RequiredArgs> *this,
          TSharedRef<SAudioMaterialSlider,1> *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  SAudioMaterialSlider *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<SAudioMaterialSlider,1> *pTVar7;
  
  if ((this->_Widget).Object == (SAudioMaterialSlider *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SAudioMaterialSlider,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  SAudioMaterialSlider::Construct((this->_Widget).Object,param_1);
  if ((this->_Widget).Object == (SAudioMaterialSlider *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SAudioMaterialSlider,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar5 = (**(code **)(pSVar2->_padding_ + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_14d8d0541;
  }
  bVar6 = 0x20;
LAB_14d8d0541:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar6;
  if ((this->_Widget).Object == (SAudioMaterialSlider *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SAudioMaterialSlider,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SAudioMaterialSlider *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SAudioMaterialSlider,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SAudioMaterialSlider *)0x0;
  if (__return_storage_ptr__->Object == (SAudioMaterialSlider *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SAudioMaterialSlider,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 14d8d0610

TSharedRef<SAudioMeter,1> * __thiscall
TSlateDecl<SAudioMeter,RequiredArgs::T0RequiredArgs>::operator<<=
          (TSlateDecl<SAudioMeter,RequiredArgs::T0RequiredArgs> *this,
          TSharedRef<SAudioMeter,1> *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  SAudioMeter *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<SAudioMeter,1> *pTVar7;
  
  if ((this->_Widget).Object == (SAudioMeter *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SAudioMeter,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  SAudioMeter::Construct((this->_Widget).Object,param_1);
  if ((this->_Widget).Object == (SAudioMeter *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SAudioMeter,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar5 = (**(code **)(pSVar2->_padding_ + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_14d8d06b1;
  }
  bVar6 = 0x20;
LAB_14d8d06b1:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar6;
  if ((this->_Widget).Object == (SAudioMeter *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SAudioMeter,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SAudioMeter *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SAudioMeter,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SAudioMeter *)0x0;
  if (__return_storage_ptr__->Object == (SAudioMeter *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SAudioMeter,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 14d8d0780

TSharedRef<SAudioMeterWidget,1> * __thiscall
TSlateDecl<SAudioMeterWidget,RequiredArgs::T0RequiredArgs>::operator<<=
          (TSlateDecl<SAudioMeterWidget,RequiredArgs::T0RequiredArgs> *this,
          TSharedRef<SAudioMeterWidget,1> *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  SAudioMeterWidget *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<SAudioMeterWidget,1> *pTVar7;
  
  if ((this->_Widget).Object == (SAudioMeterWidget *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SAudioMeterWidget,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  SAudioMeterWidget::Construct((this->_Widget).Object,param_1);
  if ((this->_Widget).Object == (SAudioMeterWidget *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SAudioMeterWidget,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar5 = (**(code **)(pSVar2->_padding_ + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_14d8d0821;
  }
  bVar6 = 0x20;
LAB_14d8d0821:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar6;
  if ((this->_Widget).Object == (SAudioMeterWidget *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SAudioMeterWidget,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SAudioMeterWidget *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SAudioMeterWidget,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SAudioMeterWidget *)0x0;
  if (__return_storage_ptr__->Object == (SAudioMeterWidget *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SAudioMeterWidget,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 14d8d08f0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SAudioRadialSlider,1> * __thiscall
TSlateDecl<SAudioRadialSlider,RequiredArgs::T0RequiredArgs>::operator<<=
          (TSlateDecl<SAudioRadialSlider,RequiredArgs::T0RequiredArgs> *this,
          TSharedRef<SAudioRadialSlider,1> *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  SAudioRadialSlider *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<SAudioRadialSlider,1> *pTVar7;
  
  if ((this->_Widget).Object == (SAudioRadialSlider *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SAudioRadialSlider,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  pSVar2 = (this->_Widget).Object;
  (**(code **)(pSVar2->_padding_ + 0x290))(pSVar2,param_1);
  if ((this->_Widget).Object == (SAudioRadialSlider *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SAudioRadialSlider,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar5 = (**(code **)(pSVar2->_padding_ + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_14d8d0995;
  }
  bVar6 = 0x20;
LAB_14d8d0995:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar6;
  if ((this->_Widget).Object == (SAudioRadialSlider *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SAudioRadialSlider,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SAudioRadialSlider *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SAudioRadialSlider,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SAudioRadialSlider *)0x0;
  if (__return_storage_ptr__->Object == (SAudioRadialSlider *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SAudioRadialSlider,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 14d8d0a60

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SAudioTextBox,1> * __thiscall
TSlateDecl<SAudioTextBox,RequiredArgs::T0RequiredArgs>::operator<<=
          (TSlateDecl<SAudioTextBox,RequiredArgs::T0RequiredArgs> *this,
          TSharedRef<SAudioTextBox,1> *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  SAudioTextBox *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<SAudioTextBox,1> *pTVar7;
  
  if ((this->_Widget).Object == (SAudioTextBox *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SAudioTextBox,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  pSVar2 = (this->_Widget).Object;
  (**(code **)(pSVar2->_padding_ + 0x248))(pSVar2,param_1);
  if ((this->_Widget).Object == (SAudioTextBox *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SAudioTextBox,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar5 = (**(code **)(pSVar2->_padding_ + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_14d8d0b05;
  }
  bVar6 = 0x20;
LAB_14d8d0b05:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar6;
  if ((this->_Widget).Object == (SAudioTextBox *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SAudioTextBox,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SAudioTextBox *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SAudioTextBox,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SAudioTextBox *)0x0;
  if (__return_storage_ptr__->Object == (SAudioTextBox *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SAudioTextBox,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 14d8d0bd0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SAudioVectorscopePanelWidget,1> * __thiscall
TSlateDecl<SAudioVectorscopePanelWidget,RequiredArgs::T1RequiredArgs<FFixedSampledSequenceView_&>_>
::operator<<=(TSlateDecl<SAudioVectorscopePanelWidget,RequiredArgs::T1RequiredArgs<FFixedSampledSequenceView_&>_>
              *this,TSharedRef<SAudioVectorscopePanelWidget,1> *__return_storage_ptr__,
             FArguments *param_1)

{
  byte *pbVar1;
  SAudioVectorscopePanelWidget *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<SAudioVectorscopePanelWidget,1> *pTVar7;
  
  if ((this->_Widget).Object == (SAudioVectorscopePanelWidget *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SAudioVectorscopePanelWidget,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  SAudioVectorscopePanelWidget::Construct((this->_Widget).Object,param_1,this->_RequiredArgs->Arg0);
  if ((this->_Widget).Object == (SAudioVectorscopePanelWidget *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SAudioVectorscopePanelWidget,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar5 = (**(code **)(pSVar2->_padding_ + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_14d8d0c78;
  }
  bVar6 = 0x20;
LAB_14d8d0c78:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar6;
  if ((this->_Widget).Object == (SAudioVectorscopePanelWidget *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SAudioVectorscopePanelWidget,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SAudioVectorscopePanelWidget *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SAudioVectorscopePanelWidget,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SAudioVectorscopePanelWidget *)0x0;
  if (__return_storage_ptr__->Object == (SAudioVectorscopePanelWidget *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SAudioVectorscopePanelWidget,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 14d8d0d40

TSharedRef<SExpanderArrow,1> * __thiscall
TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,1>_&&>_>
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
    if (cVar4 == '\0') goto LAB_14d8d0e11;
  }
  bVar5 = 0x20;
LAB_14d8d0e11:
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

// operator<<= @ 14d8d0ee0

TSharedRef<SExpanderArrow,1> * __thiscall
TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>_&&>_>
::operator<<=(TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>_&&>_>
              *this,TSharedRef<SExpanderArrow,1> *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  SExpanderArrow *pSVar2;
  TSharedRef<STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>
  *pTVar3;
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
    if (cVar6 == '\0') goto LAB_14d8d0fb1;
  }
  bVar7 = 0x20;
LAB_14d8d0fb1:
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

// operator<<= @ 14d8d1080

TSharedRef<SFixedSampledSequenceRuler,1> * __thiscall
TSlateDecl<SFixedSampledSequenceRuler,RequiredArgs::T1RequiredArgs<TSharedRef<FFixedSampledSequenceGridData,1>_&>_>
::operator<<=(TSlateDecl<SFixedSampledSequenceRuler,RequiredArgs::T1RequiredArgs<TSharedRef<FFixedSampledSequenceGridData,1>_&>_>
              *this,TSharedRef<SFixedSampledSequenceRuler,1> *__return_storage_ptr__,
             FArguments *param_1)

{
  undefined1 *puVar1;
  SFixedSampledSequenceRuler *pSVar2;
  TSharedRef<FFixedSampledSequenceGridData,1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  FFixedSampleSequenceRulerStyle *pFVar5;
  code *pcVar6;
  undefined8 uVar7;
  EStyleColor EVar8;
  undefined2 uVar9;
  bool bVar10;
  char cVar11;
  byte bVar12;
  TSharedRef<SFixedSampledSequenceRuler,1> *pTVar13;
  bool *pbVar14;
  FFixedSampledSequenceGridData *local_18;
  FSharedReferencer<1> local_10;
  
  if ((this->_Widget).Object == (SFixedSampledSequenceRuler *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar6 = (code *)swi(3);
      pTVar13 = (TSharedRef<SFixedSampledSequenceRuler,1> *)(*pcVar6)();
      return pTVar13;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  pSVar2 = (this->_Widget).Object;
  pTVar3 = this->_RequiredArgs->Arg0;
  pTVar4 = (pTVar3->SharedReferenceCount).ReferenceController;
  local_18 = pTVar3->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_10.ReferenceController = pTVar4;
  if (&pSVar2->GridService != (TSharedPtr<IFixedSampledSequenceGridService,1> *)&local_18) {
    (pSVar2->GridService).Object = (IFixedSampledSequenceGridService *)local_18;
    local_18 = (FFixedSampledSequenceGridData *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(pSVar2->GridService).SharedReferenceCount,&local_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10.ReferenceController);
  SFixedSampledSequenceRuler::UpdateGridMetrics(pSVar2);
  pSVar2->DisplayUnit = param_1->_DisplayUnit;
  if ((param_1->_DisplayPlayhead).bIsSet != false) {
    pbVar14 = TAttribute<bool>::Get(&param_1->_DisplayPlayhead);
    pSVar2->bDisplayPlayhead = *pbVar14;
  }
  if (param_1->_Style == (FFixedSampleSequenceRulerStyle *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("InArgs._Style",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SFixedSampledSequenceRuler.cpp"
                        ,0x16,L"");
    if (bVar10) {
      pcVar6 = (code *)swi(3);
      pTVar13 = (TSharedRef<SFixedSampledSequenceRuler,1> *)(*pcVar6)();
      return pTVar13;
    }
  }
  pFVar5 = param_1->_Style;
  uVar7 = *(undefined8 *)((longlong)&(pFVar5->HandleColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(pSVar2->HandleColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(pFVar5->HandleColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(pSVar2->HandleColor).SpecifiedColor.field0_0x0 + 8) = uVar7;
  EVar8 = (pFVar5->HandleColor).ColorTableId;
  uVar9 = *(undefined2 *)&(pFVar5->HandleColor).field_0x12;
  (pSVar2->HandleColor).ColorUseRule = (pFVar5->HandleColor).ColorUseRule;
  (pSVar2->HandleColor).ColorTableId = EVar8;
  *(undefined2 *)&(pSVar2->HandleColor).field_0x12 = uVar9;
  pSVar2->HandleWidth = param_1->_Style->HandleWidth;
  FSlateBrush::operator=(&pSVar2->HandleBrush,&param_1->_Style->HandleBrush);
  pFVar5 = param_1->_Style;
  uVar7 = *(undefined8 *)((longlong)&(pFVar5->BackgroundColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(pSVar2->BackgroundColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(pFVar5->BackgroundColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(pSVar2->BackgroundColor).SpecifiedColor.field0_0x0 + 8) = uVar7;
  EVar8 = (pFVar5->BackgroundColor).ColorTableId;
  uVar9 = *(undefined2 *)&(pFVar5->BackgroundColor).field_0x12;
  (pSVar2->BackgroundColor).ColorUseRule = (pFVar5->BackgroundColor).ColorUseRule;
  (pSVar2->BackgroundColor).ColorTableId = EVar8;
  *(undefined2 *)&(pSVar2->BackgroundColor).field_0x12 = uVar9;
  FSlateBrush::operator=(&pSVar2->BackgroundBrush,&param_1->_Style->BackgroundBrush);
  pFVar5 = param_1->_Style;
  uVar7 = *(undefined8 *)((longlong)&(pFVar5->TicksColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(pSVar2->TicksColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(pFVar5->TicksColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(pSVar2->TicksColor).SpecifiedColor.field0_0x0 + 8) = uVar7;
  EVar8 = (pFVar5->TicksColor).ColorTableId;
  uVar9 = *(undefined2 *)&(pFVar5->TicksColor).field_0x12;
  (pSVar2->TicksColor).ColorUseRule = (pFVar5->TicksColor).ColorUseRule;
  (pSVar2->TicksColor).ColorTableId = EVar8;
  *(undefined2 *)&(pSVar2->TicksColor).field_0x12 = uVar9;
  pFVar5 = param_1->_Style;
  uVar7 = *(undefined8 *)((longlong)&(pFVar5->TicksTextColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(pSVar2->TicksTextColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(pFVar5->TicksTextColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(pSVar2->TicksTextColor).SpecifiedColor.field0_0x0 + 8) = uVar7;
  EVar8 = (pFVar5->TicksTextColor).ColorTableId;
  uVar9 = *(undefined2 *)&(pFVar5->TicksTextColor).field_0x12;
  (pSVar2->TicksTextColor).ColorUseRule = (pFVar5->TicksTextColor).ColorUseRule;
  (pSVar2->TicksTextColor).ColorTableId = EVar8;
  *(undefined2 *)&(pSVar2->TicksTextColor).field_0x12 = uVar9;
  FSlateFontInfo::operator=(&pSVar2->TicksTextFont,&param_1->_Style->TicksTextFont);
  pSVar2->DesiredWidth = param_1->_Style->DesiredWidth;
  pSVar2->DesiredHeight = param_1->_Style->DesiredHeight;
  pSVar2->TicksTextOffset = param_1->_Style->TicksTextOffset;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  if ((this->_Widget).Object == (SFixedSampledSequenceRuler *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar6 = (code *)swi(3);
      pTVar13 = (TSharedRef<SFixedSampledSequenceRuler,1> *)(*pcVar6)();
      return pTVar13;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->field_0x30 & 0x10) == 0) {
    cVar11 = (**(code **)(*(longlong *)pSVar2 + 0x228))(pSVar2);
    bVar12 = 0;
    if (cVar11 == '\0') goto LAB_14d8d130b;
  }
  bVar12 = 0x20;
LAB_14d8d130b:
  pSVar2->field_0x30 = pSVar2->field_0x30 & 0xdf;
  pSVar2->field_0x30 = pSVar2->field_0x30 | bVar12;
  if ((this->_Widget).Object == (SFixedSampledSequenceRuler *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar6 = (code *)swi(3);
      pTVar13 = (TSharedRef<SFixedSampledSequenceRuler,1> *)(*pcVar6)();
      return pTVar13;
    }
  }
  puVar1 = &((this->_Widget).Object)->field_0x31;
  *puVar1 = *puVar1 | 4;
  if ((this->_Widget).Object == (SFixedSampledSequenceRuler *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x416,L"");
    if (bVar10) {
      pcVar6 = (code *)swi(3);
      pTVar13 = (TSharedRef<SFixedSampledSequenceRuler,1> *)(*pcVar6)();
      return pTVar13;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SFixedSampledSequenceRuler *)0x0;
  if (__return_storage_ptr__->Object == (SFixedSampledSequenceRuler *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x26c,L"");
    if (bVar10) {
      pcVar6 = (code *)swi(3);
      pTVar13 = (TSharedRef<SFixedSampledSequenceRuler,1> *)(*pcVar6)();
      return pTVar13;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 14d8d13e0

TSharedRef<SFixedSampledSequenceVectorViewer,1> * __thiscall
TSlateDecl<SFixedSampledSequenceVectorViewer,RequiredArgs::T2RequiredArgs<TArrayView<float_const_,int>_const_&,unsigned_int_const_&>_>
::operator<<=(TSlateDecl<SFixedSampledSequenceVectorViewer,RequiredArgs::T2RequiredArgs<TArrayView<float_const_,int>_const_&,unsigned_int_const_&>_>
              *this,TSharedRef<SFixedSampledSequenceVectorViewer,1> *__return_storage_ptr__,
             FArguments *param_1)

{
  byte *pbVar1;
  SFixedSampledSequenceVectorViewer *pSVar2;
  TArrayView<float_const_,int> *pTVar3;
  code *pcVar4;
  float *pfVar5;
  undefined8 uVar6;
  int iVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  ESampledSequenceDrawOrientation EVar11;
  bool bVar12;
  char cVar13;
  byte bVar14;
  TSharedRef<SFixedSampledSequenceVectorViewer,1> *pTVar15;
  
  if ((this->_Widget).Object == (SFixedSampledSequenceVectorViewer *)0x0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar12) {
      pcVar4 = (code *)swi(3);
      pTVar15 = (TSharedRef<SFixedSampledSequenceVectorViewer,1> *)(*pcVar4)();
      return pTVar15;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  pSVar2 = (this->_Widget).Object;
  pTVar3 = this->_RequiredArgs->Arg0;
  pfVar5 = pTVar3->DataPtr;
  iVar7 = pTVar3->ArrayNum;
  uVar8 = *(undefined4 *)&pTVar3->field_0xc;
  pSVar2->NumChannels = (uchar)*this->_RequiredArgs->Arg1;
  pSVar2->bForceRedraw = true;
  (pSVar2->SampleData).DataPtr = pfVar5;
  (pSVar2->SampleData).ArrayNum = iVar7;
  *(undefined4 *)&(pSVar2->SampleData).field_0xc = uVar8;
  if (param_1->_Style == (FSampledSequenceVectorViewerStyle *)0x0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("InArgs._Style",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SFixedSampledSequenceVectorViewer.cpp"
                        ,0xd,L"");
    if (bVar12) {
      pcVar4 = (code *)swi(3);
      pTVar15 = (TSharedRef<SFixedSampledSequenceVectorViewer,1> *)(*pcVar4)();
      return pTVar15;
    }
  }
  fVar9 = (param_1->_SequenceDrawingParams).DimensionSlotMargin;
  fVar10 = (param_1->_SequenceDrawingParams).MaxSequenceHeightRatio;
  (pSVar2->DrawingParams).MaxDisplayedValue = (param_1->_SequenceDrawingParams).MaxDisplayedValue;
  (pSVar2->DrawingParams).DimensionSlotMargin = fVar9;
  (pSVar2->DrawingParams).MaxSequenceHeightRatio = fVar10;
  fVar9 = (param_1->_SequenceDrawingParams).MinScaledBinValue;
  fVar10 = (param_1->_SequenceDrawingParams).VerticalZoomFactor;
  EVar11 = (param_1->_SequenceDrawingParams).Orientation;
  (pSVar2->DrawingParams).MinSequenceHeightRatio =
       (param_1->_SequenceDrawingParams).MinSequenceHeightRatio;
  (pSVar2->DrawingParams).MinScaledBinValue = fVar9;
  (pSVar2->DrawingParams).VerticalZoomFactor = fVar10;
  (pSVar2->DrawingParams).Orientation = EVar11;
  uVar6 = *(undefined8 *)((longlong)&(param_1->_Style->LineColor).field0_0x0 + 8);
  *(undefined8 *)&(pSVar2->LineColor).field0_0x0 =
       *(undefined8 *)&(param_1->_Style->LineColor).field0_0x0;
  *(undefined8 *)((longlong)&(pSVar2->LineColor).field0_0x0 + 8) = uVar6;
  pSVar2->LineThickness = param_1->_Style->LineThickness;
  pSVar2->ScaleFactor = param_1->_ScaleFactor;
  if ((this->_Widget).Object == (SFixedSampledSequenceVectorViewer *)0x0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar12) {
      pcVar4 = (code *)swi(3);
      pTVar15 = (TSharedRef<SFixedSampledSequenceVectorViewer,1> *)(*pcVar4)();
      return pTVar15;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar13 = (**(code **)(pSVar2->_padding_ + 0x228))(pSVar2);
    bVar14 = 0;
    if (cVar13 == '\0') goto LAB_14d8d1523;
  }
  bVar14 = 0x20;
LAB_14d8d1523:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar14;
  if ((this->_Widget).Object == (SFixedSampledSequenceVectorViewer *)0x0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar12) {
      pcVar4 = (code *)swi(3);
      pTVar15 = (TSharedRef<SFixedSampledSequenceVectorViewer,1> *)(*pcVar4)();
      return pTVar15;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SFixedSampledSequenceVectorViewer *)0x0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x416,L"");
    if (bVar12) {
      pcVar4 = (code *)swi(3);
      pTVar15 = (TSharedRef<SFixedSampledSequenceVectorViewer,1> *)(*pcVar4)();
      return pTVar15;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SFixedSampledSequenceVectorViewer *)0x0;
  if (__return_storage_ptr__->Object == (SFixedSampledSequenceVectorViewer *)0x0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x26c,L"");
    if (bVar12) {
      pcVar4 = (code *)swi(3);
      pTVar15 = (TSharedRef<SFixedSampledSequenceVectorViewer,1> *)(*pcVar4)();
      return pTVar15;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 14d8d15f0

TSharedRef<SFixedSampledSequenceViewer,1> * __thiscall
TSlateDecl<SFixedSampledSequenceViewer,RequiredArgs::T3RequiredArgs<TArrayView<float_const_,int>_const_&,unsigned_int_const_&,TSharedRef<FFixedSampledSequenceGridData,1>_&>_>
::operator<<=(TSlateDecl<SFixedSampledSequenceViewer,RequiredArgs::T3RequiredArgs<TArrayView<float_const_,int>_const_&,unsigned_int_const_&,TSharedRef<FFixedSampledSequenceGridData,1>_&>_>
              *this,TSharedRef<SFixedSampledSequenceViewer,1> *__return_storage_ptr__,
             FArguments *param_1)

{
  byte *pbVar1;
  T3RequiredArgs<TArrayView<float_const_,int>_const_&,unsigned_int_const_&,TSharedRef<FFixedSampledSequenceGridData,1>_&>
  *pTVar2;
  SFixedSampledSequenceViewer *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  TArrayView<float_const_,int> *pTVar5;
  FSampledSequenceViewerStyle *pFVar6;
  code *pcVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  ESampledSequenceDrawOrientation EVar11;
  EStyleColor EVar12;
  undefined2 uVar13;
  bool bVar14;
  char cVar15;
  byte bVar16;
  TSharedRef<SFixedSampledSequenceViewer,1> *pTVar17;
  uchar uVar18;
  FFixedSampledSequenceGridData *local_38;
  FSharedReferencer<1> local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  
  if ((this->_Widget).Object == (SFixedSampledSequenceViewer *)0x0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar14) {
      pcVar7 = (code *)swi(3);
      pTVar17 = (TSharedRef<SFixedSampledSequenceViewer,1> *)(*pcVar7)();
      return pTVar17;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  pTVar2 = this->_RequiredArgs;
  pSVar3 = (this->_Widget).Object;
  pTVar4 = (pTVar2->Arg2->SharedReferenceCount).ReferenceController;
  local_38 = pTVar2->Arg2->Object;
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    uVar18 = (uchar)*pTVar2->Arg1;
    pTVar5 = pTVar2->Arg0;
    local_28 = *(undefined4 *)&pTVar5->DataPtr;
    uStack_24 = *(undefined4 *)((longlong)&pTVar5->DataPtr + 4);
    iStack_20 = pTVar5->ArrayNum;
    uStack_1c = *(undefined4 *)&pTVar5->field_0xc;
  }
  else {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    uVar18 = (uchar)*pTVar2->Arg1;
    pTVar5 = pTVar2->Arg0;
    local_28 = *(undefined4 *)&pTVar5->DataPtr;
    uStack_24 = *(undefined4 *)((longlong)&pTVar5->DataPtr + 4);
    iStack_20 = pTVar5->ArrayNum;
    uStack_1c = *(undefined4 *)&pTVar5->field_0xc;
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_30.ReferenceController = pTVar4;
  if (&pSVar3->GridService != (TSharedPtr<IFixedSampledSequenceGridService,1> *)&local_38) {
    (pSVar3->GridService).Object = (IFixedSampledSequenceGridService *)local_38;
    local_38 = (FFixedSampledSequenceGridData *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(pSVar3->GridService).SharedReferenceCount,&local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  SFixedSampledSequenceViewer::UpdateGridMetrics(pSVar3);
  (pSVar3->SampleData).DataPtr = (float *)CONCAT44(uStack_24,local_28);
  *(ulonglong *)&(pSVar3->SampleData).ArrayNum = CONCAT44(uStack_1c,iStack_20);
  pSVar3->NumChannels = uVar18;
  pSVar3->bForceRedraw = true;
  fVar9 = (param_1->_SequenceDrawingParams).DimensionSlotMargin;
  fVar10 = (param_1->_SequenceDrawingParams).MaxSequenceHeightRatio;
  (pSVar3->DrawingParams).MaxDisplayedValue = (param_1->_SequenceDrawingParams).MaxDisplayedValue;
  (pSVar3->DrawingParams).DimensionSlotMargin = fVar9;
  (pSVar3->DrawingParams).MaxSequenceHeightRatio = fVar10;
  fVar9 = (param_1->_SequenceDrawingParams).MinScaledBinValue;
  fVar10 = (param_1->_SequenceDrawingParams).VerticalZoomFactor;
  EVar11 = (param_1->_SequenceDrawingParams).Orientation;
  (pSVar3->DrawingParams).MinSequenceHeightRatio =
       (param_1->_SequenceDrawingParams).MinSequenceHeightRatio;
  (pSVar3->DrawingParams).MinScaledBinValue = fVar9;
  (pSVar3->DrawingParams).VerticalZoomFactor = fVar10;
  (pSVar3->DrawingParams).Orientation = EVar11;
  pSVar3->bHideBackground = param_1->_HideBackground;
  pSVar3->bHideGrid = param_1->_HideGrid;
  if (param_1->_Style == (FSampledSequenceViewerStyle *)0x0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("InArgs._Style",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SFixedSampledSequenceViewer.cpp"
                        ,0xe,L"");
    if (bVar14) {
      pcVar7 = (code *)swi(3);
      pTVar17 = (TSharedRef<SFixedSampledSequenceViewer,1> *)(*pcVar7)();
      return pTVar17;
    }
  }
  pFVar6 = param_1->_Style;
  uVar8 = *(undefined8 *)((longlong)&(pFVar6->SequenceColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(pSVar3->SequenceColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(pFVar6->SequenceColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(pSVar3->SequenceColor).SpecifiedColor.field0_0x0 + 8) = uVar8;
  EVar12 = (pFVar6->SequenceColor).ColorTableId;
  uVar13 = *(undefined2 *)&(pFVar6->SequenceColor).field_0x12;
  (pSVar3->SequenceColor).ColorUseRule = (pFVar6->SequenceColor).ColorUseRule;
  (pSVar3->SequenceColor).ColorTableId = EVar12;
  *(undefined2 *)&(pSVar3->SequenceColor).field_0x12 = uVar13;
  pFVar6 = param_1->_Style;
  uVar8 = *(undefined8 *)((longlong)&(pFVar6->MajorGridLineColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(pSVar3->MajorGridLineColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(pFVar6->MajorGridLineColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(pSVar3->MajorGridLineColor).SpecifiedColor.field0_0x0 + 8) = uVar8;
  EVar12 = (pFVar6->MajorGridLineColor).ColorTableId;
  uVar13 = *(undefined2 *)&(pFVar6->MajorGridLineColor).field_0x12;
  (pSVar3->MajorGridLineColor).ColorUseRule = (pFVar6->MajorGridLineColor).ColorUseRule;
  (pSVar3->MajorGridLineColor).ColorTableId = EVar12;
  *(undefined2 *)&(pSVar3->MajorGridLineColor).field_0x12 = uVar13;
  pFVar6 = param_1->_Style;
  uVar8 = *(undefined8 *)((longlong)&(pFVar6->MinorGridLineColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(pSVar3->MinorGridLineColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(pFVar6->MinorGridLineColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(pSVar3->MinorGridLineColor).SpecifiedColor.field0_0x0 + 8) = uVar8;
  EVar12 = (pFVar6->MinorGridLineColor).ColorTableId;
  uVar13 = *(undefined2 *)&(pFVar6->MinorGridLineColor).field_0x12;
  (pSVar3->MinorGridLineColor).ColorUseRule = (pFVar6->MinorGridLineColor).ColorUseRule;
  (pSVar3->MinorGridLineColor).ColorTableId = EVar12;
  *(undefined2 *)&(pSVar3->MinorGridLineColor).field_0x12 = uVar13;
  pFVar6 = param_1->_Style;
  uVar8 = *(undefined8 *)
           ((longlong)&(pFVar6->SequenceBackgroundColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(pSVar3->BackgroundColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(pFVar6->SequenceBackgroundColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(pSVar3->BackgroundColor).SpecifiedColor.field0_0x0 + 8) = uVar8;
  EVar12 = (pFVar6->SequenceBackgroundColor).ColorTableId;
  uVar13 = *(undefined2 *)&(pFVar6->SequenceBackgroundColor).field_0x12;
  (pSVar3->BackgroundColor).ColorUseRule = (pFVar6->SequenceBackgroundColor).ColorUseRule;
  (pSVar3->BackgroundColor).ColorTableId = EVar12;
  *(undefined2 *)&(pSVar3->BackgroundColor).field_0x12 = uVar13;
  FSlateBrush::operator=(&pSVar3->BackgroundBrush,&param_1->_Style->BackgroundBrush);
  pSVar3->DesiredWidth = param_1->_Style->DesiredWidth;
  pSVar3->DesiredHeight = param_1->_Style->DesiredHeight;
  pSVar3->SampleMarkersSize = param_1->_Style->SampleMarkersSize;
  pSVar3->SequenceLineThickness = param_1->_Style->SequenceLineThickness;
  pFVar6 = param_1->_Style;
  uVar8 = *(undefined8 *)((longlong)&(pFVar6->ZeroCrossingLineColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(pSVar3->ZeroCrossingLineColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(pFVar6->ZeroCrossingLineColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(pSVar3->ZeroCrossingLineColor).SpecifiedColor.field0_0x0 + 8) = uVar8;
  EVar12 = (pFVar6->ZeroCrossingLineColor).ColorTableId;
  uVar13 = *(undefined2 *)&(pFVar6->ZeroCrossingLineColor).field_0x12;
  (pSVar3->ZeroCrossingLineColor).ColorUseRule = (pFVar6->ZeroCrossingLineColor).ColorUseRule;
  (pSVar3->ZeroCrossingLineColor).ColorTableId = EVar12;
  *(undefined2 *)&(pSVar3->ZeroCrossingLineColor).field_0x12 = uVar13;
  pSVar3->ZeroCrossingLineThickness = param_1->_Style->ZeroCrossingLineThickness;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  if ((this->_Widget).Object == (SFixedSampledSequenceViewer *)0x0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar14) {
      pcVar7 = (code *)swi(3);
      pTVar17 = (TSharedRef<SFixedSampledSequenceViewer,1> *)(*pcVar7)();
      return pTVar17;
    }
  }
  pSVar3 = (this->_Widget).Object;
  if ((pSVar3->_padding_ & 0x10) == 0) {
    cVar15 = (**(code **)(pSVar3->_padding_ + 0x228))(pSVar3);
    bVar16 = 0;
    if (cVar15 == '\0') goto LAB_14d8d189c;
  }
  bVar16 = 0x20;
LAB_14d8d189c:
  *(byte *)&pSVar3->_padding_ = (byte)pSVar3->_padding_ & 0xdf;
  *(byte *)&pSVar3->_padding_ = (byte)pSVar3->_padding_ | bVar16;
  if ((this->_Widget).Object == (SFixedSampledSequenceViewer *)0x0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar14) {
      pcVar7 = (code *)swi(3);
      pTVar17 = (TSharedRef<SFixedSampledSequenceViewer,1> *)(*pcVar7)();
      return pTVar17;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SFixedSampledSequenceViewer *)0x0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x416,L"");
    if (bVar14) {
      pcVar7 = (code *)swi(3);
      pTVar17 = (TSharedRef<SFixedSampledSequenceViewer,1> *)(*pcVar7)();
      return pTVar17;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SFixedSampledSequenceViewer *)0x0;
  if (__return_storage_ptr__->Object == (SFixedSampledSequenceViewer *)0x0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x26c,L"");
    if (bVar14) {
      pcVar7 = (code *)swi(3);
      pTVar17 = (TSharedRef<SFixedSampledSequenceViewer,1> *)(*pcVar7)();
      return pTVar17;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 14d8d1970

TSharedRef<SPlayheadOverlay,1> * __thiscall
TSlateDecl<SPlayheadOverlay,RequiredArgs::T0RequiredArgs>::operator<<=
          (TSlateDecl<SPlayheadOverlay,RequiredArgs::T0RequiredArgs> *this,
          TSharedRef<SPlayheadOverlay,1> *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  SPlayheadOverlay *pSVar2;
  FPlayheadOverlayStyle *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  EStyleColor EVar6;
  undefined2 uVar7;
  bool bVar8;
  char cVar9;
  byte bVar10;
  TSharedRef<SPlayheadOverlay,1> *pTVar11;
  
  if ((this->_Widget).Object == (SPlayheadOverlay *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      pTVar11 = (TSharedRef<SPlayheadOverlay,1> *)(*pcVar4)();
      return pTVar11;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  pSVar2 = (this->_Widget).Object;
  if (param_1->_Style == (FPlayheadOverlayStyle *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InArgs._Style",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SPlayheadOverlay.cpp"
                       ,7,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      pTVar11 = (TSharedRef<SPlayheadOverlay,1> *)(*pcVar4)();
      return pTVar11;
    }
  }
  pFVar3 = param_1->_Style;
  uVar5 = *(undefined8 *)((longlong)&(pFVar3->PlayheadColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(pSVar2->PlayheadColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(pFVar3->PlayheadColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(pSVar2->PlayheadColor).SpecifiedColor.field0_0x0 + 8) = uVar5;
  EVar6 = (pFVar3->PlayheadColor).ColorTableId;
  uVar7 = *(undefined2 *)&(pFVar3->PlayheadColor).field_0x12;
  (pSVar2->PlayheadColor).ColorUseRule = (pFVar3->PlayheadColor).ColorUseRule;
  (pSVar2->PlayheadColor).ColorTableId = EVar6;
  *(undefined2 *)&(pSVar2->PlayheadColor).field_0x12 = uVar7;
  pSVar2->PlayheadWidth = param_1->_Style->PlayheadWidth;
  pSVar2->DesiredWidth = param_1->_Style->DesiredWidth;
  pSVar2->DesiredHeight = param_1->_Style->DesiredHeight;
  if ((this->_Widget).Object == (SPlayheadOverlay *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      pTVar11 = (TSharedRef<SPlayheadOverlay,1> *)(*pcVar4)();
      return pTVar11;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar9 = (**(code **)(pSVar2->_padding_ + 0x228))(pSVar2);
    bVar10 = 0;
    if (cVar9 == '\0') goto LAB_14d8d1a89;
  }
  bVar10 = 0x20;
LAB_14d8d1a89:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar10;
  if ((this->_Widget).Object == (SPlayheadOverlay *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      pTVar11 = (TSharedRef<SPlayheadOverlay,1> *)(*pcVar4)();
      return pTVar11;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SPlayheadOverlay *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      pTVar11 = (TSharedRef<SPlayheadOverlay,1> *)(*pcVar4)();
      return pTVar11;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SPlayheadOverlay *)0x0;
  if (__return_storage_ptr__->Object == (SPlayheadOverlay *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      pTVar11 = (TSharedRef<SPlayheadOverlay,1> *)(*pcVar4)();
      return pTVar11;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 14d8d1b50

TSharedRef<SSampledSequenceValueGridOverlay,1> * __thiscall
TSlateDecl<SSampledSequenceValueGridOverlay,RequiredArgs::T0RequiredArgs>::operator<<=
          (TSlateDecl<SSampledSequenceValueGridOverlay,RequiredArgs::T0RequiredArgs> *this,
          TSharedRef<SSampledSequenceValueGridOverlay,1> *__return_storage_ptr__,FArguments *param_1
          )

{
  undefined1 *puVar1;
  SSampledSequenceValueGridOverlay *pSVar2;
  FSampledSequenceValueGridOverlayStyle *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  ESampledSequenceDrawOrientation EVar8;
  EStyleColor EVar9;
  undefined2 uVar10;
  bool bVar11;
  char cVar12;
  byte bVar13;
  TSharedRef<SSampledSequenceValueGridOverlay,1> *pTVar14;
  TFunction<FText___cdecl(double)> *pTVar15;
  
  if ((this->_Widget).Object == (SSampledSequenceValueGridOverlay *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar11) {
      pcVar4 = (code *)swi(3);
      pTVar14 = (TSharedRef<SSampledSequenceValueGridOverlay,1> *)(*pcVar4)();
      return pTVar14;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  pSVar2 = (this->_Widget).Object;
  if (param_1->_Style == (FSampledSequenceValueGridOverlayStyle *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("InArgs._Style",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SSampledSequenceValueGridOverlay.cpp"
                        ,0x13,L"");
    if (bVar11) {
      pcVar4 = (code *)swi(3);
      pTVar14 = (TSharedRef<SSampledSequenceValueGridOverlay,1> *)(*pcVar4)();
      return pTVar14;
    }
  }
  pSVar2->GridSplitMode = param_1->_DivideMode;
  pSVar2->MaxDivisionParameter = param_1->_MaxDivisionParameter;
  pTVar15 = &SampledSequenceValueGridOverlayPrivate::DefaultLabelGenerator;
  if (*(longlong *)&param_1->_ValueGridLabelGenerator != 0) {
    pTVar15 = &param_1->_ValueGridLabelGenerator;
  }
  TFunction<FText___cdecl(double)>::operator=(&pSVar2->OnValueGridLabel,pTVar15);
  pSVar2->NumDimensions = param_1->_NumDimensions;
  fVar6 = (param_1->_SequenceDrawingParams).DimensionSlotMargin;
  fVar7 = (param_1->_SequenceDrawingParams).MaxSequenceHeightRatio;
  (pSVar2->DrawingParams).MaxDisplayedValue = (param_1->_SequenceDrawingParams).MaxDisplayedValue;
  (pSVar2->DrawingParams).DimensionSlotMargin = fVar6;
  (pSVar2->DrawingParams).MaxSequenceHeightRatio = fVar7;
  fVar6 = (param_1->_SequenceDrawingParams).MinScaledBinValue;
  fVar7 = (param_1->_SequenceDrawingParams).VerticalZoomFactor;
  EVar8 = (param_1->_SequenceDrawingParams).Orientation;
  (pSVar2->DrawingParams).MinSequenceHeightRatio =
       (param_1->_SequenceDrawingParams).MinSequenceHeightRatio;
  (pSVar2->DrawingParams).MinScaledBinValue = fVar6;
  (pSVar2->DrawingParams).VerticalZoomFactor = fVar7;
  (pSVar2->DrawingParams).Orientation = EVar8;
  pSVar2->bHideLabels = param_1->_HideLabels;
  pSVar2->bHideGrid = param_1->_HideGrid;
  pFVar3 = param_1->_Style;
  uVar5 = *(undefined8 *)((longlong)&(pFVar3->GridColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(pSVar2->GridColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(pFVar3->GridColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(pSVar2->GridColor).SpecifiedColor.field0_0x0 + 8) = uVar5;
  EVar9 = (pFVar3->GridColor).ColorTableId;
  uVar10 = *(undefined2 *)&(pFVar3->GridColor).field_0x12;
  (pSVar2->GridColor).ColorUseRule = (pFVar3->GridColor).ColorUseRule;
  (pSVar2->GridColor).ColorTableId = EVar9;
  *(undefined2 *)&(pSVar2->GridColor).field_0x12 = uVar10;
  FSlateFontInfo::operator=(&pSVar2->LabelTextFont,&param_1->_Style->LabelTextFont);
  pFVar3 = param_1->_Style;
  uVar5 = *(undefined8 *)((longlong)&(pFVar3->LabelTextColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(pSVar2->LabelTextColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(pFVar3->LabelTextColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(pSVar2->LabelTextColor).SpecifiedColor.field0_0x0 + 8) = uVar5;
  EVar9 = (pFVar3->LabelTextColor).ColorTableId;
  uVar10 = *(undefined2 *)&(pFVar3->LabelTextColor).field_0x12;
  (pSVar2->LabelTextColor).ColorUseRule = (pFVar3->LabelTextColor).ColorUseRule;
  (pSVar2->LabelTextColor).ColorTableId = EVar9;
  *(undefined2 *)&(pSVar2->LabelTextColor).field_0x12 = uVar10;
  pSVar2->DesiredWidth = param_1->_Style->DesiredWidth;
  pSVar2->DesiredHeight = param_1->_Style->DesiredHeight;
  pSVar2->GridThickness = param_1->_Style->GridThickness;
  if ((this->_Widget).Object == (SSampledSequenceValueGridOverlay *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar11) {
      pcVar4 = (code *)swi(3);
      pTVar14 = (TSharedRef<SSampledSequenceValueGridOverlay,1> *)(*pcVar4)();
      return pTVar14;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->field_0x30 & 0x10) == 0) {
    cVar12 = (**(code **)(*(longlong *)pSVar2 + 0x228))(pSVar2);
    bVar13 = 0;
    if (cVar12 == '\0') goto LAB_14d8d1d1d;
  }
  bVar13 = 0x20;
LAB_14d8d1d1d:
  pSVar2->field_0x30 = pSVar2->field_0x30 & 0xdf;
  pSVar2->field_0x30 = pSVar2->field_0x30 | bVar13;
  if ((this->_Widget).Object == (SSampledSequenceValueGridOverlay *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar11) {
      pcVar4 = (code *)swi(3);
      pTVar14 = (TSharedRef<SSampledSequenceValueGridOverlay,1> *)(*pcVar4)();
      return pTVar14;
    }
  }
  puVar1 = &((this->_Widget).Object)->field_0x31;
  *puVar1 = *puVar1 | 4;
  if ((this->_Widget).Object == (SSampledSequenceValueGridOverlay *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x416,L"");
    if (bVar11) {
      pcVar4 = (code *)swi(3);
      pTVar14 = (TSharedRef<SSampledSequenceValueGridOverlay,1> *)(*pcVar4)();
      return pTVar14;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SSampledSequenceValueGridOverlay *)0x0;
  if (__return_storage_ptr__->Object == (SSampledSequenceValueGridOverlay *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x26c,L"");
    if (bVar11) {
      pcVar4 = (code *)swi(3);
      pTVar14 = (TSharedRef<SSampledSequenceValueGridOverlay,1> *)(*pcVar4)();
      return pTVar14;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 14d8d1df0

TSharedRef<SWidgetSwitcher,1> * __thiscall
TSlateDecl<SWidgetSwitcher,RequiredArgs::T0RequiredArgs>::operator<<=
          (TSlateDecl<SWidgetSwitcher,RequiredArgs::T0RequiredArgs> *this,
          TSharedRef<SWidgetSwitcher,1> *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  SWidgetSwitcher *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<SWidgetSwitcher,1> *pTVar7;
  
  if ((this->_Widget).Object == (SWidgetSwitcher *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SWidgetSwitcher,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  SWidgetSwitcher::Construct((this->_Widget).Object,param_1);
  if ((this->_Widget).Object == (SWidgetSwitcher *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SWidgetSwitcher,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar5 = (**(code **)(pSVar2->_padding_ + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_14d8d1e91;
  }
  bVar6 = 0x20;
LAB_14d8d1e91:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar6;
  if ((this->_Widget).Object == (SWidgetSwitcher *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SWidgetSwitcher,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SWidgetSwitcher *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SWidgetSwitcher,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SWidgetSwitcher *)0x0;
  if (__return_storage_ptr__->Object == (SWidgetSwitcher *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SWidgetSwitcher,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

