// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 4

// BuildMultiBlockWidget @ 1427e5c50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
SWidgetBlock::BuildMultiBlockWidget(SWidgetBlock *this,ISlateStyle *param_1,FName *param_2)

{
  EMultiBoxType EVar1;
  longlong lVar2;
  TReferenceControllerBase<1> *pTVar3;
  SSearchBox *pSVar4;
  UObject *pUVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  SHorizontalBox *pSVar8;
  TReferenceControllerBase<1> *pTVar9;
  code *pcVar10;
  TReferenceControllerBase<1> *pTVar11;
  bool bVar12;
  int iVar13;
  bool bVar14;
  FMemScope FVar15;
  bool bVar16;
  int iVar17;
  TSharedRef<FMultiBox_const_,1> *pTVar18;
  longlong lVar19;
  FToolBarStyle *pFVar20;
  TEnumAsByte<EVerticalAlignment> *pTVar21;
  FName FVar22;
  EVerticalAlignment *pEVar23;
  TAttribute<FText> *pTVar24;
  FText *pFVar25;
  SWidget *pSVar26;
  FSlateIcon *this_00;
  FSlateBrush *pFVar27;
  FArguments *pFVar28;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> *this_01;
  TSharedRef<SImage,1> *pTVar29;
  TSingleWidgetChildrenWithBasicLayoutSlot<0> *pTVar30;
  FArguments *pFVar31;
  FSlot *pFVar32;
  FSlot *pFVar33;
  FSlotArguments *pFVar34;
  FArguments *pFVar35;
  FArguments *pFVar36;
  TSharedRef<SBox,1> *pTVar37;
  FArguments *pFVar38;
  ISlateStyle *pIVar39;
  FName *pFVar40;
  undefined8 *puVar41;
  TSharedRef<STextBlock,1> *pTVar42;
  TSharedRef<SHorizontalBox,1> *pTVar43;
  FMultiBlock *this_02;
  TAttribute<EVisibility> *pTVar44;
  FSlotArguments *pFVar45;
  undefined1 *puVar46;
  SMultiBoxWidget *this_03;
  SImage *pSVar47;
  char *pcVar48;
  FSharedReferencer<1> FVar49;
  FSharedReferencer<1> FVar50;
  SMultiBoxWidget *pSVar51;
  SMultiBoxWidget *pSVar52;
  bool bVar53;
  float fVar54;
  ulonglong uVar55;
  ulonglong in_stack_ffffffffffffe238;
  ulonglong in_stack_ffffffffffffe240;
  T0RequiredArgs local_1db8;
  T0RequiredArgs local_1db7;
  T0RequiredArgs local_1db6;
  T0RequiredArgs local_1db5;
  T0RequiredArgs local_1db4;
  T0RequiredArgs local_1db3 [3];
  EVerticalAlignment local_1db0;
  FArguments *local_1da8;
  ulonglong uStack_1da0;
  uint local_1d98;
  FLLMScope local_1d94;
  FLLMScope local_1d90;
  FLLMScope local_1d8c;
  FLLMScope local_1d88;
  FLLMScope local_1d84;
  FMemScope local_1d80;
  FArguments *local_1d78;
  SHorizontalBox *local_1d70;
  FSharedReferencer<1> local_1d68;
  STextBlock *local_1d60;
  FSharedReferencer<1> local_1d58;
  FMemScope local_1d50;
  FName local_1d48;
  undefined1 local_1d40 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1d28;
  ForAnyElementType FStack_1d20;
  ulonglong local_1d18;
  undefined8 local_1d10;
  undefined8 uStack_1d08;
  undefined4 local_1d00;
  undefined1 local_1cfc;
  undefined1 local_1cf8 [8];
  ForAnyElementType FStack_1cf0;
  ulonglong local_1ce8;
  undefined8 local_1ce0;
  FSharedReferencer<1> local_1cd8;
  FText local_1cd0;
  SWidget *local_1cc0;
  FSharedReferencer<1> local_1cb8;
  FTextBlockStyle *local_1cb0;
  uchar local_1ca8;
  undefined1 local_1ca7;
  undefined1 local_1ca0 [8];
  void *pvStack_1c98;
  undefined8 local_1c90;
  SBox *local_1c88;
  TReferenceControllerBase<1> *pTStack_1c80;
  SHorizontalBox *local_1c78;
  TReferenceControllerBase<1> *pTStack_1c70;
  SWidget *local_1c68;
  TReferenceControllerBase<1> *pTStack_1c60;
  undefined1 local_1c58 [4];
  undefined1 local_1c54 [4];
  undefined4 local_1c50 [2];
  FSlot *local_1c48;
  FName local_1c40;
  FMemScope local_1c38;
  TSharedPtr<FMultiBlock_const_,1> *local_1c30;
  TReferenceControllerBase<1> *local_1c28;
  TReferenceControllerBase<1> *local_1c20;
  FMemScope local_1c18;
  FName local_1c10;
  FMemScope local_1c08;
  FSlot *local_1c00;
  FSlotArguments *local_1bf8;
  TSharedPtr<SWidget,1> local_1bf0;
  longlong local_1be0;
  TReferenceControllerBase<1> *local_1bd8;
  FName local_1bd0;
  FName local_1bc8;
  TAttribute<EVisibility> local_1bc0;
  TAttribute<FOptionalSize> local_1ba0;
  TAttribute<FOptionalSize> local_1b80;
  TAttribute<FOptionalSize> local_1b60;
  TAttribute<float> local_1b40;
  TAttribute<FOptionalSize> local_1b20;
  undefined8 local_1b00;
  TReferenceControllerBase<1> *pTStack_1af8;
  TSharedRef<SWidget,1> local_1af0;
  TSharedRef<SWidget,1> local_1ae0;
  TSharedRef<FMultiBox_const_,1> local_1ad0;
  FText local_1ac0;
  TSharedPtr<SWidget,1> local_1ab0;
  TSharedRef<SWidget,1> local_1aa0;
  undefined8 local_1a90;
  TReferenceControllerBase<1> *pTStack_1a88;
  TAttribute<FSlateBrush_const_*> local_1a80;
  FDestructionSentinel local_1a58;
  FDestructionSentinel local_1a40;
  FLinearColor_u_0 local_1a28;
  undefined4 local_1a18;
  undefined1 local_1a14;
  undefined8 local_1a10;
  undefined8 uStack_1a08;
  undefined8 local_1a00;
  TAttribute<TSharedPtr<IToolTip,1>_> local_19f8;
  undefined4 local_19b8;
  code *local_19b0;
  ulonglong uStack_19a8;
  bool local_19a0;
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> local_1998;
  TAttribute<FMargin> local_1980;
  TAttribute<FMargin> local_1950;
  TAttribute<FMargin> local_1920;
  TSharedRef<STextBlock,1> local_18f0;
  TSharedRef<SBox,1> local_18e0;
  TSharedRef<SBox,1> local_18d0;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_18c0;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_18a8;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_1890;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_1878;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_1860;
  FName local_1848;
  TSharedRef<FMultiBox_const_,1> local_1840;
  TSharedRef<FMultiBox_const_,1> local_1830;
  code *local_1818;
  ulonglong uStack_1810;
  TSharedPtr<SWidget,1> local_1808;
  undefined1 local_17f8 [8];
  SWidget *local_17f0;
  TReferenceControllerBase<1> *pTStack_17e8;
  undefined8 local_17e0;
  undefined8 uStack_17d8;
  TSharedRef<SImage,1> local_17d0;
  undefined8 local_17c0;
  undefined8 uStack_17b8;
  TSharedRef<SHorizontalBox,1> local_17b0;
  TSharedRef<SHorizontalBox,1> local_17a0;
  FReadAccessScope local_1790;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_1778;
  undefined1 local_1760 [24];
  undefined8 *local_1748 [2];
  TReferenceControllerBase<1> *local_1738;
  undefined1 local_1718 [32];
  EVerticalAlignment local_16f8;
  undefined1 local_16f4;
  FSlotArgumentsMixin local_16f0;
  undefined8 *local_1660 [2];
  TReferenceControllerBase<1> *local_1650;
  undefined1 local_1630 [40];
  FSlotArgumentsMixin local_1608;
  undefined8 *local_1578 [2];
  TReferenceControllerBase<1> *local_1568;
  undefined1 local_1560 [24];
  undefined1 local_1548 [40];
  FSlotArgumentsMixin local_1520;
  undefined8 *local_1490 [2];
  TReferenceControllerBase<1> *local_1480;
  undefined1 local_1460 [40];
  FSlotArgumentsMixin local_1438;
  TAttribute<EVisibility> local_13a8;
  TAttribute<FText> local_1388;
  TAttribute<FText> local_1358;
  TAttribute<FText> local_1328;
  FArguments local_12f8;
  FArguments local_10f0;
  FArguments local_ee8;
  FArguments local_c40;
  FArguments local_900;
  FArguments local_5c0;
  undefined8 uStack_48;
  
  uStack_48 = 0x1427e5c78;
  local_1da8 = (FArguments *)((ulonglong)local_1da8 & 0xffffffff00000000);
  pSVar52 = *(SMultiBoxWidget **)&this->field_0x2b8;
  this_03 = (SMultiBoxWidget *)0x0;
  pSVar51 = pSVar52;
  if (pSVar52 == (SMultiBoxWidget *)0x0) {
LAB_1427e5cc6:
    bVar53 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    pSVar52 = pSVar51;
    if (bVar53) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  else {
    iVar13 = (int)pSVar52->_padding_;
    do {
      this_03 = (SMultiBoxWidget *)0x0;
      pSVar51 = (SMultiBoxWidget *)0x0;
      if (iVar13 == 0) goto LAB_1427e5cc6;
      LOCK();
      iVar17 = (int)pSVar52->_padding_;
      bVar53 = iVar13 == iVar17;
      if (bVar53) {
        *(int *)&pSVar52->_padding_ = iVar13 + 1;
        iVar17 = iVar13;
      }
      UNLOCK();
      iVar13 = iVar17;
    } while (!bVar53);
    this_03 = *(SMultiBoxWidget **)&this->field_0x2b0;
    pSVar51 = pSVar52;
    if (this_03 == (SMultiBoxWidget *)0x0) goto LAB_1427e5cc6;
  }
  pTVar18 = SMultiBoxWidget::GetMultiBox(this_03,&local_1840);
  local_1c20 = (pTVar18->SharedReferenceCount).ReferenceController;
  if (local_1c20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_1c20->SharedReferenceCount = (atomic<int>)((int)local_1c20->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1840.SharedReferenceCount.ReferenceController);
  puVar46 = &this->field_0x2c0;
  local_1c30 = (TSharedPtr<FMultiBlock_const_,1> *)puVar46;
  if ((*(longlong *)puVar46 == 0) &&
     (bVar53 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L""), bVar53)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  lVar2 = *(longlong *)puVar46;
  pTVar3 = *(TReferenceControllerBase<1> **)&this->field_0x2c8;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1c28 = pTVar3;
  if ((lVar2 == 0) &&
     (bVar53 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L""), bVar53)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  bVar53 = FText::IsEmpty((FText *)(lVar2 + 0x1d8));
  local_1d98 = (uint)!bVar53;
  local_1db0 = local_1d98 * 2;
  lVar19 = (**(code **)((longlong)*param_1 + 0xa0))
                     (param_1,FToolBarStyle::TypeName,*param_2,0,
                      in_stack_ffffffffffffe238 & 0xffffffffffffff00);
  if (lVar19 == 0) {
    pcVar48 = ".Block.Padding";
    if (*(char *)(lVar2 + 600) == '\0') {
      pcVar48 = ".Block.IndentedPadding";
    }
    puVar41 = (undefined8 *)
              (**(code **)((longlong)*param_1 + 0x48))
                        (param_1,*param_2,pcVar48,&FStyleDefaults::DefaultMargin,0);
    pFVar31 = (FArguments *)*puVar41;
    uVar55 = puVar41[1];
    local_1da8 = pFVar31;
    uStack_1da0 = uVar55;
    FVar22 = ISlateStyle::Join((FName)local_17f8,(char *)*param_2);
    local_1cb0 = ISlateStyle::GetWidgetStyle<FTextBlockStyle>
                           (param_1,*(FName *)FVar22,(char *)0x0,(FTextBlockStyle *)0x0);
  }
  else {
    pFVar20 = ISlateStyle::GetWidgetStyle<FToolBarStyle>
                        (param_1,*param_2,(char *)0x0,(FToolBarStyle *)0x0);
    lVar19 = 0x3670;
    if (*(char *)(lVar2 + 600) == '\0') {
      lVar19 = 0x3680;
    }
    pFVar31 = *(FArguments **)(&pFVar20->field_0x0 + lVar19);
    uVar55 = *(ulonglong *)((longlong)(&pFVar20->field_0x0 + lVar19) + 8);
    local_1cb0 = &pFVar20->LabelStyle;
    local_1da8 = pFVar31;
    uStack_1da0 = uVar55;
    if ((pFVar20->VerticalAlignmentOverride).bIsSet != false) {
      pTVar21 = TOptional<TEnumAsByte<enum_EVerticalAlignment>_>::GetValue
                          (&pFVar20->VerticalAlignmentOverride);
      local_1db0 = (EVerticalAlignment)pTVar21->Value;
    }
  }
  if (*(char *)(lVar2 + 0x264) != '\0') {
    pEVar23 = TOptional<enum_EVerticalAlignment>::GetValue((void *)(lVar2 + 0x260));
    local_1db0 = *pEVar23;
  }
  if ((this_03 == (SMultiBoxWidget *)0x0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar16)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pTVar18 = SMultiBoxWidget::GetMultiBox(this_03,&local_1830);
  EVar1 = pTVar18->Object->Type;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1830.SharedReferenceCount.ReferenceController);
  if (EVar1 == Menu) {
    local_1da8 = (FArguments *)CONCAT44(local_1da8._4_4_,local_1da8._0_4_ + __real_41600000);
    uStack_1da0 = CONCAT44(uStack_1da0._4_4_,(float)uStack_1da0 + __real_41000000);
    pFVar31 = local_1da8;
    uVar55 = uStack_1da0;
    if ((char)local_1d98 == '\0') {
      pFVar31 = (FArguments *)___xmm_3f8000003f8000003f8000003f800000;
      uVar55 = _UNK_15076b1f8;
    }
  }
  local_1cd0.TextData.Reference = *(ITextData **)(lVar2 + 0x1d8);
  if (local_1cd0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1cd0.TextData.Reference + 8))
              (local_1cd0.TextData.Reference,local_1c58);
  }
  local_1cd0.Flags = *(uint *)(lVar2 + 0x1e0);
  FText::FText((FText *)local_1d40);
  local_1d40[0x10] = false;
  local_1d18 = 0;
  local_1d28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_1d20.Data = (FScriptContainerElement *)0x0;
  if ((this_03 == (SMultiBoxWidget *)0x0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar16)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pTVar18 = SMultiBoxWidget::GetMultiBox(this_03,&local_1ad0);
  if (pTVar18->Object->Type == Menu) {
    if ((this_03 == (SMultiBoxWidget *)0x0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar16)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    if (this_03->bSearchable == false) goto LAB_1427e6125;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1ad0.SharedReferenceCount.ReferenceController);
    uStack_1da0 = uStack_1da0 & 0xffffffff00000000;
    local_1da8 = (FArguments *)SMultiBoxWidget::GetSearchText;
    local_1818 = SMultiBoxWidget::GetSearchText;
    uStack_1810 = uStack_1da0;
    TAttribute<FText>::Bind<SMultiBoxWidget>
              ((TAttribute<FText> *)local_1d40,this_03,(pmf_35343c35 *)&local_1818);
    if (bVar53) {
      local_1af0.Object = *(SWidget **)(lVar2 + 0x1c8);
      local_1af0.SharedReferenceCount.ReferenceController =
           *(TReferenceControllerBase<1> **)(lVar2 + 0x1d0);
      if (local_1af0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_1af0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_1af0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      FindTextBlockWidget(this,&local_1ae0,&local_1af0);
      local_1ad0.SharedReferenceCount.ReferenceController =
           local_1ae0.SharedReferenceCount.ReferenceController;
      if (local_1ae0.Object != SNullWidget::NullWidget.Object) {
        if (local_1ae0.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_1ae0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_1ae0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
               );
          UNLOCK();
        }
        pTVar24 = TAttribute<FText>::TAttribute<FText>(&local_1388,(TAttribute<FText> *)local_1d40);
        STextBlock::SetHighlightText((STextBlock *)local_1ae0.Object,pTVar24);
        pFVar25 = STextBlock::GetText((STextBlock *)local_1ae0.Object);
        FText::operator=(&local_1cd0,pFVar25);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1ae0.SharedReferenceCount.ReferenceController);
      }
      goto LAB_1427e6125;
    }
  }
  else {
LAB_1427e6125:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1ad0.SharedReferenceCount.ReferenceController);
  }
  (**(code **)(*(longlong *)this + 8))(this,&local_1c68);
  if ((this_03 == (SMultiBoxWidget *)0x0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar16)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  if ((*(longlong *)&this->field_0x2c0 == 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar16)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  local_1ac0.TextData.Reference = local_1cd0.TextData.Reference;
  bVar16 = *(bool *)(*(longlong *)&this->field_0x2c0 + 0xbc);
  if (local_1cd0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1cd0.TextData.Reference + 8))
              (local_1cd0.TextData.Reference,local_1c54);
  }
  local_1808.Object = local_1c68;
  local_1808.SharedReferenceCount.ReferenceController = pTStack_1c60;
  local_1ac0.Flags = local_1cd0.Flags;
  if (pTStack_1c60 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_1c60->SharedReferenceCount = (atomic<int>)((int)pTStack_1c60->SharedReferenceCount + 1);
    UNLOCK();
  }
  SMultiBoxWidget::AddElement(this_03,&local_1808,&local_1ac0,bVar16);
  if ((this_03 == (SMultiBoxWidget *)0x0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar16)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pTVar3 = (this_03->SearchTextWidget).SharedReferenceCount.ReferenceController;
  bVar12 = false;
  bVar16 = false;
  pSVar4 = (this_03->SearchTextWidget).Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  FVar50.ReferenceController = local_1bf0.SharedReferenceCount.ReferenceController;
  if (pSVar4 == (SSearchBox *)0x0) {
LAB_1427e6315:
    bVar14 = false;
    if (bVar16) goto LAB_1427e6321;
  }
  else {
    if ((this_03 == (SMultiBoxWidget *)0x0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar16)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    FVar50.ReferenceController =
         (this_03->SearchTextWidget).SharedReferenceCount.ReferenceController;
    local_1bf0.Object = (SWidget *)(this_03->SearchTextWidget).Object;
    if (FVar50.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar50.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar50.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_1bf0.SharedReferenceCount.ReferenceController = FVar50.ReferenceController;
    pSVar26 = TSharedPtr<SWidget,1>::operator->(&local_1bf0);
    local_1cc0 = (SWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::FSharedReferencer<1>
              (&local_1cb8,&(pSVar26->ParentWidgetPtr).WeakReferenceCount);
    if (local_1cb8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      local_1cc0 = (pSVar26->ParentWidgetPtr).Object;
    }
    if ((local_1cc0 == (SWidget *)0x0) || (local_1cc0 != *(SWidget **)(lVar2 + 0x1c8))) {
      bVar12 = true;
      bVar16 = true;
      goto LAB_1427e6315;
    }
    bVar14 = true;
    bVar12 = true;
LAB_1427e6321:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1cb8.ReferenceController);
  }
  if (bVar12) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar50.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  if (bVar14) {
    if ((this_03 == (SMultiBoxWidget *)0x0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar16)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pTVar3 = pTStack_1c60;
    local_1ab0.Object = local_1c68;
    local_1ab0.SharedReferenceCount.ReferenceController = pTStack_1c60;
    if (pTStack_1c60 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTStack_1c60->SharedReferenceCount =
           (atomic<int>)((int)pTStack_1c60->SharedReferenceCount + 1);
      UNLOCK();
    }
    TSharedPtr<SWidget,1>::operator=(&this_03->SearchBlockWidget,&local_1ab0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  FVar50.ReferenceController = SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  pSVar47 = (SImage *)SNullWidget::NullWidget.Object;
  if (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  FVar49.ReferenceController = FVar50.ReferenceController;
  if (*(char *)(lVar2 + 0x238) != '\0') {
    this_00 = TAttribute<FSlateIcon>::Get((TAttribute<FSlateIcon> *)(lVar2 + 0x218));
    pFVar27 = FSlateIcon::GetIcon(this_00);
    if (pFVar27->ResourceName == (FName)0x0) {
      pUVar5 = (pFVar27->ResourceObject).field0_0x0.DebugPtr;
      lVar19 = 0;
      if (pUVar5 != (UObject *)0x0) {
        lVar19 = *(longlong *)&pUVar5->field_0x18;
      }
      if (lVar19 == 0) goto LAB_1427e6525;
    }
    pFVar28 = SImage::FArguments::FArguments(&local_ee8);
    local_19b8 = CONCAT22(local_19b8._2_2_,3);
    local_1a18 = local_19b8;
    local_1a28._0_8_ = ___xmm_3f8000003f800000000000003f800000;
    local_1a28._8_8_ = _UNK_15090c6d8;
    local_1a14 = 1;
    local_1a10 = 0;
    uStack_1a08 = 0;
    local_1a00 = 0;
    pFVar28 = SImage::FArguments::ColorAndOpacity
                        (pFVar28,(TAttribute<FSlateColor> *)&local_1a28._s_0);
    local_1a80.bIsSet = true;
    local_1a80.Getter._16_8_ = 0;
    local_1a80.Getter._0_8_ = 0;
    local_1a80.Getter._8_8_ = 0;
    local_1a80.Value = pFVar27;
    pFVar28 = SImage::FArguments::Image(pFVar28,&local_1a80);
    this_01 = MakeTDecl<SImage,RequiredArgs::T0RequiredArgs>
                        (&local_1778,"SImage",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SWidgetBlock.cpp"
                         ,0xb6,&local_1db8);
    pTVar29 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                        (this_01,&local_17d0,pFVar28);
    FVar49.ReferenceController = (pTVar29->SharedReferenceCount).ReferenceController;
    pSVar47 = pTVar29->Object;
    if (FVar49.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar49.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar49.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar50.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_17d0.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1778._Widget.SharedReferenceCount.ReferenceController);
    SImage::FArguments::~FArguments(&local_ee8);
  }
LAB_1427e6525:
  fVar54 = (float)(**(code **)((longlong)*param_1 + 0x28))
                            (param_1,*param_2,".MenuIconSize",__real_41800000,0);
  local_19a0 = true;
  pFVar33 = (FSlot *)0x0;
  local_1998._16_8_ = 0;
  local_1998._0_8_ = 0;
  local_1998._8_8_ = 0;
  local_19b0 = (code *)pFVar31;
  uStack_19a8 = uVar55;
  pTVar30 = TPaddingSingleWidgetSlotMixin<TSingleWidgetChildrenWithBasicLayoutSlot<0>,0>::Padding
                      ((TPaddingSingleWidgetSlotMixin<TSingleWidgetChildrenWithBasicLayoutSlot<0>,0>
                        *)&this->field_0x260,(TAttribute<FMargin> *)&local_19b0);
  pFVar31 = SHorizontalBox::FArguments::FArguments(&local_10f0);
  local_1b00 = 0;
  pTStack_1af8 = (TReferenceControllerBase<1> *)0x0;
  local_1a90 = 0;
  pTStack_1a88 = (TReferenceControllerBase<1> *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &FMultiBoxSettings::ToolTipConstructor,&local_1790);
  pFVar32 = pFVar33;
  if (FMultiBoxSettings::ToolTipConstructor._16_4_ != 0) {
    pFVar32 = (FSlot *)FMultiBoxSettings::ToolTipConstructor._8_8_;
  }
  (**(code **)(*(longlong *)pFVar32 + 0x60))
            (pFVar32,&local_1be0,lVar2 + 0x1e8,&local_1a90,&local_1b00,
             in_stack_ffffffffffffe240 & 0xffffffffffffff00);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_1790);
  local_19f8.Value.Object = (IToolTip *)(local_1be0 + 0x2a8);
  if (local_1be0 == 0) {
    local_19f8.Value.Object = (IToolTip *)pFVar33;
  }
  local_19f8.Value.SharedReferenceCount.ReferenceController = local_1bd8;
  if (local_1bd8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_1bd8->SharedReferenceCount = (atomic<int>)((int)local_1bd8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_19f8.bIsSet = true;
  local_19f8.Getter._16_8_ = 0;
  local_19f8.Getter._0_8_ = 0;
  local_19f8.Getter._8_8_ = 0;
  local_1da8 = TSlateBaseNamedArgs<SHorizontalBox>::ToolTip
                         ((TSlateBaseNamedArgs<SHorizontalBox> *)pFVar31,&local_19f8);
  pFVar32 = ::operator_new(0x58);
  if (pFVar32 != (FSlot *)0x0) {
    *(undefined8 *)pFVar32 = 0;
    *(undefined8 *)&pFVar32->field_0x8 = 0;
    *(undefined8 *)&pFVar32->field_0x10 = 0;
    *(undefined8 *)&pFVar32->field_0x18 = 0;
    *(undefined8 *)&pFVar32->field_0x20 = 0;
    *(undefined8 *)&pFVar32->field_0x28 = 0;
    *(undefined8 *)&pFVar32->field_0x30 = 0;
    *(undefined8 *)&pFVar32->field_0x38 = 0;
    *(undefined8 *)&pFVar32->field_0x40 = 0;
    *(undefined8 *)&pFVar32->field_0x48 = 0;
    *(undefined8 *)&pFVar32->field_0x50 = 0;
    pFVar33 = SHorizontalBox::FSlot::FSlot(pFVar32);
  }
  local_1c48 = pFVar33;
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_1490,(FSlot *)&local_1c48);
  pFVar34 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth((FSlotArguments *)local_1490);
  local_1980.bIsSet = true;
  local_1980.Value.Left = ___xmm_0000000040c000000000000040000000;
  local_1980.Value.Top = _UNK_1509579a4;
  local_1980.Value.Right = _UNK_1509579a8;
  local_1980.Value.Bottom = _UNK_1509579ac;
  local_1980.Getter._16_8_ = 0;
  local_1980.Getter._0_8_ = 0;
  local_1980.Getter._8_8_ = 0;
  pFVar34 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)&pFVar34->field_0x18,&local_1980);
  pFVar35 = SBox::FArguments::FArguments(&local_900);
  local_1bc0.bIsSet = true;
  local_1bc0.Value = EVisibility::Collapsed;
  if (pSVar47 != (SImage *)SNullWidget::NullWidget.Object) {
    local_1bc0.Value = EVisibility::Visible;
  }
  local_1bc0.Getter._0_8_ = 0;
  local_1bc0.Getter._8_8_ = 0;
  local_1bc0.Getter._16_8_ = 0;
  pFVar35 = TSlateBaseNamedArgs<SBox>::Visibility((TSlateBaseNamedArgs<SBox> *)pFVar35,&local_1bc0);
  local_1b20.bIsSet = true;
  local_1b20.Getter._16_8_ = 0;
  local_1b20.Value.Size = fVar54 + __real_40000000;
  local_1b20.Getter._0_8_ = 0;
  local_1b20.Getter._8_8_ = 0;
  pFVar35 = SBox::FArguments::WidthOverride(pFVar35,&local_1b20);
  local_1ba0.bIsSet = true;
  local_1ba0.Getter._16_8_ = 0;
  local_1ba0.Getter._0_8_ = 0;
  local_1ba0.Getter._8_8_ = 0;
  local_1ba0.Value.Size = fVar54;
  pFVar35 = SBox::FArguments::HeightOverride(pFVar35,&local_1ba0);
  pFVar35->_HAlign = HAlign_Center;
  pFVar35->_VAlign = VAlign_Center;
  pFVar36 = SBox::FArguments::FArguments(&local_c40);
  local_1b80.bIsSet = true;
  local_1b80.Getter._16_8_ = 0;
  local_1b80.Getter._0_8_ = 0;
  local_1b80.Getter._8_8_ = 0;
  local_1b80.Value.Size = fVar54;
  pFVar36 = SBox::FArguments::WidthOverride(pFVar36,&local_1b80);
  local_1b60.bIsSet = true;
  local_1b60.Getter._16_8_ = 0;
  local_1b60.Getter._0_8_ = 0;
  local_1b60.Getter._8_8_ = 0;
  local_1b60.Value.Size = fVar54;
  pFVar36 = SBox::FArguments::HeightOverride(pFVar36,&local_1b60);
  if (FVar49.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar49.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar49.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_17f0 = (pFVar36->_Content).Widget.Object;
  pTStack_17e8 = (pFVar36->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar36->_Content).Widget.Object = (SWidget *)pSVar47;
  (pFVar36->_Content).Widget.SharedReferenceCount.ReferenceController = FVar49.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_17e8);
  FLLMScope::FLLMScope(&local_1d84,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1bc8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1d50,&local_1bc8,true);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_1860,"SBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SWidgetBlock.cpp"
             ,0xcf,&local_1db7);
  FMemScope::~FMemScope(&local_1d50);
  FLLMScope::~FLLMScope(&local_1d84);
  pTVar37 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1860,&local_18d0,pFVar36);
  pTVar3 = (pTVar37->SharedReferenceCount).ReferenceController;
  local_1c88 = pTVar37->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar6 = (pFVar35->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar35->_Content).Widget.Object = (SWidget *)local_1c88;
  (pFVar35->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar3;
  pTStack_1c80 = pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  FLLMScope::FLLMScope(&local_1d94,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1d48 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1d80,&local_1d48,true);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_1878,"SBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SWidgetBlock.cpp"
             ,200,&local_1db6);
  FMemScope::~FMemScope(&local_1d80);
  FLLMScope::~FLLMScope(&local_1d94);
  pTVar37 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1878,&local_18e0,pFVar35);
  local_1aa0.Object = (SWidget *)pTVar37->Object;
  local_1d50 = (FMemScope)(pTVar37->SharedReferenceCount).ReferenceController;
  if (local_1d50 != (FMemScope)0x0) {
    LOCK();
    *(atomic<int> *)((longlong)local_1d50 + 8) =
         (atomic<int>)((int)*(atomic<int> *)((longlong)local_1d50 + 8) + 1);
    UNLOCK();
  }
  local_1aa0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)local_1d50;
  pFVar34 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)pFVar34,&local_1aa0);
  local_1d48 = (FName)SHorizontalBox::FArguments::operator+(local_1da8,pFVar34);
  pFVar32 = ::operator_new(0x58);
  if (pFVar32 == (FSlot *)0x0) {
    local_1d78 = (FArguments *)0x0;
  }
  else {
    *(undefined8 *)pFVar32 = 0;
    *(undefined8 *)&pFVar32->field_0x8 = 0;
    *(undefined8 *)&pFVar32->field_0x10 = 0;
    *(undefined8 *)&pFVar32->field_0x18 = 0;
    *(undefined8 *)&pFVar32->field_0x20 = 0;
    *(undefined8 *)&pFVar32->field_0x28 = 0;
    *(undefined8 *)&pFVar32->field_0x30 = 0;
    *(undefined8 *)&pFVar32->field_0x38 = 0;
    *(undefined8 *)&pFVar32->field_0x40 = 0;
    *(undefined8 *)&pFVar32->field_0x48 = 0;
    *(undefined8 *)&pFVar32->field_0x50 = 0;
    local_1d78 = (FArguments *)SHorizontalBox::FSlot::FSlot(pFVar32);
  }
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_1578,(FSlot *)&local_1d78);
  local_1950.bIsSet = true;
  local_1950.Getter._16_8_ = 0;
  local_1950.Value.Left = ___xmm_0000000040c000000000000040000000;
  local_1950.Value.Top = _UNK_1509579a4;
  local_1950.Value.Right = _UNK_1509579a8;
  local_1950.Value.Bottom = _UNK_1509579ac;
  local_1950.Getter._0_8_ = 0;
  local_1950.Getter._8_8_ = 0;
  pFVar34 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)local_1560,&local_1950);
  local_1d80 = (FMemScope)SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar34);
  local_1d78 = SHorizontalBox::FArguments::FArguments(&local_12f8);
  local_1ca7 = 1;
  local_1ca8 = (uchar)EVisibility::Collapsed;
  if ((char)local_1d98 != '\0') {
    local_1ca8 = (uchar)EVisibility::Visible;
  }
  local_1c90 = 0;
  local_1ca0 = (undefined1  [8])0x0;
  pvStack_1c98 = (void *)0x0;
  *(uchar *)&local_1d78->_padding_ = local_1ca8;
  *(undefined1 *)((longlong)&local_1d78->_padding_ + 1) = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_1d78->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1ca0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1ca0);
  if (pvStack_1c98 != (void *)0x0) {
    FMemory::Free(pvStack_1c98);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1ca0);
  pFVar32 = ::operator_new(0x58);
  local_1bf8 = (FSlotArguments *)0x0;
  if (pFVar32 != (FSlot *)0x0) {
    *(undefined8 *)pFVar32 = 0;
    *(undefined8 *)&pFVar32->field_0x8 = 0;
    *(undefined8 *)&pFVar32->field_0x10 = 0;
    *(undefined8 *)&pFVar32->field_0x18 = 0;
    *(undefined8 *)&pFVar32->field_0x20 = 0;
    *(undefined8 *)&pFVar32->field_0x28 = 0;
    *(undefined8 *)&pFVar32->field_0x30 = 0;
    *(undefined8 *)&pFVar32->field_0x38 = 0;
    *(undefined8 *)&pFVar32->field_0x40 = 0;
    *(undefined8 *)&pFVar32->field_0x48 = 0;
    *(undefined8 *)&pFVar32->field_0x50 = 0;
    local_1bf8 = (FSlotArguments *)SHorizontalBox::FSlot::FSlot(pFVar32);
  }
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_1660,(FSlot *)&local_1bf8);
  pFVar34 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth((FSlotArguments *)local_1660);
  if (bVar53) {
    puVar41 = &local_17c0;
    local_17c0 = 0;
    uStack_17b8 = 0;
  }
  else {
    puVar41 = &local_17e0;
    local_17e0 = ___xmm_00000000408000000000000000000000;
    uStack_17d8 = _UNK_150957978;
  }
  local_1920.Value._0_8_ = *puVar41;
  local_1920.Value._8_8_ = puVar41[1];
  local_1920.bIsSet = true;
  local_1920.Getter._16_8_ = 0;
  local_1920.Getter._0_8_ = 0;
  local_1920.Getter._8_8_ = 0;
  pFVar34 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)&pFVar34->field_0x18,&local_1920);
  if (local_1c50 != (undefined4 *)&pFVar34->field_0x50) {
    *(undefined4 *)&pFVar34->field_0x50 = 2;
    pFVar34->field_0x54 = 1;
  }
  pFVar45 = (FSlotArguments *)0x0;
  if (pFVar34 != (FSlotArguments *)0xffffffffffffffb8) {
    pFVar45 = pFVar34;
  }
  pFVar38 = STextBlock::FArguments::FArguments(&local_5c0);
  pFVar38->_TextStyle = local_1cb0;
  pTVar24 = TAttribute<FText>::TAttribute<FText><FText>(&local_1358,(FText *)(lVar2 + 0x1d8));
  pFVar38 = STextBlock::FArguments::Text(pFVar38,pTVar24);
  pTVar24 = TAttribute<FText>::TAttribute<FText>(&local_1328,(TAttribute<FText> *)local_1d40);
  FText::operator=(&(pFVar38->_HighlightText).Value,&pTVar24->Value);
  (pFVar38->_HighlightText).bIsSet = pTVar24->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar38->_HighlightText).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&pTVar24->Getter);
  TAttribute<FText>::~TAttribute<FText>(pTVar24);
  pIVar39 = FAppStyle::Get();
  pcVar10 = *(code **)((longlong)*pIVar39 + 0x40);
  pFVar40 = ::FName::FName(&local_1848,"Colors.ForegroundHover");
  puVar41 = (undefined8 *)
            (*pcVar10)(pIVar39,local_1760,*pFVar40,0,&FStyleDefaults::DefaultSlateColor,0);
  local_1d10 = *puVar41;
  uStack_1d08 = puVar41[1];
  local_1d00 = *(undefined4 *)(puVar41 + 2);
  local_1cfc = 1;
  local_1ce8 = 0;
  local_1cf8 = (undefined1  [8])0x0;
  FStack_1cf0.Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)&(pFVar38->_ColorAndOpacity).Value.SpecifiedColor.field0_0x0 = local_1d10;
  *(undefined8 *)((longlong)&(pFVar38->_ColorAndOpacity).Value.SpecifiedColor.field0_0x0 + 8) =
       uStack_1d08;
  (pFVar38->_ColorAndOpacity).Value.ColorUseRule = (char)local_1d00;
  (pFVar38->_ColorAndOpacity).Value.ColorTableId = (char)((uint)local_1d00 >> 8);
  *(short *)&(pFVar38->_ColorAndOpacity).Value.field_0x12 = (short)((uint)local_1d00 >> 0x10);
  (pFVar38->_ColorAndOpacity).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar38->_ColorAndOpacity).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1cf8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1cf8,
             (FWriteAccessScope *)&local_1a58);
  if (((int)local_1ce8 != 0) && (FStack_1cf0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1cf0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1cf0,0,0,0x10);
    local_1ce8 = local_1ce8 & 0xffffffff00000000;
  }
  if (local_1a58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1a58.Accessor,&local_1a58);
  }
  if (FStack_1cf0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1cf0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1cf8);
  FLLMScope::FLLMScope(&local_1d90,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1c10 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1c18,&local_1c10,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_1890,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SWidgetBlock.cpp"
             ,0xe2,&local_1db5);
  FMemScope::~FMemScope(&local_1c18);
  FLLMScope::~FLLMScope(&local_1d90);
  pTVar42 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1890,&local_18f0,pFVar38);
  pTVar6 = (pTVar42->SharedReferenceCount).ReferenceController;
  local_1d60 = pTVar42->Object;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1d58.ReferenceController = pTVar6;
  if ((STextBlock **)&pFVar45->field_0x8 != &local_1d60) {
    *(STextBlock **)&pFVar45->field_0x8 = local_1d60;
    local_1d60 = (STextBlock *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar45->field_0x10,&local_1d58);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1d58.ReferenceController);
  pFVar31 = SHorizontalBox::FArguments::operator+(local_1d78,pFVar45);
  FLLMScope::FLLMScope(&local_1d8c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1bd0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1c08,&local_1bd0,true);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
            (&local_18a8,"SHorizontalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SWidgetBlock.cpp"
             ,0xdb,&local_1db4);
  FMemScope::~FMemScope(&local_1c08);
  FLLMScope::~FLLMScope(&local_1d8c);
  pTVar43 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_18a8,&local_17a0,pFVar31);
  FVar15 = local_1d80;
  pTVar7 = (pTVar43->SharedReferenceCount).ReferenceController;
  local_1d70 = pTVar43->Object;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1d68.ReferenceController = pTVar7;
  if ((SHorizontalBox **)((longlong)local_1d80 + 8) != &local_1d70) {
    *(SHorizontalBox **)((longlong)local_1d80 + 8) = local_1d70;
    local_1d70 = (SHorizontalBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)local_1d80 + 0x10),&local_1d68);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1d68.ReferenceController);
  pFVar31 = SHorizontalBox::FArguments::operator+((FArguments *)local_1d48,(FSlotArguments *)FVar15)
  ;
  pFVar32 = ::operator_new(0x58);
  local_1c00 = (FSlot *)0x0;
  if (pFVar32 != (FSlot *)0x0) {
    *(undefined8 *)pFVar32 = 0;
    *(undefined8 *)&pFVar32->field_0x8 = 0;
    *(undefined8 *)&pFVar32->field_0x10 = 0;
    *(undefined8 *)&pFVar32->field_0x18 = 0;
    *(undefined8 *)&pFVar32->field_0x20 = 0;
    *(undefined8 *)&pFVar32->field_0x28 = 0;
    *(undefined8 *)&pFVar32->field_0x30 = 0;
    *(undefined8 *)&pFVar32->field_0x38 = 0;
    *(undefined8 *)&pFVar32->field_0x40 = 0;
    *(undefined8 *)&pFVar32->field_0x48 = 0;
    *(undefined8 *)&pFVar32->field_0x50 = 0;
    local_1c00 = SHorizontalBox::FSlot::FSlot(pFVar32);
  }
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_1748,(FSlot *)&local_1c00);
  local_16f8 = local_1db0;
  local_16f4 = 1;
  local_1b40.Getter._16_8_ = 0;
  local_1b40.Value = 1.0;
  local_1b40.bIsSet = true;
  local_1b40.Getter._0_8_ = 0;
  local_1b40.Getter._8_8_ = 0;
  pFVar34 = SHorizontalBox::FSlot::FSlotArguments::FillWidth
                      ((FSlotArguments *)local_1748,&local_1b40);
  local_1cd8.ReferenceController = *(TReferenceControllerBase<1> **)(lVar2 + 0x1d0);
  local_1ce0 = *(undefined8 *)(lVar2 + 0x1c8);
  if (local_1cd8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1cd8.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_1cd8.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((undefined8 *)&pFVar34->field_0x8 != &local_1ce0) {
    *(undefined8 *)&pFVar34->field_0x8 = local_1ce0;
    local_1ce0 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar34->field_0x10,&local_1cd8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1cd8.ReferenceController);
  pFVar31 = SHorizontalBox::FArguments::operator+(pFVar31,pFVar34);
  FLLMScope::FLLMScope(&local_1d88,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1c40 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1c38,&local_1c40,true);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
            (&local_18c0,"SHorizontalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SWidgetBlock.cpp"
             ,0xc2,local_1db3);
  FMemScope::~FMemScope(&local_1c38);
  FLLMScope::~FLLMScope(&local_1d88);
  pTVar43 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_18c0,&local_17b0,pFVar31);
  puVar46 = &pTVar30->field_0x20;
  pSVar8 = pTVar43->Object;
  pTVar9 = (pTVar43->SharedReferenceCount).ReferenceController;
  if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
    FSlotBase::DetatchParentFromContent((FSlotBase *)puVar46);
  }
  else {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
    FSlotBase::DetatchParentFromContent((FSlotBase *)puVar46);
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar11 = *(TReferenceControllerBase<1> **)&pTVar30->field_0x38;
  *(SHorizontalBox **)&pTVar30->field_0x30 = pSVar8;
  *(TReferenceControllerBase<1> **)&pTVar30->field_0x38 = pTVar9;
  local_1c78 = pSVar8;
  pTStack_1c70 = pTVar9;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)puVar46);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_17b0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18c0._Widget.SharedReferenceCount.ReferenceController);
  TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_16f0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1718);
  if ((void *)local_1718._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1718._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1718);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1738);
  if (local_1748[0] != (undefined8 *)0x0) {
    (**(code **)*local_1748[0])(local_1748[0],1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_17a0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18a8._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18f0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1890._Widget.SharedReferenceCount.ReferenceController);
  STextBlock::FArguments::~FArguments(&local_5c0);
  TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_1608);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1630);
  if ((void *)local_1630._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1630._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1630);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1650);
  if (local_1660[0] != (undefined8 *)0x0) {
    (**(code **)*local_1660[0])(local_1660[0],1);
  }
  DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_12f8._Slots.AllocatorInstance.Data,local_12f8._Slots.ArrayNum);
  if ((FSlotArguments *)local_12f8._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_12f8._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_12f8);
  TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_1520);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1548);
  if ((void *)local_1548._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1548._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1548);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1568);
  if (local_1578[0] != (undefined8 *)0x0) {
    (**(code **)*local_1578[0])(local_1578[0],1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_1d50);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18e0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1878._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18d0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1860._Widget.SharedReferenceCount.ReferenceController);
  SBox::FArguments::~FArguments(&local_c40);
  SBox::FArguments::~FArguments(&local_900);
  TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_1438);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1460);
  if ((void *)local_1460._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1460._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1460);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1480);
  if (local_1490[0] != (undefined8 *)0x0) {
    (**(code **)*local_1490[0])(local_1490[0],1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1bd8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1a88);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1af8);
  DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_10f0._Slots.AllocatorInstance.Data,local_10f0._Slots.ArrayNum);
  if ((FSlotArguments *)local_10f0._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_10f0._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_10f0);
  this_02 = TSharedPtr<FMultiBlock_const_,1>::operator->(local_1c30);
  pTVar44 = FMultiBlock::GetVisibilityOverride(this_02,&local_13a8);
  SCompoundWidget::SetVisibility((SCompoundWidget *)&this->field_0x8,pTVar44);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar49.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1c60);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_1d28,(FWriteAccessScope *)&local_1a40);
  if (((int)local_1d18 != 0) && (FStack_1d20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1d20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1d20,0,0,0x10);
    local_1d18 = local_1d18 & 0xffffffff00000000;
  }
  if (local_1a40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1a40.Accessor,&local_1a40);
  }
  if (FStack_1d20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1d20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1d28.AccessDetector);
  if ((ITextData *)local_1d40._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_1d40._0_8_ + 0x10))();
  }
  if (local_1cd0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1cd0.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1c28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1c20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar52);
  return;
}

