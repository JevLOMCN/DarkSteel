// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 13

// ~STableColumnHeader @ 142a18e60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall STableColumnHeader::~STableColumnHeader(STableColumnHeader *this)

{
  void *pvVar1;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MenuOverlay).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ComboButton).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ContextMenuContent).SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->CanManuallySort).Getter);
  pvVar1 = *(void **)&(this->CanManuallySort).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->CanManuallySort).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnSortModeChanged);
  pvVar1 = *(void **)&(this->OnSortModeChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSortModeChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->IsSorting).Getter);
  pvVar1 = *(void **)&(this->IsSorting).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->IsSorting).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->SortPriority).Getter);
  pvVar1 = *(void **)&(this->SortPriority).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->SortPriority).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->SortMode).Getter);
  pvVar1 = *(void **)&(this->SortMode).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->SortMode).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->InitialSortMode).Getter);
  pvVar1 = *(void **)&(this->InitialSortMode).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->InitialSortMode).Getter);
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  return;
}

// ApplySortMode @ 142a1b4a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall STableColumnHeader::ApplySortMode(STableColumnHeader *this)

{
  longlong *plVar1;
  char cVar2;
  FModifierKeysState FVar3;
  FSlateApplication *pFVar4;
  undefined6 extraout_var;
  Type *pTVar5;
  Type *pTVar6;
  bool *pbVar7;
  TAttribute<EColumnSortMode::Type> *this_00;
  longlong *plVar8;
  Type TVar9;
  Type TVar10;
  ushort uVar11;
  FReadAccessScope local_38;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnSortModeChanged,
             &local_38);
  if (((*(int *)&(this->OnSortModeChanged).field_0x10 == 0) ||
      (plVar8 = *(longlong **)&(this->OnSortModeChanged).field_0x8, plVar8 == (longlong *)0x0)) ||
     (cVar2 = (**(code **)(*plVar8 + 0x38))(), cVar2 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_38);
    return;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_38);
  pFVar4 = FSlateApplication::Get();
  FSlateApplication::CloseToolTip(pFVar4);
  pFVar4 = FSlateApplication::Get();
  FVar3 = FSlateApplication::GetModifierKeys(pFVar4);
  uVar11 = *(ushort *)CONCAT62(extraout_var,FVar3) & 3;
  pTVar5 = TAttribute<enum_EColumnSortPriority::Type>::Get(&this->SortPriority);
  this_00 = &this->SortMode;
  TVar9 = *pTVar5;
  pTVar6 = TAttribute<enum_EColumnSortMode::Type>::Get(this_00);
  if ((*pTVar6 == None) &&
     (pbVar7 = TAttribute<bool>::Get(&this->CanManuallySort), *pbVar7 == false)) {
    this_00 = &this->InitialSortMode;
  }
  pTVar6 = TAttribute<enum_EColumnSortMode::Type>::Get(this_00);
  plVar8 = (longlong *)0x0;
  if (*pTVar6 == None) {
    if (uVar11 != 0) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &(this->SortPriority).Getter,&local_38);
      if (((*(int *)&(this->SortPriority).Getter.field_0x10 != 0) &&
          (plVar1 = *(longlong **)&(this->SortPriority).Getter.field_0x8, plVar1 != (longlong *)0x0)
          ) && (cVar2 = (**(code **)(*plVar1 + 0x38))(), cVar2 != '\0')) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_38);
        pTVar6 = TAttribute<enum_EColumnSortMode::Type>::Get(&this->InitialSortMode);
        TVar10 = *pTVar6;
        TVar9 = Secondary;
        goto LAB_142a1b609;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_38);
    }
    pTVar6 = TAttribute<enum_EColumnSortMode::Type>::Get(&this->InitialSortMode);
    TVar10 = *pTVar6;
    TVar9 = None;
  }
  else {
    if ((uVar11 == 0) && (TVar9 == Secondary)) {
      TVar9 = None;
    }
    TVar10 = (*pTVar6 != Descending) + Ascending;
  }
LAB_142a1b609:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnSortModeChanged,
             &local_38);
  if (*(int *)&(this->OnSortModeChanged).field_0x10 != 0) {
    plVar8 = *(longlong **)&(this->OnSortModeChanged).field_0x8;
  }
  (**(code **)(*plVar8 + 0x60))(plVar8,TVar9,&this->ColumnId,TVar10);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_38);
  return;
}

// Construct @ 142a1d8b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
STableColumnHeader::Construct
          (STableColumnHeader *this,FArguments *param_1,FColumn *param_2,
          TSharedRef<SWidget,1> *param_3,FMargin *param_4)

