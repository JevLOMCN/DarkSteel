// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 24

// <lambda_2> @ 1427a9000

<lambda_2> * __thiscall
`SToolBarComboButtonBlock::BuildMultiBlockWidget'::__l37::<lambda_2>::<lambda_2>
          (void *this,TAttribute<FText> *param_1,FToolBarStyle *param_2)

{
  ITextData *pIVar1;
  undefined1 local_res8 [8];
  
  *(undefined8 *)this = 0;
  pIVar1 = (param_1->Value).TextData.Reference;
  *(ITextData **)this = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  *(uint *)((longlong)this + 8) = (param_1->Value).Flags;
  *(bool *)((longlong)this + 0x10) = param_1->bIsSet;
  *(undefined8 *)((longlong)this + 0x18) = 0;
  *(undefined8 *)((longlong)this + 0x20) = 0;
  *(undefined4 *)((longlong)this + 0x28) = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)((longlong)this + 0x18),
             &param_1->Getter);
  FToolBarStyle::FToolBarStyle((FToolBarStyle *)((longlong)this + 0x30),param_2);
  return this;
}

// ~<lambda_1> @ 1427b6410

void __thiscall
`SToolBarComboButtonBlock::BuildMultiBlockWidget'::__l35::<lambda_1>::~<lambda_1>(void *this)

{
  FToolBarStyle::~FToolBarStyle((FToolBarStyle *)((longlong)this + 0x40));
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x20));
  if (*(void **)((longlong)this + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x28));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x20));
  if (*(longlong **)((longlong)this + 8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)((longlong)this + 8) + 0x10))();
  }
  return;
}

// ~<lambda_2> @ 1427b6470

