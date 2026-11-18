// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 26

// SAudioSliderBase @ 14d8b7900

/* WARNING: Enum "Type": Some values do not have unique names */

SAudioSliderBase * __thiscall SAudioSliderBase::SAudioSliderBase(SAudioSliderBase *this)

{
  SCompoundWidget::SCompoundWidget((SCompoundWidget *)this);
  this->_padding_ = (longlong)&___7SAudioSliderBase__6B_;
  *(undefined8 *)&this->OnValueChanged = 0;
  *(undefined4 *)&(this->OnValueChanged).field_0x10 = 0;
  *(undefined8 *)&this->OnValueCommitted = 0;
  *(undefined4 *)&(this->OnValueCommitted).field_0x10 = 0;
  (this->SliderValueAttribute).Value = 0.0;
  (this->SliderValueAttribute).bIsSet = false;
  *(undefined8 *)&(this->OnValueChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnValueCommitted).field_0x8 = 0;
  *(undefined8 *)&(this->SliderValueAttribute).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->SliderValueAttribute).Getter = 0;
  *(undefined8 *)&(this->SliderValueAttribute).Getter.field_0x8 = 0;
  (this->Orientation).Value = Orient_Horizontal;
  (this->Orientation).bIsSet = false;
  *(undefined8 *)&(this->Orientation).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->Orientation).Getter = 0;
  *(undefined8 *)&(this->Orientation).Getter.field_0x8 = 0;
  (this->DesiredSizeOverride).Value.bIsSet = false;
  (this->DesiredSizeOverride).bIsSet = false;
  *(undefined8 *)&(this->DesiredSizeOverride).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->DesiredSizeOverride).Getter = 0;
  *(undefined8 *)&(this->DesiredSizeOverride).Getter.field_0x8 = 0;
  (this->LabelBackgroundColor).Value.ColorUseRule = UseColor_Specified;
  (this->LabelBackgroundColor).bIsSet = false;
  *(undefined8 *)&(this->LabelBackgroundColor).Value.SpecifiedColor.field0_0x0 = 0x3f800000;
  (this->LabelBackgroundColor).Value.SpecifiedColor.field0_0x0._s_0.B = 1.0;
  (this->LabelBackgroundColor).Value.SpecifiedColor.field0_0x0._s_0.A = 1.0;
  *(undefined8 *)&(this->LabelBackgroundColor).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->LabelBackgroundColor).Getter = 0;
  *(undefined8 *)&(this->LabelBackgroundColor).Getter.field_0x8 = 0;
  (this->SliderBackgroundColor).Value.ColorUseRule = UseColor_Specified;
  (this->SliderBackgroundColor).bIsSet = false;
  *(undefined8 *)&(this->SliderBackgroundColor).Value.SpecifiedColor.field0_0x0 = 0x3f800000;
  (this->SliderBackgroundColor).Value.SpecifiedColor.field0_0x0._s_0.B = 1.0;
  (this->SliderBackgroundColor).Value.SpecifiedColor.field0_0x0._s_0.A = 1.0;
  *(undefined8 *)&(this->SliderBackgroundColor).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->SliderBackgroundColor).Getter = 0;
  *(undefined8 *)&(this->SliderBackgroundColor).Getter.field_0x8 = 0;
  (this->SliderBarColor).Value.ColorUseRule = UseColor_Specified;
  (this->SliderBarColor).bIsSet = false;
  *(undefined8 *)&(this->SliderBarColor).Value.SpecifiedColor.field0_0x0 = 0x3f800000;
  (this->SliderBarColor).Value.SpecifiedColor.field0_0x0._s_0.B = 1.0;
  (this->SliderBarColor).Value.SpecifiedColor.field0_0x0._s_0.A = 1.0;
  *(undefined8 *)&(this->SliderBarColor).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->SliderBarColor).Getter = 0;
  *(undefined8 *)&(this->SliderBarColor).Getter.field_0x8 = 0;
  (this->SliderThumbColor).Value.ColorUseRule = UseColor_Specified;
  (this->SliderThumbColor).bIsSet = false;
  *(undefined8 *)&(this->SliderThumbColor).Getter.field_0x8 = 0;
  *(undefined8 *)&(this->SliderThumbColor).Value.SpecifiedColor.field0_0x0 = 0x3f800000;
  (this->SliderThumbColor).Value.SpecifiedColor.field0_0x0._s_0.B = 1.0;
  (this->SliderThumbColor).Value.SpecifiedColor.field0_0x0._s_0.A = 1.0;
  *(undefined8 *)&(this->SliderThumbColor).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->SliderThumbColor).Getter = 0;
  (this->WidgetBackgroundColor).Value.ColorUseRule = UseColor_Specified;
  (this->WidgetBackgroundColor).bIsSet = false;
  *(undefined8 *)&(this->WidgetBackgroundColor).Getter.field_0x8 = 0;
  *(undefined8 *)&(this->WidgetBackgroundColor).Value.SpecifiedColor.field0_0x0 = 0x3f800000;
  (this->WidgetBackgroundColor).Value.SpecifiedColor.field0_0x0._s_0.B = 1.0;
  (this->WidgetBackgroundColor).Value.SpecifiedColor.field0_0x0._s_0.A = 1.0;
  *(undefined8 *)&(this->WidgetBackgroundColor).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->WidgetBackgroundColor).Getter = 0;
  (this->Slider).Object = (SSlider *)0x0;
  (this->Slider).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->Label).Object = (SAudioTextBox *)0x0;
  (this->Label).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->SliderBackgroundImage).Object = (SImage *)0x0;
  (this->SliderBackgroundImage).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->WidgetBackgroundImage).Object = (SImage *)0x0;
  (this->WidgetBackgroundImage).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->OutputRange).field0_0x0._s_0.X = 0.0;
  (this->OutputRange).field0_0x0._s_0.Y = 1.0;
  FSlateBrush::FSlateBrush(&this->SliderBackgroundBrush);
  (this->LayoutWidgetSwitcher).Object = (SWidgetSwitcher *)0x0;
  (this->LayoutWidgetSwitcher).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~SAudioSliderBase @ 14d8c03e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SAudioSliderBase::~SAudioSliderBase(SAudioSliderBase *this)

{
  TReferenceControllerBase<1> *pTVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7SAudioSliderBase__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->LayoutWidgetSwitcher).SharedReferenceCount.ReferenceController);
  pTVar1 = (this->SliderBackgroundBrush).ResourceHandle.Data.SharedReferenceCount.
           ReferenceController;
  (this->SliderBackgroundBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->WidgetBackgroundImage).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SliderBackgroundImage).SharedReferenceCount.ReferenceController);
  TSharedPtr<SAudioTextBox,1>::~TSharedPtr<SAudioTextBox,1>(&this->Label);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Slider).SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->WidgetBackgroundColor).Getter);
  pvVar2 = *(void **)&(this->WidgetBackgroundColor).Getter.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->WidgetBackgroundColor).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->SliderThumbColor).Getter);
  pvVar2 = *(void **)&(this->SliderThumbColor).Getter.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->SliderThumbColor).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->SliderBarColor).Getter);
  pvVar2 = *(void **)&(this->SliderBarColor).Getter.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->SliderBarColor).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->SliderBackgroundColor).Getter);
  pvVar2 = *(void **)&(this->SliderBackgroundColor).Getter.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->SliderBackgroundColor).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->LabelBackgroundColor).Getter);
  pvVar2 = *(void **)&(this->LabelBackgroundColor).Getter.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->LabelBackgroundColor).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->DesiredSizeOverride).Getter);
  pvVar2 = *(void **)&(this->DesiredSizeOverride).Getter.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->DesiredSizeOverride).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Orientation).Getter);
  pvVar2 = *(void **)&(this->Orientation).Getter.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->Orientation).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->SliderValueAttribute).Getter);
  pvVar2 = *(void **)&(this->SliderValueAttribute).Getter.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->SliderValueAttribute).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnValueCommitted);
  pvVar2 = *(void **)&(this->OnValueCommitted).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnValueCommitted);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnValueChanged);
  pvVar2 = *(void **)&(this->OnValueChanged).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnValueChanged);
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  return;
}

// operator() @ 14d8c4f40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`SAudioSliderBase::Construct'::__l2::<lambda_1>::operator()(void *this,float param_1)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  float fVar5;
  FReadAccessScope local_38 [2];
  
  (**(code **)(**(longlong **)this + 600))();
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
  if (*(longlong *)(lVar1 + 0x458) == 0) {
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
  SAudioTextBox::SetValueText(*(SAudioTextBox **)(lVar1 + 0x458),fVar5);
  return;
}

// operator() @ 14d8ce8d0

