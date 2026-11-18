// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 10

// ~SButtonRowBlock @ 1427ba390

void __thiscall SButtonRowBlock::~SButtonRowBlock(SButtonRowBlock *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ToggleButton).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  plVar3 = (longlong *)this->_padding_;
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
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)&this->_padding_);
  return;
}

// BuildMultiBlockWidget @ 1427d7950

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SButtonRowBlock::BuildMultiBlockWidget(SButtonRowBlock *this,ISlateStyle *param_1,FName *param_2)

{
  undefined1 *puVar1;
  EUserInterfaceActionType EVar2;
  FMultiBlock *this_00;
  UObject *pUVar3;
  SVerticalBox *pSVar4;
  SCheckBox *pSVar5;
  code *pcVar6;
  atomic<int> aVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  float fVar12;
  undefined8 uVar13;
  ISlateStyle *pIVar14;
  SWidget *pSVar15;
  FSharedReferencer<1> FVar16;
  undefined8 uVar17;
  bool bVar18;
  atomic<int> aVar19;
  FText *pFVar20;
  undefined8 *puVar21;
  FSlateBrush *pFVar22;
  FSlateBrush *pFVar23;
  FArguments *pFVar24;
  TAttribute<FSlateBrush_const_*> *pTVar25;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> *pTVar26;
  TSharedRef<SImage,1> *pTVar27;
  longlong lVar28;
  TSharedPtr<FUICommandInfo_const_,1> *this_01;
  FArguments *pFVar29;
  FSlotArguments *pFVar30;
  FArguments *pFVar31;
  FString *pFVar32;
  FTextBlockStyle *pFVar33;
  TSharedRef<STextBlock,1> *pTVar34;
  TSharedRef<SVerticalBox,1> *pTVar35;
  FUICommandInfo *pFVar36;
  FArguments *pFVar37;
  FName FVar38;
  TSharedRef<SWidget,1> *pTVar39;
  ulong64 uVar40;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> *this_02;
  TSharedRef<SButton,1> *pTVar41;
  FArguments *pFVar42;
  TAttribute<FText> *this_03;
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs> *this_04;
  TSharedRef<SCheckBox,1> *pTVar43;
  TSharedRef<SWidget_const_,1> *pTVar44;
  FSlotArguments *pFVar45;
  ForAnyElementType FVar46;
  SMultiBoxWidget *pSVar47;
  SMultiBoxWidget *pSVar48;
  FSlateIcon *this_05;
  FSharedReferencer<1> FVar49;
  byte bVar50;
  SMultiBoxWidget *pSVar51;
  SMultiBoxWidget *pSVar52;
  TReferenceControllerBase<1> *pTVar53;
  FSlotArguments *pFVar54;
  TStatId *pTVar55;
  bool bVar56;
  uint local_res8;
  undefined4 uStackX_c;
  ISlateStyle *local_res10;
  TReferenceControllerBase<1> *local_res18;
  T0RequiredArgs local_res20 [8];
  TSharedPtr<FUICommandInfo_const_,1> local_1f58;
  T0RequiredArgs local_1f48;
  T0RequiredArgs local_1f47;
  T0RequiredArgs local_1f46;
  T0RequiredArgs local_1f45;
  T0RequiredArgs local_1f44 [12];
  FName local_1f38;
  undefined4 uStack_1f30;
  uint uStack_1f2c;
  FLLMScope local_1f28;
  FLLMScope local_1f24;
  STextBlock *local_1f20;
  FSharedReferencer<1> local_1f18;
  undefined1 local_1f10 [24];
  undefined1 local_1ef8 [8];
  ForAnyElementType FStack_1ef0;
  ulonglong local_1ee8;
  undefined1 local_1ee0 [24];
  undefined1 local_1ec8 [8];
  ForAnyElementType FStack_1ec0;
  ulonglong local_1eb8;
  TSharedRef<FMultiBox_const_,1> local_1eb0;
  TSharedRef<SWidget,1> local_1e98;
  TSharedRef<SWidget,1> local_1e88;
  FText local_1e78;
  bool local_1e68;
  undefined1 local_1e60 [8];
  ForAnyElementType FStack_1e58;
  int local_1e50;
  TSharedRef<SWidget,1> local_1e48;
  undefined1 local_1e38 [4];
  undefined1 local_1e34 [4];
  undefined1 local_1e30 [8];
  undefined4 local_1e28 [2];
  undefined4 local_1e20 [2];
  undefined4 local_1e18 [2];
  FName local_1e10;
  FMemScope local_1e08;
  TReferenceControllerBase<1> *local_1e00;
  FSlateBrush *local_1df8;
  FSlateBrush *local_1df0;
  undefined1 local_1de8 [4];
  FName local_1de4;
  FMemScope local_1dd8;
  FString local_1dd0;
  undefined1 local_1dc0 [8];
  undefined1 local_1db8 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1db0;
  FDelegateAllocation FStack_1da8;
  undefined1 local_1d98 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1d90;
  FDelegateAllocation FStack_1d88;
  FName local_1d78;
  TAttribute<FText> local_1d70;
  FString local_1d40;
  TAttribute<FMargin> local_1d30;
  FText local_1d00;
  TSharedPtr<SWidget,1> local_1cf0;
  TSharedRef<SWidget,1> local_1cd8;
  TSharedRef<SWidget,1> local_1cc8;
  TSharedRef<SWidget,1> local_1cb8;
  TSharedRef<SWidget,1> local_1ca8;
  FDestructionSentinel local_1c98;
  FDestructionSentinel local_1c80;
  FLinearColor_u_0 local_1c68;
  undefined4 local_1c58;
  undefined1 local_1c54;
  undefined8 local_1c50;
  undefined8 uStack_1c48;
  undefined8 local_1c40;
  FDestructionSentinel local_1c38;
  FDestructionSentinel local_1c20;
  undefined1 *local_1c08;
  FDestructionSentinel local_1c00;
  FDelegateAllocation *local_1be8;
  FDestructionSentinel local_1be0;
  undefined1 *local_1bc8;
  FDestructionSentinel local_1bc0;
  FDelegateAllocation *local_1ba8;
  FDestructionSentinel local_1ba0;
  undefined1 *local_1b88;
  undefined4 local_1b70;
  TAttribute<FMargin> local_1b68;
  TSharedPtr<FUICommandInfo_const_,1> local_1b38;
  SWidget *local_1b28;
  TReferenceControllerBase<1> *pTStack_1b20;
  TSharedRef<SWidget,1> local_1b18;
  TSharedRef<SButton,1> local_1b08;
  TSharedRef<SWidget,1> local_1af8;
  TSharedRef<SWidget_const_,1> local_1ae8;
  SCheckBox *local_1ad8;
  TReferenceControllerBase<1> *pTStack_1ad0;
  TSharedRef<SCheckBox,1> local_1ac8;
  TSharedRef<SWidget_const_,1> local_1ab8;
  TSharedRef<SWidget_const_,1> local_1aa8;
  TSharedRef<SVerticalBox,1> local_1a98;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_1a88;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_1a70;
  FString local_1a58;
  code *local_1a48;
  longlong lStack_1a40;
  undefined1 local_1a38 [8];
  TSharedRef<SImage,1> local_1a30;
  code *local_1a18;
  longlong lStack_1a10;
  TSharedRef<SImage,1> local_1a08;
  code *local_19f8;
  longlong lStack_19f0;
  TSharedRef<STextBlock,1> local_19e8;
  undefined1 local_19d8 [8];
  undefined1 local_19d0 [8];
  TReferenceControllerBase<1> *local_19c8;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_19c0;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_19a8;
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs> local_1990;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_1978;
  undefined8 *local_1960 [2];
  TReferenceControllerBase<1> *local_1950;
  undefined1 local_1930 [40];
  FSlotArgumentsMixin local_1908;
  undefined8 *local_1878 [2];
  TReferenceControllerBase<1> *local_1868;
  undefined1 local_1848 [40];
  FSlotArgumentsMixin local_1820;
  undefined8 *local_1790 [2];
  TReferenceControllerBase<1> *local_1780;
  undefined1 local_1760 [40];
  FSlotArgumentsMixin local_1738;
  TAttribute<FSlateBrush_const_*> local_16a8;
  TAttribute<FSlateBrush_const_*> local_1680;
  TAttribute<FText> local_1658;
  FArguments local_1628;
  FArguments local_1420;
  FArguments local_1178;
  FArguments local_ed0;
  FArguments local_af0;
  FArguments local_5b0;
  undefined8 uStack_48;
  
  uStack_48 = 0x1427d7978;
  pSVar51 = (SMultiBoxWidget *)0x0;
  local_res8 = 0;
  pSVar48 = (SMultiBoxWidget *)this->_padding_;
  pSVar47 = pSVar48;
  pSVar52 = pSVar51;
  local_res10 = param_1;
  local_res18 = (TReferenceControllerBase<1> *)param_2;
  if (pSVar48 == (SMultiBoxWidget *)0x0) {
LAB_1427d79c5:
    bVar56 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    pSVar48 = pSVar47;
    if (bVar56) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else {
    aVar7 = *(atomic<int> *)&pSVar48->_padding_;
    do {
      pSVar47 = pSVar51;
      pSVar52 = (SMultiBoxWidget *)0x0;
      if (aVar7 == (atomic<int>)0x0) goto LAB_1427d79c5;
      LOCK();
      aVar19 = *(atomic<int> *)&pSVar48->_padding_;
      bVar56 = aVar7 == aVar19;
      if (bVar56) {
        *(atomic<int> *)&pSVar48->_padding_ = (atomic<int>)((int)aVar7 + 1);
        aVar19 = aVar7;
      }
      UNLOCK();
      aVar7 = aVar19;
    } while (!bVar56);
    pSVar52 = (SMultiBoxWidget *)this->_padding_;
    pSVar47 = pSVar48;
    if (pSVar52 == (SMultiBoxWidget *)0x0) goto LAB_1427d79c5;
  }
  SMultiBoxWidget::GetMultiBox(pSVar52,&local_1eb0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar48);
  if ((this->_padding_ == 0) &&
     (bVar56 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L""), bVar56)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pTVar53 = (TReferenceControllerBase<1> *)this->_padding_;
  this_00 = (FMultiBlock *)this->_padding_;
  if (pTVar53 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar53->SharedReferenceCount = (atomic<int>)((int)pTVar53->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1e00 = pTVar53;
  if ((this_00 == (FMultiBlock *)0x0) &&
     (bVar56 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L""), bVar56)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (pTVar53 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar53->SharedReferenceCount = (atomic<int>)((int)pTVar53->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar53);
  pTVar53 = (this_00->Action).SharedReferenceCount.ReferenceController;
  pFVar36 = (this_00->Action).Object;
  if (pTVar53 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar53->SharedReferenceCount = (atomic<int>)((int)pTVar53->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pFVar36 == (FUICommandInfo *)0x0) &&
     (bVar56 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar56)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_1ee0._0_8_ = (pFVar36->Label).TextData.Reference;
  if ((ITextData *)local_1ee0._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_1ee0._0_8_ + 8))(local_1ee0._0_8_,local_1e38);
  }
  local_1ee0._8_4_ = (pFVar36->Label).Flags;
  local_1ee0[0x10] = true;
  local_1eb8 = 0;
  local_1ec8 = (undefined1  [8])0x0;
  FStack_1ec0.Data = (FScriptContainerElement *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar53);
  if ((char)this_00[1]._padding_ != '\0') {
    TAttribute<FText>::operator=((TAttribute<FText> *)local_1ee0,(TAttribute<FText> *)(this_00 + 1))
    ;
  }
  pTVar53 = (this_00->Action).SharedReferenceCount.ReferenceController;
  pFVar36 = (this_00->Action).Object;
  if (pTVar53 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar53->SharedReferenceCount = (atomic<int>)((int)pTVar53->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pFVar36 == (FUICommandInfo *)0x0) &&
     (bVar56 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar56)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_1f10._0_8_ = (pFVar36->Description).TextData.Reference;
  if ((ITextData *)local_1f10._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_1f10._0_8_ + 8))(local_1f10._0_8_,local_1e34);
  }
  local_1f10._8_4_ = (pFVar36->Description).Flags;
  local_1f10[0x10] = true;
  local_1ee8 = 0;
  local_1ef8 = (undefined1  [8])0x0;
  FStack_1ef0.Data = (FScriptContainerElement *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar53);
  if (this_00[1].DirectActions.CanExecuteAction.field_0x10 != '\0') {
    TAttribute<FText>::operator=
              ((TAttribute<FText> *)local_1f10,
               (TAttribute<FText> *)&this_00[1].DirectActions.CanExecuteAction);
  }
  pSVar48 = (SMultiBoxWidget *)this->_padding_;
  pSVar47 = pSVar48;
  pSVar52 = pSVar51;
  if (pSVar48 == (SMultiBoxWidget *)0x0) {
LAB_1427d7be5:
    bVar56 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    pSVar48 = pSVar47;
    if (bVar56) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else {
    aVar7 = *(atomic<int> *)&pSVar48->_padding_;
    do {
      pSVar47 = pSVar51;
      if (aVar7 == (atomic<int>)0x0) goto LAB_1427d7be5;
      LOCK();
      aVar19 = *(atomic<int> *)&pSVar48->_padding_;
      bVar56 = aVar7 == aVar19;
      if (bVar56) {
        *(atomic<int> *)&pSVar48->_padding_ = (atomic<int>)((int)aVar7 + 1);
        aVar19 = aVar7;
      }
      UNLOCK();
      aVar7 = aVar19;
    } while (!bVar56);
    pSVar52 = (SMultiBoxWidget *)this->_padding_;
    pSVar47 = pSVar48;
    if (pSVar52 == (SMultiBoxWidget *)0x0) goto LAB_1427d7be5;
  }
  if ((this->_padding_ == 0) &&
     (bVar56 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar56)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  bVar56 = *(bool *)(this->_padding_ + 0xbc);
  pFVar20 = TAttribute<FText>::Get((TAttribute<FText> *)local_1ee0);
  local_1d00.TextData.Reference = (pFVar20->TextData).Reference;
  if (local_1d00.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1d00.TextData.Reference + 8))
              (local_1d00.TextData.Reference,local_1e30);
  }
  local_1d00.Flags = pFVar20->Flags;
  puVar21 = (undefined8 *)(**(code **)(this->_padding_ + 8))(this,local_19d0);
  local_1cf0.Object = (SWidget *)*puVar21;
  local_1cf0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)puVar21[1];
  if (local_1cf0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1cf0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1cf0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SMultiBoxWidget::AddElement(pSVar52,&local_1cf0,&local_1d00,bVar56);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_19c8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar48);
  this_05 = (FSlateIcon *)&this_00[1].DirectActions.IsActionVisibleDelegate;
  if ((*(longlong *)
        &((TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)this_05)->field_0x0 == 0) ||
     (*(longlong *)&this_00[1].DirectActions.IsActionVisibleDelegate.field_0x8 == 0)) {
    pTVar53 = (this_00->Action).SharedReferenceCount.ReferenceController;
    pFVar36 = (this_00->Action).Object;
    if (pTVar53 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar53->SharedReferenceCount = (atomic<int>)((int)pTVar53->SharedReferenceCount + 1);
      UNLOCK();
    }
    pSVar51 = (SMultiBoxWidget *)&DAT_00000001;
    if (pFVar36 != (FUICommandInfo *)0x0) {
      this_01 = FMultiBlock::GetAction(this_00,&local_1b38);
      pFVar36 = TSharedPtr<FUICommandInfo_const_,1>::operator->(this_01);
      this_05 = &pFVar36->Icon;
      pSVar51 = (SMultiBoxWidget *)&DAT_00000001;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1b38.SharedReferenceCount.ReferenceController);
    }
  }
  else {
    pTVar53 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
  }
  if (pSVar51 != (SMultiBoxWidget *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar53);
  }
  bVar56 = false;
  local_1e88.Object = SNullWidget::NullWidget.Object;
  local_1e88.SharedReferenceCount.ReferenceController =
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
  local_1e98.Object = SNullWidget::NullWidget.Object;
  local_1e98.SharedReferenceCount.ReferenceController =
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
  if ((this_05->StyleSetName == (FName)0x0) || (this_05->StyleName == (FName)0x0))
  goto LAB_1427d8055;
  pFVar22 = FSlateIcon::GetIcon(this_05);
  local_1df0 = pFVar22;
  pFVar23 = FSlateIcon::GetSmallIcon(this_05);
  local_1df8 = pFVar23;
  if (pFVar22->ResourceName == (FName)0x0) {
    pUVar3 = (pFVar22->ResourceObject).field0_0x0.DebugPtr;
    lVar28 = 0;
    if (pUVar3 != (UObject *)0x0) {
      lVar28 = *(longlong *)&pUVar3->field_0x18;
    }
    if (lVar28 != 0) goto LAB_1427d7dbf;
  }
  else {
LAB_1427d7dbf:
    pFVar24 = SImage::FArguments::FArguments(&local_1420);
    local_1f38 = (FName)GetIconVisibility;
    uStack_1f30 = 0;
    lStack_19f0 = (ulonglong)uStack_1f2c << 0x20;
    local_19f8 = GetIconVisibility;
    pFVar24 = TSlateBaseNamedArgs<SImage>::Visibility<SButtonRowBlock,bool>
                        ((TSlateBaseNamedArgs<SImage> *)pFVar24,this,(pmf_ecaaedc9 *)&local_19f8,
                         false);
    pTVar25 = TAttribute<FSlateBrush_const_*>::TAttribute<FSlateBrush_const_*><FSlateBrush_const_*>
                        (&local_16a8,&local_1df0);
    pFVar24 = SImage::FArguments::Image(pFVar24,pTVar25);
    pTVar26 = MakeTDecl<SImage,RequiredArgs::T0RequiredArgs>
                        (&local_19a8,"SImage",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SButtonRowBlock.cpp"
                         ,0x6b,local_res20);
    pTVar27 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                        (pTVar26,&local_1a08,pFVar24);
    TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SImage>(&local_1cd8,pTVar27);
    FVar16.ReferenceController = local_1cd8.SharedReferenceCount.ReferenceController;
    pSVar15 = local_1cd8.Object;
    FVar49.ReferenceController = local_1e88.SharedReferenceCount.ReferenceController;
    local_1cd8.Object = local_1e88.Object;
    local_1cd8.SharedReferenceCount.ReferenceController =
         local_1e88.SharedReferenceCount.ReferenceController;
    local_1e88.Object = pSVar15;
    local_1e88.SharedReferenceCount.ReferenceController = FVar16.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar49.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1a08.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_19a8._Widget.SharedReferenceCount.ReferenceController);
    SImage::FArguments::~FArguments(&local_1420);
    local_1e88.SharedReferenceCount.ReferenceController = FVar16.ReferenceController;
  }
  if (pFVar23->ResourceName == (FName)0x0) {
    pUVar3 = (pFVar23->ResourceObject).field0_0x0.DebugPtr;
    lVar28 = 0;
    if (pUVar3 != (UObject *)0x0) {
      lVar28 = *(longlong *)&pUVar3->field_0x18;
    }
    if (lVar28 == 0) goto LAB_1427d8055;
  }
  pFVar24 = SImage::FArguments::FArguments(&local_1178);
  local_1f38 = (FName)GetIconVisibility;
  uStack_1f30 = 0;
  lStack_1a10 = (ulonglong)uStack_1f2c << 0x20;
  local_1a18 = GetIconVisibility;
  pFVar24 = TSlateBaseNamedArgs<SImage>::Visibility<SButtonRowBlock,bool>
                      ((TSlateBaseNamedArgs<SImage> *)pFVar24,this,(pmf_ecaaedc9 *)&local_1a18,true)
  ;
  pTVar25 = TAttribute<FSlateBrush_const_*>::TAttribute<FSlateBrush_const_*><FSlateBrush_const_*>
                      (&local_1680,&local_1df8);
  pFVar24 = SImage::FArguments::Image(pFVar24,pTVar25);
  pTVar26 = MakeTDecl<SImage,RequiredArgs::T0RequiredArgs>
                      (&local_19c0,"SImage",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SButtonRowBlock.cpp"
                       ,0x72,&local_1f48);
  pTVar27 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar26,&local_1a30,pFVar24);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SImage>(&local_1cc8,pTVar27);
  FVar16.ReferenceController = local_1cc8.SharedReferenceCount.ReferenceController;
  pSVar15 = local_1cc8.Object;
  FVar49.ReferenceController = local_1e98.SharedReferenceCount.ReferenceController;
  local_1cc8.Object = local_1e98.Object;
  local_1cc8.SharedReferenceCount.ReferenceController =
       local_1e98.SharedReferenceCount.ReferenceController;
  local_1e98.Object = pSVar15;
  local_1e98.SharedReferenceCount.ReferenceController = FVar16.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar49.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1a30.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_19c0._Widget.SharedReferenceCount.ReferenceController);
  SImage::FArguments::~FArguments(&local_1178);
  local_1e98.SharedReferenceCount.ReferenceController = FVar16.ReferenceController;
