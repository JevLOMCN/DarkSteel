// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 22

// <lambda_1> @ 1427a8f40

<lambda_1> * __thiscall
`SToolBarButtonBlock::BuildMultiBlockWidget'::__l2::<lambda_1>::<lambda_1>
          (void *this,<lambda_1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  ITextData *pIVar2;
  undefined1 local_res8 [8];
  
  *(SToolBarButtonBlock **)this = (param_1->WeakBlock).Object;
  pTVar1 = (param_1->WeakBlock).WeakReferenceCount.ReferenceController;
  *(TReferenceControllerBase<1> **)((longlong)this + 8) = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  *(undefined8 *)((longlong)this + 0x10) = 0;
  pIVar2 = (param_1->ActualLabel).Value.TextData.Reference;
  *(ITextData **)((longlong)this + 0x10) = pIVar2;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
  }
  *(uint *)((longlong)this + 0x18) = (param_1->ActualLabel).Value.Flags;
  *(bool *)((longlong)this + 0x20) = (param_1->ActualLabel).bIsSet;
  *(undefined8 *)((longlong)this + 0x28) = 0;
  *(undefined8 *)((longlong)this + 0x30) = 0;
  *(undefined4 *)((longlong)this + 0x38) = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)((longlong)this + 0x28),
             &(param_1->ActualLabel).Getter);
  return this;
}

// <lambda_2> @ 1427a8fd0

<lambda_2> * __thiscall
`SToolBarButtonBlock::BuildMultiBlockWidget'::__l37::<lambda_2>::<lambda_2>
          (void *this,TSharedRef<STextBlock,1> *param_1,FMargin *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  
  *(STextBlock **)this = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)((longlong)this + 8) = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar2 = *(undefined8 *)&param_2->Right;
  *(undefined8 *)((longlong)this + 0x10) = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)this + 0x18) = uVar2;
  return this;
}

// SToolBarButtonBlock @ 1427b5fd0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

SToolBarButtonBlock * __thiscall SToolBarButtonBlock::SToolBarButtonBlock(SToolBarButtonBlock *this)

{
  SMultiBlockBaseWidget::SMultiBlockBaseWidget((SMultiBlockBaseWidget *)this);
  this->_padding_ = (longlong)&_vftable__for__IMultiBlockBaseWidget__;
  this->_padding_ = (longlong)&_vftable__for__SCompoundWidget__;
  (this->LabelVisibilityOverride).bIsSet = false;
  (this->LabelVisibility).Value = (TEnumAsByte<EVisibility::Private>)0x19;
  (this->LabelVisibility).bIsSet = false;
  *(undefined8 *)&(this->LabelVisibility).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->LabelVisibility).Getter = 0;
  *(undefined8 *)&(this->LabelVisibility).Getter.field_0x8 = 0;
  (this->ButtonBorder).Object = (SBorder *)0x0;
  (this->ButtonBorder).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  (this->OptionsBorder).Object = (SBorder *)0x0;
  (this->OptionsBorder).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->TutorialHighlightName).ComparisonIndex = 0;
  (this->TutorialHighlightName).Number = 0;
  return this;
}

// ~<lambda_1> @ 1427b63a0

void __thiscall
`SToolBarButtonBlock::BuildMultiBlockWidget'::__l2::<lambda_1>::~<lambda_1>(void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x28));
  if (*(void **)((longlong)this + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x30));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x28));
  if (*(longlong **)((longlong)this + 0x10) != (longlong *)0x0) {
    (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x10))();
  }
  plVar3 = *(longlong **)((longlong)this + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  return;
}

// ~SToolBarButtonBlock @ 1427bac00

void __thiscall SToolBarButtonBlock::~SToolBarButtonBlock(SToolBarButtonBlock *this)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  longlong *plVar4;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OptionsBorder).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ButtonBorder).SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->LabelVisibility).Getter);
  pvVar3 = *(void **)&(this->LabelVisibility).Getter.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->LabelVisibility).Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  plVar4 = (longlong *)this->_padding_;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)&this->_padding_);
  return;
}

// operator() @ 1427bc5a0

/* WARNING: Type propagation algorithm not settling */

EVisibility __thiscall
`SToolBarButtonBlock::BuildMultiBlockWidget'::__l2::<lambda_1>::operator()(void *this)

{
  atomic<int> aVar1;
  bool bVar2;
  atomic<int> aVar3;
  FText *this_00;
  EVisibility *pEVar4;
  TEnumAsByte<EVisibility::Private> *in_RDX;
  TReferenceControllerBase<1> *pTVar5;
  
  if (*(char *)((longlong)this + 0x20) != '\0') {
    this_00 = TAttribute<FText>::Get((TAttribute<FText> *)((longlong)this + 0x10));
    bVar2 = FText::IsEmpty(this_00);
    if (bVar2) {
      in_RDX->Value = (uchar)EVisibility::Collapsed.Value.Value;
      return (EVisibility)(uchar)in_RDX;
    }
  }
  pTVar5 = *(TReferenceControllerBase<1> **)((longlong)this + 8);
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar5->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar5 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1427bc610;
      }
      LOCK();
      aVar3 = pTVar5->SharedReferenceCount;
      bVar2 = aVar1 == aVar3;
      if (bVar2) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar3 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar3;
    } while (!bVar2);
    if (*(longlong *)this != 0) {
      pEVar4 = TAttribute<EVisibility>::Get((TAttribute<EVisibility> *)(*(longlong *)this + 0x2f0));
      in_RDX->Value = (pEVar4->Value).Value;
      goto LAB_1427bc619;
    }
  }
LAB_1427bc610:
  in_RDX->Value = (uchar)EVisibility::Visible.Value.Value;
LAB_1427bc619:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return (TEnumAsByte<EVisibility::Private>)(uchar)in_RDX;
}

