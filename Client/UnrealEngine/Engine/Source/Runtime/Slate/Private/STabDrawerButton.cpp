// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 13

// ~STabDrawerButton @ 1427026d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall STabDrawerButton::~STabDrawerButton(STabDrawerButton *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnDrawerPinButtonToggled);
  pvVar1 = *(void **)&(this->OnDrawerPinButtonToggled).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDrawerPinButtonToggled);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnDrawerButtonPressed);
  pvVar1 = *(void **)&(this->OnDrawerButtonPressed).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDrawerButtonPressed);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnGetContextMenuContent);
  pvVar1 = *(void **)&(this->OnGetContextMenuContent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnGetContextMenuContent);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->PinButton).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MainButton).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OpenBorder).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ActiveIndicator).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Label).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Tab).SharedReferenceCount.ReferenceController);
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  return;
}

// operator() @ 142703c30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall `STabDrawerButton::Construct'::__l2::<lambda_1>::operator()(void *this)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  TSharedRef<SDockTab,1> *pTVar4;
  SDockTab *local_48;
  TReferenceControllerBase<1> *local_40;
  TSharedRef<SDockTab,1> local_38;
  FReadAccessScope local_28;
  
  lVar1 = *(longlong *)this;
  pTVar4 = TSharedPtr<SDockTab,1>::ToSharedRef((TSharedPtr<SDockTab,1> *)(lVar1 + 0x2a8),&local_38);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar1 + 800),&local_28);
  if ((*(int *)(lVar1 + 0x330) != 0) &&
     (plVar2 = *(longlong **)(lVar1 + 0x328), plVar2 != (longlong *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x68);
    local_48 = pTVar4->Object;
    local_40 = (pTVar4->SharedReferenceCount).ReferenceController;
    if (local_40 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_40->SharedReferenceCount = (atomic<int>)((int)local_40->SharedReferenceCount + 1);
      UNLOCK();
    }
    (*pcVar3)(plVar2,&local_48);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pTVar4->SharedReferenceCount).ReferenceController);
  return;
}

// Construct @ 14271bdc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
STabDrawerButton::Construct
          (STabDrawerButton *this,FArguments *param_1,TSharedRef<SDockTab,1> *param_2,
          ESidebarLocation param_3)

