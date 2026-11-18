// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AdvancedWidgets
// Functions: 52

// SRadialSlider @ 14d837630

SRadialSlider * __thiscall SRadialSlider::SRadialSlider(SRadialSlider *this)

{
  byte *pbVar1;
  
  SLeafWidget::SLeafWidget((SLeafWidget *)this);
  this->_padding_ = (longlong)&___7SRadialSlider__6B_;
  (this->LockedAttribute).Value = false;
  (this->LockedAttribute).bIsSet = false;
  *(undefined8 *)&(this->LockedAttribute).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->LockedAttribute).Getter = 0;
  *(undefined8 *)&(this->SliderBarColor).Value.SpecifiedColor.field0_0x0 = 0x3f800000;
  (this->SliderBarColor).Value.SpecifiedColor.field0_0x0._s_0.B = 1.0;
  (this->SliderBarColor).Value.SpecifiedColor.field0_0x0._s_0.A = 1.0;
  *(undefined8 *)&(this->LockedAttribute).Getter.field_0x8 = 0;
  (this->SliderBarColor).Value.ColorUseRule = UseColor_Specified;
  (this->SliderBarColor).bIsSet = false;
  *(undefined8 *)&(this->SliderBarColor).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->SliderBarColor).Getter = 0;
  *(undefined8 *)&(this->SliderProgressColor).Value.SpecifiedColor.field0_0x0 = 0x3f800000;
  (this->SliderProgressColor).Value.SpecifiedColor.field0_0x0._s_0.B = 1.0;
  (this->SliderProgressColor).Value.SpecifiedColor.field0_0x0._s_0.A = 1.0;
  *(undefined8 *)&(this->SliderBarColor).Getter.field_0x8 = 0;
  (this->SliderProgressColor).Value.ColorUseRule = UseColor_Specified;
  (this->SliderProgressColor).bIsSet = false;
  *(undefined8 *)&(this->SliderProgressColor).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->SliderProgressColor).Getter = 0;
  *(undefined8 *)&(this->SliderProgressColor).Getter.field_0x8 = 0;
  (this->SliderHandleColor).Value.ColorUseRule = UseColor_Specified;
  (this->SliderHandleColor).bIsSet = false;
  *(undefined8 *)&(this->SliderHandleColor).Value.SpecifiedColor.field0_0x0 = 0x3f800000;
  (this->SliderHandleColor).Value.SpecifiedColor.field0_0x0._s_0.B = 1.0;
  (this->SliderHandleColor).Value.SpecifiedColor.field0_0x0._s_0.A = 1.0;
  *(undefined8 *)&(this->SliderHandleColor).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->SliderHandleColor).Getter = 0;
  *(undefined8 *)&(this->SliderHandleColor).Getter.field_0x8 = 0;
  (this->CenterBackgroundColor).Value.ColorUseRule = UseColor_Specified;
  (this->CenterBackgroundColor).bIsSet = false;
  *(undefined8 *)&(this->CenterBackgroundColor).Value.SpecifiedColor.field0_0x0 = 0x3f800000;
  (this->CenterBackgroundColor).Value.SpecifiedColor.field0_0x0._s_0.B = 1.0;
  (this->CenterBackgroundColor).Value.SpecifiedColor.field0_0x0._s_0.A = 1.0;
  *(undefined8 *)&(this->CenterBackgroundColor).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->CenterBackgroundColor).Getter = 0;
  *(undefined8 *)&(this->CenterBackgroundColor).Getter.field_0x8 = 0;
  FSlateBrush::FSlateBrush(&this->CenterBackgroundBrush);
  (this->Thickness).Value.bIsSet = false;
  (this->Thickness).bIsSet = false;
  *(undefined8 *)&(this->Thickness).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->Thickness).Getter = 0;
  *(undefined8 *)&(this->Thickness).Getter.field_0x8 = 0;
  (this->ValueAttribute).Value = 0.0;
  (this->ValueAttribute).bIsSet = false;
  *(undefined8 *)&(this->ValueAttribute).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->ValueAttribute).Getter = 0;
  *(undefined8 *)&(this->ValueAttribute).Getter.field_0x8 = 0;
  (this->bUseCustomDefaultValue).Value = false;
  (this->bUseCustomDefaultValue).bIsSet = false;
  *(undefined8 *)&(this->bUseCustomDefaultValue).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->bUseCustomDefaultValue).Getter = 0;
  *(undefined8 *)&(this->bUseCustomDefaultValue).Getter.field_0x8 = 0;
  (this->CustomDefaultValue).Value = 0.0;
  (this->CustomDefaultValue).bIsSet = false;
  *(undefined8 *)&(this->CustomDefaultValue).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->CustomDefaultValue).Getter = 0;
  *(undefined8 *)&(this->CustomDefaultValue).Getter.field_0x8 = 0;
  (this->StepSize).Value = 0.0;
  (this->StepSize).bIsSet = false;
  (this->PressedScreenSpaceTouchDownPosition).field0_0x0._s_0.X = 0.0;
  (this->PressedScreenSpaceTouchDownPosition).field0_0x0._s_0.Y = 0.0;
  *(undefined8 *)&(this->StepSize).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->StepSize).Getter = 0;
  *(undefined8 *)&(this->StepSize).Getter.field_0x8 = 0;
  (this->ValueTags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ValueTags).ArrayNum = 0;
  (this->ValueTags).ArrayMax = 0;
  FRuntimeFloatCurve::FRuntimeFloatCurve(&this->SliderRange);
  *(undefined8 *)&this->OnMouseCaptureBegin = 0;
  *(undefined8 *)&(this->OnMouseCaptureBegin).field_0x8 = 0;
  *(undefined4 *)&(this->OnMouseCaptureBegin).field_0x10 = 0;
  *(undefined8 *)&this->OnMouseCaptureEnd = 0;
  *(undefined8 *)&(this->OnMouseCaptureEnd).field_0x8 = 0;
  *(undefined4 *)&(this->OnMouseCaptureEnd).field_0x10 = 0;
  *(undefined8 *)&this->OnControllerCaptureBegin = 0;
  *(undefined8 *)&(this->OnControllerCaptureBegin).field_0x8 = 0;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 & 0xfb;
  *(undefined4 *)&(this->OnControllerCaptureBegin).field_0x10 = 0;
  *(undefined8 *)&this->OnControllerCaptureEnd = 0;
  *(undefined8 *)&(this->OnControllerCaptureEnd).field_0x8 = 0;
  *(undefined4 *)&(this->OnControllerCaptureEnd).field_0x10 = 0;
  *(undefined8 *)&this->OnValueChanged = 0;
  *(undefined8 *)&(this->OnValueChanged).field_0x8 = 0;
  *(undefined4 *)&(this->OnValueChanged).field_0x10 = 0;
  (this->FineTuneKey).KeyName.ComparisonIndex = 0;
  (this->FineTuneKey).KeyName.Number = 0;
  (this->FineTuneKey).KeyDetails.Object = (FKeyDetails *)0x0;
  (this->FineTuneKey).KeyDetails.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->VerticalDragMouseSpeedNormal = 0.2;
  this->VerticalDragMouseSpeedFineTune = 0.05;
  this->VerticalDragPixelDelta = 50.0;
  *(undefined1 *)((longlong)&this->_padding_ + 3) = 2;
  return this;
}

// ~SRadialSlider @ 14d83b570

void __thiscall SRadialSlider::~SRadialSlider(SRadialSlider *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  this->_padding_ = (longlong)&___7SRadialSlider__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->FineTuneKey).KeyDetails.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnValueChanged);
  pvVar1 = *(void **)&(this->OnValueChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnValueChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnControllerCaptureEnd);
  pvVar1 = *(void **)&(this->OnControllerCaptureEnd).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnControllerCaptureEnd);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnControllerCaptureBegin);
  pvVar1 = *(void **)&(this->OnControllerCaptureBegin).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnControllerCaptureBegin);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnMouseCaptureEnd);
  pvVar1 = *(void **)&(this->OnMouseCaptureEnd).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnMouseCaptureEnd);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnMouseCaptureBegin);
  pvVar1 = *(void **)&(this->OnMouseCaptureBegin).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnMouseCaptureBegin);
  pFVar2 = (this->SliderRange).EditorCurveData.Keys.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  (this->SliderRange).EditorCurveData._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar1 = (void *)(this->SliderRange).EditorCurveData._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined4 *)&(this->SliderRange).EditorCurveData._padding_ = 0;
  pvVar1 = (void *)(this->SliderRange).EditorCurveData._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->SliderRange).EditorCurveData._padding_);
  pFVar2 = (this->ValueTags).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->StepSize).Getter);
  pvVar1 = *(void **)&(this->StepSize).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->StepSize).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->CustomDefaultValue).Getter);
  pvVar1 = *(void **)&(this->CustomDefaultValue).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->CustomDefaultValue).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->bUseCustomDefaultValue).Getter);
  pvVar1 = *(void **)&(this->bUseCustomDefaultValue).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->bUseCustomDefaultValue).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ValueAttribute).Getter);
  pvVar1 = *(void **)&(this->ValueAttribute).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ValueAttribute).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Thickness).Getter);
  pvVar1 = *(void **)&(this->Thickness).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->Thickness).Getter);
  pTVar3 = (this->CenterBackgroundBrush).ResourceHandle.Data.SharedReferenceCount.
           ReferenceController;
  (this->CenterBackgroundBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->CenterBackgroundColor).Getter);
  pvVar1 = *(void **)&(this->CenterBackgroundColor).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->CenterBackgroundColor).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->SliderHandleColor).Getter);
  pvVar1 = *(void **)&(this->SliderHandleColor).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->SliderHandleColor).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->SliderProgressColor).Getter);
  pvVar1 = *(void **)&(this->SliderProgressColor).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->SliderProgressColor).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->SliderBarColor).Getter);
  pvVar1 = *(void **)&(this->SliderBarColor).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->SliderBarColor).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->LockedAttribute).Getter);
  pvVar1 = *(void **)&(this->LockedAttribute).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->LockedAttribute).Getter);
  SLeafWidget::~SLeafWidget((SLeafWidget *)this);
  return;
}

// AddSliderPointToArray @ 14d842290

void __thiscall
SRadialSlider::AddSliderPointToArray
          (SRadialSlider *this,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_1,bool param_2,
          TVector2<double> *param_3)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  int iVar3;
  
  if (param_2) {
    TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<UE::Math::TVector2<double>_const_&>(param_1,param_3);
    return;
  }
  iVar3 = param_1->ArrayNum;
  if (iVar3 == param_1->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar3 + 1;
  dVar2 = (param_3->field0_0x0)._s_0.Y;
  pFVar1 = (param_1->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(double *)pFVar1 = (param_3->field0_0x0)._s_0.X;
  *(double *)(pFVar1 + 8) = dVar2;
  return;
}

// CommitValue @ 14d843ae0

void __thiscall SRadialSlider::CommitValue(SRadialSlider *this,float param_1)

{
  longlong *plVar1;
  FRichCurve *pFVar2;
  FRichCurveKey *pFVar3;
  float fVar4;
  float fVar5;
  FRichCurveKey local_58 [2];
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ValueAttribute).Getter);
  (this->ValueAttribute).Value = param_1;
  (this->ValueAttribute).bIsSet = true;
  SWidget::Invalidate((SWidget *)this,Paint);
  fVar5 = 0.0;
  fVar4 = 0.0;
  pFVar2 = FRuntimeFloatCurve::GetRichCurveConst(&this->SliderRange);
  if (0 < (pFVar2->Keys).ArrayNum) {
    pFVar3 = FRichCurve::GetLastKey(pFVar2,local_58);
    fVar4 = pFVar3->Value;
  }
  pFVar2 = FRuntimeFloatCurve::GetRichCurveConst(&this->SliderRange);
  if (0 < (pFVar2->Keys).ArrayNum) {
    pFVar3 = FRichCurve::GetFirstKey(pFVar2,local_58);
    fVar5 = pFVar3->Value;
  }
  if (param_1 <= fVar4) {
    fVar4 = param_1;
  }
  if (fVar4 <= fVar5) {
    fVar4 = fVar5;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnValueChanged,
             (FReadAccessScope *)local_58);
  if ((*(int *)&(this->OnValueChanged).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->OnValueChanged).field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))(plVar1,fVar4);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)local_58);
  return;
}

// ComputeDesiredSize @ 14d843ca0

TVector2<double> * __thiscall
SRadialSlider::ComputeDesiredSize
          (SRadialSlider *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  (__return_storage_ptr__->field0_0x0)._s_0.X = 200.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 200.0;
  return __return_storage_ptr__;
}

// Construct @ 14d851230

void __thiscall SRadialSlider::Construct(SRadialSlider *this,FArguments *param_1)