void __thiscall
`SToolBarComboButtonBlock::BuildMultiBlockWidget'::__l37::<lambda_2>::~<lambda_2>(void *this)

{
  FToolBarStyle::~FToolBarStyle((FToolBarStyle *)((longlong)this + 0x30));
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x18));
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x18));
  if (*(longlong **)this != (longlong *)0x0) {
    (**(code **)(**(longlong **)this + 0x10))();
  }
  return;
}

// ~SToolBarComboButtonBlock @ 1427bacb0

void __thiscall SToolBarComboButtonBlock::~SToolBarComboButtonBlock(SToolBarComboButtonBlock *this)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  longlong *plVar4;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ComboButtonWidget).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->LeftHandSideWidget).SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Icon).Getter);
  pvVar3 = *(void **)&(this->Icon).Getter.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->Icon).Getter);
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

// BuildMultiBlockWidget @ 1427e09d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
SToolBarComboButtonBlock::BuildMultiBlockWidget
          (SToolBarComboButtonBlock *this,ISlateStyle *param_1,FName *param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  EUserInterfaceActionType EVar3;
  longlong lVar4;
  longlong lVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  code *pcVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined8 uVar10;
  atomic<int> aVar11;
  EStyleColor EVar12;
  undefined2 uVar13;
  SWidget *pSVar14;
  FSharedReferencer<1> FVar15;
  FSharedReferencer<1> FVar16;
  bool bVar17;
  int iVar18;
  atomic<int> aVar19;
  int iVar20;
  FToolBarStyle *pFVar21;
  EVisibility *pEVar22;
  TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *pTVar23;
  FArguments *pFVar24;
  TSlateDecl<SLayeredImage,RequiredArgs::T0RequiredArgs> *this_00;
  TAttribute<FSlateBrush_const_*> *pTVar25;
  TAttribute<FOptionalSize> *pTVar26;
  FMultiBlock *pFVar27;
  FText *pFVar28;
  undefined8 *puVar29;
  FString *pFVar30;
  FArguments *pFVar31;
  FSlotArguments *pFVar32;
  <lambda_2> *p<Var33;
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> *pTVar34;
  FArguments *pFVar35;
  TAttribute<EVisibility> *pTVar36;
  TAttribute<FText> *pTVar37;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *pTVar38;
  TSharedRef<STextBlock,1> *pTVar39;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> *this_01;
  TSharedRef<SVerticalBox,1> *pTVar40;
  SMultiBoxWidget *pSVar41;
  FButtonStyle *pFVar42;
  FUICommandInfo *pFVar43;
  FArguments *pFVar44;
  TSharedRef<SWidget,1> *pTVar45;
  ulong64 uVar46;
  TSharedRef<SWidget_const_,1> *pTVar47;
  FArguments *pFVar48;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> *pTVar49;
  TSharedRef<SBox,1> *pTVar50;
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs> *pTVar51;
  FArguments *pFVar52;
  FArguments *pFVar53;
  FSlot *pFVar54;
  FSlotArguments *pFVar55;
  FArguments *pFVar56;
  TSharedRef<FTagMetaData,1> *pTVar57;
  TSlateDecl<SComboButton,RequiredArgs::T0RequiredArgs> *pTVar58;
  TSharedRef<SComboButton,1> *pTVar59;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> *pTVar60;
  TSharedRef<SHorizontalBox,1> *pTVar61;
  TSharedRef<SBorder,1> *pTVar62;
  FMargin *pFVar63;
  longlong *plVar64;
  wchar_t *pwVar65;
  SMultiBoxWidget *pSVar66;
  ForAnyElementType FVar67;
  TStatId *pTVar68;
  SMultiBoxWidget *pSVar69;
  TReferenceControllerBase<1> *pTVar70;
  FName FVar71;
  FComboButtonStyle *pFVar72;
  FSlotArguments *pFVar73;
  SBorder *pSVar74;
  SBorder *pSVar75;
  byte bVar76;
  SMultiBoxWidget *pSVar77;
  bool bVar78;
  TReferenceControllerBase<1> *local_res18;
  bool local_b3d8 [16];
  FSlot *local_b3c8;
  undefined4 uStack_b3c0;
  uint uStack_b3bc;
  TSharedRef<SWidget,1> local_b3b8;
  T0RequiredArgs local_b3a8;
  T0RequiredArgs local_b3a7;
  T0RequiredArgs local_b3a6;
  T0RequiredArgs local_b3a5;
  T0RequiredArgs local_b3a4;
  T0RequiredArgs local_b3a3;
  T0RequiredArgs local_b3a2;
  T0RequiredArgs local_b3a1;
  T0RequiredArgs local_b3a0;
  T0RequiredArgs local_b39f;
  T0RequiredArgs local_b39e [6];
  code *local_b398;
  undefined4 uStack_b390;
  float fStack_b38c;
  undefined1 local_b388 [8];
  undefined1 local_b380 [8];
  ForAnyElementType FStack_b378;
  ulonglong local_b370;
  FLLMScope local_b368 [2];
  FToolBarStyle *local_b360;
  FComboButtonStyle *local_b358;
  FCheckBoxStyle *local_b350;
  SMultiBoxWidget *local_b348;
  undefined4 uStack_b340;
  undefined4 uStack_b33c;
  FTagMetaData local_b338;
  TSharedPtr<FUICommandInfo_const_,1> local_b328;
  undefined1 local_b318 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_b310;
  FDelegateAllocation FStack_b308;
  TReferenceControllerBase<1> *local_b2f8;
  FTagMetaData *local_b2f0;
  TReferenceControllerBase<1> *local_b2e8;
  undefined1 local_b2e0 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_b2c8;
  ForAnyElementType FStack_b2c0;
  ulonglong local_b2b8;
  undefined8 local_b2b0;
  SWidget *local_b2a8;
  FSharedReferencer<1> local_b2a0;
  SHorizontalBox *local_b298;
  TReferenceControllerBase<1> *pTStack_b290;
  SBorder *local_b288;
  TReferenceControllerBase<1> *pTStack_b280;
  TEnumAsByte<EVisibility::Private> local_b278;
  undefined1 local_b277;
  undefined1 local_b270 [8];
  void *pvStack_b268;
  undefined8 local_b260;
  undefined1 local_b258 [24];
  undefined1 local_b240 [8];
  void *pvStack_b238;
  undefined8 local_b230;
  TSharedRef<SLayeredImage,1> local_b228;
  EMenuPlacement local_b218;
  bool local_b214;
  undefined1 local_b210 [24];
  undefined4 local_b1f8 [2];
  undefined4 local_b1f0 [2];
  uint local_b1e8 [2];
  undefined4 local_b1e0 [2];
  undefined4 local_b1d8 [2];
  undefined4 local_b1d0 [2];
  FName local_b1c8;
  FName local_b1c0;
  FName local_b1b8 [2];
  TSharedRef<SWidget,1> local_b1a8;
  FString local_b198;
  TReferenceControllerBase<1> *local_b188;
  TSharedRef<FMultiBox_const_,1> local_b180;
  FMemScope local_b170;
  FName local_b168;
  FSlot *local_b160;
  TSharedRef<SWidget,1> local_b158;
  undefined1 local_b148 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_b140;
  FDelegateAllocation FStack_b138;
  FName local_b128;
  TSharedRef<SWidget,1> local_b118;
  TAttribute<float> local_b108;
  TAttribute<float> local_b0e8;
  FText local_b0c8;
  FMargin local_b0b8;
  TSharedRef<SToolBarComboButtonBlock,1> local_b0a8;
  TSharedRef<SWidget,1> local_b098;
  TSharedPtr<SWidget,1> local_b088;
  TSharedRef<SWidget,1> local_b078;
  TSharedRef<SWidget,1> local_b068;
  FString local_b058;
  TSharedRef<SWidget,1> local_b048;
  TSharedRef<SWidget,1> local_b038;
  undefined8 local_b028;
  TReferenceControllerBase<1> *pTStack_b020;
  FDestructionSentinel local_b018;
  FDestructionSentinel local_b000;
  undefined1 local_afe8 [24];
  FDestructionSentinel local_afd0;
  undefined1 local_afb8 [24];
  undefined1 local_afa0 [24];
  TAttribute<TSharedPtr<IToolTip,1>_> local_af88;
  FDestructionSentinel local_af58;
  undefined1 *local_af40;
  FDestructionSentinel local_af38;
  undefined1 *local_af20;
  FDestructionSentinel local_af18;
  FDelegateAllocation *local_af00;
  FDestructionSentinel local_aef8;
  FDelegateAllocation *local_aee0;
  TAttribute<FMargin> local_aed8;
  TAttribute<FMargin> local_aea8;
  SWidget *local_ae78;
  TReferenceControllerBase<1> *pTStack_ae70;
  TSharedRef<SBorder,1> local_ae68;
  TSharedRef<SHorizontalBox,1> local_ae58;
  TSharedRef<SComboButton,1> local_ae48;
  TSharedRef<SWidget,1> local_ae38;
  TSharedRef<SWidget_const_,1> local_ae28;
  TSharedRef<SWidget_const_,1> local_ae18;
  TSharedRef<SWidget,1> local_ae08;
  code *local_adf8 [2];
  code *local_ade8;
  TReferenceControllerBase<1> *pTStack_ade0;
  code *local_add8;
  TReferenceControllerBase<1> *pTStack_add0;
  code *local_adc8;
  TReferenceControllerBase<1> *pTStack_adc0;
  TSharedRef<SBox,1> local_adb8;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_ada8;
  undefined1 local_ad90 [8];
  TReferenceControllerBase<1> *local_ad88;
  FString local_ad80;
  TSharedRef<SVerticalBox,1> local_ad70;
  TSharedRef<STextBlock,1> local_ad60;
  TSharedRef<SHorizontalBox,1> local_ad50;
  TSharedRef<STextBlock,1> local_ad40;
  FString local_ad30;
  TSharedRef<SWidget,1> local_ad20;
  code *local_ad08;
  longlong lStack_ad00;
  TSharedRef<SWidget_const_,1> local_acf8;
  code *local_ace8;
  longlong lStack_ace0;
  TAttribute<EVisibility> local_acd8;
  TSharedRef<SCheckBox,1> local_acb8;
  TSharedRef<SBox,1> local_aca8;
  code *local_ac98;
  longlong lStack_ac90;
  TSharedRef<FTagMetaData,1> local_ac88;
  code *local_ac78;
  FName FStack_ac70;
  code *local_ac68;
  FName FStack_ac60;
  TAttribute<EVisibility> local_ac58;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_ac38;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_ac20;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_ac08;
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs> local_abf0;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_abd8;
  FReadAccessScope local_abc0;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_aba8;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_ab90;
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> local_ab78;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_ab60;
  TAttribute<FMargin> local_ab48;
  TSlateDecl<SComboButton,RequiredArgs::T0RequiredArgs> local_ab18;
  TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> local_ab00;
  TSlateDecl<SLayeredImage,RequiredArgs::T0RequiredArgs> local_aae8;
  TAttribute<EVisibility> local_aad0;
  TAttribute<EVisibility> local_aab0;
  TAttribute<EVisibility> local_aa90;
  TAttribute<FMargin> local_aa70;
  undefined8 *local_aa40 [2];
  TReferenceControllerBase<1> *local_aa30;
  undefined1 local_aa10 [40];
  FSlotArgumentsMixin local_a9e8;
  undefined8 *local_a958 [2];
  TReferenceControllerBase<1> *local_a948;
  undefined1 local_a928 [40];
  FSlotArgumentsMixin local_a900;
  TAttribute<FOptionalSize> local_a870;
  TAttribute<FOptionalSize> local_a850;
  TAttribute<EVisibility> local_a830;
  TAttribute<FSlateBrush_const_*> local_a810;
  TAttribute<FText> local_a7e8;
  TAttribute<FText> local_a7b8;
  TAttribute<FText> local_a788;
  FArguments local_a758;
  FArguments local_a550;
  FSlotArguments local_a348;
  FSlotArguments local_a260;
  FSlotArguments local_a178;
  FSlotArguments local_a090;
  FArguments local_9fa8;
  FArguments local_9da0;
  FArguments local_9af8;
  FArguments local_97c0;
  FArguments local_9480;
  FArguments local_9140;
  FArguments local_8d60;
  FArguments local_8980;
  FArguments local_8428;
  undefined1 local_7ec8 [16176];
  <lambda_1> local_3f98;
  undefined8 uStack_48;
  
  uStack_48 = 0x1427e09f8;
  pSVar41 = (SMultiBoxWidget *)this->_padding_;
  pSVar77 = (SMultiBoxWidget *)0x0;
  pSVar69 = pSVar41;
  pSVar66 = pSVar77;
  if (pSVar41 == (SMultiBoxWidget *)0x0) {
LAB_1427e0a45:
    bVar78 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    pSVar41 = pSVar69;
    if (bVar78) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  else {
    iVar20 = (int)pSVar41->_padding_;
    do {
      pSVar69 = pSVar77;
      pSVar66 = (SMultiBoxWidget *)0x0;
      if (iVar20 == 0) goto LAB_1427e0a45;
      LOCK();
      iVar18 = (int)pSVar41->_padding_;
      bVar78 = iVar20 == iVar18;
      if (bVar78) {
        *(int *)&pSVar41->_padding_ = iVar20 + 1;
        iVar18 = iVar20;
      }
      UNLOCK();
      iVar20 = iVar18;
    } while (!bVar78);
    pSVar66 = (SMultiBoxWidget *)this->_padding_;
    pSVar69 = pSVar41;
    if (pSVar66 == (SMultiBoxWidget *)0x0) goto LAB_1427e0a45;
  }
  SMultiBoxWidget::GetMultiBox(pSVar66,&local_b180);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar41);
  if ((this->_padding_ == 0) &&
     (bVar78 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L""), bVar78)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pTVar70 = (TReferenceControllerBase<1> *)this->_padding_;
  lVar4 = this->_padding_;
  if (pTVar70 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar70->SharedReferenceCount = (atomic<int>)((int)pTVar70->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_b188 = pTVar70;
  if ((lVar4 == 0) &&
     (bVar78 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L""), bVar78)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if (pTVar70 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar70->SharedReferenceCount = (atomic<int>)((int)pTVar70->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar70);
  local_b328.Object = *(FUICommandInfo **)(lVar4 + 0x80);
  local_b328.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)(lVar4 + 0x88);
  if (local_b328.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_b328.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_b328.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FText::FText((FText *)local_b2e0);
  local_b2e0[0x10] = false;
  local_b2c8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_b2c0.Data = (FScriptContainerElement *)0x0;
  local_b2b8 = 0;
  pFVar21 = (FToolBarStyle *)
            (**(code **)((longlong)*param_1 + 0xa0))(param_1,FToolBarStyle::TypeName,*param_2,0,1);
  if (pFVar21 == (FToolBarStyle *)0x0) {
    local_b360 = pFVar21;
    pFVar21 = FToolBarStyle::GetDefault();
  }
  local_b388[0] = (TEnumAsByte<EVisibility::Private>)0x19;
  local_b388[1] = false;
  local_b370 = 0;
  local_b380 = (undefined1  [8])0x0;
  FStack_b378.Data = (FScriptContainerElement *)0x0;
  local_b360 = pFVar21;
  if ((this->LabelVisibilityOverride).bIsSet == false) {
    if (pFVar21->bShowLabels == false) {
      TAttribute<EVisibility>::TAttribute<EVisibility><EVisibility>
                (&local_ac58,&EVisibility::Collapsed);
      TAttribute<EVisibility>::operator=((TAttribute<EVisibility> *)local_b388,&local_ac58);
      TAttribute<EVisibility>::~TAttribute<EVisibility>(&local_ac58);
    }
    else {
      local_b3d8[0] = false;
      uStack_b340 = 0;
      local_b348 = (SMultiBoxWidget *)GetIconVisibility;
      pTVar45 = TSharedFromThis<SWidget,1>::AsShared
                          ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_ae08);
      local_res18._0_1_ = SUB81(param_2,0);
      TSharedRef<SToolBarComboButtonBlock,1>::TSharedRef<SToolBarComboButtonBlock,1><SWidget>
                (&local_b0a8,pTVar45,local_res18._0_1_);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_ae08.SharedReferenceCount.ReferenceController);
      local_adf8[1]._4_4_ = uStack_b33c;
      local_adf8[1]._0_4_ = uStack_b340;
      local_adf8[0] = (code *)local_b348;
      pTVar23 = TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
                CreateSP<SToolBarComboButtonBlock,1,bool>
                          (&local_ab00,&local_b0a8,(pmf_151df3ee *)local_adf8,local_b3d8);
      pTVar36 = TAttribute<EVisibility>::Create(&local_aad0,pTVar23);
      TAttribute<EVisibility>::operator=((TAttribute<EVisibility> *)local_b388,pTVar36);
      TAttribute<EVisibility>::~TAttribute<EVisibility>(&local_aad0);
      TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
      ~TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>(&local_ab00);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_b0a8.SharedReferenceCount.ReferenceController);
    }
  }
  else {
    pEVar22 = TOptional<EVisibility>::GetValue(&this->LabelVisibilityOverride);
    local_b278.Value = (pEVar22->Value).Value;
    local_b277 = 1;
    local_b270 = (undefined1  [8])0x0;
    pvStack_b268 = (void *)0x0;
    local_b260 = 0;
    local_b388[1] = true;
    local_b388[0] = local_b278.Value;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_b380,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_b270);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_b270);
    if (pvStack_b268 != (void *)0x0) {
      FMemory::Free(pvStack_b268);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_b270);
  }
  FVar15.ReferenceController = SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  pSVar14 = SNullWidget::NullWidget.Object;
  local_b3b8.Object = SNullWidget::NullWidget.Object;
  local_b3b8.SharedReferenceCount.ReferenceController =
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
  if (*(char *)(lVar4 + 0x2d3) == '\0') {
    if ((this->Icon).bIsSet != false) {
      pFVar24 = SImage::FArguments::FArguments(&local_9da0);
      local_b3b8.SharedReferenceCount.ReferenceController =
           local_b3b8.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
      local_b3b8.Object = (SWidget *)GetIconForegroundColor;
      local_ade8 = GetIconForegroundColor;
      pTStack_ade0 = local_b3b8.SharedReferenceCount.ReferenceController;
      pFVar24 = SImage::FArguments::ColorAndOpacity<SToolBarComboButtonBlock>
                          (pFVar24,this,(pmf_a2cef929 *)&local_ade8);
      local_b3b8.SharedReferenceCount.ReferenceController =
           local_b3b8.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
      local_b3b8.Object = (SWidget *)GetIconBrush;
      local_add8 = GetIconBrush;
      pTStack_add0 = local_b3b8.SharedReferenceCount.ReferenceController;
      pFVar24 = SImage::FArguments::Image<SToolBarComboButtonBlock>
                          (pFVar24,this,(pmf_e0746c1c *)&local_add8);
      this_00 = MakeTDecl<SLayeredImage,RequiredArgs::T0RequiredArgs>
                          (&local_aae8,"SLayeredImage",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SToolBarComboButtonBlock.cpp"
                           ,0x6e,&local_b3a8);
      TSlateDecl<SLayeredImage,RequiredArgs::T0RequiredArgs>::operator<<=
                (this_00,&local_b228,pFVar24);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_aae8._Widget.SharedReferenceCount.ReferenceController);
      SImage::FArguments::~FArguments(&local_9da0);
      local_b3b8.Object = (SWidget *)GetOverlayIconBrush;
      local_b3b8.SharedReferenceCount.ReferenceController =
           local_b3b8.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
      local_adc8 = GetOverlayIconBrush;
      pTStack_adc0 = local_b3b8.SharedReferenceCount.ReferenceController;
      pTVar25 = TAttribute<FSlateBrush_const_*>::
                TAttribute<FSlateBrush_const_*><SToolBarComboButtonBlock>
                          (&local_a810,this,(pmf_e0746c1c *)&local_adc8);
      SLayeredImage::AddLayer(local_b228.Object,pTVar25);
      if (((local_b180.Object)->Type == SlimHorizontalToolBar) ||
         ((byte)((local_b180.Object)->Type - SlimHorizontalUniformToolBar) < 2)) {
        local_b2b0 = pFVar21->IconSize;
        pFVar48 = SBox::FArguments::FArguments(&local_97c0);
        pTVar26 = TAttribute<FOptionalSize>::TAttribute<FOptionalSize><float>
                            (&local_a870,(float *)&local_b2b0);
        pFVar48 = SBox::FArguments::WidthOverride(pFVar48,pTVar26);
        pTVar26 = TAttribute<FOptionalSize>::TAttribute<FOptionalSize><float>
                            (&local_a850,(float *)((longlong)&local_b2b0 + 4));
        pFVar48 = SBox::FArguments::HeightOverride(pFVar48,pTVar26);
        TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SLayeredImage>(&local_b098,&local_b228);
        pFVar48 = SBox::FArguments::operator[](pFVar48,&local_b098);
        pTVar49 = MakeTDecl<SBox,RequiredArgs::T0RequiredArgs>
                            (&local_ab90,"SBox",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SToolBarComboButtonBlock.cpp"
                             ,0x7a,&local_b3a7);
        pTVar50 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                            (pTVar49,&local_adb8,pFVar48);
        TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBox>(&local_b118,pTVar50);
        local_b3b8.Object = local_b118.Object;
        local_b3b8.SharedReferenceCount.ReferenceController =
             local_b118.SharedReferenceCount.ReferenceController;
        local_b118.Object = pSVar14;
        local_b118.SharedReferenceCount.ReferenceController = FVar15.ReferenceController;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar15.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_adb8.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_ab90._Widget.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_b098.SharedReferenceCount.ReferenceController);
        SBox::FArguments::~FArguments(&local_97c0);
      }
      else {
        TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SLayeredImage>(&local_b158,&local_b228);
        local_b3b8.Object = local_b158.Object;
        local_b3b8.SharedReferenceCount.ReferenceController =
             local_b158.SharedReferenceCount.ReferenceController;
        local_b158.Object = pSVar14;
        local_b158.SharedReferenceCount.ReferenceController = FVar15.ReferenceController;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar15.ReferenceController);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_b228.SharedReferenceCount.ReferenceController);
    }
    pTVar37 = (TAttribute<FText> *)(lVar4 + 0x210);
    if (*(char *)(lVar4 + 0x220) == '\0') {
      pTVar37 = (TAttribute<FText> *)(lVar4 + 0x1e0);
    }
    TAttribute<FText>::operator=((TAttribute<FText> *)local_b2e0,pTVar37);
  }
  pSVar41 = (SMultiBoxWidget *)0x0;
  pTVar70 = (TReferenceControllerBase<1> *)this->_padding_;
  if (pTVar70 != (TReferenceControllerBase<1> *)0x0) {
    aVar11 = pTVar70->SharedReferenceCount;
    do {
      if (aVar11 == (atomic<int>)0x0) {
        pTVar70 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1427e1024;
      }
      LOCK();
      aVar19 = pTVar70->SharedReferenceCount;
      bVar78 = aVar11 == aVar19;
      if (bVar78) {
        pTVar70->SharedReferenceCount = (atomic<int>)((int)aVar11 + 1);
        aVar19 = aVar11;
      }
      UNLOCK();
      aVar11 = aVar19;
    } while (!bVar78);
    pSVar41 = (SMultiBoxWidget *)this->_padding_;
    if (pSVar41 != (SMultiBoxWidget *)0x0) goto LAB_1427e104a;
  }
LAB_1427e1024:
  bVar78 = ::FDebug::CheckVerifyFailedImpl2
                     ("IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                      ,0x458,L"");
  if (bVar78) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
LAB_1427e104a:
  pFVar27 = TSharedPtr<FMultiBlock_const_,1>::operator->
                      ((TSharedPtr<FMultiBlock_const_,1> *)&this->_padding_);
  bVar78 = pFVar27->bSearchable;
  pFVar28 = TAttribute<FText>::Get((TAttribute<FText> *)local_b2e0);
  pFVar28 = FText::FText(&local_b0c8,pFVar28);
  puVar29 = (undefined8 *)(**(code **)(this->_padding_ + 8))(this,local_ad90);
  local_b088.Object = (SWidget *)*puVar29;
  local_b088.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)puVar29[1];
  if (local_b088.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_b088.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_b088.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SMultiBoxWidget::AddElement(pSVar41,&local_b088,pFVar28,bVar78);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_ad88);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar70);
  FVar71 = *(FName *)(lVar4 + 0xac);
  if (*(FName *)(lVar4 + 0xac) == (FName)0x0) {
    pFVar28 = TAttribute<FText>::Get((TAttribute<FText> *)local_b2e0);
    pFVar30 = FText::ToString(pFVar28);
    if ((pFVar30->Data).ArrayNum == 0) {
      pwVar65 = L"";
    }
    else {
      pwVar65 = (wchar_t *)(pFVar30->Data).AllocatorInstance.Data;
    }
    pFVar30 = ::FString::Printf<wchar_t_const_*>
                        (&local_ad80,
                         (TCheckedFormatStringPrivate<wchar_t,wchar_t_const_*>)0x150952390,pwVar65);
    if ((pFVar30->Data).ArrayNum == 0) {
      pwVar65 = L"";
    }
    else {
      pwVar65 = (wchar_t *)(pFVar30->Data).AllocatorInstance.Data;
    }
    ::FName::FName(&local_b1c8,pwVar65);
    ::FString::~FString(&local_ad80);
    FVar71 = local_b1c8;
  }
  bVar78 = HasAction(this);
  FVar15 = SNullWidget::NullWidget.SharedReferenceCount;
  local_b348 = (SMultiBoxWidget *)SNullWidget::NullWidget.Object;
  if (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  if (((local_b180.Object)->Type == SlimHorizontalToolBar) ||
     ((byte)((local_b180.Object)->Type - SlimHorizontalUniformToolBar) < 2)) {
    pFVar53 = SHorizontalBox::FArguments::FArguments(&local_a758);
    pFVar55 = SHorizontalBox::Slot(&local_a090);
    pSVar41 = (SMultiBoxWidget *)SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar55);
    if ((longlong *)local_b1f8 != &pSVar41->_padding_) {
      *(undefined4 *)&pSVar41->_padding_ = 2;
      *(undefined1 *)((longlong)&pSVar41->_padding_ + 4) = 1;
    }
    pSVar66 = pSVar77;
    if (pSVar41 != (SMultiBoxWidget *)0xffffffffffffffb8) {
      pSVar66 = pSVar41;
    }
    plVar64 = &pSVar66->_padding_;
    if ((longlong *)local_b1f0 != plVar64) {
      *(undefined4 *)plVar64 = 2;
      *(undefined1 *)((longlong)&pSVar66->_padding_ + 4) = 1;
    }
    pSVar41 = pSVar77;
    if (plVar64 != (longlong *)0x0) {
      pSVar41 = pSVar66;
    }
    pTVar45 = &local_b3b8;
    if (bVar78) {
      pTVar45 = &SNullWidget::NullWidget;
    }
    pFVar55 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                        ((FSlotArguments *)pSVar41,pTVar45);
    local_b350 = (FCheckBoxStyle *)SHorizontalBox::FArguments::operator+(pFVar53,pFVar55);
    pFVar55 = SHorizontalBox::Slot(&local_a178);
    pFVar55 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar55);
    local_b0e8.Value = pFVar21->ComboContentMinWidth;
    local_b0e8.bIsSet = true;
    local_b0e8.Getter._0_8_ = 0;
    local_b0e8.Getter._8_8_ = 0;
    local_b0e8.Getter._16_8_ = 0;
    pFVar55 = SHorizontalBox::FSlot::FSlotArguments::MinWidth(pFVar55,&local_b0e8);
    local_b108.Value = pFVar21->ComboContentMaxWidth;
    local_b108.bIsSet = true;
    local_b108.Getter._0_8_ = 0;
    local_b108.Getter._8_8_ = 0;
    local_b108.Getter._16_8_ = 0;
    pFVar55 = SHorizontalBox::FSlot::FSlotArguments::MaxWidth(pFVar55,&local_b108);
    local_3f98.bIsSplitButton = bVar78;
    TAttribute<FText>::TAttribute<FText>(&local_3f98.Label,(TAttribute<FText> *)local_b2e0);
    FToolBarStyle::FToolBarStyle(&local_3f98.ToolBarStyle,pFVar21);
    pTVar34 = TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::
              CreateLambda<_SToolBarComboButtonBlock::BuildMultiBlockWidget_::__l35::<lambda_1>_>
                        ((TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> *)local_afe8,
                         &local_3f98);
    local_ab48.bIsSet = true;
    local_ab48.Value.Left = 0.0;
    local_ab48.Value.Top = 0.0;
    local_ab48.Value.Right = 0.0;
    local_ab48.Value.Bottom = 0.0;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_ab48.Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar34);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_afe8);
    if ((void *)local_afe8._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_afe8._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_afe8);
    pSVar41 = (SMultiBoxWidget *)
              TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                        ((FSlotArgumentsMixin *)&pFVar55->field_0x18,&local_ab48);
    plVar64 = &pSVar41->_padding_;
    if (local_b1e8 != (uint *)plVar64) {
      *(uint *)plVar64 = (uint)(pFVar21->ComboContentHorizontalAlignment).Value;
      *(undefined1 *)((longlong)&pSVar41->_padding_ + 4) = 1;
    }
    pSVar66 = pSVar77;
    if (plVar64 != (longlong *)0x0) {
      pSVar66 = pSVar41;
    }
    if ((longlong *)local_b1e0 != &pSVar66->_padding_) {
      *(undefined4 *)&pSVar66->_padding_ = 2;
      *(undefined1 *)((longlong)&pSVar66->_padding_ + 4) = 1;
    }
    local_b348 = pSVar77;
    if (pSVar66 != (SMultiBoxWidget *)0xffffffffffffffb8) {
      local_b348 = pSVar66;
    }
    pFVar35 = STextBlock::FArguments::FArguments(&local_8428);
    if (*(char *)(lVar4 + 0x2d3) == '\0') {
      pTVar36 = TAttribute<EVisibility>::TAttribute<EVisibility>
                          (&local_aab0,(TAttribute<EVisibility> *)local_b388);
      pSVar77 = (SMultiBoxWidget *)&DAT_00000002;
    }
    else {
      pTVar36 = TAttribute<EVisibility>::TAttribute<EVisibility><EVisibility>
                          (&local_aa90,&EVisibility::Collapsed);
      pSVar77 = (SMultiBoxWidget *)&DAT_00000001;
    }
    local_acd8.Value.Value.Value = (TEnumAsByte<EVisibility::Private>)(pTVar36->Value).Value.Value;
    local_acd8.bIsSet = pTVar36->bIsSet;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_acd8.Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)&pTVar36->Getter);
    pFVar35 = TSlateBaseNamedArgs<STextBlock>::Visibility
                        ((TSlateBaseNamedArgs<STextBlock> *)pFVar35,&local_acd8);
    pTVar37 = TAttribute<FText>::TAttribute<FText>(&local_a7b8,(TAttribute<FText> *)local_b2e0);
    pFVar35 = STextBlock::FArguments::Text(pFVar35,pTVar37);
    pFVar35->_TextStyle = &pFVar21->LabelStyle;
    pTVar38 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                        (&local_ac08,"STextBlock",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SToolBarComboButtonBlock.cpp"
                         ,0xbf,&local_b3a4);
    pTVar39 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                        (pTVar38,&local_ad40,pFVar35);
    pTVar70 = (pTVar39->SharedReferenceCount).ReferenceController;
    local_b068.Object = (SWidget *)pTVar39->Object;
    if (pTVar70 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar70->SharedReferenceCount = (atomic<int>)((int)pTVar70->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_b068.SharedReferenceCount.ReferenceController = pTVar70;
    pFVar55 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                        ((FSlotArguments *)local_b348,&local_b068);
    pFVar53 = SHorizontalBox::FArguments::operator+((FArguments *)local_b350,pFVar55);
    pTVar60 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                        (&local_ac20,"SHorizontalBox",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SToolBarComboButtonBlock.cpp"
                         ,0xa7,&local_b3a3);
    pTVar61 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                        (pTVar60,&local_ad50,pFVar53);
    local_b2f8 = (pTVar61->SharedReferenceCount).ReferenceController;
    local_b348 = (SMultiBoxWidget *)pTVar61->Object;
    if (local_b2f8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_b2f8->SharedReferenceCount = (atomic<int>)((int)local_b2f8->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar15.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_ad50.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_ac20._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar70);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_ad40.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_ac08._Widget.SharedReferenceCount.ReferenceController);
    if (((ulonglong)pSVar77 & 2) != 0) {
      pSVar77 = (SMultiBoxWidget *)(ulonglong)((uint)pSVar77 & 0xfffffffd);
      TAttribute<EVisibility>::~TAttribute<EVisibility>(&local_aab0);
    }
    if (((ulonglong)pSVar77 & 1) != 0) {
      pSVar77 = (SMultiBoxWidget *)(ulonglong)((uint)pSVar77 & 0xfffffffe);
      TAttribute<EVisibility>::~TAttribute<EVisibility>(&local_aa90);
    }
    STextBlock::FArguments::~FArguments(&local_8428);
    `SToolBarComboButtonBlock::BuildMultiBlockWidget'::__l35::<lambda_1>::~<lambda_1>(&local_3f98);
    SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_a178);
    SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_a090);
    DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
              ((FSlotArguments *)local_a758._Slots.AllocatorInstance.Data,local_a758._Slots.ArrayNum
              );
    if ((FSlotArguments *)local_a758._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
      FMemory::Free(local_a758._Slots.AllocatorInstance.Data);
    }
    FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_a758);
  }
  else {
    pFVar31 = SVerticalBox::FArguments::FArguments(&local_9fa8);
    pFVar32 = SVerticalBox::Slot(&local_a260);
    pFVar32 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar32);
    pFVar32 = TAlignmentWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::HAlign
                        ((FSlotArgumentsMixin *)&pFVar32->field_0x48,HAlign_Center);
    pFVar32 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                        ((FSlotArguments *)pFVar32,&local_b3b8);
    pFVar31 = SVerticalBox::FArguments::operator+(pFVar31,pFVar32);
    pFVar32 = SVerticalBox::Slot(&local_a348);
    pFVar32 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar32);
    p<Var33 = `SToolBarComboButtonBlock::BuildMultiBlockWidget'::__l37::<lambda_2>::<lambda_2>
                        (local_7ec8,(TAttribute<FText> *)local_b2e0,pFVar21);
    pTVar34 = TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::
              CreateLambda<_SToolBarComboButtonBlock::BuildMultiBlockWidget_::__l37::<lambda_2>_>
                        (&local_ab78,p<Var33);
    TAttribute<FMargin>::Create(&local_aa70,pTVar34);
    TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::
    ~TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>(&local_ab78);
    pFVar32 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                        ((FSlotArgumentsMixin *)&pFVar32->field_0x18,&local_aa70);
    pFVar32 = TAlignmentWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::HAlign
                        ((FSlotArgumentsMixin *)&pFVar32->field_0x48,HAlign_Center);
    pFVar35 = STextBlock::FArguments::FArguments(&local_8980);
    pTVar36 = TAttribute<EVisibility>::TAttribute<EVisibility>
                        (&local_a830,(TAttribute<EVisibility> *)local_b388);
    pFVar35 = TSlateBaseNamedArgs<STextBlock>::Visibility
                        ((TSlateBaseNamedArgs<STextBlock> *)pFVar35,pTVar36);
    pTVar37 = TAttribute<FText>::TAttribute<FText>(&local_a7e8,(TAttribute<FText> *)local_b2e0);
    pFVar35 = STextBlock::FArguments::Text(pFVar35,pTVar37);
    pFVar35->_TextStyle = &local_b360->LabelStyle;
    pTVar38 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                        (&local_ac38,"STextBlock",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SToolBarComboButtonBlock.cpp"
                         ,0xde,&local_b3a6);
    pTVar39 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                        (pTVar38,&local_ad60,pFVar35);
    TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_b078,pTVar39);
    pFVar32 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                        ((FSlotArguments *)pFVar32,&local_b078);
    pFVar31 = SVerticalBox::FArguments::operator+(pFVar31,pFVar32);
    this_01 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                        (&local_ab60,"SVerticalBox",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SToolBarComboButtonBlock.cpp"
                         ,0xcb,&local_b3a5);
    pTVar40 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                        (this_01,&local_ad70,pFVar31);
    TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SVerticalBox>(&local_b1a8,pTVar40);
    FVar16.ReferenceController = local_b1a8.SharedReferenceCount.ReferenceController;
    pSVar14 = local_b1a8.Object;
    local_b1a8.Object = (SWidget *)local_b348;
    local_b1a8.SharedReferenceCount.ReferenceController = FVar15.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar15.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_ad70.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_ab60._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b078.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_ad60.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_ac38._Widget.SharedReferenceCount.ReferenceController);
    STextBlock::FArguments::~FArguments(&local_8980);
    `SToolBarComboButtonBlock::BuildMultiBlockWidget'::__l37::<lambda_2>::~<lambda_2>(local_7ec8);
    SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_a348);
    SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_a260);
    SVerticalBox::FArguments::~FArguments(&local_9fa8);
    local_b2f8 = FVar16.ReferenceController;
    local_b348 = (SMultiBoxWidget *)pSVar14;
    pFVar21 = local_b360;
  }
  iVar20 = (**(code **)(this->_padding_ + 0x40))(this);
  local_b1c0 = *param_2;
  ::FString::FString(&local_b058,".Button");
  pFVar30 = ::FName::ToString(&local_b1c0,&local_ad30);
  ::FString::ConcatFF(&local_b198,pFVar30,&local_b058);
  FVar67.Data = (FScriptContainerElement *)L"";
  if (local_b198.Data.ArrayNum != 0) {
    FVar67.Data = local_b198.Data.AllocatorInstance.Data;
  }
  ::FName::FName(local_b1b8,(wchar_t *)FVar67.Data);
  if (local_b198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b198.Data.AllocatorInstance.Data);
  }
  if (local_ad30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ad30.Data.AllocatorInstance.Data);
  }
  if (local_b058.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b058.Data.AllocatorInstance.Data);
  }
  EMultiBlockLocation::ToName((FName)&local_b128,local_b1b8[0].ComparisonIndex.Value);
  if (iVar20 == -1) {
    pFVar42 = &pFVar21->ButtonStyle;
  }
  else {
    pFVar42 = ISlateStyle::GetWidgetStyle<FButtonStyle>
                        (param_1,local_b128,(char *)0x0,(FButtonStyle *)0x0);
  }
  pFVar72 = &pFVar21->ComboButtonStyle;
  if (*(char *)(lVar4 + 0x2d3) != '\0') {
    pFVar72 = &pFVar21->SettingsComboButton;
    pFVar42 = &(pFVar21->SettingsComboButton).ButtonStyle;
  }
  uVar10 = *(undefined8 *)((longlong)&(pFVar42->HoveredForeground).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->OpenForegroundColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(pFVar42->HoveredForeground).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->OpenForegroundColor).SpecifiedColor.field0_0x0 + 8) = uVar10;
  EVar12 = (pFVar42->HoveredForeground).ColorTableId;
  uVar13 = *(undefined2 *)&(pFVar42->HoveredForeground).field_0x12;
  (this->OpenForegroundColor).ColorUseRule = (pFVar42->HoveredForeground).ColorUseRule;
  (this->OpenForegroundColor).ColorTableId = EVar12;
  *(undefined2 *)&(this->OpenForegroundColor).field_0x12 = uVar13;
  this->BlockHovered = &pFVar21->BlockHovered;
  local_b358 = pFVar72;
  FText::FText((FText *)local_b258);
  local_b258[0x10] = false;
  local_b230 = 0;
  local_b240 = (undefined1  [8])0x0;
  pvStack_b238 = (void *)0x0;
  if (*(char *)(lVar4 + 0x250) == '\0') {
    if (local_b328.Object == (FUICommandInfo *)0x0) {
      pFVar28 = FText::GetEmpty();
    }
    else {
      pFVar43 = TSharedPtr<FUICommandInfo_const_,1>::operator->(&local_b328);
      pFVar28 = &pFVar43->Description;
    }
    TAttribute<FText>::TAttribute<FText><FText>((TAttribute<FText> *)local_afb8,pFVar28);
    FText::operator=((FText *)local_b258,(FText *)local_afb8);
    local_b258[0x10] = local_afb8[0x10];
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_b240,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_afa0);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_afa0);
    if ((void *)local_afa0._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_afa0._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_afa0);
    if ((ITextData *)local_afb8._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_afb8._0_8_ + 0x10))();
    }
  }
  else {
    TAttribute<FText>::operator=
              ((TAttribute<FText> *)local_b258,(TAttribute<FText> *)(lVar4 + 0x240));
  }
  EVar3 = *(EUserInterfaceActionType *)(lVar4 + 0x2d2);
  if (local_b328.Object != (FUICommandInfo *)0x0) {
    if ((local_b328.Object == (FUICommandInfo *)0x0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar17)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    EVar3 = (local_b328.Object)->UserInterfaceType;
  }
  local_b350 = GetCheckBoxStyle(this,param_1,param_2,bVar78);
  pSVar14 = SNullWidget::NullWidget.Object;
  local_b2a8 = SNullWidget::NullWidget.Object;
  local_b2a0.ReferenceController = SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  if (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->LeftHandSideWidget != (TSharedPtr<SWidget,1> *)&local_b2a8) {
    (this->LeftHandSideWidget).Object = pSVar14;
    local_b2a8 = (SWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->LeftHandSideWidget).SharedReferenceCount,&local_b2a0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b2a0.ReferenceController);
  if (bVar78) {
    if (EVar3 == Button) {
      local_b358 = &pFVar21->SettingsComboButton;
    }
    else {
      local_b358 = ISlateStyle::GetWidgetStyle<FComboButtonStyle>
                             (param_1,*param_2,".SplitComboButton",pFVar72);
    }
    pFVar42 = &local_b358->ButtonStyle;
    pFVar44 = SCheckBox::FArguments::FArguments(&local_9140);
    pFVar44->_Style = local_b350;
    pFVar44->_CheckBoxContentUsesAutoWidth = false;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &pFVar44->_OnCheckStateChanged,(FWriteAccessScope *)&local_af58);
    local_af40 = &(pFVar44->_OnCheckStateChanged).field_0x8;
    puVar29 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_af40);
    local_res18 = (TReferenceControllerBase<1> *)param_2;
    if (puVar29 != (undefined8 *)0x0) {
      uStack_b3bc = local_b0c8._12_4_;
      local_b3c8 = (FSlot *)OnCheckStateChanged;
      uStack_b3c0 = 0;
      pTVar45 = TSharedFromThis<SWidget,1>::AsShared
                          ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_ad20);
      local_res18 = (TReferenceControllerBase<1> *)&pTVar45->Object[-1].StatID;
      if (pTVar45->Object == (SWidget *)0x0) {
        local_res18 = (TReferenceControllerBase<1> *)0x0;
      }
      param_2 = (FName *)(pTVar45->SharedReferenceCount).ReferenceController;
      if ((TReferenceControllerBase<1> *)param_2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        ((TReferenceControllerBase<1> *)param_2)->SharedReferenceCount =
             (atomic<int>)((int)((TReferenceControllerBase<1> *)param_2)->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        ((TReferenceControllerBase<1> *)param_2)->SharedReferenceCount =
             (atomic<int>)((int)((TReferenceControllerBase<1> *)param_2)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pSVar77 = (SMultiBoxWidget *)(ulonglong)((uint)pSVar77 | 0x700);
      *puVar29 = &
                 ___7__TCommonDelegateInstanceState___A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar46 = FDelegateHandle::GenerateNewID();
      puVar29[2] = uVar46;
      *puVar29 = &
                 ___7__TBaseSPMethodDelegateInstance__0A_VSToolBarComboButtonBlock___00__A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar29[3] = local_res18;
      puVar29[4] = param_2;
      if ((TReferenceControllerBase<1> *)param_2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        ((TReferenceControllerBase<1> *)param_2)->WeakReferenceCount =
             (atomic<int>)((int)((TReferenceControllerBase<1> *)param_2)->WeakReferenceCount + 1);
        UNLOCK();
      }
      puVar29[5] = local_b3c8;
      puVar29[6] = CONCAT44(uStack_b3bc,uStack_b3c0);
    }
    if ((uint)pSVar77 >> 10 != 0) {
      pSVar77 = (SMultiBoxWidget *)(ulonglong)((uint)pSVar77 & 0xfffffbff);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)param_2);
    }
    if (((uint)pSVar77 >> 9 & 1) != 0) {
      pSVar77 = (SMultiBoxWidget *)(ulonglong)((uint)pSVar77 & 0xfffffdff);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)param_2);
    }
    if (((uint)pSVar77 >> 8 & 1) != 0) {
      pSVar77 = (SMultiBoxWidget *)(ulonglong)((uint)pSVar77 & 0xfffffeff);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_ad20.SharedReferenceCount.ReferenceController);
    }
    if (local_af58.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_af58.Accessor,&local_af58);
    }
    local_b3c8 = (FSlot *)OnGetMenuContent;
    uStack_b3c0 = 0;
    lStack_ad00 = (ulonglong)uStack_b3bc << 0x20;
    local_ad08 = OnGetMenuContent;
    TDelegateRegistration<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>::
    BindSP<SToolBarComboButtonBlock>
              ((TDelegateRegistration<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
                *)&pFVar44->_OnGetMenuContent,this,(pmf_1bafcc5b *)&local_ad08);
    (pFVar44->_IsChecked).bIsSet = true;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(pFVar44->_IsChecked).Getter,(FWriteAccessScope *)&local_af38);
    local_af20 = &(pFVar44->_IsChecked).Getter.field_0x8;
    puVar29 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_af20);
    if (puVar29 != (undefined8 *)0x0) {
      uStack_b3bc = local_b0c8._12_4_;
      local_b3c8 = (FSlot *)GetCheckState;
      uStack_b3c0 = 0;
      pTVar47 = TSharedFromThis<SWidget,1>::AsShared
                          ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_acf8);
      pTVar68 = &pTVar47->Object[-1].StatID;
      if (pTVar47->Object == (SWidget *)0x0) {
        pTVar68 = (TStatId *)0x0;
      }
      local_res18 = (pTVar47->SharedReferenceCount).ReferenceController;
      if (local_res18 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_res18->SharedReferenceCount =
             (atomic<int>)((int)local_res18->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        local_res18->SharedReferenceCount =
             (atomic<int>)((int)local_res18->SharedReferenceCount + 1);
        UNLOCK();
      }
      pSVar77 = (SMultiBoxWidget *)(ulonglong)((uint)pSVar77 | 0x3800);
      *puVar29 = &
                 ___7__TCommonDelegateInstanceState___A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar46 = FDelegateHandle::GenerateNewID();
      puVar29[2] = uVar46;
      *puVar29 = &
                 ___7__TBaseSPMethodDelegateInstance__00__CBVSToolBarComboButtonBlock___00__A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar29[3] = pTVar68;
      puVar29[4] = local_res18;
      if (local_res18 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_res18->WeakReferenceCount = (atomic<int>)((int)local_res18->WeakReferenceCount + 1);
        UNLOCK();
      }
      puVar29[5] = local_b3c8;
      puVar29[6] = CONCAT44(uStack_b3bc,uStack_b3c0);
    }
    if ((uint)pSVar77 >> 0xd != 0) {
      pSVar77 = (SMultiBoxWidget *)(ulonglong)((uint)pSVar77 & 0xffffdfff);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_res18);
    }
    if (((uint)pSVar77 >> 0xc & 1) != 0) {
      pSVar77 = (SMultiBoxWidget *)(ulonglong)((uint)pSVar77 & 0xffffefff);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_res18);
    }
    if (((uint)pSVar77 >> 0xb & 1) != 0) {
      pSVar77 = (SMultiBoxWidget *)(ulonglong)((uint)pSVar77 & 0xfffff7ff);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_acf8.SharedReferenceCount.ReferenceController);
    }
    if (local_af38.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_af38.Accessor,&local_af38);
    }
    local_b3c8 = (FSlot *)IsEnabled;
    uStack_b3c0 = 0;
    lStack_ace0 = (ulonglong)uStack_b3bc << 0x20;
    local_ace8 = IsEnabled;
    pFVar44 = TSlateBaseNamedArgs<SCheckBox>::IsEnabled<SToolBarComboButtonBlock>
                        ((TSlateBaseNamedArgs<SCheckBox> *)pFVar44,this,(pmf_2619bd21 *)&local_ace8)
    ;
    pFVar48 = SBox::FArguments::FArguments(&local_9480);
    pFVar48->_HAlign = HAlign_Center;
    pFVar48->_VAlign = VAlign_Center;
    pFVar48 = SBox::FArguments::operator[](pFVar48,&local_b3b8);
    pTVar49 = MakeTDecl<SBox,RequiredArgs::T0RequiredArgs>
                        (&local_abd8,"SBox",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SToolBarComboButtonBlock.cpp"
                         ,0x123,&local_b3a2);
    pTVar50 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                        (pTVar49,&local_aca8,pFVar48);
    TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBox>(&local_b048,pTVar50);
    pFVar44 = SCheckBox::FArguments::operator[](pFVar44,&local_b048);
    pTVar51 = MakeTDecl<SCheckBox,RequiredArgs::T0RequiredArgs>
                        (&local_abf0,"SCheckBox",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SToolBarComboButtonBlock.cpp"
                         ,0x11b,&local_b3a1);
    pTVar51 = TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>::Expose<SWidget>
                        (pTVar51,&this->LeftHandSideWidget);
    TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>::operator<<=(pTVar51,&local_acb8,pFVar44);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_acb8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_abf0._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b048.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_aca8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_abd8._Widget.SharedReferenceCount.ReferenceController);
    SBox::FArguments::~FArguments(&local_9480);
    SCheckBox::FArguments::~FArguments(&local_9140);
    pFVar21 = local_b360;
  }
  else {
    bVar78 = HasCheckedState(this);
    if (bVar78) {
      this->CheckBoxStyle = local_b350;
    }
  }
  pFVar52 = SBorder::FArguments::FArguments(&local_8d60);
  local_b3c8 = (FSlot *)GetBorderImage;
  uStack_b3c0 = 0;
  lStack_ac90 = (ulonglong)uStack_b3bc << 0x20;
  local_ac98 = GetBorderImage;
  TAttribute<FSlateBrush_const_*>::Bind<SToolBarComboButtonBlock>
            (&pFVar52->_BorderImage,this,(pmf_e0746c1c *)&local_ac98);
  pFVar52 = SBorder::FArguments::Padding(pFVar52,0.0);
  pFVar53 = SHorizontalBox::FArguments::FArguments(&local_a550);
  local_b028 = 0;
  pTStack_b020 = (TReferenceControllerBase<1> *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &FMultiBoxSettings::ToolTipConstructor,&local_abc0);
  plVar64 = (longlong *)0x0;
  if (FMultiBoxSettings::ToolTipConstructor._16_4_ != 0) {
    plVar64 = (longlong *)FMultiBoxSettings::ToolTipConstructor._8_8_;
  }
  (**(code **)(*plVar64 + 0x60))(plVar64,&local_b398,local_b258,&local_b028,&local_b328,1);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_abc0);
  local_af88.Value.Object = (IToolTip *)(local_b398 + 0x2a8);
  if (local_b398 == (code *)0x0) {
    local_af88.Value.Object = (IToolTip *)0x0;
  }
  if (CONCAT44(fStack_b38c,uStack_b390) != 0) {
    LOCK();
    piVar1 = (int *)(CONCAT44(fStack_b38c,uStack_b390) + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_af88.bIsSet = true;
  local_af88.Getter._16_8_ = 0;
  local_af88.Getter._0_8_ = 0;
  local_af88.Getter._8_8_ = 0;
  pFVar53 = TSlateBaseNamedArgs<SHorizontalBox>::ToolTip
                      ((TSlateBaseNamedArgs<SHorizontalBox> *)pFVar53,&local_af88);
  pFVar54 = ::operator_new(0x58);
  if (pFVar54 == (FSlot *)0x0) {
    local_b160 = (FSlot *)0x0;
  }
  else {
    *(undefined8 *)pFVar54 = 0;
    *(undefined8 *)&pFVar54->field_0x8 = 0;
    *(undefined8 *)&pFVar54->field_0x10 = 0;
    *(undefined8 *)&pFVar54->field_0x18 = 0;
    *(undefined8 *)&pFVar54->field_0x20 = 0;
    *(undefined8 *)&pFVar54->field_0x28 = 0;
    *(undefined8 *)&pFVar54->field_0x30 = 0;
    *(undefined8 *)&pFVar54->field_0x38 = 0;
    *(undefined8 *)&pFVar54->field_0x40 = 0;
    *(undefined8 *)&pFVar54->field_0x48 = 0;
    *(undefined8 *)&pFVar54->field_0x50 = 0;
    local_b160 = SHorizontalBox::FSlot::FSlot(pFVar54);
  }
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_a958,(FSlot *)&local_b160);
  pFVar55 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth((FSlotArguments *)local_a958);
  if (local_b1d8 != (undefined4 *)&pFVar55->field_0x50) {
    *(undefined4 *)&pFVar55->field_0x50 = 0;
    pFVar55->field_0x54 = 1;
  }
  pFVar73 = (FSlotArguments *)0x0;
  if (pFVar55 != (FSlotArguments *)0xffffffffffffffb8) {
    pFVar73 = pFVar55;
  }
  pTVar45 = TSharedPtr<SWidget,1>::ToSharedRef(&this->LeftHandSideWidget,&local_ae38);
  pFVar55 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)pFVar73,pTVar45);
  pFVar53 = SHorizontalBox::FArguments::operator+(pFVar53,pFVar55);
  pFVar54 = ::operator_new(0x58);
  if (pFVar54 == (FSlot *)0x0) {
    local_b3c8 = (FSlot *)0x0;
  }
  else {
    *(undefined8 *)pFVar54 = 0;
    *(undefined8 *)&pFVar54->field_0x8 = 0;
    *(undefined8 *)&pFVar54->field_0x10 = 0;
    *(undefined8 *)&pFVar54->field_0x18 = 0;
    *(undefined8 *)&pFVar54->field_0x20 = 0;
    *(undefined8 *)&pFVar54->field_0x28 = 0;
    *(undefined8 *)&pFVar54->field_0x30 = 0;
    *(undefined8 *)&pFVar54->field_0x38 = 0;
    *(undefined8 *)&pFVar54->field_0x40 = 0;
    *(undefined8 *)&pFVar54->field_0x48 = 0;
    *(undefined8 *)&pFVar54->field_0x50 = 0;
    local_b3c8 = SHorizontalBox::FSlot::FSlot(pFVar54);
  }
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_aa40,(FSlot *)&local_b3c8);
  pFVar55 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth((FSlotArguments *)local_aa40);
  if (local_b1d0 != (undefined4 *)&pFVar55->field_0x50) {
    *(undefined4 *)&pFVar55->field_0x50 = 0;
    pFVar55->field_0x54 = 1;
  }
  pFVar73 = (FSlotArguments *)0x0;
  if (pFVar55 != (FSlotArguments *)0xffffffffffffffb8) {
    pFVar73 = pFVar55;
  }
  pFVar56 = SComboButton::FArguments::FArguments(&local_9af8);
  local_b338._padding_ = (longlong)&___7FTagMetaData__6B_;
  plVar64 = &pFVar56->_padding_;
  local_b338.Tag = FVar71;
  pTVar57 = MakeShared<FTagMetaData,1,FTagMetaData_&>(&local_ac88,&local_b338);
  local_b2f0 = pTVar57->Object;
  local_b2e8 = (pTVar57->SharedReferenceCount).ReferenceController;
  if (local_b2e8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_b2e8->SharedReferenceCount = (atomic<int>)((int)local_b2e8->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((((FTagMetaData **)*plVar64 <= &local_b2f0) &&
      (&local_b2f0 <
       (FTagMetaData **)*plVar64 + (longlong)*(int *)((longlong)&pFVar56->_padding_ + 4) * 2)) &&
     (bVar78 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar78)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  iVar20 = (int)pFVar56->_padding_;
  piVar1 = (int *)((longlong)&pFVar56->_padding_ + 4);
  if (iVar20 == *piVar1) {
    iVar20 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,(ForAnyElementType *)plVar64,piVar1);
  }
  *(int *)&pFVar56->_padding_ = iVar20 + 1;
  lVar5 = *plVar64;
  *(FTagMetaData **)(lVar5 + (longlong)iVar20 * 0x10) = local_b2f0;
  *(TReferenceControllerBase<1> **)(lVar5 + (longlong)iVar20 * 0x10 + 8) = local_b2e8;
  if (local_b2e8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_b2e8->SharedReferenceCount = (atomic<int>)((int)local_b2e8->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_b2e8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_ac88.SharedReferenceCount.ReferenceController);
  local_aed8.bIsSet = true;
  local_aed8.Getter._16_8_ = 0;
  local_aed8.Value.Left = 0.0;
  local_aed8.Value.Top = 0.0;
  local_aed8.Value.Right = 0.0;
  local_aed8.Value.Bottom = 0.0;
  local_aed8.Getter._0_8_ = 0;
  local_aed8.Getter._8_8_ = 0;
  pFVar56 = SComboButton::FArguments::ContentPadding(pFVar56,&local_aed8);
  pFVar56->_ComboButtonStyle = local_b358;
  pFVar56->_ButtonStyle = pFVar42;
  pTVar37 = TAttribute<FText>::TAttribute<FText>(&local_a788,(TAttribute<FText> *)(lVar4 + 0x240));
  pFVar56 = TSlateBaseNamedArgs<SComboButton>::ToolTipText
                      ((TSlateBaseNamedArgs<SComboButton> *)pFVar56,pTVar37);
  local_b218 = *(EMenuPlacement *)(lVar4 + 0x2b0);
  local_b214 = *(bool *)(lVar4 + 0x2b4);
  TDelegate<enum_EMenuPlacement___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<enum_EMenuPlacement___cdecl(void),FDefaultDelegateUserPolicy>
            (local_b210,
             (TDelegate<EMenuPlacement___cdecl(void),FDefaultDelegateUserPolicy> *)(lVar4 + 0x2b8));
  (pFVar56->_MenuPlacement).Value = local_b218;
  (pFVar56->_MenuPlacement).bIsSet = local_b214;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar56->_MenuPlacement).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_b210);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_b210);
  if ((void *)local_b210._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_b210._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_b210);
  local_b338._padding_ = (longlong)OnGetForegroundColor;
  local_b338.Tag = (FName)((ulonglong)local_b338.Tag & 0xffffffff00000000);
  local_ac78 = OnGetForegroundColor;
  FStack_ac70 = local_b338.Tag;
  TAttribute<FSlateColor>::Bind<SToolBarComboButtonBlock>
            (&pFVar56->_ForegroundColor,this,(pmf_a2cef929 *)&local_ac78);
  local_b338.Tag = (FName)((ulonglong)local_b338.Tag & 0xffffffff00000000);
  local_b338._padding_ = (longlong)OnGetMenuContent;
  local_ac68 = OnGetMenuContent;
  FStack_ac60 = local_b338.Tag;
  TDelegateRegistration<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>::
  BindSP<SToolBarComboButtonBlock>
            ((TDelegateRegistration<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
              *)&pFVar56->_OnGetMenuContent,this,(pmf_1bafcc5b *)&local_ac68);
  if (local_b2f8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_b2f8->SharedReferenceCount = (atomic<int>)((int)local_b2f8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_ae78 = (pFVar56->_ButtonContent).Widget.Object;
  pTStack_ae70 = (pFVar56->_ButtonContent).Widget.SharedReferenceCount.ReferenceController;
  (pFVar56->_ButtonContent).Widget.Object = (SWidget *)local_b348;
  (pFVar56->_ButtonContent).Widget.SharedReferenceCount.ReferenceController = local_b2f8;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_ae70);
  pTVar58 = MakeTDecl<SComboButton,RequiredArgs::T0RequiredArgs>
                      (&local_ab18,"SComboButton",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SToolBarComboButtonBlock.cpp"
                       ,0x148,&local_b3a0);
  pTVar58 = TSlateDecl<SComboButton,RequiredArgs::T0RequiredArgs>::Expose<SComboButton>
                      (pTVar58,&this->ComboButtonWidget);
  pTVar59 = TSlateDecl<SComboButton,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar58,&local_ae48,pFVar56);
  local_b038.Object = (SWidget *)pTVar59->Object;
  pTVar70 = (pTVar59->SharedReferenceCount).ReferenceController;
  if (pTVar70 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar70->SharedReferenceCount = (atomic<int>)((int)pTVar70->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_b038.SharedReferenceCount.ReferenceController = pTVar70;
  pFVar55 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)pFVar73,&local_b038);
  pFVar53 = SHorizontalBox::FArguments::operator+(pFVar53,pFVar55);
  pTVar60 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                      (&local_aba8,"SHorizontalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SToolBarComboButtonBlock.cpp"
                       ,0x13a,&local_b39f);
  pTVar61 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar60,&local_ae58,pFVar53);
  pTVar6 = (pTVar61->SharedReferenceCount).ReferenceController;
  local_b298 = pTVar61->Object;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar7 = (pFVar52->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar52->_Content).Widget.Object = (SWidget *)local_b298;
  (pFVar52->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar6;
  pTStack_b290 = pTVar6;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  FLLMScope::FLLMScope(local_b368,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_b168 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_b170,&local_b168,true);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>
            (&local_ada8,"SBorder",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SToolBarComboButtonBlock.cpp"
             ,0x136,local_b39e);
  FMemScope::~FMemScope(&local_b170);
  FLLMScope::~FLLMScope(local_b368);
  pTVar62 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_ada8,&local_ae68,pFVar52);
  plVar64 = &this->_padding_;
  pSVar75 = pTVar62->Object;
  pTVar7 = (pTVar62->SharedReferenceCount).ReferenceController;
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    FSlotBase::DetatchParentFromContent((FSlotBase *)plVar64);
  }
  else {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    FSlotBase::DetatchParentFromContent((FSlotBase *)plVar64);
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar9 = (TReferenceControllerBase<1> *)this->_padding_;
  this->_padding_ = (longlong)pSVar75;
  this->_padding_ = (longlong)pTVar7;
  local_b288 = pSVar75;
  pTStack_b280 = pTVar7;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)plVar64);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_ae68.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_ada8._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_ae58.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_aba8._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar70);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_ae48.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_ab18._Widget.SharedReferenceCount.ReferenceController);
  SComboButton::FArguments::~FArguments(&local_9af8);
  TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_a9e8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_aa10);
  if ((void *)local_aa10._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_aa10._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_aa10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_aa30);
  if (local_aa40[0] != (undefined8 *)0x0) {
    (**(code **)*local_aa40[0])(local_aa40[0],1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_ae38.SharedReferenceCount.ReferenceController);
  TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_a900);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_a928);
  if ((void *)local_a928._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_a928._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_a928);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_a948);
  if (local_a958[0] != (undefined8 *)0x0) {
    (**(code **)*local_a958[0])(local_a958[0],1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)CONCAT44(fStack_b38c,uStack_b390));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_b020);
  DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_a550._Slots.AllocatorInstance.Data,local_a550._Slots.ArrayNum);
  if ((FSlotArguments *)local_a550._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_a550._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_a550);
  SBorder::FArguments::~FArguments(&local_8d60);
  local_aea8.Value.Left = (pFVar21->ComboButtonPadding).Left;
  local_aea8.Value.Top = (pFVar21->ComboButtonPadding).Top;
  local_aea8.Value.Right = (pFVar21->ComboButtonPadding).Right;
  local_aea8.Value.Bottom = (pFVar21->ComboButtonPadding).Bottom;
  if (*(char *)(lVar4 + 0x2d3) != '\0') {
    pFVar63 = FMargin::FMargin(&local_b0b8,0.0);
    local_aea8.Value.Left = pFVar63->Left;
    local_aea8.Value.Top = pFVar63->Top;
    local_aea8.Value.Right = pFVar63->Right;
    local_aea8.Value.Bottom = pFVar63->Bottom;
  }
  local_aea8.bIsSet = true;
  local_aea8.Getter._16_8_ = 0;
  local_aea8.Getter._0_8_ = 0;
  local_aea8.Getter._8_8_ = 0;
  TPaddingSingleWidgetSlotMixin<TSingleWidgetChildrenWithBasicLayoutSlot<0>,0>::Padding
            ((TPaddingSingleWidgetSlotMixin<TSingleWidgetChildrenWithBasicLayoutSlot<0>,0> *)
             &this->_padding_,&local_aea8);
  local_b318[0] = false;
  local_b318[1] = true;
  FStack_b308.DelegateSize = 0;
  local_b310.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_b308.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_b310,(FWriteAccessScope *)&local_af18);
  local_af00 = &FStack_b308;
  puVar29 = UE::Core::Private::DelegateAllocate(0x38,&FStack_b308);
  pSVar74 = pSVar75;
  if (puVar29 != (undefined8 *)0x0) {
    fStack_b38c = local_b0b8.Bottom;
    local_b398 = IsEnabled;
    uStack_b390 = 0;
    pTVar47 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_ae28);
    pTVar68 = &pTVar47->Object[-1].StatID;
    if (pTVar47->Object == (SWidget *)0x0) {
      pTVar68 = (TStatId *)0x0;
    }
    pSVar74 = (SBorder *)(pTVar47->SharedReferenceCount).ReferenceController;
    if (pSVar74 != (SBorder *)0x0) {
      LOCK();
      *(int *)&pSVar74->_padding_ = (int)pSVar74->_padding_ + 1;
      UNLOCK();
      LOCK();
      *(int *)&pSVar74->_padding_ = (int)pSVar74->_padding_ + 1;
      UNLOCK();
    }
    pSVar77 = (SMultiBoxWidget *)(ulonglong)((uint)pSVar77 | 0x1c);
    *puVar29 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar46 = FDelegateHandle::GenerateNewID();
    puVar29[2] = uVar46;
    *puVar29 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSToolBarComboButtonBlock___00__A6A_NXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar29[3] = pTVar68;
    puVar29[4] = pSVar74;
    if (pSVar74 != (SBorder *)0x0) {
      LOCK();
      puVar2 = (undefined1 *)((longlong)&pSVar74->_padding_ + 4);
      *(int *)puVar2 = *(int *)puVar2 + 1;
      UNLOCK();
    }
    puVar29[5] = local_b398;
    puVar29[6] = CONCAT44(fStack_b38c,uStack_b390);
  }
  if (((ulonglong)pSVar77 & 0x10) != 0) {
    pSVar77 = (SMultiBoxWidget *)(ulonglong)((uint)pSVar77 & 0xffffffef);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar74);
  }
  if (((ulonglong)pSVar77 & 8) != 0) {
    pSVar77 = (SMultiBoxWidget *)(ulonglong)((uint)pSVar77 & 0xfffffff7);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar74);
  }
  bVar76 = (byte)pSVar77;
  if (((ulonglong)pSVar77 & 4) != 0) {
    bVar76 = bVar76 & 0xfb;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_ae28.SharedReferenceCount.ReferenceController);
  }
  if (local_af18.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_af18.Accessor,&local_af18);
  }
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)((longlong)&this->_padding_ + 2),(SWidget *)&this->_padding_,
           (TAttribute<bool> *)local_b318,None);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_b310,(FWriteAccessScope *)&local_b000);
  if ((FStack_b308.DelegateSize != 0) &&
     (FStack_b308.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)FStack_b308.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&FStack_b308,0,0,0x10);
    FStack_b308.DelegateSize = 0;
  }
  if (local_b000.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b000.Accessor,&local_b000);
  }
  if (FStack_b308.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)FStack_b308.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_b310.AccessDetector);
  local_b148[0] = (TEnumAsByte<EVisibility::Private>)0x19;
  local_b148[1] = true;
  FStack_b138.DelegateSize = 0;
  local_b140.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_b138.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_b140,(FWriteAccessScope *)&local_aef8);
  local_aee0 = &FStack_b138;
  puVar29 = UE::Core::Private::DelegateAllocate(0x38,&FStack_b138);
  if (puVar29 != (undefined8 *)0x0) {
    fStack_b38c = local_b0b8.Bottom;
    local_b398 = GetVisibility;
    uStack_b390 = 0;
    pTVar47 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_ae18);
    pTVar68 = &pTVar47->Object[-1].StatID;
    if (pTVar47->Object == (SWidget *)0x0) {
      pTVar68 = (TStatId *)0x0;
    }
    pSVar75 = (SBorder *)(pTVar47->SharedReferenceCount).ReferenceController;
    if (pSVar75 != (SBorder *)0x0) {
      LOCK();
      *(int *)&pSVar75->_padding_ = (int)pSVar75->_padding_ + 1;
      UNLOCK();
      LOCK();
      *(int *)&pSVar75->_padding_ = (int)pSVar75->_padding_ + 1;
      UNLOCK();
    }
    bVar76 = bVar76 | 0xe0;
    *puVar29 = &
               ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar46 = FDelegateHandle::GenerateNewID();
    puVar29[2] = uVar46;
    *puVar29 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSToolBarComboButtonBlock___00__A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar29[3] = pTVar68;
    puVar29[4] = pSVar75;
    if (pSVar75 != (SBorder *)0x0) {
      LOCK();
      puVar2 = (undefined1 *)((longlong)&pSVar75->_padding_ + 4);
      *(int *)puVar2 = *(int *)puVar2 + 1;
      UNLOCK();
    }
    puVar29[5] = local_b398;
    puVar29[6] = CONCAT44(fStack_b38c,uStack_b390);
  }
  if ((char)bVar76 < '\0') {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar75);
  }
  if ((bVar76 & 0x40) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar75);
  }
  if ((bVar76 & 0x20) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_ae18.SharedReferenceCount.ReferenceController);
  }
  if (local_aef8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_aef8.Accessor,&local_aef8);
  }
  SCompoundWidget::SetVisibility
            ((SCompoundWidget *)&this->_padding_,(TAttribute<EVisibility> *)local_b148);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_b240);
  if (pvStack_b238 != (void *)0x0) {
    FMemory::Free(pvStack_b238);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_b240);
  if ((ITextData *)local_b258._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_b258._0_8_ + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_b2f8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b3b8.SharedReferenceCount.ReferenceController);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_b380,
             (FWriteAccessScope *)&local_afd0);
  if (((int)local_b370 != 0) && (FStack_b378.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_b378.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_b378,0,0,0x10);
    local_b370 = local_b370 & 0xffffffff00000000;
  }
  if (local_afd0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_afd0.Accessor,&local_afd0);
  }
  if (FStack_b378.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_b378.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_b380);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_b2c8,(FWriteAccessScope *)&local_b018);
  if (((int)local_b2b8 != 0) && (FStack_b2c0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_b2c0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_b2c0,0,0,0x10);
    local_b2b8 = local_b2b8 & 0xffffffff00000000;
  }
  if (local_b018.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b018.Accessor,&local_b018);
  }
  if (FStack_b2c0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_b2c0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_b2c8.AccessDetector);
  if ((ITextData *)local_b2e0._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_b2e0._0_8_ + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b328.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_b188);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b180.SharedReferenceCount.ReferenceController);
  return;
}

