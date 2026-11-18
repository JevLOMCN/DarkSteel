// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 27

// SSynth2DSlider @ 14f0b93a0

SSynth2DSlider * __thiscall SSynth2DSlider::SSynth2DSlider(SSynth2DSlider *this)

{
  SLeafWidget::SLeafWidget((SLeafWidget *)this);
  this->_padding_ = (longlong)&___7SSynth2DSlider__6B_;
  (this->IndentHandle).Value = false;
  (this->IndentHandle).bIsSet = false;
  *(undefined8 *)&(this->IndentHandle).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->IndentHandle).Getter = 0;
  *(undefined8 *)&(this->IndentHandle).Getter.field_0x8 = 0;
  (this->LockedAttribute).Value = false;
  (this->LockedAttribute).bIsSet = false;
  *(undefined8 *)&(this->LockedAttribute).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->LockedAttribute).Getter = 0;
  *(undefined8 *)&(this->LockedAttribute).Getter.field_0x8 = 0;
  (this->SliderBarColor).Value.ColorUseRule = UseColor_Specified;
  (this->SliderBarColor).bIsSet = false;
  *(undefined8 *)&(this->SliderBarColor).Getter.field_0x8 = 0;
  *(undefined8 *)&(this->SliderBarColor).Value.SpecifiedColor.field0_0x0 = 0x3f800000;
  (this->SliderBarColor).Value.SpecifiedColor.field0_0x0._s_0.B = 1.0;
  (this->SliderBarColor).Value.SpecifiedColor.field0_0x0._s_0.A = 1.0;
  *(undefined8 *)&(this->SliderBarColor).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->SliderBarColor).Getter = 0;
  (this->SliderHandleColor).Value.ColorUseRule = UseColor_Specified;
  (this->SliderHandleColor).bIsSet = false;
  *(undefined8 *)&(this->SliderHandleColor).Getter.field_0x8 = 0;
  *(undefined8 *)&(this->SliderHandleColor).Value.SpecifiedColor.field0_0x0 = 0x3f800000;
  (this->SliderHandleColor).Value.SpecifiedColor.field0_0x0._s_0.B = 1.0;
  (this->SliderHandleColor).Value.SpecifiedColor.field0_0x0._s_0.A = 1.0;
  *(undefined8 *)&(this->SliderHandleColor).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->SliderHandleColor).Getter = 0;
  (this->ValueAttributeX).Value = 0.0;
  (this->ValueAttributeX).bIsSet = false;
  *(undefined8 *)&(this->ValueAttributeX).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->ValueAttributeX).Getter = 0;
  *(undefined8 *)&(this->ValueAttributeX).Getter.field_0x8 = 0;
  (this->ValueAttributeY).Value = 0.0;
  (this->ValueAttributeY).bIsSet = false;
  *(undefined8 *)&(this->ValueAttributeY).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->ValueAttributeY).Getter = 0;
  *(undefined8 *)&(this->ValueAttributeY).Getter.field_0x8 = 0;
  (this->StepSize).Value = 0.0;
  (this->StepSize).bIsSet = false;
  *(undefined8 *)&(this->StepSize).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->StepSize).Getter = 0;
  *(undefined8 *)&(this->StepSize).Getter.field_0x8 = 0;
  *(undefined8 *)&this->OnMouseCaptureBegin = 0;
  *(undefined8 *)&(this->OnMouseCaptureBegin).field_0x8 = 0;
  *(undefined4 *)&(this->OnMouseCaptureBegin).field_0x10 = 0;
  *(undefined8 *)&this->OnMouseCaptureEnd = 0;
  *(undefined8 *)&(this->OnMouseCaptureEnd).field_0x8 = 0;
  *(undefined4 *)&(this->OnMouseCaptureEnd).field_0x10 = 0;
  *(undefined8 *)&this->OnControllerCaptureBegin = 0;
  *(undefined8 *)&(this->OnControllerCaptureBegin).field_0x8 = 0;
  *(undefined4 *)&(this->OnControllerCaptureBegin).field_0x10 = 0;
  *(undefined8 *)&this->OnControllerCaptureEnd = 0;
  *(undefined8 *)&(this->OnControllerCaptureEnd).field_0x8 = 0;
  *(undefined4 *)&(this->OnControllerCaptureEnd).field_0x10 = 0;
  *(undefined8 *)&this->OnValueChangedX = 0;
  *(undefined8 *)&(this->OnValueChangedX).field_0x8 = 0;
  *(undefined4 *)&(this->OnValueChangedX).field_0x10 = 0;
  *(undefined8 *)&this->OnValueChangedY = 0;
  *(undefined8 *)&(this->OnValueChangedY).field_0x8 = 0;
  *(undefined4 *)&(this->OnValueChangedY).field_0x10 = 0;
  return this;
}

// ~SSynth2DSlider @ 14f0bf9c0