// BuildMultiBlockWidget @ 1427de230

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SToolBarButtonBlock::BuildMultiBlockWidget
          (SToolBarButtonBlock *this,ISlateStyle *param_1,FName *param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  atomic<int> *paVar3;
  atomic<int> aVar4;
  EMultiBoxType EVar5;
  longlong lVar6;
  FDeprecateSlateVector2D FVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  code *pcVar10;
  bool bVar11;
  SWidget *pSVar12;
  FSharedReferencer<1> FVar13;
  FSharedReferencer<1> FVar14;
  bool bVar15;
  bool bVar16;
  atomic<int> aVar17;
  int iVar18;
  FToolBarStyle *pFVar19;
  EVisibility *pEVar20;
  TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *pTVar21;
  FText *pFVar22;
  undefined8 *puVar23;
  FUICommandInfo *pFVar24;
  FName FVar25;
  TSharedRef<SWidget_const_,1> *pTVar26;
  ulong64 uVar27;
  TReferenceControllerBase<1> *pTVar28;
  FArguments *pFVar29;
  FArguments *pFVar30;
  TSharedRef<SWidget,1> *pTVar31;
  longlong *plVar32;
  <lambda_2> *p<Var33;
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> *pTVar34;
  FArguments *pFVar35;
  FSlotArguments *pFVar36;
  TAttribute<FMargin> *pTVar37;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> *this_00;
  TAttribute<float> *pTVar38;
  FSizeParam *pFVar39;
  TOptional<FSizeParam> *pTVar40;
  TAttribute<EVisibility> *pTVar41;
  TAttribute<TOptional<UE::Math::TVector2<double>_>_> *pTVar42;
  FButtonStyle *pFVar43;
  FArguments *pFVar44;
  FMemScope this_01;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> *this_02;
  TSharedRef<SButton,1> *pTVar45;
  FArguments *pFVar46;
  TSharedRef<SToolTip,1> *pTVar47;
  TAttribute<TSharedPtr<IToolTip,1>_> *pTVar48;
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs> *this_03;
  TSharedRef<SCheckBox,1> *pTVar49;
  FName *pFVar50;
  TAttribute<FSlateBrush_const_*> *pTVar51;
  FArguments *pFVar52;
  FSlotArguments *pFVar53;
  FArguments *pFVar54;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> *pTVar55;
  TSharedRef<SBorder,1> *pTVar56;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> *pTVar57;
  TSharedRef<SHorizontalBox,1> *pTVar58;
  EUserInterfaceActionType EVar59;
  FSlotArguments *pFVar60;
  IToolTip *pIVar61;
  longlong lVar62;
  SMultiBoxWidget *pSVar63;
  SMultiBoxWidget *pSVar64;
  SMultiBoxWidget *pSVar65;
  FUICommandInfo *pFVar66;
  SCompoundWidget *this_04;
  byte bVar67;
  SMultiBoxWidget *this_05;
  TStatId *pTVar68;
  FSharedReferencer<1> FVar69;
  FWeakReferencer<1> FVar70;
  bool bVar71;
  undefined4 uVar72;
  undefined4 uVar73;
  undefined4 uVar74;
  undefined4 uVar75;
  undefined1 auStackY_3a98 [32];
  undefined8 local_3a60;
  FStaticCastTag local_3a58 [4];
  float local_3a54;
  float fStack_3a50;
  float fStack_3a4c;
  float fStack_3a48;
  undefined2 local_3a44;
  T0RequiredArgs local_3a42;
  T0RequiredArgs local_3a41;
  T0RequiredArgs local_3a40;
  T0RequiredArgs local_3a3f;
  T0RequiredArgs local_3a3e;
  T0RequiredArgs local_3a3d;
  T0RequiredArgs local_3a3c;
  T0RequiredArgs local_3a3b;
  T0RequiredArgs local_3a3a;
  T0RequiredArgs local_3a39;
  T0RequiredArgs local_3a38 [8];
  SCompoundWidget *local_3a30;
  FName local_3a28;
  undefined4 uStack_3a20;
  uint uStack_3a1c;
  undefined4 local_3a18 [4];
  code *local_3a08;
  undefined8 uStack_3a00;
  TWeakPtr<FUICommandInfo_const_,1> local_39f8;
  TSharedPtr<SWidget,1> local_39e8;
  FLLMScope local_39d8 [5];
  TSharedRef<SLayeredImage,1> local_39c8;
  longlong local_39b8;
  TSharedRef<SWidget,1> local_39a8;
  undefined1 local_3998 [24];
  undefined1 local_3980 [8];
  ForAnyElementType FStack_3978;
  ulonglong local_3970;
  FName local_3968;
  TReferenceControllerBase<1> *local_3960;
  TSharedRef<SWidget,1> local_3958;
  TSharedRef<SWidget,1> local_3948;
  FName local_3938;
  FMemScope local_3930;
  FName local_3928;
  FUICommandInfo *local_3920;
  FSharedReferencer<1> local_3918;
  FUICommandInfo *local_3910;
  FSharedReferencer<1> local_3908;
  FText local_3900;
  bool local_38f0;
  undefined1 local_38e8 [8];
  ForAnyElementType FStack_38e0;
  int local_38d8;
  FName *local_38d0;
  TSharedRef<STextBlock,1> local_38c8;
  ISlateStyle *local_38b8;
  TSharedRef<SWidget,1> local_38a8;
  TSharedRef<FMultiBox_const_,1> local_3898;
  TSharedPtr<FUICommandInfo_const_,1> local_3888;
  TSharedRef<SWidget,1> local_3878;
  TSharedPtr<FUICommandInfo_const_,1> local_3868;
  undefined1 local_3858 [24];
  undefined1 local_3840 [8];
  void *pvStack_3838;
  undefined8 local_3830;
  TSharedRef<SWidget_const_,1> local_3828;
  uchar local_3818;
  undefined1 local_3817;
  undefined1 local_3810 [8];
  void *pvStack_3808;
  undefined8 local_3800;
  undefined4 local_37f8 [2];
  undefined4 local_37f0 [2];
  FMemScope local_37e8;
  TReferenceControllerBase<1> *local_37e0;
  TReferenceControllerBase<1> *local_37d8;
  undefined1 local_37d0 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_37c8;
  FDelegateAllocation FStack_37c0;
  longlong local_37b0;
  TReferenceControllerBase<1> *local_37a8;
  undefined1 local_37a0 [4];
  undefined1 local_379c [4];
  TStatId *local_3798;
  TReferenceControllerBase<1> *local_3790;
  undefined1 local_3788 [24];
  undefined1 local_3770 [24];
  TAttribute<EVisibility> local_3758;
  TAttribute<FMargin> local_3738;
  undefined1 local_3708 [16];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_36f8;
  FDelegateAllocation FStack_36f0;
  FTagMetaData local_36e0;
  TSharedRef<SWidget,1> local_36c8;
  TSharedRef<SToolBarButtonBlock,1> local_36b8;
  TSharedRef<SWidget,1> local_36a8;
  FText local_3698;
  TSharedPtr<SWidget,1> local_3688;
  TSharedPtr<SWidget,1> local_3678;
  TSharedRef<SWidget,1> local_3668;
  TSharedRef<SWidget,1> local_3658;
  TSharedRef<SWidget,1> local_3648;
  TSharedRef<SWidget,1> local_3638;
  FTagMetaData local_3628;
  TSharedRef<SWidget,1> local_3618;
  TSharedRef<SWidget,1> local_3608;
  TSharedRef<SVerticalBox,1> local_35f8;
  TVector2<double>_u_0 local_35e8;
  FDestructionSentinel local_35d8;
  FDestructionSentinel local_35c0;
  undefined1 local_35a8 [24];
  undefined1 local_3590 [24];
  TAttribute<TSharedPtr<IToolTip,1>_> local_3578;
  FDestructionSentinel local_3548;
  FDelegateAllocation *local_3530;
  FDestructionSentinel local_3528;
  FDelegateAllocation *local_3510;
  FDestructionSentinel local_3508;
  longlong *local_34f0;
  FDestructionSentinel local_34e8;
  FDelegateAllocation *local_34d0;
  FDestructionSentinel local_34c8;
  FDelegateAllocation *local_34b0;
  TAttribute<FMargin> local_34a8;
  TAttribute<FMargin> local_3478;
  TSharedRef<SBorder,1> local_3448;
  TSharedRef<SWidget,1> local_3438;
  TSharedRef<SWidget,1> local_3428;
  code *local_3418;
  longlong lStack_3410;
  code *local_3408;
  TReferenceControllerBase<1> *pTStack_3400;
  TSharedRef<SHorizontalBox,1> local_33f8;
  TSharedRef<SBorder,1> local_33e8;
  TSharedRef<SWidget,1> local_33d8;
  TSharedRef<SBorder,1> local_33c8;
  TSharedRef<SWidget,1> local_33b8;
  TSharedRef<SWidget,1> local_33a8;
  SWidget *local_3398 [2];
  undefined1 local_3388 [8];
  TReferenceControllerBase<1> *local_3380;
  TSlateDecl<SLayeredImage,RequiredArgs::T0RequiredArgs> local_3378;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_3360;
  TSharedRef<SWidget_const_,1> local_3348;
  code *local_3338;
  longlong lStack_3330;
  TSharedRef<SWidget_const_,1> local_3328;
  TSharedRef<SWidget,1> local_3318;
  FMargin local_3308;
  TSharedRef<SHorizontalBox,1> local_32f8;
  TSharedRef<SWidget,1> local_32e8;
  TSharedRef<SHorizontalBox,1> local_32d8;
  code *local_32c8;
  longlong lStack_32c0;
  TSharedRef<SWidget,1> local_32b8;
  SWidget *local_32a8;
  TReferenceControllerBase<1> *pTStack_32a0;
  TSharedRef<SButton,1> local_3298;
  code *local_3288;
  ulonglong uStack_3280;
  code *local_3278;
  ulonglong uStack_3270;
  code *local_3268;
  TReferenceControllerBase<1> *pTStack_3260;
  TSharedRef<SCheckBox,1> local_3258;
  TSharedRef<SToolTip,1> local_3248;
  TSharedRef<SWidget,1> local_3238;
  TAttribute<EVisibility> local_3228;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_3208;
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs> local_31f0;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_31d8;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_31c0;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_31a8;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_3190;
  FReadAccessScope local_3178;
  TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> local_3160;
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> local_3148;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_3130;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_3118;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_3100;
  TAttribute<EVisibility> local_30e8;
  undefined1 local_30c8 [8];
  TReferenceControllerBase<1> *local_30c0;
  TAttribute<FText> local_30a8;
  TAttribute<FMargin> local_3078;
  TAttribute<float> local_3048;
  TAttribute<EVisibility> local_3028;
  TAttribute<float> local_3008;
  TAttribute<float> local_2fe8;
  TAttribute<float> local_2fc8;
  FStretch local_2fa8;
  TAttribute<FSlateBrush_const_*> local_2f60;
  TAttribute<FMargin> local_2f38;
  TAttribute<FMargin> local_2f08;
  TAttribute<FMargin> local_2ed8;
  TAttribute<FMargin> local_2ea8;
  TAttribute<TSharedPtr<IToolTip,1>_> local_2e78;
  TAttribute<FMargin> local_2e48;
  TAttribute<TOptional<UE::Math::TVector2<double>_>_> local_2e18;
  TOptional<FSizeParam> local_2de0;
  FSlotArguments local_2d90;
  FSlotArguments local_2ca8;
  FSlotArguments local_2bc0;
  FSlotArguments local_2ad8;
  FSlotArguments local_29f0;
  FSlotArguments local_2908;
  FSlotArguments local_2820;
  FSlotArguments local_2738;
  FSlotArguments local_2650;
  FArguments local_2568;
  FArguments local_2360;
  FArguments local_2158;
  FArguments local_1f50;
  FArguments local_1d48;
  FArguments local_1aa0;
  FArguments local_16c0;
  FArguments local_12e0;
  FArguments local_f00;
  FArguments local_b20;
  FArguments local_5e0;
  code *local_88;
  longlong local_78 [3];
  longlong *local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_3a98;
  this_05 = (SMultiBoxWidget *)0x0;
  bVar11 = false;
  bVar16 = false;
  local_3a18[0] = 0;
  local_38d0 = param_2;
  local_38b8 = param_1;
  pFVar19 = (FToolBarStyle *)
            (**(code **)((longlong)*param_1 + 0xa0))(param_1,FToolBarStyle::TypeName,*param_2,0);
  if (pFVar19 == (FToolBarStyle *)0x0) {
    pFVar19 = FToolBarStyle::GetDefault();
  }
  if ((this->LabelVisibilityOverride).bIsSet == false) {
    if (pFVar19->bShowLabels == false) {
      TAttribute<EVisibility>::TAttribute<EVisibility><EVisibility>
                (&local_3228,&EVisibility::Collapsed);
      TAttribute<EVisibility>::operator=(&this->LabelVisibility,&local_3228);
      TAttribute<EVisibility>::~TAttribute<EVisibility>(&local_3228);
    }
    else {
      local_3a58[0] = (FStaticCastTag)0x0;
      local_39e8.Object = (SWidget *)GetIconVisibility;
      local_39e8.SharedReferenceCount.ReferenceController._0_4_ = 0;
      pTVar31 = TSharedFromThis<SWidget,1>::AsShared
                          ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_33b8);
      TSharedRef<SToolBarButtonBlock,1>::TSharedRef<SToolBarButtonBlock,1><SWidget>
                (&local_36b8,pTVar31,local_3a58[0]);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_33b8.SharedReferenceCount.ReferenceController);
      local_3398[1]._4_4_ = local_39e8.SharedReferenceCount.ReferenceController._4_4_;
      local_3398[1]._0_4_ = local_39e8.SharedReferenceCount.ReferenceController._0_4_;
      local_3398[0] = local_39e8.Object;
      pTVar21 = TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
                CreateSP<SToolBarButtonBlock,1,bool>
                          (&local_3160,&local_36b8,(pmf_d9b4638e *)local_3398,(bool *)local_3a58);
      pTVar41 = TAttribute<EVisibility>::Create(&local_30e8,pTVar21);
      TAttribute<EVisibility>::operator=(&this->LabelVisibility,pTVar41);
      TAttribute<EVisibility>::~TAttribute<EVisibility>(&local_30e8);
      TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
      ~TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>(&local_3160);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_36b8.SharedReferenceCount.ReferenceController);
    }
  }
  else {
    pEVar20 = TOptional<EVisibility>::GetValue(&this->LabelVisibilityOverride);
    local_3818 = (pEVar20->Value).Value;
    local_3817 = 1;
    local_3810 = (undefined1  [8])0x0;
    pvStack_3808 = (void *)0x0;
    local_3800 = 0;
    (this->LabelVisibility).Value.Value.Value = local_3818;
    (this->LabelVisibility).bIsSet = true;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->LabelVisibility).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3810);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3810);
    if (pvStack_3808 != (void *)0x0) {
      FMemory::Free(pvStack_3808);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_3810);
  }
  pSVar65 = (SMultiBoxWidget *)this->_padding_;
  pSVar63 = pSVar65;
  pSVar64 = this_05;
  if (pSVar65 == (SMultiBoxWidget *)0x0) {
LAB_1427de495:
    bVar71 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    pSVar65 = pSVar63;
    if (bVar71) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  else {
    aVar4 = *(atomic<int> *)&pSVar65->_padding_;
    do {
      pSVar63 = this_05;
      if (aVar4 == (atomic<int>)0x0) goto LAB_1427de495;
      LOCK();
      aVar17 = *(atomic<int> *)&pSVar65->_padding_;
      bVar71 = aVar4 == aVar17;
      if (bVar71) {
        *(atomic<int> *)&pSVar65->_padding_ = (atomic<int>)((int)aVar4 + 1);
        aVar17 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar17;
    } while (!bVar71);
    pSVar64 = (SMultiBoxWidget *)this->_padding_;
    pSVar63 = pSVar65;
    if (pSVar64 == (SMultiBoxWidget *)0x0) goto LAB_1427de495;
  }
  SMultiBoxWidget::GetMultiBox(pSVar64,&local_3898);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar65);
  if ((this->_padding_ == 0) &&
     (bVar71 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L""), bVar71)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pTVar28 = (TReferenceControllerBase<1> *)this->_padding_;
  lVar6 = this->_padding_;
  if (pTVar28 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar28->SharedReferenceCount = (atomic<int>)((int)pTVar28->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_39b8 = lVar6;
  local_3960 = pTVar28;
  if ((lVar6 == 0) &&
     (bVar71 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L""), bVar71)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  if (pTVar28 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar28->SharedReferenceCount = (atomic<int>)((int)pTVar28->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar28);
  local_3868.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)(lVar6 + 0x88);
  pFVar24 = *(FUICommandInfo **)(lVar6 + 0x80);
  if (local_3868.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_3868.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_3868.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_3868.Object = pFVar24;
  FText::FText((FText *)local_3998);
  local_3998[0x10] = false;
  local_3970 = 0;
  local_3980 = (undefined1  [8])0x0;
  FStack_3978.Data = (FScriptContainerElement *)0x0;
  if (*(char *)(lVar6 + 0x208) == '\0') {
    if (*(char *)(lVar6 + 0x1d8) == '\0') {
      if (pFVar24 == (FUICommandInfo *)0x0) {
        pFVar22 = FText::GetEmpty();
      }
      else {
        pFVar24 = TSharedPtr<FUICommandInfo_const_,1>::operator->(&local_3868);
        pFVar22 = &pFVar24->Label;
      }
      TAttribute<FText>::TAttribute<FText><FText>(&local_30a8,pFVar22);
      TAttribute<FText>::operator=((TAttribute<FText> *)local_3998,&local_30a8);
      TAttribute<FText>::~TAttribute<FText>(&local_30a8);
    }
    else {
      TAttribute<FText>::operator=
                ((TAttribute<FText> *)local_3998,(TAttribute<FText> *)(lVar6 + 0x1c8));
    }
  }
  else {
    TAttribute<FText>::operator=
              ((TAttribute<FText> *)local_3998,(TAttribute<FText> *)(lVar6 + 0x1f8));
  }
  pSVar65 = (SMultiBoxWidget *)this->_padding_;
  pSVar64 = pSVar65;
  if (pSVar65 != (SMultiBoxWidget *)0x0) {
    aVar4 = *(atomic<int> *)&pSVar65->_padding_;
    do {
      pSVar64 = this_05;
      if (aVar4 == (atomic<int>)0x0) goto LAB_1427de655;
      LOCK();
      aVar17 = *(atomic<int> *)&pSVar65->_padding_;
      bVar71 = aVar4 == aVar17;
      if (bVar71) {
        *(atomic<int> *)&pSVar65->_padding_ = (atomic<int>)((int)aVar4 + 1);
        aVar17 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar17;
    } while (!bVar71);
    this_05 = (SMultiBoxWidget *)this->_padding_;
    pSVar64 = pSVar65;
    if (this_05 != (SMultiBoxWidget *)0x0) goto LAB_1427de67b;
  }
LAB_1427de655:
  bVar71 = ::FDebug::CheckVerifyFailedImpl2
                     ("IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                      ,0x458,L"");
  pSVar65 = pSVar64;
  if (bVar71) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
LAB_1427de67b:
  if ((this->_padding_ == 0) &&
     (bVar71 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar71)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  bVar71 = *(bool *)(this->_padding_ + 0xbc);
  pFVar22 = TAttribute<FText>::Get((TAttribute<FText> *)local_3998);
  local_3698.TextData.Reference = (pFVar22->TextData).Reference;
  if (local_3698.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_3698.TextData.Reference + 8))
              (local_3698.TextData.Reference,local_37a0);
  }
  local_3698.Flags = pFVar22->Flags;
  puVar23 = (undefined8 *)(**(code **)(this->_padding_ + 8))(this,local_3388);
  local_3678.Object = (SWidget *)*puVar23;
  local_3678.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)puVar23[1];
  if (local_3678.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_3678.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_3678.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SMultiBoxWidget::AddElement(this_05,&local_3678,&local_3698,bVar71);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_3380);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar65);
  FText::FText((FText *)local_3858);
  local_3858[0x10] = false;
  local_3830 = 0;
  local_3840 = (undefined1  [8])0x0;
  pvStack_3838 = (void *)0x0;
  if (*(char *)(lVar6 + 0x238) == '\0') {
    if (local_3868.Object == (FUICommandInfo *)0x0) {
      pFVar22 = FText::GetEmpty();
    }
    else {
      pFVar24 = TSharedPtr<FUICommandInfo_const_,1>::operator->(&local_3868);
      pFVar22 = &pFVar24->Description;
    }
    TAttribute<FText>::TAttribute<FText><FText>((TAttribute<FText> *)local_35a8,pFVar22);
    FText::operator=((FText *)local_3858,(FText *)local_35a8);
    local_3858[0x10] = local_35a8[0x10];
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3840,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3590);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3590);
    if ((void *)local_3590._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_3590._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_3590);
    if ((ITextData *)local_35a8._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_35a8._0_8_ + 0x10))();
    }
  }
  else {
    TAttribute<FText>::operator=
              ((TAttribute<FText> *)local_3858,(TAttribute<FText> *)(lVar6 + 0x228));
  }
  FVar25 = (FName)SImage::FArguments::FArguments(&local_1d48);
  *(bool *)((longlong)FVar25 + 0x234) = true;
  local_3938 = FVar25;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)FVar25 + 0x238),
             (FWriteAccessScope *)&local_3548);
  local_3530 = (FDelegateAllocation *)((longlong)FVar25 + 0x240);
  puVar23 = UE::Core::Private::DelegateAllocate(0x38,local_3530);
  pTVar28 = local_3960;
  if (puVar23 != (undefined8 *)0x0) {
    uStack_3a1c = local_3828.SharedReferenceCount.ReferenceController._4_4_;
    local_3a28 = (FName)GetIconForegroundColor;
    uStack_3a20 = 0;
    pTVar26 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_3348);
    pTVar28 = (pTVar26->SharedReferenceCount).ReferenceController;
    pTVar68 = &pTVar26->Object[-1].StatID;
    if (pTVar26->Object == (SWidget *)0x0) {
      pTVar68 = (TStatId *)0x0;
    }
    if (pTVar28 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar28->SharedReferenceCount = (atomic<int>)((int)pTVar28->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar28->SharedReferenceCount = (atomic<int>)((int)pTVar28->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar23 = &
               ___7__TCommonDelegateInstanceState___A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar27 = FDelegateHandle::GenerateNewID();
    puVar23[2] = uVar27;
    *puVar23 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSToolBarButtonBlock___00__A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar23[3] = pTVar68;
    puVar23[4] = pTVar28;
    if (pTVar28 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar28->WeakReferenceCount = (atomic<int>)((int)pTVar28->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar11 = true;
    bVar16 = true;
    *(FName *)(puVar23 + 5) = local_3a28;
    puVar23[6] = CONCAT44(uStack_3a1c,uStack_3a20);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar28);
  }
  if (bVar16) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar28);
  }
  if (bVar11) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3348.SharedReferenceCount.ReferenceController);
  }
  bVar71 = false;
  bVar11 = false;
  bVar16 = false;
  if (local_3548.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3548.Accessor,&local_3548);
  }
  local_3758.Value = (EVisibility)EVisibility::HitTestInvisible.Value.Value;
  local_3758.bIsSet = true;
  local_3758.Getter._16_8_ = 0;
  local_3758.Getter._0_8_ = 0;
  local_3758.Getter._8_8_ = 0;
  pFVar29 = TSlateBaseNamedArgs<SImage>::Visibility
                      ((TSlateBaseNamedArgs<SImage> *)local_3938,&local_3758);
  uStack_3a20 = 0;
  local_3a28 = (FName)GetIconBrush;
  lStack_3330 = (ulonglong)uStack_3a1c << 0x20;
  local_3338 = GetIconBrush;
  TAttribute<FSlateBrush_const_*>::Bind<SToolBarButtonBlock>
            (&pFVar29->_Image,this,(pmf_7c3d37a6 *)&local_3338);
  FLLMScope::FLLMScope(local_39d8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_3938 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_37e8,&local_3938,true);
  TSlateDecl<SLayeredImage,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SLayeredImage,RequiredArgs::T0RequiredArgs>
            (&local_3378,"SLayeredImage",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SToolBarButtonBlock.cpp"
             ,0xf6,&local_3a42);
  FMemScope::~FMemScope(&local_37e8);
  FLLMScope::~FLLMScope(local_39d8);
  TSlateDecl<SLayeredImage,RequiredArgs::T0RequiredArgs>::operator<<=
            (&local_3378,&local_39c8,pFVar29);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3378._Widget.SharedReferenceCount.ReferenceController);
  SImage::FArguments::~FArguments(&local_1d48);
  local_3708._0_8_ = (FSlateBrush *)0x0;
  local_3708[8] = true;
  FStack_36f0.DelegateSize = 0;
  local_36f8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_36f0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_36f8,(FWriteAccessScope *)&local_3528);
  local_3510 = &FStack_36f0;
  puVar23 = UE::Core::Private::DelegateAllocate(0x38,&FStack_36f0);
  pTVar28 = local_3960;
  if (puVar23 != (undefined8 *)0x0) {
    uStack_3a1c = local_3828.SharedReferenceCount.ReferenceController._4_4_;
    local_3a28 = (FName)GetOverlayIconBrush;
    uStack_3a20 = 0;
    pTVar26 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_3328);
    pTVar28 = (pTVar26->SharedReferenceCount).ReferenceController;
    pTVar68 = &pTVar26->Object[-1].StatID;
    if (pTVar26->Object == (SWidget *)0x0) {
      pTVar68 = (TStatId *)0x0;
    }
    if (pTVar28 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar28->SharedReferenceCount = (atomic<int>)((int)pTVar28->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar28->SharedReferenceCount = (atomic<int>)((int)pTVar28->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar71 = true;
    bVar11 = true;
    bVar16 = true;
    *puVar23 = &
               ___7__TCommonDelegateInstanceState___A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar27 = FDelegateHandle::GenerateNewID();
    puVar23[2] = uVar27;
    *puVar23 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSToolBarButtonBlock___00__A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar23[3] = pTVar68;
    puVar23[4] = pTVar28;
    if (pTVar28 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar28->WeakReferenceCount = (atomic<int>)((int)pTVar28->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(FName *)(puVar23 + 5) = local_3a28;
    puVar23[6] = CONCAT44(uStack_3a1c,uStack_3a20);
  }
  if (bVar16) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar28);
  }
  if (bVar11) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar28);
  }
  if (bVar71) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3328.SharedReferenceCount.ReferenceController);
  }
  bVar67 = false;
  if (local_3528.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3528.Accessor,&local_3528);
  }
  SLayeredImage::AddLayer(local_39c8.Object,(TAttribute<FSlateBrush_const_*> *)local_3708);
  EVar5 = (local_3898.Object)->Type;
  pFVar30 = STextBlock::FArguments::FArguments(&local_5e0);
  pTVar31 = TSharedFromThis<SWidget,1>::AsShared
                      ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_3668);
  pTVar68 = &pTVar31->Object[-1].StatID;
  if (pTVar31->Object == (SWidget *)0x0) {
    pTVar68 = (TStatId *)0x0;
  }
  pTVar28 = (pTVar31->SharedReferenceCount).ReferenceController;
  if (pTVar28 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3668.SharedReferenceCount.ReferenceController);
  }
  else {
    LOCK();
    pTVar28->SharedReferenceCount = (atomic<int>)((int)pTVar28->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3668.SharedReferenceCount.ReferenceController);
    LOCK();
    pTVar28->WeakReferenceCount = (atomic<int>)((int)pTVar28->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_3798 = pTVar68;
  local_3790 = pTVar28;
  TAttribute<FText>::TAttribute<FText>
            ((TAttribute<FText> *)local_3788,(TAttribute<FText> *)local_3998);
  local_88 = (code *)0x0;
  plVar32 = FMemory::Malloc(0x48,8);
  *plVar32 = (longlong)
             &UE::Core::Private::Function::
              TFunction_OwnedObject<`SToolBarButtonBlock::BuildMultiBlockWidget'::`2'::<lambda_1>,0,1>
              ::_vftable_;
  plVar32[1] = (longlong)local_3798;
  plVar32[2] = (longlong)local_3790;
  local_3790 = (TReferenceControllerBase<1> *)0x0;
  local_3798 = (TStatId *)0x0;
  local_60 = plVar32;
  FText::FText((FText *)(plVar32 + 3),(FText *)local_3788);
  *(bool *)(plVar32 + 5) = local_3788[0x10];
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(plVar32 + 6),
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3770);
  if (plVar32 + 1 != (longlong *)0x0) {
    local_88 = UE::Core::Private::Function::
               TFunctionRefCaller<`SToolBarButtonBlock::BuildMultiBlockWidget'::__l2::<lambda_1>,EVisibility>
               ::Call;
  }
  *(undefined1 *)((longlong)&pFVar30->_padding_ + 1) = 1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar30->_padding_,
             (FWriteAccessScope *)&local_3508);
  local_34f0 = &pFVar30->_padding_;
  puVar23 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_34f0);
  if (puVar23 != (undefined8 *)0x0) {
    *puVar23 = &
               ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar27 = FDelegateHandle::GenerateNewID();
    puVar23[2] = uVar27;
    *puVar23 = &
               ___7__TBaseFunctorDelegateInstance___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AUEVisibility__XZ____V__6B_
    ;
    puVar23[4] = local_88;
    puVar23[9] = 0;
    if (local_88 != (code *)0x0) {
      plVar32 = local_78;
      if (local_60 != (longlong *)0x0) {
        plVar32 = local_60;
      }
      (**(code **)*plVar32)();
    }
  }
  if (local_3508.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3508.Accessor,&local_3508);
  }
  local_3900.TextData.Reference = (ITextData *)local_3998._0_8_;
  if ((ITextData *)local_3998._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_3998._0_8_ + 8))(local_3998._0_8_,local_379c);
  }
  local_3900.Flags = local_3998._8_4_;
  local_38f0 = local_3998[0x10];
  local_38e8 = (undefined1  [8])0x0;
  FStack_38e0.Data = (FScriptContainerElement *)0x0;
  local_38d8 = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_38e8,
             (TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_3980);
  FText::operator=(&(pFVar30->_Text).Value,&local_3900);
  (pFVar30->_Text).bIsSet = local_38f0;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar30->_Text).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_38e8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38e8,
             (FWriteAccessScope *)&local_35d8);
  if ((local_38d8 != 0) && (FStack_38e0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_38e0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_38e0,0,0,0x10);
    local_38d8 = 0;
  }
  if (local_35d8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_35d8.Accessor,&local_35d8);
  }
  if (FStack_38e0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_38e0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_38e8);
  if (local_3900.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_3900.TextData.Reference + 0x10))();
  }
  pFVar30->_TextStyle = &pFVar19->LabelStyle;
  FLLMScope::FLLMScope
            ((FLLMScope *)local_3a18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_3a28 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_3930,&local_3a28,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_3360,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SToolBarButtonBlock.cpp"
             ,0x100,&local_3a41);
  FMemScope::~FMemScope(&local_3930);
  FLLMScope::~FLLMScope((FLLMScope *)local_3a18);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=(&local_3360,&local_38c8,pFVar30);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3360._Widget.SharedReferenceCount.ReferenceController);
  if (local_88 != (code *)0x0) {
    plVar32 = local_78;
    if (local_60 != (longlong *)0x0) {
      plVar32 = local_60;
    }
    (**(code **)(*plVar32 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3770);
  if ((void *)local_3770._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_3770._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3770);
  if ((ITextData *)local_3788._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_3788._0_8_ + 0x10))();
  }
  if (local_3790 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_3790 + 0xc);
    iVar18 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar18 == 1) {
      (**(code **)(local_3790->_padding_ + 8))(local_3790,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar28);
  STextBlock::FArguments::~FArguments(&local_5e0);
  FVar69 = SNullWidget::NullWidget.SharedReferenceCount;
  pSVar12 = SNullWidget::NullWidget.Object;
  local_39a8.Object = SNullWidget::NullWidget.Object;
  local_39a8.SharedReferenceCount.ReferenceController =
       SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  if (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  if (((TSharedPtr<SWidget,1> *)(lVar6 + 0x2c8))->Object == (SWidget *)0x0) {
    if (((local_3898.Object)->Type == SlimHorizontalToolBar) ||
       ((byte)(EVar5 - SlimHorizontalUniformToolBar) < 2)) {
      FVar7 = pFVar19->IconSize;
      if (EVar5 == SlimHorizontalUniformToolBar) {
        local_3a44 = 0x101;
        STextBlock::SetOverflowPolicy(local_38c8.Object,SUB82(&local_3a44,0));
        pTVar41 = TAttribute<EVisibility>::TAttribute<EVisibility><EVisibility>
                            (&local_3028,&EVisibility::Visible);
        SLeafWidget::SetVisibility((SLeafWidget *)local_38c8.Object,pTVar41);
      }
      local_3a60._0_4_ = FVar7._0_4_;
      local_3a60._4_4_ = FVar7._4_4_;
      local_35e8._s_0.X = (double)(float)local_3a60;
      local_35e8._s_0.Y = (double)local_3a60._4_4_;
      pTVar42 = TAttribute<TOptional<UE::Math::TVector2<double>_>_>::
                TAttribute<TOptional<UE::Math::TVector2<double>_>_><UE::Math::TVector2<double>_>
                          (&local_2e18,(TVector2<double> *)&local_35e8._s_0);
      SImage::SetDesiredSizeOverride((SImage *)local_39c8.Object,pTVar42);
      pFVar52 = SHorizontalBox::FArguments::FArguments(&local_1f50);
      local_36e0._padding_ = (longlong)&___7FTagMetaData__6B_;
      local_36e0.Tag = this->TutorialHighlightName;
      pFVar52 = TSlateBaseNamedArgs<SHorizontalBox>::AddMetaData<FTagMetaData,FTagMetaData>
                          ((TSlateBaseNamedArgs<SHorizontalBox> *)pFVar52,&local_36e0);
      pFVar53 = SHorizontalBox::Slot(&local_2820);
      pFVar53 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar53);
      pTVar37 = TAttribute<FMargin>::TAttribute<FMargin><FMargin>(&local_2f08,&pFVar19->IconPadding)
      ;
      pFVar53 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                          ((FSlotArgumentsMixin *)&pFVar53->field_0x18,pTVar37);
      FVar69.ReferenceController = local_39c8.SharedReferenceCount.ReferenceController;
      if (local_37f8 != (undefined4 *)&pFVar53->field_0x50) {
        *(undefined4 *)&pFVar53->field_0x50 = 2;
        pFVar53->field_0x54 = 1;
      }
      pFVar60 = (FSlotArguments *)0x0;
      if (pFVar53 != (FSlotArguments *)0xffffffffffffffb8) {
        pFVar60 = pFVar53;
      }
      puVar2 = &pFVar60->field_0x48;
      if (local_37f0 != (undefined4 *)puVar2) {
        *(undefined4 *)puVar2 = 2;
        pFVar60->field_0x4c = 1;
      }
      local_32e8.Object = (SWidget *)local_39c8.Object;
      local_32e8.SharedReferenceCount.ReferenceController =
           local_39c8.SharedReferenceCount.ReferenceController;
      pFVar53 = (FSlotArguments *)0x0;
      if (puVar2 != (undefined1 *)0x0) {
        pFVar53 = pFVar60;
      }
      if (local_39c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_39c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_39c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar53 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                          ((FSlotArguments *)pFVar53,&local_32e8);
      pFVar52 = SHorizontalBox::FArguments::operator+(pFVar52,pFVar53);
      bVar16 = EVar5 != SlimHorizontalUniformToolBar;
      if (bVar16) {
        pFVar53 = SHorizontalBox::Slot(&local_29f0);
        pFVar53 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar53);
        pTVar37 = &local_2ea8;
      }
      else {
        pFVar53 = SHorizontalBox::Slot(&local_2908);
        pTVar37 = &local_2ed8;
      }
      pTVar37 = TAttribute<FMargin>::TAttribute<FMargin><FMargin>(pTVar37,&pFVar19->LabelPadding);
      pFVar53 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                          ((FSlotArgumentsMixin *)&pFVar53->field_0x18,pTVar37);
      pFVar53 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::VAlign
                          ((FSlotArgumentsMixin *)&pFVar53->field_0x48,VAlign_Center);
      pTVar38 = TAttribute<float>::TAttribute<float><float>
                          (&local_3008,&pFVar19->ButtonTextMaxWidth);
      pFVar53 = SHorizontalBox::FSlot::FSlotArguments::MaxWidth(pFVar53,pTVar38);
      pTVar38 = TAttribute<float>::TAttribute<float><float>
                          (&local_2fe8,&pFVar19->ButtonTextMinWidth);
      pFVar53 = SHorizontalBox::FSlot::FSlotArguments::MinWidth(pFVar53,pTVar38);
      TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_38a8,&local_38c8);
      pFVar53 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                          ((FSlotArguments *)pFVar53,&local_38a8);
      pFVar52 = SHorizontalBox::FArguments::operator+(pFVar52,pFVar53);
      pTVar57 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                          (&local_3100,"SHorizontalBox",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SToolBarButtonBlock.cpp"
                           ,0x12d,&local_3a3e);
      pTVar58 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                          (pTVar57,&local_32d8,pFVar52);
      TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SHorizontalBox>(&local_36c8,pTVar58);
      FVar14.ReferenceController = local_36c8.SharedReferenceCount.ReferenceController;
      pSVar12 = local_36c8.Object;
      FVar13.ReferenceController = local_39a8.SharedReferenceCount.ReferenceController;
      local_36c8.Object = local_39a8.Object;
      local_36c8.SharedReferenceCount.ReferenceController =
           local_39a8.SharedReferenceCount.ReferenceController;
      local_39a8.Object = pSVar12;
      local_39a8.SharedReferenceCount.ReferenceController = FVar14.ReferenceController;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar13.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_32d8.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_3100._Widget.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)
                 CONCAT44(local_38a8.SharedReferenceCount.ReferenceController._4_4_,
                          local_38a8.SharedReferenceCount.ReferenceController._0_4_));
      if (bVar16) {
        SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_29f0);
      }
      else {
        SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_2908);
      }
      bVar67 = bVar16 && !bVar16;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar69.ReferenceController);
      SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_2820);
      SHorizontalBox::FArguments::~FArguments(&local_1f50);
    }
    else {
      if ((this->LabelVisibility).bIsSet == false) {
        lVar62 = 0x361c;
      }
      else {
        pEVar20 = TAttribute<EVisibility>::Get(&this->LabelVisibility);
        lVar62 = 0x361c;
        if ((TEnumAsByte<EVisibility::Private>)(pEVar20->Value).Value !=
            EVisibility::Collapsed.Value.Value) {
          lVar62 = 0x3ed0;
        }
      }
      local_3308._0_8_ = *(undefined8 *)(&pFVar19->field_0x0 + lVar62);
      local_3308._8_8_ = *(undefined8 *)((longlong)(&pFVar19->field_0x0 + lVar62) + 8);
      p<Var33 = `SToolBarButtonBlock::BuildMultiBlockWidget'::__l37::<lambda_2>::<lambda_2>
                          (local_30c8,&local_38c8,&local_3308);
      pTVar34 = TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::
                CreateLambda<_SToolBarButtonBlock::BuildMultiBlockWidget_::__l37::<lambda_2>_>
                          (&local_3148,p<Var33);
      TAttribute<FMargin>::Create(&local_3078,pTVar34);
      TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::
      ~TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>(&local_3148);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_30c0);
      pFVar35 = SVerticalBox::FArguments::FArguments(&local_2360);
      pFVar36 = SVerticalBox::Slot(&local_2ca8);
      pFVar36 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar36);
      pTVar37 = TAttribute<FMargin>::TAttribute<FMargin>(&local_2e48,&local_3078);
      pFVar36 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                          ((FSlotArgumentsMixin *)&pFVar36->field_0x18,pTVar37);
      pFVar36 = TAlignmentWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::HAlign
                          ((FSlotArgumentsMixin *)&pFVar36->field_0x48,HAlign_Center);
      TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SLayeredImage>(&local_3638,&local_39c8);
      pFVar36 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                          ((FSlotArguments *)pFVar36,&local_3638);
      pFVar35 = SVerticalBox::FArguments::operator+(pFVar35,pFVar36);
      pFVar36 = SVerticalBox::Slot(&local_2d90);
      pFVar36 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar36);
      pTVar37 = TAttribute<FMargin>::TAttribute<FMargin><FMargin>
                          (&local_2f38,&pFVar19->LabelPadding);
      pFVar36 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                          ((FSlotArgumentsMixin *)&pFVar36->field_0x18,pTVar37);
      pFVar36 = TAlignmentWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::HAlign
                          ((FSlotArgumentsMixin *)&pFVar36->field_0x48,HAlign_Center);
      TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_3648,&local_38c8);
      pFVar36 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                          ((FSlotArguments *)pFVar36,&local_3648);
      pFVar35 = SVerticalBox::FArguments::operator+(pFVar35,pFVar36);
      this_00 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                          (&local_3130,"SVerticalBox",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SToolBarButtonBlock.cpp"
                           ,0x15b,&local_3a40);
      TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                (this_00,&local_35f8,pFVar35);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_3130._Widget.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_3648.SharedReferenceCount.ReferenceController);
      SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_2d90);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_3638.SharedReferenceCount.ReferenceController);
      SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_2ca8);
      SVerticalBox::FArguments::~FArguments(&local_2360);
      pFVar52 = SHorizontalBox::FArguments::FArguments(&local_2158);
      local_3628._padding_ = (longlong)&___7FTagMetaData__6B_;
      local_3628.Tag = this->TutorialHighlightName;
      pFVar52 = TSlateBaseNamedArgs<SHorizontalBox>::AddMetaData<FTagMetaData,FTagMetaData>
                          ((TSlateBaseNamedArgs<SHorizontalBox> *)pFVar52,&local_3628);
      bVar16 = (local_3898.Object)->Type != VerticalToolBar;
      if (bVar16) {
        pFVar53 = SHorizontalBox::Slot(&local_2bc0);
        pTVar38 = TAttribute<float>::TAttribute<float><float>
                            (&local_2fc8,&pFVar19->ButtonContentFillWidth);
        pFVar53 = SHorizontalBox::FSlot::FSlotArguments::FillWidth(pFVar53,pTVar38);
      }
      else {
        pFVar53 = SHorizontalBox::Slot(&local_2ad8);
        pTVar38 = TAttribute<float>::TAttribute<float><float>
                            (&local_3048,&pFVar19->ButtonContentMaxWidth);
        pFVar53 = SHorizontalBox::FSlot::FSlotArguments::MaxWidth(pFVar53,pTVar38);
        pFVar39 = (FSizeParam *)FStretch::FStretch(&local_2fa8);
        pTVar40 = TOptional<FSizeParam>::TOptional<FSizeParam>(&local_2de0,pFVar39);
        pFVar53 = TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::SizeParam
                            ((FSlotArgumentsMixin *)&pFVar53->field_0x58,pTVar40);
      }
      pFVar53 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::VAlign
                          ((FSlotArgumentsMixin *)&pFVar53->field_0x48,VAlign_Center);
      TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SVerticalBox>(&local_3608,&local_35f8);
      pFVar53 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                          ((FSlotArguments *)pFVar53,&local_3608);
      pFVar52 = SHorizontalBox::FArguments::operator+(pFVar52,pFVar53);
      pTVar57 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                          (&local_3118,"SHorizontalBox",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SToolBarButtonBlock.cpp"
                           ,0x16e,&local_3a3f);
      pTVar58 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                          (pTVar57,&local_32f8,pFVar52);
      TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SHorizontalBox>(&local_3958,pTVar58);
      local_39a8.Object = local_3958.Object;
      local_39a8.SharedReferenceCount.ReferenceController =
           local_3958.SharedReferenceCount.ReferenceController;
      local_3958.Object = pSVar12;
      local_3958.SharedReferenceCount.ReferenceController = FVar69.ReferenceController;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar69.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_32f8.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_3118._Widget.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_3608.SharedReferenceCount.ReferenceController);
      if (bVar16) {
        SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_2bc0);
      }
      else {
        FStretch::~FStretch(&local_2fa8);
        SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_2ad8);
      }
      bVar67 = false;
      SHorizontalBox::FArguments::~FArguments(&local_2158);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_35f8.SharedReferenceCount.ReferenceController);
      TAttribute<FMargin>::~TAttribute<FMargin>(&local_3078);
      FVar69.ReferenceController = local_39c8.SharedReferenceCount.ReferenceController;
    }
  }
  else {
    pTVar31 = TSharedPtr<SWidget,1>::ToSharedRef
                        ((TSharedPtr<SWidget,1> *)(lVar6 + 0x2c8),&local_3318);
    local_39a8.Object = pTVar31->Object;
    local_39a8.SharedReferenceCount.ReferenceController =
         (pTVar31->SharedReferenceCount).ReferenceController;
    pTVar31->Object = pSVar12;
    (pTVar31->SharedReferenceCount).ReferenceController = FVar69.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3318.SharedReferenceCount.ReferenceController);
    FVar69.ReferenceController = local_39c8.SharedReferenceCount.ReferenceController;
  }
  bVar71 = false;
  bVar11 = false;
  bVar16 = false;
  iVar18 = (**(code **)(this->_padding_ + 0x40))(this);
  FVar70.ReferenceController = *(TReferenceControllerBase<1> **)(lVar6 + 0x88);
  pFVar24 = *(FUICommandInfo **)(lVar6 + 0x80);
  if (FVar70.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar70.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar70.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (FVar70.ReferenceController)->WeakReferenceCount =
         (atomic<int>)((int)(FVar70.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_39f8.Object = pFVar24;
  local_39f8.WeakReferenceCount.ReferenceController = FVar70.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar70.ReferenceController);
  EVar59 = *(EUserInterfaceActionType *)(local_39b8 + 0x2d8);
  if (((pFVar24 != (FUICommandInfo *)0x0) &&
      (FVar70.ReferenceController != (TReferenceControllerBase<1> *)0x0)) &&
     (0 < (int)(FVar70.ReferenceController)->SharedReferenceCount)) {
    local_3920 = (FUICommandInfo *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::FSharedReferencer<1>
              (&local_3918,&local_39f8.WeakReferenceCount);
    pFVar66 = local_3920;
    if (local_3918.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      pFVar66 = pFVar24;
    }
    local_3920 = pFVar66;
    if ((pFVar66 == (FUICommandInfo *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar15)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    EVar59 = pFVar66->UserInterfaceType;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3918.ReferenceController);
  }
  if (EVar59 == Button) {
    FVar25 = ISlateStyle::Join((FName)&local_37e0,(char *)*local_38d0);
    EMultiBlockLocation::ToName((FName)&local_3928,(Type)*(undefined8 *)FVar25);
    if (iVar18 == -1) {
      pFVar43 = &pFVar19->ButtonStyle;
    }
    else {
      pFVar43 = ISlateStyle::GetWidgetStyle<FButtonStyle>
                          (local_38b8,local_3928,(char *)0x0,(FButtonStyle *)0x0);
    }
    if (this->_padding_ != 0) {
      pFVar43 = &pFVar19->SettingsButtonStyle;
    }
    pFVar44 = SButton::FArguments::FArguments(&local_b20);
    local_34a8.bIsSet = true;
    local_34a8.Getter._16_8_ = 0;
    local_34a8.Value.Left = 0.0;
    local_34a8.Value.Top = 0.0;
    local_34a8.Value.Right = 0.0;
    local_34a8.Value.Bottom = 0.0;
    local_34a8.Getter._0_8_ = 0;
    local_34a8.Getter._8_8_ = 0;
    this_01 = (FMemScope)SButton::FArguments::ContentPadding(pFVar44,&local_34a8);
    local_38a8.SharedReferenceCount.ReferenceController._0_4_ = 0;
    local_38a8.Object = (SWidget *)IsEnabled;
    lStack_32c0 = (ulonglong)local_38a8.SharedReferenceCount.ReferenceController._4_4_ << 0x20;
    local_32c8 = IsEnabled;
    *(FButtonStyle **)((longlong)this_01 + 0x208) = pFVar43;
    local_3930 = this_01;
    TAttribute<bool>::Bind<SToolBarButtonBlock>
              ((TAttribute<bool> *)((longlong)this_01 + 0xa8),this,(pmf_9fa8a0bd *)&local_32c8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this_01 + 0x2e0)
               ,(FWriteAccessScope *)&local_34c8);
    local_34b0 = (FDelegateAllocation *)((longlong)this_01 + 0x2e8);
    puVar23 = UE::Core::Private::DelegateAllocate(0x38,local_34b0);
    pTVar28 = local_37e0;
    if (puVar23 != (undefined8 *)0x0) {
      local_3958.Object = (SWidget *)OnClicked;
      local_3958.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)
           ((ulonglong)local_3828.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
      pTVar31 = TSharedFromThis<SWidget,1>::AsShared
                          ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_32b8);
      pTVar68 = &pTVar31->Object[-1].StatID;
      if (pTVar31->Object == (SWidget *)0x0) {
        pTVar68 = (TStatId *)0x0;
      }
      pTVar28 = (pTVar31->SharedReferenceCount).ReferenceController;
      if (pTVar28 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar28->SharedReferenceCount = (atomic<int>)((int)pTVar28->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar28->SharedReferenceCount = (atomic<int>)((int)pTVar28->SharedReferenceCount + 1);
        UNLOCK();
      }
      bVar71 = true;
      bVar11 = true;
      bVar16 = true;
      *puVar23 = &
                 ___7__TCommonDelegateInstanceState___A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar27 = FDelegateHandle::GenerateNewID();
      puVar23[2] = uVar27;
      *puVar23 = &
                 ___7__TBaseSPMethodDelegateInstance__0A_VSToolBarButtonBlock___00__A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar23[3] = pTVar68;
      puVar23[4] = pTVar28;
      if (pTVar28 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar28->WeakReferenceCount = (atomic<int>)((int)pTVar28->WeakReferenceCount + 1);
        UNLOCK();
      }
      puVar23[5] = local_3958.Object;
      puVar23[6] = local_3958.SharedReferenceCount.ReferenceController;
      this_01 = local_3930;
    }
    if (bVar16) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar28);
    }
    if (bVar11) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar28);
    }
    if (bVar71) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_32b8.SharedReferenceCount.ReferenceController);
    }
    if (local_34c8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_34c8.Accessor,&local_34c8);
    }
    local_3910 = (FUICommandInfo *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::FSharedReferencer<1>
              (&local_3908,&local_39f8.WeakReferenceCount);
    if (local_3908.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      local_3910 = local_39f8.Object;
    }
    local_3a08 = (code *)0x0;
    uStack_3a00 = (TReferenceControllerBase<1> *)0x0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &FMultiBoxSettings::ToolTipConstructor,&local_3178);
    pIVar61 = (IToolTip *)0x0;
    if (FMultiBoxSettings::ToolTipConstructor._16_4_ != 0) {
      pIVar61 = (IToolTip *)FMultiBoxSettings::ToolTipConstructor._8_8_;
    }
    (**(code **)((longlong)*pIVar61 + 0x60))(pIVar61,&local_37b0,local_3858,&local_3a08);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_3178);
    local_3578.Value.Object = (IToolTip *)(local_37b0 + 0x2a8);
    if (local_37b0 == 0) {
      local_3578.Value.Object = (IToolTip *)0x0;
    }
    local_3578.Value.SharedReferenceCount.ReferenceController = local_37a8;
    if (local_37a8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_37a8->SharedReferenceCount = (atomic<int>)((int)local_37a8->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_3578.bIsSet = true;
    local_3578.Getter._16_8_ = 0;
    local_3578.Getter._0_8_ = 0;
    local_3578.Getter._8_8_ = 0;
    pFVar44 = TSlateBaseNamedArgs<SButton>::ToolTip
                        ((TSlateBaseNamedArgs<SButton> *)this_01,&local_3578);
    pFVar44->_IsFocusable = this->bIsFocusable;
    if (local_39a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_39a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_39a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_32a8 = (pFVar44->_Content).Widget.Object;
    pTStack_32a0 = (pFVar44->_Content).Widget.SharedReferenceCount.ReferenceController;
    (pFVar44->_Content).Widget.Object = local_39a8.Object;
    (pFVar44->_Content).Widget.SharedReferenceCount.ReferenceController =
         local_39a8.SharedReferenceCount.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (pTStack_32a0);
    this_02 = MakeTDecl<SButton,RequiredArgs::T0RequiredArgs>
                        (&local_3208,"SButton",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SToolBarButtonBlock.cpp"
                         ,0x197,&local_3a3d);
    pTVar45 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                        (this_02,&local_3298,pFVar44);
    pTVar28 = (pTVar45->SharedReferenceCount).ReferenceController;
    local_36a8.Object = (SWidget *)pTVar45->Object;
    if (pTVar28 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar28->SharedReferenceCount = (atomic<int>)((int)pTVar28->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_36a8.SharedReferenceCount.ReferenceController = pTVar28;
    TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::operator[]
              ((TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *)
               &this->_padding_,&local_36a8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar28);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3298.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3208._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_37a8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(uStack_3a00)
    ;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3908.ReferenceController);
    SButton::FArguments::~FArguments(&local_b20);
    FVar69.ReferenceController = local_39c8.SharedReferenceCount.ReferenceController;
    FVar70.ReferenceController = local_39f8.WeakReferenceCount.ReferenceController;
  }
  else if ((byte)(EVar59 - ToggleButton) < 2) {
    FVar25 = ISlateStyle::Join((FName)&local_37d8,(char *)*local_38d0);
    EMultiBlockLocation::ToName((FName)&local_3968,(Type)*(undefined8 *)FVar25);
    if (iVar18 == -1) {
      local_3a60 = &pFVar19->ToggleButton;
    }
    else {
      local_3a60 = ISlateStyle::GetWidgetStyle<FCheckBoxStyle>
                             (local_38b8,local_3968,(char *)0x0,(FCheckBoxStyle *)0x0);
    }
    if (this->_padding_ != 0) {
      local_3a60 = &pFVar19->SettingsToggleButton;
    }
    pFVar46 = SCheckBox::FArguments::FArguments(&local_1aa0);
    pFVar46->_Style = local_3a60;
    pFVar46->_CheckBoxContentUsesAutoWidth = false;
    pFVar46->_IsFocusable = this->bIsFocusable;
    TSharedPtr<FUICommandInfo_const_,1>::TSharedPtr<FUICommandInfo_const_,1><FUICommandInfo_const_>
              (&local_3888,&local_39f8);
    local_3688.Object = (SWidget *)0x0;
    local_3688.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar47 = TDelegate<TSharedRef<SToolTip,1>___cdecl(TAttribute<FText>_const_&,TSharedPtr<SWidget,1>_const_&,TSharedPtr<FUICommandInfo_const_,1>_const_&,bool),FDefaultDelegateUserPolicy>
              ::Execute(&FMultiBoxSettings::ToolTipConstructor,&local_3248,
                        (TAttribute<FText> *)local_3858,&local_3688,&local_3888,true);
    pTVar48 = TAttribute<TSharedPtr<IToolTip,1>_>::
              TAttribute<TSharedPtr<IToolTip,1>_><TSharedRef<SToolTip,1>_>(&local_2e78,pTVar47);
    pFVar46 = TSlateBaseNamedArgs<SCheckBox>::ToolTip
                        ((TSlateBaseNamedArgs<SCheckBox> *)pFVar46,pTVar48);
    local_3a08 = OnCheckStateChanged;
    uStack_3a00 = (TReferenceControllerBase<1> *)((ulonglong)uStack_3a00._4_4_ << 0x20);
    local_3288 = OnCheckStateChanged;
    uStack_3280 = (ulonglong)uStack_3a00;
    pFVar46 = SCheckBox::FArguments::OnCheckStateChanged<SToolBarButtonBlock>
                        (pFVar46,this,(pmf_079fac06 *)&local_3288);
    pFVar46 = SCheckBox::FArguments::OnGetMenuContent
                        (pFVar46,(TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
                                  *)(local_39b8 + 0x2f8));
    uStack_3a00 = (TReferenceControllerBase<1> *)((ulonglong)uStack_3a00 & 0xffffffff00000000);
    local_3a08 = GetCheckState;
    local_3278 = GetCheckState;
    uStack_3270 = (ulonglong)uStack_3a00;
    pFVar46 = SCheckBox::FArguments::IsChecked<SToolBarButtonBlock>
                        (pFVar46,this,(pmf_f4f28e80 *)&local_3278);
    uStack_3a00 = (TReferenceControllerBase<1> *)((ulonglong)uStack_3a00 & 0xffffffff00000000);
    local_3a08 = IsEnabled;
    local_3268 = IsEnabled;
    pTStack_3260 = uStack_3a00;
    pFVar46 = TSlateBaseNamedArgs<SCheckBox>::IsEnabled<SToolBarButtonBlock>
                        ((TSlateBaseNamedArgs<SCheckBox> *)pFVar46,this,(pmf_9fa8a0bd *)&local_3268)
    ;
    pFVar46 = SCheckBox::FArguments::operator[](pFVar46,&local_39a8);
    this_03 = MakeTDecl<SCheckBox,RequiredArgs::T0RequiredArgs>
                        (&local_31f0,"SCheckBox",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SToolBarButtonBlock.cpp"
                         ,0x1ae,&local_3a3c);
    pTVar49 = TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>::operator<<=
                        (this_03,&local_3258,pFVar46);
    TSharedPtr<SWidget,1>::TSharedPtr<SWidget,1><SCheckBox>(&local_39e8,pTVar49);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3258.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_31f0._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3248.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3688.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)
               CONCAT44(local_3888.SharedReferenceCount.ReferenceController._4_4_,
                        local_3888.SharedReferenceCount.ReferenceController._0_4_));
    SCheckBox::FArguments::~FArguments(&local_1aa0);
    TSharedPtr<SWidget,1>::ToSharedRef(&local_39e8,&local_3948);
    lVar6 = local_39b8;
    pFVar50 = TAttribute<FName>::Get((TAttribute<FName> *)(local_39b8 + 600));
    if (*pFVar50 == (FName)0x0) {
      uVar72 = local_3948.Object._0_4_;
      uVar73 = local_3948.Object._4_4_;
      uVar74 = local_3948.SharedReferenceCount.ReferenceController._0_4_;
      uVar75 = local_3948.SharedReferenceCount.ReferenceController._4_4_;
    }
    else {
      pFVar50 = TAttribute<FName>::Get((TAttribute<FName> *)(lVar6 + 600));
      local_3a30 = (SCompoundWidget *)FAppStyle::GetBrush(*pFVar50,(char *)0x0);
      pFVar54 = SBorder::FArguments::FArguments(&local_16c0);
      pTVar51 = TAttribute<FSlateBrush_const_*>::
                TAttribute<FSlateBrush_const_*><FSlateBrush_const_*>
                          (&local_2f60,(FSlateBrush **)&local_3a30);
      pFVar54 = SBorder::FArguments::BorderImage(pFVar54,pTVar51);
      pFVar54 = SBorder::FArguments::Padding(pFVar54,__real_40000000);
      pTVar31 = TSharedPtr<SWidget,1>::ToSharedRef(&local_39e8,&local_3438);
      pFVar54 = SBorder::FArguments::operator[](pFVar54,pTVar31);
      pTVar55 = MakeTDecl<SBorder,RequiredArgs::T0RequiredArgs>
                          (&local_31c0,"SBorder",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SToolBarButtonBlock.cpp"
                           ,0x1c2,&local_3a3b);
      pTVar56 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                          (pTVar55,&local_3448,pFVar54);
      TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBorder>(&local_3238,pTVar56);
      FVar13.ReferenceController = local_3948.SharedReferenceCount.ReferenceController;
      local_3948.Object = (SWidget *)CONCAT44(local_3238.Object._4_4_,local_3238.Object._0_4_);
      local_3948.SharedReferenceCount.ReferenceController._4_4_ =
           local_3238.SharedReferenceCount.ReferenceController._4_4_;
      local_3948.SharedReferenceCount.ReferenceController._0_4_ =
           local_3238.SharedReferenceCount.ReferenceController._0_4_;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar13.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_3448.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_31c0._Widget.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_3438.SharedReferenceCount.ReferenceController);
      SBorder::FArguments::~FArguments(&local_16c0);
      uVar72 = local_3238.Object._0_4_;
      uVar73 = local_3238.Object._4_4_;
      uVar74 = local_3238.SharedReferenceCount.ReferenceController._0_4_;
      uVar75 = local_3238.SharedReferenceCount.ReferenceController._4_4_;
    }
    lVar6 = local_39b8;
    bVar16 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                       ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_39b8 + 0x310));
    if (bVar16) {
      pTVar31 = TSharedRef<SWidget,1>::TSharedRef<SWidget,1>(&local_33a8,&local_3948);
      pTVar31 = TDelegate<TSharedRef<SWidget,1>___cdecl(TSharedRef<SWidget,1>),FDefaultDelegateUserPolicy>
                ::Execute((TDelegate<TSharedRef<SWidget,1>___cdecl(TSharedRef<SWidget,1>),FDefaultDelegateUserPolicy>
                           *)(lVar6 + 0x310),&local_3428,pTVar31);
      local_3948.Object = pTVar31->Object;
      local_3948.SharedReferenceCount.ReferenceController =
           (pTVar31->SharedReferenceCount).ReferenceController;
      *(undefined4 *)&pTVar31->Object = uVar72;
      *(undefined4 *)((longlong)&pTVar31->Object + 4) = uVar73;
      *(undefined4 *)&(pTVar31->SharedReferenceCount).ReferenceController = uVar74;
      *(undefined4 *)((longlong)&(pTVar31->SharedReferenceCount).ReferenceController + 4) = uVar75;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_3428.SharedReferenceCount.ReferenceController);
    }
    TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::operator[]
              ((TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *)
               &this->_padding_,&local_3948);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3948.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)
               CONCAT44(local_39e8.SharedReferenceCount.ReferenceController._4_4_,
                        local_39e8.SharedReferenceCount.ReferenceController._0_4_));
  }
  else {
    bVar16 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<5605665029815796131>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SToolBarButtonBlock.cpp"
                        ,0x1a3,
                        "UserInterfaceType == EUserInterfaceActionType::ToggleButton || UserInterfaceType == EUserInterfaceActionType::RadioButton"
                       );
    if (bVar16) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  plVar32 = &this->_padding_;
  if (this->_padding_ == 0) {
    local_3a54 = (pFVar19->ButtonPadding).Left;
    fStack_3a50 = (pFVar19->ButtonPadding).Top;
    fStack_3a4c = (pFVar19->ButtonPadding).Right;
    fStack_3a48 = (pFVar19->ButtonPadding).Bottom;
    if (((local_3898.Object)->Type == VerticalToolBar) || ((local_3898.Object)->Type == Menu)) {
      if (iVar18 == 0) {
        fStack_3a48 = 0.0;
      }
      else if (iVar18 == 1) {
        fStack_3a50 = 0.0;
        fStack_3a48 = 0.0;
      }
      else if (iVar18 == 2) {
        fStack_3a50 = 0.0;
      }
    }
    else if (iVar18 == 0) {
      fStack_3a4c = 0.0;
    }
    else if (iVar18 == 1) {
      local_3a54 = 0.0;
      fStack_3a4c = 0.0;
    }
    else if (iVar18 == 2) {
      local_3a54 = 0.0;
    }
    local_3478.Value.Top = fStack_3a50;
    local_3478.Value.Left = local_3a54;
    local_3478.Value.Bottom = fStack_3a48;
    local_3478.Value.Right = fStack_3a4c;
    local_3478.bIsSet = true;
    local_3478.Getter._16_8_ = 0;
    local_3478.Getter._0_8_ = 0;
    local_3478.Getter._8_8_ = 0;
    TPaddingSingleWidgetSlotMixin<TSingleWidgetChildrenWithBasicLayoutSlot<0>,0>::Padding
              ((TPaddingSingleWidgetSlotMixin<TSingleWidgetChildrenWithBasicLayoutSlot<0>,0> *)
               plVar32,&local_3478);
  }
  else {
    local_3738.Value.Left = (pFVar19->ComboButtonPadding).Left;
    local_3738.Value.Right = (pFVar19->ComboButtonPadding).Right;
    FVar25.ComparisonIndex.Value = 0;
    FVar25.Number = 0;
    local_3738.Getter._16_8_ = 0;
    local_3738.Value.Top = 0.0;
    local_3738.Value.Bottom = 0.0;
    local_3738.bIsSet = true;
    local_3738.Getter._0_8_ = 0;
    local_3738.Getter._8_8_ = 0;
    TPaddingSingleWidgetSlotMixin<TSingleWidgetChildrenWithBasicLayoutSlot<0>,0>::SetPadding
              ((TPaddingSingleWidgetSlotMixin<TSingleWidgetChildrenWithBasicLayoutSlot<0>,0> *)
               plVar32,&local_3738);
    local_3928 = (FName)&this->_padding_;
    if (plVar32 == (longlong *)0x0) {
      local_3928 = FVar25;
    }
    pFVar52 = SHorizontalBox::FArguments::FArguments(&local_2568);
    pFVar53 = SHorizontalBox::Slot(&local_2650);
    local_3a30 = (SCompoundWidget *)SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar53);
    pFVar54 = SBorder::FArguments::FArguments(&local_f00);
    pFVar54 = SBorder::FArguments::Padding(pFVar54,0.0);
    local_3888.SharedReferenceCount.ReferenceController._0_4_ = 0;
    local_3888.Object = (FUICommandInfo *)GetOptionsBlockLeftBrush;
    lStack_3410 = (ulonglong)local_3888.SharedReferenceCount.ReferenceController._4_4_ << 0x20;
    local_3418 = GetOptionsBlockLeftBrush;
    TAttribute<FSlateBrush_const_*>::Bind<SToolBarButtonBlock>
              (&pFVar54->_BorderImage,this,(pmf_7c3d37a6 *)&local_3418);
    pFVar54->_VAlign = VAlign_Center;
    TSharedRef<SWidget,1>::operator=
              (&(pFVar54->_Content).Widget,(TSharedRef<SWidget,1> *)&this->_padding_);
    pTVar55 = MakeTDecl<SBorder,RequiredArgs::T0RequiredArgs>
                        (&local_3190,"SBorder",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SToolBarButtonBlock.cpp"
                         ,0x1de,&local_3a3a);
    pTVar55 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::Expose<SBorder>
                        (pTVar55,&this->ButtonBorder);
    pTVar56 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                        (pTVar55,&local_33c8,pFVar54);
    pTVar28 = (pTVar56->SharedReferenceCount).ReferenceController;
    local_3878.Object = (SWidget *)pTVar56->Object;
    if (pTVar28 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar28->SharedReferenceCount = (atomic<int>)((int)pTVar28->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_3878.SharedReferenceCount.ReferenceController = pTVar28;
    pFVar53 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                        ((FSlotArguments *)local_3a30,&local_3878);
    local_3968 = (FName)SHorizontalBox::FArguments::operator+(pFVar52,pFVar53);
    pFVar53 = SHorizontalBox::Slot(&local_2738);
    local_3a30 = (SCompoundWidget *)SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar53);
    pFVar54 = SBorder::FArguments::FArguments(&local_12e0);
    pFVar54 = SBorder::FArguments::Padding(pFVar54,0.0);
    local_3878.Object = (SWidget *)GetOptionsBlockRightBrush;
    local_3878.SharedReferenceCount.ReferenceController =
         local_3878.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
    local_3408 = GetOptionsBlockRightBrush;
    pTStack_3400 = local_3878.SharedReferenceCount.ReferenceController;
    TAttribute<FSlateBrush_const_*>::Bind<SToolBarButtonBlock>
              (&pFVar54->_BorderImage,this,(pmf_7c3d37a6 *)&local_3408);
    pFVar54->_VAlign = VAlign_Center;
    pTVar31 = TSharedPtr<SWidget,1>::ToSharedRef
                        ((TSharedPtr<SWidget,1> *)&this->_padding_,&local_33d8);
    TSharedRef<SWidget,1>::operator=(&(pFVar54->_Content).Widget,pTVar31);
    pTVar55 = MakeTDecl<SBorder,RequiredArgs::T0RequiredArgs>
                        (&local_31a8,"SBorder",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SToolBarButtonBlock.cpp"
                         ,0x1ea,&local_3a39);
    pTVar55 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::Expose<SBorder>
                        (pTVar55,&this->OptionsBorder);
    pTVar56 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                        (pTVar55,&local_33e8,pFVar54);
    pTVar8 = (pTVar56->SharedReferenceCount).ReferenceController;
    local_3618.Object = (SWidget *)pTVar56->Object;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_3618.SharedReferenceCount.ReferenceController = pTVar8;
    pFVar53 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                        ((FSlotArguments *)local_3a30,&local_3618);
    pFVar52 = SHorizontalBox::FArguments::operator+((FArguments *)local_3968,pFVar53);
    pTVar57 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                        (&local_31d8,"SHorizontalBox",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SToolBarButtonBlock.cpp"
                         ,0x1da,local_3a38);
    pTVar58 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                        (pTVar57,&local_33f8,pFVar52);
    pTVar9 = (pTVar58->SharedReferenceCount).ReferenceController;
    local_3658.Object = (SWidget *)pTVar58->Object;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_3658.SharedReferenceCount.ReferenceController = pTVar9;
    TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::operator[]
              ((TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *)
               local_3928,&local_3658);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_33f8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_31d8._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_33e8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_31a8._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_33d8.SharedReferenceCount.ReferenceController);
    SBorder::FArguments::~FArguments(&local_12e0);
    SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_2738);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar28);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_33c8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3190._Widget.SharedReferenceCount.ReferenceController);
    SBorder::FArguments::~FArguments(&local_f00);
    SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_2650);
    TArray<SHorizontalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>::
    ~TArray<SHorizontalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>(&local_2568._Slots);
    FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_2568);
  }
  local_37d0[0] = (TEnumAsByte<EVisibility::Private>)0x19;
  local_37d0[1] = true;
  this_04 = (SCompoundWidget *)&this->_padding_;
  FStack_37c0.DelegateSize = 0;
  local_37c8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_37c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_3a30 = this_04;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_37c8,(FWriteAccessScope *)&local_34e8);
  local_34d0 = &FStack_37c0;
  puVar23 = UE::Core::Private::DelegateAllocate(0x38,&FStack_37c0);
  pTVar28 = local_37d8;
  if (puVar23 != (undefined8 *)0x0) {
    local_39e8.SharedReferenceCount.ReferenceController._4_4_ =
         local_33a8.SharedReferenceCount.ReferenceController._4_4_;
    local_39e8.Object = (SWidget *)GetBlockVisibility;
    local_39e8.SharedReferenceCount.ReferenceController._0_4_ = 0;
    pTVar26 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_3828);
    pTVar28 = (pTVar26->SharedReferenceCount).ReferenceController;
    pTVar68 = &pTVar26->Object[-1].StatID;
    if (pTVar26->Object == (SWidget *)0x0) {
      pTVar68 = (TStatId *)0x0;
    }
    if (pTVar28 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar28->SharedReferenceCount = (atomic<int>)((int)pTVar28->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar28->SharedReferenceCount = (atomic<int>)((int)pTVar28->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar67 = bVar67 | 0xe0;
    *puVar23 = &
               ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar27 = FDelegateHandle::GenerateNewID();
    puVar23[2] = uVar27;
    *puVar23 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSToolBarButtonBlock___00__A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar23[3] = pTVar68;
    puVar23[4] = pTVar28;
    if (pTVar28 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar28->WeakReferenceCount = (atomic<int>)((int)pTVar28->WeakReferenceCount + 1);
      UNLOCK();
    }
    puVar23[5] = local_39e8.Object;
    puVar23[6] = CONCAT44(local_39e8.SharedReferenceCount.ReferenceController._4_4_,
                          local_39e8.SharedReferenceCount.ReferenceController._0_4_);
    this_04 = local_3a30;
  }
  if ((char)bVar67 < '\0') {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar28);
  }
  if ((bVar67 & 0x40) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar28);
  }
  if ((bVar67 & 0x20) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)
               CONCAT44(local_3828.SharedReferenceCount.ReferenceController._4_4_,
                        local_3828.SharedReferenceCount.ReferenceController._0_4_));
  }
  if (local_34e8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_34e8.Accessor,&local_34e8);
  }
  SCompoundWidget::SetVisibility(this_04,(TAttribute<EVisibility> *)local_37d0);
  if (FVar70.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar3 = &(FVar70.ReferenceController)->WeakReferenceCount;
    aVar4 = *paVar3;
    *paVar3 = (atomic<int>)((int)*paVar3 + -1);
    UNLOCK();
    if (aVar4 == (atomic<int>)0x1) {
      (**(code **)((FVar70.ReferenceController)->_padding_ + 8))(FVar70.ReferenceController,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_39a8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38c8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar69.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3840);
  if (pvStack_3838 != (void *)0x0) {
    FMemory::Free(pvStack_3838);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3840);
  if ((ITextData *)local_3858._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_3858._0_8_ + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3980,
             (FWriteAccessScope *)&local_35c0);
  if (((int)local_3970 != 0) && (FStack_3978.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_3978.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_3978,0,0,0x10);
    local_3970 = local_3970 & 0xffffffff00000000;
  }
  if (local_35c0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_35c0.Accessor,&local_35c0);
  }
  if (FStack_3978.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_3978.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3980);
  if ((ITextData *)local_3998._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_3998._0_8_ + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3868.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_3960);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3898.SharedReferenceCount.ReferenceController);
  return;
}

