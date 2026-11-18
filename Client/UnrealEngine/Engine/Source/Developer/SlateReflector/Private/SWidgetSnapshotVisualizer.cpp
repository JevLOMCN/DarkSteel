// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateReflector
// Functions: 13

// Construct @ 142e4b310

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Removing unreachable block (ram,0x000142e4b767) */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
SWidgetSnapshotVisualizer::Construct(SWidgetSnapshotVisualizer *this,FArguments *param_1)

{
  byte *pbVar1;
  FWidgetSnapshotData *pFVar2;
  SWidget *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  STextBlock *pSVar5;
  FName FVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  TReferenceControllerBase<1> *pTVar11;
  float fVar12;
  bool bVar13;
  char cVar14;
  byte bVar15;
  ISlateStyle *pIVar16;
  FArguments *pFVar17;
  undefined8 *puVar18;
  TSharedRef<SWidget,1> *pTVar19;
  ulong64 uVar20;
  TSharedRef<SWidget_const_,1> *pTVar21;
  FArguments *pFVar22;
  TSharedRef<STextBlock,1> *pTVar23;
  SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_> *pSVar24;
  SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_> *pSVar25;
  FName *pFVar26;
  FName FVar27;
  FSlateIcon *pFVar28;
  FText *pFVar29;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *pTVar30;
  TBaseSPMethodDelegateInstance<1,SWidgetSnapshotVisualizer_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
  *this_00;
  TBaseSPMethodDelegateInstance<0,SWidgetSnapshotVisualizer,1,void___cdecl(void),FDefaultDelegateUserPolicy>
  *this_01;
  FUIAction *pFVar31;
  FArguments *pFVar32;
  TAttribute<FSlateBrush_const_*> *pTVar33;
  TAttribute<FSlateColor> *pTVar34;
  FArguments *pFVar35;
  FSlotArguments *pFVar36;
  FArguments *pFVar37;
  FSlotArguments *pFVar38;
  FArguments *pFVar39;
  TSlateDecl<SScrollableSnapshotImage,RequiredArgs::T0RequiredArgs> *pTVar40;
  TSharedRef<SScrollableSnapshotImage,1> *pTVar41;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> *pTVar42;
  TSharedRef<SBorder,1> *pTVar43;
  TAttribute<SSplitter::ESizeRule> *pTVar44;
  FArguments *pFVar45;
  TArray<TSharedPtr<FNavigationSimulationWidgetNode,1>,TSizedDefaultAllocator<32>_> *pTVar46;
  TSlateDecl<SNavigationSimulationSnapshotList,RequiredArgs::T2RequiredArgs<TDelegate<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>_const_&,TDelegate<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>_const_&>_>
  *pTVar47;
  TSharedRef<SNavigationSimulationSnapshotList,1> *pTVar48;
  TSlateDecl<SSplitter,RequiredArgs::T0RequiredArgs> *this_02;
  TSharedRef<SSplitter,1> *pTVar49;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> *this_03;
  TSharedRef<SVerticalBox,1> *pTVar50;
  SScrollableSnapshotImage *this_04;
  TSharedPtr<SNavigationSimulationSnapshotList,1> *pTVar51;
  SWidgetSnapshotVisualizer *pSVar52;
  FSharedReferencer<1> FVar53;
  FArguments *local_res18;
  T0RequiredArgs local_res20 [8];
  longlong lStack_27b0;
  T0RequiredArgs local_27a8;
  T0RequiredArgs local_27a7;
  T0RequiredArgs local_27a6;
  T0RequiredArgs local_27a5;
  T0RequiredArgs local_27a4 [4];
  FName local_27a0;
  undefined4 uStack_2798;
  uint uStack_2794;
  FLLMScope local_2790;
  FLLMScope local_278c;
  TSharedRef<SWidget,1> local_2788;
  TSharedRef<SWidget,1> local_2778;
  ESizeRule local_2768 [2];
  FName local_2760;
  TSlateDecl<SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T0RequiredArgs>
  local_2758;
  undefined1 local_2740 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_2738;
  ForAnyElementType FStack_2730;
  ulonglong local_2728;
  undefined1 local_2720 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_2718;
  ForAnyElementType FStack_2710;
  ulonglong local_2708;
  undefined1 local_2700 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_26f8;
  ForAnyElementType FStack_26f0;
  ulonglong local_26e8;
  undefined1 local_26e0 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_26d8;
  ForAnyElementType FStack_26d0;
  ulonglong local_26c8;
  int local_26c0;
  bool local_26bc;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_26b8;
  ForAnyElementType FStack_26b0;
  ulonglong local_26a8;
  undefined1 local_26a0 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_2698;
  ForAnyElementType FStack_2690;
  ulonglong local_2688;
  bool local_267f;
  bool local_267d;
  bool local_2678;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_2670;
  ForAnyElementType FStack_2668;
  ulonglong local_2660;
  FName local_2658;
  undefined8 local_2650;
  undefined8 local_2648;
  FName local_2640;
  FName local_2638;
  SWidget *local_2630;
  TReferenceControllerBase<1> *pTStack_2628;
  TSharedPtr<SWidgetSnapshotVisualizer_const_,1> local_2620;
  TSharedPtr<SWidgetSnapshotVisualizer,1> local_2610;
  undefined1 local_2600 [8];
  FDelegateAllocation local_25f8;
  undefined1 local_25e8 [8];
  FDelegateAllocation local_25e0;
  undefined1 local_25d0 [8];
  FDelegateAllocation local_25c8;
  FName local_25b8;
  FMemScope local_25b0;
  FMemScope local_25a8;
  FSlateBrush *local_25a0;
  FSlateBrush *local_2598;
  undefined8 local_2590;
  FSharedReferencer<1> FStack_2588;
  FTextBuilder local_2580;
  TAttribute<EVisibility> local_2568;
  TAttribute<EVisibility> local_2548;
  TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> local_2528;
  TAttribute<FMenuEntryResizeParams> local_2510;
  TSharedRef<SWidget,1> local_2428;
  TSharedRef<SWidget,1> local_2418;
  TSharedRef<SWidget,1> local_2408;
  T2RequiredArgs<TDelegate<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>_const_&,TDelegate<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>_const_&>
  local_23f8;
  TSharedRef<SWidget,1> local_23e8;
  TSharedRef<SWidget,1> local_23d8;
  TSharedRef<SWidget,1> local_23c8;
  FDestructionSentinel local_23b8;
  FDestructionSentinel local_23a0;
  FDestructionSentinel local_2388;
  undefined1 local_2370 [24];
  FDestructionSentinel local_2358;
  FDestructionSentinel local_2340;
  FDestructionSentinel local_2328;
  TAttribute<FText> local_2310;
  FDestructionSentinel local_22e0;
  FDestructionSentinel local_22c8;
  undefined1 *local_22b0;
  FDestructionSentinel local_22a8;
  FDelegateAllocation *local_2290;
  FDestructionSentinel local_2288;
  FDelegateAllocation *local_2270;
  FDestructionSentinel local_2268;
  undefined1 *local_2250;
  FDestructionSentinel local_2248;
  undefined1 *local_2230;
  FDestructionSentinel local_2228;
  longlong *local_2210;
  TAttribute<FText> local_2208;
  TAttribute<FSlateIcon> local_21d8;
  FName local_2198 [2];
  FName local_2188;
  FName local_2180;
  TSharedPtr<FExtender,1> local_2178;
  TSharedPtr<FUICommandList_const_,1> local_2168;
  TSharedRef<SWidget,1> local_2158;
  TSharedRef<SWidget_const_,1> local_2148;
  TSharedRef<SWidget_const_,1> local_2138;
  TSharedRef<SWidget_const_,1> local_2128;
  TSharedRef<SBorder,1> local_2118;
  code *local_2108;
  TReferenceControllerBase<1> *pTStack_2100;
  TSharedRef<SWidget_const_,1> local_20f8;
  code *local_20e8;
  longlong lStack_20e0;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_20d8;
  TSharedRef<SWidget_const_,1> local_20c0;
  code *local_20a8;
  longlong lStack_20a0;
  TSharedRef<SWidget,1> local_2098;
  TSharedPtr<FToolBarButtonBlock,1> local_2088;
  FText local_2078;
  code *local_2068;
  TReferenceControllerBase<1> *pTStack_2060;
  TSharedRef<SBorder,1> local_2058;
  TSharedRef<SVerticalBox,1> local_2048;
  TSharedRef<SSplitter,1> local_2038;
  TSharedRef<SNavigationSimulationSnapshotList,1> local_2028;
  TSharedRef<STextBlock,1> local_2018;
  TSharedRef<SScrollableSnapshotImage,1> local_2008;
  FName local_1ff8;
  TAttribute<FText> local_1ff0;
  TWriteLockedDelegateAllocation<FNotThreadSafeDelegateMode> local_1fc0;
  TSlateDecl<SScrollableSnapshotImage,RequiredArgs::T0RequiredArgs> local_1fa0;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_1f88;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_1f70;
  TSlateDecl<SSplitter,RequiredArgs::T0RequiredArgs> local_1f58;
  TSlateDecl<SNavigationSimulationSnapshotList,RequiredArgs::T2RequiredArgs<TDelegate<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>_const_&,TDelegate<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>_const_&>_>
  local_1f40;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_1f28;
  TSharedPtr<SNavigationSimulationSnapshotList,1> local_1f10;
  FSlateIcon local_1f00;
  undefined1 local_1ee0 [32];
  TAttribute<FSlateBrush_const_*> local_1ec0;
  TAttribute<FSlateBrush_const_*> local_1e98;
  undefined1 local_1e70 [576];
  undefined1 local_1c30 [48];
  undefined1 local_1c00 [48];
  FSharedReferencer<1> local_1bd0;
  undefined1 local_1bc8 [24];
  undefined1 local_1bb0 [24];
  undefined1 local_1b98 [32];
  FSharedReferencer<1> local_1b78;
  FSharedReferencer<1> local_1b68;
  FToolBarBuilder local_1b10;
  TAttribute<FSlateColor> local_19b8;
  FUIAction local_1988;
  FSlotArguments local_1920;
  FSlotArguments local_1888;
  FSlotArguments local_17f0;
  FSlotArguments local_1708;
  FArguments local_1620;
  FArguments local_1420;
  FArguments local_1218;
  FArguments local_1000;
  FArguments local_d70;
  FArguments local_990;
  FArguments local_5b0;
  undefined8 uStack_48;
  
  uStack_48 = 0x142e4b338;
  bVar10 = false;
  bVar9 = false;
  bVar8 = false;
  local_res18 = (FArguments *)((ulonglong)local_res18 & 0xffffffff00000000);
  pFVar2 = param_1->_SnapshotData;
  this->SnapshotDataPtr = pFVar2;
  if ((pFVar2 == (FWidgetSnapshotData *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("SnapshotDataPtr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetSnapshotVisualizer.cpp"
                          ,799,L""), bVar13)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_2178.Object = (FExtender *)0x0;
  local_2178.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_2168.Object = (FUICommandList *)0x0;
  local_2168.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FSlimHorizontalToolBarBuilder::FSlimHorizontalToolBarBuilder
            ((FSlimHorizontalToolBarBuilder *)&local_1b10,&local_2168,FMultiBoxCustomization::None,
             &local_2178,false);
  ::FName::FName(&local_25b8,"SlimToolBar");
  pIVar16 = FAppStyle::Get();
  FMultiBoxBuilder::SetStyle((FMultiBoxBuilder *)&local_1b10,pIVar16,&local_25b8);
  pFVar17 = SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_>::FArguments::FArguments
                      ((FArguments *)local_1e70);
  pFVar2 = this->SnapshotDataPtr;
  local_2590 = 0;
  FStack_2588.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFVar17->_OptionsSource_ArrayPointer =
       (TArray<TSharedPtr<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_> *)0x0;
  pFVar17->_OptionsSource_ObservableArrayPointer =
       (TObservableArray<TSharedPtr<FWidgetReflectorNodeBase,1>_> *)0x0;
  if (&pFVar17->_OptionsSource_SharedObservableArray !=
      (TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1>
       *)&local_2590) {
    (pFVar17->_OptionsSource_SharedObservableArray).Object =
         (TObservableArray<TSharedPtr<FWidgetReflectorNodeBase,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(pFVar17->_OptionsSource_SharedObservableArray).SharedReferenceCount,&FStack_2588);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_2588.ReferenceController);
  pFVar17->_OptionsSource_ArrayPointer = &pFVar2->Windows;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar17->_OnSelectionChanged
             ,(FWriteAccessScope *)&local_22c8);
  local_22b0 = &(pFVar17->_OnSelectionChanged).field_0x8;
  puVar18 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_22b0);
  pSVar52 = this;
  if (puVar18 != (undefined8 *)0x0) {
    uStack_2794 = local_2778.SharedReferenceCount.ReferenceController._4_4_;
    local_27a0 = (FName)OnWindowSelectionChanged;
    uStack_2798 = 0;
    pTVar19 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_2158);
    pSVar52 = (SWidgetSnapshotVisualizer *)(pTVar19->SharedReferenceCount).ReferenceController;
    pSVar3 = pTVar19->Object;
    if (pSVar52 != (SWidgetSnapshotVisualizer *)0x0) {
      LOCK();
      *(atomic<int> *)&pSVar52->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar52->_padding_ + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)&pSVar52->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar52->_padding_ + 1);
      UNLOCK();
    }
    *puVar18 = &
               ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VFWidgetReflectorNodeBase___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar20 = FDelegateHandle::GenerateNewID();
    puVar18[2] = uVar20;
    *puVar18 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSWidgetSnapshotVisualizer___00__A6AXV__TSharedPtr_VFWidgetReflectorNodeBase___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar18[3] = pSVar3;
    puVar18[4] = pSVar52;
    if (pSVar52 != (SWidgetSnapshotVisualizer *)0x0) {
      LOCK();
      ((atomic<int> *)&pSVar52->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&pSVar52->_padding_)[1] + 1);
      UNLOCK();
    }
    bVar10 = true;
    bVar9 = true;
    bVar8 = true;
    *(FName *)(puVar18 + 5) = local_27a0;
    puVar18[6] = CONCAT44(uStack_2794,uStack_2798);
  }
  if (bVar9) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar52);
  }
  if (bVar10) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar52);
  }
  if (bVar8) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2158.SharedReferenceCount.ReferenceController);
  }
  bVar10 = false;
  bVar9 = false;
  bVar8 = false;
  if (local_22c8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_22c8.Accessor,&local_22c8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar17->_OnGenerateWidget,
             (FWriteAccessScope *)&local_2268);
  local_2250 = &(pFVar17->_OnGenerateWidget).field_0x8;
  puVar18 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_2250);
  pSVar52 = this;
  if (puVar18 != (undefined8 *)0x0) {
    uStack_2794 = local_2778.SharedReferenceCount.ReferenceController._4_4_;
    local_27a0 = (FName)GenerateWindowPickerComboItem;
    uStack_2798 = 0;
    pTVar21 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_2148);
    pSVar52 = (SWidgetSnapshotVisualizer *)(pTVar21->SharedReferenceCount).ReferenceController;
    pSVar3 = pTVar21->Object;
    if (pSVar52 != (SWidgetSnapshotVisualizer *)0x0) {
      LOCK();
      *(atomic<int> *)&pSVar52->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar52->_padding_ + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)&pSVar52->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar52->_padding_ + 1);
      UNLOCK();
    }
    bVar8 = true;
    bVar10 = true;
    bVar9 = true;
    *puVar18 = &
               ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSWidget___00__V__TSharedPtr_VFWidgetReflectorNodeBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar20 = FDelegateHandle::GenerateNewID();
    puVar18[2] = uVar20;
    *puVar18 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSWidgetSnapshotVisualizer___00__A6A_AV__TSharedRef_VSWidget___00__V__TSharedPtr_VFWidgetReflectorNodeBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar18[3] = pSVar3;
    puVar18[4] = pSVar52;
    if (pSVar52 != (SWidgetSnapshotVisualizer *)0x0) {
      LOCK();
      ((atomic<int> *)&pSVar52->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&pSVar52->_padding_)[1] + 1);
      UNLOCK();
    }
    *(FName *)(puVar18 + 5) = local_27a0;
    puVar18[6] = CONCAT44(uStack_2794,uStack_2798);
  }
  if (bVar8) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar52);
  }
  if (bVar9) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar52);
  }
  if (bVar10) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2148.SharedReferenceCount.ReferenceController);
  }
  bVar9 = false;
  bVar8 = false;
  if (local_2268.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2268.Accessor,&local_2268);
  }
  pFVar22 = STextBlock::FArguments::FArguments(&local_5b0);
  (pFVar22->_Text).bIsSet = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(pFVar22->_Text).Getter,
             (FWriteAccessScope *)&local_2248);
  local_2230 = &(pFVar22->_Text).Getter.field_0x8;
  puVar18 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_2230);
  pSVar52 = this;
  if (puVar18 != (undefined8 *)0x0) {
    uStack_2794 = local_2778.SharedReferenceCount.ReferenceController._4_4_;
    local_27a0 = (FName)GetSelectedWindowComboItemText;
    uStack_2798 = 0;
    pTVar21 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_2138);
    pSVar52 = (SWidgetSnapshotVisualizer *)(pTVar21->SharedReferenceCount).ReferenceController;
    local_2760 = (FName)pTVar21->Object;
    if (pSVar52 != (SWidgetSnapshotVisualizer *)0x0) {
      LOCK();
      *(atomic<int> *)&pSVar52->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar52->_padding_ + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)&pSVar52->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar52->_padding_ + 1);
      UNLOCK();
    }
    bVar8 = true;
    bVar9 = true;
    *puVar18 = &
               ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar20 = FDelegateHandle::GenerateNewID();
    puVar18[2] = uVar20;
    *puVar18 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSWidgetSnapshotVisualizer___00__A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FName *)(puVar18 + 3) = local_2760;
    puVar18[4] = pSVar52;
    if (pSVar52 != (SWidgetSnapshotVisualizer *)0x0) {
      LOCK();
      ((atomic<int> *)&pSVar52->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&pSVar52->_padding_)[1] + 1);
      UNLOCK();
    }
    *(FName *)(puVar18 + 5) = local_27a0;
    puVar18[6] = CONCAT44(uStack_2794,uStack_2798);
  }
  if (bVar8) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar52);
  }
  if (bVar9) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2138.SharedReferenceCount.ReferenceController);
  }
  bVar10 = false;
  bVar9 = false;
  bVar8 = false;
  if (local_2248.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2248.Accessor,&local_2248);
  }
  FLLMScope::FLLMScope(&local_2790,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2760 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_25b0,&local_2760,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_20d8,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetSnapshotVisualizer.cpp"
             ,0x327,(T0RequiredArgs *)&local_res18);
  FMemScope::~FMemScope(&local_25b0);
  FLLMScope::~FLLMScope(&local_2790);
  pTVar23 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_20d8,&local_2018,pFVar22);
  pTVar4 = (pTVar23->SharedReferenceCount).ReferenceController;
  pSVar5 = pTVar23->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2630 = (pFVar17->_Content).Widget.Object;
  pTStack_2628 = (pFVar17->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar17->_Content).Widget.Object = (SWidget *)pSVar5;
  (pFVar17->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_2628);
  *(undefined1 *)((longlong)&pFVar17->_padding_ + 1) = 1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar17->_padding_,
             (FWriteAccessScope *)&local_2228);
  local_2210 = &pFVar17->_padding_;
  puVar18 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_2210);
  pSVar52 = this;
  if (puVar18 != (undefined8 *)0x0) {
    lStack_27b0 = (ulonglong)local_2778.SharedReferenceCount.ReferenceController._4_4_ << 0x20;
    pTVar21 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_2128);
    pSVar52 = (SWidgetSnapshotVisualizer *)(pTVar21->SharedReferenceCount).ReferenceController;
    local_27a0 = (FName)pTVar21->Object;
    if (pSVar52 != (SWidgetSnapshotVisualizer *)0x0) {
      LOCK();
      *(atomic<int> *)&pSVar52->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar52->_padding_ + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)&pSVar52->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar52->_padding_ + 1);
      UNLOCK();
    }
    bVar8 = true;
    bVar10 = true;
    bVar9 = true;
    *puVar18 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar20 = FDelegateHandle::GenerateNewID();
    puVar18[2] = uVar20;
    *puVar18 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSWidgetSnapshotVisualizer___00__A6A_NXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FName *)(puVar18 + 3) = local_27a0;
    puVar18[4] = pSVar52;
    if (pSVar52 != (SWidgetSnapshotVisualizer *)0x0) {
      LOCK();
      ((atomic<int> *)&pSVar52->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&pSVar52->_padding_)[1] + 1);
      UNLOCK();
    }
    puVar18[5] = HasValidSnapshot;
    puVar18[6] = lStack_27b0;
  }
  if (bVar8) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar52);
  }
  if (bVar9) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar52);
  }
  if (bVar10) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2128.SharedReferenceCount.ReferenceController);
  }
  bVar10 = false;
  bVar9 = false;
  bVar8 = false;
  if (local_2228.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2228.Accessor,&local_2228);
  }
  FLLMScope::FLLMScope(&local_278c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_27a0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_25a8,&local_27a0,true);
  TSlateDecl<SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T0RequiredArgs>
            (&local_2758,"SComboBox<TSharedPtr<FWidgetReflectorNodeBase>>",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetSnapshotVisualizer.cpp"
             ,0x322,local_res20);
  FMemScope::~FMemScope(&local_25a8);
  FLLMScope::~FLLMScope(&local_278c);
  if (local_2758._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_2758._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_2758._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  pTVar11 = (this->WindowPickerCombo).SharedReferenceCount.ReferenceController;
  (this->WindowPickerCombo).Object = local_2758._Widget.Object;
  (this->WindowPickerCombo).SharedReferenceCount.ReferenceController =
       local_2758._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  pSVar24 = TSharedPtr<SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1>::operator->
                      (&local_2758._Widget);
  SWidget::SWidgetConstruct((SWidget *)pSVar24,(FSlateBaseNamedArgs *)pFVar17);
  pSVar24 = local_2758._Widget.Object;
  SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_>::Construct(local_2758._Widget.Object,pFVar17);
  pSVar25 = TSharedPtr<SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1>::operator->
                      (&local_2758._Widget);
  if ((pSVar25->_padding_ & 0x10) == 0) {
    cVar14 = (**(code **)(pSVar25->_padding_ + 0x228))(pSVar25);
    bVar15 = 0;
    if (cVar14 == '\0') goto LAB_142e4bab9;
  }
  bVar15 = 0x20;
LAB_142e4bab9:
  *(byte *)&pSVar25->_padding_ = (byte)pSVar25->_padding_ & 0xdf;
  *(byte *)&pSVar25->_padding_ = (byte)pSVar25->_padding_ | bVar15;
  pSVar25 = TSharedPtr<SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1>::operator->
                      (&local_2758._Widget);
  pbVar1 = (byte *)((longlong)&pSVar25->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((local_2758._Widget.Object == (SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_> *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar13)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FVar53.ReferenceController = local_2758._Widget.SharedReferenceCount.ReferenceController;
  local_2758._Widget.Object = (SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_> *)0x0;
  local_2758._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if ((pSVar24 == (SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_> *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar13)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar53.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2018.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20d8._Widget.SharedReferenceCount.ReferenceController);
  STextBlock::FArguments::~FArguments(&local_5b0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1b68.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1b78.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1b98);
  if ((void *)local_1b98._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1b98._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1b98);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1bb0);
  if ((void *)local_1bb0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1bb0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1bb0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1bc8);
  if ((void *)local_1bc8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1bc8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1bc8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1bd0.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1c00);
  if ((void *)local_1c00._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1c00._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1c00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1c30);
  if ((void *)local_1c30._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1c30._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1c30);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_1e70._512_8_);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_1e70);
  memset(local_2740,0,200);
  local_26c0 = 0;
  local_2728 = 0;
  local_2708 = 0;
  local_26e8 = 0;
  local_26c8 = 0;
  local_26a8 = 0;
  local_2688 = 0;
  local_2660 = 0;
  local_2738.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_2730.Data = (FScriptContainerElement *)0x0;
  local_2720[0] = false;
  local_2720[1] = false;
  local_2718.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_2710.Data = (FScriptContainerElement *)0x0;
  local_2700[0] = false;
  local_2700[1] = false;
  local_26f8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_26f0.Data = (FScriptContainerElement *)0x0;
  local_26e0[0] = false;
  local_26e0[1] = false;
  local_26d8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_26d0.Data = (FScriptContainerElement *)0x0;
  local_26bc = false;
  local_26b8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_26b0.Data = (FScriptContainerElement *)0x0;
  local_26a0[0] = Preferred;
  local_26a0[1] = false;
  local_2698.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_2690.Data = (FScriptContainerElement *)0x0;
  local_267f = false;
  local_267d = false;
  local_2678 = false;
  local_2670.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_2668.Data = (FScriptContainerElement *)0x0;
  pFVar26 = ::FName::FName(&local_1ff8,"Picking");
  FToolBarBuilder::BeginSection
            (&local_1b10,*pFVar26,true,(TAttribute<FMenuEntryResizeParams> *)local_2740);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_2670,(FWriteAccessScope *)&local_2358);
  if (((int)local_2660 != 0) && (FStack_2668.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2668.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2668,0,0,0x10);
    local_2660 = local_2660 & 0xffffffff00000000;
  }
  if (local_2358.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2358.Accessor,&local_2358);
  }
  if (FStack_2668.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2668.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_2670.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_2698,(FWriteAccessScope *)&local_2340);
  if (((int)local_2688 != 0) && (FStack_2690.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2690.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2690,0,0,0x10);
    local_2688 = local_2688 & 0xffffffff00000000;
  }
  if (local_2340.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2340.Accessor,&local_2340);
  }
  if (FStack_2690.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2690.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_2698.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_26b8,(FWriteAccessScope *)&local_22e0);
  if (((int)local_26a8 != 0) && (FStack_26b0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_26b0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_26b0,0,0,0x10);
    local_26a8 = local_26a8 & 0xffffffff00000000;
  }
  if (local_22e0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_22e0.Accessor,&local_22e0);
  }
  if (FStack_26b0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_26b0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_26b8.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_26d8,(FWriteAccessScope *)&local_23b8);
  if (((int)local_26c8 != 0) && (FStack_26d0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_26d0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_26d0,0,0,0x10);
    local_26c8 = local_26c8 & 0xffffffff00000000;
  }
  if (local_23b8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_23b8.Accessor,&local_23b8);
  }
  if (FStack_26d0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_26d0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_26d8.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_26f8,(FWriteAccessScope *)&local_2388);
  if (((int)local_26e8 != 0) && (FStack_26f0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_26f0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_26f0,0,0,0x10);
    local_26e8 = local_26e8 & 0xffffffff00000000;
  }
  if (local_2388.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2388.Accessor,&local_2388);
  }
  if (FStack_26f0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_26f0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_26f8.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_2718,(FWriteAccessScope *)&local_23a0);
  if (((int)local_2708 != 0) && (FStack_2710.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2710.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2710,0,0,0x10);
    local_2708 = local_2708 & 0xffffffff00000000;
  }
  if (local_23a0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_23a0.Accessor,&local_23a0);
  }
  if (FStack_2710.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2710.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_2718.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_2738,(FWriteAccessScope *)&local_2328);
  if (((int)local_2728 != 0) && (FStack_2730.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2730.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2730,0,0,0x10);
    local_2728 = local_2728 & 0xffffffff00000000;
  }
  if (local_2328.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2328.Accessor,&local_2328);
  }
  if (FStack_2730.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2730.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_2738.AccessDetector);
  local_2580.Lines.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2568.Getter._16_8_ = 0;
  local_2580.Lines.ArrayNum = 0;
  local_2580.Lines.ArrayMax = 0;
  local_2580.IndentCount = 0;
  local_2568.Value.Value.Value = (TEnumAsByte<EVisibility::Private>)0x19;
  local_2568.bIsSet = false;
  local_2568.Getter._0_8_ = 0;
  local_2568.Getter._8_8_ = 0;
  local_2528._16_8_ = 0;
  local_2528._0_8_ = 0;
  local_2528._8_8_ = 0;
  local_2658.ComparisonIndex.Value = 0;
  local_2658.Number = 0;
  if (((this->WindowPickerCombo).Object == (SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_> *)0x0
      ) && (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x408,L""), bVar13)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pTVar4 = (this->WindowPickerCombo).SharedReferenceCount.ReferenceController;
  pSVar24 = (this->WindowPickerCombo).Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pSVar24 == (SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_> *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L""), bVar13)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2788.Object = (SWidget *)pSVar24;
  local_2788.SharedReferenceCount.ReferenceController = pTVar4;
  FToolBarBuilder::AddWidget
            (&local_1b10,&local_2788,local_2658,true,HAlign_Fill,&local_2528,&local_2568);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  memset(&local_2510,0,200);
  local_2510.Value.Wrapping.Priority.Value = 0;
  local_2510.Value.ClippingPriority.Getter._16_8_ = 0;
  local_2510.Value.AllowClipping.Getter._16_8_ = 0;
  local_2510.Value.VisibleInOverflow.Getter._16_8_ = 0;
  local_2510.Value.Wrapping.Allow.Getter._16_8_ = 0;
  local_2510.Value.Wrapping.Priority.Getter._16_8_ = 0;
  local_2510.Value.Wrapping.Mode.Getter._16_8_ = 0;
  local_2510.Getter._16_8_ = 0;
  local_2510.Value.ClippingPriority.Getter._0_8_ = 0;
  local_2510.Value.ClippingPriority.Getter._8_8_ = 0;
  local_2510.Value.AllowClipping.Value = false;
  local_2510.Value.AllowClipping.bIsSet = false;
  local_2510.Value.AllowClipping.Getter._0_8_ = 0;
  local_2510.Value.AllowClipping.Getter._8_8_ = 0;
  local_2510.Value.VisibleInOverflow.Value = false;
  local_2510.Value.VisibleInOverflow.bIsSet = false;
  local_2510.Value.VisibleInOverflow.Getter._0_8_ = 0;
  local_2510.Value.VisibleInOverflow.Getter._8_8_ = 0;
  local_2510.Value.Wrapping.Allow.Value = false;
  local_2510.Value.Wrapping.Allow.bIsSet = false;
  local_2510.Value.Wrapping.Allow.Getter._0_8_ = 0;
  local_2510.Value.Wrapping.Allow.Getter._8_8_ = 0;
  local_2510.Value.Wrapping.Priority.bIsSet = false;
  local_2510.Value.Wrapping.Priority.Getter._0_8_ = 0;
  local_2510.Value.Wrapping.Priority.Getter._8_8_ = 0;
  local_2510.Value.Wrapping.Mode.Value = Preferred;
  local_2510.Value.Wrapping.Mode.bIsSet = false;
  local_2510.Value.Wrapping.Mode.Getter._0_8_ = 0;
  local_2510.Value.Wrapping.Mode.Getter._8_8_ = 0;
  local_2510.Value.Wrapping.VerticalOverflowBehavior.bIsSet = false;
  local_2510.Value.Wrapping.ForceNewLine.bIsSet = false;
  local_2510.bIsSet = false;
  local_2510.Getter._0_8_ = 0;
  local_2510.Getter._8_8_ = 0;
  FText::FText(&local_2208.Value);
  local_2208.bIsSet = false;
  local_2208.Getter._16_8_ = 0;
  local_2548.Getter._16_8_ = 0;
  local_2208.Getter._0_8_ = 0;
  local_2208.Getter._8_8_ = 0;
  local_2548.Value.Value.Value = (TEnumAsByte<EVisibility::Private>)0x19;
  local_2548.bIsSet = false;
  local_2548.Getter._0_8_ = 0;
  local_2548.Getter._8_8_ = 0;
  local_2640.ComparisonIndex.Value = 0;
  local_2640.Number = 0;
  local_2650 = 0;
  local_2648 = 0;
  pFVar26 = ::FName::FName(local_2198,"Icon.HitTestPicking");
  FVar6 = *pFVar26;
  FVar27 = FWidgetReflectorStyle::GetStyleSetName();
  pFVar28 = FSlateIcon::FSlateIcon(&local_1f00,*(FName *)FVar27,FVar6,(FName)0x0,(FName)0x0);
  local_21d8.Value.StyleSetName = pFVar28->StyleSetName;
  local_21d8.Value.StyleName = pFVar28->StyleName;
  local_21d8.Value.SmallStyleName = pFVar28->SmallStyleName;
  local_21d8.Value.StatusOverlayStyleName = pFVar28->StatusOverlayStyleName;
  local_21d8.bIsSet = true;
  local_21d8.Getter._16_8_ = 0;
  local_21d8.Getter._0_8_ = 0;
  local_21d8.Getter._8_8_ = 0;
  pFVar29 = FTextBuilder::ToText(&local_2580,&local_2078);
  FText::FText(&local_2310.Value,pFVar29);
  local_2788.SharedReferenceCount.ReferenceController =
       local_2788.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
  local_2310.bIsSet = true;
  local_2788.Object = (SWidget *)GetPickWidgetText;
  local_2108 = GetPickWidgetText;
  pTStack_2100 = local_2788.SharedReferenceCount.ReferenceController;
  local_2310.Getter._0_8_ = 0;
  local_2310.Getter._8_8_ = 0;
  local_2310.Getter._16_8_ = 0;
  pTVar30 = TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::
            CreateSP<SWidgetSnapshotVisualizer>
                      ((TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_2370,this,
                       (pmf_10bb83c5 *)&local_2108);
  FText::FText(&local_1ff0.Value);
  local_1ff0.bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_1ff0.Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar30);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2370);
  if ((void *)local_2370._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_2370._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2370);
  local_2638.ComparisonIndex.Value = 0;
  local_2638.Number = 0;
  local_25d0 = (undefined1  [8])0x0;
  local_25c8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_25c8.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_25d0,
             (FWriteAccessScope *)&local_22a8);
  local_2290 = &local_25c8;
  puVar18 = UE::Core::Private::DelegateAllocate(0x38,&local_25c8);
  pSVar52 = this;
  if (puVar18 != (undefined8 *)0x0) {
    lStack_27b0 = (ulonglong)local_2778.SharedReferenceCount.ReferenceController._4_4_ << 0x20;
    pTVar21 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_20f8);
    pSVar52 = (SWidgetSnapshotVisualizer *)(pTVar21->SharedReferenceCount).ReferenceController;
    pSVar3 = pTVar21->Object;
    if (pSVar52 != (SWidgetSnapshotVisualizer *)0x0) {
      LOCK();
      *(atomic<int> *)&pSVar52->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar52->_padding_ + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)&pSVar52->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar52->_padding_ + 1);
      UNLOCK();
    }
    bVar8 = true;
    bVar10 = true;
    bVar9 = true;
    *puVar18 = &
               ___7__TCommonDelegateInstanceState___A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar20 = FDelegateHandle::GenerateNewID();
    puVar18[2] = uVar20;
    *puVar18 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSWidgetSnapshotVisualizer___00__A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar18[3] = pSVar3;
    puVar18[4] = pSVar52;
    if (pSVar52 != (SWidgetSnapshotVisualizer *)0x0) {
      LOCK();
      ((atomic<int> *)&pSVar52->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&pSVar52->_padding_)[1] + 1);
      UNLOCK();
    }
    puVar18[5] = GetPickWidgetColor;
    puVar18[6] = lStack_27b0;
  }
  if (bVar8) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar52);
  }
  if (bVar9) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar52);
  }
  if (bVar10) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_20f8.SharedReferenceCount.ReferenceController);
  }
  bVar10 = false;
  bVar9 = false;
  bVar8 = false;
  if (local_22a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_22a8.Accessor,&local_22a8);
  }
  local_25e8 = (undefined1  [8])0x0;
  local_25e0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_25e0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_25e8,
             (FWriteAccessScope *)&local_2288);
  local_2270 = &local_25e0;
  this_00 = UE::Core::Private::DelegateAllocate(0x38,&local_25e0);
  pSVar52 = this;
  FVar53.ReferenceController = local_2620.SharedReferenceCount.ReferenceController;
  if (this_00 !=
      (TBaseSPMethodDelegateInstance<1,SWidgetSnapshotVisualizer_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
       *)0x0) {
    lStack_27b0 = (ulonglong)local_2778.SharedReferenceCount.ReferenceController._4_4_ << 0x20;
    pTVar21 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_20c0);
    pSVar52 = (SWidgetSnapshotVisualizer *)(pTVar21->SharedReferenceCount).ReferenceController;
    local_2620.Object = (SWidgetSnapshotVisualizer *)pTVar21->Object;
    if (pSVar52 != (SWidgetSnapshotVisualizer *)0x0) {
      LOCK();
      *(atomic<int> *)&pSVar52->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar52->_padding_ + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)&pSVar52->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar52->_padding_ + 1);
      UNLOCK();
    }
    local_20e8 = HasValidSnapshot;
    lStack_20e0 = lStack_27b0;
    local_2620.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pSVar52;
    TBaseSPMethodDelegateInstance<1,SWidgetSnapshotVisualizer_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
    ::
    TBaseSPMethodDelegateInstance<1,SWidgetSnapshotVisualizer_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy><>
              (this_00,&local_2620,(pmf_51ab85b7 *)&local_20e8);
    bVar8 = true;
    bVar10 = true;
    bVar9 = true;
    FVar53.ReferenceController = (TReferenceControllerBase<1> *)pSVar52;
  }
  if (bVar8) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar53.ReferenceController);
  }
  if (bVar9) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar52);
  }
  if (bVar10) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_20c0.SharedReferenceCount.ReferenceController);
  }
  bVar10 = false;
  bVar9 = false;
  bVar8 = false;
  if (local_2288.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2288.Accessor,&local_2288);
  }
  local_2600 = (undefined1  [8])0x0;
  local_25f8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_25f8.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2600,
             &local_1fc0.WriteScope);
  local_1fc0.Allocation = &local_25f8;
  this_01 = UE::Core::Private::DelegateAllocate(0x38,&local_25f8);
  pSVar52 = this;
  FVar53.ReferenceController = local_2610.SharedReferenceCount.ReferenceController;
  if (this_01 !=
      (TBaseSPMethodDelegateInstance<0,SWidgetSnapshotVisualizer,1,void___cdecl(void),FDefaultDelegateUserPolicy>
       *)0x0) {
    lStack_27b0 = (ulonglong)local_2778.SharedReferenceCount.ReferenceController._4_4_ << 0x20;
    pTVar19 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_2098);
    pSVar52 = (SWidgetSnapshotVisualizer *)(pTVar19->SharedReferenceCount).ReferenceController;
    local_2610.Object = (SWidgetSnapshotVisualizer *)pTVar19->Object;
    if (pSVar52 != (SWidgetSnapshotVisualizer *)0x0) {
      LOCK();
      *(atomic<int> *)&pSVar52->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar52->_padding_ + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)&pSVar52->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar52->_padding_ + 1);
      UNLOCK();
    }
    local_20a8 = OnPickWidgetClicked;
    lStack_20a0 = lStack_27b0;
    local_2610.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pSVar52;
    TBaseSPMethodDelegateInstance<0,SWidgetSnapshotVisualizer,1,void___cdecl(void),FDefaultDelegateUserPolicy>
    ::
    TBaseSPMethodDelegateInstance<0,SWidgetSnapshotVisualizer,1,void___cdecl(void),FDefaultDelegateUserPolicy><>
              (this_01,&local_2610,(pmf_05cd2785 *)&local_20a8);
    bVar10 = true;
    bVar9 = true;
    bVar8 = true;
    FVar53.ReferenceController = (TReferenceControllerBase<1> *)pSVar52;
  }
  if (bVar8) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar53.ReferenceController);
  }
  if (bVar9) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar52);
  }
  if (bVar10) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2098.SharedReferenceCount.ReferenceController);
  }
  TWriteLockedDelegateAllocation<FNotThreadSafeDelegateMode>::
  ~TWriteLockedDelegateAllocation<FNotThreadSafeDelegateMode>(&local_1fc0);
  pFVar31 = FUIAction::FUIAction
                      (&local_1988,
                       (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_2600,
                       (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)local_25e8,
                       (TDelegate<ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy> *)
                       local_25d0,RepeatDisabled);
  FToolBarBuilder::AddToolBarButton
            (&local_1b10,&local_2088,pFVar31,local_2638,&local_1ff0,&local_2310,&local_21d8,
             ToggleButton,local_2640,&local_2548,&local_2208,&local_2510);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2088.SharedReferenceCount.ReferenceController);
  FUIAction::~FUIAction(&local_1988);
  TAttribute<FText>::~TAttribute<FText>(&local_1ff0);
  TAttribute<FText>::~TAttribute<FText>(&local_2310);
  FText::~FText(&local_2078);
  TAttribute<FSlateIcon>::~TAttribute<FSlateIcon>(&local_21d8);
  TAttribute<FMenuEntryResizeParams>::~TAttribute<FMenuEntryResizeParams>(&local_2510);
  FTextBuilder::~FTextBuilder(&local_2580);
  FToolBarBuilder::EndSection(&local_1b10);
  pFVar32 = SBorder::FArguments::FArguments(&local_990);
  pIVar16 = FAppStyle::Get();
  pcVar7 = *(code **)((longlong)*pIVar16 + 0x50);
  pFVar26 = ::FName::FName(&local_2188,"ToolPanel.GroupBorder");
  local_25a0 = (FSlateBrush *)(*pcVar7)(pIVar16,*pFVar26,0,0);
  pTVar33 = TAttribute<FSlateBrush_const_*>::TAttribute<FSlateBrush_const_*>
                      (&local_1ec0,&local_25a0);
  pFVar32 = SBorder::FArguments::BorderImage(pFVar32,pTVar33);
  pTVar34 = TAttribute<FSlateColor>::TAttribute<FSlateColor><FLinearColor>
                      (&local_19b8,&FLinearColor::Gray);
  pFVar32 = SBorder::FArguments::BorderBackgroundColor(pFVar32,pTVar34);
  fVar12 = __real_40000000;
  local_res18 = SBorder::FArguments::Padding(pFVar32,__real_40000000);
  pFVar35 = SVerticalBox::FArguments::FArguments(&local_1420);
  pFVar36 = SVerticalBox::Slot(&local_1708);
  pFVar36 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar36);
  pFVar36 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)&pFVar36->field_0x18,fVar12);
  pTVar19 = FMultiBoxBuilder::MakeWidget
                      ((FMultiBoxBuilder *)&local_1b10,&local_2778,
                       (TDelegate<void___cdecl(TSharedRef<FMultiBox,1>_const_&,TSharedRef<SMultiBoxWidget,1>_const_&),FDefaultDelegateUserPolicy>
                        *)0x0);
  pFVar36 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)pFVar36,pTVar19);
  pFVar35 = SVerticalBox::FArguments::operator+(pFVar35,pFVar36);
  pFVar36 = SVerticalBox::Slot(&local_17f0);
  pFVar36 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)&pFVar36->field_0x18,fVar12);
  pFVar37 = SSplitter::FArguments::FArguments(&local_1000);
  pFVar37->_Orientation = Orient_Horizontal;
  pFVar38 = SSplitter::Slot(&local_1888);
  pFVar32 = SBorder::FArguments::FArguments(&local_d70);
  pFVar32 = SBorder::FArguments::Padding(pFVar32,fVar12);
  pIVar16 = FAppStyle::Get();
  pcVar7 = *(code **)((longlong)*pIVar16 + 0x50);
  pFVar26 = ::FName::FName(&local_2180,L"FocusRectangle");
  local_2598 = (FSlateBrush *)(*pcVar7)(pIVar16,*pFVar26,0,0);
  pTVar33 = TAttribute<FSlateBrush_const_*>::TAttribute<FSlateBrush_const_*>
                      (&local_1e98,&local_2598);
  pFVar32 = SBorder::FArguments::BorderImage(pFVar32,pTVar33);
  pFVar39 = SScrollableSnapshotImage::FArguments::FArguments(&local_1218);
  pFVar39->_SnapshotData = param_1->_SnapshotData;
  pFVar39 = SScrollableSnapshotImage::FArguments::OnWidgetPathPicked
                      (pFVar39,&param_1->_OnWidgetPathPicked);
  pTVar40 = MakeTDecl<SScrollableSnapshotImage,RequiredArgs::T0RequiredArgs>
                      (&local_1fa0,"SScrollableSnapshotImage",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetSnapshotVisualizer.cpp"
                       ,0x36d,&local_27a8);
  pTVar40 = TSlateDecl<SScrollableSnapshotImage,RequiredArgs::T0RequiredArgs>::
            Expose<SScrollableSnapshotImage>(pTVar40,&this->SnapshotImage);
  pTVar41 = TSlateDecl<SScrollableSnapshotImage,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar40,&local_2008,pFVar39);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SScrollableSnapshotImage>(&local_23e8,pTVar41);
  pFVar32 = SBorder::FArguments::operator[](pFVar32,&local_23e8);
  pTVar42 = MakeTDecl<SBorder,RequiredArgs::T0RequiredArgs>
                      (&local_1f28,"SBorder",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetSnapshotVisualizer.cpp"
                       ,0x369,&local_27a7);
  pTVar43 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar42,&local_2118,pFVar32);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBorder>(&local_23c8,pTVar43);
  pFVar38 = TSlotBase<SSplitter::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)pFVar38,&local_23c8);
  pFVar37 = SSplitter::FArguments::operator+(pFVar37,pFVar38);
  pFVar38 = SSplitter::Slot(&local_1920);
  local_2768[0] = SizeToContent;
  pTVar44 = TAttribute<enum_SSplitter::ESizeRule>::TAttribute<enum_SSplitter::ESizeRule>
                      (local_1ee0,local_2768);
  pFVar38 = SSplitter::FSlot::FSlotArguments::SizeRule(pFVar38,pTVar44);
  pFVar45 = SNavigationSimulationListBase::FArguments::FArguments(&local_1620);
  pTVar46 = &FWidgetSnapshotData::GetNavigationSimulation(this->SnapshotDataPtr,0)->SimulationData;
  pFVar45->_ListItemsSource = pTVar46;
  local_2788.SharedReferenceCount.ReferenceController =
       local_2788.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
  local_2788.Object = (SWidget *)HandleGetNavigationSimulationListVisibility;
  local_2068 = HandleGetNavigationSimulationListVisibility;
  pTStack_2060 = local_2788.SharedReferenceCount.ReferenceController;
  pFVar45 = TSlateBaseNamedArgs<SNavigationSimulationListBase>::
            Visibility<SWidgetSnapshotVisualizer>
                      ((TSlateBaseNamedArgs<SNavigationSimulationListBase> *)pFVar45,this,
                       (pmf_4a59eae4 *)&local_2068);
  local_23f8.Arg0 = &param_1->_OnSnapshotWidgetSelected;
  local_23f8.Arg1 = local_23f8.Arg0;
  pTVar47 = MakeTDecl<SNavigationSimulationSnapshotList,RequiredArgs::T2RequiredArgs<TDelegate<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>_const_&,TDelegate<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>_const_&>_>
                      (&local_1f40,"SNavigationSimulationSnapshotList",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetSnapshotVisualizer.cpp"
                       ,0x376,&local_23f8);
  pTVar47 = TSlateDecl<SNavigationSimulationSnapshotList,RequiredArgs::T2RequiredArgs<TDelegate<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>_const_&,TDelegate<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>_const_&>_>
            ::Expose<SNavigationSimulationSnapshotList>(pTVar47,&this->NavigationSimulationList);
  pTVar48 = TSlateDecl<SNavigationSimulationSnapshotList,RequiredArgs::T2RequiredArgs<TDelegate<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>_const_&,TDelegate<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>_const_&>_>
            ::operator<<=(pTVar47,&local_2028,pFVar45);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SNavigationSimulationSnapshotList>
            (&local_2418,pTVar48);
  pFVar38 = TSlotBase<SSplitter::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)pFVar38,&local_2418);
  pFVar37 = SSplitter::FArguments::operator+(pFVar37,pFVar38);
  this_02 = MakeTDecl<SSplitter,RequiredArgs::T0RequiredArgs>
                      (&local_1f58,"SSplitter",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetSnapshotVisualizer.cpp"
                       ,0x364,&local_27a6);
  pTVar49 = TSlateDecl<SSplitter,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_02,&local_2038,pFVar37);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SSplitter>(&local_2428,pTVar49);
  pFVar36 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)pFVar36,&local_2428);
  pFVar35 = SVerticalBox::FArguments::operator+(pFVar35,pFVar36);
  this_03 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                      (&local_1f70,"SVerticalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetSnapshotVisualizer.cpp"
                       ,0x357,&local_27a5);
  pTVar50 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_03,&local_2048,pFVar35);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SVerticalBox>(&local_2408,pTVar50);
  pFVar32 = SBorder::FArguments::operator[](local_res18,&local_2408);
  pTVar42 = MakeTDecl<SBorder,RequiredArgs::T0RequiredArgs>
                      (&local_1f88,"SBorder",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetSnapshotVisualizer.cpp"
                       ,0x352,local_27a4);
  pTVar43 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar42,&local_2058,pFVar32);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBorder>(&local_23d8,pTVar43);
  TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::operator[]
            ((TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *)
             &this->_padding_,&local_23d8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_23d8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2058.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1f88._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2408.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2048.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1f70._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2428.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2038.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1f58._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2418.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2028.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1f40._Widget.SharedReferenceCount.ReferenceController);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_1620);
  SSplitter::FSlot::FSlotArguments::~FSlotArguments(&local_1920);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_23c8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2118.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1f28._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_23e8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2008.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1fa0._Widget.SharedReferenceCount.ReferenceController);
  SScrollableSnapshotImage::FArguments::~FArguments(&local_1218);
  SBorder::FArguments::~FArguments(&local_d70);
  SSplitter::FSlot::FSlotArguments::~FSlotArguments(&local_1888);
  SSplitter::FArguments::~FArguments(&local_1000);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_17f0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             CONCAT44(local_2778.SharedReferenceCount.ReferenceController._4_4_,
                      local_2778.SharedReferenceCount.ReferenceController._0_4_));
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_1708);
  SVerticalBox::FArguments::~FArguments(&local_1420);
  SBorder::FArguments::~FArguments(&local_990);
  this_04 = TSharedPtr<SScrollableSnapshotImage,1>::operator->(&this->SnapshotImage);
  pTVar51 = TSharedPtr<SNavigationSimulationSnapshotList,1>::
            TSharedPtr<SNavigationSimulationSnapshotList,1>
                      (&local_1f10,&this->NavigationSimulationList);
  SScrollableSnapshotImage::SetNavigationSimulation(this_04,pTVar51);
  SnapshotDataUpdated(this);
  FToolBarBuilder::~FToolBarBuilder(&local_1b10);
  return;
}