// Construct @ 1427efb70

void __thiscall
SToolBarComboButtonBlock::Construct(SToolBarComboButtonBlock *this,FArguments *param_1)

{
  FName FVar1;
  
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
  FVar1 = (param_1->_Icon).Value.StyleName;
  (this->Icon).Value.StyleSetName = (param_1->_Icon).Value.StyleSetName;
  (this->Icon).Value.StyleName = FVar1;
  FVar1 = (param_1->_Icon).Value.StatusOverlayStyleName;
  (this->Icon).Value.SmallStyleName = (param_1->_Icon).Value.SmallStyleName;
  (this->Icon).Value.StatusOverlayStyleName = FVar1;
  (this->Icon).bIsSet = (param_1->_Icon).bIsSet;
  TDelegate<FSlateIcon___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&(this->Icon).Getter,&(param_1->_Icon).Getter);
  this->bForceSmallIcons = param_1->_ForceSmallIcons;
  return;
}

// GetBorderImage @ 14280da90

FSlateBrush * __thiscall SToolBarComboButtonBlock::GetBorderImage(SToolBarComboButtonBlock *this)

{
  SComboButton *pSVar1;
  SWidget *pSVar2;
  FName FVar3;
  FName *pFVar4;
  ISlateStyle *pIVar5;
  FSlateBrush *pFVar6;
  FName local_res8 [4];
  
  pSVar1 = (this->ComboButtonWidget).Object;
  if (((pSVar1 == (SComboButton *)0x0) || (*(char *)((longlong)&pSVar1->_padding_ + 3) == '\0')) &&
     ((pSVar2 = (this->LeftHandSideWidget).Object, pSVar2 == (SWidget *)0x0 ||
      (pSVar2->HoveredAttribute ==
       (TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x0)))) {
    pFVar4 = ::FName::FName(local_res8,"NoBorder");
    FVar3 = *pFVar4;
    pIVar5 = FAppStyle::Get();
    pFVar6 = (FSlateBrush *)(**(code **)((longlong)*pIVar5 + 0x50))(pIVar5,FVar3,0,0);
    return pFVar6;
  }
  return this->BlockHovered;
}

// GetCheckBoxStyle @ 14280e130

FCheckBoxStyle * __thiscall
SToolBarComboButtonBlock::GetCheckBoxStyle
          (SToolBarComboButtonBlock *this,ISlateStyle *param_1,FName *param_2,bool param_3)

{
  int iVar1;
  FToolBarStyle *pFVar2;
  FName FVar3;
  FString *pFVar4;
  FCheckBoxStyle *pFVar5;
  ForAnyElementType FVar6;
  code *pcVar7;
  FName local_res8;
  FName local_res10;
  undefined1 local_res18 [8];
  FString local_58;
  FString local_48;
  FString local_38;
  
  pFVar2 = (FToolBarStyle *)
           (**(code **)((longlong)*param_1 + 0xa0))(param_1,FToolBarStyle::TypeName,*param_2,0,1);
  if (pFVar2 == (FToolBarStyle *)0x0) {
    pFVar2 = FToolBarStyle::GetDefault();
  }
  iVar1 = (**(code **)(this->_padding_ + 0x38))(this);
  if (this->_padding_ == 0) {
    if ((this->Icon).bIsSet == false) {
      param_1 = FAppStyle::Get();
      FVar3 = (FName)::FName::FName(&local_res8,"Checkbox");
      pcVar7 = *(code **)((longlong)*param_1 + 0xa0);
    }
    else {
      if (iVar1 == -1) {
        if (!param_3) {
          return &pFVar2->ToggleButton;
        }
        pFVar5 = ISlateStyle::GetWidgetStyle<FCheckBoxStyle>
                           (param_1,*param_2,".SplitToggleButton",&pFVar2->ToggleButton);
        return pFVar5;
      }
      local_res8 = *param_2;
      ::FString::FString(&local_48,".ToggleButton");
      pFVar4 = ::FName::ToString(&local_res8,&local_38);
      ::FString::ConcatFF(&local_58,pFVar4,&local_48);
      FVar6.Data = (FScriptContainerElement *)L"";
      if (local_58.Data.ArrayNum != 0) {
        FVar6.Data = local_58.Data.AllocatorInstance.Data;
      }
      ::FName::FName(&local_res10,(wchar_t *)FVar6.Data);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      FVar3 = EMultiBlockLocation::ToName((FName)local_res18,local_res10.ComparisonIndex.Value);
      pcVar7 = *(code **)((longlong)*param_1 + 0xa0);
    }
    pFVar5 = (FCheckBoxStyle *)(*pcVar7)(param_1,FCheckBoxStyle::TypeName,*(FName *)FVar3,0,1);
    if (pFVar5 == (FCheckBoxStyle *)0x0) {
      pFVar5 = FCheckBoxStyle::GetDefault();
    }
  }
  else {
    pFVar5 = &pFVar2->SettingsToggleButton;
  }
  return pFVar5;
}

// GetCheckState @ 14280e510

ECheckBoxState __thiscall SToolBarComboButtonBlock::GetCheckState(SToolBarComboButtonBlock *this)

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

// GetIconBrush @ 142810350

FSlateBrush * __thiscall SToolBarComboButtonBlock::GetIconBrush(SToolBarComboButtonBlock *this)

{
  bool *pbVar1;
  FSlateIcon *pFVar2;
  FSlateBrush *pFVar3;
  
  if (this->bForceSmallIcons == false) {
    pbVar1 = TAttribute<bool>::Get(&FMultiBoxSettings::UseSmallToolBarIcons);
    if (*pbVar1 == false) {
      pFVar2 = TAttribute<FSlateIcon>::Get(&this->Icon);
      pFVar3 = FSlateIcon::GetIcon(pFVar2);
      return pFVar3;
    }
  }
  pFVar2 = TAttribute<FSlateIcon>::Get(&this->Icon);
  pFVar3 = FSlateIcon::GetSmallIcon(pFVar2);
  return pFVar3;
}

// GetIconForegroundColor @ 1428104d0

FSlateColor * __thiscall
SToolBarComboButtonBlock::GetIconForegroundColor
          (SToolBarComboButtonBlock *this,FSlateColor *__return_storage_ptr__)

{
  SWidget *pSVar1;
  FCheckBoxStyle *pFVar2;
  undefined8 uVar3;
  FLinearColor_u_0 FVar4;
  EStyleColor EVar5;
  undefined2 uVar6;
  ECheckBoxState EVar7;
  bool *pbVar8;
  FSlateIcon *pFVar9;
  FSlateBrush *pFVar10;
  SComboButton *pSVar11;
  
  if (this->bForceSmallIcons == false) {
    pbVar8 = TAttribute<bool>::Get(&FMultiBoxSettings::UseSmallToolBarIcons);
    if (*pbVar8 != false) goto LAB_142810510;
    pFVar9 = TAttribute<FSlateIcon>::Get(&this->Icon);
    pFVar10 = FSlateIcon::GetIcon(pFVar9);
  }
  else {
LAB_142810510:
    pFVar9 = TAttribute<FSlateIcon>::Get(&this->Icon);
    pFVar10 = FSlateIcon::GetSmallIcon(pFVar9);
  }
  if ((pFVar10 != (FSlateBrush *)0x0) &&
     ((((FLinearColor::White.field0_0x0._s_0.R !=
         (pFVar10->TintColor).SpecifiedColor.field0_0x0._s_0.R ||
        (FLinearColor::White.field0_0x0._s_0.G !=
         (pFVar10->TintColor).SpecifiedColor.field0_0x0._s_0.G)) ||
       (FLinearColor::White.field0_0x0._s_0.B !=
        (pFVar10->TintColor).SpecifiedColor.field0_0x0._s_0.B)) ||
      ((FLinearColor::White.field0_0x0._s_0.A !=
        (pFVar10->TintColor).SpecifiedColor.field0_0x0._s_0.A ||
       ((pFVar10->TintColor).ColorUseRule != UseColor_Specified)))))) {
    FVar4._s_0.G = FLinearColor::White.field0_0x0._s_0.G;
    FVar4._s_0.R = FLinearColor::White.field0_0x0._s_0.R;
    FVar4._s_0.B = FLinearColor::White.field0_0x0._s_0.B;
    FVar4._s_0.A = FLinearColor::White.field0_0x0._s_0.A;
    __return_storage_ptr__->ColorUseRule = UseColor_Specified;
    (__return_storage_ptr__->SpecifiedColor).field0_0x0 = FVar4;
    return __return_storage_ptr__;
  }
  if (this->CheckBoxStyle != (FCheckBoxStyle *)0x0) {
    EVar7 = GetCheckState(this);
    pSVar1 = (this->LeftHandSideWidget).Object;
    if ((pSVar1 == (SWidget *)0x0) || (pSVar1 != SNullWidget::NullWidget.Object)) {
      pSVar11 = (SComboButton *)TSharedPtr<SWidget,1>::operator->(&this->LeftHandSideWidget);
    }
    else {
      pSVar11 = TSharedPtr<SComboButton,1>::operator->(&this->ComboButtonWidget);
    }
    if (*(char *)((longlong)&pSVar11->_padding_ + 3) != '\0') {
      if (EVar7 != Unchecked) {
        if (EVar7 == Checked) {
          pFVar2 = this->CheckBoxStyle;
          uVar3 = *(undefined8 *)
                   ((longlong)&(pFVar2->CheckedHoveredForeground).SpecifiedColor.field0_0x0 + 8);
          *(undefined8 *)&(__return_storage_ptr__->SpecifiedColor).field0_0x0 =
               *(undefined8 *)&(pFVar2->CheckedHoveredForeground).SpecifiedColor.field0_0x0;
          *(undefined8 *)((longlong)&(__return_storage_ptr__->SpecifiedColor).field0_0x0 + 8) =
               uVar3;
          EVar5 = (pFVar2->CheckedHoveredForeground).ColorTableId;
          uVar6 = *(undefined2 *)&(pFVar2->CheckedHoveredForeground).field_0x12;
          __return_storage_ptr__->ColorUseRule = (pFVar2->CheckedHoveredForeground).ColorUseRule;
          __return_storage_ptr__->ColorTableId = EVar5;
          *(undefined2 *)&__return_storage_ptr__->field_0x12 = uVar6;
          return __return_storage_ptr__;
        }
        if (EVar7 != Undetermined) goto LAB_1428106c5;
      }
      pFVar2 = this->CheckBoxStyle;
      uVar3 = *(undefined8 *)((longlong)&(pFVar2->HoveredForeground).SpecifiedColor.field0_0x0 + 8);
      *(undefined8 *)&(__return_storage_ptr__->SpecifiedColor).field0_0x0 =
           *(undefined8 *)&(pFVar2->HoveredForeground).SpecifiedColor.field0_0x0;
      *(undefined8 *)((longlong)&(__return_storage_ptr__->SpecifiedColor).field0_0x0 + 8) = uVar3;
      EVar5 = (pFVar2->HoveredForeground).ColorTableId;
      uVar6 = *(undefined2 *)&(pFVar2->HoveredForeground).field_0x12;
      __return_storage_ptr__->ColorUseRule = (pFVar2->HoveredForeground).ColorUseRule;
      __return_storage_ptr__->ColorTableId = EVar5;
      *(undefined2 *)&__return_storage_ptr__->field_0x12 = uVar6;
      return __return_storage_ptr__;
    }
    if (EVar7 == Unchecked) {
      pFVar2 = this->CheckBoxStyle;
      uVar3 = *(undefined8 *)((longlong)&(pFVar2->ForegroundColor).SpecifiedColor.field0_0x0 + 8);
      *(undefined8 *)&(__return_storage_ptr__->SpecifiedColor).field0_0x0 =
           *(undefined8 *)&(pFVar2->ForegroundColor).SpecifiedColor.field0_0x0;
      *(undefined8 *)((longlong)&(__return_storage_ptr__->SpecifiedColor).field0_0x0 + 8) = uVar3;
      EVar5 = (pFVar2->ForegroundColor).ColorTableId;
      uVar6 = *(undefined2 *)&(pFVar2->ForegroundColor).field_0x12;
      __return_storage_ptr__->ColorUseRule = (pFVar2->ForegroundColor).ColorUseRule;
      __return_storage_ptr__->ColorTableId = EVar5;
      *(undefined2 *)&__return_storage_ptr__->field_0x12 = uVar6;
      return __return_storage_ptr__;
    }
    if (EVar7 == Checked) {
      pFVar2 = this->CheckBoxStyle;
      uVar3 = *(undefined8 *)((longlong)&(pFVar2->CheckedForeground).SpecifiedColor.field0_0x0 + 8);
      *(undefined8 *)&(__return_storage_ptr__->SpecifiedColor).field0_0x0 =
           *(undefined8 *)&(pFVar2->CheckedForeground).SpecifiedColor.field0_0x0;
      *(undefined8 *)((longlong)&(__return_storage_ptr__->SpecifiedColor).field0_0x0 + 8) = uVar3;
      EVar5 = (pFVar2->CheckedForeground).ColorTableId;
      uVar6 = *(undefined2 *)&(pFVar2->CheckedForeground).field_0x12;
      __return_storage_ptr__->ColorUseRule = (pFVar2->CheckedForeground).ColorUseRule;
      __return_storage_ptr__->ColorTableId = EVar5;
      *(undefined2 *)&__return_storage_ptr__->field_0x12 = uVar6;
      return __return_storage_ptr__;
    }
    if (EVar7 == Undetermined) {
      pFVar2 = this->CheckBoxStyle;
      uVar3 = *(undefined8 *)
               ((longlong)&(pFVar2->UndeterminedForeground).SpecifiedColor.field0_0x0 + 8);
      *(undefined8 *)&(__return_storage_ptr__->SpecifiedColor).field0_0x0 =
           *(undefined8 *)&(pFVar2->UndeterminedForeground).SpecifiedColor.field0_0x0;
      *(undefined8 *)((longlong)&(__return_storage_ptr__->SpecifiedColor).field0_0x0 + 8) = uVar3;
      EVar5 = (pFVar2->UndeterminedForeground).ColorTableId;
      uVar6 = *(undefined2 *)&(pFVar2->UndeterminedForeground).field_0x12;
      __return_storage_ptr__->ColorUseRule = (pFVar2->UndeterminedForeground).ColorUseRule;
      __return_storage_ptr__->ColorTableId = EVar5;
      *(undefined2 *)&__return_storage_ptr__->field_0x12 = uVar6;
      return __return_storage_ptr__;
    }
  }
LAB_1428106c5:
  *(undefined8 *)&(__return_storage_ptr__->SpecifiedColor).field0_0x0 = 0x3f800000;
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.B = 1.0;
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.A = 1.0;
  __return_storage_ptr__->ColorUseRule = UseColor_Foreground;
  __return_storage_ptr__->ColorTableId = Black;
  return __return_storage_ptr__;
}

// GetIconVisibility @ 142810880

EVisibility __thiscall
SToolBarComboButtonBlock::GetIconVisibility(SToolBarComboButtonBlock *this,bool param_1)

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
      goto LAB_1428108b6;
    }
  }
  cVar3 = '\x01';
