// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AdvancedWidgets
// Functions: 23

// SColorGradingComponentSpinBox @ 14d8370d0

SColorGradingComponentSpinBox * __thiscall
UE::ColorGrading::SColorGradingComponentSpinBox::SColorGradingComponentSpinBox
          (SColorGradingComponentSpinBox *this)

{
  SCompoundWidget::SCompoundWidget((SCompoundWidget *)this);
  this->_padding_ = (longlong)&___7SColorGradingComponentSpinBox_ColorGrading_UE__6B_;
  (this->ValueAttribute).Value = 0.0;
  (this->ValueAttribute).bIsSet = false;
  *(undefined8 *)&(this->ValueAttribute).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->ValueAttribute).Getter = 0;
  *(undefined8 *)&(this->ValueAttribute).Getter.field_0x8 = 0;
  *(undefined8 *)&this->OnValueChanged = 0;
  *(undefined8 *)&(this->OnValueChanged).field_0x8 = 0;
  *(undefined4 *)&(this->OnValueChanged).field_0x10 = 0;
  *(undefined8 *)&this->OnBeginSliderMovement = 0;
  *(undefined8 *)&(this->OnBeginSliderMovement).field_0x8 = 0;
  *(undefined4 *)&(this->OnBeginSliderMovement).field_0x10 = 0;
  *(undefined8 *)&this->OnEndSliderMovement = 0;
  *(undefined8 *)&(this->OnEndSliderMovement).field_0x8 = 0;
  *(undefined4 *)&(this->OnEndSliderMovement).field_0x10 = 0;
  *(undefined8 *)&this->OnQueryCurrentColor = 0;
  *(undefined8 *)&(this->OnQueryCurrentColor).field_0x8 = 0;
  *(undefined4 *)&(this->OnQueryCurrentColor).field_0x10 = 0;
  (this->Interface).Object = (INumericTypeInterface<float> *)0x0;
  (this->Interface).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->Delta).Value = 0.0;
  (this->Delta).bIsSet = false;
  *(undefined8 *)&(this->Delta).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->Delta).Getter = 0;
  *(undefined8 *)&(this->Delta).Getter.field_0x8 = 0;
  (this->ShiftMultiplier).Value = 0.0;
  (this->ShiftMultiplier).bIsSet = false;
  *(undefined8 *)&(this->ShiftMultiplier).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->ShiftMultiplier).Getter = 0;
  *(undefined8 *)&(this->ShiftMultiplier).Getter.field_0x8 = 0;
  (this->CtrlMultiplier).Value = 0.0;
  (this->CtrlMultiplier).bIsSet = false;
  *(undefined8 *)&(this->CtrlMultiplier).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->CtrlMultiplier).Getter = 0;
  *(undefined8 *)&(this->CtrlMultiplier).Getter.field_0x8 = 0;
  (this->Sensitivity).Value = 0.0;
  (this->Sensitivity).bIsSet = false;
  *(undefined8 *)&(this->Sensitivity).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->Sensitivity).Getter = 0;
  *(undefined8 *)&(this->Sensitivity).Getter.field_0x8 = 0;
  (this->LinearDeltaSensitivity).Value = 0;
  (this->LinearDeltaSensitivity).bIsSet = false;
  *(undefined8 *)&(this->LinearDeltaSensitivity).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->LinearDeltaSensitivity).Getter = 0;
  *(undefined8 *)&(this->LinearDeltaSensitivity).Getter.field_0x8 = 0;
  (this->SliderExponent).Value = 0.0;
  (this->SliderExponent).bIsSet = false;
  *(undefined8 *)&(this->SliderExponent).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->SliderExponent).Getter = 0;
  *(undefined8 *)&(this->SliderExponent).Getter.field_0x8 = 0;
  (this->SliderExponentNeutralValue).Value = 0.0;
  (this->SliderExponentNeutralValue).bIsSet = false;
  *(undefined8 *)&(this->SliderExponentNeutralValue).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->SliderExponentNeutralValue).Getter = 0;
  *(undefined8 *)&(this->SliderExponentNeutralValue).Getter.field_0x8 = 0;
  (this->MinValue).Value.bIsSet = false;
  (this->MinValue).bIsSet = false;
  *(undefined8 *)&(this->MinValue).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->MinValue).Getter = 0;
  *(undefined8 *)&(this->MinValue).Getter.field_0x8 = 0;
  (this->MaxValue).Value.bIsSet = false;
  (this->MaxValue).bIsSet = false;
  *(undefined8 *)&(this->MaxValue).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->MaxValue).Getter = 0;
  *(undefined8 *)&(this->MaxValue).Getter.field_0x8 = 0;
  (this->MinSliderValue).Value.bIsSet = false;
  (this->MinSliderValue).bIsSet = false;
  *(undefined8 *)&(this->MinSliderValue).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->MinSliderValue).Getter = 0;
  *(undefined8 *)&(this->MinSliderValue).Getter.field_0x8 = 0;
  (this->MaxSliderValue).Value.bIsSet = false;
  (this->MaxSliderValue).bIsSet = false;
  *(undefined8 *)&(this->MaxSliderValue).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->MaxSliderValue).Getter = 0;
  *(undefined8 *)&(this->MaxSliderValue).Getter.field_0x8 = 0;
  (this->AlwaysUsesDeltaSnap).Value = false;
  (this->AlwaysUsesDeltaSnap).bIsSet = false;
  *(undefined8 *)&(this->AlwaysUsesDeltaSnap).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->AlwaysUsesDeltaSnap).Getter = 0;
  *(undefined8 *)&(this->AlwaysUsesDeltaSnap).Getter.field_0x8 = 0;
  (this->SupportDynamicSliderMaxValue).Value = false;
  (this->SupportDynamicSliderMaxValue).bIsSet = false;
  *(undefined8 *)&(this->SupportDynamicSliderMaxValue).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->SupportDynamicSliderMaxValue).Getter = 0;
  *(undefined8 *)&(this->SupportDynamicSliderMaxValue).Getter.field_0x8 = 0;
  (this->SupportDynamicSliderMinValue).Value = false;
  (this->SupportDynamicSliderMinValue).bIsSet = false;
  *(undefined8 *)&(this->SupportDynamicSliderMinValue).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->SupportDynamicSliderMinValue).Getter = 0;
  *(undefined8 *)&(this->SupportDynamicSliderMinValue).Getter.field_0x8 = 0;
  *(undefined8 *)&this->OnDynamicSliderMaxValueChanged = 0;
  *(undefined8 *)&(this->OnDynamicSliderMaxValueChanged).field_0x8 = 0;
  *(undefined4 *)&(this->OnDynamicSliderMaxValueChanged).field_0x10 = 0;
  *(undefined8 *)&this->OnDynamicSliderMinValueChanged = 0;
  *(undefined8 *)&(this->OnDynamicSliderMinValueChanged).field_0x8 = 0;
  *(undefined4 *)&(this->OnDynamicSliderMinValueChanged).field_0x10 = 0;
  (this->Component).Value = Red;
  (this->Component).bIsSet = false;
  *(undefined8 *)&(this->Component).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->Component).Getter = 0;
  *(undefined8 *)&(this->Component).Getter.field_0x8 = 0;
  (this->ColorGradingMode).Value = Saturation;
  (this->ColorGradingMode).bIsSet = false;
  *(undefined8 *)&(this->ColorGradingMode).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->ColorGradingMode).Getter = 0;
  *(undefined8 *)&(this->ColorGradingMode).Getter.field_0x8 = 0;
  this->bEnableWheel = true;
  this->bBroadcastValueChangesPerKey = false;
  return this;
}

// ~SColorGradingComponentSpinBox @ 14d83acb0

void __thiscall
UE::ColorGrading::SColorGradingComponentSpinBox::~SColorGradingComponentSpinBox
          (SColorGradingComponentSpinBox *this)

{
  float fVar1;
  longlong *plVar2;
  void *pvVar3;
  FReadAccessScope local_38 [2];
  
  this->_padding_ = (longlong)&___7SColorGradingComponentSpinBox_ColorGrading_UE__6B_;
  if ((this->bDragging != false) || (this->PointerDraggingSliderIndex != -1)) {
    fVar1 = this->PreDragValue;
    this->bDragging = false;
    this->PointerDraggingSliderIndex = -1;
    this->InternalValue = (double)fVar1;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnEndSliderMovement,
               local_38);
    if ((*(int *)&(this->OnEndSliderMovement).field_0x10 != 0) &&
       (plVar2 = *(longlong **)&(this->OnEndSliderMovement).field_0x8, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x68))(plVar2,fVar1);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (local_38);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ColorGradingMode).Getter);
  pvVar3 = *(void **)&(this->ColorGradingMode).Getter.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ColorGradingMode).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Component).Getter);
  pvVar3 = *(void **)&(this->Component).Getter.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->Component).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnDynamicSliderMinValueChanged);
  pvVar3 = *(void **)&(this->OnDynamicSliderMinValueChanged).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDynamicSliderMinValueChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnDynamicSliderMaxValueChanged);
  pvVar3 = *(void **)&(this->OnDynamicSliderMaxValueChanged).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDynamicSliderMaxValueChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->SupportDynamicSliderMinValue).Getter);
  pvVar3 = *(void **)&(this->SupportDynamicSliderMinValue).Getter.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->SupportDynamicSliderMinValue).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->SupportDynamicSliderMaxValue).Getter);
  pvVar3 = *(void **)&(this->SupportDynamicSliderMaxValue).Getter.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->SupportDynamicSliderMaxValue).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->AlwaysUsesDeltaSnap).Getter);
  pvVar3 = *(void **)&(this->AlwaysUsesDeltaSnap).Getter.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->AlwaysUsesDeltaSnap).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->MaxSliderValue).Getter);
  pvVar3 = *(void **)&(this->MaxSliderValue).Getter.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->MaxSliderValue).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->MinSliderValue).Getter);
  pvVar3 = *(void **)&(this->MinSliderValue).Getter.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->MinSliderValue).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->MaxValue).Getter);
  pvVar3 = *(void **)&(this->MaxValue).Getter.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->MaxValue).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->MinValue).Getter);
  pvVar3 = *(void **)&(this->MinValue).Getter.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->MinValue).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->SliderExponentNeutralValue).Getter
            );
  pvVar3 = *(void **)&(this->SliderExponentNeutralValue).Getter.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->SliderExponentNeutralValue).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->SliderExponent).Getter);
  pvVar3 = *(void **)&(this->SliderExponent).Getter.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->SliderExponent).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->LinearDeltaSensitivity).Getter);
  pvVar3 = *(void **)&(this->LinearDeltaSensitivity).Getter.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->LinearDeltaSensitivity).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Sensitivity).Getter);
  pvVar3 = *(void **)&(this->Sensitivity).Getter.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->Sensitivity).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->CtrlMultiplier).Getter);
  pvVar3 = *(void **)&(this->CtrlMultiplier).Getter.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->CtrlMultiplier).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ShiftMultiplier).Getter);
  pvVar3 = *(void **)&(this->ShiftMultiplier).Getter.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ShiftMultiplier).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Delta).Getter);
  pvVar3 = *(void **)&(this->Delta).Getter.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->Delta).Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Interface).SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnQueryCurrentColor);
  pvVar3 = *(void **)&(this->OnQueryCurrentColor).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnQueryCurrentColor);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnEndSliderMovement);
  pvVar3 = *(void **)&(this->OnEndSliderMovement).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnEndSliderMovement);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnBeginSliderMovement);
  pvVar3 = *(void **)&(this->OnBeginSliderMovement).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnBeginSliderMovement);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnValueChanged);
  pvVar3 = *(void **)&(this->OnValueChanged).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnValueChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ValueAttribute).Getter);
  pvVar3 = *(void **)&(this->ValueAttribute).Getter.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ValueAttribute).Getter);
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  return;
}

// ApplySliderMaxValueChanged @ 14d842370

void __thiscall
UE::ColorGrading::SColorGradingComponentSpinBox::ApplySliderMaxValueChanged
          (SColorGradingComponentSpinBox *this,float param_1,bool param_2)

