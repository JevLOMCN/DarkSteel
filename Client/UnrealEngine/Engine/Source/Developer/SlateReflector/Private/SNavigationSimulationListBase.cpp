// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateReflector
// Functions: 10

// SetSimulationResult @ 142ddfb30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SNavigationSimulationListBase::SetSimulationResult
          (SNavigationSimulationListBase *this,
          TArray<FSlateNavigationEventSimulator::FSimulationResult,TSizedDefaultAllocator<32>_>
          *param_1)

{
  TArray<TSharedPtr<FNavigationSimulationWidgetNode,1>,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  int iVar6;
  TArray<TSharedPtr<FNavigationSimulationWidgetNode,1>,TSizedDefaultAllocator<32>_> local_28;
  TSharedPtr<FNavigationSimulationWidgetNode,1> local_18;
  
  NavigationSimulationNodeUtilsInternal::BuildNavigationSimulationNodeList(&local_28,Live,param_1);
  pTVar1 = &this->ItemsSource;
  if (pTVar1 == &local_28) {
    iVar6 = local_28.ArrayNum;
  }
  else {
    DestructItems<TSharedPtr<FNavigationSimulationWidgetNode,1>,int>
              ((TSharedPtr<FNavigationSimulationWidgetNode,1> *)(pTVar1->AllocatorInstance).Data,
               (this->ItemsSource).ArrayNum);
    pFVar2 = (pTVar1->AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pTVar1->AllocatorInstance).Data = local_28.AllocatorInstance.Data;
    (this->ItemsSource).ArrayNum = local_28.ArrayNum;
    (this->ItemsSource).ArrayMax = local_28.ArrayMax;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar6 = 0;
  }
  FVar4.Data = local_28.AllocatorInstance.Data;
  DestructItems<TSharedPtr<FNavigationSimulationWidgetNode,1>,int>
            ((TSharedPtr<FNavigationSimulationWidgetNode,1> *)local_28.AllocatorInstance.Data,iVar6)
  ;
  if ((TSharedPtr<FNavigationSimulationWidgetNode,1> *)FVar4.Data !=
      (TSharedPtr<FNavigationSimulationWidgetNode,1> *)0x0) {
    FMemory::Free(FVar4.Data);
  }
  if ((this->ListView).Object == (SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (**(code **)(((this->ListView).Object)->_padding_ + 0x250))();
  if ((this->ElementDetail).Object == (SDetailView *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_18.Object = (FNavigationSimulationWidgetNode *)0x0;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  SNavigationSimulationListInternal::SDetailView::SetWidgetItem
            ((this->ElementDetail).Object,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  DestructItems<FSlateNavigationEventSimulator::FSimulationResult,int>
            ((FSimulationResult *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
  pFVar2 = (param_1->AllocatorInstance).Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// Construct @ 142e40160

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Removing unreachable block (ram,0x000142e40ee2) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SNavigationSimulationListBase::Construct
          (SNavigationSimulationListBase *this,FArguments *param_1,
          ENavigationSimulationNodeType param_2)

{
  byte *pbVar1;
  SWidget *pSVar2;
  SHeaderRow *pSVar3;
  code *pcVar4;
  bool bVar5;
  FSharedReferencer<1> FVar6;
  FSharedReferencer<1> FVar7;
  bool bVar8;
  char cVar9;
  byte bVar10;
  bool bVar11;
  bool bVar12;
  FArguments *pFVar13;
  FSplitterStyle *pFVar14;
  FArguments *pFVar15;
  undefined8 *puVar16;
  TSharedRef<SWidget_const_,1> *pTVar17;
  ulong64 uVar18;
  TSharedRef<SWidget,1> *pTVar19;
  FArguments *pFVar20;
  FText *pFVar21;
  FArguments *pFVar22;
  TSharedRef<SHeaderRow,1> *pTVar23;
  SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_> *pSVar24;
  SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_> *pSVar25;
  FSlotArguments *pFVar26;
  FArguments *pFVar27;
  SDetailView *pSVar28;
  SDetailView *pSVar29;
  TSharedRef<SSplitter,1> *pTVar30;
  TReferenceControllerBase<1> *pTVar31;
  TReferenceControllerBase<1> *local_res8;
  T0RequiredArgs local_res10 [8];
  undefined4 local_res18 [2];
  T0RequiredArgs local_res20 [8];
  FLLMScope local_3110;
  FLLMScope local_310c;
  FLLMScope local_3108;
  FLLMScope local_3104;
  FName local_3100;
  undefined4 uStack_30f8;
  undefined4 uStack_30f4;
  FArguments *local_30f0;
  undefined4 uStack_30e8;
  undefined4 uStack_30e4;
  FArguments *local_30e0;
  TSlateDecl<SNavigationSimulationListInternal::SDetailView,RequiredArgs::T0RequiredArgs> local_30d8
  ;
  FSlotArguments *local_30c0;
  SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_> *local_30b8;
  FSharedReferencer<1> local_30b0;
  TSlateDecl<SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,RequiredArgs::T0RequiredArgs>
  local_30a8;
  FText local_3090;
  undefined1 local_3080;
  undefined1 local_3078 [8];
  ForAnyElementType FStack_3070;
  ulonglong local_3068;
  TSharedRef<SHeaderRow,1> local_3060;
  undefined4 local_3050;
  undefined1 local_304c;
  undefined1 local_3048 [8];
  void *pvStack_3040;
  undefined8 local_3038;
  float local_3030;
  undefined1 local_302c;
  undefined1 local_3028 [8];
  void *pvStack_3020;
  undefined8 local_3018;
  float local_3010;
  undefined1 local_300c;
  undefined1 local_3008 [8];
  void *pvStack_3000;
  undefined8 local_2ff8;
  undefined1 local_2ff0 [4];
  undefined1 local_2fec [4];
  undefined1 local_2fe8 [4];
  undefined1 local_2fe4 [4];
  undefined1 local_2fe0 [4];
  undefined1 local_2fdc [4];
  undefined1 local_2fd8 [4];
  FName local_2fd4;
  FName local_2fcc;
  FMemScope local_2fc0;
  FName local_2fb8;
  FMemScope local_2fb0;
  FMemScope local_2fa8;
  undefined8 local_2fa0;
  FSharedReferencer<1> FStack_2f98;
  FName local_2f90;
  FMemScope local_2f88;
  TAttribute<float> local_2f80;
  TSharedRef<SWidget,1> local_2f60;
  TSharedRef<SWidget,1> local_2f50;
  TAttribute<FText> local_2f40;
  TAttribute<FText> local_2f10;
  TAttribute<FText> local_2ee0;
  FDestructionSentinel local_2eb0;
  TAttribute<FText> local_2e98;
  TAttribute<FText> local_2e68;
  TAttribute<FText> local_2e38;
  FDestructionSentinel local_2e08;
  undefined1 *local_2df0;
  FDestructionSentinel local_2de8;
  undefined1 *local_2dd0;
  FDestructionSentinel local_2dc8;
  undefined1 *local_2db0;
  FDestructionSentinel local_2da8;
  undefined1 *local_2d90;
  TSlateDecl<SHeaderRow,RequiredArgs::T0RequiredArgs> local_2d88;
  SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_> *local_2d70;
  TReferenceControllerBase<1> *pTStack_2d68;
  TSharedRef<SSplitter,1> local_2d60;
  SHeaderRow *local_2d50;
  TReferenceControllerBase<1> *pTStack_2d48;
  TSharedRef<SWidget,1> local_2d40;
  TSharedRef<SWidget_const_,1> local_2d30;
  SDetailView *local_2d20;
  TReferenceControllerBase<1> *pTStack_2d18;
  TSharedRef<SWidget,1> local_2d10;
  TSharedRef<SWidget,1> local_2d00;
  TSlateDecl<SSplitter,RequiredArgs::T0RequiredArgs> local_2cf0;
  undefined1 local_2cd8 [504];
  undefined1 local_2ae0 [24];
  undefined1 local_2ac8 [24];
  FSlotArguments local_2ab0;
  FSlotArguments local_2a18;
  FArguments local_2980;
  FArguments local_2508;
  FArguments local_2090;
  FArguments local_1c18;
  FArguments local_17a0;
  FArguments local_1328;
  FArguments local_eb0;
  FArguments local_a38;
  FArguments local_7c0;
  FArguments local_530;
  
  bVar11 = false;
  bVar5 = false;
  bVar12 = false;
  local_res18[0] = 0;
  this->NodeType = param_2;
  this->bIsInSelectionGuard = false;
  if (param_1->_ListItemsSource !=
      (TArray<TSharedPtr<FNavigationSimulationWidgetNode,1>,TSizedDefaultAllocator<32>_> *)0x0) {
    TArray<TSharedPtr<FNavigationSimulationWidgetNode,1>,TSizedDefaultAllocator<32>_>::operator=
              (&this->ItemsSource,param_1->_ListItemsSource);
  }
  pFVar13 = SSplitter::FArguments::FArguments(&local_7c0);
  pFVar13->_Orientation = Orient_Vertical;
  ::FName::FName(&local_2fd4,"SplitterDark");
  if ((FWidgetReflectorStyle::StyleInstance.Object == (FSlateStyleSet *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar14 = (FSplitterStyle *)
            (**(code **)((FWidgetReflectorStyle::StyleInstance.Object)->_padding_ + 0xa0))
                      (FWidgetReflectorStyle::StyleInstance.Object,FSplitterStyle::TypeName,
                       local_2fd4,0,1);
  if (pFVar14 == (FSplitterStyle *)0x0) {
    pFVar14 = FSplitterStyle::GetDefault();
  }
  pFVar13->_Style = pFVar14;
  local_30c0 = SSplitter::Slot(&local_2a18);
  local_302c = 1;
  local_3030 = __real_3f000000;
  local_3018 = 0;
  local_3028 = (undefined1  [8])0x0;
  pvStack_3020 = (void *)0x0;
  (local_30c0->_Value).Value = __real_3f000000;
  (local_30c0->_Value).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(local_30c0->_Value).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3028);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3028);
  if (pvStack_3020 != (void *)0x0) {
    FMemory::Free(pvStack_3020);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3028);
  pFVar15 = SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_>::FArguments::FArguments
                      (&local_530);
  local_2fa0 = 0;
  FStack_2f98.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFVar15->_ListItemsSource_ArrayPointer =
       (TArray<TSharedPtr<FNavigationSimulationWidgetNode,1>,TSizedDefaultAllocator<32>_> *)0x0;
  pFVar15->_ListItemsSource_ObservableArrayPointer =
       (TObservableArray<TSharedPtr<FNavigationSimulationWidgetNode,1>_> *)0x0;
  if (&pFVar15->_ListItemsSource_SharedObservableArray !=
      (TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,1>
       *)&local_2fa0) {
    (pFVar15->_ListItemsSource_SharedObservableArray).Object =
         (TObservableArray<TSharedPtr<FNavigationSimulationWidgetNode,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(pFVar15->_ListItemsSource_SharedObservableArray).SharedReferenceCount,&FStack_2f98)
    ;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_2f98.ReferenceController);
  pFVar15->_ListItemsSource_ArrayPointer = &this->ItemsSource;
  local_304c = 1;
  local_3050 = 2;
  local_3038 = 0;
  local_3048 = (undefined1  [8])0x0;
  pvStack_3040 = (void *)0x0;
  (pFVar15->_SelectionMode).Value = SingleToggle;
  (pFVar15->_SelectionMode).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar15->_SelectionMode).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3048);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3048);
  if (pvStack_3040 != (void *)0x0) {
    FMemory::Free(pvStack_3040);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3048);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar15->_OnGenerateRow,
             (FWriteAccessScope *)&local_2e08);
  local_2df0 = &(pFVar15->_OnGenerateRow).field_0x8;
  puVar16 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_2df0);
  pTVar31 = local_res8;
  if (puVar16 != (undefined8 *)0x0) {
    uStack_30e4 = local_3060.SharedReferenceCount.ReferenceController._4_4_;
    local_30f0 = (FArguments *)MakeSourceListViewWidget;
    uStack_30e8 = 0;
    pTVar17 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_2d30);
    pTVar31 = (pTVar17->SharedReferenceCount).ReferenceController;
    pSVar2 = pTVar17->Object;
    if (pTVar31 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar31->SharedReferenceCount = (atomic<int>)((int)pTVar31->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar31->SharedReferenceCount = (atomic<int>)((int)pTVar31->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar16 = &
               ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VITableRow___00__V__TSharedPtr_UFNavigationSimulationWidgetNode___00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar18 = FDelegateHandle::GenerateNewID();
    puVar16[2] = uVar18;
    *puVar16 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSNavigationSimulationListBase___00__A6A_AV__TSharedRef_VITableRow___00__V__TSharedPtr_UFNavigationSimulationWidgetNode___00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar16[3] = pSVar2;
    puVar16[4] = pTVar31;
    if (pTVar31 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar31->WeakReferenceCount = (atomic<int>)((int)pTVar31->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar11 = true;
    bVar5 = true;
    bVar12 = true;
    puVar16[5] = local_30f0;
    puVar16[6] = CONCAT44(uStack_30e4,uStack_30e8);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar31);
  }
  if (bVar11) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar31);
  }
  if (bVar12) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2d30.SharedReferenceCount.ReferenceController);
  }
  bVar11 = false;
  bVar5 = false;
  bVar12 = false;
  if (local_2e08.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2e08.Accessor,&local_2e08);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar15->_OnSelectionChanged
             ,(FWriteAccessScope *)&local_2de8);
  local_2dd0 = &(pFVar15->_OnSelectionChanged).field_0x8;
  puVar16 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_2dd0);
  pTVar31 = local_res8;
  if (puVar16 != (undefined8 *)0x0) {
    uStack_30e4 = local_3060.SharedReferenceCount.ReferenceController._4_4_;
    local_30f0 = (FArguments *)HandleSourceListSelectionChanged;
    uStack_30e8 = 0;
    pTVar19 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_2d40);
    pTVar31 = (pTVar19->SharedReferenceCount).ReferenceController;
    local_30e0 = (FArguments *)pTVar19->Object;
    if (pTVar31 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar31->SharedReferenceCount = (atomic<int>)((int)pTVar31->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar31->SharedReferenceCount = (atomic<int>)((int)pTVar31->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar12 = true;
    bVar11 = true;
    bVar5 = true;
    *puVar16 = &
               ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_UFNavigationSimulationWidgetNode___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar18 = FDelegateHandle::GenerateNewID();
    puVar16[2] = uVar18;
    *puVar16 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSNavigationSimulationListBase___00__A6AXV__TSharedPtr_UFNavigationSimulationWidgetNode___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar16[3] = local_30e0;
    puVar16[4] = pTVar31;
    if (pTVar31 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar31->WeakReferenceCount = (atomic<int>)((int)pTVar31->WeakReferenceCount + 1);
      UNLOCK();
    }
    puVar16[5] = local_30f0;
    puVar16[6] = CONCAT44(uStack_30e4,uStack_30e8);
  }
  if (bVar12) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar31);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar31);
  }
  if (bVar11) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2d40.SharedReferenceCount.ReferenceController);
  }
  bVar5 = false;
  bVar12 = false;
  if (local_2de8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2de8.Accessor,&local_2de8);
  }
  pFVar20 = SHeaderRow::FArguments::FArguments(&local_a38);
  SHeaderRow::FColumn::FArguments::FArguments(&local_2508);
  local_2508._ColumnId = SNavigationSimulationListInternal::HeaderRow_Widget;
  local_3010 = __real_3f400000;
  local_2508._FillWidth.Value = __real_3f400000;
  local_300c = 1;
  local_3008 = (undefined1  [8])0x0;
  pvStack_3000 = (void *)0x0;
  local_2ff8 = 0;
  local_2508._FillWidth.bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_2508._FillWidth.Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3008);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3008);
  if (pvStack_3000 != (void *)0x0) {
    FMemory::Free(pvStack_3000);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3008);
  pFVar21 = FText::GetEmpty();
  local_2ee0.Value.TextData.Reference = (pFVar21->TextData).Reference;
  if (local_2ee0.Value.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_2ee0.Value.TextData.Reference + 8))
              (local_2ee0.Value.TextData.Reference,local_2ff0);
  }
  local_2ee0.Value.Flags = pFVar21->Flags;
  local_2ee0.bIsSet = true;
  local_2ee0.Getter._16_8_ = 0;
  local_2ee0.Getter._0_8_ = 0;
  local_2ee0.Getter._8_8_ = 0;
  pFVar22 = SHeaderRow::FColumn::FArguments::DefaultLabel(&local_2508,&local_2ee0);
  pFVar20 = SHeaderRow::FArguments::operator+(pFVar20,pFVar22);
  SHeaderRow::FColumn::FArguments::FArguments(&local_eb0);
  local_eb0._ColumnId = SNavigationSimulationListInternal::HeaderRow_Navigation_Left;
  local_eb0._FixedWidth.TypedValue = 15.0;
  local_eb0._FixedWidth.bIsSet = true;
  pFVar21 = FText::GetEmpty();
  local_2f10.Value.TextData.Reference = (pFVar21->TextData).Reference;
  if (local_2f10.Value.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_2f10.Value.TextData.Reference + 8))
              (local_2f10.Value.TextData.Reference,local_2fec);
  }
  local_2f10.Value.Flags = pFVar21->Flags;
  local_2f10.bIsSet = true;
  local_2f10.Getter._16_8_ = 0;
  local_2f10.Getter._0_8_ = 0;
  local_2f10.Getter._8_8_ = 0;
  pFVar22 = SHeaderRow::FColumn::FArguments::DefaultLabel(&local_eb0,&local_2f10);
  pFVar20 = SHeaderRow::FArguments::operator+(pFVar20,pFVar22);
  SHeaderRow::FColumn::FArguments::FArguments(&local_2980);
  local_2980._ColumnId = SNavigationSimulationListInternal::HeaderRow_Navigation_Right;
  local_2980._FixedWidth.TypedValue = 15.0;
  local_2980._FixedWidth.bIsSet = true;
  pFVar21 = FText::GetEmpty();
  local_3090.TextData.Reference = (pFVar21->TextData).Reference;
  if (local_3090.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_3090.TextData.Reference + 8))
              (local_3090.TextData.Reference,local_2fe8);
  }
  local_3090.Flags = pFVar21->Flags;
  local_3080 = 1;
  local_3068 = 0;
  local_3078 = (undefined1  [8])0x0;
  FStack_3070.Data = (FScriptContainerElement *)0x0;
  FText::operator=(&local_2980._DefaultLabel.Value,&local_3090);
  local_2980._DefaultLabel.bIsSet = (bool)local_3080;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_2980._DefaultLabel.Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3078);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3078,
             (FWriteAccessScope *)&local_2eb0);
  if (((int)local_3068 != 0) && (FStack_3070.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_3070.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_3070,0,0,0x10);
    local_3068 = local_3068 & 0xffffffff00000000;
  }
  if (local_2eb0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2eb0.Accessor,&local_2eb0);
  }
  if (FStack_3070.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_3070.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3078);
  if (local_3090.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_3090.TextData.Reference + 0x10))();
  }
  pFVar20 = SHeaderRow::FArguments::operator+(pFVar20,&local_2980);
  SHeaderRow::FColumn::FArguments::FArguments(&local_1328);
  local_1328._ColumnId = SNavigationSimulationListInternal::HeaderRow_Navigation_Up;
  local_1328._FixedWidth.TypedValue = 15.0;
  local_1328._FixedWidth.bIsSet = true;
  pFVar21 = FText::GetEmpty();
  local_2f40.Value.TextData.Reference = (pFVar21->TextData).Reference;
  if (local_2f40.Value.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_2f40.Value.TextData.Reference + 8))
              (local_2f40.Value.TextData.Reference,local_2fe4);
  }
  local_2f40.Value.Flags = pFVar21->Flags;
  local_2f40.bIsSet = true;
  local_2f40.Getter._16_8_ = 0;
  local_2f40.Getter._0_8_ = 0;
  local_2f40.Getter._8_8_ = 0;
  pFVar22 = SHeaderRow::FColumn::FArguments::DefaultLabel(&local_1328,&local_2f40);
  pFVar20 = SHeaderRow::FArguments::operator+(pFVar20,pFVar22);
  SHeaderRow::FColumn::FArguments::FArguments(&local_17a0);
  local_17a0._ColumnId = SNavigationSimulationListInternal::HeaderRow_Navigation_Down;
  local_17a0._FixedWidth.TypedValue = 15.0;
  local_17a0._FixedWidth.bIsSet = true;
  pFVar21 = FText::GetEmpty();
  local_2e98.Value.TextData.Reference = (pFVar21->TextData).Reference;
  if (local_2e98.Value.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_2e98.Value.TextData.Reference + 8))
              (local_2e98.Value.TextData.Reference,local_2fe0);
  }
  local_2e98.Value.Flags = pFVar21->Flags;
  local_2e98.bIsSet = true;
  local_2e98.Getter._16_8_ = 0;
  local_2e98.Getter._0_8_ = 0;
  local_2e98.Getter._8_8_ = 0;
  pFVar22 = SHeaderRow::FColumn::FArguments::DefaultLabel(&local_17a0,&local_2e98);
  pFVar20 = SHeaderRow::FArguments::operator+(pFVar20,pFVar22);
  SHeaderRow::FColumn::FArguments::FArguments(&local_1c18);
  local_1c18._ColumnId = SNavigationSimulationListInternal::HeaderRow_Navigation_Previous;
  local_1c18._FixedWidth.TypedValue = 15.0;
  local_1c18._FixedWidth.bIsSet = true;
  pFVar21 = FText::GetEmpty();
  local_2e68.Value.TextData.Reference = (pFVar21->TextData).Reference;
  if (local_2e68.Value.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_2e68.Value.TextData.Reference + 8))
              (local_2e68.Value.TextData.Reference,local_2fdc);
  }
  local_2e68.Value.Flags = pFVar21->Flags;
  local_2e68.bIsSet = true;
  local_2e68.Getter._16_8_ = 0;
  local_2e68.Getter._0_8_ = 0;
  local_2e68.Getter._8_8_ = 0;
  pFVar22 = SHeaderRow::FColumn::FArguments::DefaultLabel(&local_1c18,&local_2e68);
  pFVar20 = SHeaderRow::FArguments::operator+(pFVar20,pFVar22);
  SHeaderRow::FColumn::FArguments::FArguments(&local_2090);
  local_2090._ColumnId = SNavigationSimulationListInternal::HeaderRow_Navigation_Next;
  local_2090._FixedWidth.TypedValue = 15.0;
  local_2090._FixedWidth.bIsSet = true;
  pFVar21 = FText::GetEmpty();
  local_2e38.Value.TextData.Reference = (pFVar21->TextData).Reference;
  if (local_2e38.Value.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_2e38.Value.TextData.Reference + 8))
              (local_2e38.Value.TextData.Reference,local_2fd8);
  }
  local_2e38.Value.Flags = pFVar21->Flags;
  local_2e38.bIsSet = true;
  local_2e38.Getter._16_8_ = 0;
  local_2e38.Getter._0_8_ = 0;
  local_2e38.Getter._8_8_ = 0;
  pFVar22 = SHeaderRow::FColumn::FArguments::DefaultLabel(&local_2090,&local_2e38);
  pFVar20 = SHeaderRow::FArguments::operator+(pFVar20,pFVar22);
  FLLMScope::FLLMScope(&local_3110,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2fcc = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2fc0,&local_2fcc,true);
  TSlateDecl<SHeaderRow,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SHeaderRow,RequiredArgs::T0RequiredArgs>
            (&local_2d88,"SHeaderRow",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SNavigationSimulationList.cpp"
             ,0x101,(T0RequiredArgs *)local_res18);
  FMemScope::~FMemScope(&local_2fc0);
  FLLMScope::~FLLMScope(&local_3110);
  pTVar23 = TSlateDecl<SHeaderRow,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_2d88,&local_3060,pFVar20);
  pTVar31 = (pTVar23->SharedReferenceCount).ReferenceController;
  pSVar3 = pTVar23->Object;
  if (pTVar31 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar31->SharedReferenceCount = (atomic<int>)((int)pTVar31->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar31->SharedReferenceCount = (atomic<int>)((int)pTVar31->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2d50 = (pFVar15->_HeaderRow).Object;
  pTStack_2d48 = (pFVar15->_HeaderRow).SharedReferenceCount.ReferenceController;
  (pFVar15->_HeaderRow).Object = pSVar3;
  (pFVar15->_HeaderRow).SharedReferenceCount.ReferenceController = pTVar31;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_2d48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar31);
  FLLMScope::FLLMScope(&local_310c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2f90 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2fa8,&local_2f90,true);
  TSlateDecl<SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,RequiredArgs::T0RequiredArgs>
  ::
  TSlateDecl<SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,RequiredArgs::T0RequiredArgs>
            (&local_30a8,"SListView<FNavigationSimulationWidgetNodePtr>",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SNavigationSimulationList.cpp"
             ,0xfa,(T0RequiredArgs *)&local_res8);
  FMemScope::~FMemScope(&local_2fa8);
  FLLMScope::~FLLMScope(&local_310c);
  if (local_30a8._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_30a8._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_30a8._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_2d70 = (this->ListView).Object;
  pTStack_2d68 = (this->ListView).SharedReferenceCount.ReferenceController;
  (this->ListView).Object = local_30a8._Widget.Object;
  (this->ListView).SharedReferenceCount.ReferenceController =
       local_30a8._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_2d68);
  pSVar24 = TSharedPtr<SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,1>::operator->
                      (&local_30a8._Widget);
  SWidget::SWidgetConstruct((SWidget *)pSVar24,(FSlateBaseNamedArgs *)pFVar15);
  pSVar24 = local_30a8._Widget.Object;
  SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_>::Construct
            (local_30a8._Widget.Object,pFVar15);
  pSVar25 = TSharedPtr<SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,1>::operator->
                      (&local_30a8._Widget);
  if ((pSVar25->_padding_ & 0x10) == 0) {
    cVar9 = (**(code **)(pSVar25->_padding_ + 0x228))(pSVar25);
    bVar10 = 0;
    if (cVar9 != '\0') goto LAB_142e40ccf;
  }
  else {
LAB_142e40ccf:
    bVar10 = 0x20;
  }
  *(byte *)&pSVar25->_padding_ = (byte)pSVar25->_padding_ & 0xdf;
  *(byte *)&pSVar25->_padding_ = (byte)pSVar25->_padding_ | bVar10;
  pSVar25 = TSharedPtr<SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,1>::operator->
                      (&local_30a8._Widget);
  pbVar1 = (byte *)((longlong)&pSVar25->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((local_30a8._Widget.Object == (SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_> *)0x0
      ) && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x416,L""), bVar11)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FVar7.ReferenceController = local_30a8._Widget.SharedReferenceCount.ReferenceController;
  local_30a8._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_30a8._Widget.Object = (SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_> *)0x0;
  if ((pSVar24 == (SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_> *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar11)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar26 = local_30c0;
  local_30b8 = pSVar24;
  local_30b0.ReferenceController = FVar7.ReferenceController;
  if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar7.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar7.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (FVar7.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar7.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_> **)&local_30c0->_padding_ !=
      &local_30b8) {
    local_30c0->_padding_ = (longlong)pSVar24;
    local_30b8 = (SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&local_30c0->_padding_,&local_30b0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30b0.ReferenceController);
  local_30f0 = SSplitter::FArguments::operator+(pFVar13,pFVar26);
  pFVar26 = SSplitter::Slot(&local_2ab0);
  local_2f80.Value = 0.5;
  local_2f80.bIsSet = true;
  local_2f80.Getter._16_8_ = 0;
  local_2f80.Getter._0_8_ = 0;
  local_2f80.Getter._8_8_ = 0;
  local_30c0 = SSplitter::FSlot::FSlotArguments::Value(pFVar26,&local_2f80);
  pFVar27 = SNavigationSimulationListInternal::SDetailView::FArguments::FArguments
                      ((FArguments *)local_2cd8);
  local_30e0 = pFVar27;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &pFVar27->_OnNavigateToLiveWidget,(FWriteAccessScope *)&local_2dc8);
  local_2db0 = &(pFVar27->_OnNavigateToLiveWidget).field_0x8;
  puVar16 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_2db0);
  pTVar31 = local_res8;
  if (puVar16 != (undefined8 *)0x0) {
    uStack_30f4 = local_3060.SharedReferenceCount.ReferenceController._4_4_;
    local_3100 = (FName)HandleNavigateToLiveWidget;
    uStack_30f8 = 0;
    pTVar19 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_2d00);
    pTVar31 = (pTVar19->SharedReferenceCount).ReferenceController;
    pSVar2 = pTVar19->Object;
    if (pTVar31 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar31->SharedReferenceCount = (atomic<int>)((int)pTVar31->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar31->SharedReferenceCount = (atomic<int>)((int)pTVar31->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar12 = true;
    bVar5 = true;
    *puVar16 = &
               ___7__TCommonDelegateInstanceState___A6AXV__TWeakPtr___CBVSWidget___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar18 = FDelegateHandle::GenerateNewID();
    puVar16[2] = uVar18;
    *puVar16 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSNavigationSimulationListBase___00__A6AXV__TWeakPtr___CBVSWidget___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar16[3] = pSVar2;
    puVar16[4] = pTVar31;
    if (pTVar31 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar31->WeakReferenceCount = (atomic<int>)((int)pTVar31->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(FName *)(puVar16 + 5) = local_3100;
    puVar16[6] = CONCAT44(uStack_30f4,uStack_30f8);
  }
  if (bVar12) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar31);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2d00.SharedReferenceCount.ReferenceController);
  }
  bVar11 = false;
  bVar5 = false;
  bVar12 = false;
  if (local_2dc8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2dc8.Accessor,&local_2dc8);
  }
  pFVar27 = local_30e0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &local_30e0->_OnNavigateToSnapshotWidget,(FWriteAccessScope *)&local_2da8);
  local_2d90 = &(pFVar27->_OnNavigateToSnapshotWidget).field_0x8;
  puVar16 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_2d90);
  pTVar31 = local_res8;
  if (puVar16 != (undefined8 *)0x0) {
    uStack_30f4 = local_3060.SharedReferenceCount.ReferenceController._4_4_;
    local_3100 = (FName)HandleNavigateToSnapshotWidget;
    uStack_30f8 = 0;
    pTVar19 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_2d10);
    pTVar31 = (pTVar19->SharedReferenceCount).ReferenceController;
    pSVar2 = pTVar19->Object;
    if (pTVar31 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar31->SharedReferenceCount = (atomic<int>)((int)pTVar31->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar31->SharedReferenceCount = (atomic<int>)((int)pTVar31->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar11 = true;
    bVar5 = true;
    bVar12 = true;
    *puVar16 = &___7__TCommonDelegateInstanceState___A6AX_K_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar18 = FDelegateHandle::GenerateNewID();
    puVar16[2] = uVar18;
    *puVar16 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSNavigationSimulationListBase___00__A6AX_K_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar16[3] = pSVar2;
    puVar16[4] = pTVar31;
    if (pTVar31 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar31->WeakReferenceCount = (atomic<int>)((int)pTVar31->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(FName *)(puVar16 + 5) = local_3100;
    puVar16[6] = CONCAT44(uStack_30f4,uStack_30f8);
  }
  if (bVar12) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar31);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar31);
  }
  if (bVar11) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2d10.SharedReferenceCount.ReferenceController);
  }
  if (local_2da8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2da8.Accessor,&local_2da8);
  }
  FLLMScope::FLLMScope(&local_3108,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_3100 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2f88,&local_3100,true);
  TSlateDecl<SNavigationSimulationListInternal::SDetailView,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SNavigationSimulationListInternal::SDetailView,RequiredArgs::T0RequiredArgs>
            (&local_30d8,"SNavigationSimulationListInternal::SDetailView",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SNavigationSimulationList.cpp"
             ,0x11d,local_res10);
  FMemScope::~FMemScope(&local_2f88);
  FLLMScope::~FLLMScope(&local_3108);
  if (local_30d8._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_30d8._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_30d8._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_2d20 = (this->ElementDetail).Object;
  pTStack_2d18 = (this->ElementDetail).SharedReferenceCount.ReferenceController;
  (this->ElementDetail).Object = local_30d8._Widget.Object;
  (this->ElementDetail).SharedReferenceCount.ReferenceController =
       local_30d8._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_2d18);
  pSVar28 = TSharedPtr<SNavigationSimulationListInternal::SDetailView,1>::operator->
                      (&local_30d8._Widget);
  SWidget::SWidgetConstruct((SWidget *)pSVar28,(FSlateBaseNamedArgs *)local_30e0);
  pSVar28 = local_30d8._Widget.Object;
  SNavigationSimulationListInternal::SDetailView::Construct(local_30d8._Widget.Object,local_30e0);
  pSVar29 = TSharedPtr<SNavigationSimulationListInternal::SDetailView,1>::operator->
                      (&local_30d8._Widget);
  if ((pSVar29->_padding_ & 0x10) == 0) {
    cVar9 = (**(code **)(pSVar29->_padding_ + 0x228))(pSVar29);
    bVar10 = 0;
    if (cVar9 == '\0') goto LAB_142e41156;
  }
  bVar10 = 0x20;