{
  code *pcVar1;
  double dVar2;
  TReferenceControllerBase<1> *pTVar3;
  FKeyDetails *pFVar4;
  FSharedReferencer<1> FVar5;
  bool bVar6;
  
  if (param_1->_Style == (FSliderStyle *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InDeclaration._Style",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdvancedWidgets\\Private\\Slate\\SRadialSlider.cpp"
                       ,0x1b,L"");
    if (bVar6) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->Style = param_1->_Style;
  this->bMouseUsesStep = param_1->_MouseUsesStep;
  this->bRequiresControllerLock = param_1->_RequiresControllerLock;
  (this->LockedAttribute).Value = (param_1->_Locked).Value;
  (this->LockedAttribute).bIsSet = (param_1->_Locked).bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->LockedAttribute).Getter,&(param_1->_Locked).Getter);
  (this->StepSize).Value = (param_1->_StepSize).Value;
  (this->StepSize).bIsSet = (param_1->_StepSize).bIsSet;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->StepSize).Getter,&(param_1->_StepSize).Getter);
  (this->ValueAttribute).Value = (param_1->_Value).Value;
  (this->ValueAttribute).bIsSet = (param_1->_Value).bIsSet;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->ValueAttribute).Getter,&(param_1->_Value).Getter);
  (this->bUseCustomDefaultValue).Value = (param_1->_bUseCustomDefaultValue).Value;
  (this->bUseCustomDefaultValue).bIsSet = (param_1->_bUseCustomDefaultValue).bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->bUseCustomDefaultValue).Getter,&(param_1->_bUseCustomDefaultValue).Getter);
  (this->CustomDefaultValue).Value = (param_1->_CustomDefaultValue).Value;
  (this->CustomDefaultValue).bIsSet = (param_1->_CustomDefaultValue).bIsSet;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->CustomDefaultValue).Getter,&(param_1->_CustomDefaultValue).Getter);
  FRuntimeFloatCurve::operator=(&this->SliderRange,&param_1->_SliderRange);
  this->SliderHandleStartAngle = param_1->_SliderHandleStartAngle;
  this->SliderHandleEndAngle = param_1->_SliderHandleEndAngle;
  this->AngularOffset = param_1->_AngularOffset;
  dVar2 = (param_1->_HandStartEndRatio).field0_0x0._s_0.Y;
  (this->HandStartEndRatio).field0_0x0._s_0.X = (param_1->_HandStartEndRatio).field0_0x0._s_0.X;
  (this->HandStartEndRatio).field0_0x0._s_0.Y = dVar2;
  TAttribute<FSlateColor>::operator=(&this->SliderBarColor,&param_1->_SliderBarColor);
  TAttribute<FSlateColor>::operator=(&this->SliderProgressColor,&param_1->_SliderProgressColor);
  TAttribute<FSlateColor>::operator=(&this->SliderHandleColor,&param_1->_SliderHandleColor);
  TAttribute<FSlateColor>::operator=(&this->CenterBackgroundColor,&param_1->_CenterBackgroundColor);
  FSlateBrush::operator=(&this->CenterBackgroundBrush,&param_1->_CenterBackgroundBrush);
  this->bIsFocusable = param_1->_IsFocusable;
  this->bUseVerticalDrag = param_1->_UseVerticalDrag;
  this->bShowSliderHandle = param_1->_ShowSliderHandle;
  this->bShowSliderHand = param_1->_ShowSliderHand;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            (&this->OnMouseCaptureBegin,&param_1->_OnMouseCaptureBegin);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            (&this->OnMouseCaptureEnd,&param_1->_OnMouseCaptureEnd);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            (&this->OnControllerCaptureBegin,&param_1->_OnControllerCaptureBegin);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            (&this->OnControllerCaptureEnd,&param_1->_OnControllerCaptureEnd);
  TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::operator=
            (&this->OnValueChanged,&param_1->_OnValueChanged);
  this->bControllerInputCaptured = false;
  this->bIsUsingFineTune = false;
  (this->FineTuneKey).KeyName = EKeys::LeftShift.KeyName;
  FVar5 = EKeys::LeftShift.KeyDetails.SharedReferenceCount;
  pFVar4 = EKeys::LeftShift.KeyDetails.Object;
  if (EKeys::LeftShift.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (EKeys::LeftShift.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(EKeys::LeftShift.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->FineTuneKey).KeyDetails.SharedReferenceCount.ReferenceController;
  (this->FineTuneKey).KeyDetails.Object = pFVar4;
  (this->FineTuneKey).KeyDetails.SharedReferenceCount.ReferenceController =
       FVar5.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// CreateAccessibleWidget @ 14d853ae0

TSharedRef<FSlateAccessibleWidget,1> * __thiscall
SRadialSlider::CreateAccessibleWidget
          (SRadialSlider *this,TSharedRef<FSlateAccessibleWidget,1> *__return_storage_ptr__)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code *pcVar3;
  bool bVar4;
  FSlateAccessibleWidget *this_00;
  TSharedRef<SWidget,1> *pTVar5;
  TSharedRef<FSlateAccessibleWidget,1> *pTVar6;
  bool bVar7;
  TRawPtrProxy<FSlateAccessibleWidget> TVar8;
  TRawPtrProxy<FSlateAccessibleWidget> local_res10;
  TWeakPtr<SWidget,1> local_28;
  TSharedRef<SWidget,1> local_18;
  
  bVar7 = false;
  local_res10.Object = local_res10.Object & 0xffffffff00000000;
  this_00 = ::operator_new(0x70);
  if (this_00 == (FSlateAccessibleWidget *)0x0) {
    this_00 = (FSlateAccessibleWidget *)0x0;
    TVar8.Object = local_res10.Object;
  }
  else {
    pTVar5 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_18);
    TVar8.Object = (FSlateAccessibleWidget *)(pTVar5->SharedReferenceCount).ReferenceController;
    local_28.Object = pTVar5->Object;
    local_28.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)TVar8.Object;
    if (TVar8.Object == (FSlateAccessibleWidget *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
      FSlateAccessibleWidget::FSlateAccessibleWidget(this_00,&local_28,Slider);
      this_00->_padding_ =
           (longlong)&FSlateAccessibleSlider::_vftable__for__FSlateAccessibleWidget__;
      this_00[1]._padding_ = (longlong)&FSlateAccessibleSlider::_vftable__for__IAccessibleProperty__
      ;
    }
    else {
      LOCK();
      *(atomic<int> *)&(TVar8.Object)->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&(TVar8.Object)->_padding_ + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
      LOCK();
      ((atomic<int> *)&(TVar8.Object)->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&(TVar8.Object)->_padding_)[1] + 1);
      UNLOCK();
      LOCK();
      ((atomic<int> *)&(TVar8.Object)->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&(TVar8.Object)->_padding_)[1] + 1);
      UNLOCK();
      FSlateAccessibleWidget::FSlateAccessibleWidget(this_00,&local_28,Slider);
      this_00->_padding_ =
           (longlong)&FSlateAccessibleSlider::_vftable__for__FSlateAccessibleWidget__;
      this_00[1]._padding_ = (longlong)&FSlateAccessibleSlider::_vftable__for__IAccessibleProperty__
      ;
      LOCK();
      paVar1 = (atomic<int> *)&(TVar8.Object)->_padding_ + 1;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((TVar8.Object)->_padding_ + 8))(TVar8.Object,1);
      }
    }
    bVar7 = true;
    if (((this_00->_padding_ != 0) && (this_00->_padding_ != 0)) &&
       (0 < *(int *)(this_00->_padding_ + 8))) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InObject || !InObject->DoesSharedInstanceExist()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x7a5,L"Trying to share an already-shared object");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TSharedRef<FSlateAccessibleWidget,1> *)(*pcVar3)();
        return pTVar6;
      }
    }
  }
  local_res10.Object = this_00;
  TSharedRef<FSlateAccessibleWidget,1>::TSharedRef<FSlateAccessibleWidget,1><FSlateAccessibleWidget>
            (__return_storage_ptr__,&local_res10);
  if (bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)TVar8.Object);
  }
  return __return_storage_ptr__;
}

// GetAngleFromPosition @ 14d8659f0

float __thiscall
SRadialSlider::GetAngleFromPosition
          (SRadialSlider *this,FGeometry *param_1,TVector2<double> *param_2)

{
  double dVar1;
  TTransform2<float> *pTVar2;
  float fVar3;
  double extraout_XMM0_Qa;
  double dVar4;
  double extraout_XMM0_Qb;
  float fVar5;
  double dVar6;
  float local_48;
  float fStack_44;
  TTransform2<float> local_40 [2];
  
  local_48 = SUB84(param_1->Size,0);
  local_48 = local_48 * __real_3f000000;
  fVar5 = (float)(param_2->field0_0x0)._s_0.Y;
  fStack_44 = SUB84(param_1->Size,4);
  fStack_44 = fStack_44 * __real_3f000000;
  fVar3 = (float)(param_2->field0_0x0)._s_0.X;
  pTVar2 = Inverse<TTransform2<float>_>(local_40,&param_1->AccumulatedRenderTransform);
  dVar1 = (double)((fVar5 * (pTVar2->M).M[1][0] + fVar3 * (pTVar2->M).M[0][0] +
                   (pTVar2->Trans).field0_0x0._s_0.X) - local_48);
  dVar4 = (double)((fVar3 * (pTVar2->M).M[0][1] + fVar5 * (pTVar2->M).M[1][1] +
                   (pTVar2->Trans).field0_0x0._s_0.Y) - fStack_44);
  dVar6 = dVar4 * dVar4 + dVar1 * dVar1;
  if (dVar6 <= __real_3e45798ee0000000) {
    dVar4 = 0.0;
    dVar1 = 0.0;
  }
  else {
    dVar6 = __real_3ff0000000000000 / SQRT(dVar6);
    dVar4 = dVar4 * dVar6;
    dVar1 = dVar1 * dVar6;
  }
  __libm_sse2_sincos_();
  dVar4 = FGenericPlatformMath::Atan2
                    (extraout_XMM0_Qa * dVar1 + extraout_XMM0_Qb * dVar4,
                     extraout_XMM0_Qb * dVar1 - extraout_XMM0_Qa * dVar4);
  return (float)(dVar4 * __real_404ca5dc0d03cf26 + __real_4066800000000000);
}

// GetBarImage @ 14d865bc0

FSlateBrush * __thiscall SRadialSlider::GetBarImage(SRadialSlider *this)

{
  bool *pbVar1;
  FSlateBrush *pFVar2;
  
  if (*(char *)((longlong)&this->_padding_ + 2) != '\0') {
    pbVar1 = TAttribute<bool>::Get(&this->LockedAttribute);
    if (*pbVar1 == false) {
      pFVar2 = &this->Style->NormalBarImage;
      if (*(char *)((longlong)&this->_padding_ + 3) != '\0') {
        pFVar2 = &this->Style->HoveredBarImage;
      }
      return pFVar2;
    }
  }
  return &this->Style->DisabledBarImage;
}

// GetCustomDefaultValue @ 14d8671c0

float __thiscall SRadialSlider::GetCustomDefaultValue(SRadialSlider *this)

{
  float *pfVar1;
  
  pfVar1 = TAttribute<float>::Get(&this->CustomDefaultValue);
  return *pfVar1;
}

// GetMaxValue @ 14d8690c0

float __thiscall SRadialSlider::GetMaxValue(SRadialSlider *this)

{
  FRichCurve *this_00;
  FRichCurveKey *pFVar1;
  FRichCurveKey local_28;
  
  this_00 = FRuntimeFloatCurve::GetRichCurveConst(&this->SliderRange);
  if (0 < (this_00->Keys).ArrayNum) {
    pFVar1 = FRichCurve::GetLastKey(this_00,&local_28);
    return pFVar1->Value;
  }
  return 0.0;
}

// GetMinValue @ 14d8691f0

float __thiscall SRadialSlider::GetMinValue(SRadialSlider *this)

{
  FRichCurve *this_00;
  FRichCurveKey *pFVar1;
  FRichCurveKey local_28;
  
  this_00 = FRuntimeFloatCurve::GetRichCurveConst(&this->SliderRange);
  if (0 < (this_00->Keys).ArrayNum) {
    pFVar1 = FRichCurve::GetFirstKey(this_00,&local_28);
    return pFVar1->Value;
  }
  return 0.0;
}

// GetNormalizedSliderHandlePosition @ 14d8692a0

float __thiscall SRadialSlider::GetNormalizedSliderHandlePosition(SRadialSlider *this)

{
  float *pfVar1;
  float fVar2;
  
  pfVar1 = TAttribute<float>::Get(&this->ValueAttribute);
  fVar2 = GetNormalizedValue(this,*pfVar1);
  return fVar2;
}

// GetNormalizedValue @ 14d869310

float __thiscall SRadialSlider::GetNormalizedValue(SRadialSlider *this,float param_1)