{
  TAttribute<TOptional<float>_> *this_00;
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  bool *pbVar5;
  TOptional<float> *pTVar6;
  TSharedRef<SWidget,1> *pTVar7;
  TAttribute<TOptional<float>_> *pTVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 local_c8 [16];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_b8;
  ForAnyElementType FStack_b0;
  ulonglong local_a8;
  TWeakPtr<SWidget,1> local_a0;
  FDestructionSentinel local_90;
  TSharedRef<SWidget,1> local_78;
  FReadAccessScope local_68 [4];
  
  pbVar5 = TAttribute<bool>::Get(&this->SupportDynamicSliderMaxValue);
  if ((*pbVar5 == false) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("SupportDynamicSliderMaxValue.Get()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdvancedWidgets\\Private\\Widgets\\ColorGrading\\SColorGradingComponentSpinBox.cpp"
                         ,0xfb,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  fVar11 = __real_00800000;
  this_00 = &this->MaxSliderValue;
  if (((this->MaxSliderValue).bIsSet != false) &&
     (pTVar6 = TAttribute<TOptional<float>_>::Get(this_00), pTVar6->bIsSet != false)) {
    pTVar6 = TAttribute<TOptional<float>_>::Get(this_00);
    fVar10 = __real_7f7fffff;
    fVar11 = __real_7f7fffff;
    if (pTVar6->bIsSet != false) {
      fVar11 = pTVar6->TypedValue;
    }
    pTVar6 = TAttribute<TOptional<float>_>::Get(this_00);
    if (pTVar6->bIsSet != false) {
      fVar10 = pTVar6->TypedValue;
    }
    fVar9 = fVar11 + param_1;
    if (((fVar10 < fVar9) || (!param_2)) &&
       (bVar3 = TAttribute<TOptional<float>_>::IsBound(this_00), fVar11 = fVar9, !bVar3)) {
      local_a8 = 0;
      local_c8[4] = true;
      local_c8[8] = true;
      local_b8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_b0.Data = (FScriptContainerElement *)0x0;
      local_c8._0_4_ = fVar9;
      pTVar6 = TAttribute<TOptional<float>_>::Get((TAttribute<TOptional<float>_> *)local_c8);
      pTVar8 = (TAttribute<TOptional<float>_> *)local_c8;
      if (pTVar6->bIsSet == false) {
        pTVar8 = &this->MaxValue;
      }
      if (pTVar8 != this_00) {
        if ((pTVar8->Value).bIsSet == false) {
          if ((this->MaxSliderValue).Value.bIsSet != false) {
            (this->MaxSliderValue).Value.bIsSet = false;
          }
        }
        else {
          (this_00->Value).TypedValue = (pTVar8->Value).TypedValue;
          (this->MaxSliderValue).Value.bIsSet = true;
        }
      }
      (this->MaxSliderValue).bIsSet = pTVar8->bIsSet;
      TDelegate<TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy>::
      CopyFrom<FDefaultDelegateUserPolicy>(&(this->MaxSliderValue).Getter,&pTVar8->Getter);
      UpdateIsSpinRangeUnlimited(this);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_b8,(FWriteAccessScope *)&local_90);
      if (((int)local_a8 != 0) && (FStack_b0.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_b0.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_b0,0,0,0x10);
        local_a8 = local_a8 & 0xffffffff00000000;
      }
      if (local_90.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_90.Accessor,&local_90);
      }
      if (FStack_b0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_b0.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_b8.AccessDetector);
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnDynamicSliderMaxValueChanged,local_68);
  if (((*(int *)&(this->OnDynamicSliderMaxValueChanged).field_0x10 == 0) ||
      (plVar1 = *(longlong **)&(this->OnDynamicSliderMaxValueChanged).field_0x8,
      plVar1 == (longlong *)0x0)) || (cVar4 = (**(code **)(*plVar1 + 0x38))(), cVar4 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (local_68);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (local_68);
    pTVar7 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_78);
    local_a0.Object = pTVar7->Object;
    local_a0.WeakReferenceCount.ReferenceController =
         (pTVar7->SharedReferenceCount).ReferenceController;
    if (local_a0.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_a0.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_a0.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    TDelegate<void___cdecl(float,TWeakPtr<SWidget,1>,bool,bool),FDefaultDelegateUserPolicy>::Execute
              (&this->OnDynamicSliderMaxValueChanged,fVar11,&local_a0,true,param_2);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.SharedReferenceCount.ReferenceController);
  }
  return;
}

// ApplySliderMinValueChanged @ 14d842620

void __thiscall
UE::ColorGrading::SColorGradingComponentSpinBox::ApplySliderMinValueChanged
          (SColorGradingComponentSpinBox *this,float param_1,bool param_2)

{
  TAttribute<TOptional<float>_> *this_00;
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  bool *pbVar5;
  TOptional<float> *pTVar6;
  TSharedRef<SWidget,1> *pTVar7;
  TAttribute<TOptional<float>_> *pTVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 local_c8 [16];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_b8;
  ForAnyElementType FStack_b0;
  ulonglong local_a8;
  TWeakPtr<SWidget,1> local_a0;
  FDestructionSentinel local_90;
  TSharedRef<SWidget,1> local_78;
  FReadAccessScope local_68 [4];
  
  pbVar5 = TAttribute<bool>::Get(&this->SupportDynamicSliderMaxValue);
  if ((*pbVar5 == false) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("SupportDynamicSliderMaxValue.Get()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdvancedWidgets\\Private\\Widgets\\ColorGrading\\SColorGradingComponentSpinBox.cpp"
                         ,0x116,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  fVar11 = __real_00800000;
  this_00 = &this->MinSliderValue;
  if (((this->MinSliderValue).bIsSet != false) &&
     (pTVar6 = TAttribute<TOptional<float>_>::Get(this_00), pTVar6->bIsSet != false)) {
    pTVar6 = TAttribute<TOptional<float>_>::Get(this_00);
    fVar10 = __real_ff7fffff;
    fVar11 = __real_ff7fffff;
    if (pTVar6->bIsSet != false) {
      fVar11 = pTVar6->TypedValue;
    }
    pTVar6 = TAttribute<TOptional<float>_>::Get(this_00);
    if (pTVar6->bIsSet != false) {
      fVar10 = pTVar6->TypedValue;
    }
    fVar9 = fVar11 + param_1;
    if (((fVar9 < fVar10) || (!param_2)) &&
       (bVar3 = TAttribute<TOptional<float>_>::IsBound(this_00), fVar11 = fVar9, !bVar3)) {
      local_a8 = 0;
      local_c8[4] = true;
      local_c8[8] = true;
      local_b8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_b0.Data = (FScriptContainerElement *)0x0;
      local_c8._0_4_ = fVar9;
      pTVar6 = TAttribute<TOptional<float>_>::Get((TAttribute<TOptional<float>_> *)local_c8);
      pTVar8 = (TAttribute<TOptional<float>_> *)local_c8;
      if (pTVar6->bIsSet == false) {
        pTVar8 = &this->MinValue;
      }
      if (pTVar8 != this_00) {
        if ((pTVar8->Value).bIsSet == false) {
          if ((this->MinSliderValue).Value.bIsSet != false) {
            (this->MinSliderValue).Value.bIsSet = false;
          }
        }
        else {
          (this_00->Value).TypedValue = (pTVar8->Value).TypedValue;
          (this->MinSliderValue).Value.bIsSet = true;
        }
      }
      (this->MinSliderValue).bIsSet = pTVar8->bIsSet;
      TDelegate<TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy>::
      CopyFrom<FDefaultDelegateUserPolicy>(&(this->MinSliderValue).Getter,&pTVar8->Getter);
      UpdateIsSpinRangeUnlimited(this);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_b8,(FWriteAccessScope *)&local_90);
      if (((int)local_a8 != 0) && (FStack_b0.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_b0.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_b0,0,0,0x10);
        local_a8 = local_a8 & 0xffffffff00000000;
      }
      if (local_90.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_90.Accessor,&local_90);
      }
      if (FStack_b0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_b0.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_b8.AccessDetector);
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnDynamicSliderMinValueChanged,local_68);
  if (((*(int *)&(this->OnDynamicSliderMinValueChanged).field_0x10 == 0) ||
      (plVar1 = *(longlong **)&(this->OnDynamicSliderMinValueChanged).field_0x8,
      plVar1 == (longlong *)0x0)) || (cVar4 = (**(code **)(*plVar1 + 0x38))(), cVar4 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (local_68);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (local_68);
    pTVar7 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_78);
    local_a0.Object = pTVar7->Object;
    local_a0.WeakReferenceCount.ReferenceController =
         (pTVar7->SharedReferenceCount).ReferenceController;
    if (local_a0.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_a0.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_a0.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    TDelegate<void___cdecl(float,TWeakPtr<SWidget,1>,bool,bool),FDefaultDelegateUserPolicy>::Execute
              (&this->OnDynamicSliderMinValueChanged,fVar11,&local_a0,true,param_2);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.SharedReferenceCount.ReferenceController);
  }
  return;
}

// CancelMouseCapture @ 14d843640

void __thiscall
UE::ColorGrading::SColorGradingComponentSpinBox::CancelMouseCapture
          (SColorGradingComponentSpinBox *this)

{
  float fVar1;
  longlong *plVar2;
  FReadAccessScope local_38 [2];
  
  fVar1 = this->PreDragValue;
  this->bDragging = false;
  this->PointerDraggingSliderIndex = -1;
  this->InternalValue = (double)fVar1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnEndSliderMovement,
             local_38);
  if ((*(int *)&(this->OnEndSliderMovement).field_0x10 != 0) &&
     (plVar2 = *(longlong **)&(this->OnEndSliderMovement).field_0x8, plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x68))(plVar2,fVar1);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (local_38);
  return;
}

// CommitValue @ 14d843760

void __thiscall
UE::ColorGrading::SColorGradingComponentSpinBox::CommitValue
          (SColorGradingComponentSpinBox *this,float param_1,double param_2,ECommitMethod param_3,
          Type param_4)

{
  TAttribute<float> *this_00;
  longlong *plVar1;
  double dVar2;
  bool bVar3;
  TOptional<float> *pTVar4;
  float *pfVar5;
  bool *pbVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  FReadAccessScope local_88 [5];
  
  fVar10 = __real_7f7fffff;
  fVar11 = __real_ff7fffff;
  if (this->bAllowSpin == false) {
    return;
  }
  if (param_3 == CommittedViaSpin) {
    pTVar4 = TAttribute<TOptional<float>_>::Get(&this->MinSliderValue);
    fVar12 = fVar11;
    if (pTVar4->bIsSet != false) {
      fVar12 = pTVar4->TypedValue;
    }
    pTVar4 = TAttribute<TOptional<float>_>::Get(&this->MaxSliderValue);
    fVar8 = fVar10;
    if (pTVar4->bIsSet != false) {
      fVar8 = pTVar4->TypedValue;
    }
    fVar7 = fVar8;
    if (param_1 <= fVar8) {
      fVar7 = param_1;
    }
    dVar2 = (double)fVar8;
    if (param_2 <= (double)fVar8) {
      dVar2 = param_2;
    }
    param_1 = fVar7;
    if (fVar7 <= fVar12) {
      param_1 = fVar12;
    }
    param_2 = dVar2;
    if (dVar2 <= (double)fVar12) {
      param_2 = (double)fVar12;
    }
  }
  pTVar4 = TAttribute<TOptional<float>_>::Get(&this->MinValue);
  fVar12 = fVar11;
  if (pTVar4->bIsSet != false) {
    fVar12 = pTVar4->TypedValue;
  }
  pTVar4 = TAttribute<TOptional<float>_>::Get(&this->MaxValue);
  fVar8 = fVar10;
  if (pTVar4->bIsSet != false) {
    fVar8 = pTVar4->TypedValue;
  }
  this_00 = &this->ValueAttribute;
  fVar7 = fVar8;
  if (param_1 <= fVar8) {
    fVar7 = param_1;
  }
  dVar2 = (double)fVar8;
  if (param_2 <= (double)fVar8) {
    dVar2 = param_2;
  }
  if (fVar7 <= fVar12) {
    fVar7 = fVar12;
  }
  auVar9 = ZEXT416((uint)fVar7);
  if (dVar2 <= (double)fVar12) {
    dVar2 = (double)fVar12;
  }
  bVar3 = TAttribute<float>::IsBound(this_00);
  if (!bVar3) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ValueAttribute).Getter);
    this_00->Value = fVar7;
    (this->ValueAttribute).bIsSet = true;
  }
  if (param_3 == CommittedViaSpin) {
    pfVar5 = TAttribute<float>::Get(this_00);
    fVar12 = *pfVar5;
    if (fVar12 == this->CachedExternalValue) goto LAB_14d8438d2;
    auVar9 = ZEXT416((uint)fVar12);
    this->InternalValue = (double)fVar12;
    TAttribute<bool>::Get(&this->AlwaysUsesDeltaSnap);
LAB_14d8438f0:
    pfVar5 = TAttribute<float>::Get(&this->Delta);
    fVar12 = *pfVar5;
    if (fVar12 != 0.0) {
      auVar9 = roundps(auVar9,ZEXT416((uint)((fVar12 * __real_3f000000 + auVar9._0_4_) / fVar12)),1)
      ;
      auVar9._0_4_ = auVar9._0_4_ * fVar12;
    }
  }
  else {
LAB_14d8438d2:
    this->InternalValue = dVar2;
    pbVar6 = TAttribute<bool>::Get(&this->AlwaysUsesDeltaSnap);
    if ((param_3 == CommittedViaSpin) || (*pbVar6 != false)) goto LAB_14d8438f0;
  }
  pbVar6 = TAttribute<bool>::Get(&this->SupportDynamicSliderMaxValue);
  if (*pbVar6 != false) {
    pTVar4 = TAttribute<TOptional<float>_>::Get(&this->MaxSliderValue);
    fVar12 = fVar10;
    if (pTVar4->bIsSet != false) {
      fVar12 = pTVar4->TypedValue;
    }
    pfVar5 = TAttribute<float>::Get(this_00);
    if (fVar12 < *pfVar5) {
      pTVar4 = TAttribute<TOptional<float>_>::Get(&this->MaxSliderValue);
      if (pTVar4->bIsSet != false) {
        fVar10 = pTVar4->TypedValue;
      }
      pfVar5 = TAttribute<float>::Get(this_00);
      ApplySliderMaxValueChanged(this,*pfVar5 - fVar10,true);
      goto LAB_14d843a01;
    }
  }
  pbVar6 = TAttribute<bool>::Get(&this->SupportDynamicSliderMinValue);
  if (*pbVar6 != false) {
    pTVar4 = TAttribute<TOptional<float>_>::Get(&this->MinSliderValue);
    fVar10 = fVar11;
    if (pTVar4->bIsSet != false) {
      fVar10 = pTVar4->TypedValue;
    }
    pfVar5 = TAttribute<float>::Get(this_00);
    if (*pfVar5 <= fVar10 && fVar10 != *pfVar5) {
      pTVar4 = TAttribute<TOptional<float>_>::Get(&this->MinSliderValue);
      if (pTVar4->bIsSet != false) {
        fVar11 = pTVar4->TypedValue;
      }
      pfVar5 = TAttribute<float>::Get(this_00);
      ApplySliderMinValueChanged(this,*pfVar5 - fVar11,true);
    }
  }
