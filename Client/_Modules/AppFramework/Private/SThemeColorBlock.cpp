// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 21

// ~SThemeColorBlock @ 14301b280

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SThemeColorBlock::~SThemeColorBlock(SThemeColorBlock *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->bSupportsDrag).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->bUseAlpha).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->bUseSRGB).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->HideTrashCallback);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ShowTrashCallback);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnSelectColor);
  pTVar3 = (this->ParentPtr).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ColorInfo).SharedReferenceCount.ReferenceController);
  pTVar3 = (this->ColorPtr).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  return;
}

// Construct @ 143024a40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SThemeColorBlock::Construct(SThemeColorBlock *this,FArguments *param_1)

{
  atomic<int> *paVar1;
  byte *pbVar2;
  TAttribute<TSharedPtr<FLinearColor,1>_> *pTVar3;
  TAttribute<TSharedPtr<FColorInfo,1>_> *pTVar4;
  TAttribute<TSharedPtr<SThemeColorBlocksBar,1>_> *pTVar5;
  atomic<int> aVar6;
  longlong *plVar7;
  TReferenceControllerBase<1> *pTVar8;
  FColorInfo *pFVar9;
  code *pcVar10;
  SWidget *pSVar11;
  SColorBlock *pSVar12;
  TReferenceControllerBase<1> *pTVar13;
  TReferenceControllerBase<1> *pTVar14;
  TReferenceControllerBase<1> *pTVar15;
  SHorizontalBox *pSVar16;
  bool bVar17;
  bool bVar18;
  float fVar19;
  float fVar20;
  FName FVar21;
  uint uVar22;
  char cVar23;
  bool bVar24;
  ISlateStyle *pIVar25;
  FName *pFVar26;
  FSlot *pFVar27;
  FSizeParam *pFVar28;
  FSlot *pFVar29;
  FArguments *pFVar30;
  FArguments *pFVar31;
  undefined8 *puVar32;
  TSharedRef<SWidget_const_,1> *pTVar33;
  ulong64 uVar34;
  TSharedRef<SColorBlock,1> *pTVar35;
  TSharedRef<SBox,1> *pTVar36;
  FArguments *pFVar37;
  FSlot *pFVar38;
  FSlotArguments *pFVar39;
  undefined1 *puVar40;
  FArguments *pFVar41;
  TSharedRef<SWidget,1> *pTVar42;
  TSharedRef<STextBlock,1> *pTVar43;
  FArguments *pFVar44;
  TSharedRef<SVerticalBox,1> *pTVar45;
  FSlotArguments *pFVar46;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *pTVar47;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> *pTVar48;
  FArguments *pFVar49;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> *pTVar50;
  TSharedRef<SHorizontalBox,1> *pTVar51;
  SToolTip *pSVar52;
  SToolTip *pSVar53;
  FArguments *pFVar54;
  TAttribute<TSharedPtr<IToolTip,1>_> *pTVar55;
  bool *pbVar56;
  TAttribute<EColorBlockAlphaDisplayMode> *pTVar57;
  TAttribute<bool> *pTVar58;
  TAttribute<UE::Math::TVector2<double>_> *pTVar59;
  TVector4<double> *pTVar60;
  TAttribute<UE::Math::TVector4<double>_> *pTVar61;
  TSlateDecl<SColorBlock,RequiredArgs::T0RequiredArgs> *this_00;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> *this_01;
  TSharedRef<SBorder,1> *pTVar62;
  FSlot *pFVar63;
  TReferenceControllerBase<1> *pTVar64;
  undefined4 local_res8;
  undefined4 uStackX_c;
  bool local_res10 [8];
  T0RequiredArgs local_res18 [8];
  T0RequiredArgs local_res20 [8];
  uint uStack_632c;
  T0RequiredArgs local_6328;
  T0RequiredArgs local_6327;
  T0RequiredArgs local_6326;
  T0RequiredArgs local_6325;
  T0RequiredArgs local_6324;
  T0RequiredArgs local_6323;
  T0RequiredArgs local_6322;
  T0RequiredArgs local_6321;
  T0RequiredArgs local_6320;
  T0RequiredArgs local_631f;
  T0RequiredArgs local_631e;
  T0RequiredArgs local_631d;
  T0RequiredArgs local_631c;
  T0RequiredArgs local_631b;
  T0RequiredArgs local_631a;
  T0RequiredArgs local_6319;
  FArguments *local_6318;
  code *local_6308;
  undefined8 uStack_6300;
  FArguments *local_62f8;
  undefined4 uStack_62f0;
  uint uStack_62ec;
  FLLMScope local_62e8;
  FLLMScope local_62e4;
  FLLMScope local_62e0;
  FLLMScope local_62dc;
  FLLMScope local_62d8;
  FLLMScope local_62d4;
  FLLMScope local_62d0;
  FLLMScope local_62cc;
  undefined4 local_62c8;
  undefined1 local_62c4;
  undefined1 local_62c0 [8];
  ForAnyElementType FStack_62b8;
  ulonglong local_62b0;
  undefined4 local_62a8;
  undefined1 local_62a4;
  undefined1 local_62a0 [8];
  ForAnyElementType FStack_6298;
  ulonglong local_6290;
  undefined2 local_6288;
  undefined1 local_6280 [8];
  ForAnyElementType FStack_6278;
  ulonglong local_6270;
  FArguments *local_6268;
  FSlotArguments *local_6260;
  FSlotArguments *local_6258;
  FSlotArguments *local_6248;
  longlong lStack_6240;
  FArguments *local_6238;
  FName local_6230;
  SBox *local_6228;
  FSharedReferencer<1> local_6220;
  FName local_6218;
  STextBlock *local_6210;
  FSharedReferencer<1> local_6208;
  STextBlock *local_6200;
  FSharedReferencer<1> local_61f8;
  FName local_61f0;
  FArguments *local_61e8;
  FName local_61e0;
  TSlateDecl<SToolTip,RequiredArgs::T0RequiredArgs> local_61d8;
  SWidget *local_61c0;
  TReferenceControllerBase<1> *pTStack_61b8;
  TSharedPtr<SToolTip,1> local_61a8;
  FLinearColor *local_6198;
  FSharedReferencer<1> local_6190;
  TSharedRef<SColorBlock,1> local_6188;
  FColorInfo *local_6178;
  FSharedReferencer<1> local_6170;
  SThemeColorBlocksBar *local_6168;
  FSharedReferencer<1> local_6160;
  SWidget *local_6158;
  TReferenceControllerBase<1> *pTStack_6150;
  FSlot *local_6148;
  FName local_6140;
  FMemScope local_6138;
  FMemScope local_6130;
  FMemScope local_6128;
  FSlot *local_6120;
  FSlot *local_6118;
  FSlot *local_6110;
  FName local_6108;
  FMemScope local_6100;
  FName local_60f8;
  FMemScope local_60f0;
  FName local_60e8;
  TSharedRef<SWidget,1> local_60e0;
  TSharedRef<SWidget,1> local_60d0;
  TSharedRef<SWidget,1> local_60c0;
  TSharedRef<SWidget,1> local_60b0;
  TSharedRef<SWidget,1> local_60a0;
  TSharedRef<SWidget,1> local_6090;
  TSharedRef<SWidget,1> local_6080;
  TSharedRef<SWidget,1> local_6070;
  TSharedRef<SWidget,1> local_6060;
  TSharedRef<SWidget,1> local_6050;
  FMemScope local_6040;
  FMemScope local_6038;
  undefined4 local_6030 [2];
  undefined4 local_6028 [2];
  FSlot *local_6020;
  FMemScope local_6018;
  TAttribute<float> local_6010;
  TAttribute<float> local_5ff0;
  TSharedRef<SThemeColorBlock,1> local_5fd0;
  TSharedRef<SWidget,1> local_5fc0;
  TSharedRef<SThemeColorBlock,1> local_5fb0;
  TSharedRef<SWidget,1> local_5fa0;
  TAttribute<bool> local_5f90;
  TAttribute<FSlateBrush_const_*> local_5f70;
  FDestructionSentinel local_5f48;
  FDestructionSentinel local_5f30;
  FDestructionSentinel local_5f18;
  FDestructionSentinel local_5f00;
  undefined1 *local_5ee8;
  FDestructionSentinel local_5ee0;
  undefined1 *local_5ec8;
  TAttribute<FMargin> local_5ec0;
  code *local_5e88;
  undefined4 uStack_5e80;
  uint uStack_5e7c;
  TSharedRef<SWidget,1> local_5e78;
  TSharedRef<SHorizontalBox,1> local_5e68;
  TSharedRef<SVerticalBox,1> local_5e58;
  TSharedRef<STextBlock,1> local_5e48;
  TSharedRef<SHorizontalBox,1> local_5e38;
  TSharedRef<SVerticalBox,1> local_5e28;
  TSharedRef<STextBlock,1> local_5e18;
  TSharedRef<STextBlock,1> local_5e08;
  TSharedRef<STextBlock,1> local_5df8;
  TSharedRef<SVerticalBox,1> local_5de8;
  TSharedRef<STextBlock,1> local_5dd8;
  TSharedRef<STextBlock,1> local_5dc8;
  TSharedRef<STextBlock,1> local_5db8;
  TSharedRef<STextBlock,1> local_5da8;
  TSharedRef<SBox,1> local_5d98;
  TSharedRef<SColorBlock,1> local_5d88;
  code *local_5d78;
  TReferenceControllerBase<1> *pTStack_5d70;
  TVector2<double>_u_0 local_5d68;
  TSharedRef<SBorder,1> local_5d58;
  FName local_5d48;
  FName local_5d40;
  FName local_5d38;
  FColorInfo *local_5d30;
  TReferenceControllerBase<1> *pTStack_5d28;
  code *local_5d18;
  longlong lStack_5d10;
  FReadAccessScope local_5d08;
  FReadAccessScope local_5cf0;
  FReadAccessScope local_5cd8;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_5cc0;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_5ca8;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_5c90;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_5c78;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_5c60;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_5c48;
  TSlateDecl<SColorBlock,RequiredArgs::T0RequiredArgs> local_5c30;
  TSharedRef<SWidget_const_,1> local_5c18;
  TSharedRef<SWidget_const_,1> local_5c08;
  code *local_5bf8;
  longlong lStack_5bf0;
  TSharedRef<SWidget,1> local_5be8;
  code *local_5bd8;
  longlong lStack_5bd0;
  code *local_5bc8;
  longlong lStack_5bc0;
  code *local_5bb8;
  longlong lStack_5bb0;
  code *local_5ba8;
  longlong lStack_5ba0;
  code *local_5b98;
  undefined4 uStack_5b90;
  uint uStack_5b8c;
  code *local_5b88;
  undefined4 uStack_5b80;
  uint uStack_5b7c;
  FSlateFontInfo local_5b78;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_5b18;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_5b00;
  TSlateDecl<SColorBlock,RequiredArgs::T0RequiredArgs> local_5ae8;
  FReadAccessScope local_5ad0;
  FReadAccessScope local_5ab8;
  FReadAccessScope local_5aa0;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_5a88;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_5a70;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_5a58;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_5a40;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_5a28;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_5a10;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_59f8;
  TAttribute<FSlateFontInfo> local_59e0;
  TAttribute<FSlateFontInfo> local_5960;
  TAttribute<FSlateFontInfo> local_58e0;
  TAttribute<FSlateFontInfo> local_5860;
  TAttribute<FSlateFontInfo> local_57e0;
  TAttribute<FSlateFontInfo> local_5760;
  TAttribute<FSlateFontInfo> local_56e0;
  TAttribute<FSlateFontInfo> local_5660;
  undefined1 local_55e0 [48];
  TDelegateBase<FNotThreadSafeDelegateMode> local_55b0;
  undefined1 local_5598 [48];
  TDelegateBase<FNotThreadSafeDelegateMode> local_5568;
  undefined1 local_5550 [48];
  TDelegateBase<FNotThreadSafeDelegateMode> local_5520;
  undefined1 local_5508 [48];
  TDelegateBase<FNotThreadSafeDelegateMode> local_54d8;
  undefined1 local_54c0 [48];
  TDelegateBase<FNotThreadSafeDelegateMode> local_5490;
  undefined1 local_5478 [48];
  TDelegateBase<FNotThreadSafeDelegateMode> local_5448;
  undefined1 local_5430 [48];
  TDelegateBase<FNotThreadSafeDelegateMode> local_5400;
  undefined1 local_53e8 [32];
  TAttribute<bool> local_53c8;
  TAttribute<bool> local_53a8;
  TAttribute<bool> local_5388;
  TVector4<double> local_5368;
  FSlateFontInfo local_5348;
  TAttribute<TSharedPtr<IToolTip,1>_> local_52e8;
  TAttribute<UE::Math::TVector2<double>_> local_52b8;
  undefined1 local_5288 [88];
  TOptional<FSizeParam> local_5230;
  undefined1 local_51a0 [88];
  TOptional<FSizeParam> local_5148;
  undefined1 local_50b8 [88];
  TOptional<FSizeParam> local_5060;
  undefined1 local_4fd0 [88];
  TOptional<FSizeParam> local_4f78;
  undefined1 local_4ee8 [88];
  TOptional<FSizeParam> local_4e90;
  undefined1 local_4e00 [88];
  TOptional<FSizeParam> local_4da8;
  undefined1 local_4d18 [240];
  TAttribute<UE::Math::TVector4<double>_> local_4c28;
  FSlotArguments local_4be8;
  FArguments local_4b00;
  FSlotArguments local_47b8;
  FSlotArguments local_46d0;
  FSlotArguments local_45e8;
  FSlotArguments local_4500;
  FSlotArguments local_4418;
  FArguments local_4330;
  FArguments local_4128;
  FArguments local_3f20;
  FArguments local_3d18;
  FArguments local_3b10;
  FArguments local_3908;
  FArguments local_35c8;
  FArguments local_3268;
  FArguments local_2f08;
  FArguments local_2b28;
  FArguments local_25d0;
  FArguments local_2078;
  FArguments local_1b20;
  FArguments local_15c8;
  FArguments local_1070;
  FArguments local_b18;
  FArguments local_5c0;
  undefined8 uStack_48;
  
  uStack_48 = 0x143024a5f;
  pTVar3 = &param_1->_Color;
  pFVar63 = (FSlot *)0x0;
  local_res8 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(param_1->_Color).Getter,
             &local_5d08);
  if (((*(int *)&(param_1->_Color).Getter.field_0x10 == 0) ||
      (plVar7 = *(longlong **)&(param_1->_Color).Getter.field_0x8, plVar7 == (longlong *)0x0)) ||
     (cVar23 = (**(code **)(*plVar7 + 0x38))(), cVar23 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_5d08);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_5d08);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(param_1->_Color).Getter,
               &local_5ad0);
    pFVar27 = pFVar63;
    if (*(int *)&(param_1->_Color).Getter.field_0x10 != 0) {
      pFVar27 = *(FSlot **)&(param_1->_Color).Getter.field_0x8;
    }
    (**(code **)(*(longlong *)pFVar27 + 0x60))(pFVar27,&local_6198);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_5ad0);
    if (pTVar3 != (TAttribute<TSharedPtr<FLinearColor,1>_> *)&local_6198) {
      (pTVar3->Value).Object = local_6198;
      local_6198 = (FLinearColor *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(param_1->_Color).Value.SharedReferenceCount,&local_6190);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_6190.ReferenceController);
  }
  (this->ColorPtr).Object = (pTVar3->Value).Object;
  pTVar64 = (param_1->_Color).Value.SharedReferenceCount.ReferenceController;
  if (pTVar64 != (this->ColorPtr).WeakReferenceCount.ReferenceController) {
    if (pTVar64 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar64->WeakReferenceCount = (atomic<int>)((int)pTVar64->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar8 = (this->ColorPtr).WeakReferenceCount.ReferenceController;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar8->WeakReferenceCount;
      aVar6 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar6 == (atomic<int>)0x1) {
        (**(code **)(pTVar8->_padding_ + 8))(pTVar8,1);
      }
    }
    (this->ColorPtr).WeakReferenceCount.ReferenceController = pTVar64;
  }
  pTVar4 = &param_1->_ColorInfo;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(param_1->_ColorInfo).Getter
             ,&local_5cf0);
  if (((*(int *)&(param_1->_ColorInfo).Getter.field_0x10 == 0) ||
      (plVar7 = *(longlong **)&(param_1->_ColorInfo).Getter.field_0x8, plVar7 == (longlong *)0x0))
     || (cVar23 = (**(code **)(*plVar7 + 0x38))(), cVar23 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_5cf0);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_5cf0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(param_1->_ColorInfo).Getter,&local_5ab8);
    pFVar27 = pFVar63;
    if (*(int *)&(param_1->_ColorInfo).Getter.field_0x10 != 0) {
      pFVar27 = *(FSlot **)&(param_1->_ColorInfo).Getter.field_0x8;
    }
    (**(code **)(*(longlong *)pFVar27 + 0x60))(pFVar27,&local_6178);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_5ab8);
    if (pTVar4 != (TAttribute<TSharedPtr<FColorInfo,1>_> *)&local_6178) {
      (pTVar4->Value).Object = local_6178;
      local_6178 = (FColorInfo *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(param_1->_ColorInfo).Value.SharedReferenceCount,&local_6170);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_6170.ReferenceController);
  }
  pTVar64 = (param_1->_ColorInfo).Value.SharedReferenceCount.ReferenceController;
  pFVar9 = (pTVar4->Value).Object;
  if (pTVar64 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar64->SharedReferenceCount = (atomic<int>)((int)pTVar64->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_5d30 = (this->ColorInfo).Object;
  pTStack_5d28 = (this->ColorInfo).SharedReferenceCount.ReferenceController;
  (this->ColorInfo).Object = pFVar9;
  (this->ColorInfo).SharedReferenceCount.ReferenceController = pTVar64;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_5d28);
  TDelegate<void___cdecl(FLinearColor),FDefaultDelegateUserPolicy>::operator=
            (&this->OnSelectColor,&param_1->_OnSelectColor);
  pTVar5 = &param_1->_Parent;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(param_1->_Parent).Getter,
             &local_5cd8);
  if (((*(int *)&(param_1->_Parent).Getter.field_0x10 == 0) ||
      (plVar7 = *(longlong **)&(param_1->_Parent).Getter.field_0x8, plVar7 == (longlong *)0x0)) ||
     (cVar23 = (**(code **)(*plVar7 + 0x38))(), cVar23 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_5cd8);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_5cd8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(param_1->_Parent).Getter,
               &local_5aa0);
    pFVar27 = pFVar63;
    if (*(int *)&(param_1->_Parent).Getter.field_0x10 != 0) {
      pFVar27 = *(FSlot **)&(param_1->_Parent).Getter.field_0x8;
    }
    (**(code **)(*(longlong *)pFVar27 + 0x60))(pFVar27,&local_6168);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_5aa0);
    if (pTVar5 != (TAttribute<TSharedPtr<SThemeColorBlocksBar,1>_> *)&local_6168) {
      (pTVar5->Value).Object = local_6168;
      local_6168 = (SThemeColorBlocksBar *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(param_1->_Parent).Value.SharedReferenceCount,&local_6160);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_6160.ReferenceController);
  }
  (this->ParentPtr).Object = (pTVar5->Value).Object;
  pTVar64 = (param_1->_Parent).Value.SharedReferenceCount.ReferenceController;
  if (pTVar64 != (this->ParentPtr).WeakReferenceCount.ReferenceController) {
    if (pTVar64 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar64->WeakReferenceCount = (atomic<int>)((int)pTVar64->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar8 = (this->ParentPtr).WeakReferenceCount.ReferenceController;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar8->WeakReferenceCount;
      aVar6 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar6 == (atomic<int>)0x1) {
        (**(code **)(pTVar8->_padding_ + 8))(pTVar8,1);
      }
    }
    (this->ParentPtr).WeakReferenceCount.ReferenceController = pTVar64;
  }
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->ShowTrashCallback,&param_1->_ShowTrashCallback);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->HideTrashCallback,&param_1->_HideTrashCallback);
  (this->bUseSRGB).Value = (param_1->_UseSRGB).Value;
  (this->bUseSRGB).bIsSet = (param_1->_UseSRGB).bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->bUseSRGB).Getter,&(param_1->_UseSRGB).Getter);
  (this->bUseAlpha).Value = (param_1->_UseAlpha).Value;
  (this->bUseAlpha).bIsSet = (param_1->_UseAlpha).bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->bUseAlpha).Getter,&(param_1->_UseAlpha).Getter);
  (this->bSupportsDrag).Value = (param_1->_SupportsDrag).Value;
  (this->bSupportsDrag).bIsSet = (param_1->_SupportsDrag).bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->bSupportsDrag).Getter,&(param_1->_SupportsDrag).Getter);
  pIVar25 = FAppStyle::Get();
  pcVar10 = *(code **)((longlong)*pIVar25 + 0x88);
  pFVar26 = ::FName::FName(&local_5d48,"Regular");
  (*pcVar10)(pIVar25,&local_5b78,*pFVar26);
  pIVar25 = FAppStyle::Get();
  pcVar10 = *(code **)((longlong)*pIVar25 + 0x88);
  ::FName::FName(&local_5d40,"Bold");
  (*pcVar10)(pIVar25,&local_5348);
  local_6230 = (FName)SToolTip::FArguments::FArguments(&local_4b00);
  local_6238 = SHorizontalBox::FArguments::FArguments(&local_3d18);
  pFVar27 = ::operator_new(0x58);
  local_6148 = pFVar63;
  if (pFVar27 != (FSlot *)0x0) {
    *(undefined8 *)pFVar27 = 0;
    *(undefined8 *)&pFVar27->field_0x8 = 0;
    *(undefined8 *)&pFVar27->field_0x10 = 0;
    *(undefined8 *)&pFVar27->field_0x18 = 0;
    *(undefined8 *)&pFVar27->field_0x20 = 0;
    *(undefined8 *)&pFVar27->field_0x28 = 0;
    *(undefined8 *)&pFVar27->field_0x30 = 0;
    *(undefined8 *)&pFVar27->field_0x38 = 0;
    *(undefined8 *)&pFVar27->field_0x40 = 0;
    *(undefined8 *)&pFVar27->field_0x48 = 0;
    *(undefined8 *)&pFVar27->field_0x50 = 0;
    local_6148 = SHorizontalBox::FSlot::FSlot(pFVar27);
  }
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_4d18,(FSlot *)&local_6148);
  pFVar28 = (FSizeParam *)FAuto::FAuto((FAuto *)local_5430);
  TOptional<FSizeParam>::operator=((TOptional<FSizeParam> *)(local_4d18 + 0x58),pFVar28);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_5400)
  ;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_5430 + 0x10));
  local_61e8 = SVerticalBox::FArguments::FArguments(&local_3f20);
  pFVar29 = ::operator_new(0x58);
  local_6020 = pFVar63;
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
    local_6020 = (FSlot *)SVerticalBox::FSlot::FSlot(pFVar29);
  }
  SVerticalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_4e00,(FSlot *)&local_6020);
  pFVar28 = (FSizeParam *)FAuto::FAuto((FAuto *)local_55e0);
  TOptional<FSizeParam>::operator=(&local_4da8,pFVar28);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_55b0)
  ;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_55e0 + 0x10));
  fVar20 = __real_40000000;
  local_61f0 = (FName)TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                                ((FSlotArgumentsMixin *)(local_4e00 + 0x18),__real_40000000);
  pFVar30 = SBox::FArguments::FArguments(&local_3908);
  local_62c8 = 0x42dc0000;
  local_62c4 = 1;
  local_62c0 = (undefined1  [8])0x0;
  FStack_62b8.Data = (FScriptContainerElement *)0x0;
  local_62b0 = 0;
  (pFVar30->_WidthOverride).Value.Size = 110.0;
  (pFVar30->_WidthOverride).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar30->_WidthOverride).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_62c0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_62c0,
             (FWriteAccessScope *)&local_5f48);
  if (((int)local_62b0 != 0) && (FStack_62b8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_62b8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_62b8,0,0,0x10);
    local_62b0 = local_62b0 & 0xffffffff00000000;
  }
  if (local_5f48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_5f48.Accessor,&local_5f48);
  }
  if (FStack_62b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_62b8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_62c0);
  local_62a8 = 0x42dc0000;
  local_62a4 = 1;
  local_6290 = 0;
  local_62a0 = (undefined1  [8])0x0;
  FStack_6298.Data = (FScriptContainerElement *)0x0;
  (pFVar30->_HeightOverride).Value.Size = 110.0;
  (pFVar30->_HeightOverride).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar30->_HeightOverride).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_62a0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_62a0,
             (FWriteAccessScope *)&local_5f30);
  if (((int)local_6290 != 0) && (FStack_6298.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_6298.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_6298,0,0,0x10);
    local_6290 = local_6290 & 0xffffffff00000000;
  }
  if (local_5f30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_5f30.Accessor,&local_5f30);
  }
  if (FStack_6298.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_6298.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_62a0);
  pFVar31 = SColorBlock::FArguments::FArguments(&local_35c8);
  lStack_5d10 = (ulonglong)uStack_632c << 0x20;
  local_5d18 = GetColor;
  pFVar31 = SColorBlock::FArguments::Color<SThemeColorBlock>
                      (pFVar31,this,(pmf_bc5f83b2 *)&local_5d18);
  local_6288 = 0x101;
  local_6270 = 0;
  local_6280 = (undefined1  [8])0x0;
  FStack_6278.Data = (FScriptContainerElement *)0x0;
  (pFVar31->_ColorIsHSV).Value = true;
  (pFVar31->_ColorIsHSV).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar31->_ColorIsHSV).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_6280);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_6280,
             (FWriteAccessScope *)&local_5f18);
  if (((int)local_6270 != 0) && (FStack_6278.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_6278.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_6278,0,0,0x10);
    local_6270 = local_6270 & 0xffffffff00000000;
  }
  if (local_5f18.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_5f18.Accessor,&local_5f18);
  }
  if (FStack_6278.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_6278.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_6280);
  (pFVar31->_AlphaDisplayMode).bIsSet = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(pFVar31->_AlphaDisplayMode).Getter,(FWriteAccessScope *)&local_5f00);
  local_5ee8 = &(pFVar31->_AlphaDisplayMode).Getter.field_0x8;
  puVar32 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_5ee8);
  uVar22 = local_6188.SharedReferenceCount.ReferenceController._4_4_;
  if (puVar32 == (undefined8 *)0x0) {
    pTVar64 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
  }
  else {
    uStack_632c = local_6188.SharedReferenceCount.ReferenceController._4_4_;
    pTVar33 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_5c18);
    pTVar64 = (pTVar33->SharedReferenceCount).ReferenceController;
    pSVar11 = pTVar33->Object;
    if (pTVar64 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar64->SharedReferenceCount = (atomic<int>)((int)pTVar64->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar64->SharedReferenceCount = (atomic<int>)((int)pTVar64->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar32 = &
               ___7__TCommonDelegateInstanceState___A6A_AW4EColorBlockAlphaDisplayMode__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar34 = FDelegateHandle::GenerateNewID();
    puVar32[2] = uVar34;
    *puVar32 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSThemeColorBlock___00__A6A_AW4EColorBlockAlphaDisplayMode__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar32[3] = pSVar11;
    puVar32[4] = pTVar64;
    if (pTVar64 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar64->WeakReferenceCount = (atomic<int>)((int)pTVar64->WeakReferenceCount + 1);
      UNLOCK();
    }
    pFVar63 = (FSlot *)&DAT_00000007;
    puVar32[5] = OnGetAlphaDisplayMode;
    puVar32[6] = (ulonglong)uVar22 << 0x20;
  }
  if (((ulonglong)pFVar63 & 4) != 0) {
    pFVar63 = (FSlot *)(ulonglong)((uint)pFVar63 & 0xfffffffb);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar64);
  }
  if (((ulonglong)pFVar63 & 2) != 0) {
    pFVar63 = (FSlot *)(ulonglong)((uint)pFVar63 & 0xfffffffd);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar64);
  }
  if (((ulonglong)pFVar63 & 1) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_5c18.SharedReferenceCount.ReferenceController);
  }
  bVar18 = false;
  bVar17 = false;
  bVar24 = false;
  if (local_5f00.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_5f00.Accessor,&local_5f00);
  }
  (pFVar31->_ShowBackgroundForAlpha).bIsSet = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(pFVar31->_ShowBackgroundForAlpha).Getter,(FWriteAccessScope *)&local_5ee0);
  local_5ec8 = &(pFVar31->_ShowBackgroundForAlpha).Getter.field_0x8;
  puVar32 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_5ec8);
  uVar22 = local_6188.SharedReferenceCount.ReferenceController._4_4_;
  if (puVar32 == (undefined8 *)0x0) {
    pTVar64 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
  }
  else {
    uStack_632c = local_6188.SharedReferenceCount.ReferenceController._4_4_;
    pTVar33 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_5c08);
    pTVar64 = (pTVar33->SharedReferenceCount).ReferenceController;
    local_61e0 = (FName)pTVar33->Object;
    if (pTVar64 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar64->SharedReferenceCount = (atomic<int>)((int)pTVar64->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar64->SharedReferenceCount = (atomic<int>)((int)pTVar64->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar18 = true;
    bVar17 = true;
    bVar24 = true;
    *puVar32 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar34 = FDelegateHandle::GenerateNewID();
    puVar32[2] = uVar34;
    *puVar32 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSThemeColorBlock___00__A6A_NXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FName *)(puVar32 + 3) = local_61e0;
    puVar32[4] = pTVar64;
    if (pTVar64 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar64->WeakReferenceCount = (atomic<int>)((int)pTVar64->WeakReferenceCount + 1);
      UNLOCK();
    }
    puVar32[5] = OnReadShowBackgroundForAlpha;
    puVar32[6] = (ulonglong)uVar22 << 0x20;
  }
  if (bVar24) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar64);
  }
  if (bVar17) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar64);
  }
  if (bVar18) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_5c08.SharedReferenceCount.ReferenceController);
  }
  if (local_5ee0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_5ee0.Accessor,&local_5ee0);
  }
  local_5f90.Value = (this->bUseSRGB).Value;
  local_5f90.bIsSet = (this->bUseSRGB).bIsSet;
  local_5f90.Getter._0_8_ = 0;
  local_5f90.Getter._8_8_ = 0;
  local_5f90.Getter._16_4_ = 0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&local_5f90.Getter,&(this->bUseSRGB).Getter);
  pFVar31 = SColorBlock::FArguments::UseSRGB(pFVar31,&local_5f90);
  FLLMScope::FLLMScope(&local_62e8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_61e0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_6018,&local_61e0,true);
  TSlateDecl<SColorBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SColorBlock,RequiredArgs::T0RequiredArgs>
            (&local_5c30,"SColorBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorThemes.cpp"
             ,0x10a,local_res18);
  FMemScope::~FMemScope(&local_6018);
  FLLMScope::~FLLMScope(&local_62e8);
  pTVar35 = TSlateDecl<SColorBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_5c30,&local_5d88,pFVar31);
  pTVar64 = (pTVar35->SharedReferenceCount).ReferenceController;
  pSVar12 = pTVar35->Object;
  if (pTVar64 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar64->SharedReferenceCount = (atomic<int>)((int)pTVar64->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar64->SharedReferenceCount = (atomic<int>)((int)pTVar64->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_61c0 = (pFVar30->_Content).Widget.Object;
  pTStack_61b8 = (pFVar30->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar30->_Content).Widget.Object = (SWidget *)pSVar12;
  (pFVar30->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar64;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_61b8);
  FLLMScope::FLLMScope(&local_62e4,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_6140 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_6138,&local_6140,true);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_5c48,"SBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorThemes.cpp"
             ,0x106,local_res20);
  FMemScope::~FMemScope(&local_6138);
  FLLMScope::~FLLMScope(&local_62e4);
  pTVar36 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_5c48,&local_5d98,pFVar30);
  FVar21 = local_61f0;
  pTVar8 = (pTVar36->SharedReferenceCount).ReferenceController;
  local_6228 = pTVar36->Object;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar29 = (FSlot *)0x0;
  local_6220.ReferenceController = pTVar8;
  if ((SBox **)((longlong)local_61f0 + 8) != &local_6228) {
    *(SBox **)((longlong)local_61f0 + 8) = local_6228;
    local_6228 = (SBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)local_61f0 + 0x10),&local_6220);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6220.ReferenceController);
  pFVar37 = SVerticalBox::FArguments::operator+(local_61e8,(FSlotArguments *)FVar21);
  pFVar38 = ::operator_new(0x58);
  if (pFVar38 != (FSlot *)0x0) {
    *(undefined8 *)pFVar38 = 0;
    *(undefined8 *)&pFVar38->field_0x8 = 0;
    *(undefined8 *)&pFVar38->field_0x10 = 0;
    *(undefined8 *)&pFVar38->field_0x18 = 0;
    *(undefined8 *)&pFVar38->field_0x20 = 0;
    *(undefined8 *)&pFVar38->field_0x28 = 0;
    *(undefined8 *)&pFVar38->field_0x30 = 0;
    *(undefined8 *)&pFVar38->field_0x38 = 0;
    *(undefined8 *)&pFVar38->field_0x40 = 0;
    *(undefined8 *)&pFVar38->field_0x48 = 0;
    *(undefined8 *)&pFVar38->field_0x50 = 0;
    pFVar29 = SVerticalBox::FSlot::FSlot(pFVar38);
  }
  local_61e8 = (FArguments *)pFVar29;
  SVerticalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_4ee8,(FSlot *)&local_61e8);
  pFVar28 = (FSizeParam *)FAuto::FAuto((FAuto *)local_5598);
  TOptional<FSizeParam>::operator=(&local_4e90,pFVar28);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_5568)
  ;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_5598 + 0x10));
  pFVar39 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)(local_4ee8 + 0x18),fVar20);
  puVar40 = &pFVar39->field_0x48;
  if (local_6030 != (undefined4 *)puVar40) {
    *(undefined4 *)puVar40 = 2;
    pFVar39->field_0x4c = 1;
  }
  if (puVar40 == (undefined1 *)0x0) {
    pFVar39 = (FSlotArguments *)0x0;
  }
  pFVar41 = STextBlock::FArguments::FArguments(&local_5c0);
  FSlateFontInfo::FSlateFontInfo(&local_59e0.Value,&local_5348);
  local_59e0.bIsSet = true;
  local_59e0.Getter._16_8_ = 0;
  local_59e0.Getter._0_8_ = 0;
  local_59e0.Getter._8_8_ = 0;
  TAttribute<FSlateFontInfo>::operator=(&pFVar41->_Font,&local_59e0);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_59e0.Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_59e0.Value.CompositeFont.SharedReferenceCount.ReferenceController);
  lStack_5bf0 = (ulonglong)uStack_632c << 0x20;
  local_5bf8 = GetLabel;
  pFVar41 = STextBlock::FArguments::Text<SThemeColorBlock>(pFVar41,this,(pmf_a786b61a *)&local_5bf8)
  ;
  uVar22 = local_6188.SharedReferenceCount.ReferenceController._4_4_;
  pTVar42 = TSharedFromThis<SWidget,1>::AsShared
                      ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_5be8);
  local_5fd0.Object = (SThemeColorBlock *)pTVar42->Object;
  local_5fd0.SharedReferenceCount.ReferenceController =
       (pTVar42->SharedReferenceCount).ReferenceController;
  if (local_5fd0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_5fd0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_5fd0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5be8.SharedReferenceCount.ReferenceController);
  lStack_5bd0 = (ulonglong)uVar22 << 0x20;
  local_5bd8 = OnGetLabelVisibility;
  pFVar41 = TSlateBaseNamedArgs<STextBlock>::Visibility<SThemeColorBlock>
                      ((TSlateBaseNamedArgs<STextBlock> *)pFVar41,&local_5fd0,
                       (pmf_08d02e5b *)&local_5bd8);
  FLLMScope::FLLMScope(&local_62e0,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_61f0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_6128,&local_61f0,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_5c60,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorThemes.cpp"
             ,0x115,&local_6319);
  FMemScope::~FMemScope(&local_6128);
  FLLMScope::~FLLMScope(&local_62e0);
  pTVar43 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_5c60,&local_5da8,pFVar41);
  pTVar13 = (pTVar43->SharedReferenceCount).ReferenceController;
  local_6200 = pTVar43->Object;
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_61f8.ReferenceController = pTVar13;
  if ((STextBlock **)&pFVar39->field_0x8 != &local_6200) {
    *(STextBlock **)&pFVar39->field_0x8 = local_6200;
    local_6200 = (STextBlock *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar39->field_0x10,&local_61f8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_61f8.ReferenceController);
  pFVar37 = SVerticalBox::FArguments::operator+(pFVar37,pFVar39);
  pFVar29 = ::operator_new(0x58);
  if (pFVar29 == (FSlot *)0x0) {
    local_6120 = (FSlot *)0x0;
  }
  else {
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
    local_6120 = SVerticalBox::FSlot::FSlot(pFVar29);
  }
  pFVar27 = (FSlot *)0x0;
  SVerticalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_4fd0,(FSlot *)&local_6120);
  pFVar28 = (FSizeParam *)FAuto::FAuto((FAuto *)local_5550);
  TOptional<FSizeParam>::operator=(&local_4f78,pFVar28);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_5520)
  ;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_5550 + 0x10));
  local_6248 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)(local_4fd0 + 0x18),fVar20);
  local_6318 = SHorizontalBox::FArguments::FArguments(&local_4128);
  pFVar63 = ::operator_new(0x58);
  local_6118 = pFVar27;
  if (pFVar63 != (FSlot *)0x0) {
    *(undefined8 *)pFVar63 = 0;
    *(undefined8 *)&pFVar63->field_0x8 = 0;
    *(undefined8 *)&pFVar63->field_0x10 = 0;
    *(undefined8 *)&pFVar63->field_0x18 = 0;
    *(undefined8 *)&pFVar63->field_0x20 = 0;
    *(undefined8 *)&pFVar63->field_0x28 = 0;
    *(undefined8 *)&pFVar63->field_0x30 = 0;
    *(undefined8 *)&pFVar63->field_0x38 = 0;
    *(undefined8 *)&pFVar63->field_0x40 = 0;
    *(undefined8 *)&pFVar63->field_0x48 = 0;
    *(undefined8 *)&pFVar63->field_0x50 = 0;
    local_6118 = SHorizontalBox::FSlot::FSlot(pFVar63);
  }
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments(&local_4be8,(FSlot *)&local_6118);
  local_6010.Value = 1.0;
  local_6010.Getter._16_8_ = 0;
  local_6010.bIsSet = true;
  local_6010.Getter._0_8_ = 0;
  local_6010.Getter._8_8_ = 0;
  local_6258 = SHorizontalBox::FSlot::FSlotArguments::FillWidth(&local_4be8,&local_6010);
  local_6268 = SVerticalBox::FArguments::FArguments(&local_4330);
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
    pFVar27 = (FSlot *)SVerticalBox::FSlot::FSlot(pFVar29);
  }
  local_6110 = pFVar27;
  SVerticalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_50b8,(FSlot *)&local_6110);
  pFVar28 = (FSizeParam *)FAuto::FAuto((FAuto *)local_5508);
  TOptional<FSizeParam>::operator=(&local_5060,pFVar28);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_54d8)
  ;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_5508 + 0x10));
  fVar19 = __real_40400000;
  pFVar39 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)(local_50b8 + 0x18),__real_40400000);
  pFVar41 = STextBlock::FArguments::FArguments(&local_b18);
  FSlateFontInfo::FSlateFontInfo(&local_58e0.Value,&local_5b78);
  local_58e0.bIsSet = true;
  local_58e0.Getter._16_8_ = 0;
  local_58e0.Getter._0_8_ = 0;
  local_58e0.Getter._8_8_ = 0;
  pFVar41 = STextBlock::FArguments::Font(pFVar41,&local_58e0);
  uStack_62f0 = 0;
  local_62f8 = (FArguments *)GetRedText;
  lStack_5bc0 = (ulonglong)uStack_62ec << 0x20;
  local_5bc8 = GetRedText;
  pFVar41 = STextBlock::FArguments::Text<SThemeColorBlock>(pFVar41,this,(pmf_a786b61a *)&local_5bc8)
  ;
  FLLMScope::FLLMScope(&local_62dc,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_6108 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_6100,&local_6108,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_5c78,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorThemes.cpp"
             ,0x11f,&local_6328);
  FMemScope::~FMemScope(&local_6100);
  FLLMScope::~FLLMScope(&local_62dc);
  pTVar43 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_5c78,&local_5db8,pFVar41);
  pTVar14 = (pTVar43->SharedReferenceCount).ReferenceController;
  local_6210 = pTVar43->Object;
  if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_6208.ReferenceController = pTVar14;
  if ((STextBlock **)&pFVar39->field_0x8 != &local_6210) {
    *(STextBlock **)&pFVar39->field_0x8 = local_6210;
    local_6210 = (STextBlock *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar39->field_0x10,&local_6208);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6208.ReferenceController);
  pFVar44 = SVerticalBox::FArguments::operator+(local_6268,pFVar39);
  pFVar38 = ::operator_new(0x58);
  pFVar29 = (FSlot *)0x0;
  if (pFVar38 != (FSlot *)0x0) {
    *(undefined8 *)pFVar38 = 0;
    *(undefined8 *)&pFVar38->field_0x8 = 0;
    *(undefined8 *)&pFVar38->field_0x10 = 0;
    *(undefined8 *)&pFVar38->field_0x18 = 0;
    *(undefined8 *)&pFVar38->field_0x20 = 0;
    *(undefined8 *)&pFVar38->field_0x28 = 0;
    *(undefined8 *)&pFVar38->field_0x30 = 0;
    *(undefined8 *)&pFVar38->field_0x38 = 0;
    *(undefined8 *)&pFVar38->field_0x40 = 0;
    *(undefined8 *)&pFVar38->field_0x48 = 0;
    *(undefined8 *)&pFVar38->field_0x50 = 0;
    pFVar29 = SVerticalBox::FSlot::FSlot(pFVar38);
  }
  local_6268 = (FArguments *)pFVar29;
  SVerticalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_51a0,(FSlot *)&local_6268);
  pFVar28 = (FSizeParam *)FAuto::FAuto((FAuto *)local_5478);
  TOptional<FSizeParam>::operator=(&local_5148,pFVar28);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_5448)
  ;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_5478 + 0x10));
  local_6260 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)(local_51a0 + 0x18),fVar19);
  pFVar41 = STextBlock::FArguments::FArguments(&local_1070);
  FSlateFontInfo::FSlateFontInfo(&local_5860.Value,&local_5b78);
  local_5860.bIsSet = true;
  local_5860.Getter._16_8_ = 0;
  local_5860.Getter._0_8_ = 0;
  local_5860.Getter._8_8_ = 0;
  pFVar41 = STextBlock::FArguments::Font(pFVar41,&local_5860);
  uStack_62f0 = 0;
  local_62f8 = (FArguments *)GetGreenText;
  lStack_5bb0 = (ulonglong)uStack_62ec << 0x20;
  local_5bb8 = GetGreenText;
  pFVar41 = STextBlock::FArguments::Text<SThemeColorBlock>(pFVar41,this,(pmf_a786b61a *)&local_5bb8)
  ;
  FLLMScope::FLLMScope(&local_62cc,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_60f8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_60f0,&local_60f8,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_5c90,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorThemes.cpp"
             ,0x123,&local_6327);
  FMemScope::~FMemScope(&local_60f0);
  FLLMScope::~FLLMScope(&local_62cc);
  pTVar43 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_5c90,&local_5dc8,pFVar41);
  local_6050.SharedReferenceCount.ReferenceController =
       (pTVar43->SharedReferenceCount).ReferenceController;
  local_6050.Object = (SWidget *)pTVar43->Object;
  if (local_6050.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_6050.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_6050.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar39 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)local_6260,&local_6050);
  pFVar44 = SVerticalBox::FArguments::operator+(pFVar44,pFVar39);
  pFVar38 = ::operator_new(0x58);
  pFVar29 = (FSlot *)0x0;
  if (pFVar38 != (FSlot *)0x0) {
    *(undefined8 *)pFVar38 = 0;
    *(undefined8 *)&pFVar38->field_0x8 = 0;
    *(undefined8 *)&pFVar38->field_0x10 = 0;
    *(undefined8 *)&pFVar38->field_0x18 = 0;
    *(undefined8 *)&pFVar38->field_0x20 = 0;
    *(undefined8 *)&pFVar38->field_0x28 = 0;
    *(undefined8 *)&pFVar38->field_0x30 = 0;
    *(undefined8 *)&pFVar38->field_0x38 = 0;
    *(undefined8 *)&pFVar38->field_0x40 = 0;
    *(undefined8 *)&pFVar38->field_0x48 = 0;
    *(undefined8 *)&pFVar38->field_0x50 = 0;
    pFVar29 = SVerticalBox::FSlot::FSlot(pFVar38);
  }
  local_6260 = (FSlotArguments *)pFVar29;
  SVerticalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_5288,(FSlot *)&local_6260);
  pFVar28 = (FSizeParam *)FAuto::FAuto((FAuto *)local_54c0);
  TOptional<FSizeParam>::operator=(&local_5230,pFVar28);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_5490)
  ;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_54c0 + 0x10));
  local_6218 = (FName)TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                                ((FSlotArgumentsMixin *)(local_5288 + 0x18),fVar19);
  pFVar41 = STextBlock::FArguments::FArguments(&local_15c8);
  FSlateFontInfo::FSlateFontInfo(&local_5760.Value,&local_5b78);
  local_5760.bIsSet = true;
  local_5760.Getter._16_8_ = 0;
  local_5760.Getter._0_8_ = 0;
  local_5760.Getter._8_8_ = 0;
  pFVar41 = STextBlock::FArguments::Font(pFVar41,&local_5760);
  uStack_62f0 = 0;
  local_62f8 = (FArguments *)GetBlueText;
  lStack_5ba0 = (ulonglong)uStack_62ec << 0x20;
  local_5ba8 = GetBlueText;
  pFVar41 = STextBlock::FArguments::Text<SThemeColorBlock>(pFVar41,this,(pmf_a786b61a *)&local_5ba8)
  ;
  FLLMScope::FLLMScope(&local_62d8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_60e8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_6040,&local_60e8,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_5ca8,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorThemes.cpp"
             ,0x127,&local_6326);
  FMemScope::~FMemScope(&local_6040);
  FLLMScope::~FLLMScope(&local_62d8);
  pTVar43 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_5ca8,&local_5dd8,pFVar41);
  local_6060.Object = (SWidget *)pTVar43->Object;
  local_6060.SharedReferenceCount.ReferenceController =
       (pTVar43->SharedReferenceCount).ReferenceController;
  if (local_6060.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_6060.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_6060.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar39 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)local_6218,&local_6060);
  pFVar44 = SVerticalBox::FArguments::operator+(pFVar44,pFVar39);
  FLLMScope::FLLMScope(&local_62d4,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_6218 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_6038,&local_6218,true);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
            (&local_5cc0,"SVerticalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorThemes.cpp"
             ,0x11c,&local_6325);
  FMemScope::~FMemScope(&local_6038);
  FLLMScope::~FLLMScope(&local_62d4);
  pTVar45 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_5cc0,&local_5de8,pFVar44);
  local_6070.Object = (SWidget *)pTVar45->Object;
  local_6070.SharedReferenceCount.ReferenceController =
       (pTVar45->SharedReferenceCount).ReferenceController;
  if (local_6070.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_6070.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_6070.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar46 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)local_6258,&local_6070);
  local_62f8 = SHorizontalBox::FArguments::operator+(local_6318,pFVar46);
  pFVar46 = SHorizontalBox::Slot(&local_4500);
  local_5ff0.Value = 1.0;
  local_5ff0.Getter._16_8_ = 0;
  local_5ff0.bIsSet = true;
  local_5ff0.Getter._0_8_ = 0;
  local_5ff0.Getter._8_8_ = 0;
  local_6258 = SHorizontalBox::FSlot::FSlotArguments::FillWidth(pFVar46,&local_5ff0);
  pFVar44 = SVerticalBox::FArguments::FArguments(&local_3b10);
  pFVar39 = SVerticalBox::Slot(&local_45e8);
  pFVar39 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar39);
  local_6318 = (FArguments *)
               TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)&pFVar39->field_0x18,fVar19);
  pFVar41 = STextBlock::FArguments::FArguments(&local_1b20);
  FSlateFontInfo::FSlateFontInfo(&local_57e0.Value,&local_5b78);
  local_57e0.bIsSet = true;
  local_57e0.Getter._16_8_ = 0;
  local_57e0.Getter._0_8_ = 0;
  local_57e0.Getter._8_8_ = 0;
  pFVar41 = STextBlock::FArguments::Font(pFVar41,&local_57e0);
  uStack_6300._0_4_ = 0;
  local_6308 = GetHueText;
  local_5b98 = GetHueText;
  uStack_5b90 = 0;
  uStack_5b8c = uStack_6300._4_4_;
  pFVar41 = STextBlock::FArguments::Text<SThemeColorBlock>(pFVar41,this,(pmf_a786b61a *)&local_5b98)
  ;
  pTVar47 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                      (&local_5b18,"STextBlock",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorThemes.cpp"
                       ,0x12f,&local_6324);
  pTVar43 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar47,&local_5df8,pFVar41);
  local_6080.Object = (SWidget *)pTVar43->Object;
  local_6080.SharedReferenceCount.ReferenceController =
       (pTVar43->SharedReferenceCount).ReferenceController;
  if (local_6080.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_6080.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_6080.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar39 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)local_6318,&local_6080);
  pFVar44 = SVerticalBox::FArguments::operator+(pFVar44,pFVar39);
  pFVar39 = SVerticalBox::Slot(&local_46d0);
  pFVar39 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar39);
  local_6318 = (FArguments *)
               TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)&pFVar39->field_0x18,fVar19);
  pFVar41 = STextBlock::FArguments::FArguments(&local_2078);
  FSlateFontInfo::FSlateFontInfo(&local_5960.Value,&local_5b78);
  local_5960.bIsSet = true;
  local_5960.Getter._16_8_ = 0;
  local_5960.Getter._0_8_ = 0;
  local_5960.Getter._8_8_ = 0;
  pFVar41 = STextBlock::FArguments::Font(pFVar41,&local_5960);
  uStack_6300._0_4_ = 0;
  local_6308 = GetSaturationText;
  local_5b88 = GetSaturationText;
  uStack_5b80 = 0;
  uStack_5b7c = uStack_6300._4_4_;
  pFVar41 = STextBlock::FArguments::Text<SThemeColorBlock>(pFVar41,this,(pmf_a786b61a *)&local_5b88)
  ;
  pTVar47 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                      (&local_59f8,"STextBlock",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorThemes.cpp"
                       ,0x133,&local_6323);
  pTVar43 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar47,&local_5e08,pFVar41);
  local_6090.Object = (SWidget *)pTVar43->Object;
  local_6090.SharedReferenceCount.ReferenceController =
       (pTVar43->SharedReferenceCount).ReferenceController;
  if (local_6090.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_6090.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_6090.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar39 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)local_6318,&local_6090);
  pFVar44 = SVerticalBox::FArguments::operator+(pFVar44,pFVar39);
  pFVar39 = SVerticalBox::Slot(&local_47b8);
  pFVar39 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar39);
  local_6318 = (FArguments *)
               TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)&pFVar39->field_0x18,fVar19);
  pFVar41 = STextBlock::FArguments::FArguments(&local_25d0);
  FSlateFontInfo::FSlateFontInfo(&local_5660.Value,&local_5b78);
  local_5660.bIsSet = true;
  local_5660.Getter._16_8_ = 0;
  local_5660.Getter._0_8_ = 0;
  local_5660.Getter._8_8_ = 0;
  pFVar41 = STextBlock::FArguments::Font(pFVar41,&local_5660);
  uStack_6300._0_4_ = 0;
  local_6308 = GetValueText;
  local_5e88 = GetValueText;
  uStack_5e80 = 0;
  uStack_5e7c = uStack_6300._4_4_;
  pFVar41 = STextBlock::FArguments::Text<SThemeColorBlock>(pFVar41,this,(pmf_a786b61a *)&local_5e88)
  ;
  pTVar47 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                      (&local_5a10,"STextBlock",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorThemes.cpp"
                       ,0x137,&local_6322);
  pTVar43 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar47,&local_5e18,pFVar41);
  local_60a0.Object = (SWidget *)pTVar43->Object;
  local_60a0.SharedReferenceCount.ReferenceController =
       (pTVar43->SharedReferenceCount).ReferenceController;
  if (local_60a0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_60a0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_60a0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar39 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)local_6318,&local_60a0);
  pFVar44 = SVerticalBox::FArguments::operator+(pFVar44,pFVar39);
  pTVar48 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                      (&local_5a28,"SVerticalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorThemes.cpp"
                       ,300,&local_6321);
  pTVar45 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar48,&local_5e28,pFVar44);
  local_60b0.Object = (SWidget *)pTVar45->Object;
  local_60b0.SharedReferenceCount.ReferenceController =
       (pTVar45->SharedReferenceCount).ReferenceController;
  if (local_60b0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_60b0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_60b0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar46 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)local_6258,&local_60b0);
  pFVar49 = SHorizontalBox::FArguments::operator+(local_62f8,pFVar46);
  pTVar50 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                      (&local_5a40,"SHorizontalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorThemes.cpp"
                       ,0x119,&local_6320);
  pTVar51 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar50,&local_5e38,pFVar49);
  local_60c0.Object = (SWidget *)pTVar51->Object;
  local_60c0.SharedReferenceCount.ReferenceController =
       (pTVar51->SharedReferenceCount).ReferenceController;
  if (local_60c0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_60c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_60c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar39 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)local_6248,&local_60c0);
  pFVar37 = SVerticalBox::FArguments::operator+(pFVar37,pFVar39);
  pFVar39 = SVerticalBox::Slot(&local_4418);
  pFVar39 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar39);
  pFVar39 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)&pFVar39->field_0x18,fVar20);
  puVar40 = &pFVar39->field_0x48;
  if (local_6028 != (undefined4 *)puVar40) {
    *(undefined4 *)puVar40 = 2;
    pFVar39->field_0x4c = 1;
  }
  if (puVar40 == (undefined1 *)0x0) {
    pFVar39 = (FSlotArguments *)0x0;
  }
  pFVar41 = STextBlock::FArguments::FArguments(&local_2b28);
  FSlateFontInfo::FSlateFontInfo(&local_56e0.Value,&local_5b78);
  local_56e0.bIsSet = true;
  local_56e0.Getter._16_8_ = 0;
  local_56e0.Getter._0_8_ = 0;
  local_56e0.Getter._8_8_ = 0;
  pFVar41 = STextBlock::FArguments::Font(pFVar41,&local_56e0);
  uStack_6300 = (ulonglong)uStack_6300._4_4_ << 0x20;
  local_6308 = GetAlphaText;
  pFVar41 = STextBlock::FArguments::Text<SThemeColorBlock>(pFVar41,this,(pmf_a786b61a *)&local_6308)
  ;
  lStack_6240 = (ulonglong)local_6188.SharedReferenceCount.ReferenceController._4_4_ << 0x20;
  local_6248 = (FSlotArguments *)OnGetAlphaVisibility;
  pTVar42 = TSharedFromThis<SWidget,1>::AsShared
                      ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_5e78);
  local_5fb0.Object = (SThemeColorBlock *)pTVar42->Object;
  local_5fb0.SharedReferenceCount.ReferenceController =
       (pTVar42->SharedReferenceCount).ReferenceController;
  if (local_5fb0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_5fb0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_5fb0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5e78.SharedReferenceCount.ReferenceController);
  pFVar41 = TSlateBaseNamedArgs<STextBlock>::Visibility<SThemeColorBlock>
                      ((TSlateBaseNamedArgs<STextBlock> *)pFVar41,&local_5fb0,
                       (pmf_08d02e5b *)&local_6248);
  pTVar47 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                      (&local_5a58,"STextBlock",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorThemes.cpp"
                       ,0x13e,&local_631f);
  pTVar43 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar47,&local_5e48,pFVar41);
  local_60d0.Object = (SWidget *)pTVar43->Object;
  local_60d0.SharedReferenceCount.ReferenceController =
       (pTVar43->SharedReferenceCount).ReferenceController;
  if (local_60d0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_60d0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_60d0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar39 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)pFVar39,&local_60d0);
  pFVar37 = SVerticalBox::FArguments::operator+(pFVar37,pFVar39);
  pTVar48 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                      (&local_5a70,"SVerticalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorThemes.cpp"
                       ,0x103,&local_631e);
  pTVar45 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar48,&local_5e58,pFVar37);
  local_60e0.Object = (SWidget *)pTVar45->Object;
  local_60e0.SharedReferenceCount.ReferenceController =
       (pTVar45->SharedReferenceCount).ReferenceController;
  if (local_60e0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_60e0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_60e0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar46 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)local_4d18,&local_60e0);
  pFVar49 = SHorizontalBox::FArguments::operator+(local_6238,pFVar46);
  pTVar50 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                      (&local_5a88,"SHorizontalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorThemes.cpp"
                       ,0x100,&local_631d);
  pTVar51 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar50,&local_5e68,pFVar49);
  FVar21 = local_6230;
  pTVar15 = (pTVar51->SharedReferenceCount).ReferenceController;
  pSVar16 = pTVar51->Object;
  if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_6158 = (((TAlwaysValidWidget *)((longlong)local_6230 + 0x228))->Widget).Object;
  pTStack_6150 = ((FSharedReferencer<1> *)((longlong)local_6230 + 0x230))->ReferenceController;
  (((TAlwaysValidWidget *)((longlong)local_6230 + 0x228))->Widget).Object = (SWidget *)pSVar16;
  ((FSharedReferencer<1> *)((longlong)local_6230 + 0x230))->ReferenceController = pTVar15;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_6150);
  FLLMScope::FLLMScope(&local_62d0,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_6230 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_6130,&local_6230,true);
  TSlateDecl<SToolTip,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SToolTip,RequiredArgs::T0RequiredArgs>
            (&local_61d8,"SToolTip",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorThemes.cpp"
             ,0xfe,&local_631c);
  FMemScope::~FMemScope(&local_6130);
  FLLMScope::~FLLMScope(&local_62d0);
  pSVar52 = TSharedPtr<SToolTip,1>::operator->(&local_61d8._Widget);
  SWidget::SWidgetConstruct((SWidget *)pSVar52,(FSlateBaseNamedArgs *)FVar21);
  pSVar52 = local_61d8._Widget.Object;
  SToolTip::Construct(local_61d8._Widget.Object,(FArguments *)FVar21);
  pSVar53 = TSharedPtr<SToolTip,1>::operator->(&local_61d8._Widget);
  SWidget::CacheVolatility((SWidget *)pSVar53);
  pSVar53 = TSharedPtr<SToolTip,1>::operator->(&local_61d8._Widget);
  pbVar2 = (byte *)((longlong)&pSVar53->_padding_ + 1);
  *pbVar2 = *pbVar2 | 4;
  if ((local_61d8._Widget.Object == (SToolTip *)0x0) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar24)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  local_6238 = (FArguments *)local_61d8._Widget.SharedReferenceCount.ReferenceController;
  local_61d8._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_61d8._Widget.Object = (SToolTip *)0x0;
  if ((pSVar52 == (SToolTip *)0x0) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar24)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pFVar49 = local_6238;
  local_61a8.Object = pSVar52;
  local_61a8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)local_6238;
  if (local_6238 != (FArguments *)0x0) {
    LOCK();
    *(atomic<int> *)&local_6238->_padding_ =
         (atomic<int>)((int)*(atomic<int> *)&local_6238->_padding_ + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_6238);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_61d8._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5e68.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5a88._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_60e0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5e58.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5a70._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_60d0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5e48.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5a58._Widget.SharedReferenceCount.ReferenceController);
  STextBlock::FArguments::~FArguments(&local_2b28);
  SBoxPanel::TSlot<SVerticalBox::FSlot>::FSlotArguments::~FSlotArguments
            ((FSlotArguments *)&local_4418);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_60c0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5e38.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5a40._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_60b0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5e28.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5a28._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_60a0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5e18.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5a10._Widget.SharedReferenceCount.ReferenceController);
  STextBlock::FArguments::~FArguments(&local_25d0);
  SBoxPanel::TSlot<SVerticalBox::FSlot>::FSlotArguments::~FSlotArguments
            ((FSlotArguments *)&local_47b8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6090.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5e08.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_59f8._Widget.SharedReferenceCount.ReferenceController);
  STextBlock::FArguments::~FArguments(&local_2078);
  SBoxPanel::TSlot<SVerticalBox::FSlot>::FSlotArguments::~FSlotArguments
            ((FSlotArguments *)&local_46d0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6080.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5df8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5b18._Widget.SharedReferenceCount.ReferenceController);
  STextBlock::FArguments::~FArguments(&local_1b20);
  SBoxPanel::TSlot<SVerticalBox::FSlot>::FSlotArguments::~FSlotArguments
            ((FSlotArguments *)&local_45e8);
  TArray<SVerticalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>::
  ~TArray<SVerticalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>(&local_3b10._Slots);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_3b10);
  SBoxPanel::TSlot<SHorizontalBox::FSlot>::FSlotArguments::~FSlotArguments
            ((FSlotArguments *)&local_4500);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6070.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5de8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5cc0._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6060.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5dd8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5ca8._Widget.SharedReferenceCount.ReferenceController);
  STextBlock::FArguments::~FArguments(&local_15c8);
  SBoxPanel::TSlot<SVerticalBox::FSlot>::FSlotArguments::~FSlotArguments
            ((FSlotArguments *)local_5288);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6050.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5dc8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5c90._Widget.SharedReferenceCount.ReferenceController);
  STextBlock::FArguments::~FArguments(&local_1070);
  SBoxPanel::TSlot<SVerticalBox::FSlot>::FSlotArguments::~FSlotArguments
            ((FSlotArguments *)local_51a0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5db8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5c78._Widget.SharedReferenceCount.ReferenceController);
  STextBlock::FArguments::~FArguments(&local_b18);
  SBoxPanel::TSlot<SVerticalBox::FSlot>::FSlotArguments::~FSlotArguments
            ((FSlotArguments *)local_50b8);
  TArray<SVerticalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>::
  ~TArray<SVerticalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>(&local_4330._Slots);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_4330);
  SBoxPanel::TSlot<SHorizontalBox::FSlot>::FSlotArguments::~FSlotArguments
            ((FSlotArguments *)&local_4be8);
  TArray<SHorizontalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>::
  ~TArray<SHorizontalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>(&local_4128._Slots);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_4128);
  SBoxPanel::TSlot<SVerticalBox::FSlot>::FSlotArguments::~FSlotArguments
            ((FSlotArguments *)local_4fd0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5da8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5c60._Widget.SharedReferenceCount.ReferenceController);
  STextBlock::FArguments::~FArguments(&local_5c0);
  SBoxPanel::TSlot<SVerticalBox::FSlot>::FSlotArguments::~FSlotArguments
            ((FSlotArguments *)local_4ee8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5d98.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5c48._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar64);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5d88.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5c30._Widget.SharedReferenceCount.ReferenceController);
  SColorBlock::FArguments::~FArguments(&local_35c8);
  SBox::FArguments::~FArguments(&local_3908);
  SBoxPanel::TSlot<SVerticalBox::FSlot>::FSlotArguments::~FSlotArguments
            ((FSlotArguments *)local_4e00);
  TArray<SVerticalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>::
  ~TArray<SVerticalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>(&local_3f20._Slots);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_3f20);
  SBoxPanel::TSlot<SHorizontalBox::FSlot>::FSlotArguments::~FSlotArguments
            ((FSlotArguments *)local_4d18);
  TArray<SHorizontalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>::
  ~TArray<SHorizontalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>(&local_3d18._Slots);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_3d18);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &local_4b00._OnSetInteractiveWindowLocation);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_4b00._IsInteractive.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_4b00._BorderImage.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_4b00._TextMargin.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_4b00._Font.Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4b00._Font.Value.CompositeFont.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4b00._Content.Widget.SharedReferenceCount.ReferenceController);
  TAttribute<FText>::~TAttribute<FText>(&local_4b00._Text);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_4b00);
  pFVar54 = SBorder::FArguments::FArguments(&local_2f08);
  pIVar25 = FAppStyle::Get();
  pcVar10 = *(code **)((longlong)*pIVar25 + 0x50);
  pFVar26 = ::FName::FName(&local_5d38,"ColorPicker.MultipleValuesBackground");
  local_5f70.Value = (FSlateBrush *)(*pcVar10)(pIVar25,*pFVar26,0,0);
  local_5f70.bIsSet = true;
  local_5f70.Getter._16_8_ = 0;
  local_5f70.Getter._0_8_ = 0;
  local_5f70.Getter._8_8_ = 0;
  pFVar54 = SBorder::FArguments::BorderImage(pFVar54,&local_5f70);
  local_5ec0.bIsSet = true;
  local_5ec0.Getter._16_8_ = 0;
  local_5ec0.Value.Left = ___xmm_3f8000003f8000003f8000003f800000;
  local_5ec0.Value.Top = _UNK_15076b1f4;
  local_5ec0.Value.Right = _UNK_15076b1f8;
  local_5ec0.Value.Bottom = _UNK_15076b1fc;
  local_5ec0.Getter._0_8_ = 0;
  local_5ec0.Getter._8_8_ = 0;
  pFVar54 = SBorder::FArguments::Padding(pFVar54,&local_5ec0);
  pTVar55 = TAttribute<TSharedPtr<IToolTip,1>_>::
            TAttribute<TSharedPtr<IToolTip,1>_><TSharedPtr<SToolTip,1>_>(&local_52e8,&local_61a8);
  pFVar54 = TSlateBaseNamedArgs<SBorder>::ToolTip((TSlateBaseNamedArgs<SBorder> *)pFVar54,pTVar55);
  pFVar31 = SColorBlock::FArguments::FArguments(&local_3268);
  local_61a8.SharedReferenceCount.ReferenceController =
       local_61a8.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
  local_61a8.Object = (SToolTip *)GetColor;
  local_5d78 = GetColor;
  pTStack_5d70 = local_61a8.SharedReferenceCount.ReferenceController;
  pFVar31 = SColorBlock::FArguments::Color<SThemeColorBlock>
                      (pFVar31,this,(pmf_bc5f83b2 *)&local_5d78);
  pbVar56 = TAttribute<bool>::Get(&this->bUseAlpha);
  local_res8 = CONCAT31(local_res8._1_3_,(*pbVar56 == false) + '\x02');
  pTVar57 = TAttribute<enum_EColorBlockAlphaDisplayMode>::
            TAttribute<enum_EColorBlockAlphaDisplayMode>
                      (local_53e8,(EColorBlockAlphaDisplayMode *)&local_res8);
  pFVar31 = SColorBlock::FArguments::AlphaDisplayMode(pFVar31,pTVar57);
  local_res10[0] = true;
  pTVar58 = TAttribute<bool>::TAttribute<bool>(&local_53c8,local_res10);
  pFVar31 = SColorBlock::FArguments::ColorIsHSV(pFVar31,pTVar58);
  pbVar56 = TAttribute<bool>::Get(&this->bUseAlpha);
  pTVar58 = TAttribute<bool>::TAttribute<bool><bool>(&local_53a8,pbVar56);
  pFVar31 = SColorBlock::FArguments::ShowBackgroundForAlpha(pFVar31,pTVar58);
  pTVar58 = TAttribute<bool>::TAttribute<bool>(&local_5388,&this->bUseSRGB);
  pFVar31 = SColorBlock::FArguments::UseSRGB(pFVar31,pTVar58);
  local_5d68._s_0.X = ___xmm_40360000000000004036000000000000;
  local_5d68._s_0.Y = _UNK_150a1f5c8;
  pTVar59 = TAttribute<UE::Math::TVector2<double>_>::TAttribute<UE::Math::TVector2<double>_>
                      (&local_52b8,(TVector2<double> *)&local_5d68._s_0);
  pFVar31 = SColorBlock::FArguments::Size(pFVar31,pTVar59);
  pTVar60 = UE::Math::TVector4<double>::TVector4<double>
                      (&local_5368,__real_4010000000000000,__real_4010000000000000,
                       __real_4010000000000000,__real_4010000000000000);
  pTVar61 = TAttribute<UE::Math::TVector4<double>_>::TAttribute<UE::Math::TVector4<double>_>
                      (&local_4c28,pTVar60);
  pFVar31 = SColorBlock::FArguments::CornerRadius(pFVar31,pTVar61);
  this_00 = MakeTDecl<SColorBlock,RequiredArgs::T0RequiredArgs>
                      (&local_5ae8,"SColorBlock",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorThemes.cpp"
                       ,0x14a,&local_631b);
  pTVar35 = TSlateDecl<SColorBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_00,&local_6188,pFVar31);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SColorBlock>(&local_5fa0,pTVar35);
  pFVar54 = SBorder::FArguments::operator[](pFVar54,&local_5fa0);
  this_01 = MakeTDecl<SBorder,RequiredArgs::T0RequiredArgs>
                      (&local_5b00,"SBorder",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorThemes.cpp"
                       ,0x145,&local_631a);
  pTVar62 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_01,&local_5d58,pFVar54);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBorder>(&local_5fc0,pTVar62);
  TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::operator[]
            ((TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *)
             &this->_padding_,&local_5fc0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5fc0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5d58.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5b00._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5fa0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             CONCAT44(local_6188.SharedReferenceCount.ReferenceController._4_4_,
                      local_6188.SharedReferenceCount.ReferenceController._0_4_));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5ae8._Widget.SharedReferenceCount.ReferenceController);
  SColorBlock::FArguments::~FArguments(&local_3268);
  SBorder::FArguments::~FArguments(&local_2f08);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar49);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5348.CompositeFont.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5b78.CompositeFont.SharedReferenceCount.ReferenceController);
  return;
}

