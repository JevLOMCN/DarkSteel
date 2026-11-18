// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// FArguments @ 14b42a790

FArguments * __thiscall SDS_LinkText::FArguments::FArguments(FArguments *this)

{
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  FText::FText(&(this->_LinkTextData).LinkText);
  (this->_LinkTextData).LinkData.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->_LinkTextData).LinkData.Data.ArrayNum = 0;
  (this->_LinkTextData).LinkData.Data.ArrayMax = 0;
  FTextBlockStyle::FTextBlockStyle(&(this->_LinkTextData).Style);
  *(undefined8 *)&(this->_LinkTextData).OnClick = 0;
  *(undefined8 *)&(this->_LinkTextData).OnClick.field_0x8 = 0;
  *(undefined4 *)&(this->_LinkTextData).OnClick.field_0x10 = 0;
  (this->_LinkTextData).Underline = false;
  return this;
}

// FArguments @ 14bc82e80

FArguments * __thiscall SDS_ColorSlider::FArguments::FArguments(FArguments *this)

{
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  (this->_Value).bIsSet = true;
  (this->_Value).Value = 0.0;
  *(undefined8 *)&(this->_Value).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_Value).Getter = 0;
  *(undefined8 *)&(this->_Value).Getter.field_0x8 = 0;
  (this->_MinSpinBoxValue).Value = 0.0;
  (this->_MinSpinBoxValue).bIsSet = true;
  *(undefined8 *)&(this->_MinSpinBoxValue).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_MinSpinBoxValue).Getter = 0;
  *(undefined8 *)&(this->_MinSpinBoxValue).Getter.field_0x8 = 0;
  (this->_MaxSpinBoxValue).Value = 1.0;
  (this->_MaxSpinBoxValue).bIsSet = true;
  *(undefined8 *)&(this->_MaxSpinBoxValue).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_MaxSpinBoxValue).Getter = 0;
  *(undefined8 *)&(this->_MaxSpinBoxValue).Getter.field_0x8 = 0;
  (this->_MinSliderValue).Value = 0.0;
  (this->_MinSliderValue).bIsSet = true;
  *(undefined8 *)&(this->_MinSliderValue).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_MinSliderValue).Getter = 0;
  *(undefined8 *)&(this->_MinSliderValue).Getter.field_0x8 = 0;
  (this->_MaxSliderValue).Value = 1.0;
  (this->_MaxSliderValue).bIsSet = true;
  *(undefined8 *)&(this->_MaxSliderValue).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_MaxSliderValue).Getter = 0;
  *(undefined8 *)&(this->_MaxSliderValue).Getter.field_0x8 = 0;
  (this->_Delta).Value = 0.01;
  (this->_Delta).bIsSet = true;
  *(undefined8 *)&(this->_Delta).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_Delta).Getter = 0;
  *(undefined8 *)&(this->_Delta).Getter.field_0x8 = 0;
  (this->_SelectorThickness).Value = 6.0;
  (this->_SelectorThickness).bIsSet = true;
  *(undefined8 *)&(this->_SelectorThickness).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_SelectorThickness).Getter = 0;
  *(undefined8 *)&(this->_SelectorThickness).Getter.field_0x8 = 0;
  (this->_SupportDynamicSliderMaxValue).Value = true;
  (this->_SupportDynamicSliderMaxValue).bIsSet = true;
  *(undefined8 *)&(this->_SupportDynamicSliderMaxValue).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_SupportDynamicSliderMaxValue).Getter = 0;
  *(undefined8 *)&(this->_SupportDynamicSliderMaxValue).Getter.field_0x8 = 0;
  (this->_Orientation).Value = Orient_Horizontal;
  (this->_Orientation).bIsSet = true;
  *(undefined8 *)&(this->_Orientation).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_Orientation).Getter = 0;
  *(undefined8 *)&(this->_Orientation).Getter.field_0x8 = 0;
  (this->_GradientColors).Value.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->_GradientColors).Value.ArrayNum = 0;
  (this->_GradientColors).Value.ArrayMax = 0;
  (this->_GradientColors).bIsSet = false;
  *(undefined8 *)&(this->_GradientColors).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_GradientColors).Getter = 0;
  *(undefined8 *)&(this->_GradientColors).Getter.field_0x8 = 0;
  (this->_HasAlphaBackground).Value = false;
  (this->_HasAlphaBackground).bIsSet = true;
  *(undefined8 *)&(this->_HasAlphaBackground).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_HasAlphaBackground).Getter = 0;
  *(undefined8 *)&(this->_HasAlphaBackground).Getter.field_0x8 = 0;
  (this->_UseSRGB).Value = true;
  (this->_UseSRGB).bIsSet = true;
  *(undefined8 *)&(this->_UseSRGB).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_UseSRGB).Getter = 0;
  *(undefined8 *)&(this->_UseSRGB).Getter.field_0x8 = 0;
  *(undefined8 *)&(this->_OnValueChanged).field_0x10 = 0;
  *(undefined8 *)&this->_OnValueChanged = 0;
  *(undefined8 *)&(this->_OnValueChanged).field_0x8 = 0;
  *(undefined8 *)&(this->_OnBeginSliderMovement).field_0x10 = 0;
  *(undefined8 *)&this->_OnBeginSliderMovement = 0;
  *(undefined8 *)&(this->_OnBeginSliderMovement).field_0x8 = 0;
  *(undefined8 *)&(this->_OnEndSliderMovement).field_0x10 = 0;
  *(undefined8 *)&this->_OnEndSliderMovement = 0;
  *(undefined8 *)&(this->_OnEndSliderMovement).field_0x8 = 0;
  *(undefined8 *)&(this->_OnBeginSpinBoxMovement).field_0x10 = 0;
  *(undefined8 *)&this->_OnBeginSpinBoxMovement = 0;
  *(undefined8 *)&(this->_OnBeginSpinBoxMovement).field_0x8 = 0;
  *(undefined8 *)&(this->_OnEndSpinBoxMovement).field_0x10 = 0;
  *(undefined8 *)&this->_OnEndSpinBoxMovement = 0;
  *(undefined8 *)&(this->_OnEndSpinBoxMovement).field_0x8 = 0;
  return this;
}

