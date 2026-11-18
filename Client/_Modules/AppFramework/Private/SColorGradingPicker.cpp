// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 18

// ~SColorGradingPicker @ 142f3f580

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall SColorGradingPicker::~SColorGradingPicker(SColorGradingPicker *this)

{
  void *pvVar1;
  
  *(undefined ***)this = &___7SColorGradingPicker__6B_;
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
  TSharedPtr<SNumericEntryBox<float>,1>::~TSharedPtr<SNumericEntryBox<float>,1>
            (&this->NumericEntryBoxWidget);
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  return;
}

// AdjustRatioValue @ 142f58630

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
SColorGradingPicker::AdjustRatioValue(SColorGradingPicker *this,TVector4<double> *param_1)

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

// Construct @ 142f69ae0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Removing unreachable block (ram,0x000142f6a89b) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall SColorGradingPicker::Construct(SColorGradingPicker *this,FArguments *param_1)

{
  byte *pbVar1;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  longlong *plVar2;
  SWidget *pSVar3;
  void *pvVar4;
  ITextData *pIVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  SColorGradingWheel *pSVar9;
  bool bVar10;
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
  FArguments *pFVar22;
  ISlateStyle *this_01;
  FName *pFVar23;
  FEditableTextBoxStyle *pFVar24;
  TSharedRef<SWidget_const_,1> *pTVar25;
  bool *pbVar26;
  TAttribute<bool> *pTVar27;
  FText *pFVar28;
  TSlateDecl<SNumericEntryBox<float>,RequiredArgs::T0RequiredArgs> *pTVar29;
  TSharedRef<SNumericEntryBox<float>,1> *pTVar30;
  FArguments *pFVar31;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> *this_02;
  TSharedRef<SVerticalBox,1> *pTVar32;
  TReferenceControllerBase<1> *pTVar33;
  FSharedReferencer<1> FVar34;
  float fVar35;
  undefined4 local_res8;
  undefined4 uStackX_c;
  T0RequiredArgs local_res10 [8];
  T0RequiredArgs local_res18 [8];
  T0RequiredArgs local_res20 [8];
  code *local_1758;
  ulonglong uStack_1750;
  TReferenceControllerBase<1> *local_1748;
  SWidget *local_1740;
  FLLMScope local_1738;
  FLLMScope local_1734;
  undefined1 local_1730 [8];
  ForAnyElementType local_1728;
  int local_1720;
  undefined1 local_1718 [8];
  ForAnyElementType local_1710;
  int local_1708;
  TSharedRef<SBox,1> local_1700;
  FName local_16f0;
  undefined4 uStack_16e8;
  uint uStack_16e4;
  FName local_16e0;
  FMemScope local_16d8;
  FSlotArguments *local_16d0;
  SBox *local_16c8;
  FName local_16c0;
  undefined1 local_16b8 [8];
  FDelegateAllocation local_16b0;
  TSlateDecl<SColorGradingWheel,RequiredArgs::T0RequiredArgs> local_16a0;
  undefined4 local_1688;
  undefined1 local_1684;
  undefined1 local_1680 [8];
  void *pvStack_1678;
  undefined8 local_1670;
  TSharedPtr<SColorGradingPicker_const_,1> local_1668;
  undefined4 local_1658;
  undefined1 local_1654;
  undefined1 local_1650 [8];
  void *pvStack_1648;
  undefined8 local_1640;
  undefined4 local_1638;
  undefined1 local_1634;
  undefined1 local_1630 [8];
  void *pvStack_1628;
  undefined8 local_1620;
  undefined4 local_1618;
  undefined1 local_1614;
  undefined1 local_1610 [8];
  void *pvStack_1608;
  undefined8 local_1600;
  float local_15f8;
  undefined1 local_15f4;
  undefined1 local_15f0 [8];
  void *pvStack_15e8;
  undefined8 local_15e0;
  undefined4 local_15d8;
  undefined1 local_15d4;
  undefined1 local_15d0 [8];
  void *pvStack_15c8;
  undefined8 local_15c0;
  float local_15b8;
  undefined1 local_15b4;
  undefined1 local_15b0 [8];
  void *pvStack_15a8;
  undefined8 local_15a0;
  bool local_1598;
  bool local_1597;
  undefined1 local_1590 [8];
  void *pvStack_1588;
  undefined4 local_1580;
  float local_1578;
  undefined1 local_1574;
  undefined1 local_1570 [8];
  void *pvStack_1568;
  undefined8 local_1560;
  FMemScope local_1558;
  undefined8 local_1550;
  undefined8 uStack_1548;
  bool local_1540;
  undefined1 local_1538 [8];
  void *pvStack_1530;
  int local_1528;
  TAttribute<float> local_1520;
  TAttribute<TOptional<float>_> local_1500;
  TAttribute<TOptional<float>_> local_14d8;
  TAttribute<TOptional<float>_> local_14b0;
  TAttribute<TOptional<float>_> local_1488;
  TSharedRef<SWidget,1> local_1460;
  TSharedRef<SWidget,1> local_1450;
  FDestructionSentinel local_1440;
  FDestructionSentinel local_1428;
  FDestructionSentinel local_1410;
  FDestructionSentinel local_13f8;
  FDelegateAllocation *local_13e0;
  FDestructionSentinel local_13d8;
  undefined1 *local_13c0;
  FDestructionSentinel local_13b8;
  undefined1 *local_13a0;
  FDestructionSentinel local_1398;
  undefined1 *local_1380;
  FDestructionSentinel local_1378;
  undefined1 *local_1360;
  FDestructionSentinel local_1358;
  undefined1 *local_1340;
  FDestructionSentinel local_1338;
  undefined1 *local_1320;
  TSharedRef<SWidget_const_,1> local_1318;
  TSharedRef<SVerticalBox,1> local_1308;
  TSharedRef<SWidget,1> local_12f8;
  TSharedRef<SWidget,1> local_12e8;
  code *local_12d8;
  ulonglong uStack_12d0;
  code *local_12c8;
  ulonglong uStack_12c0;
  TSharedRef<SWidget,1> local_12b8;
  TSharedRef<SWidget,1> local_12a8;
  TSharedRef<SWidget_const_,1> local_1298;
  FText local_1288;
  SWidget *local_1278;
  TReferenceControllerBase<1> *pTStack_1270;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_1268;
  code *local_1248;
  ulonglong uStack_1240;
  FName local_1238;
  TSharedRef<SWidget,1> local_1230;
  TSharedRef<SWidget,1> local_1220;
  TSharedRef<SNumericEntryBox<float>,1> local_1210;
  TWriteLockedDelegateAllocation<FNotThreadSafeDelegateMode> local_1200;
  FReadAccessScope local_11e0;
  FReadAccessScope local_11c8;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_11b0;
  TSlateDecl<SNumericEntryBox<float>,RequiredArgs::T0RequiredArgs> local_1198;
  TAttribute<bool> local_1180;
  undefined8 *local_1160 [2];
  TReferenceControllerBase<1> *local_1150;
  undefined1 local_1130 [40];
  FSlotArgumentsMixin local_1108;
  undefined1 local_1078 [528];
  undefined1 local_e68 [32];
  undefined1 local_e48 [32];
  undefined1 local_e28 [24];
  undefined1 local_e10 [24];
  undefined1 local_df8 [24];
  undefined1 local_de0 [24];
  FArguments local_dc8;
  FSlotArguments local_bc0;
  FArguments local_ad8;
  FArguments local_798;
  undefined8 uStack_48;
  
  uStack_48 = 0x142f69aff;
  bVar11 = false;
  bVar8 = false;
  bVar7 = false;
  local_res8 = 0;
  fVar35 = __real_ff7fffff;
  if ((param_1->_SliderValueMin).bIsSet != false) {
    pfVar14 = TOptional<float>::GetValue(&param_1->_SliderValueMin);
    fVar35 = *pfVar14;
  }
  this->SliderValueMin = fVar35;
  fVar35 = __real_7f7fffff;
  if ((param_1->_SliderValueMax).bIsSet != false) {
    pfVar14 = TOptional<float>::GetValue(&param_1->_SliderValueMax);
    fVar35 = *pfVar14;
  }
  this->SliderValueMax = fVar35;
  if ((fVar35 < this->SliderValueMin || fVar35 == this->SliderValueMin) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("SliderValueMin < SliderValueMax",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorGradingPicker.cpp"
                          ,0x22,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  this->MainDelta = param_1->_MainDelta;
  this->MainShiftMultiplier = param_1->_MainShiftMultiplier;
  this->MainCtrlMultiplier = param_1->_MainCtrlMultiplier;
  this->ColorGradingModes = param_1->_ColorGradingModes;
  if (&param_1->_OnColorCommitted != &this->OnColorCommitted) {
    local_1730 = (undefined1  [8])0x0;
    local_1728.Data = (FScriptContainerElement *)0x0;
    local_1720 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->_OnColorCommitted
               ,&local_11e0);
    if ((*(int *)&(param_1->_OnColorCommitted).field_0x10 != 0) &&
       (plVar2 = *(longlong **)&(param_1->_OnColorCommitted).field_0x8, plVar2 != (longlong *)0x0))
    {
      (**(code **)(*plVar2 + 0x50))(plVar2,local_1730);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_11e0);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnColorCommitted,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1730);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1730,
               (FWriteAccessScope *)&local_1410);
    if ((local_1720 != 0) && (local_1728.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_1728.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_1728,0,0,0x10);
      local_1720 = 0;
    }
    if (local_1410.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1410.Accessor,&local_1410);
    }
    if (local_1728.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1728.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1730);
  }
  if (&param_1->_OnQueryCurrentColor != &this->OnQueryCurrentColor) {
    local_1718 = (undefined1  [8])0x0;
    local_1710.Data = (FScriptContainerElement *)0x0;
    local_1708 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &param_1->_OnQueryCurrentColor,&local_11c8);
    if ((*(int *)&(param_1->_OnQueryCurrentColor).field_0x10 != 0) &&
       (plVar2 = *(longlong **)&(param_1->_OnQueryCurrentColor).field_0x8, plVar2 != (longlong *)0x0
       )) {
      (**(code **)(*plVar2 + 0x50))(plVar2,local_1718);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_11c8);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnQueryCurrentColor,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1718);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1718,
               (FWriteAccessScope *)&local_1428);
    if ((local_1708 != 0) && (local_1710.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_1710.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_1710,0,0,0x10);
      local_1708 = 0;
    }
    if (local_1428.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1428.Accessor,&local_1428);
    }
    if (local_1710.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1710.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1718);
  }
  fVar35 = __real_4019999a;
  if (this->ColorGradingModes == Offset) {
    fVar35 = __real_40400000;
  }
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            (&this->ExternalBeginSliderMovementDelegate,&param_1->_OnBeginSliderMovement);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            (&this->ExternalEndSliderMovementDelegate,&param_1->_OnEndSliderMovement);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            (&this->ExternalBeginMouseCaptureDelegate,&param_1->_OnBeginMouseCapture);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            (&this->ExternalEndMouseCaptureDelegate,&param_1->_OnEndMouseCapture);
  local_1740 = (SWidget *)SVerticalBox::FArguments::FArguments(&local_dc8);
  pFVar15 = SVerticalBox::Slot((FSlotArguments *)local_1160);
  local_16d0 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar15);
  pFVar16 = SBox::FArguments::FArguments(&local_ad8);
  pFVar16->_HAlign = HAlign_Center;
  pFVar16->_VAlign = VAlign_Center;
  local_1618 = 0x42fa0000;
  local_1610 = (undefined1  [8])0x0;
  pvStack_1608 = (void *)0x0;
  local_1614 = 1;
  local_1600 = 0;
  (pFVar16->_WidthOverride).Value.Size = 125.0;
  (pFVar16->_WidthOverride).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar16->_WidthOverride).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1610);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1610);
  if (pvStack_1608 != (void *)0x0) {
    FMemory::Free(pvStack_1608);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1610);
  local_1658 = 0x42fa0000;
  local_1654 = 1;
  local_1640 = 0;
  local_1650 = (undefined1  [8])0x0;
  pvStack_1648 = (void *)0x0;
  (pFVar16->_HeightOverride).Value.Size = 125.0;
  (pFVar16->_HeightOverride).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar16->_HeightOverride).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1650);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1650);
  if (pvStack_1648 != (void *)0x0) {
    FMemory::Free(pvStack_1648);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1650);
  local_1638 = 0x42fa0000;
  local_1634 = 1;
  local_1620 = 0;
  local_1630 = (undefined1  [8])0x0;
  pvStack_1628 = (void *)0x0;
  (pFVar16->_MinDesiredWidth).Value.Size = 125.0;
  (pFVar16->_MinDesiredWidth).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar16->_MinDesiredWidth).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1630);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1630);
  if (pvStack_1628 != (void *)0x0) {
    FMemory::Free(pvStack_1628);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1630);
  local_1688 = 0x42fa0000;
  local_1684 = 1;
  local_1670 = 0;
  local_1680 = (undefined1  [8])0x0;
  pvStack_1678 = (void *)0x0;
  (pFVar16->_MaxDesiredWidth).Value.Size = 125.0;
  (pFVar16->_MaxDesiredWidth).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar16->_MaxDesiredWidth).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1680);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1680);
  if (pvStack_1678 != (void *)0x0) {
    FMemory::Free(pvStack_1678);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1680);
  pFVar17 = SColorGradingWheel::FArguments::FArguments((FArguments *)local_1078);
  local_16b8 = (undefined1  [8])0x0;
  local_16b0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_16b0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_16b8,
             (FWriteAccessScope *)&local_13f8);
  local_13e0 = &local_16b0;
  puVar18 = UE::Core::Private::DelegateAllocate(0x38,&local_16b0);
  if (puVar18 == (undefined8 *)0x0) {
    pTVar33 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
  }
  else {
    uStack_16e4 = local_1700.SharedReferenceCount.ReferenceController._4_4_;
    local_16f0 = (FName)GetCurrentLinearColor;
    uStack_16e8 = 0;
    pTVar19 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->field_0x8,&local_1220);
    pTVar33 = (pTVar19->SharedReferenceCount).ReferenceController;
    pSVar3 = pTVar19->Object;
    if (pTVar33 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar33->SharedReferenceCount = (atomic<int>)((int)pTVar33->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar33->SharedReferenceCount = (atomic<int>)((int)pTVar33->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar18 = &
               ___7__TCommonDelegateInstanceState___A6A_AUFLinearColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    local_1748 = pTVar33;
    uVar20 = FDelegateHandle::GenerateNewID();
    puVar18[2] = uVar20;
    *puVar18 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSColorGradingPicker___00__A6A_AUFLinearColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar18[3] = pSVar3;
    puVar18[4] = pTVar33;
    if (pTVar33 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar33->WeakReferenceCount = (atomic<int>)((int)pTVar33->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar11 = true;
    bVar8 = true;
    bVar7 = true;
    *(FName *)(puVar18 + 5) = local_16f0;
    puVar18[6] = CONCAT44(uStack_16e4,uStack_16e8);
    pTVar33 = local_1748;
  }
  if (bVar8) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar33);
  }
  if (bVar11) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar33);
  }
  if (bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1220.SharedReferenceCount.ReferenceController);
  }
  bVar11 = false;
  bVar8 = false;
  bVar7 = false;
  if (local_13f8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_13f8.Accessor,&local_13f8);
  }
  local_1540 = true;
  local_1550 = 0;
  uStack_1548 = 0;
  local_1538 = (undefined1  [8])0x0;
  pvStack_1530 = (void *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_16b8,
             (FWriteAccessScope *)&local_1440);
  if (pvStack_1530 != (void *)0x0) {
    FMemory::Free(pvStack_1530);
  }
  pvStack_1530 = (void *)local_16b0.DelegateAllocator;
  local_1528 = local_16b0.DelegateSize;
  local_16b0.DelegateSize = 0;
  local_16b0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  if (local_1440.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1440.Accessor,&local_1440);
  }
  *(undefined8 *)&(pFVar17->_SelectedColor).Value.field0_0x0 = local_1550;
  *(undefined8 *)((longlong)&(pFVar17->_SelectedColor).Value.field0_0x0 + 8) = uStack_1548;
  (pFVar17->_SelectedColor).bIsSet = local_1540;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar17->_SelectedColor).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1538);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1538);
  if ((ForElementType<TAlignedBytes<16,16>_>)pvStack_1530 !=
      (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free(pvStack_1530);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1538);
  local_15d4 = 1;
  local_15d8 = 0x7d;
  local_15c0 = 0;
  local_15d0 = (undefined1  [8])0x0;
  pvStack_15c8 = (void *)0x0;
  (pFVar17->_DesiredWheelSize).Value = 0x7d;
  (pFVar17->_DesiredWheelSize).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar17->_DesiredWheelSize).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_15d0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_15d0);
  if (pvStack_15c8 != (void *)0x0) {
    FMemory::Free(pvStack_15c8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_15d0);
  local_15b4 = 1;
  local_15a0 = 0;
  local_15b0 = (undefined1  [8])0x0;
  pvStack_15a8 = (void *)0x0;
  (pFVar17->_ExponentDisplacement).Value = fVar35;
  (pFVar17->_ExponentDisplacement).bIsSet = true;
  local_15b8 = fVar35;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar17->_ExponentDisplacement).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_15b0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_15b0);
  if (pvStack_15a8 != (void *)0x0) {
    FMemory::Free(pvStack_15a8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_15b0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar17->_OnValueChanged,
             (FWriteAccessScope *)&local_1338);
  local_1320 = &(pFVar17->_OnValueChanged).field_0x8;
  puVar18 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_1320);
  if (puVar18 == (undefined8 *)0x0) {
    pTVar33 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
  }
  else {
    local_1758 = HandleCurrentColorValueChanged;
    uStack_1750 = (ulonglong)local_1700.SharedReferenceCount.ReferenceController._4_4_ << 0x20;
    pTVar19 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->field_0x8,&local_1230);
    pTVar33 = (pTVar19->SharedReferenceCount).ReferenceController;
    local_16f0 = (FName)pTVar19->Object;
    if (pTVar33 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar33->SharedReferenceCount = (atomic<int>)((int)pTVar33->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar33->SharedReferenceCount = (atomic<int>)((int)pTVar33->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar7 = true;
    bVar11 = true;
    bVar8 = true;
    *puVar18 = &
               ___7__TCommonDelegateInstanceState___A6AXAEBUFLinearColor___ZUFDefaultDelegateUserPolicy___N__6B_
    ;
    *(undefined1 *)(puVar18 + 1) = 0;
    local_1748 = pTVar33;
    uVar20 = FDelegateHandle::GenerateNewID();
    puVar18[2] = uVar20;
    *puVar18 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSColorGradingPicker___00__A6AXAEBUFLinearColor___ZUFDefaultDelegateUserPolicy___N__6B_
    ;
    *(FName *)(puVar18 + 3) = local_16f0;
    puVar18[4] = pTVar33;
    if (pTVar33 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar33->WeakReferenceCount = (atomic<int>)((int)pTVar33->WeakReferenceCount + 1);
      UNLOCK();
    }
    puVar18[5] = local_1758;
    puVar18[6] = uStack_1750;
    pTVar33 = local_1748;
  }
  if (bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar33);
  }
  if (bVar8) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar33);
  }
  if (bVar11) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1230.SharedReferenceCount.ReferenceController);
  }
  bVar8 = false;
  bVar7 = false;
  if (local_1338.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1338.Accessor,&local_1338);
  }
  local_1758 = HandleColorWheelMouseCaptureBegin;
  uStack_1750 = uStack_1750 & 0xffffffff00000000;
  local_1248 = HandleColorWheelMouseCaptureBegin;
  uStack_1240 = uStack_1750;
  TDelegateRegistration<void___cdecl(FLinearColor_const_&),FDefaultDelegateUserPolicy>::
  BindSP<SColorGradingPicker>
            ((TDelegateRegistration<void___cdecl(FLinearColor_const_&),FDefaultDelegateUserPolicy> *
             )&pFVar17->_OnMouseCaptureBegin,this,(pmf_e7fa2dbc *)&local_1248);
  uStack_1750 = uStack_1750 & 0xffffffff00000000;
  local_1758 = HandleColorWheelMouseCaptureEnd;
  TDelegateRegistration<void___cdecl(FLinearColor_const_&),FDefaultDelegateUserPolicy>::
  BindSP<SColorGradingPicker>
            ((TDelegateRegistration<void___cdecl(FLinearColor_const_&),FDefaultDelegateUserPolicy> *
             )&pFVar17->_OnMouseCaptureEnd,this,(pmf_e7fa2dbc *)&local_1758);
  FLLMScope::FLLMScope(&local_1738,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_16f0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1558,&local_16f0,true);
  TSlateDecl<SColorGradingWheel,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SColorGradingWheel,RequiredArgs::T0RequiredArgs>
            (&local_16a0,"SColorGradingWheel",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorGradingPicker.cpp"
             ,0x47,(T0RequiredArgs *)&local_res8);
  FMemScope::~FMemScope(&local_1558);
  FLLMScope::~FLLMScope(&local_1738);
  pSVar9 = local_16a0._Widget.Object;
  if ((local_16a0._Widget.Object == (SColorGradingWheel *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  SWidget::SWidgetConstruct((SWidget *)local_16a0._Widget.Object,(FSlateBaseNamedArgs *)pFVar17);
  SColorGradingWheel::Construct(local_16a0._Widget.Object,pFVar17);
  if ((local_16a0._Widget.Object == (SColorGradingWheel *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (((local_16a0._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar12 = (**(code **)((local_16a0._Widget.Object)->_padding_ + 0x228))
                       (local_16a0._Widget.Object);
    bVar13 = 0;
    if (cVar12 == '\0') goto LAB_142f6a584;
  }
  bVar13 = 0x20;
LAB_142f6a584:
  *(byte *)&(local_16a0._Widget.Object)->_padding_ =
       (byte)(local_16a0._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_16a0._Widget.Object)->_padding_ =
       (byte)(local_16a0._Widget.Object)->_padding_ | bVar13;
  if ((local_16a0._Widget.Object == (SColorGradingWheel *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pbVar1 = (byte *)((longlong)&(local_16a0._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((local_16a0._Widget.Object == (SColorGradingWheel *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  FVar34.ReferenceController = local_16a0._Widget.SharedReferenceCount.ReferenceController;
  local_1748 = local_16a0._Widget.SharedReferenceCount.ReferenceController;
  local_16a0._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_16a0._Widget.Object = (SColorGradingWheel *)0x0;
  if ((pSVar9 == (SColorGradingWheel *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (FVar34.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar34.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar34.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (FVar34.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar34.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1278 = (pFVar16->_Content).Widget.Object;
  pTStack_1270 = (pFVar16->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar16->_Content).Widget.Object = (SWidget *)pSVar9;
  (pFVar16->_Content).Widget.SharedReferenceCount.ReferenceController = FVar34.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1270);
  FLLMScope::FLLMScope(&local_1734,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_16e0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_16d8,&local_16e0,true);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_1268,"SBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorGradingPicker.cpp"
             ,0x3e,local_res10);
  FMemScope::~FMemScope(&local_16d8);
  FLLMScope::~FLLMScope(&local_1734);
  pTVar21 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1268,&local_1700,pFVar16);
  pFVar15 = local_16d0;
  local_16c8 = pTVar21->Object;
  local_16e0 = (FName)(pTVar21->SharedReferenceCount).ReferenceController;
  if (local_16e0 != (FName)0x0) {
    LOCK();
    *(atomic<int> *)((longlong)local_16e0 + 8) =
         (atomic<int>)((int)*(atomic<int> *)((longlong)local_16e0 + 8) + 1);
    UNLOCK();
    LOCK();
    *(atomic<int> *)((longlong)local_16e0 + 8) =
         (atomic<int>)((int)*(atomic<int> *)((longlong)local_16e0 + 8) + 1);
    UNLOCK();
  }
  local_16c0 = local_16e0;
  if ((SBox **)&local_16d0->field_0x8 != &local_16c8) {
    *(SBox **)&local_16d0->field_0x8 = local_16c8;
    local_16c8 = (SBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&local_16d0->field_0x10,(FSharedReferencer<1> *)&local_16c0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_16c0);
  local_16d8 = (FMemScope)SVerticalBox::FArguments::operator+((FArguments *)local_1740,pFVar15);
  pFVar15 = SVerticalBox::Slot(&local_bc0);
  local_16d0 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar15);
  pFVar22 = SNumericEntryBox<float>::FArguments::FArguments(&local_798);
  this_01 = FAppStyle::Get();
  pFVar23 = ::FName::FName(&local_1238,"DarkEditableTextBox");
  pFVar24 = ISlateStyle::GetWidgetStyle<FEditableTextBoxStyle>
                      (this_01,*pFVar23,(char *)0x0,(FEditableTextBoxStyle *)0x0);
  pFVar22->_EditableTextBoxStyle = pFVar24;
  (pFVar22->_Value).bIsSet = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(pFVar22->_Value).Getter,
             (FWriteAccessScope *)&local_13d8);
  local_13c0 = &(pFVar22->_Value).Getter.field_0x8;
  puVar18 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_13c0);
  if (puVar18 == (undefined8 *)0x0) {
    pTVar33 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
  }
  else {
    local_1758 = OnGetMainValue;
    uStack_1750 = (ulonglong)local_1700.SharedReferenceCount.ReferenceController._4_4_ << 0x20;
    pTVar25 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->field_0x8,&local_1298);
    pTVar33 = (pTVar25->SharedReferenceCount).ReferenceController;
    local_1740 = pTVar25->Object;
    if (pTVar33 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar33->SharedReferenceCount = (atomic<int>)((int)pTVar33->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar33->SharedReferenceCount = (atomic<int>)((int)pTVar33->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar7 = true;
    bVar8 = true;
    *puVar18 = &
               ___7__TCommonDelegateInstanceState___A6A_AU__TOptional_M__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar20 = FDelegateHandle::GenerateNewID();
    puVar18[2] = uVar20;
    *puVar18 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSColorGradingPicker___00__A6A_AU__TOptional_M__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar18[3] = local_1740;
    puVar18[4] = pTVar33;
    if (pTVar33 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar33->WeakReferenceCount = (atomic<int>)((int)pTVar33->WeakReferenceCount + 1);
      UNLOCK();
    }
    puVar18[5] = local_1758;
    puVar18[6] = uStack_1750;
  }
  if (bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar33);
  }
  if (bVar8) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1298.SharedReferenceCount.ReferenceController);
  }
  bVar11 = false;
  bVar8 = false;
  bVar7 = false;
  if (local_13d8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_13d8.Accessor,&local_13d8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar22->_OnValueCommitted,
             (FWriteAccessScope *)&local_13b8);
  local_13a0 = &(pFVar22->_OnValueCommitted).field_0x8;
  puVar18 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_13a0);
  if (puVar18 == (undefined8 *)0x0) {
    pTVar33 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
  }
  else {
    local_1758 = OnMainValueCommitted;
    uStack_1750 = (ulonglong)local_1700.SharedReferenceCount.ReferenceController._4_4_ << 0x20;
    pTVar19 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->field_0x8,&local_12a8);
    pTVar33 = (pTVar19->SharedReferenceCount).ReferenceController;
    local_1740 = pTVar19->Object;
    if (pTVar33 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar33->SharedReferenceCount = (atomic<int>)((int)pTVar33->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar33->SharedReferenceCount = (atomic<int>)((int)pTVar33->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar7 = true;
    bVar11 = true;
    bVar8 = true;
    *puVar18 = &
               ___7__TCommonDelegateInstanceState___A6AXMW4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar20 = FDelegateHandle::GenerateNewID();
    puVar18[2] = uVar20;
    *puVar18 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSColorGradingPicker___00__A6AXMW4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar18[3] = local_1740;
    puVar18[4] = pTVar33;
    if (pTVar33 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar33->WeakReferenceCount = (atomic<int>)((int)pTVar33->WeakReferenceCount + 1);
      UNLOCK();
    }
    puVar18[5] = local_1758;
    puVar18[6] = uStack_1750;
  }
  if (bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar33);
  }
  if (bVar8) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar33);
  }
  if (bVar11) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_12a8.SharedReferenceCount.ReferenceController);
  }
  bVar11 = false;
  bVar8 = false;
  bVar7 = false;
  if (local_13b8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_13b8.Accessor,&local_13b8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar22->_OnValueChanged,
             (FWriteAccessScope *)&local_1398);
  local_1380 = &(pFVar22->_OnValueChanged).field_0x8;
  puVar18 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_1380);
  if (puVar18 == (undefined8 *)0x0) {
    pTVar33 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
  }
  else {
    local_1758 = OnMainValueChanged;
    uStack_1750 = (ulonglong)local_1700.SharedReferenceCount.ReferenceController._4_4_ << 0x20;
    pTVar19 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->field_0x8,&local_12b8);
    pTVar33 = (pTVar19->SharedReferenceCount).ReferenceController;
    local_1740 = pTVar19->Object;
    if (pTVar33 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar33->SharedReferenceCount = (atomic<int>)((int)pTVar33->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar33->SharedReferenceCount = (atomic<int>)((int)pTVar33->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar7 = true;
    bVar11 = true;
    bVar8 = true;
    *puVar18 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy___N__6B_;
    *(undefined1 *)(puVar18 + 1) = 0;
    uVar20 = FDelegateHandle::GenerateNewID();
    puVar18[2] = uVar20;
    *puVar18 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSColorGradingPicker___00__A6AXM_ZUFDefaultDelegateUserPolicy___N__6B_
    ;
    puVar18[3] = local_1740;
    puVar18[4] = pTVar33;
    if (pTVar33 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar33->WeakReferenceCount = (atomic<int>)((int)pTVar33->WeakReferenceCount + 1);
      UNLOCK();
    }
    puVar18[5] = local_1758;
    puVar18[6] = uStack_1750;
  }
  if (bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar33);
  }
  if (bVar8) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar33);
  }
  if (bVar11) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_12b8.SharedReferenceCount.ReferenceController);
  }
  bVar11 = false;
  bVar8 = false;
  bVar7 = false;
  if (local_1398.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1398.Accessor,&local_1398);
  }
  pbVar26 = TAttribute<bool>::Get(&param_1->_AllowSpin);
  pFVar22->_AllowSpin = *pbVar26;
  local_1598 = (param_1->_SupportDynamicSliderMaxValue).Value;
  local_1597 = (param_1->_SupportDynamicSliderMaxValue).bIsSet;
  local_1590 = (undefined1  [8])0x0;
  pvStack_1588 = (void *)0x0;
  local_1580 = 0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)local_1590,
             &(param_1->_SupportDynamicSliderMaxValue).Getter);
  (pFVar22->_SupportDynamicSliderMaxValue).Value = local_1598;
  (pFVar22->_SupportDynamicSliderMaxValue).bIsSet = local_1597;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(pFVar22->_SupportDynamicSliderMaxValue).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1590);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1590);
  if (pvStack_1588 != (void *)0x0) {
    FMemory::Free(pvStack_1588);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1590);
  pTVar27 = TAttribute<bool>::TAttribute<bool>(&local_1180,&param_1->_SupportDynamicSliderMinValue);
  this_00 = &pTVar27->Getter;
  (pFVar22->_SupportDynamicSliderMinValue).Value = pTVar27->Value;
  (pFVar22->_SupportDynamicSliderMinValue).bIsSet = pTVar27->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(pFVar22->_SupportDynamicSliderMinValue).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar4 = *(void **)&(pTVar27->Getter).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  uStack_1750 = uStack_1750 & 0xffffffff00000000;
  local_1758 = OnDynamicSliderMaxValueChanged;
  local_12c8 = OnDynamicSliderMaxValueChanged;
  uStack_12c0 = uStack_1750;
  TDelegateRegistration<void___cdecl(float,TWeakPtr<SWidget,1>,bool,bool),FDefaultDelegateUserPolicy>
  ::BindSP<SColorGradingPicker>
            ((TDelegateRegistration<void___cdecl(float,TWeakPtr<SWidget,1>,bool,bool),FDefaultDelegateUserPolicy>
              *)&pFVar22->_OnDynamicSliderMaxValueChanged,this,(pmf_11ca8dda *)&local_12c8);
  uStack_1750 = uStack_1750 & 0xffffffff00000000;
  local_1758 = OnDynamicSliderMinValueChanged;
  local_12d8 = OnDynamicSliderMinValueChanged;
  uStack_12d0 = uStack_1750;
  TDelegateRegistration<void___cdecl(float,TWeakPtr<SWidget,1>,bool,bool),FDefaultDelegateUserPolicy>
  ::BindSP<SColorGradingPicker>
            ((TDelegateRegistration<void___cdecl(float,TWeakPtr<SWidget,1>,bool,bool),FDefaultDelegateUserPolicy>
              *)&pFVar22->_OnDynamicSliderMinValueChanged,this,(pmf_11ca8dda *)&local_12d8);
  local_1500.Value.bIsSet = (param_1->_ValueMin).bIsSet;
  if (local_1500.Value.bIsSet != false) {
    local_1500.Value.TypedValue = (param_1->_ValueMin).TypedValue;
  }
  local_1500.bIsSet = true;
  local_1500.Getter._16_8_ = 0;
  local_1500.Getter._0_8_ = 0;
  local_1500.Getter._8_8_ = 0;
  pFVar22 = SNumericEntryBox<float>::FArguments::MinValue(pFVar22,&local_1500);
  local_1488.Value.bIsSet = (param_1->_ValueMax).bIsSet;
  if (local_1488.Value.bIsSet != false) {
    local_1488.Value.TypedValue = (param_1->_ValueMax).TypedValue;
  }
  local_1488.bIsSet = true;
  local_1488.Getter._16_8_ = 0;
  local_1488.Getter._0_8_ = 0;
  local_1488.Getter._8_8_ = 0;
  pFVar22 = SNumericEntryBox<float>::FArguments::MaxValue(pFVar22,&local_1488);
  local_14d8.Value.TypedValue = this->SliderValueMin;
  local_14d8.Value.bIsSet = true;
  local_14d8.bIsSet = true;
  local_14d8.Getter._0_8_ = 0;
  local_14d8.Getter._8_8_ = 0;
  local_14d8.Getter._16_8_ = 0;
  pFVar22 = SNumericEntryBox<float>::FArguments::MinSliderValue(pFVar22,&local_14d8);
  local_14b0.Value.TypedValue = this->SliderValueMax;
  local_14b0.Value.bIsSet = true;
  local_14b0.bIsSet = true;
  local_14b0.Getter._0_8_ = 0;
  local_14b0.Getter._8_8_ = 0;
  local_14b0.Getter._16_8_ = 0;
  pFVar22 = SNumericEntryBox<float>::FArguments::MaxSliderValue(pFVar22,&local_14b0);
  local_1520.Value = this->MainDelta;
  local_1520.bIsSet = true;
  local_1520.Getter._0_8_ = 0;
  local_1520.Getter._8_8_ = 0;
  local_1520.Getter._16_8_ = 0;
  pFVar22 = SNumericEntryBox<float>::FArguments::Delta(pFVar22,&local_1520);
  local_1578 = this->MainShiftMultiplier;
  local_1574 = 1;
  local_1560 = 0;
  local_1570 = (undefined1  [8])0x0;
  pvStack_1568 = (void *)0x0;
  (pFVar22->_ShiftMultiplier).Value = local_1578;
  (pFVar22->_ShiftMultiplier).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar22->_ShiftMultiplier).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1570);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1570);
  if (pvStack_1568 != (void *)0x0) {
    FMemory::Free(pvStack_1568);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1570);
  local_15f8 = this->MainCtrlMultiplier;
  local_15f4 = 1;
  local_15e0 = 0;
  local_15f0 = (undefined1  [8])0x0;
  pvStack_15e8 = (void *)0x0;
  (pFVar22->_CtrlMultiplier).Value = local_15f8;
  (pFVar22->_CtrlMultiplier).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar22->_CtrlMultiplier).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_15f0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_15f0);
  if (pvStack_15e8 != (void *)0x0) {
    FMemory::Free(pvStack_15e8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_15f0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &pFVar22->_OnBeginSliderMovement,(FWriteAccessScope *)&local_1378);
  local_1360 = &(pFVar22->_OnBeginSliderMovement).field_0x8;
  puVar18 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_1360);
  if (puVar18 == (undefined8 *)0x0) {
    pTVar33 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
  }
  else {
    local_1758 = OnBeginSliderMovement;
    uStack_1750 = (ulonglong)local_1700.SharedReferenceCount.ReferenceController._4_4_ << 0x20;
    pTVar19 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->field_0x8,&local_12e8);
    pTVar33 = (pTVar19->SharedReferenceCount).ReferenceController;
    pSVar3 = pTVar19->Object;
    if (pTVar33 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar33->SharedReferenceCount = (atomic<int>)((int)pTVar33->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar33->SharedReferenceCount = (atomic<int>)((int)pTVar33->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar7 = true;
    bVar11 = true;
    bVar8 = true;
    *puVar18 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar20 = FDelegateHandle::GenerateNewID();
    puVar18[2] = uVar20;
    *puVar18 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSColorGradingPicker___00__A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar18[3] = pSVar3;
    puVar18[4] = pTVar33;
    if (pTVar33 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar33->WeakReferenceCount = (atomic<int>)((int)pTVar33->WeakReferenceCount + 1);
      UNLOCK();
    }
    puVar18[5] = local_1758;
    puVar18[6] = uStack_1750;
  }
  if (bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar33);
  }
  if (bVar8) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar33);
  }
  if (bVar11) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_12e8.SharedReferenceCount.ReferenceController);
  }
  bVar11 = false;
  bVar8 = false;
  bVar7 = false;
  if (local_1378.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1378.Accessor,&local_1378);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &pFVar22->_OnEndSliderMovement,(FWriteAccessScope *)&local_1358);
  local_1340 = &(pFVar22->_OnEndSliderMovement).field_0x8;
  puVar18 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_1340);
  if (puVar18 == (undefined8 *)0x0) {
    pTVar33 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
  }
  else {
    local_1758 = OnEndSliderMovement;
    uStack_1750 = (ulonglong)local_1700.SharedReferenceCount.ReferenceController._4_4_ << 0x20;
    pTVar19 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->field_0x8,&local_12f8);
    pTVar33 = (pTVar19->SharedReferenceCount).ReferenceController;
    pSVar3 = pTVar19->Object;
    if (pTVar33 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar33->SharedReferenceCount = (atomic<int>)((int)pTVar33->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar33->SharedReferenceCount = (atomic<int>)((int)pTVar33->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar7 = true;
    bVar11 = true;
    bVar8 = true;
    *puVar18 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar20 = FDelegateHandle::GenerateNewID();
    puVar18[2] = uVar20;
    *puVar18 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSColorGradingPicker___00__A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar18[3] = pSVar3;
    puVar18[4] = pTVar33;
    if (pTVar33 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar33->WeakReferenceCount = (atomic<int>)((int)pTVar33->WeakReferenceCount + 1);
      UNLOCK();
    }
    puVar18[5] = local_1758;
    puVar18[6] = uStack_1750;
  }
  if (bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar33);
  }
  if (bVar8) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar33);
  }
  if (bVar11) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_12f8.SharedReferenceCount.ReferenceController);
  }
  bVar11 = false;
  bVar8 = false;
  bVar7 = false;
  if (local_1358.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1358.Accessor,&local_1358);
  }
  pFVar28 = FText::AsLocalizable_Advanced_LocText
                      (&local_1288,L"PropertyEditor",L"MultipleValues",L"Multiple Values");
  FText::operator=(&pFVar22->_UndeterminedString,pFVar28);
  pIVar5 = (pFVar28->TextData).Reference;
  if (pIVar5 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar5 + 0x10))();
  }
  *(undefined1 *)((longlong)&pFVar22->_padding_ + 1) = 1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar22->_padding_,
             &local_1200.WriteScope);
  local_1200.Allocation = (FDelegateAllocation *)&pFVar22->_padding_;
  puVar18 = UE::Core::Private::DelegateAllocate(0x38,local_1200.Allocation);
  if (puVar18 == (undefined8 *)0x0) {
    pTVar33 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
    FVar34.ReferenceController = local_1668.SharedReferenceCount.ReferenceController;
  }
  else {
    local_1758 = IsEntryBoxEnabled;
    uStack_1750 = (ulonglong)(uint)local_1288._12_4_ << 0x20;
    pTVar25 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->field_0x8,&local_1318);
    pTVar33 = (pTVar25->SharedReferenceCount).ReferenceController;
    local_1668.Object = (SColorGradingPicker *)pTVar25->Object;
    if (pTVar33 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar33->SharedReferenceCount = (atomic<int>)((int)pTVar33->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar33->SharedReferenceCount = (atomic<int>)((int)pTVar33->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar18 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    local_1668.SharedReferenceCount.ReferenceController = pTVar33;
    uVar20 = FDelegateHandle::GenerateNewID();
    puVar18[2] = uVar20;
    *puVar18 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSColorGradingPicker___00__A6A_NXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    TWeakPtr<SColorGradingPicker_const_,1>::
    TWeakPtr<SColorGradingPicker_const_,1><SColorGradingPicker_const_>
              ((TWeakPtr<SColorGradingPicker_const_,1> *)(puVar18 + 3),&local_1668);
    bVar11 = true;
    bVar8 = true;
    bVar7 = true;
    puVar18[5] = local_1758;
    puVar18[6] = uStack_1750;
    FVar34.ReferenceController = pTVar33;
  }
  if (bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar34.ReferenceController);
  }
  if (bVar8) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar33);
  }
  if (bVar11) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1318.SharedReferenceCount.ReferenceController);
  }
  TWriteLockedDelegateAllocation<FNotThreadSafeDelegateMode>::
  ~TWriteLockedDelegateAllocation<FNotThreadSafeDelegateMode>(&local_1200);
  pTVar29 = MakeTDecl<SNumericEntryBox<float>,RequiredArgs::T0RequiredArgs>
                      (&local_1198,"SNumericEntryBox<float>",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorGradingPicker.cpp"
                       ,0x54,local_res18);
  pTVar29 = TSlateDecl<SNumericEntryBox<float>,RequiredArgs::T0RequiredArgs>::
            Expose<SNumericEntryBox<float>_>(pTVar29,&this->NumericEntryBoxWidget);
  pTVar30 = TSlateDecl<SNumericEntryBox<float>,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar29,&local_1210,pFVar22);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SNumericEntryBox<float>_>(&local_1460,pTVar30);
  pFVar15 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)local_16d0,&local_1460);
  pFVar31 = SVerticalBox::FArguments::operator+((FArguments *)local_16d8,pFVar15);
  this_02 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                      (&local_11b0,"SVerticalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorGradingPicker.cpp"
                       ,0x3a,local_res20);
  pTVar32 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_02,&local_1308,pFVar31);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SVerticalBox>(&local_1450,pTVar32);
  TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::operator[]
            ((TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *)
             &this->field_0x218,&local_1450);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1450.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1308.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_11b0._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1460.SharedReferenceCount.ReferenceController);
  TSharedRef<SNumericEntryBox<float>,1>::~TSharedRef<SNumericEntryBox<float>,1>(&local_1210);
  TSlateDecl<SNumericEntryBox<float>,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SNumericEntryBox<float>,RequiredArgs::T0RequiredArgs>(&local_1198);
  SNumericEntryBox<float>::FArguments::~FArguments(&local_798);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_bc0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_16e0);
  TSharedRef<SBox,1>::~TSharedRef<SBox,1>(&local_1700);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1268._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1748);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1748);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_16a0._Widget.SharedReferenceCount.ReferenceController);
  TDelegate<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>::
  ~TDelegate<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy> *)local_16b8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_de0);
  if ((void *)local_de0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_de0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_de0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_df8);
  if ((void *)local_df8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_df8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_df8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_e10);
  if ((void *)local_e10._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_e10._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_e10);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_e28);
  if ((void *)local_e28._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_e28._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_e28);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_e48);
  if ((void *)local_e48._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_e48._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_e48);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_e68);
  if ((void *)local_e68._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_e68._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_e68);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_1078);
  SBox::FArguments::~FArguments(&local_ad8);
  TResizingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_1108);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1130);
  if ((void *)local_1130._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1130._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1130);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1150);
  if (local_1160[0] != (undefined8 *)0x0) {
    (**(code **)*local_1160[0])(local_1160[0],1);
  }
  DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_dc8._Slots.AllocatorInstance.Data,local_dc8._Slots.ArrayNum);
  if ((FSlotArguments *)local_dc8._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_dc8._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_dc8);
  return;
}

