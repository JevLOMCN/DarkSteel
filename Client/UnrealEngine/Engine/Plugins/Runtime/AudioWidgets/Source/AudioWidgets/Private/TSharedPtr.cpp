// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 27

// TSharedPtr<FAudioUnitProcessor,1><FAudioUnitProcessor> @ 14d894cc0

TSharedPtr<FAudioUnitProcessor,1> * __thiscall
TSharedPtr<FAudioUnitProcessor,1>::TSharedPtr<FAudioUnitProcessor,1><FAudioUnitProcessor>
          (TSharedPtr<FAudioUnitProcessor,1> *this,TSharedRef<FAudioUnitProcessor,1> *param_1)

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

// TSharedPtr<FAudioUnitProcessor,1><FFrequencyProcessor> @ 14d894cf0

TSharedPtr<FAudioUnitProcessor,1> * __thiscall
TSharedPtr<FAudioUnitProcessor,1>::TSharedPtr<FAudioUnitProcessor,1><FFrequencyProcessor>
          (TSharedPtr<FAudioUnitProcessor,1> *this,TSharedRef<FFrequencyProcessor,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = (FAudioUnitProcessor *)param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TSharedPtr<FAudioUnitProcessor,1><FVolumeProcessor> @ 14d894f20

TSharedPtr<FAudioUnitProcessor,1> * __thiscall
TSharedPtr<FAudioUnitProcessor,1>::TSharedPtr<FAudioUnitProcessor,1><FVolumeProcessor>
          (TSharedPtr<FAudioUnitProcessor,1> *this,TSharedRef<FVolumeProcessor,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = (FAudioUnitProcessor *)param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TSharedPtr<FExtender,1><FExtender> @ 14d895020

TSharedPtr<FExtender,1> * __thiscall
TSharedPtr<FExtender,1>::TSharedPtr<FExtender,1><FExtender>
          (TSharedPtr<FExtender,1> *this,TSharedRef<FExtender,1> *param_1)

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

// TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1><enum_EAudioOscilloscopeTriggerMode> @ 14d8950b0

TSharedPtr<EAudioOscilloscopeTriggerMode,1> * __thiscall
TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>::
TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1><enum_EAudioOscilloscopeTriggerMode>
          (void *this,TRawPtrProxy<EAudioOscilloscopeTriggerMode> *param_1)

{
  EAudioOscilloscopeTriggerMode *pEVar1;
  undefined8 *puVar2;
  
  *(EAudioOscilloscopeTriggerMode **)this = param_1->Object;
  pEVar1 = param_1->Object;
  puVar2 = ::operator_new(0x18);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 1) = 1;
    *puVar2 = &
              ___7__TReferenceControllerWithDeleter_W4EAudioOscilloscopeTriggerMode__U__DefaultDeleter_W4EAudioOscilloscopeTriggerMode___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 1;
    puVar2[2] = pEVar1;
    *(undefined8 **)((longlong)this + 8) = puVar2;
    return this;
  }
  *(undefined8 *)((longlong)this + 8) = 0;
  return this;
}

// operator=<FAudioSpectrogramViewport> @ 14d8951b0

TSharedPtr<FAudioSpectrogramViewport,1> * __thiscall
TSharedPtr<FAudioSpectrogramViewport,1>::operator=<FAudioSpectrogramViewport>
          (TSharedPtr<FAudioSpectrogramViewport,1> *this,
          TRawPtrProxy<FAudioSpectrogramViewport> *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  FAudioSpectrogramViewport *pFVar4;
  FAudioSpectrogramViewport *pFVar5;
  longlong *plVar6;
  FSharedReferencer<1> FVar7;
  TSharedPtr<FAudioSpectrogramViewport,1> local_18;
  
  pFVar4 = param_1->Object;
  local_18.Object = pFVar4;
  FVar7.ReferenceController = ::operator_new(0x18);
  if (FVar7.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    FVar7.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    (FVar7.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (FVar7.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    (FVar7.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFAudioSpectrogramViewport__U__DefaultDeleter_VFAudioSpectrogramViewport___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    FVar7.ReferenceController[1]._padding_ = (longlong)pFVar4;
  }
  pFVar5 = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController = FVar7.ReferenceController;
  if ((pFVar5 != (FAudioSpectrogramViewport *)0x0) &&
     (((plVar1 = &pFVar5->_padding_, pFVar5->_padding_ == 0 || (*plVar1 == 0)) ||
      (*(int *)(*plVar1 + 8) < 1)))) {
    if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar7.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar7.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar5->_padding_ = (longlong)pFVar5;
    if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)*plVar1) {
      if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FVar7.ReferenceController)->WeakReferenceCount =
             (atomic<int>)((int)(FVar7.ReferenceController)->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar6 = (longlong *)*plVar1;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
      *plVar1 = (longlong)FVar7.ReferenceController;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar7.ReferenceController);
  }
  if (this != &local_18) {
    this->Object = pFVar4;
    local_18.Object = (FAudioSpectrogramViewport *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&local_18.SharedReferenceCount);
    FVar7.ReferenceController = local_18.SharedReferenceCount.ReferenceController;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar7.ReferenceController);
  return this;
}

// TSharedPtr<FExtender,1> @ 14d8a7800

TSharedPtr<FExtender,1> * __thiscall
TSharedPtr<FExtender,1>::TSharedPtr<FExtender,1>
          (TSharedPtr<FExtender,1> *this,TSharedPtr<FExtender,1> *param_1)

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

// TSharedPtr<SWidget,1> @ 14d8a7830

TSharedPtr<SWidget,1> * __thiscall
TSharedPtr<SWidget,1>::TSharedPtr<SWidget,1>
          (TSharedPtr<SWidget,1> *this,TSharedPtr<SWidget,1> *param_1)

{
  this->Object = param_1->Object;
  (this->SharedReferenceCount).ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (SWidget *)0x0;
  return this;
}

// ~TSharedPtr<FAudioUnitProcessor,1> @ 14d8bb920

void __thiscall
TSharedPtr<FAudioUnitProcessor,1>::~TSharedPtr<FAudioUnitProcessor,1>
          (TSharedPtr<FAudioUnitProcessor,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedPtr<FExtender,1> @ 14d8bb950

void __thiscall TSharedPtr<FExtender,1>::~TSharedPtr<FExtender,1>(TSharedPtr<FExtender,1> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedReferenceCount).ReferenceController);
  return;
}