// Construct @ 1427efb00

void __thiscall SToolBarButtonBlock::Construct(SToolBarButtonBlock *this,FArguments *param_1)

{
  if (&param_1->_LabelVisibility != &this->LabelVisibilityOverride) {
    if ((param_1->_LabelVisibility).bIsSet == false) {
      if ((this->LabelVisibilityOverride).bIsSet != false) {
        (this->LabelVisibilityOverride).bIsSet = false;
      }
    }
    else {
      (this->LabelVisibilityOverride).TypedValue.Value.Value =
           (param_1->_LabelVisibility).TypedValue.Value.Value;
      (this->LabelVisibilityOverride).bIsSet = true;
    }
  }
  this->bIsFocusable = param_1->_IsFocusable;
  this->bForceSmallIcons = param_1->_ForceSmallIcons;
  this->TutorialHighlightName = param_1->_TutorialHighlightName;
  return;
}

// GetBlockVisibility @ 14280d280

EVisibility __thiscall SToolBarButtonBlock::GetBlockVisibility(SToolBarButtonBlock *this)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  FUICommandList *this_00;
  code *pcVar3;
  bool bVar4;
  TEnumAsByte<EVisibility::Private> TVar5;
  char cVar6;
  EVisibility *pEVar7;
  EVisibility EVar8;
  TSharedRef<FUICommandInfo_const_,1> *in_RDX;
  longlong *plVar9;
  undefined1 local_c0 [8];
  ForAnyElementType FStack_b8;
  int local_b0;
  undefined1 local_a8 [8];
  undefined1 local_a0 [8];
  ForAnyElementType FStack_98;
  int local_90;
  TSharedPtr<FUICommandInfo_const_,1> local_88;
  FDestructionSentinel local_78;
  FDestructionSentinel local_60;
  FReadAccessScope local_48;
  TSharedRef<FUICommandInfo_const_,1> local_30;
  
  if (this->_padding_ == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      TVar5.Value = (*pcVar3)();
      return (TEnumAsByte<EVisibility::Private>)(TEnumAsByte<EVisibility::Private>)TVar5.Value;
    }
  }
  plVar9 = (longlong *)0x0;
  cVar6 = *(char *)(this->_padding_ + 0xc1);
  local_c0 = (undefined1  [8])0x0;
  FStack_b8.Data = (FScriptContainerElement *)0x0;
  local_b0 = 0;
  TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)local_c0,
             (TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)
             (this->_padding_ + 200));
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c0,
             (FWriteAccessScope *)&local_78);
  if ((local_b0 != 0) && (FStack_b8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_b8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_b8,0,0,0x10);
    local_b0 = 0;
  }
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  if (FStack_b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_b8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_c0);
  if (cVar6 != '\0') {
    if (this->_padding_ == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        TVar5.Value = (*pcVar3)();
        return (TEnumAsByte<EVisibility::Private>)(TEnumAsByte<EVisibility::Private>)TVar5.Value;
      }
    }
    lVar1 = this->_padding_;
    local_a8[0] = *(TEnumAsByte<EVisibility::Private> *)(lVar1 + 0xc0);
    local_a8[1] = *(undefined1 *)(lVar1 + 0xc1);
    local_a0 = (undefined1  [8])0x0;
    FStack_98.Data = (FScriptContainerElement *)0x0;
    local_90 = 0;
    TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)local_a0,
               (TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)(lVar1 + 200));
    pEVar7 = TAttribute<EVisibility>::Get((TAttribute<EVisibility> *)local_a8);
    TVar5.Value = (pEVar7->Value).Value;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a0,
               (FWriteAccessScope *)&local_60);
    if ((local_90 != 0) && (FStack_98.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_98.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_98,0,0,0x10);
      local_90 = 0;
    }
    if (local_60.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
    }
    if (FStack_98.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_98.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_a0);
    if ((TEnumAsByte<EVisibility::Private>)TVar5.Value != EVisibility::Visible.Value.Value) {
      *(uchar *)&in_RDX->Object = TVar5.Value;
      goto LAB_14280d5ea;
    }
  }
  if (this->_padding_ == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      TVar5.Value = (*pcVar3)();
      return (TEnumAsByte<EVisibility::Private>)(TEnumAsByte<EVisibility::Private>)TVar5.Value;
    }
  }
  pTVar2 = *(TReferenceControllerBase<1> **)(this->_padding_ + 0x98);
  this_00 = *(FUICommandList **)(this->_padding_ + 0x90);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this->_padding_ == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      TVar5.Value = (*pcVar3)();
      return (TEnumAsByte<EVisibility::Private>)(TEnumAsByte<EVisibility::Private>)TVar5.Value;
    }
  }
  lVar1 = this->_padding_;
  if (this_00 == (FUICommandList *)0x0) {
    bVar4 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                      ((TDelegateBase<FNotThreadSafeDelegateMode> *)(lVar1 + 0x60));
    if (bVar4) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar1 + 0x60),&local_48)
      ;
      if (*(int *)(lVar1 + 0x70) != 0) {
        plVar9 = *(longlong **)(lVar1 + 0x68);
      }
      cVar6 = (**(code **)(*plVar9 + 0x60))(plVar9);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_48);
      EVar8 = EVisibility::Collapsed;
      if (cVar6 != '\0') {
        EVar8 = EVisibility::Visible;
      }
      *(TEnumAsByte<EVisibility::Private> *)&in_RDX->Object = EVar8.Value.Value;
    }
    else {
      *(TEnumAsByte<EVisibility::Private> *)&in_RDX->Object = EVisibility::Visible.Value.Value;
    }
  }
  else {
    if (lVar1 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        TVar5.Value = (*pcVar3)();
        return (TEnumAsByte<EVisibility::Private>)(TEnumAsByte<EVisibility::Private>)TVar5.Value;
      }
    }
    local_88.Object = *(FUICommandInfo **)(this->_padding_ + 0x80);
    local_88.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)(this->_padding_ + 0x88);
    if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    TSharedPtr<FUICommandInfo_const_,1>::ToSharedRef(&local_88,&local_30);
    FUICommandList::GetVisibility(this_00,in_RDX);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_88.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