LAB_14d843a01:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnValueChanged,
             local_88);
  if ((*(int *)&(this->OnValueChanged).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->OnValueChanged).field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))(plVar1,auVar9._0_4_);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (local_88);
  bVar3 = TAttribute<float>::IsBound(this_00);
  if (!bVar3) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ValueAttribute).Getter);
    this_00->Value = auVar9._0_4_;
    (this->ValueAttribute).bIsSet = true;
  }
  pfVar5 = TAttribute<float>::Get(this_00);
  if (*pfVar5 != this->CachedExternalValue) {
    pfVar5 = TAttribute<float>::Get(this_00);
    this->CachedExternalValue = *pfVar5;
  }
  bVar3 = SWidget::HasMouseCapture((SWidget *)this);
  if (!bVar3) {
    this->bDragging = false;
    this->PointerDraggingSliderIndex = -1;
  }
  return;
}

// CommitWithMultiplier @ 14d843be0

bool __thiscall
UE::ColorGrading::SColorGradingComponentSpinBox::CommitWithMultiplier
          (SColorGradingComponentSpinBox *this,FPointerEvent *param_1)

{
  if (((param_1->_padding_ & 3) == 0) && ((param_1->_padding_ & 0xc) == 0)) {
    return false;
  }
  return true;
}

// Construct @ 14d8468f0

void __thiscall
UE::ColorGrading::SColorGradingComponentSpinBox::Construct
          (SColorGradingComponentSpinBox *this,FArguments *param_1)

{
  TAttribute<TOptional<float>_> *pTVar1;
  TAttribute<TOptional<float>_> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  FColorGradingSpinBoxStyle *pFVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  TSharedPtr<INumericTypeInterface<float>,1> *pTVar8;
  TOptional<float> *pTVar9;
  float *pfVar10;
  bool *pbVar11;
  FSlateBrush *pFVar12;
  INumericTypeInterface<float> *pIVar13;
  FSlateBrush *pFVar14;
  TAttribute<TOptional<float>_> *pTVar15;
  float fVar16;
  float fVar17;
  TRawPtrProxy<TDefaultNumericTypeInterface<float>_> local_res8;
  TSharedPtr<INumericTypeInterface<float>,1> local_68;
  INumericTypeInterface<float> *local_58;
  TReferenceControllerBase<1> *pTStack_50;
  TSharedPtr<INumericTypeInterface<float>,1> local_48 [2];
  
  if ((param_1->_Style == (FColorGradingSpinBoxStyle *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InArgs._Style",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdvancedWidgets\\Private\\Widgets\\ColorGrading\\SColorGradingComponentSpinBox.cpp"
                         ,0x14,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  this->Style = param_1->_Style;
  (this->Component).Value = (param_1->_Component).Value;
  (this->Component).bIsSet = (param_1->_Component).bIsSet;
  TDelegate<enum_UE::ColorGrading::EColorGradingComponent___cdecl(void),FDefaultDelegateUserPolicy>
  ::CopyFrom<FDefaultDelegateUserPolicy>(&(this->Component).Getter,&(param_1->_Component).Getter);
  (this->ColorGradingMode).Value = (param_1->_ColorGradingMode).Value;
  (this->ColorGradingMode).bIsSet = (param_1->_ColorGradingMode).bIsSet;
  TDelegate<enum_UE::ColorGrading::EColorGradingModes___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->ColorGradingMode).Getter,&(param_1->_ColorGradingMode).Getter);
  this->bAllowSpin = param_1->_AllowSpin;
  pIVar13 = (param_1->_TypeInterface).Object;
  if (pIVar13 == (INumericTypeInterface<float> *)0x0) {
    local_res8.Object = ::operator_new(0x10);
    if (local_res8.Object != (TDefaultNumericTypeInterface<float> *)0x0) {
      (local_res8.Object)->MinFractionalDigits = 1;
      (local_res8.Object)->MaxFractionalDigits = 6;
      (local_res8.Object)->_padding_ = (longlong)&___7__TDefaultNumericTypeInterface_M__6B_;
      (local_res8.Object)->bIndicateNearlyInteger = false;
    }
    pTVar8 = TSharedPtr<INumericTypeInterface<float>,1>::
             TSharedPtr<INumericTypeInterface<float>,1><TDefaultNumericTypeInterface<float>_>
                       (local_48,&local_res8);
    bVar6 = false;
    bVar7 = true;
    pIVar13 = pTVar8->Object;
  }
  else {
    local_68.SharedReferenceCount.ReferenceController =
         (param_1->_TypeInterface).SharedReferenceCount.ReferenceController;
    if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar8 = &local_68;
    bVar6 = true;
    bVar7 = false;
    local_68.Object = pIVar13;
  }
  pTVar3 = (pTVar8->SharedReferenceCount).ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_58 = (this->Interface).Object;
  pTStack_50 = (this->Interface).SharedReferenceCount.ReferenceController;
  (this->Interface).Object = pIVar13;
  (this->Interface).SharedReferenceCount.ReferenceController = pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_50);
  if (bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48[0].SharedReferenceCount.ReferenceController);
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
  }
  (this->ValueAttribute).Value = (param_1->_Value).Value;
  (this->ValueAttribute).bIsSet = (param_1->_Value).bIsSet;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->ValueAttribute).Getter,&(param_1->_Value).Getter);
  TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::operator=
            (&this->OnValueChanged,&param_1->_OnValueChanged);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            (&this->OnBeginSliderMovement,&param_1->_OnBeginSliderMovement);
  TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::operator=
            (&this->OnEndSliderMovement,&param_1->_OnEndSliderMovement);
  TDelegate<bool___cdecl(UE::Math::TVector4<double>_&),FDefaultDelegateUserPolicy>::operator=
            (&this->OnQueryCurrentColor,&param_1->_OnQueryCurrentColor);
  pTVar1 = &this->MinValue;
  if (&param_1->_MinValue != pTVar1) {
    if ((param_1->_MinValue).Value.bIsSet == false) {
      if ((this->MinValue).Value.bIsSet != false) {
        (this->MinValue).Value.bIsSet = false;
      }
    }
    else {
      (pTVar1->Value).TypedValue = (param_1->_MinValue).Value.TypedValue;
      (this->MinValue).Value.bIsSet = true;
    }
  }
  (this->MinValue).bIsSet = (param_1->_MinValue).bIsSet;
  TDelegate<TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&(this->MinValue).Getter,&(param_1->_MinValue).Getter);
  pTVar2 = &this->MaxValue;
  if (&param_1->_MaxValue != pTVar2) {
    if ((param_1->_MaxValue).Value.bIsSet == false) {
      if ((this->MaxValue).Value.bIsSet != false) {
        (this->MaxValue).Value.bIsSet = false;
      }
    }
    else {
      (pTVar2->Value).TypedValue = (param_1->_MaxValue).Value.TypedValue;
      (this->MaxValue).Value.bIsSet = true;
    }
  }
  (this->MaxValue).bIsSet = (param_1->_MaxValue).bIsSet;
  TDelegate<TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&(this->MaxValue).Getter,&(param_1->_MaxValue).Getter);
  pTVar9 = TAttribute<TOptional<float>_>::Get(&param_1->_MinSliderValue);
  pTVar15 = &param_1->_MinSliderValue;
  if (pTVar9->bIsSet == false) {
    pTVar15 = pTVar1;
  }
  pTVar1 = &this->MinSliderValue;
  if (pTVar15 != pTVar1) {
    if ((pTVar15->Value).bIsSet == false) {
      if ((this->MinSliderValue).Value.bIsSet != false) {
        (this->MinSliderValue).Value.bIsSet = false;
      }
    }
    else {
      (pTVar1->Value).TypedValue = (pTVar15->Value).TypedValue;
      (this->MinSliderValue).Value.bIsSet = true;
    }
  }
  (this->MinSliderValue).bIsSet = pTVar15->bIsSet;
  TDelegate<TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&(this->MinSliderValue).Getter,&pTVar15->Getter);
  pTVar9 = TAttribute<TOptional<float>_>::Get(&param_1->_MaxSliderValue);
  pTVar15 = &param_1->_MaxSliderValue;
  if (pTVar9->bIsSet == false) {
    pTVar15 = pTVar2;
  }
  pTVar2 = &this->MaxSliderValue;
  if (pTVar15 != pTVar2) {
    if ((pTVar15->Value).bIsSet == false) {
      if ((this->MaxSliderValue).Value.bIsSet != false) {
        (this->MaxSliderValue).Value.bIsSet = false;
      }
    }
    else {
      (pTVar2->Value).TypedValue = (pTVar15->Value).TypedValue;
      (this->MaxSliderValue).Value.bIsSet = true;
    }
  }
  (this->MaxSliderValue).bIsSet = pTVar15->bIsSet;
  TDelegate<TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&(this->MaxSliderValue).Getter,&pTVar15->Getter);
  (this->AlwaysUsesDeltaSnap).Value = (param_1->_AlwaysUsesDeltaSnap).Value;
  (this->AlwaysUsesDeltaSnap).bIsSet = (param_1->_AlwaysUsesDeltaSnap).bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->AlwaysUsesDeltaSnap).Getter,&(param_1->_AlwaysUsesDeltaSnap).Getter);
  (this->SupportDynamicSliderMaxValue).Value = (param_1->_SupportDynamicSliderMaxValue).Value;
  (this->SupportDynamicSliderMaxValue).bIsSet = (param_1->_SupportDynamicSliderMaxValue).bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->SupportDynamicSliderMaxValue).Getter,
             &(param_1->_SupportDynamicSliderMaxValue).Getter);
  (this->SupportDynamicSliderMinValue).Value = (param_1->_SupportDynamicSliderMinValue).Value;
  (this->SupportDynamicSliderMinValue).bIsSet = (param_1->_SupportDynamicSliderMinValue).bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->SupportDynamicSliderMinValue).Getter,
             &(param_1->_SupportDynamicSliderMinValue).Getter);
  TDelegate<void___cdecl(float,TWeakPtr<SWidget,1>,bool,bool),FDefaultDelegateUserPolicy>::operator=
            (&this->OnDynamicSliderMaxValueChanged,&param_1->_OnDynamicSliderMaxValueChanged);
  TDelegate<void___cdecl(float,TWeakPtr<SWidget,1>,bool,bool),FDefaultDelegateUserPolicy>::operator=
            (&this->OnDynamicSliderMinValueChanged,&param_1->_OnDynamicSliderMinValueChanged);
  pfVar10 = TAttribute<float>::Get(&this->ValueAttribute);
  fVar17 = *pfVar10;
  this->CachedExternalValue = fVar17;
  this->InternalValue = (double)fVar17;
  pbVar11 = TAttribute<bool>::Get(&this->SupportDynamicSliderMaxValue);
  if (*pbVar11 != false) {
    pTVar9 = TAttribute<TOptional<float>_>::Get(pTVar2);
    fVar17 = __real_7f7fffff;
    fVar16 = __real_7f7fffff;
    if (pTVar9->bIsSet != false) {
      fVar16 = pTVar9->TypedValue;
    }
    if (fVar16 < this->CachedExternalValue) {
      pTVar9 = TAttribute<TOptional<float>_>::Get(pTVar2);
      if (pTVar9->bIsSet != false) {
        fVar17 = pTVar9->TypedValue;
      }
      ApplySliderMaxValueChanged(this,this->CachedExternalValue - fVar17,true);
      goto LAB_14d846de2;
    }
  }
  pbVar11 = TAttribute<bool>::Get(&this->SupportDynamicSliderMinValue);
  if (*pbVar11 != false) {
    pTVar9 = TAttribute<TOptional<float>_>::Get(pTVar1);
    fVar17 = __real_ff7fffff;
    fVar16 = __real_ff7fffff;
    if (pTVar9->bIsSet != false) {
      fVar16 = pTVar9->TypedValue;
    }
    if (this->CachedExternalValue <= fVar16 && fVar16 != this->CachedExternalValue) {
      pTVar9 = TAttribute<TOptional<float>_>::Get(&this->MinSliderValue);
      if (pTVar9->bIsSet != false) {
        fVar17 = pTVar9->TypedValue;
      }
      ApplySliderMinValueChanged(this,this->CachedExternalValue - fVar17,true);
    }
  }
