// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 36

// ~STableViewTesting @ 142f3fe50

void __thiscall STableViewTesting::~STableViewTesting(STableViewTesting *this)

{
  FScriptContainerElement *pFVar1;
  ForElementType<FSetElementId> FVar2;
  
  DestructItems<TSharedPtr<enum_ESelectionMode::Type,1>,int>
            ((TSharedPtr<ESelectionMode::Type,1> *)(this->SelectionModes).AllocatorInstance.Data,
             (this->SelectionModes).ArrayNum);
  pFVar1 = (this->SelectionModes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SelectionModeCombo).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CurSelectionMode).SharedReferenceCount.ReferenceController);
  DestructItems<TSharedPtr<FTestData,1>,int>
            ((TSharedPtr<FTestData,1> *)(this->Items).AllocatorInstance.Data,(this->Items).ArrayNum)
  ;
  pFVar1 = (this->Items).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TreeBeingTested).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->HorizontalTileViewBeingTested).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TileViewBeingTested).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->HorizontalListBeingTested).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ListBeingTested).SharedReferenceCount.ReferenceController);
  (this->StoredExpandedItems).HashSize = 0;
  FVar2 = (this->StoredExpandedItems).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<TSharedPtr<FTestData,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TSharedPtr<FTestData,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->StoredExpandedItems).Elements);
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  return;
}

// CollapseAll @ 142f5be50

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
STableViewTesting::CollapseAll(STableViewTesting *this,FReply *__return_storage_ptr__)

{
  undefined1 *puVar1;
  TMap<TSharedPtr<FTestData,1>,FSparseItemInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FTestData,1>,FSparseItemInfo,0>_>
  *this_00;
  int iVar2;
  STreeView<TSharedPtr<FTestData,1>_> *pSVar3;
  code *pcVar4;
  bool bVar5;
  FReply *pFVar6;
  
  if (((this->TreeBeingTested).Object == (STreeView<TSharedPtr<FTestData,1>_> *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar6 = (FReply *)(*pcVar4)();
    return pFVar6;
  }
  pSVar3 = (this->TreeBeingTested).Object;
  this_00 = &pSVar3->SparseItemInfos;
  bVar5 = 1 < *(int *)&(pSVar3->SparseItemInfos).field_0x48;
  if (!bVar5) {
    TSet<TTuple<TSharedPtr<FTestData,1>,FSparseItemInfo>,TDefaultMapHashableKeyFuncs<TSharedPtr<FTestData,1>,FSparseItemInfo,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<TSharedPtr<FTestData,1>,FSparseItemInfo>,TDefaultMapHashableKeyFuncs<TSharedPtr<FTestData,1>,FSparseItemInfo,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  TSparseArray<TSparseSetElement<TTuple<TSharedPtr<FTestData,1>,FSparseItemInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<TSharedPtr<FTestData,1>,FSparseItemInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_00,0,*(int *)&(pSVar3->SparseItemInfos).field_0x8);
  puVar1 = &(pSVar3->SparseItemInfos).field_0xc;
  *(undefined4 *)&(pSVar3->SparseItemInfos).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(pSVar3->SparseItemInfos).field_0x30 = 0xffffffff;
  *(undefined4 *)&(pSVar3->SparseItemInfos).field_0x34 = 0;
  iVar2 = *(int *)&(pSVar3->SparseItemInfos).field_0x2c;
  *(undefined4 *)&(pSVar3->SparseItemInfos).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(pSVar3->SparseItemInfos).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(pSVar3->SparseItemInfos).field_0x10,0);
  }
  if (bVar5) {
    *(undefined4 *)&(pSVar3->SparseItemInfos).field_0x48 = 1;
    TSet<TTuple<TSharedPtr<FTestData,1>,FSparseItemInfo>,TDefaultMapHashableKeyFuncs<TSharedPtr<FTestData,1>,FSparseItemInfo,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<TSharedPtr<FTestData,1>,FSparseItemInfo>,TDefaultMapHashableKeyFuncs<TSharedPtr<FTestData,1>,FSparseItemInfo,0>,FDefaultSetAllocator>
              *)this_00);
  }
  (**(code **)(*(longlong *)pSVar3 + 0x248))(pSVar3);
  if (((this->TreeBeingTested).Object == (STreeView<TSharedPtr<FTestData,1>_> *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar6 = (FReply *)(*pcVar4)();
    return pFVar6;
  }
  (**(code **)(*(longlong *)(this->TreeBeingTested).Object + 0x248))();
  FReply::FReply(__return_storage_ptr__,true);
  return __return_storage_ptr__;
}

// GenerateSelectionModeMenuItem @ 142fcd730

TSharedRef<SWidget,1> * __thiscall
STableViewTesting::GenerateSelectionModeMenuItem
          (STableViewTesting *this,TSharedRef<SWidget,1> *__return_storage_ptr__,
          TSharedPtr<ESelectionMode::Type,1> *param_1)

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
  pFVar3 = GetSelectedModeText(this,&local_5b0,(TSharedPtr<ESelectionMode::Type,1> *)&local_5d8);
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
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\STableViewTesting.cpp"
             ,0x618,local_res10);
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

// GetFixedItemOffsetValue @ 142fd2590

TOptional<double> * __thiscall
STableViewTesting::GetFixedItemOffsetValue
          (STableViewTesting *this,TOptional<double> *__return_storage_ptr__)

{
  __return_storage_ptr__->TypedValue = this->FixedLineScrollOffset;
  __return_storage_ptr__->bIsSet = true;
  return __return_storage_ptr__;
}

// GetIsFixedItemOffsetEnabled @ 142fd34f0

bool __thiscall STableViewTesting::GetIsFixedItemOffsetEnabled(STableViewTesting *this)

{
  return this->bIsFixedLineScrollOffsetEnabled;
}

// GetListContextMenu @ 142fd37a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<SWidget,1> * __thiscall
STableViewTesting::GetListContextMenu
          (STableViewTesting *this,TSharedPtr<SWidget,1> *__return_storage_ptr__)

{
  code *pcVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  FArguments *pFVar9;
  FSlotArguments *pFVar10;
  FArguments *pFVar11;
  ISlateStyle *pIVar12;
  FName *pFVar13;
  FArguments *pFVar14;
  FText *pFVar15;
  TSharedRef<STextBlock,1> *pTVar16;
  TSharedRef<SBorder,1> *pTVar17;
  FSizeParam *pFVar18;
  FArguments *pFVar19;
  TSharedRef<STestMenu,1> *pTVar20;
  TSharedRef<SVerticalBox,1> *pTVar21;
  T0RequiredArgs local_res10 [8];
  T0RequiredArgs local_res18 [8];
  T0RequiredArgs local_res20 [8];
  FLLMScope local_1108 [2];
  FName local_1100;
  TReferenceControllerBase<1> *pTStack_10f8;
  bool local_10f0;
  T0RequiredArgs local_10e8 [8];
  FName local_10e0;
  SBorder *local_10d8;
  FSharedReferencer<1> local_10d0;
  STestMenu *local_10c8;
  FSharedReferencer<1> local_10c0;
  FSlateBrush *local_10b8;
  undefined1 local_10b0;
  undefined1 local_10a8 [8];
  ForAnyElementType FStack_10a0;
  ulonglong local_1098;
  FText local_1090;
  bool local_1080;
  undefined1 local_1078 [8];
  ForAnyElementType FStack_1070;
  ulonglong local_1068;
  undefined8 local_1060;
  undefined8 uStack_1058;
  undefined1 local_1050;
  undefined1 local_1048 [8];
  ForAnyElementType FStack_1040;
  ulonglong local_1038;
  FName local_1030;
  TSharedRef<SVerticalBox,1> local_1028;
  TSharedRef<STestMenu,1> local_1018;
  TSharedRef<SBorder,1> local_1008;
  TSharedRef<STextBlock,1> local_ff8;
  FText local_fe8;
  TSlateDecl<STestMenu,RequiredArgs::T0RequiredArgs> local_fd8;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_fc0;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_fa8;
  undefined1 local_f90 [16];
  undefined1 local_f80 [32];
  undefined1 local_f60 [24];
  undefined8 *local_f48 [2];
  TReferenceControllerBase<1> *local_f38;
  undefined1 local_f18 [40];
  FSlotArgumentsMixin local_ef0;
  undefined8 *local_e60 [2];
  TReferenceControllerBase<1> *local_e50;
  undefined1 local_e30 [40];
  FSlotArgumentsMixin local_e08;
  FArguments local_d78;
  FSlateBaseNamedArgs local_b70;
  FArguments local_978;
  FArguments local_598;
  undefined8 uStack_40;
  
  uStack_40 = 0x142fd37c2;
  pFVar9 = SVerticalBox::FArguments::FArguments(&local_d78);
  pFVar10 = SVerticalBox::Slot((FSlotArguments *)local_e60);
  pFVar10 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar10);
  pFVar11 = SBorder::FArguments::FArguments(&local_978);
  pIVar12 = FAppStyle::Get();
  pcVar1 = *(code **)((longlong)*pIVar12 + 0x50);
  pFVar13 = ::FName::FName(&local_1030,"Menu.Background");
  local_10b8 = (FSlateBrush *)(*pcVar1)(pIVar12,*pFVar13,0,0);
  local_10b0 = 1;
  local_10a8 = (undefined1  [8])0x0;
  FStack_10a0.Data = (FScriptContainerElement *)0x0;
  local_1098 = 0;
  (pFVar11->_BorderImage).Value = local_10b8;
  (pFVar11->_BorderImage).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar11->_BorderImage).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_10a8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_10a8,
             (FWriteAccessScope *)&local_1100);
  if (((int)local_1098 != 0) && (FStack_10a0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_10a0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_10a0,0,0,0x10);
    local_1098 = local_1098 & 0xffffffff00000000;
  }
  if (local_10f0 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)pTStack_10f8,(FDestructionSentinel *)&local_1100);
  }
  if (FStack_10a0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_10a0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_10a8);
  uVar7 = _UNK_150925428;
  local_1050 = 1;
  local_1038 = 0;
  local_1060 = ___xmm_40a0000040a0000040a0000040a00000;
  uStack_1058 = _UNK_150925428;
  local_1048 = (undefined1  [8])0x0;
  FStack_1040.Data = (FScriptContainerElement *)0x0;
  uVar6 = _UNK_150925424;
  (pFVar11->_Padding).Value.Left = (float)___xmm_40a0000040a0000040a0000040a00000;
  uVar8 = _UNK_150925428;
  (pFVar11->_Padding).Value.Top = (float)uVar6;
  _UNK_150925428 = (undefined4)uVar7;
  _UNK_15092542c = SUB84(uVar7,4);
  uVar6 = _UNK_15092542c;
  (pFVar11->_Padding).Value.Right = (float)_UNK_150925428;
  _UNK_150925428 = uVar8;
  (pFVar11->_Padding).Value.Bottom = (float)uVar6;
  (pFVar11->_Padding).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar11->_Padding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1048);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1048,
             (FWriteAccessScope *)&local_1100);
  if (((int)local_1038 != 0) && (FStack_1040.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1040.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1040,0,0,0x10);
    local_1038 = local_1038 & 0xffffffff00000000;
  }
  if (local_10f0 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)pTStack_10f8,(FDestructionSentinel *)&local_1100);
  }
  if (FStack_1040.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1040.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1048);
  pFVar14 = STextBlock::FArguments::FArguments(&local_598);
  pFVar15 = FText::AsLocalizable_Advanced_LocText
                      (&local_fe8,L"STableViewTesting",L"ListContextMenuLabel",L"List Context Menu")
  ;
  FText::FText(&local_1090,pFVar15);
  local_1080 = true;
  local_1068 = 0;
  local_1078 = (undefined1  [8])0x0;
  FStack_1070.Data = (FScriptContainerElement *)0x0;
  FText::operator=(&(pFVar14->_Text).Value,&local_1090);
  (pFVar14->_Text).bIsSet = local_1080;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar14->_Text).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1078);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1078,
             (FWriteAccessScope *)&local_1100);
  if (((int)local_1068 != 0) && (FStack_1070.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1070.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1070,0,0,0x10);
    local_1068 = local_1068 & 0xffffffff00000000;
  }
  if (local_10f0 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)pTStack_10f8,(FDestructionSentinel *)&local_1100);
  }
  if (FStack_1070.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1070.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1078);
  if (local_1090.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1090.TextData.Reference + 0x10))();
  }
  FLLMScope::FLLMScope(local_1108,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_10e0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope((FMemScope *)&local_1100,&local_10e0,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_fa8,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\STableViewTesting.cpp"
             ,0x4cd,local_res10);
  FMemScope::~FMemScope((FMemScope *)&local_1100);
  FLLMScope::~FLLMScope(local_1108);
  pTVar16 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_fa8,&local_ff8,pFVar14);
  pTVar2 = (pTVar16->SharedReferenceCount).ReferenceController;
  local_1100 = (FName)pTVar16->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (pFVar11->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar11->_Content).Widget.Object = (SWidget *)local_1100;
  (pFVar11->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar2;
  pTStack_10f8 = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  FLLMScope::FLLMScope(local_1108,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1100 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope((FMemScope *)&local_10e0,&local_1100,true);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>
            (&local_fc0,"SBorder",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\STableViewTesting.cpp"
             ,0x4c9,local_res18);
  FMemScope::~FMemScope((FMemScope *)&local_10e0);
  FLLMScope::~FLLMScope(local_1108);
  pTVar17 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_fc0,&local_1008,pFVar11);
  pTVar3 = (pTVar17->SharedReferenceCount).ReferenceController;
  local_10d8 = pTVar17->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_10d0.ReferenceController = pTVar3;
  if ((SBorder **)&pFVar10->field_0x8 != &local_10d8) {
    *(SBorder **)&pFVar10->field_0x8 = local_10d8;
    local_10d8 = (SBorder *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar10->field_0x10,&local_10d0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10d0.ReferenceController);
  pFVar9 = SVerticalBox::FArguments::operator+(pFVar9,pFVar10);
  pFVar10 = SVerticalBox::Slot((FSlotArguments *)local_f48);
  pFVar18 = (FSizeParam *)FAuto::FAuto((FAuto *)local_f90);
  TOptional<FSizeParam>::operator=((TOptional<FSizeParam> *)&pFVar10->field_0x58,pFVar18);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_f60);
  if ((void *)local_f60._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_f60._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_f60);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_f80);
  if ((void *)local_f80._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_f80._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_f80);
  pFVar19 = STestMenu::FArguments::FArguments((FArguments *)&local_b70);
  FLLMScope::FLLMScope(local_1108,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1100 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope((FMemScope *)&local_10e0,&local_1100,true);
  TSlateDecl<STestMenu,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STestMenu,RequiredArgs::T0RequiredArgs>
            (&local_fd8,"STestMenu",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\STableViewTesting.cpp"
             ,0x4d3,local_res20);
  FMemScope::~FMemScope((FMemScope *)&local_10e0);
  FLLMScope::~FLLMScope(local_1108);
  pTVar20 = TSlateDecl<STestMenu,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_fd8,&local_1018,pFVar19);
  pTVar4 = (pTVar20->SharedReferenceCount).ReferenceController;
  local_10c8 = pTVar20->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_10c0.ReferenceController = pTVar4;
  if ((STestMenu **)&pFVar10->field_0x8 != &local_10c8) {
    *(STestMenu **)&pFVar10->field_0x8 = local_10c8;
    local_10c8 = (STestMenu *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar10->field_0x10,&local_10c0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10c0.ReferenceController);
  pFVar9 = SVerticalBox::FArguments::operator+(pFVar9,pFVar10);
  FLLMScope::FLLMScope(local_1108,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1100 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope((FMemScope *)&local_10e0,&local_1100,true);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
            ((TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> *)&local_1100,"SVerticalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\STableViewTesting.cpp"
             ,0x4c5,local_10e8);
  FMemScope::~FMemScope((FMemScope *)&local_10e0);
  FLLMScope::~FLLMScope(local_1108);
  pTVar21 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      ((TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> *)&local_1100,
                       &local_1028,pFVar9);
  __return_storage_ptr__->Object = (SWidget *)pTVar21->Object;
  pTVar5 = (pTVar21->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar5;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1028.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_10f8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1018.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_fd8._Widget.SharedReferenceCount.ReferenceController);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs(&local_b70);
  TResizingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_ef0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_f18);
  if ((void *)local_f18._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_f18._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_f18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_f38);
  if (local_f48[0] != (undefined8 *)0x0) {
    (**(code **)*local_f48[0])(local_f48[0],1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1008.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_fc0._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_ff8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_fa8._Widget.SharedReferenceCount.ReferenceController);
  if (local_fe8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_fe8.TextData.Reference + 0x10))();
  }
  STextBlock::FArguments::~FArguments(&local_598);
  SBorder::FArguments::~FArguments(&local_978);
  TResizingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_e08);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_e30);
  if ((void *)local_e30._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_e30._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_e30);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_e50);
  if (local_e60[0] != (undefined8 *)0x0) {
    (**(code **)*local_e60[0])(local_e60[0],1);
  }
  DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_d78._Slots.AllocatorInstance.Data,local_d78._Slots.ArrayNum);
  if ((FSlotArguments *)local_d78._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_d78._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_d78);
  return __return_storage_ptr__;
}