LAB_142e41156:
  *(byte *)&pSVar29->_padding_ = (byte)pSVar29->_padding_ & 0xdf;
  *(byte *)&pSVar29->_padding_ = (byte)pSVar29->_padding_ | bVar10;
  pSVar29 = TSharedPtr<SNavigationSimulationListInternal::SDetailView,1>::operator->
                      (&local_30d8._Widget);
  pbVar1 = (byte *)((longlong)&pSVar29->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((local_30d8._Widget.Object == (SDetailView *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar12)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FVar6.ReferenceController = local_30d8._Widget.SharedReferenceCount.ReferenceController;
  local_30d8._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_30d8._Widget.Object = (SDetailView *)0x0;
  if ((pSVar28 == (SDetailView *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar12)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_2f60.Object = (SWidget *)pSVar28;
  local_2f60.SharedReferenceCount.ReferenceController = FVar6.ReferenceController;
  if (FVar6.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar6.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar6.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar26 = TSlotBase<SSplitter::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)local_30c0,&local_2f60);
  pFVar13 = SSplitter::FArguments::operator+(local_30f0,pFVar26);
  FLLMScope::FLLMScope(&local_3104,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2fb8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2fb0,&local_2fb8,true);
  TSlateDecl<SSplitter,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SSplitter,RequiredArgs::T0RequiredArgs>
            (&local_2cf0,"SSplitter",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SNavigationSimulationList.cpp"
             ,0xf3,local_res20);
  FMemScope::~FMemScope(&local_2fb0);
  FLLMScope::~FLLMScope(&local_3104);
  pTVar30 = TSlateDecl<SSplitter,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_2cf0,&local_2d60,pFVar13);
  pTVar31 = (pTVar30->SharedReferenceCount).ReferenceController;
  local_2f50.Object = (SWidget *)pTVar30->Object;
  if (pTVar31 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar31->SharedReferenceCount = (atomic<int>)((int)pTVar31->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2f50.SharedReferenceCount.ReferenceController = pTVar31;
  TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::operator[]
            ((TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *)
             &this->_padding_,&local_2f50);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar31);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2d60.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2cf0._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar6.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar6.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2ac8);
  if ((void *)local_2ac8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_2ac8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2ac8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2ae0);
  if ((void *)local_2ae0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_2ae0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2ae0);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_2cd8);
  SSplitter::FSlot::FSlotArguments::~FSlotArguments(&local_2ab0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar7.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar7.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30a8._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             CONCAT44(local_3060.SharedReferenceCount.ReferenceController._4_4_,
                      local_3060.SharedReferenceCount.ReferenceController._0_4_));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2d88._Widget.SharedReferenceCount.ReferenceController);
  SHeaderRow::FColumn::FArguments::~FArguments(&local_2090);
  SHeaderRow::FColumn::FArguments::~FArguments(&local_1c18);
  SHeaderRow::FColumn::FArguments::~FArguments(&local_17a0);
  SHeaderRow::FColumn::FArguments::~FArguments(&local_1328);
  SHeaderRow::FColumn::FArguments::~FArguments(&local_2980);
  SHeaderRow::FColumn::FArguments::~FArguments(&local_eb0);
  SHeaderRow::FColumn::FArguments::~FArguments(&local_2508);
  SHeaderRow::FArguments::~FArguments(&local_a38);
  SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_>::FArguments::~FArguments(&local_530);
  SSplitter::FSlot::FSlotArguments::~FSlotArguments(&local_2a18);
  SSplitter::FArguments::~FArguments(&local_7c0);
  return;
}