LAB_1427d8055:
  pFVar54 = (FSlotArguments *)0x0;
  pFVar29 = SVerticalBox::FArguments::FArguments(&local_1628);
  pFVar30 = SVerticalBox::Slot((FSlotArguments *)local_1790);
  pFVar30 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar30);
  fVar12 = __real_3f800000;
  pFVar30 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)&pFVar30->field_0x18,__real_3f800000);
  puVar1 = &pFVar30->field_0x48;
  if (local_1e28 != (undefined4 *)puVar1) {
    *(undefined4 *)puVar1 = 2;
    pFVar30->field_0x4c = 1;
  }
  pFVar45 = pFVar54;
  if (puVar1 != (undefined1 *)0x0) {
    pFVar45 = pFVar30;
  }
  pFVar30 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)pFVar45,&local_1e88);
  pFVar29 = SVerticalBox::FArguments::operator+(pFVar29,pFVar30);
  pFVar30 = SVerticalBox::Slot((FSlotArguments *)local_1878);
  pFVar30 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar30);
  pFVar30 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)&pFVar30->field_0x18,fVar12);
  puVar1 = &pFVar30->field_0x48;
  if (local_1e20 != (undefined4 *)puVar1) {
    *(undefined4 *)puVar1 = 2;
    pFVar30->field_0x4c = 1;
  }
  pFVar45 = pFVar54;
  if (puVar1 != (undefined1 *)0x0) {
    pFVar45 = pFVar30;
  }
  pFVar30 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)pFVar45,&local_1e98);
  pFVar29 = SVerticalBox::FArguments::operator+(pFVar29,pFVar30);
  pFVar30 = SVerticalBox::Slot((FSlotArguments *)local_1960);
  pFVar30 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar30);
  pFVar30 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)&pFVar30->field_0x18,fVar12);
  puVar1 = &pFVar30->field_0x48;
  if (local_1e18 != (undefined4 *)puVar1) {
    *(undefined4 *)puVar1 = 2;
    pFVar30->field_0x4c = 1;
  }
  if (puVar1 != (undefined1 *)0x0) {
    pFVar54 = pFVar30;
  }
  pFVar31 = STextBlock::FArguments::FArguments(&local_5b0);
  local_1e78.TextData.Reference = (ITextData *)local_1ee0._0_8_;
  if ((ITextData *)local_1ee0._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_1ee0._0_8_ + 8))(local_1ee0._0_8_,local_1dc0);
  }
  local_1e78.Flags = local_1ee0._8_4_;
  local_1e50 = 0;
  local_1e68 = local_1ee0[0x10];
  local_1e60 = (undefined1  [8])0x0;
  FStack_1e58.Data = (FScriptContainerElement *)0x0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_1e60,
             (TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_1ec8);
  FText::operator=(&(pFVar31->_Text).Value,&local_1e78);
  (pFVar31->_Text).bIsSet = local_1e68;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar31->_Text).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1e60);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1e60,
             (FWriteAccessScope *)&local_1c38);
  if ((local_1e50 != 0) && (FStack_1e58.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1e58.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1e58,0,0,0x10);
    local_1e50 = 0;
  }
  if (local_1c38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1c38.Accessor,&local_1c38);
  }
  if (FStack_1e58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1e58.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1e60);
  if (local_1e78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1e78.TextData.Reference + 0x10))();
  }
  uStack_1f30 = 0;
  local_1f38 = (FName)GetIconVisibility;
  lStack_1a40 = (ulonglong)uStack_1f2c << 0x20;
  local_1a48 = GetIconVisibility;
  local_res8 = local_res8 & 0xffffff00;
  TAttribute<EVisibility>::Bind<SButtonRowBlock,bool_&>
            ((TAttribute<EVisibility> *)&pFVar31->_padding_,this,(pmf_ecaaedc9 *)&local_1a48,
             (bool *)&local_res8);
  local_1f38 = *(FName *)&local_res18->_padding_;
  ::FString::FString(&local_1d40,".Label");
  pFVar32 = ::FName::ToString(&local_1f38,&local_1a58);
  ::FString::ConcatFF(&local_1dd0,pFVar32,&local_1d40);
  FVar46.Data = (FScriptContainerElement *)L"";
  if (local_1dd0.Data.ArrayNum != 0) {
    FVar46.Data = local_1dd0.Data.AllocatorInstance.Data;
  }
  ::FName::FName(&local_1d78,(wchar_t *)FVar46.Data);
  if (local_1dd0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1dd0.Data.AllocatorInstance.Data);
  }
  if (local_1a58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a58.Data.AllocatorInstance.Data);
  }
  if (local_1d40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d40.Data.AllocatorInstance.Data);
  }
  pIVar14 = local_res10;
  if ((local_res10 == (ISlateStyle *)0x0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("InSlateStyle != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Text\\STextBlock.h"
                          ,0x53,L""), bVar18)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar33 = (FTextBlockStyle *)
            (**(code **)((longlong)*pIVar14 + 0xa0))
                      (pIVar14,FTextBlockStyle::TypeName,local_1d78,0,1);
  if (pFVar33 == (FTextBlockStyle *)0x0) {
    pFVar33 = FTextBlockStyle::GetDefault();
  }
  pFVar31->_TextStyle = pFVar33;
  FLLMScope::FLLMScope(&local_1f28,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1de4 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1dd8,&local_1de4,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_1a70,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SButtonRowBlock.cpp"
             ,0x93,&local_1f47);
  FMemScope::~FMemScope(&local_1dd8);
  FLLMScope::~FLLMScope(&local_1f28);
  pTVar34 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1a70,&local_19e8,pFVar31);
  pTVar53 = (pTVar34->SharedReferenceCount).ReferenceController;
  local_1f20 = pTVar34->Object;
  if (pTVar53 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar53->SharedReferenceCount = (atomic<int>)((int)pTVar53->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar53->SharedReferenceCount = (atomic<int>)((int)pTVar53->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1f18.ReferenceController = pTVar53;
  if ((STextBlock **)&pFVar54->field_0x8 != &local_1f20) {
    *(STextBlock **)&pFVar54->field_0x8 = local_1f20;
    local_1f20 = (STextBlock *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar54->field_0x10,&local_1f18);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1f18.ReferenceController);
  pFVar29 = SVerticalBox::FArguments::operator+(pFVar29,pFVar54);
  FLLMScope::FLLMScope(&local_1f24,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1e10 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1e08,&local_1e10,true);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
            (&local_1a88,"SVerticalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SButtonRowBlock.cpp"
             ,0x7a,&local_1f46);
  FMemScope::~FMemScope(&local_1e08);
  FLLMScope::~FLLMScope(&local_1f24);
  pTVar35 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1a88,&local_1a98,pFVar29);
  local_1e48.SharedReferenceCount.ReferenceController =
       (pTVar35->SharedReferenceCount).ReferenceController;
  pSVar4 = pTVar35->Object;
  if (local_1e48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1e48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1e48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1e48.Object = (SWidget *)pSVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1a98.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1a88._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar53);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_19e8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1a70._Widget.SharedReferenceCount.ReferenceController);
  STextBlock::FArguments::~FArguments(&local_5b0);
  TResizingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_1908);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1930);
  if ((void *)local_1930._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1930._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1930);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1950);
  if (local_1960[0] != (undefined8 *)0x0) {
    (**(code **)*local_1960[0])(local_1960[0],1);
  }
  TResizingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_1820);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1848);
  if ((void *)local_1848._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1848._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1848);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1868);
  if (local_1878[0] != (undefined8 *)0x0) {
    (**(code **)*local_1878[0])(local_1878[0],1);
  }
  TResizingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_1738);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1760);
  if ((void *)local_1760._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1760._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1760);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1780);
  if (local_1790[0] != (undefined8 *)0x0) {
    (**(code **)*local_1790[0])(local_1790[0],1);
  }
  DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_1628._Slots.AllocatorInstance.Data,local_1628._Slots.ArrayNum);
  if ((FSlotArguments *)local_1628._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_1628._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_1628);
  pTVar53 = (this_00->Action).SharedReferenceCount.ReferenceController;
  pFVar36 = (this_00->Action).Object;
  if (pTVar53 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar53->SharedReferenceCount = (atomic<int>)((int)pTVar53->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pFVar36 == (FUICommandInfo *)0x0) {
    EVar2 = *(EUserInterfaceActionType *)&this_00[1].Action.Object;
    FVar49.ReferenceController = local_1f58.SharedReferenceCount.ReferenceController;
  }
  else {
    FVar49.ReferenceController = (this_00->Action).SharedReferenceCount.ReferenceController;
    bVar56 = true;
    local_1f58.Object = (this_00->Action).Object;
    if (FVar49.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar49.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar49.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_1f58.SharedReferenceCount.ReferenceController = FVar49.ReferenceController;
    pFVar36 = TSharedPtr<FUICommandInfo_const_,1>::operator->(&local_1f58);
    EVar2 = pFVar36->UserInterfaceType;
  }
  if (bVar56) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar49.ReferenceController);
  }
  bVar11 = false;
  bVar10 = false;
  bVar9 = false;
  bVar8 = false;
  bVar18 = false;
  bVar56 = false;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar53);
  if (EVar2 == Button) {
    pFVar37 = SButton::FArguments::FArguments(&local_af0);
    FVar38 = ISlateStyle::Join((FName)local_1a38,*(char **)&local_res18->_padding_);
    pFVar37 = SButton::FArguments::ButtonStyle(pFVar37,local_res10,(FName *)FVar38,(char *)0x0);
    local_1d70.Value.TextData.Reference = (ITextData *)local_1f10._0_8_;
    if ((ITextData *)local_1f10._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_1f10._0_8_ + 8))(local_1f10._0_8_,local_1de8);
    }
    local_1d70.Value.Flags = local_1f10._8_4_;
    local_1d70.bIsSet = local_1f10[0x10];
    local_1d70.Getter._0_8_ = 0;
    local_1d70.Getter._8_8_ = 0;
    local_1d70.Getter._16_4_ = 0;
    TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              (&local_1d70.Getter,
               (TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_1ef8);
    FText::operator=((FText *)pFVar37,&local_1d70.Value);
    *(bool *)&pFVar37->_padding_ = local_1d70.bIsSet;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar37->_padding_,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)&local_1d70.Getter);
    TAttribute<FText>::~TAttribute<FText>(&local_1d70);
    local_1b68.bIsSet = true;
    local_1b68.Getter._16_8_ = 0;
    local_1b68.Value.Left = 0.0;
    local_1b68.Value.Top = 0.0;
    local_1b68.Value.Right = 0.0;
    local_1b68.Value.Bottom = 0.0;
    local_1b68.Getter._0_8_ = 0;
    local_1b68.Getter._8_8_ = 0;
    pFVar37 = SButton::FArguments::ContentPadding(pFVar37,&local_1b68);
    local_1b70 = CONCAT22(local_1b70._2_2_,2);
    local_1c58 = local_1b70;
    local_1c68._0_8_ = ___xmm_3f8000003f800000000000003f800000;
    local_1c68._8_8_ = _UNK_15090c6d8;
    local_1c54 = 1;
    local_1c50 = 0;
    uStack_1c48 = 0;
    local_1c40 = 0;
    pFVar37 = SButton::FArguments::ForegroundColor
                        (pFVar37,(TAttribute<FSlateColor> *)&local_1c68._s_0);
    if (local_1e48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_1e48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_1e48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_1b28 = (pFVar37->_Content).Widget.Object;
    pTStack_1b20 = (pFVar37->_Content).Widget.SharedReferenceCount.ReferenceController;
    (pFVar37->_Content).Widget.Object = (SWidget *)pSVar4;
    (pFVar37->_Content).Widget.SharedReferenceCount.ReferenceController =
         local_1e48.SharedReferenceCount.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (pTStack_1b20);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar37->_OnClicked,
               (FWriteAccessScope *)&local_1c20);
    local_1c08 = &(pFVar37->_OnClicked).field_0x8;
    puVar21 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_1c08);
    pTVar53 = local_res18;
    if (puVar21 != (undefined8 *)0x0) {
      local_1f58.Object = (FUICommandInfo *)OnClicked;
      local_1f58.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)
           ((ulonglong)local_1eb0.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
      pTVar39 = TSharedFromThis<SWidget,1>::AsShared
                          ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_1b18);
      pTVar55 = &pTVar39->Object[-1].StatID;
      if (pTVar39->Object == (SWidget *)0x0) {
        pTVar55 = (TStatId *)0x0;
      }
      pTVar53 = (pTVar39->SharedReferenceCount).ReferenceController;
      if (pTVar53 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar53->SharedReferenceCount = (atomic<int>)((int)pTVar53->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar53->SharedReferenceCount = (atomic<int>)((int)pTVar53->SharedReferenceCount + 1);
        UNLOCK();
      }
      bVar8 = true;
      bVar18 = true;
      bVar56 = true;
      *puVar21 = &
                 ___7__TCommonDelegateInstanceState___A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar40 = FDelegateHandle::GenerateNewID();
      puVar21[2] = uVar40;
      *puVar21 = &
                 ___7__TBaseSPMethodDelegateInstance__0A_VSButtonRowBlock___00__A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar21[3] = pTVar55;
      puVar21[4] = pTVar53;
      if (pTVar53 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar53->WeakReferenceCount = (atomic<int>)((int)pTVar53->WeakReferenceCount + 1);
        UNLOCK();
      }
      puVar21[5] = local_1f58.Object;
      puVar21[6] = local_1f58.SharedReferenceCount.ReferenceController;
    }
    if (bVar8) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar53);
    }
    if (bVar56) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar53);
    }
    if (bVar18) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1b18.SharedReferenceCount.ReferenceController);
    }
    if (local_1c20.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1c20.Accessor,&local_1c20);
    }
    this_02 = MakeTDecl<SButton,RequiredArgs::T0RequiredArgs>
                        (&local_1978,"SButton",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SButtonRowBlock.cpp"
                         ,0xa4,&local_1f45);
    pTVar41 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                        (this_02,&local_1b08,pFVar37);
    pTVar53 = (pTVar41->SharedReferenceCount).ReferenceController;
    local_1cb8.Object = (SWidget *)pTVar41->Object;
    if (pTVar53 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar53->SharedReferenceCount = (atomic<int>)((int)pTVar53->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_1cb8.SharedReferenceCount.ReferenceController = pTVar53;
    TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::operator[]
              ((TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *)
               &this->_padding_,&local_1cb8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar53);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1b08.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1978._Widget.SharedReferenceCount.ReferenceController);
    SButton::FArguments::~FArguments(&local_af0);
  }
  else if (EVar2 == ToggleButton) {
    pFVar42 = SCheckBox::FArguments::FArguments(&local_ed0);
    FVar38 = ISlateStyle::Join((FName)local_19d8,*(char **)&local_res18->_padding_);
    pFVar42 = SCheckBox::FArguments::Style(pFVar42,local_res10,(FName *)FVar38,(char *)0x0);
    this_03 = TAttribute<FText>::TAttribute<FText>(&local_1658,(TAttribute<FText> *)local_1f10);
    TAttribute<FText>::operator=((TAttribute<FText> *)pFVar42,this_03);
    TAttribute<FText>::~TAttribute<FText>(this_03);
    uVar13 = _UNK_15076ba38;
    local_1d30.bIsSet = true;
    local_1d30.Getter._16_8_ = 0;
    local_1d30.Value.Left = ___xmm_40000000400000004000000040000000;
    local_1d30.Value.Top = _UNK_15076ba34;
    local_1d30.Value.Right = _UNK_15076ba38;
    local_1d30.Value.Bottom = _UNK_15076ba3c;
    local_1d30.Getter._0_8_ = 0;
    local_1d30.Getter._8_8_ = 0;
    fVar12 = _UNK_15076ba34;
    (pFVar42->_Padding).Value.Left = ___xmm_40000000400000004000000040000000;
    uVar17 = _UNK_15076ba38;
    (pFVar42->_Padding).Value.Top = fVar12;
    _UNK_15076ba38 = (float)uVar13;
    _UNK_15076ba3c = SUB84(uVar13,4);
    fVar12 = _UNK_15076ba3c;
    (pFVar42->_Padding).Value.Right = _UNK_15076ba38;
    _UNK_15076ba38 = uVar17;
    (pFVar42->_Padding).Value.Bottom = fVar12;
    (pFVar42->_Padding).bIsSet = true;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar42->_Padding).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)&local_1d30.Getter);
    TAttribute<FMargin>::~TAttribute<FMargin>(&local_1d30);
    pFVar42 = SCheckBox::FArguments::operator[](pFVar42,&local_1e48);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &pFVar42->_OnCheckStateChanged,(FWriteAccessScope *)&local_1ba0);
    local_1b88 = &(pFVar42->_OnCheckStateChanged).field_0x8;
    puVar21 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_1b88);
    pTVar53 = local_res18;
    if (puVar21 != (undefined8 *)0x0) {
      local_1f58.Object = (FUICommandInfo *)OnCheckStateChanged;
      local_1f58.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)
           ((ulonglong)local_1eb0.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
      pTVar39 = TSharedFromThis<SWidget,1>::AsShared
                          ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_1af8);
      pTVar53 = (pTVar39->SharedReferenceCount).ReferenceController;
      pTVar55 = &pTVar39->Object[-1].StatID;
      if (pTVar39->Object == (SWidget *)0x0) {
        pTVar55 = (TStatId *)0x0;
      }
      if (pTVar53 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar53->SharedReferenceCount = (atomic<int>)((int)pTVar53->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar53->SharedReferenceCount = (atomic<int>)((int)pTVar53->SharedReferenceCount + 1);
        UNLOCK();
      }
      bVar11 = true;
      bVar10 = true;
      bVar9 = true;
      *puVar21 = &
                 ___7__TCommonDelegateInstanceState___A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar40 = FDelegateHandle::GenerateNewID();
      puVar21[2] = uVar40;
      *puVar21 = &
                 ___7__TBaseSPMethodDelegateInstance__0A_VSButtonRowBlock___00__A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar21[3] = pTVar55;
      puVar21[4] = pTVar53;
      if (pTVar53 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar53->WeakReferenceCount = (atomic<int>)((int)pTVar53->WeakReferenceCount + 1);
        UNLOCK();
      }
      puVar21[5] = local_1f58.Object;
      puVar21[6] = local_1f58.SharedReferenceCount.ReferenceController;
    }
    if (bVar9) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar53);
    }
    if (bVar10) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar53);
    }
    if (bVar11) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1af8.SharedReferenceCount.ReferenceController);
    }
    bVar8 = false;
    bVar18 = false;
    bVar56 = false;
    if (local_1ba0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1ba0.Accessor,&local_1ba0);
    }
    (pFVar42->_IsChecked).bIsSet = true;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(pFVar42->_IsChecked).Getter,(FWriteAccessScope *)&local_1be0);
    local_1bc8 = &(pFVar42->_IsChecked).Getter.field_0x8;
    puVar21 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_1bc8);
    pTVar53 = local_res18;
    if (puVar21 != (undefined8 *)0x0) {
      local_1f58.Object = (FUICommandInfo *)OnIsChecked;
      local_1f58.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)
           ((ulonglong)local_1eb0.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
      pTVar44 = TSharedFromThis<SWidget,1>::AsShared
                          ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_1ae8);
      pTVar53 = (pTVar44->SharedReferenceCount).ReferenceController;
      pTVar55 = &pTVar44->Object[-1].StatID;
      if (pTVar44->Object == (SWidget *)0x0) {
        pTVar55 = (TStatId *)0x0;
      }
      if (pTVar53 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar53->SharedReferenceCount = (atomic<int>)((int)pTVar53->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar53->SharedReferenceCount = (atomic<int>)((int)pTVar53->SharedReferenceCount + 1);
        UNLOCK();
      }
      bVar8 = true;
      bVar18 = true;
      bVar56 = true;
      *puVar21 = &
                 ___7__TCommonDelegateInstanceState___A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar40 = FDelegateHandle::GenerateNewID();
      puVar21[2] = uVar40;
      *puVar21 = &
                 ___7__TBaseSPMethodDelegateInstance__00__CBVSButtonRowBlock___00__A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar21[3] = pTVar55;
      puVar21[4] = pTVar53;
      if (pTVar53 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar53->WeakReferenceCount = (atomic<int>)((int)pTVar53->WeakReferenceCount + 1);
        UNLOCK();
      }
      puVar21[5] = local_1f58.Object;
      puVar21[6] = local_1f58.SharedReferenceCount.ReferenceController;
    }
    if (bVar56) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar53);
    }
    if (bVar18) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar53);
    }
    if (bVar8) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1ae8.SharedReferenceCount.ReferenceController);
    }
    if (local_1be0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1be0.Accessor,&local_1be0);
    }
    this_04 = MakeTDecl<SCheckBox,RequiredArgs::T0RequiredArgs>
                        (&local_1990,"SCheckBox",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SButtonRowBlock.cpp"
                         ,0xbd,local_1f44);
    pSVar5 = (this_04->_Widget).Object;
    pTVar53 = (this_04->_Widget).SharedReferenceCount.ReferenceController;
    if (pTVar53 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar53->SharedReferenceCount = (atomic<int>)((int)pTVar53->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_1ad8 = (this->ToggleButton).Object;
    pTStack_1ad0 = (this->ToggleButton).SharedReferenceCount.ReferenceController;
    (this->ToggleButton).Object = pSVar5;
    (this->ToggleButton).SharedReferenceCount.ReferenceController = pTVar53;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (pTStack_1ad0);
    pTVar43 = TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>::operator<<=
                        (this_04,&local_1ac8,pFVar42);
    pTVar53 = (pTVar43->SharedReferenceCount).ReferenceController;
    local_1ca8.Object = (SWidget *)pTVar43->Object;
    if (pTVar53 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar53->SharedReferenceCount = (atomic<int>)((int)pTVar53->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_1ca8.SharedReferenceCount.ReferenceController = pTVar53;
    TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::operator[]
              ((TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *)
               &this->_padding_,&local_1ca8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar53);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1ac8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1990._Widget.SharedReferenceCount.ReferenceController);
    SCheckBox::FArguments::~FArguments(&local_ed0);
  }
  else {
    bVar56 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<5884286520449302712>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SButtonRowBlock.cpp"
                        ,0xb8,"UserInterfaceType == EUserInterfaceActionType::ToggleButton");
    if (bVar56) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  bVar50 = 0;
  local_1d98[0] = false;
  local_1d98[1] = true;
  FStack_1d88.DelegateSize = 0;
  local_1d90.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_1d88.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_1d90,(FWriteAccessScope *)&local_1c00);
  local_1be8 = &FStack_1d88;
  puVar21 = UE::Core::Private::DelegateAllocate(0x38,&FStack_1d88);
  pTVar53 = local_res18;
  if (puVar21 != (undefined8 *)0x0) {
    local_1f58.Object = (FUICommandInfo *)IsEnabled;
    local_1f58.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)
         ((ulonglong)local_1eb0.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
    pTVar44 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_1ab8);
    pTVar55 = &pTVar44->Object[-1].StatID;
    if (pTVar44->Object == (SWidget *)0x0) {
      pTVar55 = (TStatId *)0x0;
    }
    pTVar53 = (pTVar44->SharedReferenceCount).ReferenceController;
    if (pTVar53 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar53->SharedReferenceCount = (atomic<int>)((int)pTVar53->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar53->SharedReferenceCount = (atomic<int>)((int)pTVar53->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar50 = 0x38;
    *puVar21 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar40 = FDelegateHandle::GenerateNewID();
    puVar21[2] = uVar40;
    *puVar21 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSButtonRowBlock___00__A6A_NXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar21[3] = pTVar55;
    puVar21[4] = pTVar53;
    if (pTVar53 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar53->WeakReferenceCount = (atomic<int>)((int)pTVar53->WeakReferenceCount + 1);
      UNLOCK();
    }
    puVar21[5] = local_1f58.Object;
    puVar21[6] = local_1f58.SharedReferenceCount.ReferenceController;
  }
  if ((bVar50 & 0x20) != 0) {
    bVar50 = bVar50 & 0xdf;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar53);
  }
  if ((bVar50 & 0x10) != 0) {
    bVar50 = bVar50 & 0xef;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar53);
  }
  if ((bVar50 & 8) != 0) {
    bVar50 = bVar50 & 0xf7;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1ab8.SharedReferenceCount.ReferenceController);
  }
  bVar56 = false;
  if (local_1c00.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1c00.Accessor,&local_1c00);
  }
  SWidget::SetEnabled((SWidget *)&this->_padding_,(TAttribute<bool> *)local_1d98);
  local_1db8[0] = (TEnumAsByte<EVisibility::Private>)0x19;
  local_1db8[1] = true;
  FStack_1da8.DelegateSize = 0;
  local_1db0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_1da8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_1db0,(FWriteAccessScope *)&local_1bc0);
  local_1ba8 = &FStack_1da8;
  puVar21 = UE::Core::Private::DelegateAllocate(0x38,&FStack_1da8);
  pTVar53 = local_res18;
  if (puVar21 != (undefined8 *)0x0) {
    local_1f58.Object = (FUICommandInfo *)GetVisibility;
    local_1f58.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)
         ((ulonglong)local_1eb0.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
    pTVar44 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_1aa8);
    pTVar55 = &pTVar44->Object[-1].StatID;
    if (pTVar44->Object == (SWidget *)0x0) {
      pTVar55 = (TStatId *)0x0;
    }
    pTVar53 = (pTVar44->SharedReferenceCount).ReferenceController;
    if (pTVar53 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar53->SharedReferenceCount = (atomic<int>)((int)pTVar53->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar53->SharedReferenceCount = (atomic<int>)((int)pTVar53->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar50 = bVar50 | 0xc0;
    bVar56 = true;
    *puVar21 = &
               ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar40 = FDelegateHandle::GenerateNewID();
    puVar21[2] = uVar40;
    *puVar21 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSButtonRowBlock___00__A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar21[3] = pTVar55;
    puVar21[4] = pTVar53;
    if (pTVar53 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar53->WeakReferenceCount = (atomic<int>)((int)pTVar53->WeakReferenceCount + 1);
      UNLOCK();
    }
    puVar21[5] = local_1f58.Object;
    puVar21[6] = local_1f58.SharedReferenceCount.ReferenceController;
  }
  if (bVar56) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar53);
  }
  if ((char)bVar50 < '\0') {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar53);
  }
  if ((bVar50 & 0x40) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1aa8.SharedReferenceCount.ReferenceController);
  }
  if (local_1bc0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1bc0.Accessor,&local_1bc0);
  }
  SCompoundWidget::SetVisibility
            ((SCompoundWidget *)&this->_padding_,(TAttribute<EVisibility> *)local_1db8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1e48.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1e98.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1e88.SharedReferenceCount.ReferenceController);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1ef8,
             (FWriteAccessScope *)&local_1c98);
  if (((int)local_1ee8 != 0) && (FStack_1ef0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1ef0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1ef0,0,0,0x10);
    local_1ee8 = local_1ee8 & 0xffffffff00000000;
  }
  if (local_1c98.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1c98.Accessor,&local_1c98);
  }
  if (FStack_1ef0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1ef0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1ef8);
  if ((ITextData *)local_1f10._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_1f10._0_8_ + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1ec8,
             (FWriteAccessScope *)&local_1c80);
  if (((int)local_1eb8 != 0) && (FStack_1ec0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1ec0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1ec0,0,0,0x10);
    local_1eb8 = local_1eb8 & 0xffffffff00000000;
  }
  if (local_1c80.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1c80.Accessor,&local_1c80);
  }
  if (FStack_1ec0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1ec0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1ec8);
  if ((ITextData *)local_1ee0._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_1ee0._0_8_ + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1e00);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             CONCAT44(local_1eb0.SharedReferenceCount.ReferenceController._4_4_,
                      local_1eb0.SharedReferenceCount.ReferenceController._0_4_));
  return;
}