// GetNumGeneratedChildren @ 142fd4030

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __thiscall
STableViewTesting::GetNumGeneratedChildren(STableViewTesting *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FText *pFVar5;
  FTextFormat *pFVar6;
  undefined1 local_res8 [8];
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_68;
  FString local_58;
  FText local_48;
  FTextFormat local_38;
  FFormatArgumentValue local_28;
  
  if ((this->TreeBeingTested).Object == (STreeView<TSharedPtr<FTestData,1>_> *)0x0) {
    pFVar5 = FText::GetEmpty();
    (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
    pIVar1 = (pFVar5->TextData).Reference;
    (__return_storage_ptr__->TextData).Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    __return_storage_ptr__->Flags = pFVar5->Flags;
  }
  else {
    local_68.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.Pairs.ArrayNum = 0;
    local_68.Pairs.ArrayMax = 0;
    if ((this->ListBeingTested).Object == (SListView<TSharedPtr<FTestData,1>_> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FText *)(*pcVar2)();
        return pFVar5;
      }
    }
    iVar4 = STableViewBase::GetNumGeneratedChildren
                      ((STableViewBase *)(this->ListBeingTested).Object);
    local_28.field1_0x8 = (FFormatArgumentValue_u_8)(longlong)iVar4;
    local_28.Type = Int;
    local_28.TextValue.field0_0x0.TypedValue.TextData.Reference =
         (TRefCountPtr<ITextData>)(ITextData *)0x0;
    local_28.TextValue.field0_0x0.TypedValue.Flags = 0;
    ::FString::FString(&local_58,L"NumberOfWidgets");
    TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
    Emplace<FString,FFormatArgumentValue>(&local_68,&local_58,&local_28);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_28.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_28.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10)
      )();
    }
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       (&local_48,L"STableViewTesting",L"NumberOfWidgetsLabel",
                        L"Number of widgets in list: {NumberOfWidgets}");
    pFVar6 = FTextFormat::FTextFormat(&local_38,pFVar5,Default);
    FText::Format(__return_storage_ptr__,pFVar6,&local_68);
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
    }
    DestructItems<TTuple<FString,FFormatArgumentValue>,int>
              ((TTuple<FString,FFormatArgumentValue> *)local_68.Pairs.AllocatorInstance.Data,
               local_68.Pairs.ArrayNum);
    if ((TTuple<FString,FFormatArgumentValue> *)local_68.Pairs.AllocatorInstance.Data !=
        (TTuple<FString,FFormatArgumentValue> *)0x0) {
      FMemory::Free(local_68.Pairs.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// GetNumTotalItems @ 142fd4500

TOptional<int> __thiscall STableViewTesting::GetNumTotalItems(STableViewTesting *this)

{
  TOptional<int> in_RDX;
  
  *(int *)in_RDX = this->TotalItems;
  *(undefined1 *)((longlong)in_RDX + 4) = 1;
  return in_RDX;
}

// GetScrollToIndex @ 142fd7cb0

TOptional<int> __thiscall STableViewTesting::GetScrollToIndex(STableViewTesting *this)

{
  TOptional<int> in_RDX;
  
  *(int *)in_RDX = this->ScrollToIndex;
  *(undefined1 *)((longlong)in_RDX + 4) = 1;
  return in_RDX;
}

// GetSelectedModeText @ 142fd8b70

FText * __thiscall
STableViewTesting::GetSelectedModeText
          (STableViewTesting *this,FText *__return_storage_ptr__,
          TSharedPtr<ESelectionMode::Type,1> *param_1)

{
  Type TVar1;
  code *pcVar2;
  bool bVar3;
  FText *pFVar4;
  FText local_48;
  FText local_38;
  FText local_28;
  FText local_18;
  
  FText::FText(__return_storage_ptr__);
  if (param_1->Object == (Type *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FText *)(*pcVar2)();
      return pFVar4;
    }
  }
  TVar1 = *param_1->Object;
  if (TVar1 != None) {
    if (TVar1 == Single) {
      pFVar4 = FText::AsLocalizable_Advanced_LocText
                         (&local_28,L"STableViewTesting",L"ESelectionMode::Single",L"Single");
      FText::operator=(__return_storage_ptr__,pFVar4);
      local_48.TextData.Reference = local_28.TextData.Reference;
      goto LAB_142fd8c99;
    }
    if (TVar1 == SingleToggle) {
      pFVar4 = FText::AsLocalizable_Advanced_LocText
                         (&local_38,L"STableViewTesting",L"ESelectionMode::SingleToggle",
                          L"SingleToggle");
      FText::operator=(__return_storage_ptr__,pFVar4);
      local_48.TextData.Reference = local_38.TextData.Reference;
      goto LAB_142fd8c99;
    }
    if (TVar1 == Multi) {
      pFVar4 = FText::AsLocalizable_Advanced_LocText
                         (&local_48,L"STableViewTesting",L"ESelectionMode::Multi",L"Multi");
      FText::operator=(__return_storage_ptr__,pFVar4);
      goto LAB_142fd8c99;
    }
  }
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"STableViewTesting",L"ESelectionMode::None",L"None");
  FText::operator=(__return_storage_ptr__,pFVar4);
  local_48.TextData.Reference = local_18.TextData.Reference;
LAB_142fd8c99:
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// GetSelectedModeText @ 142fd8cd0

FText * __thiscall
STableViewTesting::GetSelectedModeText(STableViewTesting *this,FText *__return_storage_ptr__)

{
  SComboBox<TSharedPtr<ESelectionMode::Type,1>_> *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  Type *pTVar3;
  ITextData *pIVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  FText *pFVar8;
  atomic<int> *paVar9;
  FText *pFVar10;
  TRefCountPtr<ITextData> TVar11;
  undefined4 local_res8 [2];
  undefined1 local_res10 [8];
  FText local_48;
  TSharedPtr<ESelectionMode::Type,1> local_38;
  FText local_28;
  
  local_res8[0] = 0;
  if ((this->SelectionModeCombo).Object == (SComboBox<TSharedPtr<ESelectionMode::Type,1>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FText *)(*pcVar5)();
      return pFVar8;
    }
  }
  pSVar1 = (this->SelectionModeCombo).Object;
  pTVar2 = (pSVar1->SelectedItem).SharedReferenceCount.ReferenceController;
  pTVar3 = (pSVar1->SelectedItem).Object;
  if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
    paVar9 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar9 = &pTVar2->SharedReferenceCount;
    LOCK();
    *paVar9 = (atomic<int>)((int)*paVar9 + 1);
    UNLOCK();
  }
  if (pTVar3 == (Type *)0x0) {
    pFVar8 = FText::GetEmpty();
    TVar11.Reference = (pFVar8->TextData).Reference;
    local_48.TextData.Reference = TVar11.Reference;
    if (TVar11.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar11.Reference + 8))(TVar11.Reference,local_res8);
    }
    pFVar10 = &local_48;
    local_48.Flags = pFVar8->Flags;
    bVar6 = false;
    bVar7 = true;
  }
  else {
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar9 = (atomic<int>)((int)*paVar9 + 1);
      UNLOCK();
    }
    local_38.Object = pTVar3;
    local_38.SharedReferenceCount.ReferenceController = pTVar2;
    pFVar10 = GetSelectedModeText(this,&local_28,&local_38);
    bVar6 = true;
    bVar7 = false;
    TVar11.Reference = local_48.TextData.Reference;
  }
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar4 = (pFVar10->TextData).Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar4;
  if (pIVar4 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar4 + 8))(pIVar4,local_res10);
  }
  __return_storage_ptr__->Flags = pFVar10->Flags;
  if ((bVar7) && (TVar11.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*TVar11.Reference + 0x10))(TVar11.Reference);
  }
  if ((bVar6) && (local_28.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return __return_storage_ptr__;
}

// GetSelectionMode @ 142fd8f60

Type __thiscall STableViewTesting::GetSelectionMode(STableViewTesting *this)

{
  code *pcVar1;
  bool bVar2;
  Type TVar3;
  
  if ((this->CurSelectionMode).Object != (Type *)0x0) {
    return *(this->CurSelectionMode).Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x44d,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    TVar3 = (*pcVar1)();
    return TVar3;
  }
  return *(this->CurSelectionMode).Object;
}

// GetTileViewContextMenu @ 142fd90f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<SWidget,1> * __thiscall
STableViewTesting::GetTileViewContextMenu
          (STableViewTesting *this,TSharedPtr<SWidget,1> *__return_storage_ptr__)

{
  code *pcVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  FArguments *pFVar9;
  FSlotArguments *pFVar10;
  FArguments *pFVar11;
  ISlateStyle *pIVar12;
  FName *pFVar13;
  FArguments *pFVar14;
  FText *pFVar15;
  TSharedRef<STextBlock,1> *pTVar16;
  TSharedRef<SBorder,1> *pTVar17;
  FSizeParam *pFVar18;
  FArguments *pFVar19;
  TSharedRef<STestMenu,1> *pTVar20;
  TSharedRef<SVerticalBox,1> *pTVar21;
  T0RequiredArgs local_res10 [8];
  T0RequiredArgs local_res18 [8];
  T0RequiredArgs local_res20 [8];
  FLLMScope local_1108 [2];
  FName local_1100;
  TReferenceControllerBase<1> *pTStack_10f8;
  bool local_10f0;
  T0RequiredArgs local_10e8 [8];
  FName local_10e0;
  SBorder *local_10d8;
  FSharedReferencer<1> local_10d0;
  STestMenu *local_10c8;
  FSharedReferencer<1> local_10c0;
  FSlateBrush *local_10b8;
  undefined1 local_10b0;
  undefined1 local_10a8 [8];
  ForAnyElementType FStack_10a0;
  ulonglong local_1098;
  FText local_1090;
  bool local_1080;
  undefined1 local_1078 [8];
  ForAnyElementType FStack_1070;
  ulonglong local_1068;
  undefined8 local_1060;
  undefined8 uStack_1058;
  undefined1 local_1050;
  undefined1 local_1048 [8];
  ForAnyElementType FStack_1040;
  ulonglong local_1038;
  FName local_1030;
  TSharedRef<SVerticalBox,1> local_1028;
  TSharedRef<STestMenu,1> local_1018;
  TSharedRef<SBorder,1> local_1008;
  TSharedRef<STextBlock,1> local_ff8;
  FText local_fe8;
  TSlateDecl<STestMenu,RequiredArgs::T0RequiredArgs> local_fd8;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_fc0;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_fa8;
  undefined1 local_f90 [16];
  undefined1 local_f80 [32];
  undefined1 local_f60 [24];
  undefined8 *local_f48 [2];
  TReferenceControllerBase<1> *local_f38;
  undefined1 local_f18 [40];
  FSlotArgumentsMixin local_ef0;
  undefined8 *local_e60 [2];
  TReferenceControllerBase<1> *local_e50;
  undefined1 local_e30 [40];
  FSlotArgumentsMixin local_e08;
  FArguments local_d78;
  FSlateBaseNamedArgs local_b70;
  FArguments local_978;
  FArguments local_598;
  undefined8 uStack_40;
  
  uStack_40 = 0x142fd9112;
  pFVar9 = SVerticalBox::FArguments::FArguments(&local_d78);
  pFVar10 = SVerticalBox::Slot((FSlotArguments *)local_e60);
  pFVar10 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar10);
  pFVar11 = SBorder::FArguments::FArguments(&local_978);
  pIVar12 = FAppStyle::Get();
  pcVar1 = *(code **)((longlong)*pIVar12 + 0x50);
  pFVar13 = ::FName::FName(&local_1030,"Menu.Background");
  local_10b8 = (FSlateBrush *)(*pcVar1)(pIVar12,*pFVar13,0,0);
  local_10b0 = 1;
  local_10a8 = (undefined1  [8])0x0;
  FStack_10a0.Data = (FScriptContainerElement *)0x0;
  local_1098 = 0;
  (pFVar11->_BorderImage).Value = local_10b8;
  (pFVar11->_BorderImage).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar11->_BorderImage).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_10a8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_10a8,
             (FWriteAccessScope *)&local_1100);
  if (((int)local_1098 != 0) && (FStack_10a0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_10a0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_10a0,0,0,0x10);
    local_1098 = local_1098 & 0xffffffff00000000;
  }
  if (local_10f0 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)pTStack_10f8,(FDestructionSentinel *)&local_1100);
  }
  if (FStack_10a0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_10a0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_10a8);
  uVar7 = _UNK_150925428;
  local_1050 = 1;
  local_1038 = 0;
  local_1060 = ___xmm_40a0000040a0000040a0000040a00000;
  uStack_1058 = _UNK_150925428;
  local_1048 = (undefined1  [8])0x0;
  FStack_1040.Data = (FScriptContainerElement *)0x0;
  uVar6 = _UNK_150925424;
  (pFVar11->_Padding).Value.Left = (float)___xmm_40a0000040a0000040a0000040a00000;
  uVar8 = _UNK_150925428;
  (pFVar11->_Padding).Value.Top = (float)uVar6;
  _UNK_150925428 = (undefined4)uVar7;
  _UNK_15092542c = SUB84(uVar7,4);
  uVar6 = _UNK_15092542c;
  (pFVar11->_Padding).Value.Right = (float)_UNK_150925428;
  _UNK_150925428 = uVar8;
  (pFVar11->_Padding).Value.Bottom = (float)uVar6;
  (pFVar11->_Padding).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar11->_Padding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1048);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1048,
             (FWriteAccessScope *)&local_1100);
  if (((int)local_1038 != 0) && (FStack_1040.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1040.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1040,0,0,0x10);
    local_1038 = local_1038 & 0xffffffff00000000;
  }
  if (local_10f0 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)pTStack_10f8,(FDestructionSentinel *)&local_1100);
  }
  if (FStack_1040.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1040.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1048);
  pFVar14 = STextBlock::FArguments::FArguments(&local_598);
  pFVar15 = FText::AsLocalizable_Advanced_LocText
                      (&local_fe8,L"STableViewTesting",L"TileViewContextMenuLabel",
                       L"Tile view Context Menu");
  FText::FText(&local_1090,pFVar15);
  local_1080 = true;
  local_1068 = 0;
  local_1078 = (undefined1  [8])0x0;
  FStack_1070.Data = (FScriptContainerElement *)0x0;
  FText::operator=(&(pFVar14->_Text).Value,&local_1090);
  (pFVar14->_Text).bIsSet = local_1080;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar14->_Text).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1078);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1078,
             (FWriteAccessScope *)&local_1100);
  if (((int)local_1068 != 0) && (FStack_1070.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1070.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1070,0,0,0x10);
    local_1068 = local_1068 & 0xffffffff00000000;
  }
  if (local_10f0 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)pTStack_10f8,(FDestructionSentinel *)&local_1100);
  }
  if (FStack_1070.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1070.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1078);
  if (local_1090.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1090.TextData.Reference + 0x10))();
  }
  FLLMScope::FLLMScope(local_1108,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_10e0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope((FMemScope *)&local_1100,&local_10e0,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_fa8,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\STableViewTesting.cpp"
             ,0x4e3,local_res10);
  FMemScope::~FMemScope((FMemScope *)&local_1100);
  FLLMScope::~FLLMScope(local_1108);
  pTVar16 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_fa8,&local_ff8,pFVar14);
  pTVar2 = (pTVar16->SharedReferenceCount).ReferenceController;
  local_1100 = (FName)pTVar16->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (pFVar11->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar11->_Content).Widget.Object = (SWidget *)local_1100;
  (pFVar11->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar2;
  pTStack_10f8 = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  FLLMScope::FLLMScope(local_1108,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1100 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope((FMemScope *)&local_10e0,&local_1100,true);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>
            (&local_fc0,"SBorder",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\STableViewTesting.cpp"
             ,0x4df,local_res18);
  FMemScope::~FMemScope((FMemScope *)&local_10e0);
  FLLMScope::~FLLMScope(local_1108);
  pTVar17 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_fc0,&local_1008,pFVar11);
  pTVar3 = (pTVar17->SharedReferenceCount).ReferenceController;
  local_10d8 = pTVar17->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_10d0.ReferenceController = pTVar3;
  if ((SBorder **)&pFVar10->field_0x8 != &local_10d8) {
    *(SBorder **)&pFVar10->field_0x8 = local_10d8;
    local_10d8 = (SBorder *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar10->field_0x10,&local_10d0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10d0.ReferenceController);
  pFVar9 = SVerticalBox::FArguments::operator+(pFVar9,pFVar10);
  pFVar10 = SVerticalBox::Slot((FSlotArguments *)local_f48);
  pFVar18 = (FSizeParam *)FAuto::FAuto((FAuto *)local_f90);
  TOptional<FSizeParam>::operator=((TOptional<FSizeParam> *)&pFVar10->field_0x58,pFVar18);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_f60);
  if ((void *)local_f60._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_f60._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_f60);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_f80);
  if ((void *)local_f80._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_f80._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_f80);
  pFVar19 = STestMenu::FArguments::FArguments((FArguments *)&local_b70);
  FLLMScope::FLLMScope(local_1108,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1100 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope((FMemScope *)&local_10e0,&local_1100,true);
  TSlateDecl<STestMenu,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STestMenu,RequiredArgs::T0RequiredArgs>
            (&local_fd8,"STestMenu",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\STableViewTesting.cpp"
             ,0x4e9,local_res20);
  FMemScope::~FMemScope((FMemScope *)&local_10e0);
  FLLMScope::~FLLMScope(local_1108);
  pTVar20 = TSlateDecl<STestMenu,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_fd8,&local_1018,pFVar19);
  pTVar4 = (pTVar20->SharedReferenceCount).ReferenceController;
  local_10c8 = pTVar20->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_10c0.ReferenceController = pTVar4;
  if ((STestMenu **)&pFVar10->field_0x8 != &local_10c8) {
    *(STestMenu **)&pFVar10->field_0x8 = local_10c8;
    local_10c8 = (STestMenu *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar10->field_0x10,&local_10c0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10c0.ReferenceController);
  pFVar9 = SVerticalBox::FArguments::operator+(pFVar9,pFVar10);
  FLLMScope::FLLMScope(local_1108,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1100 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope((FMemScope *)&local_10e0,&local_1100,true);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
            ((TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> *)&local_1100,"SVerticalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\STableViewTesting.cpp"
             ,0x4db,local_10e8);
  FMemScope::~FMemScope((FMemScope *)&local_10e0);
  FLLMScope::~FLLMScope(local_1108);
  pTVar21 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      ((TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> *)&local_1100,
                       &local_1028,pFVar9);
  __return_storage_ptr__->Object = (SWidget *)pTVar21->Object;
  pTVar5 = (pTVar21->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar5;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1028.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_10f8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1018.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_fd8._Widget.SharedReferenceCount.ReferenceController);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs(&local_b70);
  TResizingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_ef0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_f18);
  if ((void *)local_f18._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_f18._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_f18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_f38);
  if (local_f48[0] != (undefined8 *)0x0) {
    (**(code **)*local_f48[0])(local_f48[0],1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1008.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_fc0._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_ff8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_fa8._Widget.SharedReferenceCount.ReferenceController);
  if (local_fe8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_fe8.TextData.Reference + 0x10))();
  }
  STextBlock::FArguments::~FArguments(&local_598);
  SBorder::FArguments::~FArguments(&local_978);
  TResizingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_e08);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_e30);
  if ((void *)local_e30._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_e30._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_e30);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_e50);
  if (local_e60[0] != (undefined8 *)0x0) {
    (**(code **)*local_e60[0])(local_e60[0],1);
  }
  DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_d78._Slots.AllocatorInstance.Data,local_d78._Slots.ArrayNum);
  if ((FSlotArguments *)local_d78._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_d78._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_d78);
  return __return_storage_ptr__;
}

