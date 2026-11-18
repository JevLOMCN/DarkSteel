// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 2

// BuildMultiBlockWidget @ 1427e2e00

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
SToolBarSeparatorBlock::BuildMultiBlockWidget
          (SToolBarSeparatorBlock *this,ISlateStyle *param_1,FName *param_2)

{
  undefined1 *puVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  SVerticalBox *pSVar4;
  SHorizontalBox *pSVar5;
  longlong lVar6;
  code *pcVar7;
  int iVar8;
  int iVar9;
  FToolBarStyle *pFVar10;
  FArguments *pFVar11;
  FSlot *this_00;
  FSizeParam *pFVar12;
  FArguments *pFVar13;
  TSharedRef<SSeparator,1> *pTVar14;
  TSharedRef<SVerticalBox,1> *pTVar15;
  FArguments *pFVar16;
  FSlot *this_01;
  TSharedRef<SHorizontalBox,1> *pTVar17;
  FText *pFVar18;
  undefined8 *puVar19;
  SMultiBoxWidget *pSVar20;
  SMultiBoxWidget *pSVar21;
  SMultiBoxWidget *pSVar22;
  SMultiBoxWidget *this_02;
  bool bVar23;
  T0RequiredArgs local_res8 [8];
  T0RequiredArgs local_res10 [8];
  T0RequiredArgs local_res18 [8];
  T0RequiredArgs local_res20 [8];
  FLLMScope local_d28;
  FLLMScope local_d24;
  FLLMScope local_d20;
  FLLMScope local_d1c;
  undefined8 local_d18;
  TReferenceControllerBase<1> *pTStack_d10;
  undefined8 local_d08;
  TReferenceControllerBase<1> *pTStack_d00;
  undefined8 local_cf8;
  FSharedReferencer<1> local_cf0;
  undefined8 local_ce8;
  FSharedReferencer<1> local_ce0;
  undefined1 local_cd8 [8];
  SMultiBoxWidget *local_cd0;
  FName local_cc8;
  FMemScope local_cc0;
  FName local_cb8;
  FMemScope local_cb0;
  SMultiBoxWidget *local_ca8;
  FName local_ca0;
  FMemScope local_c98;
  FName local_c90;
  FMemScope local_c88 [3];
  undefined1 local_c70;
  undefined1 local_c68 [8];
  void *pvStack_c60;
  undefined8 local_c58;
  undefined8 local_c50;
  undefined8 uStack_c48;
  undefined1 local_c40;
  undefined1 local_c38 [8];
  void *pvStack_c30;
  undefined8 local_c28;
  TSharedRef<FMultiBox_const_,1> local_c20;
  TAttribute<EVisibility> local_c10;
  FText local_bf0;
  TSharedPtr<SWidget,1> local_be0;
  TSharedRef<SSeparator,1> local_bd0;
  undefined1 local_bc0 [8];
  TReferenceControllerBase<1> *local_bb8;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_bb0;
  TSlateDecl<SSeparator,RequiredArgs::T0RequiredArgs> local_b98;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_b80;
  TSlateDecl<SSeparator,RequiredArgs::T0RequiredArgs> local_b68;
  TSharedRef<SVerticalBox,1> local_b50;
  TSharedRef<SSeparator,1> local_b40;
  TSharedRef<SHorizontalBox,1> local_b30;
  undefined1 local_b20 [16];
  undefined1 local_b10 [32];
  undefined1 local_af0 [24];
  undefined1 local_ad8 [16];
  undefined1 local_ac8 [32];
  undefined1 local_aa8 [24];
  undefined8 *local_a90;
  SSeparator *local_a88;
  FSharedReferencer<1> local_a80 [3];
  undefined1 local_a68;
  undefined1 local_a60 [40];
  FSlotArgumentsMixin local_a38;
  undefined8 *local_9a8;
  SSeparator *local_9a0;
  FSharedReferencer<1> local_998 [3];
  undefined1 local_980;
  undefined1 local_978 [40];
  FSlotArgumentsMixin local_950;
  FArguments local_8c0;
  FArguments local_6b8;
  undefined1 local_4b0 [544];
  undefined1 local_290 [24];
  undefined1 local_278 [544];
  undefined1 local_58 [32];
  
  pFVar10 = (FToolBarStyle *)
            (**(code **)((longlong)*param_1 + 0xa0))(param_1,FToolBarStyle::TypeName,*param_2,0,1);
  if (pFVar10 == (FToolBarStyle *)0x0) {
    pFVar10 = FToolBarStyle::GetDefault();
  }
  pSVar22 = *(SMultiBoxWidget **)&this->field_0x2b8;
  this_02 = (SMultiBoxWidget *)0x0;
  pSVar20 = pSVar22;
  pSVar21 = this_02;
  if (pSVar22 == (SMultiBoxWidget *)0x0) {
LAB_1427e2e85:
    bVar23 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    pSVar22 = pSVar20;
    if (bVar23) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  else {
    iVar8 = (int)pSVar22->_padding_;
    do {
      pSVar20 = this_02;
      pSVar21 = (SMultiBoxWidget *)0x0;
      if (iVar8 == 0) goto LAB_1427e2e85;
      LOCK();
      iVar9 = (int)pSVar22->_padding_;
      bVar23 = iVar8 == iVar9;
      if (bVar23) {
        *(int *)&pSVar22->_padding_ = iVar8 + 1;
        iVar9 = iVar8;
      }
      UNLOCK();
      iVar8 = iVar9;
    } while (!bVar23);
    pSVar21 = *(SMultiBoxWidget **)&this->field_0x2b0;
    pSVar20 = pSVar22;
    if (pSVar21 == (SMultiBoxWidget *)0x0) goto LAB_1427e2e85;
  }
  SMultiBoxWidget::GetMultiBox(pSVar21,&local_c20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar22);
  if ((local_c20.Object)->Type == VerticalToolBar) {
    pFVar11 = SVerticalBox::FArguments::FArguments(&local_8c0);
    this_00 = ::operator_new(0x58);
    local_cd0 = this_02;
    if (this_00 != (FSlot *)0x0) {
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
      local_cd0 = (SMultiBoxWidget *)SVerticalBox::FSlot::FSlot(this_00);
    }
    SVerticalBox::FSlot::FSlotArguments::FSlotArguments
              ((FSlotArguments *)&local_a90,(FSlot *)&local_cd0);
    pFVar12 = (FSizeParam *)FAuto::FAuto((FAuto *)local_b20);
    TOptional<FSizeParam>::operator=(&local_a38._SizeParam,pFVar12);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_af0);
    if ((void *)local_af0._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_af0._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_af0);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_b10);
    if ((void *)local_b10._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_b10._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_b10);
    local_c88[1]._0_4_ = (pFVar10->SeparatorPadding).Left;
    local_c88[1].PrevTag = (pFVar10->SeparatorPadding).Top;
    local_c88[2]._0_4_ = (pFVar10->SeparatorPadding).Right;
    local_c88[2].PrevTag = (pFVar10->SeparatorPadding).Bottom;
    local_c70 = 1;
    local_c58 = 0;
    local_a68 = 1;
    local_c68 = (undefined1  [8])0x0;
    pvStack_c60 = (void *)0x0;
    local_a80[1].ReferenceController = (TReferenceControllerBase<1> *)local_c88[1];
    local_a80[2].ReferenceController = (TReferenceControllerBase<1> *)local_c88[2];
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_a60,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_c68);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_c68);
    if (pvStack_c60 != (void *)0x0) {
      FMemory::Free(pvStack_c60);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_c68);
    pFVar13 = SSeparator::FArguments::FArguments((FArguments *)local_4b0);
    pFVar13->_Orientation = Orient_Horizontal;
    pFVar13->_Thickness = pFVar10->SeparatorThickness;
    pFVar13->_SeparatorImage = &pFVar10->SeparatorBrush;
    FLLMScope::FLLMScope(&local_d28,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_cc8 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_cc0,&local_cc8,true);
    TSlateDecl<SSeparator,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<SSeparator,RequiredArgs::T0RequiredArgs>
              (&local_b98,"SSeparator",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SToolBarSeparatorBlock.cpp"
               ,0x42,local_res8);
    FMemScope::~FMemScope(&local_cc0);
    FLLMScope::~FLLMScope(&local_d28);
    pTVar14 = TSlateDecl<SSeparator,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_b98,&local_b40,pFVar13);
    pTVar2 = (pTVar14->SharedReferenceCount).ReferenceController;
    local_a88 = pTVar14->Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_cf8 = 0;
    local_cf0.ReferenceController = pTVar2;
    SharedPointerInternals::FSharedReferencer<1>::operator=(local_a80,&local_cf0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_cf0.ReferenceController);
    pFVar11 = SVerticalBox::FArguments::operator+(pFVar11,(FSlotArguments *)&local_a90);
    FLLMScope::FLLMScope(&local_d24,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_cb8 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_cb0,&local_cb8,true);
    TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
              (&local_bb0,"SVerticalBox",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SToolBarSeparatorBlock.cpp"
               ,0x3d,local_res10);
    FMemScope::~FMemScope(&local_cb0);
    FLLMScope::~FLLMScope(&local_d24);
    pTVar15 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_bb0,&local_b50,pFVar11);
    puVar1 = &this->field_0x240;
    pTVar3 = (pTVar15->SharedReferenceCount).ReferenceController;
    pSVar4 = pTVar15->Object;
    if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
      FSlotBase::DetatchParentFromContent((FSlotBase *)puVar1);
    }
    else {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
      FSlotBase::DetatchParentFromContent((FSlotBase *)puVar1);
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_d18 = *(undefined8 *)&this->field_0x250;
    pTStack_d10 = *(TReferenceControllerBase<1> **)&this->field_0x258;
    *(SVerticalBox **)&this->field_0x250 = pSVar4;
    *(TReferenceControllerBase<1> **)&this->field_0x258 = pTVar3;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_d10)
    ;
    FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)puVar1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b50.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_bb0._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b40.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b98._Widget.SharedReferenceCount.ReferenceController);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_290);
    if ((void *)local_290._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_290._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_290);
    FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_4b0);
    TResizingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
              (&local_a38);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_a60);
    if ((void *)local_a60._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_a60._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_a60);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a80[0].ReferenceController);
    if (local_a90 != (undefined8 *)0x0) {
      (**(code **)*local_a90)(local_a90,1);
    }
    DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
              ((FSlotArguments *)local_8c0._Slots.AllocatorInstance.Data,local_8c0._Slots.ArrayNum);
    if ((FSlotArguments *)local_8c0._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
      FMemory::Free(local_8c0._Slots.AllocatorInstance.Data);
    }
    pFVar11 = &local_8c0;
  }
  else {
    pFVar16 = SHorizontalBox::FArguments::FArguments(&local_6b8);
    this_01 = ::operator_new(0x58);
    local_ca8 = this_02;
    if (this_01 != (FSlot *)0x0) {
      *(undefined8 *)this_01 = 0;
      *(undefined8 *)&this_01->field_0x8 = 0;
      *(undefined8 *)&this_01->field_0x10 = 0;
      *(undefined8 *)&this_01->field_0x18 = 0;
      *(undefined8 *)&this_01->field_0x20 = 0;
      *(undefined8 *)&this_01->field_0x28 = 0;
      *(undefined8 *)&this_01->field_0x30 = 0;
      *(undefined8 *)&this_01->field_0x38 = 0;
      *(undefined8 *)&this_01->field_0x40 = 0;
      *(undefined8 *)&this_01->field_0x48 = 0;
      *(undefined8 *)&this_01->field_0x50 = 0;
      local_ca8 = (SMultiBoxWidget *)SHorizontalBox::FSlot::FSlot(this_01);
    }
    SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
              ((FSlotArguments *)&local_9a8,(FSlot *)&local_ca8);
    pFVar12 = (FSizeParam *)FAuto::FAuto((FAuto *)local_ad8);
    TOptional<FSizeParam>::operator=(&local_950._SizeParam,pFVar12);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_aa8);
    if ((void *)local_aa8._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_aa8._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_aa8);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_ac8);
    if ((void *)local_ac8._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_ac8._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_ac8);
    local_c50._0_4_ = (pFVar10->SeparatorPadding).Left;
    local_c50._4_4_ = (pFVar10->SeparatorPadding).Top;
    uStack_c48._0_4_ = (pFVar10->SeparatorPadding).Right;
    uStack_c48._4_4_ = (pFVar10->SeparatorPadding).Bottom;
    local_c40 = 1;
    local_c28 = 0;
    local_980 = 1;
    local_c38 = (undefined1  [8])0x0;
    pvStack_c30 = (void *)0x0;
    local_998[1].ReferenceController = (TReferenceControllerBase<1> *)local_c50;
    local_998[2].ReferenceController = (TReferenceControllerBase<1> *)uStack_c48;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_978,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_c38);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_c38);
    if (pvStack_c30 != (void *)0x0) {
      FMemory::Free(pvStack_c30);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_c38);
    pFVar13 = SSeparator::FArguments::FArguments((FArguments *)local_278);
    pFVar13->_Orientation = Orient_Vertical;
    pFVar13->_Thickness = pFVar10->SeparatorThickness;
    pFVar13->_SeparatorImage = &pFVar10->SeparatorBrush;
    FLLMScope::FLLMScope(&local_d20,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_ca0 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_c98,&local_ca0,true);
    TSlateDecl<SSeparator,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<SSeparator,RequiredArgs::T0RequiredArgs>
              (&local_b68,"SSeparator",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SToolBarSeparatorBlock.cpp"
               ,0x52,local_res18);
    FMemScope::~FMemScope(&local_c98);
    FLLMScope::~FLLMScope(&local_d20);
    pTVar14 = TSlateDecl<SSeparator,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_b68,&local_bd0,pFVar13);
    pTVar2 = (pTVar14->SharedReferenceCount).ReferenceController;
    local_9a0 = pTVar14->Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_ce8 = 0;
    local_ce0.ReferenceController = pTVar2;
    SharedPointerInternals::FSharedReferencer<1>::operator=(local_998,&local_ce0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_ce0.ReferenceController);
    pFVar16 = SHorizontalBox::FArguments::operator+(pFVar16,(FSlotArguments *)&local_9a8);
    FLLMScope::FLLMScope(&local_d1c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_c90 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(local_c88,&local_c90,true);
    TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
              (&local_b80,"SHorizontalBox",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SToolBarSeparatorBlock.cpp"
               ,0x4d,local_res20);
    FMemScope::~FMemScope(local_c88);
    FLLMScope::~FLLMScope(&local_d1c);
    pTVar17 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_b80,&local_b30,pFVar16);
    puVar1 = &this->field_0x240;
    pTVar3 = (pTVar17->SharedReferenceCount).ReferenceController;
    pSVar5 = pTVar17->Object;
    if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
      FSlotBase::DetatchParentFromContent((FSlotBase *)puVar1);
    }
    else {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
      FSlotBase::DetatchParentFromContent((FSlotBase *)puVar1);
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_d08 = *(undefined8 *)&this->field_0x250;
    pTStack_d00 = *(TReferenceControllerBase<1> **)&this->field_0x258;
    *(SHorizontalBox **)&this->field_0x250 = pSVar5;
    *(TReferenceControllerBase<1> **)&this->field_0x258 = pTVar3;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_d00)
    ;
    FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)puVar1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b30.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b80._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_bd0.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b68._Widget.SharedReferenceCount.ReferenceController);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_58);
    if ((void *)local_58._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_58._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_58);
    FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_278);
    TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
              (&local_950);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_978);
    if ((void *)local_978._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_978._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_978);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_998[0].ReferenceController);
    if (local_9a8 != (undefined8 *)0x0) {
      (**(code **)*local_9a8)(local_9a8,1);
    }
    DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
              ((FSlotArguments *)local_6b8._Slots.AllocatorInstance.Data,local_6b8._Slots.ArrayNum);
    if ((FSlotArguments *)local_6b8._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
      FMemory::Free(local_6b8._Slots.AllocatorInstance.Data);
    }
    pFVar11 = (FArguments *)&local_6b8;
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)pFVar11);
  pSVar22 = *(SMultiBoxWidget **)&this->field_0x2b8;
  pSVar21 = pSVar22;
  if (pSVar22 != (SMultiBoxWidget *)0x0) {
    iVar8 = (int)pSVar22->_padding_;
    do {
      pSVar21 = this_02;
      if (iVar8 == 0) goto LAB_1427e3756;
      LOCK();
      iVar9 = (int)pSVar22->_padding_;
      bVar23 = iVar8 == iVar9;
      if (bVar23) {
        *(int *)&pSVar22->_padding_ = iVar8 + 1;
        iVar9 = iVar8;
      }
      UNLOCK();
      iVar8 = iVar9;
    } while (!bVar23);
    this_02 = *(SMultiBoxWidget **)&this->field_0x2b0;
    pSVar21 = pSVar22;
    if (this_02 != (SMultiBoxWidget *)0x0) goto LAB_1427e377c;
  }
