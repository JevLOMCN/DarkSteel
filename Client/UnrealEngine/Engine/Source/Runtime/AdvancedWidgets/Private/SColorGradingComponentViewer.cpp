// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AdvancedWidgets
// Functions: 7

// ~SColorGradingComponentViewer @ 14d83b120

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
UE::ColorGrading::SColorGradingComponentViewer::~SColorGradingComponentViewer
          (SColorGradingComponentViewer *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7SColorGradingComponentViewer_ColorGrading_UE__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Component).Getter);
  pvVar1 = *(void **)&(this->Component).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->Component).Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->GradientSpinBox).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->NumericEntryBox).SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->OptionalValue).Getter);
  pvVar1 = *(void **)&(this->OptionalValue).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->OptionalValue).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->MaxSliderValue).Getter);
  pvVar1 = *(void **)&(this->MaxSliderValue).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->MaxSliderValue).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->MinSliderValue).Getter);
  pvVar1 = *(void **)&(this->MinSliderValue).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->MinSliderValue).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->MaxValue).Getter);
  pvVar1 = *(void **)&(this->MaxValue).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->MaxValue).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->MinValue).Getter);
  pvVar1 = *(void **)&(this->MinValue).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->MinValue).Getter);
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  return;
}

// Construct @ 14d846fd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
UE::ColorGrading::SColorGradingComponentViewer::Construct
          (SColorGradingComponentViewer *this,FArguments *param_1)