{
  byte *pbVar1;
  SWidget *pSVar2;
  longlong lVar3;
  longlong lVar4;
  TReferenceControllerBase<1> *pTVar5;
  SImage *pSVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 auVar11 [12];
  bool bVar12;
  bool bVar13;
  float fVar14;
  undefined8 uVar15;
  TVector2<double> TVar16;
  FSharedReferencer<1> FVar17;
  undefined8 uVar18;
  char cVar19;
  byte bVar20;
  bool bVar21;
  bool bVar22;
  ISlateStyle *pIVar23;
  FName *pFVar24;
  FDockTabStyle *pFVar25;
  undefined8 *puVar26;
  TSharedRef<SWidget,1> *pTVar27;
  ulong64 uVar28;
  FArguments *pFVar29;
  FArguments *pFVar30;
  longlong *plVar31;
  TSharedPtr<IToolTip,1> *pTVar32;
  TAttribute<TSharedPtr<IToolTip,1>_> *pTVar33;
  TAttribute<FText> *pTVar34;
  FArguments *pFVar35;
  FSlot *this_00;
  FSlot *pFVar36;
  FSizeParam *pFVar37;
  FSlotArguments *pFVar38;
  FArguments *pFVar39;
  TSharedRef<SImage,1> *pTVar40;
  FArguments *pFVar41;
  FText *pFVar42;
  ETextOverflowPolicy *pEVar43;
  STabDrawerTextBlock *pSVar44;
  STabDrawerTextBlock *pSVar45;
  undefined1 *puVar46;
  FArguments *pFVar47;
  FCheckBoxStyle *pFVar48;
  TSharedRef<SWidget_const_,1> *pTVar49;
  FName FVar50;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> *this_01;
  SCheckBox *pSVar51;
  SCheckBox *pSVar52;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> *this_02;
  TSharedRef<SVerticalBox,1> *pTVar53;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> *pTVar54;
  TSharedRef<SButton,1> *pTVar55;
  FSlotArguments *pFVar56;
  FArguments *pFVar57;
  FArguments *pFVar58;
  TAttribute<EVisibility> *pTVar59;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> *pTVar60;
  TSharedRef<SBorder,1> *pTVar61;
  FArguments *pFVar62;
  TAttribute<TOptional<UE::Math::TVector2<double>_>_> *pTVar63;
  TAttribute<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_> *pTVar64;
  TSlateDecl<SComplexGradient,RequiredArgs::T0RequiredArgs> *pTVar65;
  TSharedRef<SComplexGradient,1> *pTVar66;
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> *this_03;
  TSharedRef<SOverlay,1> *pTVar67;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> *this_04;
  TSharedRef<SBox,1> *pTVar68;
  FSlateColor *this_05;
  ulonglong uVar69;
  FSlotArgumentsMixin *this_06;
  EHorizontalAlignment EVar70;
  SDockTab *this_07;
  FSlotArguments *pFVar71;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar72 [16];
  undefined1 auStackY_2d28 [32];
  T0RequiredArgs local_2cf8 [2];
  undefined2 local_2cf6 [3];
  SWidget *local_2cf0;
  T0RequiredArgs local_2ce8;
  T0RequiredArgs local_2ce7;
  T0RequiredArgs local_2ce6;
  T0RequiredArgs local_2ce5;
  T0RequiredArgs local_2ce4;
  T0RequiredArgs local_2ce3;
  T0RequiredArgs local_2ce2;
  T0RequiredArgs local_2ce1;
  T0RequiredArgs local_2ce0 [8];
  FName local_2cd8;
  undefined4 uStack_2cd0;
  uint uStack_2ccc;
  FLLMScope local_2cc8;
  FLLMScope local_2cc4;
  undefined1 local_2cc0 [8];
  FDelegateAllocation local_2cb8;
  SDockTab *local_2ca8;
  SWidget *local_2ca0;
  TReferenceControllerBase<1> *pTStack_2c98;
  FName local_2c90;
  undefined1 local_2c88 [8];
  ForAnyElementType local_2c80;
  int local_2c78;
  undefined1 local_2c70 [8];
  ForAnyElementType local_2c68;
  int local_2c60;
  undefined1 local_2c58 [8];
  ForAnyElementType local_2c50;
  int local_2c48;
  SCheckBox *local_2c38;
  undefined8 uStack_2c30;
  FArguments *local_2c28;
  TSlateDecl<STabDrawerTextBlock,RequiredArgs::T0RequiredArgs> local_2c20;
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs> local_2c08;
  SImage *local_2bf0;
  FSharedReferencer<1> local_2be8;
  STabDrawerTextBlock *local_2be0;
  FSharedReferencer<1> local_2bd8;
  TSharedPtr<SDockTab,1> local_2bd0;
  TSharedRef<SWidget,1> local_2bb8;
  SDockTab *local_2ba8;
  FSharedReferencer<1> local_2ba0;
  float local_2b98;
  undefined1 local_2b94;
  undefined1 local_2b90 [8];
  void *pvStack_2b88;
  undefined8 local_2b80;
  float local_2b78;
  undefined1 local_2b74;
  undefined1 local_2b70 [8];
  void *pvStack_2b68;
  undefined8 local_2b60;
  undefined4 local_2b58;
  float fStack_2b54;
  undefined4 uStack_2b50;
  float fStack_2b4c;
  undefined1 local_2b48;
  undefined1 local_2b40 [8];
  void *pvStack_2b38;
  undefined8 local_2b30;
  IToolTip *local_2b28;
  FSharedReferencer<1> local_2b20;
  undefined1 local_2b18;
  undefined1 local_2b10 [24];
  undefined8 local_2af8;
  undefined8 uStack_2af0;
  undefined4 local_2ae8;
  undefined1 local_2ae4;
  undefined1 local_2ae0 [8];
  void *pvStack_2ad8;
  undefined8 local_2ad0;
  FMemScope local_2ac8;
  FSlot *local_2ac0;
  FName local_2ab8;
  FMemScope local_2ab0;
  FSlot *local_2aa8;
  FName local_2aa0;
  FMemScope local_2a98;
  FSlotArguments *local_2a90;
  FArguments *local_2a88;
  undefined4 local_2a80 [2];
  FSlotArguments *local_2a78;
  FArguments *local_2a70;
  TSingleWidgetChildrenWithBasicLayoutSlot<0> *local_2a68;
  TReferenceControllerBase<1> *local_2a60;
  TReferenceControllerBase<1> *local_2a58;
  FArguments *local_2a50;
  FName local_2a48;
  undefined4 local_2a40 [2];
  FSlot *local_2a38;
  FName local_2a30;
  undefined8 local_2a28;
  undefined8 uStack_2a20;
  undefined1 local_2a18;
  undefined1 local_2a10 [8];
  void *pvStack_2a08;
  undefined8 local_2a00;
  TAttribute<float> local_29f8;
  TAttribute<FText> local_29d8;
  undefined8 local_29a8;
  undefined8 uStack_29a0;
  undefined4 local_2998;
  undefined8 local_2994;
  undefined8 uStack_298c;
  undefined4 local_2984;
  undefined8 local_2980;
  undefined8 uStack_2978;
  undefined4 local_2970;
  TVector2<double>_u_0 local_2968;
  undefined1 local_2958;
  undefined1 local_2950;
  undefined1 local_2948 [8];
  void *pvStack_2940;
  undefined8 local_2938;
  TSharedRef<SWidget,1> local_2930;
  initializer_list<FLinearColor> local_2918;
  TSharedRef<SWidget,1> local_2908;
  TSharedRef<SWidget,1> local_28f8;
  TSharedRef<SWidget,1> local_28e8;
  TSharedRef<SWidget,1> local_28d8;
  TSharedRef<SWidget,1> local_28c8;
  TAttribute<FSlateBrush_const_*> local_28b8;
  FDestructionSentinel local_2890;
  FDestructionSentinel local_2878;
  FDestructionSentinel local_2860;
  FDestructionSentinel local_2848;
  FLinearColor_u_0 local_2830;
  undefined4 local_2820;
  undefined1 local_281c;
  undefined8 local_2818;
  undefined8 uStack_2810;
  undefined8 local_2808;
  FLinearColor_u_0 local_2800;
  undefined4 local_27f0;
  undefined1 local_27ec;
  undefined8 local_27e8;
  undefined8 uStack_27e0;
  undefined8 local_27d8;
  FDestructionSentinel local_27d0;
  FDelegateAllocation *local_27b8;
  FDestructionSentinel local_27b0;
  undefined1 *local_2798;
  FDestructionSentinel local_2790;
  undefined1 *local_2778;
  FDestructionSentinel local_2770;
  FDelegateAllocation *local_2758;
  FDestructionSentinel local_2750;
  longlong *local_2738;
  FDestructionSentinel local_2730;
  undefined1 *local_2718;
  TSharedRef<SOverlay,1> local_2710;
  TSharedRef<SComplexGradient,1> local_2700;
  TSharedRef<SBorder,1> local_26f0;
  TSharedRef<SButton,1> local_26e0;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_26d0;
  TSharedRef<SVerticalBox,1> local_26b8;
  TSharedRef<SImage,1> local_26a8;
  FText local_2698;
  TSharedRef<SImage,1> local_2688;
  FText local_2678;
  undefined1 local_2668 [8];
  TReferenceControllerBase<1> *local_2660;
  undefined1 local_2658 [8];
  TReferenceControllerBase<1> *local_2650;
  undefined1 local_2648 [8];
  TReferenceControllerBase<1> *local_2640;
  TSharedRef<SWidget,1> local_2638;
  STabDrawerTextBlock *local_2628;
  TReferenceControllerBase<1> *pTStack_2620;
  code *local_2618;
  longlong lStack_2610;
  TSharedRef<SWidget_const_,1> local_2608;
  TSharedRef<SWidget_const_,1> local_25f8;
  TSharedRef<SWidget,1> local_25e8;
  TSharedRef<SWidget_const_,1> local_25d8;
  TVector2<double>_u_0 local_25c8;
  code *local_25b8;
  TReferenceControllerBase<1> *pTStack_25b0;
  TSharedRef<SBox,1> local_25a8;
  undefined1 local_2598 [16];
  undefined1 local_2588 [32];
  undefined1 local_2568 [24];
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_2550;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_2538;
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> local_2520;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_2508;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_24f0;
  TAttribute<FText> local_24d8;
  FReadAccessScope local_24a8;
  TSlateDecl<SComplexGradient,RequiredArgs::T0RequiredArgs> local_2490;
  FReadAccessScope local_2478;
  FReadAccessScope local_2460;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_2448;
  undefined1 local_2430 [56];
  void *local_23f8;
  undefined8 *local_23d0 [2];
  TReferenceControllerBase<1> *local_23c0;
  undefined1 local_23b8 [24];
  undefined1 local_23a0 [24];
  undefined4 local_2388;
  undefined1 local_2384;
  undefined4 local_2380;
  undefined1 local_237c;
  FSlotArgumentsMixin local_2378;
  undefined1 local_22e8 [24];
  TAttribute<FText> local_22d0;
  TAttribute<FText> local_22a0;
  TAttribute<TSharedPtr<IToolTip,1>_> local_2270;
  TAttribute<TSharedPtr<IToolTip,1>_> local_2240;
  TAttribute<EVisibility> local_2210;
  TAttribute<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_> local_21f0;
  FSlotArguments local_21c0;
  FSlotArguments local_2160;
  TAttribute<TOptional<UE::Math::TVector2<double>_>_> local_2100;
  FSlotArguments local_20c8;
  undefined1 local_1fe0 [232];
  FArguments local_1ef8;
  FArguments local_1cf0;
  FArguments local_1ae8;
  FArguments local_1890;
  FArguments local_1628;
  FArguments local_1380;
  FArguments local_10d8;
  FArguments local_d98;
  FArguments local_9b8;
  FArguments local_5d8;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  undefined1 local_88 [16];
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  FLinearColor_u_0 local_68 [3];
  
  TVar16.field0_0x0 = FDockingConstants::MaxMinorTabSize.field0_0x0;
  local_68[0]._0_8_ = __security_cookie.value ^ (ulonglong)auStackY_2d28;
  bVar20 = 0;
  bVar22 = false;
  local_2ca8 = (SDockTab *)((ulonglong)local_2ca8 & 0xffffffff00000000);
  uVar8 = FDockingConstants::MaxMinorTabSize.field0_0x0._4_4_;
  uVar9 = FDockingConstants::MaxMinorTabSize.field0_0x0._8_4_;
  uVar10 = FDockingConstants::MaxMinorTabSize.field0_0x0._12_4_;
  local_2cf8[0] = (T0RequiredArgs)param_3;
  pIVar23 = FAppStyle::Get();
  pFVar24 = ::FName::FName(&local_2a48,"Docking.Tab");
  pFVar25 = (FDockTabStyle *)
            (**(code **)((longlong)*pIVar23 + 0xa0))(pIVar23,FDockTabStyle::TypeName,*pFVar24,0);
  if (pFVar25 == (FDockTabStyle *)0x0) {
    pFVar25 = FDockTabStyle::GetDefault();
  }
  this->DockTabStyle = pFVar25;
  this_07 = param_2->Object;
  local_2cc0 = (undefined1  [8])0x0;
  local_2cb8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_2cb8.DelegateSize = 0;
  local_2ca8 = this_07;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2cc0,
             (FWriteAccessScope *)&local_27d0);
  local_27b8 = &local_2cb8;
  puVar26 = UE::Core::Private::DelegateAllocate(0x38,&local_2cb8);
  FVar50 = local_2a48;
  if (puVar26 != (undefined8 *)0x0) {
    local_2ca0 = (SWidget *)OnTabRenamed;
    pTStack_2c98 = local_2bd0.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
    pTVar27 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_2638);
    FVar50 = (FName)(pTVar27->SharedReferenceCount).ReferenceController;
    pSVar2 = pTVar27->Object;
    if (FVar50 != (FName)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)FVar50 + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar50 + 8) + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)((longlong)FVar50 + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar50 + 8) + 1);
      UNLOCK();
    }
    *puVar26 = &
               ___7__TCommonDelegateInstanceState___A6AXV__TSharedRef_VSDockTab___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar28 = FDelegateHandle::GenerateNewID();
    puVar26[2] = uVar28;
    *puVar26 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSTabDrawerButton___00__A6AXV__TSharedRef_VSDockTab___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar26[3] = pSVar2;
    *(FName *)(puVar26 + 4) = FVar50;
    if (FVar50 != (FName)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)FVar50 + 0xc) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar50 + 0xc) + 1);
      UNLOCK();
    }
    bVar20 = 0xc0;
    bVar22 = true;
    puVar26[5] = local_2ca0;
    puVar26[6] = pTStack_2c98;
    this_07 = local_2ca8;
  }
  if (bVar22) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)FVar50);
  }
  if ((char)bVar20 < '\0') {
    bVar20 = bVar20 & 0x7f;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)FVar50);
  }
  if ((bVar20 & 0x40) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2638.SharedReferenceCount.ReferenceController);
  }
  bVar13 = false;
  bVar12 = false;
  bVar22 = false;
  if (local_27d0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_27d0.Accessor,&local_27d0);
  }
  SDockTab::SetOnTabRenamed
            (this_07,(TDelegate<void___cdecl(TSharedRef<SDockTab,1>),FDefaultDelegateUserPolicy> *)
                     local_2cc0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2cc0,
             (FWriteAccessScope *)&local_2848);
  if ((local_2cb8.DelegateSize != 0) &&
     (local_2cb8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_2cb8.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_2cb8,0,0,0x10);
    local_2cb8.DelegateSize = 0;
  }
  if (local_2848.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2848.Accessor,&local_2848);
  }
  if (local_2cb8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_2cb8.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2cc0);
  if (&param_1->_OnDrawerButtonPressed != &this->OnDrawerButtonPressed) {
    local_2c58 = (undefined1  [8])0x0;
    local_2c50.Data = (FScriptContainerElement *)0x0;
    local_2c48 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &param_1->_OnDrawerButtonPressed,&local_24a8);
    if ((*(int *)&(param_1->_OnDrawerButtonPressed).field_0x10 != 0) &&
       (plVar31 = *(longlong **)&(param_1->_OnDrawerButtonPressed).field_0x8,
       plVar31 != (longlong *)0x0)) {
      (**(code **)(*plVar31 + 0x50))(plVar31,local_2c58);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_24a8);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnDrawerButtonPressed,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2c58);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2c58,
               (FWriteAccessScope *)&local_2860);
    if ((local_2c48 != 0) && (local_2c50.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_2c50.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_2c50,0,0,0x10);
      local_2c48 = 0;
    }
    if (local_2860.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2860.Accessor,&local_2860);
    }
    if (local_2c50.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2c50.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_2c58);
  }
  if (&param_1->_OnDrawerPinButtonToggled != &this->OnDrawerPinButtonToggled) {
    local_2c70 = (undefined1  [8])0x0;
    local_2c68.Data = (FScriptContainerElement *)0x0;
    local_2c60 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &param_1->_OnDrawerPinButtonToggled,&local_2478);
    if ((*(int *)&(param_1->_OnDrawerPinButtonToggled).field_0x10 != 0) &&
       (plVar31 = *(longlong **)&(param_1->_OnDrawerPinButtonToggled).field_0x8,
       plVar31 != (longlong *)0x0)) {
      (**(code **)(*plVar31 + 0x50))(plVar31,local_2c70);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_2478);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnDrawerPinButtonToggled,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2c70);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2c70,
               (FWriteAccessScope *)&local_2890);
    if ((local_2c60 != 0) && (local_2c68.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_2c68.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_2c68,0,0,0x10);
      local_2c60 = 0;
    }
    if (local_2890.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2890.Accessor,&local_2890);
    }
    if (local_2c68.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2c68.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_2c70);
  }
  pFVar36 = (FSlot *)0x0;
  if (&param_1->_OnGetContextMenuContent != &this->OnGetContextMenuContent) {
    local_2c88 = (undefined1  [8])0x0;
    local_2c80.Data = (FScriptContainerElement *)0x0;
    local_2c78 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &param_1->_OnGetContextMenuContent,&local_2460);
    if ((*(int *)&(param_1->_OnGetContextMenuContent).field_0x10 != 0) &&
       (plVar31 = *(longlong **)&(param_1->_OnGetContextMenuContent).field_0x8,
       plVar31 != (longlong *)0x0)) {
      (**(code **)(*plVar31 + 0x50))(plVar31,local_2c88);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_2460);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnGetContextMenuContent,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2c88);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2c88,
               (FWriteAccessScope *)&local_2878);
    if ((local_2c78 != 0) && (local_2c80.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_2c80.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_2c80,0,0,0x10);
      local_2c78 = 0;
    }
    if (local_2878.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2878.Accessor,&local_2878);
    }
    if (local_2c80.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2c80.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_2c88);
  }
  local_2ba0.ReferenceController = (param_2->SharedReferenceCount).ReferenceController;
  local_2ba8 = param_2->Object;
  if (local_2ba0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_2ba0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_2ba0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->Tab != (TSharedPtr<SDockTab,1> *)&local_2ba8) {
    (this->Tab).Object = local_2ba8;
    local_2ba8 = (SDockTab *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Tab).SharedReferenceCount,&local_2ba0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2ba0.ReferenceController);
  uVar69 = (ulonglong)_tls_index;
  this->Location = (ESidebarLocation)local_2cf8[0];
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar69 * 8);
  if ((*(int *)(lVar3 + 0x9d4c) <
       `public:_void___cdecl_STabDrawerButton::Construct(STabDrawerButton::FArguments_const&___ptr64,TSharedRef<SDockTab,1>,ESidebarLocation)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_void___cdecl_STabDrawerButton::Construct(STabDrawerButton::FArguments_const&___ptr64,TSharedRef<SDockTab,1>,ESidebarLocation)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_void___cdecl_STabDrawerButton::Construct(STabDrawerButton::FArguments_const&___ptr64,TSharedRef<SDockTab,1>,ESidebarLocation)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    pIVar23 = FAppStyle::Get();
    pcVar7 = *(code **)((longlong)*pIVar23 + 0x40);
    pFVar24 = ::FName::FName(&local_2c90,"Docking.Tab.ActiveTabIndicatorColor");
    this_05 = (FSlateColor *)(*pcVar7)(pIVar23,local_22e8,*pFVar24,0);
    FSlateColor::GetSpecifiedColor
              (this_05,&`public:_void___cdecl_STabDrawerButton::Construct(STabDrawerButton::FArguments_const&___ptr64,TSharedRef<SDockTab,1>,ESidebarLocation)___ptr64'
                        ::__l2::ActiveBorderColor);
    _Init_thread_footer(&`public:_void___cdecl_STabDrawerButton::Construct(STabDrawerButton::FArguments_const&___ptr64,TSharedRef<SDockTab,1>,ESidebarLocation)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((*(int *)(lVar3 + 0x9d4c) <
       `public:_void___cdecl_STabDrawerButton::Construct(STabDrawerButton::FArguments_const&___ptr64,TSharedRef<SDockTab,1>,ESidebarLocation)___ptr64'
       ::__l2::_thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_void___cdecl_STabDrawerButton::Construct(STabDrawerButton::FArguments_const&___ptr64,TSharedRef<SDockTab,1>,ESidebarLocation)___ptr64'
                           ::__l2::_thread_safe_static_guard_1__),
     `public:_void___cdecl_STabDrawerButton::Construct(STabDrawerButton::FArguments_const&___ptr64,TSharedRef<SDockTab,1>,ESidebarLocation)___ptr64'
     ::__l2::_thread_safe_static_guard_1__ == -1)) {
    `public:_void___cdecl_STabDrawerButton::Construct(STabDrawerButton::FArguments_const&___ptr64,TSharedRef<SDockTab,1>,ESidebarLocation)___ptr64'
    ::__l2::ActiveBorderColorTransparent.field0_0x0._s_0.R =
         `public:_void___cdecl_STabDrawerButton::Construct(STabDrawerButton::FArguments_const&___ptr64,TSharedRef<SDockTab,1>,ESidebarLocation)___ptr64'
         ::__l2::ActiveBorderColor.field0_0x0._s_0.R;
    `public:_void___cdecl_STabDrawerButton::Construct(STabDrawerButton::FArguments_const&___ptr64,TSharedRef<SDockTab,1>,ESidebarLocation)___ptr64'
    ::__l2::ActiveBorderColorTransparent.field0_0x0._s_0.B =
         `public:_void___cdecl_STabDrawerButton::Construct(STabDrawerButton::FArguments_const&___ptr64,TSharedRef<SDockTab,1>,ESidebarLocation)___ptr64'
         ::__l2::ActiveBorderColor.field0_0x0._s_0.B;
    `public:_void___cdecl_STabDrawerButton::Construct(STabDrawerButton::FArguments_const&___ptr64,TSharedRef<SDockTab,1>,ESidebarLocation)___ptr64'
    ::__l2::ActiveBorderColorTransparent.field0_0x0._s_0.G =
         `public:_void___cdecl_STabDrawerButton::Construct(STabDrawerButton::FArguments_const&___ptr64,TSharedRef<SDockTab,1>,ESidebarLocation)___ptr64'
         ::__l2::ActiveBorderColor.field0_0x0._s_0.G;
    `public:_void___cdecl_STabDrawerButton::Construct(STabDrawerButton::FArguments_const&___ptr64,TSharedRef<SDockTab,1>,ESidebarLocation)___ptr64'
    ::__l2::ActiveBorderColorTransparent.field0_0x0._s_0.A = 0.0;
    _Init_thread_footer(&`public:_void___cdecl_STabDrawerButton::Construct(STabDrawerButton::FArguments_const&___ptr64,TSharedRef<SDockTab,1>,ESidebarLocation)___ptr64'
                         ::__l2::_thread_safe_static_guard_1__);
  }
  if ((*(int *)(lVar3 + 0x9d4c) <
       `public:_void___cdecl_STabDrawerButton::Construct(STabDrawerButton::FArguments_const&___ptr64,TSharedRef<SDockTab,1>,ESidebarLocation)___ptr64'
       ::__l2::_thread_safe_static_guard_2__) &&
     (_Init_thread_header(&`public:_void___cdecl_STabDrawerButton::Construct(STabDrawerButton::FArguments_const&___ptr64,TSharedRef<SDockTab,1>,ESidebarLocation)___ptr64'
                           ::__l2::_thread_safe_static_guard_2__),
     `public:_void___cdecl_STabDrawerButton::Construct(STabDrawerButton::FArguments_const&___ptr64,TSharedRef<SDockTab,1>,ESidebarLocation)___ptr64'
     ::__l2::_thread_safe_static_guard_2__ == -1)) {
    local_2918._First = (FLinearColor *)&local_98;
    local_88._4_4_ =
         `public:_void___cdecl_STabDrawerButton::Construct(STabDrawerButton::FArguments_const&___ptr64,TSharedRef<SDockTab,1>,ESidebarLocation)___ptr64'
         ::__l2::ActiveBorderColor.field0_0x0._s_0.G;
    local_88._0_4_ =
         `public:_void___cdecl_STabDrawerButton::Construct(STabDrawerButton::FArguments_const&___ptr64,TSharedRef<SDockTab,1>,ESidebarLocation)___ptr64'
         ::__l2::ActiveBorderColor.field0_0x0._s_0.R;
    local_88._8_4_ =
         `public:_void___cdecl_STabDrawerButton::Construct(STabDrawerButton::FArguments_const&___ptr64,TSharedRef<SDockTab,1>,ESidebarLocation)___ptr64'
         ::__l2::ActiveBorderColor.field0_0x0._s_0.B;
    local_88._12_4_ =
         `public:_void___cdecl_STabDrawerButton::Construct(STabDrawerButton::FArguments_const&___ptr64,TSharedRef<SDockTab,1>,ESidebarLocation)___ptr64'
         ::__l2::ActiveBorderColor.field0_0x0._s_0.A;
    local_2918._Last = (FLinearColor *)local_68;
    local_98 = `public:_void___cdecl_STabDrawerButton::Construct(STabDrawerButton::FArguments_const&___ptr64,TSharedRef<SDockTab,1>,ESidebarLocation)___ptr64'
               ::__l2::ActiveBorderColorTransparent.field0_0x0._s_0.R;
    local_94 = `public:_void___cdecl_STabDrawerButton::Construct(STabDrawerButton::FArguments_const&___ptr64,TSharedRef<SDockTab,1>,ESidebarLocation)___ptr64'
               ::__l2::ActiveBorderColorTransparent.field0_0x0._s_0.G;
    local_90 = `public:_void___cdecl_STabDrawerButton::Construct(STabDrawerButton::FArguments_const&___ptr64,TSharedRef<SDockTab,1>,ESidebarLocation)___ptr64'
               ::__l2::ActiveBorderColorTransparent.field0_0x0._s_0.B;
    local_8c = `public:_void___cdecl_STabDrawerButton::Construct(STabDrawerButton::FArguments_const&___ptr64,TSharedRef<SDockTab,1>,ESidebarLocation)___ptr64'
               ::__l2::ActiveBorderColorTransparent.field0_0x0._s_0.A;
    local_78 = `public:_void___cdecl_STabDrawerButton::Construct(STabDrawerButton::FArguments_const&___ptr64,TSharedRef<SDockTab,1>,ESidebarLocation)___ptr64'
               ::__l2::ActiveBorderColorTransparent.field0_0x0._s_0.R;
    local_74 = `public:_void___cdecl_STabDrawerButton::Construct(STabDrawerButton::FArguments_const&___ptr64,TSharedRef<SDockTab,1>,ESidebarLocation)___ptr64'
               ::__l2::ActiveBorderColorTransparent.field0_0x0._s_0.G;
    local_70 = `public:_void___cdecl_STabDrawerButton::Construct(STabDrawerButton::FArguments_const&___ptr64,TSharedRef<SDockTab,1>,ESidebarLocation)___ptr64'
               ::__l2::ActiveBorderColorTransparent.field0_0x0._s_0.B;
    local_6c = `public:_void___cdecl_STabDrawerButton::Construct(STabDrawerButton::FArguments_const&___ptr64,TSharedRef<SDockTab,1>,ESidebarLocation)___ptr64'
               ::__l2::ActiveBorderColorTransparent.field0_0x0._s_0.A;
    TArray<FLinearColor,TSizedDefaultAllocator<32>_>::
    TArray<FLinearColor,TSizedDefaultAllocator<32>_>
              (&`public:_void___cdecl_STabDrawerButton::Construct(STabDrawerButton::FArguments_const&___ptr64,TSharedRef<SDockTab,1>,ESidebarLocation)___ptr64'
                ::__l2::GradientStops,&local_2918);
    atexit(`STabDrawerButton::Construct'::__l2::_dynamic_atexit_destructor_for__GradientStops__);
    _Init_thread_footer(&`public:_void___cdecl_STabDrawerButton::Construct(STabDrawerButton::FArguments_const&___ptr64,TSharedRef<SDockTab,1>,ESidebarLocation)___ptr64'
                         ::__l2::_thread_safe_static_guard_2__);
  }
  local_2a68 = TPaddingSingleWidgetSlotMixin<TSingleWidgetChildrenWithBasicLayoutSlot<0>,0>::Padding
                         ((TPaddingSingleWidgetSlotMixin<TSingleWidgetChildrenWithBasicLayoutSlot<0>,0>
                           *)&this->_padding_,0.0,0.0,0.0,0.0);
  pFVar29 = SBox::FArguments::FArguments(&local_10d8);
  local_2b74 = 1;
  auVar11._4_8_ = extraout_XMM0_Qb;
  auVar11._0_4_ = uVar8;
  auVar72._0_8_ = auVar11._0_8_ << 0x20;
  auVar72._8_4_ = uVar9;
  auVar72._12_4_ = uVar10;
  local_2b60 = 0;
  local_2b78 = (float)auVar72._8_8_;
  local_2b70 = (undefined1  [8])0x0;
  pvStack_2b68 = (void *)0x0;
  (pFVar29->_WidthOverride).Value.Size = local_2b78;
  (pFVar29->_WidthOverride).bIsSet = true;
  local_2a70 = pFVar29;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar29->_WidthOverride).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2b70);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2b70);
  if (pvStack_2b68 != (void *)0x0) {
    FMemory::Free(pvStack_2b68);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2b70);
  local_2b94 = 1;
  local_2b98 = (float)TVar16.field0_0x0._0_8_;
  local_2b80 = 0;
  local_2b90 = (undefined1  [8])0x0;
  pvStack_2b88 = (void *)0x0;
  (pFVar29->_HeightOverride).Value.Size = local_2b98;
  (pFVar29->_HeightOverride).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar29->_HeightOverride).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2b90);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2b90);
  if (pvStack_2b88 != (void *)0x0) {
    FMemory::Free(pvStack_2b88);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2b90);
  *(undefined1 *)((longlong)&pFVar29->_padding_ + 2) = 1;
  local_2a50 = SOverlay::FArguments::FArguments(&local_1cf0);
  local_2a78 = SOverlay::Slot((FSlotArguments *)local_2430,0);
  pFVar30 = SButton::FArguments::FArguments(&local_5d8);
  plVar31 = (longlong *)
            (**(code **)(param_2->Object->_padding_ + 0x1b8))(param_2->Object,local_2648);
  lVar3 = *plVar31;
  if (lVar3 == 0) {
    pTVar33 = TAttribute<TSharedPtr<IToolTip,1>_>::TAttribute<TSharedPtr<IToolTip,1>_>(&local_2270);
  }
  else {
    pTVar32 = (TSharedPtr<IToolTip,1> *)
              (**(code **)(param_2->Object->_padding_ + 0x1b8))(param_2->Object,local_2658);
    pTVar33 = TAttribute<TSharedPtr<IToolTip,1>_>::TAttribute<TSharedPtr<IToolTip,1>_>
                        (&local_2240,pTVar32);
  }
  local_2b28 = (pTVar33->Value).Object;
  local_2b20.ReferenceController = (pTVar33->Value).SharedReferenceCount.ReferenceController;
  (pTVar33->Value).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (pTVar33->Value).Object = (IToolTip *)0x0;
  local_2b18 = pTVar33->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2b10,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&pTVar33->Getter);
  if ((IToolTip **)&pFVar30->_padding_ != &local_2b28) {
    pFVar30->_padding_ = (longlong)local_2b28;
    local_2b28 = (IToolTip *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar30->_padding_,&local_2b20);
  }
  *(undefined1 *)&pFVar30->_padding_ = local_2b18;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar30->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2b10);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2b10);
  if ((void *)local_2b10._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_2b10._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2b10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2b20.ReferenceController);
  plVar31 = (longlong *)
            (**(code **)(param_2->Object->_padding_ + 0x1b8))(param_2->Object,local_2668);
  lVar4 = *plVar31;
  if (lVar4 == 0) {
    pFVar42 = SDockTab::GetTabLabel(param_2->Object,&local_2678);
    pTVar34 = TAttribute<FText>::TAttribute<FText>(&local_22d0,pFVar42);
  }
  else {
    pTVar34 = TAttribute<FText>::TAttribute<FText>(&local_22a0);
  }
  FText::FText(&local_24d8.Value,&pTVar34->Value);
  local_24d8.bIsSet = pTVar34->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_24d8.Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&pTVar34->Getter);
  pFVar30 = TSlateBaseNamedArgs<SButton>::ToolTipText
                      ((TSlateBaseNamedArgs<SButton> *)pFVar30,&local_24d8);
  fStack_2b54 = (this->DockTabStyle->TabPadding).Top;
  fStack_2b4c = (this->DockTabStyle->TabPadding).Bottom;
  local_2b48 = 1;
  local_2b30 = 0;
  local_2b40 = (undefined1  [8])0x0;
  pvStack_2b38 = (void *)0x0;
  local_2b58 = 0;
  uStack_2b50 = 0;
  (pFVar30->_ContentPadding).Value.Left = 0.0;
  (pFVar30->_ContentPadding).Value.Top = fStack_2b54;
  (pFVar30->_ContentPadding).Value.Right = 0.0;
  (pFVar30->_ContentPadding).Value.Bottom = fStack_2b4c;
  (pFVar30->_ContentPadding).bIsSet = true;
  local_2a88 = pFVar30;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar30->_ContentPadding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2b40);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2b40);
  if (pvStack_2b38 != (void *)0x0) {
    FMemory::Free(pvStack_2b38);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2b40);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar30->_OnPressed,
             (FWriteAccessScope *)&local_27b0);
  local_2798 = &(pFVar30->_OnPressed).field_0x8;
  puVar26 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_2798);
  if (puVar26 != (undefined8 *)0x0) {
    *puVar26 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar28 = FDelegateHandle::GenerateNewID();
    puVar26[2] = uVar28;
    *puVar26 = &
               ___7__TBaseFunctorDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Construct_STabDrawerButton__QEAAXAEBUFArguments_4_V__TSharedRef_VSDockTab___00__W4ESidebarLocation___Z___V__6B_
    ;
    puVar26[3] = this;
  }
  if (local_27b0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_27b0.Accessor,&local_27b0);
  }
  uStack_2978 = _UNK_15090c6d8;
  local_2980 = ___xmm_3f8000003f800000000000003f800000;
  local_2ae4 = 1;
  local_2af8 = ___xmm_3f8000003f800000000000003f800000;
  uStack_2af0 = _UNK_15090c6d8;
  local_2970 = CONCAT22(local_2970._2_2_,2);
  uVar8 = local_2970;
  local_2ae8 = local_2970;
  local_2ad0 = 0;
  local_2ae0 = (undefined1  [8])0x0;
  pvStack_2ad8 = (void *)0x0;
  *(undefined8 *)&(pFVar30->_ForegroundColor).Value.SpecifiedColor.field0_0x0 =
       ___xmm_3f8000003f800000000000003f800000;
  *(undefined8 *)((longlong)&(pFVar30->_ForegroundColor).Value.SpecifiedColor.field0_0x0 + 8) =
       uStack_2978;
  local_2970._0_1_ = (undefined1)2;
  local_2970._1_1_ = (undefined1)(2 >> 8);
  (pFVar30->_ForegroundColor).Value.ColorUseRule = (undefined1)local_2970;
  (pFVar30->_ForegroundColor).Value.ColorTableId = local_2970._1_1_;
  *(undefined2 *)&(pFVar30->_ForegroundColor).Value.field_0x12 = local_2970._2_2_;
  (pFVar30->_ForegroundColor).bIsSet = true;
  local_2970 = uVar8;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar30->_ForegroundColor).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2ae0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2ae0);
  if (pvStack_2ad8 != (void *)0x0) {
    FMemory::Free(pvStack_2ad8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2ae0);
  pFVar35 = SVerticalBox::FArguments::FArguments(&local_1ef8);
  this_00 = ::operator_new(0x58);
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
    pFVar36 = SVerticalBox::FSlot::FSlot(this_00);
  }
  local_2a38 = pFVar36;
  SVerticalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_23d0,(FSlot *)&local_2a38);
  pFVar37 = (FSizeParam *)FAuto::FAuto((FAuto *)local_2598);
  TOptional<FSizeParam>::operator=(&local_2378._SizeParam,pFVar37);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2568);
  if ((void *)local_2568._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_2568._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2568);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2588);
  if ((void *)local_2588._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_2588._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2588);
  fVar14 = __real_40a00000;
  local_2380 = 2;
  local_237c = 1;
  local_2388 = 2;
  local_2384 = 1;
  pFVar38 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)local_23b8,0.0,__real_40a00000,0.0,__real_40a00000);
  pFVar39 = SImage::FArguments::FArguments(&local_1380);
  local_2998 = CONCAT22(local_2998._2_2_,2);
  local_2820 = local_2998;
  local_29a8 = ___xmm_3f8000003f800000000000003f800000;
  uStack_29a0 = _UNK_15090c6d8;
  local_281c = 1;
  local_2830._0_8_ = ___xmm_3f8000003f800000000000003f800000;
  local_2830._8_8_ = _UNK_15090c6d8;
  local_2808 = 0;
  local_2818 = 0;
  uStack_2810 = 0;
  pFVar39 = SImage::FArguments::ColorAndOpacity(pFVar39,(TAttribute<FSlateColor> *)&local_2830._s_0)
  ;
  local_28b8.Value = SDockTab::GetTabIcon(param_2->Object);
  local_28b8.bIsSet = true;
  local_28b8.Getter._16_8_ = 0;
  local_28b8.Getter._0_8_ = 0;
  local_28b8.Getter._8_8_ = 0;
  pFVar39 = SImage::FArguments::Image(pFVar39,&local_28b8);
  local_2958 = 1;
  local_2950 = 1;
  local_2968._s_0.X = ___xmm_40300000000000004030000000000000;
  local_2968._s_0.Y = _UNK_15094b758;
  local_2938 = 0;
  local_2948 = (undefined1  [8])0x0;
  pvStack_2940 = (void *)0x0;
  TAttribute<TOptional<UE::Math::TVector2<double>_>_>::operator=
            (&pFVar39->_DesiredSizeOverride,
             (TAttribute<TOptional<UE::Math::TVector2<double>_>_> *)&local_2968._s_0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2948);
  if (pvStack_2940 != (void *)0x0) {
    FMemory::Free(pvStack_2940);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2948);
  FLLMScope::FLLMScope(&local_2cc8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2a30 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2ac8,&local_2a30,true);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
            (&local_26d0,"SImage",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\STabSidebar.cpp"
             ,0xbf,local_2cf8);
  FMemScope::~FMemScope(&local_2ac8);
  FLLMScope::~FLLMScope(&local_2cc8);
  pTVar40 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_26d0,&local_2688,pFVar39);
  local_2bf0 = pTVar40->Object;
  local_2be8.ReferenceController = (pTVar40->SharedReferenceCount).ReferenceController;
  if (local_2be8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_2be8.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_2be8.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (local_2be8.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_2be8.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2a58 = local_2be8.ReferenceController;
  if ((SImage **)&pFVar38->field_0x8 != &local_2bf0) {
    *(SImage **)&pFVar38->field_0x8 = local_2bf0;
    local_2bf0 = (SImage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar38->field_0x10,&local_2be8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2be8.ReferenceController);
  pFVar35 = SVerticalBox::FArguments::operator+(pFVar35,pFVar38);
  pFVar36 = ::operator_new(0x58);
  local_2ac0 = (FSlot *)0x0;
  if (pFVar36 != (FSlot *)0x0) {
    *(undefined8 *)pFVar36 = 0;
    *(undefined8 *)&pFVar36->field_0x8 = 0;
    *(undefined8 *)&pFVar36->field_0x10 = 0;
    *(undefined8 *)&pFVar36->field_0x18 = 0;
    *(undefined8 *)&pFVar36->field_0x20 = 0;
    *(undefined8 *)&pFVar36->field_0x28 = 0;
    *(undefined8 *)&pFVar36->field_0x30 = 0;
    *(undefined8 *)&pFVar36->field_0x38 = 0;
    *(undefined8 *)&pFVar36->field_0x40 = 0;
    *(undefined8 *)&pFVar36->field_0x48 = 0;
    *(undefined8 *)&pFVar36->field_0x50 = 0;
    local_2ac0 = SVerticalBox::FSlot::FSlot(pFVar36);
  }
  SVerticalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_1fe0,(FSlot *)&local_2ac0);
  pFVar38 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)(local_1fe0 + 0x18),0.0,fVar14,0.0,fVar14);
  local_29f8.Value = 1.0;
  local_29f8.Getter._16_8_ = 0;
  local_29f8.bIsSet = true;
  local_29f8.Getter._0_8_ = 0;
  local_29f8.Getter._8_8_ = 0;
  pFVar38 = SVerticalBox::FSlot::FSlotArguments::FillHeight(pFVar38,&local_29f8);
  puVar46 = &pFVar38->field_0x48;
  if (local_2a80 != (undefined4 *)puVar46) {
    *(undefined4 *)puVar46 = 2;
    pFVar38->field_0x4c = 1;
  }
  pFVar71 = (FSlotArguments *)0x0;
  if (puVar46 != (undefined1 *)0x0) {
    pFVar71 = pFVar38;
  }
  pFVar41 = STabDrawerTextBlock::FArguments::FArguments(&local_1ae8);
  pFVar41->_TextStyle = &this->DockTabStyle->TabTextStyle;
  pFVar42 = SDockTab::GetTabLabel(param_2->Object,&local_2698);
  FText::FText(&local_29d8.Value,pFVar42);
  local_29d8.bIsSet = true;
  local_29d8.Getter._16_8_ = 0;
  local_29d8.Getter._0_8_ = 0;
  local_29d8.Getter._8_8_ = 0;
  FText::operator=(&(pFVar41->_Text).Value,&local_29d8.Value);
  (pFVar41->_Text).bIsSet = local_29d8.bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar41->_Text).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&local_29d8.Getter);
  TAttribute<FText>::~TAttribute<FText>(&local_29d8);
  local_2cf6[0] = 0x101;
  if ((TOptional<ETextOverflowPolicy> *)local_2cf6 != &pFVar41->_OverflowPolicy) {
    pEVar43 = TOptional<enum_ETextOverflowPolicy>::GetValue(local_2cf6);
    (pFVar41->_OverflowPolicy).TypedValue = *pEVar43;
    (pFVar41->_OverflowPolicy).bIsSet = true;
  }
  *(undefined1 *)((longlong)&pFVar41->_padding_ + 2) = 1;
  FLLMScope::FLLMScope(&local_2cc4,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2ab8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2ab0,&local_2ab8,true);
  TSlateDecl<STabDrawerTextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STabDrawerTextBlock,RequiredArgs::T0RequiredArgs>
            (&local_2c20,"STabDrawerTextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\STabSidebar.cpp"
             ,0xcb,&local_2ce8);
  FMemScope::~FMemScope(&local_2ab0);
  FLLMScope::~FLLMScope(&local_2cc4);
  if (local_2c20._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_2c20._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_2c20._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_2628 = (this->Label).Object;
  pTStack_2620 = (this->Label).SharedReferenceCount.ReferenceController;
  (this->Label).Object = local_2c20._Widget.Object;
  (this->Label).SharedReferenceCount.ReferenceController =
       local_2c20._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_2620);
  pSVar44 = TSharedPtr<STabDrawerTextBlock,1>::operator->(&local_2c20._Widget);
  SWidget::SWidgetConstruct((SWidget *)pSVar44,(FSlateBaseNamedArgs *)pFVar41);
  pSVar44 = local_2c20._Widget.Object;
  STabDrawerTextBlock::Construct(local_2c20._Widget.Object,pFVar41);
  pSVar45 = TSharedPtr<STabDrawerTextBlock,1>::operator->(&local_2c20._Widget);
  if ((pSVar45->field_0x30 & 0x10) == 0) {
    cVar19 = (**(code **)(*(longlong *)pSVar45 + 0x228))(pSVar45);
    bVar20 = 0;
    if (cVar19 == '\0') goto LAB_14271ce35;
  }
  bVar20 = 0x20;
LAB_14271ce35:
  pSVar45->field_0x30 = pSVar45->field_0x30 & 0xdf;
  pSVar45->field_0x30 = pSVar45->field_0x30 | bVar20;
  pSVar45 = TSharedPtr<STabDrawerTextBlock,1>::operator->(&local_2c20._Widget);
  pSVar45->field_0x31 = pSVar45->field_0x31 | 4;
  if ((local_2c20._Widget.Object == (STabDrawerTextBlock *)0x0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar21)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FVar17.ReferenceController = local_2c20._Widget.SharedReferenceCount.ReferenceController;
  local_2a60 = local_2c20._Widget.SharedReferenceCount.ReferenceController;
  local_2c20._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_2c20._Widget.Object = (STabDrawerTextBlock *)0x0;
  if ((pSVar44 == (STabDrawerTextBlock *)0x0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar21)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_2be0 = pSVar44;
  local_2bd8.ReferenceController = FVar17.ReferenceController;
  if (FVar17.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar17.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar17.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (FVar17.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar17.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((STabDrawerTextBlock **)&pFVar71->field_0x8 != &local_2be0) {
    *(STabDrawerTextBlock **)&pFVar71->field_0x8 = pSVar44;
    local_2be0 = (STabDrawerTextBlock *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar71->field_0x10,&local_2bd8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2bd8.ReferenceController);
  local_2c28 = SVerticalBox::FArguments::operator+(pFVar35,pFVar71);
  pFVar36 = ::operator_new(0x58);
  local_2aa8 = (FSlot *)0x0;
  if (pFVar36 != (FSlot *)0x0) {
    *(undefined8 *)pFVar36 = 0;
    *(undefined8 *)&pFVar36->field_0x8 = 0;
    *(undefined8 *)&pFVar36->field_0x10 = 0;
    *(undefined8 *)&pFVar36->field_0x18 = 0;
    *(undefined8 *)&pFVar36->field_0x20 = 0;
    *(undefined8 *)&pFVar36->field_0x28 = 0;
    *(undefined8 *)&pFVar36->field_0x30 = 0;
    *(undefined8 *)&pFVar36->field_0x38 = 0;
    *(undefined8 *)&pFVar36->field_0x40 = 0;
    *(undefined8 *)&pFVar36->field_0x48 = 0;
    *(undefined8 *)&pFVar36->field_0x50 = 0;
    local_2aa8 = SVerticalBox::FSlot::FSlot(pFVar36);
  }
  SVerticalBox::FSlot::FSlotArguments::FSlotArguments(&local_20c8,(FSlot *)&local_2aa8);
  pFVar38 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(&local_20c8);
  puVar46 = &pFVar38->field_0x48;
  if (local_2a40 != (undefined4 *)puVar46) {
    *(undefined4 *)puVar46 = 2;
    pFVar38->field_0x4c = 1;
  }
  this_06 = (FSlotArgumentsMixin *)&pFVar38->field_0x18;
  if (puVar46 == (undefined1 *)0x0) {
    this_06 = (FSlotArgumentsMixin *)&DAT_00000018;
  }
  local_2a90 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                         (this_06,0.0,fVar14,0.0,__real_40800000);
  pFVar47 = SCheckBox::FArguments::FArguments(&local_9b8);
  ::FName::FName(&local_2aa0,"ToggleButtonCheckbox");
  pIVar23 = FAppStyle::Get();
  pFVar48 = ISlateStyle::GetWidgetStyle<FCheckBoxStyle>
                      (pIVar23,local_2aa0,(char *)0x0,(FCheckBoxStyle *)0x0);
  pFVar47->_Style = pFVar48;
  uStack_2c30 = (TReferenceControllerBase<1> *)((ulonglong)uStack_2c30._4_4_ << 0x20);
  local_2c38 = (SCheckBox *)GetPinButtonVisibility;
  local_2618 = GetPinButtonVisibility;
  lStack_2610 = (longlong)uStack_2c30;
  TAttribute<EVisibility>::Bind<STabDrawerButton>
            ((TAttribute<EVisibility> *)&pFVar47->_padding_,this,(pmf_17a327a0 *)&local_2618);
  *(undefined1 *)&pFVar47->_padding_ = 1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar47->_padding_,
             (FWriteAccessScope *)&local_2750);
  local_2738 = &pFVar47->_padding_;
  puVar26 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_2738);
  FVar50 = local_2c90;
  if (puVar26 != (undefined8 *)0x0) {
    uStack_2ccc = local_2bd0.SharedReferenceCount.ReferenceController._4_4_;
    local_2cd8 = (FName)GetPinButtonToolTipText;
    uStack_2cd0 = 0;
    pTVar49 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_2608);
    FVar50 = (FName)(pTVar49->SharedReferenceCount).ReferenceController;
    local_2cf0 = pTVar49->Object;
    if (FVar50 != (FName)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)FVar50 + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar50 + 8) + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)((longlong)FVar50 + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar50 + 8) + 1);
      UNLOCK();
    }
    bVar13 = true;
    bVar12 = true;
    bVar22 = true;
    *puVar26 = &
               ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar28 = FDelegateHandle::GenerateNewID();
    puVar26[2] = uVar28;
    *puVar26 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSTabDrawerButton___00__A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar26[3] = local_2cf0;
    *(FName *)(puVar26 + 4) = FVar50;
    if (FVar50 != (FName)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)FVar50 + 0xc) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar50 + 0xc) + 1);
      UNLOCK();
    }
    *(FName *)(puVar26 + 5) = local_2cd8;
    puVar26[6] = CONCAT44(uStack_2ccc,uStack_2cd0);
  }
  if (bVar22) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)FVar50);
  }
  if (bVar12) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)FVar50);
  }
  if (bVar13) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2608.SharedReferenceCount.ReferenceController);
  }
  bVar13 = false;
  bVar12 = false;
  bVar22 = false;
  if (local_2750.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2750.Accessor,&local_2750);
  }
  (pFVar47->_IsChecked).bIsSet = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(pFVar47->_IsChecked).Getter
             ,(FWriteAccessScope *)&local_2790);
  local_2778 = &(pFVar47->_IsChecked).Getter.field_0x8;
  puVar26 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_2778);
  FVar50 = local_2c90;
  if (puVar26 != (undefined8 *)0x0) {
    uStack_2ccc = local_2bd0.SharedReferenceCount.ReferenceController._4_4_;
    local_2cd8 = (FName)IsPinButtonChecked;
    uStack_2cd0 = 0;
    pTVar49 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_25f8);
    FVar50 = (FName)(pTVar49->SharedReferenceCount).ReferenceController;
    local_2cf0 = pTVar49->Object;
    if (FVar50 != (FName)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)FVar50 + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar50 + 8) + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)((longlong)FVar50 + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar50 + 8) + 1);
      UNLOCK();
    }
    bVar13 = true;
    bVar12 = true;
    bVar22 = true;
    *puVar26 = &
               ___7__TCommonDelegateInstanceState___A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar28 = FDelegateHandle::GenerateNewID();
    puVar26[2] = uVar28;
    *puVar26 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSTabDrawerButton___00__A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar26[3] = local_2cf0;
    *(FName *)(puVar26 + 4) = FVar50;
    if (FVar50 != (FName)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)FVar50 + 0xc) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar50 + 0xc) + 1);
      UNLOCK();
    }
    *(FName *)(puVar26 + 5) = local_2cd8;
    puVar26[6] = CONCAT44(uStack_2ccc,uStack_2cd0);
  }
  if (bVar22) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)FVar50);
  }
  if (bVar12) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)FVar50);
  }
  if (bVar13) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_25f8.SharedReferenceCount.ReferenceController);
  }
  bVar13 = false;
  bVar12 = false;
  bVar22 = false;
  if (local_2790.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2790.Accessor,&local_2790);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &pFVar47->_OnCheckStateChanged,(FWriteAccessScope *)&local_2730);
  local_2718 = &(pFVar47->_OnCheckStateChanged).field_0x8;
  puVar26 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_2718);
  FVar50 = local_2c90;
  if (puVar26 != (undefined8 *)0x0) {
    uStack_2ccc = local_2bd0.SharedReferenceCount.ReferenceController._4_4_;
    local_2cd8 = (FName)OnPinButtonCheckStateChanged;
    uStack_2cd0 = 0;
    pTVar27 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_25e8);
    FVar50 = (FName)(pTVar27->SharedReferenceCount).ReferenceController;
    local_2cf0 = pTVar27->Object;
    if (FVar50 != (FName)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)FVar50 + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar50 + 8) + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)((longlong)FVar50 + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar50 + 8) + 1);
      UNLOCK();
    }
    bVar13 = true;
    bVar12 = true;
    bVar22 = true;
    *puVar26 = &
               ___7__TCommonDelegateInstanceState___A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar28 = FDelegateHandle::GenerateNewID();
    puVar26[2] = uVar28;
    *puVar26 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSTabDrawerButton___00__A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar26[3] = local_2cf0;
    *(FName *)(puVar26 + 4) = FVar50;
    if (FVar50 != (FName)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)FVar50 + 0xc) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar50 + 0xc) + 1);
      UNLOCK();
    }
    *(FName *)(puVar26 + 5) = local_2cd8;
    puVar26[6] = CONCAT44(uStack_2ccc,uStack_2cd0);
  }
  if (bVar22) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)FVar50);
  }
  if (bVar12) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)FVar50);
  }
  if (bVar13) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_25e8.SharedReferenceCount.ReferenceController);
  }
  bVar13 = false;
  bVar12 = false;
  bVar22 = false;
  if (local_2730.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2730.Accessor,&local_2730);
  }
  uVar15 = _UNK_15076ba38;
  local_2a18 = 1;
  local_2a00 = 0;
  local_2a28 = ___xmm_40000000400000004000000040000000;
  uStack_2a20 = _UNK_15076ba38;
  local_2a10 = (undefined1  [8])0x0;
  pvStack_2a08 = (void *)0x0;
  uVar8 = _UNK_15076ba34;
  (pFVar47->_Padding).Value.Left = (float)___xmm_40000000400000004000000040000000;
  uVar18 = _UNK_15076ba38;
  (pFVar47->_Padding).Value.Top = (float)uVar8;
  _UNK_15076ba38 = (undefined4)uVar15;
  _UNK_15076ba3c = SUB84(uVar15,4);
  uVar8 = _UNK_15076ba3c;
  (pFVar47->_Padding).Value.Right = (float)_UNK_15076ba38;
  _UNK_15076ba38 = uVar18;
  (pFVar47->_Padding).Value.Bottom = (float)uVar8;
  (pFVar47->_Padding).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar47->_Padding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2a10);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2a10);
  if (pvStack_2a08 != (void *)0x0) {
    FMemory::Free(pvStack_2a08);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2a10);
  pFVar47->_HAlign = HAlign_Center;
  pFVar39 = SImage::FArguments::FArguments(&local_1628);
  local_2984 = CONCAT22(local_2984._2_2_,2);
  local_27f0 = local_2984;
  local_2994 = ___xmm_3f8000003f800000000000003f800000;
  uStack_298c = _UNK_15090c6d8;
  local_27ec = 1;
  local_2800._0_8_ = ___xmm_3f8000003f800000000000003f800000;
  local_2800._8_8_ = _UNK_15090c6d8;
  local_27d8 = 0;
  local_27e8 = 0;
  uStack_27e0 = 0;
  FVar50 = (FName)SImage::FArguments::ColorAndOpacity
                            (pFVar39,(TAttribute<FSlateColor> *)&local_2800._s_0);
  *(bool *)((longlong)FVar50 + 0x200) = true;
  local_2cd8 = FVar50;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)FVar50 + 0x208),
             (FWriteAccessScope *)&local_2770);
  local_2758 = (FDelegateAllocation *)((longlong)FVar50 + 0x210);
  puVar26 = UE::Core::Private::DelegateAllocate(0x38,local_2758);
  FVar50 = local_2c90;
  if (puVar26 != (undefined8 *)0x0) {
    local_2c38 = (SCheckBox *)GetPinButtonImage;
    uStack_2c30 = (TReferenceControllerBase<1> *)
                  ((ulonglong)local_2bd0.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
    pTVar49 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_25d8);
    FVar50 = (FName)(pTVar49->SharedReferenceCount).ReferenceController;
    local_2cf0 = pTVar49->Object;
    if (FVar50 != (FName)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)FVar50 + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar50 + 8) + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)((longlong)FVar50 + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar50 + 8) + 1);
      UNLOCK();
    }
    bVar13 = true;
    bVar12 = true;
    bVar22 = true;
    *puVar26 = &
               ___7__TCommonDelegateInstanceState___A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar28 = FDelegateHandle::GenerateNewID();
    puVar26[2] = uVar28;
    *puVar26 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSTabDrawerButton___00__A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar26[3] = local_2cf0;
    *(FName *)(puVar26 + 4) = FVar50;
    if (FVar50 != (FName)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)FVar50 + 0xc) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar50 + 0xc) + 1);
      UNLOCK();
    }
    puVar26[5] = local_2c38;
    puVar26[6] = uStack_2c30;
  }
  if (bVar22) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)FVar50);
  }
  if (bVar12) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)FVar50);
  }
  if (bVar13) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_25d8.SharedReferenceCount.ReferenceController);
  }
  if (local_2770.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2770.Accessor,&local_2770);
  }
  this_01 = MakeTDecl<SImage,RequiredArgs::T0RequiredArgs>
                      (&local_24f0,"SImage",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\STabSidebar.cpp"
                       ,0xdf,&local_2ce7);
  pTVar40 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_01,&local_26a8,(FArguments *)local_2cd8);
  pTVar5 = (pTVar40->SharedReferenceCount).ReferenceController;
  pSVar6 = pTVar40->Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2ca0 = (pFVar47->_Content).Widget.Object;
  pTStack_2c98 = (pFVar47->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar47->_Content).Widget.Object = (SWidget *)pSVar6;
  (pFVar47->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_2c98);
  FLLMScope::FLLMScope
            ((FLLMScope *)&local_2ca8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true)
  ;
  local_2cd8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2a98,&local_2cd8,true);
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>
            (&local_2c08,"SCheckBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\STabSidebar.cpp"
             ,0xd6,&local_2ce6);
  FMemScope::~FMemScope(&local_2a98);
  FLLMScope::~FLLMScope((FLLMScope *)&local_2ca8);
  if (local_2c08._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_2c08._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_2c08._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_2c38 = (this->PinButton).Object;
  uStack_2c30 = (this->PinButton).SharedReferenceCount.ReferenceController;
  (this->PinButton).Object = local_2c08._Widget.Object;
  (this->PinButton).SharedReferenceCount.ReferenceController =
       local_2c08._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(uStack_2c30);
  pSVar51 = TSharedPtr<SCheckBox,1>::operator->(&local_2c08._Widget);
  SWidget::SWidgetConstruct((SWidget *)pSVar51,(FSlateBaseNamedArgs *)pFVar47);
  pSVar51 = local_2c08._Widget.Object;
  SCheckBox::Construct(local_2c08._Widget.Object,pFVar47);
  pSVar52 = TSharedPtr<SCheckBox,1>::operator->(&local_2c08._Widget);
  SWidget::CacheVolatility((SWidget *)pSVar52);
  pSVar52 = TSharedPtr<SCheckBox,1>::operator->(&local_2c08._Widget);
  pbVar1 = (byte *)((longlong)&pSVar52->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((local_2c08._Widget.Object == (SCheckBox *)0x0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar22)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FVar17.ReferenceController = local_2c08._Widget.SharedReferenceCount.ReferenceController;
  local_2cf0 = (SWidget *)local_2c08._Widget.SharedReferenceCount.ReferenceController;
  local_2c08._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_2c08._Widget.Object = (SCheckBox *)0x0;
  if ((pSVar51 == (SCheckBox *)0x0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar22)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_2930.Object = (SWidget *)pSVar51;
  local_2930.SharedReferenceCount.ReferenceController = FVar17.ReferenceController;
  if (FVar17.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar17.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar17.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar38 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)local_2a90,&local_2930);
  pFVar35 = SVerticalBox::FArguments::operator+(local_2c28,pFVar38);
  this_02 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                      (&local_2508,"SVerticalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\STabSidebar.cpp"
                       ,0xb8,&local_2ce5);
  pTVar53 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_02,&local_26b8,pFVar35);
  local_2bb8.Object = (SWidget *)pTVar53->Object;
  local_2c28 = (FArguments *)(pTVar53->SharedReferenceCount).ReferenceController;
  if (local_2c28 != (FArguments *)0x0) {
    LOCK();
    ((TReferenceControllerBase<1> *)local_2c28)->SharedReferenceCount =
         (atomic<int>)((int)((TReferenceControllerBase<1> *)local_2c28)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2bb8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)local_2c28;
  pFVar30 = SButton::FArguments::operator[](local_2a88,&local_2bb8);
  pTVar54 = MakeTDecl<SButton,RequiredArgs::T0RequiredArgs>
                      (&local_2538,"SButton",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\STabSidebar.cpp"
                       ,0xb0,&local_2ce4);
  pTVar54 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::Expose<SButton>
                      (pTVar54,&this->MainButton);
  pTVar55 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar54,&local_26e0,pFVar30);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SButton>(&local_28c8,pTVar55);
  pFVar56 = TSlotBase<SOverlay::FOverlaySlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)local_2a78,&local_28c8);
  pFVar57 = SOverlay::FArguments::operator+(local_2a50,pFVar56);
  pFVar56 = SOverlay::Slot(&local_2160,0);
  pFVar58 = SBorder::FArguments::FArguments(&local_d98);
  pTVar59 = TAttribute<EVisibility>::TAttribute<EVisibility><EVisibility>
                      (&local_2210,&EVisibility::HitTestInvisible);
  pFVar58 = TSlateBaseNamedArgs<SBorder>::Visibility
                      ((TSlateBaseNamedArgs<SBorder> *)pFVar58,pTVar59);
  pTVar60 = MakeTDecl<SBorder,RequiredArgs::T0RequiredArgs>
                      (&local_2550,"SBorder",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\STabSidebar.cpp"
                       ,0xe8,&local_2ce3);
  pTVar60 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::Expose<SBorder>
                      (pTVar60,&this->OpenBorder);
  pTVar61 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar60,&local_26f0,pFVar58);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBorder>(&local_2908,pTVar61);
  pFVar56 = TSlotBase<SOverlay::FOverlaySlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)pFVar56,&local_2908);
  pFVar57 = SOverlay::FArguments::operator+(pFVar57,pFVar56);
  pFVar56 = SOverlay::Slot(&local_21c0,0);
  EVar70 = HAlign_Right;
  if (this->Location == Left) {
    EVar70 = HAlign_Left;
  }
  pFVar56 = TAlignmentWidgetSlotMixin<SOverlay::FOverlaySlot>::FSlotArgumentsMixin::HAlign
                      ((FSlotArgumentsMixin *)&pFVar56->_padding_,EVar70);
  pFVar62 = SComplexGradient::FArguments::FArguments(&local_1890);
  local_25c8._s_0.X = ___xmm_3ff00000000000003ff0000000000000;
  local_25c8._s_0.Y = _UNK_150689688;
  pTVar63 = TAttribute<TOptional<UE::Math::TVector2<double>_>_>::
            TAttribute<TOptional<UE::Math::TVector2<double>_>_><UE::Math::TVector2<double>_>
                      (&local_2100,(TVector2<double> *)&local_25c8._s_0);
  pFVar62 = SComplexGradient::FArguments::DesiredSizeOverride(pFVar62,pTVar63);
  pTVar64 = TAttribute<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_>::
            TAttribute<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_><TArray<FLinearColor,TSizedDefaultAllocator<32>_>_>
                      (&local_21f0,
                       &`public:_void___cdecl_STabDrawerButton::Construct(STabDrawerButton::FArguments_const&___ptr64,TSharedRef<SDockTab,1>,ESidebarLocation)___ptr64'
                        ::__l2::GradientStops);
  pFVar62 = SComplexGradient::FArguments::GradientColors(pFVar62,pTVar64);
  local_2bb8.Object = (SWidget *)GetActiveTabIndicatorVisibility;
  local_2bb8.SharedReferenceCount.ReferenceController =
       local_2bb8.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
  pFVar62->_Orientation = Orient_Horizontal;
  local_25b8 = GetActiveTabIndicatorVisibility;
  pTStack_25b0 = local_2bb8.SharedReferenceCount.ReferenceController;
  pFVar62 = TSlateBaseNamedArgs<SComplexGradient>::Visibility<STabDrawerButton>
                      ((TSlateBaseNamedArgs<SComplexGradient> *)pFVar62,this,
                       (pmf_17a327a0 *)&local_25b8);
  pTVar65 = MakeTDecl<SComplexGradient,RequiredArgs::T0RequiredArgs>
                      (&local_2490,"SComplexGradient",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\STabSidebar.cpp"
                       ,0xee,&local_2ce2);
  pTVar65 = TSlateDecl<SComplexGradient,RequiredArgs::T0RequiredArgs>::Expose<SWidget>
                      (pTVar65,&this->ActiveIndicator);
  pTVar66 = TSlateDecl<SComplexGradient,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar65,&local_2700,pFVar62);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SComplexGradient>(&local_28f8,pTVar66);
  pFVar56 = TSlotBase<SOverlay::FOverlaySlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)pFVar56,&local_28f8);
  pFVar57 = SOverlay::FArguments::operator+(pFVar57,pFVar56);
  this_03 = MakeTDecl<SOverlay,RequiredArgs::T0RequiredArgs>
                      (&local_2520,"SOverlay",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\STabSidebar.cpp"
                       ,0xad,&local_2ce1);
  pTVar67 = TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_03,&local_2710,pFVar57);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SOverlay>(&local_28e8,pTVar67);
  pFVar29 = SBox::FArguments::operator[](local_2a70,&local_28e8);
  this_04 = MakeTDecl<SBox,RequiredArgs::T0RequiredArgs>
                      (&local_2448,"SBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\STabSidebar.cpp"
                       ,0xa8,local_2ce0);
  pTVar68 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=(this_04,&local_25a8,pFVar29);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBox>(&local_28d8,pTVar68);
  TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::operator[]
            ((TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *)
             local_2a68,&local_28d8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28d8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_25a8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2448._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28e8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2710.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2520._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28f8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2700.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2490._Widget.SharedReferenceCount.ReferenceController);
  SComplexGradient::FArguments::~FArguments(&local_1890);
  SOverlay::FOverlaySlot::FSlotArguments::~FSlotArguments(&local_21c0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2908.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_26f0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2550._Widget.SharedReferenceCount.ReferenceController);
  SBorder::FArguments::~FArguments(&local_d98);
  SOverlay::FOverlaySlot::FSlotArguments::~FSlotArguments(&local_2160);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28c8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_26e0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2538._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_2c28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_26b8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2508._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_2cf0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_2cf0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2c08._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_26a8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_24f0._Widget.SharedReferenceCount.ReferenceController);
  SImage::FArguments::~FArguments(&local_1628);
  SCheckBox::FArguments::~FArguments(&local_9b8);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_20c8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2a60);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2a60);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2c20._Widget.SharedReferenceCount.ReferenceController);
  FText::~FText(&local_2698);
  STabDrawerTextBlock::FArguments::~FArguments(&local_1ae8);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments((FSlotArguments *)local_1fe0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2a58);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2688.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_26d0._Widget.SharedReferenceCount.ReferenceController);
  SImage::FArguments::~FArguments(&local_1380);
  TResizingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_2378);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_23a0);
  if ((void *)local_23a0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_23a0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_23a0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_23c0);
  if (local_23d0[0] != (undefined8 *)0x0) {
    (**(code **)*local_23d0[0])(local_23d0[0],1);
  }
  DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_1ef8._Slots.AllocatorInstance.Data,local_1ef8._Slots.ArrayNum);
  if ((FSlotArguments *)local_1ef8._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_1ef8._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_1ef8);
  if (lVar4 == 0) {
    TAttribute<FText>::~TAttribute<FText>(&local_22d0);
    FText::~FText(&local_2678);
  }
  else {
    TAttribute<FText>::~TAttribute<FText>(&local_22a0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2660);
  if (lVar3 == 0) {
    TAttribute<TSharedPtr<IToolTip,1>_>::~TAttribute<TSharedPtr<IToolTip,1>_>(&local_2270);
  }
  else {
    TAttribute<TSharedPtr<IToolTip,1>_>::~TAttribute<TSharedPtr<IToolTip,1>_>(&local_2240);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2650);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2640);
  SButton::FArguments::~FArguments(&local_5d8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_2430 + 0x30));
  if (local_23f8 != (void *)0x0) {
    FMemory::Free(local_23f8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)(local_2430 + 0x30));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_2430._16_8_);
  if ((undefined8 *)local_2430._0_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_2430._0_8_)(local_2430._0_8_,1);
  }
  DestructItems<SOverlay::FOverlaySlot::FSlotArguments,int>
            ((FSlotArguments *)local_1cf0._Slots.AllocatorInstance.Data,local_1cf0._Slots.ArrayNum);
  if ((FSlotArguments *)local_1cf0._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_1cf0._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_1cf0);
  SBox::FArguments::~FArguments(&local_10d8);
  local_2bd0.Object = (SDockTab *)0x0;
  local_2bd0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  UpdateAppearance(this,&local_2bd0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// GetActiveTabIndicatorVisibility @ 142739b90

/* WARNING: Enum "Type": Some values do not have unique names */

EVisibility __thiscall STabDrawerButton::GetActiveTabIndicatorVisibility(STabDrawerButton *this)

{
  code *pcVar1;
  bool bVar2;
  TEnumAsByte<EVisibility::Private> TVar3;
  EVisibility EVar4;
  uchar *in_RDX;
  
  if ((this->Tab).Object == (SDockTab *)0x0) {
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
  bVar2 = SDockTab::IsActive((this->Tab).Object);
  EVar4 = EVisibility::Collapsed;
  if (bVar2) {
    EVar4 = EVisibility::HitTestInvisible;
  }
  *in_RDX = (uchar)EVar4.Value.Value;
  return (EVisibility)SUB81(in_RDX,0);
}

// GetForegroundColor @ 14273e6d0

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateColor * __thiscall
STabDrawerButton::GetForegroundColor(STabDrawerButton *this,FSlateColor *__return_storage_ptr__)

{
  FDockTabStyle *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  EStyleColor EVar4;
  undefined2 uVar5;
  bool bVar6;
  FSlateColor *pFVar7;
  
  if ((this->ActiveIndicator).Object == (SWidget *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FSlateColor *)(*pcVar2)();
      return pFVar7;
    }
  }
  if ((TEnumAsByte<EVisibility::Private>)
      *(uchar *)&((this->ActiveIndicator).Object)->VisibilityAttribute !=
      EVisibility::Collapsed.Value.Value) {
    pFVar1 = this->DockTabStyle;
    uVar3 = *(undefined8 *)
             ((longlong)&(pFVar1->ActiveForegroundColor).SpecifiedColor.field0_0x0 + 8);
    *(undefined8 *)&(__return_storage_ptr__->SpecifiedColor).field0_0x0 =
         *(undefined8 *)&(pFVar1->ActiveForegroundColor).SpecifiedColor.field0_0x0;
    *(undefined8 *)((longlong)&(__return_storage_ptr__->SpecifiedColor).field0_0x0 + 8) = uVar3;
    EVar4 = (pFVar1->ActiveForegroundColor).ColorTableId;
    uVar5 = *(undefined2 *)&(pFVar1->ActiveForegroundColor).field_0x12;
    __return_storage_ptr__->ColorUseRule = (pFVar1->ActiveForegroundColor).ColorUseRule;
    __return_storage_ptr__->ColorTableId = EVar4;
    *(undefined2 *)&__return_storage_ptr__->field_0x12 = uVar5;
    return __return_storage_ptr__;
  }
  if (*(char *)((longlong)&this->_padding_ + 3) != '\0') {
    pFVar1 = this->DockTabStyle;
    uVar3 = *(undefined8 *)
             ((longlong)&(pFVar1->HoveredForegroundColor).SpecifiedColor.field0_0x0 + 8);
    *(undefined8 *)&(__return_storage_ptr__->SpecifiedColor).field0_0x0 =
         *(undefined8 *)&(pFVar1->HoveredForegroundColor).SpecifiedColor.field0_0x0;
    *(undefined8 *)((longlong)&(__return_storage_ptr__->SpecifiedColor).field0_0x0 + 8) = uVar3;
    EVar4 = (pFVar1->HoveredForegroundColor).ColorTableId;
    uVar5 = *(undefined2 *)&(pFVar1->HoveredForegroundColor).field_0x12;
    __return_storage_ptr__->ColorUseRule = (pFVar1->HoveredForegroundColor).ColorUseRule;
    __return_storage_ptr__->ColorTableId = EVar4;
    *(undefined2 *)&__return_storage_ptr__->field_0x12 = uVar5;
    return __return_storage_ptr__;
  }
  *(undefined8 *)&(__return_storage_ptr__->SpecifiedColor).field0_0x0 = 0x3f800000;
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.B = 1.0;
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.A = 1.0;
  __return_storage_ptr__->ColorUseRule = UseColor_UseStyle;
  __return_storage_ptr__->ColorTableId = Black;
  return __return_storage_ptr__;
}

// GetPinButtonImage @ 142742e10

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateBrush * __thiscall STabDrawerButton::GetPinButtonImage(STabDrawerButton *this)

{
  code *pcVar1;
  bool bVar2;
  TSharedRef<SDockTab,1> *pTVar3;
  ISlateStyle *pIVar4;
  FName *pFVar5;
  FSlateBrush *pFVar6;
  char *pcVar7;
  FName local_res8;
  TSharedRef<SDockTab,1> local_18;
  
  pTVar3 = TSharedPtr<SDockTab,1>::ToSharedRef(&this->Tab,&local_18);
  bVar2 = IsTabPinned(pTVar3);
  if (bVar2) {
    pIVar4 = FAppStyle::Get();
    pcVar7 = "Icons.Pinned";
  }
  else {
    pIVar4 = FAppStyle::Get();
    pcVar7 = "Icons.Unpinned";
  }
  pcVar1 = *(code **)((longlong)*pIVar4 + 0x50);
  pFVar5 = ::FName::FName(&local_res8,pcVar7);
  pFVar6 = (FSlateBrush *)(*pcVar1)(pIVar4,*pFVar5,0,0);
  return pFVar6;
}

// GetPinButtonToolTipText @ 142742e90

/* WARNING: Enum "Type": Some values do not have unique names */

FText * __thiscall
STabDrawerButton::GetPinButtonToolTipText(STabDrawerButton *this,FText *__return_storage_ptr__)

{
  bool bVar1;
  TSharedRef<SDockTab,1> *pTVar2;
  TSharedRef<SDockTab,1> local_18;
  
  pTVar2 = TSharedPtr<SDockTab,1>::ToSharedRef(&this->Tab,&local_18);
  bVar1 = IsTabPinned(pTVar2);
  if (bVar1) {
    FText::AsLocalizable_Advanced_LocText
              (__return_storage_ptr__,L"TabSidebar",L"UnpinTabToolTip",L"Unpin Tab");
    return __return_storage_ptr__;
  }
  FText::AsLocalizable_Advanced_LocText
            (__return_storage_ptr__,L"TabSidebar",L"PinTabToolTip",L"Pin Tab");
  return __return_storage_ptr__;
}

// GetPinButtonVisibility @ 142742f00

/* WARNING: Enum "Type": Some values do not have unique names */

EVisibility __thiscall STabDrawerButton::GetPinButtonVisibility(STabDrawerButton *this)

{
  code *pcVar1;
  bool bVar2;
  TEnumAsByte<EVisibility::Private> TVar3;
  EVisibility EVar4;
  TSharedRef<SDockTab,1> *pTVar5;
  uchar *in_RDX;
  TSharedRef<SDockTab,1> local_18;
  
  pTVar5 = TSharedPtr<SDockTab,1>::ToSharedRef(&this->Tab,&local_18);
  bVar2 = IsTabPinned(pTVar5);
  if ((!bVar2) && (*(char *)((longlong)&this->_padding_ + 3) == '\0')) {
    if ((this->Tab).Object == (SDockTab *)0x0) {
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
    bVar2 = SDockTab::IsActive((this->Tab).Object);
    EVar4 = EVisibility::Hidden;
    if (!bVar2) goto LAB_142742f85;
  }
  EVar4.Value.Value = EVisibility::Visible.Value.Value;
LAB_142742f85:
  *in_RDX = (uchar)EVar4.Value.Value;
  return (EVisibility)SUB81(in_RDX,0);
}

// IsPinButtonChecked @ 14274d570

/* WARNING: Enum "Type": Some values do not have unique names */

ECheckBoxState __thiscall STabDrawerButton::IsPinButtonChecked(STabDrawerButton *this)

{
  bool bVar1;
  TSharedRef<SDockTab,1> *pTVar2;
  TSharedRef<SDockTab,1> local_18;
  
  pTVar2 = TSharedPtr<SDockTab,1>::ToSharedRef(&this->Tab,&local_18);
  bVar1 = IsTabPinned(pTVar2);
  return bVar1;
}

// OnMouseButtonDown @ 142766350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
STabDrawerButton::OnMouseButtonDown
          (STabDrawerButton *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FName FVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  FWidgetPath *pFVar6;
  FSlateApplication *this_00;
  FSlateApplication *pFVar7;
  FDeprecateVector2DParameter *pFVar8;
  TSharedRef<SWidget,1> *pTVar9;
  ForElementType<FArrangedWidget> FVar10;
  longlong *plVar11;
  undefined1 auStackY_538 [32];
  undefined1 local_4d8;
  undefined1 local_4d7;
  FPopupTransitionEffect local_4d4;
  TVector2<float>_u_0 local_4d0;
  FDeprecateVector2DParameter local_4c8;
  FReadAccessScope local_4c0;
  TSharedRef<SWidget,1> local_4a8;
  undefined1 local_498 [8];
  TSharedPtr<IMenu,1> local_490;
  FReadAccessScope local_480;
  FWidgetPath local_468;
  FWidgetPath local_308;
  FWidgetPath local_1a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_538;
  pTVar1 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
  plVar11 = (longlong *)0x0;
  FVar2 = (param_2->EffectingButton).KeyName;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (FVar2 == EKeys::RightMouseButton.KeyName) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnGetContextMenuContent,&local_4c0);
    if ((*(int *)&(this->OnGetContextMenuContent).field_0x10 != 0) &&
       (plVar3 = *(longlong **)&(this->OnGetContextMenuContent).field_0x8, plVar3 != (longlong *)0x0
       )) {
      cVar5 = (**(code **)(*plVar3 + 0x38))();
      if (cVar5 != '\0') {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_4c0);
        bVar4 = true;
        goto LAB_1427663ed;
      }
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_4c0);
  }
  bVar4 = false;