LAB_1428108b6:
  EVar1.Value.Value = EVisibility::Visible.Value.Value;
  if (in_R8B != cVar3) {
    EVar1.Value.Value = EVisibility::Collapsed.Value.Value;
  }
  *(TEnumAsByte<EVisibility::Private> *)CONCAT71(in_register_00000011,param_1) = EVar1.Value.Value;
  return (TEnumAsByte<EVisibility::Private>)(TEnumAsByte<EVisibility::Private>)param_1;
}

// GetNormalIconBrush @ 142811610

FSlateBrush * __thiscall
SToolBarComboButtonBlock::GetNormalIconBrush(SToolBarComboButtonBlock *this)

{
  FSlateIcon *this_00;
  FSlateBrush *pFVar1;
  
  this_00 = TAttribute<FSlateIcon>::Get(&this->Icon);
  pFVar1 = FSlateIcon::GetIcon(this_00);
  return pFVar1;
}

// GetOverlayIconBrush @ 142813a20

FSlateBrush * __thiscall
SToolBarComboButtonBlock::GetOverlayIconBrush(SToolBarComboButtonBlock *this)

{
  FSlateIcon *this_00;
  FSlateBrush *pFVar1;
  
  this_00 = TAttribute<FSlateIcon>::Get(&this->Icon);
  if ((this_00->StyleSetName != (FName)0x0) && (this_00->StyleName != (FName)0x0)) {
    pFVar1 = FSlateIcon::GetOverlayIcon(this_00);
    return pFVar1;
  }
  return (FSlateBrush *)0x0;
}