LAB_14280d5ea:
  return (EVisibility)SUB81(in_RDX,0);
}

// GetCheckState @ 14280e380

ECheckBoxState __thiscall SToolBarButtonBlock::GetCheckState(SToolBarButtonBlock *this)

{
  TReferenceControllerBase<1> *pTVar1;
  FUICommandList *this_00;
  TReferenceControllerBase<1> *pTVar2;
  FUICommandInfo *pFVar3;
  code *pcVar4;
  bool bVar5;
  ECheckBoxState EVar6;
  TSharedRef<FUICommandInfo_const_,1> local_18;
  
  if (this->_padding_ == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      EVar6 = (*pcVar4)();
      return EVar6;
    }
  }
  pTVar1 = *(TReferenceControllerBase<1> **)(this->_padding_ + 0x98);
  this_00 = *(FUICommandList **)(this->_padding_ + 0x90);
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this->_padding_ == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      EVar6 = (*pcVar4)();
      return EVar6;
    }
  }
  pTVar2 = *(TReferenceControllerBase<1> **)(this->_padding_ + 0x88);
  pFVar3 = *(FUICommandInfo **)(this->_padding_ + 0x80);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this->_padding_ == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      EVar6 = (*pcVar4)();
      return EVar6;
    }
  }
  if ((this_00 == (FUICommandList *)0x0) || (pFVar3 == (FUICommandInfo *)0x0)) {
    EVar6 = FUIAction::GetCheckState((FUIAction *)(this->_padding_ + 0x18));
  }
  else {
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_18.Object = pFVar3;
    local_18.SharedReferenceCount.ReferenceController = pTVar2;
    if (pFVar3 == (FUICommandInfo *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        EVar6 = (*pcVar4)();
        return EVar6;
      }
    }
    EVar6 = FUICommandList::GetCheckState(this_00,&local_18);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return EVar6;
}