// FormatToolTipText @ 143032b00

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __thiscall
SThemeColorBlock::FormatToolTipText
          (SThemeColorBlock *this,FText *__return_storage_ptr__,FText *param_1,float param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FText *pFVar4;
  FTextFormat *pFVar5;
  float fVar6;
  undefined1 local_res10 [16];
  undefined1 local_res20 [8];
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_128
  ;
  FString local_118;
  FString local_108;
  TSharedPtr<FCulture,1> local_f8;
  FString local_e8;
  FFormatArgumentValue local_d8;
  FFormatArgumentValue local_b8;
  FFormatArgumentValue local_98;
  FText local_78;
  FText local_68;
  FNumberFormattingOptions local_58;
  FTextFormat local_40 [2];
  
  local_d8.TextValue.field0_0x0.TypedValue.TextData.Reference =
       (TRefCountPtr<ITextData>)(param_1->TextData).Reference;
  local_128.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.Pairs.ArrayNum = 0;
  local_128.Pairs.ArrayMax = 0;
  local_d8.Type = Text;
  if (local_d8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_d8.TextValue.field0_0x0.TypedValue.TextData.Reference
                + 8))(local_d8.TextValue.field0_0x0.TypedValue.TextData.Reference,local_res20);
  }
  local_d8.TextValue.field0_0x0.TypedValue.Flags = param_1->Flags;
  if (local_d8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FText *)(*pcVar1)();
      return pFVar4;
    }
  }
  ::FString::FString(&local_118,L"Identifier");
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
  Emplace<FString,FFormatArgumentValue>(&local_128,&local_118,&local_d8);
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  if (local_d8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_d8.TextValue.field0_0x0.TypedValue.TextData.Reference
                + 0x10))();
  }
  if (param_2 < 0.0) {
    pFVar4 = FText::GetEmpty();
    local_b8.Type = Text;
    local_b8.TextValue.field0_0x0.TypedValue.TextData.Reference =
         (TRefCountPtr<ITextData>)(pFVar4->TextData).Reference;
    if (local_b8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_b8.TextValue.field0_0x0.TypedValue.TextData.Reference + 8))
                (local_b8.TextValue.field0_0x0.TypedValue.TextData.Reference,local_res10);
    }
    local_b8.TextValue.field0_0x0.TypedValue.Flags = pFVar4->Flags;
    if (local_b8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FText *)(*pcVar1)();
        return pFVar4;
      }
    }
    ::FString::FString(&local_e8,L"Value");
    TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
    Emplace<FString,FFormatArgumentValue>(&local_128,&local_e8,&local_b8);
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
    if (local_b8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_b8.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10)
      )();
    }
  }
  else {
    fVar6 = logf(param_2 + __real_38d1b717);
    iVar3 = (int)(fVar6 * LogToLog10);
    if ((int)(fVar6 * LogToLog10) < 0) {
      iVar3 = 0;
    }
    FNumberFormattingOptions::FNumberFormattingOptions(&local_58);
    local_58.MinimumFractionalDigits = 2 - iVar3;
    if (2 - iVar3 < 0) {
      local_58.MinimumFractionalDigits = 0;
    }
    local_f8.Object = (FCulture *)0x0;
    local_f8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar4 = FText::AsNumber(&local_78,param_2,&local_58,&local_f8);
    local_98.Type = Text;
    FText::FText((FText *)&local_98.TextValue,pFVar4);
    if (local_98.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FText *)(*pcVar1)();
        return pFVar4;
      }
    }
    ::FString::FString(&local_108,L"Value");
    TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
    Emplace<FString,FFormatArgumentValue>(&local_128,&local_108,&local_98);
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
    if (local_98.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_98.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10)
      )();
    }
    if (local_78.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_f8.SharedReferenceCount.ReferenceController);
  }
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     (&local_68,L"SColorThemes",L"ToolTipFormat",L"{Identifier}: {Value}");
  pFVar5 = FTextFormat::FTextFormat(local_40,pFVar4,Default);
  FText::Format(__return_storage_ptr__,pFVar5,&local_128);
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  DestructItems<TTuple<FString,FFormatArgumentValue>,int>
            ((TTuple<FString,FFormatArgumentValue> *)local_128.Pairs.AllocatorInstance.Data,
             local_128.Pairs.ArrayNum);
  if ((TTuple<FString,FFormatArgumentValue> *)local_128.Pairs.AllocatorInstance.Data !=
      (TTuple<FString,FFormatArgumentValue> *)0x0) {
    FMemory::Free(local_128.Pairs.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetAlphaText @ 143032e30

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FText * __thiscall
SThemeColorBlock::GetAlphaText(SThemeColorBlock *this,FText *__return_storage_ptr__)

{
  float fVar1;
  ITextData *pIVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  atomic<int> aVar7;
  atomic<int> aVar8;
  FText *pFVar9;
  FLinearColor *pFVar10;
  FText *pFVar11;
  TRefCountPtr<ITextData> TVar12;
  TReferenceControllerBase<1> *pTVar13;
  bool bVar14;
  undefined4 local_res8;
  undefined4 uStackX_c;
  undefined1 local_res10 [8];
  FText local_68;
  FText local_58;
  FText local_48;
  FLinearColor local_38 [2];
  
  local_res8 = 0;
  if ((((this->ColorPtr).Object == (FLinearColor *)0x0) ||
      (pTVar13 = (this->ColorPtr).WeakReferenceCount.ReferenceController,
      pTVar13 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar13->SharedReferenceCount < 1)) {
    pFVar9 = FText::GetEmpty();
    TVar12.Reference = (pFVar9->TextData).Reference;
    local_68.TextData.Reference = TVar12.Reference;
    if (TVar12.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar12.Reference + 8))(TVar12.Reference,&local_res8);
    }
    pFVar11 = &local_68;
    pTVar13 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
    bVar6 = false;
    bVar5 = false;
    bVar4 = false;
    bVar14 = true;
    local_68.Flags = pFVar9->Flags;
    goto LAB_143032f86;
  }
  pTVar13 = (this->ColorPtr).WeakReferenceCount.ReferenceController;
  pFVar10 = (FLinearColor *)0x0;
  if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
LAB_143032eb4:
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar14) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FText *)(*pcVar3)();
      return pFVar9;
    }
  }
  else {
    aVar7 = pTVar13->SharedReferenceCount;
    do {
      if (aVar7 == (atomic<int>)0x0) {
        pTVar13 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_143032eb4;
      }
      LOCK();
      aVar8 = pTVar13->SharedReferenceCount;
      bVar14 = aVar7 == aVar8;
      if (bVar14) {
        pTVar13->SharedReferenceCount = (atomic<int>)((int)aVar7 + 1);
        aVar8 = aVar7;
      }
      UNLOCK();
      aVar7 = aVar8;
    } while (!bVar14);
    pFVar10 = (this->ColorPtr).Object;
    if (pFVar10 == (FLinearColor *)0x0) goto LAB_143032eb4;
  }
  pFVar10 = FLinearColor::HSVToLinearRGB(pFVar10,local_38);
  fVar1 = (pFVar10->field0_0x0)._s_0.A;
  pFVar9 = FText::AsLocalizable_Advanced_LocText(&local_48,L"SColorThemes",L"Alpha",L"A");
  pFVar11 = FormatToolTipText(this,&local_58,pFVar9,fVar1);
  bVar6 = true;
  bVar5 = true;
  bVar4 = true;
  bVar14 = false;
  TVar12.Reference = local_68.TextData.Reference;
