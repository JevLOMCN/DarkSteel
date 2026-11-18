// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AdvancedWidgets
// Functions: 18

// ~SColorGradingPicker @ 14d83b260

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
UE::ColorGrading::SColorGradingPicker::~SColorGradingPicker(SColorGradingPicker *this)

{
  void *pvVar1;
  
  *(undefined ***)this = &___7SColorGradingPicker_ColorGrading_UE__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ExternalEndMouseCaptureDelegate);
  pvVar1 = *(void **)&(this->ExternalEndMouseCaptureDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ExternalEndMouseCaptureDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ExternalBeginMouseCaptureDelegate);
  pvVar1 = *(void **)&(this->ExternalBeginMouseCaptureDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ExternalBeginMouseCaptureDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ExternalEndSliderMovementDelegate);
  pvVar1 = *(void **)&(this->ExternalEndSliderMovementDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ExternalEndSliderMovementDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ExternalBeginSliderMovementDelegate
            );
  pvVar1 = *(void **)&(this->ExternalBeginSliderMovementDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ExternalBeginSliderMovementDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnNumericEntryBoxDynamicSliderMinValueChanged).field_0x8,
             *(int *)&(this->OnNumericEntryBoxDynamicSliderMinValueChanged).field_0x10);
  pvVar1 = *(void **)&(this->OnNumericEntryBoxDynamicSliderMinValueChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnNumericEntryBoxDynamicSliderMinValueChanged);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnNumericEntryBoxDynamicSliderMaxValueChanged).field_0x8,
             *(int *)&(this->OnNumericEntryBoxDynamicSliderMaxValueChanged).field_0x10);
  pvVar1 = *(void **)&(this->OnNumericEntryBoxDynamicSliderMaxValueChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnNumericEntryBoxDynamicSliderMaxValueChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnQueryCurrentColor);
  pvVar1 = *(void **)&(this->OnQueryCurrentColor).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnQueryCurrentColor);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnColorCommitted);
  pvVar1 = *(void **)&(this->OnColorCommitted).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnColorCommitted);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->NumericEntryBoxWidget).SharedReferenceCount.ReferenceController);
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  return;
}

// AdjustRatioValue @ 14d842310

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
UE::ColorGrading::SColorGradingPicker::AdjustRatioValue
          (SColorGradingPicker *this,TVector4<double> *param_1)

{
  double dVar1;
  double dVar2;
  
  if (this->bIsMouseDragging != false) {
    dVar2 = (param_1->field0_0x0)._s_0.X;
    dVar1 = (param_1->field0_0x0)._s_0.Y;
    if (dVar2 <= dVar1) {
      dVar2 = dVar1;
    }
    dVar1 = (param_1->field0_0x0)._s_0.Z;
    if (dVar2 <= dVar1) {
      dVar2 = dVar1;
    }
    if (__real_322bcc77 < (float)dVar2) {
      dVar2 = (double)(float)dVar2;
      (param_1->field0_0x0)._s_0.X = dVar2 * (this->StartDragRatio).field0_0x0._s_0.X;
      (param_1->field0_0x0)._s_0.Y = dVar2 * (this->StartDragRatio).field0_0x0._s_0.Y;
      (param_1->field0_0x0)._s_0.Z = dVar2 * (this->StartDragRatio).field0_0x0._s_0.Z;
    }
  }
  return;
}

// Construct @ 14d849090

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
UE::ColorGrading::SColorGradingPicker::Construct(SColorGradingPicker *this,FArguments *param_1)

