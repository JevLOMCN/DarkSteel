// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 3

// Construct @ 142f7c2b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall STestMenu::Construct(STestMenu *this,FArguments *param_1)

{
  code *pcVar1;
  TReferenceControllerBase<1> *pTVar2;
  SWidget *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  FArguments *pFVar16;
  ISlateStyle *pIVar17;
  FName *pFVar18;
  FArguments *pFVar19;
  FSlotArguments *pFVar20;
  FArguments *pFVar21;
  FText *pFVar22;
  TSharedRef<SButton,1> *pTVar23;
  FMemScope FVar24;
  FSizeParam *pFVar25;
  FArguments *pFVar26;
  undefined8 *puVar27;
  TSharedRef<SWidget_const_,1> *pTVar28;
  ulong64 uVar29;
  TSharedRef<SWidget,1> *pTVar30;
  TSharedRef<SMenuAnchor,1> *pTVar31;
  TSharedRef<SVerticalBox,1> *pTVar32;
  TSharedRef<SBorder,1> *pTVar33;
  STestMenu *pSVar34;
  STestMenu *local_res8;
  undefined4 local_res18 [2];
  T0RequiredArgs local_res20 [8];
  FLLMScope local_2568 [2];
  SMenuAnchor *local_2560;
  TReferenceControllerBase<1> *local_2558;
  bool local_2550;
  T0RequiredArgs local_2548;
  T0RequiredArgs local_2547;
  T0RequiredArgs local_2546;
  T0RequiredArgs local_2545;
  T0RequiredArgs local_2544 [4];
  FMemScope local_2540;
  FName local_2538;
  TReferenceControllerBase<1> *pTStack_2530;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_2528;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_2510;
  undefined4 local_24f8;
  undefined1 local_24f4;
  undefined1 local_24f0 [8];
  ForAnyElementType FStack_24e8;
  ulonglong local_24e0;
  SButton *local_24d8;
  FSharedReferencer<1> local_24d0;
  SMenuAnchor *local_24c8;
  FSharedReferencer<1> local_24c0;
  SButton *local_24b8;
  FSharedReferencer<1> local_24b0;
  SButton *local_24a8;
  FSharedReferencer<1> local_24a0;
  TSharedRef<SWidget,1> local_2498;
  FSlateBrush *local_2488;
  undefined1 local_2480;
  undefined1 local_2478 [8];
  ForAnyElementType FStack_2470;
  ulonglong local_2468;
  FDestructionSentinel local_2460;
  undefined1 *local_2448;
  FText local_2440;
  bool local_2430;
  undefined1 local_2428 [8];
  ForAnyElementType FStack_2420;
  ulonglong local_2418;
  FText local_2410;
  undefined1 local_2400;
  undefined1 local_23f8 [8];
  ForAnyElementType FStack_23f0;
  ulonglong local_23e8;
  FText local_23e0;
  bool local_23d0;
  undefined1 local_23c8 [8];
  ForAnyElementType FStack_23c0;
  ulonglong local_23b8;
  FText local_23b0;
  undefined1 local_23a0;
  undefined1 local_2398 [8];
  ForAnyElementType FStack_2390;
  ulonglong local_2388;
  undefined8 local_2380;
  undefined8 uStack_2378;
  undefined1 local_2370;
  undefined1 local_2368 [8];
  ForAnyElementType FStack_2360;
  ulonglong local_2358;
  TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *local_2350;
  FText local_2348;
  TAttribute<FText> local_2338;
  TAttribute<FText> local_2308;
  TAttribute<FText> local_22d8;
  FText local_22a8;
  FText local_2298;
  FName local_2288;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_2280;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_2268;
  TSharedRef<SBorder,1> local_2250;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_2240;
  TSharedRef<SButton,1> local_2228;
  TSharedRef<SVerticalBox,1> local_2218;
  TSharedRef<SButton,1> local_2208;
  FText local_21f8;
  TSharedRef<SButton,1> local_21e8;
  FText local_21d8;
  TSharedRef<SMenuAnchor,1> local_21c8;
  TSharedRef<SButton,1> local_21b8;
  FText local_21a8;
  FText local_2198;
  undefined1 local_2188 [16];
  undefined1 local_2178 [32];
  undefined1 local_2158 [24];
  FArguments local_2140;
  FSlotArguments local_1f38;
  FSlotArguments local_1e50;
  FSlotArguments local_1d68;
  FSlotArguments local_1c80;
  FArguments local_1b98;
  FArguments local_1918;
  FArguments local_1538;
  FArguments local_ff8;
  FArguments local_ab8;
  FArguments local_578;
  
  local_578._TextShapingMethod.TypedValue = 0xd7;
  local_578._TextShapingMethod.bIsSet = true;
  local_578._TextFlowDirection.TypedValue = 0xf7;
  local_578._TextFlowDirection.bIsSet = true;
  local_578._1340_4_ = 1;
  local_2350 = (TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *)
               &this->_padding_;
  local_res18[0] = 0;
  bVar12 = false;
  bVar11 = false;
  bVar10 = false;
  local_res8 = this;
  pFVar16 = SBorder::FArguments::FArguments(&local_1918);
  local_2498.Object = (SWidget *)pFVar16;
  pIVar17 = FAppStyle::Get();
  pcVar1 = *(code **)((longlong)*pIVar17 + 0x50);
  pFVar18 = ::FName::FName(&local_2288,"Menu.Background");
  local_2488 = (FSlateBrush *)(*pcVar1)(pIVar17,*pFVar18,0,0);
  local_2480 = 1;
  local_2468 = 0;
  local_2478 = (undefined1  [8])0x0;
  FStack_2470.Data = (FScriptContainerElement *)0x0;
  (pFVar16->_BorderImage).Value = local_2488;
  (pFVar16->_BorderImage).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar16->_BorderImage).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2478);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2478,
             (FWriteAccessScope *)&local_2560);
  if (((int)local_2468 != 0) && (FStack_2470.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2470.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2470,0,0,0x10);
    local_2468 = local_2468 & 0xffffffff00000000;
  }
  if (local_2550 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_2558,(FDestructionSentinel *)&local_2560);
  }
  if (FStack_2470.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2470.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2478);
  uVar14 = _UNK_150925428;
  local_2370 = 1;
  local_2358 = 0;
  local_2380 = ___xmm_40a0000040a0000040a0000040a00000;
  uStack_2378 = _UNK_150925428;
  local_2368 = (undefined1  [8])0x0;
  FStack_2360.Data = (FScriptContainerElement *)0x0;
  uVar13 = _UNK_150925424;
  (pFVar16->_Padding).Value.Left = (float)___xmm_40a0000040a0000040a0000040a00000;
  uVar15 = _UNK_150925428;
  (pFVar16->_Padding).Value.Top = (float)uVar13;
  _UNK_150925428 = (undefined4)uVar14;
  _UNK_15092542c = SUB84(uVar14,4);
  uVar13 = _UNK_15092542c;
  (pFVar16->_Padding).Value.Right = (float)_UNK_150925428;
  _UNK_150925428 = uVar15;
  (pFVar16->_Padding).Value.Bottom = (float)uVar13;
  (pFVar16->_Padding).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar16->_Padding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2368);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2368,
             (FWriteAccessScope *)&local_2560);
  if (((int)local_2358 != 0) && (FStack_2360.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2360.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2360,0,0,0x10);
    local_2358 = local_2358 & 0xffffffff00000000;
  }
  if (local_2550 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_2558,(FDestructionSentinel *)&local_2560);
  }
  if (FStack_2360.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2360.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2368);
  pFVar19 = SVerticalBox::FArguments::FArguments(&local_2140);
  pFVar20 = SVerticalBox::Slot(&local_1c80);
  pFVar20 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar20);
  pFVar21 = SButton::FArguments::FArguments(&local_578);
  pFVar22 = FText::AsLocalizable_Advanced_LocText
                      (&local_2348,L"STableViewTesting",L"TestMenuButtonText00",L"Option 00");
  FText::FText(&local_2440,pFVar22);
  local_2430 = true;
  local_2418 = 0;
  local_2428 = (undefined1  [8])0x0;
  FStack_2420.Data = (FScriptContainerElement *)0x0;
  FText::operator=(&(pFVar21->_Text).Value,&local_2440);
  (pFVar21->_Text).bIsSet = local_2430;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar21->_Text).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2428);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2428,
             (FWriteAccessScope *)&local_2560);
  if (((int)local_2418 != 0) && (FStack_2420.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2420.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2420,0,0,0x10);
    local_2418 = local_2418 & 0xffffffff00000000;
  }
  if (local_2550 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_2558,(FDestructionSentinel *)&local_2560);
  }
  if (FStack_2420.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2420.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2428);
  if (local_2440.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_2440.TextData.Reference + 0x10))();
  }
  pFVar22 = FText::AsLocalizable_Advanced_LocText
                      (&local_2298,L"STableViewTesting",L"TestMenuButtonToolTip00",
                       L"The first option text.");
  FText::FText(&local_2410,pFVar22);
  local_2400 = 1;
  local_23e8 = 0;
  local_23f8 = (undefined1  [8])0x0;
  FStack_23f0.Data = (FScriptContainerElement *)0x0;
  FText::operator=((FText *)pFVar21,&local_2410);
  *(undefined1 *)&pFVar21->_padding_ = local_2400;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar21->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_23f8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_23f8,
             (FWriteAccessScope *)&local_2560);
  if (((int)local_23e8 != 0) && (FStack_23f0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_23f0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_23f0,0,0,0x10);
    local_23e8 = local_23e8 & 0xffffffff00000000;
  }
  if (local_2550 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_2558,(FDestructionSentinel *)&local_2560);
  }
  if (FStack_23f0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_23f0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_23f8);
  if (local_2410.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_2410.TextData.Reference + 0x10))();
  }
  FLLMScope::FLLMScope(local_2568,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2510._Widget.Object = (SVerticalBox *)LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope((FMemScope *)&local_2528,(FName *)&local_2510,true);
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>
            (&local_2240,"SButton",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\STableViewTesting.cpp"
             ,0x130,(T0RequiredArgs *)local_res18);
  FMemScope::~FMemScope((FMemScope *)&local_2528);
  FLLMScope::~FLLMScope(local_2568);
  pTVar23 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_2240,&local_2228,pFVar21);
  pTVar2 = (pTVar23->SharedReferenceCount).ReferenceController;
  local_24d8 = pTVar23->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_24d0.ReferenceController = pTVar2;
  if ((SButton **)&pFVar20->field_0x8 != &local_24d8) {
    *(SButton **)&pFVar20->field_0x8 = local_24d8;
    local_24d8 = (SButton *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar20->field_0x10,&local_24d0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_24d0.ReferenceController);
  local_2538 = (FName)SVerticalBox::FArguments::operator+(pFVar19,pFVar20);
  FVar24 = (FMemScope)SVerticalBox::Slot(&local_1d68);
  local_2540 = FVar24;
  pFVar25 = (FSizeParam *)FAuto::FAuto((FAuto *)local_2188);
  TOptional<FSizeParam>::operator=((TOptional<FSizeParam> *)((longlong)FVar24 + 0x58),pFVar25);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2158);
  if ((void *)local_2158._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_2158._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2158);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2178);
  if ((void *)local_2178._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_2178._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2178);
  pFVar26 = SMenuAnchor::FArguments::FArguments(&local_1b98);
  local_24f4 = 1;
  local_24f8 = 5;
  local_24e0 = 0;
  local_24f0 = (undefined1  [8])0x0;
  FStack_24e8.Data = (FScriptContainerElement *)0x0;
  (pFVar26->_Placement).Value = MenuPlacement_MenuRight;
  (pFVar26->_Placement).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar26->_Placement).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_24f0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_24f0,
             (FWriteAccessScope *)&local_2560);
  if (((int)local_24e0 != 0) && (FStack_24e8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_24e8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_24e8,0,0,0x10);
    local_24e0 = local_24e0 & 0xffffffff00000000;
  }
  if (local_2550 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_2558,(FDestructionSentinel *)&local_2560);
  }
  if (FStack_24e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_24e8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_24f0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar26->_OnGetMenuContent,
             (FWriteAccessScope *)&local_2460);
  local_2448 = &(pFVar26->_OnGetMenuContent).field_0x8;
  puVar27 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_2448);
  pSVar34 = local_res8;
  if (puVar27 != (undefined8 *)0x0) {
    local_2528._Widget.Object = (SBorder *)OnGetContent;
    local_2528._Widget.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)((ulonglong)(uint)local_2348._12_4_ << 0x20);
    pTVar28 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,
                         (TSharedRef<SWidget_const_,1> *)&local_2510);
    pSVar34 = (STestMenu *)(pTVar28->SharedReferenceCount).ReferenceController;
    pSVar3 = pTVar28->Object;
    if (pSVar34 != (STestMenu *)0x0) {
      LOCK();
      *(atomic<int> *)&pSVar34->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar34->_padding_ + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)&pSVar34->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar34->_padding_ + 1);
      UNLOCK();
    }
    *puVar27 = &
               ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSWidget___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar29 = FDelegateHandle::GenerateNewID();
    puVar27[2] = uVar29;
    *puVar27 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSTestMenu___00__A6A_AV__TSharedRef_VSWidget___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar27[3] = pSVar3;
    puVar27[4] = pSVar34;
    if (pSVar34 != (STestMenu *)0x0) {
      LOCK();
      ((atomic<int> *)&pSVar34->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&pSVar34->_padding_)[1] + 1);
      UNLOCK();
    }
    bVar12 = true;
    bVar11 = true;
    bVar10 = true;
    puVar27[5] = local_2528._Widget.Object;
    puVar27[6] = local_2528._Widget.SharedReferenceCount.ReferenceController;
  }
  if (bVar10) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar34);
  }
  if (bVar11) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar34);
  }
  if (bVar12) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)
               CONCAT44(local_2510._Widget.SharedReferenceCount.ReferenceController._4_4_,
                        local_2510._Widget.SharedReferenceCount.ReferenceController._0_4_));
  }
  bVar12 = false;
  bVar11 = false;
  bVar10 = false;
  if (local_2460.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2460.Accessor,&local_2460);
  }
  pFVar21 = SButton::FArguments::FArguments(&local_ab8);
  pFVar22 = FText::AsLocalizable_Advanced_LocText
                      (&local_2198,L"STableViewTesting",L"TestMenuButtonText01",L"Option 01 >");
  FText::FText(&local_23e0,pFVar22);
  local_23d0 = true;
  local_23b8 = 0;
  local_23c8 = (undefined1  [8])0x0;
  FStack_23c0.Data = (FScriptContainerElement *)0x0;
  FText::operator=(&(pFVar21->_Text).Value,&local_23e0);
  (pFVar21->_Text).bIsSet = local_23d0;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar21->_Text).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_23c8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_23c8,
             (FWriteAccessScope *)&local_2560);
  if (((int)local_23b8 != 0) && (FStack_23c0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_23c0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_23c0,0,0,0x10);
    local_23b8 = local_23b8 & 0xffffffff00000000;
  }
  if (local_2550 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_2558,(FDestructionSentinel *)&local_2560);
  }
  if (FStack_23c0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_23c0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_23c8);
  if (local_23e0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_23e0.TextData.Reference + 0x10))();
  }
  pFVar22 = FText::AsLocalizable_Advanced_LocText
                      (&local_21a8,L"STableViewTesting",L"TestMenuButtonToolTip01",
                       L"The first option text.");
  FText::FText(&local_23b0,pFVar22);
  local_23a0 = 1;
  local_2388 = 0;
  local_2398 = (undefined1  [8])0x0;
  FStack_2390.Data = (FScriptContainerElement *)0x0;
  FText::operator=((FText *)pFVar21,&local_23b0);
  *(undefined1 *)&pFVar21->_padding_ = local_23a0;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar21->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2398);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2398,
             (FWriteAccessScope *)&local_2560);
  if (((int)local_2388 != 0) && (FStack_2390.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2390.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2390,0,0,0x10);
    local_2388 = local_2388 & 0xffffffff00000000;
  }
  if (local_2550 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_2558,(FDestructionSentinel *)&local_2560);
  }
  if (FStack_2390.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2390.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2398);
  if (local_23b0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_23b0.TextData.Reference + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar21->_OnClicked,
             (FWriteAccessScope *)&local_2460);
  local_2448 = &(pFVar21->_OnClicked).field_0x8;
  puVar27 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_2448);
  pSVar34 = local_res8;
  if (puVar27 != (undefined8 *)0x0) {
    local_2510._Widget.SharedReferenceCount.ReferenceController._4_4_ = local_2348._12_4_;
    local_2510._Widget.Object = (SVerticalBox *)OpenSubmenu;
    local_2510._Widget.SharedReferenceCount.ReferenceController._0_4_ = 0;
    pTVar30 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&local_res8->_padding_,
                         (TSharedRef<SWidget,1> *)&local_2560);
    pSVar34 = (STestMenu *)(pTVar30->SharedReferenceCount).ReferenceController;
    local_2528._Widget.Object = (SBorder *)pTVar30->Object;
    if (pSVar34 != (STestMenu *)0x0) {
      LOCK();
      *(atomic<int> *)&pSVar34->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar34->_padding_ + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)&pSVar34->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar34->_padding_ + 1);
      UNLOCK();
    }
    bVar12 = true;
    bVar11 = true;
    bVar10 = true;
    *puVar27 = &
               ___7__TCommonDelegateInstanceState___A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar29 = FDelegateHandle::GenerateNewID();
    puVar27[2] = uVar29;
    *puVar27 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSTestMenu___00__A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar27[3] = local_2528._Widget.Object;
    puVar27[4] = pSVar34;
    if (pSVar34 != (STestMenu *)0x0) {
      LOCK();
      ((atomic<int> *)&pSVar34->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&pSVar34->_padding_)[1] + 1);
      UNLOCK();
    }
    *(SVerticalBox **)(puVar27 + 5) = local_2510._Widget.Object;
    puVar27[6] = CONCAT44(local_2510._Widget.SharedReferenceCount.ReferenceController._4_4_,
                          local_2510._Widget.SharedReferenceCount.ReferenceController._0_4_);
  }
  if (bVar10) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar34);
  }
  if (bVar11) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar34);
  }
  if (bVar12) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2558);
  }
  if (local_2460.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2460.Accessor,&local_2460);
  }
  FLLMScope::FLLMScope(local_2568,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2528._Widget.Object = (SBorder *)LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope((FMemScope *)&local_2510,(FName *)&local_2528,true);
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>
            ((TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> *)&local_2460,"SButton",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\STableViewTesting.cpp"
             ,0x13b,local_res20);
  FMemScope::~FMemScope((FMemScope *)&local_2510);
  FLLMScope::~FLLMScope(local_2568);
  pTVar23 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                      ((TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> *)&local_2460,&local_21b8,
                       pFVar21);
  pTVar4 = (pTVar23->SharedReferenceCount).ReferenceController;
  local_2528._Widget.Object = (SBorder *)pTVar23->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = (pFVar26->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar26->_Content).Widget.Object = (SWidget *)local_2528._Widget.Object;
  (pFVar26->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar4;
  local_2528._Widget.SharedReferenceCount.ReferenceController = pTVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  FLLMScope::FLLMScope(local_2568,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2528._Widget.Object = (SBorder *)LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope((FMemScope *)&local_2510,(FName *)&local_2528,true);
  TSlateDecl<SMenuAnchor,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SMenuAnchor,RequiredArgs::T0RequiredArgs>
            ((TSlateDecl<SMenuAnchor,RequiredArgs::T0RequiredArgs> *)&local_2560,"SMenuAnchor",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\STableViewTesting.cpp"
             ,0x137,&local_2548);
  FMemScope::~FMemScope((FMemScope *)&local_2510);
  FLLMScope::~FLLMScope(local_2568);
  if (local_2558 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_2558->SharedReferenceCount = (atomic<int>)((int)local_2558->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = (local_res8->PopupAnchor).SharedReferenceCount.ReferenceController;
  (local_res8->PopupAnchor).Object = local_2560;
  (local_res8->PopupAnchor).SharedReferenceCount.ReferenceController = local_2558;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  pTVar31 = TSlateDecl<SMenuAnchor,RequiredArgs::T0RequiredArgs>::operator<<=
                      ((TSlateDecl<SMenuAnchor,RequiredArgs::T0RequiredArgs> *)&local_2560,
                       &local_21c8,pFVar26);
  FVar24 = local_2540;
  pTVar5 = (pTVar31->SharedReferenceCount).ReferenceController;
  local_24c8 = pTVar31->Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_24c0.ReferenceController = pTVar5;
  if ((SMenuAnchor **)((longlong)local_2540 + 8) != &local_24c8) {
    *(SMenuAnchor **)((longlong)local_2540 + 8) = local_24c8;
    local_24c8 = (SMenuAnchor *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)local_2540 + 0x10),&local_24c0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_24c0.ReferenceController);
  pFVar19 = SVerticalBox::FArguments::operator+((FArguments *)local_2538,(FSlotArguments *)FVar24);
  pFVar20 = SVerticalBox::Slot(&local_1e50);
  pFVar20 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar20);
  pFVar21 = SButton::FArguments::FArguments(&local_ff8);
  pFVar22 = FText::AsLocalizable_Advanced_LocText
                      (&local_21d8,L"STableViewTesting",L"TestMenuButtonText02",L"Option 02");
  FText::FText(&local_2338.Value,pFVar22);
  local_2338.bIsSet = true;
  local_2338.Getter._16_8_ = 0;
  local_2338.Getter._0_8_ = 0;
  local_2338.Getter._8_8_ = 0;
  pFVar21 = SButton::FArguments::Text(pFVar21,&local_2338);
  FLLMScope::FLLMScope
            ((FLLMScope *)&local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true)
  ;
  local_2538 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2540,&local_2538,true);
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>
            (&local_2268,"SButton",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\STableViewTesting.cpp"
             ,0x144,&local_2547);
  FMemScope::~FMemScope(&local_2540);
  FLLMScope::~FLLMScope((FLLMScope *)&local_res8);
  pTVar23 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_2268,&local_21e8,pFVar21);
  pTVar6 = (pTVar23->SharedReferenceCount).ReferenceController;
  local_24b8 = pTVar23->Object;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_24b0.ReferenceController = pTVar6;
  if ((SButton **)&pFVar20->field_0x8 != &local_24b8) {
    *(SButton **)&pFVar20->field_0x8 = local_24b8;
    local_24b8 = (SButton *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar20->field_0x10,&local_24b0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_24b0.ReferenceController);
  local_2528._Widget.Object = (SBorder *)SVerticalBox::FArguments::operator+(pFVar19,pFVar20);
  pFVar20 = SVerticalBox::Slot(&local_1f38);
  pFVar20 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar20);
  pFVar21 = SButton::FArguments::FArguments(&local_1538);
  pFVar22 = FText::AsLocalizable_Advanced_LocText
                      (&local_22a8,L"STableViewTesting",L"TestMenuButtonText03",L"Option 03");
  FText::FText(&local_2308.Value,pFVar22);
  local_2308.bIsSet = true;
  local_2308.Getter._16_8_ = 0;
  local_2308.Getter._0_8_ = 0;
  local_2308.Getter._8_8_ = 0;
  pFVar21 = SButton::FArguments::Text(pFVar21,&local_2308);
  pFVar22 = FText::AsLocalizable_Advanced_LocText
                      (&local_21f8,L"STableViewTesting",L"TestMenuButtonToolTip03",
                       L"The fourth option text.");
  FText::FText(&local_22d8.Value,pFVar22);
  local_22d8.bIsSet = true;
  local_22d8.Getter._16_8_ = 0;
  local_22d8.Getter._0_8_ = 0;
  local_22d8.Getter._8_8_ = 0;
  pFVar21 = TSlateBaseNamedArgs<SButton>::ToolTipText
                      ((TSlateBaseNamedArgs<SButton> *)pFVar21,&local_22d8);
  FLLMScope::FLLMScope
            ((FLLMScope *)&local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true)
  ;
  local_2538 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2540,&local_2538,true);
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>
            (&local_2280,"SButton",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\STableViewTesting.cpp"
             ,0x14a,&local_2546);
  FMemScope::~FMemScope(&local_2540);
  FLLMScope::~FLLMScope((FLLMScope *)&local_res8);
  pTVar23 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_2280,&local_2208,pFVar21);
  local_24a8 = pTVar23->Object;
  pTVar7 = (pTVar23->SharedReferenceCount).ReferenceController;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_24a0.ReferenceController = pTVar7;
  if ((SButton **)&pFVar20->field_0x8 != &local_24a8) {
    *(SButton **)&pFVar20->field_0x8 = local_24a8;
    local_24a8 = (SButton *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar20->field_0x10,&local_24a0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_24a0.ReferenceController);
  pFVar19 = SVerticalBox::FArguments::operator+((FArguments *)local_2528._Widget.Object,pFVar20);
  FLLMScope::FLLMScope
            ((FLLMScope *)&local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true)
  ;
  local_2538 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2540,&local_2538,true);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
            (&local_2510,"SVerticalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\STableViewTesting.cpp"
             ,300,&local_2545);
  FMemScope::~FMemScope(&local_2540);
  FLLMScope::~FLLMScope((FLLMScope *)&local_res8);
  pTVar32 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_2510,&local_2218,pFVar19);
  pSVar3 = local_2498.Object;
  pTVar8 = (pTVar32->SharedReferenceCount).ReferenceController;
  local_2538 = (FName)pTVar32->Object;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar9 = (((TAlwaysValidWidget *)&(local_2498.Object)->Debug_DestroyedTag)->Widget).
           SharedReferenceCount.ReferenceController;
  (((TAlwaysValidWidget *)&(local_2498.Object)->Debug_DestroyedTag)->Widget).Object =
       (SWidget *)local_2538;
  (((TAlwaysValidWidget *)&(local_2498.Object)->Debug_DestroyedTag)->Widget).SharedReferenceCount.
  ReferenceController = pTVar8;
  pTStack_2530 = pTVar8;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  FLLMScope::FLLMScope
            ((FLLMScope *)&local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true)
  ;
  local_2498.Object = (SWidget *)LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope((FMemScope *)&local_2538,(FName *)&local_2498,true);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>
            (&local_2528,"SBorder",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\STableViewTesting.cpp"
             ,0x128,local_2544);
  FMemScope::~FMemScope((FMemScope *)&local_2538);
  FLLMScope::~FLLMScope((FLLMScope *)&local_res8);
  pTVar33 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_2528,&local_2250,(FArguments *)pSVar3);
  pTVar9 = (pTVar33->SharedReferenceCount).ReferenceController;
  local_2498.Object = (SWidget *)pTVar33->Object;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2498.SharedReferenceCount.ReferenceController = pTVar9;
  TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::operator[]
            (local_2350,&local_2498);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2250.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2528._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2218.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             CONCAT44(local_2510._Widget.SharedReferenceCount.ReferenceController._4_4_,
                      local_2510._Widget.SharedReferenceCount.ReferenceController._0_4_));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2208.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2280._Widget.SharedReferenceCount.ReferenceController);
  if (local_21f8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_21f8.TextData.Reference + 0x10))();
  }
  if (local_22a8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_22a8.TextData.Reference + 0x10))();
  }
  SButton::FArguments::~FArguments(&local_1538);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_1f38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_21e8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2268._Widget.SharedReferenceCount.ReferenceController);
  if (local_21d8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_21d8.TextData.Reference + 0x10))();
  }
  SButton::FArguments::~FArguments(&local_ff8);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_1e50);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_21c8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2558);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_21b8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_2460.Accessor);
  if (local_21a8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_21a8.TextData.Reference + 0x10))();
  }
  if (local_2198.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_2198.TextData.Reference + 0x10))();
  }
  SButton::FArguments::~FArguments(&local_ab8);
  SMenuAnchor::FArguments::~FArguments(&local_1b98);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_1d68);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2228.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2240._Widget.SharedReferenceCount.ReferenceController);
  if (local_2298.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_2298.TextData.Reference + 0x10))();
  }
  if (local_2348.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_2348.TextData.Reference + 0x10))();
  }
  SButton::FArguments::~FArguments(&local_578);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_1c80);
  DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_2140._Slots.AllocatorInstance.Data,local_2140._Slots.ArrayNum);
  if ((FSlotArguments *)local_2140._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_2140._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_2140);
  SBorder::FArguments::~FArguments(&local_1918);
  return;
}