LAB_143032f86:
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar2 = (pFVar11->TextData).Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar2;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res10);
  }
  __return_storage_ptr__->Flags = pFVar11->Flags;
  if ((bVar14) && (TVar12.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*TVar12.Reference + 0x10))(TVar12.Reference);
  }
  if ((bVar4) && (local_58.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  if ((bVar5) && (local_48.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  }
  return __return_storage_ptr__;
}

// GetBlueText @ 143033040

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FText * __thiscall
SThemeColorBlock::GetBlueText(SThemeColorBlock *this,FText *__return_storage_ptr__)

{
  float fVar1;
  ITextData *pIVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  atomic<int> aVar7;
  atomic<int> aVar8;
  FText *pFVar9;
  FLinearColor *pFVar10;
  FText *pFVar11;
  TRefCountPtr<ITextData> TVar12;
  TReferenceControllerBase<1> *pTVar13;
  bool bVar14;
  undefined4 local_res8;
  undefined4 uStackX_c;
  undefined1 local_res10 [8];
  FText local_68;
  FText local_58;
  FText local_48;
  FLinearColor local_38 [2];
  
  local_res8 = 0;
  if ((((this->ColorPtr).Object == (FLinearColor *)0x0) ||
      (pTVar13 = (this->ColorPtr).WeakReferenceCount.ReferenceController,
      pTVar13 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar13->SharedReferenceCount < 1)) {
    pFVar9 = FText::GetEmpty();
    TVar12.Reference = (pFVar9->TextData).Reference;
    local_68.TextData.Reference = TVar12.Reference;
    if (TVar12.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar12.Reference + 8))(TVar12.Reference,&local_res8);
    }
    pFVar11 = &local_68;
    pTVar13 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
    bVar6 = false;
    bVar5 = false;
    bVar4 = false;
    bVar14 = true;
    local_68.Flags = pFVar9->Flags;
    goto LAB_143033196;
  }
  pTVar13 = (this->ColorPtr).WeakReferenceCount.ReferenceController;
  pFVar10 = (FLinearColor *)0x0;
  if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
LAB_1430330c4:
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar14) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FText *)(*pcVar3)();
      return pFVar9;
    }
  }
  else {
    aVar7 = pTVar13->SharedReferenceCount;
    do {
      if (aVar7 == (atomic<int>)0x0) {
        pTVar13 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1430330c4;
      }
      LOCK();
      aVar8 = pTVar13->SharedReferenceCount;
      bVar14 = aVar7 == aVar8;
      if (bVar14) {
        pTVar13->SharedReferenceCount = (atomic<int>)((int)aVar7 + 1);
        aVar8 = aVar7;
      }
      UNLOCK();
      aVar7 = aVar8;
    } while (!bVar14);
    pFVar10 = (this->ColorPtr).Object;
    if (pFVar10 == (FLinearColor *)0x0) goto LAB_1430330c4;
  }
  pFVar10 = FLinearColor::HSVToLinearRGB(pFVar10,local_38);
  fVar1 = (pFVar10->field0_0x0)._s_0.B;
  pFVar9 = FText::AsLocalizable_Advanced_LocText(&local_48,L"SColorThemes",L"Blue",L"B");
  pFVar11 = FormatToolTipText(this,&local_58,pFVar9,fVar1);
  bVar6 = true;
  bVar5 = true;
  bVar4 = true;
  bVar14 = false;
  TVar12.Reference = local_68.TextData.Reference;