// FArguments @ 14bc830b0

FArguments * __thiscall SDS_DynamicEntryHorizontal::FArguments::FArguments(FArguments *this)

{
  undefined8 local_res8 [4];
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  (this->_WidgetObject).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->_WidgetObject).WeakPtr,(FObjectPtr)local_res8);
  return this;
}

// FArguments @ 14bc830f0

FArguments * __thiscall SDS_DynamicEntryRadial::FArguments::FArguments(FArguments *this)

{
  undefined8 local_res8;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  (this->_WidgetObject).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->_WidgetObject).WeakPtr,(FObjectPtr)&local_res8);
  (this->_Slots).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->_Slots).ArrayNum = 0;
  (this->_Slots).ArrayMax = 0;
  (this->_PreferredWidth).Value = 100.0;
  (this->_PreferredWidth).bIsSet = true;
  *(undefined8 *)&(this->_PreferredWidth).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_PreferredWidth).Getter = 0;
  *(undefined8 *)&(this->_PreferredWidth).Getter.field_0x8 = 0;
  this->_UseAllottedWidth = false;
  this->_StartingAngle = 0.0;
  this->_bDistributeItemsEvenly = true;
  this->_AngleBetweenItems = 0.0;
  this->_SectorCentralAngle = 360.0;
  return this;
}

// FArguments @ 14bc83190

FArguments * __thiscall SDS_DynamicEntryVertical::FArguments::FArguments(FArguments *this)

{
  undefined8 local_res8 [4];
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  (this->_WidgetObject).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->_WidgetObject).WeakPtr,(FObjectPtr)local_res8);
  return this;
}

// ~FArguments @ 14bc848b0

void __thiscall SDS_ColorSlider::FArguments::~FArguments(FArguments *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnEndSpinBoxMovement);
  pvVar1 = *(void **)&(this->_OnEndSpinBoxMovement).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnEndSpinBoxMovement);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnBeginSpinBoxMovement);
  pvVar1 = *(void **)&(this->_OnBeginSpinBoxMovement).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnBeginSpinBoxMovement);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnEndSliderMovement);
  pvVar1 = *(void **)&(this->_OnEndSliderMovement).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnEndSliderMovement);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnBeginSliderMovement);
  pvVar1 = *(void **)&(this->_OnBeginSliderMovement).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnBeginSliderMovement);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnValueChanged);
  pvVar1 = *(void **)&(this->_OnValueChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnValueChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_UseSRGB).Getter);
  pvVar1 = *(void **)&(this->_UseSRGB).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_UseSRGB).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_HasAlphaBackground).Getter);
  pvVar1 = *(void **)&(this->_HasAlphaBackground).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_HasAlphaBackground).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_GradientColors).Getter);
  pvVar1 = *(void **)&(this->_GradientColors).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_GradientColors).Getter);
  pFVar2 = (this->_GradientColors).Value.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Orientation).Getter);
  pvVar1 = *(void **)&(this->_Orientation).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_Orientation).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->_SupportDynamicSliderMaxValue).Getter);
  pvVar1 = *(void **)&(this->_SupportDynamicSliderMaxValue).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_SupportDynamicSliderMaxValue).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_SelectorThickness).Getter);
  pvVar1 = *(void **)&(this->_SelectorThickness).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_SelectorThickness).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Delta).Getter);
  pvVar1 = *(void **)&(this->_Delta).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_Delta).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_MaxSliderValue).Getter);
  pvVar1 = *(void **)&(this->_MaxSliderValue).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_MaxSliderValue).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_MinSliderValue).Getter);
  pvVar1 = *(void **)&(this->_MinSliderValue).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_MinSliderValue).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_MaxSpinBoxValue).Getter);
  pvVar1 = *(void **)&(this->_MaxSpinBoxValue).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_MaxSpinBoxValue).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_MinSpinBoxValue).Getter);
  pvVar1 = *(void **)&(this->_MinSpinBoxValue).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_MinSpinBoxValue).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Value).Getter);
  pvVar1 = *(void **)&(this->_Value).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_Value).Getter);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return;
}

// FArguments @ 14bd43870

FArguments * __thiscall SDS_EmoteImage::FArguments::FArguments(FArguments *this)

{
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return this;
}

