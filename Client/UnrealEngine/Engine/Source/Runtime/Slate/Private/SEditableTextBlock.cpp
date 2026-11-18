// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 2

// BuildMultiBlockWidget @ 1427d9710

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SEditableTextBlock::BuildMultiBlockWidget
          (SEditableTextBlock *this,ISlateStyle *param_1,FName *param_2)

{
  byte *pbVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong *plVar3;
  UObject *pUVar4;
  SBox *pSVar5;
  STextBlock *pSVar6;
  code *pcVar7;
  bool bVar8;
  atomic<int> aVar9;
  FSharedReferencer<1> FVar10;
  SImage *pSVar11;
  FSharedReferencer<1> FVar12;
  char cVar13;
  bool bVar14;
  bool bVar15;
  byte bVar16;
  atomic<int> aVar17;
  TSharedRef<FMultiBox_const_,1> *pTVar18;
  TAttribute<FText> *pTVar19;
  FText *pFVar20;
  undefined8 *puVar21;
  FUICommandInfo *pFVar22;
  FEditableTextBlock *pFVar23;
  FSlateIcon *pFVar24;
  FEditableTextBlock *pFVar25;
  FSlateBrush *pFVar26;
  FArguments *pFVar27;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> *this_00;
  TSharedRef<SImage,1> *pTVar28;
  FSlot *pFVar29;
  FSlotArguments *pFVar30;
  FArguments *pFVar31;
  SSpacer *pSVar32;
  SSpacer *pSVar33;
  FSlot *pFVar34;
  FArguments *pFVar35;
  FArguments *pFVar36;
  TSharedRef<SBox,1> *pTVar37;
  FArguments *pFVar38;
  FName FVar39;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *this_01;
  TSharedRef<STextBlock,1> *pTVar40;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> *this_02;
  undefined1 *puVar41;
  FArguments *this_03;
  FEditableTextBoxStyle *pFVar42;
  SEditableTextBox *pSVar43;
  SEditableTextBox *pSVar44;
  FArguments *pFVar45;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> *this_04;
  TSharedRef<SHorizontalBox,1> *pTVar46;
  TSharedRef<SWidget_const_,1> *pTVar47;
  ulong64 uVar48;
  longlong lVar49;
  SMultiBoxWidget *pSVar50;
  SMultiBoxWidget *pSVar51;
  SMultiBoxWidget *pSVar52;
  SMultiBoxWidget *this_05;
  FSharedReferencer<1> FVar53;
  TStatId *pTVar54;
  bool bVar55;
  bool bVar56;
  float fVar57;
  T0RequiredArgs local_res20 [8];
  TSharedPtr<FEditableTextBlock_const_,1> local_2888;
  T0RequiredArgs local_2878;
  T0RequiredArgs local_2877;
  T0RequiredArgs local_2876;
  T0RequiredArgs local_2875;
  T0RequiredArgs local_2874;
  T0RequiredArgs local_2873;
  T0RequiredArgs local_2872 [2];
  FArguments *local_2870;
  FArguments *local_2868;
  FLLMScope local_2860;
  FLLMScope local_285c;
  FLLMScope local_2858;
  FLLMScope local_2854;
  SImage *local_2850;
  TSharedPtr<FUICommandInfo_const_,1> local_2848;
  undefined1 local_2838 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_2830;
  FDelegateAllocation FStack_2828;
  SSpacer *local_2818;
  FSharedReferencer<1> local_2810;
  TSharedRef<SWidget,1> local_2808;
  TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs> local_27f8;
  TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs> local_27e0;
  undefined1 local_27c8 [24];
  undefined1 local_27b0 [8];
  ForAnyElementType FStack_27a8;
  int local_27a0;
  SWidget *local_2798;
  TReferenceControllerBase<1> *pTStack_2790;
  SWidget *local_2788;
  TReferenceControllerBase<1> *pTStack_2780;
  undefined1 local_2778 [24];
  undefined1 local_2760 [8];
  ForAnyElementType FStack_2758;
  int local_2750;
  undefined2 local_2748;
  undefined1 local_2740 [8];
  void *pvStack_2738;
  undefined8 local_2730;
  undefined2 local_2728;
  undefined1 local_2720 [8];
  void *pvStack_2718;
  undefined8 local_2710;
  undefined1 local_2708;
  undefined1 local_2707;
  undefined1 local_2700 [8];
  void *pvStack_26f8;
  undefined8 local_26f0;
  float local_26e8;
  undefined1 local_26e4;
  undefined1 local_26e0 [8];
  void *pvStack_26d8;
  undefined8 local_26d0;
  undefined1 local_26c8 [4];
  undefined1 local_26c4 [4];
  undefined4 local_26c0 [2];
  FSlot *local_26b8;
  FName local_26b0;
  FMemScope local_26a8;
  FSlot *local_26a0;
  FName local_2698;
  FMemScope local_2690;
  FName local_2688;
  FMemScope local_2680;
  FName local_2678;
  FMemScope local_2670;
  TReferenceControllerBase<1> *local_2668;
  TReferenceControllerBase<1> *local_2660;
  TSharedRef<SWidget,1> local_2658;
  undefined1 local_2648 [8];
  double local_2640;
  double dStack_2638;
  undefined1 local_2630;
  undefined1 local_2628 [8];
  void *pvStack_2620;
  undefined8 local_2618;
  TAttribute<FOptionalSize> local_2610;
  TAttribute<EVisibility> local_25f0;
  TAttribute<float> local_25d0;
  TAttribute<EVisibility> local_25b0;
  TAttribute<FOptionalSize> local_2590;
  TAttribute<FOptionalSize> local_2570;
  TAttribute<FOptionalSize> local_2550;
  TSharedRef<SWidget_const_,1> local_2530;
  FText local_2520;
  TSharedPtr<SWidget,1> local_2510;
  TSharedRef<SWidget,1> local_2500;
  TSharedRef<SWidget,1> local_24f0;
  TAttribute<FSlateBrush_const_*> local_24e0;
  FDestructionSentinel local_24b8;
  FDestructionSentinel local_24a0;
  FDestructionSentinel local_2488;
  FDestructionSentinel local_2470;
  FDelegateAllocation *local_2458;
  TAttribute<FMargin> local_2450;
  TAttribute<FMargin> local_2420;
  undefined1 local_23f0 [8];
  TSharedRef<FMultiBox_const_,1> local_23e8;
  undefined1 local_23d8 [8];
  TReferenceControllerBase<1> *local_23d0;
  TSharedRef<SImage,1> local_23c8;
  SWidget *local_23b8;
  TReferenceControllerBase<1> *pTStack_23b0;
  FReadAccessScope local_23a8;
  FReadAccessScope local_2390;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_2378;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_2360;
  TSharedRef<SBox,1> local_2348;
  TSharedRef<SBox,1> local_2338;
  TSharedRef<STextBlock,1> local_2328;
  TSharedRef<SBox,1> local_2318;
  TSharedRef<SHorizontalBox,1> local_2308;
  undefined1 local_22f8 [8];
  undefined1 local_22f0 [24];
  undefined1 local_22d8 [24];
  undefined1 local_22c0 [24];
  undefined1 local_22a8 [24];
  undefined1 local_2290 [24];
  undefined1 local_2278 [24];
  undefined1 local_2260 [24];
  undefined1 local_2248 [24];
  FSlateIcon local_2230;
  FSlateIcon local_2210;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_21f0;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_21d8;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_21c0;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_21a8;
  undefined8 *local_2190 [2];
  TReferenceControllerBase<1> *local_2180;
  undefined1 local_2160 [40];
  FSlotArgumentsMixin local_2138;
  undefined8 *local_20a8 [2];
  TReferenceControllerBase<1> *local_2098;
  undefined1 local_2078 [40];
  FSlotArgumentsMixin local_2050;
  FSlateIcon local_1fc0;
  undefined8 *local_1fa0 [2];
  TReferenceControllerBase<1> *local_1f90;
  undefined1 local_1f70 [40];
  FSlotArgumentsMixin local_1f48;
  undefined8 *local_1eb8 [2];
  TReferenceControllerBase<1> *local_1ea8;
  undefined1 local_1e88 [40];
  FSlotArgumentsMixin local_1e60;
  TAttribute<FText> local_1dd0;
  TAttribute<FText> local_1da0;
  TAttribute<FText> local_1d70;
  TAttribute<FText> local_1d40;
  FArguments local_1d10;
  undefined1 local_1b08 [528];
  undefined1 local_18f8 [24];
  FArguments local_18e0;
  FArguments local_1638;
  FArguments local_12f8;
  FArguments local_fb8;
  FArguments local_c78;
  FArguments local_720;
  undefined8 uStack_48;
  
  uStack_48 = 0x1427d9738;
  pSVar51 = *(SMultiBoxWidget **)&this->field_0x2b8;
  this_05 = (SMultiBoxWidget *)0x0;
  pSVar50 = pSVar51;
  pSVar52 = this_05;
  if (pSVar51 == (SMultiBoxWidget *)0x0) {
LAB_1427d9785:
    bVar55 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    pSVar51 = pSVar50;
    if (bVar55) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  else {
    aVar9 = *(atomic<int> *)&pSVar51->_padding_;
    do {
      pSVar50 = this_05;
      pSVar52 = (SMultiBoxWidget *)0x0;
      if (aVar9 == (atomic<int>)0x0) goto LAB_1427d9785;
      LOCK();
      aVar17 = *(atomic<int> *)&pSVar51->_padding_;
      bVar55 = aVar9 == aVar17;
      if (bVar55) {
        *(atomic<int> *)&pSVar51->_padding_ = (atomic<int>)((int)aVar9 + 1);
        aVar17 = aVar9;
      }
      UNLOCK();
      aVar9 = aVar17;
    } while (!bVar55);
    pSVar52 = *(SMultiBoxWidget **)&this->field_0x2b0;
    pSVar50 = pSVar51;
    if (pSVar52 == (SMultiBoxWidget *)0x0) goto LAB_1427d9785;
  }
  pTVar18 = SMultiBoxWidget::GetMultiBox(pSVar52,&local_23e8);
  local_2660 = (pTVar18->SharedReferenceCount).ReferenceController;
  if (local_2660 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_2660->SharedReferenceCount = (atomic<int>)((int)local_2660->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_23e8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar51);
  if ((*(longlong *)&this->field_0x2c0 == 0) &&
     (bVar55 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L""), bVar55)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x2c8;
  pFVar25 = *(FEditableTextBlock **)&this->field_0x2c0;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pFVar25 == (FEditableTextBlock *)0x0) &&
     (bVar55 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L""), bVar55)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2888.Object = pFVar25;
  local_2888.SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if ((pFVar25 == (FEditableTextBlock *)0x0) &&
     (bVar55 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar55)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_2848.Object = (FUICommandInfo *)pFVar25->_padding_;
  local_2848.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)pFVar25->_padding_;
  if (local_2848.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_2848.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_2848.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pFVar25 == (FEditableTextBlock *)0x0) &&
     (bVar55 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar55)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(pFVar25->LabelOverride).Getter,&local_23a8);
  if (((*(int *)&(pFVar25->LabelOverride).Getter.field_0x10 == 0) ||
      (plVar3 = *(longlong **)&(pFVar25->LabelOverride).Getter.field_0x8, plVar3 == (longlong *)0x0)
      ) || (cVar13 = (**(code **)(*plVar3 + 0x38))(), cVar13 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_23a8);
    if ((pFVar25 == (FEditableTextBlock *)0x0) &&
       (bVar55 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar55)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar20 = TAttribute<FText>::Get(&pFVar25->LabelOverride);
    bVar55 = FText::IsEmpty(pFVar20);
    if ((!bVar55) || (local_2848.Object == (FUICommandInfo *)0x0)) goto LAB_1427d9948;
    pFVar22 = TSharedPtr<FUICommandInfo_const_,1>::operator->(&local_2848);
    pTVar19 = TAttribute<FText>::TAttribute<FText><FText>
                        ((TAttribute<FText> *)local_22c0,&pFVar22->Label);
    bVar8 = true;
    bVar55 = false;
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_23a8);
LAB_1427d9948:
    if ((pFVar25 == (FEditableTextBlock *)0x0) &&
       (bVar55 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar55)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pTVar19 = TAttribute<FText>::TAttribute<FText>
                        ((TAttribute<FText> *)local_22f0,&pFVar25->LabelOverride);
    bVar8 = false;
    bVar55 = true;
  }
  local_27c8._0_8_ = (pTVar19->Value).TextData.Reference;
  if ((ITextData *)local_27c8._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_27c8._0_8_ + 8))(local_27c8._0_8_,local_26c8);
  }
  local_27c8._8_4_ = (pTVar19->Value).Flags;
  local_27c8[0x10] = pTVar19->bIsSet;
  local_27b0 = (undefined1  [8])0x0;
  FStack_27a8.Data = (FScriptContainerElement *)0x0;
  local_27a0 = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_27b0,
             &pTVar19->Getter);
  if (bVar55) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_22d8);
    if ((void *)local_22d8._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_22d8._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_22d8);
    if ((ITextData *)local_22f0._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_22f0._0_8_ + 0x10))();
    }
  }
  if (bVar8) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_22a8);
    if ((void *)local_22a8._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_22a8._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_22a8);
    if ((ITextData *)local_22c0._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_22c0._0_8_ + 0x10))();
    }
  }
  if ((pFVar25 == (FEditableTextBlock *)0x0) &&
     (bVar55 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar55)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(pFVar25->ToolTipOverride).Getter,&local_2390);
  if (((*(int *)&(pFVar25->ToolTipOverride).Getter.field_0x10 == 0) ||
      (plVar3 = *(longlong **)&(pFVar25->ToolTipOverride).Getter.field_0x8,
      plVar3 == (longlong *)0x0)) || (cVar13 = (**(code **)(*plVar3 + 0x38))(), cVar13 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_2390);
    pFVar23 = TSharedPtr<FEditableTextBlock_const_,1>::operator->(&local_2888);
    pFVar20 = TAttribute<FText>::Get(&pFVar23->ToolTipOverride);
    bVar55 = FText::IsEmpty(pFVar20);
    if ((!bVar55) || (local_2848.Object == (FUICommandInfo *)0x0)) goto LAB_1427d9ad4;
    bVar8 = true;
    bVar55 = false;
    pFVar22 = TSharedPtr<FUICommandInfo_const_,1>::operator->(&local_2848);
    pTVar19 = TAttribute<FText>::TAttribute<FText><FText>
                        ((TAttribute<FText> *)local_2260,&pFVar22->Description);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_2390);