LAB_143033196:
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar2 = (pFVar11->TextData).Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar2;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res10);
  }
  __return_storage_ptr__->Flags = pFVar11->Flags;
  if ((bVar14) && (TVar12.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*TVar12.Reference + 0x10))(TVar12.Reference);
  }
  if ((bVar4) && (local_58.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  if ((bVar5) && (local_48.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  }
  return __return_storage_ptr__;
}

// GetColor @ 143033500

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FLinearColor * __thiscall
SThemeColorBlock::GetColor(SThemeColorBlock *this,FLinearColor *__return_storage_ptr__)

{
  code *pcVar1;
  longlong lVar2;
  atomic<int> aVar3;
  longlong *plVar4;
  atomic<int> *paVar5;
  atomic<int> *paVar6;
  atomic<int> aVar7;
  FLinearColor *pFVar8;
  longlong *plVar9;
  TReferenceControllerBase<1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  TReferenceControllerBase<1> *pTVar12;
  bool bVar13;
  uint uStackX_c;
  longlong local_28;
  undefined8 uStack_20;
  longlong local_18 [2];
  
  pTVar12 = (TReferenceControllerBase<1> *)0x0;
  if ((((this->ColorPtr).Object == (FLinearColor *)0x0) ||
      (pTVar11 = (this->ColorPtr).WeakReferenceCount.ReferenceController,
      pTVar11 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar11->SharedReferenceCount < 1)) {
    pTVar11 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
    plVar9 = local_18;
    local_18[0] = 0;
    local_18[1] = 0;
    goto LAB_1430335bb;
  }
  pTVar11 = (this->ColorPtr).WeakReferenceCount.ReferenceController;
  pTVar10 = pTVar11;
  if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
LAB_143033561:
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x44d,L"");
    pTVar11 = pTVar10;
    if (bVar13) {
      pcVar1 = (code *)swi(3);
      pFVar8 = (FLinearColor *)(*pcVar1)();
      return pFVar8;
    }
  }
  else {
    aVar3 = pTVar11->SharedReferenceCount;
    do {
      pTVar10 = pTVar12;
      if (aVar3 == (atomic<int>)0x0) goto LAB_143033561;
      LOCK();
      aVar7 = pTVar11->SharedReferenceCount;
      bVar13 = aVar3 == aVar7;
      if (bVar13) {
        pTVar11->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar7 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar7;
    } while (!bVar13);
    pTVar12 = (TReferenceControllerBase<1> *)(this->ColorPtr).Object;
    pTVar10 = pTVar11;
    if (pTVar12 == (TReferenceControllerBase<1> *)0x0) goto LAB_143033561;
  }
  plVar4 = &pTVar12->_padding_;
  paVar5 = &pTVar12->SharedReferenceCount;
  paVar6 = &pTVar12->WeakReferenceCount;
  plVar9 = &local_28;
  pTVar12 = (TReferenceControllerBase<1> *)&DAT_00000001;
  local_28 = *plVar4;
  uStack_20._0_4_ = *paVar5;
  uStack_20._4_4_ = *paVar6;
LAB_1430335bb:
  lVar2 = plVar9[1];
  *(longlong *)&__return_storage_ptr__->field0_0x0 = *plVar9;
  *(longlong *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = lVar2;
  if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  }
  return __return_storage_ptr__;
}

// GetGreenText @ 1430343a0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FText * __thiscall
SThemeColorBlock::GetGreenText(SThemeColorBlock *this,FText *__return_storage_ptr__)

{
  float fVar1;
  ITextData *pIVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  atomic<int> aVar7;
  atomic<int> aVar8;
  FText *pFVar9;
  FLinearColor *pFVar10;
  FText *pFVar11;
  TRefCountPtr<ITextData> TVar12;
  TReferenceControllerBase<1> *pTVar13;
  bool bVar14;
  undefined4 local_res8;
  undefined4 uStackX_c;
  undefined1 local_res10 [8];
  FText local_68;
  FText local_58;
  FText local_48;
  FLinearColor local_38 [2];
  
  local_res8 = 0;
  if ((((this->ColorPtr).Object == (FLinearColor *)0x0) ||
      (pTVar13 = (this->ColorPtr).WeakReferenceCount.ReferenceController,
      pTVar13 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar13->SharedReferenceCount < 1)) {
    pFVar9 = FText::GetEmpty();
    TVar12.Reference = (pFVar9->TextData).Reference;
    local_68.TextData.Reference = TVar12.Reference;
    if (TVar12.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar12.Reference + 8))(TVar12.Reference,&local_res8);
    }
    pFVar11 = &local_68;
    pTVar13 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
    bVar6 = false;
    bVar5 = false;
    bVar4 = false;
    bVar14 = true;
    local_68.Flags = pFVar9->Flags;
    goto LAB_1430344f6;
  }
  pTVar13 = (this->ColorPtr).WeakReferenceCount.ReferenceController;
  pFVar10 = (FLinearColor *)0x0;
  if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
LAB_143034424:
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar14) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FText *)(*pcVar3)();
      return pFVar9;
    }
  }
  else {
    aVar7 = pTVar13->SharedReferenceCount;
    do {
      if (aVar7 == (atomic<int>)0x0) {
        pTVar13 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_143034424;
      }
      LOCK();
      aVar8 = pTVar13->SharedReferenceCount;
      bVar14 = aVar7 == aVar8;
      if (bVar14) {
        pTVar13->SharedReferenceCount = (atomic<int>)((int)aVar7 + 1);
        aVar8 = aVar7;
      }
      UNLOCK();
      aVar7 = aVar8;
    } while (!bVar14);
    pFVar10 = (this->ColorPtr).Object;
    if (pFVar10 == (FLinearColor *)0x0) goto LAB_143034424;
  }
  pFVar10 = FLinearColor::HSVToLinearRGB(pFVar10,local_38);
  fVar1 = (pFVar10->field0_0x0)._s_0.G;
  pFVar9 = FText::AsLocalizable_Advanced_LocText(&local_48,L"SColorThemes",L"Green",L"G");
  pFVar11 = FormatToolTipText(this,&local_58,pFVar9,fVar1);
  bVar6 = true;
  bVar5 = true;
  bVar4 = true;
  bVar14 = false;
  TVar12.Reference = local_68.TextData.Reference;