{
  byte *pbVar1;
  atomic<int> *paVar2;
  TReferenceControllerBase<1> *pTVar3;
  SWidget *pSVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  SSpacer *pSVar7;
  SBorder *pSVar8;
  code *pcVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  FSharedReferencer<1> FVar15;
  FSharedReferencer<1> FVar16;
  bool bVar17;
  char cVar18;
  byte bVar19;
  FString *pFVar20;
  FText *pFVar21;
  FArguments *pFVar22;
  FScopedWidgetSlotArguments *pFVar23;
  FArguments *pFVar24;
  TSharedRef<SHorizontalBox,1> *pTVar25;
  FArguments *pFVar26;
  FArguments *pFVar27;
  ISlateStyle *pIVar28;
  FTextBlockStyle *pFVar29;
  STextBlock *pSVar30;
  STextBlock *pSVar31;
  TSharedRef<SBox,1> *pTVar32;
  FSlot *pFVar33;
  FSlotArguments *pFVar34;
  FSlotArguments *pFVar35;
  FArguments *pFVar36;
  TSharedRef<SImage,1> *pTVar37;
  FArguments *pFVar38;
  FName *pFVar39;
  FSlateBrush *pFVar40;
  SCircularThrobber *pSVar41;
  SCircularThrobber *pSVar42;
  TSharedRef<SOverlay,1> *pTVar43;
  bool *pbVar44;
  SHorizontalBox *pSVar45;
  FScopedWidgetSlotArguments<SHorizontalBox::FSlot> *pFVar46;
  TAttribute<float> *pTVar47;
  FArguments *pFVar48;
  FSlateColor *pFVar49;
  TAttribute<FSlateColor> *pTVar50;
  TAttribute<FMargin> *pTVar51;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> *this_00;
  TSharedRef<SButton,1> *pTVar52;
  FSlotArguments *pFVar53;
  FArguments *pFVar54;
  FArguments *pFVar55;
  FButtonStyle *pFVar56;
  FArguments *pFVar57;
  TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs> *this_01;
  TSharedRef<SSpacer,1> *pTVar58;
  SComboButton *pSVar59;
  SComboButton *pSVar60;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> *this_02;
  TSharedRef<SBorder,1> *pTVar61;
  FName FVar62;
  longlong *plVar63;
  FMemScope FVar64;
  undefined8 *puVar65;
  TSharedRef<SWidget_const_,1> *pTVar66;
  ulong64 uVar67;
  TAttribute<EVisibility> *pTVar68;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> *this_03;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> *this_04;
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> *pTVar69;
  TSharedRef<SWidget,1> *pTVar70;
  TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy> *pTVar71;
  TAttribute<FText> *pTVar72;
  TAttribute<FText> *this_05;
  undefined1 *puVar73;
  SBox *pSVar74;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *pTVar75;
  FSlotArguments *pFVar76;
  undefined1 auStackY_4788 [32];
  T0RequiredArgs local_4758;
  T0RequiredArgs local_4757;
  T0RequiredArgs local_4756;
  T0RequiredArgs local_4755;
  T0RequiredArgs local_4754;
  T0RequiredArgs local_4753;
  T0RequiredArgs local_4752;
  T0RequiredArgs local_4751;
  T0RequiredArgs local_4750;
  T0RequiredArgs local_474f;
  T0RequiredArgs local_474e;
  T0RequiredArgs local_474d;
  T0RequiredArgs local_474c;
  T0RequiredArgs local_474b;
  T0RequiredArgs local_474a;
  T0RequiredArgs local_4749;
  T0RequiredArgs local_4748 [8];
  FName local_4740;
  float local_4738;
  FLLMScope local_4734;
  FLLMScope local_4730;
  FLLMScope local_472c;
  FLLMScope local_4728;
  FLLMScope local_4724;
  FLLMScope local_4720;
  FLLMScope local_471c;
  FLLMScope local_4718;
  FLLMScope local_4714;
  FLLMScope local_4710;
  FLLMScope local_470c;
  FName local_4708;
  undefined4 uStack_4700;
  uint uStack_46fc;
  FArguments *local_46f8;
  undefined4 uStack_46f0;
  uint uStack_46ec;
  TSharedPtr<SHorizontalBox,1> local_46e8;
  TSharedRef<SWidget,1> local_46d8;
  undefined1 local_46c8 [4];
  float local_46c4;
  float local_46c0 [2];
  SHorizontalBox *local_46b8;
  FSharedReferencer<1> local_46b0;
  SImage *local_46a8;
  FSharedReferencer<1> local_46a0;
  TSharedRef<SWidget,1> local_4698;
  TSlateDecl<SComboButton,RequiredArgs::T0RequiredArgs> local_4688;
  FSlotArguments *local_4670;
  FArguments *local_4668;
  FName local_4660;
  FMemScope local_4658;
  FName local_4650;
  FMemScope local_4648 [2];
  FArguments *local_4638;
  undefined4 uStack_4630;
  uint uStack_462c;
  TSlateDecl<SCircularThrobber,RequiredArgs::T0RequiredArgs> local_4628;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_4610;
  SWidget *local_45f8;
  TReferenceControllerBase<1> *pTStack_45f0;
  SWidget *local_45e8;
  TReferenceControllerBase<1> *pTStack_45e0;
  TSharedRef<SWidget,1> local_45d8;
  undefined8 local_45c8;
  undefined8 uStack_45c0;
  undefined1 local_45b8;
  undefined1 local_45b0 [8];
  ForAnyElementType FStack_45a8;
  ulonglong local_45a0;
  FName local_4598;
  undefined4 uStack_4590;
  uint uStack_458c;
  SBox *local_4588;
  FSharedReferencer<1> FStack_4580;
  SBorder *local_4578;
  TReferenceControllerBase<1> *pTStack_4570;
  undefined1 local_4568 [24];
  undefined1 local_4550 [24];
  FText local_4538;
  undefined1 local_4528 [8];
  undefined1 local_4520 [8];
  void *pvStack_4518;
  undefined8 local_4510;
  IToolTip *local_4508;
  FSharedReferencer<1> local_4500;
  undefined1 local_44f8;
  undefined1 local_44f0 [24];
  FName local_44d8;
  FMemScope local_44d0;
  FSlotArguments *local_44c8;
  FSlotArguments *local_44c0;
  FName local_44b8;
  FMemScope local_44b0;
  FName local_44a8;
  FMemScope local_44a0;
  FName local_4498;
  FMemScope local_4490;
  FMemScope local_4488;
  FName local_4480;
  FMemScope local_4478;
  undefined4 local_4470 [2];
  FName local_4468;
  FName local_4460;
  FName local_4458;
  FName local_4450;
  undefined1 local_4448 [8];
  FName local_4440;
  undefined1 local_4438 [8];
  undefined4 local_4430 [2];
  FMemScope local_4428 [2];
  TSharedRef<SOverlay,1> local_4418;
  undefined4 local_4408 [2];
  EHorizontalAlignment local_4400 [2];
  EVerticalAlignment local_43f8 [2];
  undefined4 local_43f0 [2];
  undefined1 local_43e8 [8];
  FMemScope local_43e0;
  FName local_43d8;
  FMemScope local_43d0;
  FText local_43c8;
  bool local_43b8;
  undefined1 local_43b0 [24];
  undefined8 local_4398;
  undefined8 uStack_4390;
  undefined1 local_4388;
  undefined1 local_4380 [8];
  void *pvStack_4378;
  undefined8 local_4370;
  FText local_4368;
  undefined1 local_4358;
  undefined1 local_4350 [24];
  FText local_4338;
  undefined1 local_4328 [8];
  undefined1 local_4320 [24];
  undefined8 local_4308;
  undefined8 uStack_4300;
  undefined1 local_42f8;
  undefined1 local_42f0 [8];
  void *pvStack_42e8;
  undefined8 local_42e0;
  TAttribute<FOptionalSize> local_42d8;
  TAttribute<float> local_42b8;
  TAttribute<FOptionalSize> local_4298;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_4278;
  undefined8 local_4260;
  undefined8 uStack_4258;
  undefined4 local_4250;
  TSharedRef<SBorder,1> local_4248;
  FString local_4238;
  TSharedRef<SWidget,1> local_4228;
  TSharedRef<SWidget,1> local_4218;
  TSharedRef<SWidget,1> local_4208;
  TSharedRef<SWidget,1> local_41f8;
  TSharedRef<SWidget,1> local_41e8;
  TSharedRef<SWidget,1> local_41d8;
  TAttribute<FSlateBrush_const_*> local_41c8;
  FLinearColor_u_0 local_41a0;
  undefined4 local_4190;
  undefined1 local_418c;
  undefined8 local_4188;
  undefined8 uStack_4180;
  undefined8 local_4178;
  FDestructionSentinel local_4170;
  TAttribute<FMargin> local_4158;
  TAttribute<FMargin> local_4128;
  TAttribute<FMargin> local_40f8;
  TAttribute<FMargin> local_40c8;
  TVector2<double>_u_0 local_4098;
  undefined1 local_4088;
  undefined8 local_4080;
  undefined8 uStack_4078;
  undefined8 local_4070;
  TSharedRef<SBox,1> local_4068;
  TSharedRef<SHorizontalBox,1> local_4058;
  TSharedRef<SOverlay,1> local_4048;
  TSharedRef<SImage,1> local_4038;
  code *local_4028;
  longlong lStack_4020;
  TSharedRef<SButton,1> local_4018;
  code *local_4008;
  longlong lStack_4000;
  code *local_3ff8;
  longlong lStack_3ff0;
  SComboButton *local_3fe8;
  TReferenceControllerBase<1> *pTStack_3fe0;
  SWidget *local_3fd8;
  TReferenceControllerBase<1> *pTStack_3fd0;
  TSharedRef<SWidget_const_,1> local_3fc8;
  TSharedRef<SOverlay,1> local_3fb8;
  TSharedRef<SBox,1> local_3fa8;
  TSharedRef<SImage,1> local_3f98;
  TSharedRef<SBorder,1> local_3f88;
  TSharedRef<SSpacer,1> local_3f78;
  code *local_3f68;
  longlong lStack_3f60;
  SWidget *local_3f58;
  TReferenceControllerBase<1> *pTStack_3f50;
  code *local_3f48;
  longlong lStack_3f40;
  code *local_3f38;
  longlong lStack_3f30;
  TSharedRef<SBox,1> local_3f28;
  code *local_3f18;
  longlong lStack_3f10;
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> local_3f08;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_3ef0;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_3ed8;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_3ec0;
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> local_3ea8;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_3e90;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_3e78;
  SWidget *local_3e60;
  TReferenceControllerBase<1> *pTStack_3e58;
  TSharedRef<SHorizontalBox,1> local_3e50;
  FString local_3e40;
  FText local_3e30;
  undefined1 local_3e20 [24];
  undefined1 local_3e08 [24];
  undefined1 local_3df0 [24];
  undefined1 local_3dd8 [24];
  undefined1 local_3dc0 [24];
  undefined1 local_3da8 [24];
  undefined1 local_3d90 [24];
  undefined1 local_3d78 [24];
  TWriteLockedDelegateAllocation<FNotThreadSafeDelegateMode> local_3d60;
  TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs> local_3d40;
  FReadAccessScope local_3d28;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_3d10;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_3cf8;
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> local_3ce0;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_3cc8;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_3cb0;
  TSharedRef<SWidget,1> local_3c98;
  TAttribute<FText> local_3c88;
  FSlateColor local_3c58;
  TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy> local_3c40;
  TAttribute<EVisibility> local_3c28;
  TAttribute<float> local_3c08;
  TAttribute<float> local_3be8;
  TAttribute<FSlateColor> local_3bc8;
  TAttribute<FMargin> local_3b98;
  FSlotArguments local_3b68;
  FSlotArguments local_3b08;
  FSlotArguments local_3aa8;
  FSlotArguments local_3a48;
  FSlotArguments local_39e8;
  FSlotArguments local_3900;
  FArguments local_3818;
  FArguments local_3610;
  FArguments local_3408;
  FArguments local_3200;
  undefined1 local_2ff8 [552];
  undefined1 local_2dd0 [24];
  FScopedWidgetSlotArguments<SHorizontalBox::FSlot> local_2db8;
  FScopedWidgetSlotArguments<SHorizontalBox::FSlot> local_2cb8;
  FScopedWidgetSlotArguments<SHorizontalBox::FSlot> local_2bb8;
  FScopedWidgetSlotArguments<SHorizontalBox::FSlot> local_2ab8;
  FArguments local_29b8;
  FArguments local_27b0;
  FArguments local_2588;
  FArguments local_22e0;
  FArguments local_2038;
  FArguments local_1d00;
  FArguments local_19c0;
  FArguments local_1680;
  FArguments local_1340;
  FArguments local_f60;
  FArguments local_b80;
  FArguments local_640;
  FScopedWidgetSlotArguments local_e8;
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x142a1d8d2;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_4788;
  pFVar76 = (FSlotArguments *)0x0;
  local_4738 = 0.0;
  if ((param_1->_Style == (FTableColumnHeaderStyle *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("InArgs._Style",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Views\\SHeaderRow.cpp"
                          ,0x3e,L""), bVar17)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  this->Style = param_1->_Style;
  this->ColumnId = param_2->ColumnId;
  (this->InitialSortMode).Value = (param_2->InitialSortMode).Value;
  (this->InitialSortMode).bIsSet = (param_2->InitialSortMode).bIsSet;
  TDelegate<enum_EColumnSortMode::Type___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->InitialSortMode).Getter,&(param_2->InitialSortMode).Getter);
  (this->SortMode).Value = (param_2->SortMode).Value;
  (this->SortMode).bIsSet = (param_2->SortMode).bIsSet;
  TDelegate<enum_EColumnSortMode::Type___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&(this->SortMode).Getter,&(param_2->SortMode).Getter);
  (this->SortPriority).Value = (param_2->SortPriority).Value;
  (this->SortPriority).bIsSet = (param_2->SortPriority).bIsSet;
  TDelegate<enum_EColumnSortPriority::Type___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&(this->SortPriority).Getter,&(param_2->SortPriority).Getter)
  ;
  (this->IsSorting).Value = (param_2->IsSorting).Value;
  (this->IsSorting).bIsSet = (param_2->IsSorting).bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->IsSorting).Getter,&(param_2->IsSorting).Getter);
  (this->CanManuallySort).Value = (param_2->CanManuallySort).Value;
  (this->CanManuallySort).bIsSet = (param_2->CanManuallySort).bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->CanManuallySort).Getter,&(param_2->CanManuallySort).Getter);
  TDelegate<void___cdecl(enum_EColumnSortPriority::Type,FName_const_&,enum_EColumnSortMode::Type),FDefaultDelegateUserPolicy>
  ::CopyFrom<FDefaultDelegateUserPolicy>(&this->OnSortModeChanged,&param_2->OnSortModeChanged);
  pTVar3 = (param_3->SharedReferenceCount).ReferenceController;
  pSVar4 = param_3->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_3f58 = (this->ContextMenuContent).Object;
  pTStack_3f50 = (this->ContextMenuContent).SharedReferenceCount.ReferenceController;
  (this->ContextMenuContent).Object = pSVar4;
  (this->ContextMenuContent).SharedReferenceCount.ReferenceController = pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_3f50);
  this->ComboVisibility = param_2->HeaderComboVisibility;
  this->bHasBeenManuallySorted = false;
  local_4568._0_8_ = (param_2->DefaultText).Value.TextData.Reference;
  if ((ITextData *)local_4568._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_4568._0_8_ + 8))(local_4568._0_8_,local_4448);
  }
  local_4568._8_4_ = (param_2->DefaultText).Value.Flags;
  local_4568[0x10] = (param_2->DefaultText).bIsSet;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_4550,
             &(param_2->DefaultText).Getter);
  if (((param_2->HeaderContent).Widget.Object == SNullWidget::NullWidget.Object) &&
     ((param_2->DefaultText).bIsSet == false)) {
    pFVar20 = ::FName::ToString(&param_2->ColumnId,&local_3e40);
    ::FString::ConcatFC(&local_4238,pFVar20,L"[LabelMissing]");
    pFVar21 = FText::FromString(&local_3e30,&local_4238);
    TAttribute<FText>::TAttribute<FText>(&local_3c88,pFVar21);
    TAttribute<FText>::operator=((TAttribute<FText> *)local_4568,&local_3c88);
    TAttribute<FText>::~TAttribute<FText>(&local_3c88);
    FText::~FText(&local_3e30);
    ::FString::~FString(&local_4238);
    ::FString::~FString(&local_3e40);
  }
  pFVar22 = SOverlay::FArguments::FArguments(&local_3818);
  FLLMScope::FLLMScope(&local_4734,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_43d8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_43d0,&local_43d8,true);
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>
            (&local_3f08,"SOverlay",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Views\\SHeaderRow.cpp"
             ,0x59,&local_4758);
  FMemScope::~FMemScope(&local_43d0);
  FLLMScope::~FLLMScope(&local_4734);
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::operator<<=(&local_3f08,&local_4418,pFVar22);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3f08._Widget.SharedReferenceCount.ReferenceController);
  DestructItems<SOverlay::FOverlaySlot::FSlotArguments,int>
            ((FSlotArguments *)local_3818._Slots.AllocatorInstance.Data,local_3818._Slots.ArrayNum);
  if ((FSlotArguments *)local_3818._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_3818._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_3818);
  pFVar23 = SOverlay::AddSlot(local_4418.Object,&local_e8,0);
  pFVar24 = SHorizontalBox::FArguments::FArguments(&local_3610);
  FLLMScope::FLLMScope(&local_4730,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_44d8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_44d0,&local_44d8,true);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
            (&local_4278,"SHorizontalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Views\\SHeaderRow.cpp"
             ,0x5d,&local_4757);
  FMemScope::~FMemScope(&local_44d0);
  FLLMScope::~FLLMScope(&local_4730);
  if (local_4278._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_4278._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_4278._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_46e8.SharedReferenceCount.ReferenceController =
       local_4278._Widget.SharedReferenceCount.ReferenceController;
  local_46e8.Object = local_4278._Widget.Object;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  pTVar25 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_4278,&local_3e50,pFVar24);
  pTVar3 = (pTVar25->SharedReferenceCount).ReferenceController;
  local_46b8 = pTVar25->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_46b0.ReferenceController = pTVar3;
  if ((SHorizontalBox **)&pFVar23->_padding_ != &local_46b8) {
    pFVar23->_padding_ = (longlong)local_46b8;
    local_46b8 = (SHorizontalBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar23->_padding_,&local_46b0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_46b0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3e50.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4278._Widget.SharedReferenceCount.ReferenceController);
  DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_3610._Slots.AllocatorInstance.Data,local_3610._Slots.ArrayNum);
  if ((FSlotArguments *)local_3610._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_3610._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_3610);
  TPanelChildren<SOverlay::FOverlaySlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
            (&local_e8);
  local_46d8.SharedReferenceCount.ReferenceController =
       (param_2->HeaderContent).Widget.SharedReferenceCount.ReferenceController;
  pSVar74 = (SBox *)(param_2->HeaderContent).Widget.Object;
  if (local_46d8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_46d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_46d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_46d8.Object = (SWidget *)pSVar74;
  if (pSVar74 == (SBox *)SNullWidget::NullWidget.Object) {
    pFVar26 = SBox::FArguments::FArguments(&local_1d00);
    local_4298.Value.Size = 24.0;
    local_4298.bIsSet = true;
    local_4298.Getter._16_8_ = 0;
    local_4298.Getter._0_8_ = 0;
    local_4298.Getter._8_8_ = 0;
    pFVar26 = SBox::FArguments::HeightOverride(pFVar26,&local_4298);
    local_45b8 = 1;
    local_45a0 = 0;
    local_45c8 = 0;
    uStack_45c0 = 0;
    (pFVar26->_Padding).bIsSet = true;
    local_45b0 = (undefined1  [8])0x0;
    FStack_45a8.Data = (FScriptContainerElement *)0x0;
    (pFVar26->_Padding).Value.Left = 0.0;
    (pFVar26->_Padding).Value.Top = 0.0;
    (pFVar26->_Padding).Value.Right = 0.0;
    (pFVar26->_Padding).Value.Bottom = 0.0;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar26->_Padding).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_45b0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_45b0,
               (FWriteAccessScope *)&local_4170);
    if (((int)local_45a0 != 0) && (FStack_45a8.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_45a8.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_45a8,0,0,0x10);
      local_45a0 = local_45a0 & 0xffffffff00000000;
    }
    if (local_4170.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4170.Accessor,&local_4170);
    }
    if (FStack_45a8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_45a8.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_45b0);
    pFVar26->_VAlign = VAlign_Center;
    pFVar27 = STextBlock::FArguments::FArguments(&local_640);
    ::FName::FName(&local_4460,"NormalText");
    pIVar28 = FAppStyle::Get();
    pFVar29 = (FTextBlockStyle *)
              (**(code **)((longlong)*pIVar28 + 0xa0))(pIVar28,FTextBlockStyle::TypeName);
    if (pFVar29 == (FTextBlockStyle *)0x0) {
      pFVar29 = FTextBlockStyle::GetDefault();
    }
    pFVar27->_TextStyle = pFVar29;
    local_43c8.TextData.Reference = (ITextData *)local_4568._0_8_;
    if ((ITextData *)local_4568._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_4568._0_8_ + 8))(local_4568._0_8_,local_4438);
    }
    local_43c8.Flags = local_4568._8_4_;
    local_43b8 = local_4568[0x10];
    TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>
              ((TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_43b0,
               (TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_4550);
    FText::operator=(&(pFVar27->_Text).Value,&local_43c8);
    (pFVar27->_Text).bIsSet = local_43b8;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar27->_Text).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_43b0);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_43b0);
    if ((void *)local_43b0._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_43b0._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_43b0);
    if (local_43c8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_43c8.TextData.Reference + 0x10))();
    }
    if ((TOptional<ETextOverflowPolicy> *)local_46c8 != &pFVar27->_OverflowPolicy) {
      (pFVar27->_OverflowPolicy).TypedValue = param_2->OverflowPolicy;
      (pFVar27->_OverflowPolicy).bIsSet = true;
    }
    FLLMScope::FLLMScope(&local_472c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_4468 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_4490,&local_4468,true);
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
              (&local_4610,"STextBlock",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Views\\SHeaderRow.cpp"
               ,0x69,&local_4756);
    FMemScope::~FMemScope(&local_4490);
    FLLMScope::~FLLMScope(&local_472c);
    pSVar30 = TSharedPtr<STextBlock,1>::operator->(&local_4610._Widget);
    SWidget::SWidgetConstruct((SWidget *)pSVar30,(FSlateBaseNamedArgs *)pFVar27);
    pSVar30 = local_4610._Widget.Object;
    STextBlock::Construct(local_4610._Widget.Object,pFVar27);
    pSVar31 = TSharedPtr<STextBlock,1>::operator->(&local_4610._Widget);
    if ((pSVar31->_padding_ & 0x10) == 0) {
      cVar18 = (**(code **)(pSVar31->_padding_ + 0x228))(pSVar31);
      bVar19 = 0;
      if (cVar18 != '\0') goto LAB_142a1e14d;
    }
    else {
LAB_142a1e14d:
      bVar19 = 0x20;
    }
    *(byte *)&pSVar31->_padding_ = (byte)pSVar31->_padding_ & 0xdf;
    *(byte *)&pSVar31->_padding_ = (byte)pSVar31->_padding_ | bVar19;
    pSVar31 = TSharedPtr<STextBlock,1>::operator->(&local_4610._Widget);
    pbVar1 = (byte *)((longlong)&pSVar31->_padding_ + 1);
    *pbVar1 = *pbVar1 | 4;
    if ((local_4610._Widget.Object == (STextBlock *)0x0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x416,L""), bVar17)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    FVar16.ReferenceController = local_4610._Widget.SharedReferenceCount.ReferenceController;
    local_4610._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
    ;
    local_4610._Widget.Object = (STextBlock *)0x0;
    if ((pSVar30 == (STextBlock *)0x0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x26c,L""), bVar17)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if (FVar16.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar16.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar16.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      (FVar16.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar16.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_3e60 = (pFVar26->_Content).Widget.Object;
    pTStack_3e58 = (pFVar26->_Content).Widget.SharedReferenceCount.ReferenceController;
    (pFVar26->_Content).Widget.Object = (SWidget *)pSVar30;
    (pFVar26->_Content).Widget.SharedReferenceCount.ReferenceController = FVar16.ReferenceController
    ;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (pTStack_3e58);
    FLLMScope::FLLMScope(&local_4728,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_4458 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_43e0,&local_4458,true);
    TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
              (&local_3ef0,"SBox",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Views\\SHeaderRow.cpp"
               ,100,&local_4755);
    FMemScope::~FMemScope(&local_43e0);
    FLLMScope::~FLLMScope(&local_4728);
    pTVar32 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_3ef0,&local_3f28,pFVar26);
    FVar15.ReferenceController = local_46d8.SharedReferenceCount.ReferenceController;
    local_46d8.SharedReferenceCount.ReferenceController =
         (pTVar32->SharedReferenceCount).ReferenceController;
    pSVar74 = pTVar32->Object;
    if (local_46d8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_46d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_46d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_46d8.Object = (SWidget *)pSVar74;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar15.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3f28.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3ef0._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar16.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar16.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_4610._Widget.SharedReferenceCount.ReferenceController);
    STextBlock::FArguments::~FArguments(&local_640);
    SBox::FArguments::~FArguments(&local_1d00);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnSortModeChanged,
             &local_3d28);
  if (((*(int *)&(this->OnSortModeChanged).field_0x10 == 0) ||
      (plVar63 = *(longlong **)&(this->OnSortModeChanged).field_0x8, plVar63 == (longlong *)0x0)) ||
     (cVar18 = (**(code **)(*plVar63 + 0x38))(), cVar18 == '\0')) {
    bVar17 = false;
  }
  else {
    bVar17 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_3d28);
  if (!bVar17) {
    if ((local_46e8.Object == (SHorizontalBox *)0x0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar17)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pFVar46 = SHorizontalBox::AddSlot(local_46e8.Object,&local_2bb8);
    local_42b8.Value = 1.0;
    local_42b8.bIsSet = true;
    local_42b8.Getter._0_8_ = 0;
    local_42b8.Getter._8_8_ = 0;
    local_42b8.Getter._16_8_ = 0;
    pFVar34 = SHorizontalBox::FSlot::FSlotArguments::FillWidth
                        ((FSlotArguments *)&pFVar46->_padding_,&local_42b8);
    puVar73 = &pFVar34->field_0x48;
    if (local_4400 != (EHorizontalAlignment *)puVar73) {
      *(EHorizontalAlignment *)puVar73 = param_2->HeaderHAlignment;
      pFVar34->field_0x4c = 1;
    }
    pFVar53 = pFVar76;
    if (puVar73 != (undefined1 *)0x0) {
      pFVar53 = pFVar34;
    }
    if (local_43f8 != (EVerticalAlignment *)&pFVar53->field_0x50) {
      *(EVerticalAlignment *)&pFVar53->field_0x50 = param_2->HeaderVAlignment;
      pFVar53->field_0x54 = 1;
    }
    pFVar34 = pFVar76;
    if (pFVar53 != (FSlotArguments *)0xffffffffffffffb8) {
      pFVar34 = pFVar53;
    }
    TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
              ((FSlotArguments *)pFVar34,&local_46d8);
    SBoxPanel::FScopedWidgetSlotArguments<SHorizontalBox::FSlot>::
    ~FScopedWidgetSlotArguments<SHorizontalBox::FSlot>(&local_2bb8);
    goto LAB_142a1f07e;
  }
  local_4638 = SBox::FArguments::FArguments(&local_19c0);
  local_4638->_HAlign = param_2->HeaderHAlignment;
  local_4638->_VAlign = param_2->HeaderVAlignment;
  pFVar24 = SHorizontalBox::FArguments::FArguments(&local_3200);
  pFVar33 = ::operator_new(0x58);
  local_44c8 = pFVar76;
  if (pFVar33 != (FSlot *)0x0) {
    *(undefined8 *)pFVar33 = 0;
    *(undefined8 *)&pFVar33->field_0x8 = 0;
    *(undefined8 *)&pFVar33->field_0x10 = 0;
    *(undefined8 *)&pFVar33->field_0x18 = 0;
    *(undefined8 *)&pFVar33->field_0x20 = 0;
    *(undefined8 *)&pFVar33->field_0x28 = 0;
    *(undefined8 *)&pFVar33->field_0x30 = 0;
    *(undefined8 *)&pFVar33->field_0x38 = 0;
    *(undefined8 *)&pFVar33->field_0x40 = 0;
    *(undefined8 *)&pFVar33->field_0x48 = 0;
    *(undefined8 *)&pFVar33->field_0x50 = 0;
    local_44c8 = (FSlotArguments *)SHorizontalBox::FSlot::FSlot(pFVar33);
  }
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments(&local_3900,(FSlot *)&local_44c8);
  pFVar34 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(&local_3900);
  local_40f8.bIsSet = true;
  local_40f8.Value.Left = 0.0;
  local_40f8.Value.Top = 0.0;
  local_40f8.Value.Right = 0.0;
  local_40f8.Value.Bottom = 0.0;
  local_40f8.Getter._16_8_ = 0;
  local_40f8.Getter._0_8_ = 0;
  local_40f8.Getter._8_8_ = 0;
  pFVar34 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)&pFVar34->field_0x18,&local_40f8);
  local_4588 = (SBox *)local_46d8.Object;
  FStack_4580.ReferenceController = local_46d8.SharedReferenceCount.ReferenceController;
  if (local_46d8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_46d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_46d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((SBox **)&pFVar34->field_0x8 != &local_4588) {
    *(SBox **)&pFVar34->field_0x8 = pSVar74;
    local_4588 = (SBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar34->field_0x10,&FStack_4580);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_4580.ReferenceController);
  local_4668 = SHorizontalBox::FArguments::operator+(pFVar24,pFVar34);
  pFVar33 = ::operator_new(0x58);
  local_44c0 = pFVar76;
  if (pFVar33 != (FSlot *)0x0) {
    *(undefined8 *)pFVar33 = 0;
    *(undefined8 *)&pFVar33->field_0x8 = 0;
    *(undefined8 *)&pFVar33->field_0x10 = 0;
    *(undefined8 *)&pFVar33->field_0x18 = 0;
    *(undefined8 *)&pFVar33->field_0x20 = 0;
    *(undefined8 *)&pFVar33->field_0x28 = 0;
    *(undefined8 *)&pFVar33->field_0x30 = 0;
    *(undefined8 *)&pFVar33->field_0x38 = 0;
    *(undefined8 *)&pFVar33->field_0x40 = 0;
    *(undefined8 *)&pFVar33->field_0x48 = 0;
    *(undefined8 *)&pFVar33->field_0x50 = 0;
    local_44c0 = (FSlotArguments *)SHorizontalBox::FSlot::FSlot(pFVar33);
  }
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments(&local_39e8,(FSlot *)&local_44c0);
  pFVar34 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(&local_39e8);
  puVar73 = &pFVar34->field_0x48;
  if (local_4430 != (undefined4 *)puVar73) {
    *(undefined4 *)puVar73 = 1;
    pFVar34->field_0x4c = 1;
  }
  if (puVar73 == (undefined1 *)0x0) {
    pFVar34 = (FSlotArguments *)0x0;
  }
  if (local_4408 != (undefined4 *)&pFVar34->field_0x50) {
    *(undefined4 *)&pFVar34->field_0x50 = 2;
    pFVar34->field_0x54 = 1;
  }
  local_4158.bIsSet = true;
  pFVar53 = pFVar76;
  if (pFVar34 != (FSlotArguments *)0xffffffffffffffb8) {
    pFVar53 = pFVar34;
  }
  local_4158.Getter._16_8_ = 0;
  local_4158.Value.Left = ___xmm_00000000000000000000000040800000;
  local_4158.Value.Top = _UNK_150924fd4;
  local_4158.Value.Right = _UNK_150924fd8;
  local_4158.Value.Bottom = _UNK_150924fdc;
  local_4158.Getter._0_8_ = 0;
  local_4158.Getter._8_8_ = 0;
  local_4670 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)&pFVar53->field_0x18,&local_4158);
  pFVar22 = SOverlay::FArguments::FArguments(&local_3408);
  pFVar35 = SOverlay::Slot(&local_3b08,0);
  pFVar36 = SImage::FArguments::FArguments(&local_2588);
  local_4250 = CONCAT22(local_4250._2_2_,2);
  local_4190 = local_4250;
  local_4260 = ___xmm_3f8000003f800000000000003f800000;
  uStack_4258 = _UNK_15090c6d8;
  local_418c = 1;
  local_41a0._0_8_ = ___xmm_3f8000003f800000000000003f800000;
  local_41a0._8_8_ = _UNK_15090c6d8;
  local_4178 = 0;
  local_4188 = 0;
  uStack_4180 = 0;
  pFVar36 = SImage::FArguments::ColorAndOpacity(pFVar36,(TAttribute<FSlateColor> *)&local_41a0._s_0)
  ;
  uStack_46f0 = 0;
  local_46f8 = (FArguments *)GetSortingBrush;
  lStack_3f30 = (ulonglong)uStack_46ec << 0x20;
  local_3f38 = GetSortingBrush;
  TAttribute<FSlateBrush_const_*>::Bind<STableColumnHeader>
            (&pFVar36->_Image,this,(pmf_07a0e073 *)&local_3f38);
  uStack_46f0 = 0;
  local_46f8 = (FArguments *)GetSortModeVisibility;
  lStack_3f40 = (ulonglong)uStack_46ec << 0x20;
  local_3f48 = GetSortModeVisibility;
  TAttribute<EVisibility>::Bind<STableColumnHeader>
            ((TAttribute<EVisibility> *)&pFVar36->_padding_,this,(pmf_ecb6d3f9 *)&local_3f48);
  FLLMScope::FLLMScope(&local_4724,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_44a8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_44a0,&local_44a8,true);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
            (&local_3e90,"SImage",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Views\\SHeaderRow.cpp"
             ,0x86,&local_4754);
  FMemScope::~FMemScope(&local_44a0);
  FLLMScope::~FLLMScope(&local_4724);
  pTVar37 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_3e90,&local_4038,pFVar36);
  pTVar3 = (pTVar37->SharedReferenceCount).ReferenceController;
  local_46a8 = pTVar37->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_46a0.ReferenceController = pTVar3;
  if ((SImage **)&pFVar35->_padding_ != &local_46a8) {
    pFVar35->_padding_ = (longlong)local_46a8;
    local_46a8 = (SImage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar35->_padding_,&local_46a0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_46a0.ReferenceController);
  local_46f8 = SOverlay::FArguments::operator+(pFVar22,pFVar35);
  local_4740 = (FName)SOverlay::Slot(&local_3b68,0);
  pFVar38 = SCircularThrobber::FArguments::FArguments((FArguments *)local_2ff8);
  pFVar38->_Radius = 10.0;
  pIVar28 = FAppStyle::Get();
  pcVar9 = *(code **)((longlong)*pIVar28 + 0x50);
  pFVar39 = ::FName::FName(&local_4440,"Throbber.CircleChunk.Small");
  pFVar40 = (FSlateBrush *)(*pcVar9)(pIVar28,*pFVar39,0);
  pFVar38->_PieceImage = pFVar40;
  uStack_4590 = 0;
  local_4598 = (FName)GetSortProcessingVisibility;
  lStack_3f10 = (ulonglong)uStack_458c << 0x20;
  local_3f18 = GetSortProcessingVisibility;
  TAttribute<EVisibility>::Bind<STableColumnHeader>
            ((TAttribute<EVisibility> *)&pFVar38->_padding_,this,(pmf_ecb6d3f9 *)&local_3f18);
  FLLMScope::FLLMScope(&local_4720,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_4598 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_4488,&local_4598,true);
  TSlateDecl<SCircularThrobber,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SCircularThrobber,RequiredArgs::T0RequiredArgs>
            (&local_4628,"SCircularThrobber",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Views\\SHeaderRow.cpp"
             ,0x8d,&local_4753);
  FMemScope::~FMemScope(&local_4488);
  FLLMScope::~FLLMScope(&local_4720);
  pSVar41 = TSharedPtr<SCircularThrobber,1>::operator->(&local_4628._Widget);
  SWidget::SWidgetConstruct((SWidget *)pSVar41,(FSlateBaseNamedArgs *)pFVar38);
  pSVar41 = local_4628._Widget.Object;
  SCircularThrobber::Construct(local_4628._Widget.Object,pFVar38);
  pSVar42 = TSharedPtr<SCircularThrobber,1>::operator->(&local_4628._Widget);
  if ((pSVar42->_padding_ & 0x10) == 0) {
    cVar18 = (**(code **)(pSVar42->_padding_ + 0x228))(pSVar42);
    bVar19 = 0;
    if (cVar18 != '\0') goto LAB_142a1e8ce;
  }
  else {
LAB_142a1e8ce:
    bVar19 = 0x20;
  }
  *(byte *)&pSVar42->_padding_ = (byte)pSVar42->_padding_ & 0xdf;
  *(byte *)&pSVar42->_padding_ = (byte)pSVar42->_padding_ | bVar19;
  pSVar42 = TSharedPtr<SCircularThrobber,1>::operator->(&local_4628._Widget);
  pbVar1 = (byte *)((longlong)&pSVar42->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((local_4628._Widget.Object == (SCircularThrobber *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar17)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  FVar16.ReferenceController = local_4628._Widget.SharedReferenceCount.ReferenceController;
  local_4628._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_4628._Widget.Object = (SCircularThrobber *)0x0;
  if ((pSVar41 == (SCircularThrobber *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar17)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  local_4228.Object = (SWidget *)pSVar41;
  local_4228.SharedReferenceCount.ReferenceController = FVar16.ReferenceController;
  if (FVar16.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar16.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar16.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar35 = TSlotBase<SOverlay::FOverlaySlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)local_4740,&local_4228);
  pFVar22 = SOverlay::FArguments::operator+(local_46f8,pFVar35);
  FLLMScope::FLLMScope(&local_471c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_4450 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(local_4428,&local_4450,true);
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>
            (&local_3ea8,"SOverlay",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Views\\SHeaderRow.cpp"
             ,0x83,&local_4752);
  FMemScope::~FMemScope(local_4428);
  FLLMScope::~FLLMScope(&local_471c);
  pTVar43 = TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_3ea8,&local_4048,pFVar22);
  local_4218.Object = (SWidget *)pTVar43->Object;
  local_46f8 = (FArguments *)(pTVar43->SharedReferenceCount).ReferenceController;
  if (local_46f8 != (FArguments *)0x0) {
    LOCK();
    ((TReferenceControllerBase<1> *)local_46f8)->SharedReferenceCount =
         (atomic<int>)((int)((TReferenceControllerBase<1> *)local_46f8)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_4218.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)local_46f8;
  pFVar34 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)local_4670,&local_4218);
  pFVar24 = SHorizontalBox::FArguments::operator+(local_4668,pFVar34);
  FLLMScope::FLLMScope(&local_4718,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_44b8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_44b0,&local_44b8,true);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
            (&local_3ec0,"SHorizontalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Views\\SHeaderRow.cpp"
             ,0x76,&local_4751);
  FMemScope::~FMemScope(&local_44b0);
  FLLMScope::~FLLMScope(&local_4718);
  pTVar25 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_3ec0,&local_4058,pFVar24);
  pFVar26 = local_4638;
  pTVar5 = (pTVar25->SharedReferenceCount).ReferenceController;
  pSVar45 = pTVar25->Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_45e8 = (local_4638->_Content).Widget.Object;
  pTStack_45e0 = (local_4638->_Content).Widget.SharedReferenceCount.ReferenceController;
  (local_4638->_Content).Widget.Object = (SWidget *)pSVar45;
  (local_4638->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_45e0);
  FLLMScope::FLLMScope(&local_4714,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_4660 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_4658,&local_4660,true);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_3ed8,"SBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Views\\SHeaderRow.cpp"
             ,0x72,&local_4750);
  FMemScope::~FMemScope(&local_4658);
  FLLMScope::~FLLMScope(&local_4714);
  pTVar32 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_3ed8,&local_4068,pFVar26);
  pTVar6 = (pTVar32->SharedReferenceCount).ReferenceController;
  local_4698.Object = (SWidget *)pTVar32->Object;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_4698.SharedReferenceCount.ReferenceController = pTVar6;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4068.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3ed8._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4058.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3ec0._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_46f8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4048.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3ea8._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar16.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar16.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4628._Widget.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2dd0);
  if ((void *)local_2dd0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_2dd0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2dd0);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_2ff8);
  SOverlay::FOverlaySlot::FSlotArguments::~FSlotArguments(&local_3b68);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4038.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3e90._Widget.SharedReferenceCount.ReferenceController);
  SImage::FArguments::~FArguments(&local_2588);
  SOverlay::FOverlaySlot::FSlotArguments::~FSlotArguments(&local_3b08);
  DestructItems<SOverlay::FOverlaySlot::FSlotArguments,int>
            ((FSlotArguments *)local_3408._Slots.AllocatorInstance.Data,local_3408._Slots.ArrayNum);
  if ((FSlotArguments *)local_3408._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_3408._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_3408);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_39e8);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_3900);
  DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_3200._Slots.AllocatorInstance.Data,local_3200._Slots.ArrayNum);
  if ((FSlotArguments *)local_3200._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_3200._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_3200);
  SBox::FArguments::~FArguments(&local_19c0);
  pbVar44 = TAttribute<bool>::Get(&this->CanManuallySort);
  if (*pbVar44 == false) {
    pSVar45 = TSharedPtr<SHorizontalBox,1>::operator->(&local_46e8);
    pFVar46 = SHorizontalBox::AddSlot(pSVar45,&local_2cb8);
    local_4738 = 1.0;
    pTVar47 = TAttribute<float>::TAttribute<float>(&local_3c08,&local_4738);
    pFVar34 = SHorizontalBox::FSlot::FSlotArguments::FillWidth
                        ((FSlotArguments *)&pFVar46->_padding_,pTVar47);
    pFVar34 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::HAlign
                        ((FSlotArgumentsMixin *)&pFVar34->field_0x48,HAlign_Fill);
    TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
              ((FSlotArguments *)pFVar34,&local_4698);
    SBoxPanel::FScopedWidgetSlotArguments<SHorizontalBox::FSlot>::
    ~FScopedWidgetSlotArguments<SHorizontalBox::FSlot>(&local_2cb8);
    ApplySortMode(this);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
  else {
    pSVar45 = TSharedPtr<SHorizontalBox,1>::operator->(&local_46e8);
    pFVar46 = SHorizontalBox::AddSlot(pSVar45,&local_2db8);
    local_46c4 = 1.0;
    pTVar47 = TAttribute<float>::TAttribute<float>(&local_3be8,&local_46c4);
    pFVar34 = SHorizontalBox::FSlot::FSlotArguments::FillWidth
                        ((FSlotArguments *)&pFVar46->_padding_,pTVar47);
    pFVar34 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::HAlign
                        ((FSlotArgumentsMixin *)&pFVar34->field_0x48,HAlign_Fill);
    pFVar48 = SButton::FArguments::FArguments(&local_b80);
    ::FName::FName(&local_4650,"NoBorder");
    pIVar28 = FAppStyle::Get();
    pFVar48 = SButton::FArguments::ButtonStyle(pFVar48,pIVar28,&local_4650,(char *)0x0);
    pFVar49 = FSlateColor::UseForeground(&local_3c58);
    pTVar50 = TAttribute<FSlateColor>::TAttribute<FSlateColor>(&local_3bc8,pFVar49);
    pFVar48 = SButton::FArguments::ForegroundColor(pFVar48,pTVar50);
    local_4638 = (FArguments *)OnTitleClicked;
    uStack_4630 = 0;
    lStack_4020 = (ulonglong)uStack_462c << 0x20;
    local_4028 = OnTitleClicked;
    pFVar48 = SButton::FArguments::OnClicked<STableColumnHeader>
                        (pFVar48,this,(pmf_d298e162 *)&local_4028);
    local_46c0[0] = 0.0;
    pTVar51 = TAttribute<FMargin>::TAttribute<FMargin><float>(&local_3b98,local_46c0);
    pFVar48 = SButton::FArguments::ContentPadding(pFVar48,pTVar51);
    pFVar48 = SButton::FArguments::operator[](pFVar48,&local_4698);
    this_00 = MakeTDecl<SButton,RequiredArgs::T0RequiredArgs>
                        (&local_3cc8,"SButton",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Views\\SHeaderRow.cpp"
                         ,0x9c,&local_474f);
    pTVar52 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                        (this_00,&local_4018,pFVar48);
    TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SButton>(&local_41e8,pTVar52);
    TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
              ((FSlotArguments *)pFVar34,&local_41e8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_41e8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_4018.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3cc8._Widget.SharedReferenceCount.ReferenceController);
    SButton::FArguments::~FArguments(&local_b80);
    SBoxPanel::FScopedWidgetSlotArguments<SHorizontalBox::FSlot>::
    ~FScopedWidgetSlotArguments<SHorizontalBox::FSlot>(&local_2db8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_142a1f07e:
  if ((this->ComboVisibility != Never) &&
     (((param_2->HeaderMenuContent).Widget.Object != SNullWidget::NullWidget.Object ||
      (bVar17 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                          ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_2->OnGetMenuContent),
      bVar17)))) {
    if ((local_46e8.Object == (SHorizontalBox *)0x0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar17)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pFVar46 = SHorizontalBox::AddSlot(local_46e8.Object,&local_2ab8);
    local_4670 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth
                           ((FSlotArguments *)&pFVar46->_padding_);
    local_4668 = (FArguments *)SOverlay::FArguments::FArguments(&local_29b8);
    uStack_4700 = 0;
    local_4708 = (FName)GetMenuOverlayVisibility;
    lStack_4000 = (ulonglong)uStack_46fc << 0x20;
    local_4008 = GetMenuOverlayVisibility;
    TAttribute<EVisibility>::Bind<STableColumnHeader>
              ((TAttribute<EVisibility> *)&((FArguments *)local_4668)->_padding_,this,
               (pmf_ecb6d3f9 *)&local_4008);
    local_4638 = (FArguments *)SOverlay::Slot(&local_3a48,0);
    pFVar54 = SBorder::FArguments::FArguments(&local_1340);
    local_40c8.bIsSet = true;
    local_40c8.Getter._16_8_ = 0;
    local_40c8.Value.Left = 0.0;
    local_40c8.Value.Top = 0.0;
    local_40c8.Value.Right = 0.0;
    local_40c8.Value.Bottom = 0.0;
    local_40c8.Getter._0_8_ = 0;
    local_40c8.Getter._8_8_ = 0;
    local_4740 = (FName)SBorder::FArguments::Padding(pFVar54,&local_40c8);
    uStack_4700 = 0;
    local_4708 = (FName)GetComboButtonBorderBrush;
    lStack_3ff0 = (ulonglong)uStack_46fc << 0x20;
    local_3ff8 = GetComboButtonBorderBrush;
    TAttribute<FSlateBrush_const_*>::Bind<STableColumnHeader>
              ((TAttribute<FSlateBrush_const_*> *)((longlong)local_4740 + 0x2a0),this,
               (pmf_07a0e073 *)&local_3ff8);
    pFVar55 = SComboButton::FArguments::FArguments(&local_2038);
    pFVar55->_HasDownArrow = false;
    ::FName::FName(&local_4498,"NoBorder");
    pIVar28 = FAppStyle::Get();
    pFVar56 = ISlateStyle::GetWidgetStyle<FButtonStyle>
                        (pIVar28,local_4498,(char *)0x0,(FButtonStyle *)0x0);
    pFVar55->_ButtonStyle = pFVar56;
    local_42f8 = 1;
    local_42e0 = 0;
    local_4308 = 0;
    uStack_4300 = 0;
    local_42f0 = (undefined1  [8])0x0;
    pvStack_42e8 = (void *)0x0;
    (pFVar55->_ContentPadding).Value.Left = 0.0;
    (pFVar55->_ContentPadding).Value.Top = 0.0;
    (pFVar55->_ContentPadding).Value.Right = 0.0;
    (pFVar55->_ContentPadding).Value.Bottom = 0.0;
    (pFVar55->_ContentPadding).bIsSet = true;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar55->_ContentPadding).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_42f0);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_42f0);
    if (pvStack_42e8 != (void *)0x0) {
      FMemory::Free(pvStack_42e8);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_42f0);
    pFVar57 = SSpacer::FArguments::FArguments(&local_27b0);
    local_4088 = 1;
    local_4070 = 0;
    local_4098._s_0.X = ___xmm_0000000000000000402c000000000000;
    local_4098._s_0.Y = _UNK_15097b458;
    local_4080 = 0;
    uStack_4078 = 0;
    pFVar57 = SSpacer::FArguments::Size
                        (pFVar57,(TAttribute<UE::Math::TVector2<double>_> *)&local_4098._s_0);
    this_01 = MakeTDecl<SSpacer,RequiredArgs::T0RequiredArgs>
                        (&local_3d40,"SSpacer",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Views\\SHeaderRow.cpp"
                         ,0xd6,&local_474e);
    pTVar58 = TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs>::operator<<=
                        (this_01,&local_3f78,pFVar57);
    pTVar3 = (pTVar58->SharedReferenceCount).ReferenceController;
    pSVar7 = pTVar58->Object;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_45f8 = (pFVar55->_ButtonContent).Widget.Object;
    pTStack_45f0 = (pFVar55->_ButtonContent).Widget.SharedReferenceCount.ReferenceController;
    (pFVar55->_ButtonContent).Widget.Object = (SWidget *)pSVar7;
    (pFVar55->_ButtonContent).Widget.SharedReferenceCount.ReferenceController = pTVar3;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (pTStack_45f0);
    FLLMScope::FLLMScope(&local_4710,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_4708 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(local_4648,&local_4708,true);
    TSlateDecl<SComboButton,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<SComboButton,RequiredArgs::T0RequiredArgs>
              (&local_4688,"SComboButton",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Views\\SHeaderRow.cpp"
               ,0xd0,&local_474d);
    FMemScope::~FMemScope(local_4648);
    FLLMScope::~FLLMScope(&local_4710);
    if (local_4688._Widget.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_4688._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_4688._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount
           + 1);
      UNLOCK();
    }
    local_3fe8 = (this->ComboButton).Object;
    pTStack_3fe0 = (this->ComboButton).SharedReferenceCount.ReferenceController;
    (this->ComboButton).Object = local_4688._Widget.Object;
    (this->ComboButton).SharedReferenceCount.ReferenceController =
         local_4688._Widget.SharedReferenceCount.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (pTStack_3fe0);
    pSVar59 = TSharedPtr<SComboButton,1>::operator->(&local_4688._Widget);
    SWidget::SWidgetConstruct((SWidget *)pSVar59,(FSlateBaseNamedArgs *)pFVar55);
    pSVar59 = local_4688._Widget.Object;
    SComboButton::Construct(local_4688._Widget.Object,pFVar55);
    pSVar60 = TSharedPtr<SComboButton,1>::operator->(&local_4688._Widget);
    SWidget::CacheVolatility((SWidget *)pSVar60);
    pSVar60 = TSharedPtr<SComboButton,1>::operator->(&local_4688._Widget);
    pbVar1 = (byte *)((longlong)&pSVar60->_padding_ + 1);
    *pbVar1 = *pbVar1 | 4;
    if ((local_4688._Widget.Object == (SComboButton *)0x0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x416,L""), bVar17)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    FVar16.ReferenceController = local_4688._Widget.SharedReferenceCount.ReferenceController;
    local_4688._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
    ;
    local_4688._Widget.Object = (SComboButton *)0x0;
    if ((pSVar59 == (SComboButton *)0x0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x26c,L""), bVar17)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    FVar62 = local_4740;
    if (FVar16.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar16.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar16.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      (FVar16.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar16.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_3fd8 = (((TAlwaysValidWidget *)((longlong)local_4740 + 0x1f8))->Widget).Object;
    pTStack_3fd0 = ((FSharedReferencer<1> *)((longlong)local_4740 + 0x200))->ReferenceController;
    (((TAlwaysValidWidget *)((longlong)local_4740 + 0x1f8))->Widget).Object = (SWidget *)pSVar59;
    ((FSharedReferencer<1> *)((longlong)local_4740 + 0x200))->ReferenceController =
         FVar16.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (pTStack_3fd0);
    this_02 = MakeTDecl<SBorder,RequiredArgs::T0RequiredArgs>
                        (&local_3d10,"SBorder",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Views\\SHeaderRow.cpp"
                         ,0xcc,&local_474c);
    pTVar61 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                        (this_02,&local_3f88,(FArguments *)FVar62);
    local_41d8.Object = (SWidget *)pTVar61->Object;
    local_4660 = (FName)(pTVar61->SharedReferenceCount).ReferenceController;
    if (local_4660 != (FName)0x0) {
      LOCK();
      *(int *)((longlong)local_4660 + 8) = *(int *)((longlong)local_4660 + 8) + 1;
      UNLOCK();
    }
    local_41d8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)local_4660;
    pFVar35 = TSlotBase<SOverlay::FOverlaySlot>::FSlotArguments::operator[]
                        ((FSlotArguments *)local_4638,&local_41d8);
    local_4658 = (FMemScope)SOverlay::FArguments::operator+((FArguments *)local_4668,pFVar35);
    FVar62 = (FName)SOverlay::Slot(&local_3aa8,0);
    plVar63 = (longlong *)((longlong)FVar62 + 0x48);
    if ((longlong *)local_4470 != plVar63) {
      *(undefined4 *)plVar63 = 2;
      *(undefined1 *)((longlong)FVar62 + 0x4c) = 1;
    }
    local_4650.ComparisonIndex.Value = 0;
    local_4650.Number = 0;
    if (plVar63 == (longlong *)0x0) {
      FVar62.ComparisonIndex.Value = 0;
      FVar62.Number = 0;
    }
    if ((longlong *)local_43f0 != (longlong *)((longlong)FVar62 + 0x50)) {
      *(undefined4 *)((longlong)FVar62 + 0x50) = 2;
      *(undefined1 *)((longlong)FVar62 + 0x54) = 1;
    }
    if (FVar62 != (FName)0xffffffffffffffb8) {
      local_4650 = FVar62;
    }
    pFVar26 = SBox::FArguments::FArguments(&local_1680);
    local_42d8.Value.Size = 18.0;
    local_42d8.bIsSet = true;
    local_42d8.Getter._16_8_ = 0;
    local_42d8.Getter._0_8_ = 0;
    local_42d8.Getter._8_8_ = 0;
    pFVar26 = SBox::FArguments::HeightOverride(pFVar26,&local_42d8);
    local_4128.bIsSet = true;
    local_4128.Getter._16_8_ = 0;
    local_4128.Value.Left = ___xmm_c000000000000000c000000000000000;
    local_4128.Value.Top = _UNK_15097b464;
    local_4128.Value.Right = _UNK_15097b468;
    local_4128.Value.Bottom = _UNK_15097b46c;
    local_4128.Getter._0_8_ = 0;
    local_4128.Getter._8_8_ = 0;
    local_4708 = (FName)SBox::FArguments::Padding(pFVar26,&local_4128);
    pFVar36 = SImage::FArguments::FArguments(&local_22e0);
    local_41c8.Value = &this->Style->MenuDropdownImage;
    local_41c8.bIsSet = true;
    local_41c8.Getter._0_8_ = 0;
    local_41c8.Getter._8_8_ = 0;
    local_41c8.Getter._16_8_ = 0;
    FVar64 = (FMemScope)SImage::FArguments::Image(pFVar36,&local_41c8);
    *(bool *)((longlong)FVar64 + 0x234) = true;
    local_4648[0] = FVar64;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)FVar64 + 0x238),
               &local_3d60.WriteScope);
    local_3d60.Allocation = (FDelegateAllocation *)((longlong)FVar64 + 0x240);
    puVar65 = UE::Core::Private::DelegateAllocate(0x38,local_3d60.Allocation);
    FVar62 = local_4440;
    if (puVar65 != (undefined8 *)0x0) {
      local_4698.Object = (SWidget *)GetComboButtonTint;
      local_4698.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)
           ((ulonglong)local_4248.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
      pTVar66 = TSharedFromThis<SWidget,1>::AsShared
                          ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_3fc8);
      FVar62 = (FName)(pTVar66->SharedReferenceCount).ReferenceController;
      pSVar4 = pTVar66->Object;
      if (FVar62 != (FName)0x0) {
        LOCK();
        *(int *)((longlong)FVar62 + 8) = *(int *)((longlong)FVar62 + 8) + 1;
        UNLOCK();
        LOCK();
        *(int *)((longlong)FVar62 + 8) = *(int *)((longlong)FVar62 + 8) + 1;
        UNLOCK();
      }
      *puVar65 = &
                 ___7__TCommonDelegateInstanceState___A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
      ;
      local_4740 = FVar62;
      uVar67 = FDelegateHandle::GenerateNewID();
      puVar65[2] = uVar67;
      *puVar65 = &
                 ___7__TBaseSPMethodDelegateInstance__00__CBVSTableColumnHeader___00__A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar65[3] = pSVar4;
      *(FName *)(puVar65 + 4) = FVar62;
      if (FVar62 != (FName)0x0) {
        LOCK();
        *(int *)((longlong)FVar62 + 0xc) = *(int *)((longlong)FVar62 + 0xc) + 1;
        UNLOCK();
      }
      pFVar76 = (FSlotArguments *)0x1c0;
      puVar65[5] = local_4698.Object;
      puVar65[6] = local_4698.SharedReferenceCount.ReferenceController;
      FVar62 = local_4740;
    }
    if ((uint)pFVar76 >> 8 != 0) {
      pFVar76 = (FSlotArguments *)(ulonglong)((uint)pFVar76 & 0xfffffeff);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)FVar62);
    }
    if ((char)pFVar76 < '\0') {
      pFVar76 = (FSlotArguments *)(ulonglong)((uint)pFVar76 & 0xffffff7f);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)FVar62);
    }
    if (((ulonglong)pFVar76 & 0x40) != 0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_3fc8.SharedReferenceCount.ReferenceController);
    }
    TWriteLockedDelegateAllocation<FNotThreadSafeDelegateMode>::
    ~TWriteLockedDelegateAllocation<FNotThreadSafeDelegateMode>(&local_3d60);
    pTVar68 = TAttribute<EVisibility>::TAttribute<EVisibility><EVisibility>
                        (&local_3c28,&EVisibility::HitTestInvisible);
    pFVar36 = TSlateBaseNamedArgs<SImage>::Visibility
                        ((TSlateBaseNamedArgs<SImage> *)local_4648[0],pTVar68);
    this_03 = MakeTDecl<SImage,RequiredArgs::T0RequiredArgs>
                        (&local_3cb0,"SImage",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Views\\SHeaderRow.cpp"
                         ,0xe4,&local_474b);
    pTVar37 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                        (this_03,&local_3f98,pFVar36);
    TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SImage>(&local_45d8,pTVar37);
    pFVar26 = SBox::FArguments::operator[]((FArguments *)local_4708,&local_45d8);
    this_04 = MakeTDecl<SBox,RequiredArgs::T0RequiredArgs>
                        (&local_3cf8,"SBox",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Views\\SHeaderRow.cpp"
                         ,0xe0,&local_474a);
    pTVar32 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                        (this_04,&local_3fa8,pFVar26);
    TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBox>(&local_41f8,pTVar32);
    pFVar35 = TSlotBase<SOverlay::FOverlaySlot>::FSlotArguments::operator[]
                        ((FSlotArguments *)local_4650,&local_41f8);
    pFVar22 = SOverlay::FArguments::operator+((FArguments *)local_4658,pFVar35);
    pTVar69 = MakeTDecl<SOverlay,RequiredArgs::T0RequiredArgs>
                        (&local_3ce0,"SOverlay",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Views\\SHeaderRow.cpp"
                         ,199,&local_4749);
    pTVar69 = TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::Expose<SOverlay>
                        (pTVar69,&this->MenuOverlay);
    pTVar43 = TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::operator<<=
                        (pTVar69,&local_3fb8,pFVar22);
    TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SOverlay>(&local_4208,pTVar43);
    TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
              ((FSlotArguments *)local_4670,&local_4208);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_4208.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3fb8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3ce0._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_41f8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3fa8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3cf8._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)
               CONCAT44(local_45d8.SharedReferenceCount.ReferenceController._4_4_,
                        local_45d8.SharedReferenceCount.ReferenceController._0_4_));
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3f98.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3cb0._Widget.SharedReferenceCount.ReferenceController);
    SImage::FArguments::~FArguments(&local_22e0);
    SBox::FArguments::~FArguments(&local_1680);
    SOverlay::FOverlaySlot::FSlotArguments::~FSlotArguments(&local_3aa8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_4660);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3f88.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3d10._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar16.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar16.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_4688._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3f78.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3d40._Widget.SharedReferenceCount.ReferenceController);
    SSpacer::FArguments::~FArguments(&local_27b0);
    SComboButton::FArguments::~FArguments(&local_2038);
    SBorder::FArguments::~FArguments(&local_1340);
    SOverlay::FOverlaySlot::FSlotArguments::~FSlotArguments(&local_3a48);
    SOverlay::FArguments::~FArguments(&local_29b8);
    SBoxPanel::FScopedWidgetSlotArguments<SHorizontalBox::FSlot>::
    ~FScopedWidgetSlotArguments<SHorizontalBox::FSlot>(&local_2ab8);
    if ((param_2->HeaderMenuContent).Widget.Object == SNullWidget::NullWidget.Object) {
      bVar17 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                         ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_2->OnGetMenuContent);
      if (bVar17) {
        pSVar59 = TSharedPtr<SComboButton,1>::operator->(&this->ComboButton);
        pTVar71 = TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>::
                  TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
                            (&local_3c40,&param_2->OnGetMenuContent);
        SComboButton::SetOnGetMenuContent(pSVar59,pTVar71);
      }
    }
    else {
      pSVar59 = TSharedPtr<SComboButton,1>::operator->(&this->ComboButton);
      pcVar9 = *(code **)(pSVar59->_padding_ + 0x248);
      pTVar70 = TSharedRef<SWidget,1>::TSharedRef<SWidget,1>(&local_3c98,&this->ContextMenuContent);
      (*pcVar9)(pSVar59,pTVar70);
    }
  }
  pFVar54 = SBorder::FArguments::FArguments(&local_f60);
  local_45d8.Object = (SWidget *)GetHeaderBackgroundBrush;
  local_45d8.SharedReferenceCount.ReferenceController._0_4_ = 0;
  lStack_3f60 = (ulonglong)local_45d8.SharedReferenceCount.ReferenceController._4_4_ << 0x20;
  local_3f68 = GetHeaderBackgroundBrush;
  TAttribute<FSlateBrush_const_*>::Bind<STableColumnHeader>
            (&pFVar54->_BorderImage,this,(pmf_07a0e073 *)&local_3f68);
  pFVar54->_HAlign = HAlign_Fill;
  pFVar54->_VAlign = VAlign_Fill;
  local_4500.ReferenceController = (param_2->ToolTip).Value.SharedReferenceCount.ReferenceController
  ;
  local_4508 = (param_2->ToolTip).Value.Object;
  if (local_4500.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_4500.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_4500.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_44f8 = (param_2->ToolTip).bIsSet;
  TDelegate<TSharedPtr<IToolTip,1>___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<TSharedPtr<IToolTip,1>___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<TSharedPtr<IToolTip,1>___cdecl(void),FDefaultDelegateUserPolicy> *)
             local_44f0,&(param_2->ToolTip).Getter);
  if ((IToolTip **)&pFVar54->_padding_ != &local_4508) {
    pFVar54->_padding_ = (longlong)local_4508;
    local_4508 = (IToolTip *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar54->_padding_,&local_4500);
  }
  *(undefined1 *)&pFVar54->_padding_ = local_44f8;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar54->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_44f0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_44f0);
  if ((void *)local_44f0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_44f0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_44f0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4500.ReferenceController);
  if ((param_2->ToolTip).bIsSet == false) {
    pTVar72 = &param_2->DefaultTooltip;
    if ((param_2->DefaultTooltip).bIsSet == false) {
      bVar17 = (param_2->HeaderContent).Widget.Object != SNullWidget::NullWidget.Object;
      if (bVar17) {
        pTVar72 = TAttribute<FText>::TAttribute<FText>((TAttribute<FText> *)local_3df0);
      }
      else {
        pTVar72 = TAttribute<FText>::TAttribute<FText>
                            ((TAttribute<FText> *)local_3dc0,(TAttribute<FText> *)local_4568);
      }
      bVar13 = false;
      bVar12 = !bVar17;
      bVar11 = true;
      this_05 = (TAttribute<FText> *)local_3e20;
    }
    else {
      bVar13 = true;
      bVar12 = false;
      bVar17 = false;
      bVar11 = false;
      this_05 = (TAttribute<FText> *)local_3d90;
    }
    bVar14 = false;
    pTVar72 = TAttribute<FText>::TAttribute<FText>(this_05,pTVar72);
    bVar10 = true;
    FText::FText(&local_4338,&pTVar72->Value);
    local_4328[0] = pTVar72->bIsSet;
    TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>
              ((TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_4320,
               &pTVar72->Getter);
    pFVar21 = &local_4338;
    puVar73 = local_4328;
    pTVar75 = (TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_4320;
    local_4368.TextData.Reference = local_4338.TextData.Reference;
  }
  else {
    bVar14 = true;
    bVar13 = false;
    bVar12 = false;
    bVar17 = false;
    bVar11 = false;
    bVar10 = false;
    FText::FText(&local_4538);
    pFVar21 = &local_4538;
    local_4528[0] = 0;
    pTVar75 = (TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_4520;
    local_4510 = 0;
    puVar73 = local_4528;
    local_4520 = (undefined1  [8])0x0;
    pvStack_4518 = (void *)0x0;
    local_4368.TextData.Reference = local_4538.TextData.Reference;
  }
  if (local_4368.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_4368.TextData.Reference + 8))
              (local_4368.TextData.Reference,local_43e8);
  }
  local_4368.Flags = pFVar21->Flags;
  local_4358 = *puVar73;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_4350,pTVar75);
  FText::operator=((FText *)pFVar54,&local_4368);
  *(undefined1 *)&pFVar54->_padding_ = local_4358;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar54->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_4350);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_4350);
  if ((void *)local_4350._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_4350._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_4350);
  if (local_4368.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_4368.TextData.Reference + 0x10))();
  }
  if ((param_2->HeaderContentPadding).bIsSet != false) {
    param_4 = &(param_2->HeaderContentPadding).TypedValue;
  }
  local_4398._0_4_ = param_4->Left;
  local_4398._4_4_ = param_4->Top;
  uStack_4390._0_4_ = param_4->Right;
  uStack_4390._4_4_ = param_4->Bottom;
  local_4388 = 1;
  local_4370 = 0;
  local_4380 = (undefined1  [8])0x0;
  pvStack_4378 = (void *)0x0;
  (pFVar54->_Padding).Value.Left = (float)(undefined4)local_4398;
  (pFVar54->_Padding).Value.Top = (float)local_4398._4_4_;
  (pFVar54->_Padding).Value.Right = (float)(undefined4)uStack_4390;
  (pFVar54->_Padding).Value.Bottom = (float)uStack_4390._4_4_;
  (pFVar54->_Padding).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar54->_Padding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_4380);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_4380);
  if (pvStack_4378 != (void *)0x0) {
    FMemory::Free(pvStack_4378);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_4380);
  *(undefined1 *)((longlong)&pFVar54->_padding_ + 2) = 1;
  if (local_4418.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    paVar2 = &(local_4418.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
    LOCK();
    *paVar2 = (atomic<int>)((int)*paVar2 + 1);
    UNLOCK();
    LOCK();
    *paVar2 = (atomic<int>)((int)*paVar2 + 1);
    UNLOCK();
  }
  pTVar3 = (pFVar54->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar54->_Content).Widget.Object = (SWidget *)local_4418.Object;
  (pFVar54->_Content).Widget.SharedReferenceCount.ReferenceController =
       local_4418.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  FLLMScope::FLLMScope(&local_470c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_4480 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_4478,&local_4480,true);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>
            (&local_3e78,"SBorder",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Views\\SHeaderRow.cpp"
             ,0xf8,local_4748);
  FMemScope::~FMemScope(&local_4478);
  FLLMScope::~FLLMScope(&local_470c);
  pTVar61 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_3e78,&local_4248,pFVar54);
  plVar63 = &this->_padding_;
  pTVar3 = (pTVar61->SharedReferenceCount).ReferenceController;
  pSVar8 = pTVar61->Object;
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    FSlotBase::DetatchParentFromContent((FSlotBase *)plVar63);
  }
  else {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    FSlotBase::DetatchParentFromContent((FSlotBase *)plVar63);
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = (TReferenceControllerBase<1> *)this->_padding_;
  this->_padding_ = (longlong)pSVar8;
  this->_padding_ = (longlong)pTVar3;
  local_4578 = pSVar8;
  pTStack_4570 = pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)plVar63);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             CONCAT44(local_4248.SharedReferenceCount.ReferenceController._4_4_,
                      local_4248.SharedReferenceCount.ReferenceController._0_4_));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3e78._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4418.SharedReferenceCount.ReferenceController);
  if (bVar10) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_4320);
    if ((void *)local_4320._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_4320._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_4320);
    if (local_4338.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_4338.TextData.Reference + 0x10))();
    }
  }
  if (bVar11) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3e08);
    if ((void *)local_3e08._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_3e08._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_3e08);
    if ((ITextData *)local_3e20._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_3e20._0_8_ + 0x10))();
    }
  }
  if (bVar17) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3dd8);
    if ((void *)local_3dd8._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_3dd8._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_3dd8);
    if ((ITextData *)local_3df0._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_3df0._0_8_ + 0x10))();
    }
  }
  if (bVar12) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3da8);
    if ((void *)local_3da8._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_3da8._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_3da8);
    if ((ITextData *)local_3dc0._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_3dc0._0_8_ + 0x10))();
    }
  }
  if (bVar13) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3d78);
    if ((void *)local_3d78._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_3d78._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_3d78);
    if ((ITextData *)local_3d90._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_3d90._0_8_ + 0x10))();
    }
  }
  if (bVar14) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_4520);
    if (pvStack_4518 != (void *)0x0) {
      FMemory::Free(pvStack_4518);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_4520);
    if (local_4538.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_4538.TextData.Reference + 0x10))();
    }
  }
  SBorder::FArguments::~FArguments(&local_f60);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_46d8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4418.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_46e8.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_4550);
  if ((void *)local_4550._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_4550._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_4550);
  if ((ITextData *)local_4568._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_4568._0_8_ + 0x10))();
  }
  return;
}