{
  undefined1 *puVar1;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *pTVar2;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *pTVar3;
  bool bVar4;
  TReferenceControllerBase<1> *pTVar5;
  STextBlock *pSVar6;
  SWidget *pSVar7;
  void *pvVar8;
  INumericTypeInterface<float> *pIVar9;
  SNumericEntryBox<float> *pSVar10;
  code *pcVar11;
  bool bVar12;
  bool bVar13;
  float fVar14;
  FSharedReferencer<1> FVar15;
  FSlateStyleSet *pFVar16;
  bool bVar17;
  bool bVar18;
  FArguments *pFVar19;
  FArguments *pFVar20;
  TSharedRef<SHorizontalBox,1> *pTVar21;
  TSharedRef<SBox,1> *pTVar22;
  FSlot *this_00;
  FSlotArguments *pFVar23;
  FArguments *pFVar24;
  TSharedRef<STextBlock,1> *pTVar25;
  FScopedWidgetSlotArguments<SHorizontalBox::FSlot> *pFVar26;
  FArguments *pFVar27;
  undefined8 *puVar28;
  TSharedRef<SWidget_const_,1> *pTVar29;
  ulong64 uVar30;
  TAttribute<float> *pTVar31;
  TAttribute<bool> *pTVar32;
  TAttribute<TOptional<float>_> *pTVar33;
  TSharedRef<UE::ColorGrading::SColorGradingComponentSpinBox,1> *pTVar34;
  FArguments *pFVar35;
  FName *pFVar36;
  FSpinBoxStyle *pFVar37;
  FSlateFontInfo *pFVar38;
  FEditableTextBoxStyle *pFVar39;
  FText *pFVar40;
  TAttribute<TOptional<int>_> *pTVar41;
  TSharedRef<SNumericEntryBox<float>,1> *pTVar42;
  longlong *plVar43;
  SHorizontalBox *pSVar44;
  TAttribute<FMargin> *pTVar45;
  SBox *this_01;
  TAttribute<FOptionalSize> *pTVar46;
  FSlotArguments *pFVar47;
  TReferenceControllerBase<1> *pTVar48;
  uint uStackX_c;
  T0RequiredArgs local_res10 [8];
  T0RequiredArgs local_res18 [8];
  SBox *local_res20;
  TSharedPtr<SBox,1> local_2bd8;
  T0RequiredArgs local_2bc8;
  T0RequiredArgs local_2bc7;
  T0RequiredArgs local_2bc6;
  T0RequiredArgs local_2bc5 [5];
  FArguments *local_2bc0;
  FLLMScope local_2bb8;
  FLLMScope local_2bb4;
  FLLMScope local_2bb0;
  FLLMScope local_2bac;
  FLLMScope local_2ba8;
  FLLMScope local_2ba4;
  FLLMScope local_2ba0 [2];
  TSharedPtr<SHorizontalBox,1> local_2b98;
  TSharedPtr<SWidget,1> local_2b88;
  undefined4 local_2b78;
  undefined1 local_2b74;
  undefined1 local_2b70 [8];
  ForAnyElementType FStack_2b68;
  ulonglong local_2b60;
  undefined4 local_2b58;
  undefined1 local_2b54;
  undefined1 local_2b50 [8];
  ForAnyElementType FStack_2b48;
  ulonglong local_2b40;
  float local_2b38;
  bool local_2b34;
  undefined1 local_2b30 [8];
  ForAnyElementType FStack_2b28;
  int local_2b20;
  bool local_2b18;
  bool local_2b17;
  undefined1 local_2b10 [8];
  ForAnyElementType FStack_2b08;
  int local_2b00;
  float local_2af8;
  bool local_2af4;
  undefined1 local_2af0 [8];
  ForAnyElementType FStack_2ae8;
  int local_2ae0;
  float local_2ad8;
  bool local_2ad4;
  undefined1 local_2ad0 [8];
  ForAnyElementType FStack_2ac8;
  int local_2ac0;
  FSlateStyleSet *local_2ab8;
  float local_2ab0;
  char local_2aac;
  bool local_2aa8;
  undefined1 local_2aa0 [8];
  ForAnyElementType FStack_2a98;
  int local_2a90;
  SBox *local_2a88;
  FSharedReferencer<1> local_2a80;
  float local_2a78;
  int local_2a74;
  FMargin local_2a70;
  SWidget *local_2a60;
  TReferenceControllerBase<1> *pTStack_2a58;
  longlong local_2a50;
  TReferenceControllerBase<1> *pTStack_2a48;
  SWidget *local_2a40;
  TReferenceControllerBase<1> *pTStack_2a38;
  SWidget *local_2a30;
  TReferenceControllerBase<1> *pTStack_2a28;
  EColorGradingComponent local_2a20;
  bool local_2a1c;
  undefined1 local_2a18 [8];
  void *pvStack_2a10;
  undefined4 local_2a08;
  EColorGradingModes local_2a00;
  bool local_29fc;
  undefined1 local_29f8 [8];
  void *pvStack_29f0;
  undefined4 local_29e8;
  FName local_29d8;
  undefined4 uStack_29d0;
  uint uStack_29cc;
  FName local_29c8;
  undefined4 uStack_29c0;
  uint uStack_29bc;
  FMemScope local_29b8;
  FMemScope local_29b0;
  FMemScope local_29a8;
  undefined4 local_29a0 [2];
  undefined4 local_2998 [2];
  undefined4 local_2990 [2];
  undefined4 local_2988 [2];
  undefined4 local_2980 [2];
  undefined4 local_2978 [2];
  FName local_2970;
  FMemScope local_2968;
  FName local_2960;
  FMemScope local_2958;
  FSlot *local_2950;
  FName local_2948;
  FMemScope local_2940;
  FName local_2938;
  FMemScope local_2930;
  FName local_2928;
  TAttribute<float> local_2920;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_2900;
  TSlateDecl<UE::ColorGrading::SColorGradingComponentSpinBox,RequiredArgs::T0RequiredArgs>
  local_28e8;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_28d0;
  TSlateDecl<SNumericEntryBox<float>,RequiredArgs::T0RequiredArgs> local_28b8;
  TSharedPtr<INumericTypeInterface<float>,1> local_28a0;
  TSharedRef<SWidget,1> local_2890;
  TSharedRef<SWidget,1> local_2880;
  TSharedRef<SBox,1> local_2870;
  TAttribute<float> local_2860;
  TAttribute<float> local_2840;
  TAttribute<bool> local_2820;
  FDestructionSentinel local_2800;
  FDestructionSentinel local_27e8;
  FDestructionSentinel local_27d0;
  FDestructionSentinel local_27b8;
  FDestructionSentinel local_27a0;
  FDestructionSentinel local_2788;
  FDestructionSentinel local_2770;
  FDestructionSentinel local_2758;
  undefined1 *local_2740;
  TAttribute<FMargin> local_2738;
  TSharedRef<SWidget_const_,1> local_2708;
  code *local_26f8;
  TReferenceControllerBase<1> *pTStack_26f0;
  SColorGradingComponentSpinBox *local_26e8;
  TReferenceControllerBase<1> *pTStack_26e0;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_26d8;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_26c0;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_26a8;
  TSharedRef<UE::ColorGrading::SColorGradingComponentSpinBox,1> local_2690;
  INumericTypeInterface<float> *local_2680;
  TReferenceControllerBase<1> *pTStack_2678;
  code *local_2668;
  longlong lStack_2660;
  SNumericEntryBox<float> *local_2658;
  TReferenceControllerBase<1> *pTStack_2650;
  TSharedRef<SBox,1> local_2648;
  TSharedRef<SNumericEntryBox<float>,1> local_2638;
  FName local_2628;
  FName local_2620;
  FName local_2618 [2];
  code *local_2608;
  TReferenceControllerBase<1> *pTStack_2600;
  TSharedRef<SBox,1> local_25f8;
  TSharedRef<SHorizontalBox,1> local_25e8;
  code *local_25d8;
  longlong lStack_25d0;
  TSharedRef<SBox,1> local_25c8;
  TSharedRef<STextBlock,1> local_25b8;
  FText local_25a8;
  TAttribute<FSlateFontInfo> local_2598;
  TAttribute<float> local_2518;
  TAttribute<bool> local_24f8;
  TAttribute<bool> local_24d8;
  TAttribute<float> local_24b8;
  TAttribute<float> local_2498;
  TAttribute<float> local_2478;
  TAttribute<float> local_2458;
  TAttribute<FOptionalSize> local_2438;
  TAttribute<float> local_2418;
  TAttribute<TOptional<float>_> local_23f8;
  TAttribute<TOptional<float>_> local_23d0;
  TAttribute<TOptional<float>_> local_23a8;
  TAttribute<TOptional<float>_> local_2380;
  TAttribute<TOptional<float>_> local_2358;
  TAttribute<TOptional<float>_> local_2330;
  TAttribute<TOptional<int>_> local_2308;
  TAttribute<TOptional<int>_> local_22e0;
  TAttribute<TOptional<float>_> local_22b8;
  TAttribute<TOptional<float>_> local_2290;
  undefined1 local_2268 [240];
  TPanelChildren<SBoxPanel::FSlot> *local_2178;
  int local_2170;
  undefined1 local_2168 [56];
  TReferenceControllerBase<1> *local_2130;
  TAttribute<FMargin> local_2108;
  FArguments local_20d8;
  FScopedWidgetSlotArguments<SHorizontalBox::FSlot> local_1ed0;
  FScopedWidgetSlotArguments<SHorizontalBox::FSlot> local_1dd0;
  FScopedWidgetSlotArguments<SHorizontalBox::FSlot> local_1cd0;
  FArguments local_1bd0;
  FArguments local_1890;
  FArguments local_1550;
  FArguments local_1210;
  FArguments local_d00;
  FArguments local_7a8;
  undefined8 uStack_48;
  
  uStack_48 = 0x14d846fef;
  bVar13 = false;
  bVar12 = false;
  bVar18 = false;
  if (&param_1->_Value != &this->OptionalValue) {
    if ((param_1->_Value).Value.bIsSet == false) {
      if ((this->OptionalValue).Value.bIsSet != false) {
        (this->OptionalValue).Value.bIsSet = false;
      }
    }
    else {
      (this->OptionalValue).Value.TypedValue = (param_1->_Value).Value.TypedValue;
      (this->OptionalValue).Value.bIsSet = true;
    }
  }
  (this->OptionalValue).bIsSet = (param_1->_Value).bIsSet;
  TDelegate<TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&(this->OptionalValue).Getter,&(param_1->_Value).Getter);
  (this->Component).Value = (param_1->_Component).Value;
  (this->Component).bIsSet = (param_1->_Component).bIsSet;
  TDelegate<enum_UE::ColorGrading::EColorGradingComponent___cdecl(void),FDefaultDelegateUserPolicy>
  ::CopyFrom<FDefaultDelegateUserPolicy>(&(this->Component).Getter,&(param_1->_Component).Getter);
  if (&param_1->_MinValue != &this->MinValue) {
    if ((param_1->_MinValue).Value.bIsSet == false) {
      if ((this->MinValue).Value.bIsSet != false) {
        (this->MinValue).Value.bIsSet = false;
      }
    }
    else {
      (this->MinValue).Value.TypedValue = (param_1->_MinValue).Value.TypedValue;
      (this->MinValue).Value.bIsSet = true;
    }
  }
  (this->MinValue).bIsSet = (param_1->_MinValue).bIsSet;
  TDelegate<TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&(this->MinValue).Getter,&(param_1->_MinValue).Getter);
  if (&param_1->_MaxValue != &this->MaxValue) {
    if ((param_1->_MaxValue).Value.bIsSet == false) {
      if ((this->MaxValue).Value.bIsSet != false) {
        (this->MaxValue).Value.bIsSet = false;
      }
    }
    else {
      (this->MaxValue).Value.TypedValue = (param_1->_MaxValue).Value.TypedValue;
      (this->MaxValue).Value.bIsSet = true;
    }
  }
  (this->MaxValue).bIsSet = (param_1->_MaxValue).bIsSet;
  TDelegate<TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&(this->MaxValue).Getter,&(param_1->_MaxValue).Getter);
  if (&param_1->_MinSliderValue != &this->MinSliderValue) {
    if ((param_1->_MinSliderValue).Value.bIsSet == false) {
      if ((this->MinSliderValue).Value.bIsSet != false) {
        (this->MinSliderValue).Value.bIsSet = false;
      }
    }
    else {
      (this->MinSliderValue).Value.TypedValue = (param_1->_MinSliderValue).Value.TypedValue;
      (this->MinSliderValue).Value.bIsSet = true;
    }
  }
  (this->MinSliderValue).bIsSet = (param_1->_MinSliderValue).bIsSet;
  TDelegate<TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->MinSliderValue).Getter,&(param_1->_MinSliderValue).Getter);
  if (&param_1->_MaxSliderValue != &this->MaxSliderValue) {
    if ((param_1->_MaxSliderValue).Value.bIsSet == false) {
      if ((this->MaxSliderValue).Value.bIsSet != false) {
        (this->MaxSliderValue).Value.bIsSet = false;
      }
    }
    else {
      (this->MaxSliderValue).Value.TypedValue = (param_1->_MaxSliderValue).Value.TypedValue;
      (this->MaxSliderValue).Value.bIsSet = true;
    }
  }
  (this->MaxSliderValue).bIsSet = (param_1->_MaxSliderValue).bIsSet;
  TDelegate<TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->MaxSliderValue).Getter,&(param_1->_MaxSliderValue).Getter);
  bVar4 = param_1->_UseCompactDisplay;
  local_2ab8 = AdvancedWidgets::FAdvancedWidgetsStyle::Instance.Ptr;
  local_2b98.Object = (SHorizontalBox *)0x0;
  local_2b98.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFVar19 = SBox::FArguments::FArguments(&local_1bd0);
  local_2b78 = 0x41a00000;
  local_2b74 = 1;
  local_2b70 = (undefined1  [8])0x0;
  FStack_2b68.Data = (FScriptContainerElement *)0x0;
  local_2b60 = 0;
  (pFVar19->_HeightOverride).Value.Size = 20.0;
  (pFVar19->_HeightOverride).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar19->_HeightOverride).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2b70);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2b70,
             (FWriteAccessScope *)&local_2770);
  if (((int)local_2b60 != 0) && (FStack_2b68.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2b68.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2b68,0,0,0x10);
    local_2b60 = local_2b60 & 0xffffffff00000000;
  }
  if (local_2770.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2770.Accessor,&local_2770);
  }
  if (FStack_2b68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2b68.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2b70);
  local_2b88.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)
       ((ulonglong)local_2b88.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
  local_2b88.Object = (SWidget *)GetComponentToolTipText;
  local_2608 = GetComponentToolTipText;
  pTStack_2600 = local_2b88.SharedReferenceCount.ReferenceController;
  pFVar19->_HAlign = HAlign_Fill;
  TAttribute<FText>::Bind<UE::ColorGrading::SColorGradingComponentViewer>
            ((TAttribute<FText> *)pFVar19,this,(pmf_728be3a6 *)&local_2608);
  pFVar20 = SHorizontalBox::FArguments::FArguments(&local_20d8);
  FLLMScope::FLLMScope(&local_2bb8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2970 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2968,&local_2970,true);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
            (&local_2900,"SHorizontalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdvancedWidgets\\Private\\Widgets\\ColorGrading\\SColorGradingComponentViewer.cpp"
             ,0x28,local_res10);
  FMemScope::~FMemScope(&local_2968);
  FLLMScope::~FLLMScope(&local_2bb8);
  if (local_2900._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_2900._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_2900._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_2b98.Object = local_2900._Widget.Object;
  local_2b98.SharedReferenceCount.ReferenceController =
       local_2900._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  pTVar21 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_2900,&local_25e8,pFVar20);
  pTVar48 = (pTVar21->SharedReferenceCount).ReferenceController;
  pSVar44 = pTVar21->Object;
  if (pTVar48 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar48->SharedReferenceCount = (atomic<int>)((int)pTVar48->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar48->SharedReferenceCount = (atomic<int>)((int)pTVar48->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2a60 = (pFVar19->_Content).Widget.Object;
  pTStack_2a58 = (pFVar19->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar19->_Content).Widget.Object = (SWidget *)pSVar44;
  (pFVar19->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar48;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_2a58);
  FLLMScope::FLLMScope(&local_2bb4,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2960 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2958,&local_2960,true);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_26d8,"SBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdvancedWidgets\\Private\\Widgets\\ColorGrading\\SColorGradingComponentViewer.cpp"
             ,0x23,local_res18);
  FMemScope::~FMemScope(&local_2958);
  FLLMScope::~FLLMScope(&local_2bb4);
  pTVar22 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_26d8,&local_25f8,pFVar19);
  plVar43 = &this->_padding_;
  local_res20 = pTVar22->Object;
  pTVar5 = (pTVar22->SharedReferenceCount).ReferenceController;
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    FSlotBase::DetatchParentFromContent((FSlotBase *)plVar43);
  }
  else {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    FSlotBase::DetatchParentFromContent((FSlotBase *)plVar43);
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2a50 = this->_padding_;
  pTStack_2a48 = (TReferenceControllerBase<1> *)this->_padding_;
  this->_padding_ = (longlong)local_res20;
  this->_padding_ = (longlong)pTVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_2a48);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)plVar43);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_25f8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_26d8._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_25e8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2900._Widget.SharedReferenceCount.ReferenceController);
  DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_20d8._Slots.AllocatorInstance.Data,local_20d8._Slots.ArrayNum);
  if ((FSlotArguments *)local_20d8._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_20d8._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_20d8);
  SBox::FArguments::~FArguments(&local_1bd0);
  if ((local_2900._Widget.Object == (SHorizontalBox *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar17)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  this_00 = ::operator_new(0x58);
  if (this_00 == (FSlot *)0x0) {
    local_2950 = (FSlot *)0x0;
  }
  else {
    *(undefined8 *)this_00 = 0;
    *(undefined8 *)&this_00->field_0x8 = 0;
    *(undefined8 *)&this_00->field_0x10 = 0;
    *(undefined8 *)&this_00->field_0x18 = 0;
    *(undefined8 *)&this_00->field_0x20 = 0;
    *(undefined8 *)&this_00->field_0x28 = 0;
    *(undefined8 *)&this_00->field_0x30 = 0;
    *(undefined8 *)&this_00->field_0x38 = 0;
    *(undefined8 *)&this_00->field_0x40 = 0;
    *(undefined8 *)&this_00->field_0x48 = 0;
    *(undefined8 *)&this_00->field_0x50 = 0;
    local_2950 = SHorizontalBox::FSlot::FSlot(this_00);
  }
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)(local_2268 + 8),(FSlot *)&local_2950);
  local_2170 = -1;
  local_2268._0_8_ = &___7__FScopedWidgetSlotArguments_VFSlot_SHorizontalBox___SBoxPanel__6B_;
  local_2178 = (TPanelChildren<SBoxPanel::FSlot> *)&(local_2900._Widget.Object)->field_0x218;
  pFVar23 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth((FSlotArguments *)(local_2268 + 8));
  puVar1 = &pFVar23->field_0x48;
  if (local_29a0 != (undefined4 *)puVar1) {
    *(undefined4 *)puVar1 = 1;
    pFVar23->field_0x4c = 1;
  }
  pFVar47 = (FSlotArguments *)0x0;
  if (puVar1 != (undefined1 *)0x0) {
    pFVar47 = pFVar23;
  }
  if (local_2998 != (undefined4 *)&pFVar47->field_0x50) {
    *(undefined4 *)&pFVar47->field_0x50 = 2;
    pFVar47->field_0x54 = 1;
  }
  local_2bc0 = (FArguments *)(FSlotArguments *)0x0;
  if (pFVar47 != (FSlotArguments *)0xffffffffffffffb8) {
    local_2bc0 = (FArguments *)pFVar47;
  }
  pFVar19 = SBox::FArguments::FArguments(&local_1890);
  fVar14 = __real_41000000;
  local_2b58 = 0x41000000;
  local_2b54 = 1;
  local_2b40 = 0;
  local_2b50 = (undefined1  [8])0x0;
  FStack_2b48.Data = (FScriptContainerElement *)0x0;
  (pFVar19->_WidthOverride).Value.Size = 8.0;
  (pFVar19->_WidthOverride).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar19->_WidthOverride).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2b50);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2b50,
             (FWriteAccessScope *)&local_2800);
  if (((int)local_2b40 != 0) && (FStack_2b48.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2b48.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2b48,0,0,0x10);
    local_2b40 = local_2b40 & 0xffffffff00000000;
  }
  if (local_2800.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2800.Accessor,&local_2800);
  }
  if (FStack_2b48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2b48.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2b50);
  pFVar24 = STextBlock::FArguments::FArguments(&local_d00);
  uStack_29d0 = 0;
  local_29d8 = (FName)GetComponentLabelText;
  lStack_25d0 = (ulonglong)uStack_29cc << 0x20;
  local_25d8 = GetComponentLabelText;
  TAttribute<FText>::Bind<UE::ColorGrading::SColorGradingComponentViewer>
            (&pFVar24->_Text,this,(pmf_728be3a6 *)&local_25d8);
  FLLMScope::FLLMScope(&local_2bb0,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2948 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2940,&local_2948,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_26a8,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdvancedWidgets\\Private\\Widgets\\ColorGrading\\SColorGradingComponentViewer.cpp"
             ,0x34,(T0RequiredArgs *)&local_res20);
  FMemScope::~FMemScope(&local_2940);
  FLLMScope::~FLLMScope(&local_2bb0);
  pTVar25 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_26a8,&local_25b8,pFVar24);
  pTVar48 = (pTVar25->SharedReferenceCount).ReferenceController;
  pSVar6 = pTVar25->Object;
  if (pTVar48 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar48->SharedReferenceCount = (atomic<int>)((int)pTVar48->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar48->SharedReferenceCount = (atomic<int>)((int)pTVar48->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2a40 = (pFVar19->_Content).Widget.Object;
  pTStack_2a38 = (pFVar19->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar19->_Content).Widget.Object = (SWidget *)pSVar6;
  (pFVar19->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar48;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_2a38);
  FLLMScope::FLLMScope(&local_2bac,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_29d8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_29a8,&local_29d8,true);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_26c0,"SBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdvancedWidgets\\Private\\Widgets\\ColorGrading\\SColorGradingComponentViewer.cpp"
             ,0x31,&local_2bc8);
  FMemScope::~FMemScope(&local_29a8);
  FLLMScope::~FLLMScope(&local_2bac);
  pTVar22 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_26c0,&local_25c8,pFVar19);
  pTVar5 = (pTVar22->SharedReferenceCount).ReferenceController;
  local_2a88 = pTVar22->Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2a80.ReferenceController = pTVar5;
  if ((SBox **)&local_2bc0->_padding_ != &local_2a88) {
    local_2bc0->_padding_ = (longlong)local_2a88;
    local_2a88 = (SBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&local_2bc0->_padding_,&local_2a80);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2a80.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_25c8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_26c0._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_25b8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_26a8._Widget.SharedReferenceCount.ReferenceController);
  STextBlock::FArguments::~FArguments(&local_d00);
  SBox::FArguments::~FArguments(&local_1890);
  SBoxPanel::FScopedWidgetSlotArguments<SHorizontalBox::FSlot>::
  ~FScopedWidgetSlotArguments<SHorizontalBox::FSlot>
            ((FScopedWidgetSlotArguments<SHorizontalBox::FSlot> *)local_2268);
  if (bVar4 == false) {
    if ((local_2900._Widget.Object == (SHorizontalBox *)0x0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar17)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    pFVar26 = SHorizontalBox::AddSlot(local_2900._Widget.Object,&local_1ed0);
    local_2920.Value = 1.0;
    local_2920.bIsSet = true;
    local_2920.Getter._0_8_ = 0;
    local_2920.Getter._8_8_ = 0;
    local_2920.Getter._16_8_ = 0;
    pFVar23 = SHorizontalBox::FSlot::FSlotArguments::FillWidth
                        ((FSlotArguments *)&pFVar26->_padding_,&local_2920);
    puVar1 = &pFVar23->field_0x48;
    if (local_2990 != (undefined4 *)puVar1) {
      *(undefined4 *)puVar1 = 0;
      pFVar23->field_0x4c = 1;
    }
    pFVar47 = (FSlotArguments *)0x0;
    if (puVar1 != (undefined1 *)0x0) {
      pFVar47 = pFVar23;
    }
    if (local_2988 != (undefined4 *)&pFVar47->field_0x50) {
      *(undefined4 *)&pFVar47->field_0x50 = 0;
      pFVar47->field_0x54 = 1;
    }
    pFVar23 = (FSlotArguments *)0x0;
    if (pFVar47 != (FSlotArguments *)0xffffffffffffffb8) {
      pFVar23 = pFVar47;
    }
    local_2bc0 = (FArguments *)
                 TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                           ((FSlotArgumentsMixin *)&pFVar23->field_0x18,fVar14,0.0,0.0,0.0);
    pFVar27 = SColorGradingComponentSpinBox::FArguments::FArguments(&local_1210);
    (pFVar27->_Value).bIsSet = true;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(pFVar27->_Value).Getter,
               (FWriteAccessScope *)&local_2758);
    local_2740 = &(pFVar27->_Value).Getter.field_0x8;
    puVar28 = Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_2740);
    if (puVar28 == (undefined8 *)0x0) {
      pTVar48 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
    }
    else {
      local_2bd8.Object = (SBox *)GetValue;
      local_2bd8.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)
           ((ulonglong)local_2870.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
      pTVar29 = TSharedFromThis<SWidget,1>::AsShared
                          ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_2708);
      pTVar48 = (pTVar29->SharedReferenceCount).ReferenceController;
      pSVar7 = pTVar29->Object;
      if (pTVar48 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar48->SharedReferenceCount = (atomic<int>)((int)pTVar48->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar48->SharedReferenceCount = (atomic<int>)((int)pTVar48->SharedReferenceCount + 1);
        UNLOCK();
      }
      *puVar28 = &___7__TCommonDelegateInstanceState___A6AMXZUFDefaultDelegateUserPolicy____V__6B_;
      uVar30 = FDelegateHandle::GenerateNewID();
      puVar28[2] = uVar30;
      *puVar28 = &
                 ___7__TBaseSPMethodDelegateInstance__00__CBVSColorGradingComponentViewer_ColorGrading_UE___00__A6AMXZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar28[3] = pSVar7;
      puVar28[4] = pTVar48;
      if (pTVar48 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar48->WeakReferenceCount = (atomic<int>)((int)pTVar48->WeakReferenceCount + 1);
        UNLOCK();
      }
      bVar13 = true;
      bVar12 = true;
      bVar18 = true;
      puVar28[5] = local_2bd8.Object;
      puVar28[6] = local_2bd8.SharedReferenceCount.ReferenceController;
    }
    if (bVar18) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar48);
    }
    if (bVar12) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar48);
    }
    if (bVar13) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2708.SharedReferenceCount.ReferenceController);
    }
    if (local_2758.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2758.Accessor,&local_2758);
    }
    local_2a20 = (param_1->_Component).Value;
    local_2a1c = (param_1->_Component).bIsSet;
    local_2a18 = (undefined1  [8])0x0;
    pvStack_2a10 = (void *)0x0;
    local_2a08 = 0;
    TDelegate<enum_UE::ColorGrading::EColorGradingComponent___cdecl(void),FDefaultDelegateUserPolicy>
    ::CopyFrom<FDefaultDelegateUserPolicy>(local_2a18,&(param_1->_Component).Getter);
    (pFVar27->_Component).Value = local_2a20;
    (pFVar27->_Component).bIsSet = local_2a1c;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar27->_Component).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2a18);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2a18);
    if (pvStack_2a10 != (void *)0x0) {
      FMemory::Free(pvStack_2a10);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_2a18);
    local_2a00 = (param_1->_ColorGradingMode).Value;
    local_29fc = (param_1->_ColorGradingMode).bIsSet;
    local_29f8 = (undefined1  [8])0x0;
    pvStack_29f0 = (void *)0x0;
    local_29e8 = 0;
    TDelegate<enum_UE::ColorGrading::EColorGradingModes___cdecl(void),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>(local_29f8,&(param_1->_ColorGradingMode).Getter);
    (pFVar27->_ColorGradingMode).Value = local_2a00;
    (pFVar27->_ColorGradingMode).bIsSet = local_29fc;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar27->_ColorGradingMode).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_29f8);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_29f8);
    if (pvStack_29f0 != (void *)0x0) {
      FMemory::Free(pvStack_29f0);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_29f8);
    TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::operator=
              (&pFVar27->_OnValueChanged,&param_1->_OnValueChanged);
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::operator=
              (&pFVar27->_OnBeginSliderMovement,&param_1->_OnBeginSliderMovement);
    TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::operator=
              (&pFVar27->_OnEndSliderMovement,&param_1->_OnEndSliderMovement);
    pTVar31 = TAttribute<float>::TAttribute<float>(&local_2418,&param_1->_ShiftMultiplier);
    pTVar2 = &pTVar31->Getter;
    (pFVar27->_ShiftMultiplier).Value = pTVar31->Value;
    (pFVar27->_ShiftMultiplier).bIsSet = pTVar31->bIsSet;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar27->_ShiftMultiplier).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar2);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar2);
    pvVar8 = *(void **)&(pTVar31->Getter).field_0x8;
    if (pvVar8 != (void *)0x0) {
      FMemory::Free(pvVar8);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)pTVar2);
    pTVar31 = TAttribute<float>::TAttribute<float>(&local_2518,&param_1->_CtrlMultiplier);
    pTVar2 = &pTVar31->Getter;
    (pFVar27->_CtrlMultiplier).Value = pTVar31->Value;
    (pFVar27->_CtrlMultiplier).bIsSet = pTVar31->bIsSet;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar27->_CtrlMultiplier).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar2);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar2);
    pvVar8 = *(void **)&(pTVar31->Getter).field_0x8;
    if (pvVar8 != (void *)0x0) {
      FMemory::Free(pvVar8);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)pTVar2);
    pTVar32 = TAttribute<bool>::TAttribute<bool>
                        (&local_24f8,&param_1->_SupportDynamicSliderMinValue);
    pTVar3 = &pTVar32->Getter;
    (pFVar27->_SupportDynamicSliderMinValue).Value = pTVar32->Value;
    (pFVar27->_SupportDynamicSliderMinValue).bIsSet = pTVar32->bIsSet;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)
               &(pFVar27->_SupportDynamicSliderMinValue).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar3);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar3);
    pvVar8 = *(void **)&(pTVar32->Getter).field_0x8;
    if (pvVar8 != (void *)0x0) {
      FMemory::Free(pvVar8);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)pTVar3);
    pTVar32 = TAttribute<bool>::TAttribute<bool>
                        (&local_24d8,&param_1->_SupportDynamicSliderMaxValue);
    pTVar3 = &pTVar32->Getter;
    (pFVar27->_SupportDynamicSliderMaxValue).Value = pTVar32->Value;
    (pFVar27->_SupportDynamicSliderMaxValue).bIsSet = pTVar32->bIsSet;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)
               &(pFVar27->_SupportDynamicSliderMaxValue).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar3);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar3);
    pvVar8 = *(void **)&(pTVar32->Getter).field_0x8;
    if (pvVar8 != (void *)0x0) {
      FMemory::Free(pvVar8);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)pTVar3);
    TDelegate<void___cdecl(float,TWeakPtr<SWidget,1>,bool,bool),FDefaultDelegateUserPolicy>::
    operator=(&pFVar27->_OnDynamicSliderMinValueChanged,&param_1->_OnDynamicSliderMinValueChanged);
    TDelegate<void___cdecl(float,TWeakPtr<SWidget,1>,bool,bool),FDefaultDelegateUserPolicy>::
    operator=(&pFVar27->_OnDynamicSliderMaxValueChanged,&param_1->_OnDynamicSliderMaxValueChanged);
    TDelegate<bool___cdecl(UE::Math::TVector4<double>_&),FDefaultDelegateUserPolicy>::operator=
              (&pFVar27->_OnQueryCurrentColor,&param_1->_OnQueryCurrentColor);
    pTVar33 = TAttribute<TOptional<float>_>::TAttribute<TOptional<float>_>
                        (&local_22b8,&param_1->_MinValue);
    TAttribute<TOptional<float>_>::operator=(&pFVar27->_MinValue,pTVar33);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pTVar33->Getter);
    pvVar8 = *(void **)&(pTVar33->Getter).field_0x8;
    if (pvVar8 != (void *)0x0) {
      FMemory::Free(pvVar8);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)&pTVar33->Getter);
    pTVar33 = TAttribute<TOptional<float>_>::TAttribute<TOptional<float>_>
                        (&local_2290,&param_1->_MaxValue);
    TAttribute<TOptional<float>_>::operator=(&pFVar27->_MaxValue,pTVar33);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pTVar33->Getter);
    pvVar8 = *(void **)&(pTVar33->Getter).field_0x8;
    if (pvVar8 != (void *)0x0) {
      FMemory::Free(pvVar8);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)&pTVar33->Getter);
    pTVar33 = TAttribute<TOptional<float>_>::TAttribute<TOptional<float>_>
                        (&local_23f8,&param_1->_MinSliderValue);
    TAttribute<TOptional<float>_>::operator=(&pFVar27->_MinSliderValue,pTVar33);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pTVar33->Getter);
    pvVar8 = *(void **)&(pTVar33->Getter).field_0x8;
    if (pvVar8 != (void *)0x0) {
      FMemory::Free(pvVar8);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)&pTVar33->Getter);
    pTVar33 = TAttribute<TOptional<float>_>::TAttribute<TOptional<float>_>
                        (&local_23d0,&param_1->_MaxSliderValue);
    TAttribute<TOptional<float>_>::operator=(&pFVar27->_MaxSliderValue,pTVar33);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pTVar33->Getter);
    pvVar8 = *(void **)&(pTVar33->Getter).field_0x8;
    if (pvVar8 != (void *)0x0) {
      FMemory::Free(pvVar8);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)&pTVar33->Getter);
    pTVar31 = TAttribute<float>::TAttribute<float>(&local_24b8,&param_1->_SliderExponent);
    pTVar2 = &pTVar31->Getter;
    (pFVar27->_SliderExponent).Value = pTVar31->Value;
    (pFVar27->_SliderExponent).bIsSet = pTVar31->bIsSet;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar27->_SliderExponent).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar2);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar2);
    pvVar8 = *(void **)&(pTVar31->Getter).field_0x8;
    if (pvVar8 != (void *)0x0) {
      FMemory::Free(pvVar8);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)pTVar2);
    pTVar31 = TAttribute<float>::TAttribute<float>
                        (&local_2498,&param_1->_SliderExponentNeutralValue);
    pTVar2 = &pTVar31->Getter;
    (pFVar27->_SliderExponentNeutralValue).Value = pTVar31->Value;
    (pFVar27->_SliderExponentNeutralValue).bIsSet = pTVar31->bIsSet;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)
               &(pFVar27->_SliderExponentNeutralValue).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar2);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar2);
    pvVar8 = *(void **)&(pTVar31->Getter).field_0x8;
    if (pvVar8 != (void *)0x0) {
      FMemory::Free(pvVar8);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)pTVar2);
    pTVar31 = TAttribute<float>::TAttribute<float>(&local_2478,&param_1->_Delta);
    pTVar2 = &pTVar31->Getter;
    (pFVar27->_Delta).Value = pTVar31->Value;
    (pFVar27->_Delta).bIsSet = pTVar31->bIsSet;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar27->_Delta).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar2);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar2);
    pvVar8 = *(void **)&(pTVar31->Getter).field_0x8;
    if (pvVar8 != (void *)0x0) {
      FMemory::Free(pvVar8);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)pTVar2);
    pTVar48 = (param_1->_TypeInterface).SharedReferenceCount.ReferenceController;
    local_28a0.Object = (param_1->_TypeInterface).Object;
    if (pTVar48 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar48->SharedReferenceCount = (atomic<int>)((int)pTVar48->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_28a0.SharedReferenceCount.ReferenceController = pTVar48;
    TSharedPtr<INumericTypeInterface<float>,1>::operator=(&pFVar27->_TypeInterface,&local_28a0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar48);
    local_2bd8.SharedReferenceCount.ReferenceController =
         local_2bd8.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
    local_2bd8.Object = (SBox *)SWidget::IsEnabled;
    local_26f8 = SWidget::IsEnabled;
    pTStack_26f0 = local_2bd8.SharedReferenceCount.ReferenceController;
    TAttribute<bool>::Bind<UE::ColorGrading::SColorGradingComponentViewer>
              ((TAttribute<bool> *)&pFVar27->_padding_,this,(pmf_426348d8 *)&local_26f8);
    pFVar27->_AllowSpin = param_1->_AllowSpin;
    FLLMScope::FLLMScope(&local_2ba8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_2938 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_2930,&local_2938,true);
    TSlateDecl<UE::ColorGrading::SColorGradingComponentSpinBox,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<UE::ColorGrading::SColorGradingComponentSpinBox,RequiredArgs::T0RequiredArgs>
              (&local_28e8,"SColorGradingComponentSpinBox",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdvancedWidgets\\Private\\Widgets\\ColorGrading\\SColorGradingComponentViewer.cpp"
               ,0x41,&local_2bc7);
    FMemScope::~FMemScope(&local_2930);
    FLLMScope::~FLLMScope(&local_2ba8);
    if (local_28e8._Widget.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28e8._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28e8._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount
           + 1);
      UNLOCK();
    }
    local_26e8 = (this->GradientSpinBox).Object;
    pTStack_26e0 = (this->GradientSpinBox).SharedReferenceCount.ReferenceController;
    (this->GradientSpinBox).Object = local_28e8._Widget.Object;
    (this->GradientSpinBox).SharedReferenceCount.ReferenceController =
         local_28e8._Widget.SharedReferenceCount.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (pTStack_26e0);
    pTVar34 = TSlateDecl<UE::ColorGrading::SColorGradingComponentSpinBox,RequiredArgs::T0RequiredArgs>
              ::operator<<=(&local_28e8,&local_2690,pFVar27);
    pTVar48 = (pTVar34->SharedReferenceCount).ReferenceController;
    local_2890.Object = (SWidget *)pTVar34->Object;
    if (pTVar48 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar48->SharedReferenceCount = (atomic<int>)((int)pTVar48->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_2890.SharedReferenceCount.ReferenceController = pTVar48;
    TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
              ((FSlotArguments *)local_2bc0,&local_2890);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar48);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2690.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28e8._Widget.SharedReferenceCount.ReferenceController);
    SColorGradingComponentSpinBox::FArguments::~FArguments(&local_1210);
    SBoxPanel::FScopedWidgetSlotArguments<SHorizontalBox::FSlot>::
    ~FScopedWidgetSlotArguments<SHorizontalBox::FSlot>(&local_1ed0);
  }
  local_2bd8.Object = (SBox *)0x0;
  local_2bd8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_2bc0 = SBox::FArguments::FArguments(&local_1550);
  pFVar35 = SNumericEntryBox<float>::FArguments::FArguments(&local_7a8);
  pFVar36 = ::FName::FName(&local_2628,"ColorGradingComponentViewer.NumericEntry");
  pFVar16 = local_2ab8;
  pFVar37 = ISlateStyle::GetWidgetStyle<FSpinBoxStyle>
                      ((ISlateStyle *)local_2ab8,*pFVar36,(char *)0x0,(FSpinBoxStyle *)0x0);
  pFVar35->_SpinBoxStyle = pFVar37;
  pcVar11 = *(code **)(pFVar16->_padding_ + 0x88);
  ::FName::FName(&local_2620,"ColorGrading.NormalFont");
  pFVar38 = (FSlateFontInfo *)(*pcVar11)(local_2ab8,local_2168);
  FSlateFontInfo::FSlateFontInfo(&local_2598.Value,pFVar38);
  local_2598.bIsSet = true;
  local_2598.Getter._16_8_ = 0;
  local_2598.Getter._0_8_ = 0;
  local_2598.Getter._8_8_ = 0;
  pFVar35 = SNumericEntryBox<float>::FArguments::Font(pFVar35,&local_2598);
  pFVar36 = ::FName::FName(local_2618,"ColorGradingComponentViewer.NumericEntry.TextBox");
  pFVar39 = ISlateStyle::GetWidgetStyle<FEditableTextBoxStyle>
                      ((ISlateStyle *)local_2ab8,*pFVar36,(char *)0x0,(FEditableTextBoxStyle *)0x0);
  pFVar35->_EditableTextBoxStyle = pFVar39;
  pFVar40 = FText::AsLocalizable_Advanced_LocText
                      (&local_25a8,L"PropertyEditor",L"MultipleValues",L"Multiple Values");
  pFVar35 = SNumericEntryBox<float>::FArguments::UndeterminedString(pFVar35,pFVar40);
  pTVar33 = TAttribute<TOptional<float>_>::TAttribute<TOptional<float>_>
                      (&local_23a8,&param_1->_Value);
  TAttribute<TOptional<float>_>::operator=(&pFVar35->_Value,pTVar33);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pTVar33->Getter);
  pvVar8 = *(void **)&(pTVar33->Getter).field_0x8;
  if (pvVar8 != (void *)0x0) {
    FMemory::Free(pvVar8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&pTVar33->Getter);
  TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::operator=
            (&pFVar35->_OnValueChanged,&param_1->_OnValueChanged);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            (&pFVar35->_OnBeginSliderMovement,&param_1->_OnBeginSliderMovement);
  TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::operator=
            (&pFVar35->_OnEndSliderMovement,&param_1->_OnEndSliderMovement);
  pFVar35->_AllowSpin = true;
  local_2860.Value = (param_1->_ShiftMultiplier).Value;
  local_2860.bIsSet = (param_1->_ShiftMultiplier).bIsSet;
  local_2860.Getter._0_8_ = 0;
  local_2860.Getter._8_8_ = 0;
  local_2860.Getter._16_4_ = 0;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&local_2860.Getter,&(param_1->_ShiftMultiplier).Getter);
  pFVar35 = SNumericEntryBox<float>::FArguments::ShiftMultiplier(pFVar35,&local_2860);
  local_2840.Value = (param_1->_CtrlMultiplier).Value;
  local_2840.bIsSet = (param_1->_CtrlMultiplier).bIsSet;
  local_2840.Getter._16_4_ = 0;
  local_2840.Getter._0_8_ = 0;
  local_2840.Getter._8_8_ = 0;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&local_2840.Getter,&(param_1->_CtrlMultiplier).Getter);
  pFVar35 = SNumericEntryBox<float>::FArguments::CtrlMultiplier(pFVar35,&local_2840);
  local_2820.Value = (param_1->_SupportDynamicSliderMinValue).Value;
  local_2820.bIsSet = (param_1->_SupportDynamicSliderMinValue).bIsSet;
  local_2820.Getter._0_8_ = 0;
  local_2820.Getter._8_8_ = 0;
  local_2820.Getter._16_4_ = 0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&local_2820.Getter,&(param_1->_SupportDynamicSliderMinValue).Getter);
  pFVar35 = SNumericEntryBox<float>::FArguments::SupportDynamicSliderMinValue(pFVar35,&local_2820);
  local_2b18 = (param_1->_SupportDynamicSliderMaxValue).Value;
  local_2b17 = (param_1->_SupportDynamicSliderMaxValue).bIsSet;
  local_2b00 = 0;
  local_2b10 = (undefined1  [8])0x0;
  FStack_2b08.Data = (FScriptContainerElement *)0x0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)local_2b10,
             &(param_1->_SupportDynamicSliderMaxValue).Getter);
  (pFVar35->_SupportDynamicSliderMaxValue).Value = local_2b18;
  (pFVar35->_SupportDynamicSliderMaxValue).bIsSet = local_2b17;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(pFVar35->_SupportDynamicSliderMaxValue).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2b10);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2b10,
             (FWriteAccessScope *)&local_27e8);
  if ((local_2b00 != 0) && (FStack_2b08.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2b08.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2b08,0,0,0x10);
    local_2b00 = 0;
  }
  if (local_27e8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_27e8.Accessor,&local_27e8);
  }
  if (FStack_2b08.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2b08.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2b10);
  TDelegate<void___cdecl(float,TWeakPtr<SWidget,1>,bool,bool),FDefaultDelegateUserPolicy>::operator=
            (&pFVar35->_OnDynamicSliderMinValueChanged,&param_1->_OnDynamicSliderMinValueChanged);
  TDelegate<void___cdecl(float,TWeakPtr<SWidget,1>,bool,bool),FDefaultDelegateUserPolicy>::operator=
            (&pFVar35->_OnDynamicSliderMaxValueChanged,&param_1->_OnDynamicSliderMaxValueChanged);
  local_2aac = (param_1->_MinValue).Value.bIsSet;
  if ((bool)local_2aac != false) {
    local_2ab0 = (param_1->_MinValue).Value.TypedValue;
  }
  local_2aa8 = (param_1->_MinValue).bIsSet;
  local_2a90 = 0;
  local_2aa0 = (undefined1  [8])0x0;
  FStack_2a98.Data = (FScriptContainerElement *)0x0;
  TDelegate<TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy> *)local_2aa0,
             &(param_1->_MinValue).Getter);
  if ((TAttribute<TOptional<float>_> *)&local_2ab0 != &pFVar35->_MinValue) {
    if (local_2aac == '\0') {
      if ((pFVar35->_MinValue).Value.bIsSet != false) {
        (pFVar35->_MinValue).Value.bIsSet = false;
      }
    }
    else {
      (pFVar35->_MinValue).Value.TypedValue = local_2ab0;
      (pFVar35->_MinValue).Value.bIsSet = true;
    }
  }
  (pFVar35->_MinValue).bIsSet = local_2aa8;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar35->_MinValue).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2aa0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2aa0,
             (FWriteAccessScope *)&local_2788);
  if ((local_2a90 != 0) && (FStack_2a98.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2a98.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2a98,0,0,0x10);
    local_2a90 = 0;
  }
  if (local_2788.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2788.Accessor,&local_2788);
  }
  if (FStack_2a98.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2a98.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2aa0);
  pTVar33 = TAttribute<TOptional<float>_>::TAttribute<TOptional<float>_>
                      (&local_2380,&param_1->_MaxValue);
  pFVar35 = SNumericEntryBox<float>::FArguments::MaxValue(pFVar35,pTVar33);
  pTVar33 = TAttribute<TOptional<float>_>::TAttribute<TOptional<float>_>
                      (&local_2358,&param_1->_MinSliderValue);
  pFVar35 = SNumericEntryBox<float>::FArguments::MinSliderValue(pFVar35,pTVar33);
  pTVar33 = TAttribute<TOptional<float>_>::TAttribute<TOptional<float>_>
                      (&local_2330,&param_1->_MaxSliderValue);
  pFVar35 = SNumericEntryBox<float>::FArguments::MaxSliderValue(pFVar35,pTVar33);
  pTVar41 = TAttribute<TOptional<int>_>::TAttribute<TOptional<int>_>
                      (&local_2308,&param_1->_MinFractionalDigits);
  TAttribute<TOptional<int>_>::operator=(&pFVar35->_MinFractionalDigits,pTVar41);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pTVar41->Getter);
  pvVar8 = *(void **)&(pTVar41->Getter).field_0x8;
  if (pvVar8 != (void *)0x0) {
    FMemory::Free(pvVar8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&pTVar41->Getter);
  pTVar41 = TAttribute<TOptional<int>_>::TAttribute<TOptional<int>_>
                      (&local_22e0,&param_1->_MaxFractionalDigits);
  TAttribute<TOptional<int>_>::operator=(&pFVar35->_MaxFractionalDigits,pTVar41);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pTVar41->Getter);
  pvVar8 = *(void **)&(pTVar41->Getter).field_0x8;
  if (pvVar8 != (void *)0x0) {
    FMemory::Free(pvVar8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&pTVar41->Getter);
  local_2af8 = (param_1->_SliderExponent).Value;
  local_2af4 = (param_1->_SliderExponent).bIsSet;
  local_2af0 = (undefined1  [8])0x0;
  FStack_2ae8.Data = (FScriptContainerElement *)0x0;
  local_2ae0 = 0;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)local_2af0,
             &(param_1->_SliderExponent).Getter);
  (pFVar35->_SliderExponent).Value = local_2af8;
  (pFVar35->_SliderExponent).bIsSet = local_2af4;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar35->_SliderExponent).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2af0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2af0,
             (FWriteAccessScope *)&local_27d0);
  if ((local_2ae0 != 0) && (FStack_2ae8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2ae8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2ae8,0,0,0x10);
    local_2ae0 = 0;
  }
  if (local_27d0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_27d0.Accessor,&local_27d0);
  }
  if (FStack_2ae8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2ae8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2af0);
  local_2ad8 = (param_1->_SliderExponentNeutralValue).Value;
  local_2ad4 = (param_1->_SliderExponentNeutralValue).bIsSet;
  local_2ad0 = (undefined1  [8])0x0;
  FStack_2ac8.Data = (FScriptContainerElement *)0x0;
  local_2ac0 = 0;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)local_2ad0,
             &(param_1->_SliderExponentNeutralValue).Getter);
  (pFVar35->_SliderExponentNeutralValue).Value = local_2ad8;
  (pFVar35->_SliderExponentNeutralValue).bIsSet = local_2ad4;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(pFVar35->_SliderExponentNeutralValue).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2ad0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2ad0,
             (FWriteAccessScope *)&local_27b8);
  if ((local_2ac0 != 0) && (FStack_2ac8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2ac8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2ac8,0,0,0x10);
    local_2ac0 = 0;
  }
  if (local_27b8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_27b8.Accessor,&local_27b8);
  }
  if (FStack_2ac8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2ac8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2ad0);
  local_2b38 = (param_1->_Delta).Value;
  local_2b34 = (param_1->_Delta).bIsSet;
  local_2b30 = (undefined1  [8])0x0;
  FStack_2b28.Data = (FScriptContainerElement *)0x0;
  local_2b20 = 0;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)local_2b30,
             &(param_1->_Delta).Getter);
  (pFVar35->_Delta).Value = local_2b38;
  (pFVar35->_Delta).bIsSet = local_2b34;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar35->_Delta).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2b30);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2b30,
             (FWriteAccessScope *)&local_27a0);
  if ((local_2b20 != 0) && (FStack_2b28.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2b28.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2b28,0,0,0x10);
    local_2b20 = 0;
  }
  if (local_27a0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_27a0.Accessor,&local_27a0);
  }
  if (FStack_2b28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2b28.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2b30);
  pTVar48 = (param_1->_TypeInterface).SharedReferenceCount.ReferenceController;
  pIVar9 = (param_1->_TypeInterface).Object;
  if (pTVar48 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar48->SharedReferenceCount = (atomic<int>)((int)pTVar48->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar48->SharedReferenceCount = (atomic<int>)((int)pTVar48->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2680 = (pFVar35->_TypeInterface).Object;
  pTStack_2678 = (pFVar35->_TypeInterface).SharedReferenceCount.ReferenceController;
  (pFVar35->_TypeInterface).Object = pIVar9;
  (pFVar35->_TypeInterface).SharedReferenceCount.ReferenceController = pTVar48;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_2678);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar48);
  uStack_29c0 = 0;
  local_29c8 = (FName)SWidget::IsEnabled;
  lStack_2660 = (ulonglong)uStack_29bc << 0x20;
  local_2668 = SWidget::IsEnabled;
  TAttribute<bool>::Bind<UE::ColorGrading::SColorGradingComponentViewer>
            ((TAttribute<bool> *)&pFVar35->_padding_,this,(pmf_426348d8 *)&local_2668);
  pFVar35->_AllowSpin = param_1->_AllowSpin;
  FLLMScope::FLLMScope(&local_2ba4,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2928 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_29b8,&local_2928,true);
  TSlateDecl<SNumericEntryBox<float>,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SNumericEntryBox<float>,RequiredArgs::T0RequiredArgs>
            (&local_28b8,"SNumericEntryBox<float>",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdvancedWidgets\\Private\\Widgets\\ColorGrading\\SColorGradingComponentViewer.cpp"
             ,0x5f,&local_2bc6);
  FMemScope::~FMemScope(&local_29b8);
  FLLMScope::~FLLMScope(&local_2ba4);
  if (local_28b8._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28b8._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28b8._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_2658 = (this->NumericEntryBox).Object;
  pTStack_2650 = (this->NumericEntryBox).SharedReferenceCount.ReferenceController;
  (this->NumericEntryBox).Object = local_28b8._Widget.Object;
  (this->NumericEntryBox).SharedReferenceCount.ReferenceController =
       local_28b8._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_2650);
  pTVar42 = TSlateDecl<SNumericEntryBox<float>,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_28b8,&local_2638,pFVar35);
  pFVar19 = local_2bc0;
  pTVar48 = (pTVar42->SharedReferenceCount).ReferenceController;
  pSVar10 = pTVar42->Object;
  if (pTVar48 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar48->SharedReferenceCount = (atomic<int>)((int)pTVar48->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar48->SharedReferenceCount = (atomic<int>)((int)pTVar48->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2a30 = (local_2bc0->_Content).Widget.Object;
  pTStack_2a28 = (local_2bc0->_Content).Widget.SharedReferenceCount.ReferenceController;
  (local_2bc0->_Content).Widget.Object = (SWidget *)pSVar10;
  (local_2bc0->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar48;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_2a28);
  FLLMScope::FLLMScope(local_2ba0,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_29c8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_29b0,&local_29c8,true);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_28d0,"SBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdvancedWidgets\\Private\\Widgets\\ColorGrading\\SColorGradingComponentViewer.cpp"
             ,0x5d,local_2bc5);
  FMemScope::~FMemScope(&local_29b0);
  FLLMScope::~FLLMScope(local_2ba0);
  FVar15.ReferenceController = local_2bd8.SharedReferenceCount.ReferenceController;
  if (local_28d0._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28d0._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28d0._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_2bd8.Object = local_28d0._Widget.Object;
  local_2bd8.SharedReferenceCount.ReferenceController =
       local_28d0._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar15.ReferenceController);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=(&local_28d0,&local_2648,pFVar19);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2648.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28d0._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2638.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28b8._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2130);
  SNumericEntryBox<float>::FArguments::~FArguments(&local_7a8);
  SBox::FArguments::~FArguments(&local_1550);
  pSVar44 = local_2b98.Object;
  local_2a70.Left = 4.0;
  if (bVar4 == false) {
    local_2a70.Left = 8.0;
  }
  local_2a70.Top = 0.0;
  local_2a70.Right = 0.0;
  local_2a70.Bottom = 0.0;
  if (bVar4 == false) {
    pSVar44 = TSharedPtr<SHorizontalBox,1>::operator->(&local_2b98);
    pFVar26 = SHorizontalBox::AddSlot(pSVar44,&local_1cd0);
    pFVar23 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::HAlign
                        ((FSlotArgumentsMixin *)&pFVar26->_padding_,HAlign_Fill);
    pFVar23 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::VAlign
                        ((FSlotArgumentsMixin *)&pFVar23->field_0x48,VAlign_Fill);
    pFVar23 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar23);
    pTVar45 = TAttribute<FMargin>::TAttribute<FMargin><FMargin>(&local_2108,&local_2a70);
    pFVar23 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                        ((FSlotArgumentsMixin *)&pFVar23->field_0x18,pTVar45);
    pTVar22 = TSharedPtr<SBox,1>::ToSharedRef(&local_2bd8,&local_2870);
    TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBox>(&local_2880,pTVar22);
    TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
              ((FSlotArguments *)pFVar23,&local_2880);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2880.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)
               CONCAT44(local_2870.SharedReferenceCount.ReferenceController._4_4_,
                        local_2870.SharedReferenceCount.ReferenceController._0_4_));
    SBoxPanel::FScopedWidgetSlotArguments<SHorizontalBox::FSlot>::
    ~FScopedWidgetSlotArguments<SHorizontalBox::FSlot>(&local_1cd0);
    this_01 = TSharedPtr<SBox,1>::operator->(&local_2bd8);
    local_2a74 = 0x38;
    pTVar46 = TAttribute<FOptionalSize>::TAttribute<FOptionalSize><int>(&local_2438,&local_2a74);
    SBox::SetWidthOverride(this_01,pTVar46);
  }
  else {
    if ((local_2b98.Object == (SHorizontalBox *)0x0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar18)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    pFVar26 = SHorizontalBox::AddSlot(pSVar44,&local_1dd0);
    plVar43 = &pFVar26->_padding_;
    if ((longlong *)local_2980 != plVar43) {
      *(undefined4 *)plVar43 = 0;
      *(undefined1 *)((longlong)&pFVar26->_padding_ + 4) = 1;
    }
    pFVar23 = (FSlotArguments *)&pFVar26->_padding_;
    if (plVar43 == (longlong *)0x0) {
      pFVar23 = (FSlotArguments *)0x0;
    }
    if (local_2978 != (undefined4 *)&pFVar23->field_0x50) {
      *(undefined4 *)&pFVar23->field_0x50 = 0;
      pFVar23->field_0x54 = 1;
    }
    local_2a78 = 1.0;
    pFVar47 = (FSlotArguments *)0x0;
    if (pFVar23 != (FSlotArguments *)0xffffffffffffffb8) {
      pFVar47 = pFVar23;
    }
    pTVar31 = TAttribute<float>::TAttribute<float>(&local_2458,&local_2a78);
    pFVar23 = SHorizontalBox::FSlot::FSlotArguments::FillWidth(pFVar47,pTVar31);
    local_2738.Value.Top = local_2a70.Top;
    local_2738.Value.Left = local_2a70.Left;
    local_2738.Value.Bottom = local_2a70.Bottom;
    local_2738.Value.Right = local_2a70.Right;
    local_2738.bIsSet = true;
    local_2738.Getter._16_8_ = 0;
    local_2738.Getter._0_8_ = 0;
    local_2738.Getter._8_8_ = 0;
    pFVar23 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                        ((FSlotArgumentsMixin *)&pFVar23->field_0x18,&local_2738);
    if ((local_28d0._Widget.Object == (SBox *)0x0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x408,L""), bVar18)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    FVar15.ReferenceController = local_2bd8.SharedReferenceCount.ReferenceController;
    if (local_2bd8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_2bd8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_2bd8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((local_28d0._Widget.Object == (SBox *)0x0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x25d,L""), bVar18)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    local_2b88.Object = (SWidget *)local_28d0._Widget.Object;
    local_2b88.SharedReferenceCount.ReferenceController = FVar15.ReferenceController;
    if (FVar15.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar15.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar15.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      (FVar15.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar15.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    TSharedPtr<SWidget,1>::operator=((TSharedPtr<SWidget,1> *)&pFVar23->field_0x8,&local_2b88);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2b88.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar15.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar15.ReferenceController);
    SBoxPanel::FScopedWidgetSlotArguments<SHorizontalBox::FSlot>::
    ~FScopedWidgetSlotArguments<SHorizontalBox::FSlot>(&local_1dd0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2bd8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2b98.SharedReferenceCount.ReferenceController);
  return;
}

// GetComponentLabelText @ 14d8665f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __thiscall
UE::ColorGrading::SColorGradingComponentViewer::GetComponentLabelText
          (SColorGradingComponentViewer *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  EColorGradingComponent *pEVar2;
  FText *pFVar3;
  undefined1 local_res8 [8];
  
  pEVar2 = TAttribute<enum_UE::ColorGrading::EColorGradingComponent>::Get(&this->Component);
  switch(*pEVar2) {
  case Red:
    FText::AsLocalizable_Advanced_LocText
              (__return_storage_ptr__,L"ColorGradingEditor",L"ColorWheel_RedComponentLabel",L"R");
    return __return_storage_ptr__;
  case Green:
    FText::AsLocalizable_Advanced_LocText
              (__return_storage_ptr__,L"ColorGradingEditor",L"ColorWheel_GreenComponentLabel",L"G");
    return __return_storage_ptr__;
  case Blue:
    FText::AsLocalizable_Advanced_LocText
              (__return_storage_ptr__,L"ColorGradingEditor",L"ColorWheel_BlueComponentLabel",L"B");
    return __return_storage_ptr__;
  case Hue:
    FText::AsLocalizable_Advanced_LocText
              (__return_storage_ptr__,L"ColorGradingEditor",L"ColorWheel_HueComponentLabel",L"H");
    return __return_storage_ptr__;
  case Saturation:
    FText::AsLocalizable_Advanced_LocText
              (__return_storage_ptr__,L"ColorGradingEditor",L"ColorWheel_SaturationComponentLabel",
               L"S");
    return __return_storage_ptr__;
  case Value:
    FText::AsLocalizable_Advanced_LocText
              (__return_storage_ptr__,L"ColorGradingEditor",L"ColorWheel_ValueComponentLabel",L"V");
    return __return_storage_ptr__;
  case Luminance:
    FText::AsLocalizable_Advanced_LocText
              (__return_storage_ptr__,L"ColorGradingEditor",L"ColorWheel_LuminanceComponentLabel",
               L"Y");
    return __return_storage_ptr__;
  }
  pFVar3 = FText::GetEmpty();
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (pFVar3->TextData).Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  __return_storage_ptr__->Flags = pFVar3->Flags;
  return __return_storage_ptr__;
}

// GetComponentToolTipText @ 14d8667a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __thiscall
UE::ColorGrading::SColorGradingComponentViewer::GetComponentToolTipText
          (SColorGradingComponentViewer *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  EColorGradingComponent *pEVar2;
  FText *pFVar3;
  undefined1 local_res8 [8];
  
  pEVar2 = TAttribute<enum_UE::ColorGrading::EColorGradingComponent>::Get(&this->Component);
  switch(*pEVar2) {
  case Red:
    FText::AsLocalizable_Advanced_LocText
              (__return_storage_ptr__,L"ColorGradingEditor",L"ColorWheel_RedComponentToolTip",L"Red"
              );
    return __return_storage_ptr__;
  case Green:
    FText::AsLocalizable_Advanced_LocText
              (__return_storage_ptr__,L"ColorGradingEditor",L"ColorWheel_GreenComponentToolTip",
               L"Green");
    return __return_storage_ptr__;
  case Blue:
    FText::AsLocalizable_Advanced_LocText
              (__return_storage_ptr__,L"ColorGradingEditor",L"ColorWheel_BlueComponentToolTip",
               L"Blue");
    return __return_storage_ptr__;
  case Hue:
    FText::AsLocalizable_Advanced_LocText
              (__return_storage_ptr__,L"ColorGradingEditor",L"ColorWheel_HueComponentToolTip",L"Hue"
              );
    return __return_storage_ptr__;
  case Saturation:
    FText::AsLocalizable_Advanced_LocText
              (__return_storage_ptr__,L"ColorGradingEditor",L"ColorWheel_SaturationComponentToolTip"
               ,L"Saturation");
    return __return_storage_ptr__;
  case Value:
    FText::AsLocalizable_Advanced_LocText
              (__return_storage_ptr__,L"ColorGradingEditor",L"ColorWheel_ValueComponentToolTip",
               L"Value");
    return __return_storage_ptr__;
  case Luminance:
    FText::AsLocalizable_Advanced_LocText
              (__return_storage_ptr__,L"ColorGradingEditor",L"ColorWheel_LuminanceComponentToolTip",
               L"Luminance");
    return __return_storage_ptr__;
  }
  pFVar3 = FText::GetEmpty();
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (pFVar3->TextData).Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  __return_storage_ptr__->Flags = pFVar3->Flags;
  return __return_storage_ptr__;
}

// GetMaxSliderValue @ 14d869010

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

float __thiscall
UE::ColorGrading::SColorGradingComponentViewer::GetMaxSliderValue
          (SColorGradingComponentViewer *this)

{
  code *pcVar1;
  bool bVar2;
  TOptional<float> *pTVar3;
  float fVar4;
  
  if ((this->MaxSliderValue).bIsSet != false) {
    pTVar3 = TAttribute<TOptional<float>_>::Get(&this->MaxSliderValue);
    if (pTVar3->bIsSet != false) {
      pTVar3 = TAttribute<TOptional<float>_>::Get(&this->MaxSliderValue);
      if (pTVar3->bIsSet == false) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          fVar4 = (float)(*pcVar1)();
          return fVar4;
        }
      }
      return pTVar3->TypedValue;
    }
  }
  pTVar3 = TAttribute<TOptional<float>_>::Get(&this->MaxValue);
  if (pTVar3->bIsSet != false) {
    return pTVar3->TypedValue;
  }
  return __real_7f7fffff;
}

// GetMinSliderValue @ 14d869140

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

float __thiscall
UE::ColorGrading::SColorGradingComponentViewer::GetMinSliderValue
          (SColorGradingComponentViewer *this)

{
  code *pcVar1;
  bool bVar2;
  TOptional<float> *pTVar3;
  float fVar4;
  
  if ((this->MinSliderValue).bIsSet != false) {
    pTVar3 = TAttribute<TOptional<float>_>::Get(&this->MinSliderValue);
    if (pTVar3->bIsSet != false) {
      pTVar3 = TAttribute<TOptional<float>_>::Get(&this->MinSliderValue);
      if (pTVar3->bIsSet == false) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          fVar4 = (float)(*pcVar1)();
          return fVar4;
        }
      }
      return pTVar3->TypedValue;
    }
  }
  pTVar3 = TAttribute<TOptional<float>_>::Get(&this->MinValue);
  if (pTVar3->bIsSet != false) {
    return pTVar3->TypedValue;
  }
  return __real_00800000;
}

// GetValue @ 14d86d7f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

float __thiscall
UE::ColorGrading::SColorGradingComponentViewer::GetValue(SColorGradingComponentViewer *this)

{
  TOptional<float> *pTVar1;
  
  if ((this->OptionalValue).bIsSet != false) {
    pTVar1 = TAttribute<TOptional<float>_>::Get(&this->OptionalValue);
    if (pTVar1->bIsSet != false) {
      return pTVar1->TypedValue;
    }
  }
  return 0.0;
}