LAB_14d846de2:
  UpdateIsSpinRangeUnlimited(this);
  (this->SliderExponent).Value = (param_1->_SliderExponent).Value;
  (this->SliderExponent).bIsSet = (param_1->_SliderExponent).bIsSet;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->SliderExponent).Getter,&(param_1->_SliderExponent).Getter);
  (this->SliderExponentNeutralValue).Value = (param_1->_SliderExponentNeutralValue).Value;
  (this->SliderExponentNeutralValue).bIsSet = (param_1->_SliderExponentNeutralValue).bIsSet;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->SliderExponentNeutralValue).Getter,
             &(param_1->_SliderExponentNeutralValue).Getter);
  this->DistanceDragged = 0.0;
  this->PreDragValue = 0.0;
  (this->Delta).Value = (param_1->_Delta).Value;
  (this->Delta).bIsSet = (param_1->_Delta).bIsSet;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->Delta).Getter,&(param_1->_Delta).Getter);
  (this->ShiftMultiplier).Value = (param_1->_ShiftMultiplier).Value;
  (this->ShiftMultiplier).bIsSet = (param_1->_ShiftMultiplier).bIsSet;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->ShiftMultiplier).Getter,&(param_1->_ShiftMultiplier).Getter);
  (this->CtrlMultiplier).Value = (param_1->_CtrlMultiplier).Value;
  (this->CtrlMultiplier).bIsSet = (param_1->_CtrlMultiplier).bIsSet;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->CtrlMultiplier).Getter,&(param_1->_CtrlMultiplier).Getter);
  (this->Sensitivity).Value = (param_1->_Sensitivity).Value;
  (this->Sensitivity).bIsSet = (param_1->_Sensitivity).bIsSet;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->Sensitivity).Getter,&(param_1->_Sensitivity).Getter);
  (this->LinearDeltaSensitivity).Value = (param_1->_LinearDeltaSensitivity).Value;
  (this->LinearDeltaSensitivity).bIsSet = (param_1->_LinearDeltaSensitivity).bIsSet;
  TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->LinearDeltaSensitivity).Getter,&(param_1->_LinearDeltaSensitivity).Getter);
  pFVar14 = &param_1->_Style->HoveredBorderBrush;
  this->BorderHoveredBrush = pFVar14;
  this->BorderBrush = &param_1->_Style->BorderBrush;
  pFVar12 = &param_1->_Style->ActiveBorderBrush;
  if ((param_1->_Style->ActiveBorderBrush).bIsSet == '\0') {
    pFVar12 = pFVar14;
  }
  this->BorderActiveBrush = pFVar12;
  this->SelectorBrush = &param_1->_Style->SelectorBrush;
  pFVar4 = param_1->_Style;
  this->bDragging = false;
  this->bIsTextChanging = false;
  this->SelectorWidth = &pFVar4->SelectorWidth;
  this->PointerDraggingSliderIndex = -1;
  return;
}

// Fraction @ 14d861bd0

float __cdecl
UE::ColorGrading::SColorGradingComponentSpinBox::Fraction
          (double param_1,double param_2,double param_3)

{
  double dVar1;
  
  dVar1 = (param_1 * __real_3fe0000000000000 - param_2 * __real_3fe0000000000000) /
          (param_3 * __real_3fe0000000000000 - param_2 * __real_3fe0000000000000);
  if (__real_3ff0000000000000 <= dVar1) {
    dVar1 = __real_3ff0000000000000;
  }
  if (dVar1 <= 0.0) {
    dVar1 = 0.0;
  }
  return (float)dVar1;
}

// GetCurrentHSVColor @ 14d866b70

FLinearColor * __thiscall
UE::ColorGrading::SColorGradingComponentSpinBox::GetCurrentHSVColor
          (SColorGradingComponentSpinBox *this,FLinearColor *__return_storage_ptr__)

{
  FLinearColor *this_00;
  FLinearColor local_18;
  
  this_00 = GetCurrentRGBColor(this,&local_18);
  FLinearColor::LinearRGBToHSV(this_00,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetCurrentRGBColor @ 14d866d30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FLinearColor * __thiscall
UE::ColorGrading::SColorGradingComponentSpinBox::GetCurrentRGBColor
          (SColorGradingComponentSpinBox *this,FLinearColor *__return_storage_ptr__)

{
  bool bVar1;
  char cVar2;
  longlong *plVar3;
  FReadAccessScope local_48;
  TVector4<double>_u_0 local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnQueryCurrentColor,
             &local_48);
  if (((*(int *)&(this->OnQueryCurrentColor).field_0x10 == 0) ||
      (plVar3 = *(longlong **)&(this->OnQueryCurrentColor).field_0x8, plVar3 == (longlong *)0x0)) ||
     (cVar2 = (**(code **)(*plVar3 + 0x38))(), cVar2 == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_48);
  if (bVar1) {
    local_28._s_0.Z = ___xmm_3ff00000000000000000000000000000;
    local_28._s_0.W = _UNK_15061cbc8;
    local_28._s_0.X = 0.0;
    local_28._s_0.Y = 0.0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnQueryCurrentColor,
               &local_48);
    if (*(int *)&(this->OnQueryCurrentColor).field_0x10 == 0) {
      plVar3 = (longlong *)0x0;
    }
    else {
      plVar3 = *(longlong **)&(this->OnQueryCurrentColor).field_0x8;
    }
    (**(code **)(*plVar3 + 0x60))(plVar3,&local_28);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_48);
    local_28._s_0.W = __real_3ff0000000000000;
    FLinearColor::FLinearColor(__return_storage_ptr__,(TVector4<double> *)&local_28._s_0);
  }
  else {
    (__return_storage_ptr__->field0_0x0)._s_0 = (FLinearColor_u_0_s_0)FLinearColor::White;
  }
  return __return_storage_ptr__;
}