// GenerateWindowPickerComboItem @ 142e97680

TSharedRef<SWidget,1> * __thiscall
SWidgetSnapshotVisualizer::GenerateWindowPickerComboItem
          (SWidgetSnapshotVisualizer *this,TSharedRef<SWidget,1> *__return_storage_ptr__,
          TSharedPtr<FWidgetReflectorNodeBase,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FArguments *pFVar2;
  FText *pFVar3;
  TSharedRef<STextBlock,1> *pTVar4;
  T0RequiredArgs local_res10 [8];
  FLLMScope local_res18 [2];
  FName local_res20;
  FText local_608;
  bool local_5f8;
  undefined1 local_5f0 [8];
  ForAnyElementType FStack_5e8;
  ulonglong local_5e0;
  FDestructionSentinel local_5d8;
  TSharedRef<STextBlock,1> local_5c0;
  FText local_5b0;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_5a0;
  FArguments local_588;
  
  pFVar2 = STextBlock::FArguments::FArguments(&local_588);
  local_5d8._0_8_ = param_1->Object;
  local_5d8.Accessor =
       (FMRSWRecursiveAccessDetector *)(param_1->SharedReferenceCount).ReferenceController;
  if ((TReferenceControllerBase<1> *)local_5d8.Accessor != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    ((TReferenceControllerBase<1> *)local_5d8.Accessor)->SharedReferenceCount =
         (atomic<int>)
         ((int)((TReferenceControllerBase<1> *)local_5d8.Accessor)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar3 = GetWindowPickerComboItemText
                     (&local_5b0,(TSharedPtr<FWidgetReflectorNodeBase,1> *)&local_5d8);
  FText::FText(&local_608,pFVar3);
  local_5f8 = true;
  local_5e0 = 0;
  local_5f0 = (undefined1  [8])0x0;
  FStack_5e8.Data = (FScriptContainerElement *)0x0;
  FText::operator=(&(pFVar2->_Text).Value,&local_608);
  (pFVar2->_Text).bIsSet = local_5f8;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar2->_Text).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_5f0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_5f0,
             (FWriteAccessScope *)&local_5d8);
  if (((int)local_5e0 != 0) && (FStack_5e8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_5e8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_5e8,0,0,0x10);
    local_5e0 = local_5e0 & 0xffffffff00000000;
  }
  if (local_5d8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_5d8.Accessor,&local_5d8);
  }
  if (FStack_5e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_5e8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_5f0);
  if (local_608.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_608.TextData.Reference + 0x10))();
  }
  FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res20 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope((FMemScope *)&local_5d8,&local_res20,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_5a0,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetSnapshotVisualizer.cpp"
             ,0x3ca,local_res10);
  FMemScope::~FMemScope((FMemScope *)&local_5d8);
  FLLMScope::~FLLMScope(local_res18);
  pTVar4 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (&local_5a0,&local_5c0,pFVar2);
  __return_storage_ptr__->Object = (SWidget *)pTVar4->Object;
  pTVar1 = (pTVar4->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5c0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5a0._Widget.SharedReferenceCount.ReferenceController);
  if (local_5b0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_5b0.TextData.Reference + 0x10))();
  }
  STextBlock::FArguments::~FArguments(&local_588);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// GetPickWidgetColor @ 142ea48d0