// GetSmallIconBrush @ 1428155a0

FSlateBrush * __thiscall SToolBarComboButtonBlock::GetSmallIconBrush(SToolBarComboButtonBlock *this)

{
  FSlateIcon *this_00;
  FSlateBrush *pFVar1;
  
  this_00 = TAttribute<FSlateIcon>::Get(&this->Icon);
  pFVar1 = FSlateIcon::GetSmallIcon(this_00);
  return pFVar1;
}

// GetVisibility @ 142816ae0

/* WARNING: Type propagation algorithm not settling */

EVisibility __thiscall SToolBarComboButtonBlock::GetVisibility(SToolBarComboButtonBlock *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TEnumAsByte<EVisibility::Private> TVar4;
  char cVar5;
  EVisibility *pEVar6;
  EVisibility EVar7;
  TEnumAsByte<EVisibility::Private> *in_RDX;
  longlong *plVar8;
  undefined1 local_a0 [8];
  ForAnyElementType FStack_98;
  int local_90;
  undefined1 local_88 [8];
  undefined1 local_80 [8];
  ForAnyElementType FStack_78;
  int local_70;
  FDestructionSentinel local_68;
  FDestructionSentinel local_50;
  FReadAccessScope local_38;
  FReadAccessScope local_20;
  
  if (this->_padding_ == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar4.Value = (*pcVar2)();
      return (TEnumAsByte<EVisibility::Private>)(TEnumAsByte<EVisibility::Private>)TVar4.Value;
    }
  }
  plVar8 = (longlong *)0x0;
  cVar5 = *(char *)(this->_padding_ + 0xc1);
  local_a0 = (undefined1  [8])0x0;
  FStack_98.Data = (FScriptContainerElement *)0x0;
  local_90 = 0;
  TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)local_a0,
             (TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)
             (this->_padding_ + 200));
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a0,
             (FWriteAccessScope *)&local_68);
  if ((local_90 != 0) && (FStack_98.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_98.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_98,0,0,0x10);
    local_90 = 0;
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  if (FStack_98.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_98.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_a0);
  if (cVar5 != '\0') {
    if (this->_padding_ == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar4.Value = (*pcVar2)();
        return (TEnumAsByte<EVisibility::Private>)(TEnumAsByte<EVisibility::Private>)TVar4.Value;
      }
    }
    lVar1 = this->_padding_;
    local_88[0] = *(TEnumAsByte<EVisibility::Private> *)(lVar1 + 0xc0);
    local_88[1] = *(undefined1 *)(lVar1 + 0xc1);
    local_80 = (undefined1  [8])0x0;
    FStack_78.Data = (FScriptContainerElement *)0x0;
    local_70 = 0;
    TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)local_80,
               (TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)(lVar1 + 200));
    pEVar6 = TAttribute<EVisibility>::Get((TAttribute<EVisibility> *)local_88);
    TVar4.Value = (pEVar6->Value).Value;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_80,
               (FWriteAccessScope *)&local_50);
    if ((local_70 != 0) && (FStack_78.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_78.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_78,0,0,0x10);
      local_70 = 0;
    }
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
    if (FStack_78.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_78.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_80);
    if ((TEnumAsByte<EVisibility::Private>)TVar4.Value != EVisibility::Visible.Value.Value) {
      in_RDX->Value = TVar4.Value;
      goto LAB_142816d8a;
    }
  }
  if (this->_padding_ == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar4.Value = (*pcVar2)();
      return (TEnumAsByte<EVisibility::Private>)(TEnumAsByte<EVisibility::Private>)TVar4.Value;
    }
  }
  lVar1 = this->_padding_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar1 + 0x60),&local_38);
  if ((*(int *)(lVar1 + 0x70) != 0) && (*(longlong **)(lVar1 + 0x68) != (longlong *)0x0)) {
    cVar5 = (**(code **)(**(longlong **)(lVar1 + 0x68) + 0x38))();
    if (cVar5 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_38);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar1 + 0x60),&local_20)
      ;
      if (*(int *)(lVar1 + 0x70) != 0) {
        plVar8 = *(longlong **)(lVar1 + 0x68);
      }
      cVar5 = (**(code **)(*plVar8 + 0x60))(plVar8);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_20);
      EVar7 = EVisibility::Collapsed;
      if (cVar5 != '\0') {
        EVar7 = EVisibility::Visible;
      }
      in_RDX->Value = (uchar)EVar7.Value.Value;
      goto LAB_142816d8a;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_38);
  in_RDX->Value = (uchar)EVisibility::Visible.Value.Value;