void __thiscall SSynth2DSlider::~SSynth2DSlider(SSynth2DSlider *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnValueChangedY);
  pvVar1 = *(void **)&(this->OnValueChangedY).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnValueChangedY);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnValueChangedX);
  pvVar1 = *(void **)&(this->OnValueChangedX).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnValueChangedX);
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
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->StepSize).Getter);
  pvVar1 = *(void **)&(this->StepSize).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->StepSize).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ValueAttributeY).Getter);
  pvVar1 = *(void **)&(this->ValueAttributeY).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ValueAttributeY).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ValueAttributeX).Getter);
  pvVar1 = *(void **)&(this->ValueAttributeX).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ValueAttributeX).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->SliderHandleColor).Getter);
  pvVar1 = *(void **)&(this->SliderHandleColor).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->SliderHandleColor).Getter);
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
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->IndentHandle).Getter);
  pvVar1 = *(void **)&(this->IndentHandle).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->IndentHandle).Getter);
  SLeafWidget::~SLeafWidget((SLeafWidget *)this);
  return;
}

// CommitValue @ 14f0cdcf0

void __thiscall SSynth2DSlider::CommitValue(SSynth2DSlider *this,float param_1,float param_2)

{
  longlong *plVar1;
  char cVar2;
  FReadAccessScope local_48 [2];
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(this->ValueAttributeX).Getter,local_48);
  if ((*(int *)&(this->ValueAttributeX).Getter.field_0x10 == 0) ||
     (plVar1 = *(longlong **)&(this->ValueAttributeX).Getter.field_0x8, plVar1 == (longlong *)0x0))
  {
LAB_14f0cdd49:
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (local_48);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ValueAttributeX).Getter);
    (this->ValueAttributeX).Value = param_1;
    (this->ValueAttributeX).bIsSet = true;
  }
  else {
    cVar2 = (**(code **)(*plVar1 + 0x38))();
    if (cVar2 == '\0') goto LAB_14f0cdd49;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (local_48);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(this->ValueAttributeY).Getter,local_48);
  if ((*(int *)&(this->ValueAttributeY).Getter.field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->ValueAttributeY).Getter.field_0x8, plVar1 != (longlong *)0x0))
  {
    cVar2 = (**(code **)(*plVar1 + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (local_48);
      goto LAB_14f0cddcf;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (local_48);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ValueAttributeY).Getter);
  (this->ValueAttributeY).Value = param_2;
  (this->ValueAttributeY).bIsSet = true;
LAB_14f0cddcf:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnValueChangedX,
             local_48);
  if ((*(int *)&(this->OnValueChangedX).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->OnValueChangedX).field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))(plVar1,param_1);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (local_48);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnValueChangedY,
             local_48);
  if ((*(int *)&(this->OnValueChangedY).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->OnValueChangedY).field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))(plVar1,param_2);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (local_48);
  return;
}

// ComputeDesiredSize @ 14f0cdf30

TVector2<double> * __thiscall
SSynth2DSlider::ComputeDesiredSize
          (SSynth2DSlider *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  float fVar1;
  FSynth2DSliderStyle *pFVar2;
  TVector2<double>_u_0 TVar3;
  float fVar4;
  
  pFVar2 = this->Style;
  if (pFVar2 == (FSynth2DSliderStyle *)0x0) {
    TVar3._s_0.Y = SSynth2DSliderDesiredSize.field0_0x0._s_0.Y;
    TVar3._s_0.X = SSynth2DSliderDesiredSize.field0_0x0._s_0.X;
    __return_storage_ptr__->field0_0x0 = TVar3;
    return __return_storage_ptr__;
  }
  fVar1 = *(float *)&(pFVar2->NormalThumbImage).ImageSize.field_0x4;
  fVar4 = pFVar2->BarThickness;
  if (pFVar2->BarThickness <= fVar1) {
    fVar4 = fVar1;
  }
  if (this->Orientation == Orient_Vertical) {
    (__return_storage_ptr__->field0_0x0)._s_0.Y = SSynth2DSliderDesiredSize.field0_0x0._s_0.Y;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (double)fVar4;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = SSynth2DSliderDesiredSize.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)fVar4;
  return __return_storage_ptr__;
}

// Construct @ 14f0ce000