// GetGradientColors @ 14d868260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TArray<FLinearColor,TSizedDefaultAllocator<32>_> * __thiscall
UE::ColorGrading::SColorGradingComponentSpinBox::GetGradientColors
          (SColorGradingComponentSpinBox *this,
          TArray<FLinearColor,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  TDelegate<UE::ColorGrading::EColorGradingModes___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  FScriptContainerElement *pFVar1;
  EColorGradingComponent EVar2;
  code *pcVar3;
  undefined8 uVar4;
  float fVar5;
  ForAnyElementType _Src;
  int iVar6;
  char cVar7;
  bool bVar8;
  EColorGradingModes EVar9;
  EColorGradingComponent *pEVar10;
  FLinearColor_u_0 *pFVar11;
  FScriptContainerElement *pFVar12;
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> *pTVar13;
  FLinearColor *pFVar14;
  longlong *plVar15;
  longlong lVar16;
  uint uVar17;
  undefined1 auStackY_3a8 [32];
  FLinearColor_u_0 local_358;
  FLinearColor_u_0 local_348;
  FLinearColor_u_0 local_338;
  FLinearColor_u_0 local_328;
  FLinearColor_u_0 local_318;
  FLinearColor_u_0 local_308;
  FLinearColor_u_0 local_2f8;
  FLinearColor_u_0 local_2e8;
  FLinearColor_u_0 local_2d8;
  initializer_list<FLinearColor> local_2c8;
  initializer_list<FLinearColor> local_2b8;
  initializer_list<FLinearColor> local_2a8;
  initializer_list<FLinearColor> local_298;
  initializer_list<FLinearColor> local_288;
  initializer_list<FLinearColor> local_278;
  initializer_list<FLinearColor> local_268;
  initializer_list<FLinearColor> local_258;
  initializer_list<FLinearColor> local_248;
  FLinearColor_u_0 local_238;
  FReadAccessScope local_228;
  FLinearColor_u_0 local_210;
  FLinearColor_u_0 local_200;
  FLinearColor_u_0 local_1f0;
  FLinearColor_u_0 local_1e0;
  FLinearColor_u_0 local_1d0;
  FLinearColor_u_0 local_1c0;
  FLinearColor_u_0 local_1b0;
  undefined8 local_1a0;
  undefined8 uStack_198;
  FReadAccessScope local_190;
  FLinearColor local_178;
  FLinearColor local_168;
  FLinearColor local_158;
  FLinearColor local_148;
  FLinearColor_u_0 local_138;
  FLinearColor_u_0 local_128;
  FLinearColor_u_0 local_118;
  FLinearColor_u_0 local_108;
  FLinearColor_u_0 local_f8;
  FLinearColor_u_0 local_e8;
  FLinearColor_u_0 local_d8;
  FLinearColor_u_0 local_c8;
  FLinearColor_u_0 local_b8;
  FLinearColor local_a8;
  FLinearColor local_98;
  FLinearColor local_88;
  FLinearColor local_78;
  FLinearColor local_68;
  FLinearColor local_58;
  FLinearColor_u_0 local_48 [2];
  longlong *plVar18;
  
  local_48[0]._0_8_ = __security_cookie.value ^ (ulonglong)auStackY_3a8;
  pEVar10 = TAttribute<enum_UE::ColorGrading::EColorGradingComponent>::Get(&this->Component);
  this_00 = &(this->ColorGradingMode).Getter;
  EVar2 = *pEVar10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_228);
  plVar18 = (longlong *)0x0;
  if (((*(int *)&(this->ColorGradingMode).Getter.field_0x10 == 0) ||
      (plVar15 = *(longlong **)&(this->ColorGradingMode).Getter.field_0x8,
      plVar15 == (longlong *)0x0)) || (cVar7 = (**(code **)(*plVar15 + 0x38))(), cVar7 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_228);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_228);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_190);
    plVar15 = plVar18;
    if (*(int *)&(this->ColorGradingMode).Getter.field_0x10 != 0) {
      plVar15 = *(longlong **)&(this->ColorGradingMode).Getter.field_0x8;
    }
    EVar9 = (**(code **)(*plVar15 + 0x60))();
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_190);
    (this->ColorGradingMode).Value = EVar9;
  }
  fVar5 = __real_42700000;
  EVar9 = (this->ColorGradingMode).Value;
  switch(EVar2) {
  case Red:
    if (EVar9 == Offset) {
      local_2c8._First = (FLinearColor *)&local_138;
      local_138._0_8_ = ___xmm_3f8000003f8000003f80000000000000;
      local_138._8_8_ = _UNK_15090c6e8;
      local_2c8._Last = (FLinearColor *)&local_108;
      local_118 = FLinearColor::Red.field0_0x0;
      local_128 = FLinearColor::Black.field0_0x0;
      TArray<FLinearColor,TSizedDefaultAllocator<32>_>::
      TArray<FLinearColor,TSizedDefaultAllocator<32>_>(__return_storage_ptr__,&local_2c8);
    }
    else {
      local_2b8._First = (FLinearColor *)&local_210;
      local_2b8._Last = (FLinearColor *)&local_1f0;
      local_210 = FLinearColor::Black.field0_0x0;
      local_200 = FLinearColor::Red.field0_0x0;
      TArray<FLinearColor,TSizedDefaultAllocator<32>_>::
      TArray<FLinearColor,TSizedDefaultAllocator<32>_>(__return_storage_ptr__,&local_2b8);
    }
    break;
  case Green:
    if (EVar9 == Offset) {
      local_2a8._First = (FLinearColor *)&local_108;
      local_108._0_8_ = ___xmm_3f8000003f800000000000003f800000;
      local_108._8_8_ = _UNK_15090c6d8;
      local_2a8._Last = (FLinearColor *)&local_d8;
      local_e8 = FLinearColor::Green.field0_0x0;
      local_f8 = FLinearColor::Black.field0_0x0;
      TArray<FLinearColor,TSizedDefaultAllocator<32>_>::
      TArray<FLinearColor,TSizedDefaultAllocator<32>_>(__return_storage_ptr__,&local_2a8);
    }
    else {
      local_298._First = (FLinearColor *)&local_1f0;
      local_298._Last = (FLinearColor *)&local_1d0;
      local_1f0 = FLinearColor::Black.field0_0x0;
      local_1e0 = FLinearColor::Green.field0_0x0;
      TArray<FLinearColor,TSizedDefaultAllocator<32>_>::
      TArray<FLinearColor,TSizedDefaultAllocator<32>_>(__return_storage_ptr__,&local_298);
    }
    break;
  case Blue:
    if (EVar9 == Offset) {
      local_288._First = (FLinearColor *)&local_d8;
      local_d8._0_8_ = ___xmm_3f800000000000003f8000003f800000;
      local_d8._8_8_ = _UNK_150a07f68;
      local_288._Last = &local_a8;
      local_b8 = FLinearColor::Blue.field0_0x0;
      local_c8 = FLinearColor::Black.field0_0x0;
      TArray<FLinearColor,TSizedDefaultAllocator<32>_>::
      TArray<FLinearColor,TSizedDefaultAllocator<32>_>(__return_storage_ptr__,&local_288);
    }
    else {
      local_278._First = (FLinearColor *)&local_1d0;
      local_278._Last = (FLinearColor *)&local_1b0;
      local_1d0 = FLinearColor::Black.field0_0x0;
      local_1c0 = FLinearColor::Blue.field0_0x0;
      TArray<FLinearColor,TSizedDefaultAllocator<32>_>::
      TArray<FLinearColor,TSizedDefaultAllocator<32>_>(__return_storage_ptr__,&local_278);
    }
    break;
  case Hue:
    if (HueGradientColors.ArrayNum == 0) {
      do {
        local_338._s_0.G = 1.0;
        local_338._s_0.B = 1.0;
        local_338._s_0.A = 1.0;
        local_338._s_0.R = (float)((int)plVar18 + (int)((ulonglong)plVar18 / 6) * -6) * fVar5;
        pFVar12 = (FScriptContainerElement *)
                  FLinearColor::HSVToLinearRGB((FLinearColor *)&local_338._s_0,&local_168);
        if (((HueGradientColors.AllocatorInstance.Data <= pFVar12) &&
            (pFVar12 < HueGradientColors.AllocatorInstance.Data +
                       (longlong)HueGradientColors.ArrayMax * 0x10)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar3 = (code *)swi(3);
          pTVar13 = (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar13;
        }
        if (HueGradientColors.ArrayNum == HueGradientColors.ArrayMax) {
          HueGradientColors.ArrayNum =
               Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x410,&HueGradientColors.AllocatorInstance,&HueGradientColors.ArrayMax);
        }
        uVar17 = (int)plVar18 + 1;
        plVar18 = (longlong *)(ulonglong)uVar17;
        uVar4 = *(undefined8 *)(pFVar12 + 8);
        pFVar1 = HueGradientColors.AllocatorInstance.Data +
                 (longlong)HueGradientColors.ArrayNum * 0x10;
        HueGradientColors.ArrayNum = HueGradientColors.ArrayNum + 1;
        *(undefined8 *)pFVar1 = *(undefined8 *)pFVar12;
        *(undefined8 *)(pFVar1 + 8) = uVar4;
      } while ((int)uVar17 < 7);
    }
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    iVar6 = HueGradientColors.ArrayNum;
    _Src = HueGradientColors.AllocatorInstance;
    lVar16 = (longlong)HueGradientColors.ArrayNum;
    __return_storage_ptr__->ArrayNum = HueGradientColors.ArrayNum;
    if (iVar6 == 0) {
      __return_storage_ptr__->ArrayMax = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,iVar6,0,&__return_storage_ptr__->AllocatorInstance,iVar6,
                 &__return_storage_ptr__->ArrayMax);
      memcpy((__return_storage_ptr__->AllocatorInstance).Data,_Src.Data,lVar16 << 4);
    }
    break;
  case Saturation:
    pFVar14 = GetCurrentRGBColor(this,&local_158);
    FLinearColor::LinearRGBToHSV(pFVar14,(FLinearColor *)&local_358._s_0);
    local_328._s_0.R = local_358._s_0.R;
    local_328._s_0.B = local_358._s_0.B;
    local_328._s_0.G = 0.0;
    local_328._s_0.A = 1.0;
    FLinearColor::HSVToLinearRGB((FLinearColor *)&local_328._s_0,&local_a8);
    local_318._s_0.R = local_358._s_0.R;
    local_318._s_0.B = local_358._s_0.B;
    local_318._s_0.G = 0.5;
    local_318._s_0.A = 1.0;
    FLinearColor::HSVToLinearRGB((FLinearColor *)&local_318._s_0,&local_98);
    local_308._s_0.R = local_358._s_0.R;
    local_308._s_0.B = local_358._s_0.B;
    local_308._s_0.G = 1.0;
    local_308._s_0.A = 1.0;
    FLinearColor::HSVToLinearRGB((FLinearColor *)&local_308._s_0,&local_88);
    local_258._First = &local_a8;
    local_258._Last = &local_78;
    TArray<FLinearColor,TSizedDefaultAllocator<32>_>::
    TArray<FLinearColor,TSizedDefaultAllocator<32>_>(__return_storage_ptr__,&local_258);
    break;
  case Value:
    pFVar14 = GetCurrentRGBColor(this,&local_148);
    FLinearColor::LinearRGBToHSV(pFVar14,(FLinearColor *)&local_348._s_0);
    local_2f8._s_0.R = local_348._s_0.R;
    local_2f8._s_0.G = local_348._s_0.G;
    local_2f8._s_0.B = 0.0;
    local_2f8._s_0.A = 1.0;
    FLinearColor::HSVToLinearRGB((FLinearColor *)&local_2f8._s_0,&local_78);
    local_2e8._s_0.R = local_348._s_0.R;
    local_2e8._s_0.G = local_348._s_0.G;
    local_2e8._s_0.B = 1.0;
    local_2e8._s_0.A = 1.0;
    FLinearColor::HSVToLinearRGB((FLinearColor *)&local_2e8._s_0,&local_68);
    local_2d8._s_0.R = local_348._s_0.R;
    local_2d8._s_0.G = local_348._s_0.G;
    local_2d8._s_0.B = 2.0;
    local_2d8._s_0.A = 1.0;
    FLinearColor::HSVToLinearRGB((FLinearColor *)&local_2d8._s_0,&local_58);
    local_248._First = &local_78;
    local_248._Last = (FLinearColor *)local_48;
    TArray<FLinearColor,TSizedDefaultAllocator<32>_>::
    TArray<FLinearColor,TSizedDefaultAllocator<32>_>(__return_storage_ptr__,&local_248);
    break;
  case Luminance:
    if (EVar9 == Offset) {
      pFVar11 = &local_238;
      local_238 = FLinearColor::White.field0_0x0;
    }
    else {
      pFVar11 = &GetCurrentRGBColor(this,&local_178)->field0_0x0;
    }
    local_1b0 = FLinearColor::Black.field0_0x0;
    local_1a0 = *(undefined8 *)&(pFVar11->_s_0).R;
    uStack_198._0_4_ = *(float *)((longlong)pFVar11 + 8);
    uStack_198._4_4_ = *(float *)((longlong)pFVar11 + 0xc);
    local_268._First = (FLinearColor *)&local_1b0;
    local_268._Last = (FLinearColor *)&local_190;
    TArray<FLinearColor,TSizedDefaultAllocator<32>_>::
    TArray<FLinearColor,TSizedDefaultAllocator<32>_>(__return_storage_ptr__,&local_268);
    break;
  default:
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
  }
  return __return_storage_ptr__;
}

// GetHueGradientColors @ 14d868a80

TArray<FLinearColor,TSizedDefaultAllocator<32>_> * __cdecl
UE::ColorGrading::SColorGradingComponentSpinBox::GetHueGradientColors(void)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  float fVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> *pTVar7;
  uint uVar8;
  ulonglong uVar9;
  FLinearColor_u_0 local_38;
  FLinearColor local_28 [2];
  
  fVar4 = __real_42700000;
  if (HueGradientColors.ArrayNum != 0) {
    return &HueGradientColors;
  }
  uVar9 = 0;
  do {
    local_38._s_0.G = 1.0;
    local_38._s_0.B = 1.0;
    local_38._s_0.A = 1.0;
    local_38._s_0.R = (float)((int)uVar9 + (int)(uVar9 / 6) * -6) * fVar4;
    pFVar6 = (FScriptContainerElement *)
             FLinearColor::HSVToLinearRGB((FLinearColor *)&local_38._s_0,local_28);
    if (((HueGradientColors.AllocatorInstance.Data <= pFVar6) &&
        (pFVar6 < HueGradientColors.AllocatorInstance.Data +
                  (longlong)HueGradientColors.ArrayMax * 0x10)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar7;
    }
    if (HueGradientColors.ArrayNum == HueGradientColors.ArrayMax) {
      HueGradientColors.ArrayNum =
           Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x410,&HueGradientColors.AllocatorInstance,&HueGradientColors.ArrayMax);
    }
    uVar8 = (int)uVar9 + 1;
    uVar9 = (ulonglong)uVar8;
    uVar3 = *(undefined8 *)(pFVar6 + 8);
    pFVar1 = HueGradientColors.AllocatorInstance.Data + (longlong)HueGradientColors.ArrayNum * 0x10;
    HueGradientColors.ArrayNum = HueGradientColors.ArrayNum + 1;
    *(undefined8 *)pFVar1 = *(undefined8 *)pFVar6;
    *(undefined8 *)(pFVar1 + 8) = uVar3;
  } while ((int)uVar8 < 7);
  return &HueGradientColors;
}

// GetMaxSliderValue @ 14d868fd0

float __thiscall
UE::ColorGrading::SColorGradingComponentSpinBox::GetMaxSliderValue
          (SColorGradingComponentSpinBox *this)

{
  TOptional<float> *pTVar1;
  
  pTVar1 = TAttribute<TOptional<float>_>::Get(&this->MaxSliderValue);
  if (pTVar1->bIsSet != false) {
    return pTVar1->TypedValue;
  }
  return __real_7f7fffff;
}

// GetMinSliderValue @ 14d869100

float __thiscall
UE::ColorGrading::SColorGradingComponentSpinBox::GetMinSliderValue
          (SColorGradingComponentSpinBox *this)

{
  TOptional<float> *pTVar1;
  
  pTVar1 = TAttribute<TOptional<float>_>::Get(&this->MinSliderValue);
  if (pTVar1->bIsSet != false) {
    return pTVar1->TypedValue;
  }
  return __real_ff7fffff;
}

// NotifyValueCommitted @ 14d873830

void __thiscall
UE::ColorGrading::SColorGradingComponentSpinBox::NotifyValueCommitted
          (SColorGradingComponentSpinBox *this,float param_1)

{
  longlong *plVar1;
  FReadAccessScope local_38 [2];
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnEndSliderMovement,
             local_38);
  if ((*(int *)&(this->OnEndSliderMovement).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->OnEndSliderMovement).field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))(plVar1,param_1);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (local_38);
  return;
}

// OnCursorQuery @ 14d873a80

/* WARNING: Enum "Type": Some values do not have unique names */

FCursorReply * __thiscall
UE::ColorGrading::SColorGradingComponentSpinBox::OnCursorQuery
          (SColorGradingComponentSpinBox *this,FCursorReply *__return_storage_ptr__,
          FGeometry *param_1,FPointerEvent *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  Type *pTVar4;
  bool bVar5;
  undefined8 local_80;
  TReferenceControllerBase<1> *pTStack_78;
  undefined8 local_70;
  TReferenceControllerBase<1> *pTStack_68;
  undefined8 local_60;
  TReferenceControllerBase<1> *pTStack_58;
  Type local_50 [2];
  undefined1 local_48;
  undefined8 local_40;
  TReferenceControllerBase<1> *pTStack_38;
  undefined8 local_30;
  TReferenceControllerBase<1> *pTStack_28;
  undefined8 local_20;
  TReferenceControllerBase<1> *pTStack_18;
  Type local_10 [2];
  
  if (this->bAllowSpin == false) {
    *(undefined1 *)&__return_storage_ptr__->_padding_ = 1;
    __return_storage_ptr__->_padding_ = 0;
    __return_storage_ptr__->_padding_ = 0;
    (__return_storage_ptr__->CursorWindow).Object = (SWindow *)0x0;
    (__return_storage_ptr__->CursorWindow).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    (__return_storage_ptr__->CursorWidget).Object = (SWidget *)0x0;
    (__return_storage_ptr__->CursorWidget).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    __return_storage_ptr__->MouseCursor = Default;
  }
  else {
    bVar5 = this->bDragging == false;
    if (bVar5) {
      puVar1 = &local_80;
      local_80 = 0;
      pTStack_78 = (TReferenceControllerBase<1> *)0x0;
      local_50[0] = ResizeLeftRight;
      puVar2 = &local_70;
      local_70 = 0;
      pTStack_68 = (TReferenceControllerBase<1> *)0x0;
      puVar3 = &local_60;
      local_60 = 0;
      pTStack_58 = (TReferenceControllerBase<1> *)0x0;
      pTVar4 = local_50;
    }
    else {
      local_48 = 1;
      puVar1 = &local_40;
      local_40 = 0;
      pTStack_38 = (TReferenceControllerBase<1> *)0x0;
      local_10[0] = None;
      puVar2 = &local_30;
      local_30 = 0;
      pTStack_28 = (TReferenceControllerBase<1> *)0x0;
      puVar3 = &local_20;
      local_20 = 0;
      pTStack_18 = (TReferenceControllerBase<1> *)0x0;
      pTVar4 = local_10;
    }
    __return_storage_ptr__->_padding_ = puVar1[1];
    (__return_storage_ptr__->CursorWindow).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)puVar2[1];
    (__return_storage_ptr__->CursorWidget).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)puVar3[1];
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar2[1] = 0;
    *puVar2 = 0;
    puVar3[1] = 0;
    *puVar3 = 0;
    __return_storage_ptr__->MouseCursor = *pTVar4;
    *(undefined1 *)&__return_storage_ptr__->_padding_ = 1;
    __return_storage_ptr__->_padding_ = 0;
    (__return_storage_ptr__->CursorWindow).Object = (SWindow *)0x0;
    (__return_storage_ptr__->CursorWidget).Object = (SWidget *)0x0;
    if (bVar5) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_58);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_68);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_78);
    }
    else {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_18);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_38);
    }
  }
  return __return_storage_ptr__;
}