void __thiscall
`SAudioSliderBase::Construct'::__l2::<lambda_3>::operator()(void *this,FText *param_1,Type param_2)

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
  FReadAccessScope local_68;
  FReadAccessScope local_50;
  TAttribute<float> local_38;
  
  pFVar5 = FText::ToString(param_1);
  if ((pFVar5->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
  dVar8 = _wtof(_Str);
  fVar7 = (float)(**(code **)(**(longlong **)this + 0x2a0))(*(longlong **)this,(float)dVar8);
  pfVar6 = TAttribute<float>::Get((TAttribute<float> *)(*(longlong *)this + 0x2e0));
  if (__real_322bcc77 < (float)((uint)(fVar7 - *pfVar6) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    (**(code **)(**(longlong **)this + 600))();
    lVar1 = *(longlong *)this;
    if (*(longlong *)(lVar1 + 0x448) == 0) {
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
    local_38.Getter._16_8_ = 0;
    local_38.bIsSet = true;
    local_38.Getter._0_8_ = 0;
    local_38.Getter._8_8_ = 0;
    local_38.Value = fVar7;
    SSlider::SetValue(*(SSlider **)(lVar1 + 0x448),&local_38);
    lVar1 = *(longlong *)this;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar1 + 0x2a8),&local_50);
    if ((*(int *)(lVar1 + 0x2b8) != 0) &&
       (plVar2 = *(longlong **)(lVar1 + 0x2b0), plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x68))(plVar2,fVar7);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_50);
    lVar1 = *(longlong *)this;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar1 + 0x2c0),&local_68);
    if ((*(int *)(lVar1 + 0x2d0) != 0) &&
       (plVar2 = *(longlong **)(lVar1 + 0x2c8), plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x68))(plVar2,fVar7);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_68);
  }
  return;
}

// ComputeDesiredSize @ 14d8e5f70

/* WARNING: Enum "Type": Some values do not have unique names */

TVector2<double> * __thiscall
SAudioSliderBase::ComputeDesiredSize
          (SAudioSliderBase *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  FAudioSliderStyle *pFVar1;
  code *pcVar2;
  bool bVar3;
  TOptional<UE::Math::TVector2<double>_> *pTVar4;
  TVector2<double> *pTVar5;
  EOrientation *pEVar6;
  double *pdVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  double local_28;
  double local_20;
  double local_18;
  double dStack_10;
  
  pTVar4 = TAttribute<TOptional<UE::Math::TVector2<double>_>_>::Get(&this->DesiredSizeOverride);
  if (pTVar4->bIsSet == false) {
    pFVar1 = this->Style;
    local_20 = (this->SliderBackgroundSize).field0_0x0._s_0.Y;
    local_28 = (double)*(float *)&(pFVar1->TextBoxStyle).BackgroundImage.ImageSize;
    local_18 = local_28 + local_20 + (double)pFVar1->LabelPadding;
    local_20 = (double)*(float *)&(pFVar1->TextBoxStyle).BackgroundImage.ImageSize.field_0x4 +
               (double)pFVar1->LabelPadding + local_20;
    dStack_10 = (this->SliderBackgroundSize).field0_0x0._s_0.X;
    pEVar6 = TAttribute<enum_EOrientation>::Get(&this->Orientation);
    pdVar7 = &local_28;
    if (*pEVar6 != Orient_Vertical) {
      pdVar7 = &local_18;
    }
    uVar8 = *(undefined4 *)pdVar7;
    uVar9 = *(undefined4 *)((longlong)pdVar7 + 4);
    uVar10 = *(undefined4 *)(pdVar7 + 1);
    uVar11 = *(undefined4 *)((longlong)pdVar7 + 0xc);
  }
  else {
    pTVar4 = TAttribute<TOptional<UE::Math::TVector2<double>_>_>::Get(&this->DesiredSizeOverride);
    if (pTVar4->bIsSet == false) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TVector2<double> *)(*pcVar2)();
        return pTVar5;
      }
    }
    uVar8 = *(undefined4 *)&(pTVar4->TypedValue).field0_0x0;
    uVar9 = *(undefined4 *)((longlong)&(pTVar4->TypedValue).field0_0x0 + 4);
    uVar10 = *(undefined4 *)((longlong)&(pTVar4->TypedValue).field0_0x0 + 8);
    uVar11 = *(undefined4 *)((longlong)&(pTVar4->TypedValue).field0_0x0 + 0xc);
  }
  *(undefined4 *)&__return_storage_ptr__->field0_0x0 = uVar8;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 4) = uVar9;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar10;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = uVar11;
  return __return_storage_ptr__;
}

// Construct @ 14d8ebc50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SAudioSliderBase::Construct(SAudioSliderBase *this,FArguments *param_1)

{
  byte *pbVar1;
  FSlateBrush *this_00;
  TReferenceControllerBase<1> *pTVar2;
  SWidgetSwitcher *pSVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  TReferenceControllerBase<1> *pTVar7;
  undefined8 uVar8;
  EStyleColor EVar9;
  undefined2 uVar10;
  SSlider *pSVar11;
  FSharedReferencer<1> FVar12;
  bool bVar13;
  char cVar14;
  byte bVar15;
  ISlateStyle *pIVar16;
  FName *pFVar17;
  FAudioSliderStyle *pFVar18;
  FSlateColor *pFVar19;
  FSlateBrush *pFVar20;
  FArguments *pFVar21;
  FArguments *pFVar22;
  EOrientation *pEVar23;
  undefined8 *puVar24;
  ulong64 uVar25;
  FArguments *pFVar26;
  TSharedRef<SWidgetSwitcher,1> *pTVar27;
  longlong *this_01;
  T0RequiredArgs local_res8 [8];
  T0RequiredArgs local_res10 [8];
  T0RequiredArgs local_res18 [8];
  T0RequiredArgs local_res20 [8];
  FLLMScope local_f28;
  FLLMScope local_f24;
  FLLMScope local_f20;
  FLLMScope local_f1c;
  EOrientation local_f18;
  undefined1 local_f14;
  undefined1 local_f10 [8];
  ForAnyElementType FStack_f08;
  ulonglong local_f00;
  TSlateDecl<SSlider,RequiredArgs::T0RequiredArgs> local_ef8;
  float local_ee0;
  float local_edc;
  float local_ed8;
  bool local_ed4;
  undefined1 local_ed0 [8];
  void *pvStack_ec8;
  undefined4 local_ec0;
  undefined2 local_eb8;
  undefined1 local_eb0 [8];
  void *pvStack_ea8;
  undefined8 local_ea0;
  TSharedPtr<SAudioTextBox,1> local_e98;
  SWidgetSwitcher *local_e88;
  TReferenceControllerBase<1> *pTStack_e80;
  FSlateBrush *local_e78;
  undefined1 local_e70;
  undefined1 local_e68 [8];
  void *pvStack_e60;
  undefined8 local_e58;
  FSlateBrush *local_e50;
  undefined1 local_e48;
  undefined1 local_e40 [8];
  void *pvStack_e38;
  undefined8 local_e30;
  FName local_e28;
  FName local_e20;
  FMemScope local_e18;
  FName local_e10;
  FMemScope local_e08;
  FName local_e00;
  FMemScope local_df8;
  FName local_df0;
  FMemScope local_de8;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_de0;
  TSlateDecl<SAudioTextBox,RequiredArgs::T0RequiredArgs> local_dc8;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_db0;
  FLinearColor_u_0 local_d98;
  FLinearColor_u_0 local_d88;
  FDestructionSentinel local_d78;
  FDestructionSentinel local_d60;
  undefined1 *local_d48;
  FDestructionSentinel local_d40;
  undefined1 *local_d28;
  FDestructionSentinel local_d20;
  undefined1 *local_d08;
  FLinearColor_u_0 local_d00;
  undefined4 local_cf0;
  undefined1 local_cec;
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> local_ce8;
  TSharedRef<SImage,1> local_cd0;
  TSharedRef<SImage,1> local_cc0;
  SImage *local_cb0;
  TReferenceControllerBase<1> *pTStack_ca8;
  FName local_ca0;
  SSlider *local_c98;
  TReferenceControllerBase<1> *pTStack_c90;
  TSharedRef<SAudioTextBox,1> local_c88;
  TSharedRef<SWidgetSwitcher,1> local_c78;
  SImage *local_c68;
  TReferenceControllerBase<1> *pTStack_c60;
  undefined **local_c58 [20];
  TReferenceControllerBase<1> *local_bb8;
  FArguments local_ba8;
  FArguments local_920;
  FArguments local_678;
  FArguments local_3d0;
  
  this->Style = param_1->_Style;
  TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::operator=
            (&this->OnValueChanged,&param_1->_OnValueChanged);
  TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::operator=
            (&this->OnValueCommitted,&param_1->_OnValueCommitted);
  (this->SliderValueAttribute).Value = (param_1->_SliderValue).Value;
  (this->SliderValueAttribute).bIsSet = (param_1->_SliderValue).bIsSet;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->SliderValueAttribute).Getter,&(param_1->_SliderValue).Getter);
  uVar8 = *(undefined8 *)
           ((longlong)&(param_1->_SliderBackgroundColor).Value.SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->SliderBackgroundColor).Value.SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->_SliderBackgroundColor).Value.SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->SliderBackgroundColor).Value.SpecifiedColor.field0_0x0 + 8) =
       uVar8;
  EVar9 = (param_1->_SliderBackgroundColor).Value.ColorTableId;
  uVar10 = *(undefined2 *)&(param_1->_SliderBackgroundColor).Value.field_0x12;
  (this->SliderBackgroundColor).Value.ColorUseRule =
       (param_1->_SliderBackgroundColor).Value.ColorUseRule;
  (this->SliderBackgroundColor).Value.ColorTableId = EVar9;
  *(undefined2 *)&(this->SliderBackgroundColor).Value.field_0x12 = uVar10;
  (this->SliderBackgroundColor).bIsSet = (param_1->_SliderBackgroundColor).bIsSet;
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->SliderBackgroundColor).Getter,&(param_1->_SliderBackgroundColor).Getter);
  uVar8 = *(undefined8 *)((longlong)&(param_1->_SliderBarColor).Value.SpecifiedColor.field0_0x0 + 8)
  ;
  *(undefined8 *)&(this->SliderBarColor).Value.SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->_SliderBarColor).Value.SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->SliderBarColor).Value.SpecifiedColor.field0_0x0 + 8) = uVar8;
  EVar9 = (param_1->_SliderBarColor).Value.ColorTableId;
  uVar10 = *(undefined2 *)&(param_1->_SliderBarColor).Value.field_0x12;
  (this->SliderBarColor).Value.ColorUseRule = (param_1->_SliderBarColor).Value.ColorUseRule;
  (this->SliderBarColor).Value.ColorTableId = EVar9;
  *(undefined2 *)&(this->SliderBarColor).Value.field_0x12 = uVar10;
  (this->SliderBarColor).bIsSet = (param_1->_SliderBarColor).bIsSet;
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->SliderBarColor).Getter,&(param_1->_SliderBarColor).Getter);
  uVar8 = *(undefined8 *)
           ((longlong)&(param_1->_SliderThumbColor).Value.SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->SliderThumbColor).Value.SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->_SliderThumbColor).Value.SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->SliderThumbColor).Value.SpecifiedColor.field0_0x0 + 8) = uVar8;
  EVar9 = (param_1->_SliderThumbColor).Value.ColorTableId;
  uVar10 = *(undefined2 *)&(param_1->_SliderThumbColor).Value.field_0x12;
  (this->SliderThumbColor).Value.ColorUseRule = (param_1->_SliderThumbColor).Value.ColorUseRule;
  (this->SliderThumbColor).Value.ColorTableId = EVar9;
  *(undefined2 *)&(this->SliderThumbColor).Value.field_0x12 = uVar10;
  (this->SliderThumbColor).bIsSet = (param_1->_SliderThumbColor).bIsSet;
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->SliderThumbColor).Getter,&(param_1->_SliderThumbColor).Getter);
  uVar8 = *(undefined8 *)
           ((longlong)&(param_1->_WidgetBackgroundColor).Value.SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->WidgetBackgroundColor).Value.SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->_WidgetBackgroundColor).Value.SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->WidgetBackgroundColor).Value.SpecifiedColor.field0_0x0 + 8) =
       uVar8;
  EVar9 = (param_1->_WidgetBackgroundColor).Value.ColorTableId;
  uVar10 = *(undefined2 *)&(param_1->_WidgetBackgroundColor).Value.field_0x12;
  (this->WidgetBackgroundColor).Value.ColorUseRule =
       (param_1->_WidgetBackgroundColor).Value.ColorUseRule;
  (this->WidgetBackgroundColor).Value.ColorTableId = EVar9;
  *(undefined2 *)&(this->WidgetBackgroundColor).Value.field_0x12 = uVar10;
  (this->WidgetBackgroundColor).bIsSet = (param_1->_WidgetBackgroundColor).bIsSet;
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->WidgetBackgroundColor).Getter,&(param_1->_WidgetBackgroundColor).Getter);
  local_f18 = param_1->_Orientation;
  local_f14 = 1;
  local_f00 = 0;
  local_f10 = (undefined1  [8])0x0;
  FStack_f08.Data = (FScriptContainerElement *)0x0;
  (this->Orientation).Value = local_f18;
  (this->Orientation).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Orientation).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_f10);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f10,
             (FWriteAccessScope *)&local_d78);
  if (((int)local_f00 != 0) && (FStack_f08.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_f08.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_f08,0,0,0x10);
    local_f00 = local_f00 & 0xffffffff00000000;
  }
  if (local_d78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d78.Accessor,&local_d78);
  }
  if (FStack_f08.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_f08.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_f10);
  TAttribute<TOptional<UE::Math::TVector2<double>_>_>::operator=
            (&this->DesiredSizeOverride,&param_1->_DesiredSizeOverride);
  ::FName::FName(&local_e28,"AudioWidgetsStyle");
  pIVar16 = FSlateStyleRegistry::FindSlateStyle(&local_e28);
  if (pIVar16 != (ISlateStyle *)0x0) {
    pFVar17 = ::FName::FName(&local_ca0,"AudioSlider.Style");
    pFVar18 = (FAudioSliderStyle *)
              (**(code **)((longlong)*pIVar16 + 0xa0))
                        (pIVar16,FAudioSliderStyle::TypeName,*pFVar17,0,1);
    if (pFVar18 == (FAudioSliderStyle *)0x0) {
      pFVar18 = FAudioSliderStyle::GetDefault();
    }
    this->Style = pFVar18;
  }
  dVar6 = (this->Style->SliderBackgroundSize).field0_0x0._s_0.X;
  dVar5 = (this->Style->SliderBackgroundSize).field0_0x0._s_0.Y;
  local_ee0 = (float)dVar6;
  local_edc = (float)dVar5;
  (this->SliderBackgroundSize).field0_0x0._s_0.X = dVar6;
  (this->SliderBackgroundSize).field0_0x0._s_0.Y = dVar5;
  pFVar19 = TAttribute<FSlateColor>::Get(&this->SliderBackgroundColor);
  if (pFVar19->ColorUseRule == UseColor_ColorTable) {
    pFVar19 = (FSlateColor *)FSlateColor::GetColorFromTable(pFVar19);
  }
  local_d88._0_8_ = *(undefined8 *)&(pFVar19->SpecifiedColor).field0_0x0;
  local_d88._8_8_ = *(undefined8 *)((longlong)&(pFVar19->SpecifiedColor).field0_0x0 + 8);
  dVar5 = (this->SliderBackgroundSize).field0_0x0._s_0.X * __real_3fe0000000000000;
  pFVar19 = TAttribute<FSlateColor>::Get(&this->SliderBarColor);
  if (pFVar19->ColorUseRule == UseColor_ColorTable) {
    pFVar19 = (FSlateColor *)FSlateColor::GetColorFromTable(pFVar19);
  }
  local_d98._0_8_ = *(undefined8 *)&(pFVar19->SpecifiedColor).field0_0x0;
  local_d98._8_8_ = *(undefined8 *)((longlong)&(pFVar19->SpecifiedColor).field0_0x0 + 8);
  this_00 = &this->SliderBackgroundBrush;
  pFVar20 = (FSlateBrush *)
            FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FLinearColor,FLinearColor,double>
                      ((FSlateRoundedBoxBrush *)local_c58,(FLinearColor *)&local_d98._s_0,dVar5,
                       (FLinearColor *)&local_d88._s_0,(float)(dVar6 * __real_3fd5555555555555),
                       (FDeprecateVector2DParameter *)&local_ee0);
  FSlateBrush::operator=(this_00,pFVar20);
  local_c58[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_bb8);
  pFVar21 = SImage::FArguments::FArguments(&local_920);
  local_e70 = 1;
  local_e58 = 0;
  local_e68 = (undefined1  [8])0x0;
  pvStack_e60 = (void *)0x0;
  (pFVar21->_Image).Value = this_00;
  (pFVar21->_Image).bIsSet = true;
  local_e78 = this_00;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar21->_Image).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_e68);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_e68);
  if (pvStack_e60 != (void *)0x0) {
    FMemory::Free(pvStack_e60);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_e68);
  FLLMScope::FLLMScope(&local_f28,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_e20 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_e18,&local_e20,true);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
            (&local_de0,"SImage",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SAudioSlider.cpp"
             ,0x2d,local_res8);
  FMemScope::~FMemScope(&local_e18);
  FLLMScope::~FLLMScope(&local_f28);
  if (local_de0._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_de0._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_de0._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_cb0 = (this->SliderBackgroundImage).Object;
  pTStack_ca8 = (this->SliderBackgroundImage).SharedReferenceCount.ReferenceController;
  (this->SliderBackgroundImage).Object = local_de0._Widget.Object;
  (this->SliderBackgroundImage).SharedReferenceCount.ReferenceController =
       local_de0._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_ca8);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=(&local_de0,&local_cc0,pFVar21);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_cc0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_de0._Widget.SharedReferenceCount.ReferenceController);
  SImage::FArguments::~FArguments(&local_920);
  pFVar21 = SImage::FArguments::FArguments(&local_678);
  local_e48 = 1;
  local_e50 = &this->Style->WidgetBackgroundImage;
  local_e30 = 0;
  local_e40 = (undefined1  [8])0x0;
  pvStack_e38 = (void *)0x0;
  (pFVar21->_Image).Value = local_e50;
  (pFVar21->_Image).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar21->_Image).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_e40);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_e40);
  if (pvStack_e38 != (void *)0x0) {
    FMemory::Free(pvStack_e38);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_e40);
  local_d00._0_8_ = *(undefined8 *)&(this->WidgetBackgroundColor).Value.SpecifiedColor.field0_0x0;
  local_d00._8_8_ =
       *(undefined8 *)((longlong)&(this->WidgetBackgroundColor).Value.SpecifiedColor.field0_0x0 + 8)
  ;
  local_cf0._0_1_ = (this->WidgetBackgroundColor).Value.ColorUseRule;
  local_cf0._1_1_ = (this->WidgetBackgroundColor).Value.ColorTableId;
  local_cf0._2_2_ = *(undefined2 *)&(this->WidgetBackgroundColor).Value.field_0x12;
  local_cec = (this->WidgetBackgroundColor).bIsSet;
  local_ce8._16_4_ = 0;
  local_ce8._0_8_ = 0;
  local_ce8._8_8_ = 0;
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&local_ce8,&(this->WidgetBackgroundColor).Getter);
  pFVar21 = SImage::FArguments::ColorAndOpacity(pFVar21,(TAttribute<FSlateColor> *)&local_d00._s_0);
  FLLMScope::FLLMScope(&local_f24,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_e10 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_e08,&local_e10,true);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
            (&local_db0,"SImage",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SAudioSlider.cpp"
             ,0x2f,local_res10);
  FMemScope::~FMemScope(&local_e08);
  FLLMScope::~FLLMScope(&local_f24);
  if (local_db0._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_db0._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_db0._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_c68 = (this->WidgetBackgroundImage).Object;
  pTStack_c60 = (this->WidgetBackgroundImage).SharedReferenceCount.ReferenceController;
  (this->WidgetBackgroundImage).Object = local_db0._Widget.Object;
  (this->WidgetBackgroundImage).SharedReferenceCount.ReferenceController =
       local_db0._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_c60);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=(&local_db0,&local_cd0,pFVar21);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_cd0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_db0._Widget.SharedReferenceCount.ReferenceController);
  SImage::FArguments::~FArguments(&local_678);
  pFVar22 = SSlider::FArguments::FArguments(&local_3d0);
  local_ed8 = (this->SliderValueAttribute).Value;
  local_ed4 = (this->SliderValueAttribute).bIsSet;
  local_ed0 = (undefined1  [8])0x0;
  pvStack_ec8 = (void *)0x0;
  local_ec0 = 0;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)local_ed0,
             &(this->SliderValueAttribute).Getter);
  (pFVar22->_Value).Value = local_ed8;
  (pFVar22->_Value).bIsSet = local_ed4;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar22->_Value).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_ed0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_ed0);
  if (pvStack_ec8 != (void *)0x0) {
    FMemory::Free(pvStack_ec8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_ed0);
  pFVar22->_Style = &this->Style->SliderStyle;
  pEVar23 = TAttribute<enum_EOrientation>::Get(&this->Orientation);
  pFVar22->_Orientation = *pEVar23;
  local_eb8 = 0x100;
  local_ea0 = 0;
  local_eb0 = (undefined1  [8])0x0;
  pvStack_ea8 = (void *)0x0;
  (pFVar22->_IndentHandle).Value = false;
  (pFVar22->_IndentHandle).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar22->_IndentHandle).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_eb0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_eb0);
  if (pvStack_ea8 != (void *)0x0) {
    FMemory::Free(pvStack_ea8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_eb0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar22->_OnValueChanged,
             (FWriteAccessScope *)&local_d60);
  local_d48 = &(pFVar22->_OnValueChanged).field_0x8;
  puVar24 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_d48);
  if (puVar24 != (undefined8 *)0x0) {
    *puVar24 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar25 = FDelegateHandle::GenerateNewID();
    puVar24[2] = uVar25;
    *puVar24 = &TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioSliderBase::Construct'::`2'::<lambda_1>_>
                ::_vftable_;
    puVar24[3] = this;
  }
  if (local_d60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d60.Accessor,&local_d60);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar22->_OnMouseCaptureEnd,
             (FWriteAccessScope *)&local_d40);
  local_d28 = &(pFVar22->_OnMouseCaptureEnd).field_0x8;
  puVar24 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_d28);
  if (puVar24 != (undefined8 *)0x0) {
    *puVar24 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar25 = FDelegateHandle::GenerateNewID();
    puVar24[2] = uVar25;
    *puVar24 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioSliderBase::Construct'::`2'::<lambda_2>_>
                ::_vftable_;
    puVar24[3] = this;
  }
  if (local_d40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d40.Accessor,&local_d40);
  }
  FLLMScope::FLLMScope(&local_f20,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_e00 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_df8,&local_e00,true);
  TSlateDecl<SSlider,RequiredArgs::T0RequiredArgs>::TSlateDecl<SSlider,RequiredArgs::T0RequiredArgs>
            (&local_ef8,"SSlider",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SAudioSlider.cpp"
             ,0x34,local_res18);
  FMemScope::~FMemScope(&local_df8);
  FLLMScope::~FLLMScope(&local_f20);
  if (local_ef8._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_ef8._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_ef8._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_c98 = (this->Slider).Object;
  pTStack_c90 = (this->Slider).SharedReferenceCount.ReferenceController;
  (this->Slider).Object = local_ef8._Widget.Object;
  (this->Slider).SharedReferenceCount.ReferenceController =
       local_ef8._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_c90);
  pSVar11 = local_ef8._Widget.Object;
  if (local_ef8._Widget.Object == (SSlider *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar13) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)local_ef8._Widget.Object,(FSlateBaseNamedArgs *)pFVar22);
  SSlider::Construct(local_ef8._Widget.Object,pFVar22);
  if (local_ef8._Widget.Object == (SSlider *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar13) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (((local_ef8._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar14 = (**(code **)((local_ef8._Widget.Object)->_padding_ + 0x228))(local_ef8._Widget.Object);
    bVar15 = 0;
    if (cVar14 == '\0') goto LAB_14d8ec63c;
  }
  bVar15 = 0x20;
LAB_14d8ec63c:
  *(byte *)&(local_ef8._Widget.Object)->_padding_ =
       (byte)(local_ef8._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_ef8._Widget.Object)->_padding_ =
       (byte)(local_ef8._Widget.Object)->_padding_ | bVar15;
  if (local_ef8._Widget.Object == (SSlider *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar13) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pbVar1 = (byte *)((longlong)&(local_ef8._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if (local_ef8._Widget.Object == (SSlider *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x416,L"");
    if (bVar13) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FVar12.ReferenceController = local_ef8._Widget.SharedReferenceCount.ReferenceController;
  local_ef8._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_ef8._Widget.Object = (SSlider *)0x0;
  if (pSVar11 == (SSlider *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x26c,L"");
    if (bVar13) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar12.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SSlider::FArguments::~FArguments(&local_3d0);
  pFVar26 = SAudioTextBox::FArguments::FArguments(&local_ba8);
  pFVar26->_Style = &this->Style->TextBoxStyle;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &pFVar26->_OnValueTextCommitted,(FWriteAccessScope *)&local_d20);
  local_d08 = &(pFVar26->_OnValueTextCommitted).field_0x8;
  puVar24 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_d08);
  if (puVar24 != (undefined8 *)0x0) {
    *puVar24 = &
               ___7__TCommonDelegateInstanceState___A6AXAEBVFText__W4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar25 = FDelegateHandle::GenerateNewID();
    puVar24[2] = uVar25;
    *puVar24 = &TBaseFunctorDelegateInstance<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy,`SAudioSliderBase::Construct'::`2'::<lambda_3>_>
                ::_vftable_;
    puVar24[3] = this;
  }
  if (local_d20.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d20.Accessor,&local_d20);
  }
  FLLMScope::FLLMScope(&local_f1c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_df0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_de8,&local_df0,true);
  TSlateDecl<SAudioTextBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SAudioTextBox,RequiredArgs::T0RequiredArgs>
            (&local_dc8,"SAudioTextBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SAudioSlider.cpp"
             ,0x46,local_res20);
  FMemScope::~FMemScope(&local_de8);
  FLLMScope::~FLLMScope(&local_f1c);
  if (local_dc8._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_dc8._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_dc8._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_e98.Object = (this->Label).Object;
  local_e98.SharedReferenceCount.ReferenceController =
       (this->Label).SharedReferenceCount.ReferenceController;
  (this->Label).Object = local_dc8._Widget.Object;
  (this->Label).SharedReferenceCount.ReferenceController =
       local_dc8._Widget.SharedReferenceCount.ReferenceController;
  TSharedPtr<SAudioTextBox,1>::~TSharedPtr<SAudioTextBox,1>(&local_e98);
  TSlateDecl<SAudioTextBox,RequiredArgs::T0RequiredArgs>::operator<<=(&local_dc8,&local_c88,pFVar26)
  ;
  TSharedRef<SAudioTextBox,1>::~TSharedRef<SAudioTextBox,1>(&local_c88);
  TSlateDecl<SAudioTextBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SAudioTextBox,RequiredArgs::T0RequiredArgs>(&local_dc8);
  SAudioTextBox::FArguments::~FArguments(&local_ba8);
  pTVar27 = CreateWidgetLayout(this,&local_c78);
  this_01 = &this->_padding_;
  pTVar2 = (pTVar27->SharedReferenceCount).ReferenceController;
  pSVar3 = pTVar27->Object;
  if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_01);
  }
  else {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_01);
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar7 = (TReferenceControllerBase<1> *)this->_padding_;
  this->_padding_ = (longlong)pSVar3;
  this->_padding_ = (longlong)pTVar2;
  local_e88 = pSVar3;
  pTStack_e80 = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)this_01);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c78.SharedReferenceCount.ReferenceController);
  return;
}