LAB_1430344f6:
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar2 = (pFVar11->TextData).Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar2;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res10);
  }
  __return_storage_ptr__->Flags = pFVar11->Flags;
  if ((bVar14) && (TVar12.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*TVar12.Reference + 0x10))(TVar12.Reference);
  }
  if ((bVar4) && (local_58.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  if ((bVar5) && (local_48.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  }
  return __return_storage_ptr__;
}

// GetHueText @ 143034620

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FText * __thiscall
SThemeColorBlock::GetHueText(SThemeColorBlock *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  atomic<int> aVar6;
  atomic<int> aVar7;
  FText *pFVar8;
  FText *pFVar9;
  FLinearColor *pFVar10;
  TRefCountPtr<ITextData> TVar11;
  TReferenceControllerBase<1> *pTVar12;
  bool bVar13;
  undefined1 unaff_XMM6 [16];
  undefined1 auVar14 [16];
  undefined4 local_res8;
  undefined4 uStackX_c;
  undefined1 local_res10 [8];
  FText local_58;
  FText local_48;
  FText local_38;
  
  local_res8 = 0;
  if ((((this->ColorPtr).Object == (FLinearColor *)0x0) ||
      (pTVar12 = (this->ColorPtr).WeakReferenceCount.ReferenceController,
      pTVar12 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar12->SharedReferenceCount < 1)) {
    pFVar8 = FText::GetEmpty();
    TVar11.Reference = (pFVar8->TextData).Reference;
    local_58.TextData.Reference = TVar11.Reference;
    if (TVar11.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar11.Reference + 8))(TVar11.Reference,&local_res8);
    }
    pFVar9 = &local_58;
    pTVar12 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
    bVar5 = false;
    bVar4 = false;
    bVar3 = false;
    bVar13 = true;
    local_58.Flags = pFVar8->Flags;
    goto LAB_143034776;
  }
  pTVar12 = (this->ColorPtr).WeakReferenceCount.ReferenceController;
  pFVar10 = (FLinearColor *)0x0;
  if (pTVar12 == (TReferenceControllerBase<1> *)0x0) {
LAB_1430346a4:
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar13) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FText *)(*pcVar2)();
      return pFVar8;
    }
  }
  else {
    aVar6 = pTVar12->SharedReferenceCount;
    do {
      if (aVar6 == (atomic<int>)0x0) {
        pTVar12 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1430346a4;
      }
      LOCK();
      aVar7 = pTVar12->SharedReferenceCount;
      bVar13 = aVar6 == aVar7;
      if (bVar13) {
        pTVar12->SharedReferenceCount = (atomic<int>)((int)aVar6 + 1);
        aVar7 = aVar6;
      }
      UNLOCK();
      aVar6 = aVar7;
    } while (!bVar13);
    pFVar10 = (this->ColorPtr).Object;
    if (pFVar10 == (FLinearColor *)0x0) goto LAB_1430346a4;
  }
  auVar14 = roundps(unaff_XMM6,ZEXT416((uint)((pFVar10->field0_0x0)._s_0.R + __real_3f000000)),1);
  pFVar8 = FText::AsLocalizable_Advanced_LocText(&local_38,L"SColorThemes",L"Hue",L"H");
  pFVar9 = FormatToolTipText(this,&local_48,pFVar8,auVar14._0_4_);
  bVar5 = true;
  bVar4 = true;
  bVar3 = true;
  bVar13 = false;
  TVar11.Reference = local_58.TextData.Reference;