// OnMouseButtonDown @ 14d877260

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
UE::ColorGrading::SColorGradingComponentSpinBox::OnMouseButtonDown
          (SColorGradingComponentSpinBox *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  atomic<int> *paVar1;
  float fVar2;
  atomic<int> aVar3;
  FName FVar4;
  SWidget *pSVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TIntPoint<int>_u_0 TVar8;
  bool bVar9;
  float *pfVar10;
  TSharedRef<SWidget,1> *pTVar11;
  FReply *pFVar12;
  TReferenceControllerBase<1> *pTVar13;
  bool bVar14;
  uint uStackX_c;
  TSharedRef<SWidget,1> local_1c8;
  TSharedRef<SWidget,1> local_1b8;
  FReply local_1a8;
  FReply local_e8;
  
  bVar14 = false;
  if (this->bAllowSpin == false) {
    pTVar13 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar13 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
    FVar4 = (param_2->EffectingButton).KeyName;
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar14 = true;
    if ((FVar4 == EKeys::LeftMouseButton.KeyName) && (this->PointerDraggingSliderIndex == -1)) {
      bVar9 = true;
      goto LAB_14d8772cc;
    }
  }
  bVar9 = false;
LAB_14d8772cc:
  if (bVar14) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  }
  if (bVar9) {
    this->DistanceDragged = 0.0;
    pfVar10 = TAttribute<float>::Get(&this->ValueAttribute);
    fVar2 = *pfVar10;
    this->PreDragValue = fVar2;
    this->InternalValue = (double)fVar2;
    this->PointerDraggingSliderIndex = param_2->PointerIndex;
    fVar2 = *(float *)&(param_2->ScreenSpacePosition).field_0x4;
    TVar8._s_0.Y = (int)ROUND(fVar2 + fVar2 + __real_3f000000) >> 1;
    TVar8._s_0.X = (int)ROUND(*(float *)&param_2->ScreenSpacePosition +
                              *(float *)&param_2->ScreenSpacePosition + __real_3f000000) >> 1;
    (this->CachedMousePosition).field0_0x0 = TVar8;
    FReply::FReply(&local_e8,true);
    pTVar11 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_1c8);
    pTVar13 = (pTVar11->SharedReferenceCount).ReferenceController;
    pSVar5 = pTVar11->Object;
    if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1c8.SharedReferenceCount.ReferenceController);
    }
    else {
      LOCK();
      pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1c8.SharedReferenceCount.ReferenceController);
      LOCK();
      pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_1c8.Object = pSVar5;
    local_1c8.SharedReferenceCount.ReferenceController = pTVar13;
    pFVar12 = FReply::CaptureMouse(&local_e8,&local_1c8);
    pTVar11 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_1c8);
    pTVar6 = (pTVar11->SharedReferenceCount).ReferenceController;
    pSVar5 = pTVar11->Object;
    if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1c8.SharedReferenceCount.ReferenceController);
    }
    else {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1c8.SharedReferenceCount.ReferenceController);
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    (pFVar12->MouseCaptor).Object = pSVar5;
    if (pTVar6 != (pFVar12->MouseCaptor).WeakReferenceCount.ReferenceController) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      pTVar7 = (pFVar12->MouseCaptor).WeakReferenceCount.ReferenceController;
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
      (pFVar12->MouseCaptor).WeakReferenceCount.ReferenceController = pTVar6;
    }
    pFVar12->bUseHighPrecisionMouse = 1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    pTVar11 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_1c8);
    pTVar7 = (pTVar11->SharedReferenceCount).ReferenceController;
    pSVar5 = pTVar11->Object;
    if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1c8.SharedReferenceCount.ReferenceController);
    }
    else {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1c8.SharedReferenceCount.ReferenceController);
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_1b8.Object = pSVar5;
    local_1b8.SharedReferenceCount.ReferenceController = pTVar7;
    pFVar12 = FReply::SetUserFocus(pFVar12,&local_1b8,Mouse,false);
    FReply::FReply(&local_1a8,pFVar12);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
    FReply::~FReply(&local_e8);
    if (this->bPreventThrottling != false) {
      local_1a8._180_4_ = local_1a8._180_4_ | 0x40;
    }
    FReply::FReply(__return_storage_ptr__,&local_1a8);
    FReply::~FReply(&local_1a8);
  }
  else {
    FReply::FReply(__return_storage_ptr__,false);
  }
  return __return_storage_ptr__;
}