// CreateWidgetLayout @ 14d9102c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWidgetSwitcher,1> * __thiscall
SAudioSliderBase::CreateWidgetLayout
          (SAudioSliderBase *this,TSharedRef<SWidgetSwitcher,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  SImage *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  SSlider *pSVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  code *pcVar9;
  FSharedReferencer<1> FVar10;
  bool bVar11;
  FArguments *pFVar12;
  TSharedRef<SWidgetSwitcher,1> *pTVar13;
  FArguments *pFVar14;
  FSlotArguments *pFVar15;
  longlong *plVar16;
  undefined1 *puVar17;
  FSlotArguments *pFVar18;
  FSlotArguments *pFVar19;
  TSharedRef<SOverlay,1> *pTVar20;
  FArguments *pFVar21;
  FSizeParam *pFVar22;
  TSharedRef<SHorizontalBox,1> *pTVar23;
  SWidgetSwitcher *pSVar24;
  TSharedRef<SImage,1> *pTVar25;
  FArguments *pFVar26;
  FSlot *pFVar27;
  FSlotArguments *pFVar28;
  TSharedRef<SAudioTextBox,1> *pTVar29;
  TSharedRef<SSlider,1> *pTVar30;
  TSharedRef<SVerticalBox,1> *pTVar31;
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> *this_00;
  EOrientation *pEVar32;
  FSlotArguments *pFVar33;
  FSlotArguments *pFVar34;
  undefined1 auStackY_1ad8 [32];
  T0RequiredArgs local_1aa8;
  T0RequiredArgs local_1aa7;
  T0RequiredArgs local_1aa6;
  T0RequiredArgs local_1aa5;
  T0RequiredArgs local_1aa4;
  T0RequiredArgs local_1aa3;
  T0RequiredArgs local_1aa2 [2];
  FLLMScope local_1aa0;
  FLLMScope local_1a9c;
  FLLMScope local_1a98;
  FLLMScope local_1a94;
  FLLMScope local_1a90;
  FLLMScope local_1a8c;
  FArguments *local_1a88;
  SImage *local_1a80;
  FSharedReferencer<1> local_1a78;
  FSlotArguments *local_1a70;
  FArguments *local_1a68;
  FArguments *local_1a60;
  FMemScope local_1a58;
  FMemScope local_1a50;
  SImage *local_1a48;
  FSharedReferencer<1> local_1a40;
  SSlider *local_1a38;
  FSharedReferencer<1> local_1a30;
  SOverlay *local_1a28;
  FSharedReferencer<1> local_1a20;
  SAudioTextBox *local_1a18;
  FSharedReferencer<1> local_1a10;
  SHorizontalBox *local_1a08;
  FSharedReferencer<1> local_1a00;
  SOverlay *local_19f8;
  FSharedReferencer<1> local_19f0;
  SImage *local_19e8;
  FSharedReferencer<1> local_19e0;
  SAudioTextBox *local_19d8;
  FSharedReferencer<1> local_19d0;
  SImage *local_19c8;
  FSharedReferencer<1> local_19c0;
  TSharedRef<SAudioTextBox,1> local_19b8;
  undefined4 local_19a8 [2];
  undefined4 local_19a0 [2];
  undefined4 local_1998 [2];
  undefined4 local_1990 [2];
  undefined4 local_1988 [2];
  undefined4 local_1980 [2];
  undefined4 local_1978 [2];
  undefined4 local_1970 [2];
  undefined4 local_1968 [2];
  undefined4 local_1960 [2];
  undefined4 local_1958 [2];
  undefined4 local_1950 [2];
  FName local_1948;
  FMemScope local_1940;
  FName local_1938;
  FMemScope local_1930;
  FArguments *local_1928;
  FName local_1920;
  FSlotArguments *local_1918;
  FArguments *local_1910;
  FName local_1908;
  FSlotArguments *local_1900;
  FName local_18f8;
  FName local_18f0;
  FMemScope local_18e8;
  TSharedRef<SWidgetSwitcher,1> *local_18e0;
  FMemScope local_18d8;
  undefined4 local_18d0 [2];
  undefined4 local_18c8 [2];
  undefined4 local_18c0 [2];
  undefined4 local_18b8 [2];
  undefined4 local_18b0 [2];
  undefined4 local_18a8 [2];
  undefined4 local_18a0 [2];
  undefined4 local_1898 [2];
  undefined4 local_1890 [2];
  undefined4 local_1888 [2];
  TSlateDecl<SWidgetSwitcher,RequiredArgs::T0RequiredArgs> local_1880;
  TSharedRef<SWidget,1> local_1868;
  TSharedRef<SWidget,1> local_1858;
  TSharedRef<SWidget,1> local_1848;
  TSharedRef<SWidget,1> local_1838;
  SWidgetSwitcher *local_1828;
  TReferenceControllerBase<1> *pTStack_1820;
  TSharedRef<SWidgetSwitcher,1> local_1818;
  TSharedRef<SOverlay,1> local_1808;
  TSharedRef<SHorizontalBox,1> local_17f8;
  TSharedRef<SOverlay,1> local_17e8;
  TSharedRef<SOverlay,1> local_17d8;
  TSharedRef<SVerticalBox,1> local_17c8;
  TSharedRef<SOverlay,1> local_17b8;
  TSharedRef<SSlider,1> local_17a8;
  TSharedRef<SImage,1> local_1798;
  TSharedRef<SAudioTextBox,1> local_1788;
  TSharedRef<SImage,1> local_1778;
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> local_1768;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_1750;
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> local_1738;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_1720;
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> local_1708;
  undefined1 local_16f0 [16];
  undefined1 local_16e0 [32];
  undefined1 local_16c0 [24];
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> local_16a8;
  undefined1 local_1690 [56];
  void *local_1658;
  undefined1 local_1630 [56];
  void *local_15f8;
  undefined1 local_15d0 [56];
  void *local_1598;
  undefined1 local_1570 [56];
  void *local_1538;
  undefined1 local_1510 [56];
  void *local_14d8;
  undefined8 *local_14b0 [2];
  TReferenceControllerBase<1> *local_14a0;
  undefined1 local_1480 [40];
  FSlotArgumentsMixin local_1458;
  undefined8 *local_13c8 [2];
  TReferenceControllerBase<1> *local_13b8;
  undefined1 local_1398 [40];
  FSlotArgumentsMixin local_1370;
  FSlotArguments local_12e0;
  FSlotArguments local_11f8;
  FSlotArguments local_1198;
  FSlotArguments local_1138;
  undefined1 local_10d8 [528];
  undefined1 local_ec8 [24];
  undefined1 local_eb0 [232];
  FArguments local_dc8;
  FArguments local_bc0;
  FArguments local_9b8;
  FArguments local_7b0;
  FArguments local_5a8;
  FArguments local_3a0;
  FScopedWidgetSlotArguments local_198;
  FScopedWidgetSlotArguments local_f8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1ad8;
  local_18e0 = __return_storage_ptr__;
  pFVar12 = SWidgetSwitcher::FArguments::FArguments((FArguments *)local_10d8);
  FLLMScope::FLLMScope(&local_1aa0,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1948 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1940,&local_1948,true);
  TSlateDecl<SWidgetSwitcher,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SWidgetSwitcher,RequiredArgs::T0RequiredArgs>
            (&local_1880,"SWidgetSwitcher",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SAudioSlider.cpp"
             ,0x10c,&local_1aa8);
  FMemScope::~FMemScope(&local_1940);
  FLLMScope::~FLLMScope(&local_1aa0);
  if (local_1880._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1880._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1880._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_1828 = (this->LayoutWidgetSwitcher).Object;
  pTStack_1820 = (this->LayoutWidgetSwitcher).SharedReferenceCount.ReferenceController;
  (this->LayoutWidgetSwitcher).Object = local_1880._Widget.Object;
  (this->LayoutWidgetSwitcher).SharedReferenceCount.ReferenceController =
       local_1880._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1820);
  TSlateDecl<SWidgetSwitcher,RequiredArgs::T0RequiredArgs>::operator<<=
            (&local_1880,&local_1818,pFVar12);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1818.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1880._Widget.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_ec8);
  if ((void *)local_ec8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_ec8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_ec8);
  DestructItems<TBasicLayoutWidgetSlot<FBasicLayoutWidgetSlot>::FSlotArguments,int>
            ((FSlotArguments *)local_10d8._504_8_,local_10d8._512_4_);
  if ((FSlotArguments *)local_10d8._504_8_ != (FSlotArguments *)0x0) {
    FMemory::Free((void *)local_10d8._504_8_);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_10d8);
  if (((this->LayoutWidgetSwitcher).Object == (SWidgetSwitcher *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    pTVar13 = (TSharedRef<SWidgetSwitcher,1> *)(*pcVar9)();
    return pTVar13;
  }
  local_1a88 = (FArguments *)
               SWidgetSwitcher::AddSlot((this->LayoutWidgetSwitcher).Object,&local_198,0);
  pFVar14 = SOverlay::FArguments::FArguments(&local_bc0);
  pFVar15 = (FSlotArguments *)SOverlay::Slot((FSlotArguments *)local_1570,0);
  plVar16 = (longlong *)&pFVar15->field_0x48;
  pFVar34 = (FSlotArguments *)0x0;
  if ((longlong *)local_18d0 != plVar16) {
    *(undefined4 *)plVar16 = 0;
    pFVar15->field_0x4c = 1;
  }
  pFVar18 = pFVar34;
  if (plVar16 != (longlong *)0x0) {
    pFVar18 = pFVar15;
  }
  if (local_18c8 != (undefined4 *)&pFVar18->field_0x50) {
    *(undefined4 *)&pFVar18->field_0x50 = 2;
    pFVar18->field_0x54 = 1;
  }
  pFVar15 = pFVar34;
  if (pFVar18 != (FSlotArguments *)0xffffffffffffffb8) {
    pFVar15 = pFVar18;
  }
  if (((this->WidgetBackgroundImage).Object == (SImage *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    pTVar13 = (TSharedRef<SWidgetSwitcher,1> *)(*pcVar9)();
    return pTVar13;
  }
  pTVar1 = (this->WidgetBackgroundImage).SharedReferenceCount.ReferenceController;
  pSVar2 = (this->WidgetBackgroundImage).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1a70 = (FSlotArguments *)pTVar1;
  if ((pSVar2 == (SImage *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    pTVar13 = (TSharedRef<SWidgetSwitcher,1> *)(*pcVar9)();
    return pTVar13;
  }
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1a80 = pSVar2;
  local_1a78.ReferenceController = pTVar1;
  if ((SImage **)&pFVar15->field_0x8 != &local_1a80) {
    *(SImage **)&pFVar15->field_0x8 = pSVar2;
    local_1a80 = (SImage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar15->field_0x10,&local_1a78);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1a78.ReferenceController);
  local_1910 = SOverlay::FArguments::operator+(pFVar14,(FSlotArguments *)pFVar15);
  pFVar15 = (FSlotArguments *)SOverlay::Slot((FSlotArguments *)local_15d0,0);
  plVar16 = (longlong *)&pFVar15->field_0x48;
  if ((longlong *)local_18c0 != plVar16) {
    *(undefined4 *)plVar16 = 0;
    pFVar15->field_0x4c = 1;
  }
  pFVar18 = pFVar34;
  if (plVar16 != (longlong *)0x0) {
    pFVar18 = pFVar15;
  }
  if (local_18b8 != (undefined4 *)&pFVar18->field_0x50) {
    *(undefined4 *)&pFVar18->field_0x50 = 2;
    pFVar18->field_0x54 = 1;
  }
  local_1918 = pFVar34;
  if (pFVar18 != (FSlotArguments *)0xffffffffffffffb8) {
    local_1918 = pFVar18;
  }
  local_1928 = SHorizontalBox::FArguments::FArguments(&local_3a0);
  pFVar15 = SHorizontalBox::Slot((FSlotArguments *)local_13c8);
  puVar17 = &pFVar15->field_0x48;
  if (local_18b0 != (undefined4 *)puVar17) {
    *(undefined4 *)puVar17 = 0;
    pFVar15->field_0x4c = 1;
  }
  pFVar18 = pFVar34;
  if (puVar17 != (undefined1 *)0x0) {
    pFVar18 = pFVar15;
  }
  if (local_18a8 != (undefined4 *)&pFVar18->field_0x50) {
    *(undefined4 *)&pFVar18->field_0x50 = 2;
    pFVar18->field_0x54 = 1;
  }
  pFVar15 = pFVar34;
  if (pFVar18 != (FSlotArguments *)0xffffffffffffffb8) {
    pFVar15 = pFVar18;
  }
  pFVar14 = SOverlay::FArguments::FArguments(&local_dc8);
  pFVar18 = (FSlotArguments *)SOverlay::Slot((FSlotArguments *)local_1630,0);
  puVar17 = &pFVar18->field_0x48;
  if (local_18a0 != (undefined4 *)puVar17) {
    *(undefined4 *)puVar17 = 0;
    pFVar18->field_0x4c = 1;
  }
  pFVar33 = pFVar34;
  if (puVar17 != (undefined1 *)0x0) {
    pFVar33 = pFVar18;
  }
  if (local_1898 != (undefined4 *)&pFVar33->field_0x50) {
    *(undefined4 *)&pFVar33->field_0x50 = 2;
    pFVar33->field_0x54 = 1;
  }
  pFVar18 = pFVar34;
  if (pFVar33 != (FSlotArguments *)0xffffffffffffffb8) {
    pFVar18 = pFVar33;
  }
  if (((this->SliderBackgroundImage).Object == (SImage *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    pTVar13 = (TSharedRef<SWidgetSwitcher,1> *)(*pcVar9)();
    return pTVar13;
  }
  pTVar1 = (this->SliderBackgroundImage).SharedReferenceCount.ReferenceController;
  pSVar2 = (this->SliderBackgroundImage).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pSVar2 == (SImage *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    pTVar13 = (TSharedRef<SWidgetSwitcher,1> *)(*pcVar9)();
    return pTVar13;
  }
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1a48 = pSVar2;
  local_1a40.ReferenceController = pTVar1;
  if ((SImage **)&pFVar18->field_0x8 != &local_1a48) {
    *(SImage **)&pFVar18->field_0x8 = pSVar2;
    local_1a48 = (SImage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar18->field_0x10,&local_1a40);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1a40.ReferenceController);
  local_1a68 = SOverlay::FArguments::operator+(pFVar14,(FSlotArguments *)pFVar18);
  pFVar18 = (FSlotArguments *)SOverlay::Slot((FSlotArguments *)local_1690,0);
  puVar17 = &pFVar18->field_0x48;
  if (local_1890 != (undefined4 *)puVar17) {
    *(undefined4 *)puVar17 = 0;
    pFVar18->field_0x4c = 1;
  }
  pFVar33 = pFVar34;
  if (puVar17 != (undefined1 *)0x0) {
    pFVar33 = pFVar18;
  }
  if (local_1888 != (undefined4 *)&pFVar33->field_0x50) {
    *(undefined4 *)&pFVar33->field_0x50 = 2;
    pFVar33->field_0x54 = 1;
  }
  pFVar18 = pFVar34;
  if (pFVar33 != (FSlotArguments *)0xffffffffffffffb8) {
    pFVar18 = pFVar33;
  }
  pFVar19 = TPaddingWidgetSlotMixin<SOverlay::FOverlaySlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)&pFVar18->field_0x18,this->Style->LabelPadding,0.0);
  if (((this->Slider).Object == (SSlider *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    pTVar13 = (TSharedRef<SWidgetSwitcher,1> *)(*pcVar9)();
    return pTVar13;
  }
  pTVar3 = (this->Slider).SharedReferenceCount.ReferenceController;
  pSVar4 = (this->Slider).Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pSVar4 == (SSlider *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    pTVar13 = (TSharedRef<SWidgetSwitcher,1> *)(*pcVar9)();
    return pTVar13;
  }
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1a38 = pSVar4;
  local_1a30.ReferenceController = pTVar3;
  if ((SSlider **)&pFVar19->_padding_ != &local_1a38) {
    pFVar19->_padding_ = (longlong)pSVar4;
    local_1a38 = (SSlider *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar19->_padding_,&local_1a30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1a30.ReferenceController);
  pFVar14 = SOverlay::FArguments::operator+(local_1a68,pFVar19);
  FLLMScope::FLLMScope(&local_1a9c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1938 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1930,&local_1938,true);
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>
            (&local_1738,"SOverlay",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SAudioSlider.cpp"
             ,0x123,&local_1aa7);
  FMemScope::~FMemScope(&local_1930);
  FLLMScope::~FLLMScope(&local_1a9c);
  pTVar20 = TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1738,&local_17e8,pFVar14);
  local_1a28 = pTVar20->Object;
  local_1a68 = (FArguments *)(pTVar20->SharedReferenceCount).ReferenceController;
  if (local_1a68 != (FArguments *)0x0) {
    LOCK();
    ((TReferenceControllerBase<1> *)local_1a68)->SharedReferenceCount =
         (atomic<int>)((int)((TReferenceControllerBase<1> *)local_1a68)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    ((TReferenceControllerBase<1> *)local_1a68)->SharedReferenceCount =
         (atomic<int>)((int)((TReferenceControllerBase<1> *)local_1a68)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1a20.ReferenceController = (TReferenceControllerBase<1> *)local_1a68;
  if ((SOverlay **)&pFVar15->field_0x8 != &local_1a28) {
    *(SOverlay **)&pFVar15->field_0x8 = local_1a28;
    local_1a28 = (SOverlay *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar15->field_0x10,&local_1a20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1a20.ReferenceController);
  pFVar21 = SHorizontalBox::FArguments::operator+(local_1928,pFVar15);
  pFVar15 = SHorizontalBox::Slot((FSlotArguments *)local_14b0);
  pFVar22 = (FSizeParam *)FAuto::FAuto((FAuto *)local_16f0);
  TOptional<FSizeParam>::operator=((TOptional<FSizeParam> *)&pFVar15->field_0x58,pFVar22);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_16c0);
  if ((void *)local_16c0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_16c0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_16c0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_16e0);
  if ((void *)local_16e0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_16e0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_16e0);
  puVar17 = &pFVar15->field_0x48;
  if (local_19a8 != (undefined4 *)puVar17) {
    *(undefined4 *)puVar17 = 0;
    pFVar15->field_0x4c = 1;
  }
  pFVar18 = pFVar34;
  if (puVar17 != (undefined1 *)0x0) {
    pFVar18 = pFVar15;
  }
  if (local_19a0 != (undefined4 *)&pFVar18->field_0x50) {
    *(undefined4 *)&pFVar18->field_0x50 = 2;
    pFVar18->field_0x54 = 1;
  }
  pFVar15 = pFVar34;
  if (pFVar18 != (FSlotArguments *)0xffffffffffffffb8) {
    pFVar15 = pFVar18;
  }
  pFVar15 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)&pFVar15->field_0x18,this->Style->LabelPadding,0.0,0.0
                       ,0.0);
  if (((this->Label).Object == (SAudioTextBox *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    pTVar13 = (TSharedRef<SWidgetSwitcher,1> *)(*pcVar9)();
    return pTVar13;
  }
  local_19b8.Object = (this->Label).Object;
  local_19b8.SharedReferenceCount.ReferenceController =
       (this->Label).SharedReferenceCount.ReferenceController;
  if (local_19b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_19b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_19b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((local_19b8.Object == (SAudioTextBox *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    pTVar13 = (TSharedRef<SWidgetSwitcher,1> *)(*pcVar9)();
    return pTVar13;
  }
  FVar10.ReferenceController = local_19b8.SharedReferenceCount.ReferenceController;
  local_1a10.ReferenceController = local_19b8.SharedReferenceCount.ReferenceController;
  local_1a18 = local_19b8.Object;
  if (local_19b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_19b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_19b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (local_19b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_19b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((SAudioTextBox **)&pFVar15->field_0x8 != &local_1a18) {
    *(SAudioTextBox **)&pFVar15->field_0x8 = local_19b8.Object;
    local_1a18 = (SAudioTextBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar15->field_0x10,&local_1a10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1a10.ReferenceController);
  pFVar21 = SHorizontalBox::FArguments::operator+(pFVar21,pFVar15);
  FLLMScope::FLLMScope(&local_1a98,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1920 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_18d8,&local_1920,true);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
            (&local_1750,"SHorizontalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SAudioSlider.cpp"
             ,0x11d,&local_1aa6);
  FMemScope::~FMemScope(&local_18d8);
  FLLMScope::~FLLMScope(&local_1a98);
  pTVar23 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1750,&local_17f8,pFVar21);
  pFVar15 = local_1918;
  pTVar5 = (pTVar23->SharedReferenceCount).ReferenceController;
  local_1a08 = pTVar23->Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1a00.ReferenceController = pTVar5;
  if ((SHorizontalBox **)&local_1918->field_0x8 != &local_1a08) {
    *(SHorizontalBox **)&local_1918->field_0x8 = local_1a08;
    local_1a08 = (SHorizontalBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&local_1918->field_0x10,&local_1a00);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1a00.ReferenceController);
  pFVar14 = SOverlay::FArguments::operator+(local_1910,(FSlotArguments *)pFVar15);
  FLLMScope::FLLMScope(&local_1a94,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1908 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1a50,&local_1908,true);
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>
            (&local_1768,"SOverlay",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SAudioSlider.cpp"
             ,0x111,&local_1aa5);
  FMemScope::~FMemScope(&local_1a50);
  FLLMScope::~FLLMScope(&local_1a94);
  pTVar20 = TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1768,&local_1808,pFVar14);
  pTVar6 = (pTVar20->SharedReferenceCount).ReferenceController;
  local_19f8 = pTVar20->Object;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_19f0.ReferenceController = pTVar6;
  if ((SOverlay **)&local_1a88->_padding_ != &local_19f8) {
    local_1a88->_padding_ = (longlong)local_19f8;
    local_19f8 = (SOverlay *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&local_1a88->_padding_,&local_19f0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_19f0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1808.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1768._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_17f8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1750._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar10.ReferenceController);
  TSharedRef<SAudioTextBox,1>::~TSharedRef<SAudioTextBox,1>(&local_19b8);
  TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_1458);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1480);
  if ((void *)local_1480._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1480._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1480);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_14a0);
  if (local_14b0[0] != (undefined8 *)0x0) {
    (**(code **)*local_14b0[0])(local_14b0[0],1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_1a68);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_17e8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1738._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_1690 + 0x30));
  if (local_1658 != (void *)0x0) {
    FMemory::Free(local_1658);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)(local_1690 + 0x30));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_1690._16_8_);
  if ((undefined8 *)local_1690._0_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_1690._0_8_)(local_1690._0_8_,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_1630 + 0x30));
  if (local_15f8 != (void *)0x0) {
    FMemory::Free(local_15f8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)(local_1630 + 0x30));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_1630._16_8_);
  if ((undefined8 *)local_1630._0_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_1630._0_8_)(local_1630._0_8_,1);
  }
  DestructItems<SOverlay::FOverlaySlot::FSlotArguments,int>
            ((FSlotArguments *)local_dc8._Slots.AllocatorInstance.Data,local_dc8._Slots.ArrayNum);
  if ((FSlotArguments *)local_dc8._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_dc8._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_dc8);
  TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_1370);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1398);
  if ((void *)local_1398._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1398._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1398);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_13b8);
  if (local_13c8[0] != (undefined8 *)0x0) {
    (**(code **)*local_13c8[0])(local_13c8[0],1);
  }
  DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_3a0._Slots.AllocatorInstance.Data,local_3a0._Slots.ArrayNum);
  if ((FSlotArguments *)local_3a0._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_3a0._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_3a0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_15d0 + 0x30));
  if (local_1598 != (void *)0x0) {
    FMemory::Free(local_1598);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)(local_15d0 + 0x30));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_15d0._16_8_);
  if ((undefined8 *)local_15d0._0_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_15d0._0_8_)(local_15d0._0_8_,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_1a70);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_1a70);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_1570 + 0x30));
  if (local_1538 != (void *)0x0) {
    FMemory::Free(local_1538);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)(local_1570 + 0x30));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_1570._16_8_);
  if ((undefined8 *)local_1570._0_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_1570._0_8_)(local_1570._0_8_,1);
  }
  DestructItems<SOverlay::FOverlaySlot::FSlotArguments,int>
            ((FSlotArguments *)local_bc0._Slots.AllocatorInstance.Data,local_bc0._Slots.ArrayNum);
  if ((FSlotArguments *)local_bc0._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_bc0._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_bc0);
  TPanelChildren<FBasicLayoutWidgetSlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
            (&local_198);
  pSVar24 = TSharedPtr<SWidgetSwitcher,1>::operator->(&this->LayoutWidgetSwitcher);
  local_1a50 = (FMemScope)SWidgetSwitcher::AddSlot(pSVar24,&local_f8,1);
  pFVar14 = SOverlay::FArguments::FArguments(&local_5a8);
  pFVar15 = (FSlotArguments *)SOverlay::Slot(&local_1138,0);
  puVar17 = &pFVar15->field_0x48;
  if (local_1998 != (undefined4 *)puVar17) {
    *(undefined4 *)puVar17 = 2;
    pFVar15->field_0x4c = 1;
  }
  pFVar18 = pFVar34;
  if (puVar17 != (undefined1 *)0x0) {
    pFVar18 = pFVar15;
  }
  if (local_1990 != (undefined4 *)&pFVar18->field_0x50) {
    *(undefined4 *)&pFVar18->field_0x50 = 0;
    pFVar18->field_0x54 = 1;
  }
  pFVar15 = pFVar34;
  if (pFVar18 != (FSlotArguments *)0xffffffffffffffb8) {
    pFVar15 = pFVar18;
  }
  pTVar25 = TSharedPtr<SImage,1>::ToSharedRef(&this->WidgetBackgroundImage,&local_1778);
  pTVar1 = (pTVar25->SharedReferenceCount).ReferenceController;
  local_19e8 = pTVar25->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_19e0.ReferenceController = pTVar1;
  if ((SImage **)&pFVar15->field_0x8 != &local_19e8) {
    *(SImage **)&pFVar15->field_0x8 = local_19e8;
    local_19e8 = (SImage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar15->field_0x10,&local_19e0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_19e0.ReferenceController);
  local_1a88 = SOverlay::FArguments::operator+(pFVar14,(FSlotArguments *)pFVar15);
  pFVar15 = (FSlotArguments *)SOverlay::Slot(&local_1198,0);
  puVar17 = &pFVar15->field_0x48;
  if (local_1988 != (undefined4 *)puVar17) {
    *(undefined4 *)puVar17 = 2;
    pFVar15->field_0x4c = 1;
  }
  pFVar18 = pFVar34;
  if (puVar17 != (undefined1 *)0x0) {
    pFVar18 = pFVar15;
  }
  if (local_1980 != (undefined4 *)&pFVar18->field_0x50) {
    *(undefined4 *)&pFVar18->field_0x50 = 0;
    pFVar18->field_0x54 = 1;
  }
  local_1a70 = pFVar34;
  if (pFVar18 != (FSlotArguments *)0xffffffffffffffb8) {
    local_1a70 = pFVar18;
  }
  pFVar26 = SVerticalBox::FArguments::FArguments(&local_7b0);
  pFVar27 = ::operator_new(0x58);
  local_1a60 = (FArguments *)pFVar34;
  if (pFVar27 != (FSlot *)0x0) {
    *(undefined8 *)pFVar27 = 0;
    *(undefined8 *)&pFVar27->field_0x8 = 0;
    *(undefined8 *)&pFVar27->field_0x10 = 0;
    *(undefined8 *)&pFVar27->field_0x18 = 0;
    *(undefined8 *)&pFVar27->field_0x20 = 0;
    *(undefined8 *)&pFVar27->field_0x28 = 0;
    *(undefined8 *)&pFVar27->field_0x30 = 0;
    *(undefined8 *)&pFVar27->field_0x38 = 0;
    *(undefined8 *)&pFVar27->field_0x40 = 0;
    *(undefined8 *)&pFVar27->field_0x48 = 0;
    *(undefined8 *)&pFVar27->field_0x50 = 0;
    local_1a60 = (FArguments *)SVerticalBox::FSlot::FSlot(pFVar27);
  }
  SVerticalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_eb0,(FSlot *)&local_1a60);
  pFVar28 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)(local_eb0 + 0x18),0.0,0.0,0.0,
                       this->Style->LabelPadding);
  pFVar28 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar28);
  puVar17 = &pFVar28->field_0x48;
  if (local_1978 != (undefined4 *)puVar17) {
    *(undefined4 *)puVar17 = 2;
    pFVar28->field_0x4c = 1;
  }
  pFVar15 = pFVar34;
  if (puVar17 != (undefined1 *)0x0) {
    pFVar15 = (FSlotArguments *)pFVar28;
  }
  if (local_1970 != (undefined4 *)&pFVar15->field_0x50) {
    *(undefined4 *)&pFVar15->field_0x50 = 2;
    pFVar15->field_0x54 = 1;
  }
  pFVar18 = pFVar34;
  if (pFVar15 != (FSlotArguments *)0xffffffffffffffb8) {
    pFVar18 = pFVar15;
  }
  pTVar29 = TSharedPtr<SAudioTextBox,1>::ToSharedRef(&this->Label,&local_1788);
  pTVar3 = (pTVar29->SharedReferenceCount).ReferenceController;
  local_19d8 = pTVar29->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_19d0.ReferenceController = pTVar3;
  if ((SAudioTextBox **)&((FSlotArguments *)pFVar18)->field_0x8 != &local_19d8) {
    *(SAudioTextBox **)&((FSlotArguments *)pFVar18)->field_0x8 = local_19d8;
    local_19d8 = (SAudioTextBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&((FSlotArguments *)pFVar18)->field_0x10,&local_19d0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_19d0.ReferenceController);
  local_1a60 = SVerticalBox::FArguments::operator+(pFVar26,(FSlotArguments *)pFVar18);
  pFVar27 = ::operator_new(0x58);
  local_1900 = pFVar34;
  if (pFVar27 != (FSlot *)0x0) {
    *(undefined8 *)pFVar27 = 0;
    *(undefined8 *)&pFVar27->field_0x8 = 0;
    *(undefined8 *)&pFVar27->field_0x10 = 0;
    *(undefined8 *)&pFVar27->field_0x18 = 0;
    *(undefined8 *)&pFVar27->field_0x20 = 0;
    *(undefined8 *)&pFVar27->field_0x28 = 0;
    *(undefined8 *)&pFVar27->field_0x30 = 0;
    *(undefined8 *)&pFVar27->field_0x38 = 0;
    *(undefined8 *)&pFVar27->field_0x40 = 0;
    *(undefined8 *)&pFVar27->field_0x48 = 0;
    *(undefined8 *)&pFVar27->field_0x50 = 0;
    local_1900 = (FSlotArguments *)SVerticalBox::FSlot::FSlot(pFVar27);
  }
  SVerticalBox::FSlot::FSlotArguments::FSlotArguments(&local_12e0,(FSlot *)&local_1900);
  local_12e0._72_4_ = 2;
  local_12e0._76_1_ = 1;
  local_12e0._80_4_ = 0;
  local_12e0._84_1_ = 1;
  pFVar14 = SOverlay::FArguments::FArguments(&local_9b8);
  pFVar15 = (FSlotArguments *)SOverlay::Slot(&local_11f8,0);
  puVar17 = &pFVar15->field_0x48;
  if (local_1968 != (undefined4 *)puVar17) {
    *(undefined4 *)puVar17 = 2;
    pFVar15->field_0x4c = 1;
  }
  pFVar18 = pFVar34;
  if (puVar17 != (undefined1 *)0x0) {
    pFVar18 = pFVar15;
  }
  if (local_1960 != (undefined4 *)&pFVar18->field_0x50) {
    *(undefined4 *)&pFVar18->field_0x50 = 0;
    pFVar18->field_0x54 = 1;
  }
  pFVar15 = pFVar34;
  if (pFVar18 != (FSlotArguments *)0xffffffffffffffb8) {
    pFVar15 = pFVar18;
  }
  pTVar25 = TSharedPtr<SImage,1>::ToSharedRef(&this->SliderBackgroundImage,&local_1798);
  pTVar5 = (pTVar25->SharedReferenceCount).ReferenceController;
  local_19c8 = pTVar25->Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_19c0.ReferenceController = pTVar5;
  if ((SImage **)&pFVar15->field_0x8 != &local_19c8) {
    *(SImage **)&pFVar15->field_0x8 = local_19c8;
    local_19c8 = (SImage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar15->field_0x10,&local_19c0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_19c0.ReferenceController);
  pFVar14 = SOverlay::FArguments::operator+(pFVar14,(FSlotArguments *)pFVar15);
  pFVar15 = (FSlotArguments *)SOverlay::Slot((FSlotArguments *)local_1510,0);
  puVar17 = &pFVar15->field_0x48;
  if (local_1958 != (undefined4 *)puVar17) {
    *(undefined4 *)puVar17 = 2;
    pFVar15->field_0x4c = 1;
  }
  pFVar18 = pFVar34;
  if (puVar17 != (undefined1 *)0x0) {
    pFVar18 = pFVar15;
  }
  if (local_1950 != (undefined4 *)&pFVar18->field_0x50) {
    *(undefined4 *)&pFVar18->field_0x50 = 0;
    pFVar18->field_0x54 = 1;
  }
  if (pFVar18 != (FSlotArguments *)0xffffffffffffffb8) {
    pFVar34 = pFVar18;
  }
  pFVar19 = TPaddingWidgetSlotMixin<SOverlay::FOverlaySlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)&pFVar34->field_0x18,0.0,this->Style->LabelPadding);
  pTVar30 = TSharedPtr<SSlider,1>::ToSharedRef(&this->Slider,&local_17a8);
  pTVar6 = (pTVar30->SharedReferenceCount).ReferenceController;
  local_1868.Object = (SWidget *)pTVar30->Object;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1868.SharedReferenceCount.ReferenceController = pTVar6;
  pFVar19 = TSlotBase<SOverlay::FOverlaySlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)pFVar19,&local_1868);
  pFVar14 = SOverlay::FArguments::operator+(pFVar14,pFVar19);
  FLLMScope::FLLMScope(&local_1a90,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18f8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1a58,&local_18f8,true);
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>
            (&local_1708,"SOverlay",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SAudioSlider.cpp"
             ,0x15d,&local_1aa4);
  FMemScope::~FMemScope(&local_1a58);
  FLLMScope::~FLLMScope(&local_1a90);
  pTVar20 = TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1708,&local_17b8,pFVar14);
  local_1858.Object = (SWidget *)pTVar20->Object;
  local_1a58 = (FMemScope)(pTVar20->SharedReferenceCount).ReferenceController;
  if (local_1a58 != (FMemScope)0x0) {
    LOCK();
    *(atomic<int> *)((longlong)local_1a58 + 8) =
         (atomic<int>)((int)*(atomic<int> *)((longlong)local_1a58 + 8) + 1);
    UNLOCK();
  }
  local_1858.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)local_1a58;
  pFVar28 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)&local_12e0,&local_1858);
  pFVar26 = SVerticalBox::FArguments::operator+(local_1a60,pFVar28);
  FLLMScope::FLLMScope(&local_1a8c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18f0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_18e8,&local_18f0,true);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
            (&local_1720,"SVerticalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SAudioSlider.cpp"
             ,0x14e,&local_1aa3);
  FMemScope::~FMemScope(&local_18e8);
  FLLMScope::~FLLMScope(&local_1a8c);
  pTVar31 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1720,&local_17c8,pFVar26);
  pTVar7 = (pTVar31->SharedReferenceCount).ReferenceController;
  local_1848.Object = (SWidget *)pTVar31->Object;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1848.SharedReferenceCount.ReferenceController = pTVar7;
  pFVar19 = TSlotBase<SOverlay::FOverlaySlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)local_1a70,&local_1848);
  pFVar14 = SOverlay::FArguments::operator+(local_1a88,pFVar19);
  this_00 = MakeTDecl<SOverlay,RequiredArgs::T0RequiredArgs>
                      (&local_16a8,"SOverlay",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SAudioSlider.cpp"
                       ,0x142,local_1aa2);
  pTVar20 = TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_00,&local_17d8,pFVar14);
  pTVar8 = (pTVar20->SharedReferenceCount).ReferenceController;
  local_1838.Object = (SWidget *)pTVar20->Object;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1838.SharedReferenceCount.ReferenceController = pTVar8;
  TSlotBase<FBasicLayoutWidgetSlot>::FSlotArguments::operator[]
            ((FSlotArguments *)local_1a50,&local_1838);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_17d8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_16a8._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_17c8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1720._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_1a58);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_17b8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1708._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_17a8.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_1510 + 0x30));
  if (local_14d8 != (void *)0x0) {
    FMemory::Free(local_14d8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)(local_1510 + 0x30));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_1510._16_8_);
  if ((undefined8 *)local_1510._0_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_1510._0_8_)(local_1510._0_8_,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1798.SharedReferenceCount.ReferenceController);
  SOverlay::FOverlaySlot::FSlotArguments::~FSlotArguments(&local_11f8);
  DestructItems<SOverlay::FOverlaySlot::FSlotArguments,int>
            ((FSlotArguments *)local_9b8._Slots.AllocatorInstance.Data,local_9b8._Slots.ArrayNum);
  if ((FSlotArguments *)local_9b8._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_9b8._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_9b8);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_12e0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  TSharedRef<SAudioTextBox,1>::~TSharedRef<SAudioTextBox,1>(&local_1788);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments((FSlotArguments *)local_eb0);
  DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_7b0._Slots.AllocatorInstance.Data,local_7b0._Slots.ArrayNum);
  if ((FSlotArguments *)local_7b0._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_7b0._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_7b0);
  SOverlay::FOverlaySlot::FSlotArguments::~FSlotArguments(&local_1198);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1778.SharedReferenceCount.ReferenceController);
  SOverlay::FOverlaySlot::FSlotArguments::~FSlotArguments(&local_1138);
  DestructItems<SOverlay::FOverlaySlot::FSlotArguments,int>
            ((FSlotArguments *)local_5a8._Slots.AllocatorInstance.Data,local_5a8._Slots.ArrayNum);
  if ((FSlotArguments *)local_5a8._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_5a8._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_5a8);
  TPanelChildren<FBasicLayoutWidgetSlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
            (&local_f8);
  pSVar24 = TSharedPtr<SWidgetSwitcher,1>::operator->(&this->LayoutWidgetSwitcher);
  pEVar32 = TAttribute<enum_EOrientation>::Get(&this->Orientation);
  SWidgetSwitcher::SetActiveWidgetIndex(pSVar24,*pEVar32);
  pEVar32 = TAttribute<enum_EOrientation>::Get(&this->Orientation);
  SetOrientation(this,*pEVar32);
  TSharedPtr<SWidgetSwitcher,1>::ToSharedRef(&this->LayoutWidgetSwitcher,local_18e0);
  return local_18e0;
}

