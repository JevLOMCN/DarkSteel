// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 25

// SAudioMaterialKnob @ 14d8b6fd0

SAudioMaterialKnob * __thiscall SAudioMaterialKnob::SAudioMaterialKnob(SAudioMaterialKnob *this)

{
  SLeafWidget::SLeafWidget((SLeafWidget *)this);
  this->_padding_ = (longlong)&___7SAudioMaterialKnob__6B_;
  *(undefined8 *)&this->OnValueChanged = 0;
  *(undefined8 *)&(this->OnValueChanged).field_0x8 = 0;
  *(undefined4 *)&(this->OnValueChanged).field_0x10 = 0;
  *(undefined8 *)&this->OnMouseCaptureBegin = 0;
  *(undefined8 *)&(this->OnMouseCaptureBegin).field_0x8 = 0;
  *(undefined4 *)&(this->OnMouseCaptureBegin).field_0x10 = 0;
  *(undefined8 *)&this->OnMouseCaptureEnd = 0;
  *(undefined8 *)&(this->OnMouseCaptureEnd).field_0x8 = 0;
  *(undefined4 *)&(this->OnMouseCaptureEnd).field_0x10 = 0;
  (this->DesiredSizeOverride).Value.bIsSet = false;
  (this->DesiredSizeOverride).bIsSet = false;
  *(undefined8 *)&(this->DesiredSizeOverride).Getter.field_0x8 = 0;
  (this->OutputRange).field0_0x0._s_0.Y = 1.0;
  (this->NormalizedLinearSliderRange).field0_0x0._s_0.Y = 1.0;
  (this->OutputRange).field0_0x0._s_0.X = 0.0;
  (this->NormalizedLinearSliderRange).field0_0x0._s_0.X = 0.0;
  *(undefined8 *)&(this->DesiredSizeOverride).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->DesiredSizeOverride).Getter = 0;
  (this->Owner).WeakPtr = (FWeakObjectPtr)0x0;
  (this->DynamicMaterial).WeakPtr = (FWeakObjectPtr)0x0;
  (this->ValueAttribute).Value = 1.0;
  (this->ValueAttribute).bIsSet = true;
  this->AudioMaterialKnobStyle = (FAudioMaterialKnobStyle *)0x0;
  *(undefined8 *)&(this->ValueAttribute).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->ValueAttribute).Getter = 0;
  *(undefined8 *)&(this->ValueAttribute).Getter.field_0x8 = 0;
  (this->TuneSpeed).Value = 0.0;
  (this->TuneSpeed).bIsSet = false;
  *(undefined8 *)&(this->TuneSpeed).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->TuneSpeed).Getter = 0;
  *(undefined8 *)&(this->TuneSpeed).Getter.field_0x8 = 0;
  (this->FineTuneSpeed).Value = 0.0;
  (this->FineTuneSpeed).bIsSet = false;
  *(undefined8 *)&(this->FineTuneSpeed).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->FineTuneSpeed).Getter = 0;
  *(undefined8 *)&(this->FineTuneSpeed).Getter.field_0x8 = 0;
  (this->bIsFocusable).Value = false;
  (this->bIsFocusable).bIsSet = false;
  *(undefined8 *)&(this->bIsFocusable).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->bIsFocusable).Getter = 0;
  *(undefined8 *)&(this->bIsFocusable).Getter.field_0x8 = 0;
  (this->bLocked).Value = false;
  (this->bLocked).bIsSet = false;
  *(undefined8 *)&(this->bLocked).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->bLocked).Getter = 0;
  *(undefined8 *)&(this->bLocked).Getter.field_0x8 = 0;
  (this->bMouseUsesStep).Value = false;
  (this->bMouseUsesStep).bIsSet = false;
  *(undefined8 *)&(this->bMouseUsesStep).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->bMouseUsesStep).Getter = 0;
  *(undefined8 *)&(this->bMouseUsesStep).Getter.field_0x8 = 0;
  (this->StepSize).Value = 0.0;
  (this->StepSize).bIsSet = false;
  *(undefined8 *)&(this->StepSize).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->StepSize).Getter = 0;
  *(undefined8 *)&(this->StepSize).Getter.field_0x8 = 0;
  this->MouseDownValue = 0.0;
  this->PixelDelta = 0x32;
  return this;
}

// ~SAudioMaterialKnob @ 14d8bf990

void __thiscall SAudioMaterialKnob::~SAudioMaterialKnob(SAudioMaterialKnob *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->StepSize).Getter);
  pvVar1 = *(void **)&(this->StepSize).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->StepSize).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->bMouseUsesStep).Getter);
  pvVar1 = *(void **)&(this->bMouseUsesStep).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->bMouseUsesStep).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->bLocked).Getter);
  pvVar1 = *(void **)&(this->bLocked).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->bLocked).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->bIsFocusable).Getter);
  pvVar1 = *(void **)&(this->bIsFocusable).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->bIsFocusable).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->FineTuneSpeed).Getter);
  pvVar1 = *(void **)&(this->FineTuneSpeed).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->FineTuneSpeed).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->TuneSpeed).Getter);
  pvVar1 = *(void **)&(this->TuneSpeed).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->TuneSpeed).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ValueAttribute).Getter);
  pvVar1 = *(void **)&(this->ValueAttribute).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ValueAttribute).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->DesiredSizeOverride).Getter);
  pvVar1 = *(void **)&(this->DesiredSizeOverride).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->DesiredSizeOverride).Getter);
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
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnValueChanged);
  pvVar1 = *(void **)&(this->OnValueChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnValueChanged);
  SLeafWidget::~SLeafWidget((SLeafWidget *)this);
  return;
}

// ApplyNewMaterial @ 14d8da660

UMaterialInstanceDynamic * __thiscall SAudioMaterialKnob::ApplyNewMaterial(SAudioMaterialKnob *this)