// Construct @ 1427ee920

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall SButtonRowBlock::Construct(SButtonRowBlock *this,FArguments *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_c8;
  FDelegateAllocation local_c0;
  code *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  bool local_98;
  FLinearColor_u_0 local_88;
  undefined1 local_78;
  undefined1 local_74;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_70;
  ForAnyElementType FStack_68;
  int local_60;
  FDestructionSentinel local_58;
  FDestructionSentinel local_40;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  local_a8 = InvertOnHover;
  uStack_a0 = 0;
  local_c8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_c0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_c8,(FWriteAccessScope *)&local_28);
  local_10 = &local_c0;
  puVar3 = UE::Core::Private::DelegateAllocate(0x30,&local_c0);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__00__CBVSButtonRowBlock____A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this;
    puVar3[4] = local_a8;
    puVar3[5] = CONCAT44(uStack_9c,uStack_a0);
    if ((this == (SButtonRowBlock *)0x0) || (puVar3[4] == 0)) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && MethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x1d8,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  local_88._0_8_ = ___xmm_3f8000003f800000000000003f800000;
  local_88._8_8_ = _UNK_15090c6d8;
  local_78 = 0;
  local_74 = 1;
  local_70.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_68.Data = (FScriptContainerElement *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_c8,(FWriteAccessScope *)&local_a8);
  if (FStack_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_68.Data);
  }
  FStack_68.Data = (FScriptContainerElement *)local_c0.DelegateAllocator;
  local_60 = local_c0.DelegateSize;
  local_c0.DelegateSize = 0;
  local_c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  if (local_98 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_9c,uStack_a0),
               (FDestructionSentinel *)&local_a8);
  }
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->_padding_,(SWidget *)&this->_padding_,(TAttribute<FSlateColor> *)&local_88._s_0
           ,None);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_70,(FWriteAccessScope *)&local_58);
  if ((local_60 != 0) &&
     ((ForElementType<TAlignedBytes<16,16>_>)FStack_68.Data !=
      (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)FStack_68.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_68,0,0,0x10);
    local_60 = 0;
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  if ((ForElementType<TAlignedBytes<16,16>_>)FStack_68.Data !=
      (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free(FStack_68.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_70.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_c8,(FWriteAccessScope *)&local_40);
  if ((local_c0.DelegateSize != 0) &&
     (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_c0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_c0,0,0,0x10);
    local_c0.DelegateSize = 0;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  if (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_c0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_c8.AccessDetector);
  return;
}

// GetIconVisibility @ 1428107d0

EVisibility __thiscall SButtonRowBlock::GetIconVisibility(SButtonRowBlock *this,bool param_1)

{
  bool *pbVar1;
  undefined7 in_register_00000011;
  char in_R8B;
  EVisibility EVar2;
  
  pbVar1 = TAttribute<bool>::Get(&FMultiBoxSettings::UseSmallToolBarIcons);
  EVar2 = EVisibility::Visible;
  if (*pbVar1 != (bool)in_R8B) {
    EVar2 = EVisibility::Collapsed;
  }
  *(TEnumAsByte<EVisibility::Private> *)CONCAT71(in_register_00000011,param_1) = EVar2.Value.Value;
  return (TEnumAsByte<EVisibility::Private>)(TEnumAsByte<EVisibility::Private>)param_1;
}

// GetVisibility @ 142816600

EVisibility __thiscall SButtonRowBlock::GetVisibility(SButtonRowBlock *this)

{
  TReferenceControllerBase<1> *pTVar1;
  FUICommandList *this_00;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  TEnumAsByte<EVisibility::Private> TVar6;
  TSharedRef<FUICommandInfo_const_,1> *in_RDX;
  
  if (this->_padding_ == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      TVar6.Value = (*pcVar4)();
      return (TEnumAsByte<EVisibility::Private>)(TEnumAsByte<EVisibility::Private>)TVar6.Value;
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
      TVar6.Value = (*pcVar4)();
      return (TEnumAsByte<EVisibility::Private>)(TEnumAsByte<EVisibility::Private>)TVar6.Value;
    }
  }
  pTVar2 = *(TReferenceControllerBase<1> **)(this->_padding_ + 0x88);
  lVar3 = *(longlong *)(this->_padding_ + 0x80);
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
      TVar6.Value = (*pcVar4)();
      return (TEnumAsByte<EVisibility::Private>)(TEnumAsByte<EVisibility::Private>)TVar6.Value;
    }
  }
  if ((this_00 == (FUICommandList *)0x0) || (lVar3 == 0)) {
    FUIAction::IsVisible((FUIAction *)(this->_padding_ + 0x18));
  }
  else {
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (lVar3 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        TVar6.Value = (*pcVar4)();
        return (TEnumAsByte<EVisibility::Private>)(TEnumAsByte<EVisibility::Private>)TVar6.Value;
      }
    }
    FUICommandList::GetVisibility(this_00,in_RDX);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return (EVisibility)SUB81(in_RDX,0);
}