// GetComboButtonBorderBrush @ 142a28d80

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateBrush * __thiscall STableColumnHeader::GetComboButtonBorderBrush(STableColumnHeader *this)

{
  SComboButton *this_00;
  bool bVar1;
  FSlateBrush *pFVar2;
  
  if (this->ComboVisibility != Never) {
    this_00 = (this->ComboButton).Object;
    if (this_00 != (SComboButton *)0x0) {
      if (*(char *)((longlong)&this_00->_padding_ + 3) != '\0') {
LAB_142a28db0:
        return &this->Style->MenuDropdownHoveredBorderBrush;
      }
      bVar1 = SMenuAnchor::IsOpen((SMenuAnchor *)this_00);
      if (bVar1) goto LAB_142a28db0;
    }
    if ((*(char *)((longlong)&this->_padding_ + 3) != '\0') || (this->ComboVisibility == Always)) {
      return &this->Style->MenuDropdownNormalBorderBrush;
    }
  }
  pFVar2 = FStyleDefaults::GetNoBrush();
  return pFVar2;
}

// GetComboButtonTint @ 142a28e00

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateColor * __thiscall
STableColumnHeader::GetComboButtonTint(STableColumnHeader *this,FSlateColor *__return_storage_ptr__)

{
  TSharedPtr<SComboButton,1> *this_00;
  EHeaderComboVisibility EVar1;
  bool bVar2;
  SComboButton *pSVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  this_00 = &this->ComboButton;
  uVar4 = FLinearColor::White.field0_0x0._s_0.R;
  uVar5 = FLinearColor::White.field0_0x0._s_0.G;
  uVar6 = FLinearColor::White.field0_0x0._s_0.B;
  uVar7 = FLinearColor::White.field0_0x0._s_0.A;
  if ((this_00->Object != (SComboButton *)0x0) && (EVar1 = this->ComboVisibility, EVar1 != Always))
  {
    if (EVar1 == Ghosted) {
      pSVar3 = TSharedPtr<SComboButton,1>::operator->(this_00);
      uVar4 = FLinearColor::White.field0_0x0._s_0.R;
      uVar5 = FLinearColor::White.field0_0x0._s_0.G;
      uVar6 = FLinearColor::White.field0_0x0._s_0.B;
      uVar7 = FLinearColor::White.field0_0x0._s_0.A;
      if (*(char *)((longlong)&pSVar3->_padding_ + 3) == '\0') {
        pSVar3 = TSharedPtr<SComboButton,1>::operator->(this_00);
        bVar2 = SMenuAnchor::IsOpen((SMenuAnchor *)pSVar3);
        uVar6 = FLinearColor::White.field0_0x0._s_0.B;
        uVar5 = FLinearColor::White.field0_0x0._s_0.G;
        uVar4 = FLinearColor::White.field0_0x0._s_0.R;
        uVar7 = FLinearColor::White.field0_0x0._s_0.A;
        if (!bVar2) {
          __return_storage_ptr__->ColorUseRule = UseColor_Specified;
          (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.R = (float)uVar4;
          (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.G = (float)uVar5;
          (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.B = (float)uVar6;
          (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.A = 0.5;
          return __return_storage_ptr__;
        }
      }
    }
    else {
      if (EVar1 == OnHover) {
        if ((*(char *)((longlong)&this->_padding_ + 3) != '\0') ||
           (pSVar3 = TSharedPtr<SComboButton,1>::operator->(this_00),
           uVar4 = FLinearColor::White.field0_0x0._s_0.R,
           uVar5 = FLinearColor::White.field0_0x0._s_0.G,
           uVar6 = FLinearColor::White.field0_0x0._s_0.B,
           uVar7 = FLinearColor::White.field0_0x0._s_0.A,
           *(char *)((longlong)&pSVar3->_padding_ + 3) != '\0')) goto LAB_142a28e3f;
        pSVar3 = TSharedPtr<SComboButton,1>::operator->(this_00);
        bVar2 = SMenuAnchor::IsOpen((SMenuAnchor *)pSVar3);
        uVar4 = FLinearColor::White.field0_0x0._s_0.R;
        uVar5 = FLinearColor::White.field0_0x0._s_0.G;
        uVar6 = FLinearColor::White.field0_0x0._s_0.B;
        uVar7 = FLinearColor::White.field0_0x0._s_0.A;
        if (bVar2) goto LAB_142a28e3f;
      }
      else if (EVar1 == Never) goto LAB_142a28e3f;
      uVar4 = FLinearColor::Transparent.field0_0x0._0_4_;
      uVar5 = FLinearColor::Transparent.field0_0x0._4_4_;
      uVar6 = FLinearColor::Transparent.field0_0x0._8_4_;
      uVar7 = FLinearColor::Transparent.field0_0x0._12_4_;
    }
  }
LAB_142a28e3f:
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.R = (float)uVar4;
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.G = (float)uVar5;
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.B = (float)uVar6;
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.A = (float)uVar7;
  __return_storage_ptr__->ColorUseRule = UseColor_Specified;
  return __return_storage_ptr__;
}

// GetHeaderBackgroundBrush @ 142a297b0

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateBrush * __thiscall STableColumnHeader::GetHeaderBackgroundBrush(STableColumnHeader *this)

{
  longlong *plVar1;
  char cVar2;
  FReadAccessScope local_28;
  
  if (*(char *)((longlong)&this->_padding_ + 3) != '\0') {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(this->SortMode).Getter,
               &local_28);
    if ((*(int *)&(this->SortMode).Getter.field_0x10 != 0) &&
       (plVar1 = *(longlong **)&(this->SortMode).Getter.field_0x8, plVar1 != (longlong *)0x0)) {
      cVar2 = (**(code **)(*plVar1 + 0x38))();
      if (cVar2 != '\0') {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_28);
        return &this->Style->HoveredBrush;
      }
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
  }
  return &this->Style->NormalBrush;
}

// GetMenuOverlayVisibility @ 142a29e70

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

EVisibility __thiscall STableColumnHeader::GetMenuOverlayVisibility(STableColumnHeader *this)

{
  SComboButton *this_00;
  bool bVar1;
  TEnumAsByte<EVisibility::Private> *in_RDX;
  
  if (this->ComboVisibility == OnHover) {
    this_00 = (this->ComboButton).Object;
    if (this_00 == (SComboButton *)0x0) goto LAB_142a29ead;
    if (*(char *)((longlong)&this->_padding_ + 3) == '\0') {
      bVar1 = SMenuAnchor::IsOpen((SMenuAnchor *)this_00);
      if (!bVar1) goto LAB_142a29ead;
    }
  }
  if (this->ComboVisibility != Never) {
    in_RDX->Value = (uchar)EVisibility::Visible.Value.Value;
    return (EVisibility)(uchar)in_RDX;
  }
LAB_142a29ead:
  in_RDX->Value = (uchar)EVisibility::Collapsed.Value.Value;
  return (TEnumAsByte<EVisibility::Private>)(uchar)in_RDX;
}

// GetSortModeVisibility @ 142a2b1c0

/* WARNING: Enum "Type": Some values do not have unique names */

EVisibility __thiscall STableColumnHeader::GetSortModeVisibility(STableColumnHeader *this)

{
  bool bVar1;
  Type *pTVar2;
  bool *pbVar3;
  EVisibility EVar4;
  uchar *in_RDX;
  TAttribute<EColumnSortMode::Type> *this_00;
  
  this_00 = &this->SortMode;
  pTVar2 = TAttribute<enum_EColumnSortMode::Type>::Get(this_00);
  if (*pTVar2 == None) {
    pbVar3 = TAttribute<bool>::Get(&this->CanManuallySort);
    if (*pbVar3 == false) {
      this_00 = &this->InitialSortMode;
    }
  }
  pTVar2 = TAttribute<enum_EColumnSortMode::Type>::Get(this_00);
  if ((*pTVar2 != None) && (this->bHasBeenManuallySorted != false)) {
    pbVar3 = TAttribute<bool>::Get(&this->IsSorting);
    if (*pbVar3 == false) {
      bVar1 = true;
      goto LAB_142a2b231;
    }
  }
  bVar1 = false;
LAB_142a2b231:
  EVar4.Value.Value = EVisibility::Collapsed.Value.Value;
  if (bVar1) {
    EVar4.Value.Value = EVisibility::HitTestInvisible.Value.Value;
  }
  *in_RDX = (uchar)EVar4.Value.Value;
  return (EVisibility)SUB81(in_RDX,0);
}

// GetSortProcessingVisibility @ 142a2b260

/* WARNING: Enum "Type": Some values do not have unique names */

EVisibility __thiscall STableColumnHeader::GetSortProcessingVisibility(STableColumnHeader *this)

{
  bool *pbVar1;
  uchar *in_RDX;
  EVisibility EVar2;
  
  pbVar1 = TAttribute<bool>::Get(&this->IsSorting);
  EVar2 = EVisibility::Collapsed;
  if (*pbVar1 != false) {
    EVar2 = EVisibility::HitTestInvisible;
  }
  *in_RDX = (uchar)EVar2.Value.Value;
  return (EVisibility)SUB81(in_RDX,0);
}

// GetSortingBrush @ 142a2b2a0

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateBrush * __thiscall STableColumnHeader::GetSortingBrush(STableColumnHeader *this)

{
  Type TVar1;
  Type *pTVar2;
  Type *pTVar3;
  bool *pbVar4;
  longlong lVar5;
  TAttribute<EColumnSortMode::Type> *this_00;
  
  pTVar2 = TAttribute<enum_EColumnSortPriority::Type>::Get(&this->SortPriority);
  this_00 = &this->SortMode;
  TVar1 = *pTVar2;
  pTVar3 = TAttribute<enum_EColumnSortMode::Type>::Get(this_00);
  if (*pTVar3 == None) {
    pbVar4 = TAttribute<bool>::Get(&this->CanManuallySort);
    if (*pbVar4 == false) {
      this_00 = &this->InitialSortMode;
    }
  }
  pTVar3 = TAttribute<enum_EColumnSortMode::Type>::Get(this_00);
  if (*pTVar3 == Ascending) {
    lVar5 = 0x170;
    if (TVar1 != Secondary) {
      lVar5 = 0x10;
    }
    return (FSlateBrush *)((longlong)&this->Style->_padding_ + lVar5);
  }
  lVar5 = 0xc0;
  if (TVar1 == Secondary) {
    lVar5 = 0x220;
  }
  return (FSlateBrush *)((longlong)&this->Style->_padding_ + lVar5);
}

// OnMouseButtonUp @ 142a2f7d0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
STableColumnHeader::OnMouseButtonUp
          (STableColumnHeader *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  FName FVar1;
  TReferenceControllerBase<1> *pTVar2;
  bool bVar3;
  
  FVar1 = (param_2->EffectingButton).KeyName;
  pTVar2 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((FVar1 == EKeys::RightMouseButton.KeyName) &&
     ((this->ContextMenuContent).Object != SNullWidget::NullWidget.Object)) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    OpenContextMenu(this,param_2);
    bVar3 = true;
  }
  else {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    bVar3 = false;
  }
  FReply::FReply(__return_storage_ptr__,bVar3);
  return __return_storage_ptr__;
}

// OnTitleClicked @ 142a31c40

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
STableColumnHeader::OnTitleClicked(STableColumnHeader *this,FReply *__return_storage_ptr__)

{
  this->bHasBeenManuallySorted = true;
  ApplySortMode(this);
  FReply::FReply(__return_storage_ptr__,true);
  return __return_storage_ptr__;
}

// OpenContextMenu @ 142a32000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall STableColumnHeader::OpenContextMenu(STableColumnHeader *this,FPointerEvent *param_1)

{
  FDeprecateSlateVector2D FVar1;
  FWidgetPath *pFVar2;
  FSlateApplication *pFVar3;
  TSharedRef<SWidget,1> *pTVar4;
  ForElementType<FArrangedWidget> FVar5;
  undefined1 auStackY_4d8 [32];
  undefined1 local_478;
  undefined1 local_477;
  FPopupTransitionEffect local_474;
  TVector2<float>_u_0 local_470;
  FDeprecateSlateVector2D local_468;
  TSharedPtr<IMenu,1> local_460;
  TSharedRef<SWidget,1> local_450;
  FWidgetPath local_440;
  FWidgetPath local_2e0;
  FWidgetPath local_180;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_4d8;
  if ((this->ContextMenuContent).Object != SNullWidget::NullWidget.Object) {
    FVar1 = param_1->ScreenSpacePosition;
    if ((FWidgetPath *)param_1->_padding_ == (FWidgetPath *)0x0) {
      pFVar2 = FWidgetPath::FWidgetPath(&local_180);
      FWidgetPath::FWidgetPath(&local_440,pFVar2);
      if (local_180.VirtualPointerPositions.AllocatorInstance.Data != (FScriptContainerElement *)0x0
         ) {
        FMemory::Free(local_180.VirtualPointerPositions.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_180.TopLevelWindow.SharedReferenceCount.ReferenceController);
      FVar5 = (ForElementType<FArrangedWidget>)&local_180.Widgets.Array;
      if (local_180.Widgets.Array.AllocatorInstance.SecondaryData !=
          (ForElementType<FArrangedWidget>)0x0) {
        FVar5 = local_180.Widgets.Array.AllocatorInstance.SecondaryData;
      }
      DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar5,local_180.Widgets.Array.ArrayNum);
      local_2e0.Widgets.Array.AllocatorInstance.SecondaryData =
           local_180.Widgets.Array.AllocatorInstance.SecondaryData;
    }
    else {
      pFVar2 = FWidgetPath::FWidgetPath(&local_2e0,(FWidgetPath *)param_1->_padding_);
      FWidgetPath::FWidgetPath(&local_440,pFVar2);
      if (local_2e0.VirtualPointerPositions.AllocatorInstance.Data != (FScriptContainerElement *)0x0
         ) {
        FMemory::Free(local_2e0.VirtualPointerPositions.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2e0.TopLevelWindow.SharedReferenceCount.ReferenceController);
      FVar5 = (ForElementType<FArrangedWidget>)&local_2e0.Widgets.Array;
      if (local_2e0.Widgets.Array.AllocatorInstance.SecondaryData !=
          (ForElementType<FArrangedWidget>)0x0) {
        FVar5 = local_2e0.Widgets.Array.AllocatorInstance.SecondaryData;
      }
      DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar5,local_2e0.Widgets.Array.ArrayNum);
    }
    if (local_2e0.Widgets.Array.AllocatorInstance.SecondaryData !=
        (ForElementType<FArrangedWidget>)0x0) {
      FMemory::Free((void *)local_2e0.Widgets.Array.AllocatorInstance.SecondaryData);
    }
    pFVar3 = FSlateApplication::Get();
    FSlateApplication::CloseToolTip(pFVar3);
    pFVar3 = FSlateApplication::Get();
    local_470 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    local_477 = 0;
    local_474.SlideDirection = ContextMenu;
    local_468 = FVar1;
    pTVar4 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_450);
    FSlateApplication::PushMenu
              (pFVar3,&local_460,pTVar4,&local_440,&this->ContextMenuContent,
               (FDeprecateVector2DParameter *)&local_468,&local_474,true,
               (FDeprecateVector2DParameter *)&local_470._s_0,SUB82(&local_478,0),true,-1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_460.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_450.SharedReferenceCount.ReferenceController);
    if (local_440.VirtualPointerPositions.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_440.VirtualPointerPositions.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_440.TopLevelWindow.SharedReferenceCount.ReferenceController);
    FVar5 = (ForElementType<FArrangedWidget>)&local_440.Widgets.Array;
    if (local_440.Widgets.Array.AllocatorInstance.SecondaryData !=
        (ForElementType<FArrangedWidget>)0x0) {
      FVar5 = local_440.Widgets.Array.AllocatorInstance.SecondaryData;
    }
    DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar5,local_440.Widgets.Array.ArrayNum);
    if (local_440.Widgets.Array.AllocatorInstance.SecondaryData !=
        (ForElementType<FArrangedWidget>)0x0) {
      FMemory::Free((void *)local_440.Widgets.Array.AllocatorInstance.SecondaryData);
    }
  }
  return;
}