void __thiscall SSynth2DSlider::Construct(SSynth2DSlider *this,FArguments *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1->_Style == (FSynth2DSliderStyle *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InDeclaration._Style",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Synthesis\\Source\\Synthesis\\Private\\UI\\SSynth2DSlider.cpp"
                       ,8,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->Style = param_1->_Style;
  TAttribute<bool>::operator=(&this->IndentHandle,&param_1->_IndentHandle);
  TAttribute<bool>::operator=(&this->LockedAttribute,&param_1->_Locked);
  TAttribute<float>::operator=(&this->StepSize,&param_1->_StepSize);
  TAttribute<float>::operator=(&this->ValueAttributeX,&param_1->_ValueX);
  TAttribute<float>::operator=(&this->ValueAttributeY,&param_1->_ValueY);
  this->bIsFocusable = param_1->_IsFocusable;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            (&this->OnMouseCaptureBegin,&param_1->_OnMouseCaptureBegin);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            (&this->OnMouseCaptureEnd,&param_1->_OnMouseCaptureEnd);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            (&this->OnControllerCaptureBegin,&param_1->_OnControllerCaptureBegin);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            (&this->OnControllerCaptureEnd,&param_1->_OnControllerCaptureEnd);
  TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::operator=
            (&this->OnValueChangedX,&param_1->_OnValueChangedX);
  TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::operator=
            (&this->OnValueChangedY,&param_1->_OnValueChangedY);
  this->bControllerInputCaptured = false;
  return;
}

// GetValueX @ 14f0df310

float __thiscall SSynth2DSlider::GetValueX(SSynth2DSlider *this)

{
  float *pfVar1;
  
  pfVar1 = TAttribute<float>::Get(&this->ValueAttributeX);
  return *pfVar1;
}

// GetValueY @ 14f0df330

float __thiscall SSynth2DSlider::GetValueY(SSynth2DSlider *this)

{
  float *pfVar1;
  
  pfVar1 = TAttribute<float>::Get(&this->ValueAttributeY);
  return *pfVar1;
}

// IsInteractable @ 14f0e7a20

bool __thiscall SSynth2DSlider::IsInteractable(SSynth2DSlider *this)

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

// IsLocked @ 14f0e7ae0

bool __thiscall SSynth2DSlider::IsLocked(SSynth2DSlider *this)

{
  bool *pbVar1;
  
  pbVar1 = TAttribute<bool>::Get(&this->LockedAttribute);
  return *pbVar1;
}

// OnFocusLost @ 14f0e93f0

void __thiscall SSynth2DSlider::OnFocusLost(SSynth2DSlider *this,FFocusEvent *param_1)

{
  float fVar1;
  float *pfVar2;
  
  if (this->bControllerInputCaptured != false) {
    pfVar2 = TAttribute<float>::Get(&this->ValueAttributeY);
    fVar1 = *pfVar2;
    pfVar2 = TAttribute<float>::Get(&this->ValueAttributeX);
    CommitValue(this,*pfVar2,fVar1);
    ResetControllerState(this);
  }
  return;
}

// OnKeyDown @ 14f0ea9c0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SSynth2DSlider::OnKeyDown
          (SSynth2DSlider *this,FReply *__return_storage_ptr__,FGeometry *param_1,FKeyEvent *param_2
          )

{
  longlong *plVar1;
  char cVar2;
  char cVar3;
  FSlateApplication *pFVar4;
  float *pfVar5;
  FReply *pFVar6;
  float fVar7;
  float fVar8;
  FReadAccessScope local_108;
  FReply local_f0;
  
  FReply::FReply(__return_storage_ptr__,false);
  pFVar4 = FSlateApplication::Get();
  cVar2 = (**(code **)(*(longlong *)pFVar4 + 0xa0))(pFVar4,param_2);
  cVar3 = (**(code **)(this->_padding_ + 0x1b0))(this);
  if (cVar3 != '\0') {
    pFVar4 = FSlateApplication::Get();
    cVar3 = (**(code **)(*(longlong *)pFVar4 + 0xb0))(pFVar4,param_2);
    if (cVar3 == '\0') {
      if (this->bControllerInputCaptured == false) {
        this->bControllerInputCaptured = true;
        TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::ExecuteIfBound
                  (&this->OnControllerCaptureBegin);
        FReply::FReply(&local_f0,true);
        FReply::operator=(__return_storage_ptr__,&local_f0);
        FReply::~FReply(&local_f0);
      }
      else {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &this->OnControllerCaptureEnd,&local_108);
        if ((*(int *)&(this->OnControllerCaptureEnd).field_0x10 != 0) &&
           (plVar1 = *(longlong **)&(this->OnControllerCaptureEnd).field_0x8,
           plVar1 != (longlong *)0x0)) {
          (**(code **)(*plVar1 + 0x68))();
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_108);
        this->bControllerInputCaptured = false;
        FReply::FReply(&local_f0,true);
        FReply::operator=(__return_storage_ptr__,&local_f0);
        FReply::~FReply(&local_f0);
      }
    }
    if (this->bControllerInputCaptured != false) {
      pfVar5 = TAttribute<float>::Get(&this->ValueAttributeX);
      fVar7 = *pfVar5;
      pfVar5 = TAttribute<float>::Get(&this->ValueAttributeY);
      fVar8 = *pfVar5;
      if (this->Orientation == Orient_Horizontal) {
        if (cVar2 == '\0') {
          pfVar5 = TAttribute<float>::Get(&this->StepSize);
          fVar7 = fVar7 - *pfVar5;
        }
        else if (cVar2 == '\x01') {
          pfVar5 = TAttribute<float>::Get(&this->StepSize);
          fVar7 = fVar7 + *pfVar5;
        }
      }
      else if (cVar2 == '\x03') {
        pfVar5 = TAttribute<float>::Get(&this->StepSize);
        fVar8 = fVar8 - *pfVar5;
      }
      else if (cVar2 == '\x02') {
        pfVar5 = TAttribute<float>::Get(&this->StepSize);
        fVar8 = fVar8 + *pfVar5;
      }
      if (__real_3f800000 <= fVar8) {
        fVar8 = __real_3f800000;
      }
      if (__real_3f800000 <= fVar7) {
        fVar7 = __real_3f800000;
      }
      if (fVar8 <= 0.0) {
        fVar8 = 0.0;
      }
      if (fVar7 <= 0.0) {
        fVar7 = 0.0;
      }
      CommitValue(this,fVar7,fVar8);
      FReply::FReply(&local_f0,true);
      FReply::operator=(__return_storage_ptr__,&local_f0);
      FReply::~FReply(&local_f0);
      return __return_storage_ptr__;
    }
  }
  pFVar6 = SWidget::OnKeyDown((SWidget *)this,&local_f0,param_1,param_2);
  FReply::operator=(__return_storage_ptr__,pFVar6);
  FReply::~FReply(&local_f0);
  return __return_storage_ptr__;
}