{
  undefined1 *puVar1;
  byte *pbVar2;
  longlong *plVar3;
  SWidget *pSVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  TUniquePtr<FSlateStyleSet,TDefaultDelete<FSlateStyleSet>_> this_00;
  uint uVar8;
  SColorGradingWheel *pSVar9;
  FSharedReferencer<1> FVar10;
  bool bVar11;
  char cVar12;
  byte bVar13;
  float *pfVar14;
  FSlotArguments *pFVar15;
  FArguments *pFVar16;
  FArguments *pFVar17;
  undefined8 *puVar18;
  TSharedRef<SWidget,1> *pTVar19;
  ulong64 uVar20;
  TSharedRef<SBox,1> *pTVar21;
  undefined4 *puVar22;
  FArguments *pFVar23;
  FName *pFVar24;
  FEditableTextBoxStyle *pFVar25;
  FSlateFontInfo *pFVar26;
  TSharedRef<SWidget_const_,1> *pTVar27;
  bool *pbVar28;
  FText *pFVar29;
  TSlateDecl<SNumericEntryBox<float>,RequiredArgs::T0RequiredArgs> *pTVar30;
  TSharedRef<SNumericEntryBox<float>,1> *pTVar31;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> *this_01;
  FArguments *pFVar32;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> *this_02;
  TSharedRef<SVerticalBox,1> *pTVar33;
  FSlotArguments *pFVar34;
  FSlotArguments *pFVar35;
  TReferenceControllerBase<1> *pTVar36;
  float fVar37;
  undefined4 local_res8;
  undefined4 uStackX_c;
  T0RequiredArgs local_res10 [8];
  T0RequiredArgs local_res18 [8];
  T0RequiredArgs local_res20 [8];
  uint uStack_1bbc;
  T0RequiredArgs local_1ba8 [16];
  TReferenceControllerBase<1> *local_1b98;
  undefined4 uStack_1b90;
  uint uStack_1b8c;
  FArguments *local_1b88;
  longlong lStack_1b80;
  FName local_1b78;
  FLLMScope local_1b70;
  FLLMScope local_1b6c;
  undefined1 local_1b68 [8];
  ForAnyElementType local_1b60;
  int local_1b58;
  TSharedRef<SBox,1> local_1b50;
  FMemScope local_1b40;
  FArguments *local_1b38;
  SBox *local_1b30;
  FMemScope local_1b28;
  undefined1 local_1b20 [8];
  FDelegateAllocation local_1b18;
  TSlateDecl<UE::ColorGrading::SColorGradingWheel,RequiredArgs::T0RequiredArgs> local_1b08;
  undefined4 local_1af0;
  undefined1 local_1aec;
  undefined1 local_1ae8 [8];
  void *pvStack_1ae0;
  undefined8 local_1ad8;
  undefined4 local_1ad0;
  undefined1 local_1acc;
  undefined1 local_1ac8 [8];
  void *pvStack_1ac0;
  undefined8 local_1ab8;
  undefined4 local_1ab0;
  undefined1 local_1aac;
  undefined1 local_1aa8 [8];
  void *pvStack_1aa0;
  undefined8 local_1a98;
  undefined4 local_1a90;
  undefined1 local_1a8c;
  undefined1 local_1a88 [8];
  void *pvStack_1a80;
  undefined8 local_1a78;
  float local_1a70;
  undefined1 local_1a6c;
  undefined1 local_1a68 [8];
  void *pvStack_1a60;
  undefined8 local_1a58;
  int local_1a50;
  bool local_1a4c;
  undefined1 local_1a48 [8];
  void *pvStack_1a40;
  undefined4 local_1a38;
  undefined4 local_1a30 [2];
  undefined4 local_1a28 [2];
  FMemScope local_1a20;
  FName local_1a18;
  undefined8 local_1a10;
  undefined8 uStack_1a08;
  bool local_1a00;
  undefined1 local_19f8 [8];
  void *pvStack_19f0;
  int local_19e8;
  TAttribute<float> local_19e0;
  TAttribute<float> local_19c0;
  TAttribute<float> local_19a0;
  TAttribute<float> local_1980;
  TAttribute<TOptional<float>_> local_1960;
  TAttribute<TOptional<float>_> local_1938;
  TAttribute<TOptional<float>_> local_1910;
  TAttribute<TOptional<float>_> local_18e8;
  TAttribute<bool> local_18c0;
  TAttribute<bool> local_18a0;
  TSharedRef<SWidget,1> local_1880;
  TSharedRef<SWidget,1> local_1870;
  TSharedRef<SWidget,1> local_1860;
  FDestructionSentinel local_1850;
  FDestructionSentinel local_1838;
  FDestructionSentinel local_1820;
  undefined1 *local_1808;
  FDestructionSentinel local_1800;
  FDelegateAllocation *local_17e8;
  FDestructionSentinel local_17e0;
  undefined1 *local_17c8;
  FDestructionSentinel local_17c0;
  undefined1 *local_17a8;
  FDestructionSentinel local_17a0;
  undefined1 *local_1788;
  FDestructionSentinel local_1780;
  undefined1 *local_1768;
  FDestructionSentinel local_1760;
  undefined1 *local_1748;
  FText local_1740;
  TSharedRef<SNumericEntryBox<float>,1> local_1730;
  TSharedRef<SBox,1> local_1720;
  TSharedRef<SWidget,1> local_1710;
  TSharedRef<SVerticalBox,1> local_1700;
  TSharedRef<SWidget_const_,1> local_16f0;
  TSharedRef<SWidget,1> local_16e0;
  code *local_16c8;
  longlong lStack_16c0;
  code *local_16b8;
  longlong lStack_16b0;
  TSharedRef<SWidget,1> local_16a8;
  TSharedRef<SWidget,1> local_1698;
  TSharedRef<SWidget_const_,1> local_1688;
  SWidget *local_1678;
  TReferenceControllerBase<1> *pTStack_1670;
  FName local_1668 [2];
  code *local_1658;
  longlong lStack_1650;
  TSharedRef<SWidget,1> local_1648;
  TSharedRef<SWidget,1> local_1638;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_1628;
  FName local_1610;
  TWriteLockedDelegateAllocation<FNotThreadSafeDelegateMode> local_1608;
  TSlateDecl<SNumericEntryBox<float>,RequiredArgs::T0RequiredArgs> local_15e8;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_15d0;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_15b8;
  FReadAccessScope local_15a0;
  TAttribute<FSlateFontInfo> local_1588;
  undefined8 *local_1508 [2];
  TReferenceControllerBase<1> *local_14f8;
  undefined1 local_14d8 [40];
  FSlotArgumentsMixin local_14b0;
  undefined1 local_1420 [528];
  undefined1 local_1210 [32];
  undefined1 local_11f0 [32];
  undefined1 local_11d0 [24];
  undefined1 local_11b8 [24];
  undefined1 local_11a0 [24];
  undefined1 local_1188 [24];
  undefined1 local_1170 [56];
  TReferenceControllerBase<1> *local_1138;
  FArguments local_1110;
  FSlotArguments local_f08;
  FArguments local_e20;
  FArguments local_ae0;
  FArguments local_7a0;
  undefined8 uStack_48;
  
  uStack_48 = 0x14d8490af;
  pFVar35 = (FSlotArguments *)0x0;
  local_res8 = 0;
  fVar37 = __real_ff7fffff;
  if ((param_1->_SliderValueMin).bIsSet != false) {
    pfVar14 = TOptional<float>::GetValue(&param_1->_SliderValueMin);
    fVar37 = *pfVar14;
  }
  this->SliderValueMin = fVar37;
  fVar37 = __real_7f7fffff;
  if ((param_1->_SliderValueMax).bIsSet != false) {
    pfVar14 = TOptional<float>::GetValue(&param_1->_SliderValueMax);
    fVar37 = *pfVar14;
  }
  this->SliderValueMax = fVar37;
  if ((fVar37 < this->SliderValueMin || fVar37 == this->SliderValueMin) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("SliderValueMin < SliderValueMax",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdvancedWidgets\\Private\\Widgets\\ColorGrading\\SColorGradingPicker.cpp"
                          ,0x28,L""), bVar11)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  this->MainDelta = param_1->_MainDelta;
  this->MainShiftMultiplier = param_1->_MainShiftMultiplier;
  this->MainCtrlMultiplier = param_1->_MainCtrlMultiplier;
  this->ColorGradingModes = param_1->_ColorGradingModes;
  if (&param_1->_OnColorCommitted != &this->OnColorCommitted) {
    local_1b68 = (undefined1  [8])0x0;
    local_1b60.Data = (FScriptContainerElement *)0x0;
    local_1b58 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->_OnColorCommitted
               ,&local_15a0);
    if ((*(int *)&(param_1->_OnColorCommitted).field_0x10 != 0) &&
       (plVar3 = *(longlong **)&(param_1->_OnColorCommitted).field_0x8, plVar3 != (longlong *)0x0))
    {
      (**(code **)(*plVar3 + 0x50))(plVar3,local_1b68);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_15a0);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnColorCommitted,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1b68);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1b68,
               (FWriteAccessScope *)&local_1838);
    if ((local_1b58 != 0) && (local_1b60.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_1b60.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_1b60,0,0,0x10);
      local_1b58 = 0;
    }
    if (local_1838.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1838.Accessor,&local_1838);
    }
    if (local_1b60.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b60.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1b68);
  }
  TDelegate<bool___cdecl(UE::Math::TVector4<double>_&),FDefaultDelegateUserPolicy>::operator=
            (&this->OnQueryCurrentColor,&param_1->_OnQueryCurrentColor);
  fVar37 = __real_4019999a;
  if (this->ColorGradingModes == Offset) {
    fVar37 = __real_40400000;
  }
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            (&this->ExternalBeginSliderMovementDelegate,&param_1->_OnBeginSliderMovement);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            (&this->ExternalEndSliderMovementDelegate,&param_1->_OnEndSliderMovement);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            (&this->ExternalBeginMouseCaptureDelegate,&param_1->_OnBeginMouseCapture);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            (&this->ExternalEndMouseCaptureDelegate,&param_1->_OnEndMouseCapture);
  this_00 = AdvancedWidgets::FAdvancedWidgetsStyle::Instance;
  local_1b38 = SVerticalBox::FArguments::FArguments(&local_1110);
  pFVar15 = SVerticalBox::Slot((FSlotArguments *)local_1508);
  local_1980.Value = 1.0;
  local_1980.bIsSet = true;
  local_1980.Getter._16_8_ = 0;
  local_1980.Getter._0_8_ = 0;
  local_1980.Getter._8_8_ = 0;
  pFVar15 = SVerticalBox::FSlot::FSlotArguments::FillHeight(pFVar15,&local_1980);
  puVar1 = &pFVar15->field_0x48;
  if (local_1a30 != (undefined4 *)puVar1) {
    *(undefined4 *)puVar1 = 0;
    pFVar15->field_0x4c = 1;
  }
  pFVar34 = pFVar35;
  if (puVar1 != (undefined1 *)0x0) {
    pFVar34 = pFVar15;
  }
  pFVar16 = SBox::FArguments::FArguments(&local_ae0);
  pFVar16->_HAlign = HAlign_Fill;
  pFVar16->_VAlign = VAlign_Fill;
  local_1a90 = 0x3f800000;
  local_1a8c = 1;
  local_1a78 = 0;
  local_1a88 = (undefined1  [8])0x0;
  pvStack_1a80 = (void *)0x0;
  (pFVar16->_MinAspectRatio).Value.Size = 1.0;
  (pFVar16->_MinAspectRatio).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar16->_MinAspectRatio).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1a88);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1a88);
  if (pvStack_1a80 != (void *)0x0) {
    FMemory::Free(pvStack_1a80);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1a88);
  local_1ab0 = 0x3f800000;
  local_1aac = 1;
  local_1a98 = 0;
  local_1aa8 = (undefined1  [8])0x0;
  pvStack_1aa0 = (void *)0x0;
  (pFVar16->_MaxAspectRatio).Value.Size = 1.0;
  (pFVar16->_MaxAspectRatio).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar16->_MaxAspectRatio).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1aa8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1aa8);
  if (pvStack_1aa0 != (void *)0x0) {
    FMemory::Free(pvStack_1aa0);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1aa8);
  pFVar17 = SColorGradingWheel::FArguments::FArguments((FArguments *)local_1420);
  local_1a50 = (param_1->_DesiredWheelSize).Value;
  local_1a4c = (param_1->_DesiredWheelSize).bIsSet;
  local_1a48 = (undefined1  [8])0x0;
  pvStack_1a40 = (void *)0x0;
  local_1a38 = 0;
  TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy> *)local_1a48,
             &(param_1->_DesiredWheelSize).Getter);
  (pFVar17->_DesiredWheelSize).Value = local_1a50;
  (pFVar17->_DesiredWheelSize).bIsSet = local_1a4c;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar17->_DesiredWheelSize).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1a48);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1a48);
  if (pvStack_1a40 != (void *)0x0) {
    FMemory::Free(pvStack_1a40);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1a48);
  local_1b20 = (undefined1  [8])0x0;
  local_1b18.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_1b18.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1b20,
             (FWriteAccessScope *)&local_1800);
  local_17e8 = &local_1b18;
  puVar18 = Core::Private::DelegateAllocate(0x38,&local_1b18);
  if (puVar18 == (undefined8 *)0x0) {
    pFVar23 = (FArguments *)CONCAT44(uStackX_c,local_res8);
  }
  else {
    uStack_1b8c = local_1b50.SharedReferenceCount.ReferenceController._4_4_;
    local_1b98 = (TReferenceControllerBase<1> *)GetCurrentLinearColor;
    uStack_1b90 = 0;
    pTVar19 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->field_0x8,&local_1638);
    pTVar36 = (pTVar19->SharedReferenceCount).ReferenceController;
    pSVar4 = pTVar19->Object;
    if (pTVar36 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar36->SharedReferenceCount = (atomic<int>)((int)pTVar36->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar36->SharedReferenceCount = (atomic<int>)((int)pTVar36->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar18 = &
               ___7__TCommonDelegateInstanceState___A6A_AUFLinearColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    local_1b88 = (FArguments *)pTVar36;
    uVar20 = FDelegateHandle::GenerateNewID();
    puVar18[2] = uVar20;
    *puVar18 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSColorGradingPicker_ColorGrading_UE___00__A6A_AUFLinearColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar18[3] = pSVar4;
    puVar18[4] = pTVar36;
    if (pTVar36 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar36->WeakReferenceCount = (atomic<int>)((int)pTVar36->WeakReferenceCount + 1);
      UNLOCK();
    }
    pFVar35 = (FSlotArguments *)&DAT_00000007;
    puVar18[5] = local_1b98;
    puVar18[6] = CONCAT44(uStack_1b8c,uStack_1b90);
    pFVar23 = local_1b88;
  }
  if (((ulonglong)pFVar35 & 4) != 0) {
    pFVar35 = (FSlotArguments *)(ulonglong)((uint)pFVar35 & 0xfffffffb);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar23);
  }
  if (((ulonglong)pFVar35 & 2) != 0) {
    pFVar35 = (FSlotArguments *)(ulonglong)((uint)pFVar35 & 0xfffffffd);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar23);
  }
  if (((ulonglong)pFVar35 & 1) != 0) {
    pFVar35 = (FSlotArguments *)(ulonglong)((uint)pFVar35 & 0xfffffffe);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1638.SharedReferenceCount.ReferenceController);
  }
  if (local_1800.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1800.Accessor,&local_1800);
  }
  local_1a00 = true;
  local_1a10 = 0;
  uStack_1a08 = 0;
  local_19f8 = (undefined1  [8])0x0;
  pvStack_19f0 = (void *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1b20,
             (FWriteAccessScope *)&local_1850);
  if (pvStack_19f0 != (void *)0x0) {
    FMemory::Free(pvStack_19f0);
  }
  pvStack_19f0 = (void *)local_1b18.DelegateAllocator;
  local_19e8 = local_1b18.DelegateSize;
  local_1b18.DelegateSize = 0;
  local_1b18.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  if (local_1850.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1850.Accessor,&local_1850);
  }
  *(undefined8 *)&(pFVar17->_SelectedColor).Value.field0_0x0 = local_1a10;
  *(undefined8 *)((longlong)&(pFVar17->_SelectedColor).Value.field0_0x0 + 8) = uStack_1a08;
  (pFVar17->_SelectedColor).bIsSet = local_1a00;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar17->_SelectedColor).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_19f8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_19f8);
  if ((ForElementType<TAlignedBytes<16,16>_>)pvStack_19f0 !=
      (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free(pvStack_19f0);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_19f8);
  local_1a6c = 1;
  local_1a58 = 0;
  local_1a68 = (undefined1  [8])0x0;
  pvStack_1a60 = (void *)0x0;
  (pFVar17->_ExponentDisplacement).Value = fVar37;
  (pFVar17->_ExponentDisplacement).bIsSet = true;
  local_1a70 = fVar37;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar17->_ExponentDisplacement).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1a68);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1a68);
  if (pvStack_1a60 != (void *)0x0) {
    FMemory::Free(pvStack_1a60);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1a68);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar17->_OnValueChanged,
             (FWriteAccessScope *)&local_1760);
  local_1748 = &(pFVar17->_OnValueChanged).field_0x8;
  puVar18 = Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_1748);
  if (puVar18 == (undefined8 *)0x0) {
    pFVar23 = (FArguments *)CONCAT44(uStackX_c,local_res8);
  }
  else {
    uStack_1b8c = local_1b50.SharedReferenceCount.ReferenceController._4_4_;
    local_1b98 = (TReferenceControllerBase<1> *)HandleCurrentColorValueChanged;
    uStack_1b90 = 0;
    pTVar19 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->field_0x8,&local_1648);
    pTVar36 = (pTVar19->SharedReferenceCount).ReferenceController;
    local_1b78 = (FName)pTVar19->Object;
    if (pTVar36 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar36->SharedReferenceCount = (atomic<int>)((int)pTVar36->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar36->SharedReferenceCount = (atomic<int>)((int)pTVar36->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar35 = (FSlotArguments *)(ulonglong)((uint)pFVar35 | 0x38);
    *puVar18 = &
               ___7__TCommonDelegateInstanceState___A6AXAEBUFLinearColor___ZUFDefaultDelegateUserPolicy___N__6B_
    ;
    *(undefined1 *)(puVar18 + 1) = 0;
    local_1b88 = (FArguments *)pTVar36;
    uVar20 = FDelegateHandle::GenerateNewID();
    puVar18[2] = uVar20;
    *puVar18 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSColorGradingPicker_ColorGrading_UE___00__A6AXAEBUFLinearColor___ZUFDefaultDelegateUserPolicy___N__6B_
    ;
    *(FName *)(puVar18 + 3) = local_1b78;
    puVar18[4] = pTVar36;
    if (pTVar36 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar36->WeakReferenceCount = (atomic<int>)((int)pTVar36->WeakReferenceCount + 1);
      UNLOCK();
    }
    puVar18[5] = local_1b98;
    puVar18[6] = CONCAT44(uStack_1b8c,uStack_1b90);
    pFVar23 = local_1b88;
  }
  if (((ulonglong)pFVar35 & 0x20) != 0) {
    pFVar35 = (FSlotArguments *)(ulonglong)((uint)pFVar35 & 0xffffffdf);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar23);
  }
  if (((ulonglong)pFVar35 & 0x10) != 0) {
    pFVar35 = (FSlotArguments *)(ulonglong)((uint)pFVar35 & 0xffffffef);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar23);
  }
  if (((ulonglong)pFVar35 & 8) != 0) {
    pFVar35 = (FSlotArguments *)(ulonglong)((uint)pFVar35 & 0xfffffff7);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1648.SharedReferenceCount.ReferenceController);
  }
  if (local_1760.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1760.Accessor,&local_1760);
  }
  local_1b98 = (TReferenceControllerBase<1> *)HandleColorWheelMouseCaptureBegin;
  uStack_1b90 = 0;
  lStack_1b80 = (ulonglong)uStack_1b8c << 0x20;
  local_1b88 = (FArguments *)HandleColorWheelMouseCaptureBegin;
  TDelegateRegistration<void___cdecl(FLinearColor_const_&),FDefaultDelegateUserPolicy>::
  BindSP<UE::ColorGrading::SColorGradingPicker>
            ((TDelegateRegistration<void___cdecl(FLinearColor_const_&),FDefaultDelegateUserPolicy> *
             )&pFVar17->_OnMouseCaptureBegin,this,(pmf_55526edf *)&local_1b88);
  uStack_1b90 = 0;
  local_1b98 = (TReferenceControllerBase<1> *)HandleColorWheelMouseCaptureEnd;
  lStack_1650 = (ulonglong)uStack_1b8c << 0x20;
  local_1658 = HandleColorWheelMouseCaptureEnd;
  TDelegateRegistration<void___cdecl(FLinearColor_const_&),FDefaultDelegateUserPolicy>::
  BindSP<UE::ColorGrading::SColorGradingPicker>
            ((TDelegateRegistration<void___cdecl(FLinearColor_const_&),FDefaultDelegateUserPolicy> *
             )&pFVar17->_OnMouseCaptureEnd,this,(pmf_55526edf *)&local_1658);
  FLLMScope::FLLMScope(&local_1b70,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1b78 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1a20,&local_1b78,true);
  TSlateDecl<UE::ColorGrading::SColorGradingWheel,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<UE::ColorGrading::SColorGradingWheel,RequiredArgs::T0RequiredArgs>
            (&local_1b08,"SColorGradingWheel",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdvancedWidgets\\Private\\Widgets\\ColorGrading\\SColorGradingPicker.cpp"
             ,0x4b,(T0RequiredArgs *)&local_res8);
  FMemScope::~FMemScope(&local_1a20);
  FLLMScope::~FLLMScope(&local_1b70);
  pSVar9 = local_1b08._Widget.Object;
  if ((local_1b08._Widget.Object == (SColorGradingWheel *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  SWidget::SWidgetConstruct((SWidget *)local_1b08._Widget.Object,(FSlateBaseNamedArgs *)pFVar17);
  SColorGradingWheel::Construct(local_1b08._Widget.Object,pFVar17);
  if ((local_1b08._Widget.Object == (SColorGradingWheel *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (((local_1b08._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar12 = (**(code **)((local_1b08._Widget.Object)->_padding_ + 0x228))
                       (local_1b08._Widget.Object);
    bVar13 = 0;
    if (cVar12 == '\0') goto LAB_14d8499f9;
  }
  bVar13 = 0x20;
LAB_14d8499f9:
  *(byte *)&(local_1b08._Widget.Object)->_padding_ =
       (byte)(local_1b08._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_1b08._Widget.Object)->_padding_ =
       (byte)(local_1b08._Widget.Object)->_padding_ | bVar13;
  if ((local_1b08._Widget.Object == (SColorGradingWheel *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pbVar2 = (byte *)((longlong)&(local_1b08._Widget.Object)->_padding_ + 1);
  *pbVar2 = *pbVar2 | 4;
  if ((local_1b08._Widget.Object == (SColorGradingWheel *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar11)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar10.ReferenceController = local_1b08._Widget.SharedReferenceCount.ReferenceController;
  local_1b98 = local_1b08._Widget.SharedReferenceCount.ReferenceController;
  local_1b08._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_1b08._Widget.Object = (SColorGradingWheel *)0x0;
  if ((pSVar9 == (SColorGradingWheel *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar11)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (FVar10.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar10.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar10.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (FVar10.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar10.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1678 = (pFVar16->_Content).Widget.Object;
  pTStack_1670 = (pFVar16->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar16->_Content).Widget.Object = (SWidget *)pSVar9;
  (pFVar16->_Content).Widget.SharedReferenceCount.ReferenceController = FVar10.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1670);
  FLLMScope::FLLMScope(&local_1b6c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1a18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1b40,&local_1a18,true);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_1628,"SBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdvancedWidgets\\Private\\Widgets\\ColorGrading\\SColorGradingPicker.cpp"
             ,0x45,local_res10);
  FMemScope::~FMemScope(&local_1b40);
  FLLMScope::~FLLMScope(&local_1b6c);
  pTVar21 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1628,&local_1b50,pFVar16);
  local_1b30 = pTVar21->Object;
  local_1b40 = (FMemScope)(pTVar21->SharedReferenceCount).ReferenceController;
  if (local_1b40 != (FMemScope)0x0) {
    LOCK();
    *(atomic<int> *)((longlong)local_1b40 + 8) =
         (atomic<int>)((int)*(atomic<int> *)((longlong)local_1b40 + 8) + 1);
    UNLOCK();
    LOCK();
    *(atomic<int> *)((longlong)local_1b40 + 8) =
         (atomic<int>)((int)*(atomic<int> *)((longlong)local_1b40 + 8) + 1);
    UNLOCK();
  }
  local_1b28 = local_1b40;
  if ((SBox **)&pFVar34->field_0x8 != &local_1b30) {
    *(SBox **)&pFVar34->field_0x8 = local_1b30;
    local_1b30 = (SBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar34->field_0x10,(FSharedReferencer<1> *)&local_1b28);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_1b28);
  local_1b38 = SVerticalBox::FArguments::operator+(local_1b38,pFVar34);
  pFVar15 = SVerticalBox::Slot(&local_f08);
  local_1b78 = (FName)SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar15);
  puVar22 = (undefined4 *)((longlong)local_1b78 + 0x48);
  if (local_1a28 != puVar22) {
    *puVar22 = 2;
    *(undefined1 *)((longlong)local_1b78 + 0x4c) = 1;
  }
  if (puVar22 == (undefined4 *)0x0) {
    local_1b78.ComparisonIndex.Value = 0;
    local_1b78.Number = 0;
  }
  pFVar16 = SBox::FArguments::FArguments(&local_e20);
  pFVar16->_HAlign = HAlign_Fill;
  local_1ad0 = 0x43c80000;
  local_1ac8 = (undefined1  [8])0x0;
  pvStack_1ac0 = (void *)0x0;
  local_1acc = 1;
  local_1ab8 = 0;
  (pFVar16->_MaxDesiredWidth).Value.Size = 400.0;
  (pFVar16->_MaxDesiredWidth).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar16->_MaxDesiredWidth).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1ac8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1ac8);
  if (pvStack_1ac0 != (void *)0x0) {
    FMemory::Free(pvStack_1ac0);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1ac8);
  local_1af0 = 0x43c80000;
  local_1aec = 1;
  local_1ad8 = 0;
  local_1ae8 = (undefined1  [8])0x0;
  pvStack_1ae0 = (void *)0x0;
  (pFVar16->_MinDesiredWidth).Value.Size = 400.0;
  (pFVar16->_MinDesiredWidth).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar16->_MinDesiredWidth).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1ae8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1ae8);
  if (pvStack_1ae0 != (void *)0x0) {
    FMemory::Free(pvStack_1ae0);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1ae8);
  pFVar23 = SNumericEntryBox<float>::FArguments::FArguments(&local_7a0);
  pFVar24 = ::FName::FName(local_1668,"ColorGradingPicker.NumericEntry.TextBox");
  pFVar25 = ISlateStyle::GetWidgetStyle<FEditableTextBoxStyle>
                      ((ISlateStyle *)this_00.Ptr,*pFVar24,(char *)0x0,(FEditableTextBoxStyle *)0x0)
  ;
  pFVar23->_EditableTextBoxStyle = pFVar25;
  pcVar5 = *(code **)((this_00.Ptr)->_padding_ + 0x88);
  pFVar24 = ::FName::FName(&local_1610,"ColorGrading.NormalFont");
  pFVar26 = (FSlateFontInfo *)(*pcVar5)(this_00.Ptr,local_1170,*pFVar24,0);
  FSlateFontInfo::FSlateFontInfo(&local_1588.Value,pFVar26);
  local_1588.bIsSet = true;
  local_1588.Getter._16_8_ = 0;
  local_1588.Getter._0_8_ = 0;
  local_1588.Getter._8_8_ = 0;
  pFVar23 = SNumericEntryBox<float>::FArguments::Font(pFVar23,&local_1588);
  (pFVar23->_Value).bIsSet = true;
  local_1b88 = pFVar23;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(pFVar23->_Value).Getter,
             (FWriteAccessScope *)&local_1820);
  local_1808 = &(pFVar23->_Value).Getter.field_0x8;
  puVar18 = Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_1808);
  uVar8 = local_1b50.SharedReferenceCount.ReferenceController._4_4_;
  if (puVar18 == (undefined8 *)0x0) {
    pTVar36 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
  }
  else {
    pTVar27 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->field_0x8,&local_1688);
    pTVar36 = (pTVar27->SharedReferenceCount).ReferenceController;
    pSVar4 = pTVar27->Object;
    if (pTVar36 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar36->SharedReferenceCount = (atomic<int>)((int)pTVar36->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar36->SharedReferenceCount = (atomic<int>)((int)pTVar36->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar35 = (FSlotArguments *)(ulonglong)((uint)pFVar35 | 0x1c0);
    *puVar18 = &
               ___7__TCommonDelegateInstanceState___A6A_AU__TOptional_M__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar20 = FDelegateHandle::GenerateNewID();
    puVar18[2] = uVar20;
    *puVar18 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSColorGradingPicker_ColorGrading_UE___00__A6A_AU__TOptional_M__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar18[3] = pSVar4;
    puVar18[4] = pTVar36;
    if (pTVar36 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar36->WeakReferenceCount = (atomic<int>)((int)pTVar36->WeakReferenceCount + 1);
      UNLOCK();
    }
    puVar18[5] = OnGetMainValue;
    puVar18[6] = (ulonglong)uVar8 << 0x20;
  }
  if ((uint)pFVar35 >> 8 != 0) {
    pFVar35 = (FSlotArguments *)(ulonglong)((uint)pFVar35 & 0xfffffeff);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar36);
  }
  if ((char)pFVar35 < '\0') {
    pFVar35 = (FSlotArguments *)(ulonglong)((uint)pFVar35 & 0xffffff7f);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar36);
  }
  if (((ulonglong)pFVar35 & 0x40) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1688.SharedReferenceCount.ReferenceController);
  }
  bVar7 = false;
  bVar6 = false;
  bVar11 = false;
  if (local_1820.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1820.Accessor,&local_1820);
  }
  pFVar23 = local_1b88;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &local_1b88->_OnValueCommitted,(FWriteAccessScope *)&local_1780);
  local_1768 = &(pFVar23->_OnValueCommitted).field_0x8;
  puVar18 = Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_1768);
  uVar8 = local_1b50.SharedReferenceCount.ReferenceController._4_4_;
  if (puVar18 == (undefined8 *)0x0) {
    pTVar36 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
  }
  else {
    pTVar19 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->field_0x8,&local_1698);
    pTVar36 = (pTVar19->SharedReferenceCount).ReferenceController;
    pSVar4 = pTVar19->Object;
    if (pTVar36 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar36->SharedReferenceCount = (atomic<int>)((int)pTVar36->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar36->SharedReferenceCount = (atomic<int>)((int)pTVar36->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar7 = true;
    bVar6 = true;
    bVar11 = true;
    *puVar18 = &
               ___7__TCommonDelegateInstanceState___A6AXMW4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar20 = FDelegateHandle::GenerateNewID();
    puVar18[2] = uVar20;
    *puVar18 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSColorGradingPicker_ColorGrading_UE___00__A6AXMW4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar18[3] = pSVar4;
    puVar18[4] = pTVar36;
    if (pTVar36 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar36->WeakReferenceCount = (atomic<int>)((int)pTVar36->WeakReferenceCount + 1);
      UNLOCK();
    }
    puVar18[5] = OnMainValueCommitted;
    puVar18[6] = (ulonglong)uVar8 << 0x20;
  }
  if (bVar11) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar36);
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar36);
  }
  if (bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1698.SharedReferenceCount.ReferenceController);
  }
  bVar7 = false;
  bVar6 = false;
  bVar11 = false;
  if (local_1780.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1780.Accessor,&local_1780);
  }
  pFVar23 = local_1b88;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&local_1b88->_OnValueChanged,
             (FWriteAccessScope *)&local_17a0);
  local_1788 = &(pFVar23->_OnValueChanged).field_0x8;
  puVar18 = Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_1788);
  uVar8 = local_1b50.SharedReferenceCount.ReferenceController._4_4_;
  if (puVar18 == (undefined8 *)0x0) {
    pTVar36 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
  }
  else {
    pTVar19 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->field_0x8,&local_16a8);
    pTVar36 = (pTVar19->SharedReferenceCount).ReferenceController;
    pSVar4 = pTVar19->Object;
    if (pTVar36 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar36->SharedReferenceCount = (atomic<int>)((int)pTVar36->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar36->SharedReferenceCount = (atomic<int>)((int)pTVar36->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar7 = true;
    bVar6 = true;
    bVar11 = true;
    *puVar18 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy___N__6B_;
    *(undefined1 *)(puVar18 + 1) = 0;
    uVar20 = FDelegateHandle::GenerateNewID();
    puVar18[2] = uVar20;
    *puVar18 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSColorGradingPicker_ColorGrading_UE___00__A6AXM_ZUFDefaultDelegateUserPolicy___N__6B_
    ;
    puVar18[3] = pSVar4;
    puVar18[4] = pTVar36;
    if (pTVar36 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar36->WeakReferenceCount = (atomic<int>)((int)pTVar36->WeakReferenceCount + 1);
      UNLOCK();
    }
    puVar18[5] = OnMainValueChanged;
    puVar18[6] = (ulonglong)uVar8 << 0x20;
  }
  if (bVar11) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar36);
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar36);
  }
  if (bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_16a8.SharedReferenceCount.ReferenceController);
  }
  bVar7 = false;
  bVar6 = false;
  bVar11 = false;
  if (local_17a0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_17a0.Accessor,&local_17a0);
  }
  pbVar28 = TAttribute<bool>::Get(&param_1->_AllowSpin);
  pFVar23 = local_1b88;
  local_1b88->_AllowSpin = *pbVar28;
  local_18a0.Value = (param_1->_SupportDynamicSliderMaxValue).Value;
  local_18a0.bIsSet = (param_1->_SupportDynamicSliderMaxValue).bIsSet;
  local_18a0.Getter._0_8_ = 0;
  local_18a0.Getter._8_8_ = 0;
  local_18a0.Getter._16_4_ = 0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&local_18a0.Getter,&(param_1->_SupportDynamicSliderMaxValue).Getter);
  pFVar23 = SNumericEntryBox<float>::FArguments::SupportDynamicSliderMaxValue(pFVar23,&local_18a0);
  local_18c0.Value = (param_1->_SupportDynamicSliderMinValue).Value;
  local_18c0.bIsSet = (param_1->_SupportDynamicSliderMinValue).bIsSet;
  local_18c0.Getter._0_8_ = 0;
  local_18c0.Getter._8_8_ = 0;
  local_18c0.Getter._16_4_ = 0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&local_18c0.Getter,&(param_1->_SupportDynamicSliderMinValue).Getter);
  pFVar23 = SNumericEntryBox<float>::FArguments::SupportDynamicSliderMinValue(pFVar23,&local_18c0);
  lStack_16b0 = (ulonglong)uStack_1bbc << 0x20;
  local_16b8 = OnDynamicSliderMaxValueChanged;
  TDelegateRegistration<void___cdecl(float,TWeakPtr<SWidget,1>,bool,bool),FDefaultDelegateUserPolicy>
  ::BindSP<UE::ColorGrading::SColorGradingPicker>
            ((TDelegateRegistration<void___cdecl(float,TWeakPtr<SWidget,1>,bool,bool),FDefaultDelegateUserPolicy>
              *)&pFVar23->_OnDynamicSliderMaxValueChanged,this,(pmf_d8fb7ff9 *)&local_16b8);
  lStack_16c0 = (ulonglong)uStack_1bbc << 0x20;
  local_16c8 = OnDynamicSliderMinValueChanged;
  TDelegateRegistration<void___cdecl(float,TWeakPtr<SWidget,1>,bool,bool),FDefaultDelegateUserPolicy>
  ::BindSP<UE::ColorGrading::SColorGradingPicker>
            ((TDelegateRegistration<void___cdecl(float,TWeakPtr<SWidget,1>,bool,bool),FDefaultDelegateUserPolicy>
              *)&pFVar23->_OnDynamicSliderMinValueChanged,this,(pmf_d8fb7ff9 *)&local_16c8);
  local_1910.Value.bIsSet = (param_1->_ValueMin).bIsSet;
  if (local_1910.Value.bIsSet != false) {
    local_1910.Value.TypedValue = (param_1->_ValueMin).TypedValue;
  }
  local_1910.bIsSet = true;
  local_1910.Getter._16_8_ = 0;
  local_1910.Getter._0_8_ = 0;
  local_1910.Getter._8_8_ = 0;
  pFVar23 = SNumericEntryBox<float>::FArguments::MinValue(pFVar23,&local_1910);
  local_1938.Value.bIsSet = (param_1->_ValueMax).bIsSet;
  if (local_1938.Value.bIsSet != false) {
    local_1938.Value.TypedValue = (param_1->_ValueMax).TypedValue;
  }
  local_1938.bIsSet = true;
  local_1938.Getter._16_8_ = 0;
  local_1938.Getter._0_8_ = 0;
  local_1938.Getter._8_8_ = 0;
  pFVar23 = SNumericEntryBox<float>::FArguments::MaxValue(pFVar23,&local_1938);
  local_1960.Value.TypedValue = this->SliderValueMin;
  local_1960.Value.bIsSet = true;
  local_1960.bIsSet = true;
  local_1960.Getter._0_8_ = 0;
  local_1960.Getter._8_8_ = 0;
  local_1960.Getter._16_8_ = 0;
  pFVar23 = SNumericEntryBox<float>::FArguments::MinSliderValue(pFVar23,&local_1960);
  local_18e8.Value.TypedValue = this->SliderValueMax;
  local_18e8.Value.bIsSet = true;
  local_18e8.bIsSet = true;
  local_18e8.Getter._0_8_ = 0;
  local_18e8.Getter._8_8_ = 0;
  local_18e8.Getter._16_8_ = 0;
  pFVar23 = SNumericEntryBox<float>::FArguments::MaxSliderValue(pFVar23,&local_18e8);
  local_19a0.Value = this->MainDelta;
  local_19a0.bIsSet = true;
  local_19a0.Getter._0_8_ = 0;
  local_19a0.Getter._8_8_ = 0;
  local_19a0.Getter._16_8_ = 0;
  pFVar23 = SNumericEntryBox<float>::FArguments::Delta(pFVar23,&local_19a0);
  local_19c0.Value = this->MainShiftMultiplier;
  local_19c0.bIsSet = true;
  local_19c0.Getter._0_8_ = 0;
  local_19c0.Getter._8_8_ = 0;
  local_19c0.Getter._16_8_ = 0;
  pFVar23 = SNumericEntryBox<float>::FArguments::ShiftMultiplier(pFVar23,&local_19c0);
  local_19e0.Value = this->MainCtrlMultiplier;
  local_19e0.bIsSet = true;
  local_19e0.Getter._0_8_ = 0;
  local_19e0.Getter._8_8_ = 0;
  local_19e0.Getter._16_8_ = 0;
  pFVar23 = SNumericEntryBox<float>::FArguments::CtrlMultiplier(pFVar23,&local_19e0);
  local_1b88 = pFVar23;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &pFVar23->_OnBeginSliderMovement,(FWriteAccessScope *)&local_17c0);
  local_17a8 = &(pFVar23->_OnBeginSliderMovement).field_0x8;
  puVar18 = Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_17a8);
  uVar8 = local_1b50.SharedReferenceCount.ReferenceController._4_4_;
  if (puVar18 == (undefined8 *)0x0) {
    pTVar36 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
  }
  else {
    pTVar19 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->field_0x8,&local_16e0);
    pTVar36 = (pTVar19->SharedReferenceCount).ReferenceController;
    pSVar4 = pTVar19->Object;
    if (pTVar36 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar36->SharedReferenceCount = (atomic<int>)((int)pTVar36->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar36->SharedReferenceCount = (atomic<int>)((int)pTVar36->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar7 = true;
    bVar6 = true;
    bVar11 = true;
    *puVar18 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar20 = FDelegateHandle::GenerateNewID();
    puVar18[2] = uVar20;
    *puVar18 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSColorGradingPicker_ColorGrading_UE___00__A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar18[3] = pSVar4;
    puVar18[4] = pTVar36;
    if (pTVar36 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar36->WeakReferenceCount = (atomic<int>)((int)pTVar36->WeakReferenceCount + 1);
      UNLOCK();
    }
    puVar18[5] = OnBeginSliderMovement;
    puVar18[6] = (ulonglong)uVar8 << 0x20;
    pFVar23 = local_1b88;
  }
  if (bVar11) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar36);
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar36);
  }
  if (bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_16e0.SharedReferenceCount.ReferenceController);
  }
  bVar7 = false;
  bVar6 = false;
  bVar11 = false;
  if (local_17c0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_17c0.Accessor,&local_17c0);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &pFVar23->_OnEndSliderMovement,(FWriteAccessScope *)&local_17e0);
  local_17c8 = &(pFVar23->_OnEndSliderMovement).field_0x8;
  puVar18 = Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_17c8);
  uVar8 = local_1b50.SharedReferenceCount.ReferenceController._4_4_;
  if (puVar18 == (undefined8 *)0x0) {
    pTVar36 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
  }
  else {
    pTVar19 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->field_0x8,&local_1710);
    pTVar36 = (pTVar19->SharedReferenceCount).ReferenceController;
    pSVar4 = pTVar19->Object;
    if (pTVar36 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar36->SharedReferenceCount = (atomic<int>)((int)pTVar36->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar36->SharedReferenceCount = (atomic<int>)((int)pTVar36->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar7 = true;
    bVar6 = true;
    bVar11 = true;
    *puVar18 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar20 = FDelegateHandle::GenerateNewID();
    puVar18[2] = uVar20;
    *puVar18 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSColorGradingPicker_ColorGrading_UE___00__A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar18[3] = pSVar4;
    puVar18[4] = pTVar36;
    if (pTVar36 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar36->WeakReferenceCount = (atomic<int>)((int)pTVar36->WeakReferenceCount + 1);
      UNLOCK();
    }
    puVar18[5] = OnEndSliderMovement;
    puVar18[6] = (ulonglong)uVar8 << 0x20;
    pFVar23 = local_1b88;
  }
  if (bVar11) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar36);
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar36);
  }
  if (bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1710.SharedReferenceCount.ReferenceController);
  }
  bVar7 = false;
  bVar6 = false;
  bVar11 = false;
  if (local_17e0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_17e0.Accessor,&local_17e0);
  }
  pFVar29 = FText::AsLocalizable_Advanced_LocText
                      (&local_1740,L"PropertyEditor",L"MultipleValues",L"Multiple Values");
  pFVar23 = SNumericEntryBox<float>::FArguments::UndeterminedString(pFVar23,pFVar29);
  *(undefined1 *)((longlong)&pFVar23->_padding_ + 1) = 1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar23->_padding_,
             &local_1608.WriteScope);
  local_1608.Allocation = (FDelegateAllocation *)&pFVar23->_padding_;
  puVar18 = Core::Private::DelegateAllocate(0x38,local_1608.Allocation);
  if (puVar18 == (undefined8 *)0x0) {
    pTVar36 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
  }
  else {
    pTVar27 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->field_0x8,&local_16f0);
    pTVar36 = (pTVar27->SharedReferenceCount).ReferenceController;
    pSVar4 = pTVar27->Object;
    if (pTVar36 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar36->SharedReferenceCount = (atomic<int>)((int)pTVar36->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar36->SharedReferenceCount = (atomic<int>)((int)pTVar36->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar7 = true;
    bVar6 = true;
    bVar11 = true;
    *puVar18 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar20 = FDelegateHandle::GenerateNewID();
    puVar18[2] = uVar20;
    *puVar18 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSColorGradingPicker_ColorGrading_UE___00__A6A_NXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar18[3] = pSVar4;
    puVar18[4] = pTVar36;
    if (pTVar36 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar36->WeakReferenceCount = (atomic<int>)((int)pTVar36->WeakReferenceCount + 1);
      UNLOCK();
    }
    puVar18[5] = IsEntryBoxEnabled;
    puVar18[6] = (ulonglong)(uint)local_1740._12_4_ << 0x20;
  }
  if (bVar11) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar36);
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar36);
  }
  if (bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_16f0.SharedReferenceCount.ReferenceController);
  }
  TWriteLockedDelegateAllocation<FNotThreadSafeDelegateMode>::
  ~TWriteLockedDelegateAllocation<FNotThreadSafeDelegateMode>(&local_1608);
  pTVar30 = MakeTDecl<SNumericEntryBox<float>,RequiredArgs::T0RequiredArgs>
                      (&local_15e8,"SNumericEntryBox<float>",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdvancedWidgets\\Private\\Widgets\\ColorGrading\\SColorGradingPicker.cpp"
                       ,0x5d,local_res18);
  pTVar30 = TSlateDecl<SNumericEntryBox<float>,RequiredArgs::T0RequiredArgs>::
            Expose<SNumericEntryBox<float>_>(pTVar30,&this->NumericEntryBoxWidget);
  pTVar31 = TSlateDecl<SNumericEntryBox<float>,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar30,&local_1730,pFVar23);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SNumericEntryBox<float>_>(&local_1860,pTVar31);
  pFVar16 = SBox::FArguments::operator[](pFVar16,&local_1860);
  this_01 = MakeTDecl<SBox,RequiredArgs::T0RequiredArgs>
                      (&local_15d0,"SBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdvancedWidgets\\Private\\Widgets\\ColorGrading\\SColorGradingPicker.cpp"
                       ,0x58,local_res20);
  pTVar21 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=(this_01,&local_1720,pFVar16);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBox>(&local_1880,pTVar21);
  pFVar35 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)local_1b78,&local_1880);
  pFVar32 = SVerticalBox::FArguments::operator+(local_1b38,pFVar35);
  this_02 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                      (&local_15b8,"SVerticalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdvancedWidgets\\Private\\Widgets\\ColorGrading\\SColorGradingPicker.cpp"
                       ,0x40,local_1ba8);
  pTVar33 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_02,&local_1700,pFVar32);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SVerticalBox>(&local_1870,pTVar33);
  TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::operator[]
            ((TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *)
             &this->field_0x218,&local_1870);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1870.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1700.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_15b8._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1880.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1720.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_15d0._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1860.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1730.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_15e8._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1138);
  SNumericEntryBox<float>::FArguments::~FArguments(&local_7a0);
  SBox::FArguments::~FArguments(&local_e20);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_f08);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_1b40);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             CONCAT44(local_1b50.SharedReferenceCount.ReferenceController._4_4_,
                      local_1b50.SharedReferenceCount.ReferenceController._0_4_));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1628._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1b98);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1b98);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1b08._Widget.SharedReferenceCount.ReferenceController);
  TDelegate<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>::
  ~TDelegate<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy> *)local_1b20);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1188);
  if ((void *)local_1188._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1188._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1188);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_11a0);
  if ((void *)local_11a0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_11a0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_11a0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_11b8);
  if ((void *)local_11b8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_11b8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_11b8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_11d0);
  if ((void *)local_11d0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_11d0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_11d0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_11f0);
  if ((void *)local_11f0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_11f0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_11f0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1210);
  if ((void *)local_1210._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1210._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1210);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_1420);
  SBox::FArguments::~FArguments(&local_ae0);
  TResizingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_14b0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_14d8);
  if ((void *)local_14d8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_14d8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_14d8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_14f8);
  if (local_1508[0] != (undefined8 *)0x0) {
    (**(code **)*local_1508[0])(local_1508[0],1);
  }
  DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_1110._Slots.AllocatorInstance.Data,local_1110._Slots.ArrayNum);
  if ((FSlotArguments *)local_1110._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_1110._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_1110);
  return;
}