// GetTreeContextMenu @ 142fd9da0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<SWidget,1> * __thiscall
STableViewTesting::GetTreeContextMenu
          (STableViewTesting *this,TSharedPtr<SWidget,1> *__return_storage_ptr__)

{
  code *pcVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  FArguments *pFVar9;
  FSlotArguments *pFVar10;
  FArguments *pFVar11;
  ISlateStyle *pIVar12;
  FName *pFVar13;
  FArguments *pFVar14;
  FText *pFVar15;
  TSharedRef<STextBlock,1> *pTVar16;
  TSharedRef<SBorder,1> *pTVar17;
  FSizeParam *pFVar18;
  FArguments *pFVar19;
  TSharedRef<STestMenu,1> *pTVar20;
  TSharedRef<SVerticalBox,1> *pTVar21;
  T0RequiredArgs local_res10 [8];
  T0RequiredArgs local_res18 [8];
  T0RequiredArgs local_res20 [8];
  FLLMScope local_1108 [2];
  FName local_1100;
  TReferenceControllerBase<1> *pTStack_10f8;
  bool local_10f0;
  T0RequiredArgs local_10e8 [8];
  FName local_10e0;
  SBorder *local_10d8;
  FSharedReferencer<1> local_10d0;
  STestMenu *local_10c8;
  FSharedReferencer<1> local_10c0;
  FSlateBrush *local_10b8;
  undefined1 local_10b0;
  undefined1 local_10a8 [8];
  ForAnyElementType FStack_10a0;
  ulonglong local_1098;
  FText local_1090;
  bool local_1080;
  undefined1 local_1078 [8];
  ForAnyElementType FStack_1070;
  ulonglong local_1068;
  undefined8 local_1060;
  undefined8 uStack_1058;
  undefined1 local_1050;
  undefined1 local_1048 [8];
  ForAnyElementType FStack_1040;
  ulonglong local_1038;
  FName local_1030;
  TSharedRef<SVerticalBox,1> local_1028;
  TSharedRef<STestMenu,1> local_1018;
  TSharedRef<SBorder,1> local_1008;
  TSharedRef<STextBlock,1> local_ff8;
  FText local_fe8;
  TSlateDecl<STestMenu,RequiredArgs::T0RequiredArgs> local_fd8;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_fc0;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_fa8;
  undefined1 local_f90 [16];
  undefined1 local_f80 [32];
  undefined1 local_f60 [24];
  undefined8 *local_f48 [2];
  TReferenceControllerBase<1> *local_f38;
  undefined1 local_f18 [40];
  FSlotArgumentsMixin local_ef0;
  undefined8 *local_e60 [2];
  TReferenceControllerBase<1> *local_e50;
  undefined1 local_e30 [40];
  FSlotArgumentsMixin local_e08;
  FArguments local_d78;
  FSlateBaseNamedArgs local_b70;
  FArguments local_978;
  FArguments local_598;
  undefined8 uStack_40;
  
  uStack_40 = 0x142fd9dc2;
  pFVar9 = SVerticalBox::FArguments::FArguments(&local_d78);
  pFVar10 = SVerticalBox::Slot((FSlotArguments *)local_e60);
  pFVar10 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar10);
  pFVar11 = SBorder::FArguments::FArguments(&local_978);
  pIVar12 = FAppStyle::Get();
  pcVar1 = *(code **)((longlong)*pIVar12 + 0x50);
  pFVar13 = ::FName::FName(&local_1030,"Menu.Background");
  local_10b8 = (FSlateBrush *)(*pcVar1)(pIVar12,*pFVar13,0,0);
  local_10b0 = 1;
  local_10a8 = (undefined1  [8])0x0;
  FStack_10a0.Data = (FScriptContainerElement *)0x0;
  local_1098 = 0;
  (pFVar11->_BorderImage).Value = local_10b8;
  (pFVar11->_BorderImage).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar11->_BorderImage).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_10a8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_10a8,
             (FWriteAccessScope *)&local_1100);
  if (((int)local_1098 != 0) && (FStack_10a0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_10a0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_10a0,0,0,0x10);
    local_1098 = local_1098 & 0xffffffff00000000;
  }
  if (local_10f0 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)pTStack_10f8,(FDestructionSentinel *)&local_1100);
  }
  if (FStack_10a0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_10a0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_10a8);
  uVar7 = _UNK_150925428;
  local_1050 = 1;
  local_1038 = 0;
  local_1060 = ___xmm_40a0000040a0000040a0000040a00000;
  uStack_1058 = _UNK_150925428;
  local_1048 = (undefined1  [8])0x0;
  FStack_1040.Data = (FScriptContainerElement *)0x0;
  uVar6 = _UNK_150925424;
  (pFVar11->_Padding).Value.Left = (float)___xmm_40a0000040a0000040a0000040a00000;
  uVar8 = _UNK_150925428;
  (pFVar11->_Padding).Value.Top = (float)uVar6;
  _UNK_150925428 = (undefined4)uVar7;
  _UNK_15092542c = SUB84(uVar7,4);
  uVar6 = _UNK_15092542c;
  (pFVar11->_Padding).Value.Right = (float)_UNK_150925428;
  _UNK_150925428 = uVar8;
  (pFVar11->_Padding).Value.Bottom = (float)uVar6;
  (pFVar11->_Padding).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar11->_Padding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1048);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1048,
             (FWriteAccessScope *)&local_1100);
  if (((int)local_1038 != 0) && (FStack_1040.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1040.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1040,0,0,0x10);
    local_1038 = local_1038 & 0xffffffff00000000;
  }
  if (local_10f0 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)pTStack_10f8,(FDestructionSentinel *)&local_1100);
  }
  if (FStack_1040.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1040.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1048);
  pFVar14 = STextBlock::FArguments::FArguments(&local_598);
  pFVar15 = FText::AsLocalizable_Advanced_LocText
                      (&local_fe8,L"STableViewTesting",L"TreeContextMenuLabel",L"Tree Context Menu")
  ;
  FText::FText(&local_1090,pFVar15);
  local_1080 = true;
  local_1068 = 0;
  local_1078 = (undefined1  [8])0x0;
  FStack_1070.Data = (FScriptContainerElement *)0x0;
  FText::operator=(&(pFVar14->_Text).Value,&local_1090);
  (pFVar14->_Text).bIsSet = local_1080;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar14->_Text).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1078);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1078,
             (FWriteAccessScope *)&local_1100);
  if (((int)local_1068 != 0) && (FStack_1070.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1070.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1070,0,0,0x10);
    local_1068 = local_1068 & 0xffffffff00000000;
  }
  if (local_10f0 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)pTStack_10f8,(FDestructionSentinel *)&local_1100);
  }
  if (FStack_1070.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1070.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1078);
  if (local_1090.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1090.TextData.Reference + 0x10))();
  }
  FLLMScope::FLLMScope(local_1108,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_10e0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope((FMemScope *)&local_1100,&local_10e0,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_fa8,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\STableViewTesting.cpp"
             ,0x4f9,local_res10);
  FMemScope::~FMemScope((FMemScope *)&local_1100);
  FLLMScope::~FLLMScope(local_1108);
  pTVar16 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_fa8,&local_ff8,pFVar14);
  pTVar2 = (pTVar16->SharedReferenceCount).ReferenceController;
  local_1100 = (FName)pTVar16->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (pFVar11->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar11->_Content).Widget.Object = (SWidget *)local_1100;
  (pFVar11->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar2;
  pTStack_10f8 = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  FLLMScope::FLLMScope(local_1108,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1100 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope((FMemScope *)&local_10e0,&local_1100,true);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>
            (&local_fc0,"SBorder",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\STableViewTesting.cpp"
             ,0x4f5,local_res18);
  FMemScope::~FMemScope((FMemScope *)&local_10e0);
  FLLMScope::~FLLMScope(local_1108);
  pTVar17 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_fc0,&local_1008,pFVar11);
  pTVar3 = (pTVar17->SharedReferenceCount).ReferenceController;
  local_10d8 = pTVar17->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_10d0.ReferenceController = pTVar3;
  if ((SBorder **)&pFVar10->field_0x8 != &local_10d8) {
    *(SBorder **)&pFVar10->field_0x8 = local_10d8;
    local_10d8 = (SBorder *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar10->field_0x10,&local_10d0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10d0.ReferenceController);
  pFVar9 = SVerticalBox::FArguments::operator+(pFVar9,pFVar10);
  pFVar10 = SVerticalBox::Slot((FSlotArguments *)local_f48);
  pFVar18 = (FSizeParam *)FAuto::FAuto((FAuto *)local_f90);
  TOptional<FSizeParam>::operator=((TOptional<FSizeParam> *)&pFVar10->field_0x58,pFVar18);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_f60);
  if ((void *)local_f60._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_f60._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_f60);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_f80);
  if ((void *)local_f80._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_f80._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_f80);
  pFVar19 = STestMenu::FArguments::FArguments((FArguments *)&local_b70);
  FLLMScope::FLLMScope(local_1108,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1100 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope((FMemScope *)&local_10e0,&local_1100,true);
  TSlateDecl<STestMenu,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STestMenu,RequiredArgs::T0RequiredArgs>
            (&local_fd8,"STestMenu",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\STableViewTesting.cpp"
             ,0x4ff,local_res20);
  FMemScope::~FMemScope((FMemScope *)&local_10e0);
  FLLMScope::~FLLMScope(local_1108);
  pTVar20 = TSlateDecl<STestMenu,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_fd8,&local_1018,pFVar19);
  pTVar4 = (pTVar20->SharedReferenceCount).ReferenceController;
  local_10c8 = pTVar20->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_10c0.ReferenceController = pTVar4;
  if ((STestMenu **)&pFVar10->field_0x8 != &local_10c8) {
    *(STestMenu **)&pFVar10->field_0x8 = local_10c8;
    local_10c8 = (STestMenu *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar10->field_0x10,&local_10c0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10c0.ReferenceController);
  pFVar9 = SVerticalBox::FArguments::operator+(pFVar9,pFVar10);
  FLLMScope::FLLMScope(local_1108,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1100 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope((FMemScope *)&local_10e0,&local_1100,true);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
            ((TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> *)&local_1100,"SVerticalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\STableViewTesting.cpp"
             ,0x4f1,local_10e8);
  FMemScope::~FMemScope((FMemScope *)&local_10e0);
  FLLMScope::~FLLMScope(local_1108);
  pTVar21 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      ((TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> *)&local_1100,
                       &local_1028,pFVar9);
  __return_storage_ptr__->Object = (SWidget *)pTVar21->Object;
  pTVar5 = (pTVar21->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar5;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1028.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_10f8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1018.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_fd8._Widget.SharedReferenceCount.ReferenceController);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs(&local_b70);
  TResizingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_ef0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_f18);
  if ((void *)local_f18._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_f18._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_f18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_f38);
  if (local_f48[0] != (undefined8 *)0x0) {
    (**(code **)*local_f48[0])(local_f48[0],1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1008.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_fc0._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_ff8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_fa8._Widget.SharedReferenceCount.ReferenceController);
  if (local_fe8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_fe8.TextData.Reference + 0x10))();
  }
  STextBlock::FArguments::~FArguments(&local_598);
  SBorder::FArguments::~FArguments(&local_978);
  TResizingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_e08);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_e30);
  if ((void *)local_e30._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_e30._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_e30);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_e50);
  if (local_e60[0] != (undefined8 *)0x0) {
    (**(code **)*local_e60[0])(local_e60[0],1);
  }
  DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_d78._Slots.AllocatorInstance.Data,local_d78._Slots.ArrayNum);
  if ((FSlotArguments *)local_d78._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_d78._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_d78);
  return __return_storage_ptr__;
}