// GetOutputValue @ 14d932690

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall SAudioSliderBase::GetOutputValue(SAudioSliderBase *this,float param_1)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (this->OutputRange).field0_0x0._s_0.Y;
  if ((double)param_1 <= dVar2) {
    dVar2 = (double)param_1;
  }
  dVar1 = (this->OutputRange).field0_0x0._s_0.X;
  if (dVar2 <= dVar1) {
    dVar2 = dVar1;
  }
  return (float)dVar2;
}

// GetOutputValueForText @ 14d932ad0

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall SAudioSliderBase::GetOutputValueForText(SAudioSliderBase *this,float param_1)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014d932ad3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = (float)(**(code **)(this->_padding_ + 0x248))();
  return fVar1;
}

// GetSliderValue @ 14d936020

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall SAudioSliderBase::GetSliderValue(SAudioSliderBase *this,float param_1)

{
  return param_1;
}

// GetSliderValueForText @ 14d936420

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall SAudioSliderBase::GetSliderValueForText(SAudioSliderBase *this,float param_1)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014d936423. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = (float)(**(code **)(this->_padding_ + 0x250))();
  return fVar1;
}

// SetDesiredSizeOverride @ 14d968ba0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SAudioSliderBase::SetDesiredSizeOverride(SAudioSliderBase *this,TVector2<double> *param_1)

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