// GetCurrentLinearColor @ 14d866ba0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FLinearColor * __thiscall
UE::ColorGrading::SColorGradingPicker::GetCurrentLinearColor
          (SColorGradingPicker *this,FLinearColor *__return_storage_ptr__)

{
  char cVar1;
  longlong *plVar2;
  double dVar3;
  double dVar4;
  undefined1 local_58 [8];
  float fStack_50;
  undefined4 uStack_4c;
  FReadAccessScope local_48;
  double local_28;
  double dStack_20;
  double local_18;
  double dStack_10;
  
  _local_58 = FLinearColor::Black.field0_0x0;
  local_18 = ___xmm_3ff00000000000000000000000000000;
  dStack_10 = _UNK_15061cbc8;
  local_28 = 0.0;
  dStack_20 = 0.0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnQueryCurrentColor,
             &local_48);
  if ((*(int *)&(this->OnQueryCurrentColor).field_0x10 != 0) &&
     (plVar2 = *(longlong **)&(this->OnQueryCurrentColor).field_0x8, plVar2 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*plVar2 + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_48);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->OnQueryCurrentColor,&local_48);
      if (*(int *)&(this->OnQueryCurrentColor).field_0x10 == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)&(this->OnQueryCurrentColor).field_0x8;
      }
      cVar1 = (**(code **)(*plVar2 + 0x60))(plVar2,&local_28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_48);
      if (cVar1 != '\0') {
        dVar4 = (double)(float)((uint)this->SliderValueMin ^ __xmm_80000000800000008000000080000000)
        ;
        uStack_4c = 0x3f800000;
        dVar3 = (double)(__real_3f800000 / (this->SliderValueMax - this->SliderValueMin));
        local_28 = (dVar4 + local_28) * dVar3;
        dStack_20 = (dVar4 + dStack_20) * dVar3;
        local_18 = (dVar4 + local_18) * dVar3;
        local_58._0_4_ = (float)local_28;
        dStack_10 = (dVar4 + dStack_10) * dVar3;
        fStack_50 = (float)local_18;
        uStack_4c = 0x3f800000;
        local_58._4_4_ = (float)dStack_20;
      }
      goto LAB_14d866d03;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_48);