{
  FRuntimeFloatCurve *this_00;
  float fVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FRichCurve *pFVar5;
  TArray<FRichCurveKey,TSizedDefaultAllocator<32>_> *pTVar6;
  FRichCurveKey *pFVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  FRichCurveKey local_d8;
  FRichCurveKey local_bc [6];
  
  this_00 = &this->SliderRange;
  pFVar5 = FRuntimeFloatCurve::GetRichCurveConst(this_00);
  pTVar6 = FRichCurve::GetConstRefOfKeys(pFVar5);
  fVar14 = __real_3f800000;
  if (pTVar6->ArrayNum < 1) {
    fVar15 = 0.0;
  }
  else {
    fVar15 = 0.0;
    fVar16 = 0.0;
    pFVar5 = FRuntimeFloatCurve::GetRichCurveConst(this_00);
    if (0 < (pFVar5->Keys).ArrayNum) {
      pFVar7 = FRichCurve::GetFirstKey(pFVar5,&local_d8);
      fVar16 = pFVar7->Value;
    }
    fVar17 = 0.0;
    pFVar5 = FRuntimeFloatCurve::GetRichCurveConst(this_00);
    if (0 < (pFVar5->Keys).ArrayNum) {
      pFVar7 = FRichCurve::GetLastKey(pFVar5,local_bc);
      fVar17 = pFVar7->Value;
    }
    uVar11 = 0;
    if ((pTVar6->ArrayNum < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      fVar14 = (float)(*pcVar2)();
      return fVar14;
    }
    uVar9 = pTVar6->ArrayNum - 1;
    fVar1 = *(float *)((pTVar6->AllocatorInstance).Data + 4);
    uVar4 = 0;
    if ((int)uVar9 < pTVar6->ArrayNum) {
      uVar4 = ~uVar9 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      fVar14 = (float)(*pcVar2)();
      return fVar14;
    }
    iVar8 = pTVar6->ArrayNum;
    fVar18 = fVar14;
    if (0 < iVar8) {
      fVar19 = *(float *)((pTVar6->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x1c + 4) -
               fVar1;
      uVar12 = uVar11;
      do {
        uVar10 = (uint)uVar11;
        uVar13 = ~uVar10 >> 0x1f;
        uVar9 = 0;
        uVar4 = uVar9;
        if ((int)uVar10 < iVar8) {
          uVar4 = uVar13;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          fVar14 = (float)(*pcVar2)();
          return fVar14;
        }
        if (param_1 < *(float *)((pTVar6->AllocatorInstance).Data + uVar12 + 8)) {
          if ((int)uVar10 < pTVar6->ArrayNum) {
            uVar9 = uVar13;
          }
          if ((uVar9 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            fVar14 = (float)(*pcVar2)();
            return fVar14;
          }
          fVar18 = *(float *)((pTVar6->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x1c + 4);
          uVar4 = 0;
          if ((int)uVar10 < pTVar6->ArrayNum) {
            uVar4 = uVar13;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            fVar14 = (float)(*pcVar2)();
            return fVar14;
          }
          fVar17 = *(float *)((pTVar6->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x1c + 8);
          fVar18 = (fVar18 - fVar1) / fVar19;
          break;
        }
        uVar4 = uVar9;
        if ((int)uVar10 < pTVar6->ArrayNum) {
          uVar4 = uVar13;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          fVar14 = (float)(*pcVar2)();
          return fVar14;
        }
        if ((int)uVar10 < pTVar6->ArrayNum) {
          uVar9 = uVar13;
        }
        fVar15 = (*(float *)((pTVar6->AllocatorInstance).Data + uVar12 + 4) - fVar1) / fVar19;
        if ((uVar9 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          fVar14 = (float)(*pcVar2)();
          return fVar14;
        }
        uVar11 = (ulonglong)(uVar10 + 1);
        iVar8 = pTVar6->ArrayNum;
        fVar16 = *(float *)((pTVar6->AllocatorInstance).Data + uVar12 + 8);
        uVar12 = uVar12 + 0x1c;
      } while ((int)(uVar10 + 1) < iVar8);
    }
    if (__real_322bcc77 < (float)((uint)(fVar17 - fVar16) & __xmm_7fffffff7fffffff7fffffff7fffffff))
    {
      fVar16 = (param_1 - fVar16) / (fVar17 - fVar16);
    }
    else {
      fVar16 = fVar14;
      if (param_1 < fVar17) {
        fVar16 = 0.0;
      }
    }
    if (fVar14 <= fVar16) {
      fVar16 = fVar14;
    }
    if (fVar16 <= 0.0) {
      fVar16 = 0.0;
    }
    fVar15 = fVar16 * (fVar18 - fVar15) + fVar15;
  }
  return fVar15;
}

// GetStepSize @ 14d86cf40

float __thiscall SRadialSlider::GetStepSize(SRadialSlider *this)

{
  float *pfVar1;
  
  pfVar1 = TAttribute<float>::Get(&this->StepSize);
  return *pfVar1;
}

// GetThumbImage @ 14d86d3b0

FSlateBrush * __thiscall SRadialSlider::GetThumbImage(SRadialSlider *this)

{
  bool *pbVar1;
  FSlateBrush *pFVar2;
  
  if (*(char *)((longlong)&this->_padding_ + 2) != '\0') {
    pbVar1 = TAttribute<bool>::Get(&this->LockedAttribute);
    if (*pbVar1 == false) {
      pFVar2 = &this->Style->NormalThumbImage;
      if (*(char *)((longlong)&this->_padding_ + 3) != '\0') {
        pFVar2 = &this->Style->HoveredThumbImage;
      }
      return pFVar2;
    }
  }
  return &this->Style->DisabledThumbImage;
}

// GetUseCustomDefaultValue @ 14d86d7d0

bool __thiscall SRadialSlider::GetUseCustomDefaultValue(SRadialSlider *this)

{
  bool *pbVar1;
  
  pbVar1 = TAttribute<bool>::Get(&this->bUseCustomDefaultValue);
  return *pbVar1;
}

// GetValue @ 14d86d830

float __thiscall SRadialSlider::GetValue(SRadialSlider *this)

{
  float *pfVar1;
  
  pfVar1 = TAttribute<float>::Get(&this->ValueAttribute);
  return *pfVar1;
}

// IsInteractable @ 14d8718f0

bool __thiscall SRadialSlider::IsInteractable(SRadialSlider *this)

{
  char cVar1;
  bool *pbVar2;
  
  if (*(char *)((longlong)&this->_padding_ + 2) != '\0') {
    pbVar2 = TAttribute<bool>::Get(&this->LockedAttribute);
    if (*pbVar2 == false) {
      cVar1 = (**(code **)(this->_padding_ + 0x198))(this);
      if (cVar1 != '\0') {
        return true;
      }
    }
  }
  return false;
}

// IsLocked @ 14d871c50

bool __thiscall SRadialSlider::IsLocked(SRadialSlider *this)

{
  bool *pbVar1;
  
  pbVar1 = TAttribute<bool>::Get(&this->LockedAttribute);
  return *pbVar1;
}

// OnFocusLost @ 14d874960

void __thiscall SRadialSlider::OnFocusLost(SRadialSlider *this,FFocusEvent *param_1)

{
  code *pcVar1;
  float *pfVar2;
  
  if (this->bControllerInputCaptured != false) {
    pcVar1 = *(code **)(this->_padding_ + 0x248);
    pfVar2 = TAttribute<float>::Get(&this->ValueAttribute);
    (*pcVar1)(this,*pfVar2);
    ResetControllerState(this);
  }
  return;
}

// OnInputStarted @ 14d875540

void __thiscall
SRadialSlider::OnInputStarted(SRadialSlider *this,FGeometry *param_1,TVector2<double> *param_2)

{
  double dVar1;
  float fVar2;
  
  fVar2 = GetAngleFromPosition(this,param_1,param_2);
  this->AbsoluteInputAngle = fVar2;
  dVar1 = (param_2->field0_0x0)._s_0.Y;
  (this->PreviousAbsolutePosition).field0_0x0._s_0.X = (param_2->field0_0x0)._s_0.X;
  (this->PreviousAbsolutePosition).field0_0x0._s_0.Y = dVar1;
  return;
}

// OnKeyDown @ 14d875f40

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SRadialSlider::OnKeyDown
          (SRadialSlider *this,FReply *__return_storage_ptr__,FGeometry *param_1,FKeyEvent *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FName FVar2;
  FName FVar3;
  char cVar4;
  FSlateApplication *pFVar5;
  FReply *pFVar6;
  FReply local_d8;
  
  FReply::FReply(__return_storage_ptr__,false);
  pTVar1 = (param_2->Key).KeyDetails.SharedReferenceCount.ReferenceController;
  FVar2 = (param_2->Key).KeyName;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  FVar3 = (this->FineTuneKey).KeyName;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (FVar2 == FVar3) {
    this->bIsUsingFineTune = true;
  }
  cVar4 = (**(code **)(this->_padding_ + 0x1b0))(this);
  if (cVar4 != '\0') {
    pFVar5 = FSlateApplication::Get();
    cVar4 = (**(code **)(*(longlong *)pFVar5 + 0xb0))(pFVar5,param_2);
    if ((cVar4 == '\0') && (this->bRequiresControllerLock != false)) {
      if (this->bControllerInputCaptured == false) {
        this->bControllerInputCaptured = true;
        TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::ExecuteIfBound
                  (&this->OnControllerCaptureBegin);
        FReply::FReply(&local_d8,true);
        pFVar6 = &local_d8;
      }
      else {
        ResetControllerState(this);
        FReply::FReply(&local_d8,true);
        pFVar6 = &local_d8;
      }
      goto LAB_14d87602d;
    }
  }
  pFVar6 = SWidget::OnKeyDown((SWidget *)this,&local_d8,param_1,param_2);
LAB_14d87602d:
  FReply::operator=(__return_storage_ptr__,pFVar6);
  FReply::~FReply(&local_d8);
  return __return_storage_ptr__;
}

// OnKeyUp @ 14d8767c0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SRadialSlider::OnKeyUp
          (SRadialSlider *this,FReply *__return_storage_ptr__,FGeometry *param_1,FKeyEvent *param_2)

{
  FReply local_c8;
  
  FReply::FReply(__return_storage_ptr__,false);
  this->bIsUsingFineTune = false;
  if (this->bControllerInputCaptured != false) {
    FReply::FReply(&local_c8,true);
    FReply::operator=(__return_storage_ptr__,&local_c8);
    FReply::~FReply(&local_c8);
  }
  return __return_storage_ptr__;
}

// OnMouseButtonDown @ 14d877890

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SRadialSlider::OnMouseButtonDown
          (SRadialSlider *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FName FVar2;
  longlong *plVar3;
  code *pcVar4;
  SWidget *pSVar5;
  double dVar6;
  bool *pbVar7;
  Type *pTVar8;
  TSharedRef<SWidget,1> *pTVar9;
  FReply *pFVar10;
  Type TVar11;
  float fVar12;
  float fVar13;
  undefined1 local_res20 [8];
  TVector2<double>_u_0 local_108;
  FReply local_f0;
  
  pTVar1 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
  FVar2 = (param_2->EffectingButton).KeyName;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((FVar2 == EKeys::LeftMouseButton.KeyName) &&
     (pbVar7 = TAttribute<bool>::Get(&this->LockedAttribute), *pbVar7 == false)) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    pTVar8 = (Type *)(**(code **)(this->_padding_ + 0x1d8))(this,local_res20);
    if ((char)pTVar8[1] == None) {
      TVar11 = Default;
    }
    else {
      TVar11 = *pTVar8;
    }
    this->CachedCursor = TVar11;
    fVar13 = *(float *)&param_2->LastScreenSpacePosition;
    dVar6 = (double)*(float *)&(param_2->LastScreenSpacePosition).field_0x4;
    local_108._s_0.X = (double)fVar13;
    local_108._s_0.Y = dVar6;
    fVar12 = GetAngleFromPosition(this,param_1,(TVector2<double> *)&local_108._s_0);
    this->AbsoluteInputAngle = fVar12;
    (this->PreviousAbsolutePosition).field0_0x0._s_0.X = (double)fVar13;
    (this->PreviousAbsolutePosition).field0_0x0._s_0.Y = dVar6;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnMouseCaptureBegin,
               (FReadAccessScope *)&local_108._s_0);
    if ((*(int *)&(this->OnMouseCaptureBegin).field_0x10 != 0) &&
       (plVar3 = *(longlong **)&(this->OnMouseCaptureBegin).field_0x8, plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 0x68))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_108._s_0);
    local_108._s_0.X = (double)*(float *)&param_2->LastScreenSpacePosition;
    pcVar4 = *(code **)(this->_padding_ + 0x248);
    local_108._s_0.Y = (double)*(float *)&(param_2->LastScreenSpacePosition).field_0x4;
    fVar13 = PositionToValue(this,param_1,(TVector2<double> *)&local_108._s_0);
    (*pcVar4)(this,fVar13);
    ResetControllerState(this);
    FReply::FReply(&local_f0,true);
    pTVar9 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->_padding_,
                        (TSharedRef<SWidget,1> *)&local_108._s_0);
    pTVar1 = (pTVar9->SharedReferenceCount).ReferenceController;
    pSVar5 = pTVar9->Object;
    if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_108._s_0.Y);
    }
    else {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_108._s_0.Y);
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_108._s_0.X = (double)pSVar5;
    local_108._s_0.Y = (double)pTVar1;
    pFVar10 = FReply::CaptureMouse(&local_f0,(TSharedRef<SWidget,1> *)&local_108._s_0);
    FReply::FReply(__return_storage_ptr__,pFVar10);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    FReply::~FReply(&local_f0);
    return __return_storage_ptr__;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnMouseButtonUp @ 14d878740

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SRadialSlider::OnMouseButtonUp
          (SRadialSlider *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FName FVar4;
  longlong *plVar5;
  FWeakReferencer<1> FVar6;
  bool bVar7;
  uint local_res20;
  undefined1 local_res24;
  undefined1 local_118 [16];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_108;
  ForAnyElementType FStack_100;
  ulonglong local_f8;
  FDestructionSentinel local_f0;
  FReply local_d8;
  
  pTVar3 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
  FVar4 = (param_2->EffectingButton).KeyName;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (FVar4 == EKeys::LeftMouseButton.KeyName) {
    local_res20 = param_2->PointerIndex;
    local_res24 = 1;
    bVar7 = SWidget::HasMouseCaptureByUser
                      ((SWidget *)this,*(int *)((longlong)&param_2->_padding_ + 4),
                       (TOptional<int>)&local_res20);
    if (bVar7) {
      bVar7 = true;
      goto LAB_14d8787a5;
    }
  }
  bVar7 = false;
LAB_14d8787a5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  if (bVar7) {
    local_118._0_4_ = this->CachedCursor;
    local_118[4] = true;
    local_f8 = 0;
    local_118[8] = true;
    local_108.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_100.Data = (FScriptContainerElement *)0x0;
    SWidget::SetCursor((SWidget *)this,(TAttribute<TOptional<EMouseCursor::Type>_> *)local_118);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_108,(FWriteAccessScope *)&local_f0);
    if (((int)local_f8 != 0) && (FStack_100.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_100.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_100,0,0,0x10);
      local_f8 = local_f8 & 0xffffffff00000000;
    }
    if (local_f0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_f0.Accessor,&local_f0);
    }
    if (FStack_100.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_100.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_108.AccessDetector);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnMouseCaptureEnd,
               (FReadAccessScope *)&local_f0);
    if ((*(int *)&(this->OnMouseCaptureEnd).field_0x10 != 0) &&
       (plVar5 = *(longlong **)&(this->OnMouseCaptureEnd).field_0x8, plVar5 != (longlong *)0x0)) {
      (**(code **)(*plVar5 + 0x68))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_f0);
    ResetControllerState(this);
    FReply::FReply(&local_d8,true);
    FVar6.ReferenceController = local_d8.MouseCaptor.WeakReferenceCount.ReferenceController;
    local_d8.MouseCaptor.Object = (SWidget *)0x0;
    local_d8.MouseCaptor.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
    ;
    if (FVar6.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(FVar6.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((FVar6.ReferenceController)->_padding_ + 8))(FVar6.ReferenceController,1);
      }
    }
    local_d8.bUseHighPrecisionMouse = 0;
    local_d8.bReleaseMouseCapture = 1;
    FReply::FReply(__return_storage_ptr__,&local_d8);
    FReply::~FReply(&local_d8);
  }
  else {
    FReply::FReply(__return_storage_ptr__,false);
  }
  return __return_storage_ptr__;
}

// OnMouseMove @ 14d8790e0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SRadialSlider::OnMouseMove
          (SRadialSlider *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  code *pcVar1;
  bool bVar2;
  bool *pbVar3;
  float fVar4;
  uint local_res20;
  undefined1 local_res24;
  TVector2<double>_u_0 local_58;
  char local_48;
  undefined1 local_40 [16];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_30;
  ForAnyElementType FStack_28;
  ulonglong local_20;
  
  local_res20 = param_2->PointerIndex;
  local_res24 = 1;
  bVar2 = SWidget::HasMouseCaptureByUser
                    ((SWidget *)this,*(int *)((longlong)&param_2->_padding_ + 4),
                     (TOptional<int>)&local_res20);
  if ((bVar2) && (pbVar3 = TAttribute<bool>::Get(&this->LockedAttribute), *pbVar3 == false)) {
    local_40._0_4_ = GrabHandClosed;
    local_20 = 0;
    local_40[4] = true;
    local_40[8] = true;
    local_30.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_28.Data = (FScriptContainerElement *)0x0;
    SWidget::SetCursor((SWidget *)this,(TAttribute<TOptional<EMouseCursor::Type>_> *)local_40);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_30,(FWriteAccessScope *)&local_58._s_0);
    if (((int)local_20 != 0) && (FStack_28.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_28.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_28,0,0,0x10);
      local_20 = local_20 & 0xffffffff00000000;
    }
    if (local_48 == '\0') {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)local_58._s_0.Y,
                 (FDestructionSentinel *)&local_58._s_0);
    }
    if (FStack_28.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_28.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_30.AccessDetector);
    local_58._s_0.X = (double)*(float *)&param_2->LastScreenSpacePosition;
    pcVar1 = *(code **)(this->_padding_ + 0x248);
    local_58._s_0.Y = (double)*(float *)&(param_2->LastScreenSpacePosition).field_0x4;
    fVar4 = PositionToValue(this,param_1,(TVector2<double> *)&local_58._s_0);
    (*pcVar1)(this,fVar4);
    ResetControllerState(this);
    FReply::FReply(__return_storage_ptr__,true);
    return __return_storage_ptr__;
  }
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnNavigation @ 14d879590