// GetIconBrush @ 142810300

FSlateBrush * __thiscall SToolBarButtonBlock::GetIconBrush(SToolBarButtonBlock *this)

{
  bool *pbVar1;
  FSlateBrush *pFVar2;
  
  if (this->bForceSmallIcons == false) {
    pbVar1 = TAttribute<bool>::Get(&FMultiBoxSettings::UseSmallToolBarIcons);
    if (*pbVar1 == false) {
      pFVar2 = GetNormalIconBrush(this);
      return pFVar2;
    }
  }
  pFVar2 = GetSmallIconBrush(this);
  return pFVar2;
}

// GetIconForegroundColor @ 142810400

FSlateColor * __thiscall
SToolBarButtonBlock::GetIconForegroundColor
          (SToolBarButtonBlock *this,FSlateColor *__return_storage_ptr__)

{
  FLinearColor_u_0 FVar1;
  bool *pbVar2;
  FSlateBrush *pFVar3;
  
  if (this->bForceSmallIcons == false) {
    pbVar2 = TAttribute<bool>::Get(&FMultiBoxSettings::UseSmallToolBarIcons);
    if (*pbVar2 == false) {
      pFVar3 = GetNormalIconBrush(this);
      goto LAB_14281043c;
    }
  }
  pFVar3 = GetSmallIconBrush(this);
LAB_14281043c:
  if ((pFVar3 != (FSlateBrush *)0x0) &&
     ((((FLinearColor::White.field0_0x0._s_0.R !=
         (pFVar3->TintColor).SpecifiedColor.field0_0x0._s_0.R ||
        (FLinearColor::White.field0_0x0._s_0.G !=
         (pFVar3->TintColor).SpecifiedColor.field0_0x0._s_0.G)) ||
       (FLinearColor::White.field0_0x0._s_0.B !=
        (pFVar3->TintColor).SpecifiedColor.field0_0x0._s_0.B)) ||
      ((FLinearColor::White.field0_0x0._s_0.A !=
        (pFVar3->TintColor).SpecifiedColor.field0_0x0._s_0.A ||
       ((pFVar3->TintColor).ColorUseRule != UseColor_Specified)))))) {
    FVar1._s_0.G = FLinearColor::White.field0_0x0._s_0.G;
    FVar1._s_0.R = FLinearColor::White.field0_0x0._s_0.R;
    FVar1._s_0.B = FLinearColor::White.field0_0x0._s_0.B;
    FVar1._s_0.A = FLinearColor::White.field0_0x0._s_0.A;
    __return_storage_ptr__->ColorUseRule = UseColor_Specified;
    (__return_storage_ptr__->SpecifiedColor).field0_0x0 = FVar1;
    return __return_storage_ptr__;
  }
  *(undefined8 *)&(__return_storage_ptr__->SpecifiedColor).field0_0x0 = 0x3f800000;
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.B = 1.0;
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.A = 1.0;
  __return_storage_ptr__->ColorUseRule = UseColor_Foreground;
  __return_storage_ptr__->ColorTableId = Black;
  return __return_storage_ptr__;
}

