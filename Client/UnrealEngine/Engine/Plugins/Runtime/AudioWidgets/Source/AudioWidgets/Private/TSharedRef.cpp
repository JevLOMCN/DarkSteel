// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 15

// TSharedRef<SWidget,1><STileView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>_> @ 14d894f50

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::
TSharedRef<SWidget,1><STileView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>_>
          (TSharedRef<SWidget,1> *this,
          TSharedRef<STileView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>
          *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = (SWidget *)param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TSharedRef<SWidget,1><SAudioMaterialKnob> @ 14d895050

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SAudioMaterialKnob>
          (TSharedRef<SWidget,1> *this,TSharedRef<SAudioMaterialKnob,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = (SWidget *)param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TSharedRef<SWidget,1><SAudioTextBox> @ 14d895080

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SAudioTextBox>
          (TSharedRef<SWidget,1> *this,TSharedRef<SAudioTextBox,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = (SWidget *)param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TSharedRef<UE::Slate::Containers::TObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1> @ 14d8a7860

TSharedRef<UE::Slate::Containers::TObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>
* __thiscall
TSharedRef<UE::Slate::Containers::TObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>
::
TSharedRef<UE::Slate::Containers::TObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>
          (TSharedRef<UE::Slate::Containers::TObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>
           *this,TSharedRef<UE::Slate::Containers::TObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>
                 *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TSharedRef<SComboRow<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,1> @ 14d8a7890

TSharedRef<SComboRow<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>,1> * __thiscall
TSharedRef<SComboRow<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,1>::
TSharedRef<SComboRow<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,1>
          (void *this,SComboRow<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_> *param_1,
          TReferenceControllerBase<1> *param_2)

{
  int *piVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  TSharedRef<SComboRow<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>,1> *pTVar7;
  
  *(SComboRow<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_> **)this = param_1;
  *(TReferenceControllerBase<1> **)((longlong)this + 8) = param_2;
  if (param_1 == (SComboRow<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TSharedRef<SComboRow<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>,1> *)(*pcVar5)();
      return pTVar7;
    }
  }
  else if (((*(longlong *)&param_1->field_0x10 == 0) || (*(longlong *)&param_1->field_0x18 == 0)) ||
          (*(int *)(*(longlong *)&param_1->field_0x18 + 8) < 1)) {
    pTVar3 = *(TReferenceControllerBase<1> **)((longlong)this + 8);
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (&param_1->field_0x8 == (undefined1 *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x158,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar7 = (TSharedRef<SComboRow<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>,1> *)
                 (*pcVar5)();
        return pTVar7;
      }
    }
    *(undefined1 **)&param_1->field_0x10 = &param_1->field_0x8;
    if (pTVar3 != *(TReferenceControllerBase<1> **)&param_1->field_0x18) {
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = *(longlong **)&param_1->field_0x18;
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
      *(TReferenceControllerBase<1> **)&param_1->field_0x18 = pTVar3;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return this;
}

// TSharedRef<STableRow<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,1> @ 14d8a79b0

TSharedRef<STableRow<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>,1> * __thiscall
TSharedRef<STableRow<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,1>::
TSharedRef<STableRow<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,1>
          (void *this,STableRow<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_> *param_1,
          TReferenceControllerBase<1> *param_2)

{
  int *piVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  TSharedRef<STableRow<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>,1> *pTVar7;
  
  *(STableRow<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_> **)this = param_1;
  *(TReferenceControllerBase<1> **)((longlong)this + 8) = param_2;
  if (param_1 == (STableRow<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TSharedRef<STableRow<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>,1> *)(*pcVar5)();
      return pTVar7;
    }
  }
  else if (((param_1->_padding_ == 0) || (param_1->_padding_ == 0)) ||
          (*(int *)(param_1->_padding_ + 8) < 1)) {
    pTVar3 = *(TReferenceControllerBase<1> **)((longlong)this + 8);
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (&param_1->_padding_ == (longlong *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x158,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar7 = (TSharedRef<STableRow<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>,1> *)
                 (*pcVar5)();
        return pTVar7;
      }
    }
    param_1->_padding_ = (longlong)&param_1->_padding_;
    if (pTVar3 != (TReferenceControllerBase<1> *)param_1->_padding_) {
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = (longlong *)param_1->_padding_;
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
      param_1->_padding_ = (longlong)pTVar3;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return this;
}

// TSharedRef<STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1> @ 14d8a7ad0

TSharedRef<STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>
* __thiscall
TSharedRef<STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>
::
TSharedRef<STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>
          (TSharedRef<STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>
           *this,STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
                 *param_1,TReferenceControllerBase<1> *param_2)

{
  int *piVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  TSharedRef<STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>
  *pTVar7;
  
  this->Object = param_1;
  (this->SharedReferenceCount).ReferenceController = param_2;
  if (param_1 ==
      (STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_> *)
      0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TSharedRef<STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>
                *)(*pcVar5)();
      return pTVar7;
    }
  }
  else if (((param_1->_padding_ == 0) || (param_1->_padding_ == 0)) ||
          (*(int *)(param_1->_padding_ + 8) < 1)) {
    pTVar3 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (&param_1->_padding_ == (longlong *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x158,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar7 = (TSharedRef<STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>
                  *)(*pcVar5)();
        return pTVar7;
      }
    }
    param_1->_padding_ = (longlong)&param_1->_padding_;
    if (pTVar3 != (TReferenceControllerBase<1> *)param_1->_padding_) {
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = (longlong *)param_1->_padding_;
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
      param_1->_padding_ = (longlong)pTVar3;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return this;
}

// TSharedRef<FUICommandList,1> @ 14d8a7bf0

TSharedRef<FUICommandList,1> * __thiscall
TSharedRef<FUICommandList,1>::TSharedRef<FUICommandList,1>
          (TSharedRef<FUICommandList,1> *this,FUICommandList *param_1,
          TReferenceControllerBase<1> *param_2)

{
  int *piVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  TSharedRef<FUICommandList,1> *pTVar7;
  
  this->Object = param_1;
  (this->SharedReferenceCount).ReferenceController = param_2;
  if (param_1 == (FUICommandList *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TSharedRef<FUICommandList,1> *)(*pcVar5)();
      return pTVar7;
    }
  }
  else if (((param_1->_padding_ == 0) || (param_1->_padding_ == 0)) ||
          (*(int *)(param_1->_padding_ + 8) < 1)) {
    pTVar3 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    param_1->_padding_ = (longlong)param_1;
    if (pTVar3 != (TReferenceControllerBase<1> *)param_1->_padding_) {
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = (longlong *)param_1->_padding_;
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
      param_1->_padding_ = (longlong)pTVar3;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return this;
}

// TSharedRef<SAudioVectorscopePanelWidget,1> @ 14d8a7cd0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SAudioVectorscopePanelWidget,1> * __thiscall
TSharedRef<SAudioVectorscopePanelWidget,1>::TSharedRef<SAudioVectorscopePanelWidget,1>
          (TSharedRef<SAudioVectorscopePanelWidget,1> *this,SAudioVectorscopePanelWidget *param_1,
          TReferenceControllerBase<1> *param_2)

{
  int *piVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  TSharedRef<SAudioVectorscopePanelWidget,1> *pTVar7;
  
  this->Object = param_1;
  (this->SharedReferenceCount).ReferenceController = param_2;
  if (param_1 == (SAudioVectorscopePanelWidget *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TSharedRef<SAudioVectorscopePanelWidget,1> *)(*pcVar5)();
      return pTVar7;
    }
  }
  else if (((param_1->_padding_ == 0) || (param_1->_padding_ == 0)) ||
          (*(int *)(param_1->_padding_ + 8) < 1)) {
    pTVar3 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    param_1->_padding_ = (longlong)param_1;
    if (pTVar3 != (TReferenceControllerBase<1> *)param_1->_padding_) {
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = (longlong *)param_1->_padding_;
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
      param_1->_padding_ = (longlong)pTVar3;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return this;
}

// ~TSharedRef<FAudioUnitProcessor,1> @ 14d8bb990

void __thiscall
TSharedRef<FAudioUnitProcessor,1>::~TSharedRef<FAudioUnitProcessor,1>
          (TSharedRef<FAudioUnitProcessor,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedRef<FFrequencyProcessor,1> @ 14d8bb9c0

void __thiscall
TSharedRef<FFrequencyProcessor,1>::~TSharedRef<FFrequencyProcessor,1>
          (TSharedRef<FFrequencyProcessor,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedRef<FVolumeProcessor,1> @ 14d8bb9f0

void __thiscall
TSharedRef<FVolumeProcessor,1>::~TSharedRef<FVolumeProcessor,1>
          (TSharedRef<FVolumeProcessor,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedRef<FExtender,1> @ 14d8bba20

void __thiscall TSharedRef<FExtender,1>::~TSharedRef<FExtender,1>(TSharedRef<FExtender,1> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedReferenceCount).ReferenceController);
  return;
}

// ~TSharedRef<SAudioMaterialKnob,1> @ 14d8bba30

void __thiscall
TSharedRef<SAudioMaterialKnob,1>::~TSharedRef<SAudioMaterialKnob,1>
          (TSharedRef<SAudioMaterialKnob,1> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedReferenceCount).ReferenceController);
  return;
}

// ~TSharedRef<SAudioTextBox,1> @ 14d8bba40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TSharedRef<SAudioTextBox,1>::~TSharedRef<SAudioTextBox,1>(TSharedRef<SAudioTextBox,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