LAB_1427d9ad4:
    bVar8 = false;
    bVar55 = true;
    if ((pFVar25 == (FEditableTextBlock *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar14)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pTVar19 = TAttribute<FText>::TAttribute<FText>
                        ((TAttribute<FText> *)local_2290,&pFVar25->ToolTipOverride);
  }
  local_2778._0_8_ = (pTVar19->Value).TextData.Reference;
  if ((ITextData *)local_2778._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_2778._0_8_ + 8))(local_2778._0_8_,local_26c4);
  }
  local_2778._8_4_ = (pTVar19->Value).Flags;
  local_2778[0x10] = pTVar19->bIsSet;
  local_2760 = (undefined1  [8])0x0;
  FStack_2758.Data = (FScriptContainerElement *)0x0;
  local_2750 = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_2760,
             &pTVar19->Getter);
  if (bVar55) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2278);
    if ((void *)local_2278._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_2278._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_2278);
    if ((ITextData *)local_2290._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_2290._0_8_ + 0x10))();
    }
  }
  if (bVar8) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2248);
    if ((void *)local_2248._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_2248._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_2248);
    if ((ITextData *)local_2260._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_2260._0_8_ + 0x10))();
    }
  }
  bVar14 = false;
  bVar8 = false;
  bVar55 = false;
  pFVar20 = TAttribute<FText>::Get((TAttribute<FText> *)local_27c8);
  bVar15 = FText::IsEmpty(pFVar20);
  pSVar51 = *(SMultiBoxWidget **)&this->field_0x2b8;
  pSVar52 = pSVar51;
  if (pSVar51 == (SMultiBoxWidget *)0x0) {
LAB_1427d9c26:
    bVar56 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    pSVar51 = pSVar52;
    if (bVar56) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  else {
    aVar9 = *(atomic<int> *)&pSVar51->_padding_;
    do {
      pSVar52 = this_05;
      if (aVar9 == (atomic<int>)0x0) goto LAB_1427d9c26;
      LOCK();
      aVar17 = *(atomic<int> *)&pSVar51->_padding_;
      bVar56 = aVar9 == aVar17;
      if (bVar56) {
        *(atomic<int> *)&pSVar51->_padding_ = (atomic<int>)((int)aVar9 + 1);
        aVar17 = aVar9;
      }
      UNLOCK();
      aVar9 = aVar17;
    } while (!bVar56);
    this_05 = *(SMultiBoxWidget **)&this->field_0x2b0;
    pSVar52 = pSVar51;
    if (this_05 == (SMultiBoxWidget *)0x0) goto LAB_1427d9c26;
  }
  if ((*(longlong *)&this->field_0x2c0 == 0) &&
     (bVar56 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar56)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  bVar56 = *(bool *)(*(longlong *)&this->field_0x2c0 + 0xbc);
  pFVar20 = TAttribute<FText>::Get((TAttribute<FText> *)local_27c8);
  local_2520.TextData.Reference = (pFVar20->TextData).Reference;
  if (local_2520.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_2520.TextData.Reference + 8))
              (local_2520.TextData.Reference,local_2648);
  }
  local_2520.Flags = pFVar20->Flags;
  puVar21 = (undefined8 *)(**(code **)(*(longlong *)this + 8))(this,local_23d8);
  local_2510.Object = (SWidget *)*puVar21;
  local_2510.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)puVar21[1];
  if (local_2510.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_2510.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_2510.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SMultiBoxWidget::AddElement(this_05,&local_2510,&local_2520,bVar56);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_23d0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar51);
  if (local_2848.Object == (FUICommandInfo *)0x0) {
    pFVar24 = FSlateIcon::FSlateIcon(&local_1fc0);
  }
  else {
    pFVar22 = TSharedPtr<FUICommandInfo_const_,1>::operator->(&local_2848);
    pFVar24 = &local_2230;
    local_2230.StyleSetName = (pFVar22->Icon).StyleSetName;
    local_2230.StyleName = (pFVar22->Icon).StyleName;
    local_2230.SmallStyleName = (pFVar22->Icon).SmallStyleName;
    local_2230.StatusOverlayStyleName = (pFVar22->Icon).StatusOverlayStyleName;
  }
  local_2210.StyleSetName = pFVar24->StyleSetName;
  local_2210.StyleName = pFVar24->StyleName;
  local_2210.SmallStyleName = pFVar24->SmallStyleName;
  local_2210.StatusOverlayStyleName = pFVar24->StatusOverlayStyleName;
  if ((pFVar25 == (FEditableTextBlock *)0x0) &&
     (bVar56 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar56)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (((pFVar25->IconOverride).StyleSetName == (FName)0x0) ||
     ((pFVar25->IconOverride).StyleName == (FName)0x0)) {
    pFVar24 = &local_2210;
  }
  else {
    pFVar25 = TSharedPtr<FEditableTextBlock_const_,1>::operator->(&local_2888);
    pFVar24 = &pFVar25->IconOverride;
  }
  FVar10.ReferenceController = SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  local_2850 = (SImage *)SNullWidget::NullWidget.Object;
  if (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  FVar53.ReferenceController = FVar10.ReferenceController;
  if ((pFVar24->StyleSetName != (FName)0x0) && (pFVar24->StyleName != (FName)0x0)) {
    pFVar26 = FSlateIcon::GetIcon(pFVar24);
    if (pFVar26->ResourceName == (FName)0x0) {
      pUVar4 = (pFVar26->ResourceObject).field0_0x0.DebugPtr;
      lVar49 = 0;
      if (pUVar4 != (UObject *)0x0) {
        lVar49 = *(longlong *)&pUVar4->field_0x18;
      }
      if (lVar49 == 0) goto LAB_1427da014;
    }
    pFVar27 = SImage::FArguments::FArguments(&local_18e0);
    local_24e0.Getter._16_8_ = 0;
    local_24e0.bIsSet = true;
    local_24e0.Getter._0_8_ = 0;
    local_24e0.Getter._8_8_ = 0;
    local_24e0.Value = pFVar26;
    pFVar27 = SImage::FArguments::Image(pFVar27,&local_24e0);
    this_00 = MakeTDecl<SImage,RequiredArgs::T0RequiredArgs>
                        (&local_21a8,"SImage",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SEditableTextBlock.cpp"
                         ,0x4c,local_res20);
    pTVar28 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                        (this_00,&local_23c8,pFVar27);
    FVar53.ReferenceController = (pTVar28->SharedReferenceCount).ReferenceController;
    local_2850 = pTVar28->Object;
    if (FVar53.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar53.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar53.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar10.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_23c8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_21a8._Widget.SharedReferenceCount.ReferenceController);
    SImage::FArguments::~FArguments(&local_18e0);
  }
LAB_1427da014:
  fVar57 = (float)(**(code **)((longlong)*param_1 + 0x28))
                            (param_1,*param_2,".MenuIconSize",__real_41800000,0);
  local_2870 = SHorizontalBox::FArguments::FArguments(&local_1d10);
  pFVar29 = ::operator_new(0x58);
  local_26b8 = (FSlot *)0x0;
  if (pFVar29 != (FSlot *)0x0) {
    *(undefined8 *)pFVar29 = 0;
    *(undefined8 *)&pFVar29->field_0x8 = 0;
    *(undefined8 *)&pFVar29->field_0x10 = 0;
    *(undefined8 *)&pFVar29->field_0x18 = 0;
    *(undefined8 *)&pFVar29->field_0x20 = 0;
    *(undefined8 *)&pFVar29->field_0x28 = 0;
    *(undefined8 *)&pFVar29->field_0x30 = 0;
    *(undefined8 *)&pFVar29->field_0x38 = 0;
    *(undefined8 *)&pFVar29->field_0x40 = 0;
    *(undefined8 *)&pFVar29->field_0x48 = 0;
    *(undefined8 *)&pFVar29->field_0x50 = 0;
    local_26b8 = SHorizontalBox::FSlot::FSlot(pFVar29);
  }
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_20a8,(FSlot *)&local_26b8);
  pFVar30 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth((FSlotArguments *)local_20a8);
  pFVar31 = SSpacer::FArguments::FArguments((FArguments *)local_1b08);
  local_2630 = 1;
  local_2618 = 0;
  dStack_2638 = (double)fVar57;
  local_2640 = (double)(fVar57 + __real_40400000);
  local_2628 = (undefined1  [8])0x0;
  pvStack_2620 = (void *)0x0;
  (pFVar31->_Size).Value.field0_0x0._s_0.X = local_2640;
  (pFVar31->_Size).Value.field0_0x0._s_0.Y = dStack_2638;
  (pFVar31->_Size).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar31->_Size).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2628);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2628);
  if (pvStack_2620 != (void *)0x0) {
    FMemory::Free(pvStack_2620);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2628);
  FLLMScope::FLLMScope(&local_2860,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_26b0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_26a8,&local_26b0,true);
  TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs>::TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs>
            (&local_27e0,"SSpacer",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SEditableTextBlock.cpp"
             ,0x59,&local_2878);
  FMemScope::~FMemScope(&local_26a8);
  FLLMScope::~FLLMScope(&local_2860);
  pSVar32 = TSharedPtr<SSpacer,1>::operator->(&local_27e0._Widget);
  SWidget::SWidgetConstruct((SWidget *)pSVar32,(FSlateBaseNamedArgs *)pFVar31);
  pSVar32 = local_27e0._Widget.Object;
  SSpacer::Construct(local_27e0._Widget.Object,pFVar31);
  pSVar33 = TSharedPtr<SSpacer,1>::operator->(&local_27e0._Widget);
  if ((pSVar33->_padding_ & 0x10) == 0) {
    cVar13 = (**(code **)(pSVar33->_padding_ + 0x228))(pSVar33);
    bVar16 = 0;
    if (cVar13 == '\0') goto LAB_1427da226;
  }
  bVar16 = 0x20;