// GetCurrentLinearColor @ 142fd2040

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FLinearColor * __thiscall
SColorGradingPicker::GetCurrentLinearColor
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
      goto LAB_142fd21a3;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_48);
LAB_142fd21a3:
  FLinearColor::LinearRGBToHSV((FLinearColor *)local_58,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// HandleColorWheelMouseCaptureBegin @ 142fdc190

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
SColorGradingPicker::HandleColorWheelMouseCaptureBegin
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

// HandleColorWheelMouseCaptureEnd @ 142fdc1e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
SColorGradingPicker::HandleColorWheelMouseCaptureEnd
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

// HandleCurrentColorValueChanged @ 142fdc420

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
SColorGradingPicker::HandleCurrentColorValueChanged
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

// IsEntryBoxEnabled @ 142fe2bc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall SColorGradingPicker::IsEntryBoxEnabled(SColorGradingPicker *this)

{
  TOptional<float> TVar1;
  
  TVar1 = OnGetMainValue(this);
  return *(char *)((longlong)TVar1 + 4) != '\0';
}

// OnBeginSliderMovement @ 142fee0f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall SColorGradingPicker::OnBeginSliderMovement(SColorGradingPicker *this)

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

// OnDynamicSliderMaxValueChanged @ 142fef740

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
SColorGradingPicker::OnDynamicSliderMaxValueChanged
          (SColorGradingPicker *this,float param_1,TWeakPtr<SWidget,1> *param_2,bool param_3,
          bool param_4)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  SNumericEntryBox<float> *pSVar3;
  SSpinBox<float> *pSVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  int iVar7;
  bool bVar8;
  int iVar9;
  SSpinBox<float> *pSVar10;
  SSpinBox<float> *pSVar11;
  float fVar12;
  TSharedPtr<SSpinBox<float>,1> local_88;
  TWeakPtr<SWidget,1> local_78;
  FDestructionSentinel local_68;
  undefined1 local_50 [16];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_40;
  ForAnyElementType FStack_38;
  ulonglong local_30;
  
  if (((this->NumericEntryBoxWidget).Object == (SNumericEntryBox<float> *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pSVar3 = (this->NumericEntryBoxWidget).Object;
  local_88.SharedReferenceCount.ReferenceController =
       (pSVar3->SpinBox).SharedReferenceCount.ReferenceController;
  local_88.Object = (pSVar3->SpinBox).Object;
  if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.SharedReferenceCount.ReferenceController);
  if (local_88.Object != (SSpinBox<float> *)0x0) {
    pSVar4 = (SSpinBox<float> *)(param_2->WeakReferenceCount).ReferenceController;
    pSVar10 = pSVar4;
    pSVar11 = (SSpinBox<float> *)0x0;
    if (pSVar4 != (SSpinBox<float> *)0x0) {
      iVar7 = (int)pSVar4->_padding_;
      do {
        pSVar10 = (SSpinBox<float> *)0x0;
        pSVar11 = (SSpinBox<float> *)0x0;
        if (iVar7 == 0) goto LAB_142fef825;
        LOCK();
        iVar9 = (int)pSVar4->_padding_;
        bVar8 = iVar7 == iVar9;
        if (bVar8) {
          *(int *)&pSVar4->_padding_ = iVar7 + 1;
          iVar9 = iVar7;
        }
        UNLOCK();
        iVar7 = iVar9;
      } while (!bVar8);
      pSVar10 = pSVar4;
      pSVar11 = (SSpinBox<float> *)param_2->Object;
    }
LAB_142fef825:
    bVar8 = local_88.Object != pSVar11;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar10);
    if (bVar8) {
      if ((local_88.Object == (SSpinBox<float> *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      fVar12 = SSpinBox<float>::GetMaxSliderValue(local_88.Object);
      if ((fVar12 < param_1) || (!param_4)) {
        if ((local_88.Object == (SSpinBox<float> *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        local_30 = 0;
        local_50[4] = true;
        local_50[8] = true;
        local_40.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
        FStack_38.Data = (FScriptContainerElement *)0x0;
        local_50._0_4_ = param_1;
        SSpinBox<float>::SetMaxSliderValue
                  (local_88.Object,(TAttribute<TOptional<float>_> *)local_50);
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
        this->SliderValueMax = param_1;
      }
    }
  }
  if (param_3) {
    pTVar5 = (param_2->WeakReferenceCount).ReferenceController;
    local_78.Object = param_2->Object;
    local_78.WeakReferenceCount.ReferenceController = pTVar5;
    if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
      Broadcast<IBaseDelegateInstance<void___cdecl(float,TWeakPtr<SWidget,1>,bool,bool),FDefaultDelegateUserPolicy>,float,TWeakPtr<SWidget,1>,bool,bool>
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &this->OnNumericEntryBoxDynamicSliderMaxValueChanged,param_1,&local_78,false,
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
                 &this->OnNumericEntryBoxDynamicSliderMaxValueChanged,param_1,&local_78,false,
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
  TSharedPtr<SSpinBox<float>,1>::~TSharedPtr<SSpinBox<float>,1>(&local_88);
  pTVar5 = (param_2->WeakReferenceCount).ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar5->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
    }
  }
  return;
}

// OnDynamicSliderMinValueChanged @ 142fefa20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
SColorGradingPicker::OnDynamicSliderMinValueChanged
          (SColorGradingPicker *this,float param_1,TWeakPtr<SWidget,1> *param_2,bool param_3,
          bool param_4)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  SNumericEntryBox<float> *pSVar3;
  SSpinBox<float> *pSVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  int iVar7;
  bool bVar8;
  int iVar9;
  SSpinBox<float> *pSVar10;
  SSpinBox<float> *pSVar11;
  float fVar12;
  TSharedPtr<SSpinBox<float>,1> local_88;
  TWeakPtr<SWidget,1> local_78;
  FDestructionSentinel local_68;
  undefined1 local_50 [16];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_40;
  ForAnyElementType FStack_38;
  ulonglong local_30;
  
  if (((this->NumericEntryBoxWidget).Object == (SNumericEntryBox<float> *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pSVar3 = (this->NumericEntryBoxWidget).Object;
  local_88.SharedReferenceCount.ReferenceController =
       (pSVar3->SpinBox).SharedReferenceCount.ReferenceController;
  local_88.Object = (pSVar3->SpinBox).Object;
  if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.SharedReferenceCount.ReferenceController);
  if (local_88.Object != (SSpinBox<float> *)0x0) {
    pSVar4 = (SSpinBox<float> *)(param_2->WeakReferenceCount).ReferenceController;
    pSVar10 = pSVar4;
    pSVar11 = (SSpinBox<float> *)0x0;
    if (pSVar4 != (SSpinBox<float> *)0x0) {
      iVar7 = (int)pSVar4->_padding_;
      do {
        pSVar10 = (SSpinBox<float> *)0x0;
        pSVar11 = (SSpinBox<float> *)0x0;
        if (iVar7 == 0) goto LAB_142fefb05;
        LOCK();
        iVar9 = (int)pSVar4->_padding_;
        bVar8 = iVar7 == iVar9;
        if (bVar8) {
          *(int *)&pSVar4->_padding_ = iVar7 + 1;
          iVar9 = iVar7;
        }
        UNLOCK();
        iVar7 = iVar9;
      } while (!bVar8);
      pSVar10 = pSVar4;
      pSVar11 = (SSpinBox<float> *)param_2->Object;
    }
LAB_142fefb05:
    bVar8 = local_88.Object != pSVar11;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar10);
    if (bVar8) {
      if ((local_88.Object == (SSpinBox<float> *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      fVar12 = SSpinBox<float>::GetMinSliderValue(local_88.Object);
      if ((param_1 < fVar12) || (!param_4)) {
        if ((local_88.Object == (SSpinBox<float> *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        local_30 = 0;
        local_50[4] = true;
        local_50[8] = true;
        local_40.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
        FStack_38.Data = (FScriptContainerElement *)0x0;
        local_50._0_4_ = param_1;
        SSpinBox<float>::SetMinSliderValue
                  (local_88.Object,(TAttribute<TOptional<float>_> *)local_50);
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
        this->SliderValueMin = param_1;
      }
    }
  }
  if (param_3) {
    pTVar5 = (param_2->WeakReferenceCount).ReferenceController;
    local_78.Object = param_2->Object;
    local_78.WeakReferenceCount.ReferenceController = pTVar5;
    if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
      Broadcast<IBaseDelegateInstance<void___cdecl(float,TWeakPtr<SWidget,1>,bool,bool),FDefaultDelegateUserPolicy>,float,TWeakPtr<SWidget,1>,bool,bool>
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &this->OnNumericEntryBoxDynamicSliderMinValueChanged,param_1,&local_78,false,
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
                 &this->OnNumericEntryBoxDynamicSliderMinValueChanged,param_1,&local_78,false,
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
  TSharedPtr<SSpinBox<float>,1>::~TSharedPtr<SSpinBox<float>,1>(&local_88);
  pTVar5 = (param_2->WeakReferenceCount).ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar5->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
    }
  }
  return;
}

// OnEndSliderMovement @ 142fefd00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall SColorGradingPicker::OnEndSliderMovement(SColorGradingPicker *this,float param_1)

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

// OnGetMainValue @ 142ff1170

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TOptional<float> __thiscall SColorGradingPicker::OnGetMainValue(SColorGradingPicker *this)

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
      goto LAB_142ff123c;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_48);
LAB_142ff123c:
  *(undefined1 *)((longlong)in_RDX + 4) = 0;
  return in_RDX;
}

// OnMainValueChanged @ 142ff4230

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
SColorGradingPicker::OnMainValueChanged(SColorGradingPicker *this,float param_1,bool param_2)

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

// OnMainValueCommitted @ 142ff4530

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
SColorGradingPicker::OnMainValueCommitted(SColorGradingPicker *this,float param_1,Type param_2)

{
  OnMainValueChanged(this,param_1,true);
  return;
}

// TransformColorGradingRangeToLinearColorRange @ 143013b80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
SColorGradingPicker::TransformColorGradingRangeToLinearColorRange
          (SColorGradingPicker *this,float *param_1)

{
  float fVar1;
  
  fVar1 = *param_1 - this->SliderValueMin;
  *param_1 = fVar1;
  *param_1 = fVar1 / (this->SliderValueMax - this->SliderValueMin);
  return;
}

// TransformColorGradingRangeToLinearColorRange @ 143013bb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
SColorGradingPicker::TransformColorGradingRangeToLinearColorRange
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

// TransformLinearColorRangeToColorGradingRange @ 143013c20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
SColorGradingPicker::TransformLinearColorRangeToColorGradingRange
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

