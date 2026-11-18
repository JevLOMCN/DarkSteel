// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NamingTokensUI
// Functions: 4

// ~SNamingTokenDataTreeViewRow @ 14d0f0260

void __thiscall
SNamingTokenDataTreeViewRow::~SNamingTokenDataTreeViewRow(SNamingTokenDataTreeViewRow *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->Item).WeakReferenceCount.ReferenceController;
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
  *(undefined4 *)&this->_padding_ = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<SWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<SWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<SWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->_padding_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  STableRow<TSharedPtr<FNamingTokenDataTreeItem,1>_>::
  ~STableRow<TSharedPtr<FNamingTokenDataTreeItem,1>_>
            ((STableRow<TSharedPtr<FNamingTokenDataTreeItem,1>_> *)this);
  return;
}

// Construct @ 14d0f75c0

void __thiscall
SNamingTokenDataTreeViewRow::Construct
          (SNamingTokenDataTreeViewRow *this,FArguments *param_1,
          TSharedRef<STableViewBase,1> *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  FArguments local_308;
  
  (this->Item).Object = (param_1->_Item).Object;
  pTVar3 = (param_1->_Item).SharedReferenceCount.ReferenceController;
  if (pTVar3 != (this->Item).WeakReferenceCount.ReferenceController) {
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar4 = (this->Item).WeakReferenceCount.ReferenceController;
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
    (this->Item).WeakReferenceCount.ReferenceController = pTVar3;
  }
  STableRow<TSharedPtr<FNamingTokenDataTreeItem,1>_>::FArguments::FArguments(&local_308);
  SMultiColumnTableRow<TSharedPtr<FNamingTokenDataTreeItem,1>_>::Construct
            ((SMultiColumnTableRow<TSharedPtr<FNamingTokenDataTreeItem,1>_> *)this,&local_308,
             param_2);
  STableRow<TSharedPtr<FNamingTokenDataTreeItem,1>_>::FArguments::~FArguments(&local_308);
  return;
}

// GenerateWidgetForColumn @ 14d105320

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
SNamingTokenDataTreeViewRow::GenerateWidgetForColumn
          (SNamingTokenDataTreeViewRow *this,TSharedRef<SWidget,1> *__return_storage_ptr__,
          FName *param_1)