ECheckBoxState __thiscall
SWidgetSnapshotVisualizer::GetPickWidgetColor(SWidgetSnapshotVisualizer *this)

{
  SScrollableSnapshotImage *pSVar1;
  
  pSVar1 = (this->SnapshotImage).Object;
  if ((pSVar1 != (SScrollableSnapshotImage *)0x0) && (pSVar1->bIsPicking != false)) {
    return Checked;
  }
  return Unchecked;
}

// GetPickWidgetText @ 142ea4900

FText * __thiscall
SWidgetSnapshotVisualizer::GetPickWidgetText
          (SWidgetSnapshotVisualizer *this,FText *__return_storage_ptr__)

{
  SScrollableSnapshotImage *pSVar1;
  bool bVar2;
  FText *pFVar3;
  byte bVar4;
  byte bVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  FText local_28;
  FText local_18;
  
  pSVar1 = (this->SnapshotImage).Object;
  if ((pSVar1 == (SScrollableSnapshotImage *)0x0) || (pSVar1->bIsPicking == false)) {
    bVar4 = 0;
    bVar2 = false;
  }
  else {
    bVar4 = 1;
    bVar2 = true;
  }
  pwVar7 = L"Picking (Esc to Stop)";
  bVar5 = (bVar2 ^ 1U) + 1;
  pwVar6 = L"PickingWidget";
  pFVar3 = &local_18;
  if (!bVar2) {
    pwVar7 = L"Pick Snapshot Widget";
    pwVar6 = L"PickSnapshotWidget";
    pFVar3 = &local_28;
  }
  pFVar3 = FText::AsLocalizable_Advanced_LocText(pFVar3,L"WidgetSnapshotVisualizer",pwVar6,pwVar7);
  FText::FText(__return_storage_ptr__,pFVar3);
  if ((((bVar4 ^ 1) + 1 & 2) != 0) &&
     (bVar5 = bVar5 & 1, local_28.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if ((bVar5 != 0) && (local_18.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetSelectedWindowComboItemText @ 142ea7bf0

FText * __thiscall
SWidgetSnapshotVisualizer::GetSelectedWindowComboItemText
          (SWidgetSnapshotVisualizer *this,FText *__return_storage_ptr__)

{
  SScrollableSnapshotImage *pSVar1;
  ITextData *pIVar2;
  bool bVar3;
  bool bVar4;
  FSharedReferencer<1> FVar5;
  TSharedPtr<FWidgetReflectorNodeBase,1> *pTVar6;
  FText *pFVar7;
  FWidgetReflectorNodeBase *pFVar8;
  int iVar9;
  undefined4 local_res8 [2];
  TSharedPtr<FWidgetReflectorNodeBase,1> local_38;
  FText local_28;
  
  local_res8[0] = 0;
  pSVar1 = (this->SnapshotImage).Object;
  if (pSVar1 == (SScrollableSnapshotImage *)0x0) {
    iVar9 = -1;
  }
  else {
    iVar9 = pSVar1->SelectedWindowIndex;
  }
  FWidgetSnapshotData::GetWindow(this->SnapshotDataPtr,&local_38,iVar9);
  FVar5.ReferenceController = local_38.SharedReferenceCount.ReferenceController;
  if (local_38.Object == (FWidgetReflectorNodeBase *)0x0) {
    pFVar7 = FText::GetEmpty();
    pFVar8 = (FWidgetReflectorNodeBase *)(pFVar7->TextData).Reference;
    local_38.Object = pFVar8;
    if (pFVar8 != (FWidgetReflectorNodeBase *)0x0) {
      (**(code **)(pFVar8->_padding_ + 8))(pFVar8,local_res8);
    }
    pTVar6 = &local_38;
    local_38.SharedReferenceCount.ReferenceController._0_4_ = pFVar7->Flags;
    bVar4 = false;
    bVar3 = true;
  }
  else {
    if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar6 = (TSharedPtr<FWidgetReflectorNodeBase,1> *)
             GetWindowPickerComboItemText(&local_28,&local_38);
    bVar4 = true;
    bVar3 = false;
    pFVar8 = local_38.Object;
  }
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar2 = ((TRefCountPtr<ITextData> *)&pTVar6->Object)->Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar2;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
  }
  __return_storage_ptr__->Flags = *(uint *)&(pTVar6->SharedReferenceCount).ReferenceController;
  if ((bVar3) && (pFVar8 != (FWidgetReflectorNodeBase *)0x0)) {
    (**(code **)(pFVar8->_padding_ + 0x10))(pFVar8);
  }
  if ((bVar4) && (local_28.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar5.ReferenceController);
  return __return_storage_ptr__;
}

// GetWindowPickerComboItemText @ 142eac700

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __cdecl
SWidgetSnapshotVisualizer::GetWindowPickerComboItemText
          (FText *__return_storage_ptr__,TSharedPtr<FWidgetReflectorNodeBase,1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  FText *pFVar3;
  FText *pFVar4;
  FText *pFVar5;
  FTextFormat *pFVar6;
  FText local_48;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  FTextFormat local_18;
  
  if (param_1->Object == (FWidgetReflectorNodeBase *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FText *)(*pcVar1)();
      return pFVar3;
    }
  }
  pFVar3 = (FText *)(**(code **)(param_1->Object->_padding_ + 0xa8))(param_1->Object,local_38);
  if (param_1->Object == (FWidgetReflectorNodeBase *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FText *)(*pcVar1)();
      return pFVar3;
    }
  }
  pFVar4 = (FText *)(**(code **)(param_1->Object->_padding_ + 0x18))(param_1->Object,local_28);
  pFVar5 = FText::AsLocalizable_Advanced_LocText
                     (&local_48,L"WidgetSnapshotVisualizer",L"WidgetComboItemFmt",L"{0} - {1}");
  pFVar6 = FTextFormat::FTextFormat(&local_18,pFVar5,Default);
  FText::Format<FText,FText>(__return_storage_ptr__,pFVar6,pFVar4,pFVar3);
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// HandleGetNavigationSimulationListVisibility @ 142eb01f0

EVisibility __thiscall
SWidgetSnapshotVisualizer::HandleGetNavigationSimulationListVisibility
          (SWidgetSnapshotVisualizer *this)

{
  FWidgetSnapshotData *pFVar1;
  EVisibility EVar2;
  FScriptContainerElement *pFVar3;
  uchar *in_RDX;
  
  pFVar1 = this->SnapshotDataPtr;
  if (pFVar1 != (FWidgetSnapshotData *)0x0) {
    if ((pFVar1->NavigationSimulationData).ArrayNum < 1) {
      pFVar3 = (FScriptContainerElement *)&pFVar1->EmptyNavigationSimulationData;
    }
    else {
      pFVar3 = (pFVar1->NavigationSimulationData).AllocatorInstance.Data;
    }
    EVar2.Value.Value = EVisibility::Visible.Value.Value;
    if (*(int *)(pFVar3 + 8) != 0) goto LAB_142eb0220;
  }
  EVar2.Value.Value = EVisibility::Collapsed.Value.Value;
LAB_142eb0220:
  *in_RDX = (uchar)EVar2.Value.Value;
  return (EVisibility)SUB81(in_RDX,0);
}

// HasValidSnapshot @ 142eba180

bool __thiscall SWidgetSnapshotVisualizer::HasValidSnapshot(SWidgetSnapshotVisualizer *this)

{
  if ((this->SnapshotDataPtr != (FWidgetSnapshotData *)0x0) &&
     ((this->SnapshotDataPtr->Windows).ArrayNum != 0)) {
    return true;
  }
  return false;
}

// OnPickWidgetClicked @ 142ede480

void __thiscall SWidgetSnapshotVisualizer::OnPickWidgetClicked(SWidgetSnapshotVisualizer *this)

{
  SScrollableSnapshotImage *pSVar1;
  
  pSVar1 = (this->SnapshotImage).Object;
  if (pSVar1 != (SScrollableSnapshotImage *)0x0) {
    pSVar1->bIsPicking = pSVar1->bIsPicking == false;
  }
  return;
}

// OnPreviewKeyDown @ 142ede4c0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SWidgetSnapshotVisualizer::OnPreviewKeyDown
          (SWidgetSnapshotVisualizer *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FKeyEvent *param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  FReply *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  uint uStackX_c;
  
  bVar4 = false;
  if ((this->SnapshotImage).Object == (SScrollableSnapshotImage *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar6 = (param_2->Key).KeyDetails.SharedReferenceCount.ReferenceController;
    FVar1 = (param_2->Key).KeyName;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar4 = true;
    if (FVar1 == EKeys::Escape.KeyName) {
      bVar3 = true;
      goto LAB_142ede50f;
    }
  }
  bVar3 = false;
LAB_142ede50f:
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
  if (bVar3) {
    if ((this->SnapshotImage).Object == (SScrollableSnapshotImage *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FReply *)(*pcVar2)();
        return pFVar5;
      }
    }
    ((this->SnapshotImage).Object)->bIsPicking = false;
  }
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnWindowSelectionChanged @ 142ee0ab0

void __thiscall
SWidgetSnapshotVisualizer::OnWindowSelectionChanged
          (SWidgetSnapshotVisualizer *this,TSharedPtr<FWidgetReflectorNodeBase,1> *param_1,
          Type param_2)

{
  FScriptContainerElement *pFVar1;
  SScrollableSnapshotImage *this_00;
  SNavigationSimulationSnapshotList *this_01;
  FWidgetSnapshotData *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TArray<TSharedPtr<FNavigationSimulationWidgetNode,1>,TSizedDefaultAllocator<32>_> *pTVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  
  pFVar1 = (this->SnapshotDataPtr->Windows).AllocatorInstance.Data;
  if (pFVar1 != pFVar1 + (longlong)(this->SnapshotDataPtr->Windows).ArrayNum * 0x10) {
    pFVar8 = pFVar1;
    do {
      if (*(FWidgetReflectorNodeBase **)pFVar8 == param_1->Object) {
        uVar7 = (uint)((longlong)pFVar8 - (longlong)pFVar1 >> 4);
        goto LAB_142ee0b07;
      }
      pFVar8 = pFVar8 + 0x10;
    } while (pFVar8 != pFVar1 + (longlong)(this->SnapshotDataPtr->Windows).ArrayNum * 0x10);
  }
  uVar7 = 0xffffffff;
LAB_142ee0b07:
  this_00 = (this->SnapshotImage).Object;
  if (this_00 != (SScrollableSnapshotImage *)0x0) {
    SScrollableSnapshotImage::SetSelectedWindowIndex(this_00,uVar7);
  }
  this_01 = (this->NavigationSimulationList).Object;
  if (this_01 != (SNavigationSimulationSnapshotList *)0x0) {
    pFVar2 = this->SnapshotDataPtr;
    if (((int)uVar7 < 0) || ((pFVar2->NavigationSimulationData).ArrayNum <= (int)uVar7)) {
      pTVar6 = &(pFVar2->EmptyNavigationSimulationData).SimulationData;
    }
    else {
      uVar5 = 0;
      if ((int)uVar7 < (pFVar2->NavigationSimulationData).ArrayNum) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pTVar6 = (TArray<TSharedPtr<FNavigationSimulationWidgetNode,1>,TSizedDefaultAllocator<32>_> *)
               ((pFVar2->NavigationSimulationData).AllocatorInstance.Data +
               (longlong)(int)uVar7 * 0x10);
    }
    SNavigationSimulationListBase::SetListItemsSource
              ((SNavigationSimulationListBase *)this_01,pTVar6);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetSelectedWidgets @ 142f05410

void __thiscall
SWidgetSnapshotVisualizer::SetSelectedWidgets
          (SWidgetSnapshotVisualizer *this,
          TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  SScrollableSnapshotImage *pSVar2;
  SNavigationSimulationSnapshotList *pSVar3;
  SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_> *this_00;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  ulong64 uVar7;
  undefined8 *puVar8;
  uint uVar9;
  TSharedPtr<FNavigationSimulationWidgetNode,1> local_18;
  
  pSVar2 = (this->SnapshotImage).Object;
  if (pSVar2 != (SScrollableSnapshotImage *)0x0) {
    TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_>::operator=
              (&pSVar2->SelectedWidgets,param_1);
  }
  if ((this->NavigationSimulationList).Object != (SNavigationSimulationSnapshotList *)0x0) {
    iVar1 = param_1->ArrayNum;
    uVar7 = 0;
    if (0 < iVar1) {
      uVar6 = 0;
      if ((int)(iVar1 - 1U) < iVar1) {
        uVar6 = ~(iVar1 - 1U) >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar7 = (**(code **)(**(longlong **)
                             ((param_1->AllocatorInstance).Data +
                             (longlong)param_1->ArrayNum * 0x10 + -0x10) + 0xe0))();
    }
    if (((this->NavigationSimulationList).Object == (SNavigationSimulationSnapshotList *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pSVar3 = (this->NavigationSimulationList).Object;
    if ((char)pSVar3->_padding_ == '\0') {
      uVar6 = FNavigationSimulationNodeUtils::IndexOfSnapshotWidget
                        ((TArray<TSharedPtr<FNavigationSimulationWidgetNode,1>,TSizedDefaultAllocator<32>_>
                          *)&pSVar3->_padding_,uVar7);
      if (uVar6 == 0xffffffff) {
        if ((pSVar3->_padding_ == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_>::ClearSelection
                  ((SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_> *)pSVar3->_padding_);
      }
      else {
        if ((pSVar3->_padding_ == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        this_00 = (SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_> *)pSVar3->_padding_;
        uVar9 = 0;
        if ((int)uVar6 < (int)pSVar3->_padding_) {
          uVar9 = ~uVar6 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        puVar8 = (undefined8 *)(pSVar3->_padding_ + (longlong)(int)uVar6 * 0x10);
        local_18.Object = (FNavigationSimulationWidgetNode *)*puVar8;
        local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)puVar8[1]
        ;
        if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_>::SetSelection
                  (this_00,&local_18,Direct);
      }
    }
  }
  return;
}

// SnapshotDataUpdated @ 142f07a30

void __thiscall SWidgetSnapshotVisualizer::SnapshotDataUpdated(SWidgetSnapshotVisualizer *this)

{
  SScrollableSnapshotImage *this_00;
  SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_> *pSVar1;
  FScriptContainerElement *pFVar2;
  SNavigationSimulationSnapshotList *this_01;
  FWidgetSnapshotData *pFVar3;
  code *pcVar4;
  bool bVar5;
  TSharedPtr<FWidgetReflectorNodeBase,1> local_18;
  
  this_00 = (this->SnapshotImage).Object;
  if (this_00 != (SScrollableSnapshotImage *)0x0) {
    SScrollableSnapshotImage::SetSelectedWindowIndex(this_00,0);
  }
  pSVar1 = (this->WindowPickerCombo).Object;
  if (pSVar1 != (SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_> *)0x0) {
    if (((pSVar1->ComboListView).Object == (SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_> *)0x0
        ) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    (**(code **)(((pSVar1->ComboListView).Object)->_padding_ + 0x248))();
    if (((this->WindowPickerCombo).Object ==
         (SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_> *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pSVar1 = (this->WindowPickerCombo).Object;
    if ((this->SnapshotDataPtr->Windows).ArrayNum < 1) {
      local_18.Object = (FWidgetReflectorNodeBase *)0x0;
      local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    }
    else {
      pFVar2 = (this->SnapshotDataPtr->Windows).AllocatorInstance.Data;
      local_18.SharedReferenceCount.ReferenceController =
           *(TReferenceControllerBase<1> **)(pFVar2 + 8);
      local_18.Object = *(FWidgetReflectorNodeBase **)pFVar2;
      if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_>::SetSelectedItem(pSVar1,&local_18);
  }
  this_01 = (this->NavigationSimulationList).Object;
  if (this_01 != (SNavigationSimulationSnapshotList *)0x0) {
    pFVar3 = this->SnapshotDataPtr;
    if (0 < (pFVar3->NavigationSimulationData).ArrayNum) {
      SNavigationSimulationListBase::SetListItemsSource
                ((SNavigationSimulationListBase *)this_01,
                 (TArray<TSharedPtr<FNavigationSimulationWidgetNode,1>,TSizedDefaultAllocator<32>_>
                  *)(pFVar3->NavigationSimulationData).AllocatorInstance.Data);
      return;
    }
    SNavigationSimulationListBase::SetListItemsSource
              ((SNavigationSimulationListBase *)this_01,
               &(pFVar3->EmptyNavigationSimulationData).SimulationData);
  }
  return;
}