// OnMouseButtonUp @ 14d8783b0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
UE::ColorGrading::SColorGradingComponentSpinBox::OnMouseButtonUp
          (SColorGradingComponentSpinBox *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FName FVar3;
  bool bVar4;
  FWeakReferencer<1> FVar5;
  bool bVar6;
  float *pfVar7;
  TReferenceControllerBase<1> *pTVar8;
  undefined1 auVar9 [16];
  double dVar10;
  uint uStackX_c;
  FReply local_188;
  FReply local_c8;
  
  bVar6 = false;
  if (this->bAllowSpin == false) {
    pTVar8 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar8 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
    FVar3 = (param_2->EffectingButton).KeyName;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar6 = true;
    if ((FVar3 == EKeys::LeftMouseButton.KeyName) &&
       (this->PointerDraggingSliderIndex == param_2->PointerIndex)) {
      bVar4 = true;
      goto LAB_14d87841c;
    }
  }
  bVar4 = false;
LAB_14d87841c:
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  if (bVar4) {
    bVar6 = SWidget::HasMouseCapture((SWidget *)this);
    if (bVar6) {
      if (this->bDragging != false) {
        pfVar7 = TAttribute<float>::Get(&this->Delta);
        if (((*pfVar7 != 0.0) && ((param_2->_padding_ & 3) == 0)) &&
           ((param_2->_padding_ & 0xc) == 0)) {
          dVar10 = (double)*pfVar7;
          auVar9._0_8_ = (dVar10 * __real_3fe0000000000000 + this->InternalValue) / dVar10;
          auVar9._8_8_ = 0;
          auVar9 = roundpd(auVar9,auVar9,1);
          this->InternalValue = auVar9._0_8_ * dVar10;
        }
        dVar10 = this->InternalValue;
        if (__real_47efffffe0000000 <= this->InternalValue) {
          dVar10 = __real_47efffffe0000000;
        }
        if (dVar10 <= __real_c7efffffe0000000) {
          dVar10 = __real_c7efffffe0000000;
        }
        NotifyValueCommitted(this,(float)dVar10);
      }
      this->bDragging = false;
      this->PointerDraggingSliderIndex = -1;
      FReply::FReply(&local_188,true);
      FVar5.ReferenceController = local_188.MouseCaptor.WeakReferenceCount.ReferenceController;
      local_188.MouseCaptor.Object = (SWidget *)0x0;
      local_188.MouseCaptor.WeakReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &(FVar5.ReferenceController)->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)((FVar5.ReferenceController)->_padding_ + 8))(FVar5.ReferenceController,1);
        }
      }
      local_188.bUseHighPrecisionMouse = 0;
      local_188.bReleaseMouseCapture = 1;
      FReply::FReply(&local_c8,&local_188);
      FReply::~FReply(&local_188);
      if (param_2->bIsTouchEvent == false) {
        FReply::SetMousePos(&local_c8,&this->CachedMousePosition);
      }
      FReply::FReply(__return_storage_ptr__,&local_c8);
      FReply::~FReply(&local_c8);
      return __return_storage_ptr__;
    }
    this->bDragging = false;
    this->PointerDraggingSliderIndex = -1;
  }
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnMouseMove @ 14d878930

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
UE::ColorGrading::SColorGradingComponentSpinBox::OnMouseMove
          (SColorGradingComponentSpinBox *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  float fVar1;
  double dVar2;
  bool bVar3;
  FSlateApplication *this_00;
  bool *pbVar4;
  TOptional<float> *pTVar5;
  float *pfVar6;
  int *piVar7;
  TAttribute<float> *this_01;
  ECommitMethod EVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  double dVar14;
  double dVar15;
  float fVar16;
  float fVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  float fVar22;
  uint uVar23;
  uint uVar24;
  float fVar25;
  uint uVar26;
  uint uVar27;
  TIntPoint<int>_u_0 local_res8;
  
  if ((this->bAllowSpin == false) || (this->PointerDraggingSliderIndex != param_2->PointerIndex)) {
LAB_14d87897a:
    FReply::FReply(__return_storage_ptr__,false);
    return __return_storage_ptr__;
  }
  bVar3 = SWidget::HasMouseCapture((SWidget *)this);
  fVar9 = __real_7f7fffff;
  fVar16 = __real_ff7fffff;
  if (!bVar3) {
    this->bDragging = false;
    this->PointerDraggingSliderIndex = -1;
    goto LAB_14d87897a;
  }
  if (this->bDragging == false) {
    fVar16 = (float)(*(uint *)&param_2->CursorDelta & __xmm_7fffffff7fffffff7fffffff7fffffff) +
             this->DistanceDragged;
    this->DistanceDragged = fVar16;
    this_00 = FSlateApplication::Get();
    fVar9 = FSlateApplication::GetDragTriggerDistance(this_00);
    if (fVar9 < fVar16) {
      this->bDragging = true;
      TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::ExecuteIfBound
                (&this->OnBeginSliderMovement);
    }
    fVar9 = *(float *)&(param_2->ScreenSpacePosition).field_0x4;
    local_res8._s_0.Y = (int)ROUND(fVar9 + fVar9 + __real_3f000000) >> 1;
    local_res8._s_0.X =
         (int)ROUND(*(float *)&param_2->ScreenSpacePosition +
                    *(float *)&param_2->ScreenSpacePosition + __real_3f000000) >> 1;
    (this->CachedMousePosition).field0_0x0 = local_res8;
    goto LAB_14d879051;
  }
  local_res8._0_4_ = SUB84(param_1->Size,0);
  fVar25 = (float)local_res8._0_4_ * param_1->Scale;
  if (fVar25 <= __real_42c80000) {
    fVar25 = __real_42c80000;
  }
  if ((param_2->_padding_ & 0x30) != 0) {
    fVar17 = *(float *)&param_2->CursorDelta / fVar25;
    pbVar4 = TAttribute<bool>::Get(&this->SupportDynamicSliderMaxValue);
    if (*pbVar4 != false) {
      pTVar5 = TAttribute<TOptional<float>_>::Get(&this->MaxSliderValue);
      fVar22 = fVar9;
      if (pTVar5->bIsSet != false) {
        fVar22 = pTVar5->TypedValue;
      }
      if ((float)this->InternalValue == fVar22) {
        ApplySliderMaxValueChanged(this,fVar17,false);
        goto LAB_14d878b63;
      }
    }
    pbVar4 = TAttribute<bool>::Get(&this->SupportDynamicSliderMinValue);
    if (*pbVar4 != false) {
      pTVar5 = TAttribute<TOptional<float>_>::Get(&this->MinSliderValue);
      fVar22 = fVar16;
      if (pTVar5->bIsSet != false) {
        fVar22 = pTVar5->TypedValue;
      }
      if ((float)this->InternalValue == fVar22) {
        ApplySliderMinValueChanged(this,fVar17,false);
      }
    }
  }
LAB_14d878b63:
  dVar15 = __real_3fb999999999999a;
  EVar8 = CommittedViaSpin;
  if ((param_2->_padding_ & 0xc) == 0) {
    if ((param_2->_padding_ & 3) != 0) {
      this_01 = &this->ShiftMultiplier;
      goto LAB_14d878b8a;
    }
  }
  else {
    this_01 = &this->CtrlMultiplier;
LAB_14d878b8a:
    pfVar6 = TAttribute<float>::Get(this_01);
    EVar8 = CommittedViaSpinMultiplier;
    dVar15 = dVar15 * (double)*pfVar6;
  }
  fVar17 = __real_3f800000;
  fVar22 = __real_3f800000;
  if ((this->Sensitivity).bIsSet != false) {
    pfVar6 = TAttribute<float>::Get(&this->Sensitivity);
    fVar22 = *pfVar6;
  }
  dVar2 = __real_47efffffe0000000;
  dVar14 = __real_3ff0000000000000;
  fVar22 = fVar22 * *(float *)&param_2->CursorDelta;
  uVar26 = SUB84(__real_47efffffe0000000,0);
  uVar27 = (uint)((ulonglong)__real_47efffffe0000000 >> 0x20);
  if (this->bUnlimitedSpinRange == false) {
    if ((this->SliderExponentNeutralValue).bIsSet == false) {
LAB_14d878c37:
      bVar3 = false;
    }
    else {
      pfVar6 = TAttribute<float>::Get(&this->SliderExponentNeutralValue);
      fVar1 = *pfVar6;
      fVar10 = GetMinSliderValue(this);
      if (fVar1 <= fVar10) goto LAB_14d878c37;
      pfVar6 = TAttribute<float>::Get(&this->SliderExponentNeutralValue);
      fVar1 = *pfVar6;
      fVar10 = GetMaxSliderValue(this);
      if (fVar10 <= fVar1) goto LAB_14d878c37;
      bVar3 = true;
    }
    pfVar6 = TAttribute<float>::Get(&this->SliderExponent);
    fVar1 = *pfVar6;
    fVar10 = GetMaxSliderValue(this);
    fVar11 = GetMinSliderValue(this);
    dVar14 = (this->InternalValue * __real_3fe0000000000000 -
             (double)fVar11 * __real_3fe0000000000000) /
             ((double)fVar10 * __real_3fe0000000000000 - (double)fVar11 * __real_3fe0000000000000);
    if (__real_3ff0000000000000 <= dVar14) {
      dVar14 = __real_3ff0000000000000;
    }
    if (dVar14 <= 0.0) {
      dVar14 = 0.0;
    }
    fVar11 = (float)dVar14;
    fVar10 = (float)((uint)(fVar1 - fVar17) & __xmm_7fffffff7fffffff7fffffff7fffffff);
    if (__real_322bcc77 < fVar10) {
      if (bVar3) {
        fVar12 = GetMaxSliderValue(this);
        fVar13 = GetMinSliderValue(this);
        dVar14 = (double)fVar13 * __real_3fe0000000000000;
        pfVar6 = TAttribute<float>::Get(&this->SliderExponentNeutralValue);
        dVar14 = ((double)(*pfVar6 * __real_3f000000) - dVar14) /
                 ((double)fVar12 * __real_3fe0000000000000 - dVar14);
        if (__real_3ff0000000000000 <= dVar14) {
          dVar14 = __real_3ff0000000000000;
        }
        if (dVar14 <= 0.0) {
          dVar14 = 0.0;
        }
        fVar11 = SpinBoxComputeExponentSliderFraction(fVar11,(float)dVar14,fVar1);
      }
      else {
        fVar11 = powf(fVar17 - fVar11,fVar1);
        fVar11 = fVar17 - fVar11;
      }
    }
    fVar22 = (float)((double)fVar22 * dVar15) + fVar25 * fVar11;
    if (fVar25 <= fVar22) {
      fVar22 = fVar25;
    }
    if (fVar22 <= 0.0) {
      fVar22 = 0.0;
    }
    fVar11 = fVar22 / fVar25;
    if (fVar17 <= fVar22 / fVar25) {
      fVar11 = fVar17;
    }
    if (fVar11 <= 0.0) {
      fVar11 = 0.0;
    }
    if (__real_322bcc77 < fVar10) {
      if (bVar3) {
        pTVar5 = TAttribute<TOptional<float>_>::Get(&this->MaxSliderValue);
        if (pTVar5->bIsSet != false) {
          fVar9 = pTVar5->TypedValue;
        }
        pTVar5 = TAttribute<TOptional<float>_>::Get(&this->MinSliderValue);
        if (pTVar5->bIsSet != false) {
          fVar16 = pTVar5->TypedValue;
        }
        dVar15 = (double)fVar16 * __real_3fe0000000000000;
        pfVar6 = TAttribute<float>::Get(&this->SliderExponentNeutralValue);
        dVar15 = ((double)(*pfVar6 * __real_3f000000) - dVar15) /
                 ((double)fVar9 * __real_3fe0000000000000 - dVar15);
        if (__real_3ff0000000000000 <= dVar15) {
          dVar15 = __real_3ff0000000000000;
        }
        if (dVar15 <= 0.0) {
          dVar15 = 0.0;
        }
        fVar11 = SpinBoxComputeExponentSliderFraction(fVar11,(float)dVar15,fVar17 / fVar1);
      }
      else {
        fVar11 = powf(fVar17 - fVar11,fVar17 / fVar1);
        fVar11 = fVar17 - fVar11;
      }
    }
    fVar9 = GetMaxSliderValue(this);
    fVar16 = GetMinSliderValue(this);
    uVar26 = SUB84(__real_47efffffe0000000,0);
    uVar27 = (uint)((ulonglong)__real_47efffffe0000000 >> 0x20);
    dVar15 = (double)fVar16 * (double)(fVar17 - fVar11) + (double)fVar11 * (double)fVar9;
  }
  else {
    uVar20 = SUB84(__real_3ff0000000000000,0);
    uVar21 = (uint)((ulonglong)__real_3ff0000000000000 >> 0x20);
    uVar23 = uVar20;
    uVar24 = uVar21;
    if (fVar22 == 0.0) {
      uVar23 = (uint)__real_bff0000000000000;
      uVar24 = (uint)((ulonglong)__real_bff0000000000000 >> 0x20);
    }
    if (((((this->LinearDeltaSensitivity).bIsSet == false) ||
         (piVar7 = TAttribute<int>::Get(&this->LinearDeltaSensitivity), *piVar7 == 0)) ||
        ((this->Delta).bIsSet == false)) ||
       (pfVar6 = TAttribute<float>::Get(&this->Delta), *pfVar6 <= 0.0)) {
      uVar18 = SUB84(this->InternalValue,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar19 = (uint)((ulonglong)this->InternalValue >> 0x20) &
               __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      if (dVar2 <= (double)CONCAT44(uVar19,uVar18)) {
        uVar18 = uVar26;
        uVar19 = uVar27;
      }
      if ((double)CONCAT44(uVar19,uVar18) <= dVar14) {
        uVar18 = uVar20;
        uVar19 = uVar21;
      }
      pfVar6 = TAttribute<float>::Get(&this->SliderExponent);
      fVar9 = (float)((uint)(fVar22 / fVar25) & __xmm_7fffffff7fffffff7fffffff7fffffff);
      dVar14 = pow((double)CONCAT44(uVar19,uVar18),(double)*pfVar6);
      dVar15 = (double)fVar9 * (double)CONCAT44(uVar24,uVar23) * dVar14 * dVar15;
    }
    else {
      piVar7 = TAttribute<int>::Get(&this->LinearDeltaSensitivity);
      fVar16 = (float)((uint)(fVar22 / (float)*piVar7) & __xmm_7fffffff7fffffff7fffffff7fffffff);
      pfVar6 = TAttribute<float>::Get(&this->SliderExponent);
      fVar9 = *pfVar6;
      pfVar6 = TAttribute<float>::Get(&this->Delta);
      dVar14 = pow((double)*pfVar6,(double)fVar9);
      dVar15 = dVar14 * dVar15 * (double)fVar16 * (double)CONCAT44(uVar24,uVar23);
    }
    dVar15 = dVar15 + this->InternalValue;
  }
  dVar14 = dVar15;
  if ((double)CONCAT44(uVar27,uVar26) <= dVar15) {
    dVar14 = (double)CONCAT44(uVar27,uVar26);
  }
  if (dVar14 <= __real_c7efffffe0000000) {
    dVar14 = __real_c7efffffe0000000;
  }
  CommitValue(this,(float)dVar14,dVar15,EVar8,OnEnter);
LAB_14d879051:
  FReply::FReply(__return_storage_ptr__,true);
  return __return_storage_ptr__;
}

// OnPaint @ 14d879ab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
UE::ColorGrading::SColorGradingComponentSpinBox::OnPaint
          (SColorGradingComponentSpinBox *this,FPaintArgs *param_1,FGeometry *param_2,
          FSlateRect *param_3,FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,
          bool param_7)

{
  float fVar1;
  ESlateColorStylingMode EVar2;
  FSlateBrush *pFVar3;
  code *pcVar4;
  double dVar5;
  float fVar6;
  ForAnyElementType _Src;
  ESlateDrawEffect EVar7;
  undefined8 uVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  float *pfVar13;
  TOptional<float> *pTVar14;
  FSlateColor *pFVar15;
  ulonglong uVar16;
  uint uVar17;
  longlong lVar18;
  ulonglong uVar19;
  double dVar20;
  double dVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auStackY_298 [32];
  undefined8 local_248;
  int local_240;
  int local_23c;
  int local_238;
  float local_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  undefined8 local_218;
  int local_210;
  int local_20c;
  undefined8 local_208;
  FSlateBrush *local_200;
  float local_1f8;
  float fStack_1f4;
  FSlateWindowElementList *local_1f0;
  float local_1e8;
  float fStack_1e4;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> local_1d0;
  FLinearColor_u_0 local_1c0;
  FLinearColor_u_0 local_1b0;
  TVector2<float>_u_0_s_0 local_19c;
  undefined8 local_180;
  TVector2<float>_u_0 local_178;
  float local_170;
  undefined8 local_16c;
  FScriptContainerElement *local_164;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  undefined8 local_14c;
  byte local_144;
  TVector2<float>_u_0 local_140;
  float local_138;
  undefined8 local_134;
  FDeprecateSlateVector2D local_12c;
  float local_124 [2];
  float afStack_11c [2];
  TVector2<float>_u_0 local_114;
  byte local_10c;
  TVector2<float>_u_0 local_108;
  float local_100;
  undefined8 local_fc;
  FDeprecateSlateVector2D local_f4;
  float local_ec [2];
  float afStack_e4 [2];
  TVector2<float>_u_0 local_dc;
  byte local_d4;
  ulonglong local_d0;
  
  local_d0 = __security_cookie.value ^ (ulonglong)auStackY_298;
  uVar17 = 0;
  local_1f0 = param_4;
  if ((!param_7) || (iVar11 = 1, *(char *)((longlong)&this->_padding_ + 2) == '\0')) {
    iVar11 = 0;
  }
  local_238 = 0x20;
  if (iVar11 != 0) {
    local_238 = 0;
  }
  if (this->bDragging == false) {
    if ((*(char *)((longlong)&this->_padding_ + 3) == '\0') || (this->bAllowSpin == false)) {
      local_200 = this->BorderBrush;
    }
    else {
      local_200 = this->BorderHoveredBrush;
    }
  }
  else {
    local_200 = this->BorderActiveBrush;
  }
  GetGradientColors(this,&local_1d0);
  fVar1 = __real_3f800000;
  uVar16 = (ulonglong)local_1d0.ArrayNum;
  if (1 < local_1d0.ArrayNum) {
    local_248 = (FScriptContainerElement *)0x0;
    local_240 = 0;
    local_23c = 0;
    if (0 < local_1d0.ArrayNum) {
      lVar18 = 0;
      fVar22 = __real_3f800000 / (float)(int)(local_1d0.ArrayNum - 1);
      uVar19 = uVar16;
      while( true ) {
        uVar10 = 0;
        if ((int)uVar17 < (int)uVar16) {
          uVar10 = ~uVar17 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          iVar11 = (*pcVar4)();
          return iVar11;
        }
        local_208 = param_2->Size;
        uStack_1e0 = *(undefined8 *)(local_1d0.AllocatorInstance.Data + lVar18);
        uStack_1d8 = *(undefined8 *)(local_1d0.AllocatorInstance.Data + lVar18 + 8);
        fStack_1e4 = (float)(int)uVar17 * fVar22;
        local_1e8 = (float)local_208 * fStack_1e4;
        fStack_1e4 = local_208._4_4_ * fStack_1e4;
        if (((local_248 <= (FScriptContainerElement *)&local_1e8) &&
            ((FScriptContainerElement *)&local_1e8 < local_248 + (longlong)local_23c * 0x18)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar4 = (code *)swi(3);
          iVar11 = (*pcVar4)();
          return iVar11;
        }
        if (local_240 == local_23c) {
          local_240 = Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x418,(ForAnyElementType *)&local_248,&local_23c);
        }
        lVar12 = (longlong)local_240;
        local_240 = local_240 + 1;
        uVar17 = uVar17 + 1;
        lVar18 = lVar18 + 0x10;
        *(ulonglong *)(local_248 + lVar12 * 0x18) = CONCAT44(fStack_1e4,local_1e8);
        *(undefined8 *)(local_248 + lVar12 * 0x18 + 8) = uStack_1e0;
        *(undefined8 *)(local_248 + lVar12 * 0x18 + 0x10) = uStack_1d8;
        uVar19 = uVar19 - 1;
        if (uVar19 == 0) break;
        uVar16 = (ulonglong)(uint)local_1d0.ArrayNum;
      }
    }
    iVar11 = local_240;
    _Src.Data = local_248;
    pFVar3 = this->BorderBrush;
    EVar7 = (ESlateDrawEffect)local_238;
    fStack_224 = (float)(pFVar3->OutlineSettings).CornerRadii.field0_0x0._s_0.Y;
    local_228 = (float)(pFVar3->OutlineSettings).CornerRadii.field0_0x0._s_0.X;
    local_218 = (TVector2<float>_u_0)0x0;
    fStack_21c = (float)(pFVar3->OutlineSettings).CornerRadii.field0_0x0._s_0.W;
    fStack_220 = (float)(pFVar3->OutlineSettings).CornerRadii.field0_0x0._s_0.Z;
    local_210 = local_240;
    if (local_240 == 0) {
      local_20c = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,4,local_240,0,(ForAnyElementType *)&local_218,local_240,&local_20c);
      memcpy((void *)local_218,_Src.Data,(longlong)iVar11 * 0x18);
    }
    local_140 = (param_2->AbsolutePosition).field0_0x0;
    local_138 = param_2->Scale;
    local_114 = (param_2->AccumulatedRenderTransform).Trans.field0_0x0;
    local_12c = param_2->Size;
    uVar17 = param_5 + 1;
    local_124 = (param_2->AccumulatedRenderTransform).M.M[0];
    afStack_11c = (param_2->AccumulatedRenderTransform).M.M[1];
    local_10c = param_2->bHasRenderTransform * '\x02' | local_10c & 0xfc;
    local_134 = 0;
    FSlateDrawElement::MakeGradient
              (local_1f0,param_5,(FPaintGeometry *)&local_140._s_0,
               (TArray<FSlateGradientStop,TSizedDefaultAllocator<32>_> *)&local_218,Orient_Vertical,
               EVar7 | NoGamma,(TVector4<float> *)&local_228);
    param_5 = uVar17;
    if (local_248 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_248);
    }
  }
  if (local_1d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d0.AllocatorInstance.Data);
  }
  if (this->bAllowSpin == false) goto LAB_14d87a313;
  local_208._0_4_ = (float)param_5;
  pfVar13 = TAttribute<float>::Get(&this->ValueAttribute);
  fVar22 = *pfVar13;
  pTVar14 = TAttribute<TOptional<float>_>::Get(&this->MaxSliderValue);
  fVar23 = __real_7f7fffff;
  fVar24 = __real_7f7fffff;
  if (pTVar14->bIsSet != false) {
    fVar24 = pTVar14->TypedValue;
  }
  pTVar14 = TAttribute<TOptional<float>_>::Get(&this->MinSliderValue);
  fVar26 = __real_ff7fffff;
  fVar6 = __real_3f000000;
  dVar21 = __real_3fe0000000000000;
  dVar5 = __real_3ff0000000000000;
  fVar25 = __real_ff7fffff;
  if (pTVar14->bIsSet != false) {
    fVar25 = pTVar14->TypedValue;
  }
  dVar20 = ((double)(fVar22 * __real_3f000000) - (double)fVar25 * __real_3fe0000000000000) /
           ((double)fVar24 * __real_3fe0000000000000 - (double)fVar25 * __real_3fe0000000000000);
  if (__real_3ff0000000000000 <= dVar20) {
    dVar20 = __real_3ff0000000000000;
  }
  if (dVar20 <= 0.0) {
    dVar20 = 0.0;
  }
  fVar24 = (float)dVar20;
  pfVar13 = TAttribute<float>::Get(&this->SliderExponent);
  fVar22 = *pfVar13;
  if (__real_322bcc77 < (float)((uint)(fVar22 - fVar1) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    if ((this->SliderExponentNeutralValue).bIsSet != false) {
      pTVar14 = TAttribute<TOptional<float>_>::Get(&this->MinSliderValue);
      fVar25 = fVar26;
      if (pTVar14->bIsSet != false) {
        fVar25 = pTVar14->TypedValue;
      }
      pfVar13 = TAttribute<float>::Get(&this->SliderExponentNeutralValue);
      if (fVar25 < *pfVar13) {
        pTVar14 = TAttribute<TOptional<float>_>::Get(&this->MaxSliderValue);
        fVar25 = fVar23;
        if (pTVar14->bIsSet != false) {
          fVar25 = pTVar14->TypedValue;
        }
        pfVar13 = TAttribute<float>::Get(&this->SliderExponentNeutralValue);
        if (*pfVar13 <= fVar25 && fVar25 != *pfVar13) {
          pTVar14 = TAttribute<TOptional<float>_>::Get(&this->MaxSliderValue);
          if (pTVar14->bIsSet != false) {
            fVar23 = pTVar14->TypedValue;
          }
          pTVar14 = TAttribute<TOptional<float>_>::Get(&this->MinSliderValue);
          if (pTVar14->bIsSet != false) {
            fVar26 = pTVar14->TypedValue;
          }
          dVar20 = (double)fVar26 * dVar21;
          pfVar13 = TAttribute<float>::Get(&this->SliderExponentNeutralValue);
          dVar21 = ((double)(*pfVar13 * fVar6) - dVar20) / ((double)fVar23 * dVar21 - dVar20);
          if (dVar5 <= dVar21) {
            dVar21 = dVar5;
          }
          if (dVar21 <= 0.0) {
            dVar21 = 0.0;
          }
          fVar24 = SpinBoxComputeExponentSliderFraction(fVar24,(float)dVar21,fVar22);
          goto LAB_14d87a0d1;
        }
      }
    }
    fVar24 = powf(fVar1 - fVar24,fVar22);
    fVar24 = fVar1 - fVar24;
  }
LAB_14d87a0d1:
  local_228 = SUB84(param_2->Size,0);
  fStack_224 = SUB84(param_2->Size,4);
  fVar22 = fStack_224;
  fVar1 = (this->BorderBrush->OutlineSettings).Width;
  EVar2 = (this->SelectorBrush->TintColor).ColorUseRule;
  pFVar15 = &this->SelectorBrush->TintColor;
  fStack_224 = 1.0;
  local_228 = (local_228 - *this->SelectorWidth) * fVar24;
  local_248._4_4_ = fVar22 - (fVar1 + fVar1);
  local_248._0_4_ = *this->SelectorWidth;
  if (EVar2 != UseColor_Specified) {
    if (EVar2 == UseColor_ColorTable) {
      pFVar15 = (FSlateColor *)FSlateColor::GetColorFromTable(pFVar15);
    }
    else if ((EVar2 == UseColor_Foreground) || (EVar2 != UseColor_Foreground_Subdued)) {
      pFVar15 = (FSlateColor *)&param_6->ForegroundColor;
    }
    else {
      pFVar15 = (FSlateColor *)&param_6->SubduedForeground;
    }
  }
  local_19c = (param_2->AbsolutePosition).field0_0x0._s_0;
  local_170 = param_2->Scale;
  local_154 = (param_2->AccumulatedRenderTransform).M.M[1][0];
  local_15c = (param_2->AccumulatedRenderTransform).M.M[0][0];
  local_158 = (param_2->AccumulatedRenderTransform).M.M[0][1];
  local_1c0._s_0.R =
       (pFVar15->SpecifiedColor).field0_0x0._s_0.R *
       (param_6->ColorAndOpacityTint).field0_0x0._s_0.R;
  local_150 = (param_2->AccumulatedRenderTransform).M.M[1][1];
  local_180 = _local_228;
  uVar8 = local_180;
  local_16c = 0;
  local_180._4_4_ = (float)((ulonglong)_local_228 >> 0x20);
  local_1c0._s_0.G =
       (pFVar15->SpecifiedColor).field0_0x0._s_0.G *
       (param_6->ColorAndOpacityTint).field0_0x0._s_0.G;
  local_1c0._s_0.B =
       (pFVar15->SpecifiedColor).field0_0x0._s_0.B *
       (param_6->ColorAndOpacityTint).field0_0x0._s_0.B;
  local_1c0._s_0.A =
       (pFVar15->SpecifiedColor).field0_0x0._s_0.A *
       (param_6->ColorAndOpacityTint).field0_0x0._s_0.A;
  local_218._4_4_ = local_180._4_4_ * local_170 + local_19c.Y;
  local_218._0_4_ = local_228 * local_170 + local_19c.X;
  local_178 = local_218;
  local_164 = local_248;
  local_1f8 = local_228 * local_15c + local_180._4_4_ * local_154 +
              (param_2->AccumulatedRenderTransform).Trans.field0_0x0._s_0.X;
  fStack_1f4 = local_180._4_4_ * local_150 + local_228 * local_158 +
               (param_2->AccumulatedRenderTransform).Trans.field0_0x0._s_0.Y;
  local_14c = CONCAT44(fStack_1f4,local_1f8);
  local_144 = param_2->bHasRenderTransform * '\x02' | local_144 & 0xfc;
  local_180 = uVar8;
  FSlateDrawElement::MakeBox
            (local_1f0,(uint)(longlong)(float)local_208,(FPaintGeometry *)&local_178._s_0,
             this->SelectorBrush,(ESlateDrawEffect)local_238,(FLinearColor *)&local_1c0._s_0);
  param_5 = param_5 + 1;
LAB_14d87a313:
  EVar2 = (local_200->TintColor).ColorUseRule;
  pFVar15 = &local_200->TintColor;
  if (EVar2 != UseColor_Specified) {
    if (EVar2 == UseColor_ColorTable) {
      pFVar15 = (FSlateColor *)FSlateColor::GetColorFromTable(pFVar15);
    }
    else if ((EVar2 == UseColor_Foreground) || (EVar2 != UseColor_Foreground_Subdued)) {
      pFVar15 = (FSlateColor *)&param_6->ForegroundColor;
    }
    else {
      pFVar15 = (FSlateColor *)&param_6->SubduedForeground;
    }
  }
  local_108 = (param_2->AbsolutePosition).field0_0x0;
  local_1b0._s_0.R =
       (pFVar15->SpecifiedColor).field0_0x0._s_0.R *
       (param_6->ColorAndOpacityTint).field0_0x0._s_0.R;
  local_f4 = param_2->Size;
  local_1b0._s_0.G =
       (pFVar15->SpecifiedColor).field0_0x0._s_0.G *
       (param_6->ColorAndOpacityTint).field0_0x0._s_0.G;
  local_1b0._s_0.B =
       (pFVar15->SpecifiedColor).field0_0x0._s_0.B *
       (param_6->ColorAndOpacityTint).field0_0x0._s_0.B;
  local_d4 = param_2->bHasRenderTransform * '\x02' | local_d4 & 0xfc;
  local_1b0._s_0.A =
       (pFVar15->SpecifiedColor).field0_0x0._s_0.A *
       (param_6->ColorAndOpacityTint).field0_0x0._s_0.A;
  local_100 = param_2->Scale;
  local_ec = (param_2->AccumulatedRenderTransform).M.M[0];
  afStack_e4 = (param_2->AccumulatedRenderTransform).M.M[1];
  local_fc = 0;
  local_dc = (param_2->AccumulatedRenderTransform).Trans.field0_0x0;
  FSlateDrawElement::MakeBox
            (local_1f0,param_5,(FPaintGeometry *)&local_108._s_0,local_200,
             (ESlateDrawEffect)local_238,(FLinearColor *)&local_1b0._s_0);
  return param_5 + 1;
}