LAB_14d866d03:
  FLinearColor::LinearRGBToHSV((FLinearColor *)local_58,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// HandleColorWheelMouseCaptureBegin @ 14d86dbc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
UE::ColorGrading::SColorGradingPicker::HandleColorWheelMouseCaptureBegin
          (SColorGradingPicker *this,FLinearColor *param_1)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  this->bIsMouseDragging = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->ExternalBeginMouseCaptureDelegate,&local_28);
  if ((*(int *)&(this->ExternalBeginMouseCaptureDelegate).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->ExternalBeginMouseCaptureDelegate).field_0x8,
     plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// HandleColorWheelMouseCaptureEnd @ 14d86dc10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
UE::ColorGrading::SColorGradingPicker::HandleColorWheelMouseCaptureEnd
          (SColorGradingPicker *this,FLinearColor *param_1)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  this->bIsMouseDragging = false;
  HandleCurrentColorValueChanged(this,param_1,false);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->ExternalEndMouseCaptureDelegate,&local_28);
  if ((*(int *)&(this->ExternalEndMouseCaptureDelegate).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->ExternalEndMouseCaptureDelegate).field_0x8,
     plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// HandleCurrentColorValueChanged @ 14d86def0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
UE::ColorGrading::SColorGradingPicker::HandleCurrentColorValueChanged
          (SColorGradingPicker *this,FLinearColor *param_1,bool param_2)

{
  char cVar1;
  longlong *plVar2;
  double dVar3;
  FLinearColor_u_0 local_78;
  FReadAccessScope local_68;
  double local_48;
  double local_40;
  double local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  uStack_10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnQueryCurrentColor,
             &local_68);
  if (((*(int *)&(this->OnQueryCurrentColor).field_0x10 != 0) &&
      (plVar2 = *(longlong **)&(this->OnQueryCurrentColor).field_0x8, plVar2 != (longlong *)0x0)) &&
     (cVar1 = (**(code **)(*plVar2 + 0x38))(), cVar1 != '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_68);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnQueryCurrentColor,
               &local_68);
    if (*(int *)&(this->OnQueryCurrentColor).field_0x10 == 0) {
      plVar2 = (longlong *)0x0;
    }
    else {
      plVar2 = *(longlong **)&(this->OnQueryCurrentColor).field_0x8;
    }
    cVar1 = (**(code **)(*plVar2 + 0x60))(plVar2,&local_28);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_68);
    if (cVar1 == '\0') {
      return;
    }
    FLinearColor::HSVToLinearRGB(param_1,(FLinearColor *)&local_78._s_0);
    local_38 = (double)this->SliderValueMin;
    dVar3 = (double)(this->SliderValueMax - this->SliderValueMin);
    local_40 = (double)local_78._s_0.G * dVar3 + local_38;
    local_48 = (double)local_78._s_0.R * dVar3 + local_38;
    local_38 = (double)local_78._s_0.B * dVar3 + local_38;
    local_30 = uStack_10;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnColorCommitted,
               &local_68);
    if ((*(int *)&(this->OnColorCommitted).field_0x10 != 0) &&
       (plVar2 = *(longlong **)&(this->OnColorCommitted).field_0x8, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x68))(plVar2,&local_48,param_2);
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_68);
  return;
}