{
  FAudioMaterialKnobStyle *pFVar1;
  code *pcVar2;
  UObject *pUVar3;
  UMaterialInstanceDynamic *pUVar4;
  UObject *local_res8;
  
  pFVar1 = this->AudioMaterialKnobStyle;
  if (pFVar1 != (FAudioMaterialKnobStyle *)0x0) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x18);
    pUVar3 = FWeakObjectPtr::Get(&(this->Owner).WeakPtr);
    local_res8 = (UObject *)(*pcVar2)(pFVar1,pUVar3);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res8);
    }
    FWeakObjectPtr::operator=(&(this->DynamicMaterial).WeakPtr,(FObjectPtr)&local_res8);
  }
  pUVar4 = (UMaterialInstanceDynamic *)FWeakObjectPtr::Get(&(this->DynamicMaterial).WeakPtr);
  return pUVar4;
}

// CommitValue @ 14d8e55f0

void __thiscall SAudioMaterialKnob::CommitValue(SAudioMaterialKnob *this,float param_1)

{
  longlong *plVar1;
  bool bVar2;
  float *pfVar3;
  float fVar4;
  FReadAccessScope local_48 [2];
  
  fVar4 = param_1;
  if (__real_3f800000 <= param_1) {
    fVar4 = __real_3f800000;
  }
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  pfVar3 = TAttribute<float>::Get(&this->ValueAttribute);
  if (param_1 != *pfVar3) {
    bVar2 = TAttribute<float>::IsBound(&this->ValueAttribute);
    if (!bVar2) {
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ValueAttribute).Getter);
      (this->ValueAttribute).Value = fVar4;
      (this->ValueAttribute).bIsSet = true;
    }
    SWidget::Invalidate((SWidget *)this,Paint);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnValueChanged,
               local_48);
    if ((*(int *)&(this->OnValueChanged).field_0x10 != 0) &&
       (plVar1 = *(longlong **)&(this->OnValueChanged).field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x68))(plVar1,fVar4);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (local_48);
  }
  return;
}

// ComputeDesiredSize @ 14d8e58a0

TVector2<double> * __thiscall
SAudioMaterialKnob::ComputeDesiredSize
          (SAudioMaterialKnob *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  float fVar1;
  FAudioMaterialKnobStyle *pFVar2;
  code *pcVar3;
  bool bVar4;
  TOptional<UE::Math::TVector2<double>_> *pTVar5;
  TVector2<double> *pTVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  pTVar5 = TAttribute<TOptional<UE::Math::TVector2<double>_>_>::Get(&this->DesiredSizeOverride);
  if (pTVar5->bIsSet == false) {
    pFVar2 = this->AudioMaterialKnobStyle;
    if (pFVar2 != (FAudioMaterialKnobStyle *)0x0) {
      fVar1 = *(float *)((longlong)&pFVar2->_padding_ + 4);
      (__return_storage_ptr__->field0_0x0)._s_0.X = (double)*(float *)&pFVar2->_padding_;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)fVar1;
      return __return_storage_ptr__;
    }
    uVar7 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._0_4_;
    uVar8 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._4_4_;
    uVar9 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._8_4_;
    uVar10 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._12_4_;
  }
  else {
    pTVar5 = TAttribute<TOptional<UE::Math::TVector2<double>_>_>::Get(&this->DesiredSizeOverride);
    if (pTVar5->bIsSet == false) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TVector2<double> *)(*pcVar3)();
        return pTVar6;
      }
    }
    uVar7 = *(undefined4 *)&(pTVar5->TypedValue).field0_0x0;
    uVar8 = *(undefined4 *)((longlong)&(pTVar5->TypedValue).field0_0x0 + 4);
    uVar9 = *(undefined4 *)((longlong)&(pTVar5->TypedValue).field0_0x0 + 8);
    uVar10 = *(undefined4 *)((longlong)&(pTVar5->TypedValue).field0_0x0 + 0xc);
  }
  *(undefined4 *)&__return_storage_ptr__->field0_0x0 = uVar7;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 4) = uVar8;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar9;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = uVar10;
  return __return_storage_ptr__;
}

// Construct @ 14d8e90e0

void __thiscall SAudioMaterialKnob::Construct(SAudioMaterialKnob *this,FArguments *param_1)

{
  bool bVar1;
  float *pfVar2;
  
  (this->Owner).WeakPtr = (param_1->_Owner).WeakPtr;
  TAttribute<float>::operator=(&this->TuneSpeed,&param_1->_TuneSpeed);
  TAttribute<float>::operator=(&this->FineTuneSpeed,&param_1->_FineTuneSpeed);
  (this->bIsFocusable).Value = (param_1->_IsFocusable).Value;
  (this->bIsFocusable).bIsSet = (param_1->_IsFocusable).bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            (&(this->bIsFocusable).Getter,&(param_1->_IsFocusable).Getter);
  (this->bLocked).Value = (param_1->_Locked).Value;
  (this->bLocked).bIsSet = (param_1->_Locked).bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            (&(this->bLocked).Getter,&(param_1->_Locked).Getter);
  (this->bMouseUsesStep).Value = (param_1->_MouseUsesStep).Value;
  (this->bMouseUsesStep).bIsSet = (param_1->_MouseUsesStep).bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            (&(this->bMouseUsesStep).Getter,&(param_1->_MouseUsesStep).Getter);
  TAttribute<float>::operator=(&this->StepSize,&param_1->_StepSize);
  this->AudioMaterialKnobStyle = param_1->_AudioMaterialKnobStyle;
  TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::operator=
            (&this->OnValueChanged,&param_1->_OnFloatValueChanged);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            (&this->OnMouseCaptureBegin,&param_1->_OnMouseCaptureBegin);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            (&this->OnMouseCaptureEnd,&param_1->_OnMouseCaptureEnd);
  ApplyNewMaterial(this);
  bVar1 = TAttribute<float>::IsSet(&param_1->_Value);
  if (bVar1) {
    pfVar2 = TAttribute<float>::Get(&param_1->_Value);
    CommitValue(this,*pfVar2);
  }
  return;
}