/* WARNING: Removing unreachable block (ram,0x00014d879699) */
/* WARNING: Removing unreachable block (ram,0x00014d8796a5) */
/* WARNING: Removing unreachable block (ram,0x00014d8796b9) */
/* WARNING: Removing unreachable block (ram,0x00014d879687) */
/* WARNING: Removing unreachable block (ram,0x00014d8796f8) */
/* WARNING: Removing unreachable block (ram,0x00014d879704) */
/* WARNING: Removing unreachable block (ram,0x00014d879716) */
/* WARNING: Removing unreachable block (ram,0x00014d8796e6) */

FNavigationReply * __thiscall
SRadialSlider::OnNavigation
          (SRadialSlider *this,FNavigationReply *__return_storage_ptr__,FGeometry *param_1,
          FNavigationEvent *param_2)

{
  code *pcVar1;
  float *pfVar2;
  FRichCurve *pFVar3;
  FRichCurveKey *pFVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 local_d8 [8];
  ForAnyElementType FStack_d0;
  ulonglong local_c8;
  EUINavigationRule local_c0;
  undefined8 local_b8;
  TReferenceControllerBase<1> *pTStack_b0;
  undefined8 local_a8;
  TReferenceControllerBase<1> *pTStack_a0;
  undefined1 local_98 [8];
  ForAnyElementType FStack_90;
  ulonglong local_88;
  EUINavigationRule local_80;
  undefined1 local_78 [16];
  bool local_68;
  
  if ((this->bControllerInputCaptured == false) && (this->bRequiresControllerLock != false))
  goto LAB_14d8799a3;
  local_c0 = Escape;
  local_c8 = 0;
  local_d8 = (undefined1  [8])0x0;
  FStack_d0.Data = (FScriptContainerElement *)0x0;
  pfVar2 = TAttribute<float>::Get(&this->ValueAttribute);
  fVar7 = *pfVar2;
  if (param_2->NavigationType == Left) {
    pfVar2 = TAttribute<float>::Get(&this->StepSize);
    fVar7 = fVar7 - *pfVar2;
LAB_14d879648:
    local_80 = Stop;
    local_88 = 0;
    FStack_90.Data = (FScriptContainerElement *)0x0;
    local_98 = (undefined1  [8])0x0;
    pTStack_b0 = (TReferenceControllerBase<1> *)0x0;
    local_b8 = 0;
    local_a8 = 0;
    pTStack_a0 = (TReferenceControllerBase<1> *)0x0;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_d8,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_98);
    local_c0 = local_80;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_98,
               (FWriteAccessScope *)local_78);
    if (((int)local_88 != 0) && (FStack_90.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_90.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_90,0,0,0x10);
      local_88 = local_88 & 0xffffffff00000000;
    }
    if (local_68 == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)local_78._8_8_,(FDestructionSentinel *)local_78);
    }
    if (FStack_90.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_90.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_98);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_a0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_b0);
  }
  else if (param_2->NavigationType == Right) {
    pfVar2 = TAttribute<float>::Get(&this->StepSize);
    fVar7 = fVar7 + *pfVar2;
    goto LAB_14d879648;
  }
  pfVar2 = TAttribute<float>::Get(&this->ValueAttribute);
  if (fVar7 != *pfVar2) {
    fVar5 = 0.0;
    fVar6 = 0.0;
    pcVar1 = *(code **)(this->_padding_ + 0x248);
    pFVar3 = FRuntimeFloatCurve::GetRichCurveConst(&this->SliderRange);
    if (0 < (pFVar3->Keys).ArrayNum) {
      pFVar4 = FRichCurve::GetLastKey(pFVar3,(FRichCurveKey *)local_78);
      fVar5 = pFVar4->Value;
    }
    pFVar3 = FRuntimeFloatCurve::GetRichCurveConst(&this->SliderRange);
    if (0 < (pFVar3->Keys).ArrayNum) {
      pFVar4 = FRichCurve::GetFirstKey(pFVar3,(FRichCurveKey *)local_78);
      fVar6 = pFVar4->Value;
    }
    if (fVar7 <= fVar5) {
      fVar5 = fVar7;
    }
    if (fVar5 <= fVar6) {
      fVar5 = fVar6;
    }
    (*pcVar1)(this,fVar5);
    (__return_storage_ptr__->EventHandler).Object = (SWidget *)0x0;
    (__return_storage_ptr__->EventHandler).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    (__return_storage_ptr__->FocusRecipient).Object = (SWidget *)0x0;
    (__return_storage_ptr__->FocusRecipient).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&__return_storage_ptr__->FocusDelegate,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_d8);
    __return_storage_ptr__->BoundaryRule = local_c0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_d8,
               (FWriteAccessScope *)local_78);
    if (((int)local_c8 != 0) && (FStack_d0.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_d0.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_d0,0,0,0x10);
      local_c8 = local_c8 & 0xffffffff00000000;
    }
    if (local_68 == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)local_78._8_8_,(FDestructionSentinel *)local_78);
    }
    if (FStack_d0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_d0.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_d8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    return __return_storage_ptr__;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_d8,
             (FWriteAccessScope *)local_78);
  if (((int)local_c8 != 0) && (FStack_d0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_d0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_d0,0,0,0x10);
    local_c8 = local_c8 & 0xffffffff00000000;
  }
  if (local_68 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_78._8_8_,(FDestructionSentinel *)local_78);
  }
  if (FStack_d0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_d0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_d8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
LAB_14d8799a3:
  SWidget::OnNavigation((SWidget *)this,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// OnPaint @ 14d87aca0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

int __thiscall
SRadialSlider::OnPaint
          (SRadialSlider *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
          FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  undefined1 (*pauVar1) [16];
  TAttribute<float> *this_00;
  ESlateColorStylingMode EVar2;
  longlong lVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  float fVar9;
  bool bVar10;
  int iVar11;
  FSlateBrush *pFVar12;
  float *pfVar13;
  bool *pbVar14;
  FSlateColor *pFVar15;
  TOptional<float> *pTVar16;
  TTransform2<float> *pTVar17;
  FRichCurve *pFVar18;
  FRichCurveKey *pFVar19;
  FLinearColor_u_0 *pFVar20;
  FString *pFVar21;
  FName *pFVar22;
  FDeprecateSlateVector2D FVar23;
  ForAnyElementType FVar24;
  FDeprecateSlateVector2D *pFVar25;
  TVector2<double>_u_0 *pTVar26;
  byte bVar27;
  int iVar28;
  undefined8 uVar29;
  uint uVar30;
  longlong lVar31;
  float fVar32;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  float fVar33;
  undefined4 extraout_XMM0_Da_02;
  float fVar34;
  undefined4 extraout_XMM0_Da_03;
  float fVar35;
  undefined4 extraout_XMM0_Da_04;
  float fVar36;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Db_04;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dc_03;
  undefined4 extraout_XMM0_Dc_04;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  undefined4 extraout_XMM0_Dd_03;
  undefined4 extraout_XMM0_Dd_04;
  double dVar37;
  float fVar38;
  uint uVar39;
  float fVar40;
  uint uVar41;
  uint uVar42;
  undefined4 uVar43;
  uint uVar44;
  undefined4 uVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined1 auStackY_748 [32];
  undefined1 local_6f4 [8];
  float local_6ec;
  undefined8 local_6e8;
  undefined8 local_6d8;
  float local_6d0;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_6c8;
  float local_6b8;
  float fStack_6b4;
  float local_6b0;
  float fStack_6ac;
  FSlateWindowElementList *local_6a8;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_6a0;
  float local_690;
  float local_68c;
  float fStack_688;
  undefined8 local_684;
  float local_67c;
  float fStack_678;
  undefined8 local_674;
  undefined8 local_66c;
  undefined8 local_660;
  ForAnyElementType local_658;
  undefined8 local_650;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_648;
  undefined4 local_638;
  undefined4 uStack_634;
  float fStack_630;
  float fStack_62c;
  float fStack_628;
  undefined4 uStack_624;
  undefined1 auStack_620 [8];
  float local_618;
  float fStack_614;
  float fStack_610;
  float fStack_60c;
  undefined8 local_608;
  undefined1 local_600 [8];
  float fStack_5f8;
  float fStack_5f4;
  undefined8 local_5f0;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_5e8;
  undefined8 local_5d8;
  float local_5d0;
  float fStack_5cc;
  float local_5c8;
  float fStack_5c4;
  undefined8 local_5c0;
  float local_5b8;
  float fStack_5b4;
  TVector2<double>_u_0 local_5b0;
  undefined8 local_5a0;
  double local_598;
  undefined8 local_590;
  float local_588;
  float fStack_584;
  float local_580;
  float fStack_57c;
  TVector2<double>_u_0 local_578;
  FSlateLayoutTransform local_568;
  FSlateLayoutTransform local_55c;
  FLinearColor_u_0 local_550;
  undefined1 local_540 [16];
  FLinearColor_u_0 local_530;
  float local_51c;
  float fStack_518;
  FDeprecateOptionalVector2DParameter local_510;
  FWidgetStyle *local_500;
  double local_4f8;
  undefined8 local_4ec;
  undefined8 local_4e0;
  undefined8 local_4d4;
  undefined8 local_4c8;
  undefined8 local_4bc;
  double local_4b0;
  TVector2<double>_u_0 local_4a8;
  FLinearColor_u_0 local_498;
  undefined1 local_488 [68];
  float fStack_444;
  float fStack_440;
  float fStack_43c;
  TSharedRef<FSlateFontMeasure,1> local_438;
  undefined1 local_428 [16];
  undefined8 uStack_418;
  FString local_410 [2];
  undefined8 local_3f0;
  undefined8 local_3d8;
  undefined8 local_3c0;
  undefined8 local_3a8;
  undefined8 local_390;
  uint local_388;
  uint uStack_384;
  double dStack_380;
  uint local_378;
  uint uStack_374;
  double dStack_370;
  FName local_368;
  TTransform2<float> local_360;
  TTransform2<float> local_348;
  FSlateFontInfo local_328;
  FRichCurveKey local_2c8;
  FRichCurveKey local_2ac;
  FRichCurveKey local_290;
  TVector2<float>_u_0 local_270;
  float local_268;
  undefined8 local_264;
  undefined8 local_25c;
  float local_254;
  float local_250;
  float local_24c;
  float local_248;
  undefined8 local_244;
  byte local_23c;
  TVector2<float>_u_0 local_238;
  float local_230;
  undefined8 local_22c;
  undefined8 local_224;
  float local_21c;
  float local_218;
  float local_214;
  float local_210;
  undefined8 local_20c;
  byte local_204;
  TVector2<float>_u_0 local_200;
  float local_1f8;
  undefined8 local_1f4;
  undefined8 local_1ec;
  float local_1e4;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  undefined8 local_1d4;
  byte local_1cc;
  TVector2<float>_u_0 local_1c8;
  float local_1c0;
  undefined8 local_1bc;
  FDeprecateSlateVector2D local_1b4;
  float local_1ac;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  undefined8 local_19c;
  byte local_194;
  TVector2<float>_u_0 local_190;
  float local_188;
  undefined8 local_184;
  FDeprecateSlateVector2D local_17c;
  float local_174;
  float local_170;
  float local_16c;
  float local_168;
  FDeprecateSlateVector2D local_164;
  byte local_15c;
  TVector2<float>_u_0 local_158;
  float local_150;
  undefined8 local_14c;
  undefined8 local_144;
  float local_13c [2];
  float afStack_134 [2];
  TVector2<float>_u_0 local_12c;
  byte local_124;
  TVector2<float>_u_0 local_120;
  float local_118;
  undefined8 local_114;
  undefined8 local_10c;
  float local_104 [2];
  float afStack_fc [2];
  TVector2<float>_u_0 local_f4;
  byte local_ec;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_748;
  pauVar1 = (undefined1 (*) [16])((longlong)&(param_2->AbsolutePosition).field0_0x0 + 4);
  uVar29 = *(undefined8 *)*pauVar1;
  auStack_620 = *(undefined1 (*) [8])((longlong)&(param_2->Position).field0_0x0 + 4);
  _local_600 = *pauVar1;
  local_6a8 = param_4;
  pfVar13 = (param_2->AccumulatedRenderTransform).M.M[0] + 1;
  fVar36 = *pfVar13;
  fVar34 = (param_2->AccumulatedRenderTransform).M.M[1][0];
  fVar47 = (param_2->AccumulatedRenderTransform).M.M[1][1];
  fVar48 = (param_2->AccumulatedRenderTransform).Trans.field0_0x0._s_0.X;
  local_540 = *(undefined1 (*) [16])pfVar13;
  FVar23 = param_2->Size;
  local_638 = *(undefined4 *)&param_2->Size;
  uStack_634 = *(undefined4 *)&(param_2->Size).field_0x4;
  fVar35 = param_2->Scale;
  fStack_62c = (param_2->AbsolutePosition).field0_0x0._s_0.X;
  local_500 = param_6;
  fStack_628 = (float)uVar29;
  uStack_624 = (undefined4)((ulonglong)uVar29 >> 0x20);
  local_608 = *(undefined8 *)((longlong)&(param_2->AccumulatedRenderTransform).Trans.field0_0x0 + 4)
  ;
  local_660 = param_2;
  fStack_630 = fVar35;
  local_618 = fVar36;
  fStack_614 = fVar34;
  fStack_610 = fVar47;
  fStack_60c = fVar48;
  local_5f0 = FVar23;
  pFVar12 = GetThumbImage(this);
  this_00 = &this->ValueAttribute;
  local_6f4._0_4_ = FVar23._0_4_;
  fVar40 = local_5f0._4_4_;
  if ((float)local_6f4._0_4_ <= local_5f0._4_4_) {
    fVar40 = (float)local_6f4._0_4_;
  }
  local_4f8 = (double)*(float *)&(pFVar12->ImageSize).field_0x4 * __real_3fe0000000000000;
  local_4b0 = (double)*(float *)&pFVar12->ImageSize * __real_3fe0000000000000;
  fVar46 = (float)((double)(fVar40 * __real_3f000000) - local_4f8);
  dVar7 = (double)fVar46;
  local_598 = dVar7;
  pfVar13 = TAttribute<float>::Get(this_00);
  fVar32 = GetNormalizedValue(this,*pfVar13);
  local_690 = (this->SliderHandleEndAngle - this->SliderHandleStartAngle) * fVar32 +
              this->SliderHandleStartAngle;
  __libm_sse2_sincos_();
  uVar39 = __xmm_80000000000000008000000000000000._4_4_;
  uVar30 = (uint)__xmm_80000000000000008000000000000000;
  local_648.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  dVar37 = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) * dVar7;
  local_648.ArrayNum = 0;
  local_648.ArrayMax = 0;
  local_5b0._s_0.Y = (double)CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc) * dVar7;
  local_6c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_5b0._s_0.X =
       (double)CONCAT44((uint)((ulonglong)dVar37 >> 0x20) ^
                        __xmm_80000000000000008000000000000000._4_4_,
                        SUB84(dVar37,0) ^ (uint)__xmm_80000000000000008000000000000000);
  local_6c8.ArrayNum = 0;
  local_6c8.ArrayMax = 0;
  pbVar14 = TAttribute<bool>::Get(&this->bUseCustomDefaultValue);
  if (*pbVar14 == false) {
    local_6d0 = 0.0;
    pFVar18 = FRuntimeFloatCurve::GetRichCurveConst(&this->SliderRange);
    if (0 < (pFVar18->Keys).ArrayNum) {
      pFVar19 = FRichCurve::GetFirstKey(pFVar18,&local_2c8);
      local_6d0 = pFVar19->Value;
    }
  }
  else {
    pfVar13 = TAttribute<float>::Get(&this->CustomDefaultValue);
    local_6d0 = GetNormalizedValue(this,*pfVar13);
  }
  pfVar13 = TAttribute<float>::Get(this_00);
  fVar32 = GetNormalizedValue(this,*pfVar13);
  bVar8 = local_6d0 <= fVar32;
  __libm_sse2_sincos_();
  dVar37 = (double)CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00) * dVar7;
  pTVar26 = &local_5b0;
  if (bVar8) {
    pTVar26 = &local_4a8;
  }
  local_4a8._s_0.X =
       (double)CONCAT44((uint)((ulonglong)dVar37 >> 0x20) ^ uVar39,SUB84(dVar37,0) ^ uVar30);
  local_4a8._s_0.Y = (double)CONCAT44(extraout_XMM0_Dd_00,extraout_XMM0_Dc_00) * dVar7;
  iVar11 = local_6c8.ArrayNum;
  if (local_6c8.ArrayNum == local_6c8.ArrayMax) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&local_6c8.AllocatorInstance,&local_6c8.ArrayMax);
  }
  fVar32 = __real_3c23d70a;
  dVar37 = pTVar26->XY[1];
  local_6c8.ArrayNum = iVar11 + 1;
  iVar28 = 0;
  *(double *)(local_6c8.AllocatorInstance.Data + (longlong)iVar11 * 0x10) = (pTVar26->_s_0).X;
  *(double *)(local_6c8.AllocatorInstance.Data + (longlong)iVar11 * 0x10 + 8) = dVar37;
  do {
    fVar38 = (float)iVar28 * fVar32;
    __libm_sse2_sincos_();
    dVar37 = (double)CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01) * dVar7;
    local_578._s_0.Y = (double)CONCAT44(extraout_XMM0_Dd_01,extraout_XMM0_Dc_01) * dVar7;
    local_578._s_0.X =
         (double)CONCAT44((uint)((ulonglong)dVar37 >> 0x20) ^ uVar39,SUB84(dVar37,0) ^ uVar30);
    if (iVar28 == 100) {
      iVar11 = local_648.ArrayNum;
      if (local_648.ArrayNum == local_648.ArrayMax) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&local_648.AllocatorInstance,&local_648.ArrayMax);
      }
      local_648.ArrayNum = iVar11 + 1;
      *(double *)(local_648.AllocatorInstance.Data + (longlong)iVar11 * 0x10) = local_578._s_0.X;
      *(double *)(local_648.AllocatorInstance.Data + (longlong)iVar11 * 0x10 + 8) = local_578._s_0.Y
      ;
    }
    else {
      TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>::
      AddUniqueImpl<UE::Math::TVector2<double>_const_&>
                (&local_648,(TVector2<double> *)&local_578._s_0);
    }
    pfVar13 = TAttribute<float>::Get(this_00);
    fVar33 = GetNormalizedValue(this,*pfVar13);
    if (bVar8) {
      if ((fVar38 <= fVar33) && (local_6d0 <= fVar38)) goto LAB_14d87b0b5;
    }
    else if ((fVar33 <= fVar38) && (fVar38 <= local_6d0)) {
LAB_14d87b0b5:
      if (iVar28 == 100) {
        iVar11 = local_6c8.ArrayNum;
        if (local_6c8.ArrayNum == local_6c8.ArrayMax) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&local_6c8.AllocatorInstance,&local_6c8.ArrayMax);
        }
        local_6c8.ArrayNum = iVar11 + 1;
        *(double *)(local_6c8.AllocatorInstance.Data + (longlong)iVar11 * 0x10) = local_578._s_0.X;
        *(double *)(local_6c8.AllocatorInstance.Data + (longlong)iVar11 * 0x10 + 8) =
             local_578._s_0.Y;
        break;
      }
      TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>::
      AddUniqueImpl<UE::Math::TVector2<double>_const_&>
                (&local_6c8,(TVector2<double> *)&local_578._s_0);
    }
    iVar28 = iVar28 + 1;
  } while (iVar28 < 0x65);
  pTVar26 = &local_4a8;
  if (bVar8) {
    pTVar26 = &local_5b0;
  }
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>::
  AddUniqueImpl<UE::Math::TVector2<double>_const_&>(&local_6c8,(TVector2<double> *)&pTVar26->_s_0);
  local_590 = param_2->Size;
  fVar46 = fVar46 + fVar46;
  fVar38 = (float)local_590 * __real_3f000000;
  fVar33 = local_590._4_4_ * __real_3f000000;
  pFVar15 = TAttribute<FSlateColor>::Get(&this->SliderBarColor);
  EVar2 = pFVar15->ColorUseRule;
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
  local_550._s_0.R = (pFVar15->SpecifiedColor).field0_0x0._s_0.R;
  local_550._s_0.G = (pFVar15->SpecifiedColor).field0_0x0._s_0.G;
  local_550._s_0.B = (pFVar15->SpecifiedColor).field0_0x0._s_0.B;
  local_550._s_0.A =
       (pFVar15->SpecifiedColor).field0_0x0._s_0.A * *(float *)((longlong)&this->_padding_ + 4);
  pFVar15 = TAttribute<FSlateColor>::Get(&this->SliderProgressColor);
  EVar2 = pFVar15->ColorUseRule;
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
  local_498._s_0.R = (pFVar15->SpecifiedColor).field0_0x0._s_0.R;
  local_498._s_0.G = (pFVar15->SpecifiedColor).field0_0x0._s_0.G;
  local_498._s_0.B = (pFVar15->SpecifiedColor).field0_0x0._s_0.B;
  local_498._s_0.A =
       (pFVar15->SpecifiedColor).field0_0x0._s_0.A * *(float *)((longlong)&this->_padding_ + 4);
  pTVar16 = TAttribute<TOptional<float>_>::Get(&this->Thickness);
  if (pTVar16->bIsSet == false) {
    local_6ec = this->Style->BarThickness;
  }
  else {
    pTVar16 = TAttribute<TOptional<float>_>::Get(&this->Thickness);
    pfVar13 = TOptional<float>::GetValue(pTVar16);
    local_6ec = fVar40 * fVar32 * *pfVar13;
  }
  fVar32 = fStack_628;
  fVar40 = fStack_62c;
  fVar9 = fStack_5f4;
  uVar29._4_4_ = fStack_628;
  uVar29._0_4_ = fStack_62c;
  fVar49 = (float)local_608;
  bVar27 = (local_608._4_1_ & 1) * '\x02';
  local_264 = 0;
  local_390 = CONCAT44(fVar33,fVar38);
  local_254 = fStack_5f4;
  local_600._4_4_ = fStack_5f4;
  local_600._0_4_ = fStack_5f4;
  fStack_5f8 = fStack_5f4;
  local_6e8._4_4_ = fVar33 * fVar35 + fStack_628;
  local_6e8._0_4_ = fVar38 * fVar35 + fStack_62c;
  local_270 = local_6e8;
  local_25c = CONCAT44(fVar46,fVar46);
  local_684 = CONCAT44(fVar47 * fVar33 + fVar36 * fVar38 + (float)local_608,
                       fVar34 * fVar33 + fStack_5f4 * fVar38 + fVar48);
  local_244 = local_684;
  local_23c = local_23c & 0xfc | bVar27;
  local_6b8 = fVar38;
  fStack_6b4 = fVar33;
  local_68c = fVar46;
  fStack_688 = fVar46;
  local_4ec = uVar29;
  local_268 = fVar35;
  local_250 = fVar36;
  local_24c = fVar34;
  local_248 = fVar47;
  FSlateDrawElement::MakeLines
            (local_6a8,param_5,(FPaintGeometry *)&local_270._s_0,&local_648,None,
             (FLinearColor *)&local_550._s_0,true,local_6ec);
  local_6e8 = (TVector2<float>_u_0)CONCAT44(fStack_6b4,local_6b8);
  local_3f0 = local_6e8;
  local_22c = 0;
  local_6d8 = CONCAT44(fVar46,fVar46);
  local_21c = fVar9;
  local_238._s_0.Y = fStack_6b4 * fVar35 + fVar32;
  local_238._s_0.X = local_6b8 * fVar35 + fVar40;
  local_224 = local_6d8;
  local_6e8 = (TVector2<float>_u_0)
              CONCAT44(fVar47 * fStack_6b4 + fVar36 * local_6b8 + fVar49,
                       fVar34 * fStack_6b4 + fVar9 * local_6b8 + fVar48);
  local_20c = local_6e8;
  local_204 = local_204 & 0xfc | bVar27;
  local_4e0 = uVar29;
  local_230 = fVar35;
  local_218 = fVar36;
  local_214 = fVar34;
  local_210 = fVar47;
  FSlateDrawElement::MakeLines
            (local_6a8,param_5,(FPaintGeometry *)&local_238._s_0,&local_6c8,None,
             (FLinearColor *)&local_498._s_0,true,local_6ec);
  pFVar15 = TAttribute<FSlateColor>::Get(&this->CenterBackgroundColor);
  EVar2 = pFVar15->ColorUseRule;
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
  dVar7 = local_598;
  local_488._64_4_ = (pFVar15->SpecifiedColor).field0_0x0._s_0.R;
  fStack_444 = (pFVar15->SpecifiedColor).field0_0x0._s_0.G;
  fStack_440 = (pFVar15->SpecifiedColor).field0_0x0._s_0.B;
  fStack_43c = (pFVar15->SpecifiedColor).field0_0x0._s_0.A *
               *(float *)((longlong)&this->_padding_ + 4);
  local_1f4 = 0;
  local_6b0 = local_68c;
  fStack_6ac = local_68c;
  fVar46 = (float)((double)fVar38 - local_598);
  fVar38 = (float)((double)fVar33 - local_598);
  local_1e4 = fVar9;
  local_6d8 = CONCAT44(fVar38,fVar46);
  local_3d8 = local_6d8;
  local_200._s_0.Y = fVar38 * fVar35 + fVar32;
  local_200._s_0.X = fVar46 * fVar35 + fVar40;
  local_1ec = CONCAT44(local_68c,local_68c);
  fVar33 = fVar34 * fVar38 + fVar9 * fVar46 + fVar48;
  local_6d8 = CONCAT44(fVar47 * fVar38 + fVar36 * fVar46 + fVar49,fVar33);
  local_1d4 = local_6d8;
  local_1cc = local_1cc & 0xfc | bVar27;
  local_4c8 = uVar29;
  local_1f8 = fVar35;
  local_1e0 = fVar36;
  local_1dc = fVar34;
  local_1d8 = fVar47;
  FSlateDrawElement::MakeBox
            (local_6a8,param_5,(FPaintGeometry *)&local_200._s_0,&this->CenterBackgroundBrush,None,
             (FLinearColor *)(local_488 + 0x40));
  uVar30 = param_5 + 1;
  if (this->bShowSliderHand != false) {
    dVar6 = dVar7 * (this->HandStartEndRatio).field0_0x0._s_0.X;
    dVar7 = dVar7 * (this->HandStartEndRatio).field0_0x0._s_0.Y;
    __libm_sse2_sincos_();
    local_5e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    dVar37 = dVar6 * (double)CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02);
    dVar5 = dVar7 * (double)CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02);
    uVar39 = SUB84(dVar37,0) ^ (uint)__xmm_80000000000000008000000000000000;
    uVar41 = (uint)((ulonglong)dVar37 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
    uVar42 = SUB84(dVar5,0) ^ (uint)__xmm_80000000000000008000000000000000;
    uVar44 = (uint)((ulonglong)dVar5 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
    dVar6 = dVar6 * (double)CONCAT44(extraout_XMM0_Dd_02,extraout_XMM0_Dc_02);
    local_5e8.ArrayNum = 2;
    dVar7 = dVar7 * (double)CONCAT44(extraout_XMM0_Dd_02,extraout_XMM0_Dc_02);
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,2,0,&local_5e8.AllocatorInstance,2,&local_5e8.ArrayMax);
    fVar36 = local_68c;
    local_568.Translation.field0_0x0._s_0.X = local_6b8;
    local_6b0 = fVar35 * local_6b8 + fVar40;
    local_568.Scale = 1.0;
    *(uint *)local_5e8.AllocatorInstance.Data = uVar39;
    *(uint *)(local_5e8.AllocatorInstance.Data + 4) = uVar41;
    *(double *)(local_5e8.AllocatorInstance.Data + 8) = dVar6;
    fStack_6ac = fVar35 * fStack_6b4 + fVar32;
    local_568.Translation.field0_0x0._s_0.Y = fStack_6b4;
    *(uint *)(local_5e8.AllocatorInstance.Data + 0x10) = uVar42;
    *(uint *)(local_5e8.AllocatorInstance.Data + 0x14) = uVar44;
    *(double *)(local_5e8.AllocatorInstance.Data + 0x18) = dVar7;
    local_4bc = uVar29;
    local_388 = uVar39;
    uStack_384 = uVar41;
    dStack_380 = dVar6;
    local_378 = uVar42;
    uStack_374 = uVar44;
    dStack_370 = dVar7;
    pTVar17 = Concatenate<FSlateLayoutTransform,TTransform2<float>_>
                        (&local_360,&local_568,(TTransform2<float> *)(auStack_620 + 4));
    local_158._s_0.Y = fStack_6ac;
    local_158._s_0.X = local_6b0;
    local_144 = CONCAT44(fVar36,fVar36);
    local_14c = 0;
    local_13c = (pTVar17->M).M[0];
    afStack_134 = (pTVar17->M).M[1];
    local_12c = (pTVar17->Trans).field0_0x0;
    local_124 = local_124 & 0xfc | bVar27;
    local_150 = fVar35;
    FSlateDrawElement::MakeLines
              (local_6a8,uVar30,(FPaintGeometry *)&local_158._s_0,&local_5e8,None,
               (FLinearColor *)&local_550._s_0,true,local_6ec);
    if (local_5e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5e8.AllocatorInstance.Data);
    }
    uVar30 = param_5 + 2;
    uVar29._4_4_ = fStack_628;
    uVar29._0_4_ = fStack_62c;
    local_540 = ZEXT416((uint)local_618);
    _local_600 = ZEXT416((uint)auStack_620._4_4_);
    fVar34 = fStack_614;
    fVar47 = fStack_610;
    fVar35 = fStack_630;
    fVar48 = fStack_60c;
    fVar49 = (float)local_608;
  }
  uVar39 = 0;
  local_658.Data = (FScriptContainerElement *)0x0;
  local_650 = 0;
  if (0 < (this->ValueTags).ArrayNum) {
    uVar43 = (undefined4)__real_4014000000000000;
    uVar45 = (undefined4)((ulonglong)__real_4014000000000000 >> 0x20);
    lVar31 = 0;
    do {
      uVar41 = 0;
      if ((int)uVar39 < (this->ValueTags).ArrayNum) {
        uVar41 = ~uVar39 >> 0x1f;
      }
      if ((uVar41 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar4 = (code *)swi(3);
        iVar11 = (*pcVar4)();
        return iVar11;
      }
      fVar40 = 0.0;
      fVar36 = *(float *)((this->ValueTags).AllocatorInstance.Data + lVar31);
      pFVar18 = FRuntimeFloatCurve::GetRichCurveConst(&this->SliderRange);
      if (0 < (pFVar18->Keys).ArrayNum) {
        pFVar19 = FRichCurve::GetFirstKey(pFVar18,&local_2ac);
        fVar40 = pFVar19->Value;
      }
      if (fVar40 <= fVar36) {
        fVar40 = 0.0;
        pFVar18 = FRuntimeFloatCurve::GetRichCurveConst(&this->SliderRange);
        if (0 < (pFVar18->Keys).ArrayNum) {
          pFVar19 = FRichCurve::GetLastKey(pFVar18,&local_290);
          fVar40 = pFVar19->Value;
        }
        if (fVar36 <= fVar40) {
          for (FVar24.Data = local_658.Data;
              FVar24.Data != local_658.Data + (longlong)(int)local_650 * 4;
              FVar24.Data = FVar24.Data + 4) {
            if (fVar36 == *(float *)FVar24.Data) {
              if ((int)((longlong)FVar24.Data - (longlong)local_658.Data >> 2) != -1)
              goto LAB_14d87c245;
              break;
            }
          }
          iVar11 = (int)local_650;
          if ((int)local_650 == local_650._4_4_) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&local_658,(int *)((longlong)&local_650 + 4));
          }
          local_650 = CONCAT44(local_650._4_4_,iVar11 + 1);
          *(float *)(local_658.Data + (longlong)iVar11 * 4) = fVar36;
          fVar34 = GetNormalizedValue(this,fVar36);
          dVar5 = local_598;
          dVar37 = local_598 + (double)CONCAT44(uVar45,uVar43);
          __libm_sse2_sincos_();
          dVar7 = (double)CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_03) * dVar37;
          local_6a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_6a0.ArrayNum = 0;
          local_6a0.ArrayMax = 0;
          uVar41 = SUB84(dVar7,0) ^ (uint)__xmm_80000000000000008000000000000000;
          uVar42 = (uint)((ulonglong)dVar7 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
          iVar28 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&local_6a0.AllocatorInstance,&local_6a0.ArrayMax);
          dVar7 = (double)CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_03) * dVar5;
          iVar11 = iVar28 + 1;
          *(ulonglong *)(local_6a0.AllocatorInstance.Data + (longlong)iVar28 * 0x10) =
               CONCAT44((uint)((ulonglong)dVar7 >> 0x20) ^
                        __xmm_80000000000000008000000000000000._4_4_,
                        SUB84(dVar7,0) ^ (uint)__xmm_80000000000000008000000000000000);
          *(double *)(local_6a0.AllocatorInstance.Data + (longlong)iVar28 * 0x10 + 8) =
               (double)CONCAT44(extraout_XMM0_Dd_03,extraout_XMM0_Dc_03) * dVar5;
          if (iVar11 == local_6a0.ArrayMax) {
            local_6a0.ArrayNum = iVar11;
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&local_6a0.AllocatorInstance,&local_6a0.ArrayMax);
          }
          local_6a0.ArrayNum = iVar11 + 1;
          *(ulonglong *)(local_6a0.AllocatorInstance.Data + (longlong)iVar11 * 0x10) =
               CONCAT44(uVar42,uVar41);
          *(double *)(local_6a0.AllocatorInstance.Data + (longlong)iVar11 * 0x10 + 8) =
               (double)CONCAT44(extraout_XMM0_Dd_03,extraout_XMM0_Dc_03) * dVar37;
          pfVar13 = TAttribute<float>::Get(this_00);
          fVar35 = GetNormalizedValue(this,*pfVar13);
          fVar48 = fStack_630;
          fVar47 = local_68c;
          bVar10 = false;
          if (bVar8) {
            if ((fVar34 <= fVar35) && (local_6d0 <= fVar34)) goto LAB_14d87c05c;
          }
          else if ((fVar35 <= fVar34) && (fVar34 <= local_6d0)) {
LAB_14d87c05c:
            bVar10 = true;
          }
          pFVar20 = &local_498;
          if (!bVar10) {
            pFVar20 = &local_550;
          }
          local_55c.Translation.field0_0x0._s_0.X = local_6b8;
          local_55c.Translation.field0_0x0._s_0.Y = fStack_6b4;
          bVar27 = local_608._4_1_ & 1;
          local_428._8_8_ = *(undefined8 *)pFVar20;
          uStack_418 = *(undefined8 *)((longlong)pFVar20 + 8);
          local_4d4 = CONCAT44(fStack_628,fStack_62c);
          local_55c.Scale = 1.0;
          local_6b0 = fStack_630 * local_6b8 + fStack_62c;
          fStack_6ac = fStack_630 * fStack_6b4 + fStack_628;
          pTVar17 = Concatenate<FSlateLayoutTransform,TTransform2<float>_>
                              (&local_348,&local_55c,(TTransform2<float> *)(auStack_620 + 4));
          local_120._s_0.Y = fStack_6ac;
          local_120._s_0.X = local_6b0;
          local_10c = CONCAT44(fVar47,fVar47);
          local_118 = fVar48;
          local_114 = 0;
          local_104 = (pTVar17->M).M[0];
          afStack_fc = (pTVar17->M).M[1];
          local_f4 = (pTVar17->Trans).field0_0x0;
          local_ec = local_ec & 0xfc | bVar27 * '\x02';
          FSlateDrawElement::MakeLines
                    (local_6a8,uVar30,(FPaintGeometry *)&local_120._s_0,&local_6a0,None,
                     (FLinearColor *)(local_428 + 8),true,local_6ec);
          pFVar21 = ::FString::SanitizeFloat(local_410,(double)fVar36,1);
          FText::FromString((FText *)local_488,pFVar21);
          if (local_410[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_410[0].Data.AllocatorInstance.Data);
          }
          if ((FSlateApplication::CurrentApplication.Object == (FSlateApplication *)0x0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("CurrentApplication.IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Framework\\Application\\SlateApplication.h"
                                  ,0x141,L""), bVar10)) {
            pcVar4 = (code *)swi(3);
            iVar11 = (*pcVar4)();
            return iVar11;
          }
          bVar10 = IsInGameThread();
          if ((((!bVar10) && (bVar10 = IsInSlateThread(), !bVar10)) &&
              (bVar10 = (*IsInAsyncLoadingThread)(), !bVar10)) &&
             ((bVar10 = IsInParallelLoadingThread(), !bVar10 &&
              (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsInGameThread() || IsInSlateThread() || IsInAsyncLoadingThread() || IsInParallelLoadingThread()"
                                   ,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Framework\\Application\\SlateApplication.h"
                                   ,0x142,L""), bVar10)))) {
            pcVar4 = (code *)swi(3);
            iVar11 = (*pcVar4)();
            return iVar11;
          }
          if ((FSlateApplication::CurrentApplication.Object == (FSlateApplication *)0x0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x44d,L""), bVar10)) {
            pcVar4 = (code *)swi(3);
            iVar11 = (*pcVar4)();
            return iVar11;
          }
          lVar3 = *(longlong *)&(FSlateApplication::CurrentApplication.Object)->field_0x60;
          if ((*(longlong *)(lVar3 + 8) == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar10)) {
            pcVar4 = (code *)swi(3);
            iVar11 = (*pcVar4)();
            return iVar11;
          }
          FSlateFontServices::GetFontMeasureService(*(FSlateFontServices **)(lVar3 + 8),&local_438);
          local_488._32_4_ = 0.0;
          local_488._36_2_ = 0;
          local_488._48_16_ = (undefined1  [16])FLinearColor::Black.field0_0x0;
          local_488[0x26] = 0;
          local_488._40_8_ = 0;
          pFVar22 = ::FName::FName(&local_368,"Regular");
          FCoreStyle::GetDefaultFontStyle
                    (&local_328,*pFVar22,__real_41200000,(FFontOutlineSettings *)(local_488 + 0x20))
          ;
          FVar23 = FSlateFontMeasure::Measure
                             (local_438.Object,(FText *)local_428,(FSlateFontInfo *)local_488,fVar33
                             );
          dVar37 = dVar37 + __real_4024000000000000;
          __libm_sse2_sincos_();
          local_5a0 = local_660->Size;
          local_5d0 = (float)local_5a0 * __real_3f000000;
          fStack_5cc = local_5a0._4_4_ * __real_3f000000;
          local_5c0 = CONCAT44(fStack_5cc,local_5d0);
          fStack_5c4 = (float)((double)CONCAT44(extraout_XMM0_Dd_04,extraout_XMM0_Dc_04) * dVar37) +
                       fStack_5cc;
          fVar33 = local_5d0 -
                   (float)((double)CONCAT44(extraout_XMM0_Db_04,extraout_XMM0_Da_04) * dVar37);
          local_5d8 = CONCAT44(fStack_5c4,fVar33);
          fVar36 = fVar33 - *(float *)FVar23 * __real_3f000000;
          fVar40 = fStack_5c4 - *(float *)((longlong)FVar23 + 4) * __real_3f000000;
          local_5c8 = fVar33;
          local_580 = fVar36;
          fStack_57c = fVar40;
          if ((*(char *)((longlong)&this->_padding_ + 2) == '\0') ||
             (pbVar14 = TAttribute<bool>::Get(&this->LockedAttribute), *pbVar14 != false)) {
            pFVar25 = &(this->Style->DisabledThumbImage).ImageSize;
          }
          else if (*(char *)((longlong)&this->_padding_ + 3) == '\0') {
            pFVar25 = &(this->Style->NormalThumbImage).ImageSize;
          }
          else {
            pFVar25 = &(this->Style->HoveredThumbImage).ImageSize;
          }
          fVar48 = fStack_60c;
          fVar47 = fStack_610;
          fVar34 = fStack_614;
          fVar35 = fStack_630;
          local_1b4 = *pFVar25;
          uVar29._4_4_ = fStack_628;
          uVar29._0_4_ = fStack_62c;
          fVar49 = (float)local_608;
          local_1c0 = fStack_630;
          local_1ac = (float)auStack_620._4_4_;
          local_5b8 = fVar36 * fStack_630 + fStack_62c;
          local_1a8 = local_618;
          local_1a4 = fStack_614;
          local_1a0 = fStack_610;
          local_540 = ZEXT416((uint)local_618);
          local_1bc = 0;
          _local_600 = ZEXT416((uint)auStack_620._4_4_);
          fStack_5b4 = fVar40 * fStack_630 + fStack_628;
          local_1c8._s_0.Y = fStack_5b4;
          local_1c8._s_0.X = local_5b8;
          local_588 = fStack_614 * fVar40 + (float)auStack_620._4_4_ * fVar36 + fStack_60c;
          fStack_584 = fStack_610 * fVar40 + local_618 * fVar36 + (float)local_608;
          local_19c = CONCAT44(fStack_584,local_588);
          local_194 = (local_608._4_1_ & 1) * '\x02' | local_194 & 0xfc;
          local_488._20_8_ = uVar29;
          local_3c0 = CONCAT44(fVar40,fVar36);
          pFVar21 = FText::ToString((FText *)local_488);
          FSlateDrawElement::MakeText
                    (local_6a8,uVar30,(FPaintGeometry *)&local_1c8._s_0,pFVar21,&local_328,None,
                     &FLinearColor::White);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_328.CompositeFont.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_438.SharedReferenceCount.ReferenceController);
          if ((ITextData *)local_488._0_8_ != (ITextData *)0x0) {
            (**(code **)((longlong)*(ITextData *)local_488._0_8_ + 0x10))();
          }
          if (local_6a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_6a0.AllocatorInstance.Data);
          }
        }
      }