// RoundIfIntegerValue @ 14d885460

float __thiscall
UE::ColorGrading::SColorGradingComponentSpinBox::RoundIfIntegerValue
          (SColorGradingComponentSpinBox *this,double param_1)

{
  if (__real_47efffffe0000000 <= param_1) {
    param_1 = __real_47efffffe0000000;
  }
  if (param_1 <= __real_c7efffffe0000000) {
    param_1 = __real_c7efffffe0000000;
  }
  return (float)param_1;
}

// UpdateIsSpinRangeUnlimited @ 14d88bf20

void __thiscall
UE::ColorGrading::SColorGradingComponentSpinBox::UpdateIsSpinRangeUnlimited
          (SColorGradingComponentSpinBox *this)

{
  TOptional<float> *pTVar1;
  
  pTVar1 = TAttribute<TOptional<float>_>::Get(&this->MinValue);
  if (pTVar1->bIsSet != false) {
    pTVar1 = TAttribute<TOptional<float>_>::Get(&this->MaxValue);
    if (pTVar1->bIsSet != false) goto LAB_14d88bf71;
  }
  pTVar1 = TAttribute<TOptional<float>_>::Get(&this->MinSliderValue);
  if (pTVar1->bIsSet != false) {
    pTVar1 = TAttribute<TOptional<float>_>::Get(&this->MaxSliderValue);
    if (pTVar1->bIsSet != false) {
LAB_14d88bf71:
      this->bUnlimitedSpinRange = false;
      return;
    }
  }
  this->bUnlimitedSpinRange = true;
  return;
}