// GetIconVisibility @ 142810820

EVisibility __thiscall
SToolBarButtonBlock::GetIconVisibility(SToolBarButtonBlock *this,bool param_1)

{
  EVisibility EVar1;
  bool *pbVar2;
  undefined7 in_register_00000011;
  char in_R8B;
  char cVar3;
  
  if (this->bForceSmallIcons == false) {
    pbVar2 = TAttribute<bool>::Get(&FMultiBoxSettings::UseSmallToolBarIcons);
    if (*pbVar2 == false) {
      cVar3 = '\0';
      goto LAB_142810856;
    }
  }
  cVar3 = '\x01';
LAB_142810856:
  EVar1.Value.Value = EVisibility::HitTestInvisible.Value.Value;
  if (in_R8B != cVar3) {
    EVar1.Value.Value = EVisibility::Collapsed.Value.Value;
  }
  *(TEnumAsByte<EVisibility::Private> *)CONCAT71(in_register_00000011,param_1) = EVar1.Value.Value;
  return (TEnumAsByte<EVisibility::Private>)(TEnumAsByte<EVisibility::Private>)param_1;
}

// GetNormalIconBrush @ 142811310

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FSlateBrush * __thiscall SToolBarButtonBlock::GetNormalIconBrush(SToolBarButtonBlock *this)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong lVar4;
  code *pcVar5;
  atomic<int> aVar6;
  bool bVar7;
  atomic<int> aVar8;
  FSlateBrush *pFVar9;
  FSlateIcon *pFVar10;
  ISlateStyle *pIVar11;
  TReferenceControllerBase<1> *pTVar12;
  SMultiBoxWidget *pSVar13;
  SMultiBoxWidget *pSVar14;
  SMultiBoxWidget *this_00;
  uint uStackX_c;
  FSlateIcon local_88;
  FSlateIcon local_68;
  FSlateIcon local_48;
  
  this_00 = (SMultiBoxWidget *)0x0;
  if ((this->_padding_ == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pFVar9 = (FSlateBrush *)(*pcVar5)();
    return pFVar9;
  }
  pTVar1 = (TReferenceControllerBase<1> *)this->_padding_;
  lVar2 = this->_padding_;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((lVar2 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pFVar9 = (FSlateBrush *)(*pcVar5)();
    return pFVar9;
  }
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar3 = *(TReferenceControllerBase<1> **)(lVar2 + 0x88);
  lVar4 = *(longlong *)(lVar2 + 0x80);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (lVar4 == 0) {
    pFVar10 = FSlateIcon::FSlateIcon(&local_48);
    pTVar12 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
    pSVar14 = this_00;
  }
  else {
    pTVar12 = *(TReferenceControllerBase<1> **)(lVar2 + 0x88);
    lVar4 = *(longlong *)(lVar2 + 0x80);
    if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((lVar4 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pFVar9 = (FSlateBrush *)(*pcVar5)();
      return pFVar9;
    }
    pFVar10 = &local_88;
    local_88.StyleSetName = *(FName *)(lVar4 + 0x40);
    local_88.StyleName = *(FName *)(lVar4 + 0x48);
    local_88.SmallStyleName = *(FName *)(lVar4 + 0x50);
    local_88.StatusOverlayStyleName = *(FName *)(lVar4 + 0x58);
    pSVar14 = (SMultiBoxWidget *)&DAT_00000001;
  }
  local_68.StyleSetName = pFVar10->StyleSetName;
  local_68.StyleName = pFVar10->StyleName;
  local_68.SmallStyleName = pFVar10->SmallStyleName;
  local_68.StatusOverlayStyleName = pFVar10->StatusOverlayStyleName;
  if (pSVar14 != (SMultiBoxWidget *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  if (*(char *)(lVar2 + 0x2a0) == '\0') {
    pFVar10 = &local_68;
  }
  else {
    pFVar10 = TAttribute<FSlateIcon>::Get((TAttribute<FSlateIcon> *)(lVar2 + 0x280));
  }
  if ((pFVar10->StyleSetName != (FName)0x0) && (pFVar10->StyleName != (FName)0x0)) {
    pFVar9 = FSlateIcon::GetIcon(pFVar10);
    goto LAB_14281159c;
  }
  if (((this->_padding_ == 0) || ((this->_padding_ == 0 || (*(int *)(this->_padding_ + 8) < 1)))) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("OwnerMultiBoxWidget.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SToolBarButtonBlock.cpp"
                         ,0x2a8,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pFVar9 = (FSlateBrush *)(*pcVar5)();
    return pFVar9;
  }
  pSVar14 = (SMultiBoxWidget *)this->_padding_;
  pSVar13 = pSVar14;
  if (pSVar14 == (SMultiBoxWidget *)0x0) {
LAB_142811527:
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    pSVar14 = pSVar13;
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pFVar9 = (FSlateBrush *)(*pcVar5)();
      return pFVar9;
    }
  }
  else {
    aVar6 = *(atomic<int> *)&pSVar14->_padding_;
    do {
      pSVar13 = this_00;
      if (aVar6 == (atomic<int>)0x0) goto LAB_142811527;
      LOCK();
      aVar8 = *(atomic<int> *)&pSVar14->_padding_;
      bVar7 = aVar6 == aVar8;
      if (bVar7) {
        *(atomic<int> *)&pSVar14->_padding_ = (atomic<int>)((int)aVar6 + 1);
        aVar8 = aVar6;
      }
      UNLOCK();
      aVar6 = aVar8;
    } while (!bVar7);
    this_00 = (SMultiBoxWidget *)this->_padding_;
    pSVar13 = pSVar14;
    if (this_00 == (SMultiBoxWidget *)0x0) goto LAB_142811527;
  }
  pIVar11 = SMultiBoxWidget::GetStyleSet(this_00);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&IconName,"MultiBox.GenericToolBarIcon");
    _Init_thread_footer(&::_TSS0);
  }
  pFVar9 = (FSlateBrush *)(**(code **)((longlong)*pIVar11 + 0x50))(pIVar11,IconName,0,0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar14);
LAB_14281159c:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return pFVar9;
}

// GetOptionsBlockLeftBrush @ 1428133d0

FSlateBrush * __thiscall SToolBarButtonBlock::GetOptionsBlockLeftBrush(SToolBarButtonBlock *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  ECheckBoxState EVar4;
  FSlateBrush *pFVar5;
  ISlateStyle *pIVar6;
  FName FVar7;
  ulonglong uVar8;
  
  uVar8 = (ulonglong)_tls_index;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar8 * 8) + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&ToggledLeft,"ToolbarSettingsRegion.LeftToggle");
      _Init_thread_footer(&::_TSS0);
    }
  }
  if ((this->ButtonBorder).Object == (SBorder *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FSlateBrush *)(*pcVar2)();
      return pFVar5;
    }
  }
  if (*(char *)((longlong)&((this->ButtonBorder).Object)->_padding_ + 3) == '\0') {
    if ((this->OptionsBorder).Object == (SBorder *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FSlateBrush *)(*pcVar2)();
        return pFVar5;
      }
    }
    if (*(char *)((longlong)&((this->OptionsBorder).Object)->_padding_ + 3) == '\0') {
      EVar4 = GetCheckState(this);
      if (EVar4 == Checked) {
        pIVar6 = FAppStyle::Get();
                    /* WARNING: Could not recover jumptable at 0x00014281364b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pFVar5 = (FSlateBrush *)(**(code **)((longlong)*pIVar6 + 0x50))(pIVar6,ToggledLeft,0,0);
        return pFVar5;
      }
      pFVar5 = FStyleDefaults::GetNoBrush();
      return pFVar5;
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar8 * 8) + 0x9d4c) < ::_TSS3)
    {
      _Init_thread_header(&::_TSS3);
      if (::_TSS3 == -1) {
        ::FName::FName(&Left,"ToolbarSettingsRegion.Left");
        _Init_thread_footer(&::_TSS3);
      }
    }
    EVar4 = GetCheckState(this);
    if (EVar4 == Checked) {
      pIVar6 = FAppStyle::Get();
      FVar7 = ToggledLeft;
    }
    else {
      pIVar6 = FAppStyle::Get();
      FVar7 = Left;
    }
  }
  else {
    lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar8 * 8);
    if (*(int *)(lVar1 + 0x9d4c) < ::_TSS1) {
      _Init_thread_header(&::_TSS1);
      if (::_TSS1 == -1) {
        ::FName::FName(&LeftHover,"ToolbarSettingsRegion.LeftHover");
        _Init_thread_footer(&::_TSS1);
      }
    }
    if (*(int *)(lVar1 + 0x9d4c) < ::_TSS2) {
      _Init_thread_header(&::_TSS2);
      if (::_TSS2 == -1) {
        ::FName::FName(&ToggledLeftHover,"ToolbarSettingsRegion.LeftToggleHover");
        _Init_thread_footer(&::_TSS2);
      }
    }
    EVar4 = GetCheckState(this);
    if (EVar4 == Checked) {
      pIVar6 = FAppStyle::Get();
      FVar7 = ToggledLeftHover;
    }
    else {
      pIVar6 = FAppStyle::Get();
      FVar7 = LeftHover;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000142813552. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar5 = (FSlateBrush *)(**(code **)((longlong)*pIVar6 + 0x50))(pIVar6,FVar7,0,0);
  return pFVar5;
}

// GetOptionsBlockRightBrush @ 142813670

FSlateBrush * __thiscall SToolBarButtonBlock::GetOptionsBlockRightBrush(SToolBarButtonBlock *this)

{
  code *pcVar1;
  bool bVar2;
  ECheckBoxState EVar3;
  FSlateBrush *pFVar4;
  ISlateStyle *pIVar5;
  FName FVar6;
  
  if ((this->OptionsBorder).Object == (SBorder *)0x0) {
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
  if (*(char *)((longlong)&((this->OptionsBorder).Object)->_padding_ + 3) == '\0') {
    if ((this->ButtonBorder).Object == (SBorder *)0x0) {
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
    if (*(char *)((longlong)&((this->ButtonBorder).Object)->_padding_ + 3) == '\0') {
      EVar3 = GetCheckState(this);
      if (EVar3 != Checked) {
        pFVar4 = FStyleDefaults::GetNoBrush();
        return pFVar4;
      }
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS1) {
      _Init_thread_header(&::_TSS1);
      if (::_TSS1 == -1) {
        ::FName::FName(&Right,"ToolbarSettingsRegion.Right");
        _Init_thread_footer(&::_TSS1);
      }
    }
    pIVar5 = FAppStyle::Get();
    FVar6 = Right;
  }
  else {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        ::FName::FName(&RightHover,"ToolbarSettingsRegion.RightHover");
        _Init_thread_footer(&::_TSS0);
      }
    }
    pIVar5 = FAppStyle::Get();
    FVar6 = RightHover;
  }
                    /* WARNING: Could not recover jumptable at 0x000142813785. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar4 = (FSlateBrush *)(**(code **)((longlong)*pIVar5 + 0x50))(pIVar5,FVar6,0,0);
  return pFVar4;
}

// GetOptionsSeparatorVisibility @ 142813810

EVisibility __thiscall SToolBarButtonBlock::GetOptionsSeparatorVisibility(SToolBarButtonBlock *this)

{
  EVisibility EVar1;
  uchar *in_RDX;
  
  EVar1.Value.Value = EVisibility::Hidden.Value.Value;
  if (*(char *)((longlong)&this->_padding_ + 3) != '\0') {
    EVar1.Value.Value = EVisibility::HitTestInvisible.Value.Value;
  }
  *in_RDX = (uchar)EVar1.Value.Value;
  return (EVisibility)SUB81(in_RDX,0);
}

// GetOverlayIconBrush @ 142813840

FSlateBrush * __thiscall SToolBarButtonBlock::GetOverlayIconBrush(SToolBarButtonBlock *this)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  FSlateBrush *pFVar7;
  FSlateIcon *pFVar8;
  FSlateBrush *pFVar9;
  TReferenceControllerBase<1> *pTVar10;
  uint uStackX_c;
  FSlateIcon local_78;
  FSlateIcon local_58;
  FSlateIcon local_38;
  
  pFVar7 = (FSlateBrush *)0x0;
  if (this->_padding_ == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FSlateBrush *)(*pcVar5)();
      return pFVar7;
    }
  }
  lVar1 = this->_padding_;
  pTVar2 = (TReferenceControllerBase<1> *)this->_padding_;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (lVar1 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FSlateBrush *)(*pcVar5)();
      return pFVar7;
    }
  }
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  pTVar3 = *(TReferenceControllerBase<1> **)(lVar1 + 0x88);
  lVar4 = *(longlong *)(lVar1 + 0x80);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (lVar4 == 0) {
    pFVar8 = FSlateIcon::FSlateIcon(&local_38);
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
    pFVar9 = pFVar7;
  }
  else {
    pTVar10 = *(TReferenceControllerBase<1> **)(lVar1 + 0x88);
    lVar4 = *(longlong *)(lVar1 + 0x80);
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (lVar4 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar7 = (FSlateBrush *)(*pcVar5)();
        return pFVar7;
      }
    }
    pFVar8 = &local_78;
    local_78.StyleSetName = *(FName *)(lVar4 + 0x40);
    local_78.StyleName = *(FName *)(lVar4 + 0x48);
    local_78.SmallStyleName = *(FName *)(lVar4 + 0x50);
    local_78.StatusOverlayStyleName = *(FName *)(lVar4 + 0x58);
    pFVar9 = (FSlateBrush *)&DAT_00000001;
  }
  local_58.StyleSetName = pFVar8->StyleSetName;
  local_58.StyleName = pFVar8->StyleName;
  local_58.SmallStyleName = pFVar8->SmallStyleName;
  local_58.StatusOverlayStyleName = pFVar8->StatusOverlayStyleName;
  if (pFVar9 != (FSlateBrush *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  if (*(char *)(lVar1 + 0x2a0) == '\0') {
    pFVar8 = &local_58;
  }
  else {
    pFVar8 = TAttribute<FSlateIcon>::Get((TAttribute<FSlateIcon> *)(lVar1 + 0x280));
  }
  if ((pFVar8->StyleSetName != (FName)0x0) && (pFVar8->StyleName != (FName)0x0)) {
    pFVar7 = FSlateIcon::GetOverlayIcon(pFVar8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return pFVar7;
}

// GetSmallIconBrush @ 1428152a0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FSlateBrush * __thiscall SToolBarButtonBlock::GetSmallIconBrush(SToolBarButtonBlock *this)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong lVar4;
  code *pcVar5;
  atomic<int> aVar6;
  bool bVar7;
  atomic<int> aVar8;
  FSlateBrush *pFVar9;
  FSlateIcon *pFVar10;
  ISlateStyle *pIVar11;
  TReferenceControllerBase<1> *pTVar12;
  SMultiBoxWidget *pSVar13;
  SMultiBoxWidget *pSVar14;
  SMultiBoxWidget *this_00;
  uint uStackX_c;
  FSlateIcon local_88;
  FSlateIcon local_68;
  FSlateIcon local_48;
  
  this_00 = (SMultiBoxWidget *)0x0;
  if ((this->_padding_ == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pFVar9 = (FSlateBrush *)(*pcVar5)();
    return pFVar9;
  }
  pTVar1 = (TReferenceControllerBase<1> *)this->_padding_;
  lVar2 = this->_padding_;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((lVar2 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pFVar9 = (FSlateBrush *)(*pcVar5)();
    return pFVar9;
  }
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar3 = *(TReferenceControllerBase<1> **)(lVar2 + 0x88);
  lVar4 = *(longlong *)(lVar2 + 0x80);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (lVar4 == 0) {
    pFVar10 = FSlateIcon::FSlateIcon(&local_48);
    pTVar12 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
    pSVar14 = this_00;
  }
  else {
    pTVar12 = *(TReferenceControllerBase<1> **)(lVar2 + 0x88);
    lVar4 = *(longlong *)(lVar2 + 0x80);
    if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((lVar4 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pFVar9 = (FSlateBrush *)(*pcVar5)();
      return pFVar9;
    }
    pFVar10 = &local_88;
    local_88.StyleSetName = *(FName *)(lVar4 + 0x40);
    local_88.StyleName = *(FName *)(lVar4 + 0x48);
    local_88.SmallStyleName = *(FName *)(lVar4 + 0x50);
    local_88.StatusOverlayStyleName = *(FName *)(lVar4 + 0x58);
    pSVar14 = (SMultiBoxWidget *)&DAT_00000001;
  }
  local_68.StyleSetName = pFVar10->StyleSetName;
  local_68.StyleName = pFVar10->StyleName;
  local_68.SmallStyleName = pFVar10->SmallStyleName;
  local_68.StatusOverlayStyleName = pFVar10->StatusOverlayStyleName;
  if (pSVar14 != (SMultiBoxWidget *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  if (*(char *)(lVar2 + 0x2a0) == '\0') {
    pFVar10 = &local_68;
  }
  else {
    pFVar10 = TAttribute<FSlateIcon>::Get((TAttribute<FSlateIcon> *)(lVar2 + 0x280));
  }
  if ((pFVar10->StyleSetName != (FName)0x0) && (pFVar10->StyleName != (FName)0x0)) {
    pFVar9 = FSlateIcon::GetSmallIcon(pFVar10);
    goto LAB_14281552c;
  }
  if (((this->_padding_ == 0) || ((this->_padding_ == 0 || (*(int *)(this->_padding_ + 8) < 1)))) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("OwnerMultiBoxWidget.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SToolBarButtonBlock.cpp"
                         ,0x2bf,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pFVar9 = (FSlateBrush *)(*pcVar5)();
    return pFVar9;
  }
  pSVar14 = (SMultiBoxWidget *)this->_padding_;
  pSVar13 = pSVar14;
  if (pSVar14 == (SMultiBoxWidget *)0x0) {
LAB_1428154b7:
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    pSVar14 = pSVar13;
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pFVar9 = (FSlateBrush *)(*pcVar5)();
      return pFVar9;
    }
  }
  else {
    aVar6 = *(atomic<int> *)&pSVar14->_padding_;
    do {
      pSVar13 = this_00;
      if (aVar6 == (atomic<int>)0x0) goto LAB_1428154b7;
      LOCK();
      aVar8 = *(atomic<int> *)&pSVar14->_padding_;
      bVar7 = aVar6 == aVar8;
      if (bVar7) {
        *(atomic<int> *)&pSVar14->_padding_ = (atomic<int>)((int)aVar6 + 1);
        aVar8 = aVar6;
      }
      UNLOCK();
      aVar6 = aVar8;
    } while (!bVar7);
    this_00 = (SMultiBoxWidget *)this->_padding_;
    pSVar13 = pSVar14;
    if (this_00 == (SMultiBoxWidget *)0x0) goto LAB_1428154b7;
  }
  pIVar11 = SMultiBoxWidget::GetStyleSet(this_00);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&IconName,"MultiBox.GenericToolBarIcon.Small");
    _Init_thread_footer(&::_TSS0);
  }
  pFVar9 = (FSlateBrush *)(**(code **)((longlong)*pIVar11 + 0x50))(pIVar11,IconName,0,0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar14);
LAB_14281552c:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return pFVar9;
}

// IsEnabled @ 14281d640

bool __thiscall SToolBarButtonBlock::IsEnabled(SToolBarButtonBlock *this)

{
  TReferenceControllerBase<1> *pTVar1;
  FUICommandList *this_00;
  TReferenceControllerBase<1> *pTVar2;
  FUICommandInfo *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  TSharedRef<FUICommandInfo_const_,1> local_18;
  
  if (this->_padding_ == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  pTVar1 = *(TReferenceControllerBase<1> **)(this->_padding_ + 0x98);
  this_00 = *(FUICommandList **)(this->_padding_ + 0x90);
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this->_padding_ == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  pTVar2 = *(TReferenceControllerBase<1> **)(this->_padding_ + 0x88);
  pFVar3 = *(FUICommandInfo **)(this->_padding_ + 0x80);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this->_padding_ == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  if ((this_00 == (FUICommandList *)0x0) || (pFVar3 == (FUICommandInfo *)0x0)) {
    bVar5 = FUIAction::CanExecute((FUIAction *)(this->_padding_ + 0x18));
  }
  else {
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_18.Object = pFVar3;
    local_18.SharedReferenceCount.ReferenceController = pTVar2;
    if (pFVar3 == (FUICommandInfo *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
    }
    bVar5 = FUICommandList::CanExecuteAction(this_00,&local_18);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return bVar5;
}

// OnCheckStateChanged @ 1428242a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SToolBarButtonBlock::OnCheckStateChanged(SToolBarButtonBlock *this,ECheckBoxState param_1)

{
  FReply local_c8;
  
  OnClicked(this,&local_c8);
  FReply::~FReply(&local_c8);
  return;
}

// OnClicked @ 142824fa0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FReply * __thiscall
SToolBarButtonBlock::OnClicked(SToolBarButtonBlock *this,FReply *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong *plVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong lVar4;
  code *pcVar5;
  atomic<int> aVar6;
  bool bVar7;
  atomic<int> aVar8;
  FReply *pFVar9;
  FSlateApplication *this_00;
  TSharedRef<SWidget,1> *pTVar10;
  SMultiBoxWidget *pSVar11;
  SMultiBoxWidget *pSVar12;
  SMultiBoxWidget *this_01;
  longlong local_48;
  TReferenceControllerBase<1> *local_40;
  TSharedRef<FMultiBox_const_,1> local_38;
  TSharedRef<SWidget,1> local_28;
  
  if ((this->_padding_ == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pFVar9 = (FReply *)(*pcVar5)();
    return pFVar9;
  }
  pTVar1 = *(TReferenceControllerBase<1> **)(this->_padding_ + 0x98);
  plVar2 = *(longlong **)(this->_padding_ + 0x90);
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((this->_padding_ == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pFVar9 = (FReply *)(*pcVar5)();
    return pFVar9;
  }
  pTVar3 = *(TReferenceControllerBase<1> **)(this->_padding_ + 0x88);
  lVar4 = *(longlong *)(this->_padding_ + 0x80);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((this->_padding_ == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pFVar9 = (FReply *)(*pcVar5)();
    return pFVar9;
  }
  if ((plVar2 == (longlong *)0x0) || (lVar4 == 0)) {
    if ((this->_padding_ == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pFVar9 = (FReply *)(*pcVar5)();
      return pFVar9;
    }
    FUIAction::Execute((FUIAction *)(this->_padding_ + 0x18));
  }
  else {
    pcVar5 = *(code **)(*plVar2 + 0x18);
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_48 = lVar4;
    local_40 = pTVar3;
    if ((lVar4 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pFVar9 = (FReply *)(*pcVar5)();
      return pFVar9;
    }
    (*pcVar5)(plVar2,&local_48);
  }
  pSVar12 = (SMultiBoxWidget *)this->_padding_;
  this_01 = (SMultiBoxWidget *)0x0;
  pSVar11 = pSVar12;
  if (pSVar12 != (SMultiBoxWidget *)0x0) {
    aVar6 = *(atomic<int> *)&pSVar12->_padding_;
    do {
      pSVar11 = this_01;
      if (aVar6 == (atomic<int>)0x0) goto LAB_142825165;
      LOCK();
      aVar8 = *(atomic<int> *)&pSVar12->_padding_;
      bVar7 = aVar6 == aVar8;
      if (bVar7) {
        *(atomic<int> *)&pSVar12->_padding_ = (atomic<int>)((int)aVar6 + 1);
        aVar8 = aVar6;
      }
      UNLOCK();
      aVar6 = aVar8;
    } while (!bVar7);
    this_01 = (SMultiBoxWidget *)this->_padding_;
    pSVar11 = pSVar12;
    if (this_01 != (SMultiBoxWidget *)0x0) goto LAB_14282518b;
  }
LAB_142825165:
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  pSVar12 = pSVar11;
  if (bVar7) {
    pcVar5 = (code *)swi(3);
    pFVar9 = (FReply *)(*pcVar5)();
    return pFVar9;
  }
LAB_14282518b:
  SMultiBoxWidget::GetMultiBox(this_01,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar12);
  if ((local_38.Object)->bShouldCloseWindowAfterMenuSelection != false) {
    this_00 = FSlateApplication::Get();
    pTVar10 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_28);
    FSlateApplication::DismissMenuByWidget(this_00,pTVar10);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  FReply::FReply(__return_storage_ptr__,true);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