// ~TSharedPtr<SAudioTextBox,1> @ 14d8bb960

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TSharedPtr<SAudioTextBox,1>::~TSharedPtr<SAudioTextBox,1>(TSharedPtr<SAudioTextBox,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// operator= @ 14d8c2fd0

TSharedPtr<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1> * __thiscall
TSharedPtr<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>::operator=
          (TSharedPtr<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1> *this,
          TSharedPtr<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FLoudnessMetric *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->SharedReferenceCount).ReferenceController;
  this->Object = pFVar2;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return this;
}

// operator= @ 14d8c3020

TSharedPtr<FAudioUnitProcessor,1> * __thiscall
TSharedPtr<FAudioUnitProcessor,1>::operator=
          (TSharedPtr<FAudioUnitProcessor,1> *this,TSharedPtr<FAudioUnitProcessor,1> *param_1)

{
  if (this != param_1) {
    this->Object = param_1->Object;
    param_1->Object = (FAudioUnitProcessor *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&param_1->SharedReferenceCount);
  }
  return this;
}

// operator= @ 14d8c3060

TSharedPtr<FExtender,1> * __thiscall
TSharedPtr<FExtender,1>::operator=(TSharedPtr<FExtender,1> *this,TSharedPtr<FExtender,1> *param_1)

{
  if (this != param_1) {
    this->Object = param_1->Object;
    param_1->Object = (FExtender *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&param_1->SharedReferenceCount);
  }
  return this;
}

// operator= @ 14d8c30a0

TSharedPtr<EAudioOscilloscopeTriggerMode,1> * __thiscall
TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>::operator=
          (void *this,TSharedPtr<EAudioOscilloscopeTriggerMode,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  EAudioOscilloscopeTriggerMode *pEVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pEVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)this + 8);
  *(EAudioOscilloscopeTriggerMode **)this = pEVar2;
  *(TReferenceControllerBase<1> **)((longlong)this + 8) = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return this;
}

// operator-> @ 14d8c3cc0

