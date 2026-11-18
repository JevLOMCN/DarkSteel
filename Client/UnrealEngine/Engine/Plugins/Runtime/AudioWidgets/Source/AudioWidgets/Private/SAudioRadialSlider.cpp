// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 26

// SAudioRadialSlider @ 14d8b7620

/* WARNING: Enum "Type": Some values do not have unique names */

SAudioRadialSlider * __thiscall SAudioRadialSlider::SAudioRadialSlider(SAudioRadialSlider *this)

{
  SCompoundWidget::SCompoundWidget((SCompoundWidget *)this);
  this->_padding_ = (longlong)&___7SAudioRadialSlider__6B_;
  *(undefined8 *)&this->OnValueChanged = 0;
  *(undefined8 *)&(this->OnValueChanged).field_0x8 = 0;
  *(undefined4 *)&(this->OnValueChanged).field_0x10 = 0;
  *(undefined8 *)&this->OnMouseCaptureBegin = 0;
  *(undefined8 *)&(this->OnMouseCaptureBegin).field_0x8 = 0;
  *(undefined4 *)&(this->OnMouseCaptureBegin).field_0x10 = 0;
  *(undefined8 *)&this->OnMouseCaptureEnd = 0;
  *(undefined8 *)&(this->OnMouseCaptureEnd).field_0x8 = 0;
  *(undefined4 *)&(this->OnMouseCaptureEnd).field_0x10 = 0;
  (this->SliderValue).Value = 0.0;
  (this->SliderValue).bIsSet = false;
  *(undefined8 *)&(this->SliderValue).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->SliderValue).Getter = 0;
  *(undefined8 *)&(this->SliderValue).Getter.field_0x8 = 0;
  FRuntimeFloatCurve::FRuntimeFloatCurve(&this->SliderCurve);
  (this->CenterBackgroundColor).Value.ColorUseRule = UseColor_Specified;
  (this->CenterBackgroundColor).bIsSet = false;
  *(undefined8 *)&(this->CenterBackgroundColor).Getter.field_0x8 = 0;
  *(undefined8 *)&(this->CenterBackgroundColor).Value.SpecifiedColor.field0_0x0 = 0x3f800000;
  (this->CenterBackgroundColor).Value.SpecifiedColor.field0_0x0._s_0.B = 1.0;
  (this->CenterBackgroundColor).Value.SpecifiedColor.field0_0x0._s_0.A = 1.0;
  *(undefined8 *)&(this->CenterBackgroundColor).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->CenterBackgroundColor).Getter = 0;
  (this->SliderProgressColor).Value.ColorUseRule = UseColor_Specified;
  (this->SliderProgressColor).bIsSet = false;
  *(undefined8 *)&(this->SliderProgressColor).Getter.field_0x8 = 0;
  *(undefined8 *)&(this->SliderProgressColor).Value.SpecifiedColor.field0_0x0 = 0x3f800000;
  (this->SliderProgressColor).Value.SpecifiedColor.field0_0x0._s_0.B = 1.0;
  (this->SliderProgressColor).Value.SpecifiedColor.field0_0x0._s_0.A = 1.0;
  *(undefined8 *)&(this->SliderProgressColor).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->SliderProgressColor).Getter = 0;
  (this->SliderBarColor).Value.ColorUseRule = UseColor_Specified;
  (this->SliderBarColor).bIsSet = false;
  *(undefined8 *)&(this->SliderBarColor).Getter.field_0x8 = 0;
  *(undefined8 *)&(this->SliderBarColor).Value.SpecifiedColor.field0_0x0 = 0x3f800000;
  (this->SliderBarColor).Value.SpecifiedColor.field0_0x0._s_0.B = 1.0;
  (this->SliderBarColor).Value.SpecifiedColor.field0_0x0._s_0.A = 1.0;
  *(undefined8 *)&(this->SliderBarColor).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->SliderBarColor).Getter = 0;
  (this->LabelBackgroundColor).Value.ColorUseRule = UseColor_Specified;
  (this->LabelBackgroundColor).bIsSet = false;
  *(undefined8 *)&(this->LabelBackgroundColor).Getter.field_0x8 = 0;
  *(undefined8 *)&(this->LabelBackgroundColor).Value.SpecifiedColor.field0_0x0 = 0x3f800000;
  (this->LabelBackgroundColor).Value.SpecifiedColor.field0_0x0._s_0.B = 1.0;
  (this->LabelBackgroundColor).Value.SpecifiedColor.field0_0x0._s_0.A = 1.0;
  *(undefined8 *)&(this->LabelBackgroundColor).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->LabelBackgroundColor).Getter = 0;
  (this->HandStartEndRatio).Value.field0_0x0._s_0.X = 0.0;
  (this->HandStartEndRatio).Value.field0_0x0._s_0.Y = 0.0;
  (this->HandStartEndRatio).bIsSet = false;
  *(undefined8 *)&(this->HandStartEndRatio).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->HandStartEndRatio).Getter = 0;
  *(undefined8 *)&(this->HandStartEndRatio).Getter.field_0x8 = 0;
  (this->WidgetLayout).Value = Layout_LabelTop;
  (this->WidgetLayout).bIsSet = false;
  *(undefined8 *)&(this->WidgetLayout).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->WidgetLayout).Getter = 0;
  *(undefined8 *)&(this->WidgetLayout).Getter.field_0x8 = 0;
  (this->DesiredSizeOverride).Value.bIsSet = false;
  (this->DesiredSizeOverride).bIsSet = false;
  *(undefined8 *)&(this->DesiredSizeOverride).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->DesiredSizeOverride).Getter = 0;
  *(undefined8 *)&(this->DesiredSizeOverride).Getter.field_0x8 = 0;
  (this->RadialSlider).Object = (SRadialSlider *)0x0;
  (this->RadialSlider).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  (this->CenterBackgroundImage).Object = (SImage *)0x0;
  (this->CenterBackgroundImage).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->OuterBackgroundImage).Object = (SImage *)0x0;
  (this->OuterBackgroundImage).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->Label).Object = (SAudioTextBox *)0x0;
  (this->Label).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->LayoutWidgetSwitcher).Object = (SWidgetSwitcher *)0x0;
  (this->LayoutWidgetSwitcher).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->OutputRange).field0_0x0._s_0.X = 0.0;
  (this->OutputRange).field0_0x0._s_0.Y = 1.0;
  return this;
}

// ~SAudioRadialSlider @ 14d8c0130

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SAudioRadialSlider::~SAudioRadialSlider(SAudioRadialSlider *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7SAudioRadialSlider__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->LayoutWidgetSwitcher).SharedReferenceCount.ReferenceController);
  TSharedPtr<SAudioTextBox,1>::~TSharedPtr<SAudioTextBox,1>(&this->Label);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OuterBackgroundImage).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CenterBackgroundImage).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->RadialSlider).SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->DesiredSizeOverride).Getter);
  pvVar1 = *(void **)&(this->DesiredSizeOverride).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->DesiredSizeOverride).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->WidgetLayout).Getter);
  pvVar1 = *(void **)&(this->WidgetLayout).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->WidgetLayout).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->HandStartEndRatio).Getter);
  pvVar1 = *(void **)&(this->HandStartEndRatio).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->HandStartEndRatio).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->LabelBackgroundColor).Getter);
  pvVar1 = *(void **)&(this->LabelBackgroundColor).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->LabelBackgroundColor).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->SliderBarColor).Getter);
  pvVar1 = *(void **)&(this->SliderBarColor).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->SliderBarColor).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->SliderProgressColor).Getter);
  pvVar1 = *(void **)&(this->SliderProgressColor).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->SliderProgressColor).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->CenterBackgroundColor).Getter);
  pvVar1 = *(void **)&(this->CenterBackgroundColor).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->CenterBackgroundColor).Getter);
  pFVar2 = (this->SliderCurve).EditorCurveData.Keys.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  (this->SliderCurve).EditorCurveData._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar1 = (void *)(this->SliderCurve).EditorCurveData._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined4 *)&(this->SliderCurve).EditorCurveData._padding_ = 0;
  pvVar1 = (void *)(this->SliderCurve).EditorCurveData._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->SliderCurve).EditorCurveData._padding_);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->SliderValue).Getter);
  pvVar1 = *(void **)&(this->SliderValue).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->SliderValue).Getter);
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
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  return;
}

// operator() @ 14d8c4d40