LAB_142816d8a:
  return (EVisibility)SUB81(in_RDX,0);
}

// HasAction @ 142817ef0

bool __thiscall SToolBarComboButtonBlock::HasAction(SToolBarComboButtonBlock *this)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  char cVar7;
  TReferenceControllerBase<1> *pTVar8;
  uint uStackX_c;
  FReadAccessScope local_28;
  
  if ((this->_padding_ == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  pTVar1 = *(TReferenceControllerBase<1> **)(this->_padding_ + 0x98);
  lVar2 = *(longlong *)(this->_padding_ + 0x90);
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar4 = false;
  if (lVar2 == 0) {
    pTVar8 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
LAB_142817fc6:
    if ((this->_padding_ == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    lVar2 = this->_padding_;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar2 + 0x18),&local_28);
    if (((*(int *)(lVar2 + 0x28) == 0) || (*(longlong **)(lVar2 + 0x20) == (longlong *)0x0)) ||
       (cVar7 = (**(code **)(**(longlong **)(lVar2 + 0x20) + 0x38))(), cVar7 == '\0')) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      bVar6 = false;
      goto LAB_14281803e;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
  }
  else {
    if ((this->_padding_ == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    pTVar8 = *(TReferenceControllerBase<1> **)(this->_padding_ + 0x88);
    lVar2 = *(longlong *)(this->_padding_ + 0x80);
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar4 = true;
    if (lVar2 == 0) goto LAB_142817fc6;
  }
  bVar6 = true;
LAB_14281803e:
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return bVar6;
}

// HasCheckedState @ 142818080

bool __thiscall SToolBarComboButtonBlock::HasCheckedState(SToolBarComboButtonBlock *this)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  FUICommandList *this_00;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  FUIAction *pFVar9;
  TReferenceControllerBase<1> *pTVar10;
  uint uStackX_c;
  TSharedPtr<FUICommandInfo_const_,1> local_38;
  FReadAccessScope local_28;
  
  if (this->_padding_ == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
  }
  pTVar1 = *(TReferenceControllerBase<1> **)(this->_padding_ + 0x98);
  lVar2 = *(longlong *)(this->_padding_ + 0x90);
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar6 = false;
  if (lVar2 == 0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
LAB_142818154:
    bVar4 = false;
    bVar5 = false;
    if (bVar6) goto LAB_14281815b;
  }
  else {
    if (this->_padding_ == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (bool)uVar7;
      }
    }
    pTVar10 = *(TReferenceControllerBase<1> **)(this->_padding_ + 0x88);
    lVar2 = *(longlong *)(this->_padding_ + 0x80);
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar6 = true;
    if (lVar2 == 0) goto LAB_142818154;
    bVar5 = true;
LAB_14281815b:
    bVar4 = bVar5;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (bVar4) {
    if (this->_padding_ == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (bool)uVar7;
      }
    }
    pTVar1 = *(TReferenceControllerBase<1> **)(this->_padding_ + 0x98);
    this_00 = *(FUICommandList **)(this->_padding_ + 0x90);
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (this_00 == (FUICommandList *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (bool)uVar7;
      }
    }
    if (this->_padding_ == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (bool)uVar7;
      }
    }
    local_38.Object = *(FUICommandInfo **)(this->_padding_ + 0x80);
    local_38.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)(this->_padding_ + 0x88);
    if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar9 = FUICommandList::GetActionForCommand(this_00,&local_38);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    if (pFVar9 != (FUIAction *)0x0) {
      bVar6 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                        ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar9->GetActionCheckState);
      return bVar6;
    }
  }
  if (this->_padding_ == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
  }
  lVar2 = this->_padding_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar2 + 0x48),&local_28);
  if ((*(int *)(lVar2 + 0x58) != 0) && (*(longlong **)(lVar2 + 0x50) != (longlong *)0x0)) {
    cVar8 = (**(code **)(**(longlong **)(lVar2 + 0x50) + 0x38))();
    if (cVar8 != '\0') {
      bVar6 = true;
      goto LAB_1428182dc;
    }
  }
  bVar6 = false;