FAudioUnitProcessor * __thiscall
TSharedPtr<FAudioUnitProcessor,1>::operator->(TSharedPtr<FAudioUnitProcessor,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FAudioUnitProcessor *pFVar3;
  
  if (this->Object != (FAudioUnitProcessor *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FAudioUnitProcessor *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14d8c3d10

SListView<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_> * __thiscall
TSharedPtr<SListView<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,1>::operator->(void *this)

{
  code *pcVar1;
  bool bVar2;
  SListView<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_> *pSVar3;
  
  if (*(longlong *)this != 0) {
    return *(SListView<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_> **)this;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SListView<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_> *)(*pcVar1)();
    return pSVar3;
  }
  return *(SListView<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_> **)this;
}

// operator-> @ 14d8c3d60

SAudioMaterialKnob * __thiscall
TSharedPtr<SAudioMaterialKnob,1>::operator->(TSharedPtr<SAudioMaterialKnob,1> *this)

{
  code *pcVar1;
  bool bVar2;
  SAudioMaterialKnob *pSVar3;
  
  if (this->Object != (SAudioMaterialKnob *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SAudioMaterialKnob *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

// operator-> @ 14d8c3db0

SAudioMaterialSlider * __thiscall
TSharedPtr<SAudioMaterialSlider,1>::operator->(TSharedPtr<SAudioMaterialSlider,1> *this)

{
  code *pcVar1;
  bool bVar2;
  SAudioMaterialSlider *pSVar3;
  
  if (this->Object != (SAudioMaterialSlider *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SAudioMaterialSlider *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

// operator-> @ 14d8c3e00

/* WARNING: Enum "Type": Some values do not have unique names */

SAudioTextBox * __thiscall
TSharedPtr<SAudioTextBox,1>::operator->(TSharedPtr<SAudioTextBox,1> *this)

{
  code *pcVar1;
  bool bVar2;
  SAudioTextBox *pSVar3;
  
  if (this->Object != (SAudioTextBox *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SAudioTextBox *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

// ToSharedRef @ 14d976600

TSharedRef<FFixedSampledSequenceGridData,1> * __thiscall
TSharedPtr<FFixedSampledSequenceGridData,1>::ToSharedRef
          (TSharedPtr<FFixedSampledSequenceGridData,1> *this,
          TSharedRef<FFixedSampledSequenceGridData,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<FFixedSampledSequenceGridData,1> *pTVar4;
  
  if (this->Object == (FFixedSampledSequenceGridData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<FFixedSampledSequenceGridData,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  __return_storage_ptr__->Object = this->Object;
  pTVar1 = (this->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__->Object == (FFixedSampledSequenceGridData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<FFixedSampledSequenceGridData,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// ToSharedRef @ 14d9766a0

TSharedRef<SAudioMaterialKnob,1> * __thiscall
TSharedPtr<SAudioMaterialKnob,1>::ToSharedRef
          (TSharedPtr<SAudioMaterialKnob,1> *this,
          TSharedRef<SAudioMaterialKnob,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<SAudioMaterialKnob,1> *pTVar4;
  
  if (this->Object == (SAudioMaterialKnob *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<SAudioMaterialKnob,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  __return_storage_ptr__->Object = this->Object;
  pTVar1 = (this->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__->Object == (SAudioMaterialKnob *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<SAudioMaterialKnob,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// ToSharedRef @ 14d976740

TSharedRef<SAudioMaterialSlider,1> * __thiscall
TSharedPtr<SAudioMaterialSlider,1>::ToSharedRef
          (TSharedPtr<SAudioMaterialSlider,1> *this,
          TSharedRef<SAudioMaterialSlider,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<SAudioMaterialSlider,1> *pTVar4;
  
  if (this->Object == (SAudioMaterialSlider *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<SAudioMaterialSlider,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  __return_storage_ptr__->Object = this->Object;
  pTVar1 = (this->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__->Object == (SAudioMaterialSlider *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<SAudioMaterialSlider,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// ToSharedRef @ 14d9767e0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SAudioRadialSlider,1> * __thiscall
TSharedPtr<SAudioRadialSlider,1>::ToSharedRef
          (TSharedPtr<SAudioRadialSlider,1> *this,
          TSharedRef<SAudioRadialSlider,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<SAudioRadialSlider,1> *pTVar4;
  
  if (this->Object == (SAudioRadialSlider *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<SAudioRadialSlider,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  __return_storage_ptr__->Object = this->Object;
  pTVar1 = (this->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__->Object == (SAudioRadialSlider *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<SAudioRadialSlider,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// ToSharedRef @ 14d976880

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SAudioTextBox,1> * __thiscall
TSharedPtr<SAudioTextBox,1>::ToSharedRef
          (TSharedPtr<SAudioTextBox,1> *this,TSharedRef<SAudioTextBox,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<SAudioTextBox,1> *pTVar4;
  
  if (this->Object == (SAudioTextBox *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<SAudioTextBox,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  __return_storage_ptr__->Object = this->Object;
  pTVar1 = (this->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__->Object == (SAudioTextBox *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<SAudioTextBox,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// ToSharedRef @ 14d976920

TSharedRef<SRadialSlider,1> * __thiscall
TSharedPtr<SRadialSlider,1>::ToSharedRef
          (TSharedPtr<SRadialSlider,1> *this,TSharedRef<SRadialSlider,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<SRadialSlider,1> *pTVar4;
  
  if (this->Object == (SRadialSlider *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<SRadialSlider,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  __return_storage_ptr__->Object = this->Object;
  pTVar1 = (this->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__->Object == (SRadialSlider *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<SRadialSlider,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// ToSharedRef @ 14d9769c0

TSharedRef<SSampledSequenceValueGridOverlay,1> * __thiscall
TSharedPtr<SSampledSequenceValueGridOverlay,1>::ToSharedRef
          (TSharedPtr<SSampledSequenceValueGridOverlay,1> *this,
          TSharedRef<SSampledSequenceValueGridOverlay,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<SSampledSequenceValueGridOverlay,1> *pTVar4;
  
  if (this->Object == (SSampledSequenceValueGridOverlay *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<SSampledSequenceValueGridOverlay,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  __return_storage_ptr__->Object = this->Object;
  pTVar1 = (this->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__->Object == (SSampledSequenceValueGridOverlay *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<SSampledSequenceValueGridOverlay,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

