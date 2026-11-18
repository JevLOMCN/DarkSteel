// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 16

// ~SToolBarStackButtonBlock @ 1427bad60

void __thiscall SToolBarStackButtonBlock::~SToolBarStackButtonBlock(SToolBarStackButtonBlock *this)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  longlong *plVar4;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->StackButtonWidget).SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Icon).Getter);
  pvVar3 = *(void **)&(this->Icon).Getter.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->Icon).Getter);
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

// BuildMultiBlockWidget @ 1427e38e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
SToolBarStackButtonBlock::BuildMultiBlockWidget
          (SToolBarStackButtonBlock *this,ISlateStyle *param_1,FName *param_2)

{
  byte *pbVar1;
  longlong *this_00;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  atomic<int> aVar5;
  bool bVar6;
  bool bVar7;
  EStyleColor EVar8;
  undefined2 uVar9;
  FSharedReferencer<1> FVar10;
  float fVar11;
  char cVar12;
  byte bVar13;
  atomic<int> aVar14;
  int iVar15;
  FToolBarStyle *pFVar16;
  EVisibility *pEVar17;
  TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *pTVar18;
  FArguments *pFVar19;
  undefined8 *puVar20;
  TSharedRef<SWidget_const_,1> *pTVar21;
  ulong64 uVar22;
  FMultiBlock *pFVar23;
  FText *pFVar24;
  FString *pFVar25;
  FName FVar26;
  ISlateStyle *this_01;
  FName *pFVar27;
  FComboButtonStyle *pFVar28;
  FArguments *pFVar29;
  FSlotArguments *pFVar30;
  TAttribute<float> *pTVar31;
  TAttribute<FMargin> *pTVar32;
  FArguments *pFVar33;
  FSlotArguments *pFVar34;
  FArguments *pFVar35;
  TAttribute<EVisibility> *pTVar36;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *pTVar37;
  TSharedRef<STextBlock,1> *pTVar38;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> *this_02;
  TSharedRef<SVerticalBox,1> *pTVar39;
  FArguments *pFVar40;
  FSlotArguments *pFVar41;
  FMargin *pFVar42;
  TAttribute<FSlateBrush_const_*> *pTVar43;
  TAttribute<FSlateColor> *pTVar44;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> *pTVar45;
  TSharedRef<SImage,1> *pTVar46;
  FSlateColor *pFVar47;
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> *pTVar48;
  TSharedRef<SOverlay,1> *pTVar49;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> *pTVar50;
  TSharedRef<SHorizontalBox,1> *pTVar51;
  FArguments *this_03;
  TSharedRef<SWidget,1> *pTVar52;
  SCheckBoxStack *pSVar53;
  SCheckBoxStack *pSVar54;
  wchar_t *pwVar55;
  SMultiBoxWidget *pSVar56;
  SMultiBoxWidget *pSVar57;
  FName FVar58;
  SMultiBoxWidget *this_04;
  SMultiBoxWidget *pSVar59;
  TStatId *pTVar60;
  TReferenceControllerBase<1> *pTVar61;
  bool bVar62;
  bool bVar63;
  undefined4 uVar64;
  undefined4 uVar65;
  FNameEntryId FVar66;
  uint uVar67;
  FButtonStyle *local_res10;
  TReferenceControllerBase<1> *local_res18;
  uint local_res20 [2];
  FCheckBoxStyle *local_3a68;
  uint uStack_3a5c;
  T0RequiredArgs local_3a50;
  T0RequiredArgs local_3a4f;
  T0RequiredArgs local_3a4e;
  T0RequiredArgs local_3a4d;
  T0RequiredArgs local_3a4c;
  T0RequiredArgs local_3a4b;
  T0RequiredArgs local_3a4a;
  T0RequiredArgs local_3a49;
  T0RequiredArgs local_3a48;
  T0RequiredArgs local_3a47;
  T0RequiredArgs local_3a46;
  T0RequiredArgs local_3a45;
  T0RequiredArgs local_3a44 [12];
  FName local_3a38;
  undefined4 uStack_3a30;
  uint uStack_3a2c;
  FLLMScope local_3a28;
  FLLMScope local_3a24;
  FToolBarStyle *local_3a20;
  undefined8 local_3a18;
  FName local_3a10;
  longlong local_3a08;
  int local_3a00 [2];
  undefined1 local_39f8 [8];
  FName FStack_39f0;
  TSlateDecl<SCheckBoxStack,RequiredArgs::T0RequiredArgs> local_39e8;
  FName local_39d0;
  TSharedRef<SLayeredImage,1> local_39c8;
  undefined1 local_39b8 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_39a0;
  ForAnyElementType FStack_3998;
  ulonglong local_3990;
  SWidget *local_3988;
  longlong lStack_3980;
  TSharedRef<SWidget_const_,1> local_3978;
  FSlateBrush *local_3968;
  undefined4 uStack_3960;
  uint uStack_395c;
  FSlateBrush *local_3958;
  undefined4 uStack_3950;
  uint uStack_394c;
  FMargin local_3948;
  FMemScope local_3938;
  TReferenceControllerBase<1> *local_3930;
  undefined1 local_3928 [8];
  FName FStack_3920;
  FMemScope local_3918;
  FName local_3910;
  undefined1 local_3908 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_3900;
  FDelegateAllocation FStack_38f8;
  FSlateBrush *local_38e8;
  TAttribute<EVisibility> local_38e0;
  undefined1 local_38c0 [16];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_38b0;
  FDelegateAllocation FStack_38a8;
  TSharedRef<SWidget,1> local_3898;
  TSharedRef<SWidget,1> local_3888;
  TSharedRef<SWidget,1> local_3878;
  TSharedRef<SWidget,1> local_3868;
  TSharedRef<SWidget,1> local_3858;
  TSharedRef<SWidget,1> local_3848;
  FTagMetaData local_3838;
  FMargin local_3828;
  TSharedRef<SWidget,1> local_3818;
  TSharedRef<SWidget,1> local_3808;
  TSharedRef<SWidget,1> local_37f8;
  TSharedRef<SWidget,1> local_37e8;
  TSharedRef<SWidget,1> local_37d8;
  TSharedRef<FMultiBox_const_,1> local_37c8;
  TSharedRef<SToolBarStackButtonBlock,1> local_37b8;
  TSharedPtr<SWidget,1> local_37a8;
  FTagMetaData local_3798;
  FDestructionSentinel local_3788;
  TVector2<double>_u_0 local_3770;
  undefined1 local_3760;
  undefined1 local_3758;
  undefined8 local_3750;
  undefined8 uStack_3748;
  undefined8 local_3740;
  FDestructionSentinel local_3738;
  undefined1 *local_3720;
  FDestructionSentinel local_3718;
  undefined1 *local_3700;
  FDestructionSentinel local_36f8;
  FDelegateAllocation *local_36e0;
  FDestructionSentinel local_36d8;
  undefined1 *local_36c0;
  FDestructionSentinel local_36b8;
  longlong *local_36a0;
  FDestructionSentinel local_3698;
  undefined1 *local_3680;
  FDestructionSentinel local_3678;
  FDelegateAllocation *local_3660;
  FDestructionSentinel local_3658;
  undefined1 *local_3640;
  TAttribute<FMargin> local_3638;
  TSharedRef<STextBlock,1> local_3608;
  FMargin local_35f8;
  code *local_35e8;
  longlong lStack_35e0;
  TSharedRef<SHorizontalBox,1> local_35d8;
  TSharedRef<SOverlay,1> local_35c8;
  TSharedRef<SImage,1> local_35b8;
  TSharedRef<SImage,1> local_35a8;
  TSharedRef<STextBlock,1> local_3598;
  TSharedRef<SWidget,1> local_3588;
  TSharedRef<SWidget_const_,1> local_3578;
  TSharedRef<SWidget_const_,1> local_3568;
  TSharedRef<SWidget,1> local_3558;
  SWidget *local_3548;
  TReferenceControllerBase<1> *pTStack_3540;
  SCheckBoxStack *local_3538;
  TReferenceControllerBase<1> *pTStack_3530;
  longlong local_3528;
  TReferenceControllerBase<1> *pTStack_3520;
  TSharedRef<SOverlay,1> local_3518;
  FMargin local_3508;
  undefined1 local_34f8 [8];
  FName local_34f0;
  TSlateDecl<SLayeredImage,RequiredArgs::T0RequiredArgs> local_34e8;
  TSharedRef<SWidget,1> local_34d0;
  FName local_34b8;
  undefined8 uStack_34b0;
  TSharedRef<SWidget_const_,1> local_34a8;
  TSharedRef<SWidget_const_,1> local_3498;
  TSharedRef<SWidget_const_,1> local_3488;
  undefined1 local_3478 [8];
  TReferenceControllerBase<1> *local_3470;
  FString local_3468;
  code *local_3458;
  longlong lStack_3450;
  FMargin local_3448;
  TSharedRef<SHorizontalBox,1> local_3438;
  TSharedRef<SImage,1> local_3428;
  TSharedRef<SImage,1> local_3418;
  TSharedRef<SVerticalBox,1> local_3408;
  TAttribute<EVisibility> local_33f8;
  TAttribute<EVisibility> local_33d8;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_33b8;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_33a0;
  TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> local_3388;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_3370;
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> local_3358;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_3340;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_3328;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_3310;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_32f8;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_32e0;
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> local_32c8;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_32b0;
  FText local_3298;
  FMargin local_3288;
  TAttribute<EVisibility> local_3278;
  FSlateColor local_3258;
  FSlateColor local_3244;
  TAttribute<float> local_3230;
  TAttribute<EVisibility> local_3210;
  TAttribute<EVisibility> local_31f0;
  TAttribute<EVisibility> local_31d0;
  TAttribute<EVisibility> local_31b0;
  TAttribute<EVisibility> local_3190;
  TAttribute<EVisibility> local_3170;
  TAttribute<FSlateBrush_const_*> local_3150;
  TAttribute<FSlateBrush_const_*> local_3128;
  TAttribute<FSlateBrush_const_*> local_3100;
  TAttribute<FSlateBrush_const_*> local_30d8;
  TAttribute<FMargin> local_30b0;
  TAttribute<FMargin> local_3080;
  TAttribute<FMargin> local_3050;
  TAttribute<FSlateColor> local_3020;
  TAttribute<FMargin> local_2ff0;
  TAttribute<FSlateColor> local_2fc0;
  TAttribute<FMargin> local_2f90;
  TAttribute<FMargin> local_2f60;
  TAttribute<FMargin> local_2f30;
  TAttribute<FMargin> local_2f00;
  TAttribute<FSlateColor> local_2ed0;
  TAttribute<FSlateColor> local_2ea0;
  TAttribute<FMargin> local_2e70;
  FSlotArguments local_2e40;
  FSlotArguments local_2de0;
  FSlotArguments local_2d80;
  FSlotArguments local_2d20;
  FSlotArguments local_2cc0;
  FSlotArguments local_2bd8;
  FSlotArguments local_2af0;
  FSlotArguments local_2a08;
  FSlotArguments local_2920;
  FSlotArguments local_2838;
  FSlotArguments local_2750;
  FArguments local_2668;
  FArguments local_2460;
  FArguments local_2258;
  FArguments local_2050;
  FArguments local_1e48;
  FArguments local_1c40;
  FArguments local_1998;
  FArguments local_16f0;
  FArguments local_1448;
  FArguments local_11a0;
  FArguments local_ef8;
  FArguments local_b18;
  FArguments local_5c0;
  undefined8 uStack_48;
  
  uStack_48 = 0x1427e390d;
  pSVar59 = (SMultiBoxWidget *)0x0;
  local_res20[0] = 0;
  pSVar57 = (SMultiBoxWidget *)this->_padding_;
  pSVar56 = pSVar57;
  this_04 = pSVar59;
  if (pSVar57 == (SMultiBoxWidget *)0x0) {
LAB_1427e3965:
    bVar62 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    pSVar57 = pSVar56;
    if (bVar62) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    aVar5 = *(atomic<int> *)&pSVar57->_padding_;
    do {
      pSVar56 = pSVar59;
      this_04 = (SMultiBoxWidget *)0x0;
      if (aVar5 == (atomic<int>)0x0) goto LAB_1427e3965;
      LOCK();
      aVar14 = *(atomic<int> *)&pSVar57->_padding_;
      bVar62 = aVar5 == aVar14;
      if (bVar62) {
        *(atomic<int> *)&pSVar57->_padding_ = (atomic<int>)((int)aVar5 + 1);
        aVar14 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar14;
    } while (!bVar62);
    this_04 = (SMultiBoxWidget *)this->_padding_;
    pSVar56 = pSVar57;
    if (this_04 == (SMultiBoxWidget *)0x0) goto LAB_1427e3965;
  }
  SMultiBoxWidget::GetMultiBox(this_04,&local_37c8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar57);
  if ((this->_padding_ == 0) &&
     (bVar62 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L""), bVar62)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pTVar61 = (TReferenceControllerBase<1> *)this->_padding_;
  local_3a08 = this->_padding_;
  if (pTVar61 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar61->SharedReferenceCount = (atomic<int>)((int)pTVar61->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_3930 = pTVar61;
  if ((local_3a08 == 0) &&
     (bVar62 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L""), bVar62)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (pTVar61 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar61->SharedReferenceCount = (atomic<int>)((int)pTVar61->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar61);
  FText::FText((FText *)local_39b8);
  local_39b8[0x10] = false;
  local_39a0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_3998.Data = (FScriptContainerElement *)0x0;
  local_3990 = 0;
  pFVar16 = (FToolBarStyle *)
            (**(code **)((longlong)*param_1 + 0xa0))(param_1,FToolBarStyle::TypeName,*param_2,0,1);
  if (pFVar16 == (FToolBarStyle *)0x0) {
    local_3a20 = pFVar16;
    pFVar16 = FToolBarStyle::GetDefault();
  }
  local_3a20 = pFVar16;
  if ((this->LabelVisibilityOverride).bIsSet == false) {
    if (pFVar16->bShowLabels == false) {
      TAttribute<EVisibility>::TAttribute<EVisibility><EVisibility>
                (&local_33d8,&EVisibility::Collapsed);
      TAttribute<EVisibility>::operator=(&this->LabelVisibility,&local_33d8);
      TAttribute<EVisibility>::~TAttribute<EVisibility>(&local_33d8);
    }
    else {
      local_res20[0] = local_res20[0] & 0xffffff00;
      local_3a38 = (FName)GetIconVisibility;
      uStack_3a30 = 0;
      pTVar52 = TSharedFromThis<SWidget,1>::AsShared
                          ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_34d0);
      local_res18._0_1_ = SUB81(param_2,0);
      TSharedRef<SToolBarStackButtonBlock,1>::TSharedRef<SToolBarStackButtonBlock,1><SWidget>
                (&local_37b8,pTVar52,local_res18._0_1_);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_34d0.SharedReferenceCount.ReferenceController);
      uStack_34b0._4_4_ = uStack_3a2c;
      uStack_34b0._0_4_ = uStack_3a30;
      local_34b8 = local_3a38;
      pTVar18 = TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
                CreateSP<SToolBarStackButtonBlock,1,bool>
                          (&local_3388,&local_37b8,(pmf_598e3474 *)&local_34b8,(bool *)local_res20);
      pTVar36 = TAttribute<EVisibility>::Create(&local_3278,pTVar18);
      TAttribute<EVisibility>::operator=(&this->LabelVisibility,pTVar36);
      TAttribute<EVisibility>::~TAttribute<EVisibility>(&local_3278);
      TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
      ~TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>(&local_3388);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_37b8.SharedReferenceCount.ReferenceController);
    }
  }
  else {
    pEVar17 = TOptional<EVisibility>::GetValue(&this->LabelVisibilityOverride);
    TAttribute<EVisibility>::TAttribute<EVisibility><EVisibility>(&local_33f8,pEVar17);
    TAttribute<EVisibility>::operator=(&this->LabelVisibility,&local_33f8);
    TAttribute<EVisibility>::~TAttribute<EVisibility>(&local_33f8);
  }
  pFVar19 = SImage::FArguments::FArguments(&local_1c40);
  (pFVar19->_ColorAndOpacity).bIsSet = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(pFVar19->_ColorAndOpacity).Getter,(FWriteAccessScope *)&local_3738);
  local_3720 = &(pFVar19->_ColorAndOpacity).Getter.field_0x8;
  puVar20 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_3720);
  pTVar61 = (TReferenceControllerBase<1> *)param_2;
  if (puVar20 != (undefined8 *)0x0) {
    uStack_3a2c = local_3978.SharedReferenceCount.ReferenceController._4_4_;
    local_3a38 = (FName)GetIconForegroundColor;
    uStack_3a30 = 0;
    pTVar21 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_34a8);
    pTVar61 = (pTVar21->SharedReferenceCount).ReferenceController;
    pSVar57 = (SMultiBoxWidget *)&pTVar21->Object[-1].StatID;
    if (pTVar21->Object == (SWidget *)0x0) {
      pSVar57 = pSVar59;
    }
    if (pTVar61 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar61->SharedReferenceCount = (atomic<int>)((int)pTVar61->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar61->SharedReferenceCount = (atomic<int>)((int)pTVar61->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar20 = &
               ___7__TCommonDelegateInstanceState___A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar22 = FDelegateHandle::GenerateNewID();
    puVar20[2] = uVar22;
    *puVar20 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSToolBarStackButtonBlock___00__A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar20[3] = pSVar57;
    puVar20[4] = pTVar61;
    if (pTVar61 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar61->WeakReferenceCount = (atomic<int>)((int)pTVar61->WeakReferenceCount + 1);
      UNLOCK();
    }
    pSVar59 = (SMultiBoxWidget *)&DAT_00000018;
    *(FName *)(puVar20 + 5) = local_3a38;
    puVar20[6] = CONCAT44(uStack_3a2c,uStack_3a30);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar61);
  }
  if (((ulonglong)pSVar59 & 0x10) != 0) {
    pSVar59 = (SMultiBoxWidget *)(ulonglong)((uint)pSVar59 & 0xffffffef);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar61);
  }
  if (((ulonglong)pSVar59 & 8) != 0) {
    pSVar59 = (SMultiBoxWidget *)(ulonglong)((uint)pSVar59 & 0xfffffff7);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_34a8.SharedReferenceCount.ReferenceController);
  }
  if (local_3738.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3738.Accessor,&local_3738);
  }
  local_38e0.Value = (EVisibility)EVisibility::HitTestInvisible.Value.Value;
  local_38e0.bIsSet = true;
  local_38e0.Getter._16_8_ = 0;
  local_38e0.Getter._0_8_ = 0;
  local_38e0.Getter._8_8_ = 0;
  pFVar19 = TSlateBaseNamedArgs<SImage>::Visibility
                      ((TSlateBaseNamedArgs<SImage> *)pFVar19,&local_38e0);
  (pFVar19->_Image).bIsSet = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(pFVar19->_Image).Getter,
             (FWriteAccessScope *)&local_3718);
  local_3700 = &(pFVar19->_Image).Getter.field_0x8;
  puVar20 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_3700);
  pTVar61 = (TReferenceControllerBase<1> *)param_2;
  if (puVar20 != (undefined8 *)0x0) {
    uStack_3a2c = local_3978.SharedReferenceCount.ReferenceController._4_4_;
    local_3a38 = (FName)GetIconBrush;
    uStack_3a30 = 0;
    pTVar21 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_3498);
    pTVar61 = (pTVar21->SharedReferenceCount).ReferenceController;
    pTVar60 = &pTVar21->Object[-1].StatID;
    if (pTVar21->Object == (SWidget *)0x0) {
      pTVar60 = (TStatId *)0x0;
    }
    if (pTVar61 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar61->SharedReferenceCount = (atomic<int>)((int)pTVar61->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar61->SharedReferenceCount = (atomic<int>)((int)pTVar61->SharedReferenceCount + 1);
      UNLOCK();
    }
    pSVar59 = (SMultiBoxWidget *)(ulonglong)((uint)pSVar59 | 0x1c0);
    *puVar20 = &
               ___7__TCommonDelegateInstanceState___A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar22 = FDelegateHandle::GenerateNewID();
    puVar20[2] = uVar22;
    *puVar20 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSToolBarStackButtonBlock___00__A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar20[3] = pTVar60;
    puVar20[4] = pTVar61;
    if (pTVar61 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar61->WeakReferenceCount = (atomic<int>)((int)pTVar61->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(FName *)(puVar20 + 5) = local_3a38;
    puVar20[6] = CONCAT44(uStack_3a2c,uStack_3a30);
  }
  if ((uint)pSVar59 >> 8 != 0) {
    pSVar59 = (SMultiBoxWidget *)(ulonglong)((uint)pSVar59 & 0xfffffeff);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar61);
  }
  if ((char)pSVar59 < '\0') {
    pSVar59 = (SMultiBoxWidget *)(ulonglong)((uint)pSVar59 & 0xffffff7f);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar61);
  }
  if (((ulonglong)pSVar59 & 0x40) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3498.SharedReferenceCount.ReferenceController);
  }
  bVar7 = false;
  bVar6 = false;
  bVar62 = false;
  if (local_3718.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3718.Accessor,&local_3718);
  }
  FLLMScope::FLLMScope(&local_3a28,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_3a38 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_3918,&local_3a38,true);
  TSlateDecl<SLayeredImage,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SLayeredImage,RequiredArgs::T0RequiredArgs>
            (&local_34e8,"SLayeredImage",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SToolBarStackButtonBlock.cpp"
             ,0xf3,&local_3a49);
  FMemScope::~FMemScope(&local_3918);
  FLLMScope::~FLLMScope(&local_3a28);
  TSlateDecl<SLayeredImage,RequiredArgs::T0RequiredArgs>::operator<<=
            (&local_34e8,&local_39c8,pFVar19);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_34e8._Widget.SharedReferenceCount.ReferenceController);
  SImage::FArguments::~FArguments(&local_1c40);
  local_38c0[8] = true;
  local_38c0._0_8_ = (FSlateBrush *)0x0;
  local_38b0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_38a8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  FStack_38a8.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_38b0,(FWriteAccessScope *)&local_36f8);
  local_36e0 = &FStack_38a8;
  puVar20 = UE::Core::Private::DelegateAllocate(0x38,&FStack_38a8);
  uVar67 = local_3978.SharedReferenceCount.ReferenceController._4_4_;
  pTVar61 = (TReferenceControllerBase<1> *)param_2;
  if (puVar20 != (undefined8 *)0x0) {
    uStack_3a5c = local_3978.SharedReferenceCount.ReferenceController._4_4_;
    pTVar21 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_3488);
    pTVar60 = &pTVar21->Object[-1].StatID;
    if (pTVar21->Object == (SWidget *)0x0) {
      pTVar60 = (TStatId *)0x0;
    }
    pTVar61 = (pTVar21->SharedReferenceCount).ReferenceController;
    if (pTVar61 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar61->SharedReferenceCount = (atomic<int>)((int)pTVar61->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar61->SharedReferenceCount = (atomic<int>)((int)pTVar61->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar7 = true;
    bVar6 = true;
    bVar62 = true;
    *puVar20 = &
               ___7__TCommonDelegateInstanceState___A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar22 = FDelegateHandle::GenerateNewID();
    puVar20[2] = uVar22;
    *puVar20 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSToolBarStackButtonBlock___00__A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar20[3] = pTVar60;
    puVar20[4] = pTVar61;
    if (pTVar61 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar61->WeakReferenceCount = (atomic<int>)((int)pTVar61->WeakReferenceCount + 1);
      UNLOCK();
    }
    puVar20[5] = GetNormalIconBrush;
    puVar20[6] = (ulonglong)uVar67 << 0x20;
  }
  pSVar57 = (SMultiBoxWidget *)0x0;
  if (bVar62) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar61);
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar61);
  }
  if (bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3488.SharedReferenceCount.ReferenceController);
  }
  bVar7 = false;
  bVar6 = false;
  bVar62 = false;
  if (local_36f8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_36f8.Accessor,&local_36f8);
  }
  SLayeredImage::AddLayer(local_39c8.Object,(TAttribute<FSlateBrush_const_*> *)local_38c0);
  pTVar61 = (TReferenceControllerBase<1> *)this->_padding_;
  if (pTVar61 == (TReferenceControllerBase<1> *)0x0) {
LAB_1427e40d6:
    bVar63 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar63) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    aVar5 = pTVar61->SharedReferenceCount;
    do {
      if (aVar5 == (atomic<int>)0x0) {
        pTVar61 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1427e40d6;
      }
      LOCK();
      aVar14 = pTVar61->SharedReferenceCount;
      bVar63 = aVar5 == aVar14;
      if (bVar63) {
        pTVar61->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
        aVar14 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar14;
    } while (!bVar63);
    pSVar57 = (SMultiBoxWidget *)this->_padding_;
    if (pSVar57 == (SMultiBoxWidget *)0x0) goto LAB_1427e40d6;
  }
  pFVar23 = TSharedPtr<FMultiBlock_const_,1>::operator->
                      ((TSharedPtr<FMultiBlock_const_,1> *)&this->_padding_);
  bVar63 = pFVar23->bSearchable;
  pFVar24 = TAttribute<FText>::Get((TAttribute<FText> *)local_39b8);
  pFVar24 = FText::FText(&local_3298,pFVar24);
  puVar20 = (undefined8 *)(**(code **)(this->_padding_ + 8))(this,local_3478);
  local_37a8.Object = (SWidget *)*puVar20;
  local_37a8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)puVar20[1];
  if (local_37a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_37a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_37a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SMultiBoxWidget::AddElement(pSVar57,&local_37a8,pFVar24,bVar63);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_3470);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar61);
  FVar58 = *(FName *)(local_3a08 + 0xac);
  if (*(FName *)(local_3a08 + 0xac) == (FName)0x0) {
    pFVar24 = TAttribute<FText>::Get((TAttribute<FText> *)local_39b8);
    pFVar25 = FText::ToString(pFVar24);
    if ((pFVar25->Data).ArrayNum == 0) {
      pwVar55 = L"";
    }
    else {
      pwVar55 = (wchar_t *)(pFVar25->Data).AllocatorInstance.Data;
    }
    pFVar25 = ::FString::Printf<wchar_t_const_*>
                        (&local_3468,
                         (TCheckedFormatStringPrivate<wchar_t,wchar_t_const_*>)0x150952750,pwVar55);
    if ((pFVar25->Data).ArrayNum == 0) {
      pwVar55 = L"";
    }
    else {
      pwVar55 = (wchar_t *)(pFVar25->Data).AllocatorInstance.Data;
    }
    ::FName::FName(&local_3910,pwVar55);
    ::FString::~FString(&local_3468);
    FVar58 = local_3910;
  }
  iVar15 = (**(code **)(this->_padding_ + 0x40))(this);
  FVar26 = ISlateStyle::Join((FName)local_34f8,(char *)*param_2);
  EMultiBlockLocation::ToName((FName)&local_39d0,(Type)*(undefined8 *)FVar26);
  this_01 = FAppStyle::Get();
  pFVar27 = ::FName::FName(&local_34f0,"SimpleComboButton");
  pFVar28 = ISlateStyle::GetWidgetStyle<FComboButtonStyle>
                      (this_01,*pFVar27,(char *)0x0,(FComboButtonStyle *)0x0);
  if (iVar15 == -1) {
    local_res10 = &pFVar16->ButtonStyle;
    local_3a68 = &pFVar16->ToggleButton;
  }
  else {
    local_res10 = ISlateStyle::GetWidgetStyle<FButtonStyle>
                            (param_1,local_39d0,(char *)0x0,(FButtonStyle *)0x0);
    local_3a68 = ISlateStyle::GetWidgetStyle<FCheckBoxStyle>
                           (param_1,local_39d0,(char *)0x0,(FCheckBoxStyle *)0x0);
  }
  if (*(char *)(local_3a08 + 0x1e2) != '\0') {
    pFVar28 = &pFVar16->SettingsComboButton;
    local_res10 = &(pFVar16->SettingsComboButton).ButtonStyle;
  }
  local_res18 = (TReferenceControllerBase<1> *)param_2;
  if ((*(float *)&pFVar28->ShadowOffset != 0.0) ||
     (local_res18 = (TReferenceControllerBase<1> *)((ulonglong)param_2 & 0xffffffffffffff00),
     *(float *)&(pFVar28->ShadowOffset).field_0x4 != 0.0)) {
    local_res18 = (TReferenceControllerBase<1> *)CONCAT71(local_res18._1_7_,1);
  }
  local_3988 = SNullWidget::NullWidget.Object;
  local_3a10 = (FName)SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  local_3448.Left = ___xmm_00000000408000000000000000000000;
  local_3448.Top = _UNK_150957974;
  local_3448.Right = _UNK_150957978;
  local_3448.Bottom = _UNK_15095797c;
  local_3828.Left = ___xmm_00000000000000000000000040800000;
  local_3828.Top = _UNK_150924fd4;
  local_3828.Right = _UNK_150924fd8;
  local_3828.Bottom = _UNK_150924fdc;
  if (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  if (((local_37c8.Object)->Type == SlimHorizontalToolBar) ||
     ((byte)((local_37c8.Object)->Type - SlimHorizontalUniformToolBar) < 2)) {
    local_3a18 = pFVar16->IconSize;
    local_3770._s_0.Y = (double)local_3a18._4_4_;
    local_3760 = 1;
    local_3758 = 1;
    local_3740 = 0;
    local_3770._s_0.X = (double)(float)local_3a18;
    local_3750 = 0;
    uStack_3748 = 0;
    SImage::SetDesiredSizeOverride
              ((SImage *)local_39c8.Object,
               (TAttribute<TOptional<UE::Math::TVector2<double>_>_> *)&local_3770._s_0);
    pFVar29 = SHorizontalBox::FArguments::FArguments(&local_1e48);
    local_3838._padding_ = (longlong)&___7FTagMetaData__6B_;
    local_3838.Tag = FVar58;
    pFVar29 = TSlateBaseNamedArgs<SHorizontalBox>::AddMetaData<FTagMetaData,FTagMetaData>
                        ((TSlateBaseNamedArgs<SHorizontalBox> *)pFVar29,&local_3838);
    pFVar30 = SHorizontalBox::Slot(&local_2750);
    pFVar30 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar30);
    pFVar30 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::VAlign
                        ((FSlotArgumentsMixin *)&pFVar30->field_0x48,VAlign_Center);
    pFVar30 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::HAlign
                        ((FSlotArgumentsMixin *)&pFVar30->field_0x48,HAlign_Center);
    pTVar32 = TAttribute<FMargin>::TAttribute<FMargin><FMargin>(&local_2f90,&local_3828);
    pFVar30 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                        ((FSlotArgumentsMixin *)&pFVar30->field_0x18,pTVar32);
    TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SLayeredImage>(&local_37d8,&local_39c8);
    pFVar30 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                        ((FSlotArguments *)pFVar30,&local_37d8);
    pFVar29 = SHorizontalBox::FArguments::operator+(pFVar29,pFVar30);
    pFVar30 = SHorizontalBox::Slot(&local_2838);
    pFVar30 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar30);
    FMargin::FMargin(&local_35f8,(double)((pFVar16->LabelPadding).Left + __real_40800000),
                     (double)(pFVar16->LabelPadding).Top,(double)(pFVar16->LabelPadding).Right,
                     (double)(pFVar16->LabelPadding).Bottom);
    pTVar32 = TAttribute<FMargin>::TAttribute<FMargin>(&local_2f60,&local_35f8);
    pFVar30 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                        ((FSlotArgumentsMixin *)&pFVar30->field_0x18,pTVar32);
    pFVar30 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::VAlign
                        ((FSlotArgumentsMixin *)&pFVar30->field_0x48,VAlign_Center);
    pFVar35 = STextBlock::FArguments::FArguments(&local_5c0);
    pTVar36 = TAttribute<EVisibility>::TAttribute<EVisibility>(&local_31b0,&this->LabelVisibility);
    pFVar35 = TSlateBaseNamedArgs<STextBlock>::Visibility
                        ((TSlateBaseNamedArgs<STextBlock> *)pFVar35,pTVar36);
    local_3958 = (FSlateBrush *)GetLabel;
    uStack_3950 = 0;
    lStack_35e0 = (ulonglong)uStack_394c << 0x20;
    local_35e8 = GetLabel;
    pFVar35 = STextBlock::FArguments::Text<SToolBarStackButtonBlock>
                        (pFVar35,this,(pmf_21d67bb5 *)&local_35e8);
    pFVar35->_TextStyle = &pFVar16->LabelStyle;
    pTVar37 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                        (&local_33a0,"STextBlock",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SToolBarStackButtonBlock.cpp"
                         ,0x135,&local_3a4a);
    pTVar38 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                        (pTVar37,&local_3598,pFVar35);
    TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_37e8,pTVar38);
    pFVar30 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                        ((FSlotArguments *)pFVar30,&local_37e8);
    pFVar29 = SHorizontalBox::FArguments::operator+(pFVar29,pFVar30);
    pFVar30 = SHorizontalBox::Slot(&local_2920);
    pFVar30 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar30);
    pFVar30 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::HAlign
                        ((FSlotArgumentsMixin *)&pFVar30->field_0x48,HAlign_Right);
    pFVar30 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::VAlign
                        ((FSlotArgumentsMixin *)&pFVar30->field_0x48,
                         (uint)(pFVar28->DownArrowAlign).Value);
    pTVar32 = TAttribute<FMargin>::TAttribute<FMargin><FMargin>
                        (&local_2f30,&pFVar28->DownArrowPadding);
    pFVar30 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                        ((FSlotArgumentsMixin *)&pFVar30->field_0x18,pTVar32);
    pFVar40 = SOverlay::FArguments::FArguments(&local_2050);
    pFVar41 = SOverlay::Slot(&local_2d20,0);
    pFVar41 = TAlignmentWidgetSlotMixin<SOverlay::FOverlaySlot>::FSlotArgumentsMixin::VAlign
                        ((FSlotArgumentsMixin *)&pFVar41->_padding_,VAlign_Top);
    pFVar42 = FMargin::FMargin(&local_3948,(double)*(float *)&pFVar28->ShadowOffset,
                               (double)*(float *)&(pFVar28->ShadowOffset).field_0x4,0.0,0.0);
    pTVar32 = TAttribute<FMargin>::TAttribute<FMargin>(&local_2f00,pFVar42);
    pFVar41 = TPaddingWidgetSlotMixin<SOverlay::FOverlaySlot>::FSlotArgumentsMixin::Padding
                        ((FSlotArgumentsMixin *)&pFVar41->_padding_,pTVar32);
    pFVar19 = SImage::FArguments::FArguments(&local_11a0);
    pEVar17 = &EVisibility::Collapsed;
    if (local_res18._0_1_ != (FStaticCastTag)0x0) {
      pEVar17 = &EVisibility::Visible;
    }
    pTVar36 = TAttribute<EVisibility>::TAttribute<EVisibility><EVisibility>(&local_3190,pEVar17);
    pFVar19 = TSlateBaseNamedArgs<SImage>::Visibility
                        ((TSlateBaseNamedArgs<SImage> *)pFVar19,pTVar36);
    local_3a18 = (FDeprecateSlateVector2D)&pFVar28->DownArrowImage;
    pTVar43 = TAttribute<FSlateBrush_const_*>::TAttribute<FSlateBrush_const_*>
                        (&local_3100,(FSlateBrush **)&local_3a18);
    pFVar19 = SImage::FArguments::Image(pFVar19,pTVar43);
    pTVar44 = TAttribute<FSlateColor>::TAttribute<FSlateColor><FLinearColor>
                        (&local_2ed0,&pFVar28->ShadowColorAndOpacity);
    pFVar19 = SImage::FArguments::ColorAndOpacity(pFVar19,pTVar44);
    pTVar45 = MakeTDecl<SImage,RequiredArgs::T0RequiredArgs>
                        (&local_33b8,"SImage",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SToolBarStackButtonBlock.cpp"
                         ,0x148,local_3a44);
    pTVar46 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                        (pTVar45,&local_35a8,pFVar19);
    TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SImage>(&local_37f8,pTVar46);
    pFVar41 = TSlotBase<SOverlay::FOverlaySlot>::FSlotArguments::operator[]
                        ((FSlotArguments *)pFVar41,&local_37f8);
    pFVar40 = SOverlay::FArguments::operator+(pFVar40,pFVar41);
    pFVar41 = SOverlay::Slot(&local_2d80,0);
    pFVar41 = TAlignmentWidgetSlotMixin<SOverlay::FOverlaySlot>::FSlotArgumentsMixin::VAlign
                        ((FSlotArgumentsMixin *)&pFVar41->_padding_,VAlign_Top);
    pFVar19 = SImage::FArguments::FArguments(&local_1448);
    pTVar36 = TAttribute<EVisibility>::TAttribute<EVisibility><EVisibility>
                        (&local_3170,&EVisibility::Visible);
    pFVar19 = TSlateBaseNamedArgs<SImage>::Visibility
                        ((TSlateBaseNamedArgs<SImage> *)pFVar19,pTVar36);
    local_3958 = &pFVar28->DownArrowImage;
    pTVar43 = TAttribute<FSlateBrush_const_*>::TAttribute<FSlateBrush_const_*>
                        (&local_30d8,&local_3958);
    pFVar19 = SImage::FArguments::Image(pFVar19,pTVar43);
    pFVar47 = FSlateColor::UseForeground(&local_3244);
    pTVar44 = TAttribute<FSlateColor>::TAttribute<FSlateColor>(&local_2ea0,pFVar47);
    pFVar19 = SImage::FArguments::ColorAndOpacity(pFVar19,pTVar44);
    pTVar45 = MakeTDecl<SImage,RequiredArgs::T0RequiredArgs>
                        (&local_32b0,"SImage",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SToolBarStackButtonBlock.cpp"
                         ,0x150,&local_3a48);
    pTVar46 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                        (pTVar45,&local_35b8,pFVar19);
    TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SImage>(&local_3808,pTVar46);
    pFVar41 = TSlotBase<SOverlay::FOverlaySlot>::FSlotArguments::operator[]
                        ((FSlotArguments *)pFVar41,&local_3808);
    pFVar40 = SOverlay::FArguments::operator+(pFVar40,pFVar41);
    pTVar48 = MakeTDecl<SOverlay,RequiredArgs::T0RequiredArgs>
                        (&local_32c8,"SOverlay",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SToolBarStackButtonBlock.cpp"
                         ,0x142,&local_3a47);
    pTVar49 = TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::operator<<=
                        (pTVar48,&local_35c8,pFVar40);
    TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SOverlay>(&local_3818,pTVar49);
    pFVar30 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                        ((FSlotArguments *)pFVar30,&local_3818);
    pFVar29 = SHorizontalBox::FArguments::operator+(pFVar29,pFVar30);
    pTVar50 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                        (&local_32e0,"SHorizontalBox",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SToolBarStackButtonBlock.cpp"
                         ,0x125,&local_3a46);
    pTVar51 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                        (pTVar50,&local_35d8,pFVar29);
    TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SHorizontalBox>
              ((TSharedRef<SWidget,1> *)local_39f8,pTVar51);
    uVar64 = local_39f8._0_4_;
    uVar65 = local_39f8._4_4_;
    FVar66.Value = FStack_39f0.ComparisonIndex.Value;
    uVar67 = FStack_39f0.Number;
    local_39f8 = (undefined1  [8])local_3988;
    FStack_39f0 = local_3a10;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_3a10);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_35d8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_32e0._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3818.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_35c8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_32c8._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3808.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_35b8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_32b0._Widget.SharedReferenceCount.ReferenceController);
    SImage::FArguments::~FArguments(&local_1448);
    SOverlay::FOverlaySlot::FSlotArguments::~FSlotArguments(&local_2d80);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_37f8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_35a8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_33b8._Widget.SharedReferenceCount.ReferenceController);
    SImage::FArguments::~FArguments(&local_11a0);
    SOverlay::FOverlaySlot::FSlotArguments::~FSlotArguments(&local_2d20);
    SOverlay::FArguments::~FArguments(&local_2050);
    SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_2920);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_37e8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3598.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_33a0._Widget.SharedReferenceCount.ReferenceController);
    STextBlock::FArguments::~FArguments(&local_5c0);
    SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_2838);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_37d8.SharedReferenceCount.ReferenceController);
    SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_2750);
    pFVar29 = &local_1e48;
  }
  else {
    pFVar29 = SHorizontalBox::FArguments::FArguments(&local_2258);
    local_3798._padding_ = (longlong)&___7FTagMetaData__6B_;
    local_3798.Tag = FVar58;
    pFVar29 = TSlateBaseNamedArgs<SHorizontalBox>::AddMetaData<FTagMetaData,FTagMetaData>
                        ((TSlateBaseNamedArgs<SHorizontalBox> *)pFVar29,&local_3798);
    pFVar30 = SHorizontalBox::Slot(&local_2a08);
    local_3a00[0] = 1;
    pTVar31 = TAttribute<float>::TAttribute<float><int>(&local_3230,local_3a00);
    pFVar30 = SHorizontalBox::FSlot::FSlotArguments::FillWidth(pFVar30,pTVar31);
    pFVar30 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::VAlign
                        ((FSlotArgumentsMixin *)&pFVar30->field_0x48,VAlign_Center);
    pTVar32 = TAttribute<FMargin>::TAttribute<FMargin><FMargin>(&local_2e70,&local_3828);
    pFVar30 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                        ((FSlotArgumentsMixin *)&pFVar30->field_0x18,pTVar32);
    pFVar33 = SVerticalBox::FArguments::FArguments(&local_2460);
    pFVar34 = SVerticalBox::Slot(&local_2af0);
    pFVar34 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar34);
    pFVar34 = TAlignmentWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::HAlign
                        ((FSlotArgumentsMixin *)&pFVar34->field_0x48,HAlign_Center);
    TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SLayeredImage>(&local_3848,&local_39c8);
    pFVar34 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                        ((FSlotArguments *)pFVar34,&local_3848);
    pFVar33 = SVerticalBox::FArguments::operator+(pFVar33,pFVar34);
    pFVar34 = SVerticalBox::Slot(&local_2bd8);
    pFVar34 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar34);
    pTVar32 = TAttribute<FMargin>::TAttribute<FMargin><FMargin>
                        (&local_30b0,&local_3a20->LabelPadding);
    pFVar34 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                        ((FSlotArgumentsMixin *)&pFVar34->field_0x18,pTVar32);
    pFVar34 = TAlignmentWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::HAlign
                        ((FSlotArgumentsMixin *)&pFVar34->field_0x48,HAlign_Center);
    pFVar35 = STextBlock::FArguments::FArguments(&local_b18);
    pTVar36 = TAttribute<EVisibility>::TAttribute<EVisibility>(&local_3210,&this->LabelVisibility);
    pFVar35 = TSlateBaseNamedArgs<STextBlock>::Visibility
                        ((TSlateBaseNamedArgs<STextBlock> *)pFVar35,pTVar36);
    local_3968 = (FSlateBrush *)GetLabel;
    uStack_3960 = 0;
    lStack_3450 = (ulonglong)uStack_395c << 0x20;
    local_3458 = GetLabel;
    pFVar35 = STextBlock::FArguments::Text<SToolBarStackButtonBlock>
                        (pFVar35,this,(pmf_21d67bb5 *)&local_3458);
    pFVar35->_TextStyle = &local_3a20->LabelStyle;
    pTVar37 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                        (&local_32f8,"STextBlock",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SToolBarStackButtonBlock.cpp"
                         ,0x16f,&local_3a50);
    pTVar38 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                        (pTVar37,&local_3608,pFVar35);
    TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_3858,pTVar38);
    pFVar34 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                        ((FSlotArguments *)pFVar34,&local_3858);
    pFVar33 = SVerticalBox::FArguments::operator+(pFVar33,pFVar34);
    this_02 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                        (&local_3310,"SVerticalBox",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SToolBarStackButtonBlock.cpp"
                         ,0x162,&local_3a4f);
    pTVar39 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                        (this_02,&local_3408,pFVar33);
    TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SVerticalBox>(&local_3868,pTVar39);
    pFVar30 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                        ((FSlotArguments *)pFVar30,&local_3868);
    pFVar29 = SHorizontalBox::FArguments::operator+(pFVar29,pFVar30);
    pFVar30 = SHorizontalBox::Slot(&local_2cc0);
    pFVar30 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar30);
    pFVar30 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::HAlign
                        ((FSlotArgumentsMixin *)&pFVar30->field_0x48,HAlign_Right);
    pFVar30 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::VAlign
                        ((FSlotArgumentsMixin *)&pFVar30->field_0x48,
                         (uint)(pFVar28->DownArrowAlign).Value);
    pTVar32 = TAttribute<FMargin>::TAttribute<FMargin><FMargin>
                        (&local_3080,&pFVar28->DownArrowPadding);
    pFVar30 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                        ((FSlotArgumentsMixin *)&pFVar30->field_0x18,pTVar32);
    pFVar40 = SOverlay::FArguments::FArguments(&local_2668);
    pFVar41 = SOverlay::Slot(&local_2de0,0);
    pFVar41 = TAlignmentWidgetSlotMixin<SOverlay::FOverlaySlot>::FSlotArgumentsMixin::VAlign
                        ((FSlotArgumentsMixin *)&pFVar41->_padding_,VAlign_Top);
    pFVar42 = FMargin::FMargin(&local_3288,(double)*(float *)&pFVar28->ShadowOffset,
                               (double)*(float *)&(pFVar28->ShadowOffset).field_0x4,0.0,0.0);
    pTVar32 = TAttribute<FMargin>::TAttribute<FMargin>(&local_3050,pFVar42);
    pFVar41 = TPaddingWidgetSlotMixin<SOverlay::FOverlaySlot>::FSlotArgumentsMixin::Padding
                        ((FSlotArgumentsMixin *)&pFVar41->_padding_,pTVar32);
    pFVar19 = SImage::FArguments::FArguments(&local_16f0);
    pEVar17 = &EVisibility::Collapsed;
    if (local_res18._0_1_ != (FStaticCastTag)0x0) {
      pEVar17 = &EVisibility::Visible;
    }
    pTVar36 = TAttribute<EVisibility>::TAttribute<EVisibility><EVisibility>(&local_31f0,pEVar17);
    pFVar19 = TSlateBaseNamedArgs<SImage>::Visibility
                        ((TSlateBaseNamedArgs<SImage> *)pFVar19,pTVar36);
    local_38e8 = &pFVar28->DownArrowImage;
    pTVar43 = TAttribute<FSlateBrush_const_*>::TAttribute<FSlateBrush_const_*>
                        (&local_3150,&local_38e8);
    pFVar19 = SImage::FArguments::Image(pFVar19,pTVar43);
    pTVar44 = TAttribute<FSlateColor>::TAttribute<FSlateColor><FLinearColor>
                        (&local_3020,&pFVar28->ShadowColorAndOpacity);
    pFVar19 = SImage::FArguments::ColorAndOpacity(pFVar19,pTVar44);
    pTVar45 = MakeTDecl<SImage,RequiredArgs::T0RequiredArgs>
                        (&local_3328,"SImage",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SToolBarStackButtonBlock.cpp"
                         ,0x183,&local_3a4e);
    pTVar46 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                        (pTVar45,&local_3418,pFVar19);
    TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SImage>(&local_3878,pTVar46);
    pFVar41 = TSlotBase<SOverlay::FOverlaySlot>::FSlotArguments::operator[]
                        ((FSlotArguments *)pFVar41,&local_3878);
    pFVar40 = SOverlay::FArguments::operator+(pFVar40,pFVar41);
    pFVar41 = SOverlay::Slot(&local_2e40,0);
    pFVar41 = TAlignmentWidgetSlotMixin<SOverlay::FOverlaySlot>::FSlotArgumentsMixin::VAlign
                        ((FSlotArgumentsMixin *)&pFVar41->_padding_,VAlign_Top);
    pTVar32 = TAttribute<FMargin>::TAttribute<FMargin><FMargin>(&local_2ff0,&local_3448);
    pFVar41 = TPaddingWidgetSlotMixin<SOverlay::FOverlaySlot>::FSlotArgumentsMixin::Padding
                        ((FSlotArgumentsMixin *)&pFVar41->_padding_,pTVar32);
    pFVar19 = SImage::FArguments::FArguments(&local_1998);
    pTVar36 = TAttribute<EVisibility>::TAttribute<EVisibility><EVisibility>
                        (&local_31d0,&EVisibility::Visible);
    pFVar19 = TSlateBaseNamedArgs<SImage>::Visibility
                        ((TSlateBaseNamedArgs<SImage> *)pFVar19,pTVar36);
    local_3968 = &pFVar28->DownArrowImage;
    pTVar43 = TAttribute<FSlateBrush_const_*>::TAttribute<FSlateBrush_const_*>
                        (&local_3128,&local_3968);
    pFVar19 = SImage::FArguments::Image(pFVar19,pTVar43);
    pFVar47 = FSlateColor::UseForeground(&local_3258);
    pTVar44 = TAttribute<FSlateColor>::TAttribute<FSlateColor>(&local_2fc0,pFVar47);
    pFVar19 = SImage::FArguments::ColorAndOpacity(pFVar19,pTVar44);
    pTVar45 = MakeTDecl<SImage,RequiredArgs::T0RequiredArgs>
                        (&local_3340,"SImage",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SToolBarStackButtonBlock.cpp"
                         ,0x18c,&local_3a4d);
    pTVar46 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                        (pTVar45,&local_3428,pFVar19);
    TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SImage>(&local_3888,pTVar46);
    pFVar41 = TSlotBase<SOverlay::FOverlaySlot>::FSlotArguments::operator[]
                        ((FSlotArguments *)pFVar41,&local_3888);
    pFVar40 = SOverlay::FArguments::operator+(pFVar40,pFVar41);
    pTVar48 = MakeTDecl<SOverlay,RequiredArgs::T0RequiredArgs>
                        (&local_3358,"SOverlay",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SToolBarStackButtonBlock.cpp"
                         ,0x17d,&local_3a4c);
    pTVar49 = TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::operator<<=
                        (pTVar48,&local_3518,pFVar40);
    TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SOverlay>(&local_3898,pTVar49);
    pFVar30 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                        ((FSlotArguments *)pFVar30,&local_3898);
    pFVar29 = SHorizontalBox::FArguments::operator+(pFVar29,pFVar30);
    pTVar50 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                        (&local_3370,"SHorizontalBox",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SToolBarStackButtonBlock.cpp"
                         ,0x15b,&local_3a4b);
    pTVar51 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                        (pTVar50,&local_3438,pFVar29);
    TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SHorizontalBox>
              ((TSharedRef<SWidget,1> *)local_3928,pTVar51);
    uVar64 = local_3928._0_4_;
    uVar65 = local_3928._4_4_;
    FVar66.Value = FStack_3920.ComparisonIndex.Value;
    uVar67 = FStack_3920.Number;
    local_3928 = (undefined1  [8])local_3988;
    FStack_3920 = local_3a10;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_3a10);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3438.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3370._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3898.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3518.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3358._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3888.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3428.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3340._Widget.SharedReferenceCount.ReferenceController);
    SImage::FArguments::~FArguments(&local_1998);
    SOverlay::FOverlaySlot::FSlotArguments::~FSlotArguments(&local_2e40);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3878.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3418.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3328._Widget.SharedReferenceCount.ReferenceController);
    SImage::FArguments::~FArguments(&local_16f0);
    SOverlay::FOverlaySlot::FSlotArguments::~FSlotArguments(&local_2de0);
    SOverlay::FArguments::~FArguments(&local_2668);
    SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_2cc0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3868.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3408.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3310._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3858.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3608.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_32f8._Widget.SharedReferenceCount.ReferenceController);
    STextBlock::FArguments::~FArguments(&local_b18);
    SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_2bd8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3848.SharedReferenceCount.ReferenceController);
    SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_2af0);
    SVerticalBox::FArguments::~FArguments(&local_2460);
    SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_2a08);
    pFVar29 = &local_2258;
  }
  SHorizontalBox::FArguments::~FArguments(pFVar29);
  uVar4 = *(undefined8 *)((longlong)&(local_res10->HoveredForeground).SpecifiedColor.field0_0x0 + 8)
  ;
  *(undefined8 *)&(this->OpenForegroundColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(local_res10->HoveredForeground).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->OpenForegroundColor).SpecifiedColor.field0_0x0 + 8) = uVar4;
  EVar8 = (local_res10->HoveredForeground).ColorTableId;
  uVar9 = *(undefined2 *)&(local_res10->HoveredForeground).field_0x12;
  (this->OpenForegroundColor).ColorUseRule = (local_res10->HoveredForeground).ColorUseRule;
  (this->OpenForegroundColor).ColorTableId = EVar8;
  *(undefined2 *)&(this->OpenForegroundColor).field_0x12 = uVar9;
  this_03 = SCheckBox::FArguments::FArguments(&local_ef8);
  this_03->_Style = local_3a68;
  lStack_3980 = (ulonglong)uStack_3a5c << 0x20;
  local_3988 = (SWidget *)GetDescription;
  this_03->_ClickMethod = MouseDown;
  TAttribute<FText>::Bind<SToolBarStackButtonBlock>
            ((TAttribute<FText> *)this_03,this,(pmf_21d67bb5 *)&local_3988);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this_03->_OnCheckStateChanged,(FWriteAccessScope *)&local_3658);
  local_3640 = &(this_03->_OnCheckStateChanged).field_0x8;
  puVar20 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_3640);
  fVar11 = local_3948.Bottom;
  pTVar61 = local_res18;
  if (puVar20 != (undefined8 *)0x0) {
    pTVar52 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_3588);
    pTVar61 = (pTVar52->SharedReferenceCount).ReferenceController;
    pTVar60 = &pTVar52->Object[-1].StatID;
    if (pTVar52->Object == (SWidget *)0x0) {
      pTVar60 = (TStatId *)0x0;
    }
    if (pTVar61 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar61->SharedReferenceCount = (atomic<int>)((int)pTVar61->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar61->SharedReferenceCount = (atomic<int>)((int)pTVar61->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar7 = true;
    bVar6 = true;
    bVar62 = true;
    *puVar20 = &
               ___7__TCommonDelegateInstanceState___A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar22 = FDelegateHandle::GenerateNewID();
    puVar20[2] = uVar22;
    *puVar20 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSToolBarStackButtonBlock___00__A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar20[3] = pTVar60;
    puVar20[4] = pTVar61;
    if (pTVar61 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar61->WeakReferenceCount = (atomic<int>)((int)pTVar61->WeakReferenceCount + 1);
      UNLOCK();
    }
    puVar20[5] = OnCheckStateChanged;
    puVar20[6] = (ulonglong)(uint)fVar11 << 0x20;
  }
  if (bVar62) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar61);
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar61);
  }
  if (bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3588.SharedReferenceCount.ReferenceController);
  }
  bVar7 = false;
  bVar6 = false;
  bVar62 = false;
  if (local_3658.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3658.Accessor,&local_3658);
  }
  (this_03->_IsChecked).bIsSet = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(this_03->_IsChecked).Getter
             ,(FWriteAccessScope *)&local_36d8);
  local_36c0 = &(this_03->_IsChecked).Getter.field_0x8;
  puVar20 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_36c0);
  fVar11 = local_3948.Bottom;
  pTVar61 = local_res18;
  if (puVar20 != (undefined8 *)0x0) {
    pTVar21 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_3578);
    pTVar61 = (pTVar21->SharedReferenceCount).ReferenceController;
    pTVar60 = &pTVar21->Object[-1].StatID;
    if (pTVar21->Object == (SWidget *)0x0) {
      pTVar60 = (TStatId *)0x0;
    }
    if (pTVar61 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar61->SharedReferenceCount = (atomic<int>)((int)pTVar61->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar61->SharedReferenceCount = (atomic<int>)((int)pTVar61->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar7 = true;
    bVar6 = true;
    bVar62 = true;
    *puVar20 = &
               ___7__TCommonDelegateInstanceState___A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar22 = FDelegateHandle::GenerateNewID();
    puVar20[2] = uVar22;
    *puVar20 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSToolBarStackButtonBlock___00__A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar20[3] = pTVar60;
    puVar20[4] = pTVar61;
    if (pTVar61 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar61->WeakReferenceCount = (atomic<int>)((int)pTVar61->WeakReferenceCount + 1);
      UNLOCK();
    }
    puVar20[5] = GetCheckState;
    puVar20[6] = (ulonglong)(uint)fVar11 << 0x20;
  }
  if (bVar62) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar61);
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar61);
  }
  if (bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3578.SharedReferenceCount.ReferenceController);
  }
  bVar7 = false;
  bVar6 = false;
  bVar62 = false;
  if (local_36d8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_36d8.Accessor,&local_36d8);
  }
  *(undefined1 *)((longlong)&this_03->_padding_ + 1) = 1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this_03->_padding_,
             (FWriteAccessScope *)&local_36b8);
  local_36a0 = &this_03->_padding_;
  puVar20 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_36a0);
  fVar11 = local_3948.Bottom;
  pTVar61 = local_res18;
  if (puVar20 != (undefined8 *)0x0) {
    pTVar21 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_3568);
    pTVar60 = &pTVar21->Object[-1].StatID;
    if (pTVar21->Object == (SWidget *)0x0) {
      pTVar60 = (TStatId *)0x0;
    }
    pTVar61 = (pTVar21->SharedReferenceCount).ReferenceController;
    if (pTVar61 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar61->SharedReferenceCount = (atomic<int>)((int)pTVar61->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar61->SharedReferenceCount = (atomic<int>)((int)pTVar61->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar7 = true;
    bVar6 = true;
    bVar62 = true;
    *puVar20 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar22 = FDelegateHandle::GenerateNewID();
    puVar20[2] = uVar22;
    *puVar20 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSToolBarStackButtonBlock___00__A6A_NXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar20[3] = pTVar60;
    puVar20[4] = pTVar61;
    if (pTVar61 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar61->WeakReferenceCount = (atomic<int>)((int)pTVar61->WeakReferenceCount + 1);
      UNLOCK();
    }
    puVar20[5] = IsEnabled;
    puVar20[6] = (ulonglong)(uint)fVar11 << 0x20;
  }
  if (bVar62) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar61);
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar61);
  }
  if (bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3568.SharedReferenceCount.ReferenceController);
  }
  bVar7 = false;
  bVar6 = false;
  bVar62 = false;
  if (local_36b8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_36b8.Accessor,&local_36b8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this_03->_OnGetMenuContent,
             (FWriteAccessScope *)&local_3698);
  local_3680 = &(this_03->_OnGetMenuContent).field_0x8;
  puVar20 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_3680);
  pTVar61 = local_res18;
  if (puVar20 != (undefined8 *)0x0) {
    pTVar52 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_3558);
    pTVar60 = &pTVar52->Object[-1].StatID;
    if (pTVar52->Object == (SWidget *)0x0) {
      pTVar60 = (TStatId *)0x0;
    }
    pTVar61 = (pTVar52->SharedReferenceCount).ReferenceController;
    if (pTVar61 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar61->SharedReferenceCount = (atomic<int>)((int)pTVar61->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar61->SharedReferenceCount = (atomic<int>)((int)pTVar61->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar7 = true;
    bVar6 = true;
    bVar62 = true;
    *puVar20 = &
               ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSWidget___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar22 = FDelegateHandle::GenerateNewID();
    puVar20[2] = uVar22;
    *puVar20 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSToolBarStackButtonBlock___00__A6A_AV__TSharedRef_VSWidget___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar20[3] = pTVar60;
    puVar20[4] = pTVar61;
    if (pTVar61 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar61->WeakReferenceCount = (atomic<int>)((int)pTVar61->WeakReferenceCount + 1);
      UNLOCK();
    }
    puVar20[5] = OnGetMenuContent;
    puVar20[6] = (ulonglong)(uint)local_3948.Bottom << 0x20;
  }
  if (bVar62) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar61);
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar61);
  }
  if (bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3558.SharedReferenceCount.ReferenceController);
  }
  bVar7 = false;
  bVar6 = false;
  bVar62 = false;
  if (local_3698.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3698.Accessor,&local_3698);
  }
  auVar3._4_4_ = uVar65;
  auVar3._0_4_ = uVar64;
  auVar3._8_4_ = FVar66.Value;
  auVar3._12_4_ = uVar67;
  pTVar61 = auVar3._8_8_;
  if (pTVar61 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar61->SharedReferenceCount = (atomic<int>)((int)pTVar61->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_3548 = (this_03->_Content).Widget.Object;
  pTStack_3540 = (this_03->_Content).Widget.SharedReferenceCount.ReferenceController;
  (this_03->_Content).Widget.Object = (SWidget *)CONCAT44(uVar65,uVar64);
  (this_03->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar61;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_3540);
  FLLMScope::FLLMScope(&local_3a24,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_3a10 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_3938,&local_3a10,true);
  TSlateDecl<SCheckBoxStack,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SCheckBoxStack,RequiredArgs::T0RequiredArgs>
            (&local_39e8,"SCheckBoxStack",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SToolBarStackButtonBlock.cpp"
             ,0x199,&local_3a45);
  FMemScope::~FMemScope(&local_3938);
  FLLMScope::~FLLMScope(&local_3a24);
  if (local_39e8._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_39e8._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_39e8._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_3538 = (this->StackButtonWidget).Object;
  pTStack_3530 = (this->StackButtonWidget).SharedReferenceCount.ReferenceController;
  (this->StackButtonWidget).Object = local_39e8._Widget.Object;
  (this->StackButtonWidget).SharedReferenceCount.ReferenceController =
       local_39e8._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_3530);
  pSVar53 = TSharedPtr<SCheckBoxStack,1>::operator->(&local_39e8._Widget);
  SWidget::SWidgetConstruct((SWidget *)pSVar53,(FSlateBaseNamedArgs *)this_03);
  pSVar53 = local_39e8._Widget.Object;
  SCheckBox::Construct((SCheckBox *)local_39e8._Widget.Object,this_03);
  pSVar54 = TSharedPtr<SCheckBoxStack,1>::operator->(&local_39e8._Widget);
  if ((pSVar54->_padding_ & 0x10) == 0) {
    cVar12 = (**(code **)(pSVar54->_padding_ + 0x228))(pSVar54);
    bVar13 = 0;
    if (cVar12 == '\0') goto LAB_1427e58d5;
  }
  bVar13 = 0x20;
LAB_1427e58d5:
  *(byte *)&pSVar54->_padding_ = (byte)pSVar54->_padding_ & 0xdf;
  *(byte *)&pSVar54->_padding_ = (byte)pSVar54->_padding_ | bVar13;
  pSVar54 = TSharedPtr<SCheckBoxStack,1>::operator->(&local_39e8._Widget);
  pbVar1 = (byte *)((longlong)&pSVar54->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((local_39e8._Widget.Object == (SCheckBoxStack *)0x0) &&
     (bVar63 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar63)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FVar10.ReferenceController = local_39e8._Widget.SharedReferenceCount.ReferenceController;
  local_39e8._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_39e8._Widget.Object = (SCheckBoxStack *)0x0;
  if ((pSVar53 == (SCheckBoxStack *)0x0) &&
     (bVar63 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar63)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this_00 = &this->_padding_;
  if (FVar10.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_00);
  }
  else {
    LOCK();
    (FVar10.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar10.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_00);
    LOCK();
    (FVar10.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar10.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_3528 = this->_padding_;
  pTStack_3520 = (TReferenceControllerBase<1> *)this->_padding_;
  this->_padding_ = (longlong)pSVar53;
  this->_padding_ = (longlong)FVar10.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_3520);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)this_00);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar10.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar10.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_39e8._Widget.SharedReferenceCount.ReferenceController);
  SCheckBox::FArguments::~FArguments(&local_ef8);
  local_3638.Value.Left = (local_3a20->ComboButtonPadding).Left;
  local_3638.Value.Top = (local_3a20->ComboButtonPadding).Top;
  local_3638.Value.Right = (local_3a20->ComboButtonPadding).Right;
  local_3638.Value.Bottom = (local_3a20->ComboButtonPadding).Bottom;
  if (*(char *)(local_3a08 + 0x1e2) != '\0') {
    pFVar42 = FMargin::FMargin(&local_3508,0.0);
    local_3638.Value.Left = pFVar42->Left;
    local_3638.Value.Top = pFVar42->Top;
    local_3638.Value.Right = pFVar42->Right;
    local_3638.Value.Bottom = pFVar42->Bottom;
  }
  local_3638.bIsSet = true;
  local_3638.Getter._16_8_ = 0;
  local_3638.Getter._0_8_ = 0;
  local_3638.Getter._8_8_ = 0;
  TPaddingSingleWidgetSlotMixin<TSingleWidgetChildrenWithBasicLayoutSlot<0>,0>::Padding
            ((TPaddingSingleWidgetSlotMixin<TSingleWidgetChildrenWithBasicLayoutSlot<0>,0> *)
             &this->_padding_,&local_3638);
  local_3908[0] = (TEnumAsByte<EVisibility::Private>)0x19;
  local_3908[1] = true;
  FStack_38f8.DelegateSize = 0;
  local_3900.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_38f8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_3900,(FWriteAccessScope *)&local_3678);
  local_3660 = &FStack_38f8;
  puVar20 = UE::Core::Private::DelegateAllocate(0x38,&FStack_38f8);
  if (puVar20 != (undefined8 *)0x0) {
    local_39f8 = (undefined1  [8])GetVisibility;
    FStack_39f0 = (FName)((ulonglong)(uint)local_3508.Bottom << 0x20);
    pTVar21 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_3978);
    pTVar60 = &pTVar21->Object[-1].StatID;
    if (pTVar21->Object == (SWidget *)0x0) {
      pTVar60 = (TStatId *)0x0;
    }
    local_res18 = (pTVar21->SharedReferenceCount).ReferenceController;
    if (local_res18 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_res18->SharedReferenceCount = (atomic<int>)((int)local_res18->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      local_res18->SharedReferenceCount = (atomic<int>)((int)local_res18->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar7 = true;
    bVar6 = true;
    bVar62 = true;
    *puVar20 = &
               ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar22 = FDelegateHandle::GenerateNewID();
    puVar20[2] = uVar22;
    *puVar20 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSToolBarStackButtonBlock___00__A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar20[3] = pTVar60;
    puVar20[4] = local_res18;
    if (local_res18 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_res18->WeakReferenceCount = (atomic<int>)((int)local_res18->WeakReferenceCount + 1);
      UNLOCK();
    }
    puVar20[5] = local_39f8;
    *(FName *)(puVar20 + 6) = FStack_39f0;
  }
  if (bVar62) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_res18)
    ;
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_res18)
    ;
  }
  if (bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)
               CONCAT44(local_3978.SharedReferenceCount.ReferenceController._4_4_,
                        local_3978.SharedReferenceCount.ReferenceController._0_4_));
  }
  if (local_3678.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3678.Accessor,&local_3678);
  }
  SCompoundWidget::SetVisibility
            ((SCompoundWidget *)&this->_padding_,(TAttribute<EVisibility> *)local_3908);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar61);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_39c8.SharedReferenceCount.ReferenceController);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_39a0,(FWriteAccessScope *)&local_3788);
  if (((int)local_3990 != 0) && (FStack_3998.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_3998.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_3998,0,0,0x10);
    local_3990 = local_3990 & 0xffffffff00000000;
  }
  if (local_3788.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3788.Accessor,&local_3788);
  }
  if (FStack_3998.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_3998.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_39a0.AccessDetector);
  if ((ITextData *)local_39b8._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_39b8._0_8_ + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_3930);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_37c8.SharedReferenceCount.ReferenceController);
  return;
}

