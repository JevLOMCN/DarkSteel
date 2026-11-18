// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 4

// FArguments @ 14f0b5f60

FArguments * __thiscall SSynth2DSlider::FArguments::FArguments(FArguments *this)

{
  code *pcVar1;
  FSlateStyleSet *pFVar2;
  FSharedReferencer<1> FVar3;
  bool bVar4;
  FArguments *pFVar5;
  FName *pFVar6;
  FSynth2DSliderStyle *pFVar7;
  FName local_res8;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  (this->_IndentHandle).Value = true;
  (this->_IndentHandle).bIsSet = true;
  *(undefined8 *)&(this->_IndentHandle).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_IndentHandle).Getter = 0;
  *(undefined8 *)&(this->_IndentHandle).Getter.field_0x8 = 0;
  (this->_Locked).Value = false;
  (this->_Locked).bIsSet = true;
  *(undefined8 *)&(this->_Locked).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_Locked).Getter = 0;
  *(undefined8 *)&(this->_Locked).Getter.field_0x8 = 0;
  FVar3 = FSynthSlateStyleSet::StyleInstance.SharedReferenceCount;
  pFVar2 = FSynthSlateStyleSet::StyleInstance.Object;
  if (FSynthSlateStyleSet::StyleInstance.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FSynthSlateStyleSet::StyleInstance.SharedReferenceCount.ReferenceController)->
    SharedReferenceCount =
         (atomic<int>)
         ((int)(FSynthSlateStyleSet::StyleInstance.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pFVar2 == (FSlateStyleSet *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FArguments *)(*pcVar1)();
      return pFVar5;
    }
  }
  pFVar6 = ::FName::FName(&local_res8,"Synth2DSliderStyle");
  pFVar7 = (FSynth2DSliderStyle *)
           (**(code **)(pFVar2->_padding_ + 0xa0))(pFVar2,FSynth2DSliderStyle::TypeName,*pFVar6,0,1)
  ;
  if (pFVar7 == (FSynth2DSliderStyle *)0x0) {
    pFVar7 = FSynth2DSliderStyle::GetDefault();
  }
  this->_Style = pFVar7;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar3.ReferenceController);
  (this->_StepSize).Value = 0.01;
  (this->_StepSize).bIsSet = true;
  *(undefined8 *)&(this->_StepSize).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_StepSize).Getter = 0;
  *(undefined8 *)&(this->_StepSize).Getter.field_0x8 = 0;
  (this->_ValueX).Value = 1.0;
  (this->_ValueX).bIsSet = true;
  *(undefined8 *)&(this->_ValueX).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_ValueX).Getter = 0;
  *(undefined8 *)&(this->_ValueX).Getter.field_0x8 = 0;
  (this->_ValueY).Value = 1.0;
  (this->_ValueY).bIsSet = true;
  *(undefined8 *)&(this->_ValueY).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_ValueY).Getter = 0;
  *(undefined8 *)&(this->_ValueY).Getter.field_0x8 = 0;
  this->_IsFocusable = true;
  *(undefined8 *)&(this->_OnMouseCaptureBegin).field_0x10 = 0;
  *(undefined8 *)&this->_OnMouseCaptureBegin = 0;
  *(undefined8 *)&(this->_OnMouseCaptureBegin).field_0x8 = 0;
  *(undefined8 *)&(this->_OnMouseCaptureEnd).field_0x10 = 0;
  *(undefined8 *)&this->_OnMouseCaptureEnd = 0;
  *(undefined8 *)&(this->_OnMouseCaptureEnd).field_0x8 = 0;
  *(undefined8 *)&this->_OnControllerCaptureBegin = 0;
  *(undefined8 *)&(this->_OnControllerCaptureBegin).field_0x8 = 0;
  *(undefined4 *)&(this->_OnControllerCaptureBegin).field_0x10 = 0;
  *(undefined8 *)&this->_OnControllerCaptureEnd = 0;
  *(undefined8 *)&(this->_OnControllerCaptureEnd).field_0x8 = 0;
  *(undefined4 *)&(this->_OnControllerCaptureEnd).field_0x10 = 0;
  *(undefined8 *)&(this->_OnValueChangedX).field_0x10 = 0;
  *(undefined8 *)&this->_OnValueChangedX = 0;
  *(undefined8 *)&(this->_OnValueChangedX).field_0x8 = 0;
  *(undefined8 *)&(this->_OnValueChangedY).field_0x10 = 0;
  *(undefined8 *)&this->_OnValueChangedY = 0;
  *(undefined8 *)&(this->_OnValueChangedY).field_0x8 = 0;
  return this;
}

// FArguments @ 14f0b6160