// Construct @ 1427f0450

void __thiscall SWidgetBlock::Construct(SWidgetBlock *this,FArguments *param_1)

{
  return;
}

// FindTextBlockWidget @ 142809de0

TSharedRef<SWidget,1> * __thiscall
SWidgetBlock::FindTextBlockWidget
          (SWidgetBlock *this,TSharedRef<SWidget,1> *__return_storage_ptr__,
          TSharedRef<SWidget,1> *param_1)

{
  atomic<int> *paVar1;
  TReferenceControllerBase<1> *pTVar2;
  FSharedReferencer<1> FVar3;
  int iVar4;
  FName *pFVar5;
  FName FVar6;
  longlong *plVar7;
  TSharedRef<SWidget,1> *pTVar8;
  int iVar9;
  FName local_res18 [2];
  TSharedRef<SWidget,1> local_48;
  undefined1 local_38 [16];
  
  pFVar5 = ::FName::FName(local_res18,L"STextBlock");
  FVar6 = SWidget::GetType(param_1->Object);
  if (*(FName *)FVar6 == *pFVar5) {
    __return_storage_ptr__->Object = param_1->Object;
    pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return __return_storage_ptr__;
  }
  plVar7 = (longlong *)(**(code **)(param_1->Object->_padding_ + 0x180))();
  iVar4 = (**(code **)*plVar7)(plVar7);
  iVar9 = 0;
  if (0 < iVar4) {
    do {
      pTVar8 = (TSharedRef<SWidget,1> *)(**(code **)(*plVar7 + 0x10))(plVar7,local_38,iVar9);
      FindTextBlockWidget(this,&local_48,pTVar8);
      if (local_48.Object != SNullWidget::NullWidget.Object) {
        __return_storage_ptr__->Object = local_48.Object;
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
             local_48.SharedReferenceCount.ReferenceController;
        if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_48.SharedReferenceCount.ReferenceController);
        goto LAB_142809ee1;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_48.SharedReferenceCount.ReferenceController);
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar4);
  }
  __return_storage_ptr__->Object = SNullWidget::NullWidget.Object;
  FVar3 = SNullWidget::NullWidget.SharedReferenceCount;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  if (FVar3.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar3.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
LAB_142809ee1:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// OnMouseEnter @ 14282a330

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SWidgetBlock::OnMouseEnter(SWidgetBlock *this,FGeometry *param_1,FPointerEvent *param_2)

{
  EMultiBoxType EVar1;
  code *pcVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  TSharedRef<FMultiBox_const_,1> *pTVar5;
  SMultiBoxWidget *pSVar6;
  SMultiBoxWidget *pSVar7;
  SMultiBoxWidget *this_00;
  bool bVar8;
  TSharedPtr<SMenuAnchor_const_,1> local_38;
  TSharedRef<FMultiBox_const_,1> local_28;
  
  pSVar7 = *(SMultiBoxWidget **)&this->field_0x2b0;
  this_00 = (SMultiBoxWidget *)0x0;
  pSVar6 = pSVar7;
  if (pSVar7 != (SMultiBoxWidget *)0x0) {
    aVar3 = *(atomic<int> *)&pSVar7->_padding_;
    do {
      pSVar6 = this_00;
      if (aVar3 == (atomic<int>)0x0) goto LAB_14282a385;
      LOCK();
      aVar4 = *(atomic<int> *)&pSVar7->_padding_;
      bVar8 = aVar3 == aVar4;
      if (bVar8) {
        *(atomic<int> *)&pSVar7->_padding_ = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar8);
    this_00 = *(SMultiBoxWidget **)&this->field_0x2a8;
    pSVar6 = pSVar7;
    if (this_00 != (SMultiBoxWidget *)0x0) goto LAB_14282a3ab;
  }
LAB_14282a385:
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  pSVar7 = pSVar6;
  if (bVar8) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_14282a3ab:
  pTVar5 = SMultiBoxWidget::GetMultiBox(this_00,&local_28);
  EVar1 = pTVar5->Object->Type;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  if (EVar1 == Menu) {
    if ((this_00 == (SMultiBoxWidget *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    SMenuOwner::GetOpenMenu((SMenuOwner *)this_00,&local_38);
    if (local_38.Object != (SMenuAnchor *)0x0) {
      if ((local_38.Object == (SMenuAnchor *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      bVar8 = SMenuAnchor::IsOpen(local_38.Object);
      if (bVar8) {
        if ((this_00 == (SMultiBoxWidget *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        SMenuOwner::CloseSummonedMenus((SMenuOwner *)this_00);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
  }
  SWidget::OnMouseEnter((SWidget *)this,param_1,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar7);
  return;
}