// Construct @ 1427efc20

void __thiscall
SToolBarStackButtonBlock::Construct(SToolBarStackButtonBlock *this,FArguments *param_1)

{
  if (&param_1->_LabelVisibility != &this->LabelVisibilityOverride) {
    if ((param_1->_LabelVisibility).bIsSet != false) {
      (this->LabelVisibilityOverride).TypedValue.Value.Value =
           (param_1->_LabelVisibility).TypedValue.Value.Value;
      (this->LabelVisibilityOverride).bIsSet = true;
      this->bForceSmallIcons = param_1->_ForceSmallIcons;
      return;
    }
    if ((this->LabelVisibilityOverride).bIsSet != false) {
      (this->LabelVisibilityOverride).bIsSet = false;
    }
  }
  this->bForceSmallIcons = param_1->_ForceSmallIcons;
  return;
}

// GetCheckState @ 14280e6a0

ECheckBoxState __thiscall SToolBarStackButtonBlock::GetCheckState(SToolBarStackButtonBlock *this)

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

// GetDescription @ 14280f800

FText * __thiscall
SToolBarStackButtonBlock::GetDescription
          (SToolBarStackButtonBlock *this,FText *__return_storage_ptr__)

{
  FToolBarStackButtonBlock *this_00;
  TReferenceControllerBase<1> *pTVar1;
  FUIIdentifierContext *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  FText *pFVar9;
  TSharedPtr<FUIIdentifierContext,1> *pTVar10;
  longlong *plVar11;
  ITextData *pIVar12;
  TReferenceControllerBase<1> *pTVar13;
  uint *puVar14;
  undefined4 local_res8;
  undefined4 uStackX_c;
  undefined1 local_res10 [8];
  ITextData *local_88;
  uint local_80 [2];
  ITextData *local_78;
  uint local_70 [2];
  TSharedPtr<FUIIdentifierContext,1> local_68;
  TSharedPtr<FUIIdentifierContext,1> local_58;
  FReadAccessScope local_48;
  
  plVar11 = (longlong *)0x0;
  local_res8 = 0;
  if (this->_padding_ == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FText *)(*pcVar4)();
      return pFVar9;
    }
  }
  this_00 = (FToolBarStackButtonBlock *)this->_padding_;
  pTVar1 = (TReferenceControllerBase<1> *)this->_padding_;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this_00 == (FToolBarStackButtonBlock *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FText *)(*pcVar4)();
      return pFVar9;
    }
  }
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar10 = FToolBarStackButtonBlock::GetStackIdentifier(this_00,&local_58);
  if (pTVar10->Object == (FUIIdentifierContext *)0x0) {
    lVar3 = this_00->_padding_;
    pTVar13 = (TReferenceControllerBase<1> *)this_00->_padding_;
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (lVar3 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        pFVar9 = (FText *)(*pcVar4)();
        return pFVar9;
      }
    }
    local_88 = *(ITextData **)(lVar3 + 0x20);
    if (local_88 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_88 + 8))(local_88,&local_res8);
    }
    puVar14 = local_80;
    local_80[0] = *(uint *)(lVar3 + 0x28);
    bVar7 = false;
    bVar6 = false;
    bVar5 = true;
    bVar8 = true;
    pIVar12 = local_88;
  }
  else {
    pTVar10 = FToolBarStackButtonBlock::GetStackIdentifier(this_00,&local_68);
    if (pTVar10->Object == (FUIIdentifierContext *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        pFVar9 = (FText *)(*pcVar4)();
        return pFVar9;
      }
    }
    pFVar2 = pTVar10->Object;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &pFVar2->OnGetContextDescription,&local_48);
    if (*(int *)&(pFVar2->OnGetContextDescription).field_0x10 != 0) {
      plVar11 = *(longlong **)&(pFVar2->OnGetContextDescription).field_0x8;
    }
    (**(code **)(*plVar11 + 0x60))(plVar11,&local_78);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_48);
    puVar14 = local_70;
    bVar7 = true;
    bVar6 = true;
    bVar5 = false;
    bVar8 = false;
    pTVar13 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
    pIVar12 = local_78;
  }
  (__return_storage_ptr__->TextData).Reference = pIVar12;
  if (pIVar12 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar12 + 8))(pIVar12,local_res10);
  }
  __return_storage_ptr__->Flags = *puVar14;
  if ((bVar8) && (local_88 != (ITextData *)0x0)) {
    (**(code **)((longlong)*local_88 + 0x10))(local_88);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  }
  if (bVar6) {
    if (local_78 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_78 + 0x10))();
    }
  }
  if (bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// GetIconBrush @ 1428103b0

FSlateBrush * __thiscall SToolBarStackButtonBlock::GetIconBrush(SToolBarStackButtonBlock *this)

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

// GetIconForegroundColor @ 142810700

FSlateColor * __thiscall
SToolBarStackButtonBlock::GetIconForegroundColor
          (SToolBarStackButtonBlock *this,FSlateColor *__return_storage_ptr__)

{
  FLinearColor_u_0 FVar1;
  bool *pbVar2;
  FSlateBrush *pFVar3;
  
  if (this->bForceSmallIcons == false) {
    pbVar2 = TAttribute<bool>::Get(&FMultiBoxSettings::UseSmallToolBarIcons);
    if (*pbVar2 == false) {
      pFVar3 = GetNormalIconBrush(this);
      goto LAB_14281073c;
    }
  }
  pFVar3 = GetSmallIconBrush(this);
LAB_14281073c:
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

// GetIconVisibility @ 1428108e0

EVisibility __thiscall
SToolBarStackButtonBlock::GetIconVisibility(SToolBarStackButtonBlock *this,bool param_1)

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
      goto LAB_142810916;
    }
  }
  cVar3 = '\x01';