// IsEntryBoxEnabled @ 14d8718d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall UE::ColorGrading::SColorGradingPicker::IsEntryBoxEnabled(SColorGradingPicker *this)

{
  TOptional<float> TVar1;
  
  TVar1 = OnGetMainValue(this);
  return *(char *)((longlong)TVar1 + 4) != '\0';
}

// OnBeginSliderMovement @ 14d873890

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
UE::ColorGrading::SColorGradingPicker::OnBeginSliderMovement(SColorGradingPicker *this)

{
  TVector4<double> *pTVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  char cVar12;
  longlong *plVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  FReadAccessScope local_38 [2];
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->ExternalBeginSliderMovementDelegate,local_38);
  if ((*(int *)&(this->ExternalBeginSliderMovementDelegate).field_0x10 != 0) &&
     (plVar13 = *(longlong **)&(this->ExternalBeginSliderMovementDelegate).field_0x8,
     plVar13 != (longlong *)0x0)) {
    (**(code **)(*plVar13 + 0x68))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (local_38);
  this->bIsMouseDragging = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnQueryCurrentColor,
             local_38);
  if ((*(int *)&(this->OnQueryCurrentColor).field_0x10 != 0) &&
     (plVar13 = *(longlong **)&(this->OnQueryCurrentColor).field_0x8, plVar13 != (longlong *)0x0)) {
    cVar12 = (**(code **)(*plVar13 + 0x38))();
    if (cVar12 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (local_38);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->OnQueryCurrentColor,local_38);
      if (*(int *)&(this->OnQueryCurrentColor).field_0x10 == 0) {
        plVar13 = (longlong *)0x0;
      }
      else {
        plVar13 = *(longlong **)&(this->OnQueryCurrentColor).field_0x8;
      }
      pTVar1 = &this->StartDragRatio;
      cVar12 = (**(code **)(*plVar13 + 0x60))(plVar13,pTVar1);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (local_38);
      if (cVar12 != '\0') {
        dVar7 = (double)this->SliderValueMin;
        dVar5 = (this->StartDragRatio).field0_0x0._s_0.Y - dVar7;
        auVar2._8_4_ = SUB84(dVar5,0);
        auVar2._0_8_ = (pTVar1->field0_0x0)._s_0.X - dVar7;
        auVar2._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
        *(undefined1 (*) [16])&pTVar1->field0_0x0 = auVar2;
        dVar5 = (this->StartDragRatio).field0_0x0._s_0.W - dVar7;
        auVar3._8_4_ = SUB84(dVar5,0);
        auVar3._0_8_ = (this->StartDragRatio).field0_0x0._s_0.Z - dVar7;
        auVar3._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
        *(undefined1 (*) [16])((longlong)&(this->StartDragRatio).field0_0x0 + 0x10) = auVar3;
        fVar14 = __real_3f800000 / (this->SliderValueMax - this->SliderValueMin);
        dVar7 = (double)fVar14;
        dVar11 = (double)fVar14;
        dVar5 = dVar11 * (this->StartDragRatio).field0_0x0._s_0.Y;
        auVar6._8_4_ = SUB84(dVar5,0);
        auVar6._0_8_ = dVar7 * (pTVar1->field0_0x0)._s_0.X;
        auVar6._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
        *(undefined1 (*) [16])&pTVar1->field0_0x0 = auVar6;
        dVar11 = dVar11 * (this->StartDragRatio).field0_0x0._s_0.W;
        auVar9._8_4_ = SUB84(dVar11,0);
        auVar9._0_8_ = dVar7 * (this->StartDragRatio).field0_0x0._s_0.Z;
        auVar9._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
        *(undefined1 (*) [16])((longlong)&(this->StartDragRatio).field0_0x0 + 0x10) = auVar9;
        dVar5 = (this->StartDragRatio).field0_0x0._s_0.Y;
        dVar7 = (pTVar1->field0_0x0)._s_0.X;
        uVar15 = SUB84(dVar5,0);
        uVar16 = (undefined4)((ulonglong)dVar5 >> 0x20);
        dVar11 = (this->StartDragRatio).field0_0x0._s_0.Z;
        if (dVar5 <= dVar7) {
          uVar15 = SUB84(dVar7,0);
          uVar16 = (undefined4)((ulonglong)dVar7 >> 0x20);
        }
        if ((double)CONCAT44(uVar16,uVar15) <= dVar11) {
          uVar15 = SUB84(dVar11,0);
          uVar16 = (undefined4)((ulonglong)dVar11 >> 0x20);
        }
        dVar10 = __real_3ff0000000000000;
        dVar4 = __real_3ff0000000000000;
        dVar8 = __real_3ff0000000000000;
        if (__real_322bcc77 < (float)(double)CONCAT44(uVar16,uVar15)) {
          dVar8 = __real_3ff0000000000000 / (double)(float)(double)CONCAT44(uVar16,uVar15);
          dVar10 = dVar8 * dVar11;
          dVar4 = dVar8 * dVar5;
          dVar8 = dVar8 * dVar7;
        }
        (pTVar1->field0_0x0)._s_0.X = dVar8;
        (this->StartDragRatio).field0_0x0._s_0.Y = dVar4;
        (this->StartDragRatio).field0_0x0._s_0.Z = dVar10;
        (this->StartDragRatio).field0_0x0._s_0.W = 1.0;
      }
      return;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (local_38);
  return;
}