LAB_1427663ed:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (bVar4) {
    if ((FWidgetPath *)param_2->_padding_ == (FWidgetPath *)0x0) {
      pFVar6 = FWidgetPath::FWidgetPath(&local_1a8);
      FWidgetPath::FWidgetPath(&local_468,pFVar6);
      if (local_1a8.VirtualPointerPositions.AllocatorInstance.Data != (FScriptContainerElement *)0x0
         ) {
        FMemory::Free(local_1a8.VirtualPointerPositions.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1a8.TopLevelWindow.SharedReferenceCount.ReferenceController);
      FVar10 = (ForElementType<FArrangedWidget>)&local_1a8.Widgets.Array;
      if (local_1a8.Widgets.Array.AllocatorInstance.SecondaryData !=
          (ForElementType<FArrangedWidget>)0x0) {
        FVar10 = local_1a8.Widgets.Array.AllocatorInstance.SecondaryData;
      }
      DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar10,local_1a8.Widgets.Array.ArrayNum)
      ;
      local_308.Widgets.Array.AllocatorInstance.SecondaryData =
           local_1a8.Widgets.Array.AllocatorInstance.SecondaryData;
    }
    else {
      pFVar6 = FWidgetPath::FWidgetPath(&local_308,(FWidgetPath *)param_2->_padding_);
      FWidgetPath::FWidgetPath(&local_468,pFVar6);
      if (local_308.VirtualPointerPositions.AllocatorInstance.Data != (FScriptContainerElement *)0x0
         ) {
        FMemory::Free(local_308.VirtualPointerPositions.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_308.TopLevelWindow.SharedReferenceCount.ReferenceController);
      FVar10 = (ForElementType<FArrangedWidget>)&local_308.Widgets.Array;
      if (local_308.Widgets.Array.AllocatorInstance.SecondaryData !=
          (ForElementType<FArrangedWidget>)0x0) {
        FVar10 = local_308.Widgets.Array.AllocatorInstance.SecondaryData;
      }
      DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar10,local_308.Widgets.Array.ArrayNum)
      ;
    }
    if (local_308.Widgets.Array.AllocatorInstance.SecondaryData !=
        (ForElementType<FArrangedWidget>)0x0) {
      FMemory::Free((void *)local_308.Widgets.Array.AllocatorInstance.SecondaryData);
    }
    this_00 = FSlateApplication::Get();
    local_4d7 = 0;
    local_4d0 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    local_4d4.SlideDirection = ContextMenu;
    pFVar7 = FSlateApplication::Get();
    pFVar8 = (FDeprecateVector2DParameter *)
             (**(code **)(*(longlong *)pFVar7 + 0x68))(pFVar7,local_498);
    local_4c8 = *pFVar8;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnGetContextMenuContent,&local_480);
    if (*(int *)&(this->OnGetContextMenuContent).field_0x10 != 0) {
      plVar11 = *(longlong **)&(this->OnGetContextMenuContent).field_0x8;
    }
    (**(code **)(*plVar11 + 0x60))(plVar11,&local_4a8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_480);
    pTVar9 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->_padding_,
                        (TSharedRef<SWidget,1> *)&local_4c0);
    FSlateApplication::PushMenu
              (this_00,&local_490,pTVar9,&local_468,&local_4a8,&local_4c8,&local_4d4,true,
               (FDeprecateVector2DParameter *)&local_4d0._s_0,SUB82(&local_4d8,0),true,-1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_490.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_4c0.DestructionSentinel.Accessor);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_4a8.SharedReferenceCount.ReferenceController);
    FReply::FReply(__return_storage_ptr__,true);
    if (local_468.VirtualPointerPositions.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_468.VirtualPointerPositions.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_468.TopLevelWindow.SharedReferenceCount.ReferenceController);
    FVar10 = (ForElementType<FArrangedWidget>)&local_468.Widgets.Array;
    if (local_468.Widgets.Array.AllocatorInstance.SecondaryData !=
        (ForElementType<FArrangedWidget>)0x0) {
      FVar10 = local_468.Widgets.Array.AllocatorInstance.SecondaryData;
    }
    DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar10,local_468.Widgets.Array.ArrayNum);
    if (local_468.Widgets.Array.AllocatorInstance.SecondaryData !=
        (ForElementType<FArrangedWidget>)0x0) {
      FMemory::Free((void *)local_468.Widgets.Array.AllocatorInstance.SecondaryData);
    }
  }
  else {
    FReply::FReply(__return_storage_ptr__,false);
  }
  return __return_storage_ptr__;
}