LAB_14d87c245:
      uVar43 = (undefined4)__real_4014000000000000;
      uVar45 = (undefined4)((ulonglong)__real_4014000000000000 >> 0x20);
      uVar39 = uVar39 + 1;
      lVar31 = lVar31 + 4;
      param_6 = local_500;
    } while ((int)uVar39 < (this->ValueTags).ArrayNum);
  }
  if (this->bShowSliderHandle != false) {
    local_6f4._0_4_ = (undefined4)local_4b0;
    local_66c._0_4_ = SUB84(local_660->Size,0);
    local_66c._4_4_ = SUB84(local_660->Size,4);
    local_660 = (FGeometry *)
                CONCAT44(local_66c._4_4_ * __real_3f000000,(float)local_66c * __real_3f000000);
    fVar36 = (float)local_5b0._s_0.X + (float)local_66c * __real_3f000000;
    fVar40 = (float)local_5b0._s_0.Y + local_66c._4_4_ * __real_3f000000;
    local_6f4._4_4_ = (undefined4)local_4f8;
    local_66c = CONCAT44(fVar40,fVar36);
    local_674 = (TVector2<float>_u_0)local_66c;
    fVar36 = fVar36 - (float)local_6f4._0_4_;
    fVar40 = fVar40 - (float)local_6f4._4_4_;
    _local_67c = CONCAT44(fVar40,fVar36);
    if ((*(char *)((longlong)&this->_padding_ + 2) == '\0') ||
       (pbVar14 = TAttribute<bool>::Get(&this->LockedAttribute), *pbVar14 != false)) {
      pFVar12 = &this->Style->DisabledThumbImage;
    }
    else if (*(char *)((longlong)&this->_padding_ + 3) == '\0') {
      pFVar12 = &this->Style->NormalThumbImage;
    }
    else {
      pFVar12 = &this->Style->HoveredThumbImage;
    }
    EVar2 = (pFVar12->TintColor).ColorUseRule;
    pFVar15 = &pFVar12->TintColor;
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
    fVar32 = (pFVar15->SpecifiedColor).field0_0x0._s_0.R;
    fVar46 = (pFVar15->SpecifiedColor).field0_0x0._s_0.G;
    fVar38 = (pFVar15->SpecifiedColor).field0_0x0._s_0.B;
    fVar33 = (pFVar15->SpecifiedColor).field0_0x0._s_0.A;
    pFVar15 = TAttribute<FSlateColor>::Get(&this->SliderHandleColor);
    EVar2 = pFVar15->ColorUseRule;
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
    local_530._s_0.G =
         fVar46 * (pFVar15->SpecifiedColor).field0_0x0._s_0.G *
         (param_6->ColorAndOpacityTint).field0_0x0._s_0.G;
    local_530._s_0.B =
         fVar38 * (pFVar15->SpecifiedColor).field0_0x0._s_0.B *
         (param_6->ColorAndOpacityTint).field0_0x0._s_0.B;
    local_510._8_1_ = 1;
    local_530._s_0.R =
         fVar32 * (pFVar15->SpecifiedColor).field0_0x0._s_0.R *
         (param_6->ColorAndOpacityTint).field0_0x0._s_0.R;
    local_530._s_0.A =
         fVar33 * (pFVar15->SpecifiedColor).field0_0x0._s_0.A *
         (param_6->ColorAndOpacityTint).field0_0x0._s_0.A;
    local_510._0_8_ = local_6f4;
    fVar32 = (local_690 + this->AngularOffset) * __real_3c8efa35 + __real_40490fdb;
    local_6f4._4_4_ = fVar40;
    local_6f4._0_4_ = fVar36;
    if ((*(char *)((longlong)&this->_padding_ + 2) == '\0') ||
       (pbVar14 = TAttribute<bool>::Get(&this->LockedAttribute), *pbVar14 != false)) {
      pFVar25 = &(this->Style->DisabledThumbImage).ImageSize;
    }
    else if (*(char *)((longlong)&this->_padding_ + 3) == '\0') {
      pFVar25 = &(this->Style->NormalThumbImage).ImageSize;
    }
    else {
      pFVar25 = &(this->Style->HoveredThumbImage).ImageSize;
    }
    local_17c = *pFVar25;
    local_3a8 = local_6f4;
    fStack_518 = SUB84(uVar29,4);
    local_51c = (float)uVar29;
    local_174 = (float)local_600._0_4_;
    local_184 = 0;
    local_674._4_4_ = fVar40 * fVar35 + fStack_518;
    local_674._0_4_ = fVar36 * fVar35 + local_51c;
    local_190 = local_674;
    local_170 = (float)local_540._0_4_;
    local_5f0._4_4_ = fVar47 * fVar40 + (float)local_540._0_4_ * fVar36 + fVar49;
    local_5f0._0_4_ = fVar34 * fVar40 + (float)local_600._0_4_ * fVar36 + fVar48;
    local_164 = local_5f0;
    local_15c = (local_608._4_1_ & 1) * '\x02' | local_15c & 0xfc;
    _local_51c = uVar29;
    local_188 = fVar35;
    local_16c = fVar34;
    local_168 = fVar47;
    FSlateDrawElement::MakeRotatedBox
              (local_6a8,uVar30,(FPaintGeometry *)&local_190._s_0,pFVar12,None,fVar32,&local_510,
               RelativeToElement,(FLinearColor *)&local_530._s_0);
  }
  if (local_658.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_658.Data);
  }
  if (local_6c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6c8.AllocatorInstance.Data);
  }
  if (local_648.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_648.AllocatorInstance.Data);
  }
  return uVar30 + 1;
}