// OnGetContent @ 142ff1060

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
STestMenu::OnGetContent(STestMenu *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  FArguments *pFVar2;
  TSharedRef<STestMenu,1> *pTVar3;
  T0RequiredArgs local_res10 [8];
  FLLMScope local_res18 [2];
  FName local_res20;
  FMemScope local_238;
  TSharedRef<STestMenu,1> local_230;
  TSlateDecl<STestMenu,RequiredArgs::T0RequiredArgs> local_220;
  FSlateBaseNamedArgs local_208;
  
  pFVar2 = FArguments::FArguments((FArguments *)&local_208);
  FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res20 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_238,&local_res20,true);
  TSlateDecl<STestMenu,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STestMenu,RequiredArgs::T0RequiredArgs>
            (&local_220,"STestMenu",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\STableViewTesting.cpp"
             ,0x15b,local_res10);
  FMemScope::~FMemScope(&local_238);
  FLLMScope::~FLLMScope(local_res18);
  pTVar3 = TSlateDecl<STestMenu,RequiredArgs::T0RequiredArgs>::operator<<=
                     (&local_220,&local_230,pFVar2);
  __return_storage_ptr__->Object = (SWidget *)pTVar3->Object;
  pTVar1 = (pTVar3->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_230.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_220._Widget.SharedReferenceCount.ReferenceController);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs(&local_208);
  return __return_storage_ptr__;
}

// OpenSubmenu @ 142ffabb0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall STestMenu::OpenSubmenu(STestMenu *this,FReply *__return_storage_ptr__)

{
  SMenuAnchor *pSVar1;
  code *pcVar2;
  bool bVar3;
  FReply *pFVar4;
  
  if ((this->PopupAnchor).Object == (SMenuAnchor *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FReply *)(*pcVar2)();
      return pFVar4;
    }
  }
  pSVar1 = (this->PopupAnchor).Object;
  pcVar2 = *(code **)(pSVar1->_padding_ + 0x250);
  if (pSVar1 == (SMenuAnchor *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FReply *)(*pcVar2)();
      return pFVar4;
    }
  }
  bVar3 = SMenuAnchor::IsOpen((this->PopupAnchor).Object);
  (*pcVar2)(pSVar1,!bVar3,1,0);
  FReply::FReply(__return_storage_ptr__,true);
  return __return_storage_ptr__;
}