// OnDynamicSliderMaxValueChanged @ 14d8743d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
UE::ColorGrading::SColorGradingPicker::OnDynamicSliderMaxValueChanged
          (SColorGradingPicker *this,float param_1,TWeakPtr<SWidget,1> *param_2,bool param_3,
          bool param_4)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  SNumericEntryBox<float> *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  SSpinBox<float> *this_00;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  bool bVar7;
  atomic<int> aVar8;
  SSpinBox<float> *pSVar9;
  float fVar10;
  TWeakPtr<SWidget,1> local_88;
  FDestructionSentinel local_78;
  undefined1 local_60 [16];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_50;
  ForAnyElementType FStack_48;
  ulonglong local_40;
  
  if (((this->NumericEntryBoxWidget).Object == (SNumericEntryBox<float> *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pSVar3 = (this->NumericEntryBoxWidget).Object;
  pTVar4 = (pSVar3->SpinBox).SharedReferenceCount.ReferenceController;
  this_00 = (pSVar3->SpinBox).Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  if (this_00 != (SSpinBox<float> *)0x0) {
    pTVar5 = (param_2->WeakReferenceCount).ReferenceController;
    pSVar9 = (SSpinBox<float> *)0x0;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      aVar2 = pTVar5->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          goto LAB_14d8744bb;
        }
        LOCK();
        aVar8 = pTVar5->SharedReferenceCount;
        bVar7 = aVar2 == aVar8;
        if (bVar7) {
          pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar8 = aVar2;
        }
        UNLOCK();
        aVar2 = aVar8;
      } while (!bVar7);
      pSVar9 = (SSpinBox<float> *)param_2->Object;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    if (this_00 != pSVar9) {
LAB_14d8744bb:
      fVar10 = SSpinBox<float>::GetMaxSliderValue(this_00);
      if ((fVar10 < param_1) || (!param_4)) {
        local_60[4] = true;
        local_40 = 0;
        local_60[8] = true;
        local_50.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
        FStack_48.Data = (FScriptContainerElement *)0x0;
        local_60._0_4_ = param_1;
        SSpinBox<float>::SetMaxSliderValue(this_00,(TAttribute<TOptional<float>_> *)local_60);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_50,(FWriteAccessScope *)&local_78);
        if (((int)local_40 != 0) && (FStack_48.Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)FStack_48.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_48,0,0,0x10);
          local_40 = local_40 & 0xffffffff00000000;
        }
        if (local_78.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
        }
        if (FStack_48.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_48.Data);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_50.AccessDetector);
        this->SliderValueMax = param_1;
      }
    }
  }
  if (param_3) {
    pTVar5 = (param_2->WeakReferenceCount).ReferenceController;
    local_88.Object = param_2->Object;
    local_88.WeakReferenceCount.ReferenceController = pTVar5;
    if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
      Broadcast<IBaseDelegateInstance<void___cdecl(float,TWeakPtr<SWidget,1>,bool,bool),FDefaultDelegateUserPolicy>,float,TWeakPtr<SWidget,1>,bool,bool>
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &this->OnNumericEntryBoxDynamicSliderMaxValueChanged,param_1,&local_88,false,
                 param_4);
    }
    else {
      LOCK();
      pTVar5->WeakReferenceCount = (atomic<int>)((int)pTVar5->WeakReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar5->WeakReferenceCount = (atomic<int>)((int)pTVar5->WeakReferenceCount + 1);
      UNLOCK();
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
      Broadcast<IBaseDelegateInstance<void___cdecl(float,TWeakPtr<SWidget,1>,bool,bool),FDefaultDelegateUserPolicy>,float,TWeakPtr<SWidget,1>,bool,bool>
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &this->OnNumericEntryBoxDynamicSliderMaxValueChanged,param_1,&local_88,false,
                 param_4);
      LOCK();
      paVar1 = &pTVar5->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  pTVar4 = (param_2->WeakReferenceCount).ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  return;
}

