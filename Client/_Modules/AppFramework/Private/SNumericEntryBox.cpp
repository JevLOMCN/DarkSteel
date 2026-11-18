// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 68

// ~SNumericEntryBox<int> @ 142f37e30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall SNumericEntryBox<int>::~SNumericEntryBox<int>(SNumericEntryBox<int> *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  ITextData *pIVar3;
  
  TAttribute<TOptional<FTextFormat>_>::~TAttribute<TOptional<FTextFormat>_>
            (&this->ToolTipTextFormat);
  TAttribute<TOptional<int>_>::~TAttribute<TOptional<int>_>(&this->MaxFractionalDigits);
  TAttribute<TOptional<int>_>::~TAttribute<TOptional<int>_>(&this->MinFractionalDigits);
  pFVar1 = (this->CachedValueString).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Interface).SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->MinDesiredValueWidth).Getter);
  pvVar2 = *(void **)&(this->MinDesiredValueWidth).Getter.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->MinDesiredValueWidth).Getter);
  pIVar3 = (this->UndeterminedString).TextData.Reference;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  TDelegate<void___cdecl(FText,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(FText,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
            (&this->OnUndeterminedValueCommitted);
  TDelegate<void___cdecl(FText),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(FText),FDefaultDelegateUserPolicy>(&this->OnUndeterminedValueChanged);
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
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->EditableText).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SpinBox).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ToggleCheckBox).SharedReferenceCount.ReferenceController);
  TAttribute<TOptional<int>_>::~TAttribute<TOptional<int>_>(&this->ValueAttribute);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->LabelAttribute).Getter);
  pvVar2 = *(void **)&(this->LabelAttribute).Getter.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->LabelAttribute).Getter);
  if ((*(int *)((longlong)&(this->LabelAttribute).Value.field0_0x0 + 0xc) != -1) &&
     (pFVar1 = (this->LabelAttribute).Value.field0_0x0.TypedValue.Data.AllocatorInstance.Data,
     pFVar1 != (FScriptContainerElement *)0x0)) {
    FMemory::Free(pFVar1);
  }
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  return;
}

// ~SNumericEntryBox<float> @ 142f37fb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall SNumericEntryBox<float>::~SNumericEntryBox<float>(SNumericEntryBox<float> *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  ITextData *pIVar3;
  
  TAttribute<TOptional<FTextFormat>_>::~TAttribute<TOptional<FTextFormat>_>
            (&this->ToolTipTextFormat);
  TAttribute<TOptional<int>_>::~TAttribute<TOptional<int>_>(&this->MaxFractionalDigits);
  TAttribute<TOptional<int>_>::~TAttribute<TOptional<int>_>(&this->MinFractionalDigits);
  pFVar1 = (this->CachedValueString).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TSharedPtr<INumericTypeInterface<float>,1>::~TSharedPtr<INumericTypeInterface<float>,1>
            (&this->Interface);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->MinDesiredValueWidth).Getter);
  pvVar2 = *(void **)&(this->MinDesiredValueWidth).Getter.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->MinDesiredValueWidth).Getter);
  pIVar3 = (this->UndeterminedString).TextData.Reference;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  TDelegate<void___cdecl(FText,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(FText,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
            (&this->OnUndeterminedValueCommitted);
  TDelegate<void___cdecl(FText),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(FText),FDefaultDelegateUserPolicy>(&this->OnUndeterminedValueChanged);
  TDelegate<void___cdecl(float,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(float,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
            (&this->OnValueCommitted);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnValueChanged);
  pvVar2 = *(void **)&(this->OnValueChanged).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnValueChanged);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->EditableText).SharedReferenceCount.ReferenceController);
  TSharedPtr<SSpinBox<float>,1>::~TSharedPtr<SSpinBox<float>,1>(&this->SpinBox);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ToggleCheckBox).SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ValueAttribute).Getter);
  pvVar2 = *(void **)&(this->ValueAttribute).Getter.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ValueAttribute).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->LabelAttribute).Getter);
  pvVar2 = *(void **)&(this->LabelAttribute).Getter.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->LabelAttribute).Getter);
  if ((*(int *)((longlong)&(this->LabelAttribute).Value.field0_0x0 + 0xc) != -1) &&
     (pFVar1 = (this->LabelAttribute).Value.field0_0x0.TypedValue.Data.AllocatorInstance.Data,
     pFVar1 != (FScriptContainerElement *)0x0)) {
    FMemory::Free(pFVar1);
  }
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  return;
}

// ~SNumericEntryBox<double> @ 142f38130

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall SNumericEntryBox<double>::~SNumericEntryBox<double>(SNumericEntryBox<double> *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  ITextData *pIVar3;
  
  TAttribute<TOptional<FTextFormat>_>::~TAttribute<TOptional<FTextFormat>_>
            (&this->ToolTipTextFormat);
  TAttribute<TOptional<int>_>::~TAttribute<TOptional<int>_>(&this->MaxFractionalDigits);
  TAttribute<TOptional<int>_>::~TAttribute<TOptional<int>_>(&this->MinFractionalDigits);
  pFVar1 = (this->CachedValueString).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Interface).SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->MinDesiredValueWidth).Getter);
  pvVar2 = *(void **)&(this->MinDesiredValueWidth).Getter.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->MinDesiredValueWidth).Getter);
  pIVar3 = (this->UndeterminedString).TextData.Reference;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  TDelegate<void___cdecl(FText,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(FText,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
            (&this->OnUndeterminedValueCommitted);
  TDelegate<void___cdecl(FText),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(FText),FDefaultDelegateUserPolicy>(&this->OnUndeterminedValueChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnValueCommitted);
  pvVar2 = *(void **)&(this->OnValueCommitted).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnValueCommitted);
  TDelegate<void___cdecl(double),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(double),FDefaultDelegateUserPolicy>(&this->OnValueChanged);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->EditableText).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SpinBox).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ToggleCheckBox).SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ValueAttribute).Getter);
  pvVar2 = *(void **)&(this->ValueAttribute).Getter.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ValueAttribute).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->LabelAttribute).Getter);
  pvVar2 = *(void **)&(this->LabelAttribute).Getter.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->LabelAttribute).Getter);
  if ((*(int *)((longlong)&(this->LabelAttribute).Value.field0_0x0 + 0xc) != -1) &&
     (pFVar1 = (this->LabelAttribute).Value.field0_0x0.TypedValue.Data.AllocatorInstance.Data,
     pFVar1 != (FScriptContainerElement *)0x0)) {
    FMemory::Free(pFVar1);
  }
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  return;
}

// Construct @ 142f5fda0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000142f60eb8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall SNumericEntryBox<int>::Construct(SNumericEntryBox<int> *this,FArguments *param_1)

{
  TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy> *pTVar1;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *pTVar2;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *pTVar3;
  longlong *plVar4;
  TSharedPtr<INumericTypeInterface<int>,1> *this_00;
  TAttribute<TOptional<int>_> *this_01;
  TAttribute<TOptional<int>_> *this_02;
  ITextData *pIVar5;
  ITextData *pIVar6;
  void *pvVar7;
  FEditableTextBoxStyle *pFVar8;
  SWidget *pSVar9;
  code *pcVar10;
  bool bVar11;
  bool bVar12;
  TRawPtrProxy<TDefaultNumericTypeInterface<int>_> this_03;
  bool bVar13;
  bool bVar14;
  int iVar15;
  TSharedPtr<INumericTypeInterface<int>,1> *pTVar16;
  TDefaultNumericTypeInterface<int> *this_04;
  TDelegateBase<FNotThreadSafeDelegateMode> *pTVar17;
  INumericTypeInterface<int> *pIVar18;
  longlong lVar19;
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *this_05;
  TOptional<int> *pTVar20;
  TAttribute<TOptional<int>_> *pTVar21;
  TOptional<int> *pTVar22;
  FString *pFVar23;
  FArguments *pFVar24;
  undefined8 *puVar25;
  TSharedRef<SWidget_const_,1> *pTVar26;
  ulong64 uVar27;
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs> *pTVar28;
  FArguments *pFVar29;
  TAttribute<FSlateFontInfo> *pTVar30;
  TAttribute<int> *pTVar31;
  TAttribute<float> *pTVar32;
  TAttribute<bool> *pTVar33;
  TAttribute<TOptional<int>_> *pTVar34;
  TAttribute<TSharedPtr<INumericTypeInterface<int>,1>_> *pTVar35;
  TSlateDecl<SSpinBox<int>,RequiredArgs::T0RequiredArgs> *pTVar36;
  FArguments *pFVar37;
  TSharedRef<SWidget,1> *pTVar38;
  FArguments *pFVar39;
  FScopedWidgetSlotArguments *pFVar40;
  FSlotArguments *pFVar41;
  TSharedRef<SSpinBox<int>,1> *pTVar42;
  TAttribute<FMargin> *pTVar43;
  TSharedRef<SEditableText,1> *pTVar44;
  FArguments *pFVar45;
  TSharedRef<SBorder,1> *pTVar46;
  FArguments *pFVar47;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> *pTVar48;
  FScopedWidgetSlotArguments<SHorizontalBox::FSlot> *pFVar49;
  FSlotArguments *pFVar50;
  TSharedRef<SCheckBox,1> *pTVar51;
  TSharedRef<SHorizontalBox,1> *pTVar52;
  TDelegate<void___cdecl(ECheckBoxState),FDefaultDelegateUserPolicy> *pTVar53;
  ECheckBoxState *pEVar54;
  FScopedWidgetSlotArguments *pFVar55;
  TReferenceControllerBase<1> *pTVar56;
  bool bVar57;
  bool bVar58;
  undefined1 auStackY_30b8 [32];
  TSharedPtr<SWidget,1> local_3078;
  SWidget *local_3068;
  undefined4 uStack_3060;
  uint uStack_305c;
  T0RequiredArgs local_3058;
  T0RequiredArgs local_3057;
  T0RequiredArgs local_3056;
  T0RequiredArgs local_3055;
  T0RequiredArgs local_3054;
  T0RequiredArgs local_3053;
  T0RequiredArgs local_3052 [2];
  TRawPtrProxy<TDefaultNumericTypeInterface<int>_> local_3050;
  TReferenceControllerBase<1> *local_3048;
  undefined4 local_3040 [2];
  FArguments *local_3038;
  FLLMScope local_3030;
  FLLMScope local_302c;
  undefined1 local_3028 [56];
  TReferenceControllerBase<1> *local_2ff0;
  TSharedRef<SWidget,1> local_2fe8;
  undefined2 local_2fd8;
  undefined1 local_2fd0 [8];
  void *pvStack_2fc8;
  longlong local_2fc0;
  undefined2 local_2fb8;
  undefined1 local_2fb0 [8];
  void *pvStack_2fa8;
  longlong local_2fa0;
  undefined2 local_2f98;
  undefined1 local_2f90 [8];
  void *pvStack_2f88;
  longlong local_2f80;
  SOverlay *local_2f78;
  TReferenceControllerBase<1> *pTStack_2f70;
  Type local_2f68;
  bool local_2f64;
  undefined1 local_2f60 [24];
  FMemScope local_2f48;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *local_2f40;
  undefined4 local_2f38 [2];
  longlong local_2f30;
  FSharedReferencer<1> local_2f28;
  TSharedRef<SHorizontalBox,1> local_2f20;
  FName local_2f10;
  FMemScope local_2f08;
  undefined4 local_2f00 [2];
  FName local_2ef8;
  longlong local_2ef0;
  longlong lStack_2ee8;
  undefined1 local_2ee0;
  undefined1 local_2ed8 [8];
  void *pvStack_2ed0;
  undefined4 local_2ec8;
  TAttribute<TOptional<int>_> local_2ec0;
  TAttribute<TOptional<int>_> local_2e98;
  TAttribute<TOptional<int>_> local_2e70;
  TAttribute<TOptional<int>_> local_2e48;
  TAttribute<EVisibility> local_2e20;
  TSlateDecl<SEditableText,RequiredArgs::T0RequiredArgs> local_2e00;
  TAttribute<TOptional<int>_> local_2de8;
  TAttribute<TOptional<int>_> local_2dc0;
  TSharedRef<SWidget,1> local_2d98;
  undefined1 local_2d88 [16];
  TSharedRef<SWidget,1> local_2d78;
  TSharedRef<SWidget,1> local_2d68;
  TSharedRef<SWidget,1> local_2d58;
  TSharedRef<SWidget,1> local_2d48;
  undefined1 local_2d38 [24];
  undefined4 local_2d20;
  FLinearColor_u_0 local_2d18;
  undefined4 local_2d08;
  undefined1 local_2d04;
  FSharedReferencer<1> local_2d00;
  undefined1 auStack_2cf8 [16];
  undefined1 local_2ce8 [40];
  undefined8 local_2cc0;
  FLinearColor_u_0 local_2cb8;
  undefined4 local_2ca8;
  undefined1 local_2ca4;
  undefined8 local_2ca0;
  TRefCountPtr<ITextData> TStack_2c98;
  undefined8 local_2c90;
  FDestructionSentinel local_2c88;
  undefined1 *local_2c70;
  FDestructionSentinel local_2c68;
  INumericTypeInterface<int> *local_2c50;
  FDestructionSentinel local_2c48;
  undefined1 *local_2c30;
  FDestructionSentinel local_2c28;
  undefined1 *local_2c10;
  FDestructionSentinel local_2c08;
  undefined1 *local_2bf0;
  undefined1 local_2be8 [32];
  FSharedReferencer<1> FStack_2bc8;
  undefined8 local_2bc0;
  TSharedRef<SHorizontalBox,1> local_2bb8;
  TSharedRef<SCheckBox,1> local_2ba8;
  TSharedRef<SWidget_const_,1> local_2b98;
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> local_2b88;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_2b70;
  TSharedRef<SWidget,1> local_2b58;
  TSharedRef<SCheckBox,1> local_2b48;
  TSharedRef<SWidget_const_,1> local_2b38;
  void *local_2b28 [2];
  code *local_2b18;
  longlong lStack_2b10;
  INumericTypeInterface<int> *local_2b08;
  TReferenceControllerBase<1> *pTStack_2b00;
  undefined8 local_2af8;
  undefined8 uStack_2af0;
  undefined8 local_2ae8;
  TSharedPtr<INumericTypeInterface<int>,1> local_2ae0;
  TSharedRef<SWidget,1> local_2ad0;
  TSharedRef<SWidget,1> local_2ac0;
  SEditableText *local_2ab0;
  TReferenceControllerBase<1> *pTStack_2aa8;
  TSharedRef<SEditableText,1> local_2aa0;
  TSharedRef<SSpinBox<int>,1> local_2a90;
  code *local_2a78;
  TReferenceControllerBase<1> *pTStack_2a70;
  TSharedRef<SSpinBox<int>,1> local_2a68;
  code *local_2a58;
  TReferenceControllerBase<1> *pTStack_2a50;
  code *local_2a48;
  TReferenceControllerBase<1> *pTStack_2a40;
  TSharedRef<SEditableText,1> local_2a38;
  TAttribute<ECheckBoxState> local_2a28;
  TSharedPtr<INumericTypeInterface<int>,1> local_2a08;
  TSharedRef<SWidget_const_,1> local_29f8;
  TSharedRef<SBorder,1> local_29e8;
  TSharedRef<SCheckBox,1> local_29d8;
  TSharedRef<SWidget,1> local_29c8;
  TAttribute<FMargin> local_29b8;
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs> local_2988;
  TSlateDecl<SSpinBox<int>,RequiredArgs::T0RequiredArgs> local_2970;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_2958;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_2940;
  TAttribute<TOptional<int>_> local_2928;
  TAttribute<TOptional<int>_> local_2900;
  undefined1 local_28d8 [24];
  TAttribute<FMargin> local_28c0;
  TAttribute<FMargin> local_2890;
  TAttribute<float> local_2860;
  TAttribute<int> local_2840;
  TAttribute<bool> local_2820;
  TAttribute<float> local_2800;
  TAttribute<bool> local_27e0;
  TAttribute<float> local_27c0;
  TAttribute<int> local_27a0;
  TAttribute<float> local_2780;
  TAttribute<int> local_2760;
  TAttribute<FSlateFontInfo> local_2740;
  TAttribute<TOptional<int>_> local_26c0;
  TAttribute<TOptional<int>_> local_2698;
  TAttribute<TOptional<int>_> local_2670;
  TAttribute<TOptional<int>_> local_2648;
  TAttribute<TOptional<int>_> local_2620;
  TAttribute<TOptional<int>_> local_25f8;
  TAttribute<TOptional<int>_> local_25d0;
  TAttribute<FMargin> local_25a8;
  TAttribute<FMargin> local_2578;
  TAttribute<FMargin> local_2548;
  TAttribute<FMargin> local_2518;
  TAttribute<TSharedPtr<INumericTypeInterface<int>,1>_> local_24e8;
  TAttribute<FSlateFontInfo> local_24b8;
  TAttribute<FSlateFontInfo> local_2438;
  TAttribute<FSlateFontInfo> local_23b8;
  TAttribute<FSlateFontInfo> local_2338;
  FSlotArguments local_22b8;
  FSlotArguments local_21d0;
  TAttribute<FSlateFontInfo> local_20e8;
  FScopedWidgetSlotArguments<SHorizontalBox::FSlot> local_2068;
  FScopedWidgetSlotArguments<SHorizontalBox::FSlot> local_1f68;
  FScopedWidgetSlotArguments<SHorizontalBox::FSlot> local_1e68;
  FArguments local_1d68;
  FArguments local_1b60;
  FArguments local_1958;
  FArguments local_1750;
  FArguments local_1370;
  FArguments local_f90;
  FArguments local_928;
  FScopedWidgetSlotArguments local_228;
  FScopedWidgetSlotArguments local_188;
  FScopedWidgetSlotArguments local_e8;
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x142f5fdc2;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_30b8;
  pTVar17 = (TDelegateBase<FNotThreadSafeDelegateMode> *)0x0;
  local_3040[0] = 0;
  if ((param_1->_EditableTextBoxStyle == (FEditableTextBoxStyle *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("InArgs._EditableTextBoxStyle",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Input\\SNumericEntryBox.h"
                          ,0xd4,L""), bVar13)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::operator=
            (&this->OnValueChanged,&param_1->_OnValueChanged);
  TDelegate<void___cdecl(int,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>::operator=
            (&this->OnValueCommitted,&param_1->_OnValueCommitted);
  TDelegate<void___cdecl(FText),FDefaultDelegateUserPolicy>::operator=
            (&this->OnUndeterminedValueChanged,&param_1->_OnUndeterminedValueChanged);
  TDelegate<void___cdecl(FText,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>::operator=
            (&this->OnUndeterminedValueCommitted,&param_1->_OnUndeterminedValueCommitted);
  pTVar34 = &this->ValueAttribute;
  if (&param_1->_Value != pTVar34) {
    if ((param_1->_Value).Value.bIsSet == false) {
      if ((this->ValueAttribute).Value.bIsSet != false) {
        (this->ValueAttribute).Value.bIsSet = false;
      }
    }
    else {
      (pTVar34->Value).TypedValue = (param_1->_Value).Value.TypedValue;
      (this->ValueAttribute).Value.bIsSet = true;
    }
  }
  (this->ValueAttribute).bIsSet = (param_1->_Value).bIsSet;
  TDelegate<TOptional<int>___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&(this->ValueAttribute).Getter,&(param_1->_Value).Getter);
  pIVar5 = (param_1->_UndeterminedString).TextData.Reference;
  pIVar6 = (this->UndeterminedString).TextData.Reference;
  if (pIVar6 != pIVar5) {
    (this->UndeterminedString).TextData.Reference = pIVar5;
    if (pIVar5 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar5 + 8))(pIVar5,&local_3048);
    }
    if (pIVar6 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar6 + 0x10))(pIVar6);
    }
  }
  (this->UndeterminedString).Flags = (param_1->_UndeterminedString).Flags;
  (this->MinDesiredValueWidth).Value = (param_1->_MinDesiredValueWidth).Value;
  (this->MinDesiredValueWidth).bIsSet = (param_1->_MinDesiredValueWidth).bIsSet;
  local_2f40 = &(param_1->_MinDesiredValueWidth).Getter;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->MinDesiredValueWidth).Getter,local_2f40);
  this->BorderImageNormal = &param_1->_EditableTextBoxStyle->BackgroundImageNormal;
  this->BorderImageHovered = &param_1->_EditableTextBoxStyle->BackgroundImageHovered;
  this->BorderImageFocused = &param_1->_EditableTextBoxStyle->BackgroundImageFocused;
  if ((param_1->_TypeInterface).Object == (INumericTypeInterface<int> *)0x0) {
    this_04 = ::operator_new(0x10);
    if (this_04 != (TDefaultNumericTypeInterface<int> *)0x0) {
      pTVar17 = (TDelegateBase<FNotThreadSafeDelegateMode> *)
                TDefaultNumericTypeInterface<int>::TDefaultNumericTypeInterface<int>(this_04);
    }
    local_3050.Object = (TDefaultNumericTypeInterface<int> *)pTVar17;
    pTVar16 = TSharedPtr<INumericTypeInterface<int>,1>::
              TSharedPtr<INumericTypeInterface<int>,1><TDefaultNumericTypeInterface<int>_>
                        (&local_2ae0,&local_3050);
    bVar58 = true;
    bVar13 = false;
  }
  else {
    pTVar16 = TSharedPtr<INumericTypeInterface<int>,1>::TSharedPtr<INumericTypeInterface<int>,1>
                        (&local_2a08,&param_1->_TypeInterface);
    bVar58 = false;
    bVar13 = true;
  }
  pIVar18 = pTVar16->Object;
  this_00 = &this->Interface;
  pTVar56 = (pTVar16->SharedReferenceCount).ReferenceController;
  if (pTVar56 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar56->SharedReferenceCount = (atomic<int>)((int)pTVar56->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2b08 = this_00->Object;
  pTStack_2b00 = (this->Interface).SharedReferenceCount.ReferenceController;
  this_00->Object = pIVar18;
  (this->Interface).SharedReferenceCount.ReferenceController = pTVar56;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_2b00);
  if (bVar58) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2ae0.SharedReferenceCount.ReferenceController);
  }
  if (bVar13) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2a08.SharedReferenceCount.ReferenceController);
  }
  if ((param_1->_TypeInterface).Object != (INumericTypeInterface<int> *)0x0) {
    pIVar18 = TSharedPtr<INumericTypeInterface<int>,1>::operator->(this_00);
    lVar19 = (**(code **)((longlong)*pIVar18 + 0x50))(pIVar18);
    if (lVar19 != 0) {
      pIVar18 = TSharedPtr<INumericTypeInterface<int>,1>::operator->(this_00);
      this_05 = (TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                (**(code **)((longlong)*pIVar18 + 0x50))(pIVar18);
      uStack_3060 = 0;
      local_3068 = (SWidget *)ResetCachedValueString;
      lStack_2b10 = (ulonglong)uStack_305c << 0x20;
      local_2b18 = ResetCachedValueString;
      TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
      AddSP<SNumericEntryBox<int>_>
                (this_05,(SNumericEntryBox<int> *)local_3028,(pmf_ee1cbc84 *)this);
    }
  }
  pTVar20 = TAttribute<TOptional<int>_>::Get(&param_1->_MinFractionalDigits);
  bVar13 = pTVar20->bIsSet == false;
  if (bVar13) {
    pTVar21 = TAttribute<TOptional<int>_>::TAttribute<TOptional<int>_><int>
                        (&local_2900,&DefaultMinFractionalDigits);
  }
  else {
    pTVar21 = TAttribute<TOptional<int>_>::TAttribute<TOptional<int>_>
                        (&local_2928,&param_1->_MinFractionalDigits);
  }
  this_01 = &this->MinFractionalDigits;
  if (pTVar21 != this_01) {
    if ((pTVar21->Value).bIsSet == false) {
      if ((this->MinFractionalDigits).Value.bIsSet != false) {
        (this->MinFractionalDigits).Value.bIsSet = false;
      }
    }
    else {
      (this_01->Value).TypedValue = (pTVar21->Value).TypedValue;
      (this->MinFractionalDigits).Value.bIsSet = true;
    }
  }
  (this->MinFractionalDigits).bIsSet = pTVar21->bIsSet;
  TDelegate<TOptional<int>___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&(this->MinFractionalDigits).Getter,&pTVar21->Getter);
  if (bVar13) {
    TAttribute<TOptional<int>_>::~TAttribute<TOptional<int>_>(&local_2900);
  }
  else {
    TAttribute<TOptional<int>_>::~TAttribute<TOptional<int>_>(&local_2928);
  }
  pTVar20 = TAttribute<TOptional<int>_>::Get(&param_1->_MaxFractionalDigits);
  if (pTVar20->bIsSet == false) {
    local_2ec0.Value.bIsSet = true;
    pTVar21 = &local_2ec0;
    iVar15 = 6;
    local_2ec0.Getter._16_8_ = 0;
    local_2ec0.Value.TypedValue = 6;
    bVar58 = false;
    bVar13 = true;
    local_2ec0.bIsSet = true;
    local_2ec0.Getter._0_8_ = 0;
    local_2ec0.Getter._8_8_ = 0;
  }
  else {
    local_2e98.Value.bIsSet = (param_1->_MaxFractionalDigits).Value.bIsSet;
    if (local_2e98.Value.bIsSet != false) {
      local_2e98.Value.TypedValue = (param_1->_MaxFractionalDigits).Value.TypedValue;
    }
    local_2e98.bIsSet = (param_1->_MaxFractionalDigits).bIsSet;
    local_2e98.Getter._16_4_ = 0;
    local_2e98.Getter._0_8_ = 0;
    local_2e98.Getter._8_8_ = 0;
    TDelegate<TOptional<int>___cdecl(void),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>(&local_2e98.Getter,&(param_1->_MaxFractionalDigits).Getter)
    ;
    pTVar21 = &local_2e98;
    bVar58 = true;
    bVar13 = false;
    iVar15 = local_2e98.Value.TypedValue;
  }
  this_02 = &this->MaxFractionalDigits;
  if (pTVar21 != this_02) {
    if ((pTVar21->Value).bIsSet == false) {
      if ((this->MaxFractionalDigits).Value.bIsSet != false) {
        (this->MaxFractionalDigits).Value.bIsSet = false;
      }
    }
    else {
      (this_02->Value).TypedValue = iVar15;
      (this->MaxFractionalDigits).Value.bIsSet = true;
    }
  }
  (this->MaxFractionalDigits).bIsSet = pTVar21->bIsSet;
  TDelegate<TOptional<int>___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&(this->MaxFractionalDigits).Getter,&pTVar21->Getter);
  if (bVar13) {
    TAttribute<TOptional<int>_>::~TAttribute<TOptional<int>_>(&local_2ec0);
  }
  if (bVar58) {
    TAttribute<TOptional<int>_>::~TAttribute<TOptional<int>_>(&local_2e98);
  }
  if ((this_00->Object == (INumericTypeInterface<int> *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar13)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  local_3038 = (FArguments *)this_00->Object;
  local_3068 = *(SWidget **)((longlong)*(INumericTypeInterface<int> *)local_3038 + 0x20);
  pTVar20 = TAttribute<TOptional<int>_>::Get(this_01);
  if (pTVar20->bIsSet == false) {
    local_2dc0.Value.bIsSet = (this->MinFractionalDigits).Value.bIsSet;
    if (local_2dc0.Value.bIsSet != false) {
      local_2dc0.Value.TypedValue = (this_01->Value).TypedValue;
    }
    local_2dc0.bIsSet = (this->MinFractionalDigits).bIsSet;
    local_2dc0.Getter._16_4_ = 0;
    local_2dc0.Getter._0_8_ = 0;
    local_2dc0.Getter._8_8_ = 0;
    TDelegate<TOptional<int>___cdecl(void),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>(&local_2dc0.Getter,&(this->MinFractionalDigits).Getter);
    pTVar21 = &local_2dc0;
    bVar58 = false;
    bVar13 = true;
  }
  else {
    pTVar20 = TAttribute<TOptional<int>_>::Get(this_01);
    local_2e70.Value.bIsSet = pTVar20->bIsSet;
    if (local_2e70.Value.bIsSet != false) {
      local_2e70.Value.TypedValue = pTVar20->TypedValue;
    }
    local_2e70.bIsSet = true;
    pTVar21 = &local_2e70;
    local_2e70.Getter._16_8_ = 0;
    bVar58 = true;
    bVar13 = false;
    local_2e70.Getter._0_8_ = 0;
    local_2e70.Getter._8_8_ = 0;
  }
  (*(code *)local_3068)(local_3038,pTVar21);
  if (bVar13) {
    TAttribute<TOptional<int>_>::~TAttribute<TOptional<int>_>(&local_2dc0);
  }
  if (bVar58) {
    TAttribute<TOptional<int>_>::~TAttribute<TOptional<int>_>(&local_2e70);
  }
  this->bCachedValueStringDirty = true;
  if ((this_00->Object == (INumericTypeInterface<int> *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar13)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  local_3068 = (SWidget *)this_00->Object;
  local_3038 = *(FArguments **)(local_3068->_padding_ + 0x28);
  pTVar20 = TAttribute<TOptional<int>_>::Get(this_02);
  if (pTVar20->bIsSet == false) {
    local_2de8.Value.bIsSet = (this->MaxFractionalDigits).Value.bIsSet;
    if (local_2de8.Value.bIsSet != false) {
      local_2de8.Value.TypedValue = (this_02->Value).TypedValue;
    }
    local_2de8.bIsSet = (this->MaxFractionalDigits).bIsSet;
    local_2de8.Getter._16_4_ = 0;
    local_2de8.Getter._0_8_ = 0;
    local_2de8.Getter._8_8_ = 0;
    TDelegate<TOptional<int>___cdecl(void),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>(&local_2de8.Getter,&(this->MaxFractionalDigits).Getter);
    pTVar21 = &local_2de8;
    bVar58 = false;
    bVar13 = true;
  }
  else {
    pTVar20 = TAttribute<TOptional<int>_>::Get(this_02);
    local_2e48.Value.bIsSet = pTVar20->bIsSet;
    if (local_2e48.Value.bIsSet != false) {
      local_2e48.Value.TypedValue = pTVar20->TypedValue;
    }
    local_2e48.bIsSet = true;
    pTVar21 = &local_2e48;
    local_2e48.Getter._16_8_ = 0;
    bVar58 = true;
    bVar13 = false;
    local_2e48.Getter._0_8_ = 0;
    local_2e48.Getter._8_8_ = 0;
  }
  (*(code *)local_3038)(local_3068,pTVar21);
  if (bVar13) {
    TAttribute<TOptional<int>_>::~TAttribute<TOptional<int>_>(&local_2de8);
  }
  if (bVar58) {
    TAttribute<TOptional<int>_>::~TAttribute<TOptional<int>_>(&local_2e48);
  }
  bVar11 = false;
  bVar58 = false;
  bVar13 = false;
  this->bCachedValueStringDirty = true;
  TAttribute<TOptional<FTextFormat>_>::operator=
            (&this->ToolTipTextFormat,&param_1->_ToolTipTextFormat);
  pTVar22 = TAttribute<TOptional<int>_>::Get(pTVar34);
  pTVar20 = &this->CachedExternalValue;
  if (pTVar22 != pTVar20) {
    if (pTVar22->bIsSet == false) {
      if ((this->CachedExternalValue).bIsSet != false) {
        (this->CachedExternalValue).bIsSet = false;
      }
    }
    else {
      pTVar20->TypedValue = pTVar22->TypedValue;
      (this->CachedExternalValue).bIsSet = true;
    }
  }
  if ((this->CachedExternalValue).bIsSet != false) {
    pIVar18 = TSharedPtr<INumericTypeInterface<int>,1>::operator->(this_00);
    local_3068 = *(SWidget **)((longlong)*pIVar18 + 0x38);
    if (((this->CachedExternalValue).bIsSet == false) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar14)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pFVar23 = (FString *)(*(code *)local_3068)(pIVar18,local_2b28,pTVar20);
    ::FString::operator=(&this->CachedValueString,pFVar23);
    if (local_2b28[0] != (void *)0x0) {
      FMemory::Free(local_2b28[0]);
    }
  }
  this->bCachedValueStringDirty = false;
  bVar14 = param_1->_DisplayToggle;
  if (bVar14 != false) {
    pFVar24 = SCheckBox::FArguments::FArguments(&local_1750);
    local_2be8[0x10] = true;
    local_2bc0._0_1_ = false;
    local_2bc0._1_7_ = 0;
    local_2be8._0_8_ = ___xmm_00000000400000000000000000000000;
    local_2be8._8_8_ = _UNK_15076aed8;
    local_2be8._24_8_ = (FTextFormatData *)0x0;
    FStack_2bc8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar24 = SCheckBox::FArguments::Padding(pFVar24,(TAttribute<FMargin> *)local_2be8);
    local_2a28.Value = (param_1->_ToggleChecked).Value;
    local_2a28.bIsSet = (param_1->_ToggleChecked).bIsSet;
    TDelegate<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy>
              (&local_2a28.Getter,&(param_1->_ToggleChecked).Getter);
    pFVar24 = SCheckBox::FArguments::IsChecked(pFVar24,&local_2a28);
    local_3038 = pFVar24;
    local_3050.Object =
         (TDefaultNumericTypeInterface<int> *)
         TDelegate<void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy>::
         TDelegate<void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy>
                   (local_28d8,&param_1->_OnToggleChanged);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &pFVar24->_OnCheckStateChanged,(FWriteAccessScope *)&local_2c88);
    local_2c70 = &(pFVar24->_OnCheckStateChanged).field_0x8;
    puVar25 = UE::Core::Private::DelegateAllocate(0x48,(FDelegateAllocation *)local_2c70);
    pTVar56 = (TReferenceControllerBase<1> *)local_3028._0_8_;
    if (puVar25 != (undefined8 *)0x0) {
      local_3078.Object = (SWidget *)HandleToggleCheckBoxChanged;
      local_3078.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)
           ((ulonglong)local_2fe8.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
      pTVar26 = TSharedFromThis<SWidget,1>::AsShared
                          ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_2b38);
      pTVar56 = (pTVar26->SharedReferenceCount).ReferenceController;
      local_3068 = pTVar26->Object;
      if (pTVar56 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar56->SharedReferenceCount = (atomic<int>)((int)pTVar56->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar56->SharedReferenceCount = (atomic<int>)((int)pTVar56->SharedReferenceCount + 1);
        UNLOCK();
      }
      *puVar25 = &
                 ___7__TCommonDelegateInstanceState___A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy______6B_
      ;
      bVar11 = true;
      bVar58 = true;
      bVar13 = true;
      local_3048 = pTVar56;
      TDelegate<void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy>::
      TDelegate<void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy>
                (puVar25 + 1,
                 (TDelegate<void___cdecl(ECheckBoxState),FDefaultDelegateUserPolicy> *)
                 local_3050.Object);
      uVar27 = FDelegateHandle::GenerateNewID();
      puVar25[4] = uVar27;
      *puVar25 = &
                 ___7__TBaseSPMethodDelegateInstance__00__CBV__SNumericEntryBox_H___00__A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy______6B_
      ;
      puVar25[5] = local_3068;
      puVar25[6] = pTVar56;
      if (pTVar56 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar56->WeakReferenceCount = (atomic<int>)((int)pTVar56->WeakReferenceCount + 1);
        UNLOCK();
      }
      puVar25[7] = local_3078.Object;
      puVar25[8] = local_3078.SharedReferenceCount.ReferenceController;
      pTVar56 = local_3048;
    }
    if (bVar13) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar56);
    }
    if (bVar58) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar56);
    }
    if (bVar11) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2b38.SharedReferenceCount.ReferenceController);
    }
    if (local_2c88.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2c88.Accessor,&local_2c88);
    }
    this_03.Object = local_3050.Object;
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3050.Object);
    pvVar7 = *(void **)&(this_03.Object)->MinFractionalDigits;
    if (pvVar7 != (void *)0x0) {
      FMemory::Free(pvVar7);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)this_03.Object);
    pTVar28 = MakeTDecl<SCheckBox,RequiredArgs::T0RequiredArgs>
                        (&local_2988,"SCheckBox",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Input\\SNumericEntryBox.h"
                         ,0xf8,&local_3058);
    pTVar28 = TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>::Expose<SCheckBox>
                        (pTVar28,&this->ToggleCheckBox);
    TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>::operator<<=(pTVar28,&local_2b48,local_3038);
    TSharedRef<SCheckBox,1>::~TSharedRef<SCheckBox,1>(&local_2b48);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2988._Widget.SharedReferenceCount.ReferenceController);
    SCheckBox::FArguments::~FArguments(&local_1750);
  }
  bVar12 = false;
  bVar11 = false;
  bVar58 = false;
  bVar13 = param_1->_AllowSpin;
  if (bVar13 != false) {
    pFVar29 = SSpinBox<int>::FArguments::FArguments(&local_928);
    pFVar29->_Style = param_1->_SpinBoxStyle;
    bVar57 = (param_1->_Font).bIsSet == false;
    if (bVar57) {
      pTVar30 = TAttribute<FSlateFontInfo>::TAttribute<FSlateFontInfo><FSlateFontInfo>
                          (&local_24b8,&(param_1->_EditableTextBoxStyle->TextStyle).Font);
    }
    else {
      pTVar30 = TAttribute<FSlateFontInfo>::TAttribute<FSlateFontInfo>(&local_2438,&param_1->_Font);
    }
    pTVar30 = TAttribute<FSlateFontInfo>::TAttribute<FSlateFontInfo>(&local_20e8,pTVar30);
    TAttribute<FSlateFontInfo>::operator=(&pFVar29->_Font,pTVar30);
    TAttribute<FSlateFontInfo>::~TAttribute<FSlateFontInfo>(pTVar30);
    (pFVar29->_Value).bIsSet = true;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(pFVar29->_Value).Getter,
               (FWriteAccessScope *)&local_2c68);
    local_2c50 = (INumericTypeInterface<int> *)&(pFVar29->_Value).Getter.field_0x8;
    local_3050.Object = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_2c50);
    pTVar56 = (TReferenceControllerBase<1> *)local_3028._0_8_;
    if ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3050.Object !=
        (TDelegateBase<FNotThreadSafeDelegateMode> *)0x0) {
      local_3078.Object = (SWidget *)OnGetValueForSpinBox;
      local_3078.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)
           ((ulonglong)local_2fe8.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
      pTVar26 = TSharedFromThis<SWidget,1>::AsShared
                          ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_2b98);
      pTVar56 = (pTVar26->SharedReferenceCount).ReferenceController;
      local_3068 = pTVar26->Object;
      if (pTVar56 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar56->SharedReferenceCount = (atomic<int>)((int)pTVar56->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar56->SharedReferenceCount = (atomic<int>)((int)pTVar56->SharedReferenceCount + 1);
        UNLOCK();
      }
      bVar12 = true;
      bVar11 = true;
      bVar58 = true;
      (local_3050.Object)->_padding_ =
           (longlong)
           &___7__TCommonDelegateInstanceState___A6AHXZUFDefaultDelegateUserPolicy____V__6B_;
      local_3048 = pTVar56;
      uVar27 = FDelegateHandle::GenerateNewID();
      local_3050.Object[1]._padding_ = uVar27;
      (local_3050.Object)->_padding_ =
           (longlong)
           &
           ___7__TBaseSPMethodDelegateInstance__00__CBV__SNumericEntryBox_H___00__A6AHXZUFDefaultDelegateUserPolicy____V__6B_
      ;
      *(SWidget **)&local_3050.Object[1].MinFractionalDigits = local_3068;
      local_3050.Object[2]._padding_ = (longlong)pTVar56;
      if (pTVar56 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar56->WeakReferenceCount = (atomic<int>)((int)pTVar56->WeakReferenceCount + 1);
        UNLOCK();
      }
      *(SWidget **)&local_3050.Object[2].MinFractionalDigits = local_3078.Object;
      *(TReferenceControllerBase<1> **)(local_3050.Object + 3) =
           local_3078.SharedReferenceCount.ReferenceController;
      pTVar56 = local_3048;
    }
    if (bVar58) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar56);
    }
    if (bVar11) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar56);
    }
    if (bVar12) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2b98.SharedReferenceCount.ReferenceController);
    }
    if (local_2c68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2c68.Accessor,&local_2c68);
    }
    pTVar31 = TAttribute<int>::TAttribute<int>(&local_2760,&param_1->_Delta);
    pTVar1 = &pTVar31->Getter;
    (pFVar29->_Delta).Value = pTVar31->Value;
    (pFVar29->_Delta).bIsSet = pTVar31->bIsSet;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar29->_Delta).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar1);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar1);
    pvVar7 = *(void **)&(pTVar31->Getter).field_0x8;
    if (pvVar7 != (void *)0x0) {
      FMemory::Free(pvVar7);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)pTVar1);
    pTVar32 = TAttribute<float>::TAttribute<float>(&local_2800,&param_1->_ShiftMultiplier);
    pTVar2 = &pTVar32->Getter;
    (pFVar29->_ShiftMultiplier).Value = pTVar32->Value;
    (pFVar29->_ShiftMultiplier).bIsSet = pTVar32->bIsSet;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar29->_ShiftMultiplier).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar2);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar2);
    pvVar7 = *(void **)&(pTVar32->Getter).field_0x8;
    if (pvVar7 != (void *)0x0) {
      FMemory::Free(pvVar7);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)pTVar2);
    pTVar32 = TAttribute<float>::TAttribute<float>(&local_2860,&param_1->_CtrlMultiplier);
    pTVar2 = &pTVar32->Getter;
    (pFVar29->_CtrlMultiplier).Value = pTVar32->Value;
    (pFVar29->_CtrlMultiplier).bIsSet = pTVar32->bIsSet;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar29->_CtrlMultiplier).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar2);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar2);
    pvVar7 = *(void **)&(pTVar32->Getter).field_0x8;
    if (pvVar7 != (void *)0x0) {
      FMemory::Free(pvVar7);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)pTVar2);
    pTVar31 = TAttribute<int>::TAttribute<int>(&local_2840,&param_1->_LinearDeltaSensitivity);
    pTVar1 = &pTVar31->Getter;
    (pFVar29->_LinearDeltaSensitivity).Value = pTVar31->Value;
    (pFVar29->_LinearDeltaSensitivity).bIsSet = pTVar31->bIsSet;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)
               &(pFVar29->_LinearDeltaSensitivity).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar1);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar1);
    pvVar7 = *(void **)&(pTVar31->Getter).field_0x8;
    if (pvVar7 != (void *)0x0) {
      FMemory::Free(pvVar7);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)pTVar1);
    pTVar33 = TAttribute<bool>::TAttribute<bool>
                        (&local_2820,&param_1->_SupportDynamicSliderMaxValue);
    pTVar3 = &pTVar33->Getter;
    (pFVar29->_SupportDynamicSliderMaxValue).Value = pTVar33->Value;
    (pFVar29->_SupportDynamicSliderMaxValue).bIsSet = pTVar33->bIsSet;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)
               &(pFVar29->_SupportDynamicSliderMaxValue).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar3);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar3);
    pvVar7 = *(void **)&(pTVar33->Getter).field_0x8;
    if (pvVar7 != (void *)0x0) {
      FMemory::Free(pvVar7);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)pTVar3);
    pTVar33 = TAttribute<bool>::TAttribute<bool>
                        (&local_27e0,&param_1->_SupportDynamicSliderMinValue);
    pTVar3 = &pTVar33->Getter;
    (pFVar29->_SupportDynamicSliderMinValue).Value = pTVar33->Value;
    (pFVar29->_SupportDynamicSliderMinValue).bIsSet = pTVar33->bIsSet;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)
               &(pFVar29->_SupportDynamicSliderMinValue).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar3);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar3);
    pvVar7 = *(void **)&(pTVar33->Getter).field_0x8;
    if (pvVar7 != (void *)0x0) {
      FMemory::Free(pvVar7);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)pTVar3);
    TDelegate<void___cdecl(int,TWeakPtr<SWidget,1>,bool,bool),FDefaultDelegateUserPolicy>::operator=
              (&pFVar29->_OnDynamicSliderMaxValueChanged,&param_1->_OnDynamicSliderMaxValueChanged);
    TDelegate<void___cdecl(int,TWeakPtr<SWidget,1>,bool,bool),FDefaultDelegateUserPolicy>::operator=
              (&pFVar29->_OnDynamicSliderMinValueChanged,&param_1->_OnDynamicSliderMinValueChanged);
    TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::operator=
              (&pFVar29->_OnValueChanged,&this->OnValueChanged);
    TDelegate<void___cdecl(int,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>::operator=
              (&pFVar29->_OnValueCommitted,&this->OnValueCommitted);
    pTVar34 = TAttribute<TOptional<int>_>::TAttribute<TOptional<int>_>(&local_26c0,this_01);
    TAttribute<TOptional<int>_>::operator=(&pFVar29->_MinFractionalDigits,pTVar34);
    TAttribute<TOptional<int>_>::~TAttribute<TOptional<int>_>(pTVar34);
    pTVar34 = TAttribute<TOptional<int>_>::TAttribute<TOptional<int>_>(&local_2698,this_02);
    TAttribute<TOptional<int>_>::operator=(&pFVar29->_MaxFractionalDigits,pTVar34);
    TAttribute<TOptional<int>_>::~TAttribute<TOptional<int>_>(pTVar34);
    pTVar34 = TAttribute<TOptional<int>_>::TAttribute<TOptional<int>_>
                        (&local_2670,&param_1->_MinSliderValue);
    TAttribute<TOptional<int>_>::operator=(&pFVar29->_MinSliderValue,pTVar34);
    TAttribute<TOptional<int>_>::~TAttribute<TOptional<int>_>(pTVar34);
    pTVar34 = TAttribute<TOptional<int>_>::TAttribute<TOptional<int>_>
                        (&local_2648,&param_1->_MaxSliderValue);
    TAttribute<TOptional<int>_>::operator=(&pFVar29->_MaxSliderValue,pTVar34);
    TAttribute<TOptional<int>_>::~TAttribute<TOptional<int>_>(pTVar34);
    pTVar34 = TAttribute<TOptional<int>_>::TAttribute<TOptional<int>_>
                        (&local_2620,&param_1->_MaxValue);
    pFVar29 = SSpinBox<int>::FArguments::MaxValue(pFVar29,pTVar34);
    pTVar34 = TAttribute<TOptional<int>_>::TAttribute<TOptional<int>_>
                        (&local_25f8,&param_1->_MinValue);
    pFVar29 = SSpinBox<int>::FArguments::MinValue(pFVar29,pTVar34);
    pFVar29 = SSpinBox<int>::FArguments::ContextMenuExtender(pFVar29,&param_1->_ContextMenuExtender)
    ;
    pTVar32 = TAttribute<float>::TAttribute<float>(&local_27c0,&param_1->_SliderExponent);
    pFVar29 = SSpinBox<int>::FArguments::SliderExponent(pFVar29,pTVar32);
    pTVar31 = TAttribute<int>::TAttribute<int>(&local_27a0,&param_1->_SliderExponentNeutralValue);
    pFVar29 = SSpinBox<int>::FArguments::SliderExponentNeutralValue(pFVar29,pTVar31);
    pFVar29->_EnableWheel = param_1->_AllowWheel;
    pFVar29->_PreventThrottling = param_1->_PreventThrottling;
    pFVar29->_BroadcastValueChangesPerKey = param_1->_BroadcastValueChangesPerKey;
    pTVar34 = TAttribute<TOptional<int>_>::TAttribute<TOptional<int>_>
                        (&local_25d0,&param_1->_WheelStep);
    pFVar29 = SSpinBox<int>::FArguments::WheelStep(pFVar29,pTVar34);
    pFVar29 = SSpinBox<int>::FArguments::OnBeginSliderMovement
                        (pFVar29,&param_1->_OnBeginSliderMovement);
    pFVar29 = SSpinBox<int>::FArguments::OnEndSliderMovement(pFVar29,&param_1->_OnEndSliderMovement)
    ;
    pTVar32 = TAttribute<float>::TAttribute<float>(&local_2780,&param_1->_MinDesiredValueWidth);
    pFVar29 = SSpinBox<int>::FArguments::MinDesiredWidth(pFVar29,pTVar32);
    pTVar35 = TAttribute<TSharedPtr<INumericTypeInterface<int>,1>_>::
              TAttribute<TSharedPtr<INumericTypeInterface<int>,1>_><TSharedPtr<INumericTypeInterface<int>,1>_>
                        (&local_24e8,&this->Interface);
    pFVar29 = SSpinBox<int>::FArguments::TypeInterface(pFVar29,pTVar35);
    local_3078.Object = (SWidget *)GetToolTipText;
    local_3078.SharedReferenceCount.ReferenceController =
         local_3078.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
    local_2a78 = GetToolTipText;
    pTStack_2a70 = local_3078.SharedReferenceCount.ReferenceController;
    pFVar29 = TSlateBaseNamedArgs<SSpinBox<int>_>::ToolTipText<SNumericEntryBox<int>_>
                        ((TSlateBaseNamedArgs<SSpinBox<int>_> *)pFVar29,this,
                         (pmf_91ba5a66 *)&local_2a78);
    pTVar36 = MakeTDecl<SSpinBox<int>,RequiredArgs::T0RequiredArgs>
                        (&local_2970,"SSpinBox<NumericType>",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Input\\SNumericEntryBox.h"
                         ,0x103,&local_3057);
    pTVar36 = TSlateDecl<SSpinBox<int>,RequiredArgs::T0RequiredArgs>::Expose<SSpinBox<int>_>
                        (pTVar36,&this->SpinBox);
    TSlateDecl<SSpinBox<int>,RequiredArgs::T0RequiredArgs>::operator<<=(pTVar36,&local_2a68,pFVar29)
    ;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2a68.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2970._Widget.SharedReferenceCount.ReferenceController);
    if (!bVar57) {
      TAttribute<FSlateFontInfo>::~TAttribute<FSlateFontInfo>(&local_2438);
    }
    SSpinBox<int>::FArguments::~FArguments(&local_928);
  }
  bVar12 = false;
  bVar11 = false;
  bVar58 = false;
  pFVar37 = SEditableText::FArguments::FArguments(&local_f90);
  local_3078.SharedReferenceCount.ReferenceController =
       local_3078.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
  local_3078.Object = (SWidget *)OnGetValueForTextBox;
  local_2a58 = OnGetValueForTextBox;
  pTStack_2a50 = local_3078.SharedReferenceCount.ReferenceController;
  TAttribute<FText>::Bind<SNumericEntryBox<int>_>(&pFVar37->_Text,this,(pmf_91ba5a66 *)&local_2a58);
  local_3078.Object = (SWidget *)GetToolTipText;
  local_3078.SharedReferenceCount.ReferenceController =
       local_3078.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
  local_2a48 = GetToolTipText;
  pTStack_2a40 = local_3078.SharedReferenceCount.ReferenceController;
  TAttribute<FText>::Bind<SNumericEntryBox<int>_>
            ((TAttribute<FText> *)pFVar37,this,(pmf_91ba5a66 *)&local_2a48);
  pFVar8 = param_1->_EditableTextBoxStyle;
  local_2d18._0_8_ = *(undefined8 *)&(pFVar8->ForegroundColor).SpecifiedColor.field0_0x0;
  local_2d18._8_8_ =
       *(undefined8 *)((longlong)&(pFVar8->ForegroundColor).SpecifiedColor.field0_0x0 + 8);
  local_2d08._0_1_ = (pFVar8->ForegroundColor).ColorUseRule;
  local_2d08._1_1_ = (pFVar8->ForegroundColor).ColorTableId;
  local_2d08._2_2_ = *(undefined2 *)&(pFVar8->ForegroundColor).field_0x12;
  auStack_2cf8._8_8_ = 0;
  local_2d04 = 1;
  local_2d00.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  auStack_2cf8._0_8_ = 0;
  pFVar37 = SEditableText::FArguments::ColorAndOpacity
                      (pFVar37,(TAttribute<FSlateColor> *)&local_2d18._s_0);
  local_2e20.bIsSet = true;
  local_2e20.Value = EVisibility::Visible;
  if (bVar13 != false) {
    local_2e20.Value = EVisibility::Collapsed;
  }
  local_2e20.Getter._0_8_ = 0;
  local_2e20.Getter._8_8_ = 0;
  local_2e20.Getter._16_8_ = 0;
  pFVar37 = TSlateBaseNamedArgs<SEditableText>::Visibility
                      ((TSlateBaseNamedArgs<SEditableText> *)pFVar37,&local_2e20);
  bVar57 = (param_1->_Font).bIsSet == false;
  if (bVar57) {
    pTVar30 = TAttribute<FSlateFontInfo>::TAttribute<FSlateFontInfo><FSlateFontInfo>
                        (&local_23b8,&(param_1->_EditableTextBoxStyle->TextStyle).Font);
  }
  else {
    pTVar30 = TAttribute<FSlateFontInfo>::TAttribute<FSlateFontInfo>(&local_2338,&param_1->_Font);
  }
  FSlateFontInfo::FSlateFontInfo(&local_2740.Value,&pTVar30->Value);
  local_2740.bIsSet = pTVar30->bIsSet;
  TDelegate<FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy>
            (&local_2740.Getter,&pTVar30->Getter);
  pFVar37 = SEditableText::FArguments::Font(pFVar37,&local_2740);
  local_2fd8 = 0x101;
  local_2fc0 = 0;
  local_2fd0 = (undefined1  [8])0x0;
  pvStack_2fc8 = (void *)0x0;
  (pFVar37->_SelectAllTextWhenFocused).Value = true;
  (pFVar37->_SelectAllTextWhenFocused).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(pFVar37->_SelectAllTextWhenFocused).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2fd0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2fd0);
  if (pvStack_2fc8 != (void *)0x0) {
    FMemory::Free(pvStack_2fc8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2fd0);
  local_2fb8 = 0x100;
  local_2fa0 = 0;
  local_2fb0 = (undefined1  [8])0x0;
  pvStack_2fa8 = (void *)0x0;
  (pFVar37->_ClearKeyboardFocusOnCommit).Value = false;
  (pFVar37->_ClearKeyboardFocusOnCommit).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(pFVar37->_ClearKeyboardFocusOnCommit).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2fb0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2fb0);
  if (pvStack_2fa8 != (void *)0x0) {
    FMemory::Free(pvStack_2fa8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2fb0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar37->_OnTextChanged,
             (FWriteAccessScope *)&local_2c48);
  local_2c30 = &(pFVar37->_OnTextChanged).field_0x8;
  puVar25 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_2c30);
  pTVar56 = (TReferenceControllerBase<1> *)local_3028._0_8_;
  if (puVar25 != (undefined8 *)0x0) {
    local_3078.Object = (SWidget *)OnTextChanged;
    local_3078.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)
         ((ulonglong)local_2fe8.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
    pTVar38 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_2ad0);
    pTVar56 = (pTVar38->SharedReferenceCount).ReferenceController;
    local_3068 = pTVar38->Object;
    if (pTVar56 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar56->SharedReferenceCount = (atomic<int>)((int)pTVar56->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar56->SharedReferenceCount = (atomic<int>)((int)pTVar56->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar12 = true;
    bVar11 = true;
    bVar58 = true;
    *puVar25 = &
               ___7__TCommonDelegateInstanceState___A6AXAEBVFText___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar27 = FDelegateHandle::GenerateNewID();
    puVar25[2] = uVar27;
    *puVar25 = &
               ___7__TBaseSPMethodDelegateInstance__0A_V__SNumericEntryBox_H___00__A6AXAEBVFText___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar25[3] = local_3068;
    puVar25[4] = pTVar56;
    if (pTVar56 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar56->WeakReferenceCount = (atomic<int>)((int)pTVar56->WeakReferenceCount + 1);
      UNLOCK();
    }
    puVar25[5] = local_3078.Object;
    puVar25[6] = local_3078.SharedReferenceCount.ReferenceController;
  }
  if (bVar58) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar56);
  }
  if (bVar11) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar56);
  }
  if (bVar12) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2ad0.SharedReferenceCount.ReferenceController);
  }
  bVar12 = false;
  bVar11 = false;
  bVar58 = false;
  if (local_2c48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2c48.Accessor,&local_2c48);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar37->_OnTextCommitted,
             (FWriteAccessScope *)&local_2c28);
  local_2c10 = &(pFVar37->_OnTextCommitted).field_0x8;
  puVar25 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_2c10);
  pTVar56 = (TReferenceControllerBase<1> *)local_3028._0_8_;
  if (puVar25 != (undefined8 *)0x0) {
    local_3078.Object = (SWidget *)OnTextCommitted;
    local_3078.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)
         ((ulonglong)local_2fe8.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
    pTVar38 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_2ac0);
    pTVar56 = (pTVar38->SharedReferenceCount).ReferenceController;
    local_3068 = pTVar38->Object;
    if (pTVar56 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar56->SharedReferenceCount = (atomic<int>)((int)pTVar56->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar56->SharedReferenceCount = (atomic<int>)((int)pTVar56->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar12 = true;
    bVar11 = true;
    bVar58 = true;
    *puVar25 = &
               ___7__TCommonDelegateInstanceState___A6AXAEBVFText__W4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar27 = FDelegateHandle::GenerateNewID();
    puVar25[2] = uVar27;
    *puVar25 = &
               ___7__TBaseSPMethodDelegateInstance__0A_V__SNumericEntryBox_H___00__A6AXAEBVFText__W4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar25[3] = local_3068;
    puVar25[4] = pTVar56;
    if (pTVar56 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar56->WeakReferenceCount = (atomic<int>)((int)pTVar56->WeakReferenceCount + 1);
      UNLOCK();
    }
    puVar25[5] = local_3078.Object;
    puVar25[6] = local_3078.SharedReferenceCount.ReferenceController;
  }
  if (bVar58) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar56);
  }
  if (bVar11) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar56);
  }
  if (bVar12) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2ac0.SharedReferenceCount.ReferenceController);
  }
  if (local_2c28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2c28.Accessor,&local_2c28);
  }
  local_2f98 = 0x101;
  local_2f90 = (undefined1  [8])0x0;
  pvStack_2f88 = (void *)0x0;
  local_2f80 = 0;
  (pFVar37->_SelectAllTextOnCommit).Value = true;
  (pFVar37->_SelectAllTextOnCommit).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar37->_SelectAllTextOnCommit).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2f90);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2f90);
  if (pvStack_2f88 != (void *)0x0) {
    FMemory::Free(pvStack_2f88);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2f90);
  TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>::operator=
            (&pFVar37->_ContextMenuExtender,&param_1->_ContextMenuExtender);
  local_2f68 = (param_1->_Justification).Value;
  local_2f64 = (param_1->_Justification).bIsSet;
  TDelegate<enum_ETextJustify::Type___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<enum_ETextJustify::Type___cdecl(void),FDefaultDelegateUserPolicy>
            (local_2f60,&(param_1->_Justification).Getter);
  (pFVar37->_Justification).Value = local_2f68;
  (pFVar37->_Justification).bIsSet = local_2f64;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar37->_Justification).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2f60);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2f60);
  if ((void *)local_2f60._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_2f60._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2f60);
  local_2d38._0_4_ = (param_1->_MinDesiredValueWidth).Value;
  local_2d38[4] = (param_1->_MinDesiredValueWidth).bIsSet;
  local_2d38._8_8_ = 0;
  local_2d38._16_8_ = (SCheckBox *)0x0;
  local_2d20 = 0;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)(local_2d38 + 8),
             local_2f40);
  pFVar37 = SEditableText::FArguments::MinDesiredWidth(pFVar37,(TAttribute<float> *)local_2d38);
  FLLMScope::FLLMScope(&local_3030,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2ef8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2f48,&local_2ef8,true);
  TSlateDecl<SEditableText,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SEditableText,RequiredArgs::T0RequiredArgs>
            (&local_2e00,"SEditableText",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Input\\SNumericEntryBox.h"
             ,0x126,&local_3056);
  FMemScope::~FMemScope(&local_2f48);
  FLLMScope::~FLLMScope(&local_3030);
  if (local_2e00._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_2e00._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_2e00._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_2ab0 = (this->EditableText).Object;
  pTStack_2aa8 = (this->EditableText).SharedReferenceCount.ReferenceController;
  (this->EditableText).Object = local_2e00._Widget.Object;
  (this->EditableText).SharedReferenceCount.ReferenceController =
       local_2e00._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_2aa8);
  TSlateDecl<SEditableText,RequiredArgs::T0RequiredArgs>::operator<<=
            (&local_2e00,&local_2aa0,pFVar37);
  TSharedRef<SEditableText,1>::~TSharedRef<SEditableText,1>(&local_2aa0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2e00._Widget.SharedReferenceCount.ReferenceController);
  if (bVar57) {
    TAttribute<FSlateFontInfo>::~TAttribute<FSlateFontInfo>(&local_23b8);
  }
  else {
    TAttribute<FSlateFontInfo>::~TAttribute<FSlateFontInfo>(&local_2338);
  }
  SEditableText::FArguments::~FArguments(&local_f90);
  pFVar39 = SOverlay::FArguments::FArguments(&local_1d68);
  FLLMScope::FLLMScope(&local_302c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_3028._24_4_ = LLMTagDeclaration_UI_Slate.UniqueName.ComparisonIndex.Value;
  local_3028._28_4_ = LLMTagDeclaration_UI_Slate.UniqueName.Number;
  FMemScope::FMemScope((FMemScope *)(local_3028 + 0x10),(FName *)(local_3028 + 0x18),true);
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>
            (&local_2b88,"SOverlay",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Input\\SNumericEntryBox.h"
             ,0x135,&local_3055);
  FMemScope::~FMemScope((FMemScope *)(local_3028 + 0x10));
  FLLMScope::~FLLMScope(&local_302c);
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::operator<<=
            (&local_2b88,(TSharedRef<SOverlay,1> *)(local_3028 + 0x30),pFVar39);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2b88._Widget.SharedReferenceCount.ReferenceController);
  SOverlay::FArguments::~FArguments(&local_1d68);
  if (bVar13 != false) {
    pFVar40 = SOverlay::AddSlot((SOverlay *)local_3028._48_8_,&local_228,-1);
    pFVar41 = TAlignmentWidgetSlotMixin<SOverlay::FOverlaySlot>::FSlotArgumentsMixin::HAlign
                        ((FSlotArgumentsMixin *)&pFVar40->_padding_,HAlign_Fill);
    pFVar41 = TAlignmentWidgetSlotMixin<SOverlay::FOverlaySlot>::FSlotArgumentsMixin::VAlign
                        ((FSlotArgumentsMixin *)&pFVar41->_padding_,VAlign_Center);
    pTVar42 = TSharedPtr<SSpinBox<int>,1>::ToSharedRef(&this->SpinBox,&local_2a90);
    TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SSpinBox<int>_>(&local_2d98,pTVar42);
    TSlotBase<SOverlay::FOverlaySlot>::FSlotArguments::operator[]
              ((FSlotArguments *)pFVar41,&local_2d98);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2d98.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2a90.SharedReferenceCount.ReferenceController);
    TPanelChildren<SOverlay::FOverlaySlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
              (&local_228);
  }
  bVar58 = (param_1->_OverrideTextMargin).bIsSet == false;
  if (bVar58) {
    pTVar43 = TAttribute<FMargin>::TAttribute<FMargin><FMargin>
                        (&local_28c0,&param_1->_EditableTextBoxStyle->Padding);
  }
  else {
    pTVar43 = TAttribute<FMargin>::TAttribute<FMargin>(&local_2890,&param_1->_OverrideTextMargin);
  }
  local_2ef0._0_4_ = (pTVar43->Value).Left;
  local_2ef0._4_4_ = (pTVar43->Value).Top;
  lStack_2ee8._0_4_ = (pTVar43->Value).Right;
  lStack_2ee8._4_4_ = (pTVar43->Value).Bottom;
  local_2ee0 = pTVar43->bIsSet;
  local_2ed8 = (undefined1  [8])0x0;
  pvStack_2ed0 = (void *)0x0;
  local_2ec8 = 0;
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> *)local_2ed8,
             &pTVar43->Getter);
  if (bVar58) {
    TAttribute<FMargin>::~TAttribute<FMargin>(&local_28c0);
  }
  else {
    TAttribute<FMargin>::~TAttribute<FMargin>(&local_2890);
  }
  bVar11 = false;
  bVar58 = false;
  pFVar40 = SOverlay::AddSlot((SOverlay *)local_3028._48_8_,&local_188,-1);
  plVar4 = &pFVar40->_padding_;
  if ((longlong *)local_2f00 != plVar4) {
    *(undefined4 *)plVar4 = 0;
    *(undefined1 *)((longlong)&pFVar40->_padding_ + 4) = 1;
  }
  pFVar55 = (FScopedWidgetSlotArguments *)0x0;
  if (plVar4 != (longlong *)0x0) {
    pFVar55 = pFVar40;
  }
  if ((longlong *)local_2f38 != &pFVar55->_padding_) {
    *(undefined4 *)&pFVar55->_padding_ = 2;
    *(undefined1 *)((longlong)&pFVar55->_padding_ + 4) = 1;
  }
  local_29b8.bIsSet = (bool)local_2ee0;
  local_29b8.Value.Left = (float)(undefined4)local_2ef0;
  local_29b8.Value.Top = (float)local_2ef0._4_4_;
  local_29b8.Value.Right = (float)(undefined4)lStack_2ee8;
  local_29b8.Value.Bottom = (float)lStack_2ee8._4_4_;
  local_29b8.Getter._16_4_ = 0;
  pFVar40 = (FScopedWidgetSlotArguments *)0x0;
  if (pFVar55 != (FScopedWidgetSlotArguments *)0xffffffffffffffb8) {
    pFVar40 = pFVar55;
  }
  local_29b8.Getter._0_8_ = 0;
  local_29b8.Getter._8_8_ = 0;
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&local_29b8.Getter,
             (TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> *)local_2ed8);
  pFVar41 = TPaddingWidgetSlotMixin<SOverlay::FOverlaySlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)&pFVar40->_padding_,&local_29b8);
  pTVar44 = TSharedPtr<SEditableText,1>::ToSharedRef(&this->EditableText,&local_2a38);
  pTVar56 = (pTVar44->SharedReferenceCount).ReferenceController;
  local_3028._32_8_ = pTVar44->Object;
  if (pTVar56 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar56->SharedReferenceCount = (atomic<int>)((int)pTVar56->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar56->SharedReferenceCount = (atomic<int>)((int)pTVar56->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_3028._40_8_ = pTVar56;
  if (&pFVar41->_padding_ != (longlong *)(local_3028 + 0x20)) {
    pFVar41->_padding_ = local_3028._32_8_;
    local_3028._32_8_ = (SEditableText *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar41->_padding_,
               (FSharedReferencer<1> *)(local_3028 + 0x28));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_3028._40_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar56);
  TSharedRef<SEditableText,1>::~TSharedRef<SEditableText,1>(&local_2a38);
  TPanelChildren<SOverlay::FOverlaySlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
            (&local_188);
  local_3028._16_8_ = (param_1->_Label).Widget.Object;
  bVar57 = false;
  local_3028._24_8_ = SNullWidget::NullWidget.Object;
  bVar12 = false;
  local_3078.Object = (SWidget *)0x0;
  local_3078.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (((SWidget *)local_3028._16_8_ != SNullWidget::NullWidget.Object) &&
     (param_1->_LabelLocation == Inside)) {
    bVar57 = true;
    bVar12 = true;
    pFVar40 = SOverlay::AddSlot((SOverlay *)local_3028._48_8_,&local_e8,-1);
    pFVar41 = TAlignmentWidgetSlotMixin<SOverlay::FOverlaySlot>::FSlotArgumentsMixin::HAlign
                        ((FSlotArgumentsMixin *)&pFVar40->_padding_,HAlign_Left);
    pFVar41 = TAlignmentWidgetSlotMixin<SOverlay::FOverlaySlot>::FSlotArgumentsMixin::VAlign
                        ((FSlotArgumentsMixin *)&pFVar41->_padding_,param_1->_LabelVAlign);
    pTVar43 = TAttribute<FMargin>::TAttribute<FMargin><FMargin>(&local_25a8,&param_1->_LabelPadding)
    ;
    pFVar41 = TPaddingWidgetSlotMixin<SOverlay::FOverlaySlot>::FSlotArgumentsMixin::Padding
                        ((FSlotArgumentsMixin *)&pFVar41->_padding_,pTVar43);
    TSlotBase<SOverlay::FOverlaySlot>::FSlotArguments::operator[]
              ((FSlotArguments *)pFVar41,&(param_1->_Label).Widget);
    TPanelChildren<SOverlay::FOverlaySlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
              (&local_e8);
  }
  if ((bVar13 == false) || (bVar57)) {
    pFVar45 = SBorder::FArguments::FArguments(&local_1370);
    (pFVar45->_BorderImage).bIsSet = true;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(pFVar45->_BorderImage).Getter,(FWriteAccessScope *)&local_2c08);
    local_2bf0 = &(pFVar45->_BorderImage).Getter.field_0x8;
    puVar25 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_2bf0);
    pTVar56 = (TReferenceControllerBase<1> *)local_3028._0_8_;
    if (puVar25 != (undefined8 *)0x0) {
      local_3028._12_4_ = local_2fe8.SharedReferenceCount.ReferenceController._4_4_;
      local_3028._0_8_ = GetBorderImage;
      local_3028._8_4_ = 0;
      pTVar26 = TSharedFromThis<SWidget,1>::AsShared
                          ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_29f8);
      pTVar56 = (pTVar26->SharedReferenceCount).ReferenceController;
      pSVar9 = pTVar26->Object;
      if (pTVar56 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar56->SharedReferenceCount = (atomic<int>)((int)pTVar56->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar56->SharedReferenceCount = (atomic<int>)((int)pTVar56->SharedReferenceCount + 1);
        UNLOCK();
      }
      *puVar25 = &
                 ___7__TCommonDelegateInstanceState___A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar27 = FDelegateHandle::GenerateNewID();
      puVar25[2] = uVar27;
      *puVar25 = &
                 ___7__TBaseSPMethodDelegateInstance__00__CBV__SNumericEntryBox_H___00__A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar25[3] = pSVar9;
      puVar25[4] = pTVar56;
      if (pTVar56 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar56->WeakReferenceCount = (atomic<int>)((int)pTVar56->WeakReferenceCount + 1);
        UNLOCK();
      }
      puVar25[5] = local_3028._0_8_;
      puVar25[6] = CONCAT44(local_3028._12_4_,local_3028._8_4_);
      bVar11 = true;
      bVar58 = true;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar56);
    }
    if (bVar58) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar56);
    }
    if (bVar11) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_29f8.SharedReferenceCount.ReferenceController);
    }
    if (local_2c08.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2c08.Accessor,&local_2c08);
    }
    local_2ce8[0x10] = (param_1->_BorderBackgroundColor).ColorUseRule;
    local_2ce8[0x11] = (param_1->_BorderBackgroundColor).ColorTableId;
    local_2ce8._18_2_ = *(undefined2 *)&(param_1->_BorderBackgroundColor).field_0x12;
    local_2ce8._0_8_ = *(undefined8 *)&(param_1->_BorderBackgroundColor).SpecifiedColor.field0_0x0;
    local_2ce8._8_8_ =
         *(undefined8 *)((longlong)&(param_1->_BorderBackgroundColor).SpecifiedColor.field0_0x0 + 8)
    ;
    local_2ce8[0x14] = true;
    local_2cc0 = 0;
    local_2ce8._24_8_ = 0;
    local_2ce8._32_8_ = 0;
    pFVar45 = SBorder::FArguments::BorderBackgroundColor
                        (pFVar45,(TAttribute<FSlateColor> *)local_2ce8);
    local_2ca8._0_1_ = (param_1->_BorderForegroundColor).ColorUseRule;
    local_2ca8._1_1_ = (param_1->_BorderForegroundColor).ColorTableId;
    local_2ca8._2_2_ = *(undefined2 *)&(param_1->_BorderForegroundColor).field_0x12;
    local_2cb8._0_8_ = *(undefined8 *)&(param_1->_BorderForegroundColor).SpecifiedColor.field0_0x0;
    local_2cb8._8_8_ =
         *(undefined8 *)((longlong)&(param_1->_BorderForegroundColor).SpecifiedColor.field0_0x0 + 8)
    ;
    local_2ca4 = 1;
    local_2c90._0_4_ = 0;
    local_2c90._4_4_ = 0;
    local_2ca0 = 0;
    TStack_2c98.Reference = (ITextData *)0x0;
    pFVar45 = SBorder::FArguments::ForegroundColor
                        (pFVar45,(TAttribute<FSlateColor> *)&local_2cb8._s_0);
    pFVar45 = SBorder::FArguments::Padding(pFVar45,0.0);
    local_2f78 = (SOverlay *)local_3028._48_8_;
    pTStack_2f70 = local_2ff0;
    if (local_2ff0 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_2ff0->SharedReferenceCount = (atomic<int>)((int)local_2ff0->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      local_2ff0->SharedReferenceCount = (atomic<int>)((int)local_2ff0->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar56 = (pFVar45->_Content).Widget.SharedReferenceCount.ReferenceController;
    (pFVar45->_Content).Widget.Object = (SWidget *)local_3028._48_8_;
    (pFVar45->_Content).Widget.SharedReferenceCount.ReferenceController = local_2ff0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar56);
    FLLMScope::FLLMScope
              ((FLLMScope *)local_3040,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true
              );
    local_2f10 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_2f08,&local_2f10,true);
    TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>
              (&local_2b70,"SBorder",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Input\\SNumericEntryBox.h"
               ,0x167,&local_3054);
    FMemScope::~FMemScope(&local_2f08);
    FLLMScope::~FLLMScope((FLLMScope *)local_3040);
    pTVar46 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_2b70,&local_29e8,pFVar45);
    local_2f28.ReferenceController = (pTVar46->SharedReferenceCount).ReferenceController;
    local_3078.Object = (SWidget *)pTVar46->Object;
    if (local_2f28.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_2f28.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_2f28.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_2f30 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&local_3078.SharedReferenceCount,&local_2f28);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2f28.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_29e8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2b70._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2ff0);
    SBorder::FArguments::~FArguments(&local_1370);
  }
  else {
    TSharedPtr<SWidget,1>::TSharedPtr<SWidget,1><SOverlay>
              ((TSharedPtr<SWidget,1> *)local_2d88,(TSharedRef<SOverlay,1> *)(local_3028 + 0x30));
    TSharedPtr<SWidget,1>::operator=(&local_3078,(TSharedPtr<SWidget,1> *)local_2d88);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_2d88._8_8_);
    bVar12 = false;
  }
  if ((local_3028._16_8_ == local_3028._24_8_) || (bVar12)) {
    if (bVar14 == false) {
      pTVar38 = TSharedPtr<SWidget,1>::ToSharedRef(&local_3078,&local_2fe8);
      TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::operator[]
                ((TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *)
                 &this->_padding_,pTVar38);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)
                 CONCAT44(local_2fe8.SharedReferenceCount.ReferenceController._4_4_,
                          local_2fe8.SharedReferenceCount.ReferenceController._0_4_));
      goto LAB_142f62133;
    }
    pFVar47 = SHorizontalBox::FArguments::FArguments(&local_1958);
    pFVar50 = SHorizontalBox::Slot(&local_21d0);
    pFVar50 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar50);
    pFVar50 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::HAlign
                        ((FSlotArgumentsMixin *)&pFVar50->field_0x48,HAlign_Fill);
    pFVar50 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::VAlign
                        ((FSlotArgumentsMixin *)&pFVar50->field_0x48,VAlign_Center);
    pTVar43 = TAttribute<FMargin>::TAttribute<FMargin><FMargin>
                        (&local_2518,&param_1->_TogglePadding);
    pFVar50 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                        ((FSlotArgumentsMixin *)&pFVar50->field_0x18,pTVar43);
    pTVar51 = TSharedPtr<SCheckBox,1>::ToSharedRef(&this->ToggleCheckBox,&local_2ba8);
    TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SCheckBox>(&local_2d48,pTVar51);
    pFVar50 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                        ((FSlotArguments *)pFVar50,&local_2d48);
    pFVar47 = SHorizontalBox::FArguments::operator+(pFVar47,pFVar50);
    pFVar50 = SHorizontalBox::Slot(&local_22b8);
    pTVar38 = TSharedPtr<SWidget,1>::ToSharedRef(&local_3078,&local_2b58);
    pFVar50 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                        ((FSlotArguments *)pFVar50,pTVar38);
    pFVar47 = SHorizontalBox::FArguments::operator+(pFVar47,pFVar50);
    pTVar48 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                        (&local_2940,"SHorizontalBox",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Input\\SNumericEntryBox.h"
                         ,0x177,local_3052);
    pTVar52 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                        (pTVar48,&local_2bb8,pFVar47);
    TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SHorizontalBox>(&local_2d58,pTVar52);
    TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::operator[]
              ((TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *)
               &this->_padding_,&local_2d58);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2d58.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2bb8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2940._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2b58.SharedReferenceCount.ReferenceController);
    SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_22b8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2d48.SharedReferenceCount.ReferenceController);
    TSharedRef<SCheckBox,1>::~TSharedRef<SCheckBox,1>(&local_2ba8);
    SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_21d0);
    SHorizontalBox::FArguments::~FArguments(&local_1958);
  }
  else {
    pFVar47 = SHorizontalBox::FArguments::FArguments(&local_1b60);
    pTVar48 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                        (&local_2958,"SHorizontalBox",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Input\\SNumericEntryBox.h"
                         ,400,&local_3053);
    TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
              (pTVar48,&local_2f20,pFVar47);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2958._Widget.SharedReferenceCount.ReferenceController);
    SHorizontalBox::FArguments::~FArguments(&local_1b60);
    pFVar49 = SHorizontalBox::AddSlot(local_2f20.Object,&local_2068);
    pFVar50 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth
                        ((FSlotArguments *)&pFVar49->_padding_);
    pFVar50 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::HAlign
                        ((FSlotArgumentsMixin *)&pFVar50->field_0x48,HAlign_Left);
    pFVar50 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::VAlign
                        ((FSlotArgumentsMixin *)&pFVar50->field_0x48,param_1->_LabelVAlign);
    pTVar43 = TAttribute<FMargin>::TAttribute<FMargin><FMargin>(&local_2578,&param_1->_LabelPadding)
    ;
    pFVar50 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                        ((FSlotArgumentsMixin *)&pFVar50->field_0x18,pTVar43);
    TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
              ((FSlotArguments *)pFVar50,&(param_1->_Label).Widget);
    SBoxPanel::FScopedWidgetSlotArguments<SHorizontalBox::FSlot>::
    ~FScopedWidgetSlotArguments<SHorizontalBox::FSlot>(&local_2068);
    if (bVar14 != false) {
      pFVar49 = SHorizontalBox::AddSlot(local_2f20.Object,&local_1f68);
      pFVar50 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth
                          ((FSlotArguments *)&pFVar49->_padding_);
      pFVar50 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::HAlign
                          ((FSlotArgumentsMixin *)&pFVar50->field_0x48,HAlign_Fill);
      pFVar50 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::VAlign
                          ((FSlotArgumentsMixin *)&pFVar50->field_0x48,VAlign_Center);
      pTVar43 = TAttribute<FMargin>::TAttribute<FMargin><FMargin>
                          (&local_2548,&param_1->_TogglePadding);
      pFVar50 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                          ((FSlotArgumentsMixin *)&pFVar50->field_0x18,pTVar43);
      pTVar51 = TSharedPtr<SCheckBox,1>::ToSharedRef(&this->ToggleCheckBox,&local_29d8);
      TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SCheckBox>(&local_2d78,pTVar51);
      TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                ((FSlotArguments *)pFVar50,&local_2d78);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2d78.SharedReferenceCount.ReferenceController);
      TSharedRef<SCheckBox,1>::~TSharedRef<SCheckBox,1>(&local_29d8);
      SBoxPanel::FScopedWidgetSlotArguments<SHorizontalBox::FSlot>::
      ~FScopedWidgetSlotArguments<SHorizontalBox::FSlot>(&local_1f68);
    }
    pFVar49 = SHorizontalBox::AddSlot(local_2f20.Object,&local_1e68);
    pTVar38 = TSharedPtr<SWidget,1>::ToSharedRef(&local_3078,&local_29c8);
    TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
              ((FSlotArguments *)&pFVar49->_padding_,pTVar38);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_29c8.SharedReferenceCount.ReferenceController);
    SBoxPanel::FScopedWidgetSlotArguments<SHorizontalBox::FSlot>::
    ~FScopedWidgetSlotArguments<SHorizontalBox::FSlot>(&local_1e68);
    TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SHorizontalBox>(&local_2d68,&local_2f20);
    TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::operator[]
              ((TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *)
               &this->_padding_,&local_2d68);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2d68.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2f20.SharedReferenceCount.ReferenceController);
  }
  if (bVar14 != false) {
    local_2af8 = 0;
    uStack_2af0 = 0;
    local_2ae8 = 0;
    pTVar53 = TDelegate<void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy>::
              TDelegate<void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy>(&local_2af8);
    pEVar54 = TAttribute<enum_ECheckBoxState>::Get(&param_1->_ToggleChecked);
    HandleToggleCheckBoxChanged(this,*pEVar54,pTVar53);
  }
LAB_142f62133:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3078.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2ed8);
  if (pvStack_2ed0 != (void *)0x0) {
    FMemory::Free(pvStack_2ed0);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2ed8);
  TSharedRef<SOverlay,1>::~TSharedRef<SOverlay,1>((TSharedRef<SOverlay,1> *)(local_3028 + 0x30));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// Construct @ 142f621b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000142f63306) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
SNumericEntryBox<float>::Construct(SNumericEntryBox<float> *this,FArguments *param_1)

{
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *pTVar1;
  TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *pTVar2;
  longlong *plVar3;
  TSharedPtr<INumericTypeInterface<float>,1> *this_01;
  TAttribute<TOptional<int>_> *this_02;
  TAttribute<TOptional<int>_> *this_03;
  TOptional<float> *pTVar4;
  ITextData *pIVar5;
  ITextData *pIVar6;
  TReferenceControllerBase<1> *pTVar7;
  void *pvVar8;
  FEditableTextBoxStyle *pFVar9;
  SWidget *pSVar10;
  code *pcVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  int iVar15;
  TSharedPtr<INumericTypeInterface<float>,1> *pTVar16;
  TDefaultNumericTypeInterface<float> *this_04;
  TDelegateBase<FNotThreadSafeDelegateMode> *pTVar17;
  INumericTypeInterface<float> *pIVar18;
  longlong lVar19;
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *this_05;
  TOptional<int> *pTVar20;
  TAttribute<TOptional<int>_> *pTVar21;
  TOptional<float> *pTVar22;
  FString *pFVar23;
  FArguments *pFVar24;
  FArguments *pFVar25;
  undefined8 *puVar26;
  TSharedRef<SWidget_const_,1> *pTVar27;
  ulong64 uVar28;
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs> *pTVar29;
  TAttribute<FSlateFontInfo> *pTVar30;
  TAttribute<float> *pTVar31;
  TAttribute<int> *pTVar32;
  TAttribute<bool> *pTVar33;
  TAttribute<TOptional<float>_> *pTVar34;
  TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs> *pTVar35;
  FArguments *pFVar36;
  TSharedRef<SWidget,1> *pTVar37;
  FArguments *pFVar38;
  FScopedWidgetSlotArguments *pFVar39;
  FSlotArguments *pFVar40;
  TSharedRef<SSpinBox<float>,1> *pTVar41;
  TAttribute<FMargin> *pTVar42;
  TSharedRef<SEditableText,1> *pTVar43;
  FArguments *pFVar44;
  TSharedRef<SBorder,1> *pTVar45;
  FArguments *pFVar46;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> *pTVar47;
  FScopedWidgetSlotArguments<SHorizontalBox::FSlot> *pFVar48;
  FSlotArguments *pFVar49;
  TSharedRef<SCheckBox,1> *pTVar50;
  TSharedRef<SHorizontalBox,1> *pTVar51;
  TDelegate<void___cdecl(ECheckBoxState),FDefaultDelegateUserPolicy> *pTVar52;
  ECheckBoxState *pEVar53;
  FScopedWidgetSlotArguments *pFVar54;
  TRawPtrProxy<TDefaultNumericTypeInterface<float>_> TVar55;
  char cVar56;
  bool bVar57;
  T0RequiredArgs TVar58;
  undefined1 auStackY_30f8 [32];
  T0RequiredArgs local_30c8;
  char local_30c7;
  TSharedPtr<INumericTypeInterface<float>,1> local_30b8;
  T0RequiredArgs local_30a8;
  T0RequiredArgs local_30a7;
  T0RequiredArgs local_30a6;
  T0RequiredArgs local_30a5;
  T0RequiredArgs local_30a4;
  T0RequiredArgs local_30a3 [3];
  FArguments *local_30a0;
  TRawPtrProxy<TDefaultNumericTypeInterface<float>_> local_3098 [2];
  SWidget *local_3088;
  undefined4 uStack_3080;
  uint uStack_307c;
  undefined4 local_3078;
  FLLMScope local_3074;
  FLLMScope local_3070 [2];
  TDelegateBase<FNotThreadSafeDelegateMode> *local_3068;
  undefined1 local_3060 [16];
  TReferenceControllerBase<1> *local_3050;
  TSharedPtr<SNumericEntryBox<float>,1> local_3048;
  TSharedPtr<SNumericEntryBox<float>,1> local_3038;
  FName local_3028;
  FName local_3020;
  SEditableText *local_3018;
  FSharedReferencer<1> local_3010;
  TSharedPtr<SWidget,1> local_3008;
  TSharedRef<SWidget,1> local_2ff8;
  undefined2 local_2fe8;
  undefined1 local_2fe0 [8];
  void *pvStack_2fd8;
  longlong local_2fd0;
  undefined2 local_2fc8;
  undefined1 local_2fc0 [8];
  void *pvStack_2fb8;
  longlong local_2fb0;
  undefined2 local_2fa8;
  undefined1 local_2fa0 [8];
  void *pvStack_2f98;
  longlong local_2f90;
  TSharedRef<SNumericEntryBox<float>,1> local_2f88;
  TSharedRef<SNumericEntryBox<float>,1> local_2f78;
  SOverlay *local_2f68;
  TReferenceControllerBase<1> *pTStack_2f60;
  Type local_2f58;
  bool local_2f54;
  undefined1 local_2f50 [24];
  undefined4 local_2f38 [2];
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *local_2f30;
  FName local_2f28;
  undefined4 local_2f20 [2];
  FMemScope local_2f18;
  FName local_2f10;
  FMemScope local_2f08;
  longlong local_2f00;
  FSharedReferencer<1> local_2ef8;
  TSharedRef<SHorizontalBox,1> local_2ef0;
  longlong local_2ee0;
  longlong lStack_2ed8;
  undefined1 local_2ed0;
  undefined1 local_2ec8 [8];
  void *pvStack_2ec0;
  undefined4 local_2eb8;
  TAttribute<TOptional<int>_> local_2eb0;
  TAttribute<TOptional<int>_> local_2e88;
  TAttribute<TOptional<int>_> local_2e60;
  TAttribute<TOptional<int>_> local_2e38;
  TAttribute<EVisibility> local_2e10;
  TSlateDecl<SEditableText,RequiredArgs::T0RequiredArgs> local_2df0;
  undefined1 local_2dd8 [40];
  TAttribute<TOptional<int>_> local_2db0;
  TSharedRef<SWidget,1> local_2d88;
  TSharedPtr<SWidget,1> local_2d78;
  TSharedRef<SWidget,1> local_2d68;
  TSharedRef<SWidget,1> local_2d58;
  TSharedRef<SWidget,1> local_2d48;
  TSharedRef<SWidget,1> local_2d38;
  undefined1 local_2d28 [24];
  undefined4 local_2d10;
  FLinearColor_u_0 local_2d08;
  undefined4 local_2cf8;
  undefined1 local_2cf4;
  undefined8 local_2cf0;
  undefined1 auStack_2ce8 [24];
  TRefCountPtr<ITextData> TStack_2cd0;
  uint local_2cc8;
  undefined1 local_2cc4;
  FSlateBrush *local_2cc0;
  FSlateBrush *pFStack_2cb8;
  FSlateBrush *local_2cb0;
  FLinearColor_u_0 local_2ca8;
  undefined4 local_2c98;
  undefined1 local_2c94;
  undefined8 local_2c90;
  INumericTypeInterface<float> *pIStack_2c88;
  FSharedReferencer<1> local_2c80;
  FDestructionSentinel local_2c78;
  TAttribute<TOptional<float>_> *local_2c60;
  FDestructionSentinel local_2c58;
  undefined1 *local_2c40;
  FDestructionSentinel local_2c38;
  undefined1 *local_2c20;
  FDestructionSentinel local_2c18;
  FSharedReferencer<1> local_2c00;
  FDestructionSentinel local_2bf8;
  undefined1 *local_2be0;
  TAttribute<FMargin> local_2bd8;
  TAttribute<TSharedPtr<INumericTypeInterface<float>,1>_> local_2ba8;
  TSharedRef<SCheckBox,1> local_2b78;
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> local_2b68;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_2b50;
  undefined8 local_2b38;
  undefined8 uStack_2b30;
  undefined8 local_2b28;
  TSharedRef<SCheckBox,1> local_2b20;
  void *local_2b10 [3];
  code *local_2af8;
  longlong lStack_2af0;
  TSharedPtr<INumericTypeInterface<float>,1> local_2ae8;
  code *local_2ad8;
  TReferenceControllerBase<1> *pTStack_2ad0;
  TSharedRef<SWidget,1> local_2ac8;
  TSharedRef<SWidget_const_,1> local_2ab8;
  TSharedRef<SWidget,1> local_2aa8;
  SEditableText *local_2a98;
  TReferenceControllerBase<1> *pTStack_2a90;
  TSharedRef<SEditableText,1> local_2a88;
  TSharedRef<SSpinBox<float>,1> local_2a78;
  TAttribute<ECheckBoxState> local_2a68;
  TSharedRef<SWidget_const_,1> local_2a48;
  code *local_2a38;
  TReferenceControllerBase<1> *pTStack_2a30;
  TSharedRef<SSpinBox<float>,1> local_2a28;
  code *local_2a18;
  TReferenceControllerBase<1> *pTStack_2a10;
  TSharedRef<SEditableText,1> local_2a08;
  TSharedRef<SWidget_const_,1> local_29f8;
  TSharedPtr<INumericTypeInterface<float>,1> local_29e8;
  TSharedRef<SBorder,1> local_29d8;
  TSharedRef<SCheckBox,1> local_29c8;
  TSharedRef<SWidget,1> local_29b8;
  TSharedRef<SHorizontalBox,1> local_29a8;
  TSharedRef<SWidget,1> local_2998;
  TAttribute<FMargin> local_2988;
  TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs> local_2958;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_2940;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_2928;
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs> local_2910;
  TAttribute<TOptional<int>_> local_28f8;
  TAttribute<TOptional<int>_> local_28d0;
  undefined1 local_28a8 [24];
  TAttribute<FMargin> local_2890;
  TAttribute<FMargin> local_2860;
  TAttribute<float> local_2830;
  TAttribute<int> local_2810;
  TAttribute<bool> local_27f0;
  TAttribute<bool> local_27d0;
  TAttribute<float> local_27b0;
  TAttribute<float> local_2790;
  TAttribute<float> local_2770;
  TAttribute<float> local_2750;
  TAttribute<float> local_2730;
  TAttribute<FSlateFontInfo> local_2710;
  TAttribute<TOptional<int>_> local_2690;
  TAttribute<TOptional<int>_> local_2668;
  TAttribute<TOptional<float>_> local_2640;
  TAttribute<TOptional<float>_> local_2618;
  TAttribute<TOptional<float>_> local_25f0;
  TAttribute<TOptional<float>_> local_25c8;
  TAttribute<TOptional<float>_> local_25a0;
  TAttribute<FMargin> local_2578;
  TAttribute<FMargin> local_2548;
  TAttribute<FMargin> local_2518;
  TAttribute<FMargin> local_24e8;
  TAttribute<FSlateFontInfo> local_24b8;
  TAttribute<FSlateFontInfo> local_2438;
  TAttribute<FSlateFontInfo> local_23b8;
  TAttribute<FSlateFontInfo> local_2338;
  FSlotArguments local_22b8;
  FSlotArguments local_21d0;
  TAttribute<FSlateFontInfo> local_20e8;
  FScopedWidgetSlotArguments<SHorizontalBox::FSlot> local_2068;
  FScopedWidgetSlotArguments<SHorizontalBox::FSlot> local_1f68;
  FScopedWidgetSlotArguments<SHorizontalBox::FSlot> local_1e68;
  FArguments local_1d68;
  FArguments local_1b60;
  FArguments local_1958;
  FArguments local_1750;
  FArguments local_1370;
  FArguments local_f90;
  FArguments local_928;
  FScopedWidgetSlotArguments local_228;
  FScopedWidgetSlotArguments local_188;
  FScopedWidgetSlotArguments local_e8;
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x142f621d2;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_30f8;
  pTVar17 = (TDelegateBase<FNotThreadSafeDelegateMode> *)0x0;
  local_3078 = 0;
  if ((param_1->_EditableTextBoxStyle == (FEditableTextBoxStyle *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("InArgs._EditableTextBoxStyle",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Input\\SNumericEntryBox.h"
                          ,0xd4,L""), bVar13)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->OnValueChanged,&param_1->_OnValueChanged);
  TDelegate<void___cdecl(float,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>::operator=
            (&this->OnValueCommitted,&param_1->_OnValueCommitted);
  TDelegate<void___cdecl(FText),FDefaultDelegateUserPolicy>::operator=
            (&this->OnUndeterminedValueChanged,&param_1->_OnUndeterminedValueChanged);
  TDelegate<void___cdecl(FText,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>::operator=
            (&this->OnUndeterminedValueCommitted,&param_1->_OnUndeterminedValueCommitted);
  pTVar34 = &this->ValueAttribute;
  if (&param_1->_Value != pTVar34) {
    if ((param_1->_Value).Value.bIsSet == false) {
      if ((this->ValueAttribute).Value.bIsSet != false) {
        (this->ValueAttribute).Value.bIsSet = false;
      }
    }
    else {
      (pTVar34->Value).TypedValue = (param_1->_Value).Value.TypedValue;
      (this->ValueAttribute).Value.bIsSet = true;
    }
  }
  (this->ValueAttribute).bIsSet = (param_1->_Value).bIsSet;
  TDelegate<TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&(this->ValueAttribute).Getter,&(param_1->_Value).Getter);
  pIVar5 = (param_1->_UndeterminedString).TextData.Reference;
  pIVar6 = (this->UndeterminedString).TextData.Reference;
  if (pIVar6 != pIVar5) {
    (this->UndeterminedString).TextData.Reference = pIVar5;
    if (pIVar5 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar5 + 8))(pIVar5,&local_3068);
    }
    if (pIVar6 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar6 + 0x10))(pIVar6);
    }
  }
  (this->UndeterminedString).Flags = (param_1->_UndeterminedString).Flags;
  (this->MinDesiredValueWidth).Value = (param_1->_MinDesiredValueWidth).Value;
  (this->MinDesiredValueWidth).bIsSet = (param_1->_MinDesiredValueWidth).bIsSet;
  local_2f30 = &(param_1->_MinDesiredValueWidth).Getter;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->MinDesiredValueWidth).Getter,local_2f30);
  this->BorderImageNormal = &param_1->_EditableTextBoxStyle->BackgroundImageNormal;
  this->BorderImageHovered = &param_1->_EditableTextBoxStyle->BackgroundImageHovered;
  this->BorderImageFocused = &param_1->_EditableTextBoxStyle->BackgroundImageFocused;
  if ((param_1->_TypeInterface).Object == (INumericTypeInterface<float> *)0x0) {
    this_04 = ::operator_new(0x10);
    if (this_04 != (TDefaultNumericTypeInterface<float> *)0x0) {
      pTVar17 = (TDelegateBase<FNotThreadSafeDelegateMode> *)
                TDefaultNumericTypeInterface<float>::TDefaultNumericTypeInterface<float>(this_04);
    }
    local_3098[0].Object = (TDefaultNumericTypeInterface<float> *)pTVar17;
    pTVar16 = TSharedPtr<INumericTypeInterface<float>,1>::
              TSharedPtr<INumericTypeInterface<float>,1><TDefaultNumericTypeInterface<float>_>
                        (&local_29e8,local_3098);
    bVar12 = true;
    bVar13 = false;
  }
  else {
    pTVar16 = TSharedPtr<INumericTypeInterface<float>,1>::TSharedPtr<INumericTypeInterface<float>,1>
                        (&local_2ae8,&param_1->_TypeInterface);
    bVar12 = false;
    bVar13 = true;
  }
  this_01 = &this->Interface;
  pIVar18 = pTVar16->Object;
  pTVar7 = (pTVar16->SharedReferenceCount).ReferenceController;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_30b8.Object = this_01->Object;
  local_30b8.SharedReferenceCount.ReferenceController =
       (this->Interface).SharedReferenceCount.ReferenceController;
  this_01->Object = pIVar18;
  (this->Interface).SharedReferenceCount.ReferenceController = pTVar7;
  TSharedPtr<INumericTypeInterface<float>,1>::~TSharedPtr<INumericTypeInterface<float>,1>
            (&local_30b8);
  if (bVar12) {
    TSharedPtr<INumericTypeInterface<float>,1>::~TSharedPtr<INumericTypeInterface<float>,1>
              (&local_29e8);
  }
  if (bVar13) {
    TSharedPtr<INumericTypeInterface<float>,1>::~TSharedPtr<INumericTypeInterface<float>,1>
              (&local_2ae8);
  }
  if ((param_1->_TypeInterface).Object != (INumericTypeInterface<float> *)0x0) {
    pIVar18 = TSharedPtr<INumericTypeInterface<float>,1>::operator->(this_01);
    lVar19 = (**(code **)((longlong)*pIVar18 + 0x50))(pIVar18);
    if (lVar19 != 0) {
      pIVar18 = TSharedPtr<INumericTypeInterface<float>,1>::operator->(this_01);
      this_05 = (TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                (**(code **)((longlong)*pIVar18 + 0x50))(pIVar18);
      uStack_3080 = 0;
      local_3088 = (SWidget *)ResetCachedValueString;
      lStack_2af0 = (ulonglong)uStack_307c << 0x20;
      local_2af8 = ResetCachedValueString;
      TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
      AddSP<SNumericEntryBox<float>_>
                (this_05,(SNumericEntryBox<float> *)local_3060,(pmf_58c97a57 *)this);
    }
  }
  pTVar20 = TAttribute<TOptional<int>_>::Get(&param_1->_MinFractionalDigits);
  bVar13 = pTVar20->bIsSet == false;
  if (bVar13) {
    pTVar21 = TAttribute<TOptional<int>_>::TAttribute<TOptional<int>_><int>
                        (&local_28f8,&DefaultMinFractionalDigits);
  }
  else {
    pTVar21 = TAttribute<TOptional<int>_>::TAttribute<TOptional<int>_>
                        (&local_28d0,&param_1->_MinFractionalDigits);
  }
  this_02 = &this->MinFractionalDigits;
  if (pTVar21 != this_02) {
    if ((pTVar21->Value).bIsSet == false) {
      if ((this->MinFractionalDigits).Value.bIsSet != false) {
        (this->MinFractionalDigits).Value.bIsSet = false;
      }
    }
    else {
      (this_02->Value).TypedValue = (pTVar21->Value).TypedValue;
      (this->MinFractionalDigits).Value.bIsSet = true;
    }
  }
  (this->MinFractionalDigits).bIsSet = pTVar21->bIsSet;
  TDelegate<TOptional<int>___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&(this->MinFractionalDigits).Getter,&pTVar21->Getter);
  if (bVar13) {
    TAttribute<TOptional<int>_>::~TAttribute<TOptional<int>_>(&local_28f8);
  }
  else {
    TAttribute<TOptional<int>_>::~TAttribute<TOptional<int>_>(&local_28d0);
  }
  pTVar20 = TAttribute<TOptional<int>_>::Get(&param_1->_MaxFractionalDigits);
  if (pTVar20->bIsSet == false) {
    local_2e60.Value.bIsSet = true;
    pTVar21 = &local_2e60;
    iVar15 = 6;
    local_2e60.Getter._16_8_ = 0;
    local_2e60.Value.TypedValue = 6;
    bVar12 = false;
    bVar13 = true;
    local_2e60.bIsSet = true;
    local_2e60.Getter._0_8_ = 0;
    local_2e60.Getter._8_8_ = 0;
  }
  else {
    local_2e38.Value.bIsSet = (param_1->_MaxFractionalDigits).Value.bIsSet;
    if (local_2e38.Value.bIsSet != false) {
      local_2e38.Value.TypedValue = (param_1->_MaxFractionalDigits).Value.TypedValue;
    }
    local_2e38.bIsSet = (param_1->_MaxFractionalDigits).bIsSet;
    local_2e38.Getter._16_4_ = 0;
    local_2e38.Getter._0_8_ = 0;
    local_2e38.Getter._8_8_ = 0;
    TDelegate<TOptional<int>___cdecl(void),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>(&local_2e38.Getter,&(param_1->_MaxFractionalDigits).Getter)
    ;
    pTVar21 = &local_2e38;
    bVar12 = true;
    bVar13 = false;
    iVar15 = local_2e38.Value.TypedValue;
  }
  this_03 = &this->MaxFractionalDigits;
  if (pTVar21 != this_03) {
    if ((pTVar21->Value).bIsSet == false) {
      if ((this->MaxFractionalDigits).Value.bIsSet != false) {
        (this->MaxFractionalDigits).Value.bIsSet = false;
      }
    }
    else {
      (this_03->Value).TypedValue = iVar15;
      (this->MaxFractionalDigits).Value.bIsSet = true;
    }
  }
  (this->MaxFractionalDigits).bIsSet = pTVar21->bIsSet;
  TDelegate<TOptional<int>___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&(this->MaxFractionalDigits).Getter,&pTVar21->Getter);
  if (bVar13) {
    TAttribute<TOptional<int>_>::~TAttribute<TOptional<int>_>(&local_2e60);
  }
  if (bVar12) {
    TAttribute<TOptional<int>_>::~TAttribute<TOptional<int>_>(&local_2e38);
  }
  if ((this_01->Object == (INumericTypeInterface<float> *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar13)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  local_30a0 = (FArguments *)this_01->Object;
  local_3088 = *(SWidget **)((longlong)*(INumericTypeInterface<float> *)local_30a0 + 0x20);
  pTVar20 = TAttribute<TOptional<int>_>::Get(this_02);
  if (pTVar20->bIsSet == false) {
    local_2dd8[4] = (this->MinFractionalDigits).Value.bIsSet;
    if (local_2dd8[4] != false) {
      local_2dd8._0_4_ = (this_02->Value).TypedValue;
    }
    local_2dd8[8] = (this->MinFractionalDigits).bIsSet;
    local_2dd8._32_4_ = 0;
    local_2dd8._16_8_ = 0;
    local_2dd8._24_8_ = 0;
    TDelegate<TOptional<int>___cdecl(void),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<TOptional<int>___cdecl(void),FDefaultDelegateUserPolicy> *)
               (local_2dd8 + 0x10),&(this->MinFractionalDigits).Getter);
    pTVar21 = (TAttribute<TOptional<int>_> *)local_2dd8;
    bVar12 = false;
    bVar13 = true;
  }
  else {
    pTVar20 = TAttribute<TOptional<int>_>::Get(this_02);
    local_2eb0.Value.bIsSet = pTVar20->bIsSet;
    if (local_2eb0.Value.bIsSet != false) {
      local_2eb0.Value.TypedValue = pTVar20->TypedValue;
    }
    local_2eb0.bIsSet = true;
    pTVar21 = &local_2eb0;
    local_2eb0.Getter._16_8_ = 0;
    bVar12 = true;
    bVar13 = false;
    local_2eb0.Getter._0_8_ = 0;
    local_2eb0.Getter._8_8_ = 0;
  }
  (*(code *)local_3088)(local_30a0,pTVar21);
  if (bVar13) {
    TAttribute<TOptional<int>_>::~TAttribute<TOptional<int>_>
              ((TAttribute<TOptional<int>_> *)local_2dd8);
  }
  if (bVar12) {
    TAttribute<TOptional<int>_>::~TAttribute<TOptional<int>_>(&local_2eb0);
  }
  this->bCachedValueStringDirty = true;
  if ((this_01->Object == (INumericTypeInterface<float> *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar13)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  local_3088 = (SWidget *)this_01->Object;
  local_30a0 = *(FArguments **)(local_3088->_padding_ + 0x28);
  pTVar20 = TAttribute<TOptional<int>_>::Get(this_03);
  if (pTVar20->bIsSet == false) {
    local_2db0.Value.bIsSet = (this->MaxFractionalDigits).Value.bIsSet;
    if (local_2db0.Value.bIsSet != false) {
      local_2db0.Value.TypedValue = (this_03->Value).TypedValue;
    }
    local_2db0.bIsSet = (this->MaxFractionalDigits).bIsSet;
    local_2db0.Getter._16_4_ = 0;
    local_2db0.Getter._0_8_ = 0;
    local_2db0.Getter._8_8_ = 0;
    TDelegate<TOptional<int>___cdecl(void),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>(&local_2db0.Getter,&(this->MaxFractionalDigits).Getter);
    pTVar21 = &local_2db0;
    bVar12 = false;
    bVar13 = true;
  }
  else {
    pTVar20 = TAttribute<TOptional<int>_>::Get(this_03);
    local_2e88.Value.bIsSet = pTVar20->bIsSet;
    if (local_2e88.Value.bIsSet != false) {
      local_2e88.Value.TypedValue = pTVar20->TypedValue;
    }
    local_2e88.bIsSet = true;
    pTVar21 = &local_2e88;
    local_2e88.Getter._16_8_ = 0;
    bVar12 = true;
    bVar13 = false;
    local_2e88.Getter._0_8_ = 0;
    local_2e88.Getter._8_8_ = 0;
  }
  (*(code *)local_30a0)(local_3088,pTVar21);
  if (bVar13) {
    TAttribute<TOptional<int>_>::~TAttribute<TOptional<int>_>(&local_2db0);
  }
  if (bVar12) {
    TAttribute<TOptional<int>_>::~TAttribute<TOptional<int>_>(&local_2e88);
  }
  bVar57 = false;
  bVar12 = false;
  bVar13 = false;
  this->bCachedValueStringDirty = true;
  TAttribute<TOptional<FTextFormat>_>::operator=
            (&this->ToolTipTextFormat,&param_1->_ToolTipTextFormat);
  pTVar22 = TAttribute<TOptional<float>_>::Get(pTVar34);
  pTVar4 = &this->CachedExternalValue;
  if (pTVar22 != pTVar4) {
    if (pTVar22->bIsSet == false) {
      if ((this->CachedExternalValue).bIsSet != false) {
        (this->CachedExternalValue).bIsSet = false;
      }
    }
    else {
      pTVar4->TypedValue = pTVar22->TypedValue;
      (this->CachedExternalValue).bIsSet = true;
    }
  }
  if ((this->CachedExternalValue).bIsSet != false) {
    pIVar18 = TSharedPtr<INumericTypeInterface<float>,1>::operator->(this_01);
    local_3088 = *(SWidget **)((longlong)*pIVar18 + 0x38);
    if (((this->CachedExternalValue).bIsSet == false) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar14)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    pFVar23 = (FString *)(*(code *)local_3088)(pIVar18,local_2b10,pTVar4);
    ::FString::operator=(&this->CachedValueString,pFVar23);
    if (local_2b10[0] != (void *)0x0) {
      FMemory::Free(local_2b10[0]);
    }
  }
  this->bCachedValueStringDirty = false;
  local_30c7 = param_1->_DisplayToggle;
  if ((bool)local_30c7 != false) {
    pFVar24 = SCheckBox::FArguments::FArguments(&local_1750);
    local_2bd8.bIsSet = true;
    local_2bd8.Getter._16_8_ = 0;
    local_2bd8.Value.Left = ___xmm_00000000400000000000000000000000;
    local_2bd8.Value.Top = _UNK_15076aed4;
    local_2bd8.Value.Right = _UNK_15076aed8;
    local_2bd8.Value.Bottom = _UNK_15076aedc;
    local_2bd8.Getter._0_8_ = 0;
    local_2bd8.Getter._8_8_ = 0;
    pFVar24 = SCheckBox::FArguments::Padding(pFVar24,&local_2bd8);
    local_2a68.Value = (param_1->_ToggleChecked).Value;
    local_2a68.bIsSet = (param_1->_ToggleChecked).bIsSet;
    TDelegate<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy>
              (&local_2a68.Getter,&(param_1->_ToggleChecked).Getter);
    pFVar25 = (FArguments *)SCheckBox::FArguments::IsChecked(pFVar24,&local_2a68);
    local_30a0 = pFVar25;
    local_3098[0].Object =
         (TDefaultNumericTypeInterface<float> *)
         TDelegate<void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy>::
         TDelegate<void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy>
                   (local_28a8,&param_1->_OnToggleChanged);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(pFVar25->_Value).Getter.field_0x10,(FWriteAccessScope *)&local_2c78);
    local_2c60 = &pFVar25->_MinValue;
    puVar26 = UE::Core::Private::DelegateAllocate(0x48,(FDelegateAllocation *)local_2c60);
    pTVar17 = (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3060._0_8_;
    if (puVar26 != (undefined8 *)0x0) {
      local_30b8.Object = (INumericTypeInterface<float> *)HandleToggleCheckBoxChanged;
      local_30b8.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)
           ((ulonglong)local_2ff8.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
      pTVar27 = TSharedFromThis<SWidget,1>::AsShared
                          ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_2ab8);
      pTVar17 = (TDelegateBase<FNotThreadSafeDelegateMode> *)
                (pTVar27->SharedReferenceCount).ReferenceController;
      local_3088 = pTVar27->Object;
      if (pTVar17 != (TDelegateBase<FNotThreadSafeDelegateMode> *)0x0) {
        LOCK();
        *(int *)&pTVar17->field_0x8 = *(int *)&pTVar17->field_0x8 + 1;
        UNLOCK();
        LOCK();
        *(int *)&pTVar17->field_0x8 = *(int *)&pTVar17->field_0x8 + 1;
        UNLOCK();
      }
      *puVar26 = &
                 ___7__TCommonDelegateInstanceState___A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy______6B_
      ;
      bVar57 = true;
      bVar12 = true;
      bVar13 = true;
      local_3068 = pTVar17;
      TDelegate<void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy>::
      TDelegate<void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy>
                (puVar26 + 1,
                 (TDelegate<void___cdecl(ECheckBoxState),FDefaultDelegateUserPolicy> *)
                 local_3098[0].Object);
      uVar28 = FDelegateHandle::GenerateNewID();
      puVar26[4] = uVar28;
      *puVar26 = &
                 ___7__TBaseSPMethodDelegateInstance__00__CBV__SNumericEntryBox_M___00__A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy______6B_
      ;
      puVar26[5] = local_3088;
      puVar26[6] = pTVar17;
      if (pTVar17 != (TDelegateBase<FNotThreadSafeDelegateMode> *)0x0) {
        LOCK();
        *(int *)&pTVar17->field_0xc = *(int *)&pTVar17->field_0xc + 1;
        UNLOCK();
      }
      puVar26[7] = local_30b8.Object;
      puVar26[8] = local_30b8.SharedReferenceCount.ReferenceController;
      pTVar17 = local_3068;
    }
    if (bVar13) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pTVar17);
    }
    if (bVar12) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pTVar17);
    }
    if (bVar57) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2ab8.SharedReferenceCount.ReferenceController);
    }
    if (local_2c78.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2c78.Accessor,&local_2c78);
    }
    TVar55.Object = local_3098[0].Object;
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3098[0].Object);
    pvVar8 = *(void **)&(TVar55.Object)->MinFractionalDigits;
    if (pvVar8 != (void *)0x0) {
      FMemory::Free(pvVar8);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)TVar55.Object);
    pTVar29 = MakeTDecl<SCheckBox,RequiredArgs::T0RequiredArgs>
                        (&local_2910,"SCheckBox",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Input\\SNumericEntryBox.h"
                         ,0xf8,&local_30c8);
    pTVar29 = TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>::Expose<SCheckBox>
                        (pTVar29,&this->ToggleCheckBox);
    TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>::operator<<=
              (pTVar29,&local_2b78,(FArguments *)local_30a0);
    TSharedRef<SCheckBox,1>::~TSharedRef<SCheckBox,1>(&local_2b78);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2910._Widget.SharedReferenceCount.ReferenceController);
    SCheckBox::FArguments::~FArguments(&local_1750);
  }
  bVar57 = false;
  bVar12 = false;
  bVar13 = false;
  local_30c8 = (T0RequiredArgs)param_1->_AllowSpin;
  if (local_30c8 != (T0RequiredArgs)0x0) {
    pFVar25 = SSpinBox<float>::FArguments::FArguments(&local_928);
    pFVar25->_Style = param_1->_SpinBoxStyle;
    bVar14 = (param_1->_Font).bIsSet == false;
    if (bVar14) {
      pTVar30 = TAttribute<FSlateFontInfo>::TAttribute<FSlateFontInfo><FSlateFontInfo>
                          (&local_24b8,&(param_1->_EditableTextBoxStyle->TextStyle).Font);
    }
    else {
      pTVar30 = TAttribute<FSlateFontInfo>::TAttribute<FSlateFontInfo>(&local_2438,&param_1->_Font);
    }
    pTVar30 = TAttribute<FSlateFontInfo>::TAttribute<FSlateFontInfo>(&local_20e8,pTVar30);
    pFVar25 = SSpinBox<float>::FArguments::Font(pFVar25,pTVar30);
    (pFVar25->_Value).bIsSet = true;
    local_30a0 = pFVar25;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(pFVar25->_Value).Getter,
               (FWriteAccessScope *)&local_2c58);
    local_2c40 = &(pFVar25->_Value).Getter.field_0x8;
    puVar26 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_2c40);
    TVar55.Object = (TDefaultNumericTypeInterface<float> *)local_3060._0_8_;
    if (puVar26 != (undefined8 *)0x0) {
      local_30b8.Object = (INumericTypeInterface<float> *)OnGetValueForSpinBox;
      local_30b8.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)
           ((ulonglong)local_2ff8.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
      pTVar27 = TSharedFromThis<SWidget,1>::AsShared
                          ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_2a48);
      pTVar17 = (TDelegateBase<FNotThreadSafeDelegateMode> *)
                (pTVar27->SharedReferenceCount).ReferenceController;
      local_3088 = pTVar27->Object;
      if (pTVar17 != (TDelegateBase<FNotThreadSafeDelegateMode> *)0x0) {
        LOCK();
        *(int *)&pTVar17->field_0x8 = *(int *)&pTVar17->field_0x8 + 1;
        UNLOCK();
        LOCK();
        *(int *)&pTVar17->field_0x8 = *(int *)&pTVar17->field_0x8 + 1;
        UNLOCK();
      }
      bVar57 = true;
      bVar12 = true;
      bVar13 = true;
      *puVar26 = &___7__TCommonDelegateInstanceState___A6AMXZUFDefaultDelegateUserPolicy____V__6B_;
      local_3098[0].Object = (TDefaultNumericTypeInterface<float> *)pTVar17;
      uVar28 = FDelegateHandle::GenerateNewID();
      puVar26[2] = uVar28;
      *puVar26 = &
                 ___7__TBaseSPMethodDelegateInstance__00__CBV__SNumericEntryBox_M___00__A6AMXZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar26[3] = local_3088;
      puVar26[4] = pTVar17;
      if (pTVar17 != (TDelegateBase<FNotThreadSafeDelegateMode> *)0x0) {
        LOCK();
        *(int *)&pTVar17->field_0xc = *(int *)&pTVar17->field_0xc + 1;
        UNLOCK();
      }
      puVar26[5] = local_30b8.Object;
      puVar26[6] = local_30b8.SharedReferenceCount.ReferenceController;
      TVar55.Object = local_3098[0].Object;
    }
    if (bVar13) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)TVar55.Object);
    }
    if (bVar12) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)TVar55.Object);
    }
    if (bVar57) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2a48.SharedReferenceCount.ReferenceController);
    }
    if (local_2c58.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2c58.Accessor,&local_2c58);
    }
    pTVar31 = TAttribute<float>::TAttribute<float>(&local_2750,&param_1->_Delta);
    pFVar25 = SSpinBox<float>::FArguments::Delta(local_30a0,pTVar31);
    pTVar31 = TAttribute<float>::TAttribute<float>(&local_2730,&param_1->_ShiftMultiplier);
    pTVar1 = &pTVar31->Getter;
    (pFVar25->_ShiftMultiplier).Value = pTVar31->Value;
    (pFVar25->_ShiftMultiplier).bIsSet = pTVar31->bIsSet;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar25->_ShiftMultiplier).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar1);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar1);
    pvVar8 = *(void **)&(pTVar31->Getter).field_0x8;
    if (pvVar8 != (void *)0x0) {
      FMemory::Free(pvVar8);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)pTVar1);
    pTVar31 = TAttribute<float>::TAttribute<float>(&local_2830,&param_1->_CtrlMultiplier);
    pTVar1 = &pTVar31->Getter;
    (pFVar25->_CtrlMultiplier).Value = pTVar31->Value;
    (pFVar25->_CtrlMultiplier).bIsSet = pTVar31->bIsSet;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar25->_CtrlMultiplier).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar1);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar1);
    pvVar8 = *(void **)&(pTVar31->Getter).field_0x8;
    if (pvVar8 != (void *)0x0) {
      FMemory::Free(pvVar8);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)pTVar1);
    pTVar32 = TAttribute<int>::TAttribute<int>(&local_2810,&param_1->_LinearDeltaSensitivity);
    this_00 = &pTVar32->Getter;
    (pFVar25->_LinearDeltaSensitivity).Value = pTVar32->Value;
    (pFVar25->_LinearDeltaSensitivity).bIsSet = pTVar32->bIsSet;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)
               &(pFVar25->_LinearDeltaSensitivity).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
    pvVar8 = *(void **)&(pTVar32->Getter).field_0x8;
    if (pvVar8 != (void *)0x0) {
      FMemory::Free(pvVar8);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)this_00);
    pTVar33 = TAttribute<bool>::TAttribute<bool>
                        (&local_27f0,&param_1->_SupportDynamicSliderMaxValue);
    pTVar2 = &pTVar33->Getter;
    (pFVar25->_SupportDynamicSliderMaxValue).Value = pTVar33->Value;
    (pFVar25->_SupportDynamicSliderMaxValue).bIsSet = pTVar33->bIsSet;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)
               &(pFVar25->_SupportDynamicSliderMaxValue).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar2);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar2);
    pvVar8 = *(void **)&(pTVar33->Getter).field_0x8;
    if (pvVar8 != (void *)0x0) {
      FMemory::Free(pvVar8);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)pTVar2);
    pTVar33 = TAttribute<bool>::TAttribute<bool>
                        (&local_27d0,&param_1->_SupportDynamicSliderMinValue);
    pTVar2 = &pTVar33->Getter;
    (pFVar25->_SupportDynamicSliderMinValue).Value = pTVar33->Value;
    (pFVar25->_SupportDynamicSliderMinValue).bIsSet = pTVar33->bIsSet;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)
               &(pFVar25->_SupportDynamicSliderMinValue).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar2);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar2);
    pvVar8 = *(void **)&(pTVar33->Getter).field_0x8;
    if (pvVar8 != (void *)0x0) {
      FMemory::Free(pvVar8);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)pTVar2);
    TDelegate<void___cdecl(float,TWeakPtr<SWidget,1>,bool,bool),FDefaultDelegateUserPolicy>::
    operator=(&pFVar25->_OnDynamicSliderMaxValueChanged,&param_1->_OnDynamicSliderMaxValueChanged);
    TDelegate<void___cdecl(float,TWeakPtr<SWidget,1>,bool,bool),FDefaultDelegateUserPolicy>::
    operator=(&pFVar25->_OnDynamicSliderMinValueChanged,&param_1->_OnDynamicSliderMinValueChanged);
    TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              (&pFVar25->_OnValueChanged,&this->OnValueChanged);
    TDelegate<void___cdecl(float,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>::operator=
              (&pFVar25->_OnValueCommitted,&this->OnValueCommitted);
    pTVar21 = TAttribute<TOptional<int>_>::TAttribute<TOptional<int>_>(&local_2690,this_02);
    TAttribute<TOptional<int>_>::operator=(&pFVar25->_MinFractionalDigits,pTVar21);
    TAttribute<TOptional<int>_>::~TAttribute<TOptional<int>_>(pTVar21);
    pTVar21 = TAttribute<TOptional<int>_>::TAttribute<TOptional<int>_>(&local_2668,this_03);
    TAttribute<TOptional<int>_>::operator=(&pFVar25->_MaxFractionalDigits,pTVar21);
    TAttribute<TOptional<int>_>::~TAttribute<TOptional<int>_>(pTVar21);
    pTVar34 = TAttribute<TOptional<float>_>::TAttribute<TOptional<float>_>
                        (&local_2640,&param_1->_MinSliderValue);
    pFVar25 = SSpinBox<float>::FArguments::MinSliderValue(pFVar25,pTVar34);
    pTVar34 = TAttribute<TOptional<float>_>::TAttribute<TOptional<float>_>
                        (&local_2618,&param_1->_MaxSliderValue);
    pFVar25 = SSpinBox<float>::FArguments::MaxSliderValue(pFVar25,pTVar34);
    pTVar34 = TAttribute<TOptional<float>_>::TAttribute<TOptional<float>_>
                        (&local_25f0,&param_1->_MaxValue);
    pFVar25 = SSpinBox<float>::FArguments::MaxValue(pFVar25,pTVar34);
    pTVar34 = TAttribute<TOptional<float>_>::TAttribute<TOptional<float>_>
                        (&local_25c8,&param_1->_MinValue);
    pFVar25 = SSpinBox<float>::FArguments::MinValue(pFVar25,pTVar34);
    TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>::operator=
              (&pFVar25->_ContextMenuExtender,&param_1->_ContextMenuExtender);
    pTVar31 = TAttribute<float>::TAttribute<float>(&local_27b0,&param_1->_SliderExponent);
    (pFVar25->_SliderExponent).Value = pTVar31->Value;
    (pFVar25->_SliderExponent).bIsSet = pTVar31->bIsSet;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar25->_SliderExponent).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)&pTVar31->Getter);
    TAttribute<float>::~TAttribute<float>(pTVar31);
    pTVar31 = TAttribute<float>::TAttribute<float>
                        (&local_2790,&param_1->_SliderExponentNeutralValue);
    (pFVar25->_SliderExponentNeutralValue).Value = pTVar31->Value;
    (pFVar25->_SliderExponentNeutralValue).bIsSet = pTVar31->bIsSet;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)
               &(pFVar25->_SliderExponentNeutralValue).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)&pTVar31->Getter);
    TAttribute<float>::~TAttribute<float>(pTVar31);
    pFVar25->_EnableWheel = param_1->_AllowWheel;
    pFVar25->_PreventThrottling = param_1->_PreventThrottling;
    pFVar25->_BroadcastValueChangesPerKey = param_1->_BroadcastValueChangesPerKey;
    pTVar34 = TAttribute<TOptional<float>_>::TAttribute<TOptional<float>_>
                        (&local_25a0,&param_1->_WheelStep);
    TAttribute<TOptional<float>_>::operator=(&pFVar25->_WheelStep,pTVar34);
    TAttribute<TOptional<float>_>::~TAttribute<TOptional<float>_>(pTVar34);
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::operator=
              (&pFVar25->_OnBeginSliderMovement,&param_1->_OnBeginSliderMovement);
    TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              (&pFVar25->_OnEndSliderMovement,&param_1->_OnEndSliderMovement);
    pTVar31 = TAttribute<float>::TAttribute<float>(&local_2770,&param_1->_MinDesiredValueWidth);
    pFVar25 = SSpinBox<float>::FArguments::MinDesiredWidth(pFVar25,pTVar31);
    local_2ba8.Value.Object = (this->Interface).Object;
    local_2ba8.Value.SharedReferenceCount.ReferenceController =
         (this->Interface).SharedReferenceCount.ReferenceController;
    if (local_2ba8.Value.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_2ba8.Value.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_2ba8.Value.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
           1);
      UNLOCK();
    }
    local_2ba8.bIsSet = true;
    local_2ba8.Getter._0_8_ = 0;
    local_2ba8.Getter._8_8_ = 0;
    local_2ba8.Getter._16_8_ = 0;
    TDelegate<TSharedPtr<INumericTypeInterface<float>,1>___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<TSharedPtr<INumericTypeInterface<float>,1>___cdecl(void),FDefaultDelegateUserPolicy>
              (&local_2ba8.Getter);
    pFVar25 = SSpinBox<float>::FArguments::TypeInterface(pFVar25,&local_2ba8);
    local_30b8.Object = (INumericTypeInterface<float> *)GetToolTipText;
    local_30b8.SharedReferenceCount.ReferenceController =
         local_30b8.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
    local_2a38 = GetToolTipText;
    pTStack_2a30 = local_30b8.SharedReferenceCount.ReferenceController;
    pFVar25 = TSlateBaseNamedArgs<SSpinBox<float>_>::ToolTipText<SNumericEntryBox<float>_>
                        ((TSlateBaseNamedArgs<SSpinBox<float>_> *)pFVar25,this,
                         (pmf_abce79b3 *)&local_2a38);
    pTVar35 = MakeTDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs>
                        (&local_2958,"SSpinBox<NumericType>",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Input\\SNumericEntryBox.h"
                         ,0x103,&local_30a8);
    pTVar35 = TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs>::Expose<SSpinBox<float>_>
                        (pTVar35,&this->SpinBox);
    TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs>::operator<<=
              (pTVar35,&local_2a28,pFVar25);
    TSharedRef<SSpinBox<float>,1>::~TSharedRef<SSpinBox<float>,1>(&local_2a28);
    TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs>::
    ~TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs>(&local_2958);
    if (!bVar14) {
      TAttribute<FSlateFontInfo>::~TAttribute<FSlateFontInfo>(&local_2438);
    }
    SSpinBox<float>::FArguments::~FArguments(&local_928);
  }
  bVar57 = false;
  bVar12 = false;
  bVar13 = false;
  pFVar36 = SEditableText::FArguments::FArguments(&local_f90);
  local_30b8.SharedReferenceCount.ReferenceController =
       local_30b8.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
  local_30b8.Object = (INumericTypeInterface<float> *)OnGetValueForTextBox;
  local_2a18 = OnGetValueForTextBox;
  pTStack_2a10 = local_30b8.SharedReferenceCount.ReferenceController;
  TAttribute<FText>::Bind<SNumericEntryBox<float>_>
            (&pFVar36->_Text,this,(pmf_abce79b3 *)&local_2a18);
  local_30b8.Object = (INumericTypeInterface<float> *)GetToolTipText;
  local_30b8.SharedReferenceCount.ReferenceController =
       local_30b8.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
  local_2ad8 = GetToolTipText;
  pTStack_2ad0 = local_30b8.SharedReferenceCount.ReferenceController;
  TAttribute<FText>::Bind<SNumericEntryBox<float>_>
            ((TAttribute<FText> *)pFVar36,this,(pmf_abce79b3 *)&local_2ad8);
  pFVar9 = param_1->_EditableTextBoxStyle;
  local_2d08._0_8_ = *(undefined8 *)&(pFVar9->ForegroundColor).SpecifiedColor.field0_0x0;
  local_2d08._8_8_ =
       *(undefined8 *)((longlong)&(pFVar9->ForegroundColor).SpecifiedColor.field0_0x0 + 8);
  local_2cf8._0_1_ = (pFVar9->ForegroundColor).ColorUseRule;
  local_2cf8._1_1_ = (pFVar9->ForegroundColor).ColorTableId;
  local_2cf8._2_2_ = *(undefined2 *)&(pFVar9->ForegroundColor).field_0x12;
  auStack_2ce8._8_8_ = 0;
  local_2cf4 = 1;
  local_2cf0 = 0;
  auStack_2ce8._0_8_ = 0;
  pFVar36 = SEditableText::FArguments::ColorAndOpacity
                      (pFVar36,(TAttribute<FSlateColor> *)&local_2d08._s_0);
  TVar58 = local_30c8;
  local_2e10.bIsSet = true;
  local_2e10.Getter._0_8_ = 0;
  local_2e10.Getter._8_8_ = 0;
  local_2e10.Value = EVisibility::Visible;
  if (local_30c8 != (T0RequiredArgs)0x0) {
    local_2e10.Value = EVisibility::Collapsed;
  }
  local_2e10.Getter._16_8_ = 0;
  pFVar36 = TSlateBaseNamedArgs<SEditableText>::Visibility
                      ((TSlateBaseNamedArgs<SEditableText> *)pFVar36,&local_2e10);
  bVar14 = (param_1->_Font).bIsSet == false;
  if (bVar14) {
    pTVar30 = TAttribute<FSlateFontInfo>::TAttribute<FSlateFontInfo><FSlateFontInfo>
                        (&local_23b8,&(param_1->_EditableTextBoxStyle->TextStyle).Font);
  }
  else {
    pTVar30 = TAttribute<FSlateFontInfo>::TAttribute<FSlateFontInfo>(&local_2338,&param_1->_Font);
  }
  FSlateFontInfo::FSlateFontInfo(&local_2710.Value,&pTVar30->Value);
  local_2710.bIsSet = pTVar30->bIsSet;
  TDelegate<FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy>
            (&local_2710.Getter,&pTVar30->Getter);
  pFVar36 = SEditableText::FArguments::Font(pFVar36,&local_2710);
  local_2fa8 = 0x101;
  local_2f90 = 0;
  local_2fa0 = (undefined1  [8])0x0;
  pvStack_2f98 = (void *)0x0;
  (pFVar36->_SelectAllTextWhenFocused).Value = true;
  (pFVar36->_SelectAllTextWhenFocused).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(pFVar36->_SelectAllTextWhenFocused).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2fa0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2fa0);
  if (pvStack_2f98 != (void *)0x0) {
    FMemory::Free(pvStack_2f98);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2fa0);
  local_2fc8 = 0x100;
  local_2fb0 = 0;
  local_2fc0 = (undefined1  [8])0x0;
  pvStack_2fb8 = (void *)0x0;
  (pFVar36->_ClearKeyboardFocusOnCommit).Value = false;
  (pFVar36->_ClearKeyboardFocusOnCommit).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(pFVar36->_ClearKeyboardFocusOnCommit).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2fc0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2fc0);
  if (pvStack_2fb8 != (void *)0x0) {
    FMemory::Free(pvStack_2fb8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2fc0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar36->_OnTextChanged,
             (FWriteAccessScope *)&local_2c38);
  local_2c20 = &(pFVar36->_OnTextChanged).field_0x8;
  puVar26 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_2c20);
  if (puVar26 != (undefined8 *)0x0) {
    local_30b8.Object = (INumericTypeInterface<float> *)OnTextChanged;
    local_30b8.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)
         ((ulonglong)local_2ff8.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
    pTVar37 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_2ac8);
    local_3048.Object = (SNumericEntryBox<float> *)pTVar37->Object;
    local_3048.SharedReferenceCount.ReferenceController =
         (pTVar37->SharedReferenceCount).ReferenceController;
    if (local_3048.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_3048.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_3048.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      (local_3048.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_3048.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar57 = true;
    bVar12 = true;
    bVar13 = true;
    *puVar26 = &
               ___7__TCommonDelegateInstanceState___A6AXAEBVFText___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    local_2f88.Object = local_3048.Object;
    local_2f88.SharedReferenceCount.ReferenceController =
         local_3048.SharedReferenceCount.ReferenceController;
    uVar28 = FDelegateHandle::GenerateNewID();
    puVar26[2] = uVar28;
    *puVar26 = &
               ___7__TBaseSPMethodDelegateInstance__0A_V__SNumericEntryBox_M___00__A6AXAEBVFText___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar26[3] = local_3048.Object;
    puVar26[4] = local_3048.SharedReferenceCount.ReferenceController;
    if (local_3048.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_3048.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_3048.SharedReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    puVar26[5] = local_30b8.Object;
    puVar26[6] = local_30b8.SharedReferenceCount.ReferenceController;
  }
  if (bVar13) {
    TSharedPtr<SNumericEntryBox<float>,1>::~TSharedPtr<SNumericEntryBox<float>,1>(&local_3048);
  }
  if (bVar12) {
    TSharedRef<SNumericEntryBox<float>,1>::~TSharedRef<SNumericEntryBox<float>,1>(&local_2f88);
  }
  if (bVar57) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2ac8.SharedReferenceCount.ReferenceController);
  }
  bVar57 = false;
  bVar12 = false;
  bVar13 = false;
  if (local_2c38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2c38.Accessor,&local_2c38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar36->_OnTextCommitted,
             (FWriteAccessScope *)&local_2c18);
  local_2c00.ReferenceController =
       (TReferenceControllerBase<1> *)&(pFVar36->_OnTextCommitted).field_0x8;
  puVar26 = UE::Core::Private::DelegateAllocate
                      (0x38,(FDelegateAllocation *)local_2c00.ReferenceController);
  if (puVar26 != (undefined8 *)0x0) {
    local_3048.Object = (SNumericEntryBox<float> *)OnTextCommitted;
    local_3048.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)
         ((ulonglong)local_2ff8.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
    pTVar37 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_2aa8);
    local_3038.Object = (SNumericEntryBox<float> *)pTVar37->Object;
    local_3038.SharedReferenceCount.ReferenceController =
         (pTVar37->SharedReferenceCount).ReferenceController;
    if (local_3038.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_3038.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_3038.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      (local_3038.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_3038.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar57 = true;
    bVar12 = true;
    bVar13 = true;
    *puVar26 = &
               ___7__TCommonDelegateInstanceState___A6AXAEBVFText__W4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    local_2f78.Object = local_3038.Object;
    local_2f78.SharedReferenceCount.ReferenceController =
         local_3038.SharedReferenceCount.ReferenceController;
    uVar28 = FDelegateHandle::GenerateNewID();
    puVar26[2] = uVar28;
    *puVar26 = &
               ___7__TBaseSPMethodDelegateInstance__0A_V__SNumericEntryBox_M___00__A6AXAEBVFText__W4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar26[3] = local_3038.Object;
    puVar26[4] = local_3038.SharedReferenceCount.ReferenceController;
    if (local_3038.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_3038.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_3038.SharedReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    puVar26[5] = local_3048.Object;
    puVar26[6] = local_3048.SharedReferenceCount.ReferenceController;
  }
  if (bVar13) {
    TSharedPtr<SNumericEntryBox<float>,1>::~TSharedPtr<SNumericEntryBox<float>,1>(&local_3038);
  }
  if (bVar12) {
    TSharedRef<SNumericEntryBox<float>,1>::~TSharedRef<SNumericEntryBox<float>,1>(&local_2f78);
  }
  if (bVar57) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2aa8.SharedReferenceCount.ReferenceController);
  }
  if (local_2c18.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2c18.Accessor,&local_2c18);
  }
  local_2fe8 = 0x101;
  local_2fd0 = 0;
  local_2fe0 = (undefined1  [8])0x0;
  pvStack_2fd8 = (void *)0x0;
  (pFVar36->_SelectAllTextOnCommit).Value = true;
  (pFVar36->_SelectAllTextOnCommit).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar36->_SelectAllTextOnCommit).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2fe0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2fe0);
  if (pvStack_2fd8 != (void *)0x0) {
    FMemory::Free(pvStack_2fd8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2fe0);
  TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>::operator=
            (&pFVar36->_ContextMenuExtender,&param_1->_ContextMenuExtender);
  local_2f58 = (param_1->_Justification).Value;
  local_2f54 = (param_1->_Justification).bIsSet;
  TDelegate<enum_ETextJustify::Type___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<enum_ETextJustify::Type___cdecl(void),FDefaultDelegateUserPolicy>
            (local_2f50,&(param_1->_Justification).Getter);
  (pFVar36->_Justification).Value = local_2f58;
  (pFVar36->_Justification).bIsSet = local_2f54;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar36->_Justification).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2f50);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2f50);
  if ((void *)local_2f50._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_2f50._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2f50);
  local_2d28._0_4_ = (param_1->_MinDesiredValueWidth).Value;
  local_2d28[4] = (param_1->_MinDesiredValueWidth).bIsSet;
  local_2d28._8_8_ = 0;
  local_2d28._16_8_ = 0;
  local_2d10 = 0;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)(local_2d28 + 8),
             local_2f30);
  pFVar36 = SEditableText::FArguments::MinDesiredWidth(pFVar36,(TAttribute<float> *)local_2d28);
  FLLMScope::FLLMScope(&local_3074,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2f28 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2f18,&local_2f28,true);
  TSlateDecl<SEditableText,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SEditableText,RequiredArgs::T0RequiredArgs>
            (&local_2df0,"SEditableText",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Input\\SNumericEntryBox.h"
             ,0x126,&local_30a7);
  FMemScope::~FMemScope(&local_2f18);
  FLLMScope::~FLLMScope(&local_3074);
  if (local_2df0._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_2df0._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_2df0._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_2a98 = (this->EditableText).Object;
  pTStack_2a90 = (this->EditableText).SharedReferenceCount.ReferenceController;
  (this->EditableText).Object = local_2df0._Widget.Object;
  (this->EditableText).SharedReferenceCount.ReferenceController =
       local_2df0._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_2a90);
  TSlateDecl<SEditableText,RequiredArgs::T0RequiredArgs>::operator<<=
            (&local_2df0,&local_2a88,pFVar36);
  TSharedRef<SEditableText,1>::~TSharedRef<SEditableText,1>(&local_2a88);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2df0._Widget.SharedReferenceCount.ReferenceController);
  if (bVar14) {
    TAttribute<FSlateFontInfo>::~TAttribute<FSlateFontInfo>(&local_23b8);
  }
  else {
    TAttribute<FSlateFontInfo>::~TAttribute<FSlateFontInfo>(&local_2338);
  }
  SEditableText::FArguments::~FArguments(&local_f90);
  pFVar38 = SOverlay::FArguments::FArguments(&local_1d68);
  FLLMScope::FLLMScope(local_3070,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_3028 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope((FMemScope *)&local_3020,&local_3028,true);
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>
            (&local_2b68,"SOverlay",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Input\\SNumericEntryBox.h"
             ,0x135,&local_30a6);
  FMemScope::~FMemScope((FMemScope *)&local_3020);
  FLLMScope::~FLLMScope(local_3070);
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::operator<<=
            (&local_2b68,(TSharedRef<SOverlay,1> *)(local_3060 + 8),pFVar38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2b68._Widget.SharedReferenceCount.ReferenceController);
  SOverlay::FArguments::~FArguments(&local_1d68);
  if (TVar58 != (T0RequiredArgs)0x0) {
    pFVar39 = SOverlay::AddSlot((SOverlay *)local_3060._8_8_,&local_228,-1);
    pFVar40 = TAlignmentWidgetSlotMixin<SOverlay::FOverlaySlot>::FSlotArgumentsMixin::HAlign
                        ((FSlotArgumentsMixin *)&pFVar39->_padding_,HAlign_Fill);
    pFVar40 = TAlignmentWidgetSlotMixin<SOverlay::FOverlaySlot>::FSlotArgumentsMixin::VAlign
                        ((FSlotArgumentsMixin *)&pFVar40->_padding_,VAlign_Center);
    pTVar41 = TSharedPtr<SSpinBox<float>,1>::ToSharedRef(&this->SpinBox,&local_2a78);
    TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SSpinBox<float>_>(&local_2d88,pTVar41);
    TSlotBase<SOverlay::FOverlaySlot>::FSlotArguments::operator[]
              ((FSlotArguments *)pFVar40,&local_2d88);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2d88.SharedReferenceCount.ReferenceController);
    TSharedRef<SSpinBox<float>,1>::~TSharedRef<SSpinBox<float>,1>(&local_2a78);
    TPanelChildren<SOverlay::FOverlaySlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
              (&local_228);
  }
  bVar13 = (param_1->_OverrideTextMargin).bIsSet == false;
  if (bVar13) {
    pTVar42 = TAttribute<FMargin>::TAttribute<FMargin><FMargin>
                        (&local_2890,&param_1->_EditableTextBoxStyle->Padding);
  }
  else {
    pTVar42 = TAttribute<FMargin>::TAttribute<FMargin>(&local_2860,&param_1->_OverrideTextMargin);
  }
  local_2ee0._0_4_ = (pTVar42->Value).Left;
  local_2ee0._4_4_ = (pTVar42->Value).Top;
  lStack_2ed8._0_4_ = (pTVar42->Value).Right;
  lStack_2ed8._4_4_ = (pTVar42->Value).Bottom;
  local_2ed0 = pTVar42->bIsSet;
  local_2ec8 = (undefined1  [8])0x0;
  pvStack_2ec0 = (void *)0x0;
  local_2eb8 = 0;
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> *)local_2ec8,
             &pTVar42->Getter);
  if (bVar13) {
    TAttribute<FMargin>::~TAttribute<FMargin>(&local_2890);
  }
  else {
    TAttribute<FMargin>::~TAttribute<FMargin>(&local_2860);
  }
  bVar12 = false;
  bVar13 = false;
  pFVar39 = SOverlay::AddSlot((SOverlay *)local_3060._8_8_,&local_188,-1);
  plVar3 = &pFVar39->_padding_;
  if ((longlong *)local_2f20 != plVar3) {
    *(undefined4 *)plVar3 = 0;
    *(undefined1 *)((longlong)&pFVar39->_padding_ + 4) = 1;
  }
  pFVar54 = (FScopedWidgetSlotArguments *)0x0;
  if (plVar3 != (longlong *)0x0) {
    pFVar54 = pFVar39;
  }
  if ((longlong *)local_2f38 != &pFVar54->_padding_) {
    *(undefined4 *)&pFVar54->_padding_ = 2;
    *(undefined1 *)((longlong)&pFVar54->_padding_ + 4) = 1;
  }
  local_2988.bIsSet = (bool)local_2ed0;
  local_2988.Value.Left = (float)(undefined4)local_2ee0;
  local_2988.Value.Top = (float)local_2ee0._4_4_;
  local_2988.Value.Right = (float)(undefined4)lStack_2ed8;
  local_2988.Value.Bottom = (float)lStack_2ed8._4_4_;
  local_2988.Getter._16_4_ = 0;
  pFVar39 = (FScopedWidgetSlotArguments *)0x0;
  if (pFVar54 != (FScopedWidgetSlotArguments *)0xffffffffffffffb8) {
    pFVar39 = pFVar54;
  }
  local_2988.Getter._0_8_ = 0;
  local_2988.Getter._8_8_ = 0;
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&local_2988.Getter,
             (TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> *)local_2ec8);
  pFVar40 = TPaddingWidgetSlotMixin<SOverlay::FOverlaySlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)&pFVar39->_padding_,&local_2988);
  pTVar43 = TSharedPtr<SEditableText,1>::ToSharedRef(&this->EditableText,&local_2a08);
  pTVar7 = (pTVar43->SharedReferenceCount).ReferenceController;
  local_3018 = pTVar43->Object;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_3010.ReferenceController = pTVar7;
  if ((SEditableText **)&pFVar40->_padding_ != &local_3018) {
    pFVar40->_padding_ = (longlong)local_3018;
    local_3018 = (SEditableText *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar40->_padding_,&local_3010);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3010.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  TSharedRef<SEditableText,1>::~TSharedRef<SEditableText,1>(&local_2a08);
  TPanelChildren<SOverlay::FOverlaySlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
            (&local_188);
  local_3020 = (FName)(param_1->_Label).Widget.Object;
  bVar57 = false;
  local_3028 = (FName)SNullWidget::NullWidget.Object;
  local_30c8 = (T0RequiredArgs)0x0;
  local_3008.Object = (SWidget *)0x0;
  local_3008.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if ((local_3020 != (FName)SNullWidget::NullWidget.Object) && (param_1->_LabelLocation == Inside))
  {
    bVar57 = true;
    local_30c8 = (T0RequiredArgs)0x1;
    pFVar39 = SOverlay::AddSlot((SOverlay *)local_3060._8_8_,&local_e8,-1);
    pFVar40 = TAlignmentWidgetSlotMixin<SOverlay::FOverlaySlot>::FSlotArgumentsMixin::HAlign
                        ((FSlotArgumentsMixin *)&pFVar39->_padding_,HAlign_Left);
    pFVar40 = TAlignmentWidgetSlotMixin<SOverlay::FOverlaySlot>::FSlotArgumentsMixin::VAlign
                        ((FSlotArgumentsMixin *)&pFVar40->_padding_,param_1->_LabelVAlign);
    pTVar42 = TAttribute<FMargin>::TAttribute<FMargin><FMargin>(&local_24e8,&param_1->_LabelPadding)
    ;
    pFVar40 = TPaddingWidgetSlotMixin<SOverlay::FOverlaySlot>::FSlotArgumentsMixin::Padding
                        ((FSlotArgumentsMixin *)&pFVar40->_padding_,pTVar42);
    TSlotBase<SOverlay::FOverlaySlot>::FSlotArguments::operator[]
              ((FSlotArguments *)pFVar40,&(param_1->_Label).Widget);
    TPanelChildren<SOverlay::FOverlaySlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
              (&local_e8);
  }
  if ((TVar58 == (T0RequiredArgs)0x0) || (bVar57)) {
    pFVar44 = SBorder::FArguments::FArguments(&local_1370);
    (pFVar44->_BorderImage).bIsSet = true;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(pFVar44->_BorderImage).Getter,(FWriteAccessScope *)&local_2bf8);
    local_2be0 = &(pFVar44->_BorderImage).Getter.field_0x8;
    puVar26 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_2be0);
    if (puVar26 != (undefined8 *)0x0) {
      local_3038.Object = (SNumericEntryBox<float> *)GetBorderImage;
      local_3038.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)
           ((ulonglong)local_2ff8.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
      pTVar27 = TSharedFromThis<SWidget,1>::AsShared
                          ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_29f8);
      pTVar17 = (TDelegateBase<FNotThreadSafeDelegateMode> *)
                (pTVar27->SharedReferenceCount).ReferenceController;
      pSVar10 = pTVar27->Object;
      if (pTVar17 != (TDelegateBase<FNotThreadSafeDelegateMode> *)0x0) {
        LOCK();
        *(atomic<int> *)&pTVar17->field_0x8 =
             (atomic<int>)((int)*(atomic<int> *)&pTVar17->field_0x8 + 1);
        UNLOCK();
        LOCK();
        *(atomic<int> *)&pTVar17->field_0x8 =
             (atomic<int>)((int)*(atomic<int> *)&pTVar17->field_0x8 + 1);
        UNLOCK();
      }
      *puVar26 = &
                 ___7__TCommonDelegateInstanceState___A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar28 = FDelegateHandle::GenerateNewID();
      puVar26[2] = uVar28;
      *puVar26 = &
                 ___7__TBaseSPMethodDelegateInstance__00__CBV__SNumericEntryBox_M___00__A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar26[3] = pSVar10;
      puVar26[4] = pTVar17;
      if (pTVar17 != (TDelegateBase<FNotThreadSafeDelegateMode> *)0x0) {
        LOCK();
        *(atomic<int> *)&pTVar17->field_0xc =
             (atomic<int>)((int)*(atomic<int> *)&pTVar17->field_0xc + 1);
        UNLOCK();
      }
      puVar26[5] = local_3038.Object;
      puVar26[6] = local_3038.SharedReferenceCount.ReferenceController;
      bVar12 = true;
      bVar13 = true;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pTVar17);
      local_3060._0_8_ = pTVar17;
    }
    if (bVar13) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_3060._0_8_);
    }
    if (bVar12) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_29f8.SharedReferenceCount.ReferenceController);
    }
    if (local_2bf8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2bf8.Accessor,&local_2bf8);
    }
    local_2cc8._0_1_ = (param_1->_BorderBackgroundColor).ColorUseRule;
    local_2cc8._1_1_ = (param_1->_BorderBackgroundColor).ColorTableId;
    local_2cc8._2_2_ = *(undefined2 *)&(param_1->_BorderBackgroundColor).field_0x12;
    auStack_2ce8._16_8_ =
         *(undefined8 *)&(param_1->_BorderBackgroundColor).SpecifiedColor.field0_0x0;
    TStack_2cd0.Reference =
         *(ITextData **)((longlong)&(param_1->_BorderBackgroundColor).SpecifiedColor.field0_0x0 + 8)
    ;
    local_2cc4 = 1;
    local_2cb0 = (FSlateBrush *)0x0;
    local_2cc0 = (FSlateBrush *)0x0;
    pFStack_2cb8 = (FSlateBrush *)0x0;
    pFVar44 = SBorder::FArguments::BorderBackgroundColor
                        (pFVar44,(TAttribute<FSlateColor> *)(auStack_2ce8 + 0x10));
    local_2c98._0_1_ = (param_1->_BorderForegroundColor).ColorUseRule;
    local_2c98._1_1_ = (param_1->_BorderForegroundColor).ColorTableId;
    local_2c98._2_2_ = *(undefined2 *)&(param_1->_BorderForegroundColor).field_0x12;
    local_2ca8._0_8_ = *(undefined8 *)&(param_1->_BorderForegroundColor).SpecifiedColor.field0_0x0;
    local_2ca8._8_8_ =
         *(undefined8 *)((longlong)&(param_1->_BorderForegroundColor).SpecifiedColor.field0_0x0 + 8)
    ;
    local_2c94 = 1;
    local_2c80.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_2c90 = 0;
    pIStack_2c88 = (INumericTypeInterface<float> *)0x0;
    pFVar44 = SBorder::FArguments::ForegroundColor
                        (pFVar44,(TAttribute<FSlateColor> *)&local_2ca8._s_0);
    pFVar44 = SBorder::FArguments::Padding(pFVar44,0.0);
    local_2f68 = (SOverlay *)local_3060._8_8_;
    pTStack_2f60 = local_3050;
    if (local_3050 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_3050->SharedReferenceCount = (atomic<int>)((int)local_3050->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      local_3050->SharedReferenceCount = (atomic<int>)((int)local_3050->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar7 = (pFVar44->_Content).Widget.SharedReferenceCount.ReferenceController;
    (pFVar44->_Content).Widget.Object = (SWidget *)local_3060._8_8_;
    (pFVar44->_Content).Widget.SharedReferenceCount.ReferenceController = local_3050;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    FLLMScope::FLLMScope
              ((FLLMScope *)&local_3078,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,
               true);
    local_2f10 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_2f08,&local_2f10,true);
    TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>
              (&local_2b50,"SBorder",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Input\\SNumericEntryBox.h"
               ,0x167,&local_30a5);
    FMemScope::~FMemScope(&local_2f08);
    FLLMScope::~FLLMScope((FLLMScope *)&local_3078);
    pTVar45 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_2b50,&local_29d8,pFVar44);
    local_2ef8.ReferenceController = (pTVar45->SharedReferenceCount).ReferenceController;
    local_3008.Object = (SWidget *)pTVar45->Object;
    if (local_2ef8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_2ef8.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_2ef8.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_2f00 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&local_3008.SharedReferenceCount,&local_2ef8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2ef8.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_29d8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2b50._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_3050);
    SBorder::FArguments::~FArguments(&local_1370);
    TVar58 = local_30c8;
  }
  else {
    TSharedPtr<SWidget,1>::TSharedPtr<SWidget,1><SOverlay>
              (&local_2d78,(TSharedRef<SOverlay,1> *)(local_3060 + 8));
    TSharedPtr<SWidget,1>::operator=(&local_3008,&local_2d78);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2d78.SharedReferenceCount.ReferenceController);
    TVar58 = (T0RequiredArgs)0x0;
  }
  cVar56 = local_30c7;
  if ((local_3020 == local_3028) || (TVar58 != (T0RequiredArgs)0x0)) {
    if (local_30c7 == '\0') {
      pTVar37 = TSharedPtr<SWidget,1>::ToSharedRef(&local_3008,&local_2ff8);
      TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::operator[]
                ((TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *)
                 &this->_padding_,pTVar37);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)
                 CONCAT44(local_2ff8.SharedReferenceCount.ReferenceController._4_4_,
                          local_2ff8.SharedReferenceCount.ReferenceController._0_4_));
      goto LAB_142f645b4;
    }
    pFVar46 = SHorizontalBox::FArguments::FArguments(&local_1958);
    pFVar49 = SHorizontalBox::Slot(&local_21d0);
    pFVar49 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar49);
    pFVar49 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::HAlign
                        ((FSlotArgumentsMixin *)&pFVar49->field_0x48,HAlign_Fill);
    pFVar49 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::VAlign
                        ((FSlotArgumentsMixin *)&pFVar49->field_0x48,VAlign_Center);
    pTVar42 = TAttribute<FMargin>::TAttribute<FMargin><FMargin>
                        (&local_2518,&param_1->_TogglePadding);
    pFVar49 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                        ((FSlotArgumentsMixin *)&pFVar49->field_0x18,pTVar42);
    pTVar50 = TSharedPtr<SCheckBox,1>::ToSharedRef(&this->ToggleCheckBox,&local_2b20);
    TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SCheckBox>(&local_2d38,pTVar50);
    pFVar49 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                        ((FSlotArguments *)pFVar49,&local_2d38);
    pFVar46 = SHorizontalBox::FArguments::operator+(pFVar46,pFVar49);
    pFVar49 = SHorizontalBox::Slot(&local_22b8);
    pTVar37 = TSharedPtr<SWidget,1>::ToSharedRef(&local_3008,&local_2998);
    pFVar49 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                        ((FSlotArguments *)pFVar49,pTVar37);
    pFVar46 = SHorizontalBox::FArguments::operator+(pFVar46,pFVar49);
    pTVar47 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                        (&local_2928,"SHorizontalBox",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Input\\SNumericEntryBox.h"
                         ,0x177,local_30a3);
    pTVar51 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                        (pTVar47,&local_29a8,pFVar46);
    TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SHorizontalBox>(&local_2d48,pTVar51);
    TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::operator[]
              ((TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *)
               &this->_padding_,&local_2d48);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2d48.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_29a8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2928._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2998.SharedReferenceCount.ReferenceController);
    SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_22b8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2d38.SharedReferenceCount.ReferenceController);
    TSharedRef<SCheckBox,1>::~TSharedRef<SCheckBox,1>(&local_2b20);
    SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_21d0);
    SHorizontalBox::FArguments::~FArguments(&local_1958);
  }
  else {
    pFVar46 = SHorizontalBox::FArguments::FArguments(&local_1b60);
    pTVar47 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                        (&local_2940,"SHorizontalBox",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Input\\SNumericEntryBox.h"
                         ,400,&local_30a4);
    TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
              (pTVar47,&local_2ef0,pFVar46);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2940._Widget.SharedReferenceCount.ReferenceController);
    SHorizontalBox::FArguments::~FArguments(&local_1b60);
    pFVar48 = SHorizontalBox::AddSlot(local_2ef0.Object,&local_2068);
    pFVar49 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth
                        ((FSlotArguments *)&pFVar48->_padding_);
    pFVar49 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::HAlign
                        ((FSlotArgumentsMixin *)&pFVar49->field_0x48,HAlign_Left);
    pFVar49 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::VAlign
                        ((FSlotArgumentsMixin *)&pFVar49->field_0x48,param_1->_LabelVAlign);
    pTVar42 = TAttribute<FMargin>::TAttribute<FMargin><FMargin>(&local_2578,&param_1->_LabelPadding)
    ;
    pFVar49 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                        ((FSlotArgumentsMixin *)&pFVar49->field_0x18,pTVar42);
    TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
              ((FSlotArguments *)pFVar49,&(param_1->_Label).Widget);
    SBoxPanel::FScopedWidgetSlotArguments<SHorizontalBox::FSlot>::
    ~FScopedWidgetSlotArguments<SHorizontalBox::FSlot>(&local_2068);
    cVar56 = local_30c7;
    if (local_30c7 != '\0') {
      pFVar48 = SHorizontalBox::AddSlot(local_2ef0.Object,&local_1f68);
      pFVar49 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth
                          ((FSlotArguments *)&pFVar48->_padding_);
      pFVar49 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::HAlign
                          ((FSlotArgumentsMixin *)&pFVar49->field_0x48,HAlign_Fill);
      pFVar49 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::VAlign
                          ((FSlotArgumentsMixin *)&pFVar49->field_0x48,VAlign_Center);
      pTVar42 = TAttribute<FMargin>::TAttribute<FMargin><FMargin>
                          (&local_2548,&param_1->_TogglePadding);
      pFVar49 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                          ((FSlotArgumentsMixin *)&pFVar49->field_0x18,pTVar42);
      pTVar50 = TSharedPtr<SCheckBox,1>::ToSharedRef(&this->ToggleCheckBox,&local_29c8);
      TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SCheckBox>(&local_2d68,pTVar50);
      TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                ((FSlotArguments *)pFVar49,&local_2d68);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2d68.SharedReferenceCount.ReferenceController);
      TSharedRef<SCheckBox,1>::~TSharedRef<SCheckBox,1>(&local_29c8);
      SBoxPanel::FScopedWidgetSlotArguments<SHorizontalBox::FSlot>::
      ~FScopedWidgetSlotArguments<SHorizontalBox::FSlot>(&local_1f68);
    }
    pFVar48 = SHorizontalBox::AddSlot(local_2ef0.Object,&local_1e68);
    pTVar37 = TSharedPtr<SWidget,1>::ToSharedRef(&local_3008,&local_29b8);
    TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
              ((FSlotArguments *)&pFVar48->_padding_,pTVar37);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_29b8.SharedReferenceCount.ReferenceController);
    SBoxPanel::FScopedWidgetSlotArguments<SHorizontalBox::FSlot>::
    ~FScopedWidgetSlotArguments<SHorizontalBox::FSlot>(&local_1e68);
    TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SHorizontalBox>(&local_2d58,&local_2ef0);
    TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::operator[]
              ((TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *)
               &this->_padding_,&local_2d58);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2d58.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2ef0.SharedReferenceCount.ReferenceController);
  }
  if (cVar56 != '\0') {
    local_2b38 = 0;
    uStack_2b30 = 0;
    local_2b28 = 0;
    pTVar52 = TDelegate<void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy>::
              TDelegate<void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy>(&local_2b38);
    pEVar53 = TAttribute<enum_ECheckBoxState>::Get(&param_1->_ToggleChecked);
    HandleToggleCheckBoxChanged(this,*pEVar53,pTVar52);
  }
LAB_142f645b4:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3008.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2ec8);
  if (pvStack_2ec0 != (void *)0x0) {
    FMemory::Free(pvStack_2ec0);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2ec8);
  TSharedRef<SOverlay,1>::~TSharedRef<SOverlay,1>((TSharedRef<SOverlay,1> *)(local_3060 + 8));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// Construct @ 142f64630

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000142f657ed) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
SNumericEntryBox<double>::Construct(SNumericEntryBox<double> *this,FArguments *param_1)

{
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *pTVar1;
  TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *pTVar2;
  longlong *plVar3;
  TSharedPtr<INumericTypeInterface<double>,1> *this_01;
  TAttribute<TOptional<int>_> *this_02;
  TAttribute<TOptional<int>_> *this_03;
  TOptional<double> *pTVar4;
  ITextData *pIVar5;
  ITextData *pIVar6;
  void *pvVar7;
  FEditableTextBoxStyle *pFVar8;
  SWidget *pSVar9;
  code *pcVar10;
  bool bVar11;
  bool bVar12;
  TRawPtrProxy<TDefaultNumericTypeInterface<double>_> this_04;
  bool bVar13;
  bool bVar14;
  int iVar15;
  TSharedPtr<INumericTypeInterface<double>,1> *pTVar16;
  TDefaultNumericTypeInterface<double> *this_05;
  TDelegateBase<FNotThreadSafeDelegateMode> *pTVar17;
  INumericTypeInterface<double> *pIVar18;
  longlong lVar19;
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *this_06;
  TOptional<int> *pTVar20;
  TAttribute<TOptional<int>_> *pTVar21;
  TOptional<double> *pTVar22;
  FString *pFVar23;
  FArguments *pFVar24;
  undefined8 *puVar25;
  TSharedRef<SWidget_const_,1> *pTVar26;
  ulong64 uVar27;
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs> *pTVar28;
  FArguments *pFVar29;
  TAttribute<FSlateFontInfo> *pTVar30;
  TAttribute<float> *pTVar31;
  TAttribute<int> *pTVar32;
  TAttribute<bool> *pTVar33;
  TAttribute<TOptional<double>_> *pTVar34;
  TAttribute<TSharedPtr<INumericTypeInterface<double>,1>_> *pTVar35;
  TSlateDecl<SSpinBox<double>,RequiredArgs::T0RequiredArgs> *pTVar36;
  FArguments *pFVar37;
  TSharedRef<SWidget,1> *pTVar38;
  FArguments *pFVar39;
  FScopedWidgetSlotArguments *pFVar40;
  FSlotArguments *pFVar41;
  TSharedRef<SSpinBox<double>,1> *pTVar42;
  TAttribute<FMargin> *pTVar43;
  TSharedRef<SEditableText,1> *pTVar44;
  FArguments *pFVar45;
  TSharedRef<SBorder,1> *pTVar46;
  FArguments *pFVar47;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> *pTVar48;
  FScopedWidgetSlotArguments<SHorizontalBox::FSlot> *pFVar49;
  FSlotArguments *pFVar50;
  TSharedRef<SCheckBox,1> *pTVar51;
  TSharedRef<SHorizontalBox,1> *pTVar52;
  TDelegate<void___cdecl(ECheckBoxState),FDefaultDelegateUserPolicy> *pTVar53;
  ECheckBoxState *pEVar54;
  FScopedWidgetSlotArguments *pFVar55;
  TReferenceControllerBase<1> *pTVar56;
  bool bVar57;
  bool bVar58;
  undefined1 auStackY_3148 [32];
  TSharedPtr<SWidget,1> local_3108;
  SWidget *local_30f8;
  undefined4 uStack_30f0;
  uint uStack_30ec;
  T0RequiredArgs local_30e8;
  T0RequiredArgs local_30e7;
  T0RequiredArgs local_30e6;
  T0RequiredArgs local_30e5;
  T0RequiredArgs local_30e4;
  T0RequiredArgs local_30e3;
  T0RequiredArgs local_30e2 [2];
  TRawPtrProxy<TDefaultNumericTypeInterface<double>_> local_30e0;
  TReferenceControllerBase<1> *local_30d8;
  undefined4 local_30d0 [2];
  FArguments *local_30c8;
  FLLMScope local_30c0;
  FLLMScope local_30bc;
  undefined1 local_30b8 [56];
  TReferenceControllerBase<1> *local_3080;
  TSharedRef<SWidget,1> local_3078;
  undefined2 local_3068;
  undefined1 local_3060 [8];
  void *pvStack_3058;
  longlong local_3050;
  undefined2 local_3048;
  undefined1 local_3040 [8];
  void *pvStack_3038;
  longlong local_3030;
  undefined2 local_3028;
  undefined1 local_3020 [8];
  void *pvStack_3018;
  longlong local_3010;
  SOverlay *local_3008;
  TReferenceControllerBase<1> *pTStack_3000;
  Type local_2ff8;
  bool local_2ff4;
  undefined1 local_2ff0 [24];
  FMemScope local_2fd8;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *local_2fd0;
  undefined4 local_2fc8 [2];
  longlong local_2fc0;
  FSharedReferencer<1> local_2fb8;
  TSharedRef<SHorizontalBox,1> local_2fb0;
  FName local_2fa0;
  FMemScope local_2f98;
  undefined4 local_2f90 [2];
  FName local_2f88;
  longlong local_2f80;
  longlong lStack_2f78;
  undefined1 local_2f70;
  undefined1 local_2f68 [8];
  void *pvStack_2f60;
  undefined4 local_2f58;
  TAttribute<TOptional<int>_> local_2f50;
  TAttribute<TOptional<int>_> local_2f28;
  TAttribute<TOptional<int>_> local_2f00;
  double local_2ed8;
  bool local_2ed0;
  undefined1 local_2ec8 [24];
  TAttribute<TOptional<int>_> local_2eb0;
  TAttribute<EVisibility> local_2e88;
  TSlateDecl<SEditableText,RequiredArgs::T0RequiredArgs> local_2e68;
  TAttribute<TOptional<int>_> local_2e50;
  undefined1 local_2e28 [40];
  TSharedRef<SWidget,1> local_2e00;
  TSharedPtr<SWidget,1> local_2df0;
  TSharedRef<SWidget,1> local_2de0;
  TSharedRef<SWidget,1> local_2dd0;
  TSharedRef<SWidget,1> local_2dc0;
  TSharedRef<SWidget,1> local_2db0;
  undefined1 local_2da0 [8];
  undefined1 local_2d98 [16];
  undefined4 local_2d88;
  FLinearColor_u_0 local_2d80;
  undefined4 local_2d70;
  undefined1 local_2d6c;
  TDelegate<void___cdecl(double,ETextCommit::Type),FDefaultDelegateUserPolicy> local_2d68;
  FLinearColor_u_0 local_2d50;
  undefined4 local_2d40;
  undefined1 local_2d3c;
  TDelegate<void___cdecl(FText,ETextCommit::Type),FDefaultDelegateUserPolicy> local_2d38;
  FLinearColor_u_0 local_2d20;
  undefined4 local_2d10;
  undefined1 local_2d0c;
  FSlateBrush *local_2d08;
  FSlateBrush *pFStack_2d00;
  undefined1 local_2cf8 [24];
  char local_2ce0;
  INumericTypeInterface<double> *local_2cd8;
  FDestructionSentinel local_2cd0;
  ForAnyElementType local_2cb8;
  FDestructionSentinel local_2cb0;
  undefined1 *local_2c98;
  FDestructionSentinel local_2c90;
  TOptional<int> local_2c78;
  FDestructionSentinel local_2c70;
  undefined1 *local_2c58;
  FTextFormatData *local_2c50;
  FSharedReferencer<1> FStack_2c48;
  bool local_2c40;
  undefined1 local_2c38 [16];
  undefined8 local_2c28;
  TSharedRef<SWidget,1> local_2c20;
  code *local_2c08;
  TReferenceControllerBase<1> *pTStack_2c00;
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> local_2bf8;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_2be0;
  undefined8 local_2bc8;
  undefined8 uStack_2bc0;
  undefined8 local_2bb8;
  TSharedRef<SCheckBox,1> local_2bb0;
  TSharedRef<SCheckBox,1> local_2ba0;
  TSharedRef<SWidget_const_,1> local_2b90;
  void *local_2b80 [2];
  INumericTypeInterface<double> *local_2b70;
  TReferenceControllerBase<1> *pTStack_2b68;
  TSharedPtr<INumericTypeInterface<double>,1> local_2b60;
  TSharedRef<SWidget_const_,1> local_2b50;
  TSharedPtr<INumericTypeInterface<double>,1> local_2b40;
  SEditableText *local_2b30;
  TReferenceControllerBase<1> *pTStack_2b28;
  TSharedRef<SEditableText,1> local_2b20;
  TSharedRef<SSpinBox<double>,1> local_2b10;
  TAttribute<ECheckBoxState> local_2b00;
  code *local_2ad8;
  TReferenceControllerBase<1> *pTStack_2ad0;
  code *local_2ac8;
  TReferenceControllerBase<1> *pTStack_2ac0;
  TSharedRef<SSpinBox<double>,1> local_2ab8;
  TSharedRef<SWidget,1> local_2aa8;
  TSharedRef<SWidget,1> local_2a98;
  TSharedRef<SEditableText,1> local_2a88;
  TSharedRef<SWidget_const_,1> local_2a78;
  TAttribute<double> local_2a68;
  code *local_2a38;
  longlong lStack_2a30;
  TSharedRef<SBorder,1> local_2a28;
  TSharedRef<SCheckBox,1> local_2a18;
  TSharedRef<SWidget,1> local_2a08;
  TSharedRef<SHorizontalBox,1> local_29f8;
  TAttribute<FMargin> local_29e8;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_29b8;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_29a0;
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs> local_2988;
  TSlateDecl<SSpinBox<double>,RequiredArgs::T0RequiredArgs> local_2970;
  TAttribute<TOptional<int>_> local_2958;
  TAttribute<TOptional<int>_> local_2930;
  undefined1 local_2908 [24];
  TAttribute<FMargin> local_28f0;
  TAttribute<FMargin> local_28c0;
  TAttribute<float> local_2890;
  TAttribute<float> local_2870;
  TAttribute<bool> local_2850;
  TAttribute<float> local_2830;
  TAttribute<float> local_2810;
  TAttribute<int> local_27f0;
  TAttribute<bool> local_27d0;
  TAttribute<FSlateFontInfo> local_27b0;
  TAttribute<TOptional<int>_> local_2730;
  TAttribute<TOptional<int>_> local_2708;
  TAttribute<TOptional<double>_> local_26e0;
  TAttribute<TOptional<double>_> local_26b0;
  TAttribute<TOptional<double>_> local_2680;
  TAttribute<TOptional<double>_> local_2650;
  TAttribute<TSharedPtr<INumericTypeInterface<double>,1>_> local_2620;
  TAttribute<FMargin> local_25f0;
  TAttribute<FMargin> local_25c0;
  TAttribute<FMargin> local_2590;
  TAttribute<FMargin> local_2560;
  TAttribute<TOptional<double>_> local_2530;
  TAttribute<FSlateFontInfo> local_2500;
  TAttribute<FSlateFontInfo> local_2480;
  TAttribute<FSlateFontInfo> local_2400;
  TAttribute<FSlateFontInfo> local_2380;
  FSlotArguments local_2300;
  FSlotArguments local_2218;
  TAttribute<FSlateFontInfo> local_2130;
  FScopedWidgetSlotArguments<SHorizontalBox::FSlot> local_20b0;
  FScopedWidgetSlotArguments<SHorizontalBox::FSlot> local_1fb0;
  FScopedWidgetSlotArguments<SHorizontalBox::FSlot> local_1eb0;
  FArguments local_1db0;
  FArguments local_1ba8;
  FArguments local_19a0;
  FArguments local_1798;
  FArguments local_13b8;
  FArguments local_fd8;
  FArguments local_970;
  FScopedWidgetSlotArguments local_228;
  FScopedWidgetSlotArguments local_188;
  FScopedWidgetSlotArguments local_e8;
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x142f64652;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_3148;
  pTVar17 = (TDelegateBase<FNotThreadSafeDelegateMode> *)0x0;
  local_30d0[0] = 0;
  if ((param_1->_EditableTextBoxStyle == (FEditableTextBoxStyle *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("InArgs._EditableTextBoxStyle",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Input\\SNumericEntryBox.h"
                          ,0xd4,L""), bVar13)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  TDelegate<void___cdecl(double),FDefaultDelegateUserPolicy>::operator=
            (&this->OnValueChanged,&param_1->_OnValueChanged);
  TDelegate<void___cdecl(double,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>::operator=
            (&this->OnValueCommitted,&param_1->_OnValueCommitted);
  TDelegate<void___cdecl(FText),FDefaultDelegateUserPolicy>::operator=
            (&this->OnUndeterminedValueChanged,&param_1->_OnUndeterminedValueChanged);
  TDelegate<void___cdecl(FText,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>::operator=
            (&this->OnUndeterminedValueCommitted,&param_1->_OnUndeterminedValueCommitted);
  pTVar34 = &this->ValueAttribute;
  if (&param_1->_Value != pTVar34) {
    if ((param_1->_Value).Value.bIsSet == false) {
      if ((this->ValueAttribute).Value.bIsSet != false) {
        (this->ValueAttribute).Value.bIsSet = false;
      }
    }
    else {
      (pTVar34->Value).TypedValue = (param_1->_Value).Value.TypedValue;
      (this->ValueAttribute).Value.bIsSet = true;
    }
  }
  (this->ValueAttribute).bIsSet = (param_1->_Value).bIsSet;
  TDelegate<TOptional<double>___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&(this->ValueAttribute).Getter,&(param_1->_Value).Getter);
  pIVar5 = (param_1->_UndeterminedString).TextData.Reference;
  pIVar6 = (this->UndeterminedString).TextData.Reference;
  if (pIVar6 != pIVar5) {
    (this->UndeterminedString).TextData.Reference = pIVar5;
    if (pIVar5 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar5 + 8))(pIVar5,&local_30d8);
    }
    if (pIVar6 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar6 + 0x10))(pIVar6);
    }
  }
  (this->UndeterminedString).Flags = (param_1->_UndeterminedString).Flags;
  (this->MinDesiredValueWidth).Value = (param_1->_MinDesiredValueWidth).Value;
  (this->MinDesiredValueWidth).bIsSet = (param_1->_MinDesiredValueWidth).bIsSet;
  local_2fd0 = &(param_1->_MinDesiredValueWidth).Getter;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->MinDesiredValueWidth).Getter,local_2fd0);
  this->BorderImageNormal = &param_1->_EditableTextBoxStyle->BackgroundImageNormal;
  this->BorderImageHovered = &param_1->_EditableTextBoxStyle->BackgroundImageHovered;
  this->BorderImageFocused = &param_1->_EditableTextBoxStyle->BackgroundImageFocused;
  if ((param_1->_TypeInterface).Object == (INumericTypeInterface<double> *)0x0) {
    this_05 = ::operator_new(0x10);
    if (this_05 != (TDefaultNumericTypeInterface<double> *)0x0) {
      pTVar17 = (TDelegateBase<FNotThreadSafeDelegateMode> *)
                TDefaultNumericTypeInterface<double>::TDefaultNumericTypeInterface<double>(this_05);
    }
    local_30e0.Object = (TDefaultNumericTypeInterface<double> *)pTVar17;
    pTVar16 = TSharedPtr<INumericTypeInterface<double>,1>::
              TSharedPtr<INumericTypeInterface<double>,1><TDefaultNumericTypeInterface<double>_>
                        (&local_2b60,&local_30e0);
    bVar58 = true;
    bVar13 = false;
  }
  else {
    pTVar16 = TSharedPtr<INumericTypeInterface<double>,1>::
              TSharedPtr<INumericTypeInterface<double>,1>(&local_2b40,&param_1->_TypeInterface);
    bVar58 = false;
    bVar13 = true;
  }
  pIVar18 = pTVar16->Object;
  this_01 = &this->Interface;
  pTVar56 = (pTVar16->SharedReferenceCount).ReferenceController;
  if (pTVar56 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar56->SharedReferenceCount = (atomic<int>)((int)pTVar56->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2b70 = this_01->Object;
  pTStack_2b68 = (this->Interface).SharedReferenceCount.ReferenceController;
  this_01->Object = pIVar18;
  (this->Interface).SharedReferenceCount.ReferenceController = pTVar56;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_2b68);
  if (bVar58) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2b60.SharedReferenceCount.ReferenceController);
  }
  if (bVar13) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2b40.SharedReferenceCount.ReferenceController);
  }
  if ((param_1->_TypeInterface).Object != (INumericTypeInterface<double> *)0x0) {
    pIVar18 = TSharedPtr<INumericTypeInterface<double>,1>::operator->(this_01);
    lVar19 = (**(code **)((longlong)*pIVar18 + 0x50))(pIVar18);
    if (lVar19 != 0) {
      pIVar18 = TSharedPtr<INumericTypeInterface<double>,1>::operator->(this_01);
      this_06 = (TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                (**(code **)((longlong)*pIVar18 + 0x50))(pIVar18);
      uStack_30f0 = 0;
      local_30f8 = (SWidget *)ResetCachedValueString;
      lStack_2a30 = (ulonglong)uStack_30ec << 0x20;
      local_2a38 = ResetCachedValueString;
      TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
      AddSP<SNumericEntryBox<double>_>
                (this_06,(SNumericEntryBox<double> *)local_30b8,(pmf_3a2f3df8 *)this);
    }
  }
  pTVar20 = TAttribute<TOptional<int>_>::Get(&param_1->_MinFractionalDigits);
  bVar13 = pTVar20->bIsSet == false;
  if (bVar13) {
    pTVar21 = TAttribute<TOptional<int>_>::TAttribute<TOptional<int>_><int>
                        (&local_2958,&DefaultMinFractionalDigits);
  }
  else {
    pTVar21 = TAttribute<TOptional<int>_>::TAttribute<TOptional<int>_>
                        (&local_2930,&param_1->_MinFractionalDigits);
  }
  this_02 = &this->MinFractionalDigits;
  if (pTVar21 != this_02) {
    if ((pTVar21->Value).bIsSet == false) {
      if ((this->MinFractionalDigits).Value.bIsSet != false) {
        (this->MinFractionalDigits).Value.bIsSet = false;
      }
    }
    else {
      (this_02->Value).TypedValue = (pTVar21->Value).TypedValue;
      (this->MinFractionalDigits).Value.bIsSet = true;
    }
  }
  (this->MinFractionalDigits).bIsSet = pTVar21->bIsSet;
  TDelegate<TOptional<int>___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&(this->MinFractionalDigits).Getter,&pTVar21->Getter);
  if (bVar13) {
    TAttribute<TOptional<int>_>::~TAttribute<TOptional<int>_>(&local_2958);
  }
  else {
    TAttribute<TOptional<int>_>::~TAttribute<TOptional<int>_>(&local_2930);
  }
  pTVar20 = TAttribute<TOptional<int>_>::Get(&param_1->_MaxFractionalDigits);
  if (pTVar20->bIsSet == false) {
    local_2f50.Value.bIsSet = true;
    pTVar21 = &local_2f50;
    iVar15 = 6;
    local_2f50.Getter._16_8_ = 0;
    local_2f50.Value.TypedValue = 6;
    bVar58 = false;
    bVar13 = true;
    local_2f50.bIsSet = true;
    local_2f50.Getter._0_8_ = 0;
    local_2f50.Getter._8_8_ = 0;
  }
  else {
    local_2f28.Value.bIsSet = (param_1->_MaxFractionalDigits).Value.bIsSet;
    if (local_2f28.Value.bIsSet != false) {
      local_2f28.Value.TypedValue = (param_1->_MaxFractionalDigits).Value.TypedValue;
    }
    local_2f28.bIsSet = (param_1->_MaxFractionalDigits).bIsSet;
    local_2f28.Getter._16_4_ = 0;
    local_2f28.Getter._0_8_ = 0;
    local_2f28.Getter._8_8_ = 0;
    TDelegate<TOptional<int>___cdecl(void),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>(&local_2f28.Getter,&(param_1->_MaxFractionalDigits).Getter)
    ;
    pTVar21 = &local_2f28;
    bVar58 = true;
    bVar13 = false;
    iVar15 = local_2f28.Value.TypedValue;
  }
  this_03 = &this->MaxFractionalDigits;
  if (pTVar21 != this_03) {
    if ((pTVar21->Value).bIsSet == false) {
      if ((this->MaxFractionalDigits).Value.bIsSet != false) {
        (this->MaxFractionalDigits).Value.bIsSet = false;
      }
    }
    else {
      (this_03->Value).TypedValue = iVar15;
      (this->MaxFractionalDigits).Value.bIsSet = true;
    }
  }
  (this->MaxFractionalDigits).bIsSet = pTVar21->bIsSet;
  TDelegate<TOptional<int>___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&(this->MaxFractionalDigits).Getter,&pTVar21->Getter);
  if (bVar13) {
    TAttribute<TOptional<int>_>::~TAttribute<TOptional<int>_>(&local_2f50);
  }
  if (bVar58) {
    TAttribute<TOptional<int>_>::~TAttribute<TOptional<int>_>(&local_2f28);
  }
  if ((this_01->Object == (INumericTypeInterface<double> *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar13)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  local_30c8 = (FArguments *)this_01->Object;
  local_30f8 = *(SWidget **)((longlong)*(INumericTypeInterface<double> *)local_30c8 + 0x20);
  pTVar20 = TAttribute<TOptional<int>_>::Get(this_02);
  if (pTVar20->bIsSet == false) {
    local_2e50.Value.bIsSet = (this->MinFractionalDigits).Value.bIsSet;
    if (local_2e50.Value.bIsSet != false) {
      local_2e50.Value.TypedValue = (this_02->Value).TypedValue;
    }
    local_2e50.bIsSet = (this->MinFractionalDigits).bIsSet;
    local_2e50.Getter._16_4_ = 0;
    local_2e50.Getter._0_8_ = 0;
    local_2e50.Getter._8_8_ = 0;
    TDelegate<TOptional<int>___cdecl(void),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>(&local_2e50.Getter,&(this->MinFractionalDigits).Getter);
    pTVar21 = &local_2e50;
    bVar58 = false;
    bVar13 = true;
  }
  else {
    pTVar20 = TAttribute<TOptional<int>_>::Get(this_02);
    local_2eb0.Value.bIsSet = pTVar20->bIsSet;
    if (local_2eb0.Value.bIsSet != false) {
      local_2eb0.Value.TypedValue = pTVar20->TypedValue;
    }
    local_2eb0.bIsSet = true;
    pTVar21 = &local_2eb0;
    local_2eb0.Getter._16_8_ = 0;
    bVar58 = true;
    bVar13 = false;
    local_2eb0.Getter._0_8_ = 0;
    local_2eb0.Getter._8_8_ = 0;
  }
  (*(code *)local_30f8)(local_30c8,pTVar21);
  if (bVar13) {
    TAttribute<TOptional<int>_>::~TAttribute<TOptional<int>_>(&local_2e50);
  }
  if (bVar58) {
    TAttribute<TOptional<int>_>::~TAttribute<TOptional<int>_>(&local_2eb0);
  }
  this->bCachedValueStringDirty = true;
  if ((this_01->Object == (INumericTypeInterface<double> *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar13)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  local_30f8 = (SWidget *)this_01->Object;
  local_30c8 = *(FArguments **)(local_30f8->_padding_ + 0x28);
  pTVar20 = TAttribute<TOptional<int>_>::Get(this_03);
  if (pTVar20->bIsSet == false) {
    local_2e28[4] = (this->MaxFractionalDigits).Value.bIsSet;
    if (local_2e28[4] != false) {
      local_2e28._0_4_ = (this_03->Value).TypedValue;
    }
    local_2e28[8] = (this->MaxFractionalDigits).bIsSet;
    local_2e28._32_4_ = 0;
    local_2e28._16_8_ = 0;
    local_2e28._24_8_ = (FScriptContainerElement *)0x0;
    TDelegate<TOptional<int>___cdecl(void),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<TOptional<int>___cdecl(void),FDefaultDelegateUserPolicy> *)
               (local_2e28 + 0x10),&(this->MaxFractionalDigits).Getter);
    pTVar21 = (TAttribute<TOptional<int>_> *)local_2e28;
    bVar58 = false;
    bVar13 = true;
  }
  else {
    pTVar20 = TAttribute<TOptional<int>_>::Get(this_03);
    local_2f00.Value.bIsSet = pTVar20->bIsSet;
    if (local_2f00.Value.bIsSet != false) {
      local_2f00.Value.TypedValue = pTVar20->TypedValue;
    }
    local_2f00.bIsSet = true;
    pTVar21 = &local_2f00;
    local_2f00.Getter._16_8_ = 0;
    bVar58 = true;
    bVar13 = false;
    local_2f00.Getter._0_8_ = 0;
    local_2f00.Getter._8_8_ = 0;
  }
  (*(code *)local_30c8)(local_30f8,pTVar21);
  if (bVar13) {
    TAttribute<TOptional<int>_>::~TAttribute<TOptional<int>_>
              ((TAttribute<TOptional<int>_> *)local_2e28);
  }
  if (bVar58) {
    TAttribute<TOptional<int>_>::~TAttribute<TOptional<int>_>(&local_2f00);
  }
  bVar11 = false;
  bVar58 = false;
  bVar13 = false;
  this->bCachedValueStringDirty = true;
  TAttribute<TOptional<FTextFormat>_>::operator=
            (&this->ToolTipTextFormat,&param_1->_ToolTipTextFormat);
  pTVar22 = TAttribute<TOptional<double>_>::Get(pTVar34);
  pTVar4 = &this->CachedExternalValue;
  if (pTVar22 != pTVar4) {
    if (pTVar22->bIsSet == false) {
      if ((this->CachedExternalValue).bIsSet != false) {
        (this->CachedExternalValue).bIsSet = false;
      }
    }
    else {
      pTVar4->TypedValue = pTVar22->TypedValue;
      (this->CachedExternalValue).bIsSet = true;
    }
  }
  if ((this->CachedExternalValue).bIsSet != false) {
    pIVar18 = TSharedPtr<INumericTypeInterface<double>,1>::operator->(this_01);
    local_30f8 = *(SWidget **)((longlong)*pIVar18 + 0x38);
    if (((this->CachedExternalValue).bIsSet == false) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar14)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pFVar23 = (FString *)(*(code *)local_30f8)(pIVar18,local_2b80,pTVar4);
    ::FString::operator=(&this->CachedValueString,pFVar23);
    if (local_2b80[0] != (void *)0x0) {
      FMemory::Free(local_2b80[0]);
    }
  }
  this->bCachedValueStringDirty = false;
  bVar14 = param_1->_DisplayToggle;
  if (bVar14 != false) {
    pFVar24 = SCheckBox::FArguments::FArguments(&local_1798);
    local_2c40 = true;
    local_2c28 = 0;
    local_2c50 = ___xmm_00000000400000000000000000000000;
    FStack_2c48.ReferenceController = _UNK_15076aed8;
    local_2c38._0_8_ = 0;
    local_2c38._8_8_ = 0;
    pFVar24 = SCheckBox::FArguments::Padding(pFVar24,(TAttribute<FMargin> *)&local_2c50);
    local_2b00.Value = (param_1->_ToggleChecked).Value;
    local_2b00.bIsSet = (param_1->_ToggleChecked).bIsSet;
    TDelegate<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy>
              (&local_2b00.Getter,&(param_1->_ToggleChecked).Getter);
    pFVar24 = SCheckBox::FArguments::IsChecked(pFVar24,&local_2b00);
    local_30c8 = pFVar24;
    local_30e0.Object =
         (TDefaultNumericTypeInterface<double> *)
         TDelegate<void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy>::
         TDelegate<void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy>
                   (local_2908,&param_1->_OnToggleChanged);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &pFVar24->_OnCheckStateChanged,(FWriteAccessScope *)(local_2cf8 + 8));
    local_2cd8 = (INumericTypeInterface<double> *)&(pFVar24->_OnCheckStateChanged).field_0x8;
    puVar25 = UE::Core::Private::DelegateAllocate(0x48,(FDelegateAllocation *)local_2cd8);
    pTVar56 = (TReferenceControllerBase<1> *)local_30b8._0_8_;
    if (puVar25 != (undefined8 *)0x0) {
      local_3108.Object = (SWidget *)HandleToggleCheckBoxChanged;
      local_3108.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)
           ((ulonglong)local_3078.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
      pTVar26 = TSharedFromThis<SWidget,1>::AsShared
                          ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_2b90);
      pTVar56 = (pTVar26->SharedReferenceCount).ReferenceController;
      local_30f8 = pTVar26->Object;
      if (pTVar56 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar56->SharedReferenceCount = (atomic<int>)((int)pTVar56->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar56->SharedReferenceCount = (atomic<int>)((int)pTVar56->SharedReferenceCount + 1);
        UNLOCK();
      }
      *puVar25 = &
                 ___7__TCommonDelegateInstanceState___A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy______6B_
      ;
      bVar11 = true;
      bVar58 = true;
      bVar13 = true;
      local_30d8 = pTVar56;
      TDelegate<void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy>::
      TDelegate<void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy>
                (puVar25 + 1,
                 (TDelegate<void___cdecl(ECheckBoxState),FDefaultDelegateUserPolicy> *)
                 local_30e0.Object);
      uVar27 = FDelegateHandle::GenerateNewID();
      puVar25[4] = uVar27;
      *puVar25 = &
                 ___7__TBaseSPMethodDelegateInstance__00__CBV__SNumericEntryBox_N___00__A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy______6B_
      ;
      puVar25[5] = local_30f8;
      puVar25[6] = pTVar56;
      if (pTVar56 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar56->WeakReferenceCount = (atomic<int>)((int)pTVar56->WeakReferenceCount + 1);
        UNLOCK();
      }
      puVar25[7] = local_3108.Object;
      puVar25[8] = local_3108.SharedReferenceCount.ReferenceController;
      pTVar56 = local_30d8;
    }
    if (bVar13) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar56);
    }
    if (bVar58) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar56);
    }
    if (bVar11) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2b90.SharedReferenceCount.ReferenceController);
    }
    if (local_2ce0 == '\0') {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)local_2cf8._16_8_,
                 (FDestructionSentinel *)(local_2cf8 + 8));
    }
    this_04.Object = local_30e0.Object;
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_30e0.Object);
    pvVar7 = *(void **)&(this_04.Object)->MinFractionalDigits;
    if (pvVar7 != (void *)0x0) {
      FMemory::Free(pvVar7);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)this_04.Object);
    pTVar28 = MakeTDecl<SCheckBox,RequiredArgs::T0RequiredArgs>
                        (&local_2988,"SCheckBox",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Input\\SNumericEntryBox.h"
                         ,0xf8,&local_30e8);
    pTVar28 = TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>::Expose<SCheckBox>
                        (pTVar28,&this->ToggleCheckBox);
    TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>::operator<<=(pTVar28,&local_2ba0,local_30c8);
    TSharedRef<SCheckBox,1>::~TSharedRef<SCheckBox,1>(&local_2ba0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2988._Widget.SharedReferenceCount.ReferenceController);
    SCheckBox::FArguments::~FArguments(&local_1798);
  }
  bVar12 = false;
  bVar11 = false;
  bVar58 = false;
  bVar13 = param_1->_AllowSpin;
  if (bVar13 != false) {
    pFVar29 = SSpinBox<double>::FArguments::FArguments(&local_970);
    pFVar29->_Style = param_1->_SpinBoxStyle;
    bVar57 = (param_1->_Font).bIsSet == false;
    if (bVar57) {
      pTVar30 = TAttribute<FSlateFontInfo>::TAttribute<FSlateFontInfo><FSlateFontInfo>
                          (&local_2500,&(param_1->_EditableTextBoxStyle->TextStyle).Font);
    }
    else {
      pTVar30 = TAttribute<FSlateFontInfo>::TAttribute<FSlateFontInfo>(&local_2480,&param_1->_Font);
    }
    pTVar30 = TAttribute<FSlateFontInfo>::TAttribute<FSlateFontInfo>(&local_2130,pTVar30);
    TAttribute<FSlateFontInfo>::operator=(&pFVar29->_Font,pTVar30);
    TAttribute<FSlateFontInfo>::~TAttribute<FSlateFontInfo>(pTVar30);
    (pFVar29->_Value).bIsSet = true;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(pFVar29->_Value).Getter,
               (FWriteAccessScope *)&local_2cd0);
    local_2cb8.Data = (FScriptContainerElement *)&(pFVar29->_Value).Getter.field_0x8;
    local_30e0.Object =
         UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_2cb8.Data);
    pTVar56 = (TReferenceControllerBase<1> *)local_30b8._0_8_;
    if ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_30e0.Object !=
        (TDelegateBase<FNotThreadSafeDelegateMode> *)0x0) {
      local_3108.Object = (SWidget *)OnGetValueForSpinBox;
      local_3108.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)
           ((ulonglong)local_3078.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
      pTVar26 = TSharedFromThis<SWidget,1>::AsShared
                          ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_2b50);
      pTVar56 = (pTVar26->SharedReferenceCount).ReferenceController;
      local_30f8 = pTVar26->Object;
      if (pTVar56 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar56->SharedReferenceCount = (atomic<int>)((int)pTVar56->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar56->SharedReferenceCount = (atomic<int>)((int)pTVar56->SharedReferenceCount + 1);
        UNLOCK();
      }
      bVar12 = true;
      bVar11 = true;
      bVar58 = true;
      (local_30e0.Object)->_padding_ =
           (longlong)
           &___7__TCommonDelegateInstanceState___A6ANXZUFDefaultDelegateUserPolicy____V__6B_;
      local_30d8 = pTVar56;
      uVar27 = FDelegateHandle::GenerateNewID();
      local_30e0.Object[1]._padding_ = uVar27;
      (local_30e0.Object)->_padding_ =
           (longlong)
           &
           ___7__TBaseSPMethodDelegateInstance__00__CBV__SNumericEntryBox_N___00__A6ANXZUFDefaultDelegateUserPolicy____V__6B_
      ;
      *(SWidget **)&local_30e0.Object[1].MinFractionalDigits = local_30f8;
      local_30e0.Object[2]._padding_ = (longlong)pTVar56;
      if (pTVar56 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar56->WeakReferenceCount = (atomic<int>)((int)pTVar56->WeakReferenceCount + 1);
        UNLOCK();
      }
      *(SWidget **)&local_30e0.Object[2].MinFractionalDigits = local_3108.Object;
      *(TReferenceControllerBase<1> **)(local_30e0.Object + 3) =
           local_3108.SharedReferenceCount.ReferenceController;
      pTVar56 = local_30d8;
    }
    if (bVar58) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar56);
    }
    if (bVar11) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar56);
    }
    if (bVar12) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2b50.SharedReferenceCount.ReferenceController);
    }
    if (local_2cd0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2cd0.Accessor,&local_2cd0);
    }
    local_2ed8 = (param_1->_Delta).Value;
    local_2ed0 = (param_1->_Delta).bIsSet;
    TDelegate<double___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<double___cdecl(void),FDefaultDelegateUserPolicy>
              ((TDelegate<double___cdecl(void),FDefaultDelegateUserPolicy> *)local_2ec8,
               &(param_1->_Delta).Getter);
    (pFVar29->_Delta).Value = local_2ed8;
    (pFVar29->_Delta).bIsSet = local_2ed0;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar29->_Delta).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2ec8);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2ec8);
    if ((void *)local_2ec8._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_2ec8._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_2ec8);
    pTVar31 = TAttribute<float>::TAttribute<float>(&local_2830,&param_1->_ShiftMultiplier);
    pTVar1 = &pTVar31->Getter;
    (pFVar29->_ShiftMultiplier).Value = pTVar31->Value;
    (pFVar29->_ShiftMultiplier).bIsSet = pTVar31->bIsSet;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar29->_ShiftMultiplier).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar1);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar1);
    pvVar7 = *(void **)&(pTVar31->Getter).field_0x8;
    if (pvVar7 != (void *)0x0) {
      FMemory::Free(pvVar7);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)pTVar1);
    pTVar31 = TAttribute<float>::TAttribute<float>(&local_2810,&param_1->_CtrlMultiplier);
    pTVar1 = &pTVar31->Getter;
    (pFVar29->_CtrlMultiplier).Value = pTVar31->Value;
    (pFVar29->_CtrlMultiplier).bIsSet = pTVar31->bIsSet;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar29->_CtrlMultiplier).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar1);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar1);
    pvVar7 = *(void **)&(pTVar31->Getter).field_0x8;
    if (pvVar7 != (void *)0x0) {
      FMemory::Free(pvVar7);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)pTVar1);
    pTVar32 = TAttribute<int>::TAttribute<int>(&local_27f0,&param_1->_LinearDeltaSensitivity);
    this_00 = &pTVar32->Getter;
    (pFVar29->_LinearDeltaSensitivity).Value = pTVar32->Value;
    (pFVar29->_LinearDeltaSensitivity).bIsSet = pTVar32->bIsSet;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)
               &(pFVar29->_LinearDeltaSensitivity).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
    pvVar7 = *(void **)&(pTVar32->Getter).field_0x8;
    if (pvVar7 != (void *)0x0) {
      FMemory::Free(pvVar7);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)this_00);
    pTVar33 = TAttribute<bool>::TAttribute<bool>
                        (&local_2850,&param_1->_SupportDynamicSliderMaxValue);
    pTVar2 = &pTVar33->Getter;
    (pFVar29->_SupportDynamicSliderMaxValue).Value = pTVar33->Value;
    (pFVar29->_SupportDynamicSliderMaxValue).bIsSet = pTVar33->bIsSet;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)
               &(pFVar29->_SupportDynamicSliderMaxValue).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar2);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar2);
    pvVar7 = *(void **)&(pTVar33->Getter).field_0x8;
    if (pvVar7 != (void *)0x0) {
      FMemory::Free(pvVar7);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)pTVar2);
    pTVar33 = TAttribute<bool>::TAttribute<bool>
                        (&local_27d0,&param_1->_SupportDynamicSliderMinValue);
    pTVar2 = &pTVar33->Getter;
    (pFVar29->_SupportDynamicSliderMinValue).Value = pTVar33->Value;
    (pFVar29->_SupportDynamicSliderMinValue).bIsSet = pTVar33->bIsSet;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)
               &(pFVar29->_SupportDynamicSliderMinValue).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar2);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar2);
    pvVar7 = *(void **)&(pTVar33->Getter).field_0x8;
    if (pvVar7 != (void *)0x0) {
      FMemory::Free(pvVar7);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)pTVar2);
    TDelegate<void___cdecl(double,TWeakPtr<SWidget,1>,bool,bool),FDefaultDelegateUserPolicy>::
    operator=(&pFVar29->_OnDynamicSliderMaxValueChanged,&param_1->_OnDynamicSliderMaxValueChanged);
    TDelegate<void___cdecl(double,TWeakPtr<SWidget,1>,bool,bool),FDefaultDelegateUserPolicy>::
    operator=(&pFVar29->_OnDynamicSliderMinValueChanged,&param_1->_OnDynamicSliderMinValueChanged);
    TDelegate<void___cdecl(double),FDefaultDelegateUserPolicy>::operator=
              (&pFVar29->_OnValueChanged,&this->OnValueChanged);
    TDelegate<void___cdecl(double,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>::operator=
              (&pFVar29->_OnValueCommitted,&this->OnValueCommitted);
    pTVar21 = TAttribute<TOptional<int>_>::TAttribute<TOptional<int>_>(&local_2730,this_02);
    TAttribute<TOptional<int>_>::operator=(&pFVar29->_MinFractionalDigits,pTVar21);
    TAttribute<TOptional<int>_>::~TAttribute<TOptional<int>_>(pTVar21);
    pTVar21 = TAttribute<TOptional<int>_>::TAttribute<TOptional<int>_>(&local_2708,this_03);
    TAttribute<TOptional<int>_>::operator=(&pFVar29->_MaxFractionalDigits,pTVar21);
    TAttribute<TOptional<int>_>::~TAttribute<TOptional<int>_>(pTVar21);
    pTVar34 = TAttribute<TOptional<double>_>::TAttribute<TOptional<double>_>
                        (&local_2530,&param_1->_MinSliderValue);
    TAttribute<TOptional<double>_>::operator=(&pFVar29->_MinSliderValue,pTVar34);
    TAttribute<TOptional<double>_>::~TAttribute<TOptional<double>_>(pTVar34);
    pTVar34 = TAttribute<TOptional<double>_>::TAttribute<TOptional<double>_>
                        (&local_26e0,&param_1->_MaxSliderValue);
    TAttribute<TOptional<double>_>::operator=(&pFVar29->_MaxSliderValue,pTVar34);
    TAttribute<TOptional<double>_>::~TAttribute<TOptional<double>_>(pTVar34);
    pTVar34 = TAttribute<TOptional<double>_>::TAttribute<TOptional<double>_>
                        (&local_26b0,&param_1->_MaxValue);
    TAttribute<TOptional<double>_>::operator=(&pFVar29->_MaxValue,pTVar34);
    TAttribute<TOptional<double>_>::~TAttribute<TOptional<double>_>(pTVar34);
    pTVar34 = TAttribute<TOptional<double>_>::TAttribute<TOptional<double>_>
                        (&local_2680,&param_1->_MinValue);
    TAttribute<TOptional<double>_>::operator=(&pFVar29->_MinValue,pTVar34);
    TAttribute<TOptional<double>_>::~TAttribute<TOptional<double>_>(pTVar34);
    TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>::operator=
              (&pFVar29->_ContextMenuExtender,&param_1->_ContextMenuExtender);
    pTVar31 = TAttribute<float>::TAttribute<float>(&local_2890,&param_1->_SliderExponent);
    (pFVar29->_SliderExponent).Value = pTVar31->Value;
    (pFVar29->_SliderExponent).bIsSet = pTVar31->bIsSet;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar29->_SliderExponent).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)&pTVar31->Getter);
    TAttribute<float>::~TAttribute<float>(pTVar31);
    local_2a68.Value = (param_1->_SliderExponentNeutralValue).Value;
    local_2a68.bIsSet = (param_1->_SliderExponentNeutralValue).bIsSet;
    TDelegate<double___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<double___cdecl(void),FDefaultDelegateUserPolicy>
              (&local_2a68.Getter,&(param_1->_SliderExponentNeutralValue).Getter);
    TAttribute<double>::operator=(&pFVar29->_SliderExponentNeutralValue,&local_2a68);
    TAttribute<double>::~TAttribute<double>(&local_2a68);
    pFVar29->_EnableWheel = param_1->_AllowWheel;
    pFVar29->_PreventThrottling = param_1->_PreventThrottling;
    pFVar29->_BroadcastValueChangesPerKey = param_1->_BroadcastValueChangesPerKey;
    pTVar34 = TAttribute<TOptional<double>_>::TAttribute<TOptional<double>_>
                        (&local_2650,&param_1->_WheelStep);
    pFVar29 = SSpinBox<double>::FArguments::WheelStep(pFVar29,pTVar34);
    pFVar29 = SSpinBox<double>::FArguments::OnBeginSliderMovement
                        (pFVar29,&param_1->_OnBeginSliderMovement);
    pFVar29 = SSpinBox<double>::FArguments::OnEndSliderMovement
                        (pFVar29,&param_1->_OnEndSliderMovement);
    pTVar31 = TAttribute<float>::TAttribute<float>(&local_2870,&param_1->_MinDesiredValueWidth);
    pFVar29 = SSpinBox<double>::FArguments::MinDesiredWidth(pFVar29,pTVar31);
    pTVar35 = TAttribute<TSharedPtr<INumericTypeInterface<double>,1>_>::
              TAttribute<TSharedPtr<INumericTypeInterface<double>,1>_><TSharedPtr<INumericTypeInterface<double>,1>_>
                        (&local_2620,&this->Interface);
    pFVar29 = SSpinBox<double>::FArguments::TypeInterface(pFVar29,pTVar35);
    local_3108.Object = (SWidget *)GetToolTipText;
    local_3108.SharedReferenceCount.ReferenceController =
         local_3108.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
    local_2c08 = GetToolTipText;
    pTStack_2c00 = local_3108.SharedReferenceCount.ReferenceController;
    pFVar29 = TSlateBaseNamedArgs<SSpinBox<double>_>::ToolTipText<SNumericEntryBox<double>_>
                        ((TSlateBaseNamedArgs<SSpinBox<double>_> *)pFVar29,this,
                         (pmf_0d70f6fe *)&local_2c08);
    pTVar36 = MakeTDecl<SSpinBox<double>,RequiredArgs::T0RequiredArgs>
                        (&local_2970,"SSpinBox<NumericType>",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Input\\SNumericEntryBox.h"
                         ,0x103,&local_30e7);
    pTVar36 = TSlateDecl<SSpinBox<double>,RequiredArgs::T0RequiredArgs>::Expose<SSpinBox<double>_>
                        (pTVar36,&this->SpinBox);
    TSlateDecl<SSpinBox<double>,RequiredArgs::T0RequiredArgs>::operator<<=
              (pTVar36,&local_2ab8,pFVar29);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2ab8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2970._Widget.SharedReferenceCount.ReferenceController);
    if (!bVar57) {
      TAttribute<FSlateFontInfo>::~TAttribute<FSlateFontInfo>(&local_2480);
    }
    SSpinBox<double>::FArguments::~FArguments(&local_970);
  }
  bVar12 = false;
  bVar11 = false;
  bVar58 = false;
  pFVar37 = SEditableText::FArguments::FArguments(&local_fd8);
  local_3108.SharedReferenceCount.ReferenceController =
       local_3108.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
  local_3108.Object = (SWidget *)OnGetValueForTextBox;
  local_2ad8 = OnGetValueForTextBox;
  pTStack_2ad0 = local_3108.SharedReferenceCount.ReferenceController;
  TAttribute<FText>::Bind<SNumericEntryBox<double>_>
            (&pFVar37->_Text,this,(pmf_0d70f6fe *)&local_2ad8);
  local_3108.Object = (SWidget *)GetToolTipText;
  local_3108.SharedReferenceCount.ReferenceController =
       local_3108.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
  local_2ac8 = GetToolTipText;
  pTStack_2ac0 = local_3108.SharedReferenceCount.ReferenceController;
  TAttribute<FText>::Bind<SNumericEntryBox<double>_>
            ((TAttribute<FText> *)pFVar37,this,(pmf_0d70f6fe *)&local_2ac8);
  pFVar8 = param_1->_EditableTextBoxStyle;
  local_2d80._0_8_ = *(undefined8 *)&(pFVar8->ForegroundColor).SpecifiedColor.field0_0x0;
  local_2d80._8_8_ =
       *(undefined8 *)((longlong)&(pFVar8->ForegroundColor).SpecifiedColor.field0_0x0 + 8);
  local_2d70._0_1_ = (pFVar8->ForegroundColor).ColorUseRule;
  local_2d70._1_1_ = (pFVar8->ForegroundColor).ColorTableId;
  local_2d70._2_2_ = *(undefined2 *)&(pFVar8->ForegroundColor).field_0x12;
  local_2d68._16_8_ = 0;
  local_2d6c = 1;
  local_2d68._0_8_ = 0;
  local_2d68._8_8_ = 0;
  pFVar37 = SEditableText::FArguments::ColorAndOpacity
                      (pFVar37,(TAttribute<FSlateColor> *)&local_2d80._s_0);
  local_2e88.bIsSet = true;
  local_2e88.Value = EVisibility::Visible;
  if (bVar13 != false) {
    local_2e88.Value = EVisibility::Collapsed;
  }
  local_2e88.Getter._0_8_ = 0;
  local_2e88.Getter._8_8_ = 0;
  local_2e88.Getter._16_8_ = 0;
  pFVar37 = TSlateBaseNamedArgs<SEditableText>::Visibility
                      ((TSlateBaseNamedArgs<SEditableText> *)pFVar37,&local_2e88);
  bVar57 = (param_1->_Font).bIsSet == false;
  if (bVar57) {
    pTVar30 = TAttribute<FSlateFontInfo>::TAttribute<FSlateFontInfo><FSlateFontInfo>
                        (&local_2400,&(param_1->_EditableTextBoxStyle->TextStyle).Font);
  }
  else {
    pTVar30 = TAttribute<FSlateFontInfo>::TAttribute<FSlateFontInfo>(&local_2380,&param_1->_Font);
  }
  FSlateFontInfo::FSlateFontInfo(&local_27b0.Value,&pTVar30->Value);
  local_27b0.bIsSet = pTVar30->bIsSet;
  TDelegate<FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy>
            (&local_27b0.Getter,&pTVar30->Getter);
  pFVar37 = SEditableText::FArguments::Font(pFVar37,&local_27b0);
  local_3048 = 0x101;
  local_3030 = 0;
  local_3040 = (undefined1  [8])0x0;
  pvStack_3038 = (void *)0x0;
  (pFVar37->_SelectAllTextWhenFocused).Value = true;
  (pFVar37->_SelectAllTextWhenFocused).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(pFVar37->_SelectAllTextWhenFocused).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3040);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3040);
  if (pvStack_3038 != (void *)0x0) {
    FMemory::Free(pvStack_3038);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3040);
  local_3068 = 0x100;
  local_3050 = 0;
  local_3060 = (undefined1  [8])0x0;
  pvStack_3058 = (void *)0x0;
  (pFVar37->_ClearKeyboardFocusOnCommit).Value = false;
  (pFVar37->_ClearKeyboardFocusOnCommit).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(pFVar37->_ClearKeyboardFocusOnCommit).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3060);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3060);
  if (pvStack_3058 != (void *)0x0) {
    FMemory::Free(pvStack_3058);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3060);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar37->_OnTextChanged,
             (FWriteAccessScope *)&local_2cb0);
  local_2c98 = &(pFVar37->_OnTextChanged).field_0x8;
  puVar25 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_2c98);
  pTVar56 = (TReferenceControllerBase<1> *)local_30b8._0_8_;
  if (puVar25 != (undefined8 *)0x0) {
    local_3108.Object = (SWidget *)OnTextChanged;
    local_3108.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)
         ((ulonglong)local_3078.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
    pTVar38 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_2aa8);
    pTVar56 = (pTVar38->SharedReferenceCount).ReferenceController;
    local_30f8 = pTVar38->Object;
    if (pTVar56 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar56->SharedReferenceCount = (atomic<int>)((int)pTVar56->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar56->SharedReferenceCount = (atomic<int>)((int)pTVar56->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar12 = true;
    bVar11 = true;
    bVar58 = true;
    *puVar25 = &
               ___7__TCommonDelegateInstanceState___A6AXAEBVFText___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar27 = FDelegateHandle::GenerateNewID();
    puVar25[2] = uVar27;
    *puVar25 = &
               ___7__TBaseSPMethodDelegateInstance__0A_V__SNumericEntryBox_N___00__A6AXAEBVFText___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar25[3] = local_30f8;
    puVar25[4] = pTVar56;
    if (pTVar56 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar56->WeakReferenceCount = (atomic<int>)((int)pTVar56->WeakReferenceCount + 1);
      UNLOCK();
    }
    puVar25[5] = local_3108.Object;
    puVar25[6] = local_3108.SharedReferenceCount.ReferenceController;
  }
  if (bVar58) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar56);
  }
  if (bVar11) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar56);
  }
  if (bVar12) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2aa8.SharedReferenceCount.ReferenceController);
  }
  bVar12 = false;
  bVar11 = false;
  bVar58 = false;
  if (local_2cb0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2cb0.Accessor,&local_2cb0);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar37->_OnTextCommitted,
             (FWriteAccessScope *)&local_2c90);
  local_2c78 = (TOptional<int>)&(pFVar37->_OnTextCommitted).field_0x8;
  puVar25 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_2c78);
  pTVar56 = (TReferenceControllerBase<1> *)local_30b8._0_8_;
  if (puVar25 != (undefined8 *)0x0) {
    local_3108.Object = (SWidget *)OnTextCommitted;
    local_3108.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)
         ((ulonglong)local_3078.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
    pTVar38 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_2a98);
    pTVar56 = (pTVar38->SharedReferenceCount).ReferenceController;
    local_30f8 = pTVar38->Object;
    if (pTVar56 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar56->SharedReferenceCount = (atomic<int>)((int)pTVar56->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar56->SharedReferenceCount = (atomic<int>)((int)pTVar56->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar12 = true;
    bVar11 = true;
    bVar58 = true;
    *puVar25 = &
               ___7__TCommonDelegateInstanceState___A6AXAEBVFText__W4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar27 = FDelegateHandle::GenerateNewID();
    puVar25[2] = uVar27;
    *puVar25 = &
               ___7__TBaseSPMethodDelegateInstance__0A_V__SNumericEntryBox_N___00__A6AXAEBVFText__W4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar25[3] = local_30f8;
    puVar25[4] = pTVar56;
    if (pTVar56 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar56->WeakReferenceCount = (atomic<int>)((int)pTVar56->WeakReferenceCount + 1);
      UNLOCK();
    }
    puVar25[5] = local_3108.Object;
    puVar25[6] = local_3108.SharedReferenceCount.ReferenceController;
  }
  if (bVar58) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar56);
  }
  if (bVar11) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar56);
  }
  if (bVar12) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2a98.SharedReferenceCount.ReferenceController);
  }
  if (local_2c90.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2c90.Accessor,&local_2c90);
  }
  local_3028 = 0x101;
  local_3020 = (undefined1  [8])0x0;
  pvStack_3018 = (void *)0x0;
  local_3010 = 0;
  (pFVar37->_SelectAllTextOnCommit).Value = true;
  (pFVar37->_SelectAllTextOnCommit).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar37->_SelectAllTextOnCommit).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3020);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3020);
  if (pvStack_3018 != (void *)0x0) {
    FMemory::Free(pvStack_3018);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3020);
  TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>::operator=
            (&pFVar37->_ContextMenuExtender,&param_1->_ContextMenuExtender);
  local_2ff8 = (param_1->_Justification).Value;
  local_2ff4 = (param_1->_Justification).bIsSet;
  TDelegate<enum_ETextJustify::Type___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<enum_ETextJustify::Type___cdecl(void),FDefaultDelegateUserPolicy>
            (local_2ff0,&(param_1->_Justification).Getter);
  (pFVar37->_Justification).Value = local_2ff8;
  (pFVar37->_Justification).bIsSet = local_2ff4;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar37->_Justification).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2ff0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2ff0);
  if ((void *)local_2ff0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_2ff0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2ff0);
  local_2da0._0_4_ = (param_1->_MinDesiredValueWidth).Value;
  local_2da0[4] = (param_1->_MinDesiredValueWidth).bIsSet;
  local_2d98._0_8_ = (TReferenceControllerBase<1> *)0x0;
  local_2d98._8_8_ = (SEditableText *)0x0;
  local_2d88 = 0;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)local_2d98,local_2fd0);
  pFVar37 = SEditableText::FArguments::MinDesiredWidth(pFVar37,(TAttribute<float> *)local_2da0);
  FLLMScope::FLLMScope(&local_30c0,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2f88 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2fd8,&local_2f88,true);
  TSlateDecl<SEditableText,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SEditableText,RequiredArgs::T0RequiredArgs>
            (&local_2e68,"SEditableText",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Input\\SNumericEntryBox.h"
             ,0x126,&local_30e6);
  FMemScope::~FMemScope(&local_2fd8);
  FLLMScope::~FLLMScope(&local_30c0);
  if (local_2e68._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_2e68._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_2e68._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_2b30 = (this->EditableText).Object;
  pTStack_2b28 = (this->EditableText).SharedReferenceCount.ReferenceController;
  (this->EditableText).Object = local_2e68._Widget.Object;
  (this->EditableText).SharedReferenceCount.ReferenceController =
       local_2e68._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_2b28);
  TSlateDecl<SEditableText,RequiredArgs::T0RequiredArgs>::operator<<=
            (&local_2e68,&local_2b20,pFVar37);
  TSharedRef<SEditableText,1>::~TSharedRef<SEditableText,1>(&local_2b20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2e68._Widget.SharedReferenceCount.ReferenceController);
  if (bVar57) {
    TAttribute<FSlateFontInfo>::~TAttribute<FSlateFontInfo>(&local_2400);
  }
  else {
    TAttribute<FSlateFontInfo>::~TAttribute<FSlateFontInfo>(&local_2380);
  }
  SEditableText::FArguments::~FArguments(&local_fd8);
  pFVar39 = SOverlay::FArguments::FArguments(&local_1db0);
  FLLMScope::FLLMScope(&local_30bc,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_30b8._24_4_ = LLMTagDeclaration_UI_Slate.UniqueName.ComparisonIndex.Value;
  local_30b8._28_4_ = LLMTagDeclaration_UI_Slate.UniqueName.Number;
  FMemScope::FMemScope((FMemScope *)(local_30b8 + 0x10),(FName *)(local_30b8 + 0x18),true);
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>
            (&local_2bf8,"SOverlay",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Input\\SNumericEntryBox.h"
             ,0x135,&local_30e5);
  FMemScope::~FMemScope((FMemScope *)(local_30b8 + 0x10));
  FLLMScope::~FLLMScope(&local_30bc);
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::operator<<=
            (&local_2bf8,(TSharedRef<SOverlay,1> *)(local_30b8 + 0x30),pFVar39);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2bf8._Widget.SharedReferenceCount.ReferenceController);
  SOverlay::FArguments::~FArguments(&local_1db0);
  if (bVar13 != false) {
    pFVar40 = SOverlay::AddSlot((SOverlay *)local_30b8._48_8_,&local_228,-1);
    pFVar41 = TAlignmentWidgetSlotMixin<SOverlay::FOverlaySlot>::FSlotArgumentsMixin::HAlign
                        ((FSlotArgumentsMixin *)&pFVar40->_padding_,HAlign_Fill);
    pFVar41 = TAlignmentWidgetSlotMixin<SOverlay::FOverlaySlot>::FSlotArgumentsMixin::VAlign
                        ((FSlotArgumentsMixin *)&pFVar41->_padding_,VAlign_Center);
    pTVar42 = TSharedPtr<SSpinBox<double>,1>::ToSharedRef(&this->SpinBox,&local_2b10);
    TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SSpinBox<double>_>(&local_2e00,pTVar42);
    TSlotBase<SOverlay::FOverlaySlot>::FSlotArguments::operator[]
              ((FSlotArguments *)pFVar41,&local_2e00);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2e00.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2b10.SharedReferenceCount.ReferenceController);
    TPanelChildren<SOverlay::FOverlaySlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
              (&local_228);
  }
  bVar58 = (param_1->_OverrideTextMargin).bIsSet == false;
  if (bVar58) {
    pTVar43 = TAttribute<FMargin>::TAttribute<FMargin><FMargin>
                        (&local_28f0,&param_1->_EditableTextBoxStyle->Padding);
  }
  else {
    pTVar43 = TAttribute<FMargin>::TAttribute<FMargin>(&local_28c0,&param_1->_OverrideTextMargin);
  }
  local_2f80._0_4_ = (pTVar43->Value).Left;
  local_2f80._4_4_ = (pTVar43->Value).Top;
  lStack_2f78._0_4_ = (pTVar43->Value).Right;
  lStack_2f78._4_4_ = (pTVar43->Value).Bottom;
  local_2f70 = pTVar43->bIsSet;
  local_2f68 = (undefined1  [8])0x0;
  pvStack_2f60 = (void *)0x0;
  local_2f58 = 0;
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> *)local_2f68,
             &pTVar43->Getter);
  if (bVar58) {
    TAttribute<FMargin>::~TAttribute<FMargin>(&local_28f0);
  }
  else {
    TAttribute<FMargin>::~TAttribute<FMargin>(&local_28c0);
  }
  bVar11 = false;
  bVar58 = false;
  pFVar40 = SOverlay::AddSlot((SOverlay *)local_30b8._48_8_,&local_188,-1);
  plVar3 = &pFVar40->_padding_;
  if ((longlong *)local_2f90 != plVar3) {
    *(undefined4 *)plVar3 = 0;
    *(undefined1 *)((longlong)&pFVar40->_padding_ + 4) = 1;
  }
  pFVar55 = (FScopedWidgetSlotArguments *)0x0;
  if (plVar3 != (longlong *)0x0) {
    pFVar55 = pFVar40;
  }
  if ((longlong *)local_2fc8 != &pFVar55->_padding_) {
    *(undefined4 *)&pFVar55->_padding_ = 2;
    *(undefined1 *)((longlong)&pFVar55->_padding_ + 4) = 1;
  }
  local_29e8.bIsSet = (bool)local_2f70;
  local_29e8.Value.Left = (float)(undefined4)local_2f80;
  local_29e8.Value.Top = (float)local_2f80._4_4_;
  local_29e8.Value.Right = (float)(undefined4)lStack_2f78;
  local_29e8.Value.Bottom = (float)lStack_2f78._4_4_;
  local_29e8.Getter._16_4_ = 0;
  pFVar40 = (FScopedWidgetSlotArguments *)0x0;
  if (pFVar55 != (FScopedWidgetSlotArguments *)0xffffffffffffffb8) {
    pFVar40 = pFVar55;
  }
  local_29e8.Getter._0_8_ = 0;
  local_29e8.Getter._8_8_ = 0;
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&local_29e8.Getter,
             (TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> *)local_2f68);
  pFVar41 = TPaddingWidgetSlotMixin<SOverlay::FOverlaySlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)&pFVar40->_padding_,&local_29e8);
  pTVar44 = TSharedPtr<SEditableText,1>::ToSharedRef(&this->EditableText,&local_2a88);
  pTVar56 = (pTVar44->SharedReferenceCount).ReferenceController;
  local_30b8._32_8_ = pTVar44->Object;
  if (pTVar56 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar56->SharedReferenceCount = (atomic<int>)((int)pTVar56->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar56->SharedReferenceCount = (atomic<int>)((int)pTVar56->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_30b8._40_8_ = pTVar56;
  if (&pFVar41->_padding_ != (longlong *)(local_30b8 + 0x20)) {
    pFVar41->_padding_ = local_30b8._32_8_;
    local_30b8._32_8_ = (SEditableText *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar41->_padding_,
               (FSharedReferencer<1> *)(local_30b8 + 0x28));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_30b8._40_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar56);
  TSharedRef<SEditableText,1>::~TSharedRef<SEditableText,1>(&local_2a88);
  TPanelChildren<SOverlay::FOverlaySlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
            (&local_188);
  local_30b8._16_8_ = (param_1->_Label).Widget.Object;
  bVar57 = false;
  local_30b8._24_8_ = SNullWidget::NullWidget.Object;
  bVar12 = false;
  local_3108.Object = (SWidget *)0x0;
  local_3108.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (((SWidget *)local_30b8._16_8_ != SNullWidget::NullWidget.Object) &&
     (param_1->_LabelLocation == Inside)) {
    bVar57 = true;
    bVar12 = true;
    pFVar40 = SOverlay::AddSlot((SOverlay *)local_30b8._48_8_,&local_e8,-1);
    pFVar41 = TAlignmentWidgetSlotMixin<SOverlay::FOverlaySlot>::FSlotArgumentsMixin::HAlign
                        ((FSlotArgumentsMixin *)&pFVar40->_padding_,HAlign_Left);
    pFVar41 = TAlignmentWidgetSlotMixin<SOverlay::FOverlaySlot>::FSlotArgumentsMixin::VAlign
                        ((FSlotArgumentsMixin *)&pFVar41->_padding_,param_1->_LabelVAlign);
    pTVar43 = TAttribute<FMargin>::TAttribute<FMargin><FMargin>(&local_25f0,&param_1->_LabelPadding)
    ;
    pFVar41 = TPaddingWidgetSlotMixin<SOverlay::FOverlaySlot>::FSlotArgumentsMixin::Padding
                        ((FSlotArgumentsMixin *)&pFVar41->_padding_,pTVar43);
    TSlotBase<SOverlay::FOverlaySlot>::FSlotArguments::operator[]
              ((FSlotArguments *)pFVar41,&(param_1->_Label).Widget);
    TPanelChildren<SOverlay::FOverlaySlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
              (&local_e8);
  }
  if ((bVar13 == false) || (bVar57)) {
    pFVar45 = SBorder::FArguments::FArguments(&local_13b8);
    (pFVar45->_BorderImage).bIsSet = true;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(pFVar45->_BorderImage).Getter,(FWriteAccessScope *)&local_2c70);
    local_2c58 = &(pFVar45->_BorderImage).Getter.field_0x8;
    puVar25 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_2c58);
    pTVar56 = (TReferenceControllerBase<1> *)local_30b8._0_8_;
    if (puVar25 != (undefined8 *)0x0) {
      local_30b8._12_4_ = local_3078.SharedReferenceCount.ReferenceController._4_4_;
      local_30b8._0_8_ = GetBorderImage;
      local_30b8._8_4_ = 0;
      pTVar26 = TSharedFromThis<SWidget,1>::AsShared
                          ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_2a78);
      pTVar56 = (pTVar26->SharedReferenceCount).ReferenceController;
      pSVar9 = pTVar26->Object;
      if (pTVar56 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar56->SharedReferenceCount = (atomic<int>)((int)pTVar56->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar56->SharedReferenceCount = (atomic<int>)((int)pTVar56->SharedReferenceCount + 1);
        UNLOCK();
      }
      *puVar25 = &
                 ___7__TCommonDelegateInstanceState___A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar27 = FDelegateHandle::GenerateNewID();
      puVar25[2] = uVar27;
      *puVar25 = &
                 ___7__TBaseSPMethodDelegateInstance__00__CBV__SNumericEntryBox_N___00__A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar25[3] = pSVar9;
      puVar25[4] = pTVar56;
      if (pTVar56 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar56->WeakReferenceCount = (atomic<int>)((int)pTVar56->WeakReferenceCount + 1);
        UNLOCK();
      }
      puVar25[5] = local_30b8._0_8_;
      puVar25[6] = CONCAT44(local_30b8._12_4_,local_30b8._8_4_);
      bVar11 = true;
      bVar58 = true;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar56);
    }
    if (bVar58) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar56);
    }
    if (bVar11) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2a78.SharedReferenceCount.ReferenceController);
    }
    if (local_2c70.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2c70.Accessor,&local_2c70);
    }
    local_2d40._0_1_ = (param_1->_BorderBackgroundColor).ColorUseRule;
    local_2d40._1_1_ = (param_1->_BorderBackgroundColor).ColorTableId;
    local_2d40._2_2_ = *(undefined2 *)&(param_1->_BorderBackgroundColor).field_0x12;
    local_2d50._0_8_ = *(undefined8 *)&(param_1->_BorderBackgroundColor).SpecifiedColor.field0_0x0;
    local_2d50._8_8_ =
         *(undefined8 *)((longlong)&(param_1->_BorderBackgroundColor).SpecifiedColor.field0_0x0 + 8)
    ;
    local_2d3c = 1;
    local_2d38._16_8_ = 0;
    local_2d38._0_8_ = 0;
    local_2d38._8_8_ = 0;
    pFVar45 = SBorder::FArguments::BorderBackgroundColor
                        (pFVar45,(TAttribute<FSlateColor> *)&local_2d50._s_0);
    local_2d10._0_1_ = (param_1->_BorderForegroundColor).ColorUseRule;
    local_2d10._1_1_ = (param_1->_BorderForegroundColor).ColorTableId;
    local_2d10._2_2_ = *(undefined2 *)&(param_1->_BorderForegroundColor).field_0x12;
    local_2d20._0_8_ = *(undefined8 *)&(param_1->_BorderForegroundColor).SpecifiedColor.field0_0x0;
    local_2d20._8_8_ =
         *(undefined8 *)((longlong)&(param_1->_BorderForegroundColor).SpecifiedColor.field0_0x0 + 8)
    ;
    local_2d0c = 1;
    local_2cf8._0_4_ = 0.0;
    local_2cf8[4] = false;
    local_2cf8[5] = 0;
    local_2cf8._6_2_ = 0;
    local_2d08 = (FSlateBrush *)0x0;
    pFStack_2d00 = (FSlateBrush *)0x0;
    pFVar45 = SBorder::FArguments::ForegroundColor
                        (pFVar45,(TAttribute<FSlateColor> *)&local_2d20._s_0);
    pFVar45 = SBorder::FArguments::Padding(pFVar45,0.0);
    local_3008 = (SOverlay *)local_30b8._48_8_;
    pTStack_3000 = local_3080;
    if (local_3080 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_3080->SharedReferenceCount = (atomic<int>)((int)local_3080->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      local_3080->SharedReferenceCount = (atomic<int>)((int)local_3080->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar56 = (pFVar45->_Content).Widget.SharedReferenceCount.ReferenceController;
    (pFVar45->_Content).Widget.Object = (SWidget *)local_30b8._48_8_;
    (pFVar45->_Content).Widget.SharedReferenceCount.ReferenceController = local_3080;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar56);
    FLLMScope::FLLMScope
              ((FLLMScope *)local_30d0,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true
              );
    local_2fa0 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_2f98,&local_2fa0,true);
    TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>
              (&local_2be0,"SBorder",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Input\\SNumericEntryBox.h"
               ,0x167,&local_30e4);
    FMemScope::~FMemScope(&local_2f98);
    FLLMScope::~FLLMScope((FLLMScope *)local_30d0);
    pTVar46 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_2be0,&local_2a28,pFVar45);
    local_2fb8.ReferenceController = (pTVar46->SharedReferenceCount).ReferenceController;
    local_3108.Object = (SWidget *)pTVar46->Object;
    if (local_2fb8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_2fb8.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_2fb8.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_2fc0 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&local_3108.SharedReferenceCount,&local_2fb8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2fb8.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2a28.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2be0._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_3080);
    SBorder::FArguments::~FArguments(&local_13b8);
  }
  else {
    TSharedPtr<SWidget,1>::TSharedPtr<SWidget,1><SOverlay>
              (&local_2df0,(TSharedRef<SOverlay,1> *)(local_30b8 + 0x30));
    TSharedPtr<SWidget,1>::operator=(&local_3108,&local_2df0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2df0.SharedReferenceCount.ReferenceController);
    bVar12 = false;
  }
  if ((local_30b8._16_8_ == local_30b8._24_8_) || (bVar12)) {
    if (bVar14 == false) {
      pTVar38 = TSharedPtr<SWidget,1>::ToSharedRef(&local_3108,&local_3078);
      TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::operator[]
                ((TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *)
                 &this->_padding_,pTVar38);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)
                 CONCAT44(local_3078.SharedReferenceCount.ReferenceController._4_4_,
                          local_3078.SharedReferenceCount.ReferenceController._0_4_));
      goto LAB_142f66a68;
    }
    pFVar47 = SHorizontalBox::FArguments::FArguments(&local_19a0);
    pFVar50 = SHorizontalBox::Slot(&local_2218);
    pFVar50 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar50);
    pFVar50 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::HAlign
                        ((FSlotArgumentsMixin *)&pFVar50->field_0x48,HAlign_Fill);
    pFVar50 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::VAlign
                        ((FSlotArgumentsMixin *)&pFVar50->field_0x48,VAlign_Center);
    pTVar43 = TAttribute<FMargin>::TAttribute<FMargin><FMargin>
                        (&local_2560,&param_1->_TogglePadding);
    pFVar50 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                        ((FSlotArgumentsMixin *)&pFVar50->field_0x18,pTVar43);
    pTVar51 = TSharedPtr<SCheckBox,1>::ToSharedRef(&this->ToggleCheckBox,&local_2bb0);
    TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SCheckBox>(&local_2db0,pTVar51);
    pFVar50 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                        ((FSlotArguments *)pFVar50,&local_2db0);
    pFVar47 = SHorizontalBox::FArguments::operator+(pFVar47,pFVar50);
    pFVar50 = SHorizontalBox::Slot(&local_2300);
    pTVar38 = TSharedPtr<SWidget,1>::ToSharedRef(&local_3108,&local_2c20);
    pFVar50 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                        ((FSlotArguments *)pFVar50,pTVar38);
    pFVar47 = SHorizontalBox::FArguments::operator+(pFVar47,pFVar50);
    pTVar48 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                        (&local_29a0,"SHorizontalBox",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Input\\SNumericEntryBox.h"
                         ,0x177,local_30e2);
    pTVar52 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                        (pTVar48,&local_29f8,pFVar47);
    TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SHorizontalBox>(&local_2dc0,pTVar52);
    TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::operator[]
              ((TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *)
               &this->_padding_,&local_2dc0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2dc0.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_29f8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_29a0._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2c20.SharedReferenceCount.ReferenceController);
    SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_2300);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2db0.SharedReferenceCount.ReferenceController);
    TSharedRef<SCheckBox,1>::~TSharedRef<SCheckBox,1>(&local_2bb0);
    SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_2218);
    SHorizontalBox::FArguments::~FArguments(&local_19a0);
  }
  else {
    pFVar47 = SHorizontalBox::FArguments::FArguments(&local_1ba8);
    pTVar48 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                        (&local_29b8,"SHorizontalBox",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Input\\SNumericEntryBox.h"
                         ,400,&local_30e3);
    TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
              (pTVar48,&local_2fb0,pFVar47);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_29b8._Widget.SharedReferenceCount.ReferenceController);
    SHorizontalBox::FArguments::~FArguments(&local_1ba8);
    pFVar49 = SHorizontalBox::AddSlot(local_2fb0.Object,&local_20b0);
    pFVar50 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth
                        ((FSlotArguments *)&pFVar49->_padding_);
    pFVar50 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::HAlign
                        ((FSlotArgumentsMixin *)&pFVar50->field_0x48,HAlign_Left);
    pFVar50 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::VAlign
                        ((FSlotArgumentsMixin *)&pFVar50->field_0x48,param_1->_LabelVAlign);
    pTVar43 = TAttribute<FMargin>::TAttribute<FMargin><FMargin>(&local_25c0,&param_1->_LabelPadding)
    ;
    pFVar50 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                        ((FSlotArgumentsMixin *)&pFVar50->field_0x18,pTVar43);
    TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
              ((FSlotArguments *)pFVar50,&(param_1->_Label).Widget);
    SBoxPanel::FScopedWidgetSlotArguments<SHorizontalBox::FSlot>::
    ~FScopedWidgetSlotArguments<SHorizontalBox::FSlot>(&local_20b0);
    if (bVar14 != false) {
      pFVar49 = SHorizontalBox::AddSlot(local_2fb0.Object,&local_1fb0);
      pFVar50 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth
                          ((FSlotArguments *)&pFVar49->_padding_);
      pFVar50 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::HAlign
                          ((FSlotArgumentsMixin *)&pFVar50->field_0x48,HAlign_Fill);
      pFVar50 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::VAlign
                          ((FSlotArgumentsMixin *)&pFVar50->field_0x48,VAlign_Center);
      pTVar43 = TAttribute<FMargin>::TAttribute<FMargin><FMargin>
                          (&local_2590,&param_1->_TogglePadding);
      pFVar50 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                          ((FSlotArgumentsMixin *)&pFVar50->field_0x18,pTVar43);
      pTVar51 = TSharedPtr<SCheckBox,1>::ToSharedRef(&this->ToggleCheckBox,&local_2a18);
      TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SCheckBox>(&local_2de0,pTVar51);
      TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                ((FSlotArguments *)pFVar50,&local_2de0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2de0.SharedReferenceCount.ReferenceController);
      TSharedRef<SCheckBox,1>::~TSharedRef<SCheckBox,1>(&local_2a18);
      SBoxPanel::FScopedWidgetSlotArguments<SHorizontalBox::FSlot>::
      ~FScopedWidgetSlotArguments<SHorizontalBox::FSlot>(&local_1fb0);
    }
    pFVar49 = SHorizontalBox::AddSlot(local_2fb0.Object,&local_1eb0);
    pTVar38 = TSharedPtr<SWidget,1>::ToSharedRef(&local_3108,&local_2a08);
    TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
              ((FSlotArguments *)&pFVar49->_padding_,pTVar38);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2a08.SharedReferenceCount.ReferenceController);
    SBoxPanel::FScopedWidgetSlotArguments<SHorizontalBox::FSlot>::
    ~FScopedWidgetSlotArguments<SHorizontalBox::FSlot>(&local_1eb0);
    TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SHorizontalBox>(&local_2dd0,&local_2fb0);
    TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::operator[]
              ((TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *)
               &this->_padding_,&local_2dd0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2dd0.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2fb0.SharedReferenceCount.ReferenceController);
  }
  if (bVar14 != false) {
    local_2bc8 = 0;
    uStack_2bc0 = 0;
    local_2bb8 = 0;
    pTVar53 = TDelegate<void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy>::
              TDelegate<void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy>(&local_2bc8);
    pEVar54 = TAttribute<enum_ECheckBoxState>::Get(&param_1->_ToggleChecked);
    HandleToggleCheckBoxChanged(this,*pEVar54,pTVar53);
  }
LAB_142f66a68:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3108.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2f68);
  if (pvStack_2f60 != (void *)0x0) {
    FMemory::Free(pvStack_2f60);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2f68);
  TSharedRef<SOverlay,1>::~TSharedRef<SOverlay,1>((TSharedRef<SOverlay,1> *)(local_30b8 + 0x30));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// GetBorderImage @ 142fd03a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FSlateBrush * __thiscall SNumericEntryBox<int>::GetBorderImage(SNumericEntryBox<int> *this)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  FSlateBrush *pFVar4;
  FSharedReferencer<1> FVar5;
  SSpinBox<int> *local_38;
  FSharedReferencer<1> local_30;
  undefined8 local_28;
  FSharedReferencer<1> local_20;
  undefined8 local_18;
  FSharedReferencer<1> local_10;
  
  local_38 = (this->SpinBox).Object;
  local_30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if ((local_38 == (SSpinBox<int> *)0x0) ||
     ((TEnumAsByte<EVisibility::Private>)*(uchar *)((longlong)&local_38->_padding_ + 1) !=
      EVisibility::Visible.Value.Value)) {
    local_10.ReferenceController = (this->EditableText).SharedReferenceCount.ReferenceController;
    local_38 = (SSpinBox<int> *)(this->EditableText).Object;
    if (local_10.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_10.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_10.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&local_30,&local_10);
    FVar5.ReferenceController = local_10.ReferenceController;
  }
  else {
    local_20.ReferenceController = (this->SpinBox).SharedReferenceCount.ReferenceController;
    if (local_20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_20.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_20.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_28 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&local_30,&local_20);
    FVar5.ReferenceController = local_20.ReferenceController;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar5.ReferenceController);
  if (local_38 == (SSpinBox<int> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FSlateBrush *)(*pcVar1)();
      return pFVar4;
    }
  }
  cVar3 = (**(code **)(local_38->_padding_ + 0x1a0))(local_38);
  if (cVar3 == '\0') {
    if (local_38 == (SSpinBox<int> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FSlateBrush *)(*pcVar1)();
        return pFVar4;
      }
    }
    if (*(char *)((longlong)&local_38->_padding_ + 3) == '\0') {
      pFVar4 = this->BorderImageNormal;
    }
    else {
      pFVar4 = this->BorderImageHovered;
    }
  }
  else {
    pFVar4 = this->BorderImageFocused;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  return pFVar4;
}

// GetBorderImage @ 142fd0500

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FSlateBrush * __thiscall SNumericEntryBox<float>::GetBorderImage(SNumericEntryBox<float> *this)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  FSlateBrush *pFVar4;
  FSharedReferencer<1> FVar5;
  SSpinBox<float> *local_38;
  FSharedReferencer<1> local_30;
  undefined8 local_28;
  FSharedReferencer<1> local_20;
  undefined8 local_18;
  FSharedReferencer<1> local_10;
  
  local_38 = (this->SpinBox).Object;
  local_30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if ((local_38 == (SSpinBox<float> *)0x0) ||
     ((TEnumAsByte<EVisibility::Private>)*(uchar *)((longlong)&local_38->_padding_ + 1) !=
      EVisibility::Visible.Value.Value)) {
    local_10.ReferenceController = (this->EditableText).SharedReferenceCount.ReferenceController;
    local_38 = (SSpinBox<float> *)(this->EditableText).Object;
    if (local_10.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_10.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_10.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&local_30,&local_10);
    FVar5.ReferenceController = local_10.ReferenceController;
  }
  else {
    local_20.ReferenceController = (this->SpinBox).SharedReferenceCount.ReferenceController;
    if (local_20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_20.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_20.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_28 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&local_30,&local_20);
    FVar5.ReferenceController = local_20.ReferenceController;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar5.ReferenceController);
  if (local_38 == (SSpinBox<float> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FSlateBrush *)(*pcVar1)();
      return pFVar4;
    }
  }
  cVar3 = (**(code **)(local_38->_padding_ + 0x1a0))(local_38);
  if (cVar3 == '\0') {
    if (local_38 == (SSpinBox<float> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FSlateBrush *)(*pcVar1)();
        return pFVar4;
      }
    }
    if (*(char *)((longlong)&local_38->_padding_ + 3) == '\0') {
      pFVar4 = this->BorderImageNormal;
    }
    else {
      pFVar4 = this->BorderImageHovered;
    }
  }
  else {
    pFVar4 = this->BorderImageFocused;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  return pFVar4;
}

// GetBorderImage @ 142fd0660

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FSlateBrush * __thiscall SNumericEntryBox<double>::GetBorderImage(SNumericEntryBox<double> *this)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  FSlateBrush *pFVar4;
  FSharedReferencer<1> FVar5;
  SSpinBox<double> *local_38;
  FSharedReferencer<1> local_30;
  undefined8 local_28;
  FSharedReferencer<1> local_20;
  undefined8 local_18;
  FSharedReferencer<1> local_10;
  
  local_38 = (this->SpinBox).Object;
  local_30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if ((local_38 == (SSpinBox<double> *)0x0) ||
     ((TEnumAsByte<EVisibility::Private>)*(uchar *)((longlong)&local_38->_padding_ + 1) !=
      EVisibility::Visible.Value.Value)) {
    local_10.ReferenceController = (this->EditableText).SharedReferenceCount.ReferenceController;
    local_38 = (SSpinBox<double> *)(this->EditableText).Object;
    if (local_10.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_10.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_10.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&local_30,&local_10);
    FVar5.ReferenceController = local_10.ReferenceController;
  }
  else {
    local_20.ReferenceController = (this->SpinBox).SharedReferenceCount.ReferenceController;
    if (local_20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_20.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_20.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_28 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&local_30,&local_20);
    FVar5.ReferenceController = local_20.ReferenceController;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar5.ReferenceController);
  if (local_38 == (SSpinBox<double> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FSlateBrush *)(*pcVar1)();
      return pFVar4;
    }
  }
  cVar3 = (**(code **)(local_38->_padding_ + 0x1a0))(local_38);
  if (cVar3 == '\0') {
    if (local_38 == (SSpinBox<double> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FSlateBrush *)(*pcVar1)();
        return pFVar4;
      }
    }
    if (*(char *)((longlong)&local_38->_padding_ + 3) == '\0') {
      pFVar4 = this->BorderImageNormal;
    }
    else {
      pFVar4 = this->BorderImageHovered;
    }
  }
  else {
    pFVar4 = this->BorderImageFocused;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  return pFVar4;
}

// GetCachedString @ 142fd1240

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FString * __thiscall
SNumericEntryBox<int>::GetCachedString
          (SNumericEntryBox<int> *this,FString *__return_storage_ptr__,int param_1)

{
  FScriptContainerElement *_Src;
  INumericTypeInterface<int> *pIVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  longlong lVar5;
  int local_res18 [2];
  FString local_28;
  FScriptContainerElement *local_18 [2];
  
  local_res18[0] = param_1;
  if ((((this->CachedExternalValue).bIsSet == false) ||
      (param_1 != (this->CachedExternalValue).TypedValue)) ||
     (this->bCachedValueStringDirty != false)) {
    if ((this->Interface).Object == (INumericTypeInterface<int> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FString *)(*pcVar2)();
        return pFVar4;
      }
    }
    pIVar1 = (this->Interface).Object;
    pFVar4 = (FString *)(**(code **)((longlong)*pIVar1 + 0x38))(pIVar1,local_18,local_res18);
    ::FString::FString(__return_storage_ptr__,pFVar4);
  }
  else {
    _Src = (this->CachedValueString).Data.AllocatorInstance.Data;
    local_28.Data.ArrayNum = (this->CachedValueString).Data.ArrayNum;
    lVar5 = (longlong)local_28.Data.ArrayNum;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_28.Data.ArrayNum == 0) {
      local_28.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_28.Data.ArrayNum,0,(ForAnyElementType *)&local_28,local_28.Data.ArrayNum,
                 &local_28.Data.ArrayMax);
      memcpy(local_28.Data.AllocatorInstance.Data,_Src,lVar5 * 2);
    }
    ::FString::FString(__return_storage_ptr__,&local_28);
    local_18[0] = local_28.Data.AllocatorInstance.Data;
  }
  if (local_18[0] != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18[0]);
  }
  return __return_storage_ptr__;
}

// GetCachedString @ 142fd1370

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FString * __thiscall
SNumericEntryBox<float>::GetCachedString
          (SNumericEntryBox<float> *this,FString *__return_storage_ptr__,float param_1)

{
  FScriptContainerElement *_Src;
  INumericTypeInterface<float> *pIVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  longlong lVar5;
  float local_res18 [2];
  FString local_28;
  FScriptContainerElement *local_18 [2];
  
  local_res18[0] = param_1;
  if ((((this->CachedExternalValue).bIsSet == false) ||
      (param_1 != (this->CachedExternalValue).TypedValue)) ||
     (this->bCachedValueStringDirty != false)) {
    if ((this->Interface).Object == (INumericTypeInterface<float> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FString *)(*pcVar2)();
        return pFVar4;
      }
    }
    pIVar1 = (this->Interface).Object;
    pFVar4 = (FString *)(**(code **)((longlong)*pIVar1 + 0x38))(pIVar1,local_18,local_res18);
    ::FString::FString(__return_storage_ptr__,pFVar4);
  }
  else {
    _Src = (this->CachedValueString).Data.AllocatorInstance.Data;
    local_28.Data.ArrayNum = (this->CachedValueString).Data.ArrayNum;
    lVar5 = (longlong)local_28.Data.ArrayNum;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_28.Data.ArrayNum == 0) {
      local_28.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_28.Data.ArrayNum,0,(ForAnyElementType *)&local_28,local_28.Data.ArrayNum,
                 &local_28.Data.ArrayMax);
      memcpy(local_28.Data.AllocatorInstance.Data,_Src,lVar5 * 2);
    }
    ::FString::FString(__return_storage_ptr__,&local_28);
    local_18[0] = local_28.Data.AllocatorInstance.Data;
  }
  if (local_18[0] != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18[0]);
  }
  return __return_storage_ptr__;
}

// GetCachedString @ 142fd14a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FString * __thiscall
SNumericEntryBox<double>::GetCachedString
          (SNumericEntryBox<double> *this,FString *__return_storage_ptr__,double param_1)

{
  FScriptContainerElement *_Src;
  INumericTypeInterface<double> *pIVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  longlong lVar5;
  double local_res18;
  FString local_28;
  FScriptContainerElement *local_18 [2];
  
  local_res18 = param_1;
  if ((((this->CachedExternalValue).bIsSet == false) ||
      (param_1 != (this->CachedExternalValue).TypedValue)) ||
     (this->bCachedValueStringDirty != false)) {
    if ((this->Interface).Object == (INumericTypeInterface<double> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FString *)(*pcVar2)();
        return pFVar4;
      }
    }
    pIVar1 = (this->Interface).Object;
    pFVar4 = (FString *)(**(code **)((longlong)*pIVar1 + 0x38))(pIVar1,local_18,&local_res18);
    ::FString::FString(__return_storage_ptr__,pFVar4);
  }
  else {
    _Src = (this->CachedValueString).Data.AllocatorInstance.Data;
    local_28.Data.ArrayNum = (this->CachedValueString).Data.ArrayNum;
    lVar5 = (longlong)local_28.Data.ArrayNum;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_28.Data.ArrayNum == 0) {
      local_28.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_28.Data.ArrayNum,0,(ForAnyElementType *)&local_28,local_28.Data.ArrayNum,
                 &local_28.Data.ArrayMax);
      memcpy(local_28.Data.AllocatorInstance.Data,_Src,lVar5 * 2);
    }
    ::FString::FString(__return_storage_ptr__,&local_28);
    local_18[0] = local_28.Data.AllocatorInstance.Data;
  }
  if (local_18[0] != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18[0]);
  }
  return __return_storage_ptr__;
}

// GetToolTipText @ 142fd9950

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __thiscall
SNumericEntryBox<int>::GetToolTipText(SNumericEntryBox<int> *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  code *pcVar2;
  bool bVar3;
  TOptional<int> *pTVar4;
  FString *pFVar5;
  TOptional<FTextFormat> *pTVar6;
  FText *pFVar7;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  FText local_48;
  FText local_38;
  FTextFormat local_28;
  FString local_18;
  
  pTVar4 = TAttribute<TOptional<int>_>::Get(&this->ValueAttribute);
  if (pTVar4->bIsSet == true) {
    pFVar5 = GetCachedString(this,&local_18,pTVar4->TypedValue);
    FText::FromString(&local_48,pFVar5);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    pTVar6 = TAttribute<TOptional<FTextFormat>_>::Get(&this->ToolTipTextFormat);
    if (pTVar6->bIsSet == false) {
      FText::FText(__return_storage_ptr__,&local_48);
    }
    else {
      local_38.TextData.Reference = local_48.TextData.Reference;
      if (local_48.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_48.TextData.Reference + 8))
                  (local_48.TextData.Reference,local_res8);
      }
      local_38.Flags = local_48.Flags;
      pTVar6 = TAttribute<TOptional<FTextFormat>_>::Get(&this->ToolTipTextFormat);
      if (pTVar6->bIsSet == false) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pFVar7 = (FText *)(*pcVar2)();
          return pFVar7;
        }
      }
      local_28.TextFormatData.Object = (pTVar6->TypedValue).TextFormatData.Object;
      local_28.TextFormatData.SharedReferenceCount.ReferenceController =
           (pTVar6->TypedValue).TextFormatData.SharedReferenceCount.ReferenceController;
      if (local_28.TextFormatData.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_28.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_28.TextFormatData.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      FText::Format<FText>(__return_storage_ptr__,&local_28,&local_38);
    }
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
      return __return_storage_ptr__;
    }
  }
  else {
    pFVar7 = FText::GetEmpty();
    (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
    pIVar1 = (pFVar7->TextData).Reference;
    (__return_storage_ptr__->TextData).Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res18);
    }
    __return_storage_ptr__->Flags = pFVar7->Flags;
  }
  return __return_storage_ptr__;
}

// GetToolTipText @ 142fd9ac0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __thiscall
SNumericEntryBox<float>::GetToolTipText(SNumericEntryBox<float> *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  code *pcVar2;
  bool bVar3;
  TOptional<float> *pTVar4;
  FString *pFVar5;
  TOptional<FTextFormat> *pTVar6;
  FText *pFVar7;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  FText local_48;
  FText local_38;
  FTextFormat local_28;
  FString local_18;
  
  pTVar4 = TAttribute<TOptional<float>_>::Get(&this->ValueAttribute);
  if (pTVar4->bIsSet == true) {
    pFVar5 = GetCachedString(this,&local_18,pTVar4->TypedValue);
    FText::FromString(&local_48,pFVar5);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    pTVar6 = TAttribute<TOptional<FTextFormat>_>::Get(&this->ToolTipTextFormat);
    if (pTVar6->bIsSet == false) {
      FText::FText(__return_storage_ptr__,&local_48);
    }
    else {
      local_38.TextData.Reference = local_48.TextData.Reference;
      if (local_48.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_48.TextData.Reference + 8))
                  (local_48.TextData.Reference,local_res8);
      }
      local_38.Flags = local_48.Flags;
      pTVar6 = TAttribute<TOptional<FTextFormat>_>::Get(&this->ToolTipTextFormat);
      if (pTVar6->bIsSet == false) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pFVar7 = (FText *)(*pcVar2)();
          return pFVar7;
        }
      }
      local_28.TextFormatData.Object = (pTVar6->TypedValue).TextFormatData.Object;
      local_28.TextFormatData.SharedReferenceCount.ReferenceController =
           (pTVar6->TypedValue).TextFormatData.SharedReferenceCount.ReferenceController;
      if (local_28.TextFormatData.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_28.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_28.TextFormatData.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      FText::Format<FText>(__return_storage_ptr__,&local_28,&local_38);
    }
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
      return __return_storage_ptr__;
    }
  }
  else {
    pFVar7 = FText::GetEmpty();
    (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
    pIVar1 = (pFVar7->TextData).Reference;
    (__return_storage_ptr__->TextData).Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res18);
    }
    __return_storage_ptr__->Flags = pFVar7->Flags;
  }
  return __return_storage_ptr__;
}

// GetToolTipText @ 142fd9c30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __thiscall
SNumericEntryBox<double>::GetToolTipText
          (SNumericEntryBox<double> *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  code *pcVar2;
  bool bVar3;
  TOptional<double> *pTVar4;
  FString *pFVar5;
  TOptional<FTextFormat> *pTVar6;
  FText *pFVar7;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  FText local_48;
  FText local_38;
  FTextFormat local_28;
  FString local_18;
  
  pTVar4 = TAttribute<TOptional<double>_>::Get(&this->ValueAttribute);
  if (pTVar4->bIsSet == true) {
    pFVar5 = GetCachedString(this,&local_18,pTVar4->TypedValue);
    FText::FromString(&local_48,pFVar5);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    pTVar6 = TAttribute<TOptional<FTextFormat>_>::Get(&this->ToolTipTextFormat);
    if (pTVar6->bIsSet == false) {
      FText::FText(__return_storage_ptr__,&local_48);
    }
    else {
      local_38.TextData.Reference = local_48.TextData.Reference;
      if (local_48.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_48.TextData.Reference + 8))
                  (local_48.TextData.Reference,local_res8);
      }
      local_38.Flags = local_48.Flags;
      pTVar6 = TAttribute<TOptional<FTextFormat>_>::Get(&this->ToolTipTextFormat);
      if (pTVar6->bIsSet == false) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pFVar7 = (FText *)(*pcVar2)();
          return pFVar7;
        }
      }
      local_28.TextFormatData.Object = (pTVar6->TypedValue).TextFormatData.Object;
      local_28.TextFormatData.SharedReferenceCount.ReferenceController =
           (pTVar6->TypedValue).TextFormatData.SharedReferenceCount.ReferenceController;
      if (local_28.TextFormatData.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_28.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_28.TextFormatData.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      FText::Format<FText>(__return_storage_ptr__,&local_28,&local_38);
    }
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
      return __return_storage_ptr__;
    }
  }
  else {
    pFVar7 = FText::GetEmpty();
    (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
    pIVar1 = (pFVar7->TextData).Reference;
    (__return_storage_ptr__->TextData).Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res18);
    }
    __return_storage_ptr__->Flags = pFVar7->Flags;
  }
  return __return_storage_ptr__;
}

// HandleToggleCheckBoxChanged @ 142fde580

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
SNumericEntryBox<int>::HandleToggleCheckBoxChanged
          (SNumericEntryBox<int> *this,ECheckBoxState param_1,
          TDelegate<void___cdecl(ECheckBoxState),FDefaultDelegateUserPolicy> *param_2)

{
  SSpinBox<int> *pSVar1;
  SEditableText *pSVar2;
  void *pvVar3;
  bool bVar4;
  char cVar5;
  longlong *plVar6;
  FDestructionSentinel local_58;
  undefined1 local_40 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_38;
  ForAnyElementType FStack_30;
  ulonglong local_28;
  
  pSVar1 = (this->SpinBox).Object;
  plVar6 = (longlong *)0x0;
  if (pSVar1 != (SSpinBox<int> *)0x0) {
    local_40[1] = true;
    local_40[0] = param_1 == Checked;
    local_28 = 0;
    local_38.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_30.Data = (FScriptContainerElement *)0x0;
    SlateAttributePrivate::
    TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
    ::Assign((TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
              *)((longlong)&pSVar1->_padding_ + 2),(SWidget *)pSVar1,(TAttribute<bool> *)local_40,
             None);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_38,(FWriteAccessScope *)&local_58);
    if (((int)local_28 != 0) && (FStack_30.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_30.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_30,0,0,0x10);
      local_28 = local_28 & 0xffffffff00000000;
    }
    if (local_58.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
    }
    if (FStack_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_30.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_38.AccessDetector);
  }
  pSVar2 = (this->EditableText).Object;
  if (pSVar2 != (SEditableText *)0x0) {
    local_40[1] = true;
    local_40[0] = param_1 == Checked;
    local_28 = 0;
    local_38.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_30.Data = (FScriptContainerElement *)0x0;
    SlateAttributePrivate::
    TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
    ::Assign((TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
              *)((longlong)&pSVar2->_padding_ + 2),(SWidget *)pSVar2,(TAttribute<bool> *)local_40,
             None);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_38,(FWriteAccessScope *)&local_58);
    if (((int)local_28 != 0) && (FStack_30.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_30.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_30,0,0,0x10);
      local_28 = local_28 & 0xffffffff00000000;
    }
    if (local_58.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
    }
    if (FStack_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_30.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_38.AccessDetector);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,
             (FReadAccessScope *)&local_58);
  if (((*(int *)&param_2->field_0x10 == 0) || (*(longlong **)&param_2->field_0x8 == (longlong *)0x0)
      ) || (cVar5 = (**(code **)(**(longlong **)&param_2->field_0x8 + 0x38))(), cVar5 == '\0')) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_58);
  if (bVar4) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,
               (FReadAccessScope *)&local_58);
    if (*(int *)&param_2->field_0x10 != 0) {
      plVar6 = *(longlong **)&param_2->field_0x8;
    }
    (**(code **)(*plVar6 + 0x60))(plVar6,param_1);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_58);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  pvVar3 = *(void **)&param_2->field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_2);
  return;
}

// HandleToggleCheckBoxChanged @ 142fde7d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
SNumericEntryBox<float>::HandleToggleCheckBoxChanged
          (SNumericEntryBox<float> *this,ECheckBoxState param_1,
          TDelegate<void___cdecl(ECheckBoxState),FDefaultDelegateUserPolicy> *param_2)

{
  SSpinBox<float> *pSVar1;
  SEditableText *pSVar2;
  void *pvVar3;
  bool bVar4;
  char cVar5;
  longlong *plVar6;
  FDestructionSentinel local_58;
  undefined1 local_40 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_38;
  ForAnyElementType FStack_30;
  ulonglong local_28;
  
  pSVar1 = (this->SpinBox).Object;
  plVar6 = (longlong *)0x0;
  if (pSVar1 != (SSpinBox<float> *)0x0) {
    local_40[1] = true;
    local_40[0] = param_1 == Checked;
    local_28 = 0;
    local_38.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_30.Data = (FScriptContainerElement *)0x0;
    SlateAttributePrivate::
    TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
    ::Assign((TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
              *)((longlong)&pSVar1->_padding_ + 2),(SWidget *)pSVar1,(TAttribute<bool> *)local_40,
             None);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_38,(FWriteAccessScope *)&local_58);
    if (((int)local_28 != 0) && (FStack_30.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_30.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_30,0,0,0x10);
      local_28 = local_28 & 0xffffffff00000000;
    }
    if (local_58.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
    }
    if (FStack_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_30.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_38.AccessDetector);
  }
  pSVar2 = (this->EditableText).Object;
  if (pSVar2 != (SEditableText *)0x0) {
    local_40[1] = true;
    local_40[0] = param_1 == Checked;
    local_28 = 0;
    local_38.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_30.Data = (FScriptContainerElement *)0x0;
    SlateAttributePrivate::
    TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
    ::Assign((TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
              *)((longlong)&pSVar2->_padding_ + 2),(SWidget *)pSVar2,(TAttribute<bool> *)local_40,
             None);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_38,(FWriteAccessScope *)&local_58);
    if (((int)local_28 != 0) && (FStack_30.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_30.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_30,0,0,0x10);
      local_28 = local_28 & 0xffffffff00000000;
    }
    if (local_58.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
    }
    if (FStack_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_30.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_38.AccessDetector);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,
             (FReadAccessScope *)&local_58);
  if (((*(int *)&param_2->field_0x10 == 0) || (*(longlong **)&param_2->field_0x8 == (longlong *)0x0)
      ) || (cVar5 = (**(code **)(**(longlong **)&param_2->field_0x8 + 0x38))(), cVar5 == '\0')) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_58);
  if (bVar4) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,
               (FReadAccessScope *)&local_58);
    if (*(int *)&param_2->field_0x10 != 0) {
      plVar6 = *(longlong **)&param_2->field_0x8;
    }
    (**(code **)(*plVar6 + 0x60))(plVar6,param_1);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_58);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  pvVar3 = *(void **)&param_2->field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_2);
  return;
}

// HandleToggleCheckBoxChanged @ 142fdea20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
SNumericEntryBox<double>::HandleToggleCheckBoxChanged
          (SNumericEntryBox<double> *this,ECheckBoxState param_1,
          TDelegate<void___cdecl(ECheckBoxState),FDefaultDelegateUserPolicy> *param_2)

{
  SSpinBox<double> *pSVar1;
  SEditableText *pSVar2;
  void *pvVar3;
  bool bVar4;
  char cVar5;
  longlong *plVar6;
  FDestructionSentinel local_58;
  undefined1 local_40 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_38;
  ForAnyElementType FStack_30;
  ulonglong local_28;
  
  pSVar1 = (this->SpinBox).Object;
  plVar6 = (longlong *)0x0;
  if (pSVar1 != (SSpinBox<double> *)0x0) {
    local_40[1] = true;
    local_40[0] = param_1 == Checked;
    local_28 = 0;
    local_38.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_30.Data = (FScriptContainerElement *)0x0;
    SlateAttributePrivate::
    TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
    ::Assign((TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
              *)((longlong)&pSVar1->_padding_ + 2),(SWidget *)pSVar1,(TAttribute<bool> *)local_40,
             None);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_38,(FWriteAccessScope *)&local_58);
    if (((int)local_28 != 0) && (FStack_30.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_30.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_30,0,0,0x10);
      local_28 = local_28 & 0xffffffff00000000;
    }
    if (local_58.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
    }
    if (FStack_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_30.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_38.AccessDetector);
  }
  pSVar2 = (this->EditableText).Object;
  if (pSVar2 != (SEditableText *)0x0) {
    local_40[1] = true;
    local_40[0] = param_1 == Checked;
    local_28 = 0;
    local_38.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_30.Data = (FScriptContainerElement *)0x0;
    SlateAttributePrivate::
    TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
    ::Assign((TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
              *)((longlong)&pSVar2->_padding_ + 2),(SWidget *)pSVar2,(TAttribute<bool> *)local_40,
             None);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_38,(FWriteAccessScope *)&local_58);
    if (((int)local_28 != 0) && (FStack_30.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_30.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_30,0,0,0x10);
      local_28 = local_28 & 0xffffffff00000000;
    }
    if (local_58.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
    }
    if (FStack_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_30.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_38.AccessDetector);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,
             (FReadAccessScope *)&local_58);
  if (((*(int *)&param_2->field_0x10 == 0) || (*(longlong **)&param_2->field_0x8 == (longlong *)0x0)
      ) || (cVar5 = (**(code **)(**(longlong **)&param_2->field_0x8 + 0x38))(), cVar5 == '\0')) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_58);
  if (bVar4) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,
               (FReadAccessScope *)&local_58);
    if (*(int *)&param_2->field_0x10 != 0) {
      plVar6 = *(longlong **)&param_2->field_0x8;
    }
    (**(code **)(*plVar6 + 0x60))(plVar6,param_1);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_58);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  pvVar3 = *(void **)&param_2->field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_2);
  return;
}

// OnFocusReceived @ 142fefd80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FReply * __thiscall
SNumericEntryBox<int>::OnFocusReceived
          (SNumericEntryBox<int> *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FFocusEvent *param_2)

{
  EFocusCause EVar1;
  code *pcVar2;
  bool bVar3;
  FReply *pFVar4;
  FSharedReferencer<1> FVar5;
  SSpinBox<int> *local_48;
  FSharedReferencer<1> FStack_40;
  undefined8 local_38;
  FSharedReferencer<1> local_30;
  undefined8 local_28;
  FSharedReferencer<1> local_20;
  TSharedRef<SWidget,1> local_18;
  
  FReply::FReply(__return_storage_ptr__,true);
  local_48 = (this->SpinBox).Object;
  FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if ((local_48 == (SSpinBox<int> *)0x0) ||
     ((TEnumAsByte<EVisibility::Private>)*(undefined1 *)((longlong)&local_48->_padding_ + 1) !=
      EVisibility::Visible.Value.Value)) {
    local_20.ReferenceController = (this->EditableText).SharedReferenceCount.ReferenceController;
    local_48 = (SSpinBox<int> *)(this->EditableText).Object;
    if (local_20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_20.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_20.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_28 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_40,&local_20);
    FVar5.ReferenceController = local_20.ReferenceController;
  }
  else {
    local_30.ReferenceController = (this->SpinBox).SharedReferenceCount.ReferenceController;
    if (local_30.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_30.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_30.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_38 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_40,&local_30);
    FVar5.ReferenceController = local_30.ReferenceController;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar5.ReferenceController);
  EVar1 = param_2->Cause;
  FVar5.ReferenceController = FStack_40.ReferenceController;
  if (EVar1 != Cleared) {
    if ((local_48 == (SSpinBox<int> *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FReply *)(*pcVar2)();
      return pFVar4;
    }
    FVar5.ReferenceController = FStack_40.ReferenceController;
    local_18.Object = (SWidget *)local_48;
    local_18.SharedReferenceCount.ReferenceController = FStack_40.ReferenceController;
    if (FStack_40.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FStack_40.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FStack_40.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((local_48 == (SSpinBox<int> *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FReply *)(*pcVar2)();
      return pFVar4;
    }
    FReply::SetUserFocus(__return_storage_ptr__,&local_18,EVar1,false);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar5.ReferenceController);
  return __return_storage_ptr__;
}

// OnFocusReceived @ 142feff00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FReply * __thiscall
SNumericEntryBox<float>::OnFocusReceived
          (SNumericEntryBox<float> *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FFocusEvent *param_2)

{
  EFocusCause EVar1;
  code *pcVar2;
  bool bVar3;
  FReply *pFVar4;
  FSharedReferencer<1> FVar5;
  SSpinBox<float> *local_48;
  FSharedReferencer<1> FStack_40;
  undefined8 local_38;
  FSharedReferencer<1> local_30;
  undefined8 local_28;
  FSharedReferencer<1> local_20;
  TSharedRef<SWidget,1> local_18;
  
  FReply::FReply(__return_storage_ptr__,true);
  local_48 = (this->SpinBox).Object;
  FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if ((local_48 == (SSpinBox<float> *)0x0) ||
     ((TEnumAsByte<EVisibility::Private>)*(undefined1 *)((longlong)&local_48->_padding_ + 1) !=
      EVisibility::Visible.Value.Value)) {
    local_20.ReferenceController = (this->EditableText).SharedReferenceCount.ReferenceController;
    local_48 = (SSpinBox<float> *)(this->EditableText).Object;
    if (local_20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_20.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_20.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_28 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_40,&local_20);
    FVar5.ReferenceController = local_20.ReferenceController;
  }
  else {
    local_30.ReferenceController = (this->SpinBox).SharedReferenceCount.ReferenceController;
    if (local_30.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_30.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_30.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_38 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_40,&local_30);
    FVar5.ReferenceController = local_30.ReferenceController;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar5.ReferenceController);
  EVar1 = param_2->Cause;
  FVar5.ReferenceController = FStack_40.ReferenceController;
  if (EVar1 != Cleared) {
    if ((local_48 == (SSpinBox<float> *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FReply *)(*pcVar2)();
      return pFVar4;
    }
    FVar5.ReferenceController = FStack_40.ReferenceController;
    local_18.Object = (SWidget *)local_48;
    local_18.SharedReferenceCount.ReferenceController = FStack_40.ReferenceController;
    if (FStack_40.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FStack_40.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FStack_40.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((local_48 == (SSpinBox<float> *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FReply *)(*pcVar2)();
      return pFVar4;
    }
    FReply::SetUserFocus(__return_storage_ptr__,&local_18,EVar1,false);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar5.ReferenceController);
  return __return_storage_ptr__;
}

// OnFocusReceived @ 142ff0080

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FReply * __thiscall
SNumericEntryBox<double>::OnFocusReceived
          (SNumericEntryBox<double> *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FFocusEvent *param_2)

{
  EFocusCause EVar1;
  code *pcVar2;
  bool bVar3;
  FReply *pFVar4;
  FSharedReferencer<1> FVar5;
  SSpinBox<double> *local_48;
  FSharedReferencer<1> FStack_40;
  undefined8 local_38;
  FSharedReferencer<1> local_30;
  undefined8 local_28;
  FSharedReferencer<1> local_20;
  TSharedRef<SWidget,1> local_18;
  
  FReply::FReply(__return_storage_ptr__,true);
  local_48 = (this->SpinBox).Object;
  FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if ((local_48 == (SSpinBox<double> *)0x0) ||
     ((TEnumAsByte<EVisibility::Private>)*(undefined1 *)((longlong)&local_48->_padding_ + 1) !=
      EVisibility::Visible.Value.Value)) {
    local_20.ReferenceController = (this->EditableText).SharedReferenceCount.ReferenceController;
    local_48 = (SSpinBox<double> *)(this->EditableText).Object;
    if (local_20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_20.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_20.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_28 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_40,&local_20);
    FVar5.ReferenceController = local_20.ReferenceController;
  }
  else {
    local_30.ReferenceController = (this->SpinBox).SharedReferenceCount.ReferenceController;
    if (local_30.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_30.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_30.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_38 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_40,&local_30);
    FVar5.ReferenceController = local_30.ReferenceController;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar5.ReferenceController);
  EVar1 = param_2->Cause;
  FVar5.ReferenceController = FStack_40.ReferenceController;
  if (EVar1 != Cleared) {
    if ((local_48 == (SSpinBox<double> *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FReply *)(*pcVar2)();
      return pFVar4;
    }
    FVar5.ReferenceController = FStack_40.ReferenceController;
    local_18.Object = (SWidget *)local_48;
    local_18.SharedReferenceCount.ReferenceController = FStack_40.ReferenceController;
    if (FStack_40.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FStack_40.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FStack_40.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((local_48 == (SSpinBox<double> *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FReply *)(*pcVar2)();
      return pFVar4;
    }
    FReply::SetUserFocus(__return_storage_ptr__,&local_18,EVar1,false);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar5.ReferenceController);
  return __return_storage_ptr__;
}

// OnGetValueForSpinBox @ 142ff1260

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

int __thiscall SNumericEntryBox<int>::OnGetValueForSpinBox(SNumericEntryBox<int> *this)

{
  TOptional<int> *pTVar1;
  
  pTVar1 = TAttribute<TOptional<int>_>::Get(&this->ValueAttribute);
  if (pTVar1->bIsSet == true) {
    return pTVar1->TypedValue;
  }
  return 0;
}

// OnGetValueForSpinBox @ 142ff1290

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

float __thiscall SNumericEntryBox<float>::OnGetValueForSpinBox(SNumericEntryBox<float> *this)

{
  TOptional<float> *pTVar1;
  
  pTVar1 = TAttribute<TOptional<float>_>::Get(&this->ValueAttribute);
  if (pTVar1->bIsSet == true) {
    return pTVar1->TypedValue;
  }
  return 0.0;
}

// OnGetValueForSpinBox @ 142ff12c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

double __thiscall SNumericEntryBox<double>::OnGetValueForSpinBox(SNumericEntryBox<double> *this)

{
  TOptional<double> *pTVar1;
  
  pTVar1 = TAttribute<TOptional<double>_>::Get(&this->ValueAttribute);
  if (pTVar1->bIsSet == true) {
    return pTVar1->TypedValue;
  }
  return 0.0;
}

// OnGetValueForTextBox @ 142ff12f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __thiscall
SNumericEntryBox<int>::OnGetValueForTextBox
          (SNumericEntryBox<int> *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  code *pcVar2;
  bool bVar3;
  FText *pFVar4;
  TOptional<int> *pTVar5;
  FString *pFVar6;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  FString local_18;
  
  if ((this->EditableText).Object == (SEditableText *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FText *)(*pcVar2)();
      return pFVar4;
    }
  }
  if ((TEnumAsByte<EVisibility::Private>)
      *(uchar *)((longlong)&((this->EditableText).Object)->_padding_ + 1) ==
      EVisibility::Visible.Value.Value) {
    pTVar5 = TAttribute<TOptional<int>_>::Get(&this->ValueAttribute);
    if (pTVar5->bIsSet != true) {
      (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
      pIVar1 = (this->UndeterminedString).TextData.Reference;
      (__return_storage_ptr__->TextData).Reference = pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
      }
      __return_storage_ptr__->Flags = (this->UndeterminedString).Flags;
      return __return_storage_ptr__;
    }
    pFVar6 = GetCachedString(this,&local_18,pTVar5->TypedValue);
    FText::FromString(__return_storage_ptr__,pFVar6);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
      return __return_storage_ptr__;
    }
  }
  else {
    pFVar4 = FText::GetEmpty();
    (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
    pIVar1 = (pFVar4->TextData).Reference;
    (__return_storage_ptr__->TextData).Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res18);
    }
    __return_storage_ptr__->Flags = pFVar4->Flags;
  }
  return __return_storage_ptr__;
}

// OnGetValueForTextBox @ 142ff1410

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __thiscall
SNumericEntryBox<float>::OnGetValueForTextBox
          (SNumericEntryBox<float> *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  code *pcVar2;
  bool bVar3;
  FText *pFVar4;
  TOptional<float> *pTVar5;
  FString *pFVar6;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  FString local_18;
  
  if ((this->EditableText).Object == (SEditableText *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FText *)(*pcVar2)();
      return pFVar4;
    }
  }
  if ((TEnumAsByte<EVisibility::Private>)
      *(uchar *)((longlong)&((this->EditableText).Object)->_padding_ + 1) ==
      EVisibility::Visible.Value.Value) {
    pTVar5 = TAttribute<TOptional<float>_>::Get(&this->ValueAttribute);
    if (pTVar5->bIsSet != true) {
      (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
      pIVar1 = (this->UndeterminedString).TextData.Reference;
      (__return_storage_ptr__->TextData).Reference = pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
      }
      __return_storage_ptr__->Flags = (this->UndeterminedString).Flags;
      return __return_storage_ptr__;
    }
    pFVar6 = GetCachedString(this,&local_18,pTVar5->TypedValue);
    FText::FromString(__return_storage_ptr__,pFVar6);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
      return __return_storage_ptr__;
    }
  }
  else {
    pFVar4 = FText::GetEmpty();
    (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
    pIVar1 = (pFVar4->TextData).Reference;
    (__return_storage_ptr__->TextData).Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res18);
    }
    __return_storage_ptr__->Flags = pFVar4->Flags;
  }
  return __return_storage_ptr__;
}

// OnGetValueForTextBox @ 142ff1530

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __thiscall
SNumericEntryBox<double>::OnGetValueForTextBox
          (SNumericEntryBox<double> *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  code *pcVar2;
  bool bVar3;
  FText *pFVar4;
  TOptional<double> *pTVar5;
  FString *pFVar6;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  FString local_18;
  
  if ((this->EditableText).Object == (SEditableText *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FText *)(*pcVar2)();
      return pFVar4;
    }
  }
  if ((TEnumAsByte<EVisibility::Private>)
      *(uchar *)((longlong)&((this->EditableText).Object)->_padding_ + 1) ==
      EVisibility::Visible.Value.Value) {
    pTVar5 = TAttribute<TOptional<double>_>::Get(&this->ValueAttribute);
    if (pTVar5->bIsSet != true) {
      (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
      pIVar1 = (this->UndeterminedString).TextData.Reference;
      (__return_storage_ptr__->TextData).Reference = pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
      }
      __return_storage_ptr__->Flags = (this->UndeterminedString).Flags;
      return __return_storage_ptr__;
    }
    pFVar6 = GetCachedString(this,&local_18,pTVar5->TypedValue);
    FText::FromString(__return_storage_ptr__,pFVar6);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
      return __return_storage_ptr__;
    }
  }
  else {
    pFVar4 = FText::GetEmpty();
    (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
    pIVar1 = (pFVar4->TextData).Reference;
    (__return_storage_ptr__->TextData).Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res18);
    }
    __return_storage_ptr__->Flags = pFVar4->Flags;
  }
  return __return_storage_ptr__;
}

// OnKeyDown @ 142ff24d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FReply * __thiscall
SNumericEntryBox<int>::OnKeyDown
          (SNumericEntryBox<int> *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FKeyEvent *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FName FVar2;
  TReferenceControllerBase<1> *pTVar3;
  SWidget *pSVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  FReply *pFVar8;
  TSharedRef<SWidget,1> *pTVar9;
  TSharedRef<SWidget,1> local_e8;
  TSharedRef<SWidget,1> local_d8;
  FReply local_c8;
  
  pTVar1 = (param_2->Key).KeyDetails.SharedReferenceCount.ReferenceController;
  FVar2 = (param_2->Key).KeyName;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (FVar2 == EKeys::Escape.KeyName) {
    if (((this->EditableText).Object == (SEditableText *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FReply *)(*pcVar5)();
      return pFVar8;
    }
    cVar7 = (**(code **)(((this->EditableText).Object)->_padding_ + 0x1a0))();
    if (cVar7 != '\0') {
      FReply::FReply(&local_c8,true);
      pTVar9 = TSharedFromThis<SWidget,1>::AsShared
                         ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_d8);
      pTVar3 = (pTVar9->SharedReferenceCount).ReferenceController;
      pSVar4 = pTVar9->Object;
      if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_d8.SharedReferenceCount.ReferenceController);
      }
      else {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_d8.SharedReferenceCount.ReferenceController);
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_e8.Object = pSVar4;
      local_e8.SharedReferenceCount.ReferenceController = pTVar3;
      pFVar8 = FReply::SetUserFocus(&local_c8,&local_e8,Cleared,false);
      FReply::FReply(__return_storage_ptr__,pFVar8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      FReply::~FReply(&local_c8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      return __return_storage_ptr__;
    }
  }
  FReply::FReply(__return_storage_ptr__,false);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// OnKeyDown @ 142ff2630

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FReply * __thiscall
SNumericEntryBox<float>::OnKeyDown
          (SNumericEntryBox<float> *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FKeyEvent *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  FReply *pFVar6;
  TSharedRef<SWidget,1> *pTVar7;
  TSharedRef<SNumericEntryBox<float>,1> local_f8;
  TSharedRef<SWidget,1> local_e8;
  TSharedRef<SWidget,1> local_d8;
  FReply local_c8;
  
  pTVar1 = (param_2->Key).KeyDetails.SharedReferenceCount.ReferenceController;
  FVar2 = (param_2->Key).KeyName;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (FVar2 == EKeys::Escape.KeyName) {
    if ((this->EditableText).Object == (SEditableText *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FReply *)(*pcVar3)();
        return pFVar6;
      }
    }
    cVar5 = (**(code **)(((this->EditableText).Object)->_padding_ + 0x1a0))();
    if (cVar5 != '\0') {
      FReply::FReply(&local_c8,true);
      pTVar7 = TSharedFromThis<SWidget,1>::AsShared
                         ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_e8);
      local_f8.Object = (SNumericEntryBox<float> *)pTVar7->Object;
      local_f8.SharedReferenceCount.ReferenceController =
           (pTVar7->SharedReferenceCount).ReferenceController;
      if (local_f8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_e8.SharedReferenceCount.ReferenceController);
      local_d8.Object = (SWidget *)local_f8.Object;
      local_d8.SharedReferenceCount.ReferenceController =
           local_f8.SharedReferenceCount.ReferenceController;
      if (local_f8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar6 = FReply::SetUserFocus(&local_c8,&local_d8,Cleared,false);
      FReply::FReply(__return_storage_ptr__,pFVar6);
      TSharedRef<SNumericEntryBox<float>,1>::~TSharedRef<SNumericEntryBox<float>,1>(&local_f8);
      FReply::~FReply(&local_c8);
      goto LAB_142ff274a;
    }
  }
  FReply::FReply(__return_storage_ptr__,false);
LAB_142ff274a:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// OnKeyDown @ 142ff2770

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FReply * __thiscall
SNumericEntryBox<double>::OnKeyDown
          (SNumericEntryBox<double> *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FKeyEvent *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FName FVar2;
  TReferenceControllerBase<1> *pTVar3;
  SWidget *pSVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  FReply *pFVar8;
  TSharedRef<SWidget,1> *pTVar9;
  TSharedRef<SWidget,1> local_e8;
  TSharedRef<SWidget,1> local_d8;
  FReply local_c8;
  
  pTVar1 = (param_2->Key).KeyDetails.SharedReferenceCount.ReferenceController;
  FVar2 = (param_2->Key).KeyName;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (FVar2 == EKeys::Escape.KeyName) {
    if (((this->EditableText).Object == (SEditableText *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FReply *)(*pcVar5)();
      return pFVar8;
    }
    cVar7 = (**(code **)(((this->EditableText).Object)->_padding_ + 0x1a0))();
    if (cVar7 != '\0') {
      FReply::FReply(&local_c8,true);
      pTVar9 = TSharedFromThis<SWidget,1>::AsShared
                         ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_d8);
      pTVar3 = (pTVar9->SharedReferenceCount).ReferenceController;
      pSVar4 = pTVar9->Object;
      if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_d8.SharedReferenceCount.ReferenceController);
      }
      else {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_d8.SharedReferenceCount.ReferenceController);
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_e8.Object = pSVar4;
      local_e8.SharedReferenceCount.ReferenceController = pTVar3;
      pFVar8 = FReply::SetUserFocus(&local_c8,&local_e8,Cleared,false);
      FReply::FReply(__return_storage_ptr__,pFVar8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      FReply::~FReply(&local_c8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      return __return_storage_ptr__;
    }
  }
  FReply::FReply(__return_storage_ptr__,false);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// OnTextChanged @ 142ff82c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall SNumericEntryBox<int>::OnTextChanged(SNumericEntryBox<int> *this,FText *param_1)

{
  code *pcVar1;
  char cVar2;
  TOptional<int> *pTVar3;
  FText *pFVar4;
  longlong *plVar5;
  undefined1 local_res8 [8];
  FText local_48;
  FReadAccessScope local_38;
  FReadAccessScope local_20;
  
  pTVar3 = TAttribute<TOptional<int>_>::Get(&this->ValueAttribute);
  if (pTVar3->bIsSet == false) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnUndeterminedValueChanged,&local_38);
    if (((*(int *)&(this->OnUndeterminedValueChanged).field_0x10 != 0) &&
        (plVar5 = *(longlong **)&(this->OnUndeterminedValueChanged).field_0x8,
        plVar5 != (longlong *)0x0)) && (cVar2 = (**(code **)(*plVar5 + 0x38))(), cVar2 != '\0')) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_38);
      local_48.TextData.Reference = (param_1->TextData).Reference;
      if (local_48.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_48.TextData.Reference + 8))
                  (local_48.TextData.Reference,local_res8);
      }
      local_48.Flags = param_1->Flags;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->OnUndeterminedValueChanged,&local_20);
      if (*(int *)&(this->OnUndeterminedValueChanged).field_0x10 == 0) {
        plVar5 = (longlong *)0x0;
      }
      else {
        plVar5 = *(longlong **)&(this->OnUndeterminedValueChanged).field_0x8;
      }
      pcVar1 = *(code **)(*plVar5 + 0x60);
      pFVar4 = FText::FText((FText *)&local_38,&local_48);
      (*pcVar1)(plVar5,pFVar4);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_20);
      if (local_48.TextData.Reference == (ITextData *)0x0) {
        return;
      }
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
      return;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_38);
  }
  SendChangesFromText(this,param_1,false,Default);
  return;
}

// OnTextChanged @ 142ff83f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall SNumericEntryBox<float>::OnTextChanged(SNumericEntryBox<float> *this,FText *param_1)

{
  code *pcVar1;
  char cVar2;
  TOptional<float> *pTVar3;
  FText *pFVar4;
  longlong *plVar5;
  undefined1 local_res8 [8];
  FText local_48;
  FReadAccessScope local_38;
  FReadAccessScope local_20;
  
  pTVar3 = TAttribute<TOptional<float>_>::Get(&this->ValueAttribute);
  if (pTVar3->bIsSet == false) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnUndeterminedValueChanged,&local_38);
    if (((*(int *)&(this->OnUndeterminedValueChanged).field_0x10 != 0) &&
        (plVar5 = *(longlong **)&(this->OnUndeterminedValueChanged).field_0x8,
        plVar5 != (longlong *)0x0)) && (cVar2 = (**(code **)(*plVar5 + 0x38))(), cVar2 != '\0')) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_38);
      local_48.TextData.Reference = (param_1->TextData).Reference;
      if (local_48.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_48.TextData.Reference + 8))
                  (local_48.TextData.Reference,local_res8);
      }
      local_48.Flags = param_1->Flags;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->OnUndeterminedValueChanged,&local_20);
      if (*(int *)&(this->OnUndeterminedValueChanged).field_0x10 == 0) {
        plVar5 = (longlong *)0x0;
      }
      else {
        plVar5 = *(longlong **)&(this->OnUndeterminedValueChanged).field_0x8;
      }
      pcVar1 = *(code **)(*plVar5 + 0x60);
      pFVar4 = FText::FText((FText *)&local_38,&local_48);
      (*pcVar1)(plVar5,pFVar4);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_20);
      if (local_48.TextData.Reference == (ITextData *)0x0) {
        return;
      }
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
      return;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_38);
  }
  SendChangesFromText(this,param_1,false,Default);
  return;
}

// OnTextChanged @ 142ff8520

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
SNumericEntryBox<double>::OnTextChanged(SNumericEntryBox<double> *this,FText *param_1)

{
  code *pcVar1;
  char cVar2;
  TOptional<double> *pTVar3;
  FText *pFVar4;
  longlong *plVar5;
  undefined1 local_res8 [8];
  FText local_48;
  FReadAccessScope local_38;
  FReadAccessScope local_20;
  
  pTVar3 = TAttribute<TOptional<double>_>::Get(&this->ValueAttribute);
  if (pTVar3->bIsSet == false) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnUndeterminedValueChanged,&local_38);
    if (((*(int *)&(this->OnUndeterminedValueChanged).field_0x10 != 0) &&
        (plVar5 = *(longlong **)&(this->OnUndeterminedValueChanged).field_0x8,
        plVar5 != (longlong *)0x0)) && (cVar2 = (**(code **)(*plVar5 + 0x38))(), cVar2 != '\0')) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_38);
      local_48.TextData.Reference = (param_1->TextData).Reference;
      if (local_48.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_48.TextData.Reference + 8))
                  (local_48.TextData.Reference,local_res8);
      }
      local_48.Flags = param_1->Flags;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->OnUndeterminedValueChanged,&local_20);
      if (*(int *)&(this->OnUndeterminedValueChanged).field_0x10 == 0) {
        plVar5 = (longlong *)0x0;
      }
      else {
        plVar5 = *(longlong **)&(this->OnUndeterminedValueChanged).field_0x8;
      }
      pcVar1 = *(code **)(*plVar5 + 0x60);
      pFVar4 = FText::FText((FText *)&local_38,&local_48);
      (*pcVar1)(plVar5,pFVar4);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_20);
      if (local_48.TextData.Reference == (ITextData *)0x0) {
        return;
      }
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
      return;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_38);
  }
  SendChangesFromText(this,param_1,false,Default);
  return;
}

// OnTextCommitted @ 142ff86b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
SNumericEntryBox<int>::OnTextCommitted(SNumericEntryBox<int> *this,FText *param_1,Type param_2)

{
  code *pcVar1;
  char cVar2;
  TOptional<int> *pTVar3;
  FText *pFVar4;
  longlong *plVar5;
  undefined1 local_res8 [8];
  FText local_48;
  FReadAccessScope local_38;
  FReadAccessScope local_20;
  
  pTVar3 = TAttribute<TOptional<int>_>::Get(&this->ValueAttribute);
  if (pTVar3->bIsSet == false) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnUndeterminedValueCommitted,&local_38);
    if (((*(int *)&(this->OnUndeterminedValueCommitted).field_0x10 != 0) &&
        (plVar5 = *(longlong **)&(this->OnUndeterminedValueCommitted).field_0x8,
        plVar5 != (longlong *)0x0)) && (cVar2 = (**(code **)(*plVar5 + 0x38))(), cVar2 != '\0')) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_38);
      local_48.TextData.Reference = (param_1->TextData).Reference;
      if (local_48.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_48.TextData.Reference + 8))
                  (local_48.TextData.Reference,local_res8);
      }
      local_48.Flags = param_1->Flags;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->OnUndeterminedValueCommitted,&local_20);
      if (*(int *)&(this->OnUndeterminedValueCommitted).field_0x10 == 0) {
        plVar5 = (longlong *)0x0;
      }
      else {
        plVar5 = *(longlong **)&(this->OnUndeterminedValueCommitted).field_0x8;
      }
      pcVar1 = *(code **)(*plVar5 + 0x60);
      pFVar4 = FText::FText((FText *)&local_38,&local_48);
      (*pcVar1)(plVar5,pFVar4,param_2);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_20);
      if (local_48.TextData.Reference == (ITextData *)0x0) {
        return;
      }
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
      return;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_38);
  }
  SendChangesFromText(this,param_1,true,param_2);
  return;
}

// OnTextCommitted @ 142ff87e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
SNumericEntryBox<float>::OnTextCommitted(SNumericEntryBox<float> *this,FText *param_1,Type param_2)

{
  code *pcVar1;
  char cVar2;
  TOptional<float> *pTVar3;
  FText *pFVar4;
  longlong *plVar5;
  undefined1 local_res8 [8];
  FText local_48;
  FReadAccessScope local_38;
  FReadAccessScope local_20;
  
  pTVar3 = TAttribute<TOptional<float>_>::Get(&this->ValueAttribute);
  if (pTVar3->bIsSet == false) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnUndeterminedValueCommitted,&local_38);
    if (((*(int *)&(this->OnUndeterminedValueCommitted).field_0x10 != 0) &&
        (plVar5 = *(longlong **)&(this->OnUndeterminedValueCommitted).field_0x8,
        plVar5 != (longlong *)0x0)) && (cVar2 = (**(code **)(*plVar5 + 0x38))(), cVar2 != '\0')) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_38);
      local_48.TextData.Reference = (param_1->TextData).Reference;
      if (local_48.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_48.TextData.Reference + 8))
                  (local_48.TextData.Reference,local_res8);
      }
      local_48.Flags = param_1->Flags;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->OnUndeterminedValueCommitted,&local_20);
      if (*(int *)&(this->OnUndeterminedValueCommitted).field_0x10 == 0) {
        plVar5 = (longlong *)0x0;
      }
      else {
        plVar5 = *(longlong **)&(this->OnUndeterminedValueCommitted).field_0x8;
      }
      pcVar1 = *(code **)(*plVar5 + 0x60);
      pFVar4 = FText::FText((FText *)&local_38,&local_48);
      (*pcVar1)(plVar5,pFVar4,param_2);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_20);
      if (local_48.TextData.Reference == (ITextData *)0x0) {
        return;
      }
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
      return;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_38);
  }
  SendChangesFromText(this,param_1,true,param_2);
  return;
}

// OnTextCommitted @ 142ff8910

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
SNumericEntryBox<double>::OnTextCommitted
          (SNumericEntryBox<double> *this,FText *param_1,Type param_2)

{
  code *pcVar1;
  char cVar2;
  TOptional<double> *pTVar3;
  FText *pFVar4;
  longlong *plVar5;
  undefined1 local_res8 [8];
  FText local_48;
  FReadAccessScope local_38;
  FReadAccessScope local_20;
  
  pTVar3 = TAttribute<TOptional<double>_>::Get(&this->ValueAttribute);
  if (pTVar3->bIsSet == false) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnUndeterminedValueCommitted,&local_38);
    if (((*(int *)&(this->OnUndeterminedValueCommitted).field_0x10 != 0) &&
        (plVar5 = *(longlong **)&(this->OnUndeterminedValueCommitted).field_0x8,
        plVar5 != (longlong *)0x0)) && (cVar2 = (**(code **)(*plVar5 + 0x38))(), cVar2 != '\0')) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_38);
      local_48.TextData.Reference = (param_1->TextData).Reference;
      if (local_48.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_48.TextData.Reference + 8))
                  (local_48.TextData.Reference,local_res8);
      }
      local_48.Flags = param_1->Flags;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->OnUndeterminedValueCommitted,&local_20);
      if (*(int *)&(this->OnUndeterminedValueCommitted).field_0x10 == 0) {
        plVar5 = (longlong *)0x0;
      }
      else {
        plVar5 = *(longlong **)&(this->OnUndeterminedValueCommitted).field_0x8;
      }
      pcVar1 = *(code **)(*plVar5 + 0x60);
      pFVar4 = FText::FText((FText *)&local_38,&local_48);
      (*pcVar1)(plVar5,pFVar4,param_2);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_20);
      if (local_48.TextData.Reference == (ITextData *)0x0) {
        return;
      }
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
      return;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_38);
  }
  SendChangesFromText(this,param_1,true,param_2);
  return;
}

// ResetCachedValueString @ 1430088e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall SNumericEntryBox<int>::ResetCachedValueString(SNumericEntryBox<int> *this)

{
  TOptional<int> *pTVar1;
  
  pTVar1 = TAttribute<TOptional<int>_>::Get(&this->ValueAttribute);
  if (pTVar1->bIsSet != false) {
    this->bCachedValueStringDirty = true;
  }
  return;
}

// ResetCachedValueString @ 143008910

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall SNumericEntryBox<float>::ResetCachedValueString(SNumericEntryBox<float> *this)

{
  TOptional<float> *pTVar1;
  
  pTVar1 = TAttribute<TOptional<float>_>::Get(&this->ValueAttribute);
  if (pTVar1->bIsSet != false) {
    this->bCachedValueStringDirty = true;
  }
  return;
}

// ResetCachedValueString @ 143008940

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall SNumericEntryBox<double>::ResetCachedValueString(SNumericEntryBox<double> *this)

{
  TOptional<double> *pTVar1;
  
  pTVar1 = TAttribute<TOptional<double>_>::Get(&this->ValueAttribute);
  if (pTVar1->bIsSet != false) {
    this->bCachedValueStringDirty = true;
  }
  return;
}

// SendChangesFromText @ 14300c6c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
SNumericEntryBox<int>::SendChangesFromText
          (SNumericEntryBox<int> *this,FText *param_1,bool param_2,Type param_3)

{
  INumericTypeInterface<int> *pIVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  TOptional<int> *pTVar5;
  FString *pFVar6;
  int *piVar7;
  int local_48 [2];
  int local_40;
  char local_3c;
  int local_38;
  char local_34;
  FReadAccessScope local_30;
  
  bVar4 = FText::IsEmpty(param_1);
  if (!bVar4) {
    pTVar5 = TAttribute<TOptional<int>_>::Get(&this->ValueAttribute);
    local_34 = pTVar5->bIsSet;
    if ((bool)local_34 != false) {
      local_38 = pTVar5->TypedValue;
    }
    if (((this->Interface).Object == (INumericTypeInterface<int> *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pIVar1 = (this->Interface).Object;
    local_48[0] = 0;
    pcVar3 = *(code **)((longlong)*pIVar1 + 0x40);
    piVar7 = &local_38;
    if (local_34 == '\0') {
      piVar7 = local_48;
    }
    pFVar6 = FText::ToString(param_1);
    (*pcVar3)(pIVar1,&local_40,pFVar6,piVar7);
    if (local_3c != '\0') {
      SetCachedString(this,local_40);
      if (param_2) {
        if ((local_3c == '\0') &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnValueCommitted
                   ,&local_30);
        if ((*(int *)&(this->OnValueCommitted).field_0x10 != 0) &&
           (plVar2 = *(longlong **)&(this->OnValueCommitted).field_0x8, plVar2 != (longlong *)0x0))
        {
          (**(code **)(*plVar2 + 0x68))(plVar2,local_40,param_3);
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_30);
      }
      else {
        if ((local_3c == '\0') &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::ExecuteIfBound
                  (&this->OnValueChanged,local_40);
      }
    }
  }
  return;
}

// SendChangesFromText @ 14300c890

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
SNumericEntryBox<float>::SendChangesFromText
          (SNumericEntryBox<float> *this,FText *param_1,bool param_2,Type param_3)

{
  INumericTypeInterface<float> *pIVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  TOptional<float> *pTVar5;
  FString *pFVar6;
  FReadAccessScope *this_00;
  float *pfVar7;
  float local_78 [2];
  float local_70;
  char local_6c;
  float local_68;
  char local_64;
  FReadAccessScope local_60;
  FReadAccessScope local_48 [2];
  
  bVar4 = FText::IsEmpty(param_1);
  if (!bVar4) {
    pTVar5 = TAttribute<TOptional<float>_>::Get(&this->ValueAttribute);
    local_64 = pTVar5->bIsSet;
    if ((bool)local_64 != false) {
      local_68 = pTVar5->TypedValue;
    }
    if ((this->Interface).Object == (INumericTypeInterface<float> *)0x0) {
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
    pIVar1 = (this->Interface).Object;
    local_78[0] = 0.0;
    pcVar3 = *(code **)((longlong)*pIVar1 + 0x40);
    pfVar7 = &local_68;
    if (local_64 == '\0') {
      pfVar7 = local_78;
    }
    pFVar6 = FText::ToString(param_1);
    (*pcVar3)(pIVar1,&local_70,pFVar6,pfVar7);
    if (local_6c != '\0') {
      SetCachedString(this,local_70);
      if (param_2) {
        if (local_6c == '\0') {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            );
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnValueCommitted
                   ,local_48);
        if ((*(int *)&(this->OnValueCommitted).field_0x10 != 0) &&
           (plVar2 = *(longlong **)&(this->OnValueCommitted).field_0x8, plVar2 != (longlong *)0x0))
        {
          (**(code **)(*plVar2 + 0x68))(plVar2,local_70,param_3);
        }
        this_00 = local_48;
      }
      else {
        if (local_6c == '\0') {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            );
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnValueChanged,
                   &local_60);
        if ((*(int *)&(this->OnValueChanged).field_0x10 != 0) &&
           (plVar2 = *(longlong **)&(this->OnValueChanged).field_0x8, plVar2 != (longlong *)0x0)) {
          (**(code **)(*plVar2 + 0x68))(plVar2,local_70);
        }
        this_00 = &local_60;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (this_00);
    }
  }
  return;
}

// SendChangesFromText @ 14300cab0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
SNumericEntryBox<double>::SendChangesFromText
          (SNumericEntryBox<double> *this,FText *param_1,bool param_2,Type param_3)

{
  INumericTypeInterface<double> *pIVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  TOptional<double> *pTVar5;
  FString *pFVar6;
  FReadAccessScope *this_00;
  double *pdVar7;
  double local_88;
  double local_80;
  char local_78;
  double local_70;
  char local_68;
  FReadAccessScope local_60;
  FReadAccessScope local_48 [2];
  
  bVar4 = FText::IsEmpty(param_1);
  if (!bVar4) {
    pTVar5 = TAttribute<TOptional<double>_>::Get(&this->ValueAttribute);
    local_68 = pTVar5->bIsSet;
    if ((bool)local_68 != false) {
      local_70 = pTVar5->TypedValue;
    }
    if ((this->Interface).Object == (INumericTypeInterface<double> *)0x0) {
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
    pIVar1 = (this->Interface).Object;
    local_88 = 0.0;
    pcVar3 = *(code **)((longlong)*pIVar1 + 0x40);
    pdVar7 = &local_70;
    if (local_68 == '\0') {
      pdVar7 = &local_88;
    }
    pFVar6 = FText::ToString(param_1);
    (*pcVar3)(pIVar1,&local_80,pFVar6,pdVar7);
    if (local_78 != '\0') {
      SetCachedString(this,local_80);
      if (param_2) {
        if (local_78 == '\0') {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            );
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnValueCommitted
                   ,local_48);
        if ((*(int *)&(this->OnValueCommitted).field_0x10 != 0) &&
           (plVar2 = *(longlong **)&(this->OnValueCommitted).field_0x8, plVar2 != (longlong *)0x0))
        {
          (**(code **)(*plVar2 + 0x68))(plVar2,local_80,param_3);
        }
        this_00 = local_48;
      }
      else {
        if (local_78 == '\0') {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            );
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnValueChanged,
                   &local_60);
        if ((*(int *)&(this->OnValueChanged).field_0x10 != 0) &&
           (plVar2 = *(longlong **)&(this->OnValueChanged).field_0x8, plVar2 != (longlong *)0x0)) {
          (**(code **)(*plVar2 + 0x68))(plVar2,local_80);
        }
        this_00 = &local_60;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (this_00);
    }
  }
  return;
}

// SetCachedString @ 14300cdc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall SNumericEntryBox<int>::SetCachedString(SNumericEntryBox<int> *this,int param_1)

{
  FString *pFVar1;
  INumericTypeInterface<int> *pIVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 *puVar6;
  int local_res10 [2];
  void *local_18 [2];
  
  if ((((this->CachedExternalValue).bIsSet == false) ||
      ((this->CachedExternalValue).TypedValue != param_1)) ||
     (this->bCachedValueStringDirty != false)) {
    if ((TOptional<int> *)local_res10 != &this->CachedExternalValue) {
      (this->CachedExternalValue).TypedValue = param_1;
      (this->CachedExternalValue).bIsSet = true;
    }
    local_res10[0] = param_1;
    if ((this->Interface).Object == (INumericTypeInterface<int> *)0x0) {
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
    pIVar2 = (this->Interface).Object;
    puVar6 = (undefined8 *)(**(code **)((longlong)*pIVar2 + 0x38))(pIVar2,local_18,local_res10);
    pFVar1 = &this->CachedValueString;
    if (pFVar1 != (FString *)puVar6) {
      pFVar3 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)*puVar6;
      *puVar6 = 0;
      (this->CachedValueString).Data.ArrayNum = *(int *)(puVar6 + 1);
      (this->CachedValueString).Data.ArrayMax = *(int *)((longlong)puVar6 + 0xc);
      puVar6[1] = 0;
    }
    if (local_18[0] != (void *)0x0) {
      FMemory::Free(local_18[0]);
    }
    this->bCachedValueStringDirty = false;
  }
  return;
}

// SetCachedString @ 14300cec0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
SNumericEntryBox<float>::SetCachedString(SNumericEntryBox<float> *this,float param_1)

{
  FString *pFVar1;
  INumericTypeInterface<float> *pIVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 *puVar6;
  float local_res10 [2];
  void *local_18 [2];
  
  if ((((this->CachedExternalValue).bIsSet == false) ||
      (param_1 != (this->CachedExternalValue).TypedValue)) ||
     (this->bCachedValueStringDirty != false)) {
    if ((TOptional<float> *)local_res10 != &this->CachedExternalValue) {
      (this->CachedExternalValue).TypedValue = param_1;
      (this->CachedExternalValue).bIsSet = true;
    }
    local_res10[0] = param_1;
    if ((this->Interface).Object == (INumericTypeInterface<float> *)0x0) {
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
    pIVar2 = (this->Interface).Object;
    puVar6 = (undefined8 *)(**(code **)((longlong)*pIVar2 + 0x38))(pIVar2,local_18,local_res10);
    pFVar1 = &this->CachedValueString;
    if (pFVar1 != (FString *)puVar6) {
      pFVar3 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)*puVar6;
      *puVar6 = 0;
      (this->CachedValueString).Data.ArrayNum = *(int *)(puVar6 + 1);
      (this->CachedValueString).Data.ArrayMax = *(int *)((longlong)puVar6 + 0xc);
      puVar6[1] = 0;
    }
    if (local_18[0] != (void *)0x0) {
      FMemory::Free(local_18[0]);
    }
    this->bCachedValueStringDirty = false;
  }
  return;
}

// SetCachedString @ 14300cfc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
SNumericEntryBox<double>::SetCachedString(SNumericEntryBox<double> *this,double param_1)

{
  FString *pFVar1;
  INumericTypeInterface<double> *pIVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 *puVar6;
  double local_res10;
  void *local_18 [2];
  
  if ((((this->CachedExternalValue).bIsSet == false) ||
      (param_1 != (this->CachedExternalValue).TypedValue)) ||
     (this->bCachedValueStringDirty != false)) {
    if ((TOptional<double> *)&local_res10 != &this->CachedExternalValue) {
      (this->CachedExternalValue).TypedValue = param_1;
      (this->CachedExternalValue).bIsSet = true;
    }
    local_res10 = param_1;
    if ((this->Interface).Object == (INumericTypeInterface<double> *)0x0) {
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
    pIVar2 = (this->Interface).Object;
    puVar6 = (undefined8 *)(**(code **)((longlong)*pIVar2 + 0x38))(pIVar2,local_18,&local_res10);
    pFVar1 = &this->CachedValueString;
    if (pFVar1 != (FString *)puVar6) {
      pFVar3 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)*puVar6;
      *puVar6 = 0;
      (this->CachedValueString).Data.ArrayNum = *(int *)(puVar6 + 1);
      (this->CachedValueString).Data.ArrayMax = *(int *)((longlong)puVar6 + 0xc);
      puVar6[1] = 0;
    }
    if (local_18[0] != (void *)0x0) {
      FMemory::Free(local_18[0]);
    }
    this->bCachedValueStringDirty = false;
  }
  return;
}

// SupportsKeyboardFocus @ 14300e820

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall SNumericEntryBox<int>::SupportsKeyboardFocus(SNumericEntryBox<int> *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SEditableText *pSVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  
  pTVar1 = (this->EditableText).SharedReferenceCount.ReferenceController;
  pSVar2 = (this->EditableText).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar2 == (SEditableText *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  uVar5 = (**(code **)(pSVar2->_padding_ + 0x198))(pSVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return (bool)uVar5;
}

// SupportsKeyboardFocus @ 14300e8a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall SNumericEntryBox<float>::SupportsKeyboardFocus(SNumericEntryBox<float> *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SEditableText *pSVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  
  pTVar1 = (this->EditableText).SharedReferenceCount.ReferenceController;
  pSVar2 = (this->EditableText).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar2 == (SEditableText *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  uVar5 = (**(code **)(pSVar2->_padding_ + 0x198))(pSVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return (bool)uVar5;
}

// SupportsKeyboardFocus @ 14300e920

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall SNumericEntryBox<double>::SupportsKeyboardFocus(SNumericEntryBox<double> *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SEditableText *pSVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  
  pTVar1 = (this->EditableText).SharedReferenceCount.ReferenceController;
  pSVar2 = (this->EditableText).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar2 == (SEditableText *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  uVar5 = (**(code **)(pSVar2->_padding_ + 0x198))(pSVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return (bool)uVar5;
}

// Tick @ 143011d80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
SNumericEntryBox<int>::Tick
          (SNumericEntryBox<int> *this,FGeometry *param_1,double param_2,float param_3)

{
  bool bVar1;
  TOptional<int> *pTVar2;
  SSpinBox<int> *pSVar3;
  SEditableText *pSVar4;
  uchar *puVar5;
  code *pcVar6;
  TAttribute<EVisibility> local_88;
  uchar local_68 [8];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  TAttribute<EVisibility> local_48;
  uchar local_28 [8];
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  pTVar2 = TAttribute<TOptional<int>_>::Get(&this->ValueAttribute);
  if (pTVar2->bIsSet == true) {
    SetCachedString(this,pTVar2->TypedValue);
  }
  pSVar3 = (this->SpinBox).Object;
  if (pSVar3 != (SSpinBox<int> *)0x0) {
    if (pTVar2->bIsSet == true) {
      if ((TEnumAsByte<EVisibility::Private>)*(uchar *)((longlong)&pSVar3->_padding_ + 1) ==
          EVisibility::Visible.Value.Value) {
        return;
      }
      pSVar3 = TSharedPtr<SSpinBox<int>,1>::operator->(&this->SpinBox);
      local_88.Value = (EVisibility)EVisibility::Visible.Value.Value;
      local_88.bIsSet = true;
      local_88.Getter._16_8_ = 0;
      local_88.Getter._0_8_ = 0;
      local_88.Getter._8_8_ = 0;
      SCompoundWidget::SetVisibility((SCompoundWidget *)pSVar3,&local_88);
      pSVar4 = TSharedPtr<SEditableText,1>::operator->(&this->EditableText);
      puVar5 = local_68;
      local_68[1] = 1;
      local_60 = 0;
      uStack_58 = 0;
      pcVar6 = *(code **)(pSVar4->_padding_ + 0x1c8);
      local_68[0] = (uchar)EVisibility::Collapsed.Value.Value;
      local_50 = 0;
    }
    else {
      local_48.Value = (EVisibility)EVisibility::Collapsed.Value.Value;
      local_48.bIsSet = true;
      local_48.Getter._16_8_ = 0;
      local_48.Getter._0_8_ = 0;
      local_48.Getter._8_8_ = 0;
      SCompoundWidget::SetVisibility((SCompoundWidget *)pSVar3,&local_48);
      if (((this->EditableText).Object == (SEditableText *)0x0) &&
         (bVar1 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar1)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pSVar4 = (this->EditableText).Object;
      puVar5 = local_28;
      local_28[1] = 1;
      local_20 = 0;
      uStack_18 = 0;
      pcVar6 = *(code **)(pSVar4->_padding_ + 0x1c8);
      local_28[0] = (uchar)EVisibility::Visible.Value.Value;
      local_10 = 0;
    }
    (*pcVar6)(pSVar4,puVar5);
  }
  return;
}

// Tick @ 143011f10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
SNumericEntryBox<float>::Tick
          (SNumericEntryBox<float> *this,FGeometry *param_1,double param_2,float param_3)

{
  bool bVar1;
  TOptional<float> *pTVar2;
  SSpinBox<float> *pSVar3;
  SEditableText *pSVar4;
  uchar *puVar5;
  code *pcVar6;
  TAttribute<EVisibility> local_88;
  uchar local_68 [8];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  TAttribute<EVisibility> local_48;
  uchar local_28 [8];
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  pTVar2 = TAttribute<TOptional<float>_>::Get(&this->ValueAttribute);
  if (pTVar2->bIsSet == true) {
    SetCachedString(this,pTVar2->TypedValue);
  }
  pSVar3 = (this->SpinBox).Object;
  if (pSVar3 != (SSpinBox<float> *)0x0) {
    if (pTVar2->bIsSet == true) {
      if ((TEnumAsByte<EVisibility::Private>)*(uchar *)((longlong)&pSVar3->_padding_ + 1) ==
          EVisibility::Visible.Value.Value) {
        return;
      }
      pSVar3 = TSharedPtr<SSpinBox<float>,1>::operator->(&this->SpinBox);
      local_88.Value = (EVisibility)EVisibility::Visible.Value.Value;
      local_88.bIsSet = true;
      local_88.Getter._16_8_ = 0;
      local_88.Getter._0_8_ = 0;
      local_88.Getter._8_8_ = 0;
      SCompoundWidget::SetVisibility((SCompoundWidget *)pSVar3,&local_88);
      pSVar4 = TSharedPtr<SEditableText,1>::operator->(&this->EditableText);
      puVar5 = local_68;
      local_68[1] = 1;
      local_60 = 0;
      uStack_58 = 0;
      pcVar6 = *(code **)(pSVar4->_padding_ + 0x1c8);
      local_68[0] = (uchar)EVisibility::Collapsed.Value.Value;
      local_50 = 0;
    }
    else {
      local_48.Value = (EVisibility)EVisibility::Collapsed.Value.Value;
      local_48.bIsSet = true;
      local_48.Getter._16_8_ = 0;
      local_48.Getter._0_8_ = 0;
      local_48.Getter._8_8_ = 0;
      SCompoundWidget::SetVisibility((SCompoundWidget *)pSVar3,&local_48);
      if (((this->EditableText).Object == (SEditableText *)0x0) &&
         (bVar1 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar1)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pSVar4 = (this->EditableText).Object;
      puVar5 = local_28;
      local_28[1] = 1;
      local_20 = 0;
      uStack_18 = 0;
      pcVar6 = *(code **)(pSVar4->_padding_ + 0x1c8);
      local_28[0] = (uchar)EVisibility::Visible.Value.Value;
      local_10 = 0;
    }
    (*pcVar6)(pSVar4,puVar5);
  }
  return;
}

// Tick @ 1430120a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
SNumericEntryBox<double>::Tick
          (SNumericEntryBox<double> *this,FGeometry *param_1,double param_2,float param_3)

{
  bool bVar1;
  TOptional<double> *pTVar2;
  SSpinBox<double> *pSVar3;
  SEditableText *pSVar4;
  uchar *puVar5;
  code *pcVar6;
  TAttribute<EVisibility> local_88;
  uchar local_68 [8];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  TAttribute<EVisibility> local_48;
  uchar local_28 [8];
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  pTVar2 = TAttribute<TOptional<double>_>::Get(&this->ValueAttribute);
  if (pTVar2->bIsSet == true) {
    SetCachedString(this,pTVar2->TypedValue);
  }
  pSVar3 = (this->SpinBox).Object;
  if (pSVar3 != (SSpinBox<double> *)0x0) {
    if (pTVar2->bIsSet == true) {
      if ((TEnumAsByte<EVisibility::Private>)*(uchar *)((longlong)&pSVar3->_padding_ + 1) ==
          EVisibility::Visible.Value.Value) {
        return;
      }
      pSVar3 = TSharedPtr<SSpinBox<double>,1>::operator->(&this->SpinBox);
      local_88.Value = (EVisibility)EVisibility::Visible.Value.Value;
      local_88.bIsSet = true;
      local_88.Getter._16_8_ = 0;
      local_88.Getter._0_8_ = 0;
      local_88.Getter._8_8_ = 0;
      SCompoundWidget::SetVisibility((SCompoundWidget *)pSVar3,&local_88);
      pSVar4 = TSharedPtr<SEditableText,1>::operator->(&this->EditableText);
      puVar5 = local_68;
      local_68[1] = 1;
      local_60 = 0;
      uStack_58 = 0;
      pcVar6 = *(code **)(pSVar4->_padding_ + 0x1c8);
      local_68[0] = (uchar)EVisibility::Collapsed.Value.Value;
      local_50 = 0;
    }
    else {
      local_48.Value = (EVisibility)EVisibility::Collapsed.Value.Value;
      local_48.bIsSet = true;
      local_48.Getter._16_8_ = 0;
      local_48.Getter._0_8_ = 0;
      local_48.Getter._8_8_ = 0;
      SCompoundWidget::SetVisibility((SCompoundWidget *)pSVar3,&local_48);
      if (((this->EditableText).Object == (SEditableText *)0x0) &&
         (bVar1 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar1)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pSVar4 = (this->EditableText).Object;
      puVar5 = local_28;
      local_28[1] = 1;
      local_20 = 0;
      uStack_18 = 0;
      pcVar6 = *(code **)(pSVar4->_padding_ + 0x1c8);
      local_28[0] = (uchar)EVisibility::Visible.Value.Value;
      local_10 = 0;
    }
    (*pcVar6)(pSVar4,puVar5);
  }
  return;
}

// ~SNumericEntryBox<unsigned_short> @ 14305de70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
SNumericEntryBox<unsigned_short>::~SNumericEntryBox<unsigned_short>
          (SNumericEntryBox<unsigned_short> *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  ITextData *pIVar3;
  
  TAttribute<TOptional<FTextFormat>_>::~TAttribute<TOptional<FTextFormat>_>
            (&this->ToolTipTextFormat);
  TAttribute<TOptional<int>_>::~TAttribute<TOptional<int>_>(&this->MaxFractionalDigits);
  TAttribute<TOptional<int>_>::~TAttribute<TOptional<int>_>(&this->MinFractionalDigits);
  pFVar1 = (this->CachedValueString).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TSharedPtr<INumericTypeInterface<unsigned_short>,1>::
  ~TSharedPtr<INumericTypeInterface<unsigned_short>,1>(&this->Interface);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->MinDesiredValueWidth).Getter);
  pvVar2 = *(void **)&(this->MinDesiredValueWidth).Getter.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->MinDesiredValueWidth).Getter);
  pIVar3 = (this->UndeterminedString).TextData.Reference;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  TDelegate<void___cdecl(FText,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(FText,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
            (&this->OnUndeterminedValueCommitted);
  TDelegate<void___cdecl(FText),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(FText),FDefaultDelegateUserPolicy>(&this->OnUndeterminedValueChanged);
  TDelegate<void___cdecl(unsigned_short,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(unsigned_short,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
            (&this->OnValueCommitted);
  TDelegate<void___cdecl(unsigned_short),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(unsigned_short),FDefaultDelegateUserPolicy>(&this->OnValueChanged);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->EditableText).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SpinBox).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ToggleCheckBox).SharedReferenceCount.ReferenceController);
  TAttribute<TOptional<unsigned_short>_>::~TAttribute<TOptional<unsigned_short>_>
            (&this->ValueAttribute);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->LabelAttribute).Getter);
  pvVar2 = *(void **)&(this->LabelAttribute).Getter.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->LabelAttribute).Getter);
  if ((*(int *)((longlong)&(this->LabelAttribute).Value.field0_0x0 + 0xc) != -1) &&
     (pFVar1 = (this->LabelAttribute).Value.field0_0x0.TypedValue.Data.AllocatorInstance.Data,
     pFVar1 != (FScriptContainerElement *)0x0)) {
    FMemory::Free(pFVar1);
  }
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  return;
}

// Construct @ 1430725b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001430736ab) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
SNumericEntryBox<unsigned_short>::Construct
          (SNumericEntryBox<unsigned_short> *this,FArguments *param_1)

{
  TSharedPtr<INumericTypeInterface<unsigned_short>,1> *this_00;
  TOptional<unsigned_short> *pTVar1;
  longlong *plVar2;
  ITextData *pIVar3;
  ITextData *pIVar4;
  void *pvVar5;
  SCheckBox *pSVar6;
  FEditableTextBoxStyle *pFVar7;
  SWidget *pSVar8;
  code *pcVar9;
  TDelegateBase<FNotThreadSafeDelegateMode> *this_01;
  longlong lVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  undefined4 uVar14;
  TSharedPtr<INumericTypeInterface<unsigned_short>,1> *pTVar15;
  TDefaultNumericTypeInterface<unsigned_short> *this_02;
  TDefaultNumericTypeInterface<unsigned_short> *pTVar16;
  INumericTypeInterface<unsigned_short> *pIVar17;
  longlong lVar18;
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *this_03;
  TOptional<int> *pTVar19;
  TAttribute<TOptional<int>_> *pTVar20;
  TOptional<unsigned_short> *this_04;
  ushort *puVar21;
  FString *pFVar22;
  FArguments *pFVar23;
  undefined8 *puVar24;
  TSharedRef<SWidget_const_,1> *pTVar25;
  ulong64 uVar26;
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs> *this_05;
  FArguments *pFVar27;
  TAttribute<FSlateFontInfo> *pTVar28;
  TAttribute<unsigned_short> *pTVar29;
  TAttribute<float> *pTVar30;
  TAttribute<int> *pTVar31;
  TAttribute<bool> *pTVar32;
  TAttribute<TOptional<int>_> *pTVar33;
  TAttribute<TOptional<unsigned_short>_> *pTVar34;
  TAttribute<TSharedPtr<INumericTypeInterface<unsigned_short>,1>_> *pTVar35;
  TSlateDecl<SSpinBox<unsigned_short>,RequiredArgs::T0RequiredArgs> *pTVar36;
  FArguments *pFVar37;
  TSharedRef<SWidget,1> *pTVar38;
  FArguments *pFVar39;
  FScopedWidgetSlotArguments *pFVar40;
  FSlotArguments *pFVar41;
  TSharedRef<SSpinBox<unsigned_short>,1> *pTVar42;
  TAttribute<FMargin> *pTVar43;
  FArguments *pFVar44;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> *this_06;
  TSharedRef<SBorder,1> *pTVar45;
  FArguments *pFVar46;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> *pTVar47;
  FScopedWidgetSlotArguments<SHorizontalBox::FSlot> *pFVar48;
  FSlotArguments *pFVar49;
  TSharedRef<SCheckBox,1> *pTVar50;
  TSharedRef<SHorizontalBox,1> *pTVar51;
  TDelegate<void___cdecl(ECheckBoxState),FDefaultDelegateUserPolicy> *pTVar52;
  ECheckBoxState *pEVar53;
  TOptional<FString>_u_0 *pTVar54;
  TAttribute<TOptional<int>_> *pTVar55;
  FScopedWidgetSlotArguments *pFVar56;
  TDelegate<TOptional<FTextFormat>___cdecl(void),FDefaultDelegateUserPolicy> *this_07;
  TReferenceControllerBase<1> *pTVar57;
  bool bVar58;
  bool bVar59;
  bool bVar60;
  undefined1 auStackY_3128 [32];
  FName local_30e8;
  undefined4 uStack_30e0;
  uint uStack_30dc;
  TDelegateBase<FNotThreadSafeDelegateMode> *local_30d8;
  T0RequiredArgs local_30d0;
  T0RequiredArgs local_30cf;
  T0RequiredArgs local_30ce;
  T0RequiredArgs local_30cd;
  T0RequiredArgs local_30cc;
  T0RequiredArgs local_30cb;
  T0RequiredArgs local_30ca [2];
  undefined4 local_30c8;
  FLLMScope local_30c4;
  TReferenceControllerBase<1> *local_30c0;
  FName local_30b8;
  FName local_30b0;
  TSharedPtr<SNumericEntryBox<unsigned_short>,1> local_30a8;
  SEditableText *local_3098;
  FSharedReferencer<1> local_3090;
  TSharedPtr<SWidget,1> local_3088;
  TSharedRef<SOverlay,1> local_3078;
  TSharedRef<SHorizontalBox,1> local_3068;
  TSharedRef<SWidget,1> local_3058;
  undefined1 local_3048 [16];
  TReferenceControllerBase<1> *local_3038;
  undefined2 local_3030;
  undefined1 local_3028 [8];
  void *pvStack_3020;
  longlong local_3018;
  undefined2 local_3010;
  undefined1 local_3008 [8];
  void *pvStack_3000;
  longlong local_2ff8;
  undefined2 local_2ff0;
  undefined1 local_2fe8 [8];
  void *pvStack_2fe0;
  longlong local_2fd8;
  uchar local_2fd0;
  undefined1 local_2fcf;
  undefined1 local_2fc8 [8];
  void *pvStack_2fc0;
  longlong local_2fb8;
  float local_2fb0;
  bool local_2fac;
  undefined1 local_2fa8 [8];
  void *pvStack_2fa0;
  undefined4 local_2f98;
  TSharedPtr<INumericTypeInterface<unsigned_short>,1> local_2f90;
  TSharedRef<SNumericEntryBox<unsigned_short>,1> local_2f78;
  TSharedRef<SNumericEntryBox<unsigned_short>,1> local_2f68;
  SOverlay *local_2f58;
  TReferenceControllerBase<1> *pTStack_2f50;
  FArguments *local_2f48;
  undefined4 uStack_2f40;
  uint uStack_2f3c;
  ECheckBoxState local_2f38;
  bool local_2f37;
  undefined1 local_2f30 [24];
  Type local_2f18;
  bool local_2f14;
  undefined1 local_2f10 [24];
  longlong local_2ef8;
  longlong lStack_2ef0;
  undefined4 local_2ee8;
  undefined1 local_2ee4;
  undefined1 local_2ee0 [8];
  void *pvStack_2ed8;
  longlong local_2ed0;
  longlong local_2ec8;
  longlong lStack_2ec0;
  undefined4 local_2eb8;
  undefined1 local_2eb4;
  undefined1 local_2eb0 [8];
  void *pvStack_2ea8;
  longlong local_2ea0;
  undefined1 local_2e98 [8];
  longlong local_2e90;
  FSharedReferencer<1> local_2e88;
  TDelegateBase<FNotThreadSafeDelegateMode> local_2e80;
  TDelegateBase<FNotThreadSafeDelegateMode> local_2e68;
  TDelegateBase<FNotThreadSafeDelegateMode> local_2e50;
  FMemScope local_2e38;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *local_2e30;
  TRawPtrProxy<TDefaultNumericTypeInterface<unsigned_short>_> local_2e28;
  undefined4 local_2e20 [2];
  undefined4 local_2e18 [4];
  TSharedPtr<SNumericEntryBox<unsigned_short>,1> local_2e08;
  longlong local_2df8;
  longlong lStack_2df0;
  undefined1 local_2de8;
  undefined1 local_2de0 [8];
  void *pvStack_2dd8;
  longlong local_2dd0;
  TOptional<FString>_u_0 local_2dc8;
  longlong local_2db8;
  longlong lStack_2db0;
  longlong local_2da8;
  TOptional<FString>_u_0 local_2da0;
  undefined1 local_2d90 [16];
  undefined4 local_2d80;
  TAttribute<TOptional<int>_> local_2d78;
  undefined1 local_2d50 [24];
  FSharedReferencer<1> FStack_2d38;
  SEditableText *local_2d30;
  TSlateDecl<SEditableText,RequiredArgs::T0RequiredArgs> local_2d28;
  undefined1 local_2d10 [40];
  TAttribute<TOptional<int>_> local_2ce8;
  TSharedRef<SWidget,1> local_2cc0;
  TSharedPtr<SWidget,1> local_2cb0;
  TSharedRef<SWidget,1> local_2ca0;
  TSharedRef<SWidget,1> local_2c90;
  TSharedRef<SWidget,1> local_2c80;
  TSharedRef<SWidget,1> local_2c70;
  ForAnyElementType local_2c60;
  undefined8 uStack_2c58;
  bool local_2c50;
  undefined1 local_2c48 [24];
  FLinearColor_u_0 local_2c30;
  int local_2c20;
  bool local_2c1c;
  undefined8 local_2c18;
  undefined1 auStack_2c10 [24];
  FTextFormatData *local_2bf8;
  char local_2bf0;
  undefined1 *local_2be8;
  FDestructionSentinel local_2be0;
  undefined1 *local_2bc8;
  FDestructionSentinel local_2bc0;
  undefined1 *local_2ba8;
  FDestructionSentinel local_2ba0;
  undefined1 *local_2b88;
  TSharedPtr<INumericTypeInterface<unsigned_short>,1> local_2b80;
  TSharedPtr<INumericTypeInterface<unsigned_short>,1> local_2b70;
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> local_2b60;
  TSharedRef<SCheckBox,1> local_2b48;
  code *local_2b38;
  longlong lStack_2b30;
  code *local_2b28;
  longlong lStack_2b20;
  TSharedRef<SSpinBox<unsigned_short>,1> local_2b18;
  code *local_2b08;
  longlong lStack_2b00;
  code *local_2af8;
  longlong lStack_2af0;
  TSharedRef<SWidget,1> local_2ae8;
  TSharedRef<SWidget,1> local_2ad8;
  SEditableText *local_2ac8;
  TReferenceControllerBase<1> *pTStack_2ac0;
  TSharedRef<SEditableText,1> local_2ab8;
  TSharedRef<SSpinBox<unsigned_short>,1> local_2aa8;
  SCheckBox *local_2a98;
  TReferenceControllerBase<1> *pTStack_2a90;
  TSharedRef<SWidget_const_,1> local_2a88;
  TSharedRef<SBorder,1> local_2a78;
  TSharedRef<SCheckBox,1> local_2a68;
  TSharedRef<SWidget,1> local_2a58;
  TSharedRef<SHorizontalBox,1> local_2a48;
  TSharedRef<SWidget,1> local_2a38;
  TSharedRef<SCheckBox,1> local_2a28;
  TSharedRef<SWidget_const_,1> local_2a18;
  void *local_2a08 [2];
  code *local_29f8;
  longlong lStack_29f0;
  undefined8 local_29e8;
  undefined8 uStack_29e0;
  undefined8 local_29d8;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_29d0;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_29b8;
  FReadAccessScope local_29a0;
  FReadAccessScope local_2988;
  FReadAccessScope local_2970;
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs> local_2958;
  TSlateDecl<SSpinBox<unsigned_short>,RequiredArgs::T0RequiredArgs> local_2940;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_2928;
  FScriptContainerElement *local_2910 [2];
  bool local_2900;
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> local_28f8;
  TAttribute<TOptional<int>_> local_28e0;
  TAttribute<TOptional<int>_> local_28b8;
  undefined1 local_2890 [24];
  TAttribute<FMargin> local_2878;
  TAttribute<FMargin> local_2848;
  TAttribute<TOptional<unsigned_short>_> local_2818;
  TAttribute<float> local_27f8;
  TAttribute<unsigned_short> local_27d8;
  TAttribute<unsigned_short> local_27b8;
  TAttribute<float> local_2798;
  TAttribute<int> local_2778;
  TAttribute<bool> local_2758;
  TAttribute<float> local_2738;
  TAttribute<bool> local_2718;
  TAttribute<TOptional<unsigned_short>_> local_26f8;
  TAttribute<TOptional<unsigned_short>_> local_26d8;
  TAttribute<TOptional<unsigned_short>_> local_26b8;
  TAttribute<TOptional<unsigned_short>_> local_2698;
  TAttribute<float> local_2678;
  TAttribute<FSlateFontInfo> local_2658;
  TAttribute<TOptional<int>_> local_25d8;
  TAttribute<TOptional<int>_> local_25b0;
  TAttribute<FMargin> local_2588;
  TAttribute<FMargin> local_2558;
  TAttribute<FMargin> local_2528;
  TAttribute<FMargin> local_24f8;
  TAttribute<TSharedPtr<INumericTypeInterface<unsigned_short>,1>_> local_24c8;
  TAttribute<FSlateFontInfo> local_2498;
  TAttribute<FSlateFontInfo> local_2418;
  TAttribute<FSlateFontInfo> local_2398;
  TAttribute<FSlateFontInfo> local_2318;
  FSlotArguments local_2298;
  FSlotArguments local_21b0;
  TAttribute<FSlateFontInfo> local_20c8;
  FScopedWidgetSlotArguments<SHorizontalBox::FSlot> local_2048;
  FScopedWidgetSlotArguments<SHorizontalBox::FSlot> local_1f48;
  FScopedWidgetSlotArguments<SHorizontalBox::FSlot> local_1e48;
  FArguments local_1d48;
  FArguments local_1b40;
  FArguments local_1938;
  FArguments local_1730;
  FArguments local_1350;
  FArguments local_f70;
  FArguments local_908;
  FScopedWidgetSlotArguments local_228;
  FScopedWidgetSlotArguments local_188;
  FScopedWidgetSlotArguments local_e8;
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x1430725d2;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_3128;
  pTVar16 = (TDefaultNumericTypeInterface<unsigned_short> *)0x0;
  local_30c8 = 0;
  if ((param_1->_EditableTextBoxStyle == (FEditableTextBoxStyle *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("InArgs._EditableTextBoxStyle",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Input\\SNumericEntryBox.h"
                          ,0xd4,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  TDelegate<void___cdecl(unsigned_short),FDefaultDelegateUserPolicy>::operator=
            (&this->OnValueChanged,&param_1->_OnValueChanged);
  TDelegate<void___cdecl(unsigned_short,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>::
  operator=(&this->OnValueCommitted,&param_1->_OnValueCommitted);
  if (&param_1->_OnUndeterminedValueChanged != &this->OnUndeterminedValueChanged) {
    local_2e50._0_8_ = 0;
    local_2e50._8_8_ = 0;
    local_2e50._16_4_ = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &param_1->_OnUndeterminedValueChanged,&local_29a0);
    if ((*(int *)&(param_1->_OnUndeterminedValueChanged).field_0x10 != 0) &&
       (plVar2 = *(longlong **)&(param_1->_OnUndeterminedValueChanged).field_0x8,
       plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x50))(plVar2,&local_2e50);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_29a0);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnUndeterminedValueChanged,
               &local_2e50);
    TDelegate<void___cdecl(FText),FDefaultDelegateUserPolicy>::
    ~TDelegate<void___cdecl(FText),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(FText),FDefaultDelegateUserPolicy> *)&local_2e50);
  }
  if (&param_1->_OnUndeterminedValueCommitted != &this->OnUndeterminedValueCommitted) {
    local_2e68._0_8_ = 0;
    local_2e68._8_8_ = 0;
    local_2e68._16_4_ = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &param_1->_OnUndeterminedValueCommitted,&local_2988);
    if ((*(int *)&(param_1->_OnUndeterminedValueCommitted).field_0x10 != 0) &&
       (plVar2 = *(longlong **)&(param_1->_OnUndeterminedValueCommitted).field_0x8,
       plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x50))(plVar2,&local_2e68);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_2988);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnUndeterminedValueCommitted,
               &local_2e68);
    TDelegate<void___cdecl(FText,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>::
    ~TDelegate<void___cdecl(FText,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>(&local_2e68);
  }
  if (&param_1->_Value != &this->ValueAttribute) {
    if ((param_1->_Value).Value.bIsSet == false) {
      if ((this->ValueAttribute).Value.bIsSet != false) {
        (this->ValueAttribute).Value.bIsSet = false;
      }
    }
    else {
      (this->ValueAttribute).Value.TypedValue = (param_1->_Value).Value.TypedValue;
      (this->ValueAttribute).Value.bIsSet = true;
    }
  }
  (this->ValueAttribute).bIsSet = (param_1->_Value).bIsSet;
  TDelegate<TOptional<unsigned_short>___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&(this->ValueAttribute).Getter,&(param_1->_Value).Getter);
  pIVar3 = (param_1->_UndeterminedString).TextData.Reference;
  pIVar4 = (this->UndeterminedString).TextData.Reference;
  if (pIVar4 != pIVar3) {
    (this->UndeterminedString).TextData.Reference = pIVar3;
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_2e98);
    }
    if (pIVar4 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar4 + 0x10))(pIVar4);
    }
  }
  (this->UndeterminedString).Flags = (param_1->_UndeterminedString).Flags;
  (this->MinDesiredValueWidth).Value = (param_1->_MinDesiredValueWidth).Value;
  (this->MinDesiredValueWidth).bIsSet = (param_1->_MinDesiredValueWidth).bIsSet;
  local_2e30 = &(param_1->_MinDesiredValueWidth).Getter;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->MinDesiredValueWidth).Getter,local_2e30);
  bVar59 = true;
  bVar11 = false;
  this->BorderImageNormal = &param_1->_EditableTextBoxStyle->BackgroundImageNormal;
  this->BorderImageHovered = &param_1->_EditableTextBoxStyle->BackgroundImageHovered;
  this->BorderImageFocused = &param_1->_EditableTextBoxStyle->BackgroundImageFocused;
  if ((param_1->_TypeInterface).Object == (INumericTypeInterface<unsigned_short> *)0x0) {
    this_02 = ::operator_new(0x10);
    if (this_02 != (TDefaultNumericTypeInterface<unsigned_short> *)0x0) {
      pTVar16 = TDefaultNumericTypeInterface<unsigned_short>::
                TDefaultNumericTypeInterface<unsigned_short>(this_02);
    }
    local_2e28.Object = pTVar16;
    pTVar15 = TSharedPtr<INumericTypeInterface<unsigned_short>,1>::
              TSharedPtr<INumericTypeInterface<unsigned_short>,1><TDefaultNumericTypeInterface<unsigned_short>_>
                        (&local_2b70,&local_2e28);
    bVar12 = true;
    bVar58 = false;
  }
  else {
    pTVar15 = TSharedPtr<INumericTypeInterface<unsigned_short>,1>::
              TSharedPtr<INumericTypeInterface<unsigned_short>,1>
                        (&local_2b80,&param_1->_TypeInterface);
    bVar12 = false;
    bVar58 = true;
  }
  this_00 = &this->Interface;
  pIVar17 = pTVar15->Object;
  pTVar57 = (pTVar15->SharedReferenceCount).ReferenceController;
  if (pTVar57 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar57->SharedReferenceCount = (atomic<int>)((int)pTVar57->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2f90.Object = this_00->Object;
  local_2f90.SharedReferenceCount.ReferenceController =
       (this->Interface).SharedReferenceCount.ReferenceController;
  this_00->Object = pIVar17;
  (this->Interface).SharedReferenceCount.ReferenceController = pTVar57;
  TSharedPtr<INumericTypeInterface<unsigned_short>,1>::
  ~TSharedPtr<INumericTypeInterface<unsigned_short>,1>(&local_2f90);
  if (bVar12) {
    TSharedPtr<INumericTypeInterface<unsigned_short>,1>::
    ~TSharedPtr<INumericTypeInterface<unsigned_short>,1>(&local_2b70);
  }
  if (bVar58) {
    TSharedPtr<INumericTypeInterface<unsigned_short>,1>::
    ~TSharedPtr<INumericTypeInterface<unsigned_short>,1>(&local_2b80);
  }
  if ((param_1->_TypeInterface).Object != (INumericTypeInterface<unsigned_short> *)0x0) {
    pIVar17 = TSharedPtr<INumericTypeInterface<unsigned_short>,1>::operator->(this_00);
    lVar18 = (**(code **)((longlong)*pIVar17 + 0x50))(pIVar17);
    if (lVar18 != 0) {
      pIVar17 = TSharedPtr<INumericTypeInterface<unsigned_short>,1>::operator->(this_00);
      this_03 = (TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                (**(code **)((longlong)*pIVar17 + 0x50))(pIVar17);
      uStack_2f40 = 0;
      local_2f48 = (FArguments *)ResetCachedValueString;
      lStack_29f0 = (ulonglong)uStack_2f3c << 0x20;
      local_29f8 = ResetCachedValueString;
      TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
      AddSP<SNumericEntryBox<unsigned_short>_>
                (this_03,(SNumericEntryBox<unsigned_short> *)local_3048,(pmf_855da6b8 *)this);
    }
  }
  pTVar19 = TAttribute<TOptional<int>_>::Get(&param_1->_MinFractionalDigits);
  bVar58 = pTVar19->bIsSet == false;
  if (bVar58) {
    pTVar20 = TAttribute<TOptional<int>_>::TAttribute<TOptional<int>_><int>
                        (&local_28b8,&DefaultMinFractionalDigits);
  }
  else {
    pTVar20 = TAttribute<TOptional<int>_>::TAttribute<TOptional<int>_>
                        (&local_28e0,&param_1->_MinFractionalDigits);
  }
  pTVar33 = &this->MinFractionalDigits;
  if (pTVar20 != pTVar33) {
    if ((pTVar20->Value).bIsSet == false) {
      if ((this->MinFractionalDigits).Value.bIsSet != false) {
        (this->MinFractionalDigits).Value.bIsSet = false;
      }
    }
    else {
      (pTVar33->Value).TypedValue = (pTVar20->Value).TypedValue;
      (this->MinFractionalDigits).Value.bIsSet = true;
    }
  }
  (this->MinFractionalDigits).bIsSet = pTVar20->bIsSet;
  TDelegate<TOptional<int>___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&(this->MinFractionalDigits).Getter,&pTVar20->Getter);
  if (bVar58) {
    TAttribute<TOptional<int>_>::~TAttribute<TOptional<int>_>(&local_28b8);
  }
  else {
    TAttribute<TOptional<int>_>::~TAttribute<TOptional<int>_>(&local_28e0);
  }
  pTVar19 = TAttribute<TOptional<int>_>::Get(&param_1->_MaxFractionalDigits);
  if (pTVar19->bIsSet == false) {
    local_2dc8._4_1_ = 1;
    uVar14 = 6;
    local_2da8 = 0;
    local_2dc8._0_4_ = 6;
    pTVar54 = &local_2dc8;
    local_2dc8.TypedValue.Data.ArrayNum._0_1_ = 1;
    bVar59 = false;
    bVar11 = true;
    local_2db8 = 0;
    lStack_2db0 = 0;
  }
  else {
    local_2da0._4_1_ = (param_1->_MaxFractionalDigits).Value.bIsSet;
    if ((bool)local_2da0._4_1_ != false) {
      local_2da0._0_4_ = (param_1->_MaxFractionalDigits).Value.TypedValue;
    }
    local_2da0.TypedValue.Data.ArrayNum._0_1_ = (param_1->_MaxFractionalDigits).bIsSet;
    local_2d80 = 0;
    local_2d90._0_8_ = 0;
    local_2d90._8_8_ = 0;
    TDelegate<TOptional<int>___cdecl(void),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<TOptional<int>___cdecl(void),FDefaultDelegateUserPolicy> *)local_2d90,
               &(param_1->_MaxFractionalDigits).Getter);
    pTVar54 = &local_2da0;
    uVar14 = local_2da0._0_4_;
  }
  pTVar20 = &this->MaxFractionalDigits;
  if (pTVar54 != (TOptional<FString>_u_0 *)pTVar20) {
    if (*(char *)((longlong)&(pTVar54->TypedValue).Data.AllocatorInstance.Data + 4) == '\0') {
      if ((this->MaxFractionalDigits).Value.bIsSet != false) {
        (this->MaxFractionalDigits).Value.bIsSet = false;
      }
    }
    else {
      (pTVar20->Value).TypedValue = uVar14;
      (this->MaxFractionalDigits).Value.bIsSet = true;
    }
  }
  (this->MaxFractionalDigits).bIsSet = SUB41((pTVar54->TypedValue).Data.ArrayNum,0);
  TDelegate<TOptional<int>___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->MaxFractionalDigits).Getter,
             (TDelegate<TOptional<int>___cdecl(void),FDefaultDelegateUserPolicy> *)
             &pTVar54[1].TypedValue);
  if (bVar11) {
    TAttribute<TOptional<int>_>::~TAttribute<TOptional<int>_>
              ((TAttribute<TOptional<int>_> *)&local_2dc8.TypedValue);
  }
  if (bVar59) {
    TAttribute<TOptional<int>_>::~TAttribute<TOptional<int>_>
              ((TAttribute<TOptional<int>_> *)&local_2da0.TypedValue);
  }
  if ((this_00->Object == (INumericTypeInterface<unsigned_short> *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pIVar17 = this_00->Object;
  local_30d8 = *(TDelegateBase<FNotThreadSafeDelegateMode> **)((longlong)*pIVar17 + 0x20);
  pTVar19 = TAttribute<TOptional<int>_>::Get(pTVar33);
  if (pTVar19->bIsSet == false) {
    local_2d10[4] = (this->MinFractionalDigits).Value.bIsSet;
    if (local_2d10[4] != false) {
      local_2d10._0_4_ = (pTVar33->Value).TypedValue;
    }
    local_2d10[8] = (this->MinFractionalDigits).bIsSet;
    local_2d10._32_4_ = 0;
    local_2d10._16_8_ = 0;
    local_2d10._24_8_ = 0;
    TDelegate<TOptional<int>___cdecl(void),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<TOptional<int>___cdecl(void),FDefaultDelegateUserPolicy> *)
               (local_2d10 + 0x10),&(this->MinFractionalDigits).Getter);
    pTVar55 = (TAttribute<TOptional<int>_> *)local_2d10;
    bVar59 = false;
    bVar11 = true;
  }
  else {
    pTVar19 = TAttribute<TOptional<int>_>::Get(pTVar33);
    local_2d78.Value.bIsSet = pTVar19->bIsSet;
    if (local_2d78.Value.bIsSet != false) {
      local_2d78.Value.TypedValue = pTVar19->TypedValue;
    }
    local_2d78.bIsSet = true;
    pTVar55 = &local_2d78;
    local_2d78.Getter._16_8_ = 0;
    bVar59 = true;
    bVar11 = false;
    local_2d78.Getter._0_8_ = 0;
    local_2d78.Getter._8_8_ = 0;
  }
  (*(code *)local_30d8)(pIVar17,pTVar55);
  if (bVar11) {
    TAttribute<TOptional<int>_>::~TAttribute<TOptional<int>_>
              ((TAttribute<TOptional<int>_> *)local_2d10);
  }
  if (bVar59) {
    TAttribute<TOptional<int>_>::~TAttribute<TOptional<int>_>(&local_2d78);
  }
  this->bCachedValueStringDirty = true;
  pIVar17 = TSharedPtr<INumericTypeInterface<unsigned_short>,1>::operator->(this_00);
  local_30d8 = *(TDelegateBase<FNotThreadSafeDelegateMode> **)((longlong)*pIVar17 + 0x28);
  pTVar19 = TAttribute<TOptional<int>_>::Get(pTVar20);
  if (pTVar19->bIsSet == false) {
    local_2ce8.Value.bIsSet = (this->MaxFractionalDigits).Value.bIsSet;
    if (local_2ce8.Value.bIsSet != false) {
      local_2ce8.Value.TypedValue = (pTVar20->Value).TypedValue;
    }
    local_2ce8.bIsSet = (this->MaxFractionalDigits).bIsSet;
    local_2ce8.Getter._16_4_ = 0;
    local_2ce8.Getter._0_8_ = 0;
    local_2ce8.Getter._8_8_ = 0;
    TDelegate<TOptional<int>___cdecl(void),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>(&local_2ce8.Getter,&(this->MaxFractionalDigits).Getter);
    pTVar55 = &local_2ce8;
    bVar59 = false;
    bVar11 = true;
  }
  else {
    pTVar19 = TAttribute<TOptional<int>_>::Get(pTVar20);
    local_2d50[4] = pTVar19->bIsSet;
    if (local_2d50[4] != false) {
      local_2d50._0_4_ = pTVar19->TypedValue;
    }
    local_2d50[8] = true;
    pTVar55 = (TAttribute<TOptional<int>_> *)local_2d50;
    local_2d30 = (SEditableText *)0x0;
    bVar59 = true;
    bVar11 = false;
    local_2d50._16_8_ = (SSpinBox<unsigned_short> *)0x0;
    FStack_2d38.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  (*(code *)local_30d8)(pIVar17,pTVar55);
  if (bVar11) {
    TAttribute<TOptional<int>_>::~TAttribute<TOptional<int>_>(&local_2ce8);
  }
  if (bVar59) {
    TAttribute<TOptional<int>_>::~TAttribute<TOptional<int>_>
              ((TAttribute<TOptional<int>_> *)local_2d50);
  }
  bVar58 = false;
  bVar59 = false;
  bVar11 = false;
  this->bCachedValueStringDirty = true;
  if (&param_1->_ToolTipTextFormat != &this->ToolTipTextFormat) {
    if ((param_1->_ToolTipTextFormat).Value.bIsSet == false) {
      if ((this->ToolTipTextFormat).Value.bIsSet != false) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((this->ToolTipTextFormat).Value.TypedValue.TextFormatData.SharedReferenceCount.
                   ReferenceController);
        (this->ToolTipTextFormat).Value.bIsSet = false;
      }
    }
    else {
      local_30d8 = (TDelegateBase<FNotThreadSafeDelegateMode> *)
                   TOptional<FTextFormat>::GetValue(&(param_1->_ToolTipTextFormat).Value);
      if ((this->ToolTipTextFormat).Value.bIsSet != false) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((this->ToolTipTextFormat).Value.TypedValue.TextFormatData.SharedReferenceCount.
                   ReferenceController);
      }
      (this->ToolTipTextFormat).Value.TypedValue.TextFormatData.Object =
           (((FTextFormat *)local_30d8)->TextFormatData).Object;
      pTVar57 = (((FTextFormat *)local_30d8)->TextFormatData).SharedReferenceCount.
                ReferenceController;
      (this->ToolTipTextFormat).Value.TypedValue.TextFormatData.SharedReferenceCount.
      ReferenceController = pTVar57;
      if (pTVar57 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar57->SharedReferenceCount = (atomic<int>)((int)pTVar57->SharedReferenceCount + 1);
        UNLOCK();
      }
      (this->ToolTipTextFormat).Value.bIsSet = true;
    }
  }
  (this->ToolTipTextFormat).bIsSet = (param_1->_ToolTipTextFormat).bIsSet;
  local_30d8 = (TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_1->_ToolTipTextFormat).Getter;
  this_07 = &(this->ToolTipTextFormat).Getter;
  if (local_30d8 != (TDelegateBase<FNotThreadSafeDelegateMode> *)this_07) {
    local_2e80._0_8_ = 0;
    local_2e80._8_8_ = 0;
    local_2e80._16_4_ = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_30d8,&local_2970);
    if ((*(int *)&local_30d8->field_0x10 != 0) &&
       (plVar2 = *(longlong **)&local_30d8->field_0x8, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x50))(plVar2,&local_2e80);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_2970);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_07,&local_2e80);
    TDelegate<TOptional<FTextFormat>___cdecl(void),FDefaultDelegateUserPolicy>::
    ~TDelegate<TOptional<FTextFormat>___cdecl(void),FDefaultDelegateUserPolicy>
              ((TDelegate<TOptional<FTextFormat>___cdecl(void),FDefaultDelegateUserPolicy> *)
               &local_2e80);
  }
  this_04 = TAttribute<TOptional<unsigned_short>_>::Get(&this->ValueAttribute);
  pTVar1 = &this->CachedExternalValue;
  if (this_04 != pTVar1) {
    if (this_04->bIsSet == false) {
      if ((this->CachedExternalValue).bIsSet != false) {
        (this->CachedExternalValue).bIsSet = false;
      }
    }
    else {
      puVar21 = TOptional<unsigned_short>::GetValue(this_04);
      pTVar1->TypedValue = *puVar21;
      (this->CachedExternalValue).bIsSet = true;
    }
  }
  if ((this->CachedExternalValue).bIsSet != false) {
    local_30d8 = (TDelegateBase<FNotThreadSafeDelegateMode> *)
                 TSharedPtr<INumericTypeInterface<unsigned_short>,1>::operator->(&this->Interface);
    local_30c0 = *(TReferenceControllerBase<1> **)
                  ((longlong)*(INumericTypeInterface<unsigned_short> *)local_30d8 + 0x38);
    if (((this->CachedExternalValue).bIsSet == false) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar12)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pFVar22 = (FString *)(*(code *)local_30c0)(local_30d8,local_2a08,pTVar1);
    ::FString::operator=(&this->CachedValueString,pFVar22);
    if (local_2a08[0] != (void *)0x0) {
      FMemory::Free(local_2a08[0]);
    }
  }
  this->bCachedValueStringDirty = false;
  bVar12 = param_1->_DisplayToggle;
  if (bVar12 != false) {
    pFVar23 = SCheckBox::FArguments::FArguments(&local_1730);
    lVar18 = _UNK_15076aed8;
    local_2de8 = 1;
    local_2dd0 = 0;
    local_2df8 = ___xmm_00000000400000000000000000000000;
    lStack_2df0 = _UNK_15076aed8;
    local_2de0 = (undefined1  [8])0x0;
    pvStack_2dd8 = (void *)0x0;
    uVar14 = _UNK_15076aed4;
    (pFVar23->_Padding).Value.Left = (float)___xmm_00000000400000000000000000000000;
    lVar10 = _UNK_15076aed8;
    (pFVar23->_Padding).Value.Top = (float)uVar14;
    _UNK_15076aed8 = (undefined4)lVar18;
    _UNK_15076aedc = SUB84(lVar18,4);
    uVar14 = _UNK_15076aedc;
    (pFVar23->_Padding).Value.Right = (float)_UNK_15076aed8;
    _UNK_15076aed8 = lVar10;
    (pFVar23->_Padding).Value.Bottom = (float)uVar14;
    (pFVar23->_Padding).bIsSet = true;
    local_2f48 = pFVar23;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar23->_Padding).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2de0);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2de0);
    if (pvStack_2dd8 != (void *)0x0) {
      FMemory::Free(pvStack_2dd8);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_2de0);
    local_2f38 = (param_1->_ToggleChecked).Value;
    local_2f37 = (param_1->_ToggleChecked).bIsSet;
    TDelegate<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy>
              (local_2f30,&(param_1->_ToggleChecked).Getter);
    (pFVar23->_IsChecked).Value = local_2f38;
    (pFVar23->_IsChecked).bIsSet = local_2f37;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar23->_IsChecked).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2f30);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2f30);
    if ((void *)local_2f30._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_2f30._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_2f30);
    local_30d8 = (TDelegateBase<FNotThreadSafeDelegateMode> *)
                 TDelegate<void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy>::
                 TDelegate<void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy>
                           (local_2890,&param_1->_OnToggleChanged);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &pFVar23->_OnCheckStateChanged,(FWriteAccessScope *)&local_2ba0);
    local_2b88 = &(pFVar23->_OnCheckStateChanged).field_0x8;
    puVar24 = UE::Core::Private::DelegateAllocate(0x48,(FDelegateAllocation *)local_2b88);
    pTVar57 = (TReferenceControllerBase<1> *)local_3048._0_8_;
    if (puVar24 != (undefined8 *)0x0) {
      uStack_30dc = local_3058.SharedReferenceCount.ReferenceController._4_4_;
      local_30e8 = (FName)HandleToggleCheckBoxChanged;
      uStack_30e0 = 0;
      pTVar25 = TSharedFromThis<SWidget,1>::AsShared
                          ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_2a18);
      pTVar57 = (pTVar25->SharedReferenceCount).ReferenceController;
      local_30b0 = (FName)pTVar25->Object;
      if (pTVar57 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar57->SharedReferenceCount = (atomic<int>)((int)pTVar57->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar57->SharedReferenceCount = (atomic<int>)((int)pTVar57->SharedReferenceCount + 1);
        UNLOCK();
      }
      *puVar24 = &
                 ___7__TCommonDelegateInstanceState___A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy______6B_
      ;
      bVar58 = true;
      bVar59 = true;
      bVar11 = true;
      local_30c0 = pTVar57;
      TDelegate<void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy>::
      TDelegate<void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy>
                (puVar24 + 1,
                 (TDelegate<void___cdecl(ECheckBoxState),FDefaultDelegateUserPolicy> *)local_30d8);
      uVar26 = FDelegateHandle::GenerateNewID();
      puVar24[4] = uVar26;
      *puVar24 = &
                 ___7__TBaseSPMethodDelegateInstance__00__CBV__SNumericEntryBox_G___00__A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy______6B_
      ;
      *(FName *)(puVar24 + 5) = local_30b0;
      puVar24[6] = pTVar57;
      if (pTVar57 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar57->WeakReferenceCount = (atomic<int>)((int)pTVar57->WeakReferenceCount + 1);
        UNLOCK();
      }
      *(FName *)(puVar24 + 7) = local_30e8;
      puVar24[8] = CONCAT44(uStack_30dc,uStack_30e0);
      pTVar57 = local_30c0;
    }
    if (bVar11) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar57);
    }
    if (bVar59) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar57);
    }
    if (bVar58) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2a18.SharedReferenceCount.ReferenceController);
    }
    if (local_2ba0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2ba0.Accessor,&local_2ba0);
    }
    this_01 = local_30d8;
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind(local_30d8);
    pvVar5 = *(void **)&this_01->field_0x8;
    if (pvVar5 != (void *)0x0) {
      FMemory::Free(pvVar5);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)this_01);
    this_05 = MakeTDecl<SCheckBox,RequiredArgs::T0RequiredArgs>
                        (&local_2958,"SCheckBox",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Input\\SNumericEntryBox.h"
                         ,0xf8,&local_30d0);
    pSVar6 = (this_05->_Widget).Object;
    pTVar57 = (this_05->_Widget).SharedReferenceCount.ReferenceController;
    if (pTVar57 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar57->SharedReferenceCount = (atomic<int>)((int)pTVar57->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_2a98 = (this->ToggleCheckBox).Object;
    pTStack_2a90 = (this->ToggleCheckBox).SharedReferenceCount.ReferenceController;
    (this->ToggleCheckBox).Object = pSVar6;
    (this->ToggleCheckBox).SharedReferenceCount.ReferenceController = pTVar57;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (pTStack_2a90);
    TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>::operator<<=(this_05,&local_2b48,local_2f48);
    TSharedRef<SCheckBox,1>::~TSharedRef<SCheckBox,1>(&local_2b48);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2958._Widget.SharedReferenceCount.ReferenceController);
    SCheckBox::FArguments::~FArguments(&local_1730);
  }
  bVar11 = param_1->_AllowSpin;
  if (bVar11 != false) {
    pFVar27 = SSpinBox<unsigned_short>::FArguments::FArguments(&local_908);
    pFVar27->_Style = param_1->_SpinBoxStyle;
    bVar59 = (param_1->_Font).bIsSet == false;
    if (bVar59) {
      pTVar28 = TAttribute<FSlateFontInfo>::TAttribute<FSlateFontInfo><FSlateFontInfo>
                          (&local_2498,&(param_1->_EditableTextBoxStyle->TextStyle).Font);
    }
    else {
      pTVar28 = TAttribute<FSlateFontInfo>::TAttribute<FSlateFontInfo>(&local_2418,&param_1->_Font);
    }
    pTVar28 = TAttribute<FSlateFontInfo>::TAttribute<FSlateFontInfo>(&local_20c8,pTVar28);
    pFVar27 = SSpinBox<unsigned_short>::FArguments::Font(pFVar27,pTVar28);
    uStack_30e0 = 0;
    local_30e8 = (FName)OnGetValueForSpinBox;
    lStack_2b30 = (ulonglong)uStack_30dc << 0x20;
    local_2b38 = OnGetValueForSpinBox;
    pFVar27 = SSpinBox<unsigned_short>::FArguments::Value<SNumericEntryBox<unsigned_short>_>
                        (pFVar27,this,(pmf_b917db44 *)&local_2b38);
    pTVar29 = TAttribute<unsigned_short>::TAttribute<unsigned_short>(&local_27d8,&param_1->_Delta);
    pFVar27 = SSpinBox<unsigned_short>::FArguments::Delta(pFVar27,pTVar29);
    pTVar30 = TAttribute<float>::TAttribute<float>(&local_2738,&param_1->_ShiftMultiplier);
    pFVar27 = SSpinBox<unsigned_short>::FArguments::ShiftMultiplier(pFVar27,pTVar30);
    pTVar30 = TAttribute<float>::TAttribute<float>(&local_2798,&param_1->_CtrlMultiplier);
    pFVar27 = SSpinBox<unsigned_short>::FArguments::CtrlMultiplier(pFVar27,pTVar30);
    pTVar31 = TAttribute<int>::TAttribute<int>(&local_2778,&param_1->_LinearDeltaSensitivity);
    pFVar27 = SSpinBox<unsigned_short>::FArguments::LinearDeltaSensitivity(pFVar27,pTVar31);
    pTVar32 = TAttribute<bool>::TAttribute<bool>
                        (&local_2758,&param_1->_SupportDynamicSliderMaxValue);
    pFVar27 = SSpinBox<unsigned_short>::FArguments::SupportDynamicSliderMaxValue(pFVar27,pTVar32);
    pTVar32 = TAttribute<bool>::TAttribute<bool>
                        (&local_2718,&param_1->_SupportDynamicSliderMinValue);
    pFVar27 = SSpinBox<unsigned_short>::FArguments::SupportDynamicSliderMinValue(pFVar27,pTVar32);
    pFVar27 = SSpinBox<unsigned_short>::FArguments::OnDynamicSliderMaxValueChanged
                        (pFVar27,&param_1->_OnDynamicSliderMaxValueChanged);
    pFVar27 = SSpinBox<unsigned_short>::FArguments::OnDynamicSliderMinValueChanged
                        (pFVar27,&param_1->_OnDynamicSliderMinValueChanged);
    pFVar27 = SSpinBox<unsigned_short>::FArguments::OnValueChanged(pFVar27,&this->OnValueChanged);
    pFVar27 = SSpinBox<unsigned_short>::FArguments::OnValueCommitted
                        (pFVar27,&this->OnValueCommitted);
    pTVar33 = TAttribute<TOptional<int>_>::TAttribute<TOptional<int>_>(&local_25d8,pTVar33);
    pFVar27 = SSpinBox<unsigned_short>::FArguments::MinFractionalDigits(pFVar27,pTVar33);
    pTVar20 = TAttribute<TOptional<int>_>::TAttribute<TOptional<int>_>(&local_25b0,pTVar20);
    pFVar27 = SSpinBox<unsigned_short>::FArguments::MaxFractionalDigits(pFVar27,pTVar20);
    pTVar34 = TAttribute<TOptional<unsigned_short>_>::TAttribute<TOptional<unsigned_short>_>
                        (&local_26f8,&param_1->_MinSliderValue);
    pFVar27 = SSpinBox<unsigned_short>::FArguments::MinSliderValue(pFVar27,pTVar34);
    pTVar34 = TAttribute<TOptional<unsigned_short>_>::TAttribute<TOptional<unsigned_short>_>
                        (&local_26d8,&param_1->_MaxSliderValue);
    pFVar27 = SSpinBox<unsigned_short>::FArguments::MaxSliderValue(pFVar27,pTVar34);
    pTVar34 = TAttribute<TOptional<unsigned_short>_>::TAttribute<TOptional<unsigned_short>_>
                        (&local_26b8,&param_1->_MaxValue);
    pFVar27 = SSpinBox<unsigned_short>::FArguments::MaxValue(pFVar27,pTVar34);
    pTVar34 = TAttribute<TOptional<unsigned_short>_>::TAttribute<TOptional<unsigned_short>_>
                        (&local_2698,&param_1->_MinValue);
    pFVar27 = SSpinBox<unsigned_short>::FArguments::MinValue(pFVar27,pTVar34);
    pFVar27 = SSpinBox<unsigned_short>::FArguments::ContextMenuExtender
                        (pFVar27,&param_1->_ContextMenuExtender);
    pTVar30 = TAttribute<float>::TAttribute<float>(&local_2678,&param_1->_SliderExponent);
    pFVar27 = SSpinBox<unsigned_short>::FArguments::SliderExponent(pFVar27,pTVar30);
    pTVar29 = TAttribute<unsigned_short>::TAttribute<unsigned_short>
                        (&local_27b8,&param_1->_SliderExponentNeutralValue);
    pFVar27 = SSpinBox<unsigned_short>::FArguments::SliderExponentNeutralValue(pFVar27,pTVar29);
    pFVar27->_EnableWheel = param_1->_AllowWheel;
    pFVar27->_PreventThrottling = param_1->_PreventThrottling;
    pFVar27->_BroadcastValueChangesPerKey = param_1->_BroadcastValueChangesPerKey;
    pTVar34 = TAttribute<TOptional<unsigned_short>_>::TAttribute<TOptional<unsigned_short>_>
                        (&local_2818,&param_1->_WheelStep);
    pFVar27 = SSpinBox<unsigned_short>::FArguments::WheelStep(pFVar27,pTVar34);
    pFVar27 = SSpinBox<unsigned_short>::FArguments::OnBeginSliderMovement
                        (pFVar27,&param_1->_OnBeginSliderMovement);
    pFVar27 = SSpinBox<unsigned_short>::FArguments::OnEndSliderMovement
                        (pFVar27,&param_1->_OnEndSliderMovement);
    pTVar30 = TAttribute<float>::TAttribute<float>(&local_27f8,&param_1->_MinDesiredValueWidth);
    pFVar27 = SSpinBox<unsigned_short>::FArguments::MinDesiredWidth(pFVar27,pTVar30);
    pTVar35 = TAttribute<TSharedPtr<INumericTypeInterface<unsigned_short>,1>_>::
              TAttribute<TSharedPtr<INumericTypeInterface<unsigned_short>,1>_><TSharedPtr<INumericTypeInterface<unsigned_short>,1>_>
                        (&local_24c8,&this->Interface);
    pFVar27 = SSpinBox<unsigned_short>::FArguments::TypeInterface(pFVar27,pTVar35);
    local_30e8 = (FName)GetToolTipText;
    uStack_30e0 = 0;
    lStack_2b20 = (ulonglong)uStack_30dc << 0x20;
    local_2b28 = GetToolTipText;
    pFVar27 = TSlateBaseNamedArgs<SSpinBox<unsigned_short>_>::
              ToolTipText<SNumericEntryBox<unsigned_short>_>
                        ((TSlateBaseNamedArgs<SSpinBox<unsigned_short>_> *)pFVar27,this,
                         (pmf_03f41e3e *)&local_2b28);
    pTVar36 = MakeTDecl<SSpinBox<unsigned_short>,RequiredArgs::T0RequiredArgs>
                        (&local_2940,"SSpinBox<NumericType>",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Input\\SNumericEntryBox.h"
                         ,0x103,&local_30cf);
    pTVar36 = TSlateDecl<SSpinBox<unsigned_short>,RequiredArgs::T0RequiredArgs>::
              Expose<SSpinBox<unsigned_short>_>(pTVar36,&this->SpinBox);
    TSlateDecl<SSpinBox<unsigned_short>,RequiredArgs::T0RequiredArgs>::operator<<=
              (pTVar36,&local_2b18,pFVar27);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2b18.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2940._Widget.SharedReferenceCount.ReferenceController);
    if (!bVar59) {
      TAttribute<FSlateFontInfo>::~TAttribute<FSlateFontInfo>(&local_2418);
    }
    SSpinBox<unsigned_short>::FArguments::~FArguments(&local_908);
  }
  bVar13 = false;
  bVar58 = false;
  bVar59 = false;
  pFVar37 = SEditableText::FArguments::FArguments(&local_f70);
  uStack_30e0 = 0;
  local_30e8 = (FName)OnGetValueForTextBox;
  lStack_2b00 = (ulonglong)uStack_30dc << 0x20;
  local_2b08 = OnGetValueForTextBox;
  TAttribute<FText>::Bind<SNumericEntryBox<unsigned_short>_>
            (&pFVar37->_Text,this,(pmf_03f41e3e *)&local_2b08);
  local_30e8 = (FName)GetToolTipText;
  uStack_30e0 = 0;
  lStack_2af0 = (ulonglong)uStack_30dc << 0x20;
  local_2af8 = GetToolTipText;
  TAttribute<FText>::Bind<SNumericEntryBox<unsigned_short>_>
            ((TAttribute<FText> *)pFVar37,this,(pmf_03f41e3e *)&local_2af8);
  pFVar7 = param_1->_EditableTextBoxStyle;
  local_2ef8 = *(longlong *)&(pFVar7->ForegroundColor).SpecifiedColor.field0_0x0;
  lStack_2ef0 = *(longlong *)((longlong)&(pFVar7->ForegroundColor).SpecifiedColor.field0_0x0 + 8);
  local_2ee8._0_1_ = (pFVar7->ForegroundColor).ColorUseRule;
  local_2ee8._1_1_ = (pFVar7->ForegroundColor).ColorTableId;
  local_2ee8._2_2_ = *(undefined2 *)&(pFVar7->ForegroundColor).field_0x12;
  local_2ee4 = 1;
  local_2ed0 = 0;
  local_2ee0 = (undefined1  [8])0x0;
  pvStack_2ed8 = (void *)0x0;
  *(longlong *)&(pFVar37->_ColorAndOpacity).Value.SpecifiedColor.field0_0x0 = local_2ef8;
  *(longlong *)((longlong)&(pFVar37->_ColorAndOpacity).Value.SpecifiedColor.field0_0x0 + 8) =
       lStack_2ef0;
  (pFVar37->_ColorAndOpacity).Value.ColorUseRule = (undefined1)local_2ee8;
  (pFVar37->_ColorAndOpacity).Value.ColorTableId = local_2ee8._1_1_;
  *(undefined2 *)&(pFVar37->_ColorAndOpacity).Value.field_0x12 = local_2ee8._2_2_;
  (pFVar37->_ColorAndOpacity).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar37->_ColorAndOpacity).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2ee0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2ee0);
  if (pvStack_2ed8 != (void *)0x0) {
    FMemory::Free(pvStack_2ed8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2ee0);
  local_2fcf = 1;
  local_2fc8 = (undefined1  [8])0x0;
  pvStack_2fc0 = (void *)0x0;
  local_2fd0 = (uchar)EVisibility::Visible;
  if (bVar11 != false) {
    local_2fd0 = (uchar)EVisibility::Collapsed;
  }
  local_2fb8 = 0;
  *(uchar *)&pFVar37->_padding_ = local_2fd0;
  *(undefined1 *)((longlong)&pFVar37->_padding_ + 1) = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar37->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2fc8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2fc8);
  if (pvStack_2fc0 != (void *)0x0) {
    FMemory::Free(pvStack_2fc0);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2fc8);
  bVar60 = (param_1->_Font).bIsSet == false;
  if (bVar60) {
    pTVar28 = TAttribute<FSlateFontInfo>::TAttribute<FSlateFontInfo><FSlateFontInfo>
                        (&local_2398,&(param_1->_EditableTextBoxStyle->TextStyle).Font);
  }
  else {
    pTVar28 = TAttribute<FSlateFontInfo>::TAttribute<FSlateFontInfo>(&local_2318,&param_1->_Font);
  }
  FSlateFontInfo::FSlateFontInfo(&local_2658.Value,&pTVar28->Value);
  local_2658.bIsSet = pTVar28->bIsSet;
  TDelegate<FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy>
            (&local_2658.Getter,&pTVar28->Getter);
  pFVar37 = SEditableText::FArguments::Font(pFVar37,&local_2658);
  local_2ff0 = 0x101;
  local_2fd8 = 0;
  local_2fe8 = (undefined1  [8])0x0;
  pvStack_2fe0 = (void *)0x0;
  (pFVar37->_SelectAllTextWhenFocused).Value = true;
  (pFVar37->_SelectAllTextWhenFocused).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(pFVar37->_SelectAllTextWhenFocused).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2fe8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2fe8);
  if (pvStack_2fe0 != (void *)0x0) {
    FMemory::Free(pvStack_2fe0);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2fe8);
  local_3010 = 0x100;
  local_2ff8 = 0;
  local_3008 = (undefined1  [8])0x0;
  pvStack_3000 = (void *)0x0;
  (pFVar37->_ClearKeyboardFocusOnCommit).Value = false;
  (pFVar37->_ClearKeyboardFocusOnCommit).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(pFVar37->_ClearKeyboardFocusOnCommit).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3008);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3008);
  if (pvStack_3000 != (void *)0x0) {
    FMemory::Free(pvStack_3000);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3008);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar37->_OnTextChanged,
             (FWriteAccessScope *)(auStack_2c10 + 0x10));
  local_2be8 = &(pFVar37->_OnTextChanged).field_0x8;
  puVar24 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_2be8);
  if (puVar24 != (undefined8 *)0x0) {
    uStack_30dc = local_3058.SharedReferenceCount.ReferenceController._4_4_;
    local_30e8 = (FName)OnTextChanged;
    uStack_30e0 = 0;
    pTVar38 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_2ae8);
    local_2f78.Object = (SNumericEntryBox<unsigned_short> *)pTVar38->Object;
    local_2f78.SharedReferenceCount.ReferenceController =
         (pTVar38->SharedReferenceCount).ReferenceController;
    if (local_2f78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_2f78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_2f78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      (local_2f78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_2f78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar13 = true;
    bVar58 = true;
    bVar59 = true;
    *puVar24 = &
               ___7__TCommonDelegateInstanceState___A6AXAEBVFText___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    local_2e08.Object = local_2f78.Object;
    local_2e08.SharedReferenceCount.ReferenceController =
         local_2f78.SharedReferenceCount.ReferenceController;
    uVar26 = FDelegateHandle::GenerateNewID();
    puVar24[2] = uVar26;
    *puVar24 = &
               ___7__TBaseSPMethodDelegateInstance__0A_V__SNumericEntryBox_G___00__A6AXAEBVFText___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar24[3] = local_2e08.Object;
    puVar24[4] = local_2e08.SharedReferenceCount.ReferenceController;
    if (local_2e08.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_2e08.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_2e08.SharedReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(FName *)(puVar24 + 5) = local_30e8;
    puVar24[6] = CONCAT44(uStack_30dc,uStack_30e0);
  }
  if (bVar59) {
    TSharedPtr<SNumericEntryBox<unsigned_short>,1>::~TSharedPtr<SNumericEntryBox<unsigned_short>,1>
              (&local_2e08);
  }
  if (bVar58) {
    TSharedRef<SNumericEntryBox<unsigned_short>,1>::~TSharedRef<SNumericEntryBox<unsigned_short>,1>
              (&local_2f78);
  }
  if (bVar13) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2ae8.SharedReferenceCount.ReferenceController);
  }
  bVar13 = false;
  bVar58 = false;
  bVar59 = false;
  if (local_2bf0 == '\0') {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_2bf8,
               (FDestructionSentinel *)(auStack_2c10 + 0x10));
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar37->_OnTextCommitted,
             (FWriteAccessScope *)&local_2be0);
  local_2bc8 = &(pFVar37->_OnTextCommitted).field_0x8;
  puVar24 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_2bc8);
  if (puVar24 != (undefined8 *)0x0) {
    uStack_30dc = local_3058.SharedReferenceCount.ReferenceController._4_4_;
    local_30e8 = (FName)OnTextCommitted;
    uStack_30e0 = 0;
    pTVar38 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_2ad8);
    local_30a8.Object = (SNumericEntryBox<unsigned_short> *)pTVar38->Object;
    local_30a8.SharedReferenceCount.ReferenceController =
         (pTVar38->SharedReferenceCount).ReferenceController;
    if (local_30a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_30a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_30a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      (local_30a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_30a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar13 = true;
    bVar58 = true;
    bVar59 = true;
    *puVar24 = &
               ___7__TCommonDelegateInstanceState___A6AXAEBVFText__W4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    local_2f68.Object = local_30a8.Object;
    local_2f68.SharedReferenceCount.ReferenceController =
         local_30a8.SharedReferenceCount.ReferenceController;
    uVar26 = FDelegateHandle::GenerateNewID();
    puVar24[2] = uVar26;
    *puVar24 = &
               ___7__TBaseSPMethodDelegateInstance__0A_V__SNumericEntryBox_G___00__A6AXAEBVFText__W4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar24[3] = local_30a8.Object;
    puVar24[4] = local_30a8.SharedReferenceCount.ReferenceController;
    if (local_30a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_30a8.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_30a8.SharedReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(FName *)(puVar24 + 5) = local_30e8;
    puVar24[6] = CONCAT44(uStack_30dc,uStack_30e0);
  }
  if (bVar59) {
    TSharedPtr<SNumericEntryBox<unsigned_short>,1>::~TSharedPtr<SNumericEntryBox<unsigned_short>,1>
              (&local_30a8);
  }
  if (bVar58) {
    TSharedRef<SNumericEntryBox<unsigned_short>,1>::~TSharedRef<SNumericEntryBox<unsigned_short>,1>
              (&local_2f68);
  }
  if (bVar13) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2ad8.SharedReferenceCount.ReferenceController);
  }
  if (local_2be0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2be0.Accessor,&local_2be0);
  }
  local_3030 = 0x101;
  local_3018 = 0;
  local_3028 = (undefined1  [8])0x0;
  pvStack_3020 = (void *)0x0;
  (pFVar37->_SelectAllTextOnCommit).Value = true;
  (pFVar37->_SelectAllTextOnCommit).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar37->_SelectAllTextOnCommit).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3028);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3028);
  if (pvStack_3020 != (void *)0x0) {
    FMemory::Free(pvStack_3020);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3028);
  TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>::operator=
            (&pFVar37->_ContextMenuExtender,&param_1->_ContextMenuExtender);
  local_2f18 = (param_1->_Justification).Value;
  local_2f14 = (param_1->_Justification).bIsSet;
  TDelegate<enum_ETextJustify::Type___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<enum_ETextJustify::Type___cdecl(void),FDefaultDelegateUserPolicy>
            (local_2f10,&(param_1->_Justification).Getter);
  (pFVar37->_Justification).Value = local_2f18;
  (pFVar37->_Justification).bIsSet = local_2f14;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar37->_Justification).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2f10);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2f10);
  if ((void *)local_2f10._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_2f10._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2f10);
  local_2fb0 = (param_1->_MinDesiredValueWidth).Value;
  local_2fac = (param_1->_MinDesiredValueWidth).bIsSet;
  local_2fa8 = (undefined1  [8])0x0;
  pvStack_2fa0 = (void *)0x0;
  local_2f98 = 0;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)local_2fa8,local_2e30);
  (pFVar37->_MinDesiredWidth).Value = local_2fb0;
  (pFVar37->_MinDesiredWidth).bIsSet = local_2fac;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar37->_MinDesiredWidth).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2fa8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2fa8);
  if (pvStack_2fa0 != (void *)0x0) {
    FMemory::Free(pvStack_2fa0);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2fa8);
  FLLMScope::FLLMScope(&local_30c4,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_30b0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2e38,&local_30b0,true);
  TSlateDecl<SEditableText,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SEditableText,RequiredArgs::T0RequiredArgs>
            (&local_2d28,"SEditableText",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Input\\SNumericEntryBox.h"
             ,0x126,&local_30ce);
  FMemScope::~FMemScope(&local_2e38);
  FLLMScope::~FLLMScope(&local_30c4);
  if (local_2d28._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_2d28._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_2d28._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_2ac8 = (this->EditableText).Object;
  pTStack_2ac0 = (this->EditableText).SharedReferenceCount.ReferenceController;
  (this->EditableText).Object = local_2d28._Widget.Object;
  (this->EditableText).SharedReferenceCount.ReferenceController =
       local_2d28._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_2ac0);
  TSlateDecl<SEditableText,RequiredArgs::T0RequiredArgs>::operator<<=
            (&local_2d28,&local_2ab8,pFVar37);
  TSharedRef<SEditableText,1>::~TSharedRef<SEditableText,1>(&local_2ab8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2d28._Widget.SharedReferenceCount.ReferenceController);
  if (bVar60) {
    TAttribute<FSlateFontInfo>::~TAttribute<FSlateFontInfo>(&local_2398);
  }
  else {
    TAttribute<FSlateFontInfo>::~TAttribute<FSlateFontInfo>(&local_2318);
  }
  SEditableText::FArguments::~FArguments(&local_f70);
  pFVar39 = SOverlay::FArguments::FArguments(&local_1d48);
  FLLMScope::FLLMScope
            ((FLLMScope *)&local_30c8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true)
  ;
  local_30e8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope((FMemScope *)&local_30b8,&local_30e8,true);
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>
            (&local_2b60,"SOverlay",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Input\\SNumericEntryBox.h"
             ,0x135,&local_30cd);
  FMemScope::~FMemScope((FMemScope *)&local_30b8);
  FLLMScope::~FLLMScope((FLLMScope *)&local_30c8);
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::operator<<=(&local_2b60,&local_3078,pFVar39);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2b60._Widget.SharedReferenceCount.ReferenceController);
  SOverlay::FArguments::~FArguments(&local_1d48);
  if (bVar11 != false) {
    pFVar40 = SOverlay::AddSlot(local_3078.Object,&local_228,-1);
    pFVar41 = TAlignmentWidgetSlotMixin<SOverlay::FOverlaySlot>::FSlotArgumentsMixin::HAlign
                        ((FSlotArgumentsMixin *)&pFVar40->_padding_,HAlign_Fill);
    pFVar41 = TAlignmentWidgetSlotMixin<SOverlay::FOverlaySlot>::FSlotArgumentsMixin::VAlign
                        ((FSlotArgumentsMixin *)&pFVar41->_padding_,VAlign_Center);
    pTVar42 = TSharedPtr<SSpinBox<unsigned_short>,1>::ToSharedRef(&this->SpinBox,&local_2aa8);
    TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SSpinBox<unsigned_short>_>(&local_2cc0,pTVar42);
    TSlotBase<SOverlay::FOverlaySlot>::FSlotArguments::operator[]
              ((FSlotArguments *)pFVar41,&local_2cc0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2cc0.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2aa8.SharedReferenceCount.ReferenceController);
    TPanelChildren<SOverlay::FOverlaySlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
              (&local_228);
  }
  bVar59 = (param_1->_OverrideTextMargin).bIsSet == false;
  if (bVar59) {
    pTVar43 = TAttribute<FMargin>::TAttribute<FMargin><FMargin>
                        (&local_2878,&param_1->_EditableTextBoxStyle->Padding);
  }
  else {
    pTVar43 = TAttribute<FMargin>::TAttribute<FMargin>(&local_2848,&param_1->_OverrideTextMargin);
  }
  local_2c60.Data = *(FScriptContainerElement **)&pTVar43->Value;
  uStack_2c58._0_4_ = (pTVar43->Value).Right;
  uStack_2c58._4_4_ = (pTVar43->Value).Bottom;
  local_2c50 = pTVar43->bIsSet;
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> *)local_2c48,
             &pTVar43->Getter);
  if (bVar59) {
    TAttribute<FMargin>::~TAttribute<FMargin>(&local_2878);
  }
  else {
    TAttribute<FMargin>::~TAttribute<FMargin>(&local_2848);
  }
  bVar58 = false;
  bVar59 = false;
  pFVar40 = SOverlay::AddSlot(local_3078.Object,&local_188,-1);
  plVar2 = &pFVar40->_padding_;
  if ((longlong *)local_2e18 != plVar2) {
    *(undefined4 *)plVar2 = 0;
    *(undefined1 *)((longlong)&pFVar40->_padding_ + 4) = 1;
  }
  pFVar56 = (FScopedWidgetSlotArguments *)0x0;
  if (plVar2 != (longlong *)0x0) {
    pFVar56 = pFVar40;
  }
  if ((longlong *)local_2e20 != &pFVar56->_padding_) {
    *(undefined4 *)&pFVar56->_padding_ = 2;
    *(undefined1 *)((longlong)&pFVar56->_padding_ + 4) = 1;
  }
  local_2900 = local_2c50;
  pFVar40 = (FScopedWidgetSlotArguments *)0x0;
  if (pFVar56 != (FScopedWidgetSlotArguments *)0xffffffffffffffb8) {
    pFVar40 = pFVar56;
  }
  local_2910[0] = local_2c60.Data;
  local_2910[1] = (FScriptContainerElement *)uStack_2c58;
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>
            (&local_28f8,(TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> *)local_2c48);
  pFVar41 = TPaddingWidgetSlotMixin<SOverlay::FOverlaySlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)&pFVar40->_padding_,(TAttribute<FMargin> *)local_2910)
  ;
  if (((this->EditableText).Object == (SEditableText *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  local_3048._8_8_ = (this->EditableText).Object;
  local_3038 = (this->EditableText).SharedReferenceCount.ReferenceController;
  if (local_3038 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_3038->SharedReferenceCount = (atomic<int>)((int)local_3038->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (((SEditableText *)local_3048._8_8_ == (SEditableText *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pTVar57 = local_3038;
  local_3098 = (SEditableText *)local_3048._8_8_;
  local_3090.ReferenceController = local_3038;
  if (local_3038 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_3038->SharedReferenceCount = (atomic<int>)((int)local_3038->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    local_3038->SharedReferenceCount = (atomic<int>)((int)local_3038->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((SEditableText **)&pFVar41->_padding_ != &local_3098) {
    pFVar41->_padding_ = local_3048._8_8_;
    local_3098 = (SEditableText *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar41->_padding_,&local_3090);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3090.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar57);
  TSharedRef<SEditableText,1>::~TSharedRef<SEditableText,1>
            ((TSharedRef<SEditableText,1> *)(local_3048 + 8));
  TPanelChildren<SOverlay::FOverlaySlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
            (&local_188);
  local_30b8 = (FName)(param_1->_Label).Widget.Object;
  bVar60 = false;
  local_30e8 = (FName)SNullWidget::NullWidget.Object;
  bVar13 = false;
  local_3088.Object = (SWidget *)0x0;
  local_3088.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if ((local_30b8 != (FName)SNullWidget::NullWidget.Object) && (param_1->_LabelLocation == Inside))
  {
    bVar60 = true;
    bVar13 = true;
    pFVar40 = SOverlay::AddSlot(local_3078.Object,&local_e8,-1);
    pFVar41 = TAlignmentWidgetSlotMixin<SOverlay::FOverlaySlot>::FSlotArgumentsMixin::HAlign
                        ((FSlotArgumentsMixin *)&pFVar40->_padding_,HAlign_Left);
    pFVar41 = TAlignmentWidgetSlotMixin<SOverlay::FOverlaySlot>::FSlotArgumentsMixin::VAlign
                        ((FSlotArgumentsMixin *)&pFVar41->_padding_,param_1->_LabelVAlign);
    pTVar43 = TAttribute<FMargin>::TAttribute<FMargin><FMargin>(&local_2588,&param_1->_LabelPadding)
    ;
    pFVar41 = TPaddingWidgetSlotMixin<SOverlay::FOverlaySlot>::FSlotArgumentsMixin::Padding
                        ((FSlotArgumentsMixin *)&pFVar41->_padding_,pTVar43);
    TSlotBase<SOverlay::FOverlaySlot>::FSlotArguments::operator[]
              ((FSlotArguments *)pFVar41,&(param_1->_Label).Widget);
    TPanelChildren<SOverlay::FOverlaySlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
              (&local_e8);
  }
  if ((bVar11 == false) || (bVar60)) {
    pFVar44 = SBorder::FArguments::FArguments(&local_1350);
    (pFVar44->_BorderImage).bIsSet = true;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(pFVar44->_BorderImage).Getter,(FWriteAccessScope *)&local_2bc0);
    local_2ba8 = &(pFVar44->_BorderImage).Getter.field_0x8;
    puVar24 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_2ba8);
    if (puVar24 != (undefined8 *)0x0) {
      local_30a8.Object = (SNumericEntryBox<unsigned_short> *)GetBorderImage;
      local_30a8.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)
           ((ulonglong)local_3058.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
      pTVar25 = TSharedFromThis<SWidget,1>::AsShared
                          ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_2a88);
      pTVar57 = (pTVar25->SharedReferenceCount).ReferenceController;
      pSVar8 = pTVar25->Object;
      if (pTVar57 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar57->SharedReferenceCount = (atomic<int>)((int)pTVar57->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar57->SharedReferenceCount = (atomic<int>)((int)pTVar57->SharedReferenceCount + 1);
        UNLOCK();
      }
      *puVar24 = &
                 ___7__TCommonDelegateInstanceState___A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar26 = FDelegateHandle::GenerateNewID();
      puVar24[2] = uVar26;
      *puVar24 = &
                 ___7__TBaseSPMethodDelegateInstance__00__CBV__SNumericEntryBox_G___00__A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar24[3] = pSVar8;
      puVar24[4] = pTVar57;
      if (pTVar57 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar57->WeakReferenceCount = (atomic<int>)((int)pTVar57->WeakReferenceCount + 1);
        UNLOCK();
      }
      puVar24[5] = local_30a8.Object;
      puVar24[6] = local_30a8.SharedReferenceCount.ReferenceController;
      bVar58 = true;
      bVar59 = true;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar57);
      local_3048._0_8_ = pTVar57;
    }
    if (bVar59) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_3048._0_8_);
    }
    if (bVar58) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2a88.SharedReferenceCount.ReferenceController);
    }
    if (local_2bc0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2bc0.Accessor,&local_2bc0);
    }
    local_2eb8._0_1_ = (param_1->_BorderBackgroundColor).ColorUseRule;
    local_2eb8._1_1_ = (param_1->_BorderBackgroundColor).ColorTableId;
    local_2eb8._2_2_ = *(undefined2 *)&(param_1->_BorderBackgroundColor).field_0x12;
    local_2ec8 = *(longlong *)&(param_1->_BorderBackgroundColor).SpecifiedColor.field0_0x0;
    lStack_2ec0 = *(longlong *)
                   ((longlong)&(param_1->_BorderBackgroundColor).SpecifiedColor.field0_0x0 + 8);
    local_2eb4 = 1;
    local_2ea0 = 0;
    local_2eb0 = (undefined1  [8])0x0;
    pvStack_2ea8 = (void *)0x0;
    *(longlong *)&(pFVar44->_BorderBackgroundColor).Value.SpecifiedColor.field0_0x0 = local_2ec8;
    *(longlong *)((longlong)&(pFVar44->_BorderBackgroundColor).Value.SpecifiedColor.field0_0x0 + 8)
         = lStack_2ec0;
    (pFVar44->_BorderBackgroundColor).Value.ColorUseRule = (undefined1)local_2eb8;
    (pFVar44->_BorderBackgroundColor).Value.ColorTableId = local_2eb8._1_1_;
    *(undefined2 *)&(pFVar44->_BorderBackgroundColor).Value.field_0x12 = local_2eb8._2_2_;
    (pFVar44->_BorderBackgroundColor).bIsSet = true;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)
               &(pFVar44->_BorderBackgroundColor).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2eb0);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2eb0);
    if (pvStack_2ea8 != (void *)0x0) {
      FMemory::Free(pvStack_2ea8);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_2eb0);
    local_2c20._0_1_ = (param_1->_BorderForegroundColor).ColorUseRule;
    local_2c20._1_1_ = (param_1->_BorderForegroundColor).ColorTableId;
    local_2c20._2_2_ = *(undefined2 *)&(param_1->_BorderForegroundColor).field_0x12;
    local_2c30._0_8_ = *(undefined8 *)&(param_1->_BorderForegroundColor).SpecifiedColor.field0_0x0;
    local_2c30._8_8_ =
         *(undefined8 *)((longlong)&(param_1->_BorderForegroundColor).SpecifiedColor.field0_0x0 + 8)
    ;
    auStack_2c10._8_8_ = 0;
    local_2c1c = true;
    local_2c18._0_1_ = false;
    local_2c18._1_3_ = 0;
    local_2c18._4_4_ = 0;
    auStack_2c10._0_8_ = 0;
    pFVar44 = SBorder::FArguments::ForegroundColor
                        (pFVar44,(TAttribute<FSlateColor> *)&local_2c30._s_0);
    pFVar44 = SBorder::FArguments::Padding(pFVar44,0.0);
    local_2f58 = local_3078.Object;
    pTStack_2f50 = local_3078.SharedReferenceCount.ReferenceController;
    if (local_3078.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_3078.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_3078.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      (local_3078.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_3078.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar57 = (pFVar44->_Content).Widget.SharedReferenceCount.ReferenceController;
    (pFVar44->_Content).Widget.Object = (SWidget *)local_3078.Object;
    (pFVar44->_Content).Widget.SharedReferenceCount.ReferenceController =
         local_3078.SharedReferenceCount.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar57);
    this_06 = MakeTDecl<SBorder,RequiredArgs::T0RequiredArgs>
                        (&local_2928,"SBorder",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Input\\SNumericEntryBox.h"
                         ,0x167,&local_30cc);
    pTVar45 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                        (this_06,&local_2a78,pFVar44);
    local_2e88.ReferenceController = (pTVar45->SharedReferenceCount).ReferenceController;
    local_3088.Object = (SWidget *)pTVar45->Object;
    if (local_2e88.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_2e88.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_2e88.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_2e90 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&local_3088.SharedReferenceCount,&local_2e88);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2e88.ReferenceController);
    TSharedRef<SBorder,1>::~TSharedRef<SBorder,1>(&local_2a78);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2928._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3078.SharedReferenceCount.ReferenceController);
    SBorder::FArguments::~FArguments(&local_1350);
  }
  else {
    TSharedPtr<SWidget,1>::TSharedPtr<SWidget,1><SOverlay>(&local_2cb0,&local_3078);
    TSharedPtr<SWidget,1>::operator=(&local_3088,&local_2cb0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2cb0.SharedReferenceCount.ReferenceController);
    bVar13 = false;
  }
  if ((local_30b8 == local_30e8) || (bVar13)) {
    if (bVar12 == false) {
      pTVar38 = TSharedPtr<SWidget,1>::ToSharedRef(&local_3088,&local_3058);
      TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::operator[]
                ((TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *)
                 &this->_padding_,pTVar38);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)
                 CONCAT44(local_3058.SharedReferenceCount.ReferenceController._4_4_,
                          local_3058.SharedReferenceCount.ReferenceController._0_4_));
      goto LAB_143074a68;
    }
    pFVar46 = SHorizontalBox::FArguments::FArguments(&local_1938);
    pFVar49 = SHorizontalBox::Slot(&local_21b0);
    pFVar49 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar49);
    pFVar49 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::HAlign
                        ((FSlotArgumentsMixin *)&pFVar49->field_0x48,HAlign_Fill);
    pFVar49 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::VAlign
                        ((FSlotArgumentsMixin *)&pFVar49->field_0x48,VAlign_Center);
    pTVar43 = TAttribute<FMargin>::TAttribute<FMargin><FMargin>
                        (&local_24f8,&param_1->_TogglePadding);
    pFVar49 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                        ((FSlotArgumentsMixin *)&pFVar49->field_0x18,pTVar43);
    pTVar50 = TSharedPtr<SCheckBox,1>::ToSharedRef(&this->ToggleCheckBox,&local_2a28);
    TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SCheckBox>(&local_2c70,pTVar50);
    pFVar49 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                        ((FSlotArguments *)pFVar49,&local_2c70);
    pFVar46 = SHorizontalBox::FArguments::operator+(pFVar46,pFVar49);
    pFVar49 = SHorizontalBox::Slot(&local_2298);
    pTVar38 = TSharedPtr<SWidget,1>::ToSharedRef(&local_3088,&local_2a38);
    pFVar49 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                        ((FSlotArguments *)pFVar49,pTVar38);
    pFVar46 = SHorizontalBox::FArguments::operator+(pFVar46,pFVar49);
    pTVar47 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                        (&local_29b8,"SHorizontalBox",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Input\\SNumericEntryBox.h"
                         ,0x177,local_30ca);
    pTVar51 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                        (pTVar47,&local_2a48,pFVar46);
    TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SHorizontalBox>(&local_2c80,pTVar51);
    TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::operator[]
              ((TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *)
               &this->_padding_,&local_2c80);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2c80.SharedReferenceCount.ReferenceController);
    TSharedRef<SHorizontalBox,1>::~TSharedRef<SHorizontalBox,1>(&local_2a48);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_29b8._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2a38.SharedReferenceCount.ReferenceController);
    SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_2298);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2c70.SharedReferenceCount.ReferenceController);
    TSharedRef<SCheckBox,1>::~TSharedRef<SCheckBox,1>(&local_2a28);
    SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_21b0);
    SHorizontalBox::FArguments::~FArguments(&local_1938);
  }
  else {
    pFVar46 = SHorizontalBox::FArguments::FArguments(&local_1b40);
    pTVar47 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                        (&local_29d0,"SHorizontalBox",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Input\\SNumericEntryBox.h"
                         ,400,&local_30cb);
    TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
              (pTVar47,&local_3068,pFVar46);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_29d0._Widget.SharedReferenceCount.ReferenceController);
    SHorizontalBox::FArguments::~FArguments(&local_1b40);
    pFVar48 = SHorizontalBox::AddSlot(local_3068.Object,&local_2048);
    pFVar49 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth
                        ((FSlotArguments *)&pFVar48->_padding_);
    pFVar49 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::HAlign
                        ((FSlotArgumentsMixin *)&pFVar49->field_0x48,HAlign_Left);
    pFVar49 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::VAlign
                        ((FSlotArgumentsMixin *)&pFVar49->field_0x48,param_1->_LabelVAlign);
    pTVar43 = TAttribute<FMargin>::TAttribute<FMargin><FMargin>(&local_2558,&param_1->_LabelPadding)
    ;
    pFVar49 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                        ((FSlotArgumentsMixin *)&pFVar49->field_0x18,pTVar43);
    TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
              ((FSlotArguments *)pFVar49,&(param_1->_Label).Widget);
    SBoxPanel::FScopedWidgetSlotArguments<SHorizontalBox::FSlot>::
    ~FScopedWidgetSlotArguments<SHorizontalBox::FSlot>(&local_2048);
    if (bVar12 != false) {
      pFVar48 = SHorizontalBox::AddSlot(local_3068.Object,&local_1f48);
      pFVar49 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth
                          ((FSlotArguments *)&pFVar48->_padding_);
      pFVar49 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::HAlign
                          ((FSlotArgumentsMixin *)&pFVar49->field_0x48,HAlign_Fill);
      pFVar49 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::VAlign
                          ((FSlotArgumentsMixin *)&pFVar49->field_0x48,VAlign_Center);
      pTVar43 = TAttribute<FMargin>::TAttribute<FMargin><FMargin>
                          (&local_2528,&param_1->_TogglePadding);
      pFVar49 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                          ((FSlotArgumentsMixin *)&pFVar49->field_0x18,pTVar43);
      pTVar50 = TSharedPtr<SCheckBox,1>::ToSharedRef(&this->ToggleCheckBox,&local_2a68);
      TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SCheckBox>(&local_2ca0,pTVar50);
      TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                ((FSlotArguments *)pFVar49,&local_2ca0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2ca0.SharedReferenceCount.ReferenceController);
      TSharedRef<SCheckBox,1>::~TSharedRef<SCheckBox,1>(&local_2a68);
      SBoxPanel::FScopedWidgetSlotArguments<SHorizontalBox::FSlot>::
      ~FScopedWidgetSlotArguments<SHorizontalBox::FSlot>(&local_1f48);
    }
    pFVar48 = SHorizontalBox::AddSlot(local_3068.Object,&local_1e48);
    pTVar38 = TSharedPtr<SWidget,1>::ToSharedRef(&local_3088,&local_2a58);
    TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
              ((FSlotArguments *)&pFVar48->_padding_,pTVar38);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2a58.SharedReferenceCount.ReferenceController);
    SBoxPanel::FScopedWidgetSlotArguments<SHorizontalBox::FSlot>::
    ~FScopedWidgetSlotArguments<SHorizontalBox::FSlot>(&local_1e48);
    TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SHorizontalBox>(&local_2c90,&local_3068);
    TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::operator[]
              ((TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *)
               &this->_padding_,&local_2c90);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2c90.SharedReferenceCount.ReferenceController);
    TSharedRef<SHorizontalBox,1>::~TSharedRef<SHorizontalBox,1>(&local_3068);
  }
  if (bVar12 != false) {
    local_29e8 = 0;
    uStack_29e0 = 0;
    local_29d8 = 0;
    pTVar52 = TDelegate<void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy>::
              TDelegate<void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy>(&local_29e8);
    pEVar53 = TAttribute<enum_ECheckBoxState>::Get(&param_1->_ToggleChecked);
    HandleToggleCheckBoxChanged(this,*pEVar53,pTVar52);
  }
LAB_143074a68:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3088.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2c48);
  if ((void *)local_2c48._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_2c48._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2c48);
  TSharedRef<SOverlay,1>::~TSharedRef<SOverlay,1>(&local_3078);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// GetBorderImage @ 1430c7c60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FSlateBrush * __thiscall
SNumericEntryBox<unsigned_short>::GetBorderImage(SNumericEntryBox<unsigned_short> *this)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  FSlateBrush *pFVar4;
  FSharedReferencer<1> FVar5;
  SSpinBox<unsigned_short> *local_38;
  FSharedReferencer<1> local_30;
  undefined8 local_28;
  FSharedReferencer<1> local_20;
  undefined8 local_18;
  FSharedReferencer<1> local_10;
  
  local_38 = (this->SpinBox).Object;
  local_30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if ((local_38 == (SSpinBox<unsigned_short> *)0x0) ||
     ((TEnumAsByte<EVisibility::Private>)*(uchar *)((longlong)&local_38->_padding_ + 1) !=
      EVisibility::Visible.Value.Value)) {
    local_10.ReferenceController = (this->EditableText).SharedReferenceCount.ReferenceController;
    local_38 = (SSpinBox<unsigned_short> *)(this->EditableText).Object;
    if (local_10.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_10.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_10.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&local_30,&local_10);
    FVar5.ReferenceController = local_10.ReferenceController;
  }
  else {
    local_20.ReferenceController = (this->SpinBox).SharedReferenceCount.ReferenceController;
    if (local_20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_20.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_20.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_28 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&local_30,&local_20);
    FVar5.ReferenceController = local_20.ReferenceController;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar5.ReferenceController);
  if (local_38 == (SSpinBox<unsigned_short> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FSlateBrush *)(*pcVar1)();
      return pFVar4;
    }
  }
  cVar3 = (**(code **)(local_38->_padding_ + 0x1a0))(local_38);
  if (cVar3 == '\0') {
    if (local_38 == (SSpinBox<unsigned_short> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FSlateBrush *)(*pcVar1)();
        return pFVar4;
      }
    }
    if (*(char *)((longlong)&local_38->_padding_ + 3) == '\0') {
      pFVar4 = this->BorderImageNormal;
    }
    else {
      pFVar4 = this->BorderImageHovered;
    }
  }
  else {
    pFVar4 = this->BorderImageFocused;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  return pFVar4;
}

// GetCachedString @ 1430c8570

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FString * __thiscall
SNumericEntryBox<unsigned_short>::GetCachedString
          (SNumericEntryBox<unsigned_short> *this,FString *__return_storage_ptr__,ushort param_1)

{
  FScriptContainerElement *_Src;
  INumericTypeInterface<unsigned_short> *pIVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  longlong lVar5;
  ushort local_res18 [4];
  FString local_28;
  FScriptContainerElement *local_18 [2];
  
  local_res18[0] = param_1;
  if ((((this->CachedExternalValue).bIsSet == false) ||
      (param_1 != (this->CachedExternalValue).TypedValue)) ||
     (this->bCachedValueStringDirty != false)) {
    if ((this->Interface).Object == (INumericTypeInterface<unsigned_short> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FString *)(*pcVar2)();
        return pFVar4;
      }
    }
    pIVar1 = (this->Interface).Object;
    pFVar4 = (FString *)(**(code **)((longlong)*pIVar1 + 0x38))(pIVar1,local_18,local_res18);
    ::FString::FString(__return_storage_ptr__,pFVar4);
  }
  else {
    _Src = (this->CachedValueString).Data.AllocatorInstance.Data;
    local_28.Data.ArrayNum = (this->CachedValueString).Data.ArrayNum;
    lVar5 = (longlong)local_28.Data.ArrayNum;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_28.Data.ArrayNum == 0) {
      local_28.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_28.Data.ArrayNum,0,(ForAnyElementType *)&local_28,local_28.Data.ArrayNum,
                 &local_28.Data.ArrayMax);
      memcpy(local_28.Data.AllocatorInstance.Data,_Src,lVar5 * 2);
    }
    ::FString::FString(__return_storage_ptr__,&local_28);
    local_18[0] = local_28.Data.AllocatorInstance.Data;
  }
  if (local_18[0] != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18[0]);
  }
  return __return_storage_ptr__;
}

// GetToolTipText @ 1430cdef0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __thiscall
SNumericEntryBox<unsigned_short>::GetToolTipText
          (SNumericEntryBox<unsigned_short> *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  code *pcVar2;
  bool bVar3;
  TOptional<unsigned_short> *pTVar4;
  FString *pFVar5;
  TOptional<FTextFormat> *pTVar6;
  FText *pFVar7;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  FText local_48;
  FText local_38;
  FTextFormat local_28;
  FString local_18;
  
  pTVar4 = TAttribute<TOptional<unsigned_short>_>::Get(&this->ValueAttribute);
  if (pTVar4->bIsSet == true) {
    pFVar5 = GetCachedString(this,&local_18,pTVar4->TypedValue);
    FText::FromString(&local_48,pFVar5);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    pTVar6 = TAttribute<TOptional<FTextFormat>_>::Get(&this->ToolTipTextFormat);
    if (pTVar6->bIsSet == false) {
      FText::FText(__return_storage_ptr__,&local_48);
    }
    else {
      local_38.TextData.Reference = local_48.TextData.Reference;
      if (local_48.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_48.TextData.Reference + 8))
                  (local_48.TextData.Reference,local_res8);
      }
      local_38.Flags = local_48.Flags;
      pTVar6 = TAttribute<TOptional<FTextFormat>_>::Get(&this->ToolTipTextFormat);
      if (pTVar6->bIsSet == false) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pFVar7 = (FText *)(*pcVar2)();
          return pFVar7;
        }
      }
      local_28.TextFormatData.Object = (pTVar6->TypedValue).TextFormatData.Object;
      local_28.TextFormatData.SharedReferenceCount.ReferenceController =
           (pTVar6->TypedValue).TextFormatData.SharedReferenceCount.ReferenceController;
      if (local_28.TextFormatData.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_28.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_28.TextFormatData.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      FText::Format<FText>(__return_storage_ptr__,&local_28,&local_38);
    }
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
      return __return_storage_ptr__;
    }
  }
  else {
    pFVar7 = FText::GetEmpty();
    (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
    pIVar1 = (pFVar7->TextData).Reference;
    (__return_storage_ptr__->TextData).Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res18);
    }
    __return_storage_ptr__->Flags = pFVar7->Flags;
  }
  return __return_storage_ptr__;
}

// HandleToggleCheckBoxChanged @ 1430cfc90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
SNumericEntryBox<unsigned_short>::HandleToggleCheckBoxChanged
          (SNumericEntryBox<unsigned_short> *this,ECheckBoxState param_1,
          TDelegate<void___cdecl(ECheckBoxState),FDefaultDelegateUserPolicy> *param_2)

{
  SSpinBox<unsigned_short> *pSVar1;
  SEditableText *pSVar2;
  void *pvVar3;
  bool bVar4;
  char cVar5;
  longlong *plVar6;
  FDestructionSentinel local_58;
  undefined1 local_40 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_38;
  ForAnyElementType FStack_30;
  ulonglong local_28;
  
  pSVar1 = (this->SpinBox).Object;
  plVar6 = (longlong *)0x0;
  if (pSVar1 != (SSpinBox<unsigned_short> *)0x0) {
    local_40[1] = true;
    local_40[0] = param_1 == Checked;
    local_28 = 0;
    local_38.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_30.Data = (FScriptContainerElement *)0x0;
    SlateAttributePrivate::
    TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
    ::Assign((TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
              *)((longlong)&pSVar1->_padding_ + 2),(SWidget *)pSVar1,(TAttribute<bool> *)local_40,
             None);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_38,(FWriteAccessScope *)&local_58);
    if (((int)local_28 != 0) && (FStack_30.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_30.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_30,0,0,0x10);
      local_28 = local_28 & 0xffffffff00000000;
    }
    if (local_58.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
    }
    if (FStack_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_30.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_38.AccessDetector);
  }
  pSVar2 = (this->EditableText).Object;
  if (pSVar2 != (SEditableText *)0x0) {
    local_40[1] = true;
    local_40[0] = param_1 == Checked;
    local_28 = 0;
    local_38.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_30.Data = (FScriptContainerElement *)0x0;
    SlateAttributePrivate::
    TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
    ::Assign((TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
              *)((longlong)&pSVar2->_padding_ + 2),(SWidget *)pSVar2,(TAttribute<bool> *)local_40,
             None);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_38,(FWriteAccessScope *)&local_58);
    if (((int)local_28 != 0) && (FStack_30.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_30.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_30,0,0,0x10);
      local_28 = local_28 & 0xffffffff00000000;
    }
    if (local_58.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
    }
    if (FStack_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_30.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_38.AccessDetector);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,
             (FReadAccessScope *)&local_58);
  if (((*(int *)&param_2->field_0x10 == 0) || (*(longlong **)&param_2->field_0x8 == (longlong *)0x0)
      ) || (cVar5 = (**(code **)(**(longlong **)&param_2->field_0x8 + 0x38))(), cVar5 == '\0')) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_58);
  if (bVar4) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,
               (FReadAccessScope *)&local_58);
    if (*(int *)&param_2->field_0x10 != 0) {
      plVar6 = *(longlong **)&param_2->field_0x8;
    }
    (**(code **)(*plVar6 + 0x60))(plVar6,param_1);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_58);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  pvVar3 = *(void **)&param_2->field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_2);
  return;
}

// OnFocusReceived @ 1430daf60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FReply * __thiscall
SNumericEntryBox<unsigned_short>::OnFocusReceived
          (SNumericEntryBox<unsigned_short> *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FFocusEvent *param_2)

{
  EFocusCause EVar1;
  code *pcVar2;
  bool bVar3;
  FReply *pFVar4;
  FSharedReferencer<1> FVar5;
  SSpinBox<unsigned_short> *local_48;
  FSharedReferencer<1> FStack_40;
  undefined8 local_38;
  FSharedReferencer<1> local_30;
  undefined8 local_28;
  FSharedReferencer<1> local_20;
  TSharedRef<SWidget,1> local_18;
  
  FReply::FReply(__return_storage_ptr__,true);
  local_48 = (this->SpinBox).Object;
  FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if ((local_48 == (SSpinBox<unsigned_short> *)0x0) ||
     ((TEnumAsByte<EVisibility::Private>)*(undefined1 *)((longlong)&local_48->_padding_ + 1) !=
      EVisibility::Visible.Value.Value)) {
    local_20.ReferenceController = (this->EditableText).SharedReferenceCount.ReferenceController;
    local_48 = (SSpinBox<unsigned_short> *)(this->EditableText).Object;
    if (local_20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_20.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_20.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_28 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_40,&local_20);
    FVar5.ReferenceController = local_20.ReferenceController;
  }
  else {
    local_30.ReferenceController = (this->SpinBox).SharedReferenceCount.ReferenceController;
    if (local_30.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_30.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_30.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_38 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_40,&local_30);
    FVar5.ReferenceController = local_30.ReferenceController;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar5.ReferenceController);
  EVar1 = param_2->Cause;
  FVar5.ReferenceController = FStack_40.ReferenceController;
  if (EVar1 != Cleared) {
    if ((local_48 == (SSpinBox<unsigned_short> *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FReply *)(*pcVar2)();
      return pFVar4;
    }
    FVar5.ReferenceController = FStack_40.ReferenceController;
    local_18.Object = (SWidget *)local_48;
    local_18.SharedReferenceCount.ReferenceController = FStack_40.ReferenceController;
    if (FStack_40.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FStack_40.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FStack_40.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((local_48 == (SSpinBox<unsigned_short> *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FReply *)(*pcVar2)();
      return pFVar4;
    }
    FReply::SetUserFocus(__return_storage_ptr__,&local_18,EVar1,false);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar5.ReferenceController);
  return __return_storage_ptr__;
}

// OnGetValueForSpinBox @ 1430db1c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

ushort __thiscall
SNumericEntryBox<unsigned_short>::OnGetValueForSpinBox(SNumericEntryBox<unsigned_short> *this)

{
  TOptional<unsigned_short> *pTVar1;
  
  pTVar1 = TAttribute<TOptional<unsigned_short>_>::Get(&this->ValueAttribute);
  if (pTVar1->bIsSet == true) {
    return pTVar1->TypedValue;
  }
  return 0;
}

// OnGetValueForTextBox @ 1430db1f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __thiscall
SNumericEntryBox<unsigned_short>::OnGetValueForTextBox
          (SNumericEntryBox<unsigned_short> *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  code *pcVar2;
  bool bVar3;
  FText *pFVar4;
  TOptional<unsigned_short> *pTVar5;
  FString *pFVar6;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  FString local_18;
  
  if ((this->EditableText).Object == (SEditableText *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FText *)(*pcVar2)();
      return pFVar4;
    }
  }
  if ((TEnumAsByte<EVisibility::Private>)
      *(uchar *)((longlong)&((this->EditableText).Object)->_padding_ + 1) ==
      EVisibility::Visible.Value.Value) {
    pTVar5 = TAttribute<TOptional<unsigned_short>_>::Get(&this->ValueAttribute);
    if (pTVar5->bIsSet != true) {
      (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
      pIVar1 = (this->UndeterminedString).TextData.Reference;
      (__return_storage_ptr__->TextData).Reference = pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
      }
      __return_storage_ptr__->Flags = (this->UndeterminedString).Flags;
      return __return_storage_ptr__;
    }
    pFVar6 = GetCachedString(this,&local_18,pTVar5->TypedValue);
    FText::FromString(__return_storage_ptr__,pFVar6);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
      return __return_storage_ptr__;
    }
  }
  else {
    pFVar4 = FText::GetEmpty();
    (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
    pIVar1 = (pFVar4->TextData).Reference;
    (__return_storage_ptr__->TextData).Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res18);
    }
    __return_storage_ptr__->Flags = pFVar4->Flags;
  }
  return __return_storage_ptr__;
}

// OnKeyDown @ 1430dc220

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FReply * __thiscall
SNumericEntryBox<unsigned_short>::OnKeyDown
          (SNumericEntryBox<unsigned_short> *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FKeyEvent *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  FReply *pFVar6;
  TSharedRef<SWidget,1> *pTVar7;
  TSharedRef<SNumericEntryBox<unsigned_short>,1> local_f8;
  TSharedRef<SWidget,1> local_e8;
  TSharedRef<SWidget,1> local_d8;
  FReply local_c8;
  
  pTVar1 = (param_2->Key).KeyDetails.SharedReferenceCount.ReferenceController;
  FVar2 = (param_2->Key).KeyName;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (FVar2 == EKeys::Escape.KeyName) {
    if ((this->EditableText).Object == (SEditableText *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FReply *)(*pcVar3)();
        return pFVar6;
      }
    }
    cVar5 = (**(code **)(((this->EditableText).Object)->_padding_ + 0x1a0))();
    if (cVar5 != '\0') {
      FReply::FReply(&local_c8,true);
      pTVar7 = TSharedFromThis<SWidget,1>::AsShared
                         ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_e8);
      local_f8.Object = (SNumericEntryBox<unsigned_short> *)pTVar7->Object;
      local_f8.SharedReferenceCount.ReferenceController =
           (pTVar7->SharedReferenceCount).ReferenceController;
      if (local_f8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_e8.SharedReferenceCount.ReferenceController);
      local_d8.Object = (SWidget *)local_f8.Object;
      local_d8.SharedReferenceCount.ReferenceController =
           local_f8.SharedReferenceCount.ReferenceController;
      if (local_f8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar6 = FReply::SetUserFocus(&local_c8,&local_d8,Cleared,false);
      FReply::FReply(__return_storage_ptr__,pFVar6);
      TSharedRef<SNumericEntryBox<unsigned_short>,1>::
      ~TSharedRef<SNumericEntryBox<unsigned_short>,1>(&local_f8);
      FReply::~FReply(&local_c8);
      goto LAB_1430dc33a;
    }
  }
  FReply::FReply(__return_storage_ptr__,false);
LAB_1430dc33a:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// OnTextChanged @ 1430e2640

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
SNumericEntryBox<unsigned_short>::OnTextChanged
          (SNumericEntryBox<unsigned_short> *this,FText *param_1)

{
  code *pcVar1;
  char cVar2;
  TOptional<unsigned_short> *pTVar3;
  FText *pFVar4;
  longlong *plVar5;
  undefined1 local_res8 [8];
  FText local_48;
  FReadAccessScope local_38;
  FReadAccessScope local_20;
  
  pTVar3 = TAttribute<TOptional<unsigned_short>_>::Get(&this->ValueAttribute);
  if (pTVar3->bIsSet == false) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnUndeterminedValueChanged,&local_38);
    if (((*(int *)&(this->OnUndeterminedValueChanged).field_0x10 != 0) &&
        (plVar5 = *(longlong **)&(this->OnUndeterminedValueChanged).field_0x8,
        plVar5 != (longlong *)0x0)) && (cVar2 = (**(code **)(*plVar5 + 0x38))(), cVar2 != '\0')) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_38);
      local_48.TextData.Reference = (param_1->TextData).Reference;
      if (local_48.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_48.TextData.Reference + 8))
                  (local_48.TextData.Reference,local_res8);
      }
      local_48.Flags = param_1->Flags;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->OnUndeterminedValueChanged,&local_20);
      if (*(int *)&(this->OnUndeterminedValueChanged).field_0x10 == 0) {
        plVar5 = (longlong *)0x0;
      }
      else {
        plVar5 = *(longlong **)&(this->OnUndeterminedValueChanged).field_0x8;
      }
      pcVar1 = *(code **)(*plVar5 + 0x60);
      pFVar4 = FText::FText((FText *)&local_38,&local_48);
      (*pcVar1)(plVar5,pFVar4);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_20);
      if (local_48.TextData.Reference == (ITextData *)0x0) {
        return;
      }
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
      return;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_38);
  }
  SendChangesFromText(this,param_1,false,Default);
  return;
}

// OnTextCommitted @ 1430e27d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
SNumericEntryBox<unsigned_short>::OnTextCommitted
          (SNumericEntryBox<unsigned_short> *this,FText *param_1,Type param_2)

{
  code *pcVar1;
  char cVar2;
  TOptional<unsigned_short> *pTVar3;
  FText *pFVar4;
  longlong *plVar5;
  undefined1 local_res8 [8];
  FText local_48;
  FReadAccessScope local_38;
  FReadAccessScope local_20;
  
  pTVar3 = TAttribute<TOptional<unsigned_short>_>::Get(&this->ValueAttribute);
  if (pTVar3->bIsSet == false) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnUndeterminedValueCommitted,&local_38);
    if (((*(int *)&(this->OnUndeterminedValueCommitted).field_0x10 != 0) &&
        (plVar5 = *(longlong **)&(this->OnUndeterminedValueCommitted).field_0x8,
        plVar5 != (longlong *)0x0)) && (cVar2 = (**(code **)(*plVar5 + 0x38))(), cVar2 != '\0')) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_38);
      local_48.TextData.Reference = (param_1->TextData).Reference;
      if (local_48.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_48.TextData.Reference + 8))
                  (local_48.TextData.Reference,local_res8);
      }
      local_48.Flags = param_1->Flags;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->OnUndeterminedValueCommitted,&local_20);
      if (*(int *)&(this->OnUndeterminedValueCommitted).field_0x10 == 0) {
        plVar5 = (longlong *)0x0;
      }
      else {
        plVar5 = *(longlong **)&(this->OnUndeterminedValueCommitted).field_0x8;
      }
      pcVar1 = *(code **)(*plVar5 + 0x60);
      pFVar4 = FText::FText((FText *)&local_38,&local_48);
      (*pcVar1)(plVar5,pFVar4,param_2);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_20);
      if (local_48.TextData.Reference == (ITextData *)0x0) {
        return;
      }
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
      return;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_38);
  }
  SendChangesFromText(this,param_1,true,param_2);
  return;
}

// ResetCachedValueString @ 1430ea850

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
SNumericEntryBox<unsigned_short>::ResetCachedValueString(SNumericEntryBox<unsigned_short> *this)

{
  TOptional<unsigned_short> *pTVar1;
  
  pTVar1 = TAttribute<TOptional<unsigned_short>_>::Get(&this->ValueAttribute);
  if (pTVar1->bIsSet != false) {
    this->bCachedValueStringDirty = true;
  }
  return;
}

// SendChangesFromText @ 1430ed9c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
SNumericEntryBox<unsigned_short>::SendChangesFromText
          (SNumericEntryBox<unsigned_short> *this,FText *param_1,bool param_2,Type param_3)

{
  INumericTypeInterface<unsigned_short> *pIVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  TOptional<unsigned_short> *pTVar5;
  FString *pFVar6;
  FReadAccessScope *this_00;
  ushort *puVar7;
  ushort local_58 [2];
  ushort local_54;
  char local_52;
  ushort local_50;
  char local_4e;
  FReadAccessScope local_48;
  FReadAccessScope local_30;
  
  bVar4 = FText::IsEmpty(param_1);
  if (!bVar4) {
    pTVar5 = TAttribute<TOptional<unsigned_short>_>::Get(&this->ValueAttribute);
    local_4e = pTVar5->bIsSet;
    if ((bool)local_4e != false) {
      local_50 = pTVar5->TypedValue;
    }
    if (((this->Interface).Object == (INumericTypeInterface<unsigned_short> *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pIVar1 = (this->Interface).Object;
    pcVar3 = *(code **)((longlong)*pIVar1 + 0x40);
    local_58[0] = 0;
    puVar7 = &local_50;
    if (local_4e == '\0') {
      puVar7 = local_58;
    }
    pFVar6 = FText::ToString(param_1);
    (*pcVar3)(pIVar1,&local_54,pFVar6,puVar7);
    if (local_52 != '\0') {
      SetCachedString(this,local_54);
      if (param_2) {
        if ((local_52 == '\0') &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnValueCommitted
                   ,&local_30);
        if ((*(int *)&(this->OnValueCommitted).field_0x10 != 0) &&
           (plVar2 = *(longlong **)&(this->OnValueCommitted).field_0x8, plVar2 != (longlong *)0x0))
        {
          (**(code **)(*plVar2 + 0x68))(plVar2,local_54,param_3);
        }
        this_00 = &local_30;
      }
      else {
        if ((local_52 == '\0') &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnValueChanged,
                   &local_48);
        if ((*(int *)&(this->OnValueChanged).field_0x10 != 0) &&
           (plVar2 = *(longlong **)&(this->OnValueChanged).field_0x8, plVar2 != (longlong *)0x0)) {
          (**(code **)(*plVar2 + 0x68))(plVar2,local_54);
        }
        this_00 = &local_48;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (this_00);
    }
  }
  return;
}

// SetCachedString @ 1430edbf0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
SNumericEntryBox<unsigned_short>::SetCachedString
          (SNumericEntryBox<unsigned_short> *this,ushort param_1)

{
  FString *pFVar1;
  INumericTypeInterface<unsigned_short> *pIVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 *puVar6;
  ushort local_res10 [4];
  void *local_18 [2];
  
  if ((((this->CachedExternalValue).bIsSet == false) ||
      ((this->CachedExternalValue).TypedValue != param_1)) ||
     (this->bCachedValueStringDirty != false)) {
    if ((TOptional<unsigned_short> *)local_res10 != &this->CachedExternalValue) {
      (this->CachedExternalValue).TypedValue = param_1;
      (this->CachedExternalValue).bIsSet = true;
    }
    local_res10[0] = param_1;
    if ((this->Interface).Object == (INumericTypeInterface<unsigned_short> *)0x0) {
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
    pIVar2 = (this->Interface).Object;
    puVar6 = (undefined8 *)(**(code **)((longlong)*pIVar2 + 0x38))(pIVar2,local_18,local_res10);
    pFVar1 = &this->CachedValueString;
    if (pFVar1 != (FString *)puVar6) {
      pFVar3 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)*puVar6;
      *puVar6 = 0;
      (this->CachedValueString).Data.ArrayNum = *(int *)(puVar6 + 1);
      (this->CachedValueString).Data.ArrayMax = *(int *)((longlong)puVar6 + 0xc);
      puVar6[1] = 0;
    }
    if (local_18[0] != (void *)0x0) {
      FMemory::Free(local_18[0]);
    }
    this->bCachedValueStringDirty = false;
  }
  return;
}

// SupportsKeyboardFocus @ 1430fb090

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
SNumericEntryBox<unsigned_short>::SupportsKeyboardFocus(SNumericEntryBox<unsigned_short> *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SEditableText *pSVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  
  pTVar1 = (this->EditableText).SharedReferenceCount.ReferenceController;
  pSVar2 = (this->EditableText).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar2 == (SEditableText *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  uVar5 = (**(code **)(pSVar2->_padding_ + 0x198))(pSVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return (bool)uVar5;
}

// Tick @ 143105290

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
SNumericEntryBox<unsigned_short>::Tick
          (SNumericEntryBox<unsigned_short> *this,FGeometry *param_1,double param_2,float param_3)

{
  bool bVar1;
  TOptional<unsigned_short> *pTVar2;
  SSpinBox<unsigned_short> *pSVar3;
  SEditableText *pSVar4;
  uchar *puVar5;
  code *pcVar6;
  TAttribute<EVisibility> local_88;
  uchar local_68 [8];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  TAttribute<EVisibility> local_48;
  uchar local_28 [8];
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  pTVar2 = TAttribute<TOptional<unsigned_short>_>::Get(&this->ValueAttribute);
  if (pTVar2->bIsSet == true) {
    SetCachedString(this,pTVar2->TypedValue);
  }
  pSVar3 = (this->SpinBox).Object;
  if (pSVar3 != (SSpinBox<unsigned_short> *)0x0) {
    if (pTVar2->bIsSet == true) {
      if ((TEnumAsByte<EVisibility::Private>)*(uchar *)((longlong)&pSVar3->_padding_ + 1) ==
          EVisibility::Visible.Value.Value) {
        return;
      }
      pSVar3 = TSharedPtr<SSpinBox<unsigned_short>,1>::operator->(&this->SpinBox);
      local_88.Value = (EVisibility)EVisibility::Visible.Value.Value;
      local_88.bIsSet = true;
      local_88.Getter._16_8_ = 0;
      local_88.Getter._0_8_ = 0;
      local_88.Getter._8_8_ = 0;
      SCompoundWidget::SetVisibility((SCompoundWidget *)pSVar3,&local_88);
      pSVar4 = TSharedPtr<SEditableText,1>::operator->(&this->EditableText);
      puVar5 = local_68;
      local_68[1] = 1;
      local_60 = 0;
      uStack_58 = 0;
      pcVar6 = *(code **)(pSVar4->_padding_ + 0x1c8);
      local_68[0] = (uchar)EVisibility::Collapsed.Value.Value;
      local_50 = 0;
    }
    else {
      local_48.Value = (EVisibility)EVisibility::Collapsed.Value.Value;
      local_48.bIsSet = true;
      local_48.Getter._16_8_ = 0;
      local_48.Getter._0_8_ = 0;
      local_48.Getter._8_8_ = 0;
      SCompoundWidget::SetVisibility((SCompoundWidget *)pSVar3,&local_48);
      if (((this->EditableText).Object == (SEditableText *)0x0) &&
         (bVar1 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar1)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pSVar4 = (this->EditableText).Object;
      puVar5 = local_28;
      local_28[1] = 1;
      local_20 = 0;
      uStack_18 = 0;
      pcVar6 = *(code **)(pSVar4->_padding_ + 0x1c8);
      local_28[0] = (uchar)EVisibility::Visible.Value.Value;
      local_10 = 0;
    }
    (*pcVar6)(pSVar4,puVar5);
  }
  return;
}