// InvertOnHover @ 14281ccc0

FSlateColor * __thiscall
SButtonRowBlock::InvertOnHover(SButtonRowBlock *this,FSlateColor *__return_storage_ptr__)

{
  SCheckBox *pSVar1;
  FLinearColor FVar2;
  ECheckBoxState *pEVar3;
  
  if (*(char *)((longlong)&this->_padding_ + 3) == '\0') {
    pSVar1 = (this->ToggleButton).Object;
    if (pSVar1 != (SCheckBox *)0x0) {
      pEVar3 = TAttribute<enum_ECheckBoxState>::Get(&pSVar1->IsCheckboxChecked);
      if (*pEVar3 == Checked) goto LAB_14281cd10;
    }
    *(undefined8 *)&(__return_storage_ptr__->SpecifiedColor).field0_0x0 = 0x3f800000;
    (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.B = 1.0;
    (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.A = 1.0;
    __return_storage_ptr__->ColorUseRule = UseColor_Foreground;
    __return_storage_ptr__->ColorTableId = Black;
    return __return_storage_ptr__;
  }
LAB_14281cd10:
  FVar2.field0_0x0 = FLinearColor::Black.field0_0x0;
  __return_storage_ptr__->ColorUseRule = UseColor_Specified;
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar2.field0_0x0;
  return __return_storage_ptr__;
}

// IsEnabled @ 14281d190

bool __thiscall SButtonRowBlock::IsEnabled(SButtonRowBlock *this)

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

// OnCheckStateChanged @ 142824260

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SButtonRowBlock::OnCheckStateChanged(SButtonRowBlock *this,ECheckBoxState param_1)

{
  FReply local_c8;
  
  OnClicked(this,&local_c8);
  FReply::~FReply(&local_c8);
  return;
}

// OnClicked @ 1428245d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FReply * __thiscall SButtonRowBlock::OnClicked(SButtonRowBlock *this,FReply *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  code *pcVar3;
  atomic<int> aVar4;
  bool bVar5;
  atomic<int> aVar6;
  FReply *pFVar7;
  TSharedRef<FUICommandInfo_const_,1> *pTVar8;
  FSlateApplication *pFVar9;
  TSharedRef<SWidget,1> *pTVar10;
  longlong *plVar11;
  TReferenceControllerBase<1> *pTVar12;
  SMultiBoxWidget *this_00;
  TSharedPtr<FUICommandInfo_const_,1> local_78;
  SWidget *local_68;
  TReferenceControllerBase<1> *local_60;
  longlong local_58;
  TReferenceControllerBase<1> *local_50;
  TSharedRef<FMultiBox_const_,1> local_48;
  undefined1 local_38 [8];
  TReferenceControllerBase<1> *local_30;
  TSharedRef<SWidget,1> local_28;
  TSharedRef<FUICommandInfo_const_,1> local_18;
  
  if ((this->_padding_ == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FReply *)(*pcVar3)();
    return pFVar7;
  }
  pTVar1 = *(TReferenceControllerBase<1> **)(this->_padding_ + 0x98);
  plVar11 = *(longlong **)(this->_padding_ + 0x90);
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((plVar11 == (longlong *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FReply *)(*pcVar3)();
    return pFVar7;
  }
  pcVar3 = *(code **)(*plVar11 + 0x18);
  if ((this->_padding_ == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FReply *)(*pcVar3)();
    return pFVar7;
  }
  local_78.Object = *(FUICommandInfo **)(this->_padding_ + 0x80);
  local_78.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)(this->_padding_ + 0x88);
  if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar8 = TSharedPtr<FUICommandInfo_const_,1>::ToSharedRef(&local_78,&local_18);
  (*pcVar3)(plVar11,pTVar8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  pTVar12 = (TReferenceControllerBase<1> *)this->_padding_;
  this_00 = (SMultiBoxWidget *)0x0;
  if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = pTVar12->SharedReferenceCount;
    do {
      if (aVar4 == (atomic<int>)0x0) {
        pTVar12 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142824724;
      }
      LOCK();
      aVar6 = pTVar12->SharedReferenceCount;
      bVar5 = aVar4 == aVar6;
      if (bVar5) {
        pTVar12->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar6 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar6;
    } while (!bVar5);
    this_00 = (SMultiBoxWidget *)this->_padding_;
    if (this_00 != (SMultiBoxWidget *)0x0) goto LAB_14282474a;
  }
LAB_142824724:
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar5) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FReply *)(*pcVar3)();
    return pFVar7;
  }