// OnPinButtonCheckStateChanged @ 14276a270

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
STabDrawerButton::OnPinButtonCheckStateChanged(STabDrawerButton *this,ECheckBoxState param_1)

{
  longlong *plVar1;
  code *pcVar2;
  TSharedRef<SDockTab,1> *pTVar3;
  SDockTab *local_48;
  TReferenceControllerBase<1> *local_40;
  TSharedRef<SDockTab,1> local_38;
  FReadAccessScope local_28;
  
  pTVar3 = TSharedPtr<SDockTab,1>::ToSharedRef(&this->Tab,&local_38);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnDrawerPinButtonToggled,&local_28);
  if ((*(int *)&(this->OnDrawerPinButtonToggled).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->OnDrawerPinButtonToggled).field_0x8, plVar1 != (longlong *)0x0)
     ) {
    pcVar2 = *(code **)(*plVar1 + 0x68);
    local_48 = pTVar3->Object;
    local_40 = (pTVar3->SharedReferenceCount).ReferenceController;
    if (local_40 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_40->SharedReferenceCount = (atomic<int>)((int)local_40->SharedReferenceCount + 1);
      UNLOCK();
    }
    (*pcVar2)(plVar1,&local_48,param_1 == Checked);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pTVar3->SharedReferenceCount).ReferenceController);
  return;
}