LAB_142810916:
  EVar1.Value.Value = EVisibility::Visible.Value.Value;
  if (in_R8B != cVar3) {
    EVar1.Value.Value = EVisibility::Collapsed.Value.Value;
  }
  *(TEnumAsByte<EVisibility::Private> *)CONCAT71(in_register_00000011,param_1) = EVar1.Value.Value;
  return (TEnumAsByte<EVisibility::Private>)(TEnumAsByte<EVisibility::Private>)param_1;
}

// GetLabel @ 142810d70

FText * __thiscall
SToolBarStackButtonBlock::GetLabel(SToolBarStackButtonBlock *this,FText *__return_storage_ptr__)

{
  FToolBarStackButtonBlock *this_00;
  TReferenceControllerBase<1> *pTVar1;
  FUIIdentifierContext *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  FText *pFVar9;
  TSharedPtr<FUIIdentifierContext,1> *pTVar10;
  longlong *plVar11;
  ITextData *pIVar12;
  TReferenceControllerBase<1> *pTVar13;
  uint *puVar14;
  undefined4 local_res8;
  undefined4 uStackX_c;
  undefined1 local_res10 [8];
  ITextData *local_88;
  uint local_80 [2];
  ITextData *local_78;
  uint local_70 [2];
  TSharedPtr<FUIIdentifierContext,1> local_68;
  TSharedPtr<FUIIdentifierContext,1> local_58;
  FReadAccessScope local_48;
  
  plVar11 = (longlong *)0x0;
  local_res8 = 0;
  if (this->_padding_ == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FText *)(*pcVar4)();
      return pFVar9;
    }
  }
  this_00 = (FToolBarStackButtonBlock *)this->_padding_;
  pTVar1 = (TReferenceControllerBase<1> *)this->_padding_;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this_00 == (FToolBarStackButtonBlock *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FText *)(*pcVar4)();
      return pFVar9;
    }
  }
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar10 = FToolBarStackButtonBlock::GetStackIdentifier(this_00,&local_58);
  if (pTVar10->Object == (FUIIdentifierContext *)0x0) {
    lVar3 = this_00->_padding_;
    pTVar13 = (TReferenceControllerBase<1> *)this_00->_padding_;
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (lVar3 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        pFVar9 = (FText *)(*pcVar4)();
        return pFVar9;
      }
    }
    local_88 = *(ITextData **)(lVar3 + 0x10);
    if (local_88 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_88 + 8))(local_88,&local_res8);
    }
    puVar14 = local_80;
    local_80[0] = *(uint *)(lVar3 + 0x18);
    bVar7 = false;
    bVar6 = false;
    bVar5 = true;
    bVar8 = true;
    pIVar12 = local_88;
  }
  else {
    pTVar10 = FToolBarStackButtonBlock::GetStackIdentifier(this_00,&local_68);
    if (pTVar10->Object == (FUIIdentifierContext *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        pFVar9 = (FText *)(*pcVar4)();
        return pFVar9;
      }
    }
    pFVar2 = pTVar10->Object;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar2->OnGetContextabel,
               &local_48);
    if (*(int *)&(pFVar2->OnGetContextabel).field_0x10 != 0) {
      plVar11 = *(longlong **)&(pFVar2->OnGetContextabel).field_0x8;
    }
    (**(code **)(*plVar11 + 0x60))(plVar11,&local_78);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_48);
    puVar14 = local_70;
    bVar7 = true;
    bVar6 = true;
    bVar5 = false;
    bVar8 = false;
    pTVar13 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
    pIVar12 = local_78;
  }
  (__return_storage_ptr__->TextData).Reference = pIVar12;
  if (pIVar12 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar12 + 8))(pIVar12,local_res10);
  }
  __return_storage_ptr__->Flags = *puVar14;
  if ((bVar8) && (local_88 != (ITextData *)0x0)) {
    (**(code **)((longlong)*local_88 + 0x10))(local_88);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  }
  if (bVar6) {
    if (local_78 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_78 + 0x10))();
    }
  }
  if (bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// GetNormalIconBrush @ 142811640

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FSlateBrush * __thiscall
SToolBarStackButtonBlock::GetNormalIconBrush(SToolBarStackButtonBlock *this)

{
  TReferenceControllerBase<1> *pTVar1;
  FToolBarStackButtonBlock *this_00;
  FUIIdentifierContext *pFVar2;
  code *pcVar3;
  atomic<int> aVar4;
  bool bVar5;
  atomic<int> aVar6;
  FSlateBrush *pFVar7;
  TSharedPtr<FUIIdentifierContext,1> *pTVar8;
  FSlateIcon *pFVar9;
  ISlateStyle *pIVar10;
  SMultiBoxWidget *pSVar11;
  SMultiBoxWidget *pSVar12;
  SMultiBoxWidget *this_01;
  FSlateIcon local_b8;
  TSharedPtr<FUIIdentifierContext,1> local_98;
  TSharedPtr<FUIIdentifierContext,1> local_88;
  FReadAccessScope local_78;
  FSlateIcon local_60;
  FSlateIcon local_40;
  
  this_01 = (SMultiBoxWidget *)0x0;
  if ((this->_padding_ == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FSlateBrush *)(*pcVar3)();
    return pFVar7;
  }
  pTVar1 = (TReferenceControllerBase<1> *)this->_padding_;
  this_00 = (FToolBarStackButtonBlock *)this->_padding_;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((this_00 == (FToolBarStackButtonBlock *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FSlateBrush *)(*pcVar3)();
    return pFVar7;
  }
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar8 = FToolBarStackButtonBlock::GetStackIdentifier(this_00,&local_88);
  if (pTVar8->Object == (FUIIdentifierContext *)0x0) {
    pFVar9 = FSlateIcon::FSlateIcon(&local_40);
    pSVar11 = this_01;
  }
  else {
    pTVar8 = FToolBarStackButtonBlock::GetStackIdentifier(this_00,&local_98);
    if ((pTVar8->Object == (FUIIdentifierContext *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FSlateBrush *)(*pcVar3)();
      return pFVar7;
    }
    pFVar2 = pTVar8->Object;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar2->OnGetContextIcon,
               &local_78);
    pSVar11 = this_01;
    if (*(int *)&(pFVar2->OnGetContextIcon).field_0x10 != 0) {
      pSVar11 = *(SMultiBoxWidget **)&(pFVar2->OnGetContextIcon).field_0x8;
    }
    (**(code **)(pSVar11->_padding_ + 0x60))(pSVar11,&local_60);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_78);
    pFVar9 = &local_60;
    pSVar11 = (SMultiBoxWidget *)&DAT_00000001;
  }
  local_b8.StyleSetName = pFVar9->StyleSetName;
  local_b8.StyleName = pFVar9->StyleName;
  local_b8.SmallStyleName = pFVar9->SmallStyleName;
  local_b8.StatusOverlayStyleName = pFVar9->StatusOverlayStyleName;
  if (pSVar11 != (SMultiBoxWidget *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_98.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.SharedReferenceCount.ReferenceController);
  if ((local_b8.StyleSetName != (FName)0x0) && (local_b8.StyleName != (FName)0x0)) {
    pFVar7 = FSlateIcon::GetSmallIcon(&local_b8);
    goto LAB_1428118aa;
  }
  if (((this->_padding_ == 0) || ((this->_padding_ == 0 || (*(int *)(this->_padding_ + 8) < 1)))) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("OwnerMultiBoxWidget.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SToolBarStackButtonBlock.cpp"
                         ,0x228,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FSlateBrush *)(*pcVar3)();
    return pFVar7;
  }
  pSVar11 = (SMultiBoxWidget *)this->_padding_;
  pSVar12 = pSVar11;
  if (pSVar11 == (SMultiBoxWidget *)0x0) {
LAB_142811835:
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    pSVar11 = pSVar12;
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FSlateBrush *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    aVar4 = *(atomic<int> *)&pSVar11->_padding_;
    do {
      pSVar12 = this_01;
      if (aVar4 == (atomic<int>)0x0) goto LAB_142811835;
      LOCK();
      aVar6 = *(atomic<int> *)&pSVar11->_padding_;
      bVar5 = aVar4 == aVar6;
      if (bVar5) {
        *(atomic<int> *)&pSVar11->_padding_ = (atomic<int>)((int)aVar4 + 1);
        aVar6 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar6;
    } while (!bVar5);
    this_01 = (SMultiBoxWidget *)this->_padding_;
    pSVar12 = pSVar11;
    if (this_01 == (SMultiBoxWidget *)0x0) goto LAB_142811835;
  }
  pIVar10 = SMultiBoxWidget::GetStyleSet(this_01);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&IconName,"MultiBox.GenericToolBarIcon.Small");
    _Init_thread_footer(&::_TSS0);
  }
  pFVar7 = (FSlateBrush *)(**(code **)((longlong)*pIVar10 + 0x50))(pIVar10,IconName,0,0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar11);
LAB_1428118aa:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return pFVar7;
}

// GetOverlayIconBrush @ 142813a60

FSlateBrush * __thiscall
SToolBarStackButtonBlock::GetOverlayIconBrush(SToolBarStackButtonBlock *this)

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

// GetSmallIconBrush @ 1428155d0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FSlateBrush * __thiscall SToolBarStackButtonBlock::GetSmallIconBrush(SToolBarStackButtonBlock *this)

{
  TReferenceControllerBase<1> *pTVar1;
  FToolBarStackButtonBlock *this_00;
  FUIIdentifierContext *pFVar2;
  code *pcVar3;
  atomic<int> aVar4;
  bool bVar5;
  atomic<int> aVar6;
  FSlateBrush *pFVar7;
  TSharedPtr<FUIIdentifierContext,1> *pTVar8;
  FSlateIcon *pFVar9;
  ISlateStyle *pIVar10;
  SMultiBoxWidget *pSVar11;
  SMultiBoxWidget *pSVar12;
  SMultiBoxWidget *this_01;
  FSlateIcon local_b8;
  TSharedPtr<FUIIdentifierContext,1> local_98;
  TSharedPtr<FUIIdentifierContext,1> local_88;
  FReadAccessScope local_78;
  FSlateIcon local_60;
  FSlateIcon local_40;
  
  this_01 = (SMultiBoxWidget *)0x0;
  if ((this->_padding_ == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FSlateBrush *)(*pcVar3)();
    return pFVar7;
  }
  pTVar1 = (TReferenceControllerBase<1> *)this->_padding_;
  this_00 = (FToolBarStackButtonBlock *)this->_padding_;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((this_00 == (FToolBarStackButtonBlock *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FSlateBrush *)(*pcVar3)();
    return pFVar7;
  }
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar8 = FToolBarStackButtonBlock::GetStackIdentifier(this_00,&local_88);
  if (pTVar8->Object == (FUIIdentifierContext *)0x0) {
    pFVar9 = FSlateIcon::FSlateIcon(&local_40);
    pSVar11 = this_01;
  }
  else {
    pTVar8 = FToolBarStackButtonBlock::GetStackIdentifier(this_00,&local_98);
    if ((pTVar8->Object == (FUIIdentifierContext *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FSlateBrush *)(*pcVar3)();
      return pFVar7;
    }
    pFVar2 = pTVar8->Object;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar2->OnGetContextIcon,
               &local_78);
    pSVar11 = this_01;
    if (*(int *)&(pFVar2->OnGetContextIcon).field_0x10 != 0) {
      pSVar11 = *(SMultiBoxWidget **)&(pFVar2->OnGetContextIcon).field_0x8;
    }
    (**(code **)(pSVar11->_padding_ + 0x60))(pSVar11,&local_60);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_78);
    pFVar9 = &local_60;
    pSVar11 = (SMultiBoxWidget *)&DAT_00000001;
  }
  local_b8.StyleSetName = pFVar9->StyleSetName;
  local_b8.StyleName = pFVar9->StyleName;
  local_b8.SmallStyleName = pFVar9->SmallStyleName;
  local_b8.StatusOverlayStyleName = pFVar9->StatusOverlayStyleName;
  if (pSVar11 != (SMultiBoxWidget *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_98.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.SharedReferenceCount.ReferenceController);
  if ((local_b8.StyleSetName != (FName)0x0) && (local_b8.StyleName != (FName)0x0)) {
    pFVar7 = FSlateIcon::GetSmallIcon(&local_b8);
    goto LAB_14281583a;
  }
  if (((this->_padding_ == 0) || ((this->_padding_ == 0 || (*(int *)(this->_padding_ + 8) < 1)))) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("OwnerMultiBoxWidget.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SToolBarStackButtonBlock.cpp"
                         ,0x23e,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FSlateBrush *)(*pcVar3)();
    return pFVar7;
  }
  pSVar11 = (SMultiBoxWidget *)this->_padding_;
  pSVar12 = pSVar11;
  if (pSVar11 == (SMultiBoxWidget *)0x0) {
LAB_1428157c5:
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    pSVar11 = pSVar12;
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FSlateBrush *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    aVar4 = *(atomic<int> *)&pSVar11->_padding_;
    do {
      pSVar12 = this_01;
      if (aVar4 == (atomic<int>)0x0) goto LAB_1428157c5;
      LOCK();
      aVar6 = *(atomic<int> *)&pSVar11->_padding_;
      bVar5 = aVar4 == aVar6;
      if (bVar5) {
        *(atomic<int> *)&pSVar11->_padding_ = (atomic<int>)((int)aVar4 + 1);
        aVar6 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar6;
    } while (!bVar5);
    this_01 = (SMultiBoxWidget *)this->_padding_;
    pSVar12 = pSVar11;
    if (this_01 == (SMultiBoxWidget *)0x0) goto LAB_1428157c5;
  }
  pIVar10 = SMultiBoxWidget::GetStyleSet(this_01);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&IconName,"MultiBox.GenericToolBarIcon.Small");
    _Init_thread_footer(&::_TSS0);
  }
  pFVar7 = (FSlateBrush *)(**(code **)((longlong)*pIVar10 + 0x50))(pIVar10,IconName,0,0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar11);
LAB_14281583a:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return pFVar7;
}

// GetVisibility @ 142816db0

/* WARNING: Type propagation algorithm not settling */

EVisibility __thiscall SToolBarStackButtonBlock::GetVisibility(SToolBarStackButtonBlock *this)

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
      goto LAB_14281705a;
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
      goto LAB_14281705a;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_38);
  in_RDX->Value = (uchar)EVisibility::Visible.Value.Value;