void __thiscall
`SAudioRadialSlider::Construct'::__l2::<lambda_1>::operator()
          (void *this,FText *param_1,Type param_2)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  FString *pFVar5;
  float *pfVar6;
  wchar_t *_Str;
  float fVar7;
  double dVar8;
  FDestructionSentinel local_88;
  FReadAccessScope local_70;
  FReadAccessScope local_58;
  undefined1 local_40 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_38;
  ForAnyElementType FStack_30;
  ulonglong local_28;
  
  pFVar5 = FText::ToString(param_1);
  if ((pFVar5->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
  dVar8 = _wtof(_Str);
  fVar7 = (float)(**(code **)(**(longlong **)this + 0x2a0))(*(longlong **)this,(float)dVar8);
  pfVar6 = TAttribute<float>::Get((TAttribute<float> *)(*(longlong *)this + 0x2f8));
  if (__real_322bcc77 < (float)((uint)(fVar7 - *pfVar6) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    lVar1 = *(longlong *)this;
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(lVar1 + 0x300));
    *(float *)(lVar1 + 0x2f8) = fVar7;
    *(undefined1 *)(lVar1 + 0x2fc) = 1;
    lVar1 = *(longlong *)this;
    if (*(longlong *)(lVar1 + 0x4e8) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    local_40[4] = true;
    local_28 = 0;
    local_38.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_30.Data = (FScriptContainerElement *)0x0;
    local_40._0_4_ = fVar7;
    SRadialSlider::SetValue(*(SRadialSlider **)(lVar1 + 0x4e8),(TAttribute<float> *)local_40);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_38,(FWriteAccessScope *)&local_88);
    if (((int)local_28 != 0) && (FStack_30.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_30.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_30,0,0,0x10);
      local_28 = local_28 & 0xffffffff00000000;
    }
    if (local_88.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
    }
    if (FStack_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_30.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_38.AccessDetector);
    lVar1 = *(longlong *)this;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar1 + 0x2a8),&local_58);
    if ((*(int *)(lVar1 + 0x2b8) != 0) &&
       (plVar2 = *(longlong **)(lVar1 + 0x2b0), plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x68))(plVar2,fVar7);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_58);
    lVar1 = *(longlong *)this;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar1 + 0x2d8),&local_70);
    if ((*(int *)(lVar1 + 0x2e8) != 0) && (*(longlong **)(lVar1 + 0x2e0) != (longlong *)0x0)) {
      (**(code **)(**(longlong **)(lVar1 + 0x2e0) + 0x68))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_70);
  }
  return;
}

// operator() @ 14d8c9ad0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`SAudioRadialSlider::Construct'::__l2::<lambda_2>::operator()(void *this,float param_1)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  float fVar5;
  FReadAccessScope local_38 [2];
  
  lVar1 = *(longlong *)this;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(lVar1 + 0x300));
  *(float *)(lVar1 + 0x2f8) = param_1;
  *(undefined1 *)(lVar1 + 0x2fc) = 1;
  lVar1 = *(longlong *)this;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar1 + 0x2a8),local_38);
  if ((*(int *)(lVar1 + 0x2b8) != 0) &&
     (plVar2 = *(longlong **)(lVar1 + 0x2b0), plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x68))(plVar2,param_1);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (local_38);
  fVar5 = (float)(**(code **)(**(longlong **)this + 0x298))(*(longlong **)this,param_1);
  lVar1 = *(longlong *)this;
  if (*(longlong *)(lVar1 + 0x518) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  SAudioTextBox::SetValueText(*(SAudioTextBox **)(lVar1 + 0x518),fVar5);
  return;
}

// ComputeDesiredSize @ 14d8e5e90

/* WARNING: Enum "Type": Some values do not have unique names */

TVector2<double> * __thiscall
SAudioRadialSlider::ComputeDesiredSize
          (SAudioRadialSlider *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  float fVar1;
  FAudioRadialSliderStyle *pFVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  TOptional<UE::Math::TVector2<double>_> *pTVar6;
  TVector2<double> *pTVar7;
  double dVar8;
  
  pTVar6 = TAttribute<TOptional<UE::Math::TVector2<double>_>_>::Get(&this->DesiredSizeOverride);
  if (pTVar6->bIsSet == false) {
    pFVar2 = this->Style;
    fVar1 = *(float *)&(pFVar2->TextBoxStyle).BackgroundImage.ImageSize.field_0x4;
    dVar4 = (double)*(float *)&(pFVar2->TextBoxStyle).BackgroundImage.ImageSize;
    dVar8 = (double)pFVar2->DefaultSliderRadius;
    if (dVar4 <= dVar8) {
      dVar4 = dVar8;
    }
    (__return_storage_ptr__->field0_0x0)._s_0.X = dVar4;
    (__return_storage_ptr__->field0_0x0)._s_0.Y =
         (double)fVar1 + dVar8 + (double)pFVar2->LabelPadding;
    return __return_storage_ptr__;
  }
  pTVar6 = TAttribute<TOptional<UE::Math::TVector2<double>_>_>::Get(&this->DesiredSizeOverride);
  if (pTVar6->bIsSet == false) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TVector2<double> *)(*pcVar3)();
      return pTVar7;
    }
  }
  dVar4 = (pTVar6->TypedValue).field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (pTVar6->TypedValue).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar4;
  return __return_storage_ptr__;
}

// Construct @ 14d8eb380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SAudioRadialSlider::Construct(SAudioRadialSlider *this,FArguments *param_1)