// HandleFixedItemOffsetCheckStateChanged @ 142fdc690

void __thiscall
STableViewTesting::HandleFixedItemOffsetCheckStateChanged
          (STableViewTesting *this,ECheckBoxState param_1)

{
  this->bIsFixedLineScrollOffsetEnabled = param_1 == Checked;
  UpdateFixedItemOffset(this);
  return;
}

// HandleFixedItemOffsetValueChanged @ 142fdc6b0

void __thiscall
STableViewTesting::HandleFixedItemOffsetValueChanged(STableViewTesting *this,double param_1)

{
  this->FixedLineScrollOffset = param_1;
  UpdateFixedItemOffset(this);
  return;
}

// HandleScrollAnimCheckStateChanged @ 142fdd2e0

void __thiscall
STableViewTesting::HandleScrollAnimCheckStateChanged(STableViewTesting *this,ECheckBoxState param_1)

{
  code *pcVar1;
  bool bVar2;
  
  this->bIsScrollAnimEnabled = param_1 == Checked;
  if ((this->ListBeingTested).Object == (SListView<TSharedPtr<FTestData,1>_> *)0x0) {
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
  STableViewBase::SetIsScrollAnimationEnabled
            ((STableViewBase *)(this->ListBeingTested).Object,this->bIsScrollAnimEnabled);
  if ((this->HorizontalListBeingTested).Object == (SListView<TSharedPtr<FTestData,1>_> *)0x0) {
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
  STableViewBase::SetIsScrollAnimationEnabled
            ((STableViewBase *)(this->HorizontalListBeingTested).Object,this->bIsScrollAnimEnabled);
  if ((this->TileViewBeingTested).Object == (STileView<TSharedPtr<FTestData,1>_> *)0x0) {
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
  STableViewBase::SetIsScrollAnimationEnabled
            ((STableViewBase *)(this->TileViewBeingTested).Object,this->bIsScrollAnimEnabled);
  if ((this->HorizontalTileViewBeingTested).Object == (STileView<TSharedPtr<FTestData,1>_> *)0x0) {
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
  STableViewBase::SetIsScrollAnimationEnabled
            ((STableViewBase *)(this->HorizontalTileViewBeingTested).Object,
             this->bIsScrollAnimEnabled);
  if ((this->TreeBeingTested).Object == (STreeView<TSharedPtr<FTestData,1>_> *)0x0) {
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
  STableViewBase::SetIsScrollAnimationEnabled
            ((STableViewBase *)(this->TreeBeingTested).Object,this->bIsScrollAnimEnabled);
  return;
}

// IsFixedItemOffsetChecked @ 142fe2be0

ECheckBoxState __thiscall STableViewTesting::IsFixedItemOffsetChecked(STableViewTesting *this)

{
  return this->bIsFixedLineScrollOffsetEnabled != false;
}

// IsScrollAnimChecked @ 142fe50d0

ECheckBoxState __thiscall STableViewTesting::IsScrollAnimChecked(STableViewTesting *this)

{
  return this->bIsScrollAnimEnabled != false;
}

// NumItems_OnValueChanged @ 142fedc60

void __thiscall STableViewTesting::NumItems_OnValueChanged(STableViewTesting *this,int param_1)

{
  this->TotalItems = param_1;
  return;
}

// OnAcceptDrop_Handler @ 142fedc80

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
STableViewTesting::OnAcceptDrop_Handler
          (STableViewTesting *this,FReply *__return_storage_ptr__,FDragDropEvent *param_1,
          EItemDropZone param_2,TSharedPtr<FTestData,1> *param_3)

{
  FDragDropOperation *pFVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  FReply *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSharedRef<FTestData,1> local_38;
  TSharedPtr<FTestData,1> local_28;
  
  pFVar1 = (param_1->Content).Object;
  if (pFVar1 != (FDragDropOperation *)0x0) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
    FTableViewDragDrop::GetTypeId();
    cVar3 = (*pcVar2)(pFVar1);
    if (cVar3 != '\0') {
      pTVar6 = (param_1->Content).SharedReferenceCount.ReferenceController;
      pFVar1 = (param_1->Content).Object;
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (pFVar1 != (FDragDropOperation *)0x0) {
        local_28.Object = (FTestData *)pFVar1[1]._padding_;
        local_28.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)pFVar1[1]._padding_;
        if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        FTestData::RemoveRecursive(&this->Items,&local_28);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_28.SharedReferenceCount.ReferenceController);
        if ((param_3->Object == (FTestData *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x408,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          pFVar5 = (FReply *)(*pcVar2)();
          return pFVar5;
        }
        local_38.SharedReferenceCount.ReferenceController =
             (param_3->SharedReferenceCount).ReferenceController;
        local_38.Object = param_3->Object;
        if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        if ((local_38.Object == (FTestData *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x25d,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          pFVar5 = (FReply *)(*pcVar2)();
          return pFVar5;
        }
        FTestData::InsertRecursive
                  (&this->Items,(TSharedRef<FTestData,1> *)(pFVar1 + 1),&local_38,param_2);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_38.SharedReferenceCount.ReferenceController);
        if (((this->ListBeingTested).Object == (SListView<TSharedPtr<FTestData,1>_> *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          pFVar5 = (FReply *)(*pcVar2)();
          return pFVar5;
        }
        (**(code **)(((this->ListBeingTested).Object)->_padding_ + 0x248))();
        if (((this->HorizontalListBeingTested).Object == (SListView<TSharedPtr<FTestData,1>_> *)0x0)
           && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          pFVar5 = (FReply *)(*pcVar2)();
          return pFVar5;
        }
        (**(code **)(((this->HorizontalListBeingTested).Object)->_padding_ + 0x248))();
        if (((this->TreeBeingTested).Object == (STreeView<TSharedPtr<FTestData,1>_> *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          pFVar5 = (FReply *)(*pcVar2)();
          return pFVar5;
        }
        (**(code **)(*(longlong *)(this->TreeBeingTested).Object + 0x248))();
        if (((this->TileViewBeingTested).Object == (STileView<TSharedPtr<FTestData,1>_> *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          pFVar5 = (FReply *)(*pcVar2)();
          return pFVar5;
        }
        (**(code **)(*(longlong *)(this->TileViewBeingTested).Object + 0x248))();
        if (((this->HorizontalTileViewBeingTested).Object ==
             (STileView<TSharedPtr<FTestData,1>_> *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          pFVar5 = (FReply *)(*pcVar2)();
          return pFVar5;
        }
        (**(code **)(*(longlong *)(this->HorizontalTileViewBeingTested).Object + 0x248))();
        FReply::FReply(__return_storage_ptr__,true);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((param_3->SharedReferenceCount).ReferenceController);
        return __return_storage_ptr__;
      }
      goto LAB_142fedf31;
    }
  }
  pTVar6 = (TReferenceControllerBase<1> *)0x0;
LAB_142fedf31:
  FReply::FReply(__return_storage_ptr__,false);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// OnCanAcceptDrop_Handler @ 142fee410

/* WARNING: Enum "Type": Some values do not have unique names */

TOptional<EItemDropZone> __thiscall
STableViewTesting::OnCanAcceptDrop_Handler
          (STableViewTesting *this,FDragDropEvent *param_1,EItemDropZone param_2,
          TSharedPtr<FTestData,1> *param_3)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  char cVar4;
  FString *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  undefined4 in_register_00000084;
  longlong in_stack_00000028;
  
  plVar1 = *(longlong **)(CONCAT44(in_register_00000084,param_2) + 0x80);
  if (plVar1 != (longlong *)0x0) {
    pcVar2 = *(code **)(*plVar1 + 0x50);
    pFVar5 = FTableViewDragDrop::GetTypeId();
    cVar4 = (*pcVar2)(plVar1,pFVar5);
    if (cVar4 != '\0') {
      pTVar6 = *(TReferenceControllerBase<1> **)(CONCAT44(in_register_00000084,param_2) + 0x88);
      lVar3 = *(longlong *)(CONCAT44(in_register_00000084,param_2) + 0x80);
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
      }
      *(undefined1 *)((longlong)&param_1->_padding_ + 4) = 0;
      if (lVar3 != 0) {
        *(int *)&param_1->_padding_ = (int)param_3;
        *(undefined1 *)((longlong)&param_1->_padding_ + 4) = 1;
      }
      goto LAB_142fee48d;
    }
  }
  pTVar6 = (TReferenceControllerBase<1> *)0x0;
  *(undefined1 *)((longlong)&param_1->_padding_ + 4) = 0;
LAB_142fee48d:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)(in_stack_00000028 + 8));
  return (TOptional<EItemDropZone>)param_1;
}

// OnDragDetected_Handler @ 142feeb70

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
STableViewTesting::OnDragDetected_Handler
          (STableViewTesting *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2,TWeakPtr<FTestData,1> *param_3)

{
  atomic<int> aVar1;
  code *pcVar2;
  TWeakPtr<FTestData,1> *pTVar3;
  atomic<int> aVar4;
  FReply *pFVar5;
  FDragDropOperation *this_00;
  atomic<int> *paVar6;
  TReferenceControllerBase<1> *pTVar7;
  FTestData *pFVar8;
  bool bVar9;
  FSharedReferencer<1> local_e0;
  TSharedRef<FTableViewDragDrop,1> local_d8;
  FReply local_c8;
  
  FReply::FReply(&local_c8,true);
  pTVar3 = param_3;
  pFVar8 = (FTestData *)0x0;
  pTVar7 = (param_3->WeakReferenceCount).ReferenceController;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar7->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar7 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142feebd4;
      }
      LOCK();
      aVar4 = pTVar7->SharedReferenceCount;
      bVar9 = aVar1 == aVar4;
      if (bVar9) {
        pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar4 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar4;
    } while (!bVar9);
    pFVar8 = param_3->Object;
    if (pFVar8 != (FTestData *)0x0) goto LAB_142feec25;
  }
LAB_142feebd4:
  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x416,L"");
  if (bVar9) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FReply *)(*pcVar2)();
    return pFVar5;
  }
  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x26c,L"");
  if (bVar9) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FReply *)(*pcVar2)();
    return pFVar5;
  }
LAB_142feec25:
  this_00 = ::operator_new(0x50);
  if (this_00 == (FDragDropOperation *)0x0) {
    this_00 = (FDragDropOperation *)0x0;
  }
  else {
    FDragDropOperation::FDragDropOperation(this_00);
    this_00->_padding_ = (longlong)&___7FTableViewDragDrop__6B_;
    this_00[1]._padding_ = (longlong)pFVar8;
    this_00[1]._padding_ = (longlong)pTVar7;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((((this_00->_padding_ != 0) && (this_00->_padding_ != 0)) &&
        (0 < *(int *)(this_00->_padding_ + 8))) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("!InObject || !InObject->DoesSharedInstanceExist()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x7a5,L"Trying to share an already-shared object"), bVar9)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FReply *)(*pcVar2)();
      return pFVar5;
    }
  }
  param_3 = (TWeakPtr<FTestData,1> *)this_00;
  TSharedRef<FTableViewDragDrop,1>::TSharedRef<FTableViewDragDrop,1><FTableViewDragDrop>
            (&local_d8,(TRawPtrProxy<FTableViewDragDrop> *)&param_3);
  if (local_d8.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    paVar6 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar6 = &(local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
    LOCK();
    *paVar6 = (atomic<int>)((int)*paVar6 + 1);
    UNLOCK();
  }
  local_e0.ReferenceController = local_d8.SharedReferenceCount.ReferenceController;
  if (local_d8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar6 = (atomic<int>)((int)*paVar6 + 1);
    UNLOCK();
  }
  local_c8.DragDropContent.Object = (FDragDropOperation *)local_d8.Object;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            (&local_c8.DragDropContent.SharedReferenceCount,&local_e0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d8.SharedReferenceCount.ReferenceController);
  FReply::FReply(__return_storage_ptr__,&local_c8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  FReply::~FReply(&local_c8);
  pTVar7 = (pTVar3->WeakReferenceCount).ReferenceController;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar6 = &pTVar7->WeakReferenceCount;
    aVar1 = *paVar6;
    *paVar6 = (atomic<int>)((int)*paVar6 + -1);
    UNLOCK();
    if (aVar1 == (atomic<int>)0x1) {
      (**(code **)(pTVar7->_padding_ + 8))(pTVar7,1);
    }
  }
  return __return_storage_ptr__;
}

// OnGenerateWidgetForHorizontalList @ 142ff0200

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<ITableRow,1> * __thiscall
STableViewTesting::OnGenerateWidgetForHorizontalList
          (STableViewTesting *this,TSharedRef<ITableRow,1> *__return_storage_ptr__,
          TSharedPtr<FTestData,1> *param_1,TSharedRef<STableViewBase,1> *param_2)

{
  byte *pbVar1;
  atomic<int> aVar2;
  FTestData *pFVar3;
  code *pcVar4;
  SHorizontalListItemEditor *this_00;
  FSharedReferencer<1> FVar5;
  bool bVar6;
  char cVar7;
  byte bVar8;
  FArguments *pFVar9;
  TReferenceControllerBase<1> *pTVar10;
  TSharedRef<ITableRow,1> *pTVar11;
  atomic<int> *paVar12;
  TReferenceControllerBase<1> *pTVar13;
  FLLMScope local_res10 [2];
  FName local_res18;
  TSharedRef<STableViewBase,1> *local_res20;
  FSharedReferencer<1> FStack_320;
  SHorizontalListItemEditor *local_318;
  FSharedReferencer<1> local_310;
  TSharedRef<STableViewBase,1> **local_308;
  TSharedRef<STableViewBase,1> *local_300;
  FMemScope local_2f8;
  TWeakPtr<FTestData,1> local_2f0;
  TSharedRef<SHorizontalListItemEditor,1> local_2e0;
  code *local_2c8;
  undefined4 uStack_2c0;
  uint uStack_2bc;
  code *local_2b8;
  undefined4 uStack_2b0;
  uint uStack_2ac;
  code *local_2a8;
  TReferenceControllerBase<1> *pTStack_2a0;
  FTestData *local_298;
  TReferenceControllerBase<1> *pTStack_290;
  undefined1 local_288 [504];
  undefined1 local_90 [24];
  undefined1 local_78 [24];
  undefined1 local_60 [32];
  FSharedReferencer<1> local_40;
  
  local_res20 = param_2;
  pFVar9 = SHorizontalListItemEditor::FArguments::FArguments((FArguments *)local_288);
  pTVar13 = (TReferenceControllerBase<1> *)0x0;
  FStack_320.ReferenceController._0_4_ = 0;
  local_2c8 = OnCanAcceptDrop_Handler;
  uStack_2c0 = 0;
  uStack_2bc = FStack_320.ReferenceController._4_4_;
  TDelegateRegistration<TOptional<enum_EItemDropZone>___cdecl(FDragDropEvent_const_&,enum_EItemDropZone,TSharedPtr<FTestData,1>),FDefaultDelegateUserPolicy>
  ::BindSP<STableViewTesting>(&pFVar9->_OnCanAcceptDrop,this,(pmf_8cb97abd *)&local_2c8);
  FStack_320.ReferenceController._0_4_ = 0;
  local_2b8 = OnAcceptDrop_Handler;
  uStack_2b0 = 0;
  uStack_2ac = FStack_320.ReferenceController._4_4_;
  TDelegateRegistration<FReply___cdecl(FDragDropEvent_const_&,enum_EItemDropZone,TSharedPtr<FTestData,1>),FDefaultDelegateUserPolicy>
  ::BindSP<STableViewTesting>(&pFVar9->_OnAcceptDrop,this,(pmf_4302e448 *)&local_2b8);
  pTVar10 = (param_1->SharedReferenceCount).ReferenceController;
  local_2f0.Object = param_1->Object;
  if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
    paVar12 = (atomic<int> *)&DAT_0000000c;
  }
  else {
    paVar12 = &pTVar10->WeakReferenceCount;
    LOCK();
    *paVar12 = (atomic<int>)((int)*paVar12 + 1);
    UNLOCK();
  }
  FStack_320.ReferenceController =
       (TReferenceControllerBase<1> *)((ulonglong)FStack_320.ReferenceController._4_4_ << 0x20);
  local_2a8 = OnDragDetected_Handler;
  pTStack_2a0 = FStack_320.ReferenceController;
  local_2f0.WeakReferenceCount.ReferenceController = pTVar10;
  TDelegateRegistration<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
  ::BindSP<STableViewTesting,TWeakPtr<FTestData,1>_&>
            ((TDelegateRegistration<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
              *)&pFVar9->_OnDragDetected,this,(pmf_d7bd7d09 *)&local_2a8,&local_2f0);
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    aVar2 = *paVar12;
    *paVar12 = (atomic<int>)((int)*paVar12 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar10->_padding_ + 8))(pTVar10,1);
    }
  }
  pTVar10 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar3 = param_1->Object;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_298 = (pFVar9->_ItemToEdit).Object;
  pTStack_290 = (pFVar9->_ItemToEdit).SharedReferenceCount.ReferenceController;
  (pFVar9->_ItemToEdit).Object = pFVar3;
  (pFVar9->_ItemToEdit).SharedReferenceCount.ReferenceController = pTVar10;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_290);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  local_300 = local_res20;
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2f8,&local_res18,true);
  local_308 = &local_300;
  local_310.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar10 = ::operator_new(0x418);
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    pTVar10->SharedReferenceCount = (atomic<int>)0x1;
    pTVar10->WeakReferenceCount = (atomic<int>)0x1;
    pTVar10->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VSHorizontalListItemEditor___00_SharedPointerInternals__6B_
    ;
    memset(pTVar10 + 1,0,0x408);
    STableRow<TSharedPtr<FTestData,1>_>::STableRow<TSharedPtr<FTestData,1>_>
              ((STableRow<TSharedPtr<FTestData,1>_> *)(pTVar10 + 1));
    pTVar10[1]._padding_ = (longlong)&SHorizontalListItemEditor::_vftable__for__ITableRow__;
    *(undefined ***)&pTVar10[1].SharedReferenceCount =
         &SHorizontalListItemEditor::_vftable__for__SBorder__;
    pTVar10[0x40].SharedReferenceCount = (atomic<int>)0x0;
    pTVar10[0x40].WeakReferenceCount = (atomic<int>)0x0;
    pTVar10[0x41]._padding_ = 0;
    pTVar13 = pTVar10;
  }
  TSharedRef<SHorizontalListItemEditor,1>::TSharedRef<SHorizontalListItemEditor,1>
            (&local_2e0,(SHorizontalListItemEditor *)(pTVar13 + 1),pTVar13);
  FStack_320.ReferenceController = local_2e0.SharedReferenceCount.ReferenceController;
  if (local_2e0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_2e0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_2e0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_318 = local_2e0.Object;
  SharedPointerInternals::FSharedReferencer<1>::operator=(&local_310,&FStack_320);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_320.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2e0.SharedReferenceCount.ReferenceController);
  this_00 = local_318;
  if ((local_318 == (SHorizontalListItemEditor *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pTVar11 = (TSharedRef<ITableRow,1> *)(*pcVar4)();
    return pTVar11;
  }
  SWidget::SetDebugInfo
            ((SWidget *)&this_00->_padding_,"SHorizontalListItemEditor",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\STableViewTesting.cpp"
             ,0x58e,0x408);
  FMemScope::~FMemScope(&local_2f8);
  FLLMScope::~FLLMScope(local_res10);
  if ((this_00 == (SHorizontalListItemEditor *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pTVar11 = (TSharedRef<ITableRow,1> *)(*pcVar4)();
    return pTVar11;
  }
  SWidget::SWidgetConstruct((SWidget *)&this_00->_padding_,(FSlateBaseNamedArgs *)pFVar9);
  SHorizontalListItemEditor::Construct(this_00,pFVar9,*local_308);
  if ((this_00 == (SHorizontalListItemEditor *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pTVar11 = (TSharedRef<ITableRow,1> *)(*pcVar4)();
    return pTVar11;
  }
  if ((this_00->_padding_ & 0x10) == 0) {
    cVar7 = (**(code **)(this_00->_padding_ + 0x228))(&this_00->_padding_);
    bVar8 = 0;
    if (cVar7 == '\0') goto LAB_142ff0575;
  }
  bVar8 = 0x20;
LAB_142ff0575:
  *(byte *)&this_00->_padding_ = (byte)this_00->_padding_ & 0xdf;
  *(byte *)&this_00->_padding_ = (byte)this_00->_padding_ | bVar8;
  if ((this_00 == (SHorizontalListItemEditor *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pTVar11 = (TSharedRef<ITableRow,1> *)(*pcVar4)();
    return pTVar11;
  }
  pbVar1 = (byte *)((longlong)&this_00->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this_00 == (SHorizontalListItemEditor *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pTVar11 = (TSharedRef<ITableRow,1> *)(*pcVar4)();
    return pTVar11;
  }
  FVar5.ReferenceController = local_310.ReferenceController;
  local_310.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_318 = (SHorizontalListItemEditor *)0x0;
  if ((this_00 == (SHorizontalListItemEditor *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pTVar11 = (TSharedRef<ITableRow,1> *)(*pcVar4)();
    return pTVar11;
  }
  __return_storage_ptr__->Object = (ITableRow *)this_00;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = FVar5.ReferenceController;
  if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar5.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar5.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar5.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_40.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_60);
  if ((void *)local_60._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_60._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_60);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_78);
  if ((void *)local_78._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_78._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_78);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_90);
  if ((void *)local_90._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_90._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_90);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_288);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// OnGenerateWidgetForList @ 142ff0700

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<ITableRow,1> * __thiscall
STableViewTesting::OnGenerateWidgetForList
          (STableViewTesting *this,TSharedRef<ITableRow,1> *__return_storage_ptr__,
          TSharedPtr<FTestData,1> *param_1,TSharedRef<STableViewBase,1> *param_2)

{
  atomic<int> aVar1;
  TReferenceControllerBase<1> *pTVar2;
  FTestData *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  FArguments *pFVar5;
  TSlateDecl<SItemEditor,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
  *this_00;
  TSharedRef<SItemEditor,1> *pTVar6;
  atomic<int> *paVar7;
  T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&> local_res10;
  TWeakPtr<FTestData,1> local_2c8;
  code *local_2b8;
  undefined8 uStack_2b0;
  TSharedRef<SItemEditor,1> local_2a8;
  TSlateDecl<SItemEditor,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
  local_298;
  FArguments local_280;
  
  pFVar5 = SItemEditor::FArguments::FArguments(&local_280);
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  local_2c8.Object = param_1->Object;
  if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
    paVar7 = (atomic<int> *)&DAT_0000000c;
  }
  else {
    paVar7 = &pTVar2->WeakReferenceCount;
    LOCK();
    *paVar7 = (atomic<int>)((int)*paVar7 + 1);
    UNLOCK();
  }
  uStack_2b0 = (ulonglong)uStack_2b0._4_4_ << 0x20;
  local_2b8 = OnDragDetected_Handler;
  local_2c8.WeakReferenceCount.ReferenceController = pTVar2;
  TDelegateRegistration<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
  ::BindSP<STableViewTesting,TWeakPtr<FTestData,1>_&>
            ((TDelegateRegistration<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
              *)&pFVar5->_OnDragDetected,this,(pmf_d7bd7d09 *)&local_2b8,&local_2c8);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    aVar1 = *paVar7;
    *paVar7 = (atomic<int>)((int)*paVar7 + -1);
    UNLOCK();
    if (aVar1 == (atomic<int>)0x1) {
      (**(code **)(pTVar2->_padding_ + 8))(pTVar2,1);
    }
  }
  local_2c8.WeakReferenceCount.ReferenceController =
       local_2c8.WeakReferenceCount.ReferenceController & 0xffffffff00000000;
  local_2c8.Object = (FTestData *)OnCanAcceptDrop_Handler;
  TDelegateRegistration<TOptional<enum_EItemDropZone>___cdecl(FDragDropEvent_const_&,enum_EItemDropZone,TSharedPtr<FTestData,1>),FDefaultDelegateUserPolicy>
  ::BindSP<STableViewTesting>(&pFVar5->_OnCanAcceptDrop,this,(pmf_8cb97abd *)&local_2c8);
  local_2c8.WeakReferenceCount.ReferenceController =
       local_2c8.WeakReferenceCount.ReferenceController & 0xffffffff00000000;
  local_2c8.Object = (FTestData *)OnAcceptDrop_Handler;
  TDelegateRegistration<FReply___cdecl(FDragDropEvent_const_&,enum_EItemDropZone,TSharedPtr<FTestData,1>),FDefaultDelegateUserPolicy>
  ::BindSP<STableViewTesting>(&pFVar5->_OnAcceptDrop,this,(pmf_4302e448 *)&local_2c8);
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar3 = param_1->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (pFVar5->_ItemToEdit).SharedReferenceCount.ReferenceController;
  (pFVar5->_ItemToEdit).Object = pFVar3;
  (pFVar5->_ItemToEdit).SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  local_res10.Arg0 = param_2;
  this_00 = MakeTDecl<SItemEditor,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                      (&local_298,"SItemEditor",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\STableViewTesting.cpp"
                       ,0x57c,&local_res10);
  pTVar6 = TSlateDecl<SItemEditor,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
           ::operator<<=(this_00,&local_2a8,pFVar5);
  __return_storage_ptr__->Object = (ITableRow *)pTVar6->Object;
  pTVar2 = (pTVar6->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2a8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_298._Widget.SharedReferenceCount.ReferenceController);
  SItemEditor::FArguments::~FArguments(&local_280);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// OnGenerateWidgetForTileView @ 142ff0900

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<ITableRow,1> * __thiscall
STableViewTesting::OnGenerateWidgetForTileView
          (STableViewTesting *this,TSharedRef<ITableRow,1> *__return_storage_ptr__,
          TSharedPtr<FTestData,1> *param_1,TSharedRef<STableViewBase,1> *param_2)

{
  byte *pbVar1;
  atomic<int> aVar2;
  FTestData *pFVar3;
  code *pcVar4;
  STileItemEditor *this_00;
  FSharedReferencer<1> FVar5;
  bool bVar6;
  char cVar7;
  byte bVar8;
  FArguments *pFVar9;
  TReferenceControllerBase<1> *pTVar10;
  TSharedRef<ITableRow,1> *pTVar11;
  atomic<int> *paVar12;
  TReferenceControllerBase<1> *pTVar13;
  FLLMScope local_res10 [2];
  FName local_res18;
  TSharedRef<STableViewBase,1> *local_res20;
  FSharedReferencer<1> FStack_320;
  STileItemEditor *local_318;
  FSharedReferencer<1> local_310;
  TSharedRef<STableViewBase,1> **local_308;
  TSharedRef<STableViewBase,1> *local_300;
  FMemScope local_2f8;
  TWeakPtr<FTestData,1> local_2f0;
  TSharedRef<STileItemEditor,1> local_2e0;
  code *local_2c8;
  undefined4 uStack_2c0;
  uint uStack_2bc;
  code *local_2b8;
  undefined4 uStack_2b0;
  uint uStack_2ac;
  code *local_2a8;
  TReferenceControllerBase<1> *pTStack_2a0;
  FTestData *local_298;
  TReferenceControllerBase<1> *pTStack_290;
  undefined1 local_288 [504];
  undefined1 local_90 [24];
  undefined1 local_78 [24];
  undefined1 local_60 [32];
  FSharedReferencer<1> local_40;
  
  local_res20 = param_2;
  pFVar9 = STileItemEditor::FArguments::FArguments((FArguments *)local_288);
  pTVar13 = (TReferenceControllerBase<1> *)0x0;
  FStack_320.ReferenceController._0_4_ = 0;
  local_2c8 = OnCanAcceptDrop_Handler;
  uStack_2c0 = 0;
  uStack_2bc = FStack_320.ReferenceController._4_4_;
  TDelegateRegistration<TOptional<enum_EItemDropZone>___cdecl(FDragDropEvent_const_&,enum_EItemDropZone,TSharedPtr<FTestData,1>),FDefaultDelegateUserPolicy>
  ::BindSP<STableViewTesting>(&pFVar9->_OnCanAcceptDrop,this,(pmf_8cb97abd *)&local_2c8);
  FStack_320.ReferenceController._0_4_ = 0;
  local_2b8 = OnAcceptDrop_Handler;
  uStack_2b0 = 0;
  uStack_2ac = FStack_320.ReferenceController._4_4_;
  TDelegateRegistration<FReply___cdecl(FDragDropEvent_const_&,enum_EItemDropZone,TSharedPtr<FTestData,1>),FDefaultDelegateUserPolicy>
  ::BindSP<STableViewTesting>(&pFVar9->_OnAcceptDrop,this,(pmf_4302e448 *)&local_2b8);
  pTVar10 = (param_1->SharedReferenceCount).ReferenceController;
  local_2f0.Object = param_1->Object;
  if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
    paVar12 = (atomic<int> *)&DAT_0000000c;
  }
  else {
    paVar12 = &pTVar10->WeakReferenceCount;
    LOCK();
    *paVar12 = (atomic<int>)((int)*paVar12 + 1);
    UNLOCK();
  }
  FStack_320.ReferenceController =
       (TReferenceControllerBase<1> *)((ulonglong)FStack_320.ReferenceController._4_4_ << 0x20);
  local_2a8 = OnDragDetected_Handler;
  pTStack_2a0 = FStack_320.ReferenceController;
  local_2f0.WeakReferenceCount.ReferenceController = pTVar10;
  TDelegateRegistration<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
  ::BindSP<STableViewTesting,TWeakPtr<FTestData,1>_&>
            ((TDelegateRegistration<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
              *)&pFVar9->_OnDragDetected,this,(pmf_d7bd7d09 *)&local_2a8,&local_2f0);
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    aVar2 = *paVar12;
    *paVar12 = (atomic<int>)((int)*paVar12 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar10->_padding_ + 8))(pTVar10,1);
    }
  }
  pTVar10 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar3 = param_1->Object;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_298 = (pFVar9->_ItemToEdit).Object;
  pTStack_290 = (pFVar9->_ItemToEdit).SharedReferenceCount.ReferenceController;
  (pFVar9->_ItemToEdit).Object = pFVar3;
  (pFVar9->_ItemToEdit).SharedReferenceCount.ReferenceController = pTVar10;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_290);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  local_300 = local_res20;
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2f8,&local_res18,true);
  local_308 = &local_300;
  local_310.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar10 = ::operator_new(0x418);
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    pTVar10->SharedReferenceCount = (atomic<int>)0x1;
    pTVar10->WeakReferenceCount = (atomic<int>)0x1;
    pTVar10->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VSTileItemEditor___00_SharedPointerInternals__6B_;
    memset(pTVar10 + 1,0,0x408);
    STableRow<TSharedPtr<FTestData,1>_>::STableRow<TSharedPtr<FTestData,1>_>
              ((STableRow<TSharedPtr<FTestData,1>_> *)(pTVar10 + 1));
    pTVar10[1]._padding_ = (longlong)&STileItemEditor::_vftable__for__ITableRow__;
    *(undefined ***)&pTVar10[1].SharedReferenceCount = &STileItemEditor::_vftable__for__SBorder__;
    pTVar10[0x40].SharedReferenceCount = (atomic<int>)0x0;
    pTVar10[0x40].WeakReferenceCount = (atomic<int>)0x0;
    pTVar10[0x41]._padding_ = 0;
    pTVar13 = pTVar10;
  }
  TSharedRef<STileItemEditor,1>::TSharedRef<STileItemEditor,1>
            (&local_2e0,(STileItemEditor *)(pTVar13 + 1),pTVar13);
  FStack_320.ReferenceController = local_2e0.SharedReferenceCount.ReferenceController;
  if (local_2e0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_2e0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_2e0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_318 = local_2e0.Object;
  SharedPointerInternals::FSharedReferencer<1>::operator=(&local_310,&FStack_320);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_320.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2e0.SharedReferenceCount.ReferenceController);
  this_00 = local_318;
  if ((local_318 == (STileItemEditor *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pTVar11 = (TSharedRef<ITableRow,1> *)(*pcVar4)();
    return pTVar11;
  }
  SWidget::SetDebugInfo
            ((SWidget *)&this_00->_padding_,"STileItemEditor",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\STableViewTesting.cpp"
             ,0x59b,0x408);
  FMemScope::~FMemScope(&local_2f8);
  FLLMScope::~FLLMScope(local_res10);
  if ((this_00 == (STileItemEditor *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pTVar11 = (TSharedRef<ITableRow,1> *)(*pcVar4)();
    return pTVar11;
  }
  SWidget::SWidgetConstruct((SWidget *)&this_00->_padding_,(FSlateBaseNamedArgs *)pFVar9);
  STileItemEditor::Construct(this_00,pFVar9,*local_308);
  if ((this_00 == (STileItemEditor *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pTVar11 = (TSharedRef<ITableRow,1> *)(*pcVar4)();
    return pTVar11;
  }
  if ((this_00->_padding_ & 0x10) == 0) {
    cVar7 = (**(code **)(this_00->_padding_ + 0x228))(&this_00->_padding_);
    bVar8 = 0;
    if (cVar7 == '\0') goto LAB_142ff0c75;
  }
  bVar8 = 0x20;
LAB_142ff0c75:
  *(byte *)&this_00->_padding_ = (byte)this_00->_padding_ & 0xdf;
  *(byte *)&this_00->_padding_ = (byte)this_00->_padding_ | bVar8;
  if ((this_00 == (STileItemEditor *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pTVar11 = (TSharedRef<ITableRow,1> *)(*pcVar4)();
    return pTVar11;
  }
  pbVar1 = (byte *)((longlong)&this_00->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this_00 == (STileItemEditor *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pTVar11 = (TSharedRef<ITableRow,1> *)(*pcVar4)();
    return pTVar11;
  }
  FVar5.ReferenceController = local_310.ReferenceController;
  local_310.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_318 = (STileItemEditor *)0x0;
  if ((this_00 == (STileItemEditor *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pTVar11 = (TSharedRef<ITableRow,1> *)(*pcVar4)();
    return pTVar11;
  }
  __return_storage_ptr__->Object = (ITableRow *)this_00;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = FVar5.ReferenceController;
  if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar5.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar5.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar5.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_40.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_60);
  if ((void *)local_60._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_60._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_60);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_78);
  if ((void *)local_78._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_78._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_78);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_90);
  if ((void *)local_90._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_90._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_90);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_288);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// OnGenerateWidgetForTree @ 142ff0e00

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<ITableRow,1> * __thiscall
STableViewTesting::OnGenerateWidgetForTree
          (STableViewTesting *this,TSharedRef<ITableRow,1> *__return_storage_ptr__,
          TSharedPtr<FTestData,1> *param_1,TSharedRef<STableViewBase,1> *param_2)

{
  atomic<int> aVar1;
  TReferenceControllerBase<1> *pTVar2;
  FTestData *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  FArguments *pFVar5;
  TSlateDecl<SItemEditor,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
  *this_00;
  TSharedRef<SItemEditor,1> *pTVar6;
  atomic<int> *paVar7;
  T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&> local_res10;
  code *local_2c8;
  undefined8 uStack_2c0;
  TWeakPtr<FTestData,1> local_2b8;
  TSharedRef<SItemEditor,1> local_2a8;
  TSlateDecl<SItemEditor,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
  local_298;
  FArguments local_280;
  
  pFVar5 = SItemEditor::FArguments::FArguments(&local_280);
  uStack_2c0._0_4_ = 0;
  local_2c8 = OnCanAcceptDrop_Handler;
  local_2b8.Object = (FTestData *)OnCanAcceptDrop_Handler;
  local_2b8.WeakReferenceCount.ReferenceController._0_4_ = 0;
  local_2b8.WeakReferenceCount.ReferenceController._4_4_ = uStack_2c0._4_4_;
  TDelegateRegistration<TOptional<enum_EItemDropZone>___cdecl(FDragDropEvent_const_&,enum_EItemDropZone,TSharedPtr<FTestData,1>),FDefaultDelegateUserPolicy>
  ::BindSP<STableViewTesting>(&pFVar5->_OnCanAcceptDrop,this,(pmf_8cb97abd *)&local_2b8);
  uStack_2c0._0_4_ = 0;
  local_2c8 = OnAcceptDrop_Handler;
  local_2b8.Object = (FTestData *)OnAcceptDrop_Handler;
  local_2b8.WeakReferenceCount.ReferenceController._0_4_ = 0;
  local_2b8.WeakReferenceCount.ReferenceController._4_4_ = uStack_2c0._4_4_;
  TDelegateRegistration<FReply___cdecl(FDragDropEvent_const_&,enum_EItemDropZone,TSharedPtr<FTestData,1>),FDefaultDelegateUserPolicy>
  ::BindSP<STableViewTesting>(&pFVar5->_OnAcceptDrop,this,(pmf_4302e448 *)&local_2b8);
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  local_2b8.Object = param_1->Object;
  if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
    paVar7 = (atomic<int> *)&DAT_0000000c;
  }
  else {
    paVar7 = &pTVar2->WeakReferenceCount;
    LOCK();
    *paVar7 = (atomic<int>)((int)*paVar7 + 1);
    UNLOCK();
  }
  uStack_2c0 = (ulonglong)uStack_2c0._4_4_ << 0x20;
  local_2c8 = OnDragDetected_Handler;
  local_2b8.WeakReferenceCount.ReferenceController = pTVar2;
  TDelegateRegistration<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
  ::BindSP<STableViewTesting,TWeakPtr<FTestData,1>_&>
            ((TDelegateRegistration<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
              *)&pFVar5->_OnDragDetected,this,(pmf_d7bd7d09 *)&local_2c8,&local_2b8);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    aVar1 = *paVar7;
    *paVar7 = (atomic<int>)((int)*paVar7 + -1);
    UNLOCK();
    if (aVar1 == (atomic<int>)0x1) {
      (**(code **)(pTVar2->_padding_ + 8))(pTVar2,1);
    }
  }
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar3 = param_1->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (pFVar5->_ItemToEdit).SharedReferenceCount.ReferenceController;
  (pFVar5->_ItemToEdit).Object = pFVar3;
  (pFVar5->_ItemToEdit).SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  local_res10.Arg0 = param_2;
  this_00 = MakeTDecl<SItemEditor,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                      (&local_298,"SItemEditor",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\STableViewTesting.cpp"
                       ,0x5a9,&local_res10);
  pTVar6 = TSlateDecl<SItemEditor,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
           ::operator<<=(this_00,&local_2a8,pFVar5);
  __return_storage_ptr__->Object = (ITableRow *)pTVar6->Object;
  pTVar2 = (pTVar6->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2a8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_298._Widget.SharedReferenceCount.ReferenceController);
  SItemEditor::FArguments::~FArguments(&local_280);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// OnGetChildrenForTree @ 142ff1000

void __thiscall
STableViewTesting::OnGetChildrenForTree
          (STableViewTesting *this,TSharedPtr<FTestData,1> *param_1,
          TArray<TSharedPtr<FTestData,1>,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1->Object == (FTestData *)0x0) {
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
  TArray<TSharedPtr<FTestData,1>,TSizedDefaultAllocator<32>_>::operator=
            (param_2,&param_1->Object->Children);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnSelectionModeChanged @ 142ff8260

void __thiscall
STableViewTesting::OnSelectionModeChanged
          (STableViewTesting *this,TSharedPtr<ESelectionMode::Type,1> *param_1,Type param_2)

{
  Type *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar1 = param_1->Object;
  if (pTVar1 != (Type *)0x0) {
    pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar3 = (this->CurSelectionMode).SharedReferenceCount.ReferenceController;
    (this->CurSelectionMode).Object = pTVar1;
    (this->CurSelectionMode).SharedReferenceCount.ReferenceController = pTVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// Rebuild_OnClicked @ 143006910

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FReply * __thiscall
STableViewTesting::Rebuild_OnClicked(STableViewTesting *this,FReply *__return_storage_ptr__)

{
  int *piVar1;
  TArray<TSharedPtr<FTestData,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  ITextData *pIVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  float fVar6;
  FSharedReferencer<1> FVar7;
  bool bVar8;
  int iVar9;
  FText *pFVar10;
  FText *pFVar11;
  FTextFormat *pFVar12;
  FReply *pFVar13;
  FTestData *pFVar14;
  int iVar15;
  undefined1 local_res8 [8];
  TRawPtrProxy<FTestData> local_res10;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_1d8;
  FTestData *local_1c8;
  TReferenceControllerBase<1> *pTStack_1c0;
  FText local_1b8;
  TSharedRef<FTestData,1> local_1a8;
  FTextFormat local_198;
  TSharedPtr<FCulture,1> local_188;
  FFormatArgumentValue local_178;
  FText local_158;
  TSharedRef<FTestData,1> local_148;
  FText local_138;
  FTextFormat local_128;
  FReply local_118;
  
  iVar15 = (this->Items).ArrayNum;
  if (iVar15 != this->TotalItems) {
    pTVar2 = &this->Items;
    DestructItems<TSharedPtr<FTestData,1>,int>
              ((TSharedPtr<FTestData,1> *)(pTVar2->AllocatorInstance).Data,iVar15);
    piVar1 = &(this->Items).ArrayMax;
    (this->Items).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&pTVar2->AllocatorInstance,0,piVar1);
    }
    fVar6 = __real_3ac80190;
    iVar15 = 0;
    if (0 < this->TotalItems) {
      do {
        local_188.Object = (FCulture *)0x0;
        local_188.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        pFVar10 = FText::AsNumber(&local_138,iVar15,(FNumberFormattingOptions *)0x0,&local_188);
        pFVar11 = FText::AsLocalizable_Advanced_LocText
                            (&local_158,L"STableViewTesting",L"TestWidget",L"Text Wgt {0}");
        pFVar12 = FTextFormat::FTextFormat(&local_128,pFVar11,Default);
        local_178.Type = Text;
        FText::FText((FText *)&local_178.TextValue,pFVar10);
        if ((local_178.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0xbd,
                               L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                              ), bVar8)) {
          pcVar5 = (code *)swi(3);
          pFVar13 = (FReply *)(*pcVar5)();
          return pFVar13;
        }
        local_1d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1d8.ArrayNum = 1;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,1,0,&local_1d8.AllocatorInstance,1,&local_1d8.ArrayMax);
        ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                  (local_1d8.AllocatorInstance.Data,&local_178,1);
        local_198.TextFormatData.Object = (pFVar12->TextFormatData).Object;
        local_198.TextFormatData.SharedReferenceCount.ReferenceController =
             (pFVar12->TextFormatData).SharedReferenceCount.ReferenceController;
        if (local_198.TextFormatData.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_198.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount
               = (atomic<int>)
                 ((int)(local_198.TextFormatData.SharedReferenceCount.ReferenceController)->
                       SharedReferenceCount + 1);
          UNLOCK();
        }
        FText::Format(&local_1b8,&local_198,&local_1d8);
        DestructItems<FFormatArgumentValue,int>
                  ((FFormatArgumentValue *)local_1d8.AllocatorInstance.Data,local_1d8.ArrayNum);
        if ((FFormatArgumentValue *)local_1d8.AllocatorInstance.Data != (FFormatArgumentValue *)0x0)
        {
          FMemory::Free(local_1d8.AllocatorInstance.Data);
        }
        if (local_178.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)
                       *(ITextData *)local_178.TextValue.field0_0x0.TypedValue.TextData.Reference +
                      0x10))();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((pFVar12->TextFormatData).SharedReferenceCount.ReferenceController);
        pIVar3 = (pFVar10->TextData).Reference;
        if (pIVar3 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar3 + 0x10))();
        }
        pFVar14 = ::operator_new(0x28);
        if (pFVar14 == (FTestData *)0x0) {
          pFVar14 = (FTestData *)0x0;
        }
        else {
          iVar9 = rand();
          (pFVar14->Children).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar14->Children).ArrayNum = 0;
          (pFVar14->Children).ArrayMax = 0;
          (pFVar14->Name).TextData.Reference = local_1b8.TextData.Reference;
          if (local_1b8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_1b8.TextData.Reference + 8))
                      (local_1b8.TextData.Reference,local_res8);
          }
          (pFVar14->Name).Flags = local_1b8.Flags;
          pFVar14->Number = (float)iVar9 * fVar6;
        }
        local_res10.Object = pFVar14;
        TSharedRef<FTestData,1>::TSharedRef<FTestData,1><FTestData>(&local_1a8,&local_res10);
        if (local_1b8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_1b8.TextData.Reference + 0x10))();
        }
        if (local_158.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_158.TextData.Reference + 0x10))();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_188.SharedReferenceCount.ReferenceController);
        FVar7.ReferenceController = local_1a8.SharedReferenceCount.ReferenceController;
        pFVar14 = local_1a8.Object;
        local_1c8 = local_1a8.Object;
        pTStack_1c0 = local_1a8.SharedReferenceCount.ReferenceController;
        if (local_1a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_1a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_1a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        pFVar4 = (pTVar2->AllocatorInstance).Data;
        if (((pFVar4 <= (FScriptContainerElement *)&local_1c8) &&
            ((FScriptContainerElement *)&local_1c8 < pFVar4 + (longlong)*piVar1 * 0x10)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar5 = (code *)swi(3);
          pFVar13 = (FReply *)(*pcVar5)();
          return pFVar13;
        }
        iVar9 = (this->Items).ArrayNum;
        if (iVar9 == *piVar1) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&pTVar2->AllocatorInstance,piVar1);
        }
        (this->Items).ArrayNum = iVar9 + 1;
        pFVar4 = (pTVar2->AllocatorInstance).Data;
        *(FTestData **)(pFVar4 + (longlong)iVar9 * 0x10) = local_1c8;
        *(TReferenceControllerBase<1> **)(pFVar4 + (longlong)iVar9 * 0x10 + 8) = pTStack_1c0;
        pTStack_1c0 = (TReferenceControllerBase<1> *)0x0;
        local_1c8 = (FTestData *)0x0;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        local_148.Object = pFVar14;
        local_148.SharedReferenceCount.ReferenceController = FVar7.ReferenceController;
        if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (FVar7.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(FVar7.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        FTestData::GenerateChildren(&local_148,0x14,0);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar7.ReferenceController);
        iVar15 = iVar15 + 1;
      } while (iVar15 < this->TotalItems);
    }
    RequestRefresh(this,&local_118);
    FReply::~FReply(&local_118);
  }
  FReply::FReply(__return_storage_ptr__,true);
  return __return_storage_ptr__;
}