LAB_143034776:
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (pFVar9->TextData).Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res10);
  }
  __return_storage_ptr__->Flags = pFVar9->Flags;
  if ((bVar13) && (TVar11.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*TVar11.Reference + 0x10))(TVar11.Reference);
  }
  if ((bVar3) && (local_48.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  if ((bVar4) && (local_38.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  }
  return __return_storage_ptr__;
}

// GetLabel @ 143034820

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FText * __thiscall SThemeColorBlock::GetLabel(SThemeColorBlock *this,FText *__return_storage_ptr__)

{
  FColorInfo *pFVar1;
  ITextData *pIVar2;
  code *pcVar3;
  bool bVar4;
  FText *pFVar5;
  undefined1 local_res8 [8];
  
  if ((this->ColorInfo).Object == (FColorInfo *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FText *)(*pcVar3)();
      return pFVar5;
    }
  }
  pFVar1 = (this->ColorInfo).Object;
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar2 = (pFVar1->Label).TextData.Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar2;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
  }
  __return_storage_ptr__->Flags = (pFVar1->Label).Flags;
  return __return_storage_ptr__;
}

// GetRedText @ 1430358a0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FText * __thiscall
SThemeColorBlock::GetRedText(SThemeColorBlock *this,FText *__return_storage_ptr__)

{
  float fVar1;
  ITextData *pIVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  atomic<int> aVar7;
  atomic<int> aVar8;
  FText *pFVar9;
  FLinearColor *pFVar10;
  FText *pFVar11;
  TRefCountPtr<ITextData> TVar12;
  TReferenceControllerBase<1> *pTVar13;
  bool bVar14;
  undefined4 local_res8;
  undefined4 uStackX_c;
  undefined1 local_res10 [8];
  FText local_68;
  FText local_58;
  FText local_48;
  FLinearColor local_38 [2];
  
  local_res8 = 0;
  if ((((this->ColorPtr).Object == (FLinearColor *)0x0) ||
      (pTVar13 = (this->ColorPtr).WeakReferenceCount.ReferenceController,
      pTVar13 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar13->SharedReferenceCount < 1)) {
    pFVar9 = FText::GetEmpty();
    TVar12.Reference = (pFVar9->TextData).Reference;
    local_68.TextData.Reference = TVar12.Reference;
    if (TVar12.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar12.Reference + 8))(TVar12.Reference,&local_res8);
    }
    pFVar11 = &local_68;
    pTVar13 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
    bVar6 = false;
    bVar5 = false;
    bVar4 = false;
    bVar14 = true;
    local_68.Flags = pFVar9->Flags;
    goto LAB_1430359f5;
  }
  pTVar13 = (this->ColorPtr).WeakReferenceCount.ReferenceController;
  pFVar10 = (FLinearColor *)0x0;
  if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
LAB_143035924:
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar14) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FText *)(*pcVar3)();
      return pFVar9;
    }
  }
  else {
    aVar7 = pTVar13->SharedReferenceCount;
    do {
      if (aVar7 == (atomic<int>)0x0) {
        pTVar13 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_143035924;
      }
      LOCK();
      aVar8 = pTVar13->SharedReferenceCount;
      bVar14 = aVar7 == aVar8;
      if (bVar14) {
        pTVar13->SharedReferenceCount = (atomic<int>)((int)aVar7 + 1);
        aVar8 = aVar7;
      }
      UNLOCK();
      aVar7 = aVar8;
    } while (!bVar14);
    pFVar10 = (this->ColorPtr).Object;
    if (pFVar10 == (FLinearColor *)0x0) goto LAB_143035924;
  }
  pFVar10 = FLinearColor::HSVToLinearRGB(pFVar10,local_38);
  fVar1 = (pFVar10->field0_0x0)._s_0.R;
  pFVar9 = FText::AsLocalizable_Advanced_LocText(&local_48,L"SColorThemes",L"Red",L"R");
  pFVar11 = FormatToolTipText(this,&local_58,pFVar9,fVar1);
  bVar6 = true;
  bVar5 = true;
  bVar4 = true;
  bVar14 = false;
  TVar12.Reference = local_68.TextData.Reference;
LAB_1430359f5:
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar2 = (pFVar11->TextData).Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar2;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res10);
  }
  __return_storage_ptr__->Flags = pFVar11->Flags;
  if ((bVar14) && (TVar12.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*TVar12.Reference + 0x10))(TVar12.Reference);
  }
  if ((bVar4) && (local_58.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  if ((bVar5) && (local_48.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  }
  return __return_storage_ptr__;
}

// GetSaturationText @ 143035aa0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FText * __thiscall
SThemeColorBlock::GetSaturationText(SThemeColorBlock *this,FText *__return_storage_ptr__)

{
  float fVar1;
  ITextData *pIVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  atomic<int> aVar7;
  atomic<int> aVar8;
  FText *pFVar9;
  FText *pFVar10;
  FLinearColor *pFVar11;
  TRefCountPtr<ITextData> TVar12;
  TReferenceControllerBase<1> *pTVar13;
  bool bVar14;
  undefined4 local_res8;
  undefined4 uStackX_c;
  undefined1 local_res10 [8];
  FText local_58;
  FText local_48;
  FText local_38 [2];
  
  local_res8 = 0;
  if ((((this->ColorPtr).Object == (FLinearColor *)0x0) ||
      (pTVar13 = (this->ColorPtr).WeakReferenceCount.ReferenceController,
      pTVar13 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar13->SharedReferenceCount < 1)) {
    pFVar9 = FText::GetEmpty();
    TVar12.Reference = (pFVar9->TextData).Reference;
    local_58.TextData.Reference = TVar12.Reference;
    if (TVar12.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar12.Reference + 8))(TVar12.Reference,&local_res8);
    }
    pFVar10 = &local_58;
    pTVar13 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
    bVar6 = false;
    bVar5 = false;
    bVar4 = false;
    bVar14 = true;
    local_58.Flags = pFVar9->Flags;
    goto LAB_143035be2;
  }
  pTVar13 = (this->ColorPtr).WeakReferenceCount.ReferenceController;
  pFVar11 = (FLinearColor *)0x0;
  if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
LAB_143035b20:
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar14) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FText *)(*pcVar3)();
      return pFVar9;
    }
  }
  else {
    aVar7 = pTVar13->SharedReferenceCount;
    do {
      if (aVar7 == (atomic<int>)0x0) {
        pTVar13 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_143035b20;
      }
      LOCK();
      aVar8 = pTVar13->SharedReferenceCount;
      bVar14 = aVar7 == aVar8;
      if (bVar14) {
        pTVar13->SharedReferenceCount = (atomic<int>)((int)aVar7 + 1);
        aVar8 = aVar7;
      }
      UNLOCK();
      aVar7 = aVar8;
    } while (!bVar14);
    pFVar11 = (this->ColorPtr).Object;
    if (pFVar11 == (FLinearColor *)0x0) goto LAB_143035b20;
  }
  fVar1 = (pFVar11->field0_0x0)._s_0.G;
  pFVar9 = FText::AsLocalizable_Advanced_LocText(local_38,L"SColorThemes",L"Saturation",L"S");
  pFVar10 = FormatToolTipText(this,&local_48,pFVar9,fVar1);
  bVar6 = true;
  bVar5 = true;
  bVar4 = true;
  bVar14 = false;
  TVar12.Reference = local_58.TextData.Reference;