// GetSelectedItems @ 142ea7a60

TArray<TSharedPtr<FNavigationSimulationWidgetNode,1>,TSizedDefaultAllocator<32>_> * __thiscall
SNavigationSimulationListBase::GetSelectedItems
          (SNavigationSimulationListBase *this,
          TArray<TSharedPtr<FNavigationSimulationWidgetNode,1>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TArray<TSharedPtr<FNavigationSimulationWidgetNode,1>,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<TSharedPtr<FNavigationSimulationWidgetNode,1>,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  if ((this->ListView).Object == (SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArray<TSharedPtr<FNavigationSimulationWidgetNode,1>,TSizedDefaultAllocator<32>_> *)
               (*pcVar1)();
      return pTVar3;
    }
  }
  SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_>::GetSelectedItems
            ((this->ListView).Object,&local_18);
  (__return_storage_ptr__->AllocatorInstance).Data = local_18.AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = local_18.ArrayNum;
  __return_storage_ptr__->ArrayMax = local_18.ArrayMax;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  DestructItems<TSharedPtr<FNavigationSimulationWidgetNode,1>,int>
            ((TSharedPtr<FNavigationSimulationWidgetNode,1> *)0x0,0);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// HandleNavigateToLiveWidget @ 142eb0f00

void __thiscall
SNavigationSimulationListBase::HandleNavigateToLiveWidget
          (SNavigationSimulationListBase *this,TWeakPtr<SWidget_const_,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  SWidget *local_18;
  TReferenceControllerBase<1> *local_10;
  
  if (this->bIsInSelectionGuard == false) {
    this->bIsInSelectionGuard = true;
    pcVar3 = *(code **)(this->_padding_ + 0x268);
    local_18 = param_1->Object;
    local_10 = (param_1->WeakReferenceCount).ReferenceController;
    if (local_10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_10->WeakReferenceCount = (atomic<int>)((int)local_10->WeakReferenceCount + 1);
      UNLOCK();
    }
    (*pcVar3)(this,&local_18,0);
    this->bIsInSelectionGuard = false;
    pTVar4 = (param_1->WeakReferenceCount).ReferenceController;
  }
  else {
    pTVar4 = (param_1->WeakReferenceCount).ReferenceController;
  }
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  return;
}