// RememberExpansion @ 143007c00

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
STableViewTesting::RememberExpansion(STableViewTesting *this,FReply *__return_storage_ptr__)

{
  undefined1 *puVar1;
  TSet<TSharedPtr<FTestData,1>,DefaultKeyFuncs<TSharedPtr<FTestData,1>,0>,FDefaultSetAllocator>
  *this_00;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  STreeView<TSharedPtr<FTestData,1>_> *pSVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  FReply *pFVar9;
  longlong lVar10;
  int iVar11;
  TMap<TSharedPtr<FTestData,1>,FSparseItemInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FTestData,1>,FSparseItemInfo,0>_>
  *pTVar12;
  bool *pbVar13;
  uint *puVar14;
  undefined4 local_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  TMap<TSharedPtr<FTestData,1>,FSparseItemInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FTestData,1>,FSparseItemInfo,0>_>
  *local_50;
  int iStack_48;
  uint uStack_44;
  undefined1 *local_40;
  undefined4 uStack_38;
  int iStack_34;
  int local_30;
  
  this_00 = &this->StoredExpandedItems;
  bVar7 = 1 < (this->StoredExpandedItems).HashSize;
  if (!bVar7) {
    TSet<TSharedPtr<FTestData,1>,DefaultKeyFuncs<TSharedPtr<FTestData,1>,0>,FDefaultSetAllocator>::
    UnhashElements(this_00);
  }
  TSparseArray<TSparseSetElement<TSharedPtr<FTestData,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements(&this_00->Elements,0,*(int *)&(this->StoredExpandedItems).Elements.field_0x8);
  puVar1 = &(this->StoredExpandedItems).Elements.field_0xc;
  iVar11 = 0;
  *(undefined4 *)&(this->StoredExpandedItems).Elements.field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->StoredExpandedItems).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->StoredExpandedItems).Elements.field_0x34 = 0;
  iVar3 = *(int *)&(this->StoredExpandedItems).Elements.field_0x2c;
  *(undefined4 *)&(this->StoredExpandedItems).Elements.field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->StoredExpandedItems).Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->StoredExpandedItems).Elements.field_0x10,0);
  }
  uVar8 = 1;
  if (bVar7) {
    (this->StoredExpandedItems).HashSize = 1;
    TSet<TSharedPtr<FTestData,1>,DefaultKeyFuncs<TSharedPtr<FTestData,1>,0>,FDefaultSetAllocator>::
    Rehash(this_00);
  }
  if (((this->TreeBeingTested).Object == (STreeView<TSharedPtr<FTestData,1>_> *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar9 = (FReply *)(*pcVar6)();
    return pFVar9;
  }
  pSVar5 = (this->TreeBeingTested).Object;
  pTVar12 = &pSVar5->SparseItemInfos;
  iVar3 = *(int *)&(pSVar5->SparseItemInfos).field_0x28;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(pSVar5->SparseItemInfos).field_0x10;
  local_30 = iVar11;
  iStack_34 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(pSVar5->SparseItemInfos).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)TStack_70.Array;
    }
    uVar4 = *puVar14;
    local_30 = 0;
    iVar11 = 0;
    while (uVar4 == 0) {
      lVar10 = (longlong)iVar11;
      local_30 = local_30 + 0x20;
      iVar11 = iVar11 + 1;
      iStack_34 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_143007d69;
      uVar4 = puVar14[lVar10 + 1];
    }
    uVar8 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar8 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iStack_34 = local_30 + -1 + (int)lVar10;
    if (iVar3 < iStack_34) {
      iStack_34 = iVar3;
    }
  }