FArguments * __thiscall SSynthKnob::FArguments::FArguments(FArguments *this)

{
  ITextData *pIVar1;
  code *pcVar2;
  FSlateStyleSet *pFVar3;
  FSharedReferencer<1> FVar4;
  bool bVar5;
  FArguments *pFVar6;
  FName *pFVar7;
  FSynthKnobStyle *pFVar8;
  FText *pFVar9;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  FName local_res18;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  (this->_Locked).Value = false;
  (this->_Locked).bIsSet = true;
  *(undefined8 *)&(this->_Locked).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_Locked).Getter = 0;
  *(undefined8 *)&(this->_Locked).Getter.field_0x8 = 0;
  FVar4 = FSynthSlateStyleSet::StyleInstance.SharedReferenceCount;
  pFVar3 = FSynthSlateStyleSet::StyleInstance.Object;
  if (FSynthSlateStyleSet::StyleInstance.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FSynthSlateStyleSet::StyleInstance.SharedReferenceCount.ReferenceController)->
    SharedReferenceCount =
         (atomic<int>)
         ((int)(FSynthSlateStyleSet::StyleInstance.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pFVar3 == (FSlateStyleSet *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FArguments *)(*pcVar2)();
      return pFVar6;
    }
  }
  pFVar7 = ::FName::FName(&local_res18,"SynthKnobStyle");
  pFVar8 = (FSynthKnobStyle *)
           (**(code **)(pFVar3->_padding_ + 0xa0))(pFVar3,FSynthKnobStyle::TypeName,*pFVar7,0,1);
  if (pFVar8 == (FSynthKnobStyle *)0x0) {
    pFVar8 = FSynthKnobStyle::GetDefault();
  }
  this->_Style = pFVar8;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar4.ReferenceController);
  (this->_StepSize).Value = 0.01;
  (this->_StepSize).bIsSet = true;
  *(undefined8 *)&(this->_StepSize).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_StepSize).Getter = 0;
  *(undefined8 *)&(this->_StepSize).Getter.field_0x8 = 0;
  (this->_MouseSpeed).Value = 1.0;
  (this->_MouseSpeed).bIsSet = true;
  *(undefined8 *)&(this->_MouseSpeed).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_MouseSpeed).Getter = 0;
  *(undefined8 *)&(this->_MouseSpeed).Getter.field_0x8 = 0;
  (this->_MouseFineTuneSpeed).Value = 0.2;
  (this->_MouseFineTuneSpeed).bIsSet = true;
  *(undefined8 *)&(this->_MouseFineTuneSpeed).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_MouseFineTuneSpeed).Getter = 0;
  *(undefined8 *)&(this->_MouseFineTuneSpeed).Getter.field_0x8 = 0;
  (this->_Value).Value = 0.5;
  (this->_Value).bIsSet = true;
  *(undefined8 *)&(this->_Value).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_Value).Getter = 0;
  *(undefined8 *)&(this->_Value).Getter.field_0x8 = 0;
  pFVar9 = FText::GetEmpty();
  (this->_ParameterName).Value.TextData.Reference = (ITextData *)0x0;
  pIVar1 = (pFVar9->TextData).Reference;
  (this->_ParameterName).Value.TextData.Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  (this->_ParameterName).Value.Flags = pFVar9->Flags;
  (this->_ParameterName).bIsSet = true;
  *(undefined8 *)&(this->_ParameterName).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_ParameterName).Getter = 0;
  *(undefined8 *)&(this->_ParameterName).Getter.field_0x8 = 0;
  pFVar9 = FText::GetEmpty();
  (this->_ParameterUnits).Value.TextData.Reference = (ITextData *)0x0;
  pIVar1 = (pFVar9->TextData).Reference;
  (this->_ParameterUnits).Value.TextData.Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res10);
  }
  (this->_ParameterUnits).Value.Flags = pFVar9->Flags;
  (this->_ParameterUnits).bIsSet = true;
  *(undefined8 *)&(this->_ParameterUnits).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_ParameterUnits).Getter = 0;
  *(undefined8 *)&(this->_ParameterUnits).Getter.field_0x8 = 0;
  (this->_ParameterRange).Value.field0_0x0._s_0.X = 0.0;
  (this->_ParameterRange).Value.field0_0x0._s_0.Y = 1.0;
  (this->_ParameterRange).bIsSet = true;
  *(undefined8 *)&(this->_ParameterRange).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_ParameterRange).Getter = 0;
  *(undefined8 *)&(this->_ParameterRange).Getter.field_0x8 = 0;
  this->_ShowParamTooltip = true;
  this->_IsFocusable = true;
  *(undefined8 *)&(this->_OnMouseCaptureBegin).field_0x10 = 0;
  *(undefined8 *)&this->_OnMouseCaptureBegin = 0;
  *(undefined8 *)&(this->_OnMouseCaptureBegin).field_0x8 = 0;
  *(undefined8 *)&(this->_OnMouseCaptureEnd).field_0x10 = 0;
  *(undefined8 *)&this->_OnMouseCaptureEnd = 0;
  *(undefined8 *)&(this->_OnMouseCaptureEnd).field_0x8 = 0;
  *(undefined8 *)&this->_OnControllerCaptureBegin = 0;
  *(undefined8 *)&(this->_OnControllerCaptureBegin).field_0x8 = 0;
  *(undefined4 *)&(this->_OnControllerCaptureBegin).field_0x10 = 0;
  *(undefined8 *)&this->_OnControllerCaptureEnd = 0;
  *(undefined8 *)&(this->_OnControllerCaptureEnd).field_0x8 = 0;
  *(undefined4 *)&(this->_OnControllerCaptureEnd).field_0x10 = 0;
  *(undefined8 *)&(this->_OnValueChanged).field_0x10 = 0;
  *(undefined8 *)&this->_OnValueChanged = 0;
  *(undefined8 *)&(this->_OnValueChanged).field_0x8 = 0;
  return this;
}