// OnKeyUp @ 14f0eae60

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SSynth2DSlider::OnKeyUp
          (SSynth2DSlider *this,FReply *__return_storage_ptr__,FGeometry *param_1,FKeyEvent *param_2
          )

{
  FReply local_c8;
  
  FReply::FReply(__return_storage_ptr__,false);
  if (this->bControllerInputCaptured != false) {
    FReply::FReply(&local_c8,true);
    FReply::operator=(__return_storage_ptr__,&local_c8);
    FReply::~FReply(&local_c8);
  }
  return __return_storage_ptr__;
}

// OnMouseButtonDown @ 14f0eaf40

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SSynth2DSlider::OnMouseButtonDown
          (SSynth2DSlider *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FName FVar2;
  longlong *plVar3;
  SWidget *pSVar4;
  bool *pbVar5;
  TSharedRef<SWidget,1> *pTVar6;
  FReply *pFVar7;
  TVector2<double>_u_0 local_f8;
  TVector2<double>_u_0 local_e8;
  FReply local_d0;
  
  pTVar1 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
  FVar2 = (param_2->EffectingButton).KeyName;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((FVar2 == EKeys::LeftMouseButton.KeyName) &&
     (pbVar5 = TAttribute<bool>::Get(&this->LockedAttribute), *pbVar5 == false)) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnMouseCaptureBegin,
               (FReadAccessScope *)&local_e8._s_0);
    if ((*(int *)&(this->OnMouseCaptureBegin).field_0x10 != 0) &&
       (plVar3 = *(longlong **)&(this->OnMouseCaptureBegin).field_0x8, plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 0x68))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_e8._s_0);
    local_f8._s_0.X = (double)*(float *)&param_2->LastScreenSpacePosition;
    local_f8._s_0.Y = (double)*(float *)&(param_2->LastScreenSpacePosition).field_0x4;
    PositionToValue(this,(TVector2<double> *)&local_e8._s_0,param_1,
                    (TVector2<double> *)&local_f8._s_0);
    CommitValue(this,(float)local_e8._s_0.X,(float)local_e8._s_0.Y);
    ResetControllerState(this);
    FReply::FReply(&local_d0,true);
    pTVar6 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->_padding_,
                        (TSharedRef<SWidget,1> *)&local_e8._s_0);
    pTVar1 = (pTVar6->SharedReferenceCount).ReferenceController;
    pSVar4 = pTVar6->Object;
    if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_e8._s_0.Y);
    }
    else {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_e8._s_0.Y);
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_f8._s_0.X = (double)pSVar4;
    local_f8._s_0.Y = (double)pTVar1;
    pFVar7 = FReply::CaptureMouse(&local_d0,(TSharedRef<SWidget,1> *)&local_f8._s_0);
    FReply::FReply(__return_storage_ptr__,pFVar7);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    FReply::~FReply(&local_d0);
    return __return_storage_ptr__;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnMouseButtonUp @ 14f0eb2a0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SSynth2DSlider::OnMouseButtonUp
          (SSynth2DSlider *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FName FVar4;
  longlong *plVar5;
  FWeakReferencer<1> FVar6;
  bool bVar7;
  FReadAccessScope local_d8;
  FReply local_c0;
  
  pTVar3 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
  FVar4 = (param_2->EffectingButton).KeyName;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((FVar4 == EKeys::LeftMouseButton.KeyName) &&
     (bVar7 = SWidget::HasMouseCapture((SWidget *)this), bVar7)) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnMouseCaptureEnd,
               &local_d8);
    if ((*(int *)&(this->OnMouseCaptureEnd).field_0x10 != 0) &&
       (plVar5 = *(longlong **)&(this->OnMouseCaptureEnd).field_0x8, plVar5 != (longlong *)0x0)) {
      (**(code **)(*plVar5 + 0x68))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_d8);
    ResetControllerState(this);
    FReply::FReply(&local_c0,true);
    FVar6.ReferenceController = local_c0.MouseCaptor.WeakReferenceCount.ReferenceController;
    local_c0.MouseCaptor.Object = (SWidget *)0x0;
    local_c0.MouseCaptor.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
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
    local_c0.bUseHighPrecisionMouse = 0;
    local_c0.bReleaseMouseCapture = 1;
    FReply::FReply(__return_storage_ptr__,&local_c0);
    FReply::~FReply(&local_c0);
    return __return_storage_ptr__;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnMouseMove @ 14f0eb500

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SSynth2DSlider::OnMouseMove
          (SSynth2DSlider *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  bool bVar1;
  bool *pbVar2;
  TVector2<double>_u_0 local_28;
  TVector2<double>_u_0 local_18;
  
  bVar1 = SWidget::HasMouseCapture((SWidget *)this);
  if (bVar1) {
    pbVar2 = TAttribute<bool>::Get(&this->LockedAttribute);
    if (*pbVar2 == false) {
      local_28._s_0.X = (double)*(float *)&param_2->LastScreenSpacePosition;
      local_28._s_0.Y = (double)*(float *)&(param_2->LastScreenSpacePosition).field_0x4;
      PositionToValue(this,(TVector2<double> *)&local_18._s_0,param_1,
                      (TVector2<double> *)&local_28._s_0);
      CommitValue(this,(float)local_18._s_0.X,(float)local_18._s_0.Y);
      ResetControllerState(this);
      bVar1 = true;
      goto LAB_14f0eb595;
    }
  }
  bVar1 = false;
LAB_14f0eb595:
  FReply::FReply(__return_storage_ptr__,bVar1);
  return __return_storage_ptr__;
}