// OnDynamicSliderMinValueChanged @ 14d874640

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
UE::ColorGrading::SColorGradingPicker::OnDynamicSliderMinValueChanged
          (SColorGradingPicker *this,float param_1,TWeakPtr<SWidget,1> *param_2,bool param_3,
          bool param_4)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  SNumericEntryBox<float> *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  SSpinBox<float> *this_00;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  bool bVar7;
  atomic<int> aVar8;
  SSpinBox<float> *pSVar9;
  float fVar10;
  TWeakPtr<SWidget,1> local_88;
  FDestructionSentinel local_78;
  undefined1 local_60 [16];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_50;
  ForAnyElementType FStack_48;
  ulonglong local_40;
  
  if (((this->NumericEntryBoxWidget).Object == (SNumericEntryBox<float> *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pSVar3 = (this->NumericEntryBoxWidget).Object;
  pTVar4 = (pSVar3->SpinBox).SharedReferenceCount.ReferenceController;
  this_00 = (pSVar3->SpinBox).Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  if (this_00 != (SSpinBox<float> *)0x0) {
    pTVar5 = (param_2->WeakReferenceCount).ReferenceController;
    pSVar9 = (SSpinBox<float> *)0x0;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      aVar2 = pTVar5->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          goto LAB_14d87472b;
        }
        LOCK();
        aVar8 = pTVar5->SharedReferenceCount;
        bVar7 = aVar2 == aVar8;
        if (bVar7) {
          pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar8 = aVar2;
        }
        UNLOCK();
        aVar2 = aVar8;
      } while (!bVar7);
      pSVar9 = (SSpinBox<float> *)param_2->Object;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    if (this_00 != pSVar9) {
LAB_14d87472b:
      fVar10 = SSpinBox<float>::GetMinSliderValue(this_00);
      if ((param_1 < fVar10) || (!param_4)) {
        local_60[4] = true;
        local_40 = 0;
        local_60[8] = true;
        local_50.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
        FStack_48.Data = (FScriptContainerElement *)0x0;
        local_60._0_4_ = param_1;
        SSpinBox<float>::SetMinSliderValue(this_00,(TAttribute<TOptional<float>_> *)local_60);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_50,(FWriteAccessScope *)&local_78);
        if (((int)local_40 != 0) && (FStack_48.Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)FStack_48.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_48,0,0,0x10);
          local_40 = local_40 & 0xffffffff00000000;
        }
        if (local_78.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
        }
        if (FStack_48.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_48.Data);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_50.AccessDetector);
        this->SliderValueMin = param_1;
      }
    }
  }
  if (param_3) {
    pTVar5 = (param_2->WeakReferenceCount).ReferenceController;
    local_88.Object = param_2->Object;
    local_88.WeakReferenceCount.ReferenceController = pTVar5;
    if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
      Broadcast<IBaseDelegateInstance<void___cdecl(float,TWeakPtr<SWidget,1>,bool,bool),FDefaultDelegateUserPolicy>,float,TWeakPtr<SWidget,1>,bool,bool>
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &this->OnNumericEntryBoxDynamicSliderMinValueChanged,param_1,&local_88,false,
                 param_4);
    }
    else {
      LOCK();
      pTVar5->WeakReferenceCount = (atomic<int>)((int)pTVar5->WeakReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar5->WeakReferenceCount = (atomic<int>)((int)pTVar5->WeakReferenceCount + 1);
      UNLOCK();
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
      Broadcast<IBaseDelegateInstance<void___cdecl(float,TWeakPtr<SWidget,1>,bool,bool),FDefaultDelegateUserPolicy>,float,TWeakPtr<SWidget,1>,bool,bool>
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &this->OnNumericEntryBoxDynamicSliderMinValueChanged,param_1,&local_88,false,
                 param_4);
      LOCK();
      paVar1 = &pTVar5->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  pTVar4 = (param_2->WeakReferenceCount).ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  return;
}