// OnTouchEnded @ 14d87d030

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SRadialSlider::OnTouchEnded
          (SRadialSlider *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  longlong *plVar3;
  code *pcVar4;
  FWeakReferencer<1> FVar5;
  bool bVar6;
  float fVar7;
  uint local_res20;
  undefined1 local_res24;
  undefined1 local_128 [16];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_118;
  ForAnyElementType FStack_110;
  ulonglong local_108;
  TVector2<double>_u_0 local_100;
  char local_f0;
  FReply local_e8;
  
  local_res20 = param_2->PointerIndex;
  local_res24 = 1;
  bVar6 = SWidget::HasMouseCaptureByUser
                    ((SWidget *)this,*(int *)((longlong)&param_2->_padding_ + 4),
                     (TOptional<int>)&local_res20);
  if (bVar6) {
    local_128._0_4_ = this->CachedCursor;
    local_108 = 0;
    local_128[4] = true;
    local_128[8] = true;
    local_118.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_110.Data = (FScriptContainerElement *)0x0;
    SWidget::SetCursor((SWidget *)this,(TAttribute<TOptional<EMouseCursor::Type>_> *)local_128);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_118,(FWriteAccessScope *)&local_100._s_0);
    if (((int)local_108 != 0) && (FStack_110.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_110.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_110,0,0,0x10);
      local_108 = local_108 & 0xffffffff00000000;
    }
    if (local_f0 == '\0') {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)local_100._s_0.Y,
                 (FDestructionSentinel *)&local_100._s_0);
    }
    if (FStack_110.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_110.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_118.AccessDetector);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnMouseCaptureEnd,
               (FReadAccessScope *)&local_100._s_0);
    if ((*(int *)&(this->OnMouseCaptureEnd).field_0x10 != 0) &&
       (plVar3 = *(longlong **)&(this->OnMouseCaptureEnd).field_0x8, plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 0x68))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_100._s_0);
    local_100._s_0.X = (double)*(float *)&param_2->ScreenSpacePosition;
    pcVar4 = *(code **)(this->_padding_ + 0x248);
    local_100._s_0.Y = (double)*(float *)&(param_2->ScreenSpacePosition).field_0x4;
    fVar7 = PositionToValue(this,param_1,(TVector2<double> *)&local_100._s_0);
    (*pcVar4)(this,fVar7);
    ResetControllerState(this);
    FReply::FReply(&local_e8,true);
    FVar5.ReferenceController = local_e8.MouseCaptor.WeakReferenceCount.ReferenceController;
    local_e8.MouseCaptor.Object = (SWidget *)0x0;
    local_e8.MouseCaptor.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
    ;
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
    local_e8.bUseHighPrecisionMouse = 0;
    local_e8.bReleaseMouseCapture = 1;
    FReply::FReply(__return_storage_ptr__,&local_e8);
    FReply::~FReply(&local_e8);
  }
  else {
    FReply::FReply(__return_storage_ptr__,false);
  }
  return __return_storage_ptr__;
}