LAB_143007d69:
  uStack_38 = 0xffffffff;
  TStack_70._padding_ = CONCAT44(uVar8,iVar11);
  TStack_70.UnvisitedBitMask = 0xffffffff;
  TStack_70._28_4_ = local_7c;
  TStack_70.BaseBitIndex = local_30;
  local_50 = pTVar12;
  iStack_48 = iVar11;
  uStack_44 = uVar8;
  local_40 = (undefined1 *)TStack_70.Array;
  TStack_70.CurrentBitIndex = iStack_34;
  if (iStack_34 < iVar3) {
    do {
      pbVar13 = (bool *)((longlong)TStack_70.CurrentBitIndex * 0x20 + *(longlong *)pTVar12);
      if (pbVar13[0x10] != false) {
        TSet<TSharedPtr<FTestData,1>,DefaultKeyFuncs<TSharedPtr<FTestData,1>,0>,FDefaultSetAllocator>
        ::Emplace<TSharedPtr<FTestData,1>_const_&>
                  (this_00,(TSharedPtr<FTestData,1> *)&stack0x00000008,pbVar13);
      }
      TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
    } while (TStack_70.CurrentBitIndex < (TStack_70.Array)->NumBits);
  }
  FReply::FReply(__return_storage_ptr__,true);
  return __return_storage_ptr__;
}