// OnPaint @ 14f0eb810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SSynth2DSlider::OnPaint
          (SSynth2DSlider *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
          FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  ESlateColorStylingMode EVar1;
  FDeprecateSlateVector2D FVar2;
  longlong *plVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  bool bVar10;
  undefined8 uVar11;
  char cVar12;
  bool *pbVar13;
  float *pfVar14;
  FSlateColor *this_00;
  TAttribute<FSlateColor> *this_01;
  longlong lVar15;
  longlong *plVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStackY_1f8 [32];
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined1 local_1b0 [8];
  float fStack_1a8;
  undefined4 uStack_1a4;
  bool local_1a0;
  undefined1 uStack_19f;
  undefined2 uStack_19e;
  FLinearColor_u_0 local_198;
  FLinearColor_u_0 local_188;
  FSlateWindowElementList *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined4 local_160;
  undefined4 uStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  undefined8 local_130;
  FReadAccessScope local_128;
  TVector2<float>_u_0 local_110;
  float local_108;
  undefined8 local_104;
  FDeprecateSlateVector2D local_fc;
  float local_f4 [2];
  float afStack_ec [2];
  TVector2<float>_u_0 local_e4;
  byte local_dc;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  FVar2 = param_2->Size;
  local_178 = param_4;
  dVar6 = (double)*(float *)&(this->Style->NormalThumbImage).ImageSize;
  dVar7 = (double)*(float *)&(this->Style->NormalThumbImage).ImageSize.field_0x4;
  dVar5 = dVar6 * __real_3fe0000000000000;
  dVar4 = dVar7 * __real_3fe0000000000000;
  pbVar13 = TAttribute<bool>::Get(&this->IndentHandle);
  if (*pbVar13 == false) {
    dVar5 = 0.0;
  }
  pbVar13 = TAttribute<bool>::Get(&this->IndentHandle);
  if (*pbVar13 == false) {
    dVar4 = 0.0;
  }
  pfVar14 = TAttribute<float>::Get(&this->ValueAttributeX);
  local_1c0._0_4_ = FVar2._0_4_;
  fVar17 = *pfVar14;
  pfVar14 = TAttribute<float>::Get(&this->ValueAttributeY);
  local_170 = *(undefined8 *)((param_2->AccumulatedRenderTransform).M.M[0] + 1);
  uStack_168 = *(undefined8 *)((param_2->AccumulatedRenderTransform).M.M[1] + 1);
  plVar16 = (longlong *)0x0;
  local_160 = *(undefined4 *)&param_2->Size;
  uStack_15c = *(undefined4 *)&(param_2->Size).field_0x4;
  fVar8 = param_2->Scale;
  fStack_154 = (param_2->AbsolutePosition).field0_0x0._s_0.X;
  fStack_150 = (param_2->AbsolutePosition).field0_0x0._s_0.Y;
  fStack_14c = (param_2->Position).field0_0x0._s_0.X;
  fStack_148 = (param_2->Position).field0_0x0._s_0.Y;
  fVar9 = (param_2->AccumulatedRenderTransform).M.M[0][0];
  fVar18 = *pfVar14;
  local_1c8._4_4_ = FVar2._4_4_;
  local_130 = *(undefined8 *)((longlong)&(param_2->AccumulatedRenderTransform).Trans.field0_0x0 + 4)
  ;
  EVar1 = (this->Style->BackgroundImage).TintColor.ColorUseRule;
  this_00 = &(this->Style->BackgroundImage).TintColor;
  fStack_158 = fVar8;
  fStack_144 = fVar9;
  if (EVar1 != UseColor_Specified) {
    if (EVar1 == UseColor_ColorTable) {
      this_00 = (FSlateColor *)FSlateColor::GetColorFromTable(this_00);
    }
    else if ((EVar1 == UseColor_Foreground) || (EVar1 != UseColor_Foreground_Subdued)) {
      this_00 = (FSlateColor *)&param_6->ForegroundColor;
    }
    else {
      this_00 = (FSlateColor *)&param_6->SubduedForeground;
    }
  }
  local_110 = (param_2->AbsolutePosition).field0_0x0;
  local_198._s_0.R =
       (this_00->SpecifiedColor).field0_0x0._s_0.R *
       (param_6->ColorAndOpacityTint).field0_0x0._s_0.R;
  local_fc = param_2->Size;
  local_dc = param_2->bHasRenderTransform * '\x02' | local_dc & 0xfc;
  local_104 = 0;
  local_198._s_0.G =
       *(float *)((longlong)&(this_00->SpecifiedColor).field0_0x0 + 4) *
       (param_6->ColorAndOpacityTint).field0_0x0._s_0.G;
  local_198._s_0.B =
       *(float *)((longlong)&(this_00->SpecifiedColor).field0_0x0 + 8) *
       (param_6->ColorAndOpacityTint).field0_0x0._s_0.B;
  local_198._s_0.A =
       *(float *)((longlong)&(this_00->SpecifiedColor).field0_0x0 + 0xc) *
       (param_6->ColorAndOpacityTint).field0_0x0._s_0.A;
  local_108 = param_2->Scale;
  local_f4 = (param_2->AccumulatedRenderTransform).M.M[0];
  afStack_ec = (param_2->AccumulatedRenderTransform).M.M[1];
  local_e4 = (param_2->AccumulatedRenderTransform).Trans.field0_0x0;
  FSlateDrawElement::MakeBox
            (param_4,param_5,(FPaintGeometry *)&local_110._s_0,&this->Style->BackgroundImage,None,
             (FLinearColor *)&local_198._s_0);
  fVar19 = (float)dVar5 * __real_3f000000;
  this_01 = &this->SliderHandleColor;
  fVar20 = (float)dVar4 * __real_3f000000;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(this->SliderHandleColor).Getter,(FReadAccessScope *)local_1b0);
  if (((*(int *)&(this->SliderHandleColor).Getter.field_0x10 == 0) ||
      (plVar3 = *(longlong **)&(this->SliderHandleColor).Getter.field_0x8, plVar3 == (longlong *)0x0
      )) || (cVar12 = (**(code **)(*plVar3 + 0x38))(), cVar12 == '\0')) {
    bVar10 = false;
  }
  else {
    bVar10 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)local_1b0);
  if (bVar10) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(this->SliderHandleColor).Getter,&local_128);
    if (*(int *)&(this->SliderHandleColor).Getter.field_0x10 != 0) {
      plVar16 = *(longlong **)&(this->SliderHandleColor).Getter.field_0x8;
    }
    (**(code **)(*plVar16 + 0x60))(plVar16,local_1b0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_128);
    *(ulonglong *)&(this_01->Value).SpecifiedColor.field0_0x0 =
         CONCAT44(local_1b0._4_4_,local_1b0._0_4_);
    *(ulonglong *)((longlong)&(this->SliderHandleColor).Value.SpecifiedColor.field0_0x0 + 8) =
         CONCAT44(uStack_1a4,fStack_1a8);
    (this->SliderHandleColor).Value.ColorUseRule = local_1a0;
    (this->SliderHandleColor).Value.ColorTableId = uStack_19f;
    *(undefined2 *)&(this->SliderHandleColor).Value.field_0x12 = uStack_19e;
  }
  EVar1 = (this->SliderHandleColor).Value.ColorUseRule;
  if (EVar1 != UseColor_Specified) {
    if (EVar1 == UseColor_ColorTable) {
      this_01 = (TAttribute<FSlateColor> *)FSlateColor::GetColorFromTable(&this_01->Value);
    }
    else if ((EVar1 == UseColor_Foreground) || (EVar1 != UseColor_Foreground_Subdued)) {
      this_01 = (TAttribute<FSlateColor> *)&param_6->ForegroundColor;
    }
    else {
      this_01 = (TAttribute<FSlateColor> *)&param_6->SubduedForeground;
    }
  }
  local_188._s_0.R =
       (param_6->ColorAndOpacityTint).field0_0x0._s_0.R *
       (((FLinearColor_u_0 *)&this_01->Value)->_s_0).R;
  local_188._s_0.A =
       (((FLinearColor_u_0 *)&this_01->Value)->_s_0).A *
       (param_6->ColorAndOpacityTint).field0_0x0._s_0.A;
  local_188._s_0.B =
       (((FLinearColor_u_0 *)&this_01->Value)->_s_0).B *
       (param_6->ColorAndOpacityTint).field0_0x0._s_0.B;
  local_188._s_0.G =
       (((FLinearColor_u_0 *)&this_01->Value)->_s_0).G *
       (param_6->ColorAndOpacityTint).field0_0x0._s_0.G;
  pbVar13 = TAttribute<bool>::Get(&this->LockedAttribute);
  fVar18 = (float)(((double)((local_1c8._4_4_ - (float)dVar4) * fVar18) - (double)fVar18 * dVar7) +
                  (double)fVar20);
  local_fc = (this->Style->NormalThumbImage).ImageSize;
  local_1b0._4_4_ = fStack_154;
  fStack_1a8 = fStack_150;
  local_104 = 0;
  fVar17 = (float)(((double)(((float)(undefined4)local_1c0 - (float)dVar5) * fVar17) -
                   (double)fVar17 * dVar6) + (double)fVar19);
  local_1c8._4_4_ = fVar18;
  local_1c8._0_4_ = fVar17;
  uVar11 = local_1c8;
  local_1c8._0_1_ = SUB41(fVar17,0);
  local_1c8._1_7_ = SUB87(uVar11,1);
  local_1a0 = local_1c8._0_1_;
  _uStack_19f = local_1c8._1_7_;
  local_f4[1] = (float)local_170;
  local_f4[0] = fVar9;
  afStack_ec[1] = (float)uStack_168;
  afStack_ec[0] = local_170._4_4_;
  local_1c0._4_4_ = fVar18 * fVar8 + fStack_150;
  local_1c0._0_4_ = fVar17 * fVar8 + fStack_154;
  local_110 = local_1c0;
  local_1c8 = CONCAT44((float)uStack_168 * fVar18 + (float)local_170 * fVar17 + (float)local_130,
                       local_170._4_4_ * fVar18 + fVar9 * fVar17 + uStack_168._4_4_);
  local_e4 = (TVector2<float>_u_0)local_1c8;
  local_dc = (local_130._4_1_ & 1) * '\x02' | local_dc & 0xfc;
  lVar15 = 0xc0;
  if (*pbVar13 == false) {
    lVar15 = 0x10;
  }
  local_108 = fVar8;
  FSlateDrawElement::MakeBox
            (local_178,param_5 + 1,(FPaintGeometry *)&local_110._s_0,
             (FSlateBrush *)(&this->Style->field_0x0 + lVar15),None,(FLinearColor *)&local_188._s_0)
  ;
  return param_5 + 2;
}