// OnTouchMoved @ 14d87d240

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SRadialSlider::OnTouchMoved
          (SRadialSlider *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  code *pcVar1;
  TReferenceControllerBase<1> *pTVar2;
  SWidget *pSVar3;
  FDeprecateVector2DParameter FVar4;
  bool bVar5;
  FSlateApplication *this_00;
  Type *pTVar6;
  TSharedRef<SWidget,1> *pTVar7;
  FReply *pFVar8;
  Type TVar9;
  float fVar10;
  float local_res20;
  float fStackX_24;
  TVector2<double>_u_0 local_e8;
  FReply local_d8;
  
  local_res20 = (float)param_2->PointerIndex;
  fStackX_24 = (float)CONCAT31(fStackX_24._1_3_,1);
  bVar5 = SWidget::HasMouseCaptureByUser
                    ((SWidget *)this,*(int *)((longlong)&param_2->_padding_ + 4),
                     (TOptional<int>)&local_res20);
  if (bVar5) {
    local_e8._s_0.X = (double)*(float *)&param_2->ScreenSpacePosition;
    pcVar1 = *(code **)(this->_padding_ + 0x248);
    local_e8._s_0.Y = (double)*(float *)&(param_2->ScreenSpacePosition).field_0x4;
    fVar10 = PositionToValue(this,param_1,(TVector2<double> *)&local_e8._s_0);
    (*pcVar1)(this,fVar10);
    ResetControllerState(this);
    bVar5 = true;
  }
  else {
    bVar5 = SWidget::HasMouseCapture((SWidget *)this);
    if (!bVar5) {
      this_00 = FSlateApplication::Get();
      local_res20 = (float)(this->PressedScreenSpaceTouchDownPosition).field0_0x0._s_0.X;
      fStackX_24 = (float)(this->PressedScreenSpaceTouchDownPosition).field0_0x0._s_0.Y;
      FVar4._4_4_ = fStackX_24;
      FVar4._0_4_ = local_res20;
      bVar5 = FSlateApplication::HasTraveledFarEnoughToTriggerDrag
                        (this_00,param_2,FVar4,Orient_Horizontal);
      if (bVar5) {
        pTVar6 = (Type *)(**(code **)(this->_padding_ + 0x1d8))(this,&local_res20);
        if ((char)pTVar6[1] == None) {
          TVar9 = Default;
        }
        else {
          TVar9 = *pTVar6;
        }
        this->CachedCursor = TVar9;
        TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::ExecuteIfBound
                  (&this->OnMouseCaptureBegin);
        local_e8._s_0.X = (double)*(float *)&param_2->ScreenSpacePosition;
        pcVar1 = *(code **)(this->_padding_ + 0x248);
        local_e8._s_0.Y = (double)*(float *)&(param_2->ScreenSpacePosition).field_0x4;
        fVar10 = PositionToValue(this,param_1,(TVector2<double> *)&local_e8._s_0);
        (*pcVar1)(this,fVar10);
        ResetControllerState(this);
        FReply::FReply(&local_d8,true);
        pTVar7 = TSharedFromThis<SWidget,1>::AsShared
                           ((TSharedFromThis<SWidget,1> *)&this->_padding_,
                            (TSharedRef<SWidget,1> *)&local_e8._s_0);
        pTVar2 = (pTVar7->SharedReferenceCount).ReferenceController;
        pSVar3 = pTVar7->Object;
        if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)local_e8._s_0.Y);
        }
        else {
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)local_e8._s_0.Y);
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_e8._s_0.X = (double)pSVar3;
        local_e8._s_0.Y = (double)pTVar2;
        pFVar8 = FReply::CaptureMouse(&local_d8,(TSharedRef<SWidget,1> *)&local_e8._s_0);
        FReply::FReply(__return_storage_ptr__,pFVar8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
        FReply::~FReply(&local_d8);
        return __return_storage_ptr__;
      }
    }
    bVar5 = false;
  }
  FReply::FReply(__return_storage_ptr__,bVar5);
  return __return_storage_ptr__;
}

// OnTouchStarted @ 14d87d590

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SRadialSlider::OnTouchStarted
          (SRadialSlider *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  double dVar1;
  bool *pbVar2;
  float fVar3;
  
  pbVar2 = TAttribute<bool>::Get(&this->LockedAttribute);
  if (*pbVar2 == false) {
    ResetControllerState(this);
    fVar3 = *(float *)&(param_2->ScreenSpacePosition).field_0x4;
    (this->PressedScreenSpaceTouchDownPosition).field0_0x0._s_0.X =
         (double)*(float *)&param_2->ScreenSpacePosition;
    (this->PressedScreenSpaceTouchDownPosition).field0_0x0._s_0.Y = (double)fVar3;
    fVar3 = GetAngleFromPosition(this,param_1,&this->PressedScreenSpaceTouchDownPosition);
    this->AbsoluteInputAngle = fVar3;
    dVar1 = (this->PressedScreenSpaceTouchDownPosition).field0_0x0._s_0.Y;
    (this->PreviousAbsolutePosition).field0_0x0._s_0.X =
         (this->PressedScreenSpaceTouchDownPosition).field0_0x0._s_0.X;
    (this->PreviousAbsolutePosition).field0_0x0._s_0.Y = dVar1;
    FReply::FReply(__return_storage_ptr__,true);
  }
  else {
    FReply::FReply(__return_storage_ptr__,false);
  }
  return __return_storage_ptr__;
}

// PositionToValue @ 14d87eba0

float __thiscall
SRadialSlider::PositionToValue(SRadialSlider *this,FGeometry *param_1,TVector2<double> *param_2)