{
  atomic<int> *paVar1;
  int *piVar2;
  TSharedPtr<FNamingTokenData,1> *this_00;
  byte *pbVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  ITextData *pIVar6;
  longlong lVar7;
  TReferenceControllerBase<1> *pTVar8;
  ForAnyElementType FVar9;
  atomic<int> aVar10;
  FSharedReferencer<1> FVar11;
  FNamingTokenDataTreeItem *pFVar12;
  undefined4 uVar13;
  char cVar14;
  byte bVar15;
  int iVar16;
  atomic<int> aVar17;
  FArguments *pFVar18;
  ISlateStyle *pIVar19;
  FName *pFVar20;
  TSharedRef<SBorder,1> *pTVar21;
  FNamingTokenData *pFVar22;
  FText *pFVar23;
  FSlotArguments *pFVar24;
  SBorder *pSVar25;
  FArguments *pFVar26;
  TAttribute<FText> *this_01;
  SEditableTextBox *pSVar27;
  SEditableTextBox *pSVar28;
  TSharedRef<SWidget,1> *pTVar29;
  FArguments *pFVar30;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> *this_02;
  TSharedRef<SVerticalBox,1> *pTVar31;
  FTextFormat *pFVar32;
  SBorder *pSVar33;
  FSlotArguments *pFVar34;
  FArguments *pFVar35;
  TSharedRef<SExpanderArrow,1> *pTVar36;
  FSlot *this_03;
  SBorder *pSVar37;
  FSlateFontInfo *pFVar38;
  FArguments *pFVar39;
  TSharedRef<STextBlock,1> *pTVar40;
  FArguments *pFVar41;
  TSharedRef<SHorizontalBox,1> *pTVar42;
  FSlateBrush *pFVar43;
  FEditableTextBoxStyle *pFVar44;
  int iVar45;
  SBorder *pSVar46;
  bool bVar47;
  FArguments *local_res8;
  TSharedRef<SWidget,1> *local_res10;
  FName *local_res18;
  undefined4 local_res20 [2];
  T0RequiredArgs local_2028;
  T0RequiredArgs local_2027;
  T0RequiredArgs local_2026 [2];
  uint local_2024;
  SBorder *local_2020;
  FSlotArguments *local_2018;
  SBorder *local_2010;
  SBorder *local_2008;
  FLLMScope local_2000;
  FLLMScope local_1ffc;
  FLLMScope local_1ff8;
  FLLMScope local_1ff4;
  FNamingTokenDataTreeItem *local_1ff0;
  TSharedPtr<SBorder,1> local_1fe8;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_1fd8;
  FArguments *local_1fc8;
  SBorder *local_1fc0;
  STextBlock *local_1fb8;
  FSharedReferencer<1> local_1fb0;
  SExpanderArrow *local_1fa8;
  FSharedReferencer<1> local_1fa0;
  SBorder *local_1f98;
  TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs> local_1f90;
  longlong local_1f78;
  uchar local_1f70;
  undefined1 local_1f6f;
  undefined1 local_1f68 [8];
  void *pvStack_1f60;
  undefined8 local_1f58;
  float local_1f50;
  undefined1 local_1f4c;
  undefined1 local_1f48 [8];
  void *pvStack_1f40;
  undefined8 local_1f38;
  undefined2 local_1f30;
  undefined1 local_1f28 [8];
  void *pvStack_1f20;
  undefined8 local_1f18;
  longlong local_1f10;
  longlong lStack_1f08;
  undefined1 local_1f00;
  undefined1 local_1ef8 [8];
  ForAnyElementType FStack_1ef0;
  ulonglong local_1ee8;
  FText local_1ee0;
  TSharedRef<SNamingTokenDataTreeViewRow,1> local_1ed0;
  FString local_1ec0;
  FSlateBrush *local_1eb0;
  undefined1 local_1ea8;
  undefined1 local_1ea0 [8];
  void *pvStack_1e98;
  undefined8 local_1e90;
  undefined8 local_1e88;
  undefined8 uStack_1e80;
  undefined4 local_1e78;
  undefined1 local_1e74;
  undefined1 local_1e70 [8];
  void *pvStack_1e68;
  undefined8 local_1e60;
  undefined8 local_1e58;
  undefined8 uStack_1e50;
  undefined4 local_1e48;
  undefined1 local_1e44;
  undefined1 local_1e40 [8];
  void *pvStack_1e38;
  undefined8 local_1e30;
  FLinearColor_u_0 local_1e28;
  uint local_1e18;
  undefined1 local_1e14;
  undefined1 local_1e10 [8];
  void *pvStack_1e08;
  undefined8 local_1e00;
  undefined4 local_1df8 [2];
  undefined4 local_1df0 [2];
  FName local_1de8;
  FName local_1de0;
  FName local_1dd8;
  FMemScope local_1dd0;
  SBorder *local_1dc8;
  FMemScope local_1dc0;
  FMemScope local_1db8;
  FName local_1db0;
  SBorder *local_1da8;
  FMemScope local_1da0;
  T1RequiredArgs<TSharedRef<SNamingTokenDataTreeViewRow,1>_&&> local_1d98;
  FName local_1d90;
  FName local_1d88;
  FMemScope local_1d80;
  undefined8 local_1d78;
  undefined8 uStack_1d70;
  undefined1 local_1d68;
  undefined1 local_1d60 [8];
  void *pvStack_1d58;
  undefined8 local_1d50;
  TAttribute<FText> local_1d48;
  TAttribute<float> local_1d18;
  undefined8 local_1cf8;
  undefined8 uStack_1cf0;
  undefined4 local_1ce8;
  undefined8 local_1ce4;
  undefined8 uStack_1cdc;
  undefined4 local_1cd4;
  FText local_1cd0;
  FTextFormat local_1cc0;
  SVerticalBox *local_1cb0;
  TReferenceControllerBase<1> *local_1ca8;
  TSharedRef<SWidget,1> local_1ca0;
  SHorizontalBox *local_1c90;
  TReferenceControllerBase<1> *local_1c88;
  FDestructionSentinel local_1c80;
  TAttribute<FText> local_1c68;
  FName local_1c38;
  FName local_1c30;
  FName local_1c28;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_1c20;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_1c08;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_1bf0;
  TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<SNamingTokenDataTreeViewRow,1>_&&>_>
  local_1bd8;
  TSharedRef<SBorder,1> local_1bc0;
  FText local_1bb0;
  FText local_1ba0;
  TSharedRef<SVerticalBox,1> local_1b90;
  FText local_1b80;
  FText local_1b70;
  FText local_1b60;
  TSharedRef<SWidget,1> local_1b50;
  TSharedRef<SHorizontalBox,1> local_1b40;
  TSharedRef<STextBlock,1> local_1b30;
  TSharedRef<SExpanderArrow,1> local_1b20;
  FName local_1b10;
  FFormatArgumentValue local_1b08;
  undefined4 local_1ae8;
  TOptional<FText>_u_0 local_1ad8;
  FSlateFontInfo local_1ac8;
  bool local_1a68;
  undefined1 local_1a60 [8];
  void *pvStack_1a58;
  undefined8 local_1a50;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_1a48;
  FTextFormat local_1a30;
  FText local_1a20;
  FText local_1a10;
  undefined8 *local_1a00 [2];
  TReferenceControllerBase<1> *local_19f0;
  undefined1 local_19d0 [40];
  FSlotArgumentsMixin local_19a8;
  undefined8 *local_1918 [2];
  TReferenceControllerBase<1> *local_1908;
  undefined1 local_18e8 [40];
  FSlotArgumentsMixin local_18c0;
  TAttribute<FText> local_1830;
  undefined1 local_1800 [56];
  TReferenceControllerBase<1> *local_17c8;
  FArguments local_17a0;
  FArguments local_1598;
  FSlotArguments local_1390;
  FArguments local_12a8;
  FArguments local_1048;
  FArguments local_c68;
  FArguments local_710;
  
  pSVar37 = (SBorder *)0x0;
  local_res20[0] = 0;
  pSVar25 = (SBorder *)(this->Item).WeakReferenceCount.ReferenceController;
  pSVar46 = pSVar25;
  local_res8 = (FArguments *)this;
  local_res10 = __return_storage_ptr__;
  local_res18 = param_1;
  local_2020 = pSVar25;
  if (pSVar25 == (SBorder *)0x0) goto LAB_14d105387;
  iVar45 = (int)pSVar25->_padding_;
  do {
    pSVar46 = pSVar37;
    if (iVar45 == 0) goto LAB_14d105387;
    LOCK();
    iVar16 = (int)pSVar25->_padding_;
    bVar47 = iVar45 == iVar16;
    if (bVar47) {
      *(int *)&pSVar25->_padding_ = iVar45 + 1;
      iVar16 = iVar45;
    }
    UNLOCK();
    iVar45 = iVar16;
  } while (!bVar47);
  local_1ff0 = (this->Item).Object;
  pSVar46 = pSVar25;
  if (local_1ff0 == (FNamingTokenDataTreeItem *)0x0) goto LAB_14d105387;
  pTVar4 = (TReferenceControllerBase<1> *)this->_padding_;
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    goto LAB_14d105387;
  }
  aVar10 = pTVar4->SharedReferenceCount;
  do {
    if (aVar10 == (atomic<int>)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      goto LAB_14d105387;
    }
    LOCK();
    aVar17 = pTVar4->SharedReferenceCount;
    bVar47 = aVar10 == aVar17;
    if (bVar47) {
      pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar10 + 1);
      aVar17 = aVar10;
    }
    UNLOCK();
    aVar10 = aVar17;
  } while (!bVar47);
  pSVar46 = (SBorder *)(this->_padding_ + -0x588);
  if (this->_padding_ == 0) {
    pSVar46 = pSVar37;
  }
  LOCK();
  pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
  UNLOCK();
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  if (pSVar46 == (SBorder *)0x0) {
LAB_14d106a35:
    __return_storage_ptr__ = local_res10;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    pSVar46 = pSVar25;
LAB_14d105387:
    __return_storage_ptr__->Object = SNullWidget::NullWidget.Object;
    FVar11 = SNullWidget::NullWidget.SharedReferenceCount;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
    if (FVar11.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(FVar11.ReferenceController)->SharedReferenceCount;
      *paVar1 = (atomic<int>)((int)*paVar1 + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar46);
    return __return_storage_ptr__;
  }
  local_1f78 = pSVar46[3]._padding_;
  pSVar46 = (SBorder *)pSVar46[3]._padding_;
  if (pSVar46 == (SBorder *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    __return_storage_ptr__ = local_res10;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    pSVar46 = pSVar25;
    goto LAB_14d105387;
  }
  LOCK();
  piVar2 = (int *)((longlong)&pSVar46->_padding_ + 4);
  *piVar2 = *piVar2 + 1;
  UNLOCK();
  iVar45 = (int)pSVar46->_padding_;
  do {
    pSVar33 = pSVar37;
    if (iVar45 == 0) goto LAB_14d106a0f;
    LOCK();
    iVar16 = (int)pSVar46->_padding_;
    bVar47 = iVar45 == iVar16;
    if (bVar47) {
      *(int *)&pSVar46->_padding_ = iVar45 + 1;
      iVar16 = iVar45;
    }
    UNLOCK();
    iVar45 = iVar16;
    local_2010 = pSVar46;
    local_2008 = pSVar46;
    local_1fc0 = pSVar46;
  } while (!bVar47);
  pSVar33 = pSVar46;
  if (local_1f78 == 0) {
LAB_14d106a0f:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar33);
    LOCK();
    piVar2 = (int *)((longlong)&pSVar46->_padding_ + 4);
    iVar45 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar45 == 1) {
      (**(code **)(pSVar46->_padding_ + 8))(pSVar46,1);
    }
    goto LAB_14d106a35;
  }
  pFVar18 = SBorder::FArguments::FArguments(&local_1048);
  pIVar19 = FAppStyle::Get();
  pcVar5 = *(code **)((longlong)*pIVar19 + 0x50);
  pFVar20 = ::FName::FName(&local_1b10,"NoBorder");
  local_1eb0 = (FSlateBrush *)(*pcVar5)(pIVar19,*pFVar20);
  local_1ea8 = 1;
  local_1e90 = 0;
  local_1ea0 = (undefined1  [8])0x0;
  pvStack_1e98 = (void *)0x0;
  (pFVar18->_BorderImage).Value = local_1eb0;
  (pFVar18->_BorderImage).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar18->_BorderImage).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1ea0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1ea0);
  if (pvStack_1e98 != (void *)0x0) {
    FMemory::Free(pvStack_1e98);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1ea0);
  FLLMScope::FLLMScope(&local_2000,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1de8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1dc0,&local_1de8,true);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>
            (&local_1c20,"SBorder",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Developer\\NamingTokens\\Source\\NamingTokensUI\\Private\\SNamingTokensDataTreeView.cpp"
             ,0x35,(T0RequiredArgs *)local_res20);
  FMemScope::~FMemScope(&local_1dc0);
  FLLMScope::~FLLMScope(&local_2000);
  pTVar21 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1c20,&local_1bc0,pFVar18);
  local_1fe8.Object = pTVar21->Object;
  local_1fe8.SharedReferenceCount.ReferenceController =
       (pTVar21->SharedReferenceCount).ReferenceController;
  if (local_1fe8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1fe8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1fe8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1bc0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1c20._Widget.SharedReferenceCount.ReferenceController);
  SBorder::FArguments::~FArguments(&local_1048);
  pFVar12 = local_1ff0;
  this_00 = &local_1ff0->NamingTokenData;
  local_1ff0 = (FNamingTokenDataTreeItem *)this_00;
  if ((this_00->Object == (FNamingTokenData *)0x0) ||
     (::FName::FName(&local_1de0,"Primary"), *local_res18 != local_1de0)) {
    if ((pFVar12->Namespace).Data.ArrayNum < 2) goto LAB_14d10691c;
    bVar47 = FText::IsEmpty(&pFVar12->NamespaceDisplayName);
    if (bVar47) {
      pFVar23 = FText::FromString(&local_1b70,&pFVar12->Namespace);
      FText::FText(&local_1ee0,pFVar23);
      pSVar33 = pSVar37;
      if (local_1b70.TextData.Reference == (ITextData *)0x0) goto LAB_14d106166;
LAB_14d106179:
      (**(code **)((longlong)*local_1b70.TextData.Reference + 0x10))();
    }
    else {
      local_2020 = (SBorder *)FText::FromString(&local_1a20,&pFVar12->Namespace);
      local_2010 = (SBorder *)FText::FText(&local_1a10,&pFVar12->NamespaceDisplayName);
      pFVar23 = FText::AsLocalizable_Advanced_LocText
                          (&local_1b60,L"SNamingTokenDataTreeView",L"NamespaceDisplayName",
                           L"{0} ({1}:)");
      pFVar32 = FTextFormat::FTextFormat(&local_1a30,pFVar23,Default);
      local_1b08.Type = Text;
      TOptional<FText>::TOptional<FText>(&local_1b08.TextValue,(FText *)local_2010);
      pSVar33 = local_2020;
      local_1ae8 = 4;
      TOptional<FText>::TOptional<FText>
                ((TOptional<FText> *)&local_1ad8.TypedValue,(FText *)local_2020);
      local_1fd8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1fd8.ArrayNum = 2;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,2,0,&local_1fd8.AllocatorInstance,2,&local_1fd8.ArrayMax);
      ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                (local_1fd8.AllocatorInstance.Data,&local_1b08,2);
      local_1cc0.TextFormatData.Object = (pFVar32->TextFormatData).Object;
      local_1cc0.TextFormatData.SharedReferenceCount.ReferenceController =
           (pFVar32->TextFormatData).SharedReferenceCount.ReferenceController;
      if (local_1cc0.TextFormatData.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_1cc0.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_1cc0.TextFormatData.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      FText::Format(&local_1cd0,&local_1cc0,&local_1fd8);
      DestructItems<FFormatArgumentValue,int>
                ((FFormatArgumentValue *)local_1fd8.AllocatorInstance.Data,local_1fd8.ArrayNum);
      if ((FFormatArgumentValue *)local_1fd8.AllocatorInstance.Data != (FFormatArgumentValue *)0x0)
      {
        FMemory::Free(local_1fd8.AllocatorInstance.Data);
      }
      if (local_1ad8.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_1ad8.TypedValue.TextData.Reference + 0x10))();
      }
      if (local_1b08.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_1b08.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pFVar32->TextFormatData).SharedReferenceCount.ReferenceController);
      pIVar6 = ((TRefCountPtr<ITextData> *)&local_2010->_padding_)->Reference;
      if (pIVar6 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar6 + 0x10))();
      }
      if ((longlong *)pSVar33->_padding_ != (longlong *)0x0) {
        (**(code **)(*(longlong *)pSVar33->_padding_ + 0x10))();
      }
      FText::FText(&local_1ee0,&local_1cd0);
      pSVar33 = local_2008;
      local_1fc0 = local_2008;
      if (local_1cd0.TextData.Reference == (ITextData *)0x0) {
        pSVar33 = (SBorder *)&DAT_00000004;
        local_2010 = pSVar46;
LAB_14d106166:
        if (pSVar33 != (SBorder *)0x0) goto LAB_14d10616d;
      }
      else {
        local_2010 = pSVar46;
        (**(code **)((longlong)*local_1cd0.TextData.Reference + 0x10))();
        local_1fc0 = pSVar33;
        local_2010 = pSVar46;
LAB_14d10616d:
        local_1b70.TextData.Reference = local_1b60.TextData.Reference;
        if (local_1b60.TextData.Reference != (ITextData *)0x0) goto LAB_14d106179;
      }
    }
    local_2008 = TSharedPtr<SBorder,1>::operator->(&local_1fe8);
    local_1f98 = *(SBorder **)(local_2008->_padding_ + 0x248);
    local_2020 = (SBorder *)SHorizontalBox::FArguments::FArguments(&local_1598);
    pFVar34 = SHorizontalBox::Slot((FSlotArguments *)local_1918);
    pFVar34 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar34);
    local_2018 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                           ((FSlotArgumentsMixin *)&pFVar34->field_0x18,0.0,0.0,0.0,0.0);
    if (local_1df8 != (undefined4 *)&local_2018->field_0x50) {
      *(undefined4 *)&local_2018->field_0x50 = 2;
      local_2018->field_0x54 = 1;
    }
    if (local_2018 == (FSlotArguments *)0xffffffffffffffb8) {
      local_2018 = (FSlotArguments *)0x0;
    }
    pFVar35 = SExpanderArrow::FArguments::FArguments(&local_12a8);
    pIVar19 = FAppStyle::Get();
    local_1f50 = __real_40a00000;
    pFVar35->_StyleSet = pIVar19;
    local_1f4c = 1;
    local_1f38 = 0;
    local_1f48 = (undefined1  [8])0x0;
    pvStack_1f40 = (void *)0x0;
    (pFVar35->_IndentAmount).Value = local_1f50;
    (pFVar35->_IndentAmount).bIsSet = true;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar35->_IndentAmount).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1f48);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1f48);
    if (pvStack_1f40 != (void *)0x0) {
      FMemory::Free(pvStack_1f40);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1f48);
    pTVar29 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&local_res8->_padding_,&local_1b50);
    if (pTVar29->Object == (SWidget *)0x0) {
      local_1ed0.Object = (SNamingTokenDataTreeViewRow *)0x0;
    }
    else {
      local_1ed0.Object = (SNamingTokenDataTreeViewRow *)&pTVar29->Object[-1].StatID;
    }
    local_1ed0.SharedReferenceCount.ReferenceController =
         (pTVar29->SharedReferenceCount).ReferenceController;
    if (local_1ed0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_1ed0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_1ed0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1b50.SharedReferenceCount.ReferenceController);
    local_1d98.Arg0 = &local_1ed0;
    FLLMScope::FLLMScope(&local_1ff8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_1d90 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_1da0,&local_1d90,true);
    TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<SNamingTokenDataTreeViewRow,1>_&&>_>
    ::
    TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<SNamingTokenDataTreeViewRow,1>_&&>_>
              (&local_1bd8,"SExpanderArrow",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Developer\\NamingTokens\\Source\\NamingTokensUI\\Private\\SNamingTokensDataTreeView.cpp"
               ,0x5d,&local_1d98);
    FMemScope::~FMemScope(&local_1da0);
    FLLMScope::~FLLMScope(&local_1ff8);
    pTVar36 = TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<SNamingTokenDataTreeViewRow,1>_&&>_>
              ::operator<<=(&local_1bd8,&local_1b20,pFVar35);
    pFVar34 = local_2018;
    local_1fa8 = pTVar36->Object;
    local_1fc8 = (FArguments *)(pTVar36->SharedReferenceCount).ReferenceController;
    if (local_1fc8 != (FArguments *)0x0) {
      LOCK();
      *(atomic<int> *)&local_1fc8->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&local_1fc8->_padding_ + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)&local_1fc8->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&local_1fc8->_padding_ + 1);
      UNLOCK();
    }
    local_1fa0.ReferenceController = (TReferenceControllerBase<1> *)local_1fc8;
    if ((SExpanderArrow **)&local_2018->field_0x8 != &local_1fa8) {
      *(SExpanderArrow **)&local_2018->field_0x8 = local_1fa8;
      local_1fa8 = (SExpanderArrow *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&local_2018->field_0x10,&local_1fa0);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1fa0.ReferenceController);
    local_2020 = (SBorder *)SHorizontalBox::FArguments::operator+((FArguments *)local_2020,pFVar34);
    this_03 = ::operator_new(0x58);
    if (this_03 != (FSlot *)0x0) {
      *(undefined8 *)this_03 = 0;
      *(undefined8 *)&this_03->field_0x8 = 0;
      *(undefined8 *)&this_03->field_0x10 = 0;
      *(undefined8 *)&this_03->field_0x18 = 0;
      *(undefined8 *)&this_03->field_0x20 = 0;
      *(undefined8 *)&this_03->field_0x28 = 0;
      *(undefined8 *)&this_03->field_0x30 = 0;
      *(undefined8 *)&this_03->field_0x38 = 0;
      *(undefined8 *)&this_03->field_0x40 = 0;
      *(undefined8 *)&this_03->field_0x48 = 0;
      *(undefined8 *)&this_03->field_0x50 = 0;
      pSVar37 = (SBorder *)SHorizontalBox::FSlot::FSlot(this_03);
    }
    local_1da8 = pSVar37;
    SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
              ((FSlotArguments *)local_1a00,(FSlot *)&local_1da8);
    local_1d18.Value = 1.0;
    local_1d18.Getter._16_8_ = 0;
    local_1d18.bIsSet = true;
    local_1d18.Getter._0_8_ = 0;
    local_1d18.Getter._8_8_ = 0;
    pFVar34 = SHorizontalBox::FSlot::FSlotArguments::FillWidth
                        ((FSlotArguments *)local_1a00,&local_1d18);
    if (local_1df0 != (undefined4 *)&pFVar34->field_0x50) {
      *(undefined4 *)&pFVar34->field_0x50 = 2;
      pFVar34->field_0x54 = 1;
    }
    if (pFVar34 == (FSlotArguments *)0xffffffffffffffb8) {
      pFVar34 = (FSlotArguments *)0x0;
    }
    local_res8 = STextBlock::FArguments::FArguments(&local_c68);
    pIVar19 = FAppStyle::Get();
    pcVar5 = *(code **)((longlong)*pIVar19 + 0x88);
    ::FName::FName(&local_1c28,"ExpandableArea.TitleFont");
    pFVar38 = (FSlateFontInfo *)(*pcVar5)(pIVar19,local_1800);
    FSlateFontInfo::FSlateFontInfo(&local_1ac8,pFVar38);
    pFVar39 = local_res8;
    local_1a68 = true;
    local_1a60 = (undefined1  [8])0x0;
    pvStack_1a58 = (void *)0x0;
    local_1a50 = 0;
    FSlateFontInfo::operator=(&(local_res8->_Font).Value,&local_1ac8);
    (pFVar39->_Font).bIsSet = local_1a68;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar39->_Font).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1a60);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1a60);
    if (pvStack_1a58 != (void *)0x0) {
      FMemory::Free(pvStack_1a58);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1a60);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1ac8.CompositeFont.SharedReferenceCount.ReferenceController);
    local_1c68.Value.TextData.Reference = local_1ee0.TextData.Reference;
    if (local_1ee0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1ee0.TextData.Reference + 8))
                (local_1ee0.TextData.Reference,&local_2018);
    }
    local_1c68.Value.Flags = local_1ee0.Flags;
    local_1c68.bIsSet = true;
    local_1c68.Getter._16_8_ = 0;
    local_1c68.Getter._0_8_ = 0;
    local_1c68.Getter._8_8_ = 0;
    pFVar39 = STextBlock::FArguments::Text(pFVar39,&local_1c68);
    FLLMScope::FLLMScope(&local_1ff4,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_1db0 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_1d80,&local_1db0,true);
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
              (&local_1bf0,"STextBlock",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Developer\\NamingTokens\\Source\\NamingTokensUI\\Private\\SNamingTokensDataTreeView.cpp"
               ,0x65,&local_2027);
    FMemScope::~FMemScope(&local_1d80);
    FLLMScope::~FLLMScope(&local_1ff4);
    pTVar40 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_1bf0,&local_1b30,pFVar39);
    pTVar8 = (pTVar40->SharedReferenceCount).ReferenceController;
    local_1fb8 = pTVar40->Object;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_1fb0.ReferenceController = pTVar8;
    if ((STextBlock **)&pFVar34->field_0x8 != &local_1fb8) {
      *(STextBlock **)&pFVar34->field_0x8 = local_1fb8;
      local_1fb8 = (STextBlock *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&pFVar34->field_0x10,&local_1fb0);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1fb0.ReferenceController);
    pFVar41 = SHorizontalBox::FArguments::operator+((FArguments *)local_2020,pFVar34);
    FLLMScope::FLLMScope
              ((FLLMScope *)&local_2024,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,
               true);
    local_1d88 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_1db8,&local_1d88,true);
    TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
              (&local_1c08,"SHorizontalBox",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Developer\\NamingTokens\\Source\\NamingTokensUI\\Private\\SNamingTokensDataTreeView.cpp"
               ,0x57,local_2026);
    FMemScope::~FMemScope(&local_1db8);
    FLLMScope::~FLLMScope((FLLMScope *)&local_2024);
    pTVar42 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_1c08,&local_1b40,pFVar41);
    local_1c90 = pTVar42->Object;
    local_1c88 = (pTVar42->SharedReferenceCount).ReferenceController;
    if (local_1c88 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_1c88->SharedReferenceCount = (atomic<int>)((int)local_1c88->SharedReferenceCount + 1);
      UNLOCK();
    }
    (*(code *)local_1f98)(local_2008,&local_1c90);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1b40.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1c08._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1b30.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1bf0._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_17c8);
    STextBlock::FArguments::~FArguments(&local_c68);
    TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
              (&local_19a8);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_19d0);
    if ((void *)local_19d0._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_19d0._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_19d0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_19f0);
    if (local_1a00[0] != (undefined8 *)0x0) {
      (**(code **)*local_1a00[0])(local_1a00[0],1);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_1fc8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1b20.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1bd8._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1ed0.SharedReferenceCount.ReferenceController);
    SExpanderArrow::FArguments::~FArguments(&local_12a8);
    TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
              (&local_18c0);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_18e8);
    if ((void *)local_18e8._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_18e8._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_18e8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1908);
    if (local_1918[0] != (undefined8 *)0x0) {
      (**(code **)*local_1918[0])(local_1918[0],1);
    }
    DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
              ((FSlotArguments *)local_1598._Slots.AllocatorInstance.Data,local_1598._Slots.ArrayNum
              );
    if ((FSlotArguments *)local_1598._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
      FMemory::Free(local_1598._Slots.AllocatorInstance.Data);
    }
    FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_1598);
    if (local_1ee0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1ee0.TextData.Reference + 0x10))();
    }
    goto LAB_14d10691c;
  }
  ::FString::FString(&local_1ec0,(FString *)(local_1f78 + 0x2e8));
  pFVar22 = TSharedPtr<FNamingTokenData,1>::operator->(this_00);
  iVar45 = local_1ec0.Data.ArrayNum + -1;
  FVar9.Data = local_1ec0.Data.AllocatorInstance.Data;
  if (local_1ec0.Data.ArrayNum == 0) {
    iVar45 = 0;
    FVar9.Data = (FScriptContainerElement *)L"";
  }
  bVar47 = ::FString::StartsWith(&pFVar22->TokenKey,(wchar_t *)FVar9.Data,iVar45,IgnoreCase);
  bVar47 = !bVar47;
  if (bVar47) {
    pFVar23 = FText::GetEmpty();
    pFVar23 = FText::FText(&local_1bb0,pFVar23);
  }
  else {
    pFVar23 = FText::FromString(&local_1ba0,&local_1ec0);
  }
  pIVar6 = (pFVar23->TextData).Reference;
  if (pIVar6 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar6 + 8))(pIVar6,&local_1f78);
  }
  local_2024 = pFVar23->Flags;
  if ((bVar47) && (local_1bb0.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*local_1bb0.TextData.Reference + 0x10))();
  }
  if ((!bVar47) && (local_1ba0.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*local_1ba0.TextData.Reference + 0x10))();
  }
  local_1f98 = TSharedPtr<SBorder,1>::operator->(&local_1fe8);
  local_2008 = *(SBorder **)(local_1f98->_padding_ + 0x248);
  local_1fc8 = SVerticalBox::FArguments::FArguments(&local_17a0);
  pFVar24 = SVerticalBox::Slot(&local_1390);
  pSVar25 = (SBorder *)SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar24);
  lStack_1f08 = _UNK_152ac1d58;
  local_1f10 = ___xmm_40000000418000004000000041800000;
  local_1f00 = 1;
  *(undefined1 *)&pSVar25->_padding_ = 1;
  local_1ee8 = 0;
  local_1ef8 = (undefined1  [8])0x0;
  FStack_1ef0.Data = (FScriptContainerElement *)0x0;
  pSVar25->_padding_ = local_1f10;
  pSVar25->_padding_ = lStack_1f08;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pSVar25->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1ef8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1ef8,
             (FWriteAccessScope *)&local_1c80);
  if (((int)local_1ee8 != 0) && (FStack_1ef0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1ef0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1ef0,0,0,0x10);
    local_1ee8 = local_1ee8 & 0xffffffff00000000;
  }
  if (local_1c80.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1c80.Accessor,&local_1c80);
  }
  if (FStack_1ef0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1ef0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1ef8);
  local_1dc8 = pSVar37;
  if (&pSVar25->_padding_ != (longlong *)0x0) {
    local_1dc8 = pSVar25;
  }
  pFVar26 = SEditableTextBox::FArguments::FArguments(&local_710);
  lVar7 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar7 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if ((*(int *)(lVar7 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      pIVar19 = FAppStyle::Get();
      pFVar20 = ::FName::FName(&local_1c38,"NormalEditableTextBox");
      pFVar44 = ISlateStyle::GetWidgetStyle<FEditableTextBoxStyle>
                          (pIVar19,*pFVar20,(char *)0x0,(FEditableTextBoxStyle *)0x0);
      FEditableTextBoxStyle::FEditableTextBoxStyle(&::Style,pFVar44);
      atexit(``SNamingTokenDataTreeViewRow::GetCustomEditableTextBoxStyle'::__l2::<lambda_1>::
             operator()'::__l2::_dynamic_atexit_destructor_for__Style__);
      _Init_thread_footer(&::_TSS0);
    }
    pIVar19 = FAppStyle::Get();
    pcVar5 = *(code **)((longlong)*pIVar19 + 0x50);
    pFVar20 = ::FName::FName(&local_1c30,"NoBorder");
    pFVar43 = (FSlateBrush *)(*pcVar5)(pIVar19,*pFVar20);
    FSlateBrush::operator=(&::Style.BackgroundImageReadOnly,pFVar43);
    FEditableTextBoxStyle::FEditableTextBoxStyle(&EditableTextBoxStyle,&::Style);
    atexit(`SNamingTokenDataTreeViewRow::GetCustomEditableTextBoxStyle'::__l2::
           _dynamic_atexit_destructor_for__EditableTextBoxStyle__);
    _Init_thread_footer(&::_TSS0);
  }
  pFVar26->_Style = &EditableTextBoxStyle;
  local_1f70 = (uchar)EVisibility::HitTestInvisible.Value.Value;
  local_1f6f = 1;
  local_1f58 = 0;
  local_1f68 = (undefined1  [8])0x0;
  pvStack_1f60 = (void *)0x0;
  *(TEnumAsByte<EVisibility::Private> *)&pFVar26->_padding_ =
       EVisibility::HitTestInvisible.Value.Value;
  *(undefined1 *)((longlong)&pFVar26->_padding_ + 1) = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar26->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1f68);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1f68);
  if (pvStack_1f60 != (void *)0x0) {
    FMemory::Free(pvStack_1f60);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1f68);
  local_1f30 = 0x101;
  local_1f18 = 0;
  local_1f28 = (undefined1  [8])0x0;
  pvStack_1f20 = (void *)0x0;
  (pFVar26->_IsReadOnly).Value = true;
  (pFVar26->_IsReadOnly).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar26->_IsReadOnly).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1f28);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1f28);
  if (pvStack_1f20 != (void *)0x0) {
    FMemory::Free(pvStack_1f20);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1f28);
  local_1d68 = 1;
  local_1d50 = 0;
  local_1d78 = 0;
  uStack_1d70 = 0;
  local_1d60 = (undefined1  [8])0x0;
  pvStack_1d58 = (void *)0x0;
  (pFVar26->_Padding).Value.Left = 0.0;
  (pFVar26->_Padding).Value.Top = 0.0;
  (pFVar26->_Padding).Value.Right = 0.0;
  (pFVar26->_Padding).Value.Bottom = 0.0;
  (pFVar26->_Padding).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar26->_Padding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1d60);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1d60);
  if (pvStack_1d58 != (void *)0x0) {
    FMemory::Free(pvStack_1d58);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1d60);
  local_1e18 = local_1e18 & 0xffffff00;
  local_1e14 = 1;
  local_1e28 = FLinearColor::Transparent.field0_0x0;
  local_1e00 = 0;
  local_1e10 = (undefined1  [8])0x0;
  pvStack_1e08 = (void *)0x0;
  (pFVar26->_BackgroundColor).Value.SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::Transparent.field0_0x0;
  (pFVar26->_BackgroundColor).Value.ColorUseRule = (undefined1)local_1e18;
  (pFVar26->_BackgroundColor).Value.ColorTableId = local_1e18._1_1_;
  *(undefined2 *)&(pFVar26->_BackgroundColor).Value.field_0x12 = local_1e18._2_2_;
  (pFVar26->_BackgroundColor).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar26->_BackgroundColor).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1e10);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1e10);
  if (pvStack_1e08 != (void *)0x0) {
    FMemory::Free(pvStack_1e08);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1e10);
  uStack_1cf0 = _UNK_15090c6d8;
  local_1cf8 = ___xmm_3f8000003f800000000000003f800000;
  local_1e74 = 1;
  local_1e88 = ___xmm_3f8000003f800000000000003f800000;
  uStack_1e80 = _UNK_15090c6d8;
  local_1ce8 = CONCAT22(local_1ce8._2_2_,2);
  uVar13 = local_1ce8;
  local_1e78 = local_1ce8;
  local_1e60 = 0;
  local_1e70 = (undefined1  [8])0x0;
  pvStack_1e68 = (void *)0x0;
  *(undefined8 *)&(pFVar26->_ForegroundColor).Value.SpecifiedColor.field0_0x0 =
       ___xmm_3f8000003f800000000000003f800000;
  *(undefined8 *)((longlong)&(pFVar26->_ForegroundColor).Value.SpecifiedColor.field0_0x0 + 8) =
       uStack_1cf0;
  local_1ce8._0_1_ = (undefined1)2;
  local_1ce8._1_1_ = (undefined1)(2 >> 8);
  (pFVar26->_ForegroundColor).Value.ColorUseRule = (undefined1)local_1ce8;
  (pFVar26->_ForegroundColor).Value.ColorTableId = local_1ce8._1_1_;
  *(undefined2 *)&(pFVar26->_ForegroundColor).Value.field_0x12 = local_1ce8._2_2_;
  (pFVar26->_ForegroundColor).bIsSet = true;
  local_1ce8 = uVar13;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar26->_ForegroundColor).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1e70);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1e70);
  if (pvStack_1e68 != (void *)0x0) {
    FMemory::Free(pvStack_1e68);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1e70);
  uStack_1cdc = _UNK_15090c6d8;
  local_1ce4 = ___xmm_3f8000003f800000000000003f800000;
  local_1e44 = 1;
  local_1e58 = ___xmm_3f8000003f800000000000003f800000;
  uStack_1e50 = _UNK_15090c6d8;
  local_1cd4 = CONCAT22(local_1cd4._2_2_,2);
  uVar13 = local_1cd4;
  local_1e48 = local_1cd4;
  local_1e30 = 0;
  local_1e40 = (undefined1  [8])0x0;
  pvStack_1e38 = (void *)0x0;
  *(undefined8 *)&(pFVar26->_ReadOnlyForegroundColor).Value.SpecifiedColor.field0_0x0 =
       ___xmm_3f8000003f800000000000003f800000;
  *(undefined8 *)
   ((longlong)&(pFVar26->_ReadOnlyForegroundColor).Value.SpecifiedColor.field0_0x0 + 8) =
       uStack_1cdc;
  local_1cd4._0_1_ = (undefined1)2;
  local_1cd4._1_1_ = (undefined1)(2 >> 8);
  (pFVar26->_ReadOnlyForegroundColor).Value.ColorUseRule = (undefined1)local_1cd4;
  (pFVar26->_ReadOnlyForegroundColor).Value.ColorTableId = local_1cd4._1_1_;
  *(undefined2 *)&(pFVar26->_ReadOnlyForegroundColor).Value.field_0x12 = local_1cd4._2_2_;
  (pFVar26->_ReadOnlyForegroundColor).bIsSet = true;
  local_1cd4 = uVar13;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(pFVar26->_ReadOnlyForegroundColor).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1e40);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1e40);
  if (pvStack_1e38 != (void *)0x0) {
    FMemory::Free(pvStack_1e38);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1e40);
  pFVar22 = TSharedPtr<FNamingTokenData,1>::operator->((TSharedPtr<FNamingTokenData,1> *)local_1ff0)
  ;
  pFVar23 = FText::FromString(&local_1b80,&pFVar22->TokenKey);
  this_01 = TAttribute<FText>::TAttribute<FText>(&local_1830,pFVar23);
  FText::operator=(&(pFVar26->_Text).Value,&this_01->Value);
  (pFVar26->_Text).bIsSet = this_01->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar26->_Text).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&this_01->Getter);
  TAttribute<FText>::~TAttribute<FText>(this_01);
  local_1d48.Value.TextData.Reference = pIVar6;
  if (pIVar6 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar6 + 8))(pIVar6,&local_1ff0);
  }
  local_1d48.Value.Flags = local_2024;
  local_1d48.bIsSet = true;
  local_1d48.Getter._16_8_ = 0;
  local_1d48.Getter._0_8_ = 0;
  local_1d48.Getter._8_8_ = 0;
  FText::operator=(&(pFVar26->_SearchText).Value,&local_1d48.Value);
  (pFVar26->_SearchText).bIsSet = local_1d48.bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar26->_SearchText).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&local_1d48.Getter);
  TAttribute<FText>::~TAttribute<FText>(&local_1d48);
  FLLMScope::FLLMScope(&local_1ffc,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1dd8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1dd0,&local_1dd8,true);
  TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs>
            (&local_1f90,"SEditableTextBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Developer\\NamingTokens\\Source\\NamingTokensUI\\Private\\SNamingTokensDataTreeView.cpp"
             ,0x44,(T0RequiredArgs *)&local_res8);
  FMemScope::~FMemScope(&local_1dd0);
  FLLMScope::~FLLMScope(&local_1ffc);
  pSVar27 = TSharedPtr<SEditableTextBox,1>::operator->(&local_1f90._Widget);
  SWidget::SWidgetConstruct((SWidget *)pSVar27,(FSlateBaseNamedArgs *)pFVar26);
  pSVar27 = local_1f90._Widget.Object;
  SEditableTextBox::Construct(local_1f90._Widget.Object,pFVar26);
  pSVar28 = TSharedPtr<SEditableTextBox,1>::operator->(&local_1f90._Widget);
  if ((pSVar28->_padding_ & 0x10) == 0) {
    cVar14 = (**(code **)(pSVar28->_padding_ + 0x228))(pSVar28);
    bVar15 = 0;
    if (cVar14 != '\0') goto LAB_14d105d7a;
  }
  else {
LAB_14d105d7a:
    bVar15 = 0x20;
  }
  *(byte *)&pSVar28->_padding_ = (byte)pSVar28->_padding_ & 0xdf;
  *(byte *)&pSVar28->_padding_ = (byte)pSVar28->_padding_ | bVar15;
  pSVar28 = TSharedPtr<SEditableTextBox,1>::operator->(&local_1f90._Widget);
  pbVar3 = (byte *)((longlong)&pSVar28->_padding_ + 1);
  *pbVar3 = *pbVar3 | 4;
  if ((local_1f90._Widget.Object == (SEditableTextBox *)0x0) &&
     (bVar47 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar47)) {
    pcVar5 = (code *)swi(3);
    pTVar29 = (TSharedRef<SWidget,1> *)(*pcVar5)();
    return pTVar29;
  }
  FVar11.ReferenceController = local_1f90._Widget.SharedReferenceCount.ReferenceController;
  local_1f90._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_1f90._Widget.Object = (SEditableTextBox *)0x0;
  if ((pSVar27 == (SEditableTextBox *)0x0) &&
     (bVar47 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar47)) {
    pcVar5 = (code *)swi(3);
    pTVar29 = (TSharedRef<SWidget,1> *)(*pcVar5)();
    return pTVar29;
  }
  local_1ca0.Object = (SWidget *)pSVar27;
  local_1ca0.SharedReferenceCount.ReferenceController = FVar11.ReferenceController;
  if (FVar11.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar11.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar11.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar24 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)local_1dc8,&local_1ca0);
  pFVar30 = SVerticalBox::FArguments::operator+(local_1fc8,pFVar24);
  this_02 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                      (&local_1a48,"SVerticalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Developer\\NamingTokens\\Source\\NamingTokensUI\\Private\\SNamingTokensDataTreeView.cpp"
                       ,0x3f,&local_2028);
  pTVar31 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_02,&local_1b90,pFVar30);
  local_1cb0 = pTVar31->Object;
  local_1ca8 = (pTVar31->SharedReferenceCount).ReferenceController;
  if (local_1ca8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_1ca8->SharedReferenceCount = (atomic<int>)((int)local_1ca8->SharedReferenceCount + 1);
    UNLOCK();
  }
  (*(code *)local_2008)(local_1f98,&local_1cb0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1b90.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1a48._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar11.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar11.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (local_1b80.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1b80.TextData.Reference + 0x10))();
  }
  SEditableTextBox::FArguments::~FArguments(&local_710);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_1390);
  DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_17a0._Slots.AllocatorInstance.Data,local_17a0._Slots.ArrayNum);
  if ((FSlotArguments *)local_17a0._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_17a0._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_17a0);
  if (pIVar6 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar6 + 0x10))(pIVar6);
  }
  pSVar25 = local_2020;
  if (local_1ec0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1ec0.Data.AllocatorInstance.Data);
    pSVar25 = local_2020;
  }
LAB_14d10691c:
  if ((local_1fe8.Object == (SBorder *)0x0) &&
     (bVar47 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L""), bVar47)) {
    pcVar5 = (code *)swi(3);
    pTVar29 = (TSharedRef<SWidget,1> *)(*pcVar5)();
    return pTVar29;
  }
  FVar11.ReferenceController = local_1fe8.SharedReferenceCount.ReferenceController;
  pSVar37 = local_1fe8.Object;
  if (local_1fe8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1fe8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1fe8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((local_1fe8.Object == (SBorder *)0x0) &&
     (bVar47 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L""), bVar47)) {
    pcVar5 = (code *)swi(3);
    pTVar29 = (TSharedRef<SWidget,1> *)(*pcVar5)();
    return pTVar29;
  }
  pTVar29 = local_res10;
  local_res10->Object = (SWidget *)pSVar37;
  (local_res10->SharedReferenceCount).ReferenceController = FVar11.ReferenceController;
  if (FVar11.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1fe8.SharedReferenceCount.ReferenceController);
    pSVar37 = local_2010;
  }
  else {
    LOCK();
    (FVar11.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar11.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar11.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1fe8.SharedReferenceCount.ReferenceController);
    pSVar37 = local_1fc0;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar37);
  LOCK();
  piVar2 = (int *)((longlong)&pSVar46->_padding_ + 4);
  iVar45 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar45 == 1) {
    (**(code **)(pSVar46->_padding_ + 8))(pSVar46,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar25);
  return pTVar29;
}

// GetCustomEditableTextBoxStyle @ 14d1081f0

FEditableTextBoxStyle * __cdecl SNamingTokenDataTreeViewRow::GetCustomEditableTextBoxStyle(void)

{
  code *pcVar1;
  FSlateBrush *pFVar2;
  ISlateStyle *pIVar3;
  FName *pFVar4;
  FEditableTextBoxStyle *pFVar5;
  int *piVar6;
  FName local_res8;
  
  piVar6 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar6 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (*piVar6 < ::_TSS0) {
        _Init_thread_header(&::_TSS0);
        if (::_TSS0 == -1) {
          pIVar3 = FAppStyle::Get();
          pFVar4 = ::FName::FName(&local_res8,"NormalEditableTextBox");
          pFVar5 = (FEditableTextBoxStyle *)
                   (**(code **)((longlong)*pIVar3 + 0xa0))
                             (pIVar3,FEditableTextBoxStyle::TypeName,*pFVar4,0,1);
          if (pFVar5 == (FEditableTextBoxStyle *)0x0) {
            pFVar5 = FEditableTextBoxStyle::GetDefault();
          }
          FEditableTextBoxStyle::FEditableTextBoxStyle(&::Style,pFVar5);
          atexit(``SNamingTokenDataTreeViewRow::GetCustomEditableTextBoxStyle'::__l2::<lambda_1>::
                 operator()'::__l2::_dynamic_atexit_destructor_for__Style__);
          _Init_thread_footer(&::_TSS0);
        }
      }
      pIVar3 = FAppStyle::Get();
      pcVar1 = *(code **)((longlong)*pIVar3 + 0x50);
      pFVar4 = ::FName::FName(&local_res8,"NoBorder");
      pFVar2 = (FSlateBrush *)(*pcVar1)(pIVar3,*pFVar4,0,0);
      FSlateBrush::operator=(&::Style.BackgroundImageReadOnly,pFVar2);
      FEditableTextBoxStyle::FEditableTextBoxStyle(&EditableTextBoxStyle,&::Style);
      atexit(`SNamingTokenDataTreeViewRow::GetCustomEditableTextBoxStyle'::__l2::
             _dynamic_atexit_destructor_for__EditableTextBoxStyle__);
      _Init_thread_footer(&::_TSS0);
      return &EditableTextBoxStyle;
    }
  }
  return &EditableTextBoxStyle;
}