LAB_1428182dc:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return bVar6;
}

// HasDynamicIcon @ 142818300

bool __thiscall SToolBarComboButtonBlock::HasDynamicIcon(SToolBarComboButtonBlock *this)

{
  longlong *plVar1;
  char cVar2;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(this->Icon).Getter,
             &local_28);
  if ((*(int *)&(this->Icon).Getter.field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->Icon).Getter.field_0x8, plVar1 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar1 + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      return true;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return false;
}

// IsEnabled @ 14281d7d0

bool __thiscall SToolBarComboButtonBlock::IsEnabled(SToolBarComboButtonBlock *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  longlong *plVar6;
  FReadAccessScope local_38;
  FReadAccessScope local_20;
  
  if (this->_padding_ == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  lVar1 = this->_padding_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar1 + 0x30),&local_38);
  if ((*(int *)(lVar1 + 0x40) != 0) && (*(longlong **)(lVar1 + 0x38) != (longlong *)0x0)) {
    cVar5 = (**(code **)(**(longlong **)(lVar1 + 0x38) + 0x38))();
    if (cVar5 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_38);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar1 + 0x30),&local_20)
      ;
      if (*(int *)(lVar1 + 0x40) == 0) {
        plVar6 = (longlong *)0x0;
      }
      else {
        plVar6 = *(longlong **)(lVar1 + 0x38);
      }
      uVar4 = (**(code **)(*plVar6 + 0x60))();
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_20);
      return (bool)uVar4;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_38);
  return true;
}