// SetLabelBackgroundColor @ 14d969a00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SAudioSliderBase::SetLabelBackgroundColor(SAudioSliderBase *this,FSlateColor *param_1)

{
  SAudioTextBox *this_00;
  code *pcVar1;
  bool bVar2;
  FLinearColor *pFVar3;
  FLinearColor_u_0 local_48;
  uint local_38;
  uint local_18;
  
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
  this_00 = (this->Label).Object;
  if (param_1->ColorUseRule == UseColor_ColorTable) {
    pFVar3 = FSlateColor::GetColorFromTable(param_1);
    local_48._s_0.R = (pFVar3->field0_0x0)._s_0.R;
    local_48._s_0.G = (pFVar3->field0_0x0)._s_0.G;
    local_48._s_0.B = (pFVar3->field0_0x0)._s_0.B;
    local_48._s_0.A = (pFVar3->field0_0x0)._s_0.A;
  }
  else {
    local_48._s_0.R = (param_1->SpecifiedColor).field0_0x0._s_0.R;
    local_48._s_0.G = (param_1->SpecifiedColor).field0_0x0._s_0.G;
    local_48._s_0.B = (param_1->SpecifiedColor).field0_0x0._s_0.B;
    local_48._s_0.A = (param_1->SpecifiedColor).field0_0x0._s_0.A;
  }
  local_18 = local_18 & 0xffffff00;
  local_38 = local_18;
  SAudioTextBox::SetLabelBackgroundColor(this_00,(FSlateColor *)&local_48._s_0);
  return;
}

