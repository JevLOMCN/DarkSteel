// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 13

// Construct @ 14271e4c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Slate::Private::STabPanelDrawer::Construct
          (STabPanelDrawer *this,FArguments *param_1,TSharedRef<SDockTab,1> *param_2)

{
  longlong *plVar1;
  undefined1 *puVar2;
  TSharedPtr<SDockTab,1> *this_00;
  FSlateBrush *this_01;
  longlong lVar3;
  SWidget *pSVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  code *pcVar12;
  bool bVar13;
  bool bVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  ForAnyElementType _Src;
  STabPanelDrawer *pSVar18;
  FButtonStyle *pFVar19;
  bool bVar20;
  bool bVar21;
  FSlateBrush *pFVar22;
  FLinearColor *pFVar23;
  FDockTabStyle *pFVar24;
  ISlateStyle *pIVar25;
  FArguments *pFVar26;
  FSlotArguments *pFVar27;
  FArguments *pFVar28;
  TSharedRef<SImage,1> *pTVar29;
  FSlotArguments *pFVar30;
  FArguments *pFVar31;
  undefined8 *puVar32;
  TSharedRef<SWidget_const_,1> *pTVar33;
  ulong64 uVar34;
  TSharedRef<SComplexGradient,1> *pTVar35;
  FArguments *pFVar36;
  TSharedRef<SBorder,1> *pTVar37;
  FMemScope FVar38;
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> *pTVar39;
  FArguments *pFVar40;
  FSlot *pFVar41;
  FSlotArguments *pFVar42;
  FMemScope FVar43;
  SDockTab *pSVar44;
  TSharedRef<STextBlock,1> *pTVar45;
  TSharedRef<SHorizontalBox,1> *pTVar46;
  FMargin *pFVar47;
  FArguments *pFVar48;
  FText *pFVar49;
  FArguments *pFVar50;
  TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs> *pTVar51;
  TSharedRef<SSpacer,1> *pTVar52;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> *pTVar53;
  TSharedRef<SButton,1> *pTVar54;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> *this_02;
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> *pTVar55;
  TSharedRef<SOverlay,1> *pTVar56;
  FName *pFVar57;
  FSlateColor *this_03;
  FSlotArguments *pFVar58;
  int iVar59;
  FMemScope FVar60;
  FMemScope FVar61;
  FName FVar62;
  float fVar63;
  float fVar64;
  undefined8 uVar65;
  undefined8 uVar66;
  undefined1 auStackY_3ca8 [32];
  initializer_list<FLinearColor> local_3c68;
  T0RequiredArgs local_3c58;
  T0RequiredArgs local_3c57;
  T0RequiredArgs local_3c56;
  T0RequiredArgs local_3c55;
  T0RequiredArgs local_3c54;
  T0RequiredArgs local_3c53;
  T0RequiredArgs local_3c52;
  T0RequiredArgs local_3c51;
  T0RequiredArgs local_3c50;
  T0RequiredArgs local_3c4f;
  T0RequiredArgs local_3c4e;
  T0RequiredArgs local_3c4d;
  T0RequiredArgs local_3c4c;
  T0RequiredArgs local_3c4b [3];
  undefined4 local_3c48 [2];
  undefined8 local_3c40;
  FLLMScope local_3c38;
  FLLMScope local_3c34;
  FLLMScope local_3c30;
  FLLMScope local_3c2c;
  FLLMScope local_3c28 [2];
  FName local_3c20;
  FMemScope local_3c18;
  FMemScope local_3c10;
  FName local_3c08;
  FMemScope local_3c00;
  FMemScope local_3bf8;
  FName local_3bf0;
  FMemScope local_3be8;
  FMemScope local_3be0;
  FName local_3bd8;
  FMemScope local_3bd0;
  SImage *local_3bc8;
  FName local_3bc0;
  SImage *local_3bb8;
  FMemScope local_3bb0;
  SComplexGradient *local_3ba8;
  FName local_3ba0;
  SBorder *local_3b98;
  FName local_3b90;
  STextBlock *local_3b88;
  FMemScope local_3b80;
  STextBlock *local_3b78;
  FSharedReferencer<1> local_3b70;
  FButtonStyle *local_3b68;
  SHorizontalBox *local_3b60;
  FSharedReferencer<1> local_3b58;
  FName local_3b50;
  FMemScope local_3b48;
  FName local_3b40;
  FMemScope local_3b38;
  undefined8 local_3b30;
  TSharedPtr<SDockTab,1> local_3b28;
  SWidget *local_3b18;
  FSharedReferencer<1> local_3b10;
  TSharedRef<SWidget,1> local_3b08;
  TSharedRef<SWidget,1> local_3af8;
  SSpacer *local_3ae8;
  TReferenceControllerBase<1> *pTStack_3ae0;
  SSpacer *local_3ad8;
  TReferenceControllerBase<1> *pTStack_3ad0;
  SImage *local_3ac8;
  TReferenceControllerBase<1> *pTStack_3ac0;
  FName local_3ab8;
  undefined4 uStack_3ab0;
  undefined4 uStack_3aac;
  FSlateBrush *local_3aa8;
  undefined1 local_3aa0;
  undefined1 local_3a98 [8];
  void *pvStack_3a90;
  undefined8 local_3a88;
  FSlateBrush *local_3a80;
  undefined1 local_3a78;
  undefined1 local_3a70 [8];
  void *pvStack_3a68;
  undefined8 local_3a60;
  undefined4 local_3a58 [2];
  undefined4 local_3a50 [2];
  undefined4 local_3a48 [2];
  undefined4 local_3a40 [2];
  undefined4 local_3a38 [2];
  undefined4 local_3a30 [2];
  undefined4 local_3a28 [2];
  undefined4 local_3a20 [2];
  undefined4 local_3a18 [2];
  undefined4 local_3a10 [2];
  undefined4 local_3a08 [2];
  undefined4 local_3a00 [2];
  FButtonStyle *local_39f8;
  TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *local_39f0;
  TSharedRef<SDockTab,1> *local_39e8;
  FName local_39e0;
  FArguments *local_39d8;
  undefined4 local_39d0 [2];
  undefined4 local_39c8 [2];
  undefined4 local_39c0 [2];
  undefined4 local_39b8 [2];
  undefined4 local_39b0 [2];
  TAttribute<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_> local_39a8;
  longlong local_3978;
  longlong lStack_3970;
  undefined1 local_3968;
  undefined1 local_3960 [8];
  void *pvStack_3958;
  undefined8 local_3950;
  TAttribute<EVisibility> local_3948;
  TAttribute<float> local_3928;
  TAttribute<EVisibility> local_3908;
  TAttribute<EVisibility> local_38e8;
  TSharedRef<SWidget,1> local_38c8;
  TSharedRef<SWidget,1> local_38b8;
  TSharedRef<SImage,1> local_38a8;
  TSharedRef<SWidget,1> local_3898;
  TSharedRef<SWidget,1> local_3888;
  TSharedRef<SWidget,1> local_3878;
  TVector2<double>_u_0 local_3868;
  undefined1 local_3858;
  undefined8 local_3850;
  undefined8 uStack_3848;
  undefined8 local_3840;
  TVector2<double>_u_0 local_3838;
  undefined1 local_3828;
  undefined8 local_3820;
  undefined8 uStack_3818;
  undefined8 local_3810;
  TVector2<double>_u_0 local_3808;
  undefined1 local_37f8;
  undefined8 local_37f0;
  undefined8 uStack_37e8;
  undefined8 local_37e0;
  FDestructionSentinel local_37d8;
  longlong *local_37c0;
  TAttribute<FMargin> local_37b8;
  TAttribute<FMargin> local_3788;
  TAttribute<FMargin> local_3758;
  TAttribute<FText> local_3728;
  TAttribute<FMargin> local_36f8;
  TAttribute<FText> local_36c8;
  TVector2<double>_u_0 local_3698;
  undefined1 local_3688;
  undefined1 local_3680;
  undefined8 local_3678;
  undefined8 uStack_3670;
  undefined8 local_3668;
  TSharedRef<SButton,1> local_3660;
  TSharedRef<SSpacer,1> local_3650;
  FText local_3640;
  TSharedRef<SBorder,1> local_3630;
  TSharedRef<SImage,1> local_3620;
  TSharedRef<SHorizontalBox,1> local_3610;
  TSharedRef<STextBlock,1> local_3600;
  TSharedRef<STextBlock,1> local_35f0;
  TSharedRef<SBorder,1> local_35e0;
  TSharedRef<SComplexGradient,1> local_35d0;
  TSharedRef<SImage,1> local_35c0;
  TSharedRef<SWidget_const_,1> local_35b0;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_35a0;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_3588;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_3570;
  TSlateDecl<SComplexGradient,RequiredArgs::T0RequiredArgs> local_3558;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_3540;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_3528;
  code *local_3508;
  FLinearColor *pFStack_3500;
  code *local_34f8;
  FLinearColor *pFStack_34f0;
  code *local_34e8;
  FLinearColor *pFStack_34e0;
  code *local_34d8;
  FLinearColor *pFStack_34d0;
  code *local_34c8;
  FLinearColor *pFStack_34c0;
  code *local_34b8;
  FLinearColor *pFStack_34b0;
  code *local_34a8;
  FLinearColor *pFStack_34a0;
  code *local_3498;
  FLinearColor *pFStack_3490;
  code *local_3488;
  FLinearColor *pFStack_3480;
  code *local_3478;
  FLinearColor *pFStack_3470;
  code *local_3468;
  TReferenceControllerBase<1> *pTStack_3460;
  code *local_3458;
  TReferenceControllerBase<1> *pTStack_3450;
  TSharedRef<SOverlay,1> local_3448;
  TSharedRef<SOverlay,1> local_3438;
  TSharedRef<SHorizontalBox,1> local_3428;
  TSharedRef<SButton,1> local_3418;
  TSharedRef<SSpacer,1> local_3408;
  FText local_33f8;
  TAttribute<TSharedPtr<IToolTip,1>_> local_33e8;
  TSharedRef<SSpacer,1> local_33b8 [2];
  uint local_3398;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_3390;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_3378;
  TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs> local_3360;
  TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs> local_3348;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_3330;
  TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs> local_3318;
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> local_3300;
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> local_32e8;
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> local_32d0;
  TAttribute<FMargin> local_32b8;
  TAttribute<FMargin> local_3288;
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> local_3258;
  undefined1 local_3240 [56];
  void *local_3208;
  FMargin local_31e0;
  FMargin local_31d0;
  undefined1 local_31c0 [56];
  void *local_3188;
  undefined1 local_3160 [24];
  FSlotArguments local_3148;
  FSlotArguments local_30e8;
  FSlotArguments local_3088;
  FSlotArguments local_3028;
  FSlotArguments local_2fc8;
  FSlotArguments local_2f68;
  FSlotArguments local_2e80;
  FSlotArguments local_2d98;
  FArguments local_2cb0;
  FSlotArguments local_2aa8;
  FSlotArguments local_29c0;
  FSlotArguments local_28d8;
  FSlotArguments local_27f0;
  FArguments local_2708;
  FArguments local_2500;
  FArguments local_22f8;
  FArguments local_20f0;
  FArguments local_1ec8;
  FArguments local_1ca0;
  FArguments local_1a78;
  FArguments local_1810;
  FArguments local_1568;
  FArguments local_12c0;
  FArguments local_ee0;
  FArguments local_b00;
  FArguments local_5c0;
  FLinearColor_u_0 local_80;
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  FLinearColor_u_0 local_50;
  
  local_50._0_8_ = __security_cookie.value ^ (ulonglong)auStackY_3ca8;
  bVar14 = false;
  bVar13 = false;
  bVar21 = false;
  local_3c48[0] = 0;
  local_3b28.SharedReferenceCount.ReferenceController =
       (param_2->SharedReferenceCount).ReferenceController;
  local_3b28.Object = param_2->Object;
  if (local_3b28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_3b28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_3b28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = &this->DisplayedTab;
  local_3c40 = this;
  local_39e8 = param_2;
  local_39d8 = param_1;
  if (this_00 != &local_3b28) {
    this_00->Object = local_3b28.Object;
    local_3b28.Object = (SDockTab *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->DisplayedTab).SharedReferenceCount,&local_3b28.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3b28.SharedReferenceCount.ReferenceController);
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar3 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pIVar25 = FAppStyle::Get();
    pcVar12 = *(code **)((longlong)*pIVar25 + 0x40);
    pFVar57 = ::FName::FName(&local_3ab8,"Docking.Tab.ActiveTabIndicatorColor");
    this_03 = (FSlateColor *)(*pcVar12)(pIVar25,local_3160,*pFVar57);
    FSlateColor::GetSpecifiedColor(this_03,&ActiveBorderColor);
    _Init_thread_footer(&::_TSS0);
    this = local_3c40;
  }
  if ((*(int *)(lVar3 + 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    ActiveBorderColorTransparent.field0_0x0._s_0.R = ActiveBorderColor.field0_0x0._s_0.R;
    ActiveBorderColorTransparent.field0_0x0._s_0.B = ActiveBorderColor.field0_0x0._s_0.B;
    ActiveBorderColorTransparent.field0_0x0._s_0.G = ActiveBorderColor.field0_0x0._s_0.G;
    _Init_thread_footer(&::_TSS1);
  }
  if ((*(int *)(lVar3 + 0x9d4c) < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
    local_80._s_0.G = ActiveBorderColorTransparent.field0_0x0._s_0.G;
    local_80._s_0.R = ActiveBorderColorTransparent.field0_0x0._s_0.R;
    local_80._s_0.B = ActiveBorderColorTransparent.field0_0x0._s_0.B;
    local_80._s_0.A = ActiveBorderColorTransparent.field0_0x0._s_0.A;
    local_3c68._First = (FLinearColor *)&local_80;
    local_60._4_4_ = ActiveBorderColorTransparent.field0_0x0._s_0.G;
    local_60._0_4_ = ActiveBorderColorTransparent.field0_0x0._s_0.R;
    local_60._8_4_ = ActiveBorderColorTransparent.field0_0x0._s_0.B;
    local_60._12_4_ = ActiveBorderColorTransparent.field0_0x0._s_0.A;
    local_3c68._Last = (FLinearColor *)&local_50;
    local_70._4_4_ = ActiveBorderColor.field0_0x0._s_0.G;
    local_70._0_4_ = ActiveBorderColor.field0_0x0._s_0.R;
    local_70._8_4_ = ActiveBorderColor.field0_0x0._s_0.B;
    local_70._12_4_ = ActiveBorderColor.field0_0x0._s_0.A;
    TArray<FLinearColor,TSizedDefaultAllocator<32>_>::
    TArray<FLinearColor,TSizedDefaultAllocator<32>_>(&GradientStops,&local_3c68);
    atexit(`UE::Slate::Private::STabPanelDrawer::Construct'::__l2::
           _dynamic_atexit_destructor_for__GradientStops__);
    _Init_thread_footer(&::_TSS2);
  }
  if ((this_00->Object == (SDockTab *)0x0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar20)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  this_01 = &this->DarkerTabBrush;
  pFVar22 = SDockTab::GetImageBrush(this_00->Object);
  FSlateBrush::operator=(this_01,pFVar22);
  if ((this_00->Object == (SDockTab *)0x0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar20)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  pFVar22 = SDockTab::GetTabWellBrush(this_00->Object);
  if ((pFVar22->TintColor).ColorUseRule == UseColor_ColorTable) {
    pFVar23 = FSlateColor::GetColorFromTable(&pFVar22->TintColor);
    uVar65 = *(undefined8 *)&pFVar23->field0_0x0;
    uVar66 = *(undefined8 *)((longlong)&pFVar23->field0_0x0 + 8);
  }
  else {
    uVar65 = *(undefined8 *)&(pFVar22->TintColor).SpecifiedColor.field0_0x0;
    uVar66 = *(undefined8 *)((longlong)&(pFVar22->TintColor).SpecifiedColor.field0_0x0 + 8);
  }
  *(undefined8 *)&(this->DarkerTabBrush).TintColor.SpecifiedColor.field0_0x0 = uVar65;
  *(undefined8 *)((longlong)&(this->DarkerTabBrush).TintColor.SpecifiedColor.field0_0x0 + 8) =
       uVar66;
  local_3398 = local_3398 & 0xffffff00;
  (this->DarkerTabBrush).TintColor.ColorUseRule = (undefined1)local_3398;
  (this->DarkerTabBrush).TintColor.ColorTableId = local_3398._1_1_;
  *(undefined2 *)&(this->DarkerTabBrush).TintColor.field_0x12 = local_3398._2_2_;
  if ((this_00->Object == (SDockTab *)0x0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar20)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  pFVar24 = SDockTab::GetCurrentStyle(this_00->Object);
  local_39f8 = &pFVar24->CloseButtonStyle;
  pIVar25 = FAppStyle::Get();
  ::FName::FName(&local_39e0,"Docking.OpenTabInWindow.Button");
  local_3b68 = (FButtonStyle *)(**(code **)((longlong)*pIVar25 + 0xa0))(pIVar25);
  if (local_3b68 == (FButtonStyle *)0x0) {
    local_3b68 = FButtonStyle::GetDefault();
  }
  lVar16 = _UNK_15094b738;
  lVar3 = ___xmm_00000000400000004000000040000000;
  local_39f0 = (TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *)
               &this->_padding_;
  pFVar26 = SOverlay::FArguments::FArguments(&local_2cb0);
  pFVar27 = SOverlay::Slot((FSlotArguments *)local_3240,0);
  pFVar28 = SImage::FArguments::FArguments(&local_1568);
  if ((this_00->Object == (SDockTab *)0x0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar20)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  local_3aa8 = SDockTab::GetImageBrush(this_00->Object);
  local_3aa0 = 1;
  local_3a98 = (undefined1  [8])0x0;
  pvStack_3a90 = (void *)0x0;
  local_3a88 = 0;
  (pFVar28->_Image).Value = local_3aa8;
  (pFVar28->_Image).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar28->_Image).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3a98);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3a98);
  if (pvStack_3a90 != (void *)0x0) {
    FMemory::Free(pvStack_3a90);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3a98);
  FLLMScope::FLLMScope(&local_3c38,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_3b50 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_3b48,&local_3b50,true);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
            (&local_3528,"SImage",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\STabPanelDrawer.cpp"
             ,0x31,&local_3c58);
  FMemScope::~FMemScope(&local_3b48);
  FLLMScope::~FLLMScope(&local_3c38);
  pTVar29 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_3528,&local_38a8,pFVar28);
  local_3bc8 = pTVar29->Object;
  local_3bc0 = (FName)(pTVar29->SharedReferenceCount).ReferenceController;
  if (local_3bc0 != (FName)0x0) {
    LOCK();
    *(atomic<int> *)((longlong)local_3bc0 + 8) =
         (atomic<int>)((int)*(atomic<int> *)((longlong)local_3bc0 + 8) + 1);
    UNLOCK();
    LOCK();
    *(atomic<int> *)((longlong)local_3bc0 + 8) =
         (atomic<int>)((int)*(atomic<int> *)((longlong)local_3bc0 + 8) + 1);
    UNLOCK();
  }
  local_3b50 = local_3bc0;
  if ((SImage **)&pFVar27->_padding_ != &local_3bc8) {
    pFVar27->_padding_ = (longlong)local_3bc8;
    local_3bc8 = (SImage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar27->_padding_,(FSharedReferencer<1> *)&local_3bc0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_3bc0);
  pFVar26 = SOverlay::FArguments::operator+(pFVar26,pFVar27);
  pFVar30 = SOverlay::Slot((FSlotArguments *)local_31c0,0);
  local_3968 = 1;
  local_3978 = lVar3;
  lStack_3970 = lVar16;
  local_3950 = 0;
  local_3960 = (undefined1  [8])0x0;
  pvStack_3958 = (void *)0x0;
  pFVar30->_padding_ = lVar3;
  pFVar30->_padding_ = lVar16;
  *(undefined1 *)&pFVar30->_padding_ = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar30->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3960);
  pFVar27 = (FSlotArguments *)0x0;
  if (&pFVar30->_padding_ != (longlong *)0x0) {
    pFVar27 = pFVar30;
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3960);
  if (pvStack_3958 != (void *)0x0) {
    FMemory::Free(pvStack_3958);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3960);
  pFVar28 = SImage::FArguments::FArguments(&local_1810);
  local_3a78 = 1;
  local_3a60 = 0;
  local_3a70 = (undefined1  [8])0x0;
  pvStack_3a68 = (void *)0x0;
  (pFVar28->_Image).Value = this_01;
  (pFVar28->_Image).bIsSet = true;
  local_3a80 = this_01;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar28->_Image).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3a70);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3a70);
  if (pvStack_3a68 != (void *)0x0) {
    FMemory::Free(pvStack_3a68);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3a70);
  FLLMScope::FLLMScope(&local_3c34,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_3b40 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_3b38,&local_3b40,true);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
            (&local_3540,"SImage",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\STabPanelDrawer.cpp"
             ,0x38,&local_3c57);
  FMemScope::~FMemScope(&local_3b38);
  FLLMScope::~FLLMScope(&local_3c34);
  pTVar29 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_3540,&local_35c0,pFVar28);
  local_3bb8 = pTVar29->Object;
  local_3bb0 = (FMemScope)(pTVar29->SharedReferenceCount).ReferenceController;
  if (local_3bb0 != (FMemScope)0x0) {
    LOCK();
    *(atomic<int> *)((longlong)local_3bb0 + 8) =
         (atomic<int>)((int)*(atomic<int> *)((longlong)local_3bb0 + 8) + 1);
    UNLOCK();
    LOCK();
    *(atomic<int> *)((longlong)local_3bb0 + 8) =
         (atomic<int>)((int)*(atomic<int> *)((longlong)local_3bb0 + 8) + 1);
    UNLOCK();
  }
  local_3b48 = local_3bb0;
  if ((SImage **)&pFVar27->_padding_ != &local_3bb8) {
    pFVar27->_padding_ = (longlong)local_3bb8;
    local_3bb8 = (SImage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar27->_padding_,(FSharedReferencer<1> *)&local_3bb0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_3bb0);
  local_3b38 = (FMemScope)SOverlay::FArguments::operator+(pFVar26,pFVar27);
  pFVar27 = SOverlay::Slot(&local_3148,0);
  if ((longlong *)local_39c8 != &pFVar27->_padding_) {
    *(undefined4 *)&pFVar27->_padding_ = 1;
    *(undefined1 *)((longlong)&pFVar27->_padding_ + 4) = 1;
  }
  pFVar30 = (FSlotArguments *)0x0;
  if (pFVar27 != (FSlotArguments *)0xffffffffffffffb8) {
    pFVar30 = pFVar27;
  }
  plVar1 = &pFVar30->_padding_;
  if ((longlong *)local_39c0 != plVar1) {
    *(undefined4 *)plVar1 = 0;
    *(undefined1 *)((longlong)&pFVar30->_padding_ + 4) = 1;
  }
  pFVar27 = (FSlotArguments *)0x0;
  if (plVar1 != (longlong *)0x0) {
    pFVar27 = pFVar30;
  }
  pFVar31 = SComplexGradient::FArguments::FArguments(&local_1a78);
  pSVar44 = this_00->Object;
  *(undefined1 *)((longlong)&pFVar31->_padding_ + 1) = 1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar31->_padding_,
             (FWriteAccessScope *)&local_37d8);
  local_37c0 = &pFVar31->_padding_;
  puVar32 = Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_37c0);
  FVar62 = local_39e0;
  if (puVar32 != (undefined8 *)0x0) {
    uStack_3aac = local_38a8.SharedReferenceCount.ReferenceController._4_4_;
    local_3ab8 = (FName)SDockTab::GetActiveTabIndicatorVisibility;
    uStack_3ab0 = 0;
    pTVar33 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&pSVar44->_padding_,&local_35b0);
    FVar62 = (FName)(pTVar33->SharedReferenceCount).ReferenceController;
    pSVar4 = pTVar33->Object;
    if (FVar62 != (FName)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)FVar62 + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar62 + 8) + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)((longlong)FVar62 + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar62 + 8) + 1);
      UNLOCK();
    }
    *puVar32 = &
               ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar34 = FDelegateHandle::GenerateNewID();
    puVar32[2] = uVar34;
    *puVar32 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSDockTab___00__A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar32[3] = pSVar4;
    *(FName *)(puVar32 + 4) = FVar62;
    if (FVar62 != (FName)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)FVar62 + 0xc) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar62 + 0xc) + 1);
      UNLOCK();
    }
    bVar14 = true;
    bVar13 = true;
    bVar21 = true;
    *(FName *)(puVar32 + 5) = local_3ab8;
    puVar32[6] = CONCAT44(uStack_3aac,uStack_3ab0);
  }
  if (bVar21) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)FVar62);
  }
  if (bVar13) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)FVar62);
  }
  if (bVar14) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_35b0.SharedReferenceCount.ReferenceController);
  }
  if (local_37d8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_37d8.Accessor,&local_37d8);
  }
  local_3688 = 1;
  local_3668 = 0;
  local_3698._s_0.X = ___xmm_3ff00000000000003ff0000000000000;
  local_3698._s_0.Y = _UNK_150689688;
  local_3680 = 1;
  local_3678 = 0;
  uStack_3670 = 0;
  pFVar31 = SComplexGradient::FArguments::DesiredSizeOverride
                      (pFVar31,(TAttribute<TOptional<UE::Math::TVector2<double>_>_> *)
                               &local_3698._s_0);
  _Src = GradientStops.AllocatorInstance;
  FVar61.Inner.bActive = false;
  FVar61._1_3_ = 0;
  FVar61.PrevTag = 0;
  local_39a8.Value.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar59 = GradientStops.ArrayNum;
  local_39a8.Value.ArrayNum = iVar59;
  if (iVar59 == 0) {
    local_39a8.Value.ArrayMax = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,iVar59,0,(ForAnyElementType *)&local_39a8,iVar59,&local_39a8.Value.ArrayMax);
    memcpy(local_39a8.Value.AllocatorInstance.Data,_Src.Data,(longlong)iVar59 << 4);
  }
  local_39a8.bIsSet = true;
  local_39a8.Getter._16_8_ = 0;
  local_39a8.Getter._0_8_ = 0;
  local_39a8.Getter._8_8_ = 0;
  pFVar31 = SComplexGradient::FArguments::GradientColors(pFVar31,&local_39a8);
  pFVar31->_Orientation = Orient_Vertical;
  FLLMScope::FLLMScope(&local_3c30,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_3c20 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_3c18,&local_3c20,true);
  TSlateDecl<SComplexGradient,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SComplexGradient,RequiredArgs::T0RequiredArgs>
            (&local_3558,"SComplexGradient",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\STabPanelDrawer.cpp"
             ,0x42,&local_3c56);
  FMemScope::~FMemScope(&local_3c18);
  FLLMScope::~FLLMScope(&local_3c30);
  pTVar35 = TSlateDecl<SComplexGradient,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_3558,&local_35d0,pFVar31);
  local_3ba8 = pTVar35->Object;
  local_3ba0 = (FName)(pTVar35->SharedReferenceCount).ReferenceController;
  if (local_3ba0 != (FName)0x0) {
    LOCK();
    *(atomic<int> *)((longlong)local_3ba0 + 8) =
         (atomic<int>)((int)*(atomic<int> *)((longlong)local_3ba0 + 8) + 1);
    UNLOCK();
    LOCK();
    *(atomic<int> *)((longlong)local_3ba0 + 8) =
         (atomic<int>)((int)*(atomic<int> *)((longlong)local_3ba0 + 8) + 1);
    UNLOCK();
  }
  local_3b40 = local_3ba0;
  if ((SComplexGradient **)&pFVar27->_padding_ != &local_3ba8) {
    pFVar27->_padding_ = (longlong)local_3ba8;
    local_3ba8 = (SComplexGradient *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar27->_padding_,(FSharedReferencer<1> *)&local_3ba0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_3ba0);
  pFVar26 = SOverlay::FArguments::operator+((FArguments *)local_3b38,pFVar27);
  pFVar27 = SOverlay::Slot(&local_2fc8,0);
  pFVar36 = SBorder::FArguments::FArguments(&local_ee0);
  local_3948.Value = (EVisibility)EVisibility::HitTestInvisible.Value.Value;
  local_3948.bIsSet = true;
  local_3948.Getter._0_8_ = 0;
  local_3948.Getter._8_8_ = 0;
  local_3948.Getter._16_8_ = 0;
  pFVar36 = TSlateBaseNamedArgs<SBorder>::Visibility
                      ((TSlateBaseNamedArgs<SBorder> *)pFVar36,&local_3948);
  local_3c68._First = (FLinearColor *)SDockTab::GetTabPadding;
  local_3c68._Last = (FLinearColor *)((ulonglong)local_3c68._Last & 0xffffffff00000000);
  local_3508 = SDockTab::GetTabPadding;
  pFStack_3500 = local_3c68._Last;
  pFVar36 = SBorder::FArguments::Padding<SDockTab>
                      (pFVar36,this_00->Object,(pmf_28cbc127 *)&local_3508);
  local_3c68._First = (FLinearColor *)SDockTab::GetFlashOverlayImageBrush;
  local_3c68._Last = (FLinearColor *)((ulonglong)local_3c68._Last & 0xffffffff00000000);
  local_34f8 = SDockTab::GetFlashOverlayImageBrush;
  pFStack_34f0 = local_3c68._Last;
  pFVar36 = SBorder::FArguments::BorderImage<SDockTab>
                      (pFVar36,this_00->Object,(pmf_604a4ec2 *)&local_34f8);
  local_3c68._First = (FLinearColor *)SDockTab::GetFlashColor;
  local_3c68._Last = (FLinearColor *)((ulonglong)local_3c68._Last & 0xffffffff00000000);
  local_34e8 = SDockTab::GetFlashColor;
  pFStack_34e0 = local_3c68._Last;
  pFVar36 = SBorder::FArguments::BorderBackgroundColor<SDockTab>
                      (pFVar36,this_00->Object,(pmf_11ab8443 *)&local_34e8);
  FLLMScope::FLLMScope(&local_3c2c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_3c08 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_3c10,&local_3c08,true);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>
            (&local_3570,"SBorder",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\STabPanelDrawer.cpp"
             ,0x4c,&local_3c55);
  FMemScope::~FMemScope(&local_3c10);
  FLLMScope::~FLLMScope(&local_3c2c);
  pTVar37 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_3570,&local_35e0,pFVar36);
  local_3b98 = pTVar37->Object;
  local_3c20 = (FName)(pTVar37->SharedReferenceCount).ReferenceController;
  if (local_3c20 != (FName)0x0) {
    LOCK();
    *(atomic<int> *)((longlong)local_3c20 + 8) =
         (atomic<int>)((int)*(atomic<int> *)((longlong)local_3c20 + 8) + 1);
    UNLOCK();
    LOCK();
    *(atomic<int> *)((longlong)local_3c20 + 8) =
         (atomic<int>)((int)*(atomic<int> *)((longlong)local_3c20 + 8) + 1);
    UNLOCK();
  }
  local_3b90 = local_3c20;
  if ((SBorder **)&pFVar27->_padding_ != &local_3b98) {
    pFVar27->_padding_ = (longlong)local_3b98;
    local_3b98 = (SBorder *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar27->_padding_,(FSharedReferencer<1> *)&local_3b90);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_3b90);
  local_3c08 = (FName)SOverlay::FArguments::operator+(pFVar26,pFVar27);
  pFVar27 = SOverlay::Slot(&local_3028,0);
  lVar17 = _UNK_15094b738;
  lVar15 = ___xmm_00000000400000004000000040000000;
  local_37b8.bIsSet = true;
  ___xmm_00000000400000004000000040000000 = (undefined4)lVar3;
  _UNK_15094b734 = SUB84(lVar3,4);
  local_37b8.Value.Left = (float)___xmm_00000000400000004000000040000000;
  local_37b8.Value.Top = (float)_UNK_15094b734;
  _UNK_15094b738 = (undefined4)lVar16;
  _UNK_15094b73c = SUB84(lVar16,4);
  local_37b8.Value.Right = (float)_UNK_15094b738;
  local_37b8.Value.Bottom = (float)_UNK_15094b73c;
  local_37b8.Getter._16_8_ = 0;
  local_37b8.Getter._0_8_ = 0;
  local_37b8.Getter._8_8_ = 0;
  ___xmm_00000000400000004000000040000000 = lVar15;
  _UNK_15094b738 = lVar17;
  FVar38 = (FMemScope)
           TPaddingWidgetSlotMixin<SOverlay::FOverlaySlot>::FSlotArgumentsMixin::Padding
                     ((FSlotArgumentsMixin *)&pFVar27->_padding_,&local_37b8);
  if ((longlong *)local_39b8 != (longlong *)((longlong)FVar38 + 0x50)) {
    *(undefined4 *)((longlong)FVar38 + 0x50) = 2;
    *(undefined1 *)((longlong)FVar38 + 0x54) = 1;
  }
  FVar43 = FVar61;
  if (FVar38 != (FMemScope)0xffffffffffffffb8) {
    FVar43 = FVar38;
  }
  plVar1 = (longlong *)((longlong)FVar43 + 0x48);
  if ((longlong *)local_39d0 != plVar1) {
    *(undefined4 *)plVar1 = 0;
    *(undefined1 *)((longlong)FVar43 + 0x4c) = 1;
  }
  local_3c10 = FVar61;
  if (plVar1 != (longlong *)0x0) {
    local_3c10 = FVar43;
  }
  pFVar26 = SOverlay::FArguments::FArguments(&local_22f8);
  pFVar27 = SOverlay::Slot(&local_3088,0);
  local_3c68._First = (FLinearColor *)SDockTab::GetTabPadding;
  local_3c68._Last = (FLinearColor *)((ulonglong)local_3c68._Last & 0xffffffff00000000);
  local_34d8 = SDockTab::GetTabPadding;
  pFStack_34d0 = local_3c68._Last;
  pTVar39 = TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::CreateSP<SDockTab>
                      (&local_32e8,this_00->Object,(pmf_28cbc127 *)&local_34d8);
  local_32b8.bIsSet = true;
  local_32b8.Value.Left = 0.0;
  local_32b8.Value.Top = 0.0;
  local_32b8.Value.Right = 0.0;
  local_32b8.Value.Bottom = 0.0;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_32b8.Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar39);
  FVar38 = (FMemScope)
           TPaddingWidgetSlotMixin<SOverlay::FOverlaySlot>::FSlotArgumentsMixin::Padding
                     ((FSlotArgumentsMixin *)&pFVar27->_padding_,&local_32b8);
  if ((longlong *)local_39b0 != (longlong *)((longlong)FVar38 + 0x50)) {
    *(undefined4 *)((longlong)FVar38 + 0x50) = 2;
    *(undefined1 *)((longlong)FVar38 + 0x54) = 1;
  }
  FVar43 = FVar61;
  if (FVar38 != (FMemScope)0xffffffffffffffb8) {
    FVar43 = FVar38;
  }
  plVar1 = (longlong *)((longlong)FVar43 + 0x48);
  if ((longlong *)local_3a58 != plVar1) {
    *(undefined4 *)plVar1 = 2;
    *(undefined1 *)((longlong)FVar43 + 0x4c) = 1;
  }
  FVar38 = FVar61;
  if (plVar1 != (longlong *)0x0) {
    FVar38 = FVar43;
  }
  pFVar40 = SHorizontalBox::FArguments::FArguments(&local_2500);
  local_3c68._First = (FLinearColor *)SDockTab::GetTabLabel;
  local_3c68._Last = (FLinearColor *)((ulonglong)local_3c68._Last & 0xffffffff00000000);
  local_34c8 = SDockTab::GetTabLabel;
  pFStack_34c0 = local_3c68._Last;
  pFVar40 = TSlateBaseNamedArgs<SHorizontalBox>::ToolTipText<SDockTab>
                      ((TSlateBaseNamedArgs<SHorizontalBox> *)pFVar40,this_00->Object,
                       (pmf_b5ac6a49 *)&local_34c8);
  pFVar41 = ::operator_new(0x58);
  local_3c00 = FVar61;
  if (pFVar41 != (FSlot *)0x0) {
    *(undefined8 *)pFVar41 = 0;
    *(undefined8 *)&pFVar41->field_0x8 = 0;
    *(undefined8 *)&pFVar41->field_0x10 = 0;
    *(undefined8 *)&pFVar41->field_0x18 = 0;
    *(undefined8 *)&pFVar41->field_0x20 = 0;
    *(undefined8 *)&pFVar41->field_0x28 = 0;
    *(undefined8 *)&pFVar41->field_0x30 = 0;
    *(undefined8 *)&pFVar41->field_0x38 = 0;
    *(undefined8 *)&pFVar41->field_0x40 = 0;
    *(undefined8 *)&pFVar41->field_0x48 = 0;
    *(undefined8 *)&pFVar41->field_0x50 = 0;
    local_3c00 = (FMemScope)SHorizontalBox::FSlot::FSlot(pFVar41);
  }
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments(&local_2d98,(FSlot *)&local_3c00);
  fVar63 = __real_3f800000;
  local_3928.Value = 1.0;
  local_3928.Getter._16_8_ = 0;
  local_3928.bIsSet = true;
  local_3928.Getter._0_8_ = 0;
  local_3928.Getter._8_8_ = 0;
  pFVar42 = SHorizontalBox::FSlot::FSlotArguments::FillWidth(&local_2d98,&local_3928);
  FVar43 = (FMemScope)
           TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                     ((FSlotArgumentsMixin *)&pFVar42->field_0x18,0.0,fVar63);
  if (local_3a50 != (undefined4 *)((longlong)FVar43 + 0x50)) {
    *(undefined4 *)((longlong)FVar43 + 0x50) = 2;
    *(undefined1 *)((longlong)FVar43 + 0x54) = 1;
  }
  FVar60 = FVar61;
  if (FVar43 != (FMemScope)0xffffffffffffffb8) {
    FVar60 = FVar43;
  }
  pSVar44 = TSharedPtr<SDockTab,1>::operator->(this_00);
  pTVar45 = TSharedPtr<STextBlock,1>::ToSharedRef(&pSVar44->LabelWidget,&local_35f0);
  local_3b88 = pTVar45->Object;
  local_3c18 = (FMemScope)(pTVar45->SharedReferenceCount).ReferenceController;
  if (local_3c18 != (FMemScope)0x0) {
    LOCK();
    *(atomic<int> *)((longlong)local_3c18 + 8) =
         (atomic<int>)((int)*(atomic<int> *)((longlong)local_3c18 + 8) + 1);
    UNLOCK();
    LOCK();
    *(atomic<int> *)((longlong)local_3c18 + 8) =
         (atomic<int>)((int)*(atomic<int> *)((longlong)local_3c18 + 8) + 1);
    UNLOCK();
  }
  local_3b80 = local_3c18;
  if ((STextBlock **)((longlong)FVar60 + 8) != &local_3b88) {
    *(STextBlock **)((longlong)FVar60 + 8) = local_3b88;
    local_3b88 = (STextBlock *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)FVar60 + 0x10),(FSharedReferencer<1> *)&local_3b80
              );
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_3b80);
  pFVar40 = SHorizontalBox::FArguments::operator+(pFVar40,(FSlotArguments *)FVar60);
  pFVar41 = ::operator_new(0x58);
  local_3bf8 = FVar61;
  if (pFVar41 != (FSlot *)0x0) {
    *(undefined8 *)pFVar41 = 0;
    *(undefined8 *)&pFVar41->field_0x8 = 0;
    *(undefined8 *)&pFVar41->field_0x10 = 0;
    *(undefined8 *)&pFVar41->field_0x18 = 0;
    *(undefined8 *)&pFVar41->field_0x20 = 0;
    *(undefined8 *)&pFVar41->field_0x28 = 0;
    *(undefined8 *)&pFVar41->field_0x30 = 0;
    *(undefined8 *)&pFVar41->field_0x38 = 0;
    *(undefined8 *)&pFVar41->field_0x40 = 0;
    *(undefined8 *)&pFVar41->field_0x48 = 0;
    *(undefined8 *)&pFVar41->field_0x50 = 0;
    local_3bf8 = (FMemScope)SHorizontalBox::FSlot::FSlot(pFVar41);
  }
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments(&local_2e80,(FSlot *)&local_3bf8);
  pFVar42 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(&local_2e80);
  FVar43 = (FMemScope)
           TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                     ((FSlotArgumentsMixin *)&pFVar42->field_0x18,0.0,fVar63);
  if (local_3a48 != (undefined4 *)((longlong)FVar43 + 0x50)) {
    *(undefined4 *)((longlong)FVar43 + 0x50) = 2;
    *(undefined1 *)((longlong)FVar43 + 0x54) = 1;
  }
  FVar60 = FVar61;
  if (FVar43 != (FMemScope)0xffffffffffffffb8) {
    FVar60 = FVar43;
  }
  pSVar44 = TSharedPtr<SDockTab,1>::operator->(this_00);
  pTVar45 = TSharedPtr<STextBlock,1>::ToSharedRef(&pSVar44->LabelSuffix,&local_3600);
  local_3b78 = pTVar45->Object;
  local_3c00 = (FMemScope)(pTVar45->SharedReferenceCount).ReferenceController;
  if (local_3c00 != (FMemScope)0x0) {
    LOCK();
    ((TReferenceControllerBase<1> *)local_3c00)->SharedReferenceCount =
         (atomic<int>)((int)((TReferenceControllerBase<1> *)local_3c00)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    ((TReferenceControllerBase<1> *)local_3c00)->SharedReferenceCount =
         (atomic<int>)((int)((TReferenceControllerBase<1> *)local_3c00)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_3b70.ReferenceController = (TReferenceControllerBase<1> *)local_3c00;
  if ((STextBlock **)((longlong)FVar60 + 8) != &local_3b78) {
    *(STextBlock **)((longlong)FVar60 + 8) = local_3b78;
    local_3b78 = (STextBlock *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)FVar60 + 0x10),&local_3b70);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3b70.ReferenceController);
  pFVar40 = SHorizontalBox::FArguments::operator+(pFVar40,(FSlotArguments *)FVar60);
  FLLMScope::FLLMScope(local_3c28,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_3bf0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_3be8,&local_3bf0,true);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
            (&local_3588,"SHorizontalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\STabPanelDrawer.cpp"
             ,0x60,&local_3c54);
  FMemScope::~FMemScope(&local_3be8);
  FLLMScope::~FLLMScope(local_3c28);
  pTVar46 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_3588,&local_3610,pFVar40);
  local_3b60 = pTVar46->Object;
  local_3bf8 = (FMemScope)(pTVar46->SharedReferenceCount).ReferenceController;
  if (local_3bf8 != (FMemScope)0x0) {
    LOCK();
    ((TReferenceControllerBase<1> *)local_3bf8)->SharedReferenceCount =
         (atomic<int>)((int)((TReferenceControllerBase<1> *)local_3bf8)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    ((TReferenceControllerBase<1> *)local_3bf8)->SharedReferenceCount =
         (atomic<int>)((int)((TReferenceControllerBase<1> *)local_3bf8)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_3b58.ReferenceController = (TReferenceControllerBase<1> *)local_3bf8;
  if ((SHorizontalBox **)((longlong)FVar38 + 8) != &local_3b60) {
    *(SHorizontalBox **)((longlong)FVar38 + 8) = local_3b60;
    local_3b60 = (SHorizontalBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)FVar38 + 0x10),&local_3b58);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3b58.ReferenceController);
  local_3bf0 = (FName)SOverlay::FArguments::operator+(pFVar26,(FSlotArguments *)FVar38);
  pFVar27 = SOverlay::Slot(&local_30e8,0);
  local_3c68._Last = (FLinearColor *)((ulonglong)local_3c68._Last & 0xffffffff00000000);
  local_3c68._First = (FLinearColor *)SDockTab::GetTabPadding;
  local_34b8 = SDockTab::GetTabPadding;
  pFStack_34b0 = local_3c68._Last;
  pTVar39 = TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::CreateSP<SDockTab>
                      (&local_3300,this_00->Object,(pmf_28cbc127 *)&local_34b8);
  local_3288.bIsSet = true;
  local_3288.Value.Left = 0.0;
  local_3288.Value.Top = 0.0;
  local_3288.Value.Right = 0.0;
  local_3288.Value.Bottom = 0.0;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_3288.Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar39);
  FVar38 = (FMemScope)
           TPaddingWidgetSlotMixin<SOverlay::FOverlaySlot>::FSlotArgumentsMixin::Padding
                     ((FSlotArgumentsMixin *)&pFVar27->_padding_,&local_3288);
  if ((longlong *)local_3a40 != (longlong *)((longlong)FVar38 + 0x50)) {
    *(undefined4 *)((longlong)FVar38 + 0x50) = 2;
    *(undefined1 *)((longlong)FVar38 + 0x54) = 1;
  }
  FVar43 = FVar61;
  if (FVar38 != (FMemScope)0xffffffffffffffb8) {
    FVar43 = FVar38;
  }
  plVar1 = (longlong *)((longlong)FVar43 + 0x48);
  if ((longlong *)local_3a38 != plVar1) {
    *(undefined4 *)plVar1 = 0;
    *(undefined1 *)((longlong)FVar43 + 0x4c) = 1;
  }
  local_3be8 = FVar61;
  if (plVar1 != (longlong *)0x0) {
    local_3be8 = FVar43;
  }
  pFVar40 = SHorizontalBox::FArguments::FArguments(&local_2708);
  local_3908.Value = (EVisibility)EVisibility::Visible.Value.Value;
  local_3908.bIsSet = true;
  local_3908.Getter._0_8_ = 0;
  local_3908.Getter._8_8_ = 0;
  local_3908.Getter._16_8_ = 0;
  pFVar40 = TSlateBaseNamedArgs<SHorizontalBox>::Visibility
                      ((TSlateBaseNamedArgs<SHorizontalBox> *)pFVar40,&local_3908);
  local_33e8.Value.Object = *(IToolTip **)&local_39d8->field_0x30;
  local_33e8.Value.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&local_39d8->field_0x38;
  if (local_33e8.Value.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_33e8.Value.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_33e8.Value.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
         );
    UNLOCK();
  }
  local_33e8.bIsSet = (bool)local_39d8->field_0x40;
  TDelegate<TSharedPtr<IToolTip,1>___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<TSharedPtr<IToolTip,1>___cdecl(void),FDefaultDelegateUserPolicy>
            (&local_33e8.Getter,
             (TDelegate<TSharedPtr<IToolTip,1>___cdecl(void),FDefaultDelegateUserPolicy> *)
             &local_39d8->field_0x48);
  TAttribute<TSharedPtr<IToolTip,1>_>::operator=
            ((TAttribute<TSharedPtr<IToolTip,1>_> *)&pFVar40->_padding_,&local_33e8);
  TAttribute<TSharedPtr<IToolTip,1>_>::~TAttribute<TSharedPtr<IToolTip,1>_>(&local_33e8);
  local_3c68._First = (FLinearColor *)SDockTab::GetTabLabel;
  local_3c68._Last = (FLinearColor *)((ulonglong)local_3c68._Last & 0xffffffff00000000);
  local_34a8 = SDockTab::GetTabLabel;
  pFStack_34a0 = local_3c68._Last;
  pFVar40 = TSlateBaseNamedArgs<SHorizontalBox>::ToolTipText<SDockTab>
                      ((TSlateBaseNamedArgs<SHorizontalBox> *)pFVar40,this_00->Object,
                       (pmf_b5ac6a49 *)&local_34a8);
  pFVar41 = ::operator_new(0x58);
  local_3be0 = FVar61;
  if (pFVar41 != (FSlot *)0x0) {
    *(undefined8 *)pFVar41 = 0;
    *(undefined8 *)&pFVar41->field_0x8 = 0;
    *(undefined8 *)&pFVar41->field_0x10 = 0;
    *(undefined8 *)&pFVar41->field_0x18 = 0;
    *(undefined8 *)&pFVar41->field_0x20 = 0;
    *(undefined8 *)&pFVar41->field_0x28 = 0;
    *(undefined8 *)&pFVar41->field_0x30 = 0;
    *(undefined8 *)&pFVar41->field_0x38 = 0;
    *(undefined8 *)&pFVar41->field_0x40 = 0;
    *(undefined8 *)&pFVar41->field_0x48 = 0;
    *(undefined8 *)&pFVar41->field_0x50 = 0;
    local_3be0 = (FMemScope)SHorizontalBox::FSlot::FSlot(pFVar41);
  }
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments(&local_2f68,(FSlot *)&local_3be0);
  FVar38 = (FMemScope)SHorizontalBox::FSlot::FSlotArguments::AutoWidth(&local_2f68);
  if (local_3a30 != (undefined4 *)((longlong)FVar38 + 0x50)) {
    *(undefined4 *)((longlong)FVar38 + 0x50) = 2;
    *(undefined1 *)((longlong)FVar38 + 0x54) = 1;
  }
  if (FVar38 != (FMemScope)0xffffffffffffffb8) {
    FVar61 = FVar38;
  }
  pSVar44 = TSharedPtr<SDockTab,1>::operator->(this_00);
  bVar21 = SDockTab::IsTabNameHidden(pSVar44);
  if (bVar21) {
    pFVar47 = FMargin::FMargin(&local_31e0,0.0);
  }
  else {
    pFVar47 = FMargin::FMargin(&local_31d0,0.0,0.0,__real_4014000000000000,0.0);
  }
  local_3788.Value.Left = pFVar47->Left;
  local_3788.Value.Top = pFVar47->Top;
  local_3788.Value.Right = pFVar47->Right;
  local_3788.Value.Bottom = pFVar47->Bottom;
  local_3788.bIsSet = true;
  local_3788.Getter._16_8_ = 0;
  local_3788.Getter._0_8_ = 0;
  local_3788.Getter._8_8_ = 0;
  pFVar42 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)((longlong)FVar61 + 0x18),&local_3788);
  pFVar36 = SBorder::FArguments::FArguments(&local_12c0);
  local_3c68._First = (FLinearColor *)SDockTab::GetTabIconBorderPadding;
  local_3c68._Last = (FLinearColor *)((ulonglong)local_3c68._Last & 0xffffffff00000000);
  local_3498 = SDockTab::GetTabIconBorderPadding;
  pFStack_3490 = local_3c68._Last;
  pFVar36 = SBorder::FArguments::Padding<SDockTab>
                      (pFVar36,this_00->Object,(pmf_28cbc127 *)&local_3498);
  local_38e8.Value = (EVisibility)EVisibility::HitTestInvisible.Value.Value;
  local_38e8.bIsSet = true;
  local_38e8.Getter._0_8_ = 0;
  local_38e8.Getter._8_8_ = 0;
  local_38e8.Getter._16_8_ = 0;
  pFVar36 = TSlateBaseNamedArgs<SBorder>::Visibility
                      ((TSlateBaseNamedArgs<SBorder> *)pFVar36,&local_38e8);
  local_3c68._First = (FLinearColor *)SDockTab::GetColorOverlayImageBrush;
  local_3c68._Last = (FLinearColor *)((ulonglong)local_3c68._Last & 0xffffffff00000000);
  local_3488 = SDockTab::GetColorOverlayImageBrush;
  pFStack_3480 = local_3c68._Last;
  pFVar36 = SBorder::FArguments::BorderImage<SDockTab>
                      (pFVar36,this_00->Object,(pmf_604a4ec2 *)&local_3488);
  local_3c68._First = (FLinearColor *)SDockTab::GetTabColor;
  local_3c68._Last = (FLinearColor *)((ulonglong)local_3c68._Last & 0xffffffff00000000);
  local_3478 = SDockTab::GetTabColor;
  pFStack_3470 = local_3c68._Last;
  pFVar36 = SBorder::FArguments::BorderBackgroundColor<SDockTab>
                      (pFVar36,this_00->Object,(pmf_11ab8443 *)&local_3478);
  pSVar44 = TSharedPtr<SDockTab,1>::operator->(this_00);
  pTVar29 = TSharedPtr<SImage,1>::ToSharedRef(&pSVar44->IconWidget,&local_3620);
  pTVar5 = (pTVar29->SharedReferenceCount).ReferenceController;
  local_3ac8 = pTVar29->Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar6 = (pFVar36->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar36->_Content).Widget.Object = (SWidget *)local_3ac8;
  (pFVar36->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar5;
  pTStack_3ac0 = pTVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  FLLMScope::FLLMScope
            ((FLLMScope *)local_3c48,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_3bd8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_3bd0,&local_3bd8,true);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>
            (&local_35a0,"SBorder",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\STabPanelDrawer.cpp"
             ,0x85,&local_3c53);
  FMemScope::~FMemScope(&local_3bd0);
  FLLMScope::~FLLMScope((FLLMScope *)local_3c48);
  pTVar37 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_35a0,&local_3630,pFVar36);
  local_3b08.Object = (SWidget *)pTVar37->Object;
  local_3be0 = (FMemScope)(pTVar37->SharedReferenceCount).ReferenceController;
  if (local_3be0 != (FMemScope)0x0) {
    LOCK();
    ((TReferenceControllerBase<1> *)local_3be0)->SharedReferenceCount =
         (atomic<int>)((int)((TReferenceControllerBase<1> *)local_3be0)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_3b08.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)local_3be0;
  pFVar42 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)pFVar42,&local_3b08);
  pFVar40 = SHorizontalBox::FArguments::operator+(pFVar40,pFVar42);
  pFVar42 = SHorizontalBox::Slot(&local_27f0);
  pSVar4 = SNullWidget::NullWidget.Object;
  local_3b18 = SNullWidget::NullWidget.Object;
  local_3b10.ReferenceController = SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  if (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((SWidget **)&pFVar42->field_0x8 != &local_3b18) {
    *(SWidget **)&pFVar42->field_0x8 = pSVar4;
    local_3b18 = (SWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar42->field_0x10,&local_3b10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3b10.ReferenceController);
  pFVar40 = SHorizontalBox::FArguments::operator+(pFVar40,pFVar42);
  pFVar42 = SHorizontalBox::Slot(&local_28d8);
  pFVar42 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar42);
  puVar2 = &pFVar42->field_0x48;
  if (local_3a28 != (undefined4 *)puVar2) {
    *(undefined4 *)puVar2 = 3;
    pFVar42->field_0x4c = 1;
  }
  pFVar58 = (FSlotArguments *)0x0;
  if (puVar2 != (undefined1 *)0x0) {
    pFVar58 = pFVar42;
  }
  if (local_3a20 != (undefined4 *)&pFVar58->field_0x50) {
    *(undefined4 *)&pFVar58->field_0x50 = 2;
    pFVar58->field_0x54 = 1;
  }
  pFVar42 = (FSlotArguments *)0x0;
  if (pFVar58 != (FSlotArguments *)0xffffffffffffffb8) {
    pFVar42 = pFVar58;
  }
  pFVar48 = SButton::FArguments::FArguments(&local_5c0);
  pFVar19 = local_3b68;
  pSVar18 = local_3c40;
  local_3b08.Object = (SWidget *)OnButtonOpenTabInNewWindowClicked;
  local_3b08.SharedReferenceCount.ReferenceController =
       local_3b08.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
  local_3468 = OnButtonOpenTabInNewWindowClicked;
  pTStack_3460 = local_3b08.SharedReferenceCount.ReferenceController;
  pFVar48->_ButtonStyle = local_3b68;
  pFVar48 = SButton::FArguments::OnClicked<UE::Slate::Private::STabPanelDrawer>
                      (pFVar48,local_3c40,(pmf_114f7b24 *)&local_3468);
  local_3758.bIsSet = true;
  local_3758.Getter._16_8_ = 0;
  local_3758.Value.Left = ___xmm_00000000000000003fc0000000000000;
  local_3758.Value.Top = _UNK_15094b724;
  local_3758.Value.Right = _UNK_15094b728;
  local_3758.Value.Bottom = _UNK_15094b72c;
  local_3758.Getter._0_8_ = 0;
  local_3758.Getter._8_8_ = 0;
  pFVar48 = SButton::FArguments::ContentPadding(pFVar48,&local_3758);
  pFVar49 = FText::AsLocalizable_Advanced_LocText
                      (&local_3640,L"TabPanelDrawer",L"OpenTabInNewWindowButtonTooltip",
                       L"Pop out into a floating window.");
  FText::FText(&local_3728.Value,pFVar49);
  local_3728.bIsSet = true;
  local_3728.Getter._16_8_ = 0;
  local_3728.Getter._0_8_ = 0;
  local_3728.Getter._8_8_ = 0;
  pFVar48 = TSlateBaseNamedArgs<SButton>::ToolTipText
                      ((TSlateBaseNamedArgs<SButton> *)pFVar48,&local_3728);
  pFVar50 = SSpacer::FArguments::FArguments(&local_1ca0);
  local_3838._s_0.X = (double)*(float *)&(pFVar19->Normal).ImageSize;
  local_3828 = 1;
  local_3810 = 0;
  local_3838._s_0.Y = (double)*(float *)&(pFVar19->Normal).ImageSize.field_0x4;
  local_3820 = 0;
  uStack_3818 = 0;
  pFVar50 = SSpacer::FArguments::Size
                      (pFVar50,(TAttribute<UE::Math::TVector2<double>_> *)&local_3838._s_0);
  pTVar51 = MakeTDecl<SSpacer,RequiredArgs::T0RequiredArgs>
                      (&local_3318,"SSpacer",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\STabPanelDrawer.cpp"
                       ,0xa1,&local_3c52);
  pTVar52 = TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar51,&local_3650,pFVar50);
  pTVar6 = (pTVar52->SharedReferenceCount).ReferenceController;
  local_3ae8 = pTVar52->Object;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar7 = (pFVar48->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar48->_Content).Widget.Object = (SWidget *)local_3ae8;
  (pFVar48->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar6;
  pTStack_3ae0 = pTVar6;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  pTVar53 = MakeTDecl<SButton,RequiredArgs::T0RequiredArgs>
                      (&local_3330,"SButton",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\STabPanelDrawer.cpp"
                       ,0x9b,&local_3c51);
  pTVar54 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar53,&local_3660,pFVar48);
  local_3898.Object = (SWidget *)pTVar54->Object;
  local_3bd8 = (FName)(pTVar54->SharedReferenceCount).ReferenceController;
  if (local_3bd8 != (FName)0x0) {
    LOCK();
    *(atomic<int> *)((longlong)local_3bd8 + 8) =
         (atomic<int>)((int)*(atomic<int> *)((longlong)local_3bd8 + 8) + 1);
    UNLOCK();
  }
  local_3898.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)local_3bd8;
  pFVar42 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)pFVar42,&local_3898);
  pFVar40 = SHorizontalBox::FArguments::operator+(pFVar40,pFVar42);
  pFVar42 = SHorizontalBox::Slot(&local_29c0);
  pFVar42 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar42);
  puVar2 = &pFVar42->field_0x48;
  if (local_3a18 != (undefined4 *)puVar2) {
    *(undefined4 *)puVar2 = 3;
    pFVar42->field_0x4c = 1;
  }
  pFVar58 = (FSlotArguments *)0x0;
  if (puVar2 != (undefined1 *)0x0) {
    pFVar58 = pFVar42;
  }
  if (local_3a10 != (undefined4 *)&pFVar58->field_0x50) {
    *(undefined4 *)&pFVar58->field_0x50 = 2;
    pFVar58->field_0x54 = 1;
  }
  pFVar42 = (FSlotArguments *)0x0;
  if (pFVar58 != (FSlotArguments *)0xffffffffffffffb8) {
    pFVar42 = pFVar58;
  }
  pFVar50 = SSpacer::FArguments::FArguments(&local_1ec8);
  local_37f8 = 1;
  fVar63 = *(float *)&(local_3b68->Normal).ImageSize * __real_40400000;
  fVar64 = *(float *)&(local_3b68->Normal).ImageSize.field_0x4 * __real_40400000;
  local_3c40 = (STabPanelDrawer *)CONCAT44(fVar64,fVar63);
  local_3b30 = local_3c40;
  local_37e0 = 0;
  local_3808._s_0.X = (double)(fVar63 * __real_3e800000);
  local_3808._s_0.Y = (double)(fVar64 * __real_3e800000);
  local_37f0 = 0;
  uStack_37e8 = 0;
  pFVar50 = SSpacer::FArguments::Size
                      (pFVar50,(TAttribute<UE::Math::TVector2<double>_> *)&local_3808._s_0);
  pTVar51 = MakeTDecl<SSpacer,RequiredArgs::T0RequiredArgs>
                      (&local_3348,"SSpacer",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\STabPanelDrawer.cpp"
                       ,0xab,&local_3c50);
  pTVar52 = TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar51,local_33b8,pFVar50);
  local_3af8.Object = (SWidget *)pTVar52->Object;
  local_3bd0 = (FMemScope)(pTVar52->SharedReferenceCount).ReferenceController;
  if (local_3bd0 != (FMemScope)0x0) {
    LOCK();
    *(atomic<int> *)((longlong)local_3bd0 + 8) =
         (atomic<int>)((int)*(atomic<int> *)((longlong)local_3bd0 + 8) + 1);
    UNLOCK();
  }
  local_3af8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)local_3bd0;
  pFVar42 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)pFVar42,&local_3af8);
  pFVar40 = SHorizontalBox::FArguments::operator+(pFVar40,pFVar42);
  pFVar42 = SHorizontalBox::Slot(&local_2aa8);
  pFVar42 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar42);
  puVar2 = &pFVar42->field_0x48;
  if (local_3a08 != (undefined4 *)puVar2) {
    *(undefined4 *)puVar2 = 3;
    pFVar42->field_0x4c = 1;
  }
  pFVar58 = (FSlotArguments *)0x0;
  if (puVar2 != (undefined1 *)0x0) {
    pFVar58 = pFVar42;
  }
  if (local_3a00 != (undefined4 *)&pFVar58->field_0x50) {
    *(undefined4 *)&pFVar58->field_0x50 = 2;
    pFVar58->field_0x54 = 1;
  }
  pFVar42 = (FSlotArguments *)0x0;
  if (pFVar58 != (FSlotArguments *)0xffffffffffffffb8) {
    pFVar42 = pFVar58;
  }
  pFVar48 = SButton::FArguments::FArguments(&local_b00);
  pFVar19 = local_39f8;
  local_3af8.Object = (SWidget *)OnButtonDismissTabClicked;
  local_3af8.SharedReferenceCount.ReferenceController =
       local_3af8.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
  local_3458 = OnButtonDismissTabClicked;
  pTStack_3450 = local_3af8.SharedReferenceCount.ReferenceController;
  pFVar48->_ButtonStyle = local_39f8;
  pFVar48 = SButton::FArguments::OnClicked<UE::Slate::Private::STabPanelDrawer>
                      (pFVar48,pSVar18,(pmf_114f7b24 *)&local_3458);
  local_36f8.bIsSet = true;
  local_36f8.Getter._16_8_ = 0;
  local_36f8.Value.Left = ___xmm_00000000000000003fc0000000000000;
  local_36f8.Value.Top = _UNK_15094b724;
  local_36f8.Value.Right = _UNK_15094b728;
  local_36f8.Value.Bottom = _UNK_15094b72c;
  local_36f8.Getter._0_8_ = 0;
  local_36f8.Getter._8_8_ = 0;
  pFVar48 = SButton::FArguments::ContentPadding(pFVar48,&local_36f8);
  pFVar49 = FText::AsLocalizable_Advanced_LocText
                      (&local_33f8,L"TabPanelDrawer",L"DismissPanelDrawerButtonTooltipText",
                       L"Dismiss Tab");
  FText::FText(&local_36c8.Value,pFVar49);
  local_36c8.bIsSet = true;
  local_36c8.Getter._16_8_ = 0;
  local_36c8.Getter._0_8_ = 0;
  local_36c8.Getter._8_8_ = 0;
  pFVar48 = TSlateBaseNamedArgs<SButton>::ToolTipText
                      ((TSlateBaseNamedArgs<SButton> *)pFVar48,&local_36c8);
  pFVar50 = SSpacer::FArguments::FArguments(&local_20f0);
  local_3868._s_0.Y = (double)*(float *)&(pFVar19->Normal).ImageSize.field_0x4;
  local_3840 = 0;
  local_3858 = 1;
  local_3868._s_0.X = (double)*(float *)&(pFVar19->Normal).ImageSize;
  local_3850 = 0;
  uStack_3848 = 0;
  pFVar50 = SSpacer::FArguments::Size
                      (pFVar50,(TAttribute<UE::Math::TVector2<double>_> *)&local_3868._s_0);
  pTVar51 = MakeTDecl<SSpacer,RequiredArgs::T0RequiredArgs>
                      (&local_3360,"SSpacer",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\STabPanelDrawer.cpp"
                       ,0xba,&local_3c4f);
  pTVar52 = TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar51,&local_3408,pFVar50);
  pTVar7 = (pTVar52->SharedReferenceCount).ReferenceController;
  local_3ad8 = pTVar52->Object;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar8 = (pFVar48->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar48->_Content).Widget.Object = (SWidget *)local_3ad8;
  (pFVar48->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar7;
  pTStack_3ad0 = pTVar7;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  pTVar53 = MakeTDecl<SButton,RequiredArgs::T0RequiredArgs>
                      (&local_3378,"SButton",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\STabPanelDrawer.cpp"
                       ,0xb4,&local_3c4e);
  pTVar54 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar53,&local_3418,pFVar48);
  pTVar8 = (pTVar54->SharedReferenceCount).ReferenceController;
  local_3888.Object = (SWidget *)pTVar54->Object;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_3888.SharedReferenceCount.ReferenceController = pTVar8;
  pFVar42 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)pFVar42,&local_3888);
  pFVar40 = SHorizontalBox::FArguments::operator+(pFVar40,pFVar42);
  this_02 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                      (&local_3390,"SHorizontalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\STabPanelDrawer.cpp"
                       ,0x7a,&local_3c4d);
  pTVar46 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_02,&local_3428,pFVar40);
  pTVar9 = (pTVar46->SharedReferenceCount).ReferenceController;
  local_3878.Object = (SWidget *)pTVar46->Object;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_3878.SharedReferenceCount.ReferenceController = pTVar9;
  pFVar27 = TSlotBase<SOverlay::FOverlaySlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)local_3be8,&local_3878);
  pFVar26 = SOverlay::FArguments::operator+((FArguments *)local_3bf0,pFVar27);
  pTVar55 = MakeTDecl<SOverlay,RequiredArgs::T0RequiredArgs>
                      (&local_3258,"SOverlay",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\STabPanelDrawer.cpp"
                       ,0x59,&local_3c4c);
  pTVar56 = TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar55,&local_3438,pFVar26);
  pTVar10 = (pTVar56->SharedReferenceCount).ReferenceController;
  local_38c8.Object = (SWidget *)pTVar56->Object;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38c8.SharedReferenceCount.ReferenceController = pTVar10;
  pFVar27 = TSlotBase<SOverlay::FOverlaySlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)local_3c10,&local_38c8);
  pFVar26 = SOverlay::FArguments::operator+((FArguments *)local_3c08,pFVar27);
  pTVar55 = MakeTDecl<SOverlay,RequiredArgs::T0RequiredArgs>
                      (&local_32d0,"SOverlay",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\STabPanelDrawer.cpp"
                       ,0x2e,local_3c4b);
  pTVar56 = TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar55,&local_3448,pFVar26);
  pTVar11 = (pTVar56->SharedReferenceCount).ReferenceController;
  local_38b8.Object = (SWidget *)pTVar56->Object;
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38b8.SharedReferenceCount.ReferenceController = pTVar11;
  TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::operator[]
            (local_39f0,&local_38b8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3448.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_32d0._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3438.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3258._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3428.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3390._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3418.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3378._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3408.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3360._Widget.SharedReferenceCount.ReferenceController);
  SSpacer::FArguments::~FArguments(&local_20f0);
  FText::~FText(&local_33f8);
  SButton::FArguments::~FArguments(&local_b00);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_2aa8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_3bd0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_33b8[0].SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3348._Widget.SharedReferenceCount.ReferenceController);
  SSpacer::FArguments::~FArguments(&local_1ec8);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_29c0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_3bd8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3660.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3330._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3650.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3318._Widget.SharedReferenceCount.ReferenceController);
  SSpacer::FArguments::~FArguments(&local_1ca0);
  FText::~FText(&local_3640);
  SButton::FArguments::~FArguments(&local_5c0);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_28d8);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_27f0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_3be0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3630.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_35a0._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3620.SharedReferenceCount.ReferenceController);
  SBorder::FArguments::~FArguments(&local_12c0);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_2f68);
  SHorizontalBox::FArguments::~FArguments(&local_2708);
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::
  ~TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>(&local_3300);
  SOverlay::FOverlaySlot::FSlotArguments::~FSlotArguments(&local_30e8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_3bf8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3610.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3588._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_3c00);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3600.SharedReferenceCount.ReferenceController);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_2e80);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_3c18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_35f0.SharedReferenceCount.ReferenceController);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_2d98);
  SHorizontalBox::FArguments::~FArguments(&local_2500);
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::
  ~TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>(&local_32e8);
  SOverlay::FOverlaySlot::FSlotArguments::~FSlotArguments(&local_3088);
  SOverlay::FArguments::~FArguments(&local_22f8);
  SOverlay::FOverlaySlot::FSlotArguments::~FSlotArguments(&local_3028);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_3c20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_35e0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3570._Widget.SharedReferenceCount.ReferenceController);
  SBorder::FArguments::~FArguments(&local_ee0);
  SOverlay::FOverlaySlot::FSlotArguments::~FSlotArguments(&local_2fc8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_3b40);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_35d0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3558._Widget.SharedReferenceCount.ReferenceController);
  SComplexGradient::FArguments::~FArguments(&local_1a78);
  SOverlay::FOverlaySlot::FSlotArguments::~FSlotArguments(&local_3148);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_3b48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_35c0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3540._Widget.SharedReferenceCount.ReferenceController);
  SImage::FArguments::~FArguments(&local_1810);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_31c0 + 0x30));
  if (local_3188 != (void *)0x0) {
    FMemory::Free(local_3188);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)(local_31c0 + 0x30));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_31c0._16_8_);
  if ((undefined8 *)local_31c0._0_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_31c0._0_8_)(local_31c0._0_8_,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_3b50);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             CONCAT44(local_38a8.SharedReferenceCount.ReferenceController._4_4_,
                      local_38a8.SharedReferenceCount.ReferenceController._0_4_));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3528._Widget.SharedReferenceCount.ReferenceController);
  SImage::FArguments::~FArguments(&local_1568);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_3240 + 0x30));
  if (local_3208 != (void *)0x0) {
    FMemory::Free(local_3208);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)(local_3240 + 0x30));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_3240._16_8_);
  if ((undefined8 *)local_3240._0_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_3240._0_8_)(local_3240._0_8_,1);
  }
  DestructItems<SOverlay::FOverlaySlot::FSlotArguments,int>
            ((FSlotArguments *)local_2cb0._Slots.AllocatorInstance.Data,local_2cb0._Slots.ArrayNum);
  if ((FSlotArguments *)local_2cb0._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_2cb0._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_2cb0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((local_39e8->SharedReferenceCount).ReferenceController);
  return;
}

// DismissTab @ 14272c150

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UE::Slate::Private::STabPanelDrawer::DismissTab(STabPanelDrawer *this)

{
  SDockTab *pSVar1;
  SDockingArea *this_00;
  code *pcVar2;
  atomic<int> aVar3;
  bool bVar4;
  atomic<int> aVar5;
  TReferenceControllerBase<1> *pTVar6;
  
  if (((this->DisplayedTab).Object == (SDockTab *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pSVar1 = (this->DisplayedTab).Object;
  pTVar6 = (pSVar1->ParentDockingAreaPtr).WeakReferenceCount.ReferenceController;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar6->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar6 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14272c1c0;
      }
      LOCK();
      aVar5 = pTVar6->SharedReferenceCount;
      bVar4 = aVar3 == aVar5;
      if (bVar4) {
        pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar5 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar5;
    } while (!bVar4);
    this_00 = (pSVar1->ParentDockingAreaPtr).Object;
    if (this_00 != (SDockingArea *)0x0) {
      SDockingArea::ClosePanelDrawer(this_00);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
      return;
    }
  }
LAB_14272c1c0:
  if (((this->DisplayedTab).Object == (SDockTab *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  SDockTab::RequestCloseTab((this->DisplayedTab).Object);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return;
}

// InvokeTabOutsidePanelDrawer @ 14274a920

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Slate::Private::STabPanelDrawer::InvokeTabOutsidePanelDrawer(STabPanelDrawer *this)

{
  code *pcVar1;
  bool bVar2;
  FTabId *pFVar3;
  FTabManager *pFVar4;
  TSharedPtr<FTabManager,1> local_38;
  undefined1 local_28 [8];
  TReferenceControllerBase<1> *local_20;
  FTabId local_18;
  
  if (((this->DisplayedTab).Object == (SDockTab *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  SDockTab::GetTabManagerPtr((this->DisplayedTab).Object,&local_38);
  if (local_38.Object != (FTabManager *)0x0) {
    pFVar4 = local_38.Object;
    if ((local_38.Object == (FTabManager *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), pFVar4 = local_38.Object, bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcVar1 = *(code **)(pFVar4->_padding_ + 8);
    if (((this->DisplayedTab).Object == (SDockTab *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pFVar3 = SDockTab::GetLayoutIdentifier((this->DisplayedTab).Object,&local_18);
    (*pcVar1)(pFVar4,local_28,pFVar3,0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  return;
}

// MakeContextMenu @ 1427547e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
UE::Slate::Private::STabPanelDrawer::MakeContextMenu
          (STabPanelDrawer *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  SWidget *pSVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  ISlateStyle *pIVar5;
  FName *pFVar6;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar7;
  FUIAction *pFVar8;
  FSlateIcon *pFVar9;
  FText *pFVar10;
  undefined8 *puVar11;
  TSharedRef<SWidget_const_,1> *pTVar12;
  ulong64 uVar13;
  TSharedRef<SWidget,1> *pTVar14;
  SDockTab *pSVar15;
  FName FVar16;
  FName local_res8;
  FName local_res10;
  FName local_res18;
  undefined1 local_498 [16];
  undefined4 local_488;
  undefined1 local_480 [8];
  undefined1 local_478 [8];
  ForAnyElementType FStack_470;
  ulonglong local_468;
  TSharedPtr<FExtender,1> local_458;
  undefined1 local_448 [24];
  undefined1 local_430 [8];
  ForAnyElementType FStack_428;
  ulonglong local_420;
  undefined1 local_418 [24];
  undefined1 local_400 [8];
  ForAnyElementType FStack_3f8;
  ulonglong local_3f0;
  TSharedRef<SWidget_const_,1> local_3e8;
  undefined1 local_3d8 [8];
  undefined1 local_3d0 [8];
  ForAnyElementType FStack_3c8;
  ulonglong local_3c0;
  undefined1 local_3b8 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_3a0;
  ForAnyElementType FStack_398;
  ulonglong local_390;
  undefined1 local_388 [24];
  undefined1 local_370 [8];
  void *pvStack_368;
  undefined8 local_360;
  undefined1 local_358 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_350;
  ForAnyElementType FStack_348;
  ulonglong local_340;
  undefined1 local_338 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_330;
  ForAnyElementType FStack_328;
  ulonglong local_320;
  undefined1 local_318 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_310;
  ForAnyElementType FStack_308;
  ulonglong local_300;
  undefined1 local_2f8 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_2f0;
  ForAnyElementType FStack_2e8;
  ulonglong local_2e0;
  int local_2d8;
  bool local_2d4;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_2d0;
  ForAnyElementType FStack_2c8;
  ulonglong local_2c0;
  undefined1 local_2b8 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_2b0;
  ForAnyElementType FStack_2a8;
  ulonglong local_2a0;
  bool local_297;
  bool local_295;
  bool local_290;
  undefined1 local_288 [8];
  ForAnyElementType FStack_280;
  ulonglong local_278;
  TSharedPtr<FUICommandList_const_,1> local_268;
  FText local_258;
  undefined1 local_248 [24];
  FName local_230;
  FMenuBuilder local_228;
  FUIAction local_a0;
  
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_res10 = (FName)__return_storage_ptr__;
  pIVar5 = FAppStyle::Get();
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  local_458.Object = (FExtender *)0x0;
  local_458.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_268.Object = (FUICommandList *)0x0;
  local_268.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FBaseMenuBuilder::FBaseMenuBuilder
            ((FBaseMenuBuilder *)&local_228,Menu,true,&local_268,false,&local_458,pIVar5,(FName)0x0,
             (FName)0x0);
  local_228.CurrentSectionExtensionHook.ComparisonIndex.Value = 0;
  local_228.CurrentSectionExtensionHook.Number = 0;
  local_228._padding_ = (longlong)&___7FMenuBuilder__6B_;
  FText::FText(&local_228.CurrentSectionHeadingText);
  local_228.CurrentSectionVisibility.Value.Value.Value = (TEnumAsByte<EVisibility::Private>)0x19;
  local_228.CurrentSectionVisibility.bIsSet = false;
  local_228.CurrentSectionVisibility.Getter._16_8_ = 0;
  local_228.CurrentSectionVisibility.Getter._0_8_ = 0;
  local_228.CurrentSectionVisibility.Getter._8_8_ = 0;
  memset(&local_228.CurrentSectionResizeParams,0,200);
  local_228.CurrentSectionResizeParams.Value.ClippingPriority.Value = 0;
  local_228.CurrentSectionResizeParams.Value.ClippingPriority.Getter._16_8_ = 0;
  local_228.CurrentSectionResizeParams.Value.AllowClipping.Getter._16_8_ = 0;
  local_228.CurrentSectionResizeParams.Value.VisibleInOverflow.Getter._16_8_ = 0;
  local_228.CurrentSectionResizeParams.Value.Wrapping.Allow.Getter._16_8_ = 0;
  local_228.CurrentSectionResizeParams.Value.Wrapping.Priority.Getter._16_8_ = 0;
  local_228.CurrentSectionResizeParams.Value.Wrapping.Mode.Getter._16_8_ = 0;
  local_228.CurrentSectionResizeParams.Getter._16_8_ = 0;
  local_228.CurrentSectionResizeParams.Value.ClippingPriority.bIsSet = false;
  local_228.CurrentSectionResizeParams.Value.ClippingPriority.Getter._0_8_ = 0;
  local_228.CurrentSectionResizeParams.Value.ClippingPriority.Getter._8_8_ = 0;
  local_228.CurrentSectionResizeParams.Value.AllowClipping.Value = false;
  local_228.CurrentSectionResizeParams.Value.AllowClipping.bIsSet = false;
  local_228.CurrentSectionResizeParams.Value.AllowClipping.Getter._0_8_ = 0;
  local_228.CurrentSectionResizeParams.Value.AllowClipping.Getter._8_8_ = 0;
  local_228.CurrentSectionResizeParams.Value.VisibleInOverflow.Value = false;
  local_228.CurrentSectionResizeParams.Value.VisibleInOverflow.bIsSet = false;
  local_228.CurrentSectionResizeParams.Value.VisibleInOverflow.Getter._0_8_ = 0;
  local_228.CurrentSectionResizeParams.Value.VisibleInOverflow.Getter._8_8_ = 0;
  local_228.CurrentSectionResizeParams.Value.Wrapping.Allow.Value = false;
  local_228.CurrentSectionResizeParams.Value.Wrapping.Allow.bIsSet = false;
  local_228.CurrentSectionResizeParams.Value.Wrapping.Allow.Getter._0_8_ = 0;
  local_228.CurrentSectionResizeParams.Value.Wrapping.Allow.Getter._8_8_ = 0;
  local_228.CurrentSectionResizeParams.Value.Wrapping.Priority.Value = 0;
  local_228.CurrentSectionResizeParams.Value.Wrapping.Priority.bIsSet = false;
  local_228.CurrentSectionResizeParams.Value.Wrapping.Priority.Getter._0_8_ = 0;
  local_228.CurrentSectionResizeParams.Value.Wrapping.Priority.Getter._8_8_ = 0;
  local_228.CurrentSectionResizeParams.Value.Wrapping.Mode.Value = Preferred;
  local_228.CurrentSectionResizeParams.Value.Wrapping.Mode.bIsSet = false;
  local_228.CurrentSectionResizeParams.Value.Wrapping.Mode.Getter._0_8_ = 0;
  local_228.CurrentSectionResizeParams.Value.Wrapping.Mode.Getter._8_8_ = 0;
  local_228.CurrentSectionResizeParams.Value.Wrapping.VerticalOverflowBehavior.bIsSet = false;
  local_228.CurrentSectionResizeParams.Value.Wrapping.ForceNewLine.bIsSet = false;
  local_228.CurrentSectionResizeParams.bIsSet = false;
  local_228.CurrentSectionResizeParams.Getter._0_8_ = 0;
  local_228.CurrentSectionResizeParams.Getter._8_8_ = 0;
  local_228.bSectionNeedsToBeApplied = false;
  local_228.bSearchable = true;
  local_228.bRecursivelySearchable = true;
  local_228.bIsEditing = false;
  FMenuBuilder::AddSearchWidget(&local_228);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  memset(local_358,0,200);
  local_2d8 = 0;
  local_340 = 0;
  local_320 = 0;
  local_300 = 0;
  local_2e0 = 0;
  local_2c0 = 0;
  local_2a0 = 0;
  local_278 = 0;
  local_3c0 = 0;
  local_350.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_348.Data = (FScriptContainerElement *)0x0;
  local_338[0] = false;
  local_338[1] = false;
  local_330.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_328.Data = (FScriptContainerElement *)0x0;
  local_318[0] = false;
  local_318[1] = false;
  local_310.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_308.Data = (FScriptContainerElement *)0x0;
  local_2f8[0] = false;
  local_2f8[1] = false;
  local_2f0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_2e8.Data = (FScriptContainerElement *)0x0;
  local_2d4 = false;
  local_2d0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_2c8.Data = (FScriptContainerElement *)0x0;
  local_2b8[0] = Preferred;
  local_2b8[1] = false;
  local_2b0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_2a8.Data = (FScriptContainerElement *)0x0;
  local_297 = false;
  local_295 = false;
  local_290 = false;
  local_288 = (undefined1  [8])0x0;
  FStack_280.Data = (FScriptContainerElement *)0x0;
  local_3d8._0_2_ = 0x19;
  local_3d0 = (undefined1  [8])0x0;
  FStack_3c8.Data = (FScriptContainerElement *)0x0;
  FText::FText((FText *)local_3b8);
  local_3b8[0x10] = false;
  local_390 = 0;
  local_3a0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_398.Data = (FScriptContainerElement *)0x0;
  pFVar6 = ::FName::FName(&local_res8,"TabPanelDrawerCloseTab");
  FMenuBuilder::BeginSection
            (&local_228,*pFVar6,(TAttribute<FText> *)local_3b8,(TAttribute<EVisibility> *)local_3d8,
             (TAttribute<FMenuEntryResizeParams> *)local_358);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_3a0,(FWriteAccessScope *)local_498);
  if (((int)local_390 != 0) && (FStack_398.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_398.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_398,0,0,0x10);
    local_390 = local_390 & 0xffffffff00000000;
  }
  if (local_488._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_498._8_8_,(FDestructionSentinel *)local_498);
  }
  if (FStack_398.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_398.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_3a0.AccessDetector);
  if ((FName)local_3b8._0_8_ != (FName)0x0) {
    (**(code **)((longlong)*(ITextData *)local_3b8._0_8_ + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3d0,
             (FWriteAccessScope *)local_498);
  if (((int)local_3c0 != 0) && (FStack_3c8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_3c8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_3c8,0,0,0x10);
    local_3c0 = local_3c0 & 0xffffffff00000000;
  }
  if (local_488._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_498._8_8_,(FDestructionSentinel *)local_498);
  }
  if (FStack_3c8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_3c8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3d0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_288,
             (FWriteAccessScope *)local_498);
  if (((int)local_278 != 0) && (FStack_280.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_280.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_280,0,0,0x10);
    local_278 = local_278 & 0xffffffff00000000;
  }
  if (local_488._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_498._8_8_,(FDestructionSentinel *)local_498);
  }
  if (FStack_280.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_280.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_288);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_2b0,(FWriteAccessScope *)local_498);
  if (((int)local_2a0 != 0) && (FStack_2a8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2a8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2a8,0,0,0x10);
    local_2a0 = local_2a0 & 0xffffffff00000000;
  }
  if (local_488._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_498._8_8_,(FDestructionSentinel *)local_498);
  }
  if (FStack_2a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2a8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_2b0.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_2d0,(FWriteAccessScope *)local_498);
  if (((int)local_2c0 != 0) && (FStack_2c8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2c8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2c8,0,0,0x10);
    local_2c0 = local_2c0 & 0xffffffff00000000;
  }
  if (local_488._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_498._8_8_,(FDestructionSentinel *)local_498);
  }
  if (FStack_2c8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2c8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_2d0.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_2f0,(FWriteAccessScope *)local_498);
  if (((int)local_2e0 != 0) && (FStack_2e8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2e8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2e8,0,0,0x10);
    local_2e0 = local_2e0 & 0xffffffff00000000;
  }
  if (local_488._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_498._8_8_,(FDestructionSentinel *)local_498);
  }
  if (FStack_2e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2e8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_2f0.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_310,(FWriteAccessScope *)local_498);
  if (((int)local_300 != 0) && (FStack_308.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_308.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_308,0,0,0x10);
    local_300 = local_300 & 0xffffffff00000000;
  }
  if (local_488._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_498._8_8_,(FDestructionSentinel *)local_498);
  }
  if (FStack_308.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_308.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_310.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_330,(FWriteAccessScope *)local_498);
  if (((int)local_320 != 0) && (FStack_328.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_328.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_328,0,0,0x10);
    local_320 = local_320 & 0xffffffff00000000;
  }
  if (local_488._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_498._8_8_,(FDestructionSentinel *)local_498);
  }
  if (FStack_328.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_328.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_330.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_350,(FWriteAccessScope *)local_498);
  if (((int)local_340 != 0) && (FStack_348.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_348.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_348,0,0,0x10);
    local_340 = local_340 & 0xffffffff00000000;
  }
  if (local_488._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_498._8_8_,(FDestructionSentinel *)local_498);
  }
  if (FStack_348.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_348.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_350.AccessDetector);
  local_480[0] = (TEnumAsByte<EVisibility::Private>)0x19;
  local_480[1] = false;
  local_468 = 0;
  local_478 = (undefined1  [8])0x0;
  FStack_470.Data = (FScriptContainerElement *)0x0;
  FText::FText((FText *)local_418);
  local_458.SharedReferenceCount.ReferenceController =
       local_458.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
  local_418[0x10] = false;
  local_458.Object = (FExtender *)DismissTab;
  local_268.Object = (FUICommandList *)DismissTab;
  local_268.SharedReferenceCount.ReferenceController =
       local_458.SharedReferenceCount.ReferenceController;
  local_400 = (undefined1  [8])0x0;
  FStack_3f8.Data = (FScriptContainerElement *)0x0;
  local_3f0 = 0;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  pTVar7 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
           CreateSP<UE::Slate::Private::STabPanelDrawer>
                     ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_3d8,this,
                      (pmf_7bda3680 *)&local_268);
  pFVar8 = FUIAction::FUIAction(&local_a0,pTVar7,RepeatDisabled);
  pFVar9 = FSlateIcon::FSlateIcon((FSlateIcon *)local_248);
  pFVar10 = FText::AsLocalizable_Advanced_LocText
                      ((FText *)&local_3e8,L"TabPanelDrawer",L"DimissTabTooltip",
                       L"Close the Panel Drawer, but keep the tab alive if reopened later.");
  FText::FText((FText *)local_448,pFVar10);
  local_448[0x10] = true;
  local_420 = 0;
  local_430 = (undefined1  [8])0x0;
  FStack_428.Data = (FScriptContainerElement *)0x0;
  pFVar10 = FText::AsLocalizable_Advanced_LocText
                      (&local_258,L"TabPanelDrawer",L"DimissTab",L"Dismiss Tab");
  FText::FText((FText *)local_3b8,pFVar10);
  local_3b8[0x10] = true;
  local_390 = 0;
  local_3a0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_398.Data = (FScriptContainerElement *)0x0;
  FBaseMenuBuilder::AddMenuEntry
            ((FBaseMenuBuilder *)&local_228,(TAttribute<FText> *)local_3b8,
             (TAttribute<FText> *)local_448,pFVar9,pFVar8,(FName)0x0,Button,(FName)0x0,
             (TAttribute<FText> *)local_418,(TAttribute<EVisibility> *)local_480);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_3a0,(FWriteAccessScope *)local_498);
  if (((int)local_390 != 0) && (FStack_398.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_398.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_398,0,0,0x10);
    local_390 = local_390 & 0xffffffff00000000;
  }
  if (local_488._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_498._8_8_,(FDestructionSentinel *)local_498);
  }
  if (FStack_398.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_398.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_3a0.AccessDetector);
  if ((FName)local_3b8._0_8_ != (FName)0x0) {
    (**(code **)((longlong)*(ITextData *)local_3b8._0_8_ + 0x10))();
  }
  if (local_258.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_258.TextData.Reference + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_430,
             (FWriteAccessScope *)local_498);
  if (((int)local_420 != 0) && (FStack_428.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_428.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_428,0,0,0x10);
    local_420 = local_420 & 0xffffffff00000000;
  }
  if (local_488._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_498._8_8_,(FDestructionSentinel *)local_498);
  }
  if (FStack_428.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_428.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_430);
  if ((ITextData *)local_448._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_448._0_8_ + 0x10))();
  }
  if (local_3e8.Object != (SWidget *)0x0) {
    (**(code **)((local_3e8.Object)->_padding_ + 0x10))();
  }
  FUIAction::~FUIAction(&local_a0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_400,
             (FWriteAccessScope *)local_498);
  if (((int)local_3f0 != 0) && (FStack_3f8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_3f8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_3f8,0,0,0x10);
    local_3f0 = local_3f0 & 0xffffffff00000000;
  }
  if (local_488._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_498._8_8_,(FDestructionSentinel *)local_498);
  }
  if (FStack_3f8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_3f8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_400);
  if ((ITextData *)local_418._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_418._0_8_ + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_478,
             (FWriteAccessScope *)local_498);
  if (((int)local_468 != 0) && (FStack_470.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_470.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_470,0,0,0x10);
    local_468 = local_468 & 0xffffffff00000000;
  }
  if (local_488._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_498._8_8_,(FDestructionSentinel *)local_498);
  }
  if (FStack_470.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_470.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_478);
  local_480[0] = (TEnumAsByte<EVisibility::Private>)0x19;
  local_480[1] = false;
  local_468 = 0;
  local_478 = (undefined1  [8])0x0;
  FStack_470.Data = (FScriptContainerElement *)0x0;
  FText::FText((FText *)local_388);
  pSVar15 = (this->DisplayedTab).Object;
  local_388[0x10] = false;
  local_360 = 0;
  local_370 = (undefined1  [8])0x0;
  pvStack_368 = (void *)0x0;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  local_3d8 = (undefined1  [8])0x0;
  local_3d0 = (undefined1  [8])0x0;
  FStack_3c8.Data = FStack_3c8.Data & 0xffffffff00000000;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3d8,
             (FWriteAccessScope *)local_248);
  local_230 = (FName)local_3d0;
  puVar11 = Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_3d0);
  FVar16 = local_res10;
  if (puVar11 != (undefined8 *)0x0) {
    local_458.Object = (FExtender *)SDockTab::CanCloseTab;
    local_458.SharedReferenceCount.ReferenceController =
         local_3e8.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
    pTVar12 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&pSVar15->_padding_,&local_3e8);
    FVar16 = (FName)(pTVar12->SharedReferenceCount).ReferenceController;
    pSVar1 = pTVar12->Object;
    if (FVar16 != (FName)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)FVar16 + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar16 + 8) + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)((longlong)FVar16 + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar16 + 8) + 1);
      UNLOCK();
    }
    *puVar11 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar13 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar13;
    *puVar11 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSDockTab___00__A6A_NXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar11[3] = pSVar1;
    *(FName *)(puVar11 + 4) = FVar16;
    if (FVar16 != (FName)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)FVar16 + 0xc) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar16 + 0xc) + 1);
      UNLOCK();
    }
    bVar4 = true;
    bVar3 = true;
    bVar2 = true;
    puVar11[5] = local_458.Object;
    puVar11[6] = local_458.SharedReferenceCount.ReferenceController;
  }
  if (bVar2) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)FVar16);
  }
  if (bVar3) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)FVar16);
  }
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3e8.SharedReferenceCount.ReferenceController);
  }
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  if (local_248[0x10] == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_248._8_8_,(FDestructionSentinel *)local_248);
  }
  pSVar15 = (this->DisplayedTab).Object;
  local_498._0_8_ = (atomic<unsigned___int64>)0x0;
  local_498._8_8_ = (FMRSWRecursiveAccessDetector *)0x0;
  local_488._0_1_ = false;
  local_488._1_3_ = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_498,
             (FWriteAccessScope *)local_248);
  local_230 = (FName)((longlong)local_498 + 8);
  puVar11 = Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)(local_498 + 8));
  FVar16 = local_res10;
  if (puVar11 != (undefined8 *)0x0) {
    local_458.Object = (FExtender *)SDockTab::RemoveTabFromParent;
    local_458.SharedReferenceCount.ReferenceController =
         local_3e8.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
    pTVar14 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&pSVar15->_padding_,
                         (TSharedRef<SWidget,1> *)&local_3e8);
    FVar16 = (FName)(pTVar14->SharedReferenceCount).ReferenceController;
    pSVar1 = pTVar14->Object;
    if (FVar16 != (FName)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)FVar16 + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar16 + 8) + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)((longlong)FVar16 + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar16 + 8) + 1);
      UNLOCK();
    }
    bVar4 = true;
    bVar3 = true;
    bVar2 = true;
    *puVar11 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar13 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar13;
    *puVar11 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSDockTab___00__A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar11[3] = pSVar1;
    *(FName *)(puVar11 + 4) = FVar16;
    if (FVar16 != (FName)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)FVar16 + 0xc) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar16 + 0xc) + 1);
      UNLOCK();
    }
    puVar11[5] = local_458.Object;
    puVar11[6] = local_458.SharedReferenceCount.ReferenceController;
    __return_storage_ptr__ = (TSharedRef<SWidget,1> *)local_res10;
  }
  if (bVar2) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)FVar16);
  }
  if (bVar3) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)FVar16);
  }
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3e8.SharedReferenceCount.ReferenceController);
  }
  if (local_248[0x10] == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_248._8_8_,(FDestructionSentinel *)local_248);
  }
  pFVar8 = FUIAction::FUIAction
                     (&local_a0,
                      (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_498,
                      (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)local_3d8,
                      RepeatDisabled);
  pFVar9 = FSlateIcon::FSlateIcon((FSlateIcon *)local_3b8);
  pFVar10 = FText::AsLocalizable_Advanced_LocText
                      ((FText *)&local_268,L"TabPanelDrawer",L"CloseTabTooltil",L"Close this tab.");
  FText::FText((FText *)local_448,pFVar10);
  local_448[0x10] = true;
  local_420 = 0;
  local_430 = (undefined1  [8])0x0;
  FStack_428.Data = (FScriptContainerElement *)0x0;
  pFVar10 = FText::AsLocalizable_Advanced_LocText
                      (&local_258,L"TabPanelDrawer",L"CloseTab",L"Close Tab");
  FText::FText((FText *)local_418,pFVar10);
  local_418[0x10] = true;
  local_3f0 = 0;
  local_400 = (undefined1  [8])0x0;
  FStack_3f8.Data = (FScriptContainerElement *)0x0;
  FBaseMenuBuilder::AddMenuEntry
            ((FBaseMenuBuilder *)&local_228,(TAttribute<FText> *)local_418,
             (TAttribute<FText> *)local_448,pFVar9,pFVar8,local_res18,Button,local_res8,
             (TAttribute<FText> *)local_388,(TAttribute<EVisibility> *)local_480);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_400);
  if (FStack_3f8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_3f8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_400);
  if ((ITextData *)local_418._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_418._0_8_ + 0x10))();
  }
  if (local_258.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_258.TextData.Reference + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_430);
  if (FStack_428.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_428.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_430);
  if ((ITextData *)local_448._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_448._0_8_ + 0x10))();
  }
  if (local_268.Object != (FUICommandList *)0x0) {
    (**(code **)((local_268.Object)->_padding_ + 0x10))();
  }
  FUIAction::~FUIAction(&local_a0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_370);
  if (pvStack_368 != (void *)0x0) {
    FMemory::Free(pvStack_368);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_370);
  if ((ITextData *)local_388._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_388._0_8_ + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_478);
  if (FStack_470.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_470.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_478);
  FMenuBuilder::EndSection(&local_228);
  memset(local_358,0,200);
  local_2d8 = 0;
  local_340 = 0;
  local_320 = 0;
  local_300 = 0;
  local_2e0 = 0;
  local_2c0 = 0;
  local_2a0 = 0;
  local_278 = 0;
  local_468 = 0;
  local_350.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_348.Data = (FScriptContainerElement *)0x0;
  local_338[0] = false;
  local_338[1] = false;
  local_330.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_328.Data = (FScriptContainerElement *)0x0;
  local_318[0] = false;
  local_318[1] = false;
  local_310.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_308.Data = (FScriptContainerElement *)0x0;
  local_2f8[0] = false;
  local_2f8[1] = false;
  local_2f0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_2e8.Data = (FScriptContainerElement *)0x0;
  local_2d4 = false;
  local_2d0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_2c8.Data = (FScriptContainerElement *)0x0;
  local_2b8[0] = Preferred;
  local_2b8[1] = false;
  local_2b0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_2a8.Data = (FScriptContainerElement *)0x0;
  local_297 = false;
  local_295 = false;
  local_290 = false;
  local_288 = (undefined1  [8])0x0;
  FStack_280.Data = (FScriptContainerElement *)0x0;
  local_480[0] = (TEnumAsByte<EVisibility::Private>)0x19;
  local_480[1] = false;
  local_478 = (undefined1  [8])0x0;
  FStack_470.Data = (FScriptContainerElement *)0x0;
  pFVar10 = FText::AsLocalizable_Advanced_LocText
                      ((FText *)&local_3e8,L"TabPanelDrawer",L"LayoutMenuSection",L"Layout");
  FText::FText((FText *)local_388,pFVar10);
  local_388[0x10] = true;
  local_360 = 0;
  local_370 = (undefined1  [8])0x0;
  pvStack_368 = (void *)0x0;
  pFVar6 = ::FName::FName(&local_res10,"TabPanelDrawer");
  FMenuBuilder::BeginSection
            (&local_228,*pFVar6,(TAttribute<FText> *)local_388,(TAttribute<EVisibility> *)local_480,
             (TAttribute<FMenuEntryResizeParams> *)local_358);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_370);
  if (pvStack_368 != (void *)0x0) {
    FMemory::Free(pvStack_368);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_370);
  if ((ITextData *)local_388._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_388._0_8_ + 0x10))();
  }
  if (local_3e8.Object != (SWidget *)0x0) {
    (**(code **)((local_3e8.Object)->_padding_ + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_478);
  if (FStack_470.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_470.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_478);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_288);
  if (FStack_280.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_280.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_288);
  FMenuEntryResizeParams::~FMenuEntryResizeParams((FMenuEntryResizeParams *)local_358);
  local_480[0] = (TEnumAsByte<EVisibility::Private>)0x19;
  local_480[1] = false;
  local_468 = 0;
  local_478 = (undefined1  [8])0x0;
  FStack_470.Data = (FScriptContainerElement *)0x0;
  FText::FText((FText *)local_448);
  local_458.SharedReferenceCount.ReferenceController =
       local_458.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
  local_448[0x10] = false;
  local_458.Object = (FExtender *)OpenTabInNewWindow;
  local_3e8.Object = (SWidget *)OpenTabInNewWindow;
  local_3e8.SharedReferenceCount.ReferenceController =
       local_458.SharedReferenceCount.ReferenceController;
  local_430 = (undefined1  [8])0x0;
  FStack_428.Data = (FScriptContainerElement *)0x0;
  local_420 = 0;
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  pTVar7 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
           CreateSP<UE::Slate::Private::STabPanelDrawer>
                     ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_498,this,
                      (pmf_7bda3680 *)&local_3e8);
  pFVar8 = FUIAction::FUIAction(&local_a0,pTVar7,RepeatDisabled);
  pFVar9 = FSlateIcon::FSlateIcon((FSlateIcon *)local_3b8);
  pFVar10 = FText::AsLocalizable_Advanced_LocText
                      ((FText *)&local_268,L"TabPanelDrawer",L"OpenTabInNewWindowTooltip",
                       L"Pop out into a floating window.");
  FText::FText((FText *)local_418,pFVar10);
  local_418[0x10] = true;
  local_3f0 = 0;
  local_400 = (undefined1  [8])0x0;
  FStack_3f8.Data = (FScriptContainerElement *)0x0;
  pFVar10 = FText::AsLocalizable_Advanced_LocText
                      (&local_258,L"TabPanelDrawer",L"OpenTabInNewWindow",
                       L"Open Tab in a new window");
  FText::FText((FText *)local_388,pFVar10);
  local_388[0x10] = true;
  local_360 = 0;
  local_370 = (undefined1  [8])0x0;
  pvStack_368 = (void *)0x0;
  FBaseMenuBuilder::AddMenuEntry
            ((FBaseMenuBuilder *)&local_228,(TAttribute<FText> *)local_388,
             (TAttribute<FText> *)local_418,pFVar9,pFVar8,(FName)0x0,Button,(FName)0x0,
             (TAttribute<FText> *)local_448,(TAttribute<EVisibility> *)local_480);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_370);
  if (pvStack_368 != (void *)0x0) {
    FMemory::Free(pvStack_368);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_370);
  if ((ITextData *)local_388._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_388._0_8_ + 0x10))();
  }
  if (local_258.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_258.TextData.Reference + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_400);
  if (FStack_3f8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_3f8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_400);
  if ((ITextData *)local_418._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_418._0_8_ + 0x10))();
  }
  if (local_268.Object != (FUICommandList *)0x0) {
    (**(code **)((local_268.Object)->_padding_ + 0x10))();
  }
  FUIAction::~FUIAction(&local_a0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_430);
  if (FStack_428.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_428.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_430);
  if ((ITextData *)local_448._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_448._0_8_ + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_478);
  if (FStack_470.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_470.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_478);
  FMenuBuilder::EndSection(&local_228);
  pSVar15 = TSharedPtr<SDockTab,1>::operator->(&this->DisplayedTab);
  SDockTab::ExtendContextMenu(pSVar15,&local_228);
  FMenuBuilder::MakeWidget
            (&local_228,__return_storage_ptr__,
             (TDelegate<void___cdecl(TSharedRef<FMultiBox,1>_const_&,TSharedRef<SMultiBoxWidget,1>_const_&),FDefaultDelegateUserPolicy>
              *)0x0);
  FMenuBuilder::~FMenuBuilder(&local_228);
  return (TSharedRef<SWidget,1> *)(FName)__return_storage_ptr__;
}

// OnButtonDismissTabClicked @ 1427611e0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
UE::Slate::Private::STabPanelDrawer::OnButtonDismissTabClicked
          (STabPanelDrawer *this,FReply *__return_storage_ptr__)

{
  DismissTab(this);
  FReply::FReply(__return_storage_ptr__,true);
  return __return_storage_ptr__;
}

// OnButtonOpenTabInNewWindowClicked @ 142761210

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
UE::Slate::Private::STabPanelDrawer::OnButtonOpenTabInNewWindowClicked
          (STabPanelDrawer *this,FReply *__return_storage_ptr__)

{
  OpenTabInNewWindow(this);
  FReply::FReply(__return_storage_ptr__,true);
  return __return_storage_ptr__;
}

// OnDragDetected @ 142761760

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
UE::Slate::Private::STabPanelDrawer::OnDragDetected
          (STabPanelDrawer *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  TSharedPtr<SDockTab,1> *this_00;
  SDockTab *pSVar1;
  SDockingArea *this_01;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  atomic<int> aVar7;
  bool bVar8;
  atomic<int> aVar9;
  TTransform2<float> *pTVar10;
  FReply *pFVar11;
  TSharedRef<SWidget,1> *pTVar12;
  FGeometry *pFVar13;
  TSharedRef<SDockTab,1> *pTVar14;
  FDockingDragOperation *this_02;
  TReferenceControllerBase<1> *pTVar15;
  float local_1e8;
  float fStack_1e4;
  float local_1e0;
  float fStack_1dc;
  TSharedPtr<FTabManager,1> local_1d8;
  undefined8 local_1c8;
  TRawPtrProxy<FDockingDragOperation> local_1c0;
  TVector2<double>_u_0 local_1b8;
  TSharedRef<SDockingArea,1> local_1a8;
  TSharedRef<FDockingDragOperation,1> local_198;
  TSharedRef<SWidget,1> local_188;
  TSharedPtr<SDockTab,1> local_178;
  TVector2<double>_u_0 local_168;
  TSharedRef<SDockTab,1> local_158;
  TSharedRef<FDragDropOperation,1> local_148;
  TTransform2<float> local_138;
  FReply local_120;
  
  pTVar10 = Inverse<TTransform2<float>_>(&local_138,&param_1->AccumulatedRenderTransform);
  fStack_1e4 = SUB84(param_2->ScreenSpacePosition,4);
  local_1e8 = SUB84(param_2->ScreenSpacePosition,0);
  fStack_1dc = SUB84(param_1->Size,4);
  local_1e0 = SUB84(param_1->Size,0);
  dVar6 = (double)fStack_1dc;
  dVar5 = (double)local_1e0;
  if (dVar6 == 0.0) {
    dVar4 = 0.0;
  }
  else {
    dVar4 = (double)(fStack_1e4 * (pTVar10->M).M[1][1] + local_1e8 * (pTVar10->M).M[0][1] +
                    (pTVar10->Trans).field0_0x0._s_0.Y) / dVar6;
    if (__real_3ff0000000000000 <= dVar4) {
      dVar4 = __real_3ff0000000000000;
    }
    if (dVar4 <= 0.0) {
      dVar4 = 0.0;
    }
  }
  if (dVar5 == 0.0) {
    dVar3 = 0.0;
  }
  else {
    dVar3 = (double)(fStack_1e4 * (pTVar10->M).M[1][0] + local_1e8 * (pTVar10->M).M[0][0] +
                    (pTVar10->Trans).field0_0x0._s_0.X) / dVar5;
    if (__real_3ff0000000000000 <= dVar3) {
      dVar3 = __real_3ff0000000000000;
    }
    if (dVar3 <= 0.0) {
      dVar3 = 0.0;
    }
  }
  this_00 = &this->DisplayedTab;
  if ((this_00->Object == (SDockTab *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    pFVar11 = (FReply *)(*pcVar2)();
    return pFVar11;
  }
  pTVar12 = SDockTab::GetContent(this_00->Object,&local_188);
  pFVar13 = SWidget::GetTickSpaceGeometry(pTVar12->Object);
  local_1c8 = pFVar13->Size;
  local_1b8._s_0.Y = (double)local_1c8._4_4_ + dVar6;
  local_1b8._s_0.X = dVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_188.SharedReferenceCount.ReferenceController);
  if ((this_00->Object == (SDockTab *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    pFVar11 = (FReply *)(*pcVar2)();
    return pFVar11;
  }
  pSVar1 = this_00->Object;
  pTVar15 = (pSVar1->ParentDockingAreaPtr).WeakReferenceCount.ReferenceController;
  if (pTVar15 == (TReferenceControllerBase<1> *)0x0) {
LAB_142761932:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
    FReply::FReply(__return_storage_ptr__,false);
    return __return_storage_ptr__;
  }
  aVar7 = pTVar15->SharedReferenceCount;
  do {
    if (aVar7 == (atomic<int>)0x0) {
      pTVar15 = (TReferenceControllerBase<1> *)0x0;
      goto LAB_142761932;
    }
    LOCK();
    aVar9 = pTVar15->SharedReferenceCount;
    bVar8 = aVar7 == aVar9;
    if (bVar8) {
      pTVar15->SharedReferenceCount = (atomic<int>)((int)aVar7 + 1);
      aVar9 = aVar7;
    }
    UNLOCK();
    aVar7 = aVar9;
  } while (!bVar8);
  this_01 = (pSVar1->ParentDockingAreaPtr).Object;
  if (this_01 == (SDockingArea *)0x0) goto LAB_142761932;
  if ((this_00->Object == (SDockTab *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    pFVar11 = (FReply *)(*pcVar2)();
    return pFVar11;
  }
  SDockTab::GetTabManagerPtr(this_00->Object,&local_1d8);
  if (local_1d8.Object != (FTabManager *)0x0) {
    if ((local_1d8.Object == (FTabManager *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar2 = (code *)swi(3);
      pFVar11 = (FReply *)(*pcVar2)();
      return pFVar11;
    }
    if ((local_1d8.Object)->bCanDoDragOperation != false) {
      SDockingArea::ClosePanelDrawerForTransfer(this_01,&local_178);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_178.SharedReferenceCount.ReferenceController);
      LOCK();
      pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
      UNLOCK();
      pTVar14 = TSharedPtr<SDockTab,1>::ToSharedRef(this_00,&local_158);
      this_02 = ::operator_new(200);
      if (this_02 == (FDockingDragOperation *)0x0) {
        local_1c0.Object = (FDockingDragOperation *)0x0;
      }
      else {
        LOCK();
        pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
        UNLOCK();
        local_1a8.Object = this_01;
        local_1a8.SharedReferenceCount.ReferenceController = pTVar15;
        local_168._s_0.X = dVar3;
        local_168._s_0.Y = dVar4;
        local_1c0.Object =
             FDockingDragOperation::FDockingDragOperation
                       (this_02,pTVar14,(TVector2<double> *)&local_168._s_0,&local_1a8,
                        (TVector2<double> *)&local_1b8._s_0);
        if ((((local_1c0.Object != (FDockingDragOperation *)0x0) &&
             ((local_1c0.Object)->_padding_ != 0)) && ((local_1c0.Object)->_padding_ != 0)) &&
           ((0 < *(int *)((local_1c0.Object)->_padding_ + 8) &&
            (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                               ("!InObject || !InObject->DoesSharedInstanceExist()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x7a5,L"Trying to share an already-shared object"), bVar8)))) {
          pcVar2 = (code *)swi(3);
          pFVar11 = (FReply *)(*pcVar2)();
          return pFVar11;
        }
      }
      TSharedRef<FDockingDragOperation,1>::
      TSharedRef<FDockingDragOperation,1><FDockingDragOperation>(&local_198,&local_1c0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_158.SharedReferenceCount.ReferenceController);
      FReply::FReply(&local_120,true);
      local_148.Object = (FDragDropOperation *)local_198.Object;
      local_148.SharedReferenceCount.ReferenceController =
           local_198.SharedReferenceCount.ReferenceController;
      if (local_198.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_198.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_198.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar11 = FReply::BeginDragDrop(&local_120,&local_148);
      FReply::FReply(__return_storage_ptr__,pFVar11);
      FReply::~FReply(&local_120);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_198.SharedReferenceCount.ReferenceController);
      goto LAB_142761b2f;
    }
  }
  FReply::FReply(__return_storage_ptr__,true);
LAB_142761b2f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1d8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
  return __return_storage_ptr__;
}

// OnMouseButtonDoubleClick @ 142765e10

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
UE::Slate::Private::STabPanelDrawer::OnMouseButtonDoubleClick
          (STabPanelDrawer *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  FName FVar1;
  TReferenceControllerBase<1> *pTVar2;
  SWidget *pSVar3;
  TSharedRef<SWidget,1> *pTVar4;
  FReply *pFVar5;
  bool bVar6;
  TSharedRef<SWidget,1> local_d8;
  FReply local_c8;
  
  FVar1 = (param_2->EffectingButton).KeyName;
  pTVar2 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar6 = FVar1 == EKeys::MiddleMouseButton.KeyName;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (bVar6) {
    FReply::FReply(&local_c8,true);
    pTVar4 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_d8);
    pTVar2 = (pTVar4->SharedReferenceCount).ReferenceController;
    pSVar3 = pTVar4->Object;
    if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_d8.SharedReferenceCount.ReferenceController);
    }
    else {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_d8.SharedReferenceCount.ReferenceController);
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_d8.Object = pSVar3;
    local_d8.SharedReferenceCount.ReferenceController = pTVar2;
    pFVar5 = FReply::CaptureMouse(&local_c8,&local_d8);
    FReply::FReply(__return_storage_ptr__,pFVar5);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    FReply::~FReply(&local_c8);
  }
  else {
    FReply::FReply(__return_storage_ptr__,false);
  }
  return __return_storage_ptr__;
}

// OnMouseButtonDown @ 142766650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
UE::Slate::Private::STabPanelDrawer::OnMouseButtonDown
          (STabPanelDrawer *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FName FVar4;
  SWidget *pSVar5;
  FKeyDetails *pFVar6;
  FSharedReferencer<1> FVar7;
  FSharedReferencer<1> FVar8;
  FWeakReferencer<1> FVar9;
  bool bVar10;
  TSharedRef<SWidget,1> *pTVar11;
  FReply *pFVar12;
  FWidgetPath *pFVar13;
  FSlateApplication *this_00;
  FSlateApplication *pFVar14;
  FDeprecateVector2DParameter *pFVar15;
  TSharedRef<SWidget,1> *pTVar16;
  ForElementType<FArrangedWidget> FVar17;
  undefined1 auStackY_518 [32];
  undefined1 local_4b8;
  undefined1 local_4b7;
  FPopupTransitionEffect local_4b4;
  TSharedRef<SWidget,1> local_4b0;
  TVector2<float>_u_0 local_4a0;
  FDeprecateVector2DParameter local_498;
  TSharedPtr<IMenu,1> local_490;
  TSharedRef<SWidget,1> local_480;
  TSharedRef<SWidget,1> local_470;
  undefined1 local_460 [112];
  FWeakReferencer<1> local_3f0;
  FName local_3d8;
  FKeyDetails *local_3d0;
  FSharedReferencer<1> FStack_3c8;
  ForElementType<FArrangedWidget> local_338;
  int local_330;
  FSharedReferencer<1> local_318;
  ForAnyElementType local_310;
  FWidgetPath local_300;
  FWidgetPath local_1a0;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_518;
  bVar10 = SWidget::HasMouseCapture((SWidget *)this);
  if (!bVar10) {
    pTVar3 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
    FVar4 = (param_2->EffectingButton).KeyName;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar10 = FVar4 == EKeys::LeftMouseButton.KeyName;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    if (bVar10) {
      FReply::FReply((FReply *)local_460,true);
      FVar7 = EKeys::LeftMouseButton.KeyDetails.SharedReferenceCount;
      pFVar6 = EKeys::LeftMouseButton.KeyDetails.Object;
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
      pTVar11 = TSharedFromThis<SWidget,1>::AsShared
                          ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_4b0);
      pTVar3 = (pTVar11->SharedReferenceCount).ReferenceController;
      pSVar5 = pTVar11->Object;
      if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_4b0.SharedReferenceCount.ReferenceController);
      }
      else {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_4b0.SharedReferenceCount.ReferenceController);
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_460._104_8_ = pSVar5;
      FVar9.ReferenceController = local_3f0.ReferenceController;
      if (pTVar3 != local_3f0.ReferenceController) {
        if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
          UNLOCK();
        }
        FVar9.ReferenceController = pTVar3;
        if (local_3f0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar1 = &(local_3f0.ReferenceController)->WeakReferenceCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar2 == (atomic<int>)0x1) {
            (**(code **)((local_3f0.ReferenceController)->_padding_ + 8))();
          }
        }
      }
      local_3f0.ReferenceController = FVar9.ReferenceController;
      FVar8.ReferenceController = FStack_3c8.ReferenceController;
      local_3d8 = FVar4;
      if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FVar7.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(FVar7.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_3d0 = pFVar6;
      FStack_3c8.ReferenceController = FVar7.ReferenceController;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar8.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar7.ReferenceController);
      FReply::FReply(__return_storage_ptr__,(FReply *)local_460);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      FReply::~FReply((FReply *)local_460);
      return __return_storage_ptr__;
    }
    pTVar3 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
    FVar4 = (param_2->EffectingButton).KeyName;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar10 = FVar4 == EKeys::MiddleMouseButton.KeyName;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    if (bVar10) {
      FReply::FReply((FReply *)local_460,true);
      pTVar11 = TSharedFromThis<SWidget,1>::AsShared
                          ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_4b0);
      pTVar3 = (pTVar11->SharedReferenceCount).ReferenceController;
      pSVar5 = pTVar11->Object;
      if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_4b0.SharedReferenceCount.ReferenceController);
      }
      else {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_4b0.SharedReferenceCount.ReferenceController);
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_4b0.Object = pSVar5;
      local_4b0.SharedReferenceCount.ReferenceController = pTVar3;
      pFVar12 = FReply::CaptureMouse((FReply *)local_460,&local_4b0);
      FReply::FReply(__return_storage_ptr__,pFVar12);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      FReply::~FReply((FReply *)local_460);
      return __return_storage_ptr__;
    }
    pTVar3 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
    FVar4 = (param_2->EffectingButton).KeyName;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar10 = FVar4 == EKeys::RightMouseButton.KeyName;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    if (bVar10) {
      if ((FWidgetPath *)param_2->_padding_ == (FWidgetPath *)0x0) {
        pFVar13 = FWidgetPath::FWidgetPath(&local_1a0);
        FWidgetPath::FWidgetPath((FWidgetPath *)local_460,pFVar13);
        if (local_1a0.VirtualPointerPositions.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a0.VirtualPointerPositions.AllocatorInstance.Data);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1a0.TopLevelWindow.SharedReferenceCount.ReferenceController);
        FVar17 = (ForElementType<FArrangedWidget>)&local_1a0.Widgets.Array;
        if (local_1a0.Widgets.Array.AllocatorInstance.SecondaryData !=
            (ForElementType<FArrangedWidget>)0x0) {
          FVar17 = local_1a0.Widgets.Array.AllocatorInstance.SecondaryData;
        }
        DestructItems<FArrangedWidget,int>
                  ((FArrangedWidget *)FVar17,local_1a0.Widgets.Array.ArrayNum);
        local_300.Widgets.Array.AllocatorInstance.SecondaryData =
             local_1a0.Widgets.Array.AllocatorInstance.SecondaryData;
      }
      else {
        pFVar13 = FWidgetPath::FWidgetPath(&local_300,(FWidgetPath *)param_2->_padding_);
        FWidgetPath::FWidgetPath((FWidgetPath *)local_460,pFVar13);
        if (local_300.VirtualPointerPositions.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_300.VirtualPointerPositions.AllocatorInstance.Data);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_300.TopLevelWindow.SharedReferenceCount.ReferenceController);
        FVar17 = (ForElementType<FArrangedWidget>)&local_300.Widgets.Array;
        if (local_300.Widgets.Array.AllocatorInstance.SecondaryData !=
            (ForElementType<FArrangedWidget>)0x0) {
          FVar17 = local_300.Widgets.Array.AllocatorInstance.SecondaryData;
        }
        DestructItems<FArrangedWidget,int>
                  ((FArrangedWidget *)FVar17,local_300.Widgets.Array.ArrayNum);
      }
      if (local_300.Widgets.Array.AllocatorInstance.SecondaryData !=
          (ForElementType<FArrangedWidget>)0x0) {
        FMemory::Free((void *)local_300.Widgets.Array.AllocatorInstance.SecondaryData);
      }
      this_00 = FSlateApplication::Get();
      local_4a0 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      local_4b7 = 0;
      local_4b4.SlideDirection = ContextMenu;
      pFVar14 = FSlateApplication::Get();
      pFVar15 = (FDeprecateVector2DParameter *)
                (**(code **)(*(longlong *)pFVar14 + 0x68))(pFVar14,&local_4b0);
      local_498 = *pFVar15;
      pTVar11 = MakeContextMenu(this,&local_470);
      pTVar16 = TSharedFromThis<SWidget,1>::AsShared
                          ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_480);
      FSlateApplication::PushMenu
                (this_00,&local_490,pTVar16,(FWidgetPath *)local_460,pTVar11,&local_498,&local_4b4,
                 true,(FDeprecateVector2DParameter *)&local_4a0._s_0,SUB82(&local_4b8,0),true,-1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_490.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_480.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_470.SharedReferenceCount.ReferenceController);
      FReply::FReply(__return_storage_ptr__,true);
      if (local_310.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_310.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_318.ReferenceController);
      FVar17 = (ForElementType<FArrangedWidget>)((longlong)local_460 + 8);
      if (local_338 != (ForElementType<FArrangedWidget>)0x0) {
        FVar17 = local_338;
      }
      DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar17,local_330);
      if (local_338 == (ForElementType<FArrangedWidget>)0x0) {
        return __return_storage_ptr__;
      }
      FMemory::Free((void *)local_338);
      return __return_storage_ptr__;
    }
  }
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnMouseButtonUp @ 142766e80

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
UE::Slate::Private::STabPanelDrawer::OnMouseButtonUp
          (STabPanelDrawer *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FName FVar4;
  FWeakReferencer<1> FVar5;
  bool bVar6;
  undefined4 local_108;
  undefined4 uStack_104;
  TVector2<float>_u_0 local_100;
  undefined4 local_f8;
  undefined8 local_f4;
  undefined4 local_ec;
  FReply local_e8;
  FSlateRotatedRect local_30;
  
  bVar6 = SWidget::HasMouseCapture((SWidget *)this);
  if (bVar6) {
    pTVar3 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
    FVar4 = (param_2->EffectingButton).KeyName;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar6 = FVar4 == EKeys::LeftMouseButton.KeyName;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    if (bVar6) {
      FReply::FReply(&local_e8,true);
      FVar5.ReferenceController = local_e8.MouseCaptor.WeakReferenceCount.ReferenceController;
      local_e8.MouseCaptor.Object = (SWidget *)0x0;
      local_e8.MouseCaptor.WeakReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &(FVar5.ReferenceController)->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)((FVar5.ReferenceController)->_padding_ + 8))(FVar5.ReferenceController,1);
        }
      }
      local_e8.bUseHighPrecisionMouse = 0;
      local_e8.bReleaseMouseCapture = 1;
      FReply::FReply(__return_storage_ptr__,&local_e8);
      FReply::~FReply(&local_e8);
      return __return_storage_ptr__;
    }
    pTVar3 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
    FVar4 = (param_2->EffectingButton).KeyName;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar6 = FVar4 == EKeys::MiddleMouseButton.KeyName;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    if (bVar6) {
      local_108 = SUB84(param_1->Size,0);
      uStack_104 = SUB84(param_1->Size,4);
      local_f8 = local_108;
      local_ec = uStack_104;
      local_100 = (TVector2<float>_u_0)0x0;
      local_f4 = 0;
      TransformRect<TTransform2<float>_>
                (&local_30,&param_1->AccumulatedRenderTransform,(FSlateRotatedRect *)&local_100._s_0
                );
      bVar6 = FSlateRotatedRect::IsUnderLocation
                        (&local_30,*(FDeprecateVector2DParameter *)&param_2->ScreenSpacePosition);
      if (bVar6) {
        DismissTab(this);
      }
      FReply::FReply(&local_e8,true);
      FVar5.ReferenceController = local_e8.MouseCaptor.WeakReferenceCount.ReferenceController;
      local_e8.MouseCaptor.Object = (SWidget *)0x0;
      local_e8.MouseCaptor.WeakReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &(FVar5.ReferenceController)->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)((FVar5.ReferenceController)->_padding_ + 8))(FVar5.ReferenceController,1);
        }
      }
      local_e8.bUseHighPrecisionMouse = 0;
      local_e8.bReleaseMouseCapture = 1;
      FReply::FReply(__return_storage_ptr__,&local_e8);
      FReply::~FReply(&local_e8);
      return __return_storage_ptr__;
    }
  }
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnTouchEnded @ 14276c850

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
UE::Slate::Private::STabPanelDrawer::OnTouchEnded
          (STabPanelDrawer *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FWeakReferencer<1> FVar3;
  bool bVar4;
  FReply local_c8;
  
  bVar4 = SWidget::HasMouseCapture((SWidget *)this);
  if (bVar4) {
    FReply::FReply(&local_c8,true);
    FVar3.ReferenceController = local_c8.MouseCaptor.WeakReferenceCount.ReferenceController;
    local_c8.MouseCaptor.Object = (SWidget *)0x0;
    local_c8.MouseCaptor.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
    ;
    if (FVar3.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(FVar3.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((FVar3.ReferenceController)->_padding_ + 8))(FVar3.ReferenceController,1);
      }
    }
    local_c8.bUseHighPrecisionMouse = 0;
    local_c8.bReleaseMouseCapture = 1;
    FReply::FReply(__return_storage_ptr__,&local_c8);
    FReply::~FReply(&local_c8);
    return __return_storage_ptr__;
  }
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnTouchStarted @ 14276c900

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
UE::Slate::Private::STabPanelDrawer::OnTouchStarted
          (STabPanelDrawer *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  bool bVar3;
  TSharedRef<SWidget,1> *pTVar4;
  FReply *pFVar5;
  TSharedRef<SWidget,1> local_d8;
  FReply local_c8;
  
  bVar3 = SWidget::HasMouseCapture((SWidget *)this);
  if (bVar3) {
    FReply::FReply(__return_storage_ptr__,false);
  }
  else {
    FReply::FReply(&local_c8,true);
    pTVar4 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_d8);
    pTVar1 = (pTVar4->SharedReferenceCount).ReferenceController;
    pSVar2 = pTVar4->Object;
    if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_d8.SharedReferenceCount.ReferenceController);
    }
    else {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_d8.SharedReferenceCount.ReferenceController);
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_d8.Object = pSVar2;
    local_d8.SharedReferenceCount.ReferenceController = pTVar1;
    pFVar5 = FReply::CaptureMouse(&local_c8,&local_d8);
    FReply::FReply(__return_storage_ptr__,pFVar5);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    FReply::~FReply(&local_c8);
  }
  return __return_storage_ptr__;
}

// OpenTabInNewWindow @ 14276e9e0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UE::Slate::Private::STabPanelDrawer::OpenTabInNewWindow(STabPanelDrawer *this)

{
  FGlobalTabmanager *pFVar1;
  SDockTab *this_00;
  TReferenceControllerBase<1> *pTVar2;
  SDockingTabStack *pSVar3;
  SWindow *pSVar4;
  code *pcVar5;
  atomic<int> aVar6;
  bool bVar7;
  ETabRole EVar8;
  atomic<int> aVar9;
  FArguments *pFVar10;
  TSharedRef<FGlobalTabmanager,1> *pTVar11;
  FGeometry *pFVar12;
  TSharedRef<SWidget,1> *pTVar13;
  FDeprecateSlateVector2D FVar14;
  FArguments *pFVar15;
  FArguments *pFVar16;
  FStack *pFVar17;
  TSharedRef<SDockingTabStack,1> *pTVar18;
  TSharedRef<FTabManager::FArea,1> *pTVar19;
  FSlateApplication *pFVar20;
  TSharedRef<SWindow,1> *pTVar21;
  undefined8 *puVar22;
  FSharedReferencer<1> FVar23;
  FSharedReferencer<1> FVar24;
  FSharedReferencer<1> FVar25;
  FSharedReferencer<1> FVar26;
  FStack *pFVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  FLLMScope local_res18 [2];
  FLLMScope local_res20 [2];
  TSharedRef<SWindow,1> local_a78;
  undefined8 local_a68;
  TSharedRef<SDockingArea,1> local_a58;
  TSharedPtr<FTabManager,1> local_a48;
  FGlobalTabmanager *local_a38;
  FSharedReferencer<1> FStack_a30;
  undefined8 local_a28;
  undefined8 local_a20;
  TSharedRef<SDockTab,1> local_a18;
  SDockTab *local_a08;
  TReferenceControllerBase<1> *local_a00;
  undefined1 local_9f8 [4];
  FName local_9f4;
  FMemScope local_9e8;
  TRawPtrProxy<FTabManager::FStack> local_9e0;
  FName local_9d8;
  T1RequiredArgs<TSharedRef<FTabManager::FStack,1>_&&> local_9d0;
  FMemScope local_9c8;
  FName local_9c0;
  FMemScope local_9b8;
  undefined8 local_9b0;
  FSharedReferencer<1> local_9a8;
  TSharedPtr<FTabManager,1> local_9a0;
  TSharedRef<FTabManager,1> local_988;
  TSharedRef<SWindow,1> local_978;
  TSharedPtr<SWindow,1> local_968;
  TSlateDecl<SDockingTabStack,RequiredArgs::T1RequiredArgs<TSharedRef<FTabManager::FStack,1>_&&>_>
  local_958;
  T2RequiredArgs<TSharedRef<FTabManager,1>_&&,TSharedRef<FTabManager::FArea,1>_&&> local_940;
  TSharedRef<FTabManager::FStack,1> local_930;
  undefined4 local_918;
  undefined4 uStack_914;
  undefined4 uStack_910;
  undefined4 uStack_90c;
  TAttribute<FText> local_908;
  TSharedRef<SWidget,1> local_8d8;
  SWindow *local_8c8;
  TReferenceControllerBase<1> *pTStack_8c0;
  SDockingNode *local_8b8;
  TReferenceControllerBase<1> *pTStack_8b0;
  TSharedRef<FTabManager::FArea,1> local_8a8;
  TSharedRef<SDockingTabStack,1> local_898;
  TSharedRef<SWindow,1> local_888;
  TSharedRef<SWidget,1> local_878;
  TSharedRef<SWindow,1> local_868;
  undefined1 local_858 [16];
  TSharedRef<SWidget,1> local_848;
  undefined1 local_838 [8];
  FStack *local_830;
  TSharedRef<SWindow,1> local_828;
  undefined1 local_818 [8];
  TSharedRef<SWindow,1> local_810;
  undefined1 local_7f8 [16];
  TSharedRef<SWidget,1> local_7e8;
  undefined1 local_7d8 [8];
  TReferenceControllerBase<1> *local_7d0;
  TSharedRef<SWidget,1> local_7c8;
  TSlateDecl<SWindow,RequiredArgs::T0RequiredArgs> local_7b8;
  TSlateDecl<SDockingArea,RequiredArgs::T2RequiredArgs<TSharedRef<FTabManager,1>_&&,TSharedRef<FTabManager::FArea,1>_&&>_>
  local_7a0;
  TSharedRef<SWindow,1> local_788;
  FArguments local_778;
  FArguments local_558;
  FArguments local_358;
  
  if (((this->DisplayedTab).Object == (SDockTab *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  SDockTab::GetTabManagerPtr((this->DisplayedTab).Object,&local_a48);
  if ((FGlobalTabmanager *)local_a48.Object == (FGlobalTabmanager *)0x0) goto LAB_14276f68e;
  if (((this->DisplayedTab).Object == (SDockTab *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  SDockTab::RemoveTabFromParent_Internal((this->DisplayedTab).Object);
  if (((FGlobalTabmanager *)local_a48.Object == (FGlobalTabmanager *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FTabManager::FPrivateApi::GetParentWindow(((local_a48.Object)->PrivateApi).Object,&local_968);
  pFVar10 = SWindow::FArguments::FArguments(&local_358);
  pTVar11 = FGlobalTabmanager::Get();
  pFVar1 = pTVar11->Object;
  local_908.Value.TextData.Reference = (pFVar1->AppTitle).TextData.Reference;
  if (local_908.Value.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_908.Value.TextData.Reference + 8))
              (local_908.Value.TextData.Reference,local_9f8);
  }
  local_908.Value.Flags = (pFVar1->AppTitle).Flags;
  local_908.bIsSet = true;
  pFVar27 = (FStack *)0x0;
  local_908.Getter._16_8_ = 0;
  local_908.Getter._0_8_ = 0;
  local_908.Getter._8_8_ = 0;
  pFVar10 = SWindow::FArguments::Title(pFVar10,&local_908);
  local_a28 = 0;
  pFVar10->_AutoCenter = None;
  pFVar12 = SWidget::GetCachedGeometry((SWidget *)this);
  local_a68._4_4_ =
       (pFVar12->AccumulatedRenderTransform).M.M[0][1] * 0.0 +
       (pFVar12->AccumulatedRenderTransform).M.M[1][1] * 0.0 +
       (pFVar12->AccumulatedRenderTransform).Trans.field0_0x0._s_0.Y;
  local_a68._0_4_ =
       (pFVar12->AccumulatedRenderTransform).M.M[1][0] * 0.0 +
       (pFVar12->AccumulatedRenderTransform).M.M[0][0] * 0.0 +
       (pFVar12->AccumulatedRenderTransform).Trans.field0_0x0._s_0.X;
  pFVar10->_ScreenPosition = local_a68;
  if (((this->DisplayedTab).Object == (SDockTab *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pTVar13 = SDockTab::GetContent((this->DisplayedTab).Object,&local_8d8);
  SWidget::GetTickSpaceGeometry(pTVar13->Object);
  FVar14 = SWindow::ComputeWindowSizeForContent((FDeprecateVector2DParameter)local_818);
  pFVar10->_ClientSize = *(FDeprecateVector2DParameter *)FVar14;
  pFVar10->_CreateTitleBar = false;
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_9f4 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_9e8,&local_9f4,true);
  TSlateDecl<SWindow,RequiredArgs::T0RequiredArgs>::TSlateDecl<SWindow,RequiredArgs::T0RequiredArgs>
            (&local_7b8,"SWindow",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\STabPanelDrawer.cpp"
             ,0x19b,local_res8);
  FMemScope::~FMemScope(&local_9e8);
  FLLMScope::~FLLMScope(local_res10);
  TSlateDecl<SWindow,RequiredArgs::T0RequiredArgs>::operator<<=(&local_7b8,&local_a78,pFVar10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_7b8._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_8d8.SharedReferenceCount.ReferenceController);
  SWindow::FArguments::~FArguments(&local_358);
  FStack_a30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (((this->DisplayedTab).Object == (SDockTab *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  EVar8 = SDockTab::GetTabRole((this->DisplayedTab).Object);
  if (EVar8 == NomadTab) {
    pTVar11 = FGlobalTabmanager::Get();
    local_9a8.ReferenceController = (pTVar11->SharedReferenceCount).ReferenceController;
    local_a38 = pTVar11->Object;
    if (local_9a8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_9a8.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_9a8.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_9b0 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_a30,&local_9a8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_9a8.ReferenceController);
    if (((this->DisplayedTab).Object == (SDockTab *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    this_00 = (this->DisplayedTab).Object;
    pTVar11 = FGlobalTabmanager::Get();
    local_9a0.Object = (FTabManager *)pTVar11->Object;
    local_9a0.SharedReferenceCount.ReferenceController =
         (pTVar11->SharedReferenceCount).ReferenceController;
    if (local_9a0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_9a0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_9a0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SDockTab::SetTabManager(this_00,&local_9a0);
    FVar23.ReferenceController = local_9a0.SharedReferenceCount.ReferenceController;
  }
  else {
    if (local_a48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_a48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_a48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_a38 = (FGlobalTabmanager *)local_a48.Object;
    FStack_a30.ReferenceController = local_a48.SharedReferenceCount.ReferenceController;
    FVar23.ReferenceController = (TReferenceControllerBase<1> *)pFVar27;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar23.ReferenceController);
  pFVar15 = SDockingArea::FArguments::FArguments(&local_778);
  FVar23.ReferenceController = local_a78.SharedReferenceCount.ReferenceController;
  if (local_a78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_a78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_a78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (local_a78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_a78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_8c8 = (pFVar15->_ParentWindow).Object;
  pTStack_8c0 = (pFVar15->_ParentWindow).SharedReferenceCount.ReferenceController;
  (pFVar15->_ParentWindow).Object = local_a78.Object;
  (pFVar15->_ParentWindow).SharedReferenceCount.ReferenceController =
       local_a78.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_8c0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar23.ReferenceController);
  pFVar16 = SDockingTabStack::FArguments::FArguments(&local_558);
  pFVar17 = ::operator_new(0x50);
  local_9e0.Object = pFVar27;
  if (pFVar17 != (FStack *)0x0) {
    *(undefined8 *)&pFVar17->_padding_ = 0;
    pFVar17->_padding_ = 0;
    *(undefined4 *)&pFVar17->_padding_ = 0x3f800000;
    pFVar17->_padding_ = (longlong)&___7FStack_FTabManager__6B_;
    (pFVar17->Tabs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar17->Tabs).ArrayNum = 0;
    (pFVar17->Tabs).ArrayMax = 0;
    pFVar17->bHideTabWell = false;
    (pFVar17->ForegroundTabId).TabType.ComparisonIndex = 0;
    (pFVar17->ForegroundTabId).TabType.Number = 0;
    (pFVar17->ForegroundTabId).InstanceId = -1;
    (pFVar17->ForegroundTabId).Flags = SaveLayout;
    (pFVar17->ExtensionId).ComparisonIndex = 0;
    (pFVar17->ExtensionId).Number = 0;
    local_a20 = 0;
    local_9e0.Object = pFVar17;
  }
  TSharedRef<FTabManager::FStack,1>::TSharedRef<FTabManager::FStack,1><FTabManager::FStack>
            (&local_930,&local_9e0);
  local_9d0.Arg0 = &local_930;
  FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_9d8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_9c8,&local_9d8,true);
  TSlateDecl<SDockingTabStack,RequiredArgs::T1RequiredArgs<TSharedRef<FTabManager::FStack,1>_&&>_>::
  TSlateDecl<SDockingTabStack,RequiredArgs::T1RequiredArgs<TSharedRef<FTabManager::FStack,1>_&&>_>
            (&local_958,"SDockingTabStack",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\STabPanelDrawer.cpp"
             ,0x1b6,&local_9d0);
  FMemScope::~FMemScope(&local_9c8);
  FLLMScope::~FLLMScope(local_res18);
  FVar23.ReferenceController = local_958._Widget.SharedReferenceCount.ReferenceController;
  if (local_958._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_958._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_958._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  pTVar18 = TSlateDecl<SDockingTabStack,RequiredArgs::T1RequiredArgs<TSharedRef<FTabManager::FStack,1>_&&>_>
            ::operator<<=(&local_958,&local_898,pFVar16);
  pTVar2 = (pTVar18->SharedReferenceCount).ReferenceController;
  pSVar3 = pTVar18->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_8b8 = (pFVar15->_InitialContent).Object;
  pTStack_8b0 = (pFVar15->_InitialContent).SharedReferenceCount.ReferenceController;
  (pFVar15->_InitialContent).Object = (SDockingNode *)pSVar3;
  (pFVar15->_InitialContent).SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_8b0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  pTVar19 = FTabManager::NewPrimaryArea(&local_8a8);
  if ((local_a38 == (FGlobalTabmanager *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_988.Object = (FTabManager *)local_a38;
  local_988.SharedReferenceCount.ReferenceController = FStack_a30.ReferenceController;
  if (FStack_a30.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FStack_a30.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FStack_a30.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((local_a38 == (FGlobalTabmanager *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_940.Arg0 = &local_988;
  local_940.Arg1 = pTVar19;
  FLLMScope::FLLMScope(local_res20,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_9c0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_9b8,&local_9c0,true);
  TSlateDecl<SDockingArea,RequiredArgs::T2RequiredArgs<TSharedRef<FTabManager,1>_&&,TSharedRef<FTabManager::FArea,1>_&&>_>
  ::
  TSlateDecl<SDockingArea,RequiredArgs::T2RequiredArgs<TSharedRef<FTabManager,1>_&&,TSharedRef<FTabManager::FArea,1>_&&>_>
            (&local_7a0,"SDockingArea",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\STabPanelDrawer.cpp"
             ,0x1b2,&local_940);
  FMemScope::~FMemScope(&local_9b8);
  FLLMScope::~FLLMScope(local_res20);
  TSlateDecl<SDockingArea,RequiredArgs::T2RequiredArgs<TSharedRef<FTabManager,1>_&&,TSharedRef<FTabManager::FArea,1>_&&>_>
  ::operator<<=(&local_7a0,&local_a58,pFVar15);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_7a0._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_988.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_8a8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_898.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_958._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_930.SharedReferenceCount.ReferenceController);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_558);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_778._InitialContent.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_778._ParentWindow.SharedReferenceCount.ReferenceController);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_778);
  if (((this->DisplayedTab).Object == (SDockTab *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  EVar8 = SDockTab::GetTabRole((this->DisplayedTab).Object);
  if (EVar8 == MajorTab) {
LAB_14276f30d:
    pTVar11 = FGlobalTabmanager::Get();
    pFVar1 = pTVar11->Object;
    FVar24.ReferenceController = (pFVar1->RootWindowPtr).WeakReferenceCount.ReferenceController;
    pFVar17 = (FStack *)FVar24.ReferenceController;
    if ((FStack *)FVar24.ReferenceController == (FStack *)0x0) {
LAB_14276f345:
      pFVar20 = FSlateApplication::Get();
      uVar28 = SUB84(local_a78.Object,0);
      uVar29 = (undefined4)((ulonglong)local_a78.Object >> 0x20);
      uVar30 = SUB84(local_a78.SharedReferenceCount.ReferenceController,0);
      uVar31 = (undefined4)((ulonglong)local_a78.SharedReferenceCount.ReferenceController >> 0x20);
      pcVar5 = *(code **)(*(longlong *)pFVar20 + 0x10);
      if (local_a78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_a78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_a78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      puVar22 = (undefined8 *)(*pcVar5)(pFVar20,local_7d8,local_7f8);
      pSVar4 = (SWindow *)*puVar22;
      local_7e8.Object = (SWidget *)local_a58.Object;
      local_7e8.SharedReferenceCount.ReferenceController =
           local_a58.SharedReferenceCount.ReferenceController;
      if (local_a58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_a58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_a58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      SWindow::SetContent(pSVar4,&local_7e8);
      FVar25.ReferenceController = local_a78.SharedReferenceCount.ReferenceController;
      FVar24.ReferenceController = (TReferenceControllerBase<1> *)pFVar17;
      FVar26.ReferenceController = local_a58.SharedReferenceCount.ReferenceController;
    }
    else {
      aVar6 = *(atomic<int> *)&((FStack *)FVar24.ReferenceController)->_padding_;
      do {
        pFVar17 = pFVar27;
        if (aVar6 == (atomic<int>)0x0) goto LAB_14276f345;
        LOCK();
        aVar9 = *(atomic<int> *)&((FStack *)FVar24.ReferenceController)->_padding_;
        bVar7 = aVar6 == aVar9;
        if (bVar7) {
          *(atomic<int> *)&((FStack *)FVar24.ReferenceController)->_padding_ =
               (atomic<int>)((int)aVar6 + 1);
          aVar9 = aVar6;
        }
        UNLOCK();
        aVar6 = aVar9;
      } while (!bVar7);
      pSVar4 = (pFVar1->RootWindowPtr).Object;
      pFVar17 = (FStack *)FVar24.ReferenceController;
      if (pSVar4 == (SWindow *)0x0) goto LAB_14276f345;
      pFVar20 = FSlateApplication::Get();
      LOCK();
      *(atomic<int> *)&((FStack *)FVar24.ReferenceController)->_padding_ =
           (atomic<int>)
           ((int)*(atomic<int> *)&((FStack *)FVar24.ReferenceController)->_padding_ + 1);
      UNLOCK();
      local_978.Object = pSVar4;
      local_978.SharedReferenceCount.ReferenceController = FVar24.ReferenceController;
      if ((pSVar4 == (SWindow *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x25d,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar28 = SUB84(local_a78.Object,0);
      uVar29 = (undefined4)((ulonglong)local_a78.Object >> 0x20);
      uVar30 = SUB84(local_a78.SharedReferenceCount.ReferenceController,0);
      uVar31 = (undefined4)((ulonglong)local_a78.SharedReferenceCount.ReferenceController >> 0x20);
      if (local_a78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_a78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_a78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar21 = FSlateApplication::AddWindowAsNativeChild
                          (pFVar20,&local_810,&local_828,&local_978,true);
      pSVar4 = pTVar21->Object;
      local_7c8.Object = (SWidget *)local_a58.Object;
      local_7c8.SharedReferenceCount.ReferenceController =
           local_a58.SharedReferenceCount.ReferenceController;
      if (local_a58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_a58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_a58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      SWindow::SetContent(pSVar4,&local_7c8);
      local_7d0 = local_810.SharedReferenceCount.ReferenceController;
      FVar25.ReferenceController = local_a78.SharedReferenceCount.ReferenceController;
      FVar26.ReferenceController = local_a58.SharedReferenceCount.ReferenceController;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_7d0);
  }
  else {
    if (((this->DisplayedTab).Object == (SDockTab *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    EVar8 = SDockTab::GetTabRole((this->DisplayedTab).Object);
    if (EVar8 == NomadTab) goto LAB_14276f30d;
    pFVar20 = FSlateApplication::Get();
    if (local_968.Object == (SWindow *)0x0) {
      uVar28 = SUB84(local_a78.Object,0);
      uVar29 = (undefined4)((ulonglong)local_a78.Object >> 0x20);
      uVar30 = SUB84(local_a78.SharedReferenceCount.ReferenceController,0);
      uVar31 = (undefined4)((ulonglong)local_a78.SharedReferenceCount.ReferenceController >> 0x20);
      pcVar5 = *(code **)(*(longlong *)pFVar20 + 0x10);
      if (local_a78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_a78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_a78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      puVar22 = (undefined8 *)(*pcVar5)(pFVar20,local_838,local_858);
      pSVar4 = (SWindow *)*puVar22;
      local_848.Object = (SWidget *)local_a58.Object;
      local_848.SharedReferenceCount.ReferenceController =
           local_a58.SharedReferenceCount.ReferenceController;
      if (local_a58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_a58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_a58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      SWindow::SetContent(pSVar4,&local_848);
      FVar24.ReferenceController = (TReferenceControllerBase<1> *)local_830;
      FVar25.ReferenceController = local_a78.SharedReferenceCount.ReferenceController;
      FVar26.ReferenceController = local_a58.SharedReferenceCount.ReferenceController;
    }
    else {
      pTVar21 = TSharedPtr<SWindow,1>::ToSharedRef(&local_968,&local_788);
      uVar28 = SUB84(local_a78.Object,0);
      uVar29 = (undefined4)((ulonglong)local_a78.Object >> 0x20);
      uVar30 = SUB84(local_a78.SharedReferenceCount.ReferenceController,0);
      uVar31 = (undefined4)((ulonglong)local_a78.SharedReferenceCount.ReferenceController >> 0x20);
      if (local_a78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_a78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_a78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar21 = FSlateApplication::AddWindowAsNativeChild
                          (pFVar20,&local_868,&local_888,pTVar21,true);
      pSVar4 = pTVar21->Object;
      local_878.Object = (SWidget *)local_a58.Object;
      local_878.SharedReferenceCount.ReferenceController =
           local_a58.SharedReferenceCount.ReferenceController;
      if (local_a58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_a58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_a58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      SWindow::SetContent(pSVar4,&local_878);
      FVar24.ReferenceController = local_868.SharedReferenceCount.ReferenceController;
      FVar25.ReferenceController = local_a78.SharedReferenceCount.ReferenceController;
      FVar26.ReferenceController = local_a58.SharedReferenceCount.ReferenceController;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar24.ReferenceController);
  if ((local_958._Widget.Object == (SDockingTabStack *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (((this->DisplayedTab).Object == (SDockTab *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_a18.SharedReferenceCount.ReferenceController =
       (this->DisplayedTab).SharedReferenceCount.ReferenceController;
  local_a18.Object = (this->DisplayedTab).Object;
  if (local_a18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_a18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_a18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((local_a18.Object == (SDockTab *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  SDockingTabStack::OpenTab(local_958._Widget.Object,&local_a18,-1,false);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a18.SharedReferenceCount.ReferenceController);
  if (((FGlobalTabmanager *)local_a48.Object == (FGlobalTabmanager *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  *(undefined1 *)(**(longlong **)&(local_a48.Object)->PrivateApi + 0x159) = 1;
  if (((FGlobalTabmanager *)local_a48.Object == (FGlobalTabmanager *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  puVar22 = ((local_a48.Object)->PrivateApi).Object;
  if (FVar25.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar25.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar25.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_918 = uVar28;
  uStack_914 = uVar29;
  uStack_910 = uVar30;
  uStack_90c = uVar31;
  if (((this->DisplayedTab).Object == (SDockTab *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_a00 = (this->DisplayedTab).SharedReferenceCount.ReferenceController;
  local_a08 = (this->DisplayedTab).Object;
  if (local_a00 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_a00->SharedReferenceCount = (atomic<int>)((int)local_a00->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((local_a08 == (SDockTab *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  (**(code **)(*(longlong *)*puVar22 + 0x28))((longlong *)*puVar22,&local_a08,&local_918);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_a00);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)CONCAT44(uStack_90c,uStack_910));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar26.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_a30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar23.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar25.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_968.SharedReferenceCount.ReferenceController);
LAB_14276f68e:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a48.SharedReferenceCount.ReferenceController);
  return;
}