// PositionToValue @ 14f0f17d0

TVector2<double> * __thiscall
SSynth2DSlider::PositionToValue
          (SSynth2DSlider *this,TVector2<double> *__return_storage_ptr__,FGeometry *param_1,
          TVector2<double> *param_2)

{
  FSynth2DSliderStyle *pFVar1;
  TTransform2<float> *pTVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  TTransform2<float> local_30;
  
  fVar3 = (float)(param_2->field0_0x0)._s_0.X;
  fVar4 = (float)(param_2->field0_0x0)._s_0.Y;
  pTVar2 = Inverse<TTransform2<float>_>(&local_30,&param_1->AccumulatedRenderTransform);
  pFVar1 = this->Style;
  fVar5 = *(float *)&(pFVar1->NormalThumbImage).ImageSize.field_0x4;
  fVar5 = ((fVar3 * (pTVar2->M).M[0][1] + fVar4 * (pTVar2->M).M[1][1] +
           (pTVar2->Trans).field0_0x0._s_0.Y) - fVar5 * __real_3f000000) /
          (*(float *)&(param_1->Size).field_0x4 - fVar5);
  if (__real_3f800000 <= fVar5) {
    fVar5 = __real_3f800000;
  }
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  fVar3 = ((fVar4 * (pTVar2->M).M[1][0] + fVar3 * (pTVar2->M).M[0][0] +
           (pTVar2->Trans).field0_0x0._s_0.X) -
          *(float *)&(pFVar1->NormalThumbImage).ImageSize * __real_3f000000) /
          (*(float *)&param_1->Size - *(float *)&(pFVar1->NormalThumbImage).ImageSize);
  if (__real_3f800000 <= fVar3) {
    fVar3 = __real_3f800000;
  }
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)fVar5;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)fVar3;
  return __return_storage_ptr__;
}