// HandleNavigateToSnapshotWidget @ 142eb0f90

void __thiscall
SNavigationSimulationListBase::HandleNavigateToSnapshotWidget
          (SNavigationSimulationListBase *this,ulong64 param_1)

{
  undefined8 local_18;
  undefined8 uStack_10;
  
  if (this->bIsInSelectionGuard == false) {
    this->bIsInSelectionGuard = true;
    local_18 = 0;
    uStack_10 = 0;
    (**(code **)(this->_padding_ + 0x268))(0,&local_18,param_1);
    this->bIsInSelectionGuard = false;
  }
  return;
}

// HandleSourceListSelectionChanged @ 142eb6650

void __thiscall
SNavigationSimulationListBase::HandleSourceListSelectionChanged
          (SNavigationSimulationListBase *this,
          TSharedPtr<FNavigationSimulationWidgetNode,1> *param_1,Type param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->bIsInSelectionGuard == false) {
    if ((this->ElementDetail).Object == (SDetailView *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    SNavigationSimulationListInternal::SDetailView::SetWidgetItem
              ((this->ElementDetail).Object,param_1);
    if (param_2 != Direct) {
      bVar2 = this->bIsInSelectionGuard;
      this->bIsInSelectionGuard = true;
      (**(code **)(this->_padding_ + 0x260))(this,param_1);
      this->bIsInSelectionGuard = bVar2;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// MakeSourceListViewWidget @ 142ec2370

TSharedRef<ITableRow,1> * __thiscall
SNavigationSimulationListBase::MakeSourceListViewWidget
          (SNavigationSimulationListBase *this,TSharedRef<ITableRow,1> *__return_storage_ptr__,
          TSharedPtr<FNavigationSimulationWidgetNode,1> *param_1,
          TSharedRef<STableViewBase,1> *param_2)

{
  FNavigationSimulationWidgetNode *pFVar1;
  code *pcVar2;
  SListElement *pSVar3;
  bool bVar4;
  FArguments *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSharedRef<ITableRow,1> *pTVar7;
  TSharedRef<SNavigationSimulationListInternal::SListElement,1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  FLLMScope local_res10 [2];
  FName local_res18;
  T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&> local_res20;
  TSlateDecl<SNavigationSimulationListInternal::SListElement,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
  local_2a8;
  FMemScope local_290;
  undefined8 local_288;
  FSharedReferencer<1> local_280;
  TSharedRef<SNavigationSimulationListInternal::SListElement,1> local_278;
  FNavigationSimulationWidgetNode *local_268;
  TReferenceControllerBase<1> *pTStack_260;
  TSharedRef<SNavigationSimulationListInternal::SListElement,1> local_258;
  FArguments local_248;
  
  pFVar5 = SNavigationSimulationListInternal::SListElement::FArguments::FArguments(&local_248);
  pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar1 = param_1->Object;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_268 = (pFVar5->_WidgetItem).Object;
  pTStack_260 = (pFVar5->_WidgetItem).SharedReferenceCount.ReferenceController;
  (pFVar5->_WidgetItem).Object = pFVar1;
  (pFVar5->_WidgetItem).SharedReferenceCount.ReferenceController = pTVar9;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_260);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  local_res20.Arg0 = param_2;
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_290,&local_res18,true);
  local_2a8._RequiredArgs = &local_res20;
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  local_2a8._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0x478);
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VSListElement_SNavigationSimulationListInternal___00_SharedPointerInternals__6B_
    ;
    memset(pTVar6 + 1,0,0x468);
    STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>::
    STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>
              ((STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_> *)(pTVar6 + 1));
    pTVar6[0x40].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x40].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x41]._padding_ = 0;
    pTVar6[0x41].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x41].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x42]._padding_ = 0;
    pTVar6[0x43].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x43].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar6[0x44]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar6[0x44]._padding_ + 4) = 0x80;
    pTVar6[0x44].SharedReferenceCount = (atomic<int>)0xffffffff;
    pTVar6[0x44].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x45].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x45].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar6[0x46]._padding_ = 0;
    pTVar6[1]._padding_ =
         (longlong)&SNavigationSimulationListInternal::SListElement::_vftable__for__ITableRow__;
    *(undefined ***)&pTVar6[1].SharedReferenceCount =
         &SNavigationSimulationListInternal::SListElement::_vftable__for__SBorder__;
    pTVar6[0x46].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x46].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x47]._padding_ = 0;
    pTVar9 = pTVar6;
  }
  TSharedRef<SNavigationSimulationListInternal::SListElement,1>::
  TSharedRef<SNavigationSimulationListInternal::SListElement,1>
            (&local_278,(SListElement *)(pTVar9 + 1),pTVar9);
  local_280.ReferenceController = local_278.SharedReferenceCount.ReferenceController;
  if (local_278.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_278.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_278.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2a8._Widget.Object = local_278.Object;
  local_288 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            (&local_2a8._Widget.SharedReferenceCount,&local_280);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_280.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_278.SharedReferenceCount.ReferenceController);
  pSVar3 = local_2a8._Widget.Object;
  if ((local_2a8._Widget.Object == (SListElement *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pTVar7 = (TSharedRef<ITableRow,1> *)(*pcVar2)();
    return pTVar7;
  }
  SWidget::SetDebugInfo
            ((SWidget *)&pSVar3->_padding_,"SNavigationSimulationListInternal::SListElement",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SNavigationSimulationList.cpp"
             ,0x15f,0x468);
  FMemScope::~FMemScope(&local_290);
  FLLMScope::~FLLMScope(local_res10);
  pTVar8 = TSlateDecl<SNavigationSimulationListInternal::SListElement,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
           ::operator<<=(&local_2a8,&local_258,pFVar5);
  __return_storage_ptr__->Object = (ITableRow *)pTVar8->Object;
  pTVar9 = (pTVar8->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_258.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2a8._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_248._WidgetItem.SharedReferenceCount.ReferenceController);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_248);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// SelectLiveWidget @ 142f02cf0

void __thiscall
SNavigationSimulationListBase::SelectLiveWidget
          (SNavigationSimulationListBase *this,TSharedPtr<SWidget_const_,1> *param_1)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  TSharedPtr<FNavigationSimulationWidgetNode,1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_> *pSVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  TSharedPtr<FNavigationSimulationWidgetNode,1> *pTVar10;
  SWidget *local_28;
  TReferenceControllerBase<1> *local_20;
  TSharedPtr<FNavigationSimulationWidgetNode,1> local_18;
  
  if (this->bIsInSelectionGuard == false) {
    local_28 = param_1->Object;
    pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar3 = (TSharedPtr<FNavigationSimulationWidgetNode,1> *)
             (this->ItemsSource).AllocatorInstance.Data;
    iVar1 = (this->ItemsSource).ArrayNum;
    local_20 = pTVar2;
    for (pTVar10 = pTVar3; pTVar10 != pTVar3 + iVar1; pTVar10 = pTVar10 + 1) {
      bVar5 = `FNavigationSimulationNodeUtils::IndexOfLiveWidget'::__l2::<lambda_1>::operator()
                        (&local_28,pTVar10);
      if (bVar5) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
        pSVar7 = (this->ListView).Object;
        uVar9 = (uint)((longlong)pTVar10 - (longlong)pTVar3 >> 4);
        if (uVar9 != 0xffffffff) {
          if ((pSVar7 == (SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_> *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pSVar7 = (this->ListView).Object;
          uVar6 = 0;
          if ((int)uVar9 < (this->ItemsSource).ArrayNum) {
            uVar6 = ~uVar9 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar8 = (this->ItemsSource).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x10;
          local_18.Object = *(FNavigationSimulationWidgetNode **)pFVar8;
          local_18.SharedReferenceCount.ReferenceController =
               *(TReferenceControllerBase<1> **)(pFVar8 + 8);
          if (local_18.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_>::SetSelection
                    (pSVar7,&local_18,Direct);
          return;
        }
        goto LAB_142f02d7a;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pSVar7 = (this->ListView).Object;
LAB_142f02d7a:
    if ((pSVar7 == (SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_> *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_>::ClearSelection
              ((this->ListView).Object);
  }
  return;
}

// SelectSnapshotWidget @ 142f03200

void __thiscall
SNavigationSimulationListBase::SelectSnapshotWidget
          (SNavigationSimulationListBase *this,ulong64 param_1)

{
  SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_> *pSVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  TSharedPtr<FNavigationSimulationWidgetNode,1> local_18;
  
  if (this->bIsInSelectionGuard == false) {
    uVar4 = FNavigationSimulationNodeUtils::IndexOfSnapshotWidget(&this->ItemsSource,param_1);
    pSVar1 = (this->ListView).Object;
    if (uVar4 != 0xffffffff) {
      if (pSVar1 == (SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_> *)0x0) {
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
      pSVar1 = (this->ListView).Object;
      uVar5 = 0;
      if ((int)uVar4 < (this->ItemsSource).ArrayNum) {
        uVar5 = ~uVar4 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      pFVar6 = (this->ItemsSource).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x10;
      local_18.Object = *(FNavigationSimulationWidgetNode **)pFVar6;
      local_18.SharedReferenceCount.ReferenceController =
           *(TReferenceControllerBase<1> **)(pFVar6 + 8);
      if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_>::SetSelection
                (pSVar1,&local_18,Direct);
      return;
    }
    if (pSVar1 == (SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_> *)0x0) {
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
    SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_>::ClearSelection
              ((this->ListView).Object);
  }
  return;
}

// SetListItemsSource @ 142f04090

void __thiscall
SNavigationSimulationListBase::SetListItemsSource
          (SNavigationSimulationListBase *this,
          TArray<TSharedPtr<FNavigationSimulationWidgetNode,1>,TSizedDefaultAllocator<32>_> *param_1
          )

{
  code *pcVar1;
  bool bVar2;
  TSharedPtr<FNavigationSimulationWidgetNode,1> local_18;
  
  TArray<TSharedPtr<FNavigationSimulationWidgetNode,1>,TSizedDefaultAllocator<32>_>::operator=
            (&this->ItemsSource,param_1);
  if ((this->ListView).Object == (SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (**(code **)(((this->ListView).Object)->_padding_ + 0x250))();
  if ((this->ElementDetail).Object == (SDetailView *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_18.Object = (FNavigationSimulationWidgetNode *)0x0;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  SNavigationSimulationListInternal::SDetailView::SetWidgetItem
            ((this->ElementDetail).Object,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