LAB_14282474a:
  SMultiBoxWidget::GetMultiBox(this_00,&local_48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  if ((local_48.Object)->bShouldCloseWindowAfterMenuSelection != false) {
    pFVar9 = FSlateApplication::Get();
    pcVar3 = *(code **)(*(longlong *)pFVar9 + 0x28);
    pTVar10 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_28);
    local_68 = pTVar10->Object;
    local_60 = (pTVar10->SharedReferenceCount).ReferenceController;
    if (local_60 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_60->SharedReferenceCount = (atomic<int>)((int)local_60->SharedReferenceCount + 1);
      UNLOCK();
    }
    plVar11 = (longlong *)(*pcVar3)(pFVar9,local_38,&local_68);
    if ((*plVar11 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x416,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FReply *)(*pcVar3)();
      return pFVar7;
    }
    lVar2 = *plVar11;
    pTVar12 = (TReferenceControllerBase<1> *)plVar11[1];
    plVar11[1] = 0;
    *plVar11 = 0;
    if ((lVar2 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x26c,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FReply *)(*pcVar3)();
      return pFVar7;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    pFVar9 = FSlateApplication::Get();
    pcVar3 = *(code **)(*(longlong *)pFVar9 + 0x140);
    if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_58 = lVar2;
    local_50 = pTVar12;
    (*pcVar3)(pFVar9,&local_58);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  }
  FReply::FReply(__return_storage_ptr__,true);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// OnIsChecked @ 1428278c0

ECheckBoxState __thiscall SButtonRowBlock::OnIsChecked(SButtonRowBlock *this)

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