LAB_143035be2:
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar2 = (pFVar10->TextData).Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar2;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res10);
  }
  __return_storage_ptr__->Flags = pFVar10->Flags;
  if ((bVar14) && (TVar12.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*TVar12.Reference + 0x10))(TVar12.Reference);
  }
  if ((bVar4) && (local_48.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  if ((bVar5) && (local_38[0].TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*local_38[0].TextData.Reference + 0x10))();
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  }
  return __return_storage_ptr__;
}

// GetValueText @ 143036010

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FText * __thiscall
SThemeColorBlock::GetValueText(SThemeColorBlock *this,FText *__return_storage_ptr__)

{
  float fVar1;
  ITextData *pIVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  atomic<int> aVar7;
  atomic<int> aVar8;
  FText *pFVar9;
  FText *pFVar10;
  FLinearColor *pFVar11;
  TRefCountPtr<ITextData> TVar12;
  TReferenceControllerBase<1> *pTVar13;
  bool bVar14;
  undefined4 local_res8;
  undefined4 uStackX_c;
  undefined1 local_res10 [8];
  FText local_58;
  FText local_48;
  FText local_38 [2];
  
  local_res8 = 0;
  if ((((this->ColorPtr).Object == (FLinearColor *)0x0) ||
      (pTVar13 = (this->ColorPtr).WeakReferenceCount.ReferenceController,
      pTVar13 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar13->SharedReferenceCount < 1)) {
    pFVar9 = FText::GetEmpty();
    TVar12.Reference = (pFVar9->TextData).Reference;
    local_58.TextData.Reference = TVar12.Reference;
    if (TVar12.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar12.Reference + 8))(TVar12.Reference,&local_res8);
    }
    pFVar10 = &local_58;
    pTVar13 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
    bVar6 = false;
    bVar5 = false;
    bVar4 = false;
    bVar14 = true;
    local_58.Flags = pFVar9->Flags;
    goto LAB_143036152;
  }
  pTVar13 = (this->ColorPtr).WeakReferenceCount.ReferenceController;
  pFVar11 = (FLinearColor *)0x0;
  if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
LAB_143036090:
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar14) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FText *)(*pcVar3)();
      return pFVar9;
    }
  }
  else {
    aVar7 = pTVar13->SharedReferenceCount;
    do {
      if (aVar7 == (atomic<int>)0x0) {
        pTVar13 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_143036090;
      }
      LOCK();
      aVar8 = pTVar13->SharedReferenceCount;
      bVar14 = aVar7 == aVar8;
      if (bVar14) {
        pTVar13->SharedReferenceCount = (atomic<int>)((int)aVar7 + 1);
        aVar8 = aVar7;
      }
      UNLOCK();
      aVar7 = aVar8;
    } while (!bVar14);
    pFVar11 = (this->ColorPtr).Object;
    if (pFVar11 == (FLinearColor *)0x0) goto LAB_143036090;
  }
  fVar1 = (pFVar11->field0_0x0)._s_0.B;
  pFVar9 = FText::AsLocalizable_Advanced_LocText(local_38,L"SColorThemes",L"Value",L"V");
  pFVar10 = FormatToolTipText(this,&local_48,pFVar9,fVar1);
  bVar6 = true;
  bVar5 = true;
  bVar4 = true;
  bVar14 = false;
  TVar12.Reference = local_58.TextData.Reference;
LAB_143036152:
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar2 = (pFVar10->TextData).Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar2;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res10);
  }
  __return_storage_ptr__->Flags = pFVar10->Flags;
  if ((bVar14) && (TVar12.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*TVar12.Reference + 0x10))(TVar12.Reference);
  }
  if ((bVar4) && (local_48.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  if ((bVar5) && (local_38[0].TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*local_38[0].TextData.Reference + 0x10))();
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  }
  return __return_storage_ptr__;
}

// OnColorBlockRename @ 143039890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SThemeColorBlock::OnColorBlockRename(SThemeColorBlock *this)