// OnCheckStateChanged @ 1428242d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SToolBarComboButtonBlock::OnCheckStateChanged(SToolBarComboButtonBlock *this,ECheckBoxState param_1)

{
  FReply local_c8;
  
  OnClicked(this,&local_c8);
  FReply::~FReply(&local_c8);
  return;
}

// OnClicked @ 142825240

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FReply * __thiscall
SToolBarComboButtonBlock::OnClicked(SToolBarComboButtonBlock *this,FReply *__return_storage_ptr__)

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
      if (aVar6 == (atomic<int>)0x0) goto LAB_1428253c5;
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
    if (this_01 != (SMultiBoxWidget *)0x0) goto LAB_1428253eb;
  }
LAB_1428253c5:
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
LAB_1428253eb:
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

// OnGetForegroundColor @ 142827370

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateColor * __thiscall
SToolBarComboButtonBlock::OnGetForegroundColor
          (SToolBarComboButtonBlock *this,FSlateColor *__return_storage_ptr__)

{
  code *pcVar1;
  undefined8 uVar2;
  EStyleColor EVar3;
  undefined2 uVar4;
  bool bVar5;
  FSlateColor *pFVar6;
  
  if ((this->ComboButtonWidget).Object == (SComboButton *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FSlateColor *)(*pcVar1)();
      return pFVar6;
    }
  }
  bVar5 = SMenuAnchor::IsOpen((SMenuAnchor *)(this->ComboButtonWidget).Object);
  if (bVar5) {
    uVar2 = *(undefined8 *)((longlong)&(this->OpenForegroundColor).SpecifiedColor.field0_0x0 + 8);
    *(undefined8 *)&(__return_storage_ptr__->SpecifiedColor).field0_0x0 =
         *(undefined8 *)&(this->OpenForegroundColor).SpecifiedColor.field0_0x0;
    *(undefined8 *)((longlong)&(__return_storage_ptr__->SpecifiedColor).field0_0x0 + 8) = uVar2;
    EVar3 = (this->OpenForegroundColor).ColorTableId;
    uVar4 = *(undefined2 *)&(this->OpenForegroundColor).field_0x12;
    __return_storage_ptr__->ColorUseRule = (this->OpenForegroundColor).ColorUseRule;
    __return_storage_ptr__->ColorTableId = EVar3;
    *(undefined2 *)&__return_storage_ptr__->field_0x12 = uVar4;
    return __return_storage_ptr__;
  }
  *(undefined8 *)&(__return_storage_ptr__->SpecifiedColor).field0_0x0 = 0x3f800000;
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.B = 1.0;
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.A = 1.0;
  __return_storage_ptr__->ColorUseRule = UseColor_UseStyle;
  __return_storage_ptr__->ColorTableId = Black;
  return __return_storage_ptr__;
}

// OnGetMenuContent @ 142827440

TSharedRef<SWidget,1> * __thiscall
SToolBarComboButtonBlock::OnGetMenuContent
          (SToolBarComboButtonBlock *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TSharedRef<SWidget,1> *pTVar5;
  longlong *plVar6;
  FReadAccessScope local_28;
  
  if (this->_padding_ == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TSharedRef<SWidget,1> *)(*pcVar3)();
      return pTVar5;
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
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TSharedRef<SWidget,1> *)(*pcVar3)();
      return pTVar5;
    }
  }
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar1 + 0x1c8),&local_28);
  if (*(int *)(lVar1 + 0x1d8) == 0) {
    plVar6 = (longlong *)0x0;
  }
  else {
    plVar6 = *(longlong **)(lVar1 + 0x1d0);
  }
  (**(code **)(*plVar6 + 0x60))(plVar6,__return_storage_ptr__);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return __return_storage_ptr__;
}