// GetOutputValue @ 14d932400

float __thiscall SAudioMaterialKnob::GetOutputValue(SAudioMaterialKnob *this,float param_1)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (this->NormalizedLinearSliderRange).field0_0x0._s_0.Y -
          (this->NormalizedLinearSliderRange).field0_0x0._s_0.X;
  if (__real_3e45798ee2308c3a <
      (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    dVar2 = ((double)param_1 - (this->NormalizedLinearSliderRange).field0_0x0._s_0.X) / dVar2;
  }
  else {
    dVar2 = __real_3ff0000000000000;
    if ((double)param_1 < (this->NormalizedLinearSliderRange).field0_0x0._s_0.Y) {
      dVar2 = 0.0;
    }
  }
  dVar1 = (this->OutputRange).field0_0x0._s_0.X;
  if (__real_3ff0000000000000 <= dVar2) {
    dVar2 = __real_3ff0000000000000;
  }
  if (dVar2 <= 0.0) {
    dVar2 = 0.0;
  }
  return (float)(dVar2 * ((this->OutputRange).field0_0x0._s_0.Y - dVar1) + dVar1);
}

// GetSliderValue @ 14d935d80

float __thiscall SAudioMaterialKnob::GetSliderValue(SAudioMaterialKnob *this,float param_1)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (this->OutputRange).field0_0x0._s_0.Y - (this->OutputRange).field0_0x0._s_0.X;
  if (__real_3e45798ee2308c3a <
      (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    dVar2 = ((double)param_1 - (this->OutputRange).field0_0x0._s_0.X) / dVar2;
  }
  else {
    dVar2 = __real_3ff0000000000000;
    if ((double)param_1 < (this->OutputRange).field0_0x0._s_0.Y) {
      dVar2 = 0.0;
    }
  }
  dVar1 = (this->NormalizedLinearSliderRange).field0_0x0._s_0.X;
  if (__real_3ff0000000000000 <= dVar2) {
    dVar2 = __real_3ff0000000000000;
  }
  if (dVar2 <= 0.0) {
    dVar2 = 0.0;
  }
  return (float)(dVar2 * ((this->NormalizedLinearSliderRange).field0_0x0._s_0.Y - dVar1) + dVar1);
}

// IsInteractable @ 14d93d5b0

bool __thiscall SAudioMaterialKnob::IsInteractable(SAudioMaterialKnob *this)

{
  char cVar1;
  bool *pbVar2;
  
  if (*(char *)((longlong)&this->_padding_ + 2) != '\0') {
    pbVar2 = TAttribute<bool>::Get(&this->bLocked);
    if (*pbVar2 == false) {
      cVar1 = (**(code **)(this->_padding_ + 0x198))(this);
      if (cVar1 != '\0') {
        return true;
      }
    }
  }
  return false;
}

// IsLocked @ 14d93dc70

bool __thiscall SAudioMaterialKnob::IsLocked(SAudioMaterialKnob *this)

{
  bool *pbVar1;
  
  pbVar1 = TAttribute<bool>::Get(&this->bLocked);
  return *pbVar1;
}

// OnKeyDown @ 14d94c370

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SAudioMaterialKnob::OnKeyDown
          (SAudioMaterialKnob *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FKeyEvent *param_2)

{
  float fVar1;
  FName FVar2;
  TReferenceControllerBase<1> *pTVar3;
  FSlateApplication *pFVar4;
  float *pfVar5;
  bool bVar6;
  
  FVar2 = (param_2->Key).KeyName;
  pTVar3 = (param_2->Key).KeyDetails.SharedReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar6 = FVar2 == EKeys::LeftShift.KeyName;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  if (bVar6) {
    pFVar4 = FSlateApplication::Get();
    pfVar5 = (float *)(**(code **)(*(longlong *)pFVar4 + 0x68))(pFVar4);
    fVar1 = pfVar5[1];
    (this->MouseDownPosition).field0_0x0._s_0.X = (double)*pfVar5;
    (this->MouseDownPosition).field0_0x0._s_0.Y = (double)fVar1;
    pfVar5 = TAttribute<float>::Get(&this->ValueAttribute);
    this->MouseDownValue = *pfVar5;
    this->bIsFineTune = true;
  }
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnKeyUp @ 14d94d660

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SAudioMaterialKnob::OnKeyUp
          (SAudioMaterialKnob *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FKeyEvent *param_2)

{
  float fVar1;
  FSlateApplication *pFVar2;
  float *pfVar3;
  
  this->bIsFineTune = false;
  pFVar2 = FSlateApplication::Get();
  pfVar3 = (float *)(**(code **)(*(longlong *)pFVar2 + 0x68))(pFVar2);
  fVar1 = pfVar3[1];
  (this->MouseDownPosition).field0_0x0._s_0.X = (double)*pfVar3;
  (this->MouseDownPosition).field0_0x0._s_0.Y = (double)fVar1;
  pfVar3 = TAttribute<float>::Get(&this->ValueAttribute);
  this->MouseDownValue = *pfVar3;
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnMouseButtonDown @ 14d94ead0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SAudioMaterialKnob::OnMouseButtonDown
          (SAudioMaterialKnob *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  float fVar1;
  TReferenceControllerBase<1> *pTVar2;
  FName FVar3;
  longlong *plVar4;
  SWidget *pSVar5;
  bool bVar6;
  bool *pbVar7;
  Type *pTVar8;
  float *pfVar9;
  TSharedRef<SWidget,1> *pTVar10;
  FReply *pFVar11;
  Type TVar12;
  undefined1 local_res20 [8];
  FReadAccessScope local_1a8;
  FReply local_190;
  FReply local_d8;
  
  pTVar2 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
  FVar3 = (param_2->EffectingButton).KeyName;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (FVar3 == EKeys::LeftMouseButton.KeyName) {
    pbVar7 = TAttribute<bool>::Get(&this->bLocked);
    if (*pbVar7 == false) {
      bVar6 = true;
      goto LAB_14d94eb21;
    }
  }
  bVar6 = false;
LAB_14d94eb21:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (bVar6) {
    pTVar8 = (Type *)(**(code **)(this->_padding_ + 0x1d8))(this,local_res20);
    if ((char)pTVar8[1] == None) {
      TVar12 = Default;
    }
    else {
      TVar12 = *pTVar8;
    }
    this->CachedCursor = TVar12;
    fVar1 = *(float *)&(param_2->ScreenSpacePosition).field_0x4;
    (this->MouseDownPosition).field0_0x0._s_0.X = (double)*(float *)&param_2->ScreenSpacePosition;
    (this->MouseDownPosition).field0_0x0._s_0.Y = (double)fVar1;
    pfVar9 = TAttribute<float>::Get(&this->ValueAttribute);
    this->MouseDownValue = *pfVar9;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnMouseCaptureBegin,
               &local_1a8);
    if ((*(int *)&(this->OnMouseCaptureBegin).field_0x10 != 0) &&
       (plVar4 = *(longlong **)&(this->OnMouseCaptureBegin).field_0x8, plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 0x68))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_1a8);
    FReply::FReply(&local_190,true);
    pTVar10 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,
                         (TSharedRef<SWidget,1> *)&local_1a8);
    pTVar2 = (pTVar10->SharedReferenceCount).ReferenceController;
    pSVar5 = pTVar10->Object;
    if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_1a8.DestructionSentinel.Accessor);
    }
    else {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_1a8.DestructionSentinel.Accessor);
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_1a8.DestructionSentinel._0_8_ = pSVar5;
    local_1a8.DestructionSentinel.Accessor = (FMRSWRecursiveAccessDetector *)pTVar2;
    pFVar11 = FReply::CaptureMouse(&local_190,(TSharedRef<SWidget,1> *)&local_1a8);
    FReply::FReply(&local_d8,pFVar11);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    FReply::~FReply(&local_190);
    FReply::FReply(__return_storage_ptr__,&local_d8);
    FReply::~FReply(&local_d8);
  }
  else {
    FReply::FReply(__return_storage_ptr__,false);
  }
  return __return_storage_ptr__;
}