// SetOrientation @ 14d96ad70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SAudioSliderBase::SetOrientation(SAudioSliderBase *this,EOrientation param_1)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  SWidgetSwitcher *this_00;
  code *pcVar5;
  bool bVar6;
  EOrientation *pEVar7;
  undefined1 local_148 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_140;
  ForAnyElementType FStack_138;
  ulonglong local_130;
  FDestructionSentinel local_128;
  TVector2<double>_u_0 local_110;
  undefined1 local_100;
  undefined1 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  TVector2<double>_u_0 local_d8;
  undefined1 local_c8;
  undefined1 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  TAttribute<TOptional<UE::Math::TVector2<double>_>_> local_a0;
  TAttribute<TOptional<UE::Math::TVector2<double>_>_> local_68;
  
  local_148[4] = true;
  local_130 = 0;
  local_140.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_138.Data = (FScriptContainerElement *)0x0;
  local_148._0_4_ = param_1;
  SetWidgetAttribute<enum_EOrientation,enum_EOrientation>
            ((SWidget *)this,&this->Orientation,(TAttribute<EOrientation> *)local_148,Layout);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_140,(FWriteAccessScope *)&local_128);
  if (((int)local_130 != 0) && (FStack_138.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_138.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_138,0,0,0x10);
    local_130 = local_130 & 0xffffffff00000000;
  }
  if (local_128.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_128.Accessor,&local_128);
  }
  if (FStack_138.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_138.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_140.AccessDetector);
  if ((this->Slider).Object == (SSlider *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  SSlider::SetOrientation((this->Slider).Object,param_1);
  if ((this->LayoutWidgetSwitcher).Object == (SWidgetSwitcher *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  this_00 = (this->LayoutWidgetSwitcher).Object;
  pEVar7 = TAttribute<enum_EOrientation>::Get(&this->Orientation);
  SWidgetSwitcher::SetActiveWidgetIndex(this_00,*pEVar7);
  fVar1 = *(float *)&(this->Style->TextBoxStyle).BackgroundImage.ImageSize;
  pEVar7 = TAttribute<enum_EOrientation>::Get(&this->Orientation);
  if (*pEVar7 == Orient_Horizontal) {
    dVar3 = (this->SliderBackgroundSize).field0_0x0._s_0.Y;
    dVar4 = (this->SliderBackgroundSize).field0_0x0._s_0.X;
    fVar2 = this->Style->LabelPadding;
    if ((this->SliderBackgroundImage).Object == (SImage *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    local_110._s_0.Y = (this->SliderBackgroundSize).field0_0x0._s_0.X;
    local_110._s_0.X = (this->SliderBackgroundSize).field0_0x0._s_0.Y;
    local_f0 = 0;
    uStack_e8 = 0;
    local_100 = 1;
    local_f8 = 1;
    local_e0 = 0;
    SImage::SetDesiredSizeOverride
              ((this->SliderBackgroundImage).Object,
               (TAttribute<TOptional<UE::Math::TVector2<double>_>_> *)&local_110._s_0);
    if ((this->WidgetBackgroundImage).Object == (SImage *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    local_a8 = 0;
    local_c8 = 1;
    local_c0 = 1;
    local_b8 = 0;
    uStack_b0 = 0;
    local_d8._s_0.X = (double)fVar1 + dVar3 + (double)fVar2;
    local_d8._s_0.Y = dVar4;
    SImage::SetDesiredSizeOverride
              ((this->WidgetBackgroundImage).Object,
               (TAttribute<TOptional<UE::Math::TVector2<double>_>_> *)&local_d8._s_0);
  }
  else {
    pEVar7 = TAttribute<enum_EOrientation>::Get(&this->Orientation);
    if (*pEVar7 == Orient_Vertical) {
      if ((this->SliderBackgroundImage).Object == (SImage *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      local_a0.Value.bIsSet = false;
      local_a0.Getter._16_8_ = 0;
      local_a0.bIsSet = true;
      local_a0.Getter._0_8_ = 0;
      local_a0.Getter._8_8_ = 0;
      SImage::SetDesiredSizeOverride((this->SliderBackgroundImage).Object,&local_a0);
      if ((this->WidgetBackgroundImage).Object == (SImage *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      local_68.Value.bIsSet = false;
      local_68.Getter._16_8_ = 0;
      local_68.bIsSet = true;
      local_68.Getter._0_8_ = 0;
      local_68.Getter._8_8_ = 0;
      SImage::SetDesiredSizeOverride((this->WidgetBackgroundImage).Object,&local_68);
    }
  }
  return;
}

// SetOutputRange @ 14d96b5a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SAudioSliderBase::SetOutputRange(SAudioSliderBase *this,TVector2<double> *param_1)

{
  TAttribute<float> *this_00;
  float fVar1;
  double dVar2;
  SAudioTextBox *this_01;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  float *pfVar6;
  SSlider *this_02;
  FReadAccessScope *this_03;
  float fVar7;
  undefined8 uVar8;
  double dVar9;
  TAttribute<float> local_b8;
  TVector2<double>_u_0 local_98;
  FReadAccessScope local_88;
  FReadAccessScope local_70;
  FReadAccessScope local_58;
  FReadAccessScope local_40 [2];
  
  dVar9 = (param_1->field0_0x0)._s_0.Y;
  this_00 = &this->SliderValueAttribute;
  dVar2 = (param_1->field0_0x0)._s_0.X;
  if (dVar2 <= dVar9) {
    dVar9 = dVar2;
  }
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  (this->OutputRange).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->OutputRange).field0_0x0._s_0.Y = dVar2;
  (this->OutputRange).field0_0x0._s_0.X = dVar9;
  pfVar6 = TAttribute<float>::Get(this_00);
  fVar1 = *pfVar6;
  fVar7 = (float)(**(code **)(this->_padding_ + 0x248))(this,fVar1);
  dVar9 = (this->OutputRange).field0_0x0._s_0.Y;
  if ((double)fVar7 <= dVar9) {
    dVar9 = (double)fVar7;
  }
  dVar2 = (this->OutputRange).field0_0x0._s_0.X;
  if (dVar9 <= dVar2) {
    dVar9 = dVar2;
  }
  uVar8 = (**(code **)(this->_padding_ + 0x250))(this,(float)dVar9);
  if ((this->Label).Object == (SAudioTextBox *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  this_01 = (this->Label).Object;
  fVar7 = (float)(**(code **)(this->_padding_ + 0x298))(this,uVar8);
  SAudioTextBox::SetValueText(this_01,fVar7);
  if ((this->Label).Object == (SAudioTextBox *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_98._s_0.X = (this->OutputRange).field0_0x0._s_0.X;
  local_98._s_0.Y = (this->OutputRange).field0_0x0._s_0.Y;
  SAudioTextBox::UpdateValueTextWidth((this->Label).Object,(TVector2<double> *)&local_98._s_0);
  if (__real_322bcc77 <
      (float)((uint)(fVar1 - (float)uVar8) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    bVar5 = TAttribute<float>::IsBound(this_00);
    if (bVar5) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnValueChanged,
                 &local_70);
      if ((*(int *)&(this->OnValueChanged).field_0x10 != 0) &&
         (plVar3 = *(longlong **)&(this->OnValueChanged).field_0x8, plVar3 != (longlong *)0x0)) {
        (**(code **)(*plVar3 + 0x68))(plVar3,uVar8);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_70);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnValueCommitted,
                 &local_58);
      if ((*(int *)&(this->OnValueCommitted).field_0x10 != 0) &&
         (plVar3 = *(longlong **)&(this->OnValueCommitted).field_0x8, plVar3 != (longlong *)0x0)) {
        (**(code **)(*plVar3 + 0x68))(plVar3,uVar8);
      }
      this_03 = &local_58;
    }
    else {
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->SliderValueAttribute).Getter);
      this_00->Value = (float)uVar8;
      (this->SliderValueAttribute).bIsSet = true;
      if ((this->Slider).Object != (SSlider *)0x0) {
        this_02 = TSharedPtr<SSlider,1>::operator->(&this->Slider);
        local_b8.Value = this_00->Value;
        local_b8.bIsSet = (this->SliderValueAttribute).bIsSet;
        local_b8.Getter._0_8_ = 0;
        local_b8.Getter._8_8_ = 0;
        local_b8.Getter._16_4_ = 0;
        TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::
        CopyFrom<FDefaultDelegateUserPolicy>(&local_b8.Getter,&(this->SliderValueAttribute).Getter);
        SSlider::SetValue(this_02,&local_b8);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnValueChanged,
                 local_40);
      if ((*(int *)&(this->OnValueChanged).field_0x10 != 0) &&
         (plVar3 = *(longlong **)&(this->OnValueChanged).field_0x8, plVar3 != (longlong *)0x0)) {
        (**(code **)(*plVar3 + 0x68))(plVar3,uVar8);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (local_40);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnValueCommitted,
                 &local_88);
      if ((*(int *)&(this->OnValueCommitted).field_0x10 != 0) &&
         (plVar3 = *(longlong **)&(this->OnValueCommitted).field_0x8, plVar3 != (longlong *)0x0)) {
        (**(code **)(*plVar3 + 0x68))(plVar3,uVar8);
      }
      this_03 = &local_88;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (this_03);
  }
  return;
}

// SetShowLabelOnlyOnHover @ 14d96c460

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SAudioSliderBase::SetShowLabelOnlyOnHover(SAudioSliderBase *this,bool param_1)

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

// SetShowUnitsText @ 14d96c780

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SAudioSliderBase::SetShowUnitsText(SAudioSliderBase *this,bool param_1)

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

// SetSliderBackgroundColor @ 14d96cac0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SAudioSliderBase::SetSliderBackgroundColor(SAudioSliderBase *this,FSlateColor *param_1)

{
  double dVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  FSlateColor *pFVar5;
  FSlateBrush *pFVar6;
  float local_res8;
  float local_resc;
  FLinearColor_u_0 local_168;
  undefined4 local_158;
  undefined1 local_154;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_150;
  ForAnyElementType FStack_148;
  ulonglong local_140;
  FLinearColor_u_0 local_138;
  FLinearColor_u_0 local_128;
  TAttribute<FSlateBrush_const_*> local_118;
  FDestructionSentinel local_f0;
  undefined **local_d8 [20];
  TReferenceControllerBase<1> *local_38;
  
  local_168._0_8_ = *(undefined8 *)&(param_1->SpecifiedColor).field0_0x0;
  local_168._8_8_ = *(undefined8 *)((longlong)&(param_1->SpecifiedColor).field0_0x0 + 8);
  local_158._0_1_ = param_1->ColorUseRule;
  local_158._1_1_ = param_1->ColorTableId;
  local_158._2_2_ = *(undefined2 *)&param_1->field_0x12;
  local_140 = 0;
  local_154 = 1;
  local_150.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_148.Data = (FScriptContainerElement *)0x0;
  SWidget::SetAttribute<FSlateColor,FSlateColor>
            ((SWidget *)this,&this->SliderBackgroundColor,(TAttribute<FSlateColor> *)&local_168._s_0
             ,Paint);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_150,(FWriteAccessScope *)&local_f0);
  if (((int)local_140 != 0) && (FStack_148.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_148.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_148,0,0,0x10);
    local_140 = local_140 & 0xffffffff00000000;
  }
  if (local_f0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_f0.Accessor,&local_f0);
  }
  if (FStack_148.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_148.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_150.AccessDetector);
  dVar1 = (this->SliderBackgroundSize).field0_0x0._s_0.X;
  local_resc = (float)(this->SliderBackgroundSize).field0_0x0._s_0.Y;
  local_res8 = (float)dVar1;
  pFVar5 = TAttribute<FSlateColor>::Get(&this->SliderBackgroundColor);
  if (pFVar5->ColorUseRule == UseColor_ColorTable) {
    pFVar5 = (FSlateColor *)FSlateColor::GetColorFromTable(pFVar5);
  }
  local_138._0_8_ = *(undefined8 *)&(pFVar5->SpecifiedColor).field0_0x0;
  local_138._8_8_ = *(undefined8 *)((longlong)&(pFVar5->SpecifiedColor).field0_0x0 + 8);
  dVar3 = (this->SliderBackgroundSize).field0_0x0._s_0.X * __real_3fe0000000000000;
  pFVar5 = TAttribute<FSlateColor>::Get(&this->SliderBarColor);
  if (pFVar5->ColorUseRule == UseColor_ColorTable) {
    pFVar5 = (FSlateColor *)FSlateColor::GetColorFromTable(pFVar5);
  }
  local_128._0_8_ = *(undefined8 *)&(pFVar5->SpecifiedColor).field0_0x0;
  local_128._8_8_ = *(undefined8 *)((longlong)&(pFVar5->SpecifiedColor).field0_0x0 + 8);
  pFVar6 = (FSlateBrush *)
           FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FLinearColor,FLinearColor,double>
                     ((FSlateRoundedBoxBrush *)local_d8,(FLinearColor *)&local_128._s_0,dVar3,
                      (FLinearColor *)&local_138._s_0,(float)(dVar1 * __real_3fd5555555555555),
                      (FDeprecateVector2DParameter *)&local_res8);
  FSlateBrush::operator=(&this->SliderBackgroundBrush,pFVar6);
  local_d8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_38);
  if ((this->SliderBackgroundImage).Object == (SImage *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_118.Getter._16_8_ = 0;
  local_118.bIsSet = true;
  local_118.Getter._0_8_ = 0;
  local_118.Getter._8_8_ = 0;
  local_118.Value = &this->SliderBackgroundBrush;
  SImage::SetImage((this->SliderBackgroundImage).Object,&local_118);
  return;
}

// SetSliderBarColor @ 14d96ce70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SAudioSliderBase::SetSliderBarColor(SAudioSliderBase *this,FSlateColor *param_1)

{
  double dVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  FSlateColor *pFVar5;
  FSlateBrush *pFVar6;
  float local_res8;
  float local_resc;
  FLinearColor_u_0 local_168;
  undefined4 local_158;
  undefined1 local_154;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_150;
  ForAnyElementType FStack_148;
  ulonglong local_140;
  FLinearColor_u_0 local_138;
  FLinearColor_u_0 local_128;
  TAttribute<FSlateBrush_const_*> local_118;
  FDestructionSentinel local_f0;
  undefined **local_d8 [20];
  TReferenceControllerBase<1> *local_38;
  
  local_168._0_8_ = *(undefined8 *)&(param_1->SpecifiedColor).field0_0x0;
  local_168._8_8_ = *(undefined8 *)((longlong)&(param_1->SpecifiedColor).field0_0x0 + 8);
  local_158._0_1_ = param_1->ColorUseRule;
  local_158._1_1_ = param_1->ColorTableId;
  local_158._2_2_ = *(undefined2 *)&param_1->field_0x12;
  local_140 = 0;
  local_154 = 1;
  local_150.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_148.Data = (FScriptContainerElement *)0x0;
  SWidget::SetAttribute<FSlateColor,FSlateColor>
            ((SWidget *)this,&this->SliderBarColor,(TAttribute<FSlateColor> *)&local_168._s_0,Paint)
  ;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_150,(FWriteAccessScope *)&local_f0);
  if (((int)local_140 != 0) && (FStack_148.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_148.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_148,0,0,0x10);
    local_140 = local_140 & 0xffffffff00000000;
  }
  if (local_f0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_f0.Accessor,&local_f0);
  }
  if (FStack_148.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_148.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_150.AccessDetector);
  dVar1 = (this->SliderBackgroundSize).field0_0x0._s_0.X;
  local_resc = (float)(this->SliderBackgroundSize).field0_0x0._s_0.Y;
  local_res8 = (float)dVar1;
  pFVar5 = TAttribute<FSlateColor>::Get(&this->SliderBackgroundColor);
  if (pFVar5->ColorUseRule == UseColor_ColorTable) {
    pFVar5 = (FSlateColor *)FSlateColor::GetColorFromTable(pFVar5);
  }
  local_138._0_8_ = *(undefined8 *)&(pFVar5->SpecifiedColor).field0_0x0;
  local_138._8_8_ = *(undefined8 *)((longlong)&(pFVar5->SpecifiedColor).field0_0x0 + 8);
  dVar3 = (this->SliderBackgroundSize).field0_0x0._s_0.X * __real_3fe0000000000000;
  pFVar5 = TAttribute<FSlateColor>::Get(&this->SliderBarColor);
  if (pFVar5->ColorUseRule == UseColor_ColorTable) {
    pFVar5 = (FSlateColor *)FSlateColor::GetColorFromTable(pFVar5);
  }
  local_128._0_8_ = *(undefined8 *)&(pFVar5->SpecifiedColor).field0_0x0;
  local_128._8_8_ = *(undefined8 *)((longlong)&(pFVar5->SpecifiedColor).field0_0x0 + 8);
  pFVar6 = (FSlateBrush *)
           FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FLinearColor,FLinearColor,double>
                     ((FSlateRoundedBoxBrush *)local_d8,(FLinearColor *)&local_128._s_0,dVar3,
                      (FLinearColor *)&local_138._s_0,(float)(dVar1 * __real_3fd5555555555555),
                      (FDeprecateVector2DParameter *)&local_res8);
  FSlateBrush::operator=(&this->SliderBackgroundBrush,pFVar6);
  local_d8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_38);
  if ((this->SliderBackgroundImage).Object == (SImage *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_118.Getter._16_8_ = 0;
  local_118.bIsSet = true;
  local_118.Getter._0_8_ = 0;
  local_118.Getter._8_8_ = 0;
  local_118.Value = &this->SliderBackgroundBrush;
  SImage::SetImage((this->SliderBackgroundImage).Object,&local_118);
  return;
}

// SetSliderThumbColor @ 14d96d350

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SAudioSliderBase::SetSliderThumbColor(SAudioSliderBase *this,FSlateColor *param_1)

{
  SSlider *this_00;
  code *pcVar1;
  bool bVar2;
  FSlateColor *pFVar3;
  FDestructionSentinel local_88;
  FLinearColor_u_0 local_70;
  undefined4 local_60;
  undefined1 local_5c;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  ForAnyElementType FStack_50;
  ulonglong local_48;
  FLinearColor_u_0 local_40;
  undefined4 local_30;
  undefined1 local_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_60._0_1_ = param_1->ColorUseRule;
  local_60._1_1_ = param_1->ColorTableId;
  local_60._2_2_ = *(undefined2 *)&param_1->field_0x12;
  local_70._0_8_ = *(undefined8 *)&(param_1->SpecifiedColor).field0_0x0;
  local_70._8_8_ = *(undefined8 *)((longlong)&(param_1->SpecifiedColor).field0_0x0 + 8);
  local_5c = 1;
  local_48 = 0;
  local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_50.Data = (FScriptContainerElement *)0x0;
  SWidget::SetAttribute<FSlateColor,FSlateColor>
            ((SWidget *)this,&this->SliderThumbColor,(TAttribute<FSlateColor> *)&local_70._s_0,Paint
            );
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_88);
  if (((int)local_48 != 0) && (FStack_50.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_50.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_50,0,0,0x10);
    local_48 = local_48 & 0xffffffff00000000;
  }
  if (local_88.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
  }
  if (FStack_50.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_50.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  if ((this->Slider).Object == (SSlider *)0x0) {
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
  this_00 = (this->Slider).Object;
  pFVar3 = TAttribute<FSlateColor>::Get(&this->SliderThumbColor);
  local_40._0_8_ = *(undefined8 *)&(pFVar3->SpecifiedColor).field0_0x0;
  local_40._8_8_ = *(undefined8 *)((longlong)&(pFVar3->SpecifiedColor).field0_0x0 + 8);
  local_30._0_1_ = pFVar3->ColorUseRule;
  local_30._1_1_ = pFVar3->ColorTableId;
  local_30._2_2_ = *(undefined2 *)&pFVar3->field_0x12;
  local_18 = 0;
  local_2c = 1;
  local_28 = 0;
  uStack_20 = 0;
  SSlider::SetSliderHandleColor(this_00,(TAttribute<FSlateColor> *)&local_40._s_0);
  return;
}

// SetSliderValue @ 14d96d980

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SAudioSliderBase::SetSliderValue(SAudioSliderBase *this,TAttribute<float> *param_1)

{
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  TAttribute<float> *this_01;
  SSlider *this_02;
  SAudioTextBox *this_03;
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  float *pfVar4;
  float fVar5;
  TAttribute<float> local_38;
  
  this_01 = &this->SliderValueAttribute;
  this_01->Value = param_1->Value;
  this_00 = &param_1->Getter;
  (this->SliderValueAttribute).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->SliderValueAttribute).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  this_02 = (this->Slider).Object;
  if (this_02 != (SSlider *)0x0) {
    local_38.Value = this_01->Value;
    local_38.bIsSet = (this->SliderValueAttribute).bIsSet;
    local_38.Getter._0_8_ = 0;
    local_38.Getter._8_8_ = 0;
    local_38.Getter._16_4_ = 0;
    TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              (&local_38.Getter,&(this->SliderValueAttribute).Getter);
    SSlider::SetValue(this_02,&local_38);
  }
  pfVar4 = TAttribute<float>::Get(this_01);
  fVar5 = *pfVar4;
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
  this_03 = (this->Label).Object;
  fVar5 = (float)(**(code **)(this->_padding_ + 0x298))(this,fVar5);
  SAudioTextBox::SetValueText(this_03,fVar5);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return;
}

// SetSliderValue @ 14d96dab0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SAudioSliderBase::SetSliderValue(SAudioSliderBase *this,float param_1)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  TAttribute<float> local_48 [2];
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->SliderValueAttribute).Getter);
  (this->SliderValueAttribute).Value = param_1;
  (this->SliderValueAttribute).bIsSet = true;
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
  if ((this->Slider).Object == (SSlider *)0x0) {
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
  local_48[0].Getter._16_8_ = 0;
  local_48[0].bIsSet = true;
  local_48[0].Getter._0_8_ = 0;
  local_48[0].Getter._8_8_ = 0;
  local_48[0].Value = param_1;
  SSlider::SetValue((this->Slider).Object,local_48);
  return;
}

// SetUnitsText @ 14d96e580

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SAudioSliderBase::SetUnitsText(SAudioSliderBase *this,FText *param_1)

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

// SetUnitsTextReadOnly @ 14d96ea00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SAudioSliderBase::SetUnitsTextReadOnly(SAudioSliderBase *this,bool param_1)

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

// SetValueTextReadOnly @ 14d96f360

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SAudioSliderBase::SetValueTextReadOnly(SAudioSliderBase *this,bool param_1)

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

// SetWidgetBackgroundColor @ 14d96f5f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SAudioSliderBase::SetWidgetBackgroundColor(SAudioSliderBase *this,FSlateColor *param_1)

{
  SImage *this_00;
  code *pcVar1;
  bool bVar2;
  FDestructionSentinel local_88;
  FLinearColor_u_0 local_70;
  undefined4 local_60;
  undefined1 local_5c;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  ForAnyElementType FStack_50;
  ulonglong local_48;
  FLinearColor_u_0 local_40;
  undefined4 local_30;
  undefined1 local_2c;
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> local_28;
  
  local_60._0_1_ = param_1->ColorUseRule;
  local_60._1_1_ = param_1->ColorTableId;
  local_60._2_2_ = *(undefined2 *)&param_1->field_0x12;
  local_70._0_8_ = *(undefined8 *)&(param_1->SpecifiedColor).field0_0x0;
  local_70._8_8_ = *(undefined8 *)((longlong)&(param_1->SpecifiedColor).field0_0x0 + 8);
  local_5c = 1;
  local_48 = 0;
  local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_50.Data = (FScriptContainerElement *)0x0;
  SWidget::SetAttribute<FSlateColor,FSlateColor>
            ((SWidget *)this,&this->WidgetBackgroundColor,(TAttribute<FSlateColor> *)&local_70._s_0,
             Paint);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_88);
  if (((int)local_48 != 0) && (FStack_50.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_50.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_50,0,0,0x10);
    local_48 = local_48 & 0xffffffff00000000;
  }
  if (local_88.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
  }
  if (FStack_50.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_50.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  if ((this->WidgetBackgroundImage).Object == (SImage *)0x0) {
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
  local_40._0_8_ = *(undefined8 *)&(this->WidgetBackgroundColor).Value.SpecifiedColor.field0_0x0;
  local_40._8_8_ =
       *(undefined8 *)((longlong)&(this->WidgetBackgroundColor).Value.SpecifiedColor.field0_0x0 + 8)
  ;
  local_30._0_1_ = (this->WidgetBackgroundColor).Value.ColorUseRule;
  local_30._1_1_ = (this->WidgetBackgroundColor).Value.ColorTableId;
  local_30._2_2_ = *(undefined2 *)&(this->WidgetBackgroundColor).Value.field_0x12;
  this_00 = (this->WidgetBackgroundImage).Object;
  local_2c = (this->WidgetBackgroundColor).bIsSet;
  local_28._0_8_ = 0;
  local_28._8_8_ = 0;
  local_28._16_4_ = 0;
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&local_28,&(this->WidgetBackgroundColor).Getter);
  SImage::SetColorAndOpacity(this_00,(TAttribute<FSlateColor> *)&local_40._s_0);
  return;
}