// OnEndSliderMovement @ 14d8748b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
UE::ColorGrading::SColorGradingPicker::OnEndSliderMovement(SColorGradingPicker *this,float param_1)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  this->bIsMouseDragging = false;
  (this->StartDragRatio).field0_0x0._s_0.X = 1.0;
  (this->StartDragRatio).field0_0x0._s_0.Y = 1.0;
  (this->StartDragRatio).field0_0x0._s_0.Z = 1.0;
  OnMainValueChanged(this,param_1,false);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->ExternalEndSliderMovementDelegate,&local_28);
  if ((*(int *)&(this->ExternalEndSliderMovementDelegate).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->ExternalEndSliderMovementDelegate).field_0x8,
     plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// OnGetMainValue @ 14d874c30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TOptional<float> __thiscall
UE::ColorGrading::SColorGradingPicker::OnGetMainValue(SColorGradingPicker *this)

{
  char cVar1;
  longlong *plVar2;
  TOptional<float> in_RDX;
  undefined4 uVar3;
  undefined4 uVar4;
  FReadAccessScope local_48;
  double local_28;
  double dStack_20;
  double local_18;
  undefined8 uStack_10;
  
  local_28 = 0.0;
  dStack_20 = 0.0;
  local_18 = 0.0;
  uStack_10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnQueryCurrentColor,
             &local_48);
  if ((*(int *)&(this->OnQueryCurrentColor).field_0x10 != 0) &&
     (plVar2 = *(longlong **)&(this->OnQueryCurrentColor).field_0x8, plVar2 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*plVar2 + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_48);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->OnQueryCurrentColor,&local_48);
      if (*(int *)&(this->OnQueryCurrentColor).field_0x10 == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)&(this->OnQueryCurrentColor).field_0x8;
      }
      cVar1 = (**(code **)(*plVar2 + 0x60))(plVar2,&local_28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_48);
      if (cVar1 != '\0') {
        *(undefined1 *)((longlong)in_RDX + 4) = 1;
        uVar3 = SUB84(local_28,0);
        uVar4 = (int)((ulonglong)local_28 >> 0x20);
        if (local_28 <= dStack_20) {
          uVar3 = SUB84(dStack_20,0);
          uVar4 = (int)((ulonglong)dStack_20 >> 0x20);
        }
        if ((double)CONCAT44(uVar4,uVar3) <= local_18) {
          uVar3 = SUB84(local_18,0);
          uVar4 = (undefined4)((ulonglong)local_18 >> 0x20);
        }
        *(float *)in_RDX = (float)(double)CONCAT44(uVar4,uVar3);
        return in_RDX;
      }
      goto LAB_14d874cfc;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_48);
LAB_14d874cfc:
  *(undefined1 *)((longlong)in_RDX + 4) = 0;
  return in_RDX;
}

// OnMainValueChanged @ 14d876830

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
UE::ColorGrading::SColorGradingPicker::OnMainValueChanged
          (SColorGradingPicker *this,float param_1,bool param_2)

{
  double dVar1;
  double dVar2;
  char cVar3;
  longlong *plVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  uint uVar10;
  uint uVar11;
  float fVar12;
  FReadAccessScope local_a8;
  undefined1 local_88 [16];
  undefined1 local_78 [112];
  
  if ((this->bIsMouseDragging != false) || (param_2)) {
    local_78._0_16_ = ZEXT816(0);
    fVar9 = (param_1 - this->SliderValueMin) / (this->SliderValueMax - this->SliderValueMin);
    local_88 = ZEXT816(0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnQueryCurrentColor,
               &local_a8);
    if ((*(int *)&(this->OnQueryCurrentColor).field_0x10 != 0) &&
       ((plVar4 = *(longlong **)&(this->OnQueryCurrentColor).field_0x8, plVar4 != (longlong *)0x0 &&
        (cVar3 = (**(code **)(*plVar4 + 0x38))(), cVar3 != '\0')))) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_a8);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->OnQueryCurrentColor,&local_a8);
      if (*(int *)&(this->OnQueryCurrentColor).field_0x10 == 0) {
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = *(longlong **)&(this->OnQueryCurrentColor).field_0x8;
      }
      cVar3 = (**(code **)(*plVar4 + 0x60))(plVar4,local_88);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_a8);
      if (cVar3 == '\0') {
        return;
      }
      dVar2 = (double)this->SliderValueMin;
      uVar10 = SUB84(dVar2,0) ^ (uint)__xmm_80000000000000008000000000000000;
      uVar11 = (uint)((ulonglong)dVar2 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
      fVar12 = this->SliderValueMax - this->SliderValueMin;
      dVar1 = (double)(__real_3f800000 / fVar12);
      dVar8 = ((double)CONCAT44(uVar11,uVar10) + (double)local_88._8_8_) * dVar1;
      dVar5 = ((double)CONCAT44(uVar11,uVar10) + (double)local_88._0_8_) * dVar1;
      dVar6 = ((double)CONCAT44(uVar11,uVar10) + (double)local_78._0_8_) * dVar1;
      dVar7 = dVar8;
      if (dVar8 <= dVar5) {
        dVar7 = dVar5;
      }
      if (dVar7 <= dVar6) {
        dVar7 = dVar6;
      }
      if (__real_322bcc77 < (float)dVar7) {
        dVar7 = (double)(fVar9 / (float)dVar7);
        dVar5 = dVar7 * dVar5;
        dVar8 = dVar7 * dVar8;
        dVar7 = dVar7 * dVar6;
        if (this->bIsMouseDragging != false) {
          dVar6 = dVar5;
          if (dVar5 <= dVar8) {
            dVar6 = dVar8;
          }
          if (dVar6 <= dVar7) {
            dVar6 = dVar7;
          }
          if (__real_322bcc77 < (float)dVar6) {
            dVar7 = (double)(float)dVar6;
            dVar5 = dVar7 * (this->StartDragRatio).field0_0x0._s_0.X;
            dVar8 = dVar7 * (this->StartDragRatio).field0_0x0._s_0.Y;
            dVar7 = dVar7 * (this->StartDragRatio).field0_0x0._s_0.Z;
          }
        }
      }
      else {
        dVar5 = (double)fVar9;
        dVar7 = dVar5;
        dVar8 = dVar5;
      }
      dVar6 = (double)fVar12;
      local_88._8_8_ = dVar6 * dVar8 + dVar2;
      local_88._0_8_ = dVar6 * dVar5 + dVar2;
      local_78._8_8_ =
           dVar6 * ((double)CONCAT44(uVar11,uVar10) + (double)local_78._8_8_) * dVar1 + dVar2;
      local_78._0_8_ = dVar6 * dVar7 + dVar2;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnColorCommitted,
                 &local_a8);
      if ((*(int *)&(this->OnColorCommitted).field_0x10 != 0) &&
         (plVar4 = *(longlong **)&(this->OnColorCommitted).field_0x8, plVar4 != (longlong *)0x0)) {
        (**(code **)(*plVar4 + 0x68))(plVar4,local_88,param_2);
      }
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_a8);
  }
  return;
}

// OnMainValueCommitted @ 14d876b30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
UE::ColorGrading::SColorGradingPicker::OnMainValueCommitted
          (SColorGradingPicker *this,float param_1,Type param_2)

{
  OnMainValueChanged(this,param_1,true);
  return;
}

// TransformColorGradingRangeToLinearColorRange @ 14d88b220

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
UE::ColorGrading::SColorGradingPicker::TransformColorGradingRangeToLinearColorRange
          (SColorGradingPicker *this,float *param_1)

{
  float fVar1;
  
  fVar1 = *param_1 - this->SliderValueMin;
  *param_1 = fVar1;
  *param_1 = fVar1 / (this->SliderValueMax - this->SliderValueMin);
  return;
}

// TransformColorGradingRangeToLinearColorRange @ 14d88b250

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
UE::ColorGrading::SColorGradingPicker::TransformColorGradingRangeToLinearColorRange
          (SColorGradingPicker *this,TVector4<double> *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  float fVar8;
  
  dVar6 = (double)this->SliderValueMin;
  dVar3 = (param_1->field0_0x0)._s_0.Y - dVar6;
  auVar1._8_4_ = SUB84(dVar3,0);
  auVar1._0_8_ = (param_1->field0_0x0)._s_0.X - dVar6;
  auVar1._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  *(undefined1 (*) [16])&param_1->field0_0x0 = auVar1;
  dVar3 = (param_1->field0_0x0)._s_0.W - dVar6;
  auVar2._8_4_ = SUB84(dVar3,0);
  auVar2._0_8_ = (param_1->field0_0x0)._s_0.Z - dVar6;
  auVar2._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  *(undefined1 (*) [16])((longlong)&param_1->field0_0x0 + 0x10) = auVar2;
  fVar8 = __real_3f800000 / (this->SliderValueMax - this->SliderValueMin);
  dVar6 = (double)fVar8;
  dVar7 = (double)fVar8;
  dVar3 = dVar7 * (param_1->field0_0x0)._s_0.Y;
  auVar4._8_4_ = SUB84(dVar3,0);
  auVar4._0_8_ = dVar6 * (param_1->field0_0x0)._s_0.X;
  auVar4._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  *(undefined1 (*) [16])&param_1->field0_0x0 = auVar4;
  dVar7 = dVar7 * (param_1->field0_0x0)._s_0.W;
  auVar5._8_4_ = SUB84(dVar7,0);
  auVar5._0_8_ = dVar6 * (param_1->field0_0x0)._s_0.Z;
  auVar5._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  *(undefined1 (*) [16])((longlong)&param_1->field0_0x0 + 0x10) = auVar5;
  return;
}

// TransformLinearColorRangeToColorGradingRange @ 14d88b2c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
UE::ColorGrading::SColorGradingPicker::TransformLinearColorRangeToColorGradingRange
          (SColorGradingPicker *this,TVector4<double> *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  fVar7 = this->SliderValueMax - this->SliderValueMin;
  dVar9 = (double)fVar7;
  dVar10 = (double)fVar7;
  dVar3 = dVar9 * (param_1->field0_0x0)._s_0.X;
  dVar4 = dVar10 * (param_1->field0_0x0)._s_0.Y;
  auVar1._8_4_ = SUB84(dVar4,0);
  auVar1._0_8_ = dVar3;
  auVar1._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *(undefined1 (*) [16])&param_1->field0_0x0 = auVar1;
  dVar9 = (param_1->field0_0x0)._s_0.Z * dVar9;
  dVar10 = (param_1->field0_0x0)._s_0.W * dVar10;
  auVar5._8_4_ = SUB84(dVar10,0);
  auVar5._0_8_ = dVar9;
  auVar5._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  *(undefined1 (*) [16])((longlong)&param_1->field0_0x0 + 0x10) = auVar5;
  dVar8 = (double)this->SliderValueMin;
  auVar2._8_4_ = SUB84(dVar4 + dVar8,0);
  auVar2._0_8_ = dVar3 + dVar8;
  auVar2._12_4_ = (int)((ulonglong)(dVar4 + dVar8) >> 0x20);
  *(undefined1 (*) [16])&param_1->field0_0x0 = auVar2;
  auVar6._8_4_ = SUB84(dVar10 + dVar8,0);
  auVar6._0_8_ = dVar9 + dVar8;
  auVar6._12_4_ = (int)((ulonglong)(dVar10 + dVar8) >> 0x20);
  *(undefined1 (*) [16])((longlong)&param_1->field0_0x0 + 0x10) = auVar6;
  return;
}