// OnMouseButtonUp @ 14d950180

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SAudioMaterialKnob::OnMouseButtonUp
          (SAudioMaterialKnob *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FName FVar4;
  longlong *plVar5;
  FWeakReferencer<1> FVar6;
  bool bVar7;
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
    bVar7 = SWidget::HasMouseCapture((SWidget *)this);
    if (bVar7) {
      bVar7 = true;
      goto LAB_14d9501d4;
    }
  }
  bVar7 = false;
LAB_14d9501d4:
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

// OnMouseMove @ 14d950f10

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SAudioMaterialKnob::OnMouseMove
          (SAudioMaterialKnob *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  float fVar1;
  bool bVar2;
  bool *pbVar3;
  float *pfVar4;
  longlong lVar5;
  float fVar6;
  FDestructionSentinel local_68;
  undefined1 local_50 [16];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_40;
  ForAnyElementType FStack_38;
  ulonglong local_30;
  
  bVar2 = SWidget::HasMouseCapture((SWidget *)this);
  if ((bVar2) && (pbVar3 = TAttribute<bool>::Get(&this->bLocked), *pbVar3 == false)) {
    local_30 = 0;
    local_50._0_4_ = GrabHandClosed;
    local_50[4] = true;
    local_50[8] = true;
    local_40.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_38.Data = (FScriptContainerElement *)0x0;
    SWidget::SetCursor((SWidget *)this,(TAttribute<TOptional<EMouseCursor::Type>_> *)local_50);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_40,(FWriteAccessScope *)&local_68);
    if (((int)local_30 != 0) && (FStack_38.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_38.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_38,0,0,0x10);
      local_30 = local_30 & 0xffffffff00000000;
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    if (FStack_38.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_38.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_40.AccessDetector);
    fVar6 = *(float *)&(param_2->LastScreenSpacePosition).field_0x4;
    lVar5 = 0x310;
    if (this->bIsFineTune == false) {
      lVar5 = 0x2f0;
    }
    pfVar4 = TAttribute<float>::Get((TAttribute<float> *)((longlong)&this->_padding_ + lVar5));
    fVar6 = ((float)((this->MouseDownPosition).field0_0x0._s_0.Y - (double)(int)fVar6) /
            (float)this->PixelDelta) * *pfVar4 + this->MouseDownValue;
    if (__real_3f800000 <= fVar6) {
      fVar6 = __real_3f800000;
    }
    if (fVar6 <= 0.0) {
      fVar6 = 0.0;
    }
    pbVar3 = TAttribute<bool>::Get(&this->bMouseUsesStep);
    if (*pbVar3 != false) {
      pfVar4 = TAttribute<float>::Get(&this->StepSize);
      fVar1 = *pfVar4;
      pfVar4 = TAttribute<float>::Get(&this->StepSize);
      fVar6 = (float)((int)ROUND((fVar6 + fVar6) / fVar1 + __real_3f000000) >> 1) * *pfVar4;
    }
    CommitValue(this,fVar6);
    FReply::FReply(__return_storage_ptr__,true);
    return __return_storage_ptr__;
  }
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnPaint @ 14d952b20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SAudioMaterialKnob::OnPaint
          (SAudioMaterialKnob *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
          FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  TWeakObjectPtr<UMaterialInstanceDynamic,FWeakObjectPtr> *this_00;
  undefined1 uVar1;
  TVector2<float>_u_0_s_0 TVar2;
  FAudioMaterialKnobStyle *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  float *pfVar8;
  UMaterialInstanceDynamic *pUVar9;
  FName *pFVar10;
  UObject *pUVar11;
  ESlateDrawEffect EVar12;
  FNameEntryId FVar13;
  float fVar14;
  undefined1 auStackY_1d8 [32];
  FName local_1a8;
  FName local_1a0;
  FLinearColor_u_0 local_198;
  FName local_188;
  undefined8 local_178;
  FLinearColor_u_0 local_170;
  TTransform2<float> local_160;
  FSlateBrush local_148;
  TVector2<float>_u_0 local_98;
  float local_90;
  undefined8 local_8c;
  FName local_84;
  float local_7c [2];
  float afStack_74 [2];
  TVector2<float>_u_0 local_6c;
  byte local_64;
  ulonglong local_60;
  
  local_60 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  if (this->AudioMaterialKnobStyle != (FAudioMaterialKnobStyle *)0x0) {
    this_00 = &this->DynamicMaterial;
    bVar7 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
    if (bVar7) {
      pfVar8 = TAttribute<float>::Get(&this->ValueAttribute);
      fVar14 = *pfVar8;
      pUVar9 = (UMaterialInstanceDynamic *)FWeakObjectPtr::Get(&this_00->WeakPtr);
      uVar5 = *(undefined8 *)&(this->AudioMaterialKnobStyle->KnobAccentColor).field0_0x0;
      uVar6 = *(undefined8 *)
               ((longlong)&(this->AudioMaterialKnobStyle->KnobAccentColor).field0_0x0 + 8);
      pFVar10 = ::FName::FName(&local_1a8,"Color_2");
      local_198._s_0.R = (float)uVar5;
      local_198._s_0.G = (float)((ulonglong)uVar5 >> 0x20);
      local_198._s_0.B = (float)uVar6;
      local_198._s_0.A = (float)((ulonglong)uVar6 >> 0x20);
      UMaterialInstanceDynamic::SetVectorParameterValue
                (pUVar9,*pFVar10,(FLinearColor *)&local_198._s_0);
      pUVar9 = (UMaterialInstanceDynamic *)FWeakObjectPtr::Get(&this_00->WeakPtr);
      uVar5 = *(undefined8 *)&(this->AudioMaterialKnobStyle->KnobMainColor).field0_0x0;
      uVar6 = *(undefined8 *)
               ((longlong)&(this->AudioMaterialKnobStyle->KnobMainColor).field0_0x0 + 8);
      pFVar10 = ::FName::FName(&local_1a8,"Color_1");
      local_198._s_0.R = (float)uVar5;
      local_198._s_0.G = (float)((ulonglong)uVar5 >> 0x20);
      local_198._s_0.B = (float)uVar6;
      local_198._s_0.A = (float)((ulonglong)uVar6 >> 0x20);
      UMaterialInstanceDynamic::SetVectorParameterValue
                (pUVar9,*pFVar10,(FLinearColor *)&local_198._s_0);
      pUVar9 = (UMaterialInstanceDynamic *)FWeakObjectPtr::Get(&this_00->WeakPtr);
      uVar5 = *(undefined8 *)&(this->AudioMaterialKnobStyle->KnobBarColor).field0_0x0;
      uVar6 = *(undefined8 *)
               ((longlong)&(this->AudioMaterialKnobStyle->KnobBarColor).field0_0x0 + 8);
      pFVar10 = ::FName::FName(&local_1a8,"BarColor");
      local_198._s_0.R = (float)uVar5;
      local_198._s_0.G = (float)((ulonglong)uVar5 >> 0x20);
      local_198._s_0.B = (float)uVar6;
      local_198._s_0.A = (float)((ulonglong)uVar6 >> 0x20);
      UMaterialInstanceDynamic::SetVectorParameterValue
                (pUVar9,*pFVar10,(FLinearColor *)&local_198._s_0);
      pUVar9 = (UMaterialInstanceDynamic *)FWeakObjectPtr::Get(&this_00->WeakPtr);
      uVar5 = *(undefined8 *)&(this->AudioMaterialKnobStyle->KnobBarShadowColor).field0_0x0;
      uVar6 = *(undefined8 *)
               ((longlong)&(this->AudioMaterialKnobStyle->KnobBarShadowColor).field0_0x0 + 8);
      pFVar10 = ::FName::FName(&local_1a8,"BarShadowColor");
      local_198._s_0.R = (float)uVar5;
      local_198._s_0.G = (float)((ulonglong)uVar5 >> 0x20);
      local_198._s_0.B = (float)uVar6;
      local_198._s_0.A = (float)((ulonglong)uVar6 >> 0x20);
      UMaterialInstanceDynamic::SetVectorParameterValue
                (pUVar9,*pFVar10,(FLinearColor *)&local_198._s_0);
      pUVar9 = (UMaterialInstanceDynamic *)FWeakObjectPtr::Get(&this_00->WeakPtr);
      uVar5 = *(undefined8 *)&(this->AudioMaterialKnobStyle->KnobBarFillMaxColor).field0_0x0;
      uVar6 = *(undefined8 *)
               ((longlong)&(this->AudioMaterialKnobStyle->KnobBarFillMaxColor).field0_0x0 + 8);
      pFVar10 = ::FName::FName(&local_1a8,"Led_Max");
      local_198._s_0.R = (float)uVar5;
      local_198._s_0.G = (float)((ulonglong)uVar5 >> 0x20);
      local_198._s_0.B = (float)uVar6;
      local_198._s_0.A = (float)((ulonglong)uVar6 >> 0x20);
      UMaterialInstanceDynamic::SetVectorParameterValue
                (pUVar9,*pFVar10,(FLinearColor *)&local_198._s_0);
      pUVar9 = (UMaterialInstanceDynamic *)FWeakObjectPtr::Get(&this_00->WeakPtr);
      uVar5 = *(undefined8 *)&(this->AudioMaterialKnobStyle->KnobBarFillMidColor).field0_0x0;
      uVar6 = *(undefined8 *)
               ((longlong)&(this->AudioMaterialKnobStyle->KnobBarFillMidColor).field0_0x0 + 8);
      pFVar10 = ::FName::FName(&local_1a8,"Led_Med");
      local_198._s_0.R = (float)uVar5;
      local_198._s_0.G = (float)((ulonglong)uVar5 >> 0x20);
      local_198._s_0.B = (float)uVar6;
      local_198._s_0.A = (float)((ulonglong)uVar6 >> 0x20);
      UMaterialInstanceDynamic::SetVectorParameterValue
                (pUVar9,*pFVar10,(FLinearColor *)&local_198._s_0);
      pUVar9 = (UMaterialInstanceDynamic *)FWeakObjectPtr::Get(&this_00->WeakPtr);
      uVar5 = *(undefined8 *)&(this->AudioMaterialKnobStyle->KnobBarFillMinColor).field0_0x0;
      uVar6 = *(undefined8 *)
               ((longlong)&(this->AudioMaterialKnobStyle->KnobBarFillMinColor).field0_0x0 + 8);
      pFVar10 = ::FName::FName(&local_1a8,"LED_Min");
      local_198._s_0.R = (float)uVar5;
      local_198._s_0.G = (float)((ulonglong)uVar5 >> 0x20);
      local_198._s_0.B = (float)uVar6;
      local_198._s_0.A = (float)((ulonglong)uVar6 >> 0x20);
      UMaterialInstanceDynamic::SetVectorParameterValue
                (pUVar9,*pFVar10,(FLinearColor *)&local_198._s_0);
      pUVar9 = (UMaterialInstanceDynamic *)FWeakObjectPtr::Get(&this_00->WeakPtr);
      uVar5 = *(undefined8 *)&(this->AudioMaterialKnobStyle->KnobIndicatorDotColor).field0_0x0;
      uVar6 = *(undefined8 *)
               ((longlong)&(this->AudioMaterialKnobStyle->KnobIndicatorDotColor).field0_0x0 + 8);
      pFVar10 = ::FName::FName(&local_1a8,"DotColor");
      local_198._s_0.R = (float)uVar5;
      local_198._s_0.G = (float)((ulonglong)uVar5 >> 0x20);
      local_198._s_0.B = (float)uVar6;
      local_198._s_0.A = (float)((ulonglong)uVar6 >> 0x20);
      UMaterialInstanceDynamic::SetVectorParameterValue
                (pUVar9,*pFVar10,(FLinearColor *)&local_198._s_0);
      pUVar9 = (UMaterialInstanceDynamic *)FWeakObjectPtr::Get(&this_00->WeakPtr);
      uVar5 = *(undefined8 *)&(this->AudioMaterialKnobStyle->KnobBarFillTintColor).field0_0x0;
      uVar6 = *(undefined8 *)
               ((longlong)&(this->AudioMaterialKnobStyle->KnobBarFillTintColor).field0_0x0 + 8);
      pFVar10 = ::FName::FName(&local_1a8,"LedTint");
      local_198._s_0.R = (float)uVar5;
      local_198._s_0.G = (float)((ulonglong)uVar5 >> 0x20);
      local_198._s_0.B = (float)uVar6;
      local_198._s_0.A = (float)((ulonglong)uVar6 >> 0x20);
      UMaterialInstanceDynamic::SetVectorParameterValue
                (pUVar9,*pFVar10,(FLinearColor *)&local_198._s_0);
      pUVar9 = (UMaterialInstanceDynamic *)FWeakObjectPtr::Get(&this_00->WeakPtr);
      uVar5 = *(undefined8 *)&(this->AudioMaterialKnobStyle->KnobEdgeFillColor).field0_0x0;
      uVar6 = *(undefined8 *)
               ((longlong)&(this->AudioMaterialKnobStyle->KnobEdgeFillColor).field0_0x0 + 8);
      pFVar10 = ::FName::FName(&local_1a8,"EdgeFillColor");
      local_198._s_0.R = (float)uVar5;
      local_198._s_0.G = (float)((ulonglong)uVar5 >> 0x20);
      local_198._s_0.B = (float)uVar6;
      local_198._s_0.A = (float)((ulonglong)uVar6 >> 0x20);
      UMaterialInstanceDynamic::SetVectorParameterValue
                (pUVar9,*pFVar10,(FLinearColor *)&local_198._s_0);
      pUVar9 = (UMaterialInstanceDynamic *)FWeakObjectPtr::Get(&this_00->WeakPtr);
      uVar5 = *(undefined8 *)&(this->AudioMaterialKnobStyle->KnobShadowColor).field0_0x0;
      uVar6 = *(undefined8 *)
               ((longlong)&(this->AudioMaterialKnobStyle->KnobShadowColor).field0_0x0 + 8);
      pFVar10 = ::FName::FName(&local_1a8,"ShadowColor");
      local_198._s_0.R = (float)uVar5;
      local_198._s_0.G = (float)((ulonglong)uVar5 >> 0x20);
      local_198._s_0.B = (float)uVar6;
      local_198._s_0.A = (float)((ulonglong)uVar6 >> 0x20);
      UMaterialInstanceDynamic::SetVectorParameterValue
                (pUVar9,*pFVar10,(FLinearColor *)&local_198._s_0);
      pUVar9 = (UMaterialInstanceDynamic *)FWeakObjectPtr::Get(&this_00->WeakPtr);
      uVar5 = *(undefined8 *)&(this->AudioMaterialKnobStyle->KnobSmoothBevelColor).field0_0x0;
      uVar6 = *(undefined8 *)
               ((longlong)&(this->AudioMaterialKnobStyle->KnobSmoothBevelColor).field0_0x0 + 8);
      pFVar10 = ::FName::FName(&local_1a8,"SmoothBevelColor");
      local_198._s_0.R = (float)uVar5;
      local_198._s_0.G = (float)((ulonglong)uVar5 >> 0x20);
      local_198._s_0.B = (float)uVar6;
      local_198._s_0.A = (float)((ulonglong)uVar6 >> 0x20);
      UMaterialInstanceDynamic::SetVectorParameterValue
                (pUVar9,*pFVar10,(FLinearColor *)&local_198._s_0);
      pUVar9 = (UMaterialInstanceDynamic *)FWeakObjectPtr::Get(&this_00->WeakPtr);
      pFVar10 = ::FName::FName(&local_1a8,"VALUE");
      if (__real_3f800000 <= fVar14) {
        fVar14 = __real_3f800000;
      }
      if (fVar14 <= 0.0) {
        fVar14 = 0.0;
      }
      UMaterialInstanceDynamic::SetScalarParameterValue(pUVar9,*pFVar10,fVar14);
      pUVar9 = (UMaterialInstanceDynamic *)FWeakObjectPtr::Get(&this_00->WeakPtr);
      local_1a8 = *(FName *)&param_2->Size;
      pFVar10 = ::FName::FName(&local_1a0,"LocalWidth");
      UMaterialInstanceDynamic::SetScalarParameterValue
                (pUVar9,*pFVar10,(float)local_1a8.ComparisonIndex.Value);
      pUVar9 = (UMaterialInstanceDynamic *)FWeakObjectPtr::Get(&this_00->WeakPtr);
      local_1a8 = *(FName *)&param_2->Size;
      pFVar10 = ::FName::FName(&local_1a0,"LocalHeigth");
      UMaterialInstanceDynamic::SetScalarParameterValue(pUVar9,*pFVar10,(float)local_1a8.Number);
      if ((!param_7) || (bVar7 = true, *(char *)((longlong)&this->_padding_ + 2) == '\0')) {
        bVar7 = false;
      }
      local_1a8 = *(FName *)&param_2->Size;
      local_170._0_8_ = *(undefined8 *)&(param_6->ColorAndOpacityTint).field0_0x0;
      local_170._8_8_ = *(undefined8 *)((longlong)&(param_6->ColorAndOpacityTint).field0_0x0 + 8);
      local_1a0.ComparisonIndex = local_1a8.ComparisonIndex.Value;
      FVar13.Value = local_1a8.Number;
      if ((float)local_1a0.ComparisonIndex.Value <= (float)local_1a8.Number) {
        FVar13.Value = local_1a0.ComparisonIndex.Value;
      }
      local_1a0 = local_1a8;
      local_178 = (TVector2<float>_u_0)local_1a8;
      FSlateBrush::FSlateBrush(&local_148);
      pUVar11 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      FSlateBrush::SetResourceObject(&local_148,pUVar11);
      TVar2 = (param_2->AbsolutePosition).field0_0x0._s_0;
      local_198._s_0.G = TVar2.X;
      local_198._s_0.B = TVar2.Y;
      local_1a8.Number = FVar13.Value;
      local_1a8.ComparisonIndex.Value = FVar13.Value;
      fVar14 = param_2->Scale;
      local_1a0.ComparisonIndex.Value =
           (uint)((float)(undefined4)local_178 * __real_3f000000 -
                 (float)FVar13.Value * __real_3f000000);
      local_1a0.Number =
           (uint)((float)local_178._4_4_ * __real_3f000000 - (float)FVar13.Value * __real_3f000000);
      local_188 = local_1a0;
      local_178._0_4_ = (float)local_1a0.ComparisonIndex.Value * fVar14 + local_198._s_0.G;
      local_178._4_4_ = (float)local_1a0.Number * fVar14 + local_198._s_0.B;
      local_198._s_0.R = (float)___xmm_3f80000000000000000000003f800000;
      local_198._s_0.G = (float)((ulonglong)___xmm_3f80000000000000000000003f800000 >> 0x20);
      local_198._s_0.B = (float)_UNK_15076b188;
      local_198._s_0.A = (float)((ulonglong)_UNK_15076b188 >> 0x20);
      Concatenate<TTransform2<float>_>
                (&local_160,(TTransform2<float> *)&local_198._s_0,
                 &param_2->AccumulatedRenderTransform);
      local_98 = local_178;
      local_84 = local_1a8;
      local_64 = param_2->bHasRenderTransform * '\x02' | local_64 & 0xfc;
      local_8c = 0;
      local_6c = local_160.Trans.field0_0x0;
      local_7c[0] = local_160.M.M[0][0];
      local_7c[1] = local_160.M.M[0][1];
      afStack_74[0] = local_160.M.M[1][0];
      afStack_74[1] = local_160.M.M[1][1];
      EVar12 = DisabledEffect;
      if (bVar7) {
        EVar12 = None;
      }
      local_90 = fVar14;
      FSlateDrawElement::MakeBox
                (param_4,param_5,(FPaintGeometry *)&local_98._s_0,&local_148,EVar12,
                 (FLinearColor *)&local_170._s_0);
      local_148._padding_ = (longlong)&___7FSlateBrush__6B_;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_148.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
      param_5 = param_5 + 1;
    }
    else {
      pFVar3 = this->AudioMaterialKnobStyle;
      if (pFVar3 != (FAudioMaterialKnobStyle *)0x0) {
        pcVar4 = *(code **)(pFVar3->_padding_ + 0x18);
        pUVar11 = FWeakObjectPtr::Get(&(this->Owner).WeakPtr);
        local_1a8 = (FName)(*pcVar4)(pFVar3,pUVar11);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_1a8 != (FName)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_1a8);
        }
        FWeakObjectPtr::operator=(&this_00->WeakPtr,(FObjectPtr)&local_1a8);
      }
    }
  }
  return param_5;
}