{
  byte *pbVar1;
  ITextData *pIVar2;
  ITextData *pIVar3;
  SWidget *pSVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  STextEntryPopup *pSVar8;
  FSharedReferencer<1> FVar9;
  bool bVar10;
  char cVar11;
  byte bVar12;
  FArguments *pFVar13;
  FText *pFVar14;
  undefined8 *puVar15;
  TSharedRef<SWidget,1> *pTVar16;
  ulong64 uVar17;
  FSlateApplication *this_00;
  FSlateApplication *pFVar18;
  FDeprecateVector2DParameter *pFVar19;
  FWidgetPath *pFVar20;
  ForElementType<FArrangedWidget> FVar21;
  FDeprecateVector2DParameter FVar22;
  undefined1 auStackY_5b8 [32];
  T0RequiredArgs local_558 [2];
  undefined1 local_556;
  undefined1 local_555;
  FPopupTransitionEffect local_554;
  FLLMScope local_550 [2];
  TSlateDecl<STextEntryPopup,RequiredArgs::T0RequiredArgs> local_548;
  FDeprecateVector2DParameter local_530;
  code *local_528;
  undefined4 uStack_520;
  undefined4 uStack_51c;
  undefined1 local_518 [4];
  FName local_514;
  FMemScope local_508;
  TVector2<float>_u_0 local_500;
  TSharedRef<SWidget,1> local_4f8;
  FDestructionSentinel local_4e8;
  undefined1 *local_4d0;
  TSharedRef<SWidget,1> local_4c8;
  TSharedPtr<IMenu,1> local_4b8;
  TSharedRef<SWidget,1> local_4a8;
  FText local_498;
  FArguments local_488;
  FWidgetPath local_198;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_5b8;
  bVar7 = false;
  bVar6 = false;
  bVar10 = false;
  local_554.SlideDirection = None;
  pFVar13 = STextEntryPopup::FArguments::FArguments(&local_488);
  pFVar14 = FText::AsLocalizable_Advanced_LocText
                      (&local_498,L"SColorThemes",L"NewColorLabel",L"Color Label");
  pIVar2 = (pFVar13->_Label).TextData.Reference;
  pIVar3 = (pFVar14->TextData).Reference;
  if (pIVar2 != pIVar3) {
    (pFVar13->_Label).TextData.Reference = pIVar3;
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_518);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (pFVar13->_Label).Flags = pFVar14->Flags;
  pIVar2 = (pFVar14->TextData).Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar13->_OnTextCommitted,
             (FWriteAccessScope *)&local_4e8);
  local_4d0 = &(pFVar13->_OnTextCommitted).field_0x8;
  puVar15 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_4d0);
  FVar22 = local_530;
  if (puVar15 != (undefined8 *)0x0) {
    uStack_51c = local_498._12_4_;
    local_528 = SetLabel;
    uStack_520 = 0;
    pTVar16 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_4c8);
    FVar22 = (FDeprecateVector2DParameter)(pTVar16->SharedReferenceCount).ReferenceController;
    pSVar4 = pTVar16->Object;
    if (FVar22 != (FDeprecateVector2DParameter)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)FVar22 + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar22 + 8) + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)((longlong)FVar22 + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar22 + 8) + 1);
      UNLOCK();
    }
    *puVar15 = &
               ___7__TCommonDelegateInstanceState___A6AXAEBVFText__W4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar17 = FDelegateHandle::GenerateNewID();
    puVar15[2] = uVar17;
    *puVar15 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSThemeColorBlock___00__A6AXAEBVFText__W4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar15[3] = pSVar4;
    *(FDeprecateVector2DParameter *)(puVar15 + 4) = FVar22;
    if (FVar22 != (FDeprecateVector2DParameter)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)FVar22 + 0xc) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar22 + 0xc) + 1);
      UNLOCK();
    }
    bVar7 = true;
    bVar6 = true;
    bVar10 = true;
    puVar15[5] = local_528;
    puVar15[6] = CONCAT44(uStack_51c,uStack_520);
  }
  if (bVar10) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)FVar22);
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)FVar22);
  }
  if (bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_4c8.SharedReferenceCount.ReferenceController);
  }
  if (local_4e8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4e8.Accessor,&local_4e8);
  }
  FLLMScope::FLLMScope(local_550,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_514 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_508,&local_514,true);
  TSlateDecl<STextEntryPopup,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextEntryPopup,RequiredArgs::T0RequiredArgs>
            (&local_548,"STextEntryPopup",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorThemes.cpp"
             ,0x15a,local_558);
  FMemScope::~FMemScope(&local_508);
  FLLMScope::~FLLMScope(local_550);
  pSVar8 = local_548._Widget.Object;
  if ((local_548._Widget.Object == (STextEntryPopup *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  SWidget::SWidgetConstruct((SWidget *)local_548._Widget.Object,(FSlateBaseNamedArgs *)pFVar13);
  STextEntryPopup::Construct(local_548._Widget.Object,pFVar13);
  if ((local_548._Widget.Object == (STextEntryPopup *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (((local_548._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar11 = (**(code **)((local_548._Widget.Object)->_padding_ + 0x228))(local_548._Widget.Object);
    bVar12 = 0;
    if (cVar11 == '\0') goto LAB_143039b5e;
  }
  bVar12 = 0x20;
LAB_143039b5e:
  *(byte *)&(local_548._Widget.Object)->_padding_ =
       (byte)(local_548._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_548._Widget.Object)->_padding_ =
       (byte)(local_548._Widget.Object)->_padding_ | bVar12;
  if ((local_548._Widget.Object == (STextEntryPopup *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pbVar1 = (byte *)((longlong)&(local_548._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((local_548._Widget.Object == (STextEntryPopup *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar9.ReferenceController = local_548._Widget.SharedReferenceCount.ReferenceController;
  local_548._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_548._Widget.Object = (STextEntryPopup *)0x0;
  if ((pSVar8 == (STextEntryPopup *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_488._ErrorReporting.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_488._OnVerifyTextChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_488._MaxWidth.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_488._HintText.Getter);
  if (local_488._HintText.Value.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_488._HintText.Value.TextData.Reference + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &local_488._ClearKeyboardFocusOnCommit.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_488._OnTextCommitted);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_488._OnTextChanged);
  if (local_488._DefaultText.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_488._DefaultText.TextData.Reference + 0x10))();
  }
  if (local_488._Label.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_488._Label.TextData.Reference + 0x10))();
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_488);
  this_00 = FSlateApplication::Get();
  local_500 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  local_555 = 0;
  local_554.SlideDirection = TypeInPopup;
  pFVar18 = FSlateApplication::Get();
  pFVar19 = (FDeprecateVector2DParameter *)
            (**(code **)(*(longlong *)pFVar18 + 0x68))(pFVar18,&local_528);
  local_530 = *pFVar19;
  local_4f8.Object = (SWidget *)pSVar8;
  local_4f8.SharedReferenceCount.ReferenceController = FVar9.ReferenceController;
  if (FVar9.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar9.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar9.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar20 = FWidgetPath::FWidgetPath(&local_198);
  pTVar16 = TSharedFromThis<SWidget,1>::AsShared
                      ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_4a8);
  FSlateApplication::PushMenu
            (this_00,&local_4b8,pTVar16,pFVar20,&local_4f8,&local_530,&local_554,true,
             (FDeprecateVector2DParameter *)&local_500._s_0,SUB82(&local_556,0),true,-1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4b8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4a8.SharedReferenceCount.ReferenceController);
  if (local_198.VirtualPointerPositions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.VirtualPointerPositions.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_198.TopLevelWindow.SharedReferenceCount.ReferenceController);
  FVar21 = (ForElementType<FArrangedWidget>)&local_198.Widgets.Array;
  if (local_198.Widgets.Array.AllocatorInstance.SecondaryData !=
      (ForElementType<FArrangedWidget>)0x0) {
    FVar21 = local_198.Widgets.Array.AllocatorInstance.SecondaryData;
  }
  DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar21,local_198.Widgets.Array.ArrayNum);
  if (local_198.Widgets.Array.AllocatorInstance.SecondaryData !=
      (ForElementType<FArrangedWidget>)0x0) {
    FMemory::Free((void *)local_198.Widgets.Array.AllocatorInstance.SecondaryData);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4f8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar9.ReferenceController);
  return;
}

// OnDragDetected @ 143039eb0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SThemeColorBlock::OnDragDetected
          (SThemeColorBlock *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  bool bVar1;
  TSet<FKey,DefaultKeyFuncs<FKey,0>,FDefaultSetAllocator> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  FColorTheme *this_00;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  FName FVar7;
  FSharedReferencer<1> FVar8;
  uint uVar9;
  atomic<int> aVar10;
  atomic<int> aVar11;
  bool *pbVar12;
  FReply *pFVar13;
  FLinearColor *pFVar14;
  FColorDragDrop *this_01;
  ForElementType<FSetElementId> FVar15;
  int iVar16;
  SThemeColorBlocksBar *pSVar17;
  SThemeColorBlocksBar *pSVar18;
  SThemeColorBlocksBar *pSVar19;
  SThemeColorBlocksBar *pSVar20;
  SThemeColorBlocksBar *pSVar21;
  bool bVar22;
  TRawPtrProxy<FColorDragDrop> local_res20;
  FSharedReferencer<1> local_1a0;
  TSharedRef<FColorDragDrop,1> local_198;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_188;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_170;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_158;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_140;
  TSharedPtr<FLinearColor,1> local_128;
  FLinearColor_u_0 local_118;
  FLinearColor local_108;
  FReply local_f8;
  
  FVar8.ReferenceController =
       EKeys::LeftMouseButton.KeyDetails.SharedReferenceCount.ReferenceController;
  FVar7 = EKeys::LeftMouseButton.KeyName;
  if (EKeys::LeftMouseButton.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (EKeys::LeftMouseButton.KeyDetails.SharedReferenceCount.ReferenceController)->
    SharedReferenceCount =
         (atomic<int>)
         ((int)(EKeys::LeftMouseButton.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar2 = param_2->PressedButtons;
  uVar9 = ::GetTypeHash(FVar7.ComparisonIndex.Value);
  if (*(int *)&(pTVar2->Elements).field_0x8 != *(int *)&(pTVar2->Elements).field_0x34) {
    FVar15 = (pTVar2->Hash).SecondaryData;
    if (FVar15 == (ForElementType<FSetElementId>)0x0) {
      FVar15 = (ForElementType<FSetElementId>)&pTVar2->Hash;
    }
    iVar16 = *(int *)((longlong)FVar15 +
                     (ulonglong)(pTVar2->HashSize - 1U & FVar7.Number + uVar9) * 4);
    if (iVar16 != -1) {
      do {
        if (*(FName *)((longlong)iVar16 * 0x20 + *(longlong *)&pTVar2->Elements) == FVar7) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar8.ReferenceController);
          if ((iVar16 == -1) ||
             (pbVar12 = TAttribute<bool>::Get(&this->bSupportsDrag), *pbVar12 == false))
          goto LAB_143039f5e;
          pSVar21 = (SThemeColorBlocksBar *)0x0;
          if (((this->ParentPtr).Object == (SThemeColorBlocksBar *)0x0) ||
             ((pTVar3 = (this->ParentPtr).WeakReferenceCount.ReferenceController,
              pTVar3 == (TReferenceControllerBase<1> *)0x0 ||
              ((int)pTVar3->SharedReferenceCount < 1)))) goto LAB_14303a0cb;
          pSVar20 = (SThemeColorBlocksBar *)(this->ParentPtr).WeakReferenceCount.ReferenceController
          ;
          pSVar18 = pSVar21;
          pSVar19 = pSVar20;
          if ((pSVar20 == (SThemeColorBlocksBar *)0x0) ||
             (aVar10 = *(atomic<int> *)&pSVar20->_padding_, pSVar18 = (SThemeColorBlocksBar *)0x0,
             pSVar19 = pSVar21, aVar10 == (atomic<int>)0x0)) goto LAB_14303a015;
          goto LAB_14303a000;
        }
        iVar16 = *(int *)((longlong)iVar16 * 0x20 + 0x18 + *(longlong *)&pTVar2->Elements);
      } while (iVar16 != -1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar8.ReferenceController);
LAB_143039f5e:
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
  while (aVar10 != (atomic<int>)0x0) {
LAB_14303a000:
    LOCK();
    aVar11 = *(atomic<int> *)&pSVar20->_padding_;
    bVar22 = aVar10 == aVar11;
    if (bVar22) {
      *(atomic<int> *)&pSVar20->_padding_ = (atomic<int>)((int)aVar10 + 1);
      aVar11 = aVar10;
    }
    aVar10 = aVar11;
    UNLOCK();
    if (bVar22) {
      pSVar18 = (this->ParentPtr).Object;
      pSVar19 = pSVar20;
      if (pSVar18 != (SThemeColorBlocksBar *)0x0) goto LAB_14303a03b;
      break;
    }
  }
LAB_14303a015:
  bVar22 = ::FDebug::CheckVerifyFailedImpl2
                     ("IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                      ,0x458,L"");
  pSVar20 = pSVar19;
  if (bVar22) {
    pcVar4 = (code *)swi(3);
    pFVar13 = (FReply *)(*pcVar4)();
    return pFVar13;
  }
LAB_14303a03b:
  pSVar19 = (SThemeColorBlocksBar *)(this->ColorPtr).WeakReferenceCount.ReferenceController;
  pSVar17 = pSVar19;
  if (pSVar19 != (SThemeColorBlocksBar *)0x0) {
    aVar10 = *(atomic<int> *)&pSVar19->_padding_;
    do {
      pSVar17 = pSVar21;
      if (aVar10 == (atomic<int>)0x0) goto LAB_14303a066;
      LOCK();
      aVar11 = *(atomic<int> *)&pSVar19->_padding_;
      bVar22 = aVar10 == aVar11;
      if (bVar22) {
        *(atomic<int> *)&pSVar19->_padding_ = (atomic<int>)((int)aVar10 + 1);
        aVar11 = aVar10;
      }
      UNLOCK();
      aVar10 = aVar11;
    } while (!bVar22);
    pSVar21 = (SThemeColorBlocksBar *)(this->ColorPtr).Object;
    pSVar17 = pSVar19;
  }
LAB_14303a066:
  if (((pSVar18->ColorTheme).Object == (FColorTheme *)0x0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar22)) {
    pcVar4 = (code *)swi(3);
    pFVar13 = (FReply *)(*pcVar4)();
    return pFVar13;
  }
  this_00 = (pSVar18->ColorTheme).Object;
  if (pSVar17 != (SThemeColorBlocksBar *)0x0) {
    LOCK();
    *(int *)&pSVar17->_padding_ = (int)pSVar17->_padding_ + 1;
    UNLOCK();
  }
  local_128.Object = (FLinearColor *)pSVar21;
  local_128.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pSVar17;
  FColorTheme::RemoveColor(this_00,&local_128);
  SColorThemesViewer::SaveColorThemesToIni();
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar17);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar20);
LAB_14303a0cb:
  local_170._0_8_ = 0;
  local_170._8_8_ = 0;
  local_170._16_4_ = 0;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&local_170,&this->HideTrashCallback);
  local_188._0_8_ = 0;
  local_188._8_8_ = 0;
  local_188._16_4_ = 0;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&local_188,&this->ShowTrashCallback);
  pbVar12 = TAttribute<bool>::Get(&this->bUseAlpha);
  bVar22 = *pbVar12;
  pbVar12 = TAttribute<bool>::Get(&this->bUseSRGB);
  bVar1 = *pbVar12;
  pFVar14 = GetColor(this,&local_108);
  uVar5 = *(undefined8 *)&pFVar14->field0_0x0;
  uVar6 = *(undefined8 *)((longlong)&pFVar14->field0_0x0 + 8);
  this_01 = ::operator_new(0xb8);
  if (this_01 == (FColorDragDrop *)0x0) {
    local_res20.Object = (FColorDragDrop *)0x0;
  }
  else {
    local_158._0_8_ = 0;
    local_158._8_8_ = 0;
    local_158._16_4_ = 0;
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              (&local_158,&local_170);
    local_140._0_8_ = 0;
    local_140._8_8_ = 0;
    local_140._16_4_ = 0;
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              (&local_140,&local_188);
    local_118._0_8_ = uVar5;
    local_118._8_8_ = uVar6;
    local_res20.Object =
         FColorDragDrop::FColorDragDrop
                   (this_01,(FLinearColor *)&local_118._s_0,bVar1,bVar22,&local_140,&local_158);
    if ((((local_res20.Object != (FColorDragDrop *)0x0) && ((local_res20.Object)->_padding_ != 0))
        && ((local_res20.Object)->_padding_ != 0)) &&
       ((0 < *(int *)((local_res20.Object)->_padding_ + 8) &&
        (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                            ("!InObject || !InObject->DoesSharedInstanceExist()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x7a5,L"Trying to share an already-shared object"), bVar22)))) {
      pcVar4 = (code *)swi(3);
      pFVar13 = (FReply *)(*pcVar4)();
      return pFVar13;
    }
  }
  TSharedRef<FColorDragDrop,1>::TSharedRef<FColorDragDrop,1><FColorDragDrop>
            (&local_198,&local_res20);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_188);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_170);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  FReply::FReply(&local_f8,true);
  FVar8.ReferenceController = local_198.SharedReferenceCount.ReferenceController;
  local_1a0.ReferenceController = local_198.SharedReferenceCount.ReferenceController;
  if (local_198.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_198.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_198.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (local_198.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_198.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_f8.DragDropContent.Object = (FDragDropOperation *)local_198.Object;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            (&local_f8.DragDropContent.SharedReferenceCount,&local_1a0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1a0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar8.ReferenceController);
  FReply::FReply(__return_storage_ptr__,&local_f8);
  FReply::~FReply(&local_f8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_198.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// OnGetAlphaDisplayMode @ 14303aad0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

EColorBlockAlphaDisplayMode __thiscall
SThemeColorBlock::OnGetAlphaDisplayMode(SThemeColorBlock *this)

{
  bool *pbVar1;
  EColorBlockAlphaDisplayMode EVar2;
  
  pbVar1 = TAttribute<bool>::Get(&this->bUseAlpha);
  EVar2 = Combined;
  if (*pbVar1 == false) {
    EVar2 = Ignore;
  }
  return EVar2;
}

// OnGetAlphaVisibility @ 14303ab00

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

EVisibility __thiscall SThemeColorBlock::OnGetAlphaVisibility(SThemeColorBlock *this)

{
  bool *pbVar1;
  uchar *in_RDX;
  EVisibility EVar2;
  
  pbVar1 = TAttribute<bool>::Get(&this->bUseAlpha);
  EVar2 = EVisibility::Collapsed;
  if (*pbVar1 != false) {
    EVar2 = EVisibility::Visible;
  }
  *in_RDX = (uchar)EVar2.Value.Value;
  return (EVisibility)SUB81(in_RDX,0);
}

// OnGetLabelVisibility @ 14303ab40

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

EVisibility __thiscall SThemeColorBlock::OnGetLabelVisibility(SThemeColorBlock *this)

{
  code *pcVar1;
  bool bVar2;
  TEnumAsByte<EVisibility::Private> TVar3;
  EVisibility EVar4;
  uchar *in_RDX;
  
  if ((this->ColorInfo).Object == (FColorInfo *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar3.Value = (*pcVar1)();
      return (TEnumAsByte<EVisibility::Private>)(TEnumAsByte<EVisibility::Private>)TVar3.Value;
    }
  }
  bVar2 = FText::IsEmpty(&((this->ColorInfo).Object)->Label);
  EVar4 = EVisibility::Collapsed;
  if (!bVar2) {
    EVar4 = EVisibility::Visible;
  }
  *in_RDX = (uchar)EVar4.Value.Value;
  return (EVisibility)SUB81(in_RDX,0);
}

// OnMouseButtonDown @ 14303aef0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SThemeColorBlock::OnMouseButtonDown
          (SThemeColorBlock *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FName FVar4;
  SWidget *pSVar5;
  TReferenceControllerBase<1> *pTVar6;
  FKeyDetails *pFVar7;
  FSharedReferencer<1> FVar8;
  FSharedReferencer<1> FVar9;
  FWeakReferencer<1> FVar10;
  bool *pbVar11;
  TSharedRef<SWidget,1> *pTVar12;
  FReply *pFVar13;
  bool bVar14;
  TSharedRef<SWidget,1> local_f8;
  FReply local_e8;
  
  pTVar3 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
  FVar4 = (param_2->EffectingButton).KeyName;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((FVar4 == EKeys::LeftMouseButton.KeyName) &&
     (pbVar11 = TAttribute<bool>::Get(&this->bSupportsDrag), *pbVar11 != false)) {
    bVar14 = true;
  }
  else {
    bVar14 = false;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  if (bVar14) {
    FReply::FReply(&local_e8,true);
    FVar8 = EKeys::LeftMouseButton.KeyDetails.SharedReferenceCount;
    pFVar7 = EKeys::LeftMouseButton.KeyDetails.Object;
    FVar4 = EKeys::LeftMouseButton.KeyName;
    if (EKeys::LeftMouseButton.KeyDetails.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (EKeys::LeftMouseButton.KeyDetails.SharedReferenceCount.ReferenceController)->
      SharedReferenceCount =
           (atomic<int>)
           ((int)(EKeys::LeftMouseButton.KeyDetails.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar12 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_f8);
    pTVar3 = (pTVar12->SharedReferenceCount).ReferenceController;
    pSVar5 = pTVar12->Object;
    if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_f8.SharedReferenceCount.ReferenceController);
    }
    else {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_f8.SharedReferenceCount.ReferenceController);
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_e8.DetectDragForWidget.Object = pSVar5;
    FVar10.ReferenceController = local_e8.DetectDragForWidget.WeakReferenceCount.ReferenceController
    ;
    if (pTVar3 != local_e8.DetectDragForWidget.WeakReferenceCount.ReferenceController) {
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
        UNLOCK();
      }
      FVar10.ReferenceController = pTVar3;
      if (local_e8.DetectDragForWidget.WeakReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &(local_e8.DetectDragForWidget.WeakReferenceCount.ReferenceController)->
                  WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)((local_e8.DetectDragForWidget.WeakReferenceCount.ReferenceController)->
                       _padding_ + 8))
                    (local_e8.DetectDragForWidget.WeakReferenceCount.ReferenceController,1);
        }
      }
    }
    local_e8.DetectDragForWidget.WeakReferenceCount.ReferenceController = FVar10.ReferenceController
    ;
    FVar9.ReferenceController =
         local_e8.DetectDragForMouseButton.KeyDetails.SharedReferenceCount.ReferenceController;
    local_e8.DetectDragForMouseButton.KeyName = FVar4;
    if (FVar8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar8.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar8.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_e8.DetectDragForMouseButton.KeyDetails.Object = pFVar7;
    local_e8.DetectDragForMouseButton.KeyDetails.SharedReferenceCount.ReferenceController =
         FVar8.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar9.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar8.ReferenceController);
    pTVar12 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_f8);
    pTVar6 = (pTVar12->SharedReferenceCount).ReferenceController;
    pSVar5 = pTVar12->Object;
    if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_f8.SharedReferenceCount.ReferenceController);
    }
    else {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_f8.SharedReferenceCount.ReferenceController);
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_f8.Object = pSVar5;
    local_f8.SharedReferenceCount.ReferenceController = pTVar6;
    pFVar13 = FReply::CaptureMouse(&local_e8,&local_f8);
    FReply::FReply(__return_storage_ptr__,pFVar13);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    FReply::~FReply(&local_e8);
  }
  else {
    pTVar3 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
    FVar4 = (param_2->EffectingButton).KeyName;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar14 = FVar4 == EKeys::RightMouseButton.KeyName;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    if (bVar14) {
      OnColorBlockRename(this);
    }
    FReply::FReply(__return_storage_ptr__,bVar14);
  }
  return __return_storage_ptr__;
}

// OnMouseButtonUp @ 14303b2b0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SThemeColorBlock::OnMouseButtonUp
          (SThemeColorBlock *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FName FVar4;
  longlong *plVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  FWeakReferencer<1> FVar9;
  bool bVar10;
  FReply *pFVar11;
  FLinearColor *pFVar12;
  FDeprecateSlateVector2D local_res20;
  undefined8 local_108;
  undefined8 uStack_100;
  FReadAccessScope local_f8;
  FLinearColor local_e0;
  FReply local_d0;
  
  pTVar3 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
  FVar4 = (param_2->EffectingButton).KeyName;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (FVar4 == EKeys::LeftMouseButton.KeyName) {
    local_res20 = param_2->ScreenSpacePosition;
    bVar10 = FGeometry::IsUnderLocation(param_1,(FDeprecateVector2DParameter *)&local_res20);
    if (bVar10) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      if (((((this->ColorPtr).Object == (FLinearColor *)0x0) ||
           (pTVar3 = (this->ColorPtr).WeakReferenceCount.ReferenceController,
           pTVar3 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar3->SharedReferenceCount < 1)
          ) && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ColorPtr.IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorThemes.cpp"
                                    ,0x18e,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        pFVar11 = (FReply *)(*pcVar6)();
        return pFVar11;
      }
      pFVar12 = GetColor(this,&local_e0);
      uVar7 = *(undefined8 *)&pFVar12->field0_0x0;
      uVar8 = *(undefined8 *)((longlong)&pFVar12->field0_0x0 + 8);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnSelectColor,
                 &local_f8);
      if ((*(int *)&(this->OnSelectColor).field_0x10 != 0) &&
         (plVar5 = *(longlong **)&(this->OnSelectColor).field_0x8, plVar5 != (longlong *)0x0)) {
        local_108 = uVar7;
        uStack_100 = uVar8;
        (**(code **)(*plVar5 + 0x68))(plVar5,&local_108);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_f8);
      FReply::FReply(&local_d0,true);
      FVar9.ReferenceController = local_d0.MouseCaptor.WeakReferenceCount.ReferenceController;
      local_d0.MouseCaptor.Object = (SWidget *)0x0;
      local_d0.MouseCaptor.WeakReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      if (FVar9.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &(FVar9.ReferenceController)->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)((FVar9.ReferenceController)->_padding_ + 8))(FVar9.ReferenceController,1);
        }
      }
      local_d0.bUseHighPrecisionMouse = 0;
      local_d0.bReleaseMouseCapture = 1;
      FReply::FReply(__return_storage_ptr__,&local_d0);
      FReply::~FReply(&local_d0);
      return __return_storage_ptr__;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnReadShowBackgroundForAlpha @ 14303c420

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SThemeColorBlock::OnReadShowBackgroundForAlpha(SThemeColorBlock *this)

{
  bool *pbVar1;
  
  pbVar1 = TAttribute<bool>::Get(&this->bUseAlpha);
  return *pbVar1;
}

// SetLabel @ 14303e620

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SThemeColorBlock::SetLabel(SThemeColorBlock *this,FText *param_1,Type param_2)

{
  FColorInfo *pFVar1;
  ITextData *pIVar2;
  ITextData *pIVar3;
  code *pcVar4;
  bool bVar5;
  FSlateApplication *this_00;
  undefined1 local_res18 [16];
  
  if (param_2 == OnEnter) {
    if ((this->ColorInfo).Object == (FColorInfo *)0x0) {
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
    pFVar1 = (this->ColorInfo).Object;
    pIVar2 = (param_1->TextData).Reference;
    pIVar3 = (pFVar1->Label).TextData.Reference;
    if (pIVar3 != pIVar2) {
      (pFVar1->Label).TextData.Reference = pIVar2;
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res18);
      }
      if (pIVar3 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
      }
    }
    (pFVar1->Label).Flags = param_1->Flags;
  }
  this_00 = FSlateApplication::Get();
  FSlateApplication::DismissAllMenus(this_00);
  SColorThemesViewer::SaveColorThemesToIni();
  return;
}