LAB_1427e3756:
  bVar23 = ::FDebug::CheckVerifyFailedImpl2
                     ("IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                      ,0x458,L"");
  pSVar22 = pSVar21;
  if (bVar23) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
LAB_1427e377c:
  if ((*(longlong *)&this->field_0x2c0 == 0) &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar23)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  bVar23 = *(bool *)(*(longlong *)&this->field_0x2c0 + 0xbc);
  pFVar18 = FText::GetEmpty();
  local_bf0.TextData.Reference = (pFVar18->TextData).Reference;
  if (local_bf0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_bf0.TextData.Reference + 8))
              (local_bf0.TextData.Reference,local_cd8);
  }
  local_bf0.Flags = pFVar18->Flags;
  puVar19 = (undefined8 *)(**(code **)(*(longlong *)this + 8))(this,local_bc0);
  local_be0.Object = (SWidget *)*puVar19;
  local_be0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)puVar19[1];
  if (local_be0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_be0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_be0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SMultiBoxWidget::AddElement(this_02,&local_be0,&local_bf0,bVar23);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_bb8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar22);
  if ((*(longlong *)&this->field_0x2c0 == 0) &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar23)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  lVar6 = *(longlong *)&this->field_0x2c0;
  local_c10.Value.Value.Value = *(TEnumAsByte<EVisibility::Private> *)(lVar6 + 0xc0);
  local_c10.bIsSet = *(bool *)(lVar6 + 0xc1);
  local_c10.Getter._0_8_ = 0;
  local_c10.Getter._8_8_ = 0;
  local_c10.Getter._16_4_ = 0;
  TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&local_c10.Getter,
             (TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)(lVar6 + 200));
  SCompoundWidget::SetVisibility((SCompoundWidget *)&this->field_0x8,&local_c10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c20.SharedReferenceCount.ReferenceController);
  return;
}

// Construct @ 1427efc10

void __thiscall SToolBarSeparatorBlock::Construct(SToolBarSeparatorBlock *this,FArguments *param_1)

{
  return;
}