LAB_14281705a:
  return (EVisibility)SUB81(in_RDX,0);
}

// IsEnabled @ 14281d8a0

bool __thiscall SToolBarStackButtonBlock::IsEnabled(SToolBarStackButtonBlock *this)

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

// OnCheckStateChanged @ 142824300

void __thiscall
SToolBarStackButtonBlock::OnCheckStateChanged(SToolBarStackButtonBlock *this,ECheckBoxState param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong *plVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  longlong local_18;
  TReferenceControllerBase<1> *local_10;
  
  if (this->_padding_ == 0) {
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
  pTVar1 = *(TReferenceControllerBase<1> **)(this->_padding_ + 0x98);
  plVar2 = *(longlong **)(this->_padding_ + 0x90);
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this->_padding_ == 0) {
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
  pTVar3 = *(TReferenceControllerBase<1> **)(this->_padding_ + 0x88);
  lVar4 = *(longlong *)(this->_padding_ + 0x80);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this->_padding_ == 0) {
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
  if ((plVar2 == (longlong *)0x0) || (lVar4 == 0)) {
    if (this->_padding_ == 0) {
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
    FUIAction::Execute((FUIAction *)(this->_padding_ + 0x18));
  }
  else {
    pcVar5 = *(code **)(*plVar2 + 0x18);
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_18 = lVar4;
    local_10 = pTVar3;
    if (lVar4 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    (*pcVar5)(plVar2,&local_18);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return;
}

// OnGetMenuContent @ 142827540

TSharedRef<SWidget,1> * __thiscall
SToolBarStackButtonBlock::OnGetMenuContent
          (SToolBarStackButtonBlock *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  atomic<int> *paVar1;
  FToolBarStackButtonBlock *this_00;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  FSharedReferencer<1> FVar4;
  bool bVar5;
  TSharedRef<SWidget,1> *pTVar6;
  longlong *plVar7;
  TSharedPtr<FUIContentContext,1> local_38;
  FReadAccessScope local_28;
  
  if (this->_padding_ == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedRef<SWidget,1> *)(*pcVar3)();
      return pTVar6;
    }
  }
  this_00 = (FToolBarStackButtonBlock *)this->_padding_;
  pTVar2 = (TReferenceControllerBase<1> *)this->_padding_;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this_00 == (FToolBarStackButtonBlock *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedRef<SWidget,1> *)(*pcVar3)();
      return pTVar6;
    }
  }
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  FToolBarStackButtonBlock::GetStackContent(this_00,&local_38);
  if (local_38.Object == (FUIContentContext *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
    __return_storage_ptr__->Object = SNullWidget::NullWidget.Object;
    FVar4 = SNullWidget::NullWidget.SharedReferenceCount;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
    if (FVar4.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(FVar4.ReferenceController)->SharedReferenceCount;
      *paVar1 = (atomic<int>)((int)*paVar1 + 1);
      UNLOCK();
    }
  }
  else {
    if (local_38.Object == (FUIContentContext *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TSharedRef<SWidget,1> *)(*pcVar3)();
        return pTVar6;
      }
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(local_38.Object)->OnGetContent,&local_28);
    if (*(int *)&((local_38.Object)->OnGetContent).field_0x10 == 0) {
      plVar7 = (longlong *)0x0;
    }
    else {
      plVar7 = *(longlong **)&((local_38.Object)->OnGetContent).field_0x8;
    }
    (**(code **)(*plVar7 + 0x60))(plVar7,__return_storage_ptr__);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return __return_storage_ptr__;
}