// OnTabRenamed @ 14276bdf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
STabDrawerButton::OnTabRenamed(STabDrawerButton *this,TSharedRef<SDockTab,1> *param_1)

{
  SDockTab *pSVar1;
  STabDrawerTextBlock *pSVar2;
  SButton *pSVar3;
  code *pcVar4;
  bool bVar5;
  FText *pFVar6;
  undefined1 local_b8 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_a0;
  ForAnyElementType FStack_98;
  ulonglong local_90;
  IToolTip *local_88;
  TReferenceControllerBase<1> *local_80;
  undefined1 local_78 [24];
  undefined1 local_60 [8];
  void *pvStack_58;
  undefined8 local_50;
  FDestructionSentinel local_48;
  FText local_30;
  FText local_20;
  
  pSVar1 = (this->Tab).Object;
  if ((pSVar1 == (SDockTab *)0x0) || (pSVar1 != param_1->Object)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_388637335618584281>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\STabSidebar.cpp"
                       ,0x127,"ForTab == Tab");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    if ((this->Label).Object == (STabDrawerTextBlock *)0x0) {
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
    pSVar2 = (this->Label).Object;
    pFVar6 = SDockTab::GetTabLabel(param_1->Object,&local_30);
    FText::FText((FText *)local_78,pFVar6);
    local_78[0x10] = true;
    local_50 = 0;
    local_60 = (undefined1  [8])0x0;
    pvStack_58 = (void *)0x0;
    TAttribute<FText>::operator=(&pSVar2->Text,(TAttribute<FText> *)local_78);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_60);
    if (pvStack_58 != (void *)0x0) {
      FMemory::Free(pvStack_58);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_60);
    if ((ITextData *)local_78._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_78._0_8_ + 0x10))();
    }
    if (local_30.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_30.TextData.Reference + 0x10))();
    }
    (**(code **)(param_1->Object->_padding_ + 0x1b8))(param_1->Object,&local_88);
    pSVar3 = (this->MainButton).Object;
    if (local_88 == (IToolTip *)0x0) {
      if (pSVar3 == (SButton *)0x0) {
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
      pSVar3 = (this->MainButton).Object;
      pFVar6 = SDockTab::GetTabLabel(param_1->Object,&local_20);
      SWidget::SetToolTipText((SWidget *)pSVar3,pFVar6);
      if (local_20.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_20.TextData.Reference + 0x10))();
      }
    }
    else {
      if (pSVar3 == (SButton *)0x0) {
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
      pSVar3 = (this->MainButton).Object;
      local_b8._0_8_ = local_88;
      local_b8._8_8_ = local_80;
      if (local_80 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_80->SharedReferenceCount = (atomic<int>)((int)local_80->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_b8[0x10] = true;
      local_90 = 0;
      local_a0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_98.Data = (FScriptContainerElement *)0x0;
      SWidget::SetToolTip((SWidget *)pSVar3,(TAttribute<TSharedPtr<IToolTip,1>_> *)local_b8);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_a0,(FWriteAccessScope *)&local_48);
      if (((int)local_90 != 0) && (FStack_98.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_98.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_98,0,0,0x10);
        local_90 = local_90 & 0xffffffff00000000;
      }
      if (local_48.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
      }
      if (FStack_98.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_98.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_a0.AccessDetector);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_b8._8_8_);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_80);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// UpdateAppearance @ 142790ba0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
STabDrawerButton::UpdateAppearance(STabDrawerButton *this,TSharedPtr<SDockTab,1> *param_1)

{
  TSharedPtr<SBorder,1> *this_00;
  SButton *pSVar1;
  code *pcVar2;
  bool bVar3;
  ISlateStyle *pIVar4;
  FName *pFVar5;
  FButtonStyle *pFVar6;
  SBorder *pSVar7;
  bool bVar8;
  FName local_res8;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  undefined1 local_108 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_100;
  ForAnyElementType FStack_f8;
  ulonglong local_f0;
  TAttribute<EVisibility> local_e8;
  TAttribute<EVisibility> local_c8;
  TAttribute<FSlateBrush_const_*> local_a8;
  TAttribute<FSlateBrush_const_*> local_80;
  FDestructionSentinel local_58;
  
  if (this->Location == Left) {
    bVar8 = param_1->Object != (SDockTab *)0x0;
  }
  else {
    bVar8 = param_1->Object == (SDockTab *)0x0;
  }
  if ((this->Label).Object == (STabDrawerTextBlock *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Label",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\STabSidebar.cpp"
                       ,0x10a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((this->Label).Object == (STabDrawerTextBlock *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  local_108._0_4_ = ZEXT14(bVar8);
  local_f0 = 0;
  local_108[4] = true;
  local_100.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_f8.Data = (FScriptContainerElement *)0x0;
  TAttribute<enum_STabDrawerTextBlock::ERotation>::operator=
            (&((this->Label).Object)->Rotation,
             (TAttribute<STabDrawerTextBlock::ERotation> *)local_108);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_100,(FWriteAccessScope *)&local_58);
  if (((int)local_f0 != 0) && (FStack_f8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_f8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_f8,0,0,0x10);
    local_f0 = local_f0 & 0xffffffff00000000;
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  if (FStack_f8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_f8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_100.AccessDetector);
  this_00 = &this->OpenBorder;
  if (param_1->Object == (this->Tab).Object) {
    if (this_00->Object == (SBorder *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar8) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_e8.Value = (EVisibility)EVisibility::HitTestInvisible.Value.Value;
    local_e8.Getter._16_8_ = 0;
    local_e8.bIsSet = true;
    local_e8.Getter._0_8_ = 0;
    local_e8.Getter._8_8_ = 0;
    SCompoundWidget::SetVisibility((SCompoundWidget *)this_00->Object,&local_e8);
    if ((this->MainButton).Object == (SButton *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar8) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pSVar1 = (this->MainButton).Object;
    pIVar4 = FAppStyle::Get();
    pFVar5 = ::FName::FName(&local_res8,"Docking.SidebarButton.Opened");
    pFVar6 = (FButtonStyle *)
             (**(code **)((longlong)*pIVar4 + 0xa0))(pIVar4,FButtonStyle::TypeName,*pFVar5,0,1);
    if (pFVar6 == (FButtonStyle *)0x0) {
      pFVar6 = FButtonStyle::GetDefault();
    }
    SButton::SetButtonStyle(pSVar1,pFVar6);
    if (this->Location == Left) {
      pSVar7 = TSharedPtr<SBorder,1>::operator->(this_00);
      pIVar4 = FAppStyle::Get();
      pcVar2 = *(code **)((longlong)*pIVar4 + 0x50);
      pFVar5 = ::FName::FName(&local_res18,"Docking.Sidebar.Border_SquareRight");
      local_80.Value = (FSlateBrush *)(*pcVar2)(pIVar4,*pFVar5,0,0);
      local_80.bIsSet = true;
      local_80.Getter._16_8_ = 0;
      local_80.Getter._0_8_ = 0;
      local_80.Getter._8_8_ = 0;
      SBorder::SetBorderImage(pSVar7,&local_80);
    }
    else {
      if (this_00->Object == (SBorder *)0x0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar8) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      pSVar7 = this_00->Object;
      pIVar4 = FAppStyle::Get();
      pcVar2 = *(code **)((longlong)*pIVar4 + 0x50);
      pFVar5 = ::FName::FName(&local_res10,"Docking.Sidebar.Border_SquareLeft");
      local_a8.Value = (FSlateBrush *)(*pcVar2)(pIVar4,*pFVar5,0,0);
      local_a8.bIsSet = true;
      local_a8.Getter._16_8_ = 0;
      local_a8.Getter._0_8_ = 0;
      local_a8.Getter._8_8_ = 0;
      SBorder::SetBorderImage(pSVar7,&local_a8);
    }
  }
  else {
    if (this_00->Object == (SBorder *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar8) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_c8.Value = (EVisibility)EVisibility::Collapsed.Value.Value;
    local_c8.Getter._16_8_ = 0;
    local_c8.bIsSet = true;
    local_c8.Getter._0_8_ = 0;
    local_c8.Getter._8_8_ = 0;
    SCompoundWidget::SetVisibility((SCompoundWidget *)this_00->Object,&local_c8);
    if ((this->MainButton).Object == (SButton *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar8) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pSVar1 = (this->MainButton).Object;
    pIVar4 = FAppStyle::Get();
    pFVar5 = ::FName::FName(&local_res20,"Docking.SidebarButton.Closed");
    pFVar6 = (FButtonStyle *)
             (**(code **)((longlong)*pIVar4 + 0xa0))(pIVar4,FButtonStyle::TypeName,*pFVar5,0,1);
    if (pFVar6 == (FButtonStyle *)0x0) {
      pFVar6 = FButtonStyle::GetDefault();
    }
    SButton::SetButtonStyle(pSVar1,pFVar6);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