// SetDesiredSizeOverride @ 14d968860

void __thiscall
SAudioMaterialKnob::SetDesiredSizeOverride(SAudioMaterialKnob *this,TVector2<double> *param_1)

{
  FDestructionSentinel local_58;
  TVector2<double>_u_0 local_40;
  undefined1 local_30;
  undefined1 local_28;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_20;
  ForAnyElementType FStack_18;
  ulonglong local_10;
  
  local_40._s_0.X = (param_1->field0_0x0)._s_0.X;
  local_40._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  local_30 = 1;
  local_28 = 1;
  local_10 = 0;
  local_20.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_18.Data = (FScriptContainerElement *)0x0;
  SWidget::
  SetAttribute<TOptional<UE::Math::TVector2<double>_>,TOptional<UE::Math::TVector2<double>_>_>
            ((SWidget *)this,&this->DesiredSizeOverride,
             (TAttribute<TOptional<UE::Math::TVector2<double>_>_> *)&local_40._s_0,Layout);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_20,(FWriteAccessScope *)&local_58);
  if (((int)local_10 != 0) && (FStack_18.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_18.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_18,0,0,0x10);
    local_10 = local_10 & 0xffffffff00000000;
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  if (FStack_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_18.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_20.AccessDetector);
  return;
}

// SetFineTuneSpeed @ 14d968d00