// RequestRefresh @ 143008670

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
STableViewTesting::RequestRefresh(STableViewTesting *this,FReply *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FReply *pFVar3;
  
  if ((this->ListBeingTested).Object == (SListView<TSharedPtr<FTestData,1>_> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FReply *)(*pcVar1)();
      return pFVar3;
    }
  }
  (**(code **)(((this->ListBeingTested).Object)->_padding_ + 0x248))();
  if ((this->HorizontalListBeingTested).Object == (SListView<TSharedPtr<FTestData,1>_> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FReply *)(*pcVar1)();
      return pFVar3;
    }
  }
  (**(code **)(((this->HorizontalListBeingTested).Object)->_padding_ + 0x248))();
  if ((this->TileViewBeingTested).Object == (STileView<TSharedPtr<FTestData,1>_> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FReply *)(*pcVar1)();
      return pFVar3;
    }
  }
  (**(code **)(*(longlong *)(this->TileViewBeingTested).Object + 0x248))();
  if ((this->HorizontalTileViewBeingTested).Object == (STileView<TSharedPtr<FTestData,1>_> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FReply *)(*pcVar1)();
      return pFVar3;
    }
  }
  (**(code **)(*(longlong *)(this->HorizontalTileViewBeingTested).Object + 0x248))();
  if ((this->TreeBeingTested).Object == (STreeView<TSharedPtr<FTestData,1>_> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FReply *)(*pcVar1)();
      return pFVar3;
    }
  }
  (**(code **)(*(longlong *)(this->TreeBeingTested).Object + 0x248))();
  FReply::FReply(__return_storage_ptr__,true);
  return __return_storage_ptr__;
}

// RestoreExpansion @ 143008ab0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
STableViewTesting::RestoreExpansion(STableViewTesting *this,FReply *__return_storage_ptr__)

{
  undefined1 *puVar1;
  TSet<TSharedPtr<FTestData,1>,DefaultKeyFuncs<TSharedPtr<FTestData,1>,0>,FDefaultSetAllocator>
  *pTVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  code *pcVar7;
  TSet<TSharedPtr<FTestData,1>,DefaultKeyFuncs<TSharedPtr<FTestData,1>,0>,FDefaultSetAllocator>
  *pTVar8;
  bool bVar9;
  FReply *pFVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined1 *puVar15;
  uint *puVar16;
  undefined1 local_res8 [8];
  FReply *local_res10;
  int local_res18;
  int local_res20;
  undefined8 local_b8;
  longlong local_b0;
  TSet<TSharedPtr<FTestData,1>,DefaultKeyFuncs<TSharedPtr<FTestData,1>,0>,FDefaultSetAllocator>
  *local_a8;
  int iStack_a0;
  uint uStack_9c;
  undefined1 *local_98;
  undefined4 uStack_90;
  int iStack_8c;
  int local_88;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  TSet<TSharedPtr<FTestData,1>,DefaultKeyFuncs<TSharedPtr<FTestData,1>,0>,FDefaultSetAllocator>
  *local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  iStack_a0 = 0;
  puVar1 = &(this->StoredExpandedItems).Elements.field_0x10;
  iVar5 = *(int *)&(this->StoredExpandedItems).Elements.field_0x28;
  pTVar2 = &this->StoredExpandedItems;
  uStack_9c = 1;
  local_88 = 0;
  iStack_8c = local_88;
  if (iVar5 != 0) {
    puVar16 = *(uint **)&(this->StoredExpandedItems).Elements.field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar14 = *puVar16;
    local_88 = 0;
    while (uVar14 == 0) {
      lVar11 = (longlong)iStack_a0;
      local_88 = local_88 + 0x20;
      iStack_a0 = iStack_a0 + 1;
      iStack_8c = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a0) goto LAB_143008b5d;
      uVar14 = puVar16[lVar11 + 1];
    }
    uStack_9c = -uVar14 & uVar14;
    uVar4 = (ulonglong)uStack_9c * 2 + 1;
    lVar11 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res18 = (int)lVar11;
    iStack_8c = local_res18 + -1 + local_88;
    if (iVar5 < iStack_8c) {
      iStack_8c = iVar5;
    }
  }