{
  float fVar1;
  double dVar2;
  FRichCurve *this_00;
  float *pfVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  float local_res8 [2];
  float local_res20 [2];
  
  this_00 = FRuntimeFloatCurve::GetRichCurveConst(&this->SliderRange);
  FRichCurve::GetTimeRange(this_00,local_res8,local_res20);
  if (this->bUseVerticalDrag == false) {
    fVar5 = GetAngleFromPosition(this,param_1,&this->PreviousAbsolutePosition);
    fVar6 = GetAngleFromPosition(this,param_1,param_2);
    fVar7 = __real_43b40000;
    fVar6 = fVar6 - fVar5;
    fVar5 = FGenericPlatformMath::Fmod(fVar6,__real_43b40000);
    dVar2 = __real_3ff0000000000000;
    fVar5 = (float)((uint)fVar5 & __xmm_7fffffff7fffffff7fffffff7fffffff);
    if (__real_43340000 < fVar5) {
      fVar5 = fVar7 - fVar5;
    }
    fVar7 = __real_3f800000;
    if (((fVar6 < 0.0) || (__real_43340000 < fVar6)) &&
       ((__real_c3340000 < fVar6 || (fVar6 < __real_c3b40000)))) {
      fVar7 = __real_bf800000;
    }
    dVar9 = (param_2->field0_0x0)._s_0.Y;
    fVar6 = this->SliderHandleEndAngle;
    fVar1 = this->SliderHandleStartAngle;
    (this->PreviousAbsolutePosition).field0_0x0._s_0.X = (param_2->field0_0x0)._s_0.X;
    (this->PreviousAbsolutePosition).field0_0x0._s_0.Y = dVar9;
    fVar7 = fVar7 * fVar5 + this->AbsoluteInputAngle;
    this->AbsoluteInputAngle = fVar7;
    dVar9 = (double)fVar6 - (double)fVar1;
    dVar8 = (double)fVar7;
    if (__real_3e45798ee2308c3a <
        (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar9,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
      dVar9 = (dVar8 - (double)fVar1) / dVar9;
    }
    else {
      dVar9 = dVar2;
      if (dVar8 < (double)fVar6) {
        dVar9 = 0.0;
      }
    }
    if (dVar2 <= dVar9) {
      dVar9 = dVar2;
    }
    if (dVar9 <= 0.0) {
      dVar9 = 0.0;
    }
    fVar7 = (float)(dVar9 * ((double)local_res20[0] - (double)local_res8[0]) + (double)local_res8[0]
                   );
  }
  else {
    dVar2 = (param_2->field0_0x0)._s_0.Y;
    dVar9 = (this->PreviousAbsolutePosition).field0_0x0._s_0.Y;
    lVar4 = 0x5e4;
    if (this->bIsUsingFineTune == false) {
      lVar4 = 0x5e0;
    }
    dVar8 = (param_2->field0_0x0)._s_0.Y;
    fVar7 = this->VerticalDragPixelDelta;
    fVar5 = *(float *)((longlong)&this->_padding_ + lVar4);
    (this->PreviousAbsolutePosition).field0_0x0._s_0.X = (param_2->field0_0x0)._s_0.X;
    (this->PreviousAbsolutePosition).field0_0x0._s_0.Y = dVar8;
    pfVar3 = TAttribute<float>::Get(&this->ValueAttribute);
    fVar7 = *pfVar3 - ((float)(dVar2 - dVar9) / fVar7) * fVar5;
    if (__real_3f800000 <= fVar7) {
      fVar7 = __real_3f800000;
    }
    if (fVar7 <= 0.0) {
      fVar7 = 0.0;
    }
  }
  fVar7 = FRichCurve::Eval(this_00,fVar7,0.0);
  if (this->bMouseUsesStep != false) {
    pfVar3 = TAttribute<float>::Get(&this->StepSize);
    fVar5 = *pfVar3;
    pfVar3 = TAttribute<float>::Get(&this->StepSize);
    fVar7 = (float)((int)ROUND((fVar7 + fVar7) / fVar5 + __real_3f000000) >> 1) * *pfVar3;
  }
  return fVar7;
}

// ResetControllerState @ 14d8851f0

void __thiscall SRadialSlider::ResetControllerState(SRadialSlider *this)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  if (this->bControllerInputCaptured != false) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnControllerCaptureEnd,&local_28);
    if ((*(int *)&(this->OnControllerCaptureEnd).field_0x10 != 0) &&
       (plVar1 = *(longlong **)&(this->OnControllerCaptureEnd).field_0x8, plVar1 != (longlong *)0x0)
       ) {
      (**(code **)(*plVar1 + 0x68))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    this->bControllerInputCaptured = false;
  }
  return;
}

// SetCenterBackgroundColor @ 14d8866e0

void __thiscall SRadialSlider::SetCenterBackgroundColor(SRadialSlider *this,FSlateColor *param_1)

{
  FDestructionSentinel local_58;
  FLinearColor_u_0 local_40;
  undefined4 local_30;
  undefined1 local_2c;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  local_30._0_1_ = param_1->ColorUseRule;
  local_30._1_1_ = param_1->ColorTableId;
  local_30._2_2_ = *(undefined2 *)&param_1->field_0x12;
  local_40._0_8_ = *(undefined8 *)&(param_1->SpecifiedColor).field0_0x0;
  local_40._8_8_ = *(undefined8 *)((longlong)&(param_1->SpecifiedColor).field0_0x0 + 8);
  local_2c = 1;
  local_18 = 0;
  local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  SWidget::SetAttribute<FSlateColor,FSlateColor>
            ((SWidget *)this,&this->CenterBackgroundColor,(TAttribute<FSlateColor> *)&local_40._s_0,
             Paint);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_28,(FWriteAccessScope *)&local_58);
  if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    local_18 = local_18 & 0xffffffff00000000;
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
  return;
}

// SetCustomDefaultValue @ 14d8868f0

void __thiscall SRadialSlider::SetCustomDefaultValue(SRadialSlider *this,TAttribute<float> *param_1)

{
  SetWidgetAttribute<float,float>((SWidget *)this,&this->CustomDefaultValue,param_1,Paint);
  return;
}

// SetHandStartEndRatio @ 14d886d30

void __thiscall SRadialSlider::SetHandStartEndRatio(SRadialSlider *this,TVector2<double> *param_1)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (param_1->field0_0x0)._s_0.X;
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  if (__real_3ff0000000000000 <= dVar1) {
    dVar1 = __real_3ff0000000000000;
  }
  if (__real_3ff0000000000000 <= dVar2) {
    dVar2 = __real_3ff0000000000000;
  }
  if (dVar1 <= 0.0) {
    dVar1 = 0.0;
  }
  if (dVar2 <= 0.0) {
    dVar2 = 0.0;
  }
  if (dVar1 <= dVar2) {
    dVar1 = dVar2;
  }
  (this->HandStartEndRatio).field0_0x0._s_0.X = dVar2;
  (this->HandStartEndRatio).field0_0x0._s_0.Y = dVar1;
  return;
}

// SetLocked @ 14d8871e0

void __thiscall SRadialSlider::SetLocked(SRadialSlider *this,TAttribute<bool> *param_1)

{
  SetWidgetAttribute<bool,bool>((SWidget *)this,&this->LockedAttribute,param_1,Paint);
  return;
}

// SetMouseUsesStep @ 14d8876d0

void __thiscall SRadialSlider::SetMouseUsesStep(SRadialSlider *this,bool param_1)

{
  this->bMouseUsesStep = param_1;
  return;
}

// SetRequiresControllerLock @ 14d887bf0

void __thiscall SRadialSlider::SetRequiresControllerLock(SRadialSlider *this,bool param_1)

{
  this->bRequiresControllerLock = param_1;
  return;
}

// SetShowSliderHand @ 14d887fe0

void __thiscall SRadialSlider::SetShowSliderHand(SRadialSlider *this,bool param_1)

{
  this->bShowSliderHand = param_1;
  return;
}

// SetShowSliderHandle @ 14d888010

void __thiscall SRadialSlider::SetShowSliderHandle(SRadialSlider *this,bool param_1)

{
  this->bShowSliderHandle = param_1;
  return;
}

// SetSliderBarColor @ 14d888040

void __thiscall SRadialSlider::SetSliderBarColor(SRadialSlider *this,FSlateColor *param_1)

{
  FDestructionSentinel local_58;
  FLinearColor_u_0 local_40;
  undefined4 local_30;
  undefined1 local_2c;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  local_30._0_1_ = param_1->ColorUseRule;
  local_30._1_1_ = param_1->ColorTableId;
  local_30._2_2_ = *(undefined2 *)&param_1->field_0x12;
  local_40._0_8_ = *(undefined8 *)&(param_1->SpecifiedColor).field0_0x0;
  local_40._8_8_ = *(undefined8 *)((longlong)&(param_1->SpecifiedColor).field0_0x0 + 8);
  local_2c = 1;
  local_18 = 0;
  local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  SWidget::SetAttribute<FSlateColor,FSlateColor>
            ((SWidget *)this,&this->SliderBarColor,(TAttribute<FSlateColor> *)&local_40._s_0,Paint);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_28,(FWriteAccessScope *)&local_58);
  if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    local_18 = local_18 & 0xffffffff00000000;
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
  return;
}

// SetSliderHandleColor @ 14d888160

void __thiscall SRadialSlider::SetSliderHandleColor(SRadialSlider *this,FSlateColor *param_1)

{
  FDestructionSentinel local_58;
  FLinearColor_u_0 local_40;
  undefined4 local_30;
  undefined1 local_2c;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  local_30._0_1_ = param_1->ColorUseRule;
  local_30._1_1_ = param_1->ColorTableId;
  local_30._2_2_ = *(undefined2 *)&param_1->field_0x12;
  local_40._0_8_ = *(undefined8 *)&(param_1->SpecifiedColor).field0_0x0;
  local_40._8_8_ = *(undefined8 *)((longlong)&(param_1->SpecifiedColor).field0_0x0 + 8);
  local_2c = 1;
  local_18 = 0;
  local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  SWidget::SetAttribute<FSlateColor,FSlateColor>
            ((SWidget *)this,&this->SliderHandleColor,(TAttribute<FSlateColor> *)&local_40._s_0,
             Paint);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_28,(FWriteAccessScope *)&local_58);
  if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    local_18 = local_18 & 0xffffffff00000000;
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
  return;
}

// SetSliderHandleStartAngleAndSliderHandleEndAngle @ 14d888300

void __thiscall
SRadialSlider::SetSliderHandleStartAngleAndSliderHandleEndAngle
          (SRadialSlider *this,float param_1,float param_2)

{
  this->SliderHandleStartAngle = param_1;
  this->SliderHandleEndAngle = param_2;
  if (param_2 < param_1) {
    this->SliderHandleEndAngle = param_1;
  }
  return;
}

// SetSliderProgressColor @ 14d888330

void __thiscall SRadialSlider::SetSliderProgressColor(SRadialSlider *this,FSlateColor *param_1)

{
  FDestructionSentinel local_58;
  FLinearColor_u_0 local_40;
  undefined4 local_30;
  undefined1 local_2c;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  local_30._0_1_ = param_1->ColorUseRule;
  local_30._1_1_ = param_1->ColorTableId;
  local_30._2_2_ = *(undefined2 *)&param_1->field_0x12;
  local_40._0_8_ = *(undefined8 *)&(param_1->SpecifiedColor).field0_0x0;
  local_40._8_8_ = *(undefined8 *)((longlong)&(param_1->SpecifiedColor).field0_0x0 + 8);
  local_2c = 1;
  local_18 = 0;
  local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  SWidget::SetAttribute<FSlateColor,FSlateColor>
            ((SWidget *)this,&this->SliderProgressColor,(TAttribute<FSlateColor> *)&local_40._s_0,
             Paint);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_28,(FWriteAccessScope *)&local_58);
  if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    local_18 = local_18 & 0xffffffff00000000;
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
  return;
}

// SetStepSize @ 14d8884a0

void __thiscall SRadialSlider::SetStepSize(SRadialSlider *this,TAttribute<float> *param_1)

{
  (this->StepSize).Value = param_1->Value;
  (this->StepSize).bIsSet = param_1->bIsSet;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->StepSize).Getter,&param_1->Getter);
  return;
}

// SetThickness @ 14d8885c0

void __thiscall SRadialSlider::SetThickness(SRadialSlider *this,float param_1)

{
  TAttribute<TOptional<float>_> *this_00;
  bool bVar1;
  char cVar2;
  EInvalidateWidgetReason EVar3;
  bool bVar4;
  FDestructionSentinel local_48;
  undefined1 local_30 [16];
  undefined1 local_20 [8];
  ForAnyElementType FStack_18;
  ulonglong local_10;
  
  this_00 = &this->Thickness;
  local_30[4] = true;
  local_30[8] = true;
  local_20 = (undefined1  [8])0x0;
  FStack_18.Data = (FScriptContainerElement *)0x0;
  local_10 = 0;
  local_30._0_4_ = param_1;
  bVar1 = TAttribute<TOptional<float>_>::IdenticalTo
                    (this_00,(TAttribute<TOptional<float>_> *)local_30);
  if (bVar1) goto LAB_14d8886c2;
  bVar1 = TAttribute<TOptional<float>_>::IsBound(this_00);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_20,
             (FReadAccessScope *)&local_48);
  if (((int)local_10 == 0) || (FStack_18.Data == (FScriptContainerElement *)0x0)) {
LAB_14d888657:
    bVar4 = false;
  }
  else {
    cVar2 = (**(code **)(*(longlong *)FStack_18.Data + 0x38))();
    if (cVar2 == '\0') goto LAB_14d888657;
    bVar4 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_48);
  if ((TAttribute<TOptional<float>_> *)local_30 != this_00) {
    if (local_30[4] == false) {
      if ((this->Thickness).Value.bIsSet != false) {
        (this->Thickness).Value.bIsSet = false;
      }
    }
    else {
      (this_00->Value).TypedValue = (float)local_30._0_4_;
      (this->Thickness).Value.bIsSet = true;
    }
  }
  (this->Thickness).bIsSet = local_30[8];
  TDelegate<TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->Thickness).Getter,
             (TDelegate<TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy> *)local_20);
  EVar3 = PaintAndVolatility;
  if (bVar1 == bVar4) {
    EVar3 = Paint;
  }
  SWidget::Invalidate((SWidget *)this,EVar3);
LAB_14d8886c2:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_20,
             (FWriteAccessScope *)&local_48);
  if (((int)local_10 != 0) && (FStack_18.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_18.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_18,0,0,0x10);
    local_10 = local_10 & 0xffffffff00000000;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  if (FStack_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_18.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_20);
  return;
}

// SetUseCustomDefaultValue @ 14d888750

void __thiscall
SRadialSlider::SetUseCustomDefaultValue(SRadialSlider *this,TAttribute<bool> *param_1)

{
  SetWidgetAttribute<bool,bool>((SWidget *)this,&this->bUseCustomDefaultValue,param_1,Paint);
  return;
}

// SetUseVerticalDrag @ 14d888770

void __thiscall SRadialSlider::SetUseVerticalDrag(SRadialSlider *this,bool param_1)

{
  this->bUseVerticalDrag = param_1;
  return;
}

// SetValue @ 14d8887a0

void __thiscall SRadialSlider::SetValue(SRadialSlider *this,TAttribute<float> *param_1)

{
  SetWidgetAttribute<float,float>((SWidget *)this,&this->ValueAttribute,param_1,Paint);
  return;
}

// SupportsKeyboardFocus @ 14d888ec0

bool __thiscall SRadialSlider::SupportsKeyboardFocus(SRadialSlider *this)

{
  return this->bIsFocusable;
}