void __thiscall SAudioMaterialKnob::SetFineTuneSpeed(SAudioMaterialKnob *this,float param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->FineTuneSpeed).Getter);
  (this->FineTuneSpeed).Value = param_1;
  (this->FineTuneSpeed).bIsSet = true;
  return;
}

// SetLocked @ 14d969cc0

void __thiscall SAudioMaterialKnob::SetLocked(SAudioMaterialKnob *this,bool param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->bLocked).Getter);
  (this->bLocked).Value = param_1;
  (this->bLocked).bIsSet = true;
  return;
}

// SetMouseUsesStep @ 14d96aa40

void __thiscall SAudioMaterialKnob::SetMouseUsesStep(SAudioMaterialKnob *this,bool param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->bMouseUsesStep).Getter);
  (this->bMouseUsesStep).Value = param_1;
  (this->bMouseUsesStep).bIsSet = true;
  return;
}

// SetOutputRange @ 14d96b100

void __thiscall
SAudioMaterialKnob::SetOutputRange(SAudioMaterialKnob *this,TVector2<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  float *pfVar5;
  uint uVar6;
  uint uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  dVar8 = (param_1->field0_0x0)._s_0.Y;
  dVar1 = (param_1->field0_0x0)._s_0.X;
  if (dVar1 <= dVar8) {
    dVar8 = dVar1;
  }
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  (this->OutputRange).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->OutputRange).field0_0x0._s_0.Y = dVar1;
  (this->OutputRange).field0_0x0._s_0.X = dVar8;
  pfVar5 = TAttribute<float>::Get(&this->ValueAttribute);
  dVar4 = __real_3ff0000000000000;
  dVar8 = (this->NormalizedLinearSliderRange).field0_0x0._s_0.Y;
  dVar1 = (this->NormalizedLinearSliderRange).field0_0x0._s_0.X;
  dVar3 = dVar8 - dVar1;
  uVar6 = SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar7 = (uint)((ulonglong)dVar3 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (__real_3e45798ee2308c3a <= (double)CONCAT44(uVar7,uVar6) &&
      (double)CONCAT44(uVar7,uVar6) != __real_3e45798ee2308c3a) {
    dVar9 = ((double)*pfVar5 - dVar1) / dVar3;
  }
  else {
    dVar9 = __real_3ff0000000000000;
    if ((double)*pfVar5 < dVar8) {
      dVar9 = 0.0;
    }
  }
  dVar8 = (this->OutputRange).field0_0x0._s_0.X;
  if (__real_3ff0000000000000 <= dVar9) {
    dVar9 = __real_3ff0000000000000;
  }
  dVar2 = (this->OutputRange).field0_0x0._s_0.Y;
  dVar10 = dVar2 - dVar8;
  if (dVar9 <= 0.0) {
    dVar9 = 0.0;
  }
  dVar9 = (double)(float)(dVar9 * dVar10 + dVar8);
  if (dVar2 <= dVar9) {
    dVar9 = dVar2;
  }
  if (dVar9 <= dVar8) {
    dVar9 = dVar8;
  }
  if (__real_3e45798ee2308c3a <
      (double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar10,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    dVar8 = ((double)(float)dVar9 - dVar8) / dVar10;
  }
  else {
    dVar8 = __real_3ff0000000000000;
    if ((double)(float)dVar9 < dVar2) {
      dVar8 = 0.0;
    }
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ValueAttribute).Getter);
  if (dVar4 <= dVar8) {
    dVar8 = dVar4;
  }
  (this->ValueAttribute).bIsSet = true;
  if (dVar8 <= 0.0) {
    dVar8 = 0.0;
  }
  (this->ValueAttribute).Value = (float)(dVar8 * dVar3 + dVar1);
  return;
}

// SetStepSize @ 14d96dbb0

void __thiscall SAudioMaterialKnob::SetStepSize(SAudioMaterialKnob *this,float param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->StepSize).Getter);
  (this->StepSize).Value = param_1;
  (this->StepSize).bIsSet = true;
  return;
}

// SetTuneSpeed @ 14d96e260

void __thiscall SAudioMaterialKnob::SetTuneSpeed(SAudioMaterialKnob *this,float param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->TuneSpeed).Getter);
  (this->TuneSpeed).Value = param_1;
  (this->TuneSpeed).bIsSet = true;
  return;
}

// SetValue @ 14d96eb60

void __thiscall SAudioMaterialKnob::SetValue(SAudioMaterialKnob *this,TAttribute<float> *param_1)

{
  SetWidgetAttribute<float,float>((SWidget *)this,&this->ValueAttribute,param_1,Paint);
  return;
}

// SupportsKeyboardFocus @ 14d972520

bool __thiscall SAudioMaterialKnob::SupportsKeyboardFocus(SAudioMaterialKnob *this)

{
  bool *pbVar1;
  
  pbVar1 = TAttribute<bool>::Get(&this->bIsFocusable);
  return *pbVar1;
}