// ResetControllerState @ 14f0f7df0

void __thiscall SSynth2DSlider::ResetControllerState(SSynth2DSlider *this)

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

// SetIndentHandle @ 14f0fcbe0

void __thiscall SSynth2DSlider::SetIndentHandle(SSynth2DSlider *this,TAttribute<bool> *param_1)

{
  TAttribute<bool>::operator=(&this->IndentHandle,param_1);
  return;
}

// SetLocked @ 14f0fdb10

void __thiscall SSynth2DSlider::SetLocked(SSynth2DSlider *this,TAttribute<bool> *param_1)

{
  TAttribute<bool>::operator=(&this->LockedAttribute,param_1);
  return;
}

// SetOrientation @ 14f0fed70

void __thiscall SSynth2DSlider::SetOrientation(SSynth2DSlider *this,EOrientation param_1)

{
  this->Orientation = param_1;
  return;
}

// SetSliderBarColor @ 14f101d00

void __thiscall SSynth2DSlider::SetSliderBarColor(SSynth2DSlider *this,FSlateColor *param_1)

{
  FDestructionSentinel local_58;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_28 [8];
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  local_40 = *(undefined8 *)&(param_1->SpecifiedColor).field0_0x0;
  uStack_38 = *(undefined8 *)((longlong)&(param_1->SpecifiedColor).field0_0x0 + 8);
  local_30._0_1_ = param_1->ColorUseRule;
  local_30._1_1_ = param_1->ColorTableId;
  local_30._2_2_ = *(undefined2 *)&param_1->field_0x12;
  *(undefined8 *)&(this->SliderBarColor).Value.SpecifiedColor.field0_0x0 = local_40;
  *(undefined8 *)((longlong)&(this->SliderBarColor).Value.SpecifiedColor.field0_0x0 + 8) = uStack_38
  ;
  (this->SliderBarColor).Value.ColorUseRule = (undefined1)local_30;
  (this->SliderBarColor).Value.ColorTableId = local_30._1_1_;
  *(undefined2 *)&(this->SliderBarColor).Value.field_0x12 = local_30._2_2_;
  local_18 = 0;
  (this->SliderBarColor).bIsSet = true;
  local_2c = 1;
  local_28 = (undefined1  [8])0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->SliderBarColor).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_28);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
             (FWriteAccessScope *)&local_58);
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
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_28);
  return;
}