{
  byte *pbVar1;
  longlong *this_00;
  SRadialSlider *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  SWidgetSwitcher *pSVar4;
  code *pcVar5;
  TReferenceControllerBase<1> *pTVar6;
  undefined8 uVar7;
  EStyleColor EVar8;
  undefined2 uVar9;
  FSharedReferencer<1> FVar10;
  bool bVar11;
  char cVar12;
  byte bVar13;
  FRichCurve *pFVar14;
  ISlateStyle *pIVar15;
  FAudioRadialSliderStyle *pFVar16;
  FArguments *pFVar17;
  undefined8 *puVar18;
  ulong64 uVar19;
  FArguments *pFVar20;
  FSlateColor *pFVar21;
  TSharedRef<SWidgetSwitcher,1> *pTVar22;
  undefined1 in_R9B;
  float in_XMM1_Da;
  undefined1 auStackY_9e8 [32];
  uint in_stack_fffffffffffff638;
  FKeyHandle FVar23;
  T0RequiredArgs local_9b8;
  T0RequiredArgs local_9b7 [3];
  FLLMScope local_9b4;
  FLLMScope local_9b0 [2];
  TSlateDecl<SRadialSlider,RequiredArgs::T0RequiredArgs> local_9a8;
  TSharedPtr<SAudioTextBox,1> local_990;
  SWidgetSwitcher *local_980;
  TReferenceControllerBase<1> *pTStack_978;
  FKeyHandle local_970 [2];
  FKeyHandle local_968 [2];
  FName local_960;
  FName local_958;
  FMemScope local_950;
  FName local_948;
  FMemScope local_940;
  TSlateDecl<SAudioTextBox,RequiredArgs::T0RequiredArgs> local_938;
  FDestructionSentinel local_920;
  undefined1 *local_908;
  FDestructionSentinel local_900;
  undefined1 *local_8e8;
  FLinearColor_u_0 local_8d8;
  undefined4 local_8c8;
  FLinearColor_u_0 local_8b8;
  undefined4 local_8a8;
  FLinearColor_u_0 local_898;
  undefined4 local_888;
  FName local_878;
  TSharedRef<SAudioTextBox,1> local_870;
  SRadialSlider *local_860;
  TReferenceControllerBase<1> *pTStack_858;
  TSharedRef<SWidgetSwitcher,1> local_850;
  undefined4 local_838;
  undefined4 uStack_834;
  undefined4 uStack_830;
  undefined4 uStack_82c;
  FArguments local_828;
  FArguments local_598;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_9e8;
  this->Style = param_1->_Style;
  TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::operator=
            (&this->OnValueChanged,&param_1->_OnValueChanged);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->OnMouseCaptureBegin,&param_1->_OnMouseCaptureBegin);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->OnMouseCaptureEnd,&param_1->_OnMouseCaptureEnd);
  (this->SliderValue).Value = (param_1->_SliderValue).Value;
  (this->SliderValue).bIsSet = (param_1->_SliderValue).bIsSet;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->SliderValue).Getter,&(param_1->_SliderValue).Getter);
  uVar7 = *(undefined8 *)
           ((longlong)&(param_1->_CenterBackgroundColor).Value.SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->CenterBackgroundColor).Value.SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->_CenterBackgroundColor).Value.SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->CenterBackgroundColor).Value.SpecifiedColor.field0_0x0 + 8) =
       uVar7;
  EVar8 = (param_1->_CenterBackgroundColor).Value.ColorTableId;
  uVar9 = *(undefined2 *)&(param_1->_CenterBackgroundColor).Value.field_0x12;
  (this->CenterBackgroundColor).Value.ColorUseRule =
       (param_1->_CenterBackgroundColor).Value.ColorUseRule;
  (this->CenterBackgroundColor).Value.ColorTableId = EVar8;
  *(undefined2 *)&(this->CenterBackgroundColor).Value.field_0x12 = uVar9;
  (this->CenterBackgroundColor).bIsSet = (param_1->_CenterBackgroundColor).bIsSet;
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->CenterBackgroundColor).Getter,&(param_1->_CenterBackgroundColor).Getter);
  uVar7 = *(undefined8 *)
           ((longlong)&(param_1->_SliderProgressColor).Value.SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->SliderProgressColor).Value.SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->_SliderProgressColor).Value.SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->SliderProgressColor).Value.SpecifiedColor.field0_0x0 + 8) =
       uVar7;
  EVar8 = (param_1->_SliderProgressColor).Value.ColorTableId;
  uVar9 = *(undefined2 *)&(param_1->_SliderProgressColor).Value.field_0x12;
  (this->SliderProgressColor).Value.ColorUseRule =
       (param_1->_SliderProgressColor).Value.ColorUseRule;
  (this->SliderProgressColor).Value.ColorTableId = EVar8;
  *(undefined2 *)&(this->SliderProgressColor).Value.field_0x12 = uVar9;
  (this->SliderProgressColor).bIsSet = (param_1->_SliderProgressColor).bIsSet;
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->SliderProgressColor).Getter,&(param_1->_SliderProgressColor).Getter);
  uVar7 = *(undefined8 *)((longlong)&(param_1->_SliderBarColor).Value.SpecifiedColor.field0_0x0 + 8)
  ;
  *(undefined8 *)&(this->SliderBarColor).Value.SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->_SliderBarColor).Value.SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->SliderBarColor).Value.SpecifiedColor.field0_0x0 + 8) = uVar7;
  EVar8 = (param_1->_SliderBarColor).Value.ColorTableId;
  uVar9 = *(undefined2 *)&(param_1->_SliderBarColor).Value.field_0x12;
  (this->SliderBarColor).Value.ColorUseRule = (param_1->_SliderBarColor).Value.ColorUseRule;
  (this->SliderBarColor).Value.ColorTableId = EVar8;
  *(undefined2 *)&(this->SliderBarColor).Value.field_0x12 = uVar9;
  (this->SliderBarColor).bIsSet = (param_1->_SliderBarColor).bIsSet;
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->SliderBarColor).Getter,&(param_1->_SliderBarColor).Getter);
  TAttribute<UE::Math::TVector2<double>_>::operator=
            (&this->HandStartEndRatio,&param_1->_HandStartEndRatio);
  TAttribute<enum_EAudioRadialSliderLayout>::operator=(&this->WidgetLayout,&param_1->_WidgetLayout);
  TAttribute<TOptional<UE::Math::TVector2<double>_>_>::operator=
            (&this->DesiredSizeOverride,&param_1->_DesiredSizeOverride);
  FRuntimeFloatCurve::operator=(&this->SliderCurve,&param_1->_SliderCurve);
  pFVar14 = FRuntimeFloatCurve::GetRichCurve(&this->SliderCurve);
  FKeyHandle::FKeyHandle(local_970);
  FVar23.Index = in_stack_fffffffffffff638 & 0xffffff00;
  FRichCurve::AddKey(pFVar14,in_XMM1_Da,0.0,(bool)in_R9B,FVar23);
  pFVar14 = FRuntimeFloatCurve::GetRichCurve(&this->SliderCurve);
  FKeyHandle::FKeyHandle(local_968);
  FRichCurve::AddKey(pFVar14,in_XMM1_Da,__real_3f800000,(bool)in_R9B,
                     (FKeyHandle)(FVar23.Index & 0xffffff00));
  ::FName::FName(&local_960,"AudioWidgetsStyle");
  pIVar15 = FSlateStyleRegistry::FindSlateStyle(&local_960);
  if (pIVar15 != (ISlateStyle *)0x0) {
    ::FName::FName(&local_878,"AudioRadialSlider.Style");
    pFVar16 = (FAudioRadialSliderStyle *)
              (**(code **)((longlong)*pIVar15 + 0xa0))(pIVar15,FAudioRadialSliderStyle::TypeName);
    if (pFVar16 == (FAudioRadialSliderStyle *)0x0) {
      pFVar16 = FAudioRadialSliderStyle::GetDefault();
    }
    this->Style = pFVar16;
  }
  pFVar17 = SAudioTextBox::FArguments::FArguments(&local_828);
  pFVar17->_Style = &this->Style->TextBoxStyle;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &pFVar17->_OnValueTextCommitted,(FWriteAccessScope *)&local_920);
  local_908 = &(pFVar17->_OnValueTextCommitted).field_0x8;
  puVar18 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_908);
  if (puVar18 != (undefined8 *)0x0) {
    *puVar18 = &
               ___7__TCommonDelegateInstanceState___A6AXAEBVFText__W4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar19 = FDelegateHandle::GenerateNewID();
    puVar18[2] = uVar19;
    *puVar18 = &TBaseFunctorDelegateInstance<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy,`SAudioRadialSlider::Construct'::`2'::<lambda_1>_>
                ::_vftable_;
    puVar18[3] = this;
  }
  if (local_920.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_920.Accessor,&local_920);
  }
  FLLMScope::FLLMScope(&local_9b4,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_958 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_950,&local_958,true);
  TSlateDecl<SAudioTextBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SAudioTextBox,RequiredArgs::T0RequiredArgs>
            (&local_938,"SAudioTextBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SAudioRadialSlider.cpp"
             ,0x2e,&local_9b8);
  FMemScope::~FMemScope(&local_950);
  FLLMScope::~FLLMScope(&local_9b4);
  if (local_938._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_938._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_938._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_990.Object = (this->Label).Object;
  local_990.SharedReferenceCount.ReferenceController =
       (this->Label).SharedReferenceCount.ReferenceController;
  (this->Label).Object = local_938._Widget.Object;
  (this->Label).SharedReferenceCount.ReferenceController =
       local_938._Widget.SharedReferenceCount.ReferenceController;
  TSharedPtr<SAudioTextBox,1>::~TSharedPtr<SAudioTextBox,1>(&local_990);
  TSlateDecl<SAudioTextBox,RequiredArgs::T0RequiredArgs>::operator<<=(&local_938,&local_870,pFVar17)
  ;
  TSharedRef<SAudioTextBox,1>::~TSharedRef<SAudioTextBox,1>(&local_870);
  TSlateDecl<SAudioTextBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SAudioTextBox,RequiredArgs::T0RequiredArgs>(&local_938);
  SAudioTextBox::FArguments::~FArguments(&local_828);
  pFVar20 = SRadialSlider::FArguments::FArguments(&local_598);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar20->_OnValueChanged,
             (FWriteAccessScope *)&local_900);
  local_8e8 = &(pFVar20->_OnValueChanged).field_0x8;
  puVar18 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_8e8);
  if (puVar18 != (undefined8 *)0x0) {
    *puVar18 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar19 = FDelegateHandle::GenerateNewID();
    puVar18[2] = uVar19;
    *puVar18 = &TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioRadialSlider::Construct'::`2'::<lambda_2>_>
                ::_vftable_;
    puVar18[3] = this;
  }
  if (local_900.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_900.Accessor,&local_900);
  }
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&pFVar20->_OnMouseCaptureBegin,&this->OnMouseCaptureBegin);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&pFVar20->_OnMouseCaptureEnd,&this->OnMouseCaptureEnd);
  pFVar20->_UseVerticalDrag = true;
  pFVar20->_ShowSliderHandle = false;
  pFVar20->_ShowSliderHand = true;
  FLLMScope::FLLMScope(local_9b0,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_948 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_940,&local_948,true);
  TSlateDecl<SRadialSlider,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SRadialSlider,RequiredArgs::T0RequiredArgs>
            (&local_9a8,"SRadialSlider",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SAudioRadialSlider.cpp"
             ,0x3d,local_9b7);
  FMemScope::~FMemScope(&local_940);
  FLLMScope::~FLLMScope(local_9b0);
  if (local_9a8._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_9a8._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_9a8._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_860 = (this->RadialSlider).Object;
  pTStack_858 = (this->RadialSlider).SharedReferenceCount.ReferenceController;
  (this->RadialSlider).Object = local_9a8._Widget.Object;
  (this->RadialSlider).SharedReferenceCount.ReferenceController =
       local_9a8._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_858);
  pSVar2 = local_9a8._Widget.Object;
  if (local_9a8._Widget.Object == (SRadialSlider *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar11) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)local_9a8._Widget.Object,(FSlateBaseNamedArgs *)pFVar20);
  SRadialSlider::Construct(local_9a8._Widget.Object,pFVar20);
  if (local_9a8._Widget.Object == (SRadialSlider *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar11) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (((local_9a8._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar12 = (**(code **)((local_9a8._Widget.Object)->_padding_ + 0x228))(local_9a8._Widget.Object);
    bVar13 = 0;
    if (cVar12 == '\0') goto LAB_14d8eb944;
  }
  bVar13 = 0x20;
LAB_14d8eb944:
  *(byte *)&(local_9a8._Widget.Object)->_padding_ =
       (byte)(local_9a8._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_9a8._Widget.Object)->_padding_ =
       (byte)(local_9a8._Widget.Object)->_padding_ | bVar13;
  if (local_9a8._Widget.Object == (SRadialSlider *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar11) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pbVar1 = (byte *)((longlong)&(local_9a8._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if (local_9a8._Widget.Object == (SRadialSlider *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x416,L"");
    if (bVar11) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FVar10.ReferenceController = local_9a8._Widget.SharedReferenceCount.ReferenceController;
  local_9a8._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_9a8._Widget.Object = (SRadialSlider *)0x0;
  if (pSVar2 == (SRadialSlider *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x26c,L"");
    if (bVar11) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar10.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SRadialSlider::FArguments::~FArguments(&local_598);
  if ((this->RadialSlider).Object == (SRadialSlider *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar11) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pSVar2 = (this->RadialSlider).Object;
  pFVar21 = TAttribute<FSlateColor>::Get(&this->CenterBackgroundColor);
  local_8d8._0_8_ = *(undefined8 *)&(pFVar21->SpecifiedColor).field0_0x0;
  local_8d8._8_8_ = *(undefined8 *)((longlong)&(pFVar21->SpecifiedColor).field0_0x0 + 8);
  local_8c8._0_1_ = pFVar21->ColorUseRule;
  local_8c8._1_1_ = pFVar21->ColorTableId;
  local_8c8._2_2_ = *(undefined2 *)&pFVar21->field_0x12;
  SRadialSlider::SetCenterBackgroundColor(pSVar2,(FSlateColor *)&local_8d8._s_0);
  if ((this->RadialSlider).Object == (SRadialSlider *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar11) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pSVar2 = (this->RadialSlider).Object;
  pFVar21 = TAttribute<FSlateColor>::Get(&this->SliderProgressColor);
  local_8b8._0_8_ = *(undefined8 *)&(pFVar21->SpecifiedColor).field0_0x0;
  local_8b8._8_8_ = *(undefined8 *)((longlong)&(pFVar21->SpecifiedColor).field0_0x0 + 8);
  local_8a8._0_1_ = pFVar21->ColorUseRule;
  local_8a8._1_1_ = pFVar21->ColorTableId;
  local_8a8._2_2_ = *(undefined2 *)&pFVar21->field_0x12;
  SRadialSlider::SetSliderProgressColor(pSVar2,(FSlateColor *)&local_8b8._s_0);
  if ((this->RadialSlider).Object == (SRadialSlider *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar11) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pSVar2 = (this->RadialSlider).Object;
  pFVar21 = TAttribute<FSlateColor>::Get(&this->SliderBarColor);
  local_898._0_8_ = *(undefined8 *)&(pFVar21->SpecifiedColor).field0_0x0;
  local_898._8_8_ = *(undefined8 *)((longlong)&(pFVar21->SpecifiedColor).field0_0x0 + 8);
  local_888._0_1_ = pFVar21->ColorUseRule;
  local_888._1_1_ = pFVar21->ColorTableId;
  local_888._2_2_ = *(undefined2 *)&pFVar21->field_0x12;
  SRadialSlider::SetSliderBarColor(pSVar2,(FSlateColor *)&local_898._s_0);
  if ((this->RadialSlider).Object == (SRadialSlider *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar11) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FRuntimeFloatCurve::operator=(&((this->RadialSlider).Object)->SliderRange,&this->SliderCurve);
  pTVar22 = CreateLayoutWidgetSwitcher(this,&local_850);
  this_00 = &this->_padding_;
  pTVar3 = (pTVar22->SharedReferenceCount).ReferenceController;
  pSVar4 = pTVar22->Object;
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_00);
  }
  else {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_00);
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar6 = (TReferenceControllerBase<1> *)this->_padding_;
  this->_padding_ = (longlong)pSVar4;
  this->_padding_ = (longlong)pTVar3;
  local_980 = pSVar4;
  pTStack_978 = pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)this_00);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_850.SharedReferenceCount.ReferenceController);
  local_838 = *(undefined4 *)&(this->OutputRange).field0_0x0;
  uStack_834 = *(undefined4 *)((longlong)&(this->OutputRange).field0_0x0 + 4);
  uStack_830 = *(undefined4 *)((longlong)&(this->OutputRange).field0_0x0 + 8);
  uStack_82c = *(undefined4 *)((longlong)&(this->OutputRange).field0_0x0 + 0xc);
  (**(code **)(this->_padding_ + 0x260))(this,&local_838);
  return;
}

// CreateLayoutWidgetSwitcher @ 14d9077c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWidgetSwitcher,1> * __thiscall
SAudioRadialSlider::CreateLayoutWidgetSwitcher
          (SAudioRadialSlider *this,TSharedRef<SWidgetSwitcher,1> *__return_storage_ptr__)

{
  float fVar1;
  TReferenceControllerBase<1> *pTVar2;
  SRadialSlider *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  FSharedReferencer<1> FVar7;
  bool bVar8;
  EAudioRadialSliderLayout EVar9;
  FArguments *pFVar10;
  TSharedRef<SWidgetSwitcher,1> *pTVar11;
  FScopedWidgetSlotArguments *pFVar12;
  FArguments *pFVar13;
  FSlot *pFVar14;
  FSlotArguments *pFVar15;
  TSharedRef<SVerticalBox,1> *pTVar16;
  FArguments *pFVar17;
  FSlotArguments *pFVar18;
  longlong *plVar19;
  TSharedRef<SOverlay,1> *pTVar20;
  SWidgetSwitcher *pSVar21;
  TSharedRef<SRadialSlider,1> *pTVar22;
  TSharedRef<SAudioTextBox,1> *pTVar23;
  FSlotArguments *pFVar24;
  FSlotArguments *pFVar25;
  undefined1 auStackY_1158 [32];
  T0RequiredArgs local_1128;
  T0RequiredArgs local_1127;
  T0RequiredArgs local_1126;
  T0RequiredArgs local_1125;
  FLLMScope local_1124;
  FLLMScope local_1120;
  FLLMScope local_111c;
  FLLMScope local_1118 [2];
  SVerticalBox *local_1110;
  FSharedReferencer<1> local_1108;
  SRadialSlider *local_1100;
  FSharedReferencer<1> local_10f8;
  SAudioTextBox *local_10f0;
  FSharedReferencer<1> local_10e8;
  SAudioTextBox *local_10e0;
  FSharedReferencer<1> local_10d8;
  SOverlay *local_10d0;
  FSharedReferencer<1> local_10c8;
  SAudioTextBox *local_10c0;
  FSharedReferencer<1> local_10b8;
  SVerticalBox *local_10b0;
  FSharedReferencer<1> local_10a8;
  TSharedRef<SAudioTextBox,1> local_10a0;
  TSharedRef<SAudioTextBox,1> local_1090;
  undefined8 local_1080;
  FSharedReferencer<1> local_1078;
  undefined8 local_1070;
  FSharedReferencer<1> local_1068;
  FMemScope local_1060;
  FSlotArguments *local_1058;
  FSlotArguments *local_1050;
  FName local_1048;
  FMemScope local_1040;
  FName local_1038;
  FMemScope local_1030;
  FSlotArguments *local_1028;
  FSlotArguments *local_1020;
  FName local_1018;
  TSharedRef<SWidgetSwitcher,1> *local_1010;
  FMemScope local_1008;
  undefined4 local_1000 [2];
  longlong local_ff8;
  undefined4 local_ff0 [2];
  longlong local_fe8;
  FName local_fe0;
  TSlateDecl<SWidgetSwitcher,RequiredArgs::T0RequiredArgs> local_fd8;
  SWidgetSwitcher *local_fc0;
  TReferenceControllerBase<1> *pTStack_fb8;
  TSharedRef<SWidgetSwitcher,1> local_fb0;
  TSharedRef<SVerticalBox,1> local_fa0;
  TSharedRef<SOverlay,1> local_f90;
  TSharedRef<SVerticalBox,1> local_f80;
  TSharedRef<SAudioTextBox,1> local_f70;
  TSharedRef<SRadialSlider,1> local_f60;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_f50;
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> local_f38;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_f20;
  FReadAccessScope local_f08;
  undefined1 local_ef0 [56];
  void *local_eb8;
  undefined1 local_e90 [56];
  void *local_e58;
  undefined8 *local_e30;
  SRadialSlider *local_e28;
  FSharedReferencer<1> local_e20 [4];
  undefined1 local_e00 [24];
  undefined4 local_de8;
  undefined1 local_de4;
  undefined4 local_de0;
  undefined1 local_ddc;
  FSlotArgumentsMixin local_dd8;
  undefined8 *local_d48;
  SRadialSlider *local_d40;
  FSharedReferencer<1> local_d38 [4];
  undefined1 local_d18 [24];
  undefined4 local_d00;
  undefined1 local_cfc;
  undefined4 local_cf8;
  undefined1 local_cf4;
  FSlotArgumentsMixin local_cf0;
  undefined8 *local_c60 [2];
  TReferenceControllerBase<1> *local_c50;
  undefined1 local_c30 [24];
  undefined4 local_c18;
  undefined1 local_c14;
  undefined4 local_c10;
  undefined1 local_c0c;
  FSlotArgumentsMixin local_c08;
  undefined8 *local_b78 [2];
  TReferenceControllerBase<1> *local_b68;
  undefined1 local_b48 [24];
  undefined4 local_b30;
  undefined1 local_b2c;
  undefined4 local_b28;
  undefined1 local_b24;
  FSlotArgumentsMixin local_b20;
  undefined1 local_a90 [528];
  undefined1 local_880 [24];
  FArguments local_868;
  FArguments local_660;
  FArguments local_458;
  FScopedWidgetSlotArguments local_248;
  FScopedWidgetSlotArguments local_1a8;
  FScopedWidgetSlotArguments local_108;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1158;
  local_1010 = __return_storage_ptr__;
  pFVar10 = SWidgetSwitcher::FArguments::FArguments((FArguments *)local_a90);
  FLLMScope::FLLMScope(&local_1124,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_fe0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1060,&local_fe0,true);
  TSlateDecl<SWidgetSwitcher,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SWidgetSwitcher,RequiredArgs::T0RequiredArgs>
            (&local_fd8,"SWidgetSwitcher",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SAudioRadialSlider.cpp"
             ,0x89,&local_1128);
  FMemScope::~FMemScope(&local_1060);
  FLLMScope::~FLLMScope(&local_1124);
  if (local_fd8._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_fd8._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_fd8._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_fc0 = (this->LayoutWidgetSwitcher).Object;
  pTStack_fb8 = (this->LayoutWidgetSwitcher).SharedReferenceCount.ReferenceController;
  (this->LayoutWidgetSwitcher).Object = local_fd8._Widget.Object;
  (this->LayoutWidgetSwitcher).SharedReferenceCount.ReferenceController =
       local_fd8._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_fb8);
  TSlateDecl<SWidgetSwitcher,RequiredArgs::T0RequiredArgs>::operator<<=
            (&local_fd8,&local_fb0,pFVar10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_fb0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_fd8._Widget.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_880);
  if ((void *)local_880._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_880._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_880);
  DestructItems<TBasicLayoutWidgetSlot<FBasicLayoutWidgetSlot>::FSlotArguments,int>
            ((FSlotArguments *)local_a90._504_8_,local_a90._512_4_);
  if ((FSlotArguments *)local_a90._504_8_ != (FSlotArguments *)0x0) {
    FMemory::Free((void *)local_a90._504_8_);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_a90);
  fVar1 = this->Style->LabelPadding;
  if (((this->LayoutWidgetSwitcher).Object == (SWidgetSwitcher *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    pTVar11 = (TSharedRef<SWidgetSwitcher,1> *)(*pcVar6)();
    return pTVar11;
  }
  pFVar12 = SWidgetSwitcher::AddSlot((this->LayoutWidgetSwitcher).Object,&local_248,0);
  pFVar13 = SVerticalBox::FArguments::FArguments(&local_868);
  pFVar14 = ::operator_new(0x58);
  pFVar25 = (FSlotArguments *)0x0;
  local_1058 = pFVar25;
  if (pFVar14 != (FSlot *)0x0) {
    *(undefined8 *)pFVar14 = 0;
    *(undefined8 *)&pFVar14->field_0x8 = 0;
    *(undefined8 *)&pFVar14->field_0x10 = 0;
    *(undefined8 *)&pFVar14->field_0x18 = 0;
    *(undefined8 *)&pFVar14->field_0x20 = 0;
    *(undefined8 *)&pFVar14->field_0x28 = 0;
    *(undefined8 *)&pFVar14->field_0x30 = 0;
    *(undefined8 *)&pFVar14->field_0x38 = 0;
    *(undefined8 *)&pFVar14->field_0x40 = 0;
    *(undefined8 *)&pFVar14->field_0x48 = 0;
    *(undefined8 *)&pFVar14->field_0x50 = 0;
    local_1058 = (FSlotArguments *)SVerticalBox::FSlot::FSlot(pFVar14);
  }
  SVerticalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_c60,(FSlot *)&local_1058);
  local_c18 = 2;
  local_c14 = 1;
  local_c10 = 3;
  local_c0c = 1;
  pFVar15 = SVerticalBox::FSlot::FSlotArguments::AutoHeight((FSlotArguments *)local_c60);
  pFVar15 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)&pFVar15->field_0x18,0.0,0.0,0.0,fVar1);
  if (((this->Label).Object == (SAudioTextBox *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    pTVar11 = (TSharedRef<SWidgetSwitcher,1> *)(*pcVar6)();
    return pTVar11;
  }
  local_10a0.Object = (this->Label).Object;
  local_10a0.SharedReferenceCount.ReferenceController =
       (this->Label).SharedReferenceCount.ReferenceController;
  if (local_10a0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_10a0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_10a0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((local_10a0.Object == (SAudioTextBox *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    pTVar11 = (TSharedRef<SWidgetSwitcher,1> *)(*pcVar6)();
    return pTVar11;
  }
  FVar7.ReferenceController = local_10a0.SharedReferenceCount.ReferenceController;
  local_10b8.ReferenceController = local_10a0.SharedReferenceCount.ReferenceController;
  local_10c0 = local_10a0.Object;
  if (local_10a0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_10a0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_10a0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (local_10a0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_10a0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((SAudioTextBox **)&pFVar15->field_0x8 != &local_10c0) {
    *(SAudioTextBox **)&pFVar15->field_0x8 = local_10a0.Object;
    local_10c0 = (SAudioTextBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar15->field_0x10,&local_10b8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10b8.ReferenceController);
  pFVar13 = SVerticalBox::FArguments::operator+(pFVar13,pFVar15);
  pFVar14 = ::operator_new(0x58);
  local_1050 = pFVar25;
  if (pFVar14 != (FSlot *)0x0) {
    *(undefined8 *)pFVar14 = 0;
    *(undefined8 *)&pFVar14->field_0x8 = 0;
    *(undefined8 *)&pFVar14->field_0x10 = 0;
    *(undefined8 *)&pFVar14->field_0x18 = 0;
    *(undefined8 *)&pFVar14->field_0x20 = 0;
    *(undefined8 *)&pFVar14->field_0x28 = 0;
    *(undefined8 *)&pFVar14->field_0x30 = 0;
    *(undefined8 *)&pFVar14->field_0x38 = 0;
    *(undefined8 *)&pFVar14->field_0x40 = 0;
    *(undefined8 *)&pFVar14->field_0x48 = 0;
    *(undefined8 *)&pFVar14->field_0x50 = 0;
    local_1050 = (FSlotArguments *)SVerticalBox::FSlot::FSlot(pFVar14);
  }
  SVerticalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)&local_e30,(FSlot *)&local_1050);
  local_de8 = 0;
  local_de4 = 1;
  local_de0 = 0;
  local_ddc = 1;
  if (((this->RadialSlider).Object == (SRadialSlider *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    pTVar11 = (TSharedRef<SWidgetSwitcher,1> *)(*pcVar6)();
    return pTVar11;
  }
  pTVar2 = (this->RadialSlider).SharedReferenceCount.ReferenceController;
  pSVar3 = (this->RadialSlider).Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pSVar3 == (SRadialSlider *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    pTVar11 = (TSharedRef<SWidgetSwitcher,1> *)(*pcVar6)();
    return pTVar11;
  }
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1080 = 0;
  local_1078.ReferenceController = pTVar2;
  local_e28 = pSVar3;
  SharedPointerInternals::FSharedReferencer<1>::operator=(local_e20,&local_1078);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1078.ReferenceController);
  pFVar13 = SVerticalBox::FArguments::operator+(pFVar13,(FSlotArguments *)&local_e30);
  FLLMScope::FLLMScope(&local_1120,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1048 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1040,&local_1048,true);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
            (&local_f50,"SVerticalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SAudioRadialSlider.cpp"
             ,0x8f,&local_1127);
  FMemScope::~FMemScope(&local_1040);
  FLLMScope::~FLLMScope(&local_1120);
  pTVar16 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_f50,&local_fa0,pFVar13);
  pTVar4 = (pTVar16->SharedReferenceCount).ReferenceController;
  local_1110 = pTVar16->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1108.ReferenceController = pTVar4;
  if ((SVerticalBox **)&pFVar12->_padding_ != &local_1110) {
    pFVar12->_padding_ = (longlong)local_1110;
    local_1110 = (SVerticalBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar12->_padding_,&local_1108);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1108.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_fa0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f50._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  TResizingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_dd8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_e00);
  if ((void *)local_e00._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_e00._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_e00);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e20[0].ReferenceController);
  if (local_e30 != (undefined8 *)0x0) {
    (**(code **)*local_e30)(local_e30,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar7.ReferenceController);
  TSharedRef<SAudioTextBox,1>::~TSharedRef<SAudioTextBox,1>(&local_10a0);
  TResizingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_c08);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_c30);
  if ((void *)local_c30._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_c30._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_c30);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_c50);
  if (local_c60[0] != (undefined8 *)0x0) {
    (**(code **)*local_c60[0])(local_c60[0],1);
  }
  DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_868._Slots.AllocatorInstance.Data,local_868._Slots.ArrayNum);
  if ((FSlotArguments *)local_868._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_868._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_868);
  TPanelChildren<FBasicLayoutWidgetSlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
            (&local_248);
  if (((this->LayoutWidgetSwitcher).Object == (SWidgetSwitcher *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    pTVar11 = (TSharedRef<SWidgetSwitcher,1> *)(*pcVar6)();
    return pTVar11;
  }
  pFVar12 = SWidgetSwitcher::AddSlot((this->LayoutWidgetSwitcher).Object,&local_1a8,1);
  pFVar17 = SOverlay::FArguments::FArguments(&local_660);
  pFVar18 = SOverlay::Slot((FSlotArguments *)local_e90,0);
  plVar19 = &pFVar18->_padding_;
  if ((longlong *)local_1000 != plVar19) {
    *(undefined4 *)plVar19 = 0;
    *(undefined1 *)((longlong)&pFVar18->_padding_ + 4) = 1;
  }
  pFVar24 = pFVar25;
  if (plVar19 != (longlong *)0x0) {
    pFVar24 = pFVar18;
  }
  if (&local_ff8 != &pFVar24->_padding_) {
    *(undefined4 *)&pFVar24->_padding_ = 0;
    *(undefined1 *)((longlong)&pFVar24->_padding_ + 4) = 1;
  }
  pFVar18 = pFVar25;
  if (pFVar24 != (FSlotArguments *)0xffffffffffffffb8) {
    pFVar18 = pFVar24;
  }
  if (((this->RadialSlider).Object == (SRadialSlider *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    pTVar11 = (TSharedRef<SWidgetSwitcher,1> *)(*pcVar6)();
    return pTVar11;
  }
  pTVar2 = (this->RadialSlider).SharedReferenceCount.ReferenceController;
  pSVar3 = (this->RadialSlider).Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pSVar3 == (SRadialSlider *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    pTVar11 = (TSharedRef<SWidgetSwitcher,1> *)(*pcVar6)();
    return pTVar11;
  }
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1100 = pSVar3;
  local_10f8.ReferenceController = pTVar2;
  if ((SRadialSlider **)&pFVar18->_padding_ != &local_1100) {
    pFVar18->_padding_ = (longlong)pSVar3;
    local_1100 = (SRadialSlider *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar18->_padding_,&local_10f8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10f8.ReferenceController);
  pFVar17 = SOverlay::FArguments::operator+(pFVar17,pFVar18);
  pFVar18 = SOverlay::Slot((FSlotArguments *)local_ef0,0);
  plVar19 = &pFVar18->_padding_;
  if ((longlong *)local_ff0 != plVar19) {
    *(undefined4 *)plVar19 = 2;
    *(undefined1 *)((longlong)&pFVar18->_padding_ + 4) = 1;
  }
  pFVar24 = pFVar25;
  if (plVar19 != (longlong *)0x0) {
    pFVar24 = pFVar18;
  }
  if (&local_fe8 != &pFVar24->_padding_) {
    *(undefined4 *)&pFVar24->_padding_ = 2;
    *(undefined1 *)((longlong)&pFVar24->_padding_ + 4) = 1;
  }
  pFVar18 = pFVar25;
  if (pFVar24 != (FSlotArguments *)0xffffffffffffffb8) {
    pFVar18 = pFVar24;
  }
  if (((this->Label).Object == (SAudioTextBox *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    pTVar11 = (TSharedRef<SWidgetSwitcher,1> *)(*pcVar6)();
    return pTVar11;
  }
  local_1090.Object = (this->Label).Object;
  local_1090.SharedReferenceCount.ReferenceController =
       (this->Label).SharedReferenceCount.ReferenceController;
  if (local_1090.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1090.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1090.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((local_1090.Object == (SAudioTextBox *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    pTVar11 = (TSharedRef<SWidgetSwitcher,1> *)(*pcVar6)();
    return pTVar11;
  }
  FVar7.ReferenceController = local_1090.SharedReferenceCount.ReferenceController;
  local_10e8.ReferenceController = local_1090.SharedReferenceCount.ReferenceController;
  local_10f0 = local_1090.Object;
  if (local_1090.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1090.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1090.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (local_1090.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1090.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((SAudioTextBox **)&pFVar18->_padding_ != &local_10f0) {
    pFVar18->_padding_ = (longlong)local_1090.Object;
    local_10f0 = (SAudioTextBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar18->_padding_,&local_10e8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10e8.ReferenceController);
  pFVar17 = SOverlay::FArguments::operator+(pFVar17,pFVar18);
  FLLMScope::FLLMScope(&local_111c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1038 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1030,&local_1038,true);
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>
            (&local_f38,"SOverlay",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SAudioRadialSlider.cpp"
             ,0xa2,&local_1126);
  FMemScope::~FMemScope(&local_1030);
  FLLMScope::~FLLMScope(&local_111c);
  pTVar20 = TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_f38,&local_f90,pFVar17);
  pTVar4 = (pTVar20->SharedReferenceCount).ReferenceController;
  local_10d0 = pTVar20->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_10c8.ReferenceController = pTVar4;
  if ((SOverlay **)&pFVar12->_padding_ != &local_10d0) {
    pFVar12->_padding_ = (longlong)local_10d0;
    local_10d0 = (SOverlay *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar12->_padding_,&local_10c8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10c8.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f90.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f38._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar7.ReferenceController);
  TSharedRef<SAudioTextBox,1>::~TSharedRef<SAudioTextBox,1>(&local_1090);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_ef0 + 0x30));
  if (local_eb8 != (void *)0x0) {
    FMemory::Free(local_eb8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)(local_ef0 + 0x30));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_ef0._16_8_);
  if ((undefined8 *)local_ef0._0_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_ef0._0_8_)(local_ef0._0_8_,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_e90 + 0x30));
  if (local_e58 != (void *)0x0) {
    FMemory::Free(local_e58);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)(local_e90 + 0x30));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_e90._16_8_);
  if ((undefined8 *)local_e90._0_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_e90._0_8_)(local_e90._0_8_,1);
  }
  DestructItems<SOverlay::FOverlaySlot::FSlotArguments,int>
            ((FSlotArguments *)local_660._Slots.AllocatorInstance.Data,local_660._Slots.ArrayNum);
  if ((FSlotArguments *)local_660._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_660._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_660);
  TPanelChildren<FBasicLayoutWidgetSlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
            (&local_1a8);
  pSVar21 = TSharedPtr<SWidgetSwitcher,1>::operator->(&this->LayoutWidgetSwitcher);
  pFVar12 = SWidgetSwitcher::AddSlot(pSVar21,&local_108,2);
  pFVar13 = SVerticalBox::FArguments::FArguments(&local_458);
  pFVar14 = ::operator_new(0x58);
  local_1028 = pFVar25;
  if (pFVar14 != (FSlot *)0x0) {
    *(undefined8 *)pFVar14 = 0;
    *(undefined8 *)&pFVar14->field_0x8 = 0;
    *(undefined8 *)&pFVar14->field_0x10 = 0;
    *(undefined8 *)&pFVar14->field_0x18 = 0;
    *(undefined8 *)&pFVar14->field_0x20 = 0;
    *(undefined8 *)&pFVar14->field_0x28 = 0;
    *(undefined8 *)&pFVar14->field_0x30 = 0;
    *(undefined8 *)&pFVar14->field_0x38 = 0;
    *(undefined8 *)&pFVar14->field_0x40 = 0;
    *(undefined8 *)&pFVar14->field_0x48 = 0;
    *(undefined8 *)&pFVar14->field_0x50 = 0;
    local_1028 = (FSlotArguments *)SVerticalBox::FSlot::FSlot(pFVar14);
  }
  SVerticalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)&local_d48,(FSlot *)&local_1028);
  local_d00 = 0;
  local_cfc = 1;
  local_cf8 = 0;
  local_cf4 = 1;
  pTVar22 = TSharedPtr<SRadialSlider,1>::ToSharedRef(&this->RadialSlider,&local_f60);
  pTVar2 = (pTVar22->SharedReferenceCount).ReferenceController;
  local_d40 = pTVar22->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1070 = 0;
  local_1068.ReferenceController = pTVar2;
  SharedPointerInternals::FSharedReferencer<1>::operator=(local_d38,&local_1068);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1068.ReferenceController);
  pFVar13 = SVerticalBox::FArguments::operator+(pFVar13,(FSlotArguments *)&local_d48);
  pFVar14 = ::operator_new(0x58);
  local_1020 = pFVar25;
  if (pFVar14 != (FSlot *)0x0) {
    *(undefined8 *)pFVar14 = 0;
    *(undefined8 *)&pFVar14->field_0x8 = 0;
    *(undefined8 *)&pFVar14->field_0x10 = 0;
    *(undefined8 *)&pFVar14->field_0x18 = 0;
    *(undefined8 *)&pFVar14->field_0x20 = 0;
    *(undefined8 *)&pFVar14->field_0x28 = 0;
    *(undefined8 *)&pFVar14->field_0x30 = 0;
    *(undefined8 *)&pFVar14->field_0x38 = 0;
    *(undefined8 *)&pFVar14->field_0x40 = 0;
    *(undefined8 *)&pFVar14->field_0x48 = 0;
    *(undefined8 *)&pFVar14->field_0x50 = 0;
    local_1020 = (FSlotArguments *)SVerticalBox::FSlot::FSlot(pFVar14);
  }
  SVerticalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_b78,(FSlot *)&local_1020);
  local_b30 = 2;
  local_b2c = 1;
  local_b28 = 1;
  local_b24 = 1;
  pFVar15 = SVerticalBox::FSlot::FSlotArguments::AutoHeight((FSlotArguments *)local_b78);
  pFVar15 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)&pFVar15->field_0x18,0.0,fVar1,0.0,0.0);
  pTVar23 = TSharedPtr<SAudioTextBox,1>::ToSharedRef(&this->Label,&local_f70);
  pTVar4 = (pTVar23->SharedReferenceCount).ReferenceController;
  local_10e0 = pTVar23->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_10d8.ReferenceController = pTVar4;
  if ((SAudioTextBox **)&pFVar15->field_0x8 != &local_10e0) {
    *(SAudioTextBox **)&pFVar15->field_0x8 = local_10e0;
    local_10e0 = (SAudioTextBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar15->field_0x10,&local_10d8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10d8.ReferenceController);
  pFVar13 = SVerticalBox::FArguments::operator+(pFVar13,pFVar15);
  FLLMScope::FLLMScope(local_1118,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1018 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1008,&local_1018,true);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
            (&local_f20,"SVerticalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SAudioRadialSlider.cpp"
             ,0xb3,&local_1125);
  FMemScope::~FMemScope(&local_1008);
  FLLMScope::~FLLMScope(local_1118);
  pTVar16 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_f20,&local_f80,pFVar13);
  pTVar5 = (pTVar16->SharedReferenceCount).ReferenceController;
  local_10b0 = pTVar16->Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_10a8.ReferenceController = pTVar5;
  if ((SVerticalBox **)&pFVar12->_padding_ != &local_10b0) {
    pFVar12->_padding_ = (longlong)local_10b0;
    local_10b0 = (SVerticalBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar12->_padding_,&local_10a8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10a8.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f80.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f20._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  TSharedRef<SAudioTextBox,1>::~TSharedRef<SAudioTextBox,1>(&local_f70);
  TResizingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_b20);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_b48);
  if ((void *)local_b48._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_b48._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_b48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_b68);
  if (local_b78[0] != (undefined8 *)0x0) {
    (**(code **)*local_b78[0])(local_b78[0],1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f60.SharedReferenceCount.ReferenceController);
  TResizingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_cf0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_d18);
  if ((void *)local_d18._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_d18._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_d18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d38[0].ReferenceController);
  if (local_d48 != (undefined8 *)0x0) {
    (**(code **)*local_d48)(local_d48,1);
  }
  DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_458._Slots.AllocatorInstance.Data,local_458._Slots.ArrayNum);
  if ((FSlotArguments *)local_458._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_458._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_458);
  TPanelChildren<FBasicLayoutWidgetSlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
            (&local_108);
  pSVar21 = TSharedPtr<SWidgetSwitcher,1>::operator->(&this->LayoutWidgetSwitcher);
  bVar8 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->WidgetLayout).Getter);
  if (bVar8) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(this->WidgetLayout).Getter,&local_f08);
    if (*(int *)&(this->WidgetLayout).Getter.field_0x10 != 0) {
      pFVar25 = *(FSlotArguments **)&(this->WidgetLayout).Getter.field_0x8;
    }
    EVar9 = (**(code **)(pFVar25->_padding_ + 0x60))(pFVar25);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_f08);
    (this->WidgetLayout).Value = EVar9;
  }
  SWidgetSwitcher::SetActiveWidgetIndex(pSVar21,(this->WidgetLayout).Value);
  TSharedPtr<SWidgetSwitcher,1>::ToSharedRef(&this->LayoutWidgetSwitcher,local_1010);
  return local_1010;
}

// GetOutputValue @ 14d932510

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall SAudioRadialSlider::GetOutputValue(SAudioRadialSlider *this,float param_1)

{
  double dVar1;
  double dVar2;
  
  dVar2 = NormalizedLinearSliderRange.field0_0x0._s_0.Y -
          NormalizedLinearSliderRange.field0_0x0._s_0.X;
  if (__real_3e45798ee2308c3a <
      (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    dVar2 = ((double)param_1 - NormalizedLinearSliderRange.field0_0x0._s_0.X) / dVar2;
  }
  else {
    dVar2 = __real_3ff0000000000000;
    if ((double)param_1 < NormalizedLinearSliderRange.field0_0x0._s_0.Y) {
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

// GetOutputValueForText @ 14d932ac0

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall SAudioRadialSlider::GetOutputValueForText(SAudioRadialSlider *this,float param_1)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014d932ac3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = (float)(**(code **)(this->_padding_ + 0x248))();
  return fVar1;
}

// GetSliderValue @ 14d935e90

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall SAudioRadialSlider::GetSliderValue(SAudioRadialSlider *this,float param_1)

{
  double dVar1;
  
  dVar1 = (this->OutputRange).field0_0x0._s_0.Y - (this->OutputRange).field0_0x0._s_0.X;
  if (__real_3e45798ee2308c3a <
      (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    dVar1 = ((double)param_1 - (this->OutputRange).field0_0x0._s_0.X) / dVar1;
  }
  else {
    dVar1 = __real_3ff0000000000000;
    if ((double)param_1 < (this->OutputRange).field0_0x0._s_0.Y) {
      dVar1 = 0.0;
    }
  }
  if (__real_3ff0000000000000 <= dVar1) {
    dVar1 = __real_3ff0000000000000;
  }
  if (dVar1 <= 0.0) {
    dVar1 = 0.0;
  }
  return (float)(dVar1 * (NormalizedLinearSliderRange.field0_0x0._s_0.Y -
                         NormalizedLinearSliderRange.field0_0x0._s_0.X) +
                NormalizedLinearSliderRange.field0_0x0._s_0.X);
}

// GetSliderValueForText @ 14d936410

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall SAudioRadialSlider::GetSliderValueForText(SAudioRadialSlider *this,float param_1)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014d936413. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = (float)(**(code **)(this->_padding_ + 0x250))();
  return fVar1;
}

// SetCenterBackgroundColor @ 14d968390

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SAudioRadialSlider::SetCenterBackgroundColor(SAudioRadialSlider *this,FSlateColor *param_1)

{
  code *pcVar1;
  bool bVar2;
  FLinearColor_u_0 local_78;
  undefined4 local_68;
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
  if ((this->RadialSlider).Object == (SRadialSlider *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_78._0_8_ = *(undefined8 *)&(param_1->SpecifiedColor).field0_0x0;
  local_78._8_8_ = *(undefined8 *)((longlong)&(param_1->SpecifiedColor).field0_0x0 + 8);
  local_68._0_1_ = param_1->ColorUseRule;
  local_68._1_1_ = param_1->ColorTableId;
  local_68._2_2_ = *(undefined2 *)&param_1->field_0x12;
  SRadialSlider::SetCenterBackgroundColor((this->RadialSlider).Object,(FSlateColor *)&local_78._s_0)
  ;
  return;
}

// SetDesiredSizeOverride @ 14d968ad0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SAudioRadialSlider::SetDesiredSizeOverride(SAudioRadialSlider *this,TVector2<double> *param_1)

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

// SetHandStartEndRatio @ 14d969510

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SAudioRadialSlider::SetHandStartEndRatio(SAudioRadialSlider *this,TVector2<double> *param_1)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  EInvalidateWidgetReason EVar4;
  bool bVar5;
  TVector2<double>_u_0 local_88;
  FDestructionSentinel local_78;
  FReadAccessScope local_60;
  TVector2<double>_u_0 local_48;
  undefined1 local_38;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_30;
  ForAnyElementType FStack_28;
  ulonglong local_20;
  
  local_48._s_0.X = (param_1->field0_0x0)._s_0.X;
  local_48._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  local_38 = 1;
  local_20 = 0;
  local_30.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_28.Data = (FScriptContainerElement *)0x0;
  bVar2 = TAttribute<UE::Math::TVector2<double>_>::IdenticalTo
                    (&this->HandStartEndRatio,
                     (TAttribute<UE::Math::TVector2<double>_> *)&local_48._s_0);
  if (bVar2) goto LAB_14d9695f3;
  bVar2 = TAttribute<UE::Math::TVector2<double>_>::IsBound(&this->HandStartEndRatio);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_30,&local_60);
  if (((int)local_20 == 0) || (FStack_28.Data == (FScriptContainerElement *)0x0)) {
LAB_14d9695b0:
    bVar5 = false;
  }
  else {
    cVar3 = (**(code **)(*(longlong *)FStack_28.Data + 0x38))();
    if (cVar3 == '\0') goto LAB_14d9695b0;
    bVar5 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_60);
  TAttribute<UE::Math::TVector2<double>_>::operator=
            (&this->HandStartEndRatio,(TAttribute<UE::Math::TVector2<double>_> *)&local_48._s_0);
  EVar4 = PaintAndVolatility;
  if (bVar2 == bVar5) {
    EVar4 = Paint;
  }
  SWidget::Invalidate((SWidget *)this,EVar4);
LAB_14d9695f3:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_30,(FWriteAccessScope *)&local_78);
  if (((int)local_20 != 0) && (FStack_28.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_28.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_28,0,0,0x10);
    local_20 = local_20 & 0xffffffff00000000;
  }
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  if (FStack_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_28.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_30.AccessDetector);
  if ((this->RadialSlider).Object == (SRadialSlider *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_88._s_0.X = (param_1->field0_0x0)._s_0.X;
  local_88._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  SRadialSlider::SetHandStartEndRatio
            ((this->RadialSlider).Object,(TVector2<double> *)&local_88._s_0);
  return;
}

// SetLabelBackgroundColor @ 14d9698d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SAudioRadialSlider::SetLabelBackgroundColor(SAudioRadialSlider *this,FSlateColor *param_1)

{
  code *pcVar1;
  bool bVar2;
  FLinearColor_u_0 local_78;
  undefined4 local_68;
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
            ((SWidget *)this,&this->LabelBackgroundColor,(TAttribute<FSlateColor> *)&local_40._s_0,
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
  if ((this->Label).Object == (SAudioTextBox *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_78._0_8_ = *(undefined8 *)&(param_1->SpecifiedColor).field0_0x0;
  local_78._8_8_ = *(undefined8 *)((longlong)&(param_1->SpecifiedColor).field0_0x0 + 8);
  local_68._0_1_ = param_1->ColorUseRule;
  local_68._1_1_ = param_1->ColorTableId;
  local_68._2_2_ = *(undefined2 *)&param_1->field_0x12;
  SAudioTextBox::SetLabelBackgroundColor((this->Label).Object,(FSlateColor *)&local_78._s_0);
  return;
}

// SetOutputRange @ 14d96b4c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SAudioRadialSlider::SetOutputRange(SAudioRadialSlider *this,TVector2<double> *param_1)

{
  double dVar1;
  code *pcVar2;
  bool bVar3;
  float *pfVar4;
  float fVar5;
  double dVar6;
  undefined8 uVar7;
  TVector2<double>_u_0 local_18;
  
  dVar6 = (param_1->field0_0x0)._s_0.Y;
  dVar1 = (param_1->field0_0x0)._s_0.X;
  if (dVar1 <= dVar6) {
    dVar6 = dVar1;
  }
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  pcVar2 = *(code **)(this->_padding_ + 0x248);
  (this->OutputRange).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->OutputRange).field0_0x0._s_0.Y = dVar1;
  (this->OutputRange).field0_0x0._s_0.X = dVar6;
  pfVar4 = TAttribute<float>::Get(&this->SliderValue);
  fVar5 = (float)(*pcVar2)(this,*pfVar4);
  dVar6 = (this->OutputRange).field0_0x0._s_0.Y;
  if ((double)fVar5 <= dVar6) {
    dVar6 = (double)fVar5;
  }
  dVar1 = (this->OutputRange).field0_0x0._s_0.X;
  if (dVar6 <= dVar1) {
    dVar6 = dVar1;
  }
  uVar7 = (**(code **)(this->_padding_ + 0x250))(this,(float)dVar6);
  (**(code **)(this->_padding_ + 600))(this,uVar7);
  if ((this->Label).Object == (SAudioTextBox *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_18._s_0.X = (this->OutputRange).field0_0x0._s_0.X;
  local_18._s_0.Y = (this->OutputRange).field0_0x0._s_0.Y;
  SAudioTextBox::UpdateValueTextWidth((this->Label).Object,(TVector2<double> *)&local_18._s_0);
  return;
}

// SetShowLabelOnlyOnHover @ 14d96c400

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SAudioRadialSlider::SetShowLabelOnlyOnHover(SAudioRadialSlider *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->Label).Object == (SAudioTextBox *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SAudioTextBox::SetShowLabelOnlyOnHover((this->Label).Object,param_1);
  return;
}

// SetShowUnitsText @ 14d96c720

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SAudioRadialSlider::SetShowUnitsText(SAudioRadialSlider *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->Label).Object == (SAudioTextBox *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SAudioTextBox::SetShowUnitsText((this->Label).Object,param_1);
  return;
}

// SetSliderBarColor @ 14d96cd40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SAudioRadialSlider::SetSliderBarColor(SAudioRadialSlider *this,FSlateColor *param_1)

{
  code *pcVar1;
  bool bVar2;
  FLinearColor_u_0 local_78;
  undefined4 local_68;
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
  if ((this->RadialSlider).Object == (SRadialSlider *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_78._0_8_ = *(undefined8 *)&(param_1->SpecifiedColor).field0_0x0;
  local_78._8_8_ = *(undefined8 *)((longlong)&(param_1->SpecifiedColor).field0_0x0 + 8);
  local_68._0_1_ = param_1->ColorUseRule;
  local_68._1_1_ = param_1->ColorTableId;
  local_68._2_2_ = *(undefined2 *)&param_1->field_0x12;
  SRadialSlider::SetSliderBarColor((this->RadialSlider).Object,(FSlateColor *)&local_78._s_0);
  return;
}

// SetSliderProgressColor @ 14d96d140

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SAudioRadialSlider::SetSliderProgressColor(SAudioRadialSlider *this,FSlateColor *param_1)

{
  code *pcVar1;
  bool bVar2;
  FLinearColor_u_0 local_78;
  undefined4 local_68;
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
  if ((this->RadialSlider).Object == (SRadialSlider *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_78._0_8_ = *(undefined8 *)&(param_1->SpecifiedColor).field0_0x0;
  local_78._8_8_ = *(undefined8 *)((longlong)&(param_1->SpecifiedColor).field0_0x0 + 8);
  local_68._0_1_ = param_1->ColorUseRule;
  local_68._1_1_ = param_1->ColorTableId;
  local_68._2_2_ = *(undefined2 *)&param_1->field_0x12;
  SRadialSlider::SetSliderProgressColor((this->RadialSlider).Object,(FSlateColor *)&local_78._s_0);
  return;
}

// SetSliderThickness @ 14d96d2c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SAudioRadialSlider::SetSliderThickness(SAudioRadialSlider *this,float param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->RadialSlider).Object == (SRadialSlider *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  SRadialSlider::SetThickness((this->RadialSlider).Object,param_1);
  return;
}

// SetSliderValue @ 14d96d800

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SAudioRadialSlider::SetSliderValue(SAudioRadialSlider *this,float param_1)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  FDestructionSentinel local_68;
  undefined1 local_50 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_48;
  ForAnyElementType FStack_40;
  ulonglong local_38;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->SliderValue).Getter);
  (this->SliderValue).Value = param_1;
  (this->SliderValue).bIsSet = true;
  fVar3 = (float)(**(code **)(this->_padding_ + 0x298))(this,param_1);
  if ((this->Label).Object == (SAudioTextBox *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SAudioTextBox::SetValueText((this->Label).Object,fVar3);
  if ((this->RadialSlider).Object == (SRadialSlider *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_38 = 0;
  local_50[4] = true;
  local_48.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_40.Data = (FScriptContainerElement *)0x0;
  local_50._0_4_ = param_1;
  SRadialSlider::SetValue((this->RadialSlider).Object,(TAttribute<float> *)local_50);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_48,(FWriteAccessScope *)&local_68);
  if (((int)local_38 != 0) && (FStack_40.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_40.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_40,0,0,0x10);
    local_38 = local_38 & 0xffffffff00000000;
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  if (FStack_40.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_40.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_48.AccessDetector);
  return;
}

// SetUnitsText @ 14d96e4e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SAudioRadialSlider::SetUnitsText(SAudioRadialSlider *this,FText *param_1)

{
  SAudioTextBox *this_00;
  ITextData *pIVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 local_res8 [8];
  FText local_18;
  
  if ((this->Label).Object == (SAudioTextBox *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_18.TextData.Reference = (param_1->TextData).Reference;
  this_00 = (this->Label).Object;
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 8))
              (local_18.TextData.Reference,local_res8);
  }
  local_18.Flags = param_1->Flags;
  SAudioTextBox::SetUnitsText(this_00,&local_18);
  pIVar1 = (param_1->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  return;
}

// SetUnitsTextReadOnly @ 14d96e9a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SAudioRadialSlider::SetUnitsTextReadOnly(SAudioRadialSlider *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->Label).Object == (SAudioTextBox *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SAudioTextBox::SetUnitsTextReadOnly((this->Label).Object,param_1);
  return;
}

// SetValueTextReadOnly @ 14d96f300

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SAudioRadialSlider::SetValueTextReadOnly(SAudioRadialSlider *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->Label).Object == (SAudioTextBox *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SAudioTextBox::SetValueTextReadOnly((this->Label).Object,param_1);
  return;
}

// SetWidgetLayout @ 14d96f790

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SAudioRadialSlider::SetWidgetLayout(SAudioRadialSlider *this,EAudioRadialSliderLayout param_1)

{
  code *pcVar1;
  bool bVar2;
  FDestructionSentinel local_48;
  undefined1 local_30 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  local_18 = 0;
  local_30[4] = true;
  local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  local_30._0_4_ = param_1;
  SetWidgetAttribute<enum_EAudioRadialSliderLayout,enum_EAudioRadialSliderLayout>
            ((SWidget *)this,&this->WidgetLayout,(TAttribute<EAudioRadialSliderLayout> *)local_30,
             Layout);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_28,(FWriteAccessScope *)&local_48);
  if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    local_18 = local_18 & 0xffffffff00000000;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
  if ((this->LayoutWidgetSwitcher).Object == (SWidgetSwitcher *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SWidgetSwitcher::SetActiveWidgetIndex((this->LayoutWidgetSwitcher).Object,param_1);
  return;
}