// ~FArguments @ 14f0be030

void __thiscall SSynth2DSlider::FArguments::~FArguments(FArguments *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnValueChangedY);
  pvVar1 = *(void **)&(this->_OnValueChangedY).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnValueChangedY);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnValueChangedX);
  pvVar1 = *(void **)&(this->_OnValueChangedX).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnValueChangedX);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnControllerCaptureEnd);
  pvVar1 = *(void **)&(this->_OnControllerCaptureEnd).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnControllerCaptureEnd);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnControllerCaptureBegin);
  pvVar1 = *(void **)&(this->_OnControllerCaptureBegin).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnControllerCaptureBegin);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnMouseCaptureEnd);
  pvVar1 = *(void **)&(this->_OnMouseCaptureEnd).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnMouseCaptureEnd);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnMouseCaptureBegin);
  pvVar1 = *(void **)&(this->_OnMouseCaptureBegin).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnMouseCaptureBegin);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_ValueY).Getter);
  pvVar1 = *(void **)&(this->_ValueY).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_ValueY).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_ValueX).Getter);
  pvVar1 = *(void **)&(this->_ValueX).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_ValueX).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_StepSize).Getter);
  pvVar1 = *(void **)&(this->_StepSize).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_StepSize).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Locked).Getter);
  pvVar1 = *(void **)&(this->_Locked).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_Locked).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_IndentHandle).Getter);
  pvVar1 = *(void **)&(this->_IndentHandle).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_IndentHandle).Getter);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return;
}

// ~FArguments @ 14f0be220

void __thiscall SSynthKnob::FArguments::~FArguments(FArguments *this)

{
  void *pvVar1;
  ITextData *pIVar2;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnValueChanged);
  pvVar1 = *(void **)&(this->_OnValueChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnValueChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnControllerCaptureEnd);
  pvVar1 = *(void **)&(this->_OnControllerCaptureEnd).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnControllerCaptureEnd);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnControllerCaptureBegin);
  pvVar1 = *(void **)&(this->_OnControllerCaptureBegin).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnControllerCaptureBegin);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnMouseCaptureEnd);
  pvVar1 = *(void **)&(this->_OnMouseCaptureEnd).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnMouseCaptureEnd);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnMouseCaptureBegin);
  pvVar1 = *(void **)&(this->_OnMouseCaptureBegin).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnMouseCaptureBegin);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_ParameterRange).Getter);
  pvVar1 = *(void **)&(this->_ParameterRange).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_ParameterRange).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_ParameterUnits).Getter);
  pvVar1 = *(void **)&(this->_ParameterUnits).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_ParameterUnits).Getter);
  pIVar2 = (this->_ParameterUnits).Value.TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_ParameterName).Getter);
  pvVar1 = *(void **)&(this->_ParameterName).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_ParameterName).Getter);
  pIVar2 = (this->_ParameterName).Value.TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Value).Getter);
  pvVar1 = *(void **)&(this->_Value).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_Value).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_MouseFineTuneSpeed).Getter);
  pvVar1 = *(void **)&(this->_MouseFineTuneSpeed).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_MouseFineTuneSpeed).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_MouseSpeed).Getter);
  pvVar1 = *(void **)&(this->_MouseSpeed).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_MouseSpeed).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_StepSize).Getter);
  pvVar1 = *(void **)&(this->_StepSize).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_StepSize).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Locked).Getter);
  pvVar1 = *(void **)&(this->_Locked).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_Locked).Getter);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return;
}