LAB_1427da226:
  *(byte *)&pSVar33->_padding_ = (byte)pSVar33->_padding_ & 0xdf;
  *(byte *)&pSVar33->_padding_ = (byte)pSVar33->_padding_ | bVar16;
  pSVar33 = TSharedPtr<SSpacer,1>::operator->(&local_27e0._Widget);
  pbVar1 = (byte *)((longlong)&pSVar33->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((local_27e0._Widget.Object == (SSpacer *)0x0) &&
     (bVar56 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar56)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FVar10.ReferenceController = local_27e0._Widget.SharedReferenceCount.ReferenceController;
  local_27e0._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_27e0._Widget.Object = (SSpacer *)0x0;
  if ((pSVar32 == (SSpacer *)0x0) &&
     (bVar56 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar56)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_2818 = pSVar32;
  local_2810.ReferenceController = FVar10.ReferenceController;
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
  if ((SSpacer **)&pFVar30->field_0x8 != &local_2818) {
    *(SSpacer **)&pFVar30->field_0x8 = pSVar32;
    local_2818 = (SSpacer *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar30->field_0x10,&local_2810);
  }
  pFVar34 = (FSlot *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2810.ReferenceController);
  local_2868 = SHorizontalBox::FArguments::operator+(local_2870,pFVar30);
  pFVar29 = ::operator_new(0x58);
  if (pFVar29 != (FSlot *)0x0) {
    *(undefined8 *)pFVar29 = 0;
    *(undefined8 *)&pFVar29->field_0x8 = 0;
    *(undefined8 *)&pFVar29->field_0x10 = 0;
    *(undefined8 *)&pFVar29->field_0x18 = 0;
    *(undefined8 *)&pFVar29->field_0x20 = 0;
    *(undefined8 *)&pFVar29->field_0x28 = 0;
    *(undefined8 *)&pFVar29->field_0x30 = 0;
    *(undefined8 *)&pFVar29->field_0x38 = 0;
    *(undefined8 *)&pFVar29->field_0x40 = 0;
    *(undefined8 *)&pFVar29->field_0x48 = 0;
    *(undefined8 *)&pFVar29->field_0x50 = 0;
    pFVar34 = SHorizontalBox::FSlot::FSlot(pFVar29);
  }
  local_26a0 = pFVar34;
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_2190,(FSlot *)&local_26a0);
  local_2870 = (FArguments *)
               SHorizontalBox::FSlot::FSlotArguments::AutoWidth((FSlotArguments *)local_2190);
  pFVar35 = SBox::FArguments::FArguments(&local_fb8);
  pSVar11 = local_2850;
  local_25b0.bIsSet = true;
  local_25b0.Value = EVisibility::Collapsed;
  if (local_2850 != (SImage *)SNullWidget::NullWidget.Object) {
    local_25b0.Value = EVisibility::Visible;
  }
  local_25b0.Getter._0_8_ = 0;
  local_25b0.Getter._8_8_ = 0;
  local_25b0.Getter._16_8_ = 0;
  pFVar35 = TSlateBaseNamedArgs<SBox>::Visibility((TSlateBaseNamedArgs<SBox> *)pFVar35,&local_25b0);
  local_2590.bIsSet = true;
  local_2590.Getter._16_8_ = 0;
  local_2590.Value.Size = fVar57 + __real_40000000;
  local_2590.Getter._0_8_ = 0;
  local_2590.Getter._8_8_ = 0;
  pFVar35 = SBox::FArguments::WidthOverride(pFVar35,&local_2590);
  local_2570.bIsSet = true;
  local_2570.Getter._16_8_ = 0;
  local_2570.Getter._0_8_ = 0;
  local_2570.Getter._8_8_ = 0;
  local_2570.Value.Size = fVar57;
  pFVar35 = SBox::FArguments::HeightOverride(pFVar35,&local_2570);
  pFVar35->_HAlign = HAlign_Center;
  pFVar35->_VAlign = VAlign_Center;
  pFVar36 = SBox::FArguments::FArguments(&local_12f8);
  local_2550.bIsSet = true;
  local_2550.Getter._16_8_ = 0;
  local_2550.Getter._0_8_ = 0;
  local_2550.Getter._8_8_ = 0;
  local_2550.Value.Size = fVar57;
  pFVar36 = SBox::FArguments::WidthOverride(pFVar36,&local_2550);
  local_2610.bIsSet = true;
  local_2610.Getter._16_8_ = 0;
  local_2610.Getter._0_8_ = 0;
  local_2610.Getter._8_8_ = 0;
  local_2610.Value.Size = fVar57;
  pFVar36 = SBox::FArguments::HeightOverride(pFVar36,&local_2610);
  if (FVar53.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar53.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar53.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_23b8 = (pFVar36->_Content).Widget.Object;
  pTStack_23b0 = (pFVar36->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar36->_Content).Widget.Object = (SWidget *)pSVar11;
  (pFVar36->_Content).Widget.SharedReferenceCount.ReferenceController = FVar53.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_23b0);
  FLLMScope::FLLMScope(&local_285c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2698 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2690,&local_2698,true);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_2360,"SBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SEditableTextBlock.cpp"
             ,0x67,&local_2877);
  FMemScope::~FMemScope(&local_2690);
  FLLMScope::~FLLMScope(&local_285c);
  pTVar37 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_2360,&local_2348,pFVar36);
  pSVar5 = pTVar37->Object;
  local_2668 = (pTVar37->SharedReferenceCount).ReferenceController;
  if (local_2668 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_2668->SharedReferenceCount = (atomic<int>)((int)local_2668->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    local_2668->SharedReferenceCount = (atomic<int>)((int)local_2668->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2798 = (pFVar35->_Content).Widget.Object;
  pTStack_2790 = (pFVar35->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar35->_Content).Widget.Object = (SWidget *)pSVar5;
  (pFVar35->_Content).Widget.SharedReferenceCount.ReferenceController = local_2668;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_2790);
  FLLMScope::FLLMScope(&local_2858,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2688 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2680,&local_2688,true);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_2378,"SBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SEditableTextBlock.cpp"
             ,0x60,&local_2876);
  FMemScope::~FMemScope(&local_2680);
  FLLMScope::~FLLMScope(&local_2858);
  pTVar37 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_2378,&local_2338,pFVar35);
  local_2808.Object = (SWidget *)pTVar37->Object;
  local_2808.SharedReferenceCount.ReferenceController =
       (pTVar37->SharedReferenceCount).ReferenceController;
  if (local_2808.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_2808.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_2808.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar30 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)local_2870,&local_2808);
  local_2870 = SHorizontalBox::FArguments::operator+(local_2868,pFVar30);
  pFVar30 = SHorizontalBox::Slot((FSlotArguments *)local_1eb8);
  local_2868 = (FArguments *)SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar30);
  pFVar35 = SBox::FArguments::FArguments(&local_1638);
  local_25f0.bIsSet = true;
  local_25f0.Value = EVisibility::Collapsed;
  if (!bVar15) {
    local_25f0.Value = EVisibility::Visible;
  }
  local_25f0.Getter._16_8_ = 0;
  local_25f0.Getter._0_8_ = 0;
  local_25f0.Getter._8_8_ = 0;
  pFVar35 = TSlateBaseNamedArgs<SBox>::Visibility((TSlateBaseNamedArgs<SBox> *)pFVar35,&local_25f0);
  local_2450.bIsSet = true;
  local_2450.Getter._16_8_ = 0;
  local_2450.Value.Left = ___xmm_0000000041200000000000003f800000;
  local_2450.Value.Top = _UNK_1509579c4;
  local_2450.Value.Right = _UNK_1509579c8;
  local_2450.Value.Bottom = _UNK_1509579cc;
  local_2450.Getter._0_8_ = 0;
  local_2450.Getter._8_8_ = 0;
  pFVar35 = SBox::FArguments::Padding(pFVar35,&local_2450);
  pFVar35->_VAlign = VAlign_Center;
  pFVar38 = STextBlock::FArguments::FArguments(&local_c78);
  FVar39 = ISlateStyle::Join((FName)local_22f8,(char *)*param_2);
  pFVar38 = STextBlock::FArguments::TextStyle(pFVar38,param_1,(FName *)FVar39,(char *)0x0);
  pTVar19 = TAttribute<FText>::TAttribute<FText>(&local_1dd0,(TAttribute<FText> *)local_27c8);
  pFVar38 = STextBlock::FArguments::Text(pFVar38,pTVar19);
  pTVar19 = TAttribute<FText>::TAttribute<FText>(&local_1da0,(TAttribute<FText> *)local_2778);
  FText::operator=((FText *)pFVar38,&pTVar19->Value);
  *(bool *)&pFVar38->_padding_ = pTVar19->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar38->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&pTVar19->Getter);
  TAttribute<FText>::~TAttribute<FText>(pTVar19);
  this_01 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                      (&local_21d8,"STextBlock",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SEditableTextBlock.cpp"
                       ,0x78,&local_2875);
  pTVar40 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_01,&local_2328,pFVar38);
  pSVar6 = pTVar40->Object;
  local_2850 = (SImage *)(pTVar40->SharedReferenceCount).ReferenceController;
  if (local_2850 != (SImage *)0x0) {
    LOCK();
    ((TReferenceControllerBase<1> *)local_2850)->SharedReferenceCount =
         (atomic<int>)((int)((TReferenceControllerBase<1> *)local_2850)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    ((TReferenceControllerBase<1> *)local_2850)->SharedReferenceCount =
         (atomic<int>)((int)((TReferenceControllerBase<1> *)local_2850)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2788 = (pFVar35->_Content).Widget.Object;
  pTStack_2780 = (pFVar35->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar35->_Content).Widget.Object = (SWidget *)pSVar6;
  (pFVar35->_Content).Widget.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)local_2850;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_2780);
  this_02 = MakeTDecl<SBox,RequiredArgs::T0RequiredArgs>
                      (&local_21f0,"SBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SEditableTextBlock.cpp"
                       ,0x73,&local_2874);
  pTVar37 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=(this_02,&local_2318,pFVar35);
  local_2658.Object = (SWidget *)pTVar37->Object;
  local_2658.SharedReferenceCount.ReferenceController =
       (pTVar37->SharedReferenceCount).ReferenceController;
  if (local_2658.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_2658.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_2658.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar30 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)local_2868,&local_2658);
  local_2868 = SHorizontalBox::FArguments::operator+(local_2870,pFVar30);
  pFVar30 = SHorizontalBox::Slot((FSlotArguments *)local_1fa0);
  puVar41 = &pFVar30->field_0x48;
  if (local_26c0 != (undefined4 *)puVar41) {
    *(undefined4 *)puVar41 = 0;
    pFVar30->field_0x4c = 1;
  }
  if (puVar41 == (undefined1 *)0x0) {
    pFVar30 = (FSlotArguments *)0x0;
  }
  local_25d0.Value = 1.0;
  local_25d0.Getter._16_8_ = 0;
  local_25d0.bIsSet = true;
  local_25d0.Getter._0_8_ = 0;
  local_25d0.Getter._8_8_ = 0;
  pFVar30 = SHorizontalBox::FSlot::FSlotArguments::FillWidth(pFVar30,&local_25d0);
  local_2420.bIsSet = true;
  local_2420.Value.Left = ___xmm_3f800000400000003f80000040000000;
  local_2420.Value.Top = _UNK_1509579e4;
  local_2420.Value.Right = _UNK_1509579e8;
  local_2420.Value.Bottom = _UNK_1509579ec;
  local_2420.Getter._16_8_ = 0;
  local_2420.Getter._0_8_ = 0;
  local_2420.Getter._8_8_ = 0;
  pFVar30 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)&pFVar30->field_0x18,&local_2420);
  this_03 = SEditableTextBox::FArguments::FArguments(&local_720);
  FVar39 = ISlateStyle::Join((FName)local_23f0,(char *)*param_2);
  pFVar42 = ISlateStyle::GetWidgetStyle<FEditableTextBoxStyle>
                      (param_1,*(FName *)FVar39,(char *)0x0,(FEditableTextBoxStyle *)0x0);
  pFVar25 = local_2888.Object;
  this_03->_Style = pFVar42;
  if ((local_2888.Object == (FEditableTextBlock *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar15)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pTVar19 = TAttribute<FText>::TAttribute<FText>(&local_1d70,&pFVar25->TextAttribute);
  TAttribute<FText>::operator=(&this_03->_Text,pTVar19);
  TAttribute<FText>::~TAttribute<FText>(pTVar19);
  if ((pFVar25 == (FEditableTextBlock *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar15)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_2708 = pFVar25->bReadOnly;
  local_2707 = 1;
  local_2700 = (undefined1  [8])0x0;
  pvStack_26f8 = (void *)0x0;
  local_26f0 = 0;
  (this_03->_IsReadOnly).Value = (bool)local_2708;
  (this_03->_IsReadOnly).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this_03->_IsReadOnly).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2700);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2700);
  if (pvStack_26f8 != (void *)0x0) {
    FMemory::Free(pvStack_26f8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2700);
  local_2728 = 0x101;
  local_2710 = 0;
  local_2720 = (undefined1  [8])0x0;
  pvStack_2718 = (void *)0x0;
  (this_03->_SelectAllTextWhenFocused).Value = true;
  (this_03->_SelectAllTextWhenFocused).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this_03->_SelectAllTextWhenFocused).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2720);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2720);
  if (pvStack_2718 != (void *)0x0) {
    FMemory::Free(pvStack_2718);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2720);
  local_2748 = 0x101;
  local_2730 = 0;
  local_2740 = (undefined1  [8])0x0;
  pvStack_2738 = (void *)0x0;
  (this_03->_RevertTextOnEscape).Value = true;
  (this_03->_RevertTextOnEscape).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this_03->_RevertTextOnEscape).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2740);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2740);
  if (pvStack_2738 != (void *)0x0) {
    FMemory::Free(pvStack_2738);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2740);
  local_26e4 = 1;
  local_26e8 = __real_41f00000;
  local_26d0 = 0;
  local_26e0 = (undefined1  [8])0x0;
  pvStack_26d8 = (void *)0x0;
  (this_03->_MinDesiredWidth).Value = __real_41f00000;
  (this_03->_MinDesiredWidth).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this_03->_MinDesiredWidth).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_26e0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_26e0);
  if (pvStack_26d8 != (void *)0x0) {
    FMemory::Free(pvStack_26d8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_26e0);
  TDelegate<void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&this_03->_OnTextChanged,&pFVar25->OnTextChanged);
  TDelegate<bool___cdecl(FText_const_&,FText_&),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&this_03->_OnVerifyTextChanged,&pFVar25->OnVerifyTextChanged)
  ;
  TDelegate<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&this_03->_OnTextCommitted,&pFVar25->OnTextCommitted);
  pTVar19 = TAttribute<FText>::TAttribute<FText>(&local_1d40,(TAttribute<FText> *)local_2778);
  TAttribute<FText>::operator=((TAttribute<FText> *)this_03,pTVar19);
  TAttribute<FText>::~TAttribute<FText>(pTVar19);
  FLLMScope::FLLMScope(&local_2854,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2678 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2670,&local_2678,true);
  TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs>
            (&local_27f8,"SEditableTextBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SEditableTextBlock.cpp"
             ,0x84,&local_2873);
  FMemScope::~FMemScope(&local_2670);
  FLLMScope::~FLLMScope(&local_2854);
  pSVar43 = TSharedPtr<SEditableTextBox,1>::operator->(&local_27f8._Widget);
  SWidget::SWidgetConstruct((SWidget *)pSVar43,(FSlateBaseNamedArgs *)this_03);
  pSVar43 = local_27f8._Widget.Object;
  SEditableTextBox::Construct(local_27f8._Widget.Object,this_03);
  pSVar44 = TSharedPtr<SEditableTextBox,1>::operator->(&local_27f8._Widget);
  SWidget::CacheVolatility((SWidget *)pSVar44);
  pSVar44 = TSharedPtr<SEditableTextBox,1>::operator->(&local_27f8._Widget);
  pbVar1 = (byte *)((longlong)&pSVar44->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((local_27f8._Widget.Object == (SEditableTextBox *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar15)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FVar12.ReferenceController = local_27f8._Widget.SharedReferenceCount.ReferenceController;
  local_27f8._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_27f8._Widget.Object = (SEditableTextBox *)0x0;
  if ((pSVar43 == (SEditableTextBox *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar15)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_24f0.Object = (SWidget *)pSVar43;
  local_24f0.SharedReferenceCount.ReferenceController = FVar12.ReferenceController;
  if (FVar12.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar12.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar12.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar30 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)pFVar30,&local_24f0);
  pFVar45 = SHorizontalBox::FArguments::operator+(local_2868,pFVar30);
  this_04 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                      (&local_21c0,"SHorizontalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SEditableTextBlock.cpp"
                       ,0x55,local_2872);
  pTVar46 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_04,&local_2308,pFVar45);
  pTVar2 = (pTVar46->SharedReferenceCount).ReferenceController;
  local_2500.Object = (SWidget *)pTVar46->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2500.SharedReferenceCount.ReferenceController = pTVar2;
  TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::operator[]
            ((TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *)
             &this->field_0x220,&local_2500);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2308.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_21c0._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar12.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar12.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SEditableTextBox::FArguments::~FArguments(&local_720);
  TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_1f48);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1f70);
  if ((void *)local_1f70._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1f70._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1f70);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1f90);
  if (local_1fa0[0] != (undefined8 *)0x0) {
    (**(code **)*local_1fa0[0])(local_1fa0[0],1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2658.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2318.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_21f0._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_2850);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2328.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_21d8._Widget.SharedReferenceCount.ReferenceController);
  STextBlock::FArguments::~FArguments(&local_c78);
  SBox::FArguments::~FArguments(&local_1638);
  TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_1e60);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1e88);
  if ((void *)local_1e88._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1e88._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1e88);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1ea8);
  if (local_1eb8[0] != (undefined8 *)0x0) {
    (**(code **)*local_1eb8[0])(local_1eb8[0],1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2808.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2338.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2378._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2668);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2348.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2360._Widget.SharedReferenceCount.ReferenceController);
  SBox::FArguments::~FArguments(&local_12f8);
  SBox::FArguments::~FArguments(&local_fb8);
  TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_2138);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2160);
  if ((void *)local_2160._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_2160._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2160);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2180);
  if (local_2190[0] != (undefined8 *)0x0) {
    (**(code **)*local_2190[0])(local_2190[0],1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar10.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar10.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_27e0._Widget.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_18f8);
  if ((void *)local_18f8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_18f8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_18f8);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_1b08);
  TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_2050);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2078);
  if ((void *)local_2078._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_2078._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2078);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2098);
  if (local_20a8[0] != (undefined8 *)0x0) {
    (**(code **)*local_20a8[0])(local_20a8[0],1);
  }
  DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_1d10._Slots.AllocatorInstance.Data,local_1d10._Slots.ArrayNum);
  if ((FSlotArguments *)local_1d10._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_1d10._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_1d10);
  local_2838[0] = false;
  local_2838[1] = true;
  FStack_2828.DelegateSize = 0;
  local_2830.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_2828.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_2830,(FWriteAccessScope *)&local_2470);
  local_2458 = &FStack_2828;
  puVar21 = UE::Core::Private::DelegateAllocate(0x38,&FStack_2828);
  if (puVar21 != (undefined8 *)0x0) {
    local_2808.Object = (SWidget *)IsEnabled;
    local_2808.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)
         ((ulonglong)local_2530.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
    pTVar47 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->field_0x10,&local_2530);
    pTVar54 = &pTVar47->Object[-1].StatID;
    if (pTVar47->Object == (SWidget *)0x0) {
      pTVar54 = (TStatId *)0x0;
    }
    param_1 = (ISlateStyle *)(pTVar47->SharedReferenceCount).ReferenceController;
    if ((TReferenceControllerBase<1> *)param_1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      ((TReferenceControllerBase<1> *)param_1)->SharedReferenceCount =
           (atomic<int>)((int)((TReferenceControllerBase<1> *)param_1)->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      ((TReferenceControllerBase<1> *)param_1)->SharedReferenceCount =
           (atomic<int>)((int)((TReferenceControllerBase<1> *)param_1)->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar14 = true;
    bVar8 = true;
    bVar55 = true;
    *puVar21 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar48 = FDelegateHandle::GenerateNewID();
    puVar21[2] = uVar48;
    *puVar21 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSEditableTextBlock___00__A6A_NXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar21[3] = pTVar54;
    puVar21[4] = param_1;
    if ((TReferenceControllerBase<1> *)param_1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      ((TReferenceControllerBase<1> *)param_1)->WeakReferenceCount =
           (atomic<int>)((int)((TReferenceControllerBase<1> *)param_1)->WeakReferenceCount + 1);
      UNLOCK();
    }
    puVar21[5] = local_2808.Object;
    puVar21[6] = local_2808.SharedReferenceCount.ReferenceController;
  }
  if (bVar55) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)param_1);
  }
  if (bVar8) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)param_1);
  }
  if (bVar14) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)
               CONCAT44(local_2530.SharedReferenceCount.ReferenceController._4_4_,
                        local_2530.SharedReferenceCount.ReferenceController._0_4_));
  }
  if (local_2470.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2470.Accessor,&local_2470);
  }
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->field_0x42,(SWidget *)&this->field_0x8,(TAttribute<bool> *)local_2838,None);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_2830,(FWriteAccessScope *)&local_24b8);
  if ((FStack_2828.DelegateSize != 0) &&
     (FStack_2828.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)FStack_2828.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&FStack_2828,0,0,0x10);
    FStack_2828.DelegateSize = 0;
  }
  if (local_24b8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_24b8.Accessor,&local_24b8);
  }
  if (FStack_2828.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)FStack_2828.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_2830.AccessDetector);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar53.ReferenceController);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2760,
             (FWriteAccessScope *)&local_24a0);
  if ((local_2750 != 0) && (FStack_2758.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2758.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2758,0,0,0x10);
    local_2750 = 0;
  }
  if (local_24a0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_24a0.Accessor,&local_24a0);
  }
  if (FStack_2758.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2758.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2760);
  if ((ITextData *)local_2778._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_2778._0_8_ + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_27b0,
             (FWriteAccessScope *)&local_2488);
  if ((local_27a0 != 0) && (FStack_27a8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_27a8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_27a8,0,0,0x10);
    local_27a0 = 0;
  }
  if (local_2488.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2488.Accessor,&local_2488);
  }
  if (FStack_27a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_27a8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_27b0);
  if ((ITextData *)local_27c8._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_27c8._0_8_ + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2848.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2888.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2660);
  return;
}

// IsEnabled @ 14281d320

bool __thiscall SEditableTextBlock::IsEnabled(SEditableTextBlock *this)

{
  TReferenceControllerBase<1> *pTVar1;
  FUICommandList *this_00;
  TReferenceControllerBase<1> *pTVar2;
  FUICommandInfo *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  TSharedRef<FUICommandInfo_const_,1> local_18;
  
  if (*(longlong *)&this->field_0x2c0 == 0) {
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
  pTVar1 = *(TReferenceControllerBase<1> **)(*(longlong *)&this->field_0x2c0 + 0x98);
  this_00 = *(FUICommandList **)(*(longlong *)&this->field_0x2c0 + 0x90);
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (*(longlong *)&this->field_0x2c0 == 0) {
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
  pTVar2 = *(TReferenceControllerBase<1> **)(*(longlong *)&this->field_0x2c0 + 0x88);
  pFVar3 = *(FUICommandInfo **)(*(longlong *)&this->field_0x2c0 + 0x80);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (*(longlong *)&this->field_0x2c0 == 0) {
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
    bVar5 = FUIAction::CanExecute((FUIAction *)(*(longlong *)&this->field_0x2c0 + 0x18));
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