LAB_143008b5d:
  uVar14 = *(uint *)&(this->StoredExpandedItems).Elements.field_0x28;
  uVar13 = uVar14 & 0xffffffe0;
  iStack_80 = *(int *)&(this->StoredExpandedItems).Elements.field_0x8 -
              *(int *)&(this->StoredExpandedItems).Elements.field_0x34;
  uStack_90 = 0xffffffff;
  TStack_70._padding_ = CONCAT44(uStack_9c,iStack_a0);
  TStack_70.CurrentBitIndex = iStack_8c;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar14 >> 5;
  TStack_70._28_4_ = iStack_8c;
  TStack_70.BaseBitIndex = local_88;
  uStack_50 = CONCAT44(uStack_7c,iStack_80);
  local_res10 = __return_storage_ptr__;
  local_a8 = pTVar2;
  local_98 = puVar1;
  iStack_84 = iStack_8c;
  local_78 = pTVar2;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar14 < 0) || (iVar5 < (int)uVar14)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    pFVar10 = (FReply *)(*pcVar7)();
    return pFVar10;
  }
  uVar6 = *(uint *)&(this->StoredExpandedItems).Elements.field_0x28;
  if (uVar14 != uVar6) {
    puVar15 = *(undefined1 **)&(this->StoredExpandedItems).Elements.field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar12 * 4);
    while (uVar14 == 0) {
      lVar11 = (longlong)iVar12;
      uVar13 = uVar13 + 0x20;
      iVar12 = iVar12 + 1;
      uVar14 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_143008c60;
      uVar14 = *(uint *)(puVar15 + lVar11 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res20 = (int)lVar11;
    uVar14 = local_res20 + -1 + uVar13;
    if ((int)uVar6 < (int)uVar14) {
      uVar14 = uVar6;
    }
  }
LAB_143008c60:
  while( true ) {
    pTVar8 = local_78;
    if (*(int *)&(local_78->Elements).field_0x8 - *(int *)&(local_78->Elements).field_0x34 !=
        (int)uStack_50) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TSharedPtr<FTestData,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_70.CurrentBitIndex == uVar14) &&
        (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar8 == pTVar2))
    break;
    puVar3 = (undefined8 *)
             (*(longlong *)&pTVar8->Elements + (longlong)TStack_70.CurrentBitIndex * 0x18);
    if (((this->TreeBeingTested).Object == (STreeView<TSharedPtr<FTestData,1>_> *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      pFVar10 = (FReply *)(*pcVar7)();
      return pFVar10;
    }
    puVar15 = &((this->TreeBeingTested).Object)->field_0x588;
    pcVar7 = *(code **)(*(longlong *)puVar15 + 0x50);
    local_b8 = *puVar3;
    local_b0 = puVar3[1];
    if (local_b0 != 0) {
      LOCK();
      *(int *)(local_b0 + 8) = *(int *)(local_b0 + 8) + 1;
      UNLOCK();
    }
    (*pcVar7)(puVar15,&local_b8,1);
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  }
  if (((this->TreeBeingTested).Object == (STreeView<TSharedPtr<FTestData,1>_> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    pFVar10 = (FReply *)(*pcVar7)();
    return pFVar10;
  }
  (**(code **)(*(longlong *)(this->TreeBeingTested).Object + 0x248))();
  FReply::FReply(local_res10,true);
  return local_res10;
}

// ScrollToIndex_OnClicked @ 14300b910

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
STableViewTesting::ScrollToIndex_OnClicked(STableViewTesting *this,FReply *__return_storage_ptr__)

{
  uint uVar1;
  SListView<TSharedPtr<FTestData,1>_> *pSVar2;
  STreeView<TSharedPtr<FTestData,1>_> *pSVar3;
  STileView<TSharedPtr<FTestData,1>_> *pSVar4;
  code *pcVar5;
  bool bVar6;
  FReply *pFVar7;
  uint uVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  TSharedPtr<FTestData,1> local_b8;
  TSharedPtr<FTestData,1> local_a8;
  TSharedPtr<FTestData,1> local_98;
  TSharedPtr<FTestData,1> local_88;
  TSharedPtr<FTestData,1> local_78;
  TSharedPtr<FTestData,1> local_68;
  TSharedPtr<FTestData,1> local_58;
  TSharedPtr<FTestData,1> local_48;
  TSharedPtr<FTestData,1> local_38;
  TSharedPtr<FTestData,1> local_28;
  
  if ((-1 < this->ScrollToIndex) && (this->ScrollToIndex < (this->Items).ArrayNum)) {
    if ((this->ListBeingTested).Object == (SListView<TSharedPtr<FTestData,1>_> *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar7 = (FReply *)(*pcVar5)();
        return pFVar7;
      }
    }
    uVar1 = this->ScrollToIndex;
    pSVar2 = (this->ListBeingTested).Object;
    uVar8 = 0;
    uVar9 = uVar8;
    if ((int)uVar1 < (this->Items).ArrayNum) {
      uVar9 = ~uVar1 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar7 = (FReply *)(*pcVar5)();
        return pFVar7;
      }
    }
    pFVar10 = (this->Items).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x10;
    local_b8.Object = *(FTestData **)pFVar10;
    local_b8.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)(pFVar10 + 8);
    if (local_b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SListView<TSharedPtr<FTestData,1>_>::RequestScrollIntoView(pSVar2,&local_b8,0);
    if ((this->ListBeingTested).Object == (SListView<TSharedPtr<FTestData,1>_> *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar7 = (FReply *)(*pcVar5)();
        return pFVar7;
      }
    }
    uVar1 = this->ScrollToIndex;
    pSVar2 = (this->ListBeingTested).Object;
    uVar9 = uVar8;
    if ((int)uVar1 < (this->Items).ArrayNum) {
      uVar9 = ~uVar1 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar7 = (FReply *)(*pcVar5)();
        return pFVar7;
      }
    }
    pFVar10 = (this->Items).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x10;
    local_a8.Object = *(FTestData **)pFVar10;
    local_a8.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)(pFVar10 + 8);
    if (local_a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SListView<TSharedPtr<FTestData,1>_>::SetSelection(pSVar2,&local_a8,Direct);
    if ((this->HorizontalListBeingTested).Object == (SListView<TSharedPtr<FTestData,1>_> *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar7 = (FReply *)(*pcVar5)();
        return pFVar7;
      }
    }
    uVar1 = this->ScrollToIndex;
    pSVar2 = (this->HorizontalListBeingTested).Object;
    uVar9 = uVar8;
    if ((int)uVar1 < (this->Items).ArrayNum) {
      uVar9 = ~uVar1 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar7 = (FReply *)(*pcVar5)();
        return pFVar7;
      }
    }
    pFVar10 = (this->Items).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x10;
    local_98.Object = *(FTestData **)pFVar10;
    local_98.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)(pFVar10 + 8);
    if (local_98.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SListView<TSharedPtr<FTestData,1>_>::RequestScrollIntoView(pSVar2,&local_98,0);
    if ((this->HorizontalListBeingTested).Object == (SListView<TSharedPtr<FTestData,1>_> *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar7 = (FReply *)(*pcVar5)();
        return pFVar7;
      }
    }
    uVar1 = this->ScrollToIndex;
    pSVar2 = (this->HorizontalListBeingTested).Object;
    if ((int)uVar1 < (this->Items).ArrayNum) {
      uVar8 = ~uVar1 >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar7 = (FReply *)(*pcVar5)();
        return pFVar7;
      }
    }
    pFVar10 = (this->Items).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x10;
    local_88.Object = *(FTestData **)pFVar10;
    local_88.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)(pFVar10 + 8);
    if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SListView<TSharedPtr<FTestData,1>_>::SetSelection(pSVar2,&local_88,Direct);
    if ((this->TreeBeingTested).Object == (STreeView<TSharedPtr<FTestData,1>_> *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar7 = (FReply *)(*pcVar5)();
        return pFVar7;
      }
    }
    uVar1 = this->ScrollToIndex;
    pSVar3 = (this->TreeBeingTested).Object;
    uVar8 = 0;
    uVar9 = uVar8;
    if ((int)uVar1 < (this->Items).ArrayNum) {
      uVar9 = ~uVar1 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar7 = (FReply *)(*pcVar5)();
        return pFVar7;
      }
    }
    pFVar10 = (this->Items).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x10;
    local_78.Object = *(FTestData **)pFVar10;
    local_78.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)(pFVar10 + 8);
    if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SListView<TSharedPtr<FTestData,1>_>::RequestScrollIntoView
              ((SListView<TSharedPtr<FTestData,1>_> *)pSVar3,&local_78,0);
    if ((this->TreeBeingTested).Object == (STreeView<TSharedPtr<FTestData,1>_> *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar7 = (FReply *)(*pcVar5)();
        return pFVar7;
      }
    }
    uVar1 = this->ScrollToIndex;
    pSVar3 = (this->TreeBeingTested).Object;
    uVar9 = uVar8;
    if ((int)uVar1 < (this->Items).ArrayNum) {
      uVar9 = ~uVar1 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar7 = (FReply *)(*pcVar5)();
        return pFVar7;
      }
    }
    pFVar10 = (this->Items).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x10;
    local_68.Object = *(FTestData **)pFVar10;
    local_68.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)(pFVar10 + 8);
    if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SListView<TSharedPtr<FTestData,1>_>::SetSelection
              ((SListView<TSharedPtr<FTestData,1>_> *)pSVar3,&local_68,Direct);
    if ((this->TileViewBeingTested).Object == (STileView<TSharedPtr<FTestData,1>_> *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar7 = (FReply *)(*pcVar5)();
        return pFVar7;
      }
    }
    uVar1 = this->ScrollToIndex;
    pSVar4 = (this->TileViewBeingTested).Object;
    uVar9 = uVar8;
    if ((int)uVar1 < (this->Items).ArrayNum) {
      uVar9 = ~uVar1 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar7 = (FReply *)(*pcVar5)();
        return pFVar7;
      }
    }
    pFVar10 = (this->Items).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x10;
    local_58.Object = *(FTestData **)pFVar10;
    local_58.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)(pFVar10 + 8);
    if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SListView<TSharedPtr<FTestData,1>_>::RequestScrollIntoView
              ((SListView<TSharedPtr<FTestData,1>_> *)pSVar4,&local_58,0);
    if ((this->TileViewBeingTested).Object == (STileView<TSharedPtr<FTestData,1>_> *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar7 = (FReply *)(*pcVar5)();
        return pFVar7;
      }
    }
    uVar1 = this->ScrollToIndex;
    pSVar4 = (this->TileViewBeingTested).Object;
    uVar9 = uVar8;
    if ((int)uVar1 < (this->Items).ArrayNum) {
      uVar9 = ~uVar1 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar7 = (FReply *)(*pcVar5)();
        return pFVar7;
      }
    }
    pFVar10 = (this->Items).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x10;
    local_48.Object = *(FTestData **)pFVar10;
    local_48.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)(pFVar10 + 8);
    if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SListView<TSharedPtr<FTestData,1>_>::SetSelection
              ((SListView<TSharedPtr<FTestData,1>_> *)pSVar4,&local_48,Direct);
    if ((this->HorizontalTileViewBeingTested).Object == (STileView<TSharedPtr<FTestData,1>_> *)0x0)
    {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar7 = (FReply *)(*pcVar5)();
        return pFVar7;
      }
    }
    uVar1 = this->ScrollToIndex;
    pSVar4 = (this->HorizontalTileViewBeingTested).Object;
    if ((int)uVar1 < (this->Items).ArrayNum) {
      uVar8 = ~uVar1 >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar7 = (FReply *)(*pcVar5)();
        return pFVar7;
      }
    }
    pFVar10 = (this->Items).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x10;
    local_38.Object = *(FTestData **)pFVar10;
    local_38.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)(pFVar10 + 8);
    if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SListView<TSharedPtr<FTestData,1>_>::RequestScrollIntoView
              ((SListView<TSharedPtr<FTestData,1>_> *)pSVar4,&local_38,0);
    if ((this->HorizontalTileViewBeingTested).Object == (STileView<TSharedPtr<FTestData,1>_> *)0x0)
    {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar7 = (FReply *)(*pcVar5)();
        return pFVar7;
      }
    }
    uVar1 = this->ScrollToIndex;
    pSVar4 = (this->HorizontalTileViewBeingTested).Object;
    uVar9 = 0;
    if ((int)uVar1 < (this->Items).ArrayNum) {
      uVar9 = ~uVar1 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar7 = (FReply *)(*pcVar5)();
        return pFVar7;
      }
    }
    pFVar10 = (this->Items).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x10;
    local_28.Object = *(FTestData **)pFVar10;
    local_28.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)(pFVar10 + 8);
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SListView<TSharedPtr<FTestData,1>_>::SetSelection
              ((SListView<TSharedPtr<FTestData,1>_> *)pSVar4,&local_28,Direct);
  }
  FReply::FReply(__return_storage_ptr__,true);
  return __return_storage_ptr__;
}

// ScrollToIndex_OnValueChanged @ 14300c0f0

void __thiscall STableViewTesting::ScrollToIndex_OnValueChanged(STableViewTesting *this,int param_1)

{
  this->ScrollToIndex = param_1;
  return;
}

// UpdateFixedItemOffset @ 1430157d0

void __thiscall STableViewTesting::UpdateFixedItemOffset(STableViewTesting *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 local_res8;
  TOptional<double> local_88;
  TOptional<double> local_78;
  TOptional<double> local_68;
  TOptional<double> local_58;
  TOptional<double> local_48;
  double local_38;
  undefined1 local_30;
  undefined1 local_20;
  
  bVar3 = this->bIsFixedLineScrollOffsetEnabled == false;
  if (bVar3) {
    uVar4 = (undefined4)local_res8;
    uVar5 = (undefined4)((ulonglong)local_res8 >> 0x20);
    local_20 = 0;
  }
  else {
    local_38 = this->FixedLineScrollOffset;
    uVar4 = SUB84(local_38,0);
    uVar5 = (undefined4)((ulonglong)local_38 >> 0x20);
    local_30 = 1;
  }
  bVar3 = !bVar3;
  if ((this->ListBeingTested).Object == (SListView<TSharedPtr<FTestData,1>_> *)0x0) {
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
  if (bVar3) {
    local_88.TypedValue = (double)CONCAT44(uVar5,uVar4);
  }
  local_88.bIsSet = bVar3;
  STableViewBase::SetFixedLineScrollOffset
            ((STableViewBase *)(this->ListBeingTested).Object,&local_88);
  if ((this->HorizontalListBeingTested).Object == (SListView<TSharedPtr<FTestData,1>_> *)0x0) {
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
  if (bVar3) {
    local_78.TypedValue = (double)CONCAT44(uVar5,uVar4);
  }
  local_78.bIsSet = bVar3;
  STableViewBase::SetFixedLineScrollOffset
            ((STableViewBase *)(this->HorizontalListBeingTested).Object,&local_78);
  if ((this->TileViewBeingTested).Object == (STileView<TSharedPtr<FTestData,1>_> *)0x0) {
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
  if (bVar3) {
    local_68.TypedValue = (double)CONCAT44(uVar5,uVar4);
  }
  local_68.bIsSet = bVar3;
  STableViewBase::SetFixedLineScrollOffset
            ((STableViewBase *)(this->TileViewBeingTested).Object,&local_68);
  if ((this->HorizontalTileViewBeingTested).Object == (STileView<TSharedPtr<FTestData,1>_> *)0x0) {
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
  if (bVar3) {
    local_58.TypedValue = (double)CONCAT44(uVar5,uVar4);
  }
  local_58.bIsSet = bVar3;
  STableViewBase::SetFixedLineScrollOffset
            ((STableViewBase *)(this->HorizontalTileViewBeingTested).Object,&local_58);
  if ((this->TreeBeingTested).Object == (STreeView<TSharedPtr<FTestData,1>_> *)0x0) {
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
  if (bVar3) {
    local_48.TypedValue = (double)CONCAT44(uVar5,uVar4);
  }
  local_48.bIsSet = bVar3;
  STableViewBase::SetFixedLineScrollOffset
            ((STableViewBase *)(this->TreeBeingTested).Object,&local_48);
  return;
}