// SetSliderHandleColor @ 14f101de0

void __thiscall SSynth2DSlider::SetSliderHandleColor(SSynth2DSlider *this,FSlateColor *param_1)

{
  FDestructionSentinel local_58;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_28 [8];
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  local_40 = *(undefined8 *)&(param_1->SpecifiedColor).field0_0x0;
  uStack_38 = *(undefined8 *)((longlong)&(param_1->SpecifiedColor).field0_0x0 + 8);
  local_30._0_1_ = param_1->ColorUseRule;
  local_30._1_1_ = param_1->ColorTableId;
  local_30._2_2_ = *(undefined2 *)&param_1->field_0x12;
  *(undefined8 *)&(this->SliderHandleColor).Value.SpecifiedColor.field0_0x0 = local_40;
  *(undefined8 *)((longlong)&(this->SliderHandleColor).Value.SpecifiedColor.field0_0x0 + 8) =
       uStack_38;
  (this->SliderHandleColor).Value.ColorUseRule = (undefined1)local_30;
  (this->SliderHandleColor).Value.ColorTableId = local_30._1_1_;
  *(undefined2 *)&(this->SliderHandleColor).Value.field_0x12 = local_30._2_2_;
  local_18 = 0;
  (this->SliderHandleColor).bIsSet = true;
  local_2c = 1;
  local_28 = (undefined1  [8])0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->SliderHandleColor).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_28);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
             (FWriteAccessScope *)&local_58);
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
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_28);
  return;
}

// SetStepSize @ 14f102270

void __thiscall SSynth2DSlider::SetStepSize(SSynth2DSlider *this,TAttribute<float> *param_1)

{
  TAttribute<float>::operator=(&this->StepSize,param_1);
  return;
}

// SetValueX @ 14f102f50

void __thiscall SSynth2DSlider::SetValueX(SSynth2DSlider *this,TAttribute<float> *param_1)

{
  TAttribute<float>::operator=(&this->ValueAttributeX,param_1);
  return;
}

// SetValueY @ 14f102f70

void __thiscall SSynth2DSlider::SetValueY(SSynth2DSlider *this,TAttribute<float> *param_1)

{
  TAttribute<float>::operator=(&this->ValueAttributeY,param_1);
  return;
}

// SupportsKeyboardFocus @ 14f103ff0

bool __thiscall SSynth2DSlider::SupportsKeyboardFocus(SSynth2DSlider *this)

{
  return this->bIsFocusable;
}

