// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 4

// Emplace<FComboButtonStyle_const_&> @ 1425370f0

FComboButtonStyle * __thiscall
TOptional<FComboButtonStyle>::Emplace<FComboButtonStyle_const_&>
          (TOptional<FComboButtonStyle> *this,FComboButtonStyle *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FComboButtonStyle *pFVar2;
  
  if (this->bIsSet != false) {
    *(undefined ***)&this->TypedValue = &___7FComboButtonStyle__6B_;
    (this->TypedValue).MenuBorderBrush._padding_ = (longlong)&___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((this->TypedValue).MenuBorderBrush.ResourceHandle.Data.SharedReferenceCount.
               ReferenceController);
    pTVar1 = (this->TypedValue).DownArrowImage.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController;
    (this->TypedValue).DownArrowImage._padding_ = (longlong)&___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    FButtonStyle::~FButtonStyle(&(this->TypedValue).ButtonStyle);
    FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)this);
  }
  pFVar2 = FComboButtonStyle::FComboButtonStyle(&this->TypedValue,param_1);
  this->bIsSet = true;
  return pFVar2;
}

// ~TOptional<FComboButtonStyle> @ 14254a1f0

void __thiscall
TOptional<FComboButtonStyle>::~TOptional<FComboButtonStyle>(TOptional<FComboButtonStyle> *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if (this->bIsSet != false) {
    *(undefined ***)&this->TypedValue = &___7FComboButtonStyle__6B_;
    (this->TypedValue).MenuBorderBrush._padding_ = (longlong)&___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((this->TypedValue).MenuBorderBrush.ResourceHandle.Data.SharedReferenceCount.
               ReferenceController);
    pTVar1 = (this->TypedValue).DownArrowImage.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController;
    (this->TypedValue).DownArrowImage._padding_ = (longlong)&___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    FButtonStyle::~FButtonStyle(&(this->TypedValue).ButtonStyle);
    FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)this);
  }
  return;
}

// ~TOptional<FSizeParam> @ 1425c02d0

void __thiscall TOptional<FSizeParam>::~TOptional<FSizeParam>(TOptional<FSizeParam> *this)

{
  void *pvVar1;
  
  if (this->bIsSet != false) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->TypedValue).ShrinkValue.Getter);
    pvVar1 = *(void **)&(this->TypedValue).ShrinkValue.Getter.field_0x8;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)&(this->TypedValue).ShrinkValue.Getter);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->TypedValue).Value.Getter);
    pvVar1 = *(void **)&(this->TypedValue).Value.Getter.field_0x8;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)&(this->TypedValue).Value.Getter);
    return;
  }
  return;
}

// operator= @ 1425c2b40

TOptional<FSizeParam> * __thiscall
TOptional<FSizeParam>::operator=(TOptional<FSizeParam> *this,FSizeParam *param_1)

{
  void *pvVar1;
  
  if ((TOptional<FSizeParam> *)param_1 != this) {
    if (this->bIsSet != false) {
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->TypedValue).ShrinkValue.Getter
                );
      pvVar1 = *(void **)&(this->TypedValue).ShrinkValue.Getter.field_0x8;
      if (pvVar1 != (void *)0x0) {
        FMemory::Free(pvVar1);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)&(this->TypedValue).ShrinkValue.Getter);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->TypedValue).Value.Getter);
      pvVar1 = *(void **)&(this->TypedValue).Value.Getter.field_0x8;
      if (pvVar1 != (void *)0x0) {
        FMemory::Free(pvVar1);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)&(this->TypedValue).Value.Getter);
    }
    (this->TypedValue).SizeRule = param_1->SizeRule;
    (this->TypedValue).Value.Value = (param_1->Value).Value;
    (this->TypedValue).Value.bIsSet = (param_1->Value).bIsSet;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->TypedValue).Value.Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_1->Value).Getter);
    (this->TypedValue).ShrinkValue.Value = (param_1->ShrinkValue).Value;
    (this->TypedValue).ShrinkValue.bIsSet = (param_1->ShrinkValue).bIsSet;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->TypedValue).ShrinkValue.Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_1->ShrinkValue).Getter);
    this->bIsSet = true;
  }
  return this;
}

