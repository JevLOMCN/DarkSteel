// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateReflector
// Functions: 12

// <lambda_2> @ 142dfdcc0

<lambda_2> * __thiscall
`SReflectorTreeWidgetItem::GenerateWidgetForColumn'::__l52::<lambda_2>::<lambda_2>
          (void *this,FString *param_1)

{
  ::FString::FString(this,param_1);
  return this;
}

// <lambda_3> @ 142dfdd00

<lambda_3> * __thiscall
`SReflectorTreeWidgetItem::GenerateWidgetForColumn'::__l52::<lambda_3>::<lambda_3>
          (void *this,FText *param_1)

{
  FText::FText(this,param_1);
  return this;
}

// ~<lambda_2> @ 142e0cd30

void __thiscall
`SReflectorTreeWidgetItem::GenerateWidgetForColumn'::__l52::<lambda_2>::~<lambda_2>(void *this)

{
  ::FString::~FString(this);
  return;
}

// ~<lambda_3> @ 142e0cd60

void __thiscall
`SReflectorTreeWidgetItem::GenerateWidgetForColumn'::__l52::<lambda_3>::~<lambda_3>(void *this)

{
  FText::~FText(this);
  return;
}

// ~SReflectorTreeWidgetItem @ 142e14d80

void __thiscall SReflectorTreeWidgetItem::~SReflectorTreeWidgetItem(SReflectorTreeWidgetItem *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnAccessAsset);
  pvVar1 = *(void **)&(this->OnAccessAsset).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnAccessAsset);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnAccessSourceCode);
  pvVar1 = *(void **)&(this->OnAccessSourceCode).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnAccessSourceCode);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->WidgetInfo).SharedReferenceCount.ReferenceController);
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
  STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>::
  ~STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>
            ((STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_> *)this);
  return;
}

// operator() @ 142e193f0

TSharedRef<SBox,1> * __thiscall
`SReflectorTreeWidgetItem::GenerateWidgetForColumn'::__l2::<lambda_1>::operator()
          (void *this,TSharedRef<SBox,1> *__return_storage_ptr__,bool param_1)

{
  FMargin *pFVar1;
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs> *this_00;
  TSharedRef<SCheckBox,1> *pTVar2;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> *this_01;
  bool local_857;
  T0RequiredArgs local_856;
  T0RequiredArgs local_855 [5];
  FArguments *local_850;
  FArguments *local_848;
  TAttribute<FMargin> *local_840;
  TAttribute<FMargin> *local_838;
  FArguments *local_830;
  FName local_828;
  ISlateStyle *local_820;
  FArguments *local_818;
  undefined1 *local_810;
  TAttribute<ECheckBoxState> *local_808;
  FArguments *local_800;
  FArguments *local_7f8;
  FArguments *local_7f0;
  FArguments *local_7e8;
  TSharedRef<SWidget,1> local_7e0;
  TSharedRef<SCheckBox,1> local_7d0;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_7c0;
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs> local_7a8;
  FMargin local_790;
  undefined1 local_780 [32];
  TAttribute<FMargin> local_760;
  FArguments local_730;
  FArguments local_3f0;
  
  local_850 = SBox::FArguments::FArguments(&local_730);
  local_848 = SBox::FArguments::HAlign(local_850,HAlign_Center);
  local_830 = SBox::FArguments::VAlign(local_848,VAlign_Center);
  local_840 = &local_760;
  pFVar1 = FMargin::FMargin(&local_790,__real_40000000,0.0);
  local_838 = TAttribute<FMargin>::TAttribute<FMargin>(local_840,pFVar1);
  local_7f0 = SBox::FArguments::Padding(local_830,local_838);
  local_818 = SCheckBox::FArguments::FArguments(&local_3f0);
  ::FName::FName(&local_828,L"WidgetReflector.FocusableCheck");
  local_820 = FCoreStyle::Get();
  local_800 = SCheckBox::FArguments::Style(local_818,local_820,&local_828,(char *)0x0);
  local_810 = local_780;
  local_857 = param_1;
  local_808 = TAttribute<enum_ECheckBoxState>::TAttribute<enum_ECheckBoxState>(local_810,&local_857)
  ;
  local_7f8 = SCheckBox::FArguments::IsChecked(local_800,local_808);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_856);
  this_00 = MakeTDecl<SCheckBox,RequiredArgs::T0RequiredArgs>
                      (&local_7a8,"SCheckBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetReflectorTreeWidgetItem.cpp"
                       ,0x34,&local_856);
  pTVar2 = TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this_00,&local_7d0,local_7f8);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SCheckBox>(&local_7e0,pTVar2);
  local_7e8 = SBox::FArguments::operator[](local_7f0,&local_7e0);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(local_855);
  this_01 = MakeTDecl<SBox,RequiredArgs::T0RequiredArgs>
                      (&local_7c0,"SBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetReflectorTreeWidgetItem.cpp"
                       ,0x2f,local_855);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
            (this_01,__return_storage_ptr__,local_7e8);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::~TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_7c0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_7e0);
  TSharedRef<SCheckBox,1>::~TSharedRef<SCheckBox,1>(&local_7d0);
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>(&local_7a8);
  SCheckBox::FArguments::~FArguments(&local_3f0);
  SBox::FArguments::~FArguments(&local_730);
  return __return_storage_ptr__;
}

// operator() @ 142e1d450

void __thiscall
`SReflectorTreeWidgetItem::GenerateWidgetForColumn'::__l52::<lambda_2>::operator()(void *this)

{
  undefined1 local_48 [4];
  int local_44;
  void *local_40;
  wchar_t (*local_38) [1];
  wchar_t (*local_30) [1];
  wchar_t (*local_28) [1];
  wchar_t (*local_20) [1];
  wchar_t (*local_18) [1];
  
  local_44 = *(int *)((longlong)this + 8);
  local_40 = this;
  if (local_44 == 0) {
    local_38 = `FString::operator*'::__l2::<lambda_1>::operator()(local_48);
  }
  else {
    local_38 = *(wchar_t (**) [1])this;
    local_30 = local_38;
    local_28 = local_38;
    local_20 = local_38;
  }
  local_18 = local_38;
  FWindowsPlatformApplicationMisc::ClipboardCopy(*local_38);
  return;
}

// operator() @ 142e1d8a0

void __thiscall
`SReflectorTreeWidgetItem::GenerateWidgetForColumn'::__l52::<lambda_3>::operator()(void *this)

{
  undefined1 local_48 [4];
  int local_44;
  FString *local_40;
  FScriptContainerElement *local_38;
  FScriptContainerElement *local_30;
  FScriptContainerElement *local_28;
  FScriptContainerElement *local_20;
  FScriptContainerElement *local_18;
  
  local_40 = FText::ToString(this);
  local_44 = (local_40->Data).ArrayNum;
  if (local_44 == 0) {
    local_38 = (FScriptContainerElement *)
               `FString::operator*'::__l2::<lambda_1>::operator()(local_48);
  }
  else {
    local_38 = (local_40->Data).AllocatorInstance.Data;
    local_30 = local_38;
    local_28 = local_38;
    local_20 = local_38;
  }
  local_18 = local_38;
  FWindowsPlatformApplicationMisc::ClipboardCopy((wchar_t *)local_38);
  return;
}

// Construct @ 142e42ce0

void __thiscall
SReflectorTreeWidgetItem::Construct
          (SReflectorTreeWidgetItem *this,FArguments *param_1,TSharedRef<STableViewBase,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FWidgetReflectorNodeBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  FArguments *pFVar5;
  undefined1 local_370 [8];
  ForAnyElementType FStack_368;
  ulonglong local_360;
  FDestructionSentinel local_358;
  TAttribute<FMargin> local_340;
  FWidgetReflectorNodeBase *local_310;
  TReferenceControllerBase<1> *pTStack_308;
  FArguments local_300;
  
  pTVar1 = (param_1->_WidgetInfoToVisualize).SharedReferenceCount.ReferenceController;
  pFVar2 = (param_1->_WidgetInfoToVisualize).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_310 = (this->WidgetInfo).Object;
  pTStack_308 = (this->WidgetInfo).SharedReferenceCount.ReferenceController;
  (this->WidgetInfo).Object = pFVar2;
  (this->WidgetInfo).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_308);
  TDelegate<bool___cdecl(FString_const_&,int,int),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&this->OnAccessSourceCode,&param_1->_SourceCodeAccessor);
  TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&this->OnAccessAsset,&param_1->_AssetAccessor);
  local_340.bIsSet = true;
  local_340.Getter._16_8_ = 0;
  local_340.Value.Left = 0.0;
  local_340.Value.Top = 0.0;
  local_340.Value.Right = 0.0;
  local_340.Value.Bottom = 0.0;
  local_340.Getter._0_8_ = 0;
  local_340.Getter._8_8_ = 0;
  SBorder::SetPadding((SBorder *)&this->_padding_,&local_340);
  if ((this->WidgetInfo).Object == (FWidgetReflectorNodeBase *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("WidgetInfo.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetReflectorTreeWidgetItem.cpp"
                       ,0x24,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar5 = STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>::FArguments::FArguments(&local_300);
  local_360 = 0;
  local_370 = (undefined1  [8])0x0;
  FStack_368.Data = (FScriptContainerElement *)0x0;
  (pFVar5->_Padding).Value.Left = 0.0;
  (pFVar5->_Padding).Value.Top = 0.0;
  (pFVar5->_Padding).Value.Right = 0.0;
  (pFVar5->_Padding).Value.Bottom = 0.0;
  (pFVar5->_Padding).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar5->_Padding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_370);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_370,
             (FWriteAccessScope *)&local_358);
  if (((int)local_360 != 0) && (FStack_368.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_368.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_368,0,0,0x10);
    local_360 = local_360 & 0xffffffff00000000;
  }
  if (local_358.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_358.Accessor,&local_358);
  }
  if (FStack_368.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_368.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_370);
  SMultiColumnTableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>::Construct
            ((SMultiColumnTableRow<TSharedRef<FWidgetReflectorNodeBase,1>_> *)this,pFVar5,param_2);
  STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>::FArguments::~FArguments(&local_300);
  return;
}

// GenerateWidgetForColumn @ 142e91f80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
SReflectorTreeWidgetItem::GenerateWidgetForColumn
          (SReflectorTreeWidgetItem *this,TSharedRef<SWidget,1> *__return_storage_ptr__,
          FName *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> *pTVar4;
  FScopedWidgetSlotArguments<SHorizontalBox::FSlot> *pFVar5;
  T1RequiredArgs<TSharedRef<SReflectorTreeWidgetItem,1>_&&> TVar6;
  TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<SReflectorTreeWidgetItem,1>_&&>_>
  *this_00;
  TSharedRef<SExpanderArrow,1> *pTVar7;
  FSlotArguments *pFVar8;
  FText *pFVar9;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *pTVar10;
  TSharedRef<STextBlock,1> *pTVar11;
  FMargin *pFVar12;
  TSlateDecl<SHyperlink,RequiredArgs::T0RequiredArgs> *pTVar13;
  TSharedRef<SHyperlink,1> *pTVar14;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> *pTVar15;
  TSharedRef<SBox,1> *pTVar16;
  FName *pFVar17;
  FLinearColor *pFVar18;
  TSlateDecl<SColorBlock,RequiredArgs::T0RequiredArgs> *this_01;
  TSharedRef<SColorBlock,1> *pTVar19;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> *this_02;
  TSharedRef<SBorder,1> *pTVar20;
  ulong64 uVar21;
  TSharedRef<SHorizontalBox,1> *pTVar22;
  longlong lVar23;
  code **ppcVar24;
  undefined1 *puVar25;
  pmf_213bb1f6 *ppVar26;
  pmf_6b0b76ba *ppVar27;
  TReferenceControllerBase<1> *pTVar28;
  atomic<int> *paVar29;
  longlong *plVar30;
  T0RequiredArgs local_5c66;
  bool local_5c65;
  T0RequiredArgs local_5c64;
  T0RequiredArgs local_5c63;
  undefined1 local_5c62;
  undefined1 local_5c61;
  T0RequiredArgs local_5c60;
  T0RequiredArgs local_5c5f;
  undefined1 local_5c5e;
  undefined1 local_5c5d;
  T0RequiredArgs local_5c5c;
  T0RequiredArgs local_5c5b;
  undefined1 local_5c5a;
  undefined1 local_5c59;
  undefined1 local_5c58;
  undefined1 local_5c57;
  undefined1 local_5c56;
  undefined1 local_5c55;
  undefined1 local_5c54;
  undefined1 local_5c53;
  undefined1 local_5c52;
  undefined1 local_5c51;
  T0RequiredArgs local_5c50;
  T0RequiredArgs local_5c4f;
  undefined1 local_5c4e;
  undefined1 local_5c4d;
  T0RequiredArgs local_5c4c;
  T0RequiredArgs local_5c4b;
  undefined1 local_5c4a;
  undefined1 local_5c49;
  T0RequiredArgs local_5c48;
  T0RequiredArgs local_5c47;
  undefined1 local_5c46;
  undefined1 local_5c45;
  T0RequiredArgs local_5c44;
  undefined1 local_5c43;
  undefined1 local_5c42;
  T0RequiredArgs local_5c41;
  T0RequiredArgs local_5c40;
  T0RequiredArgs local_5c3f;
  FStaticCastTag local_5c3e;
  undefined1 local_5c3d;
  uint local_5c3c;
  uint local_5c38;
  uint local_5c34;
  uint local_5c30;
  uint local_5c2c;
  uint local_5c28;
  uint local_5c24;
  uint local_5c20;
  uint local_5c1c;
  uint local_5c18;
  uint local_5c14;
  uint local_5c10;
  SReflectorTreeWidgetItem *local_5c08;
  int local_5c00 [2];
  float local_5bf8;
  float local_5bf4;
  int local_5bf0;
  longlong local_5be8;
  longlong local_5be0;
  longlong local_5bd8;
  longlong local_5bd0;
  longlong local_5bc8;
  longlong local_5bc0;
  longlong local_5bb8;
  longlong local_5bb0;
  longlong local_5ba8;
  longlong local_5ba0;
  longlong local_5b98;
  longlong local_5b90;
  longlong local_5b88;
  longlong local_5b80;
  longlong local_5b78;
  longlong local_5b70;
  longlong local_5b68;
  longlong local_5b60;
  longlong local_5b58;
  longlong local_5b50;
  longlong local_5b48;
  TReferenceControllerBase<1> local_5b40;
  longlong local_5b30;
  FWidgetReflectorNodeBase *local_5b28;
  FWidgetReflectorNodeBase *local_5b20;
  FWidgetReflectorNodeBase *local_5b18;
  FWidgetReflectorNodeBase *local_5b10;
  FWidgetReflectorNodeBase *local_5b08;
  FWidgetReflectorNodeBase *local_5b00;
  FWidgetReflectorNodeBase *local_5af8;
  FWidgetReflectorNodeBase *local_5af0;
  FWidgetReflectorNodeBase *local_5ae8;
  FWidgetReflectorNodeBase *local_5ae0;
  FWidgetReflectorNodeBase *local_5ad8;
  FWidgetReflectorNodeBase *local_5ad0;
  EVisibility *local_5ac8;
  ISlateStyle *local_5ac0;
  TVector2<float>_u_0 local_5ab8;
  FWidgetReflectorNodeBase *local_5ab0;
  FScriptContainerElement *local_5aa8;
  TSharedRef<SHorizontalBox,1> local_5aa0;
  FString local_5a90;
  longlong local_5a80;
  longlong local_5a78;
  FArguments *local_5a70;
  SHorizontalBox *local_5a68;
  TAttribute<float> *local_5a60;
  TAttribute<float> *local_5a58;
  FArguments *local_5a50;
  TAttribute<bool> *local_5a48;
  TAttribute<bool> *local_5a40;
  FArguments *local_5a38;
  longlong *local_5a30;
  TSharedRef<SWidget,1> *local_5a28;
  FArguments *local_5a20;
  FSlotArguments *local_5a18;
  SHorizontalBox *local_5a10;
  undefined1 *local_5a08;
  undefined1 *local_5a00;
  TAttribute<FText> *local_59f8;
  TAttribute<FText> *local_59f0;
  FArguments *local_59e8;
  FArguments *local_59e0;
  FSlotArguments *local_59d8;
  SHorizontalBox *local_59d0;
  undefined1 *local_59c8;
  undefined1 *local_59c0;
  code *local_59b8;
  TAttribute<FText> *local_59b0;
  TAttribute<FText> *local_59a8;
  FArguments *local_59a0;
  FArguments *local_5998;
  FArguments *local_5990;
  FSlotArguments *local_5988;
  FName local_5980;
  longlong local_5978;
  longlong local_5970;
  FArguments *local_5968;
  FArguments *local_5960;
  TAttribute<FMargin> *local_5958;
  TAttribute<FMargin> *local_5950;
  FArguments *local_5948;
  code *local_5940;
  TAttribute<FText> *local_5938;
  TAttribute<FText> *local_5930;
  FArguments *local_5928;
  FArguments *local_5920;
  FArguments *local_5918;
  FArguments *local_5910;
  FArguments *local_5908;
  FName local_5900;
  longlong local_58f8;
  longlong local_58f0;
  FArguments *local_58e8;
  FArguments *local_58e0;
  TAttribute<FMargin> *local_58d8;
  TAttribute<FMargin> *local_58d0;
  FArguments *local_58c8;
  code *local_58c0;
  TAttribute<FText> *local_58b8;
  TAttribute<FText> *local_58b0;
  FArguments *local_58a8;
  undefined1 *local_58a0;
  TAttribute<ETextJustify::Type> *local_5898;
  FArguments *local_5890;
  FArguments *local_5888;
  FArguments *local_5880;
  FArguments *local_5878;
  FName local_5870;
  longlong local_5868;
  longlong local_5860;
  FName local_5858;
  longlong local_5850;
  longlong local_5848;
  FName local_5840;
  longlong local_5838;
  longlong local_5830;
  FName local_5828;
  longlong local_5820;
  longlong local_5818;
  FName local_5810;
  longlong local_5808;
  longlong local_5800;
  FArguments *local_57f8;
  FArguments *local_57f0;
  TAttribute<FMargin> *local_57e8;
  TAttribute<FMargin> *local_57e0;
  FArguments *local_57d8;
  code *local_57d0;
  TAttribute<FText> *local_57c8;
  TAttribute<FText> *local_57c0;
  FArguments *local_57b8;
  FArguments *local_57b0;
  FArguments *local_57a8;
  FArguments *local_57a0;
  FName local_5798;
  longlong local_5790;
  longlong local_5788;
  FArguments *local_5780;
  FArguments *local_5778;
  TAttribute<FMargin> *local_5770;
  TAttribute<FMargin> *local_5768;
  FArguments *local_5760;
  FText *local_5758;
  FText *local_5750;
  FTextFormat *local_5748;
  FText *local_5740;
  FText *local_5738;
  FTextFormat *local_5730;
  TAttribute<FText> *local_5728;
  TAttribute<FText> *local_5720;
  FArguments *local_5718;
  FArguments *local_5710;
  FArguments *local_5708;
  FArguments *local_5700;
  FName local_56f8;
  longlong local_56f0;
  longlong local_56e8;
  code *local_56e0;
  EVisibility *local_56d8;
  TAttribute<EVisibility> *local_56d0;
  TAttribute<EVisibility> *local_56c8;
  FArguments *local_56c0;
  FName *local_56b8;
  FName local_56b0;
  code *local_56a8;
  FSlateBrush *local_56a0;
  TAttribute<FSlateBrush_const_*> *local_5698;
  TAttribute<FSlateBrush_const_*> *local_5690;
  FArguments *local_5688;
  FArguments *local_5680;
  TAttribute<FMargin> *local_5678;
  TAttribute<FMargin> *local_5670;
  FArguments *local_5668;
  TAttribute<FLinearColor> *local_5660;
  TAttribute<FLinearColor> *local_5658;
  FArguments *local_5650;
  TVector2<double>_u_0 *local_5648;
  TAttribute<UE::Math::TVector2<double>_> *local_5640;
  TAttribute<UE::Math::TVector2<double>_> *local_5638;
  FArguments *local_5630;
  FArguments *local_5628;
  FArguments *local_5620;
  FArguments *local_5618;
  FName local_5610;
  longlong local_5608;
  longlong local_5600;
  FWidgetReflectorNodeBase *local_55f8;
  wchar_t *local_55f0;
  wchar_t *local_55e8;
  wchar_t *local_55e0;
  TAttribute<FText> *local_55d8;
  TAttribute<FText> *local_55d0;
  FArguments *local_55c8;
  FArguments *local_55c0;
  FName local_55b8;
  longlong local_55b0;
  longlong local_55a8;
  FScriptContainerElement *local_55a0;
  FScriptContainerElement *local_5598;
  FScriptContainerElement *local_5590;
  FScriptContainerElement *local_5588;
  wchar_t *local_5580;
  FScriptContainerElement *local_5578;
  wchar_t *local_5570;
  TAttribute<FMargin> *local_5568;
  TAttribute<FMargin> *local_5560;
  FSlotArgumentsMixin *local_5558;
  TAttribute<FText> *local_5550;
  TAttribute<FText> *local_5548;
  FArguments *local_5540;
  TAttribute<FText> *local_5538;
  TAttribute<FText> *local_5530;
  FArguments *local_5528;
  <lambda_2> *local_5520;
  FArguments *local_5518;
  FArguments *local_5510;
  FSlotArguments *local_5508;
  FSlotArguments *local_5500;
  FArguments *local_54f8;
  TAttribute<FMargin> *local_54f0;
  TAttribute<FMargin> *local_54e8;
  FSlotArgumentsMixin *local_54e0;
  TAttribute<FText> *local_54d8;
  TAttribute<FText> *local_54d0;
  FArguments *local_54c8;
  TAttribute<FText> *local_54c0;
  TAttribute<FText> *local_54b8;
  FArguments *local_54b0;
  <lambda_3> *local_54a8;
  FArguments *local_54a0;
  FArguments *local_5498;
  FSlotArguments *local_5490;
  FSlotArguments *local_5488;
  FArguments *local_5480;
  FArguments *local_5478;
  SReflectorTreeWidgetItem *local_5470;
  FName local_5468;
  FText local_5460;
  TSharedRef<SWidget,1> local_5450;
  TSharedRef<SWidget,1> local_5440;
  TSharedRef<SWidget,1> local_5430;
  TSharedPtr<FCulture,1> local_5420;
  TSharedPtr<FCulture,1> local_5410;
  TVector2<double>_u_0 local_5400;
  FString local_53f0;
  FString local_53e0;
  TSharedRef<SWidget,1> local_53d0;
  TSharedRef<SWidget,1> local_53c0;
  TSharedRef<SWidget,1> local_53b0;
  TSharedRef<SReflectorTreeWidgetItem,1> local_53a0;
  TSharedRef<SWidget,1> local_5390;
  code *local_5380;
  undefined4 local_5378;
  TSharedRef<SWidget,1> local_5370;
  code *local_5360;
  undefined4 local_5358;
  TSharedRef<SWidget,1> local_5350;
  TSharedRef<SWidget,1> local_5340;
  FSlateColor local_5330;
  longlong *local_5318;
  longlong *local_5310;
  longlong *local_5308;
  longlong *local_5300;
  longlong *local_52f8;
  longlong *local_52f0;
  longlong *local_52e8;
  longlong *local_52e0;
  longlong *local_52d8;
  longlong *local_52d0;
  longlong *local_52c8;
  longlong *local_52c0;
  longlong *local_52b8;
  longlong *local_52b0;
  longlong *local_52a8;
  longlong *local_52a0;
  FName local_5298;
  longlong *local_5290;
  longlong *local_5288;
  atomic<int> *local_5278;
  longlong *local_5270;
  longlong *local_5268;
  longlong *local_5260;
  TSharedRef<SReflectorTreeWidgetItem,1> local_5258;
  TSharedRef<SWidget,1> local_5248;
  TSharedRef<SExpanderArrow,1> local_5238;
  TSharedRef<STextBlock,1> local_5228;
  FText local_5218;
  undefined1 local_5208 [16];
  pmf_213bb1f6 local_51f8;
  TSharedRef<STextBlock,1> local_51e8;
  FText local_51d8;
  undefined1 local_51c8 [16];
  pmf_6b0b76ba local_51b8;
  TSharedRef<SBox,1> local_51a8;
  TSharedRef<SHyperlink,1> local_5198;
  FText local_5188;
  TSharedRef<SBox,1> local_5178;
  TSharedRef<STextBlock,1> local_5168;
  FText local_5158;
  TSharedRef<SBox,1> local_5148;
  TSharedRef<SBox,1> local_5138;
  TSharedRef<SBox,1> local_5128;
  TSharedRef<SBox,1> local_5118;
  TSharedRef<SBox,1> local_5108;
  TSharedRef<STextBlock,1> local_50f8;
  FText local_50e8;
  TSharedRef<SBox,1> local_50d8;
  TSharedRef<STextBlock,1> local_50c8;
  FText local_50b8;
  FText local_50a8;
  TSharedRef<SBorder,1> local_5098;
  TSharedRef<SColorBlock,1> local_5088;
  TSharedRef<STextBlock,1> local_5078;
  FText local_5068;
  TSharedRef<SHorizontalBox,1> local_5058;
  TSharedRef<SHyperlink,1> local_5048;
  undefined1 local_5038 [16];
  FText local_5028;
  TSharedRef<SHyperlink,1> local_5018;
  undefined1 local_5008 [16];
  FText local_4ff8;
  FText local_4fe8;
  longlong *local_4fd8;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_4fd0;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_4fb8;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_4fa0;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_4f88;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_4f70;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_4f58;
  TSlateDecl<SColorBlock,RequiredArgs::T0RequiredArgs> local_4f40;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_4f28;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_4f10;
  TSlateDecl<SHyperlink,RequiredArgs::T0RequiredArgs> local_4ef8;
  TSlateDecl<SHyperlink,RequiredArgs::T0RequiredArgs> local_4ee0;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_4ec8;
  TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<SReflectorTreeWidgetItem,1>_&&>_>
  local_4eb0;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_4e98;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_4e80;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_4e68;
  TSlateDecl<SHyperlink,RequiredArgs::T0RequiredArgs> local_4e50;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_4e38;
  FMargin local_4e20;
  FMargin local_4e10;
  FText local_4e00;
  FText local_4df0;
  FTextFormat local_4de0;
  FMargin local_4dd0;
  FLinearColor local_4dc0;
  FMargin local_4db0;
  FMargin local_4da0;
  FMargin local_4d90;
  FMargin local_4d80;
  TAttribute<float> local_4d70;
  TAttribute<bool> local_4d50;
  undefined1 local_4d30 [32];
  TAttribute<EVisibility> local_4d10;
  TAttribute<FSlateBrush_const_*> local_4cf0;
  TAttribute<FText> local_4cc8;
  TAttribute<FText> local_4c98;
  TAttribute<FMargin> local_4c68;
  TAttribute<FText> local_4c38;
  TAttribute<FMargin> local_4c08;
  TAttribute<FText> local_4bd8;
  TAttribute<FMargin> local_4ba8;
  TAttribute<FText> local_4b78;
  TAttribute<FMargin> local_4b48;
  TAttribute<FText> local_4b18;
  TAttribute<FMargin> local_4ae8;
  TAttribute<FLinearColor> local_4ab8;
  TAttribute<UE::Math::TVector2<double>_> local_4a88;
  TAttribute<FText> local_4a58;
  TAttribute<FMargin> local_4a28;
  TAttribute<FText> local_49f8;
  TAttribute<FText> local_49c8;
  TAttribute<FMargin> local_4998;
  TAttribute<FText> local_4968;
  TAttribute<FText> local_4938;
  FSlotArguments local_4908;
  FSlotArguments local_4820;
  FScopedWidgetSlotArguments<SHorizontalBox::FSlot> local_4738;
  FScopedWidgetSlotArguments<SHorizontalBox::FSlot> local_4638;
  FScopedWidgetSlotArguments<SHorizontalBox::FSlot> local_4538;
  FArguments local_4438;
  FArguments local_4230;
  FArguments local_4028;
  FArguments local_3dc8;
  FArguments local_3aa8;
  FArguments local_3788;
  FArguments local_3468;
  FArguments local_3128;
  FArguments local_2de8;
  FArguments local_2aa8;
  FArguments local_2768;
  FArguments local_2408;
  FArguments local_2028;
  FArguments local_1ad0;
  FArguments local_1578;
  FArguments local_1020;
  FArguments local_ac8;
  FArguments local_570;
  undefined8 uStack_18;
  
  uStack_18 = 0x142e91f9b;
  local_5470 = this;
  local_5468 = NAME_WidgetName;
  local_5be8 = 0;
  pFVar17 = param_1;
  plVar30 = &local_5be8;
  for (lVar23 = 8; lVar23 != 0; lVar23 = lVar23 + -1) {
    *(char *)plVar30 = (char)(pFVar17->ComparisonIndex).Value;
    pFVar17 = (FName *)((longlong)&(pFVar17->ComparisonIndex).Value + 1);
    plVar30 = (longlong *)((longlong)plVar30 + 1);
  }
  local_5268 = &local_5be8;
  local_5a80 = local_5be8;
  local_5be0 = 0;
  pFVar17 = &local_5468;
  plVar30 = &local_5be0;
  for (lVar23 = 8; lVar23 != 0; lVar23 = lVar23 + -1) {
    *(char *)plVar30 = (char)(pFVar17->ComparisonIndex).Value;
    pFVar17 = (FName *)((longlong)&(pFVar17->ComparisonIndex).Value + 1);
    plVar30 = (longlong *)((longlong)plVar30 + 1);
  }
  local_5260 = &local_5be0;
  local_5a78 = local_5be0;
  local_5c3c = (uint)(local_5a80 == local_5be0);
  local_5c08 = this;
  if (local_5a80 == local_5be0) {
    local_5a70 = SHorizontalBox::FArguments::FArguments(&local_4438);
    RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_5c66);
    pTVar4 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                       (&local_4ec8,"SHorizontalBox",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetReflectorTreeWidgetItem.cpp"
                        ,0x3c,&local_5c66);
    TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
              (pTVar4,&local_5aa0,local_5a70);
    TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
    ~TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>(&local_4ec8);
    SHorizontalBox::FArguments::~FArguments(&local_4438);
    local_5a68 = TSharedRef<SHorizontalBox,1>::operator->(&local_5aa0);
    pFVar5 = SHorizontalBox::AddSlot(local_5a68,&local_4738);
    local_5a18 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth
                           ((FSlotArguments *)&pFVar5->_padding_);
    local_5a50 = SExpanderArrow::FArguments::FArguments(&local_4028);
    local_5a60 = &local_4d70;
    local_5c00[0] = 0x10;
    local_5a58 = TAttribute<float>::TAttribute<float><int>(local_5a60,local_5c00);
    local_5a38 = SExpanderArrow::FArguments::IndentAmount(local_5a50,local_5a58);
    local_5a48 = &local_4d50;
    local_5c65 = true;
    local_5a40 = TAttribute<bool>::TAttribute<bool>(local_5a48,&local_5c65);
    local_5a20 = SExpanderArrow::FArguments::ShouldDrawWires(local_5a38,local_5a40);
    local_5a30 = &this->_padding_;
    local_5a28 = TSharedFromThis<SWidget,1>::AsShared
                           ((TSharedFromThis<SWidget,1> *)local_5a30,&local_5248);
    TSharedRef<SReflectorTreeWidgetItem,1>::TSharedRef<SReflectorTreeWidgetItem,1><SWidget>
              (&local_53a0,local_5a28,local_5c3e);
    TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5248);
    TVar6 = RequiredArgs::MakeRequiredArgs<TSharedRef<SReflectorTreeWidgetItem,1>_>(&local_5258);
    this_00 = MakeTDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<SReflectorTreeWidgetItem,1>_&&>_>
                        (&local_4eb0,"SExpanderArrow",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetReflectorTreeWidgetItem.cpp"
                         ,0x41,(T1RequiredArgs<TSharedRef<SReflectorTreeWidgetItem,1>_&&> *)
                               TVar6.Arg0);
    pTVar7 = TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<SReflectorTreeWidgetItem,1>_&&>_>
             ::operator<<=(this_00,&local_5238,local_5a20);
    TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SExpanderArrow>(&local_53b0,pTVar7);
    TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
              ((FSlotArguments *)local_5a18,&local_53b0);
    TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_53b0);
    SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
              (&local_5238.SharedReferenceCount);
    SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
              (&local_4eb0._Widget.SharedReferenceCount);
    TSharedRef<SReflectorTreeWidgetItem,1>::~TSharedRef<SReflectorTreeWidgetItem,1>(&local_53a0);
    SExpanderArrow::FArguments::~FArguments(&local_4028);
    SBoxPanel::FScopedWidgetSlotArguments<SHorizontalBox::FSlot>::
    ~FScopedWidgetSlotArguments<SHorizontalBox::FSlot>(&local_4738);
    local_5b28 = TSharedPtr<FWidgetReflectorNodeBase,1>::operator->(&this->WidgetInfo);
    cVar1 = (**(code **)(local_5b28->_padding_ + 0x90))(local_5b28);
    if (cVar1 != '\0') {
      local_5a10 = TSharedRef<SHorizontalBox,1>::operator->(&local_5aa0);
      pFVar5 = SHorizontalBox::AddSlot(local_5a10,&local_4638);
      pFVar8 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth
                         ((FSlotArguments *)&pFVar5->_padding_);
      local_5a08 = &pFVar8->field_0x18;
      pFVar8 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)local_5a08,__real_40000000,0.0);
      local_5a00 = &pFVar8->field_0x48;
      local_59d8 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::VAlign
                             ((FSlotArgumentsMixin *)local_5a00,VAlign_Center);
      local_59e8 = STextBlock::FArguments::FArguments(&local_2028);
      local_59f8 = &local_4cc8;
      pFVar9 = FText::AsLocalizable_Advanced_LocText
                         (&local_5218,L"SWidgetReflector",L"InvalidationRoot_Short",L"[IR]");
      local_59f0 = TAttribute<FText>::TAttribute<FText>(local_59f8,pFVar9);
      local_59e0 = STextBlock::FArguments::Text(local_59e8,local_59f0);
      RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_5c64);
      pTVar10 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                          (&local_4e98,"STextBlock",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetReflectorTreeWidgetItem.cpp"
                           ,0xa1,&local_5c64);
      pTVar11 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                          (pTVar10,&local_5228,local_59e0);
      TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_5390,pTVar11);
      TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                ((FSlotArguments *)local_59d8,&local_5390);
      TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5390);
      TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_5228);
      TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
      ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_4e98);
      FText::~FText(&local_5218);
      STextBlock::FArguments::~FArguments(&local_2028);
      SBoxPanel::FScopedWidgetSlotArguments<SHorizontalBox::FSlot>::
      ~FScopedWidgetSlotArguments<SHorizontalBox::FSlot>(&local_4638);
    }
    local_59d0 = TSharedRef<SHorizontalBox,1>::operator->(&local_5aa0);
    pFVar5 = SHorizontalBox::AddSlot(local_59d0,&local_4538);
    pFVar8 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth((FSlotArguments *)&pFVar5->_padding_);
    local_59c8 = &pFVar8->field_0x18;
    pFVar8 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                       ((FSlotArgumentsMixin *)local_59c8,__real_40000000,0.0);
    local_59c0 = &pFVar8->field_0x48;
    local_5988 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::VAlign
                           ((FSlotArgumentsMixin *)local_59c0,VAlign_Center);
    local_59a0 = STextBlock::FArguments::FArguments(&local_1ad0);
    local_59b0 = &local_4c98;
    local_5b20 = TSharedPtr<FWidgetReflectorNodeBase,1>::operator->(&this->WidgetInfo);
    local_59b8 = *(code **)(local_5b20->_padding_ + 0x20);
    pFVar9 = (FText *)(*local_59b8)(local_5b20,&local_51d8);
    local_59a8 = TAttribute<FText>::TAttribute<FText>(local_59b0,pFVar9);
    local_5998 = STextBlock::FArguments::Text(local_59a0,local_59a8);
    local_5380 = GetTint;
    local_5378 = 0;
    ppcVar24 = &local_5380;
    puVar25 = local_5208;
    for (lVar23 = 0x10; lVar23 != 0; lVar23 = lVar23 + -1) {
      *puVar25 = *(undefined1 *)ppcVar24;
      ppcVar24 = (code **)((longlong)ppcVar24 + 1);
      puVar25 = puVar25 + 1;
    }
    puVar25 = local_5208;
    ppVar26 = &local_51f8;
    for (lVar23 = 0x10; lVar23 != 0; lVar23 = lVar23 + -1) {
      *(undefined1 *)ppVar26 = *puVar25;
      puVar25 = puVar25 + 1;
      ppVar26 = (pmf_213bb1f6 *)&ppVar26->field_0x1;
    }
    local_5990 = STextBlock::FArguments::ColorAndOpacity<SReflectorTreeWidgetItem>
                           (local_5998,this,&local_51f8);
    RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_5c63);
    pTVar10 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                        (&local_4e80,"STextBlock",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetReflectorTreeWidgetItem.cpp"
                         ,0xab,&local_5c63);
    pTVar11 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                        (pTVar10,&local_51e8,local_5990);
    TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_5370,pTVar11);
    TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
              ((FSlotArguments *)local_5988,&local_5370);
    TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5370);
    TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_51e8);
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
    ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_4e80);
    FText::~FText(&local_51d8);
    STextBlock::FArguments::~FArguments(&local_1ad0);
    SBoxPanel::FScopedWidgetSlotArguments<SHorizontalBox::FSlot>::
    ~FScopedWidgetSlotArguments<SHorizontalBox::FSlot>(&local_4538);
    TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SHorizontalBox>(__return_storage_ptr__,&local_5aa0)
    ;
    TSharedRef<SHorizontalBox,1>::~TSharedRef<SHorizontalBox,1>(&local_5aa0);
  }
  else {
    local_5980 = NAME_WidgetInfo;
    local_5bd8 = 0;
    pFVar17 = param_1;
    plVar30 = &local_5bd8;
    for (lVar23 = 8; lVar23 != 0; lVar23 = lVar23 + -1) {
      *(char *)plVar30 = (char)(pFVar17->ComparisonIndex).Value;
      pFVar17 = (FName *)((longlong)&(pFVar17->ComparisonIndex).Value + 1);
      plVar30 = (longlong *)((longlong)plVar30 + 1);
    }
    local_5288 = &local_5bd8;
    local_5978 = local_5bd8;
    local_5bd0 = 0;
    pFVar17 = &local_5980;
    plVar30 = &local_5bd0;
    for (lVar23 = 8; lVar23 != 0; lVar23 = lVar23 + -1) {
      *(char *)plVar30 = (char)(pFVar17->ComparisonIndex).Value;
      pFVar17 = (FName *)((longlong)&(pFVar17->ComparisonIndex).Value + 1);
      plVar30 = (longlong *)((longlong)plVar30 + 1);
    }
    local_4fd8 = &local_5bd0;
    local_5970 = local_5bd0;
    local_5c62 = local_5978 == local_5bd0;
    local_5c38 = (uint)(byte)local_5c62;
    local_5c61 = local_5c62;
    if ((bool)local_5c62) {
      local_5968 = SBox::FArguments::FArguments(&local_3468);
      local_5960 = SBox::FArguments::HAlign(local_5968,HAlign_Left);
      local_5948 = SBox::FArguments::VAlign(local_5960,VAlign_Center);
      local_5958 = &local_4c68;
      pFVar12 = FMargin::FMargin(&local_4d90,__real_40000000,0.0);
      local_5950 = TAttribute<FMargin>::TAttribute<FMargin>(local_5958,pFVar12);
      local_5910 = SBox::FArguments::Padding(local_5948,local_5950);
      local_5928 = SHyperlink::FArguments::FArguments(&local_3dc8);
      local_5938 = &local_4c38;
      local_5b18 = TSharedPtr<FWidgetReflectorNodeBase,1>::operator->(&this->WidgetInfo);
      local_5940 = *(code **)(local_5b18->_padding_ + 0xa8);
      pFVar9 = (FText *)(*local_5940)(local_5b18,&local_5188);
      local_5930 = TAttribute<FText>::TAttribute<FText>(local_5938,pFVar9);
      local_5920 = SHyperlink::FArguments::Text(local_5928,local_5930);
      local_5360 = HandleHyperlinkNavigate;
      local_5358 = 0;
      ppcVar24 = &local_5360;
      puVar25 = local_51c8;
      for (lVar23 = 0x10; lVar23 != 0; lVar23 = lVar23 + -1) {
        *puVar25 = *(undefined1 *)ppcVar24;
        ppcVar24 = (code **)((longlong)ppcVar24 + 1);
        puVar25 = puVar25 + 1;
      }
      puVar25 = local_51c8;
      ppVar27 = &local_51b8;
      for (lVar23 = 0x10; lVar23 != 0; lVar23 = lVar23 + -1) {
        *(undefined1 *)ppVar27 = *puVar25;
        puVar25 = puVar25 + 1;
        ppVar27 = (pmf_6b0b76ba *)&ppVar27->field_0x1;
      }
      local_5918 = SHyperlink::FArguments::OnNavigate<SReflectorTreeWidgetItem>
                             (local_5920,this,&local_51b8);
      RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_5c60);
      pTVar13 = MakeTDecl<SHyperlink,RequiredArgs::T0RequiredArgs>
                          (&local_4e50,"SHyperlink",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetReflectorTreeWidgetItem.cpp"
                           ,0xb9,&local_5c60);
      pTVar14 = TSlateDecl<SHyperlink,RequiredArgs::T0RequiredArgs>::operator<<=
                          (pTVar13,&local_5198,local_5918);
      TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SHyperlink>(&local_5350,pTVar14);
      local_5908 = SBox::FArguments::operator[](local_5910,&local_5350);
      RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_5c5f);
      pTVar15 = MakeTDecl<SBox,RequiredArgs::T0RequiredArgs>
                          (&local_4e68,"SBox",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetReflectorTreeWidgetItem.cpp"
                           ,0xb4,&local_5c5f);
      pTVar16 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                          (pTVar15,&local_51a8,local_5908);
      TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBox>(__return_storage_ptr__,pTVar16);
      TSharedRef<SBox,1>::~TSharedRef<SBox,1>(&local_51a8);
      TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::~TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
                (&local_4e68);
      TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5350);
      TSharedRef<SHyperlink,1>::~TSharedRef<SHyperlink,1>(&local_5198);
      TSlateDecl<SHyperlink,RequiredArgs::T0RequiredArgs>::
      ~TSlateDecl<SHyperlink,RequiredArgs::T0RequiredArgs>(&local_4e50);
      FText::~FText(&local_5188);
      SHyperlink::FArguments::~FArguments(&local_3dc8);
      SBox::FArguments::~FArguments(&local_3468);
    }
    else {
      local_5900 = NAME_Visibility;
      local_5bc8 = 0;
      pFVar17 = param_1;
      plVar30 = &local_5bc8;
      for (lVar23 = 8; lVar23 != 0; lVar23 = lVar23 + -1) {
        *(char *)plVar30 = (char)(pFVar17->ComparisonIndex).Value;
        pFVar17 = (FName *)((longlong)&(pFVar17->ComparisonIndex).Value + 1);
        plVar30 = (longlong *)((longlong)plVar30 + 1);
      }
      local_5318 = &local_5bc8;
      local_58f8 = local_5bc8;
      local_5bc0 = 0;
      pFVar17 = &local_5900;
      plVar30 = &local_5bc0;
      for (lVar23 = 8; lVar23 != 0; lVar23 = lVar23 + -1) {
        *(char *)plVar30 = (char)(pFVar17->ComparisonIndex).Value;
        pFVar17 = (FName *)((longlong)&(pFVar17->ComparisonIndex).Value + 1);
        plVar30 = (longlong *)((longlong)plVar30 + 1);
      }
      local_5310 = &local_5bc0;
      local_58f0 = local_5bc0;
      local_5c5e = local_58f8 == local_5bc0;
      local_5c34 = (uint)(byte)local_5c5e;
      local_5c5d = local_5c5e;
      if ((bool)local_5c5e) {
        local_58e8 = SBox::FArguments::FArguments(&local_3128);
        local_58e0 = SBox::FArguments::HAlign(local_58e8,HAlign_Center);
        local_58c8 = SBox::FArguments::VAlign(local_58e0,VAlign_Center);
        local_58d8 = &local_4c08;
        pFVar12 = FMargin::FMargin(&local_4da0,__real_40000000,0.0);
        local_58d0 = TAttribute<FMargin>::TAttribute<FMargin>(local_58d8,pFVar12);
        local_5880 = SBox::FArguments::Padding(local_58c8,local_58d0);
        local_58a8 = STextBlock::FArguments::FArguments(&local_1578);
        local_58b8 = &local_4bd8;
        local_5b10 = TSharedPtr<FWidgetReflectorNodeBase,1>::operator->(&this->WidgetInfo);
        local_58c0 = *(code **)(local_5b10->_padding_ + 0x28);
        pFVar9 = (FText *)(*local_58c0)(local_5b10,&local_5158);
        local_58b0 = TAttribute<FText>::TAttribute<FText>(local_58b8,pFVar9);
        local_5890 = STextBlock::FArguments::Text(local_58a8,local_58b0);
        local_58a0 = local_4d30;
        local_5c00[1] = 1;
        local_5898 = TAttribute<enum_ETextJustify::Type>::TAttribute<enum_ETextJustify::Type>
                               (local_58a0,(Type *)(local_5c00 + 1));
        local_5888 = STextBlock::FArguments::Justification(local_5890,local_5898);
        RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_5c5c);
        pTVar10 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                            (&local_4fd0,"STextBlock",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetReflectorTreeWidgetItem.cpp"
                             ,0xc5,&local_5c5c);
        pTVar11 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                            (pTVar10,&local_5168,local_5888);
        TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_5340,pTVar11);
        local_5878 = SBox::FArguments::operator[](local_5880,&local_5340);
        RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_5c5b);
        pTVar15 = MakeTDecl<SBox,RequiredArgs::T0RequiredArgs>
                            (&local_4e38,"SBox",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetReflectorTreeWidgetItem.cpp"
                             ,0xc0,&local_5c5b);
        pTVar16 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                            (pTVar15,&local_5178,local_5878);
        TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBox>(__return_storage_ptr__,pTVar16);
        TSharedRef<SBox,1>::~TSharedRef<SBox,1>(&local_5178);
        TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::
        ~TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>(&local_4e38);
        TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5340);
        TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_5168);
        TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
        ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_4fd0);
        FText::~FText(&local_5158);
        STextBlock::FArguments::~FArguments(&local_1578);
        SBox::FArguments::~FArguments(&local_3128);
      }
      else {
        local_5870 = NAME_Focusable;
        local_5bb8 = 0;
        pFVar17 = param_1;
        plVar30 = &local_5bb8;
        for (lVar23 = 8; lVar23 != 0; lVar23 = lVar23 + -1) {
          *(char *)plVar30 = (char)(pFVar17->ComparisonIndex).Value;
          pFVar17 = (FName *)((longlong)&(pFVar17->ComparisonIndex).Value + 1);
          plVar30 = (longlong *)((longlong)plVar30 + 1);
        }
        local_5308 = &local_5bb8;
        local_5868 = local_5bb8;
        local_5bb0 = 0;
        pFVar17 = &local_5870;
        plVar30 = &local_5bb0;
        for (lVar23 = 8; lVar23 != 0; lVar23 = lVar23 + -1) {
          *(char *)plVar30 = (char)(pFVar17->ComparisonIndex).Value;
          pFVar17 = (FName *)((longlong)&(pFVar17->ComparisonIndex).Value + 1);
          plVar30 = (longlong *)((longlong)plVar30 + 1);
        }
        local_5300 = &local_5bb0;
        local_5860 = local_5bb0;
        local_5c5a = local_5868 == local_5bb0;
        local_5c30 = (uint)(byte)local_5c5a;
        local_5c59 = local_5c5a;
        if ((bool)local_5c5a) {
          local_5b08 = TSharedPtr<FWidgetReflectorNodeBase,1>::operator->(&this->WidgetInfo);
          bVar2 = (bool)(**(code **)(local_5b08->_padding_ + 0x48))(local_5b08);
          pTVar16 = `SReflectorTreeWidgetItem::GenerateWidgetForColumn'::__l2::<lambda_1>::
                    operator()(&local_5c08,&local_5148,bVar2);
          TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBox>(__return_storage_ptr__,pTVar16);
          TSharedRef<SBox,1>::~TSharedRef<SBox,1>(&local_5148);
        }
        else {
          local_5858 = NAME_Enabled;
          local_5ba8 = 0;
          pFVar17 = param_1;
          plVar30 = &local_5ba8;
          for (lVar23 = 8; lVar23 != 0; lVar23 = lVar23 + -1) {
            *(char *)plVar30 = (char)(pFVar17->ComparisonIndex).Value;
            pFVar17 = (FName *)((longlong)&(pFVar17->ComparisonIndex).Value + 1);
            plVar30 = (longlong *)((longlong)plVar30 + 1);
          }
          local_52f8 = &local_5ba8;
          local_5850 = local_5ba8;
          local_5ba0 = 0;
          pFVar17 = &local_5858;
          plVar30 = &local_5ba0;
          for (lVar23 = 8; lVar23 != 0; lVar23 = lVar23 + -1) {
            *(char *)plVar30 = (char)(pFVar17->ComparisonIndex).Value;
            pFVar17 = (FName *)((longlong)&(pFVar17->ComparisonIndex).Value + 1);
            plVar30 = (longlong *)((longlong)plVar30 + 1);
          }
          local_52f0 = &local_5ba0;
          local_5848 = local_5ba0;
          local_5c58 = local_5850 == local_5ba0;
          local_5c2c = (uint)(byte)local_5c58;
          local_5c57 = local_5c58;
          if ((bool)local_5c58) {
            local_5b00 = TSharedPtr<FWidgetReflectorNodeBase,1>::operator->(&this->WidgetInfo);
            bVar2 = (bool)(**(code **)(local_5b00->_padding_ + 0xe8))(local_5b00);
            pTVar16 = `SReflectorTreeWidgetItem::GenerateWidgetForColumn'::__l2::<lambda_1>::
                      operator()(&local_5c08,&local_5138,bVar2);
            TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBox>(__return_storage_ptr__,pTVar16);
            TSharedRef<SBox,1>::~TSharedRef<SBox,1>(&local_5138);
          }
          else {
            local_5840 = NAME_Volatile;
            local_5b98 = 0;
            pFVar17 = param_1;
            plVar30 = &local_5b98;
            for (lVar23 = 8; lVar23 != 0; lVar23 = lVar23 + -1) {
              *(char *)plVar30 = (char)(pFVar17->ComparisonIndex).Value;
              pFVar17 = (FName *)((longlong)&(pFVar17->ComparisonIndex).Value + 1);
              plVar30 = (longlong *)((longlong)plVar30 + 1);
            }
            local_52e8 = &local_5b98;
            local_5838 = local_5b98;
            local_5b90 = 0;
            pFVar17 = &local_5840;
            plVar30 = &local_5b90;
            for (lVar23 = 8; lVar23 != 0; lVar23 = lVar23 + -1) {
              *(char *)plVar30 = (char)(pFVar17->ComparisonIndex).Value;
              pFVar17 = (FName *)((longlong)&(pFVar17->ComparisonIndex).Value + 1);
              plVar30 = (longlong *)((longlong)plVar30 + 1);
            }
            local_52e0 = &local_5b90;
            local_5830 = local_5b90;
            local_5c56 = local_5838 == local_5b90;
            local_5c28 = (uint)(byte)local_5c56;
            local_5c55 = local_5c56;
            if ((bool)local_5c56) {
              local_5af8 = TSharedPtr<FWidgetReflectorNodeBase,1>::operator->(&this->WidgetInfo);
              bVar2 = (bool)(**(code **)(local_5af8->_padding_ + 0x78))(local_5af8);
              pTVar16 = `SReflectorTreeWidgetItem::GenerateWidgetForColumn'::__l2::<lambda_1>::
                        operator()(&local_5c08,&local_5128,bVar2);
              TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBox>(__return_storage_ptr__,pTVar16);
              TSharedRef<SBox,1>::~TSharedRef<SBox,1>(&local_5128);
            }
            else {
              local_5828 = NAME_HasActiveTimer;
              local_5b88 = 0;
              pFVar17 = param_1;
              plVar30 = &local_5b88;
              for (lVar23 = 8; lVar23 != 0; lVar23 = lVar23 + -1) {
                *(char *)plVar30 = (char)(pFVar17->ComparisonIndex).Value;
                pFVar17 = (FName *)((longlong)&(pFVar17->ComparisonIndex).Value + 1);
                plVar30 = (longlong *)((longlong)plVar30 + 1);
              }
              local_52d8 = &local_5b88;
              local_5820 = local_5b88;
              local_5b80 = 0;
              pFVar17 = &local_5828;
              plVar30 = &local_5b80;
              for (lVar23 = 8; lVar23 != 0; lVar23 = lVar23 + -1) {
                *(char *)plVar30 = (char)(pFVar17->ComparisonIndex).Value;
                pFVar17 = (FName *)((longlong)&(pFVar17->ComparisonIndex).Value + 1);
                plVar30 = (longlong *)((longlong)plVar30 + 1);
              }
              local_52d0 = &local_5b80;
              local_5818 = local_5b80;
              local_5c54 = local_5820 == local_5b80;
              local_5c24 = (uint)(byte)local_5c54;
              local_5c53 = local_5c54;
              if ((bool)local_5c54) {
                local_5af0 = TSharedPtr<FWidgetReflectorNodeBase,1>::operator->(&this->WidgetInfo);
                bVar2 = (bool)(**(code **)(local_5af0->_padding_ + 0x88))(local_5af0);
                pTVar16 = `SReflectorTreeWidgetItem::GenerateWidgetForColumn'::__l2::<lambda_1>::
                          operator()(&local_5c08,&local_5118,bVar2);
                TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBox>(__return_storage_ptr__,pTVar16);
                TSharedRef<SBox,1>::~TSharedRef<SBox,1>(&local_5118);
              }
              else {
                local_5810 = NAME_Clipping;
                local_5b78 = 0;
                pFVar17 = param_1;
                plVar30 = &local_5b78;
                for (lVar23 = 8; lVar23 != 0; lVar23 = lVar23 + -1) {
                  *(char *)plVar30 = (char)(pFVar17->ComparisonIndex).Value;
                  pFVar17 = (FName *)((longlong)&(pFVar17->ComparisonIndex).Value + 1);
                  plVar30 = (longlong *)((longlong)plVar30 + 1);
                }
                local_52c8 = &local_5b78;
                local_5808 = local_5b78;
                local_5b70 = 0;
                pFVar17 = &local_5810;
                plVar30 = &local_5b70;
                for (lVar23 = 8; lVar23 != 0; lVar23 = lVar23 + -1) {
                  *(char *)plVar30 = (char)(pFVar17->ComparisonIndex).Value;
                  pFVar17 = (FName *)((longlong)&(pFVar17->ComparisonIndex).Value + 1);
                  plVar30 = (longlong *)((longlong)plVar30 + 1);
                }
                local_52c0 = &local_5b70;
                local_5800 = local_5b70;
                local_5c52 = local_5808 == local_5b70;
                local_5c20 = (uint)(byte)local_5c52;
                local_5c51 = local_5c52;
                if ((bool)local_5c52) {
                  local_57f8 = SBox::FArguments::FArguments(&local_2de8);
                  local_57f0 = SBox::FArguments::HAlign(local_57f8,HAlign_Center);
                  local_57d8 = SBox::FArguments::VAlign(local_57f0,VAlign_Center);
                  local_57e8 = &local_4ba8;
                  pFVar12 = FMargin::FMargin(&local_4e20,__real_40000000,0.0);
                  local_57e0 = TAttribute<FMargin>::TAttribute<FMargin>(local_57e8,pFVar12);
                  local_57a8 = SBox::FArguments::Padding(local_57d8,local_57e0);
                  local_57b8 = STextBlock::FArguments::FArguments(&local_1020);
                  local_57c8 = &local_4b78;
                  local_5ae8 = TSharedPtr<FWidgetReflectorNodeBase,1>::operator->(&this->WidgetInfo)
                  ;
                  local_57d0 = *(code **)(local_5ae8->_padding_ + 0x30);
                  pFVar9 = (FText *)(*local_57d0)(local_5ae8,&local_50e8);
                  local_57c0 = TAttribute<FText>::TAttribute<FText>(local_57c8,pFVar9);
                  local_57b0 = STextBlock::FArguments::Text(local_57b8,local_57c0);
                  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_5c50);
                  pTVar10 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                                      (&local_4fa0,"STextBlock",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetReflectorTreeWidgetItem.cpp"
                                       ,0xe1,&local_5c50);
                  pTVar11 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                                      (pTVar10,&local_50f8,local_57b0);
                  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_5440,pTVar11);
                  local_57a0 = SBox::FArguments::operator[](local_57a8,&local_5440);
                  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_5c4f);
                  pTVar15 = MakeTDecl<SBox,RequiredArgs::T0RequiredArgs>
                                      (&local_4fb8,"SBox",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetReflectorTreeWidgetItem.cpp"
                                       ,0xdc,&local_5c4f);
                  pTVar16 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                                      (pTVar15,&local_5108,local_57a0);
                  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBox>(__return_storage_ptr__,pTVar16)
                  ;
                  TSharedRef<SBox,1>::~TSharedRef<SBox,1>(&local_5108);
                  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::
                  ~TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>(&local_4fb8);
                  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5440);
                  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_50f8);
                  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
                  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_4fa0);
                  FText::~FText(&local_50e8);
                  STextBlock::FArguments::~FArguments(&local_1020);
                  SBox::FArguments::~FArguments(&local_2de8);
                }
                else {
                  local_5798 = NAME_LayerId;
                  local_5b68 = 0;
                  pFVar17 = param_1;
                  plVar30 = &local_5b68;
                  for (lVar23 = 8; lVar23 != 0; lVar23 = lVar23 + -1) {
                    *(char *)plVar30 = (char)(pFVar17->ComparisonIndex).Value;
                    pFVar17 = (FName *)((longlong)&(pFVar17->ComparisonIndex).Value + 1);
                    plVar30 = (longlong *)((longlong)plVar30 + 1);
                  }
                  local_52b8 = &local_5b68;
                  local_5790 = local_5b68;
                  local_5b60 = 0;
                  pFVar17 = &local_5798;
                  plVar30 = &local_5b60;
                  for (lVar23 = 8; lVar23 != 0; lVar23 = lVar23 + -1) {
                    *(char *)plVar30 = (char)(pFVar17->ComparisonIndex).Value;
                    pFVar17 = (FName *)((longlong)&(pFVar17->ComparisonIndex).Value + 1);
                    plVar30 = (longlong *)((longlong)plVar30 + 1);
                  }
                  local_52b0 = &local_5b60;
                  local_5788 = local_5b60;
                  local_5c4e = local_5790 == local_5b60;
                  local_5c1c = (uint)(byte)local_5c4e;
                  local_5c4d = local_5c4e;
                  if ((bool)local_5c4e) {
                    local_5780 = SBox::FArguments::FArguments(&local_2aa8);
                    local_5778 = SBox::FArguments::HAlign(local_5780,HAlign_Right);
                    local_5760 = SBox::FArguments::VAlign(local_5778,VAlign_Center);
                    local_5770 = &local_4b48;
                    pFVar12 = FMargin::FMargin(&local_4e10,__real_40000000,0.0);
                    local_5768 = TAttribute<FMargin>::TAttribute<FMargin>(local_5770,pFVar12);
                    local_5708 = SBox::FArguments::Padding(local_5760,local_5768);
                    local_5718 = STextBlock::FArguments::FArguments(&local_ac8);
                    local_5728 = &local_4b18;
                    local_5758 = &local_4e00;
                    TSharedPtr<FCulture,1>::TSharedPtr<FCulture,1>(&local_5410,(FNullTag *)0x0);
                    local_5ae0 = TSharedPtr<FWidgetReflectorNodeBase,1>::operator->
                                           (&this->WidgetInfo);
                    iVar3 = (**(code **)(local_5ae0->_padding_ + 0x40))(local_5ae0);
                    local_5740 = FText::AsNumber(local_5758,iVar3,(FNumberFormattingOptions *)0x0,
                                                 &local_5410);
                    local_5750 = &local_4df0;
                    TSharedPtr<FCulture,1>::TSharedPtr<FCulture,1>(&local_5420,(FNullTag *)0x0);
                    local_5ad8 = TSharedPtr<FWidgetReflectorNodeBase,1>::operator->
                                           (&this->WidgetInfo);
                    iVar3 = (**(code **)(local_5ad8->_padding_ + 0x38))(local_5ad8);
                    local_5738 = FText::AsNumber(local_5750,iVar3,(FNumberFormattingOptions *)0x0,
                                                 &local_5420);
                    local_5748 = &local_4de0;
                    pFVar9 = FText::AsLocalizable_Advanced_LocText
                                       (&local_50a8,L"SWidgetReflector",L"WidgetLayerIds",
                                        L"[{0}, {1}]");
                    local_5730 = FTextFormat::FTextFormat(local_5748,pFVar9,Default);
                    pFVar9 = FText::Format<FText,FText>
                                       (&local_50b8,local_5730,local_5738,local_5740);
                    local_5720 = TAttribute<FText>::TAttribute<FText>(local_5728,pFVar9);
                    local_5710 = STextBlock::FArguments::Text(local_5718,local_5720);
                    RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_5c4c);
                    pTVar10 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                                        (&local_4f70,"STextBlock",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetReflectorTreeWidgetItem.cpp"
                                         ,0xec,&local_5c4c);
                    pTVar11 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                                        (pTVar10,&local_50c8,local_5710);
                    TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_5430,pTVar11);
                    local_5700 = SBox::FArguments::operator[](local_5708,&local_5430);
                    RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_5c4b);
                    pTVar15 = MakeTDecl<SBox,RequiredArgs::T0RequiredArgs>
                                        (&local_4f88,"SBox",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetReflectorTreeWidgetItem.cpp"
                                         ,0xe7,&local_5c4b);
                    pTVar16 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                                        (pTVar15,&local_50d8,local_5700);
                    TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBox>
                              (__return_storage_ptr__,pTVar16);
                    TSharedRef<SBox,1>::~TSharedRef<SBox,1>(&local_50d8);
                    TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::
                    ~TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>(&local_4f88);
                    TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5430);
                    TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_50c8);
                    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
                    ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_4f70);
                    FText::~FText(&local_50b8);
                    FText::~FText(&local_50a8);
                    TSharedPtr<FCulture,1>::~TSharedPtr<FCulture,1>(&local_5420);
                    TSharedPtr<FCulture,1>::~TSharedPtr<FCulture,1>(&local_5410);
                    STextBlock::FArguments::~FArguments(&local_ac8);
                    SBox::FArguments::~FArguments(&local_2aa8);
                  }
                  else {
                    local_56f8 = NAME_ForegroundColor;
                    local_5b58 = 0;
                    pFVar17 = param_1;
                    plVar30 = &local_5b58;
                    for (lVar23 = 8; lVar23 != 0; lVar23 = lVar23 + -1) {
                      *(char *)plVar30 = (char)(pFVar17->ComparisonIndex).Value;
                      pFVar17 = (FName *)((longlong)&(pFVar17->ComparisonIndex).Value + 1);
                      plVar30 = (longlong *)((longlong)plVar30 + 1);
                    }
                    local_52a8 = &local_5b58;
                    local_56f0 = local_5b58;
                    local_5b50 = 0;
                    pFVar17 = &local_56f8;
                    plVar30 = &local_5b50;
                    for (lVar23 = 8; lVar23 != 0; lVar23 = lVar23 + -1) {
                      *(char *)plVar30 = (char)(pFVar17->ComparisonIndex).Value;
                      pFVar17 = (FName *)((longlong)&(pFVar17->ComparisonIndex).Value + 1);
                      plVar30 = (longlong *)((longlong)plVar30 + 1);
                    }
                    local_52a0 = &local_5b50;
                    local_56e8 = local_5b50;
                    local_5c4a = local_56f0 == local_5b50;
                    local_5c18 = (uint)(byte)local_5c4a;
                    local_5c49 = local_5c4a;
                    if ((bool)local_5c4a) {
                      local_5ad0 = TSharedPtr<FWidgetReflectorNodeBase,1>::operator->
                                             (&this->WidgetInfo);
                      local_56e0 = *(code **)(local_5ad0->_padding_ + 0xd8);
                      (*local_56e0)(local_5ad0,&local_5330);
                      local_56c0 = SBorder::FArguments::FArguments(&local_2408);
                      local_56d0 = &local_4d10;
                      bVar2 = FSlateColor::IsColorSpecified(&local_5330);
                      if (bVar2) {
                        local_5ac8 = &EVisibility::Visible;
                      }
                      else {
                        local_5ac8 = &EVisibility::Hidden;
                      }
                      local_56d8 = local_5ac8;
                      local_56c8 = TAttribute<EVisibility>::TAttribute<EVisibility><EVisibility>
                                             (local_56d0,local_5ac8);
                      local_5688 = TSlateBaseNamedArgs<SBorder>::Visibility
                                             ((TSlateBaseNamedArgs<SBorder> *)local_56c0,local_56c8)
                      ;
                      local_5698 = &local_4cf0;
                      local_5ac0 = FCoreStyle::Get();
                      local_56a8 = *(code **)((longlong)*local_5ac0 + 0x50);
                      local_56b8 = &local_5298;
                      pFVar17 = ::FName::FName(local_56b8,"Checkerboard");
                      local_56b0 = *pFVar17;
                      local_56a0 = (FSlateBrush *)(*local_56a8)(local_5ac0,local_56b0,0,0);
                      local_5690 = TAttribute<FSlateBrush_const_*>::TAttribute<FSlateBrush_const_*>
                                             (local_5698,&local_56a0);
                      local_5680 = SBorder::FArguments::BorderImage(local_5688,local_5690);
                      local_5668 = SBorder::FArguments::VAlign(local_5680,VAlign_Center);
                      local_5678 = &local_4ae8;
                      pFVar12 = FMargin::FMargin(&local_4dd0,__real_40000000,0.0);
                      local_5670 = TAttribute<FMargin>::TAttribute<FMargin>(local_5678,pFVar12);
                      local_5620 = SBorder::FArguments::Padding(local_5668,local_5670);
                      local_5650 = SColorBlock::FArguments::FArguments(&local_2768);
                      local_5660 = &local_4ab8;
                      pFVar18 = FSlateColor::GetSpecifiedColor(&local_5330,&local_4dc0);
                      local_5658 = TAttribute<FLinearColor>::TAttribute<FLinearColor>
                                             (local_5660,pFVar18);
                      local_5630 = SColorBlock::FArguments::Color(local_5650,local_5658);
                      local_5640 = &local_4a88;
                      local_5400._s_0.X = __real_4030000000000000;
                      local_5400._s_0.Y = __real_4030000000000000;
                      local_5648 = &local_5400;
                      local_5638 = TAttribute<UE::Math::TVector2<double>_>::
                                   TAttribute<UE::Math::TVector2<double>_>
                                             (local_5640,(TVector2<double> *)&local_5648->_s_0);
                      local_5628 = SColorBlock::FArguments::Size(local_5630,local_5638);
                      RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_5c48);
                      this_01 = MakeTDecl<SColorBlock,RequiredArgs::T0RequiredArgs>
                                          (&local_4f40,"SColorBlock",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetReflectorTreeWidgetItem.cpp"
                                           ,0xfd,&local_5c48);
                      pTVar19 = TSlateDecl<SColorBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                                          (this_01,&local_5088,local_5628);
                      TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SColorBlock>(&local_5450,pTVar19)
                      ;
                      local_5618 = SBorder::FArguments::operator[](local_5620,&local_5450);
                      RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_5c47);
                      this_02 = MakeTDecl<SBorder,RequiredArgs::T0RequiredArgs>
                                          (&local_4f58,"SBorder",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetReflectorTreeWidgetItem.cpp"
                                           ,0xf4,&local_5c47);
                      pTVar20 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                                          (this_02,&local_5098,local_5618);
                      TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBorder>
                                (__return_storage_ptr__,pTVar20);
                      TSharedRef<SBorder,1>::~TSharedRef<SBorder,1>(&local_5098);
                      TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::
                      ~TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>(&local_4f58);
                      TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5450);
                      TSharedRef<SColorBlock,1>::~TSharedRef<SColorBlock,1>(&local_5088);
                      TSlateDecl<SColorBlock,RequiredArgs::T0RequiredArgs>::
                      ~TSlateDecl<SColorBlock,RequiredArgs::T0RequiredArgs>(&local_4f40);
                      SColorBlock::FArguments::~FArguments(&local_2768);
                      SBorder::FArguments::~FArguments(&local_2408);
                    }
                    else {
                      local_5610 = NAME_ActualSize;
                      local_5b48 = 0;
                      pFVar17 = param_1;
                      plVar30 = &local_5b48;
                      for (lVar23 = 8; lVar23 != 0; lVar23 = lVar23 + -1) {
                        *(char *)plVar30 = (char)(pFVar17->ComparisonIndex).Value;
                        pFVar17 = (FName *)((longlong)&(pFVar17->ComparisonIndex).Value + 1);
                        plVar30 = (longlong *)((longlong)plVar30 + 1);
                      }
                      local_5290 = &local_5b48;
                      local_5608 = local_5b48;
                      local_5b40._padding_ = 0;
                      pFVar17 = &local_5610;
                      pTVar28 = &local_5b40;
                      for (lVar23 = 8; lVar23 != 0; lVar23 = lVar23 + -1) {
                        *(char *)&pTVar28->_padding_ = (char)(pFVar17->ComparisonIndex).Value;
                        pFVar17 = (FName *)((longlong)&(pFVar17->ComparisonIndex).Value + 1);
                        pTVar28 = (TReferenceControllerBase<1> *)((longlong)&pTVar28->_padding_ + 1)
                        ;
                      }
                      local_5258.SharedReferenceCount.ReferenceController = &local_5b40;
                      local_5600 = local_5b40._padding_;
                      local_5c46 = local_5608 == local_5b40._padding_;
                      local_5c14 = (uint)(byte)local_5c46;
                      local_5c45 = local_5c46;
                      if ((bool)local_5c46) {
                        local_55c8 = STextBlock::FArguments::FArguments(&local_570);
                        local_55d8 = &local_4a58;
                        local_55f8 = TSharedPtr<FWidgetReflectorNodeBase,1>::operator->
                                               (&this->WidgetInfo);
                        local_5ab8._s_0 =
                             (TVector2<float>_u_0_s_0)
                             FWidgetReflectorNodeBase::GetLocalSize(local_55f8);
                        local_5bf8 = *(float *)((longlong)local_5ab8 + 4);
                        local_5bf4 = *(float *)local_5ab8;
                        local_55f0 = L"X=%3.3f Y=%3.3f";
                        local_55e8 = L"X=%3.3f Y=%3.3f";
                        local_55e0 = L"X=%3.3f Y=%3.3f";
                        ::FString::Printf<float,float>
                                  (&local_53e0,
                                   (TCheckedFormatStringPrivate<wchar_t,float,float>)0x15067f418,
                                   local_5bf4,local_5bf8);
                        pFVar9 = FText::FromString(&local_5068,&local_53e0);
                        local_55d0 = TAttribute<FText>::TAttribute<FText>(local_55d8,pFVar9);
                        local_55c0 = STextBlock::FArguments::Text(local_55c8,local_55d0);
                        RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_5c44);
                        pTVar10 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                                            (&local_4f28,"STextBlock",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetReflectorTreeWidgetItem.cpp"
                                             ,0x104,&local_5c44);
                        pTVar11 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                                            (pTVar10,&local_5078,local_55c0);
                        TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>
                                  (__return_storage_ptr__,pTVar11);
                        TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_5078);
                        TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
                        ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_4f28);
                        FText::~FText(&local_5068);
                        ::FString::~FString(&local_53e0);
                        STextBlock::FArguments::~FArguments(&local_570);
                      }
                      else {
                        local_55b8 = NAME_Address;
                        local_5b40.SharedReferenceCount = (atomic<int>)0x0;
                        local_5b40.WeakReferenceCount = (atomic<int>)0x0;
                        paVar29 = &local_5b40.SharedReferenceCount;
                        for (lVar23 = 8; lVar23 != 0; lVar23 = lVar23 + -1) {
                          *(char *)paVar29 = (char)(param_1->ComparisonIndex).Value;
                          param_1 = (FName *)((longlong)&(param_1->ComparisonIndex).Value + 1);
                          paVar29 = (atomic<int> *)&paVar29->field_0x1;
                        }
                        local_5278 = &local_5b40.SharedReferenceCount;
                        local_55b0._0_4_ = local_5b40.SharedReferenceCount;
                        local_55b0._4_4_ = local_5b40.WeakReferenceCount;
                        local_5b30 = 0;
                        pFVar17 = &local_55b8;
                        plVar30 = &local_5b30;
                        for (lVar23 = 8; lVar23 != 0; lVar23 = lVar23 + -1) {
                          *(char *)plVar30 = (char)(pFVar17->ComparisonIndex).Value;
                          pFVar17 = (FName *)((longlong)&(pFVar17->ComparisonIndex).Value + 1);
                          plVar30 = (longlong *)((longlong)plVar30 + 1);
                        }
                        local_5270 = &local_5b30;
                        local_55a8 = local_5b30;
                        local_5c43 = local_55b0 == local_5b30;
                        local_5c10 = (uint)(byte)local_5c43;
                        local_5c42 = local_5c43;
                        if ((bool)local_5c43) {
                          local_5ab0 = TSharedPtr<FWidgetReflectorNodeBase,1>::operator->
                                                 (&this->WidgetInfo);
                          uVar21 = (**(code **)(local_5ab0->_padding_ + 0xe0))(local_5ab0);
                          FWidgetReflectorNodeUtils::WidgetAddressToString(&local_5a90,uVar21);
                          FText::FromString(&local_5460,&local_5a90);
                          local_5bf0 = local_5a90.Data.ArrayNum;
                          if (local_5a90.Data.ArrayNum == 0) {
                            local_5aa8 = (FScriptContainerElement *)
                                         `FString::operator*'::__l2::<lambda_1>::operator()
                                                   (&local_5c3d);
                          }
                          else {
                            local_55a0 = local_5a90.Data.AllocatorInstance.Data;
                            local_5598 = local_5a90.Data.AllocatorInstance.Data;
                            local_5590 = local_5a90.Data.AllocatorInstance.Data;
                            local_5aa8 = local_5a90.Data.AllocatorInstance.Data;
                          }
                          local_5588 = local_5aa8;
                          local_5578 = local_5aa8;
                          local_5580 = L"this == (SWidget*)%s";
                          local_5570 = L"this == (SWidget*)%s";
                          ::FString::Printf<wchar_t_const_*>
                                    (&local_53f0,
                                     (TCheckedFormatStringPrivate<wchar_t,wchar_t_const_*>)
                                     0x1509faf00,(wchar_t *)local_5aa8);
                          local_54f8 = SHorizontalBox::FArguments::FArguments(&local_4230);
                          pFVar8 = SHorizontalBox::Slot(&local_4820);
                          pFVar8 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar8);
                          local_5558 = (FSlotArgumentsMixin *)&pFVar8->field_0x18;
                          local_5568 = &local_4a28;
                          pFVar12 = FMargin::FMargin(&local_4db0,__real_40000000,0.0);
                          local_5560 = TAttribute<FMargin>::TAttribute<FMargin>(local_5568,pFVar12);
                          local_5508 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::
                                       FSlotArgumentsMixin::Padding(local_5558,local_5560);
                          local_5540 = SHyperlink::FArguments::FArguments(&local_3788);
                          local_5550 = &local_49f8;
                          pFVar9 = FText::AsLocalizable_Advanced_LocText
                                             (&local_4fe8,L"SWidgetReflector",
                                              L"ClickToCopyBreakpoint",
                                              L"Click to copy conditional breakpoint for this instance."
                                             );
                          local_5548 = TAttribute<FText>::TAttribute<FText>(local_5550,pFVar9);
                          local_5528 = TSlateBaseNamedArgs<SHyperlink>::ToolTipText
                                                 ((TSlateBaseNamedArgs<SHyperlink> *)local_5540,
                                                  local_5548);
                          local_5538 = &local_49c8;
                          pFVar9 = FText::AsLocalizable_Advanced_LocText
                                             (&local_4ff8,L"SWidgetReflector",L"CBP",L"[CBP]");
                          local_5530 = TAttribute<FText>::TAttribute<FText>(local_5538,pFVar9);
                          local_5518 = SHyperlink::FArguments::Text(local_5528,local_5530);
                          local_5520 = `SReflectorTreeWidgetItem::GenerateWidgetForColumn'::__l52::
                                       <lambda_2>::<lambda_2>(local_5008,&local_53f0);
                          local_5510 = SHyperlink::FArguments::
                                       OnNavigate_Lambda<_SReflectorTreeWidgetItem::GenerateWidgetForColumn_::__l52::<lambda_2>_>
                                                 (local_5518,local_5520);
                          RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_5c41);
                          pTVar13 = MakeTDecl<SHyperlink,RequiredArgs::T0RequiredArgs>
                                              (&local_4ee0,"SHyperlink",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetReflectorTreeWidgetItem.cpp"
                                               ,0x113,&local_5c41);
                          pTVar14 = TSlateDecl<SHyperlink,RequiredArgs::T0RequiredArgs>::operator<<=
                                              (pTVar13,&local_5018,local_5510);
                          TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SHyperlink>
                                    (&local_53c0,pTVar14);
                          local_5500 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                                                 ((FSlotArguments *)local_5508,&local_53c0);
                          local_5480 = SHorizontalBox::FArguments::operator+(local_54f8,local_5500);
                          pFVar8 = SHorizontalBox::Slot(&local_4908);
                          pFVar8 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar8);
                          local_54e0 = (FSlotArgumentsMixin *)&pFVar8->field_0x18;
                          local_54f0 = &local_4998;
                          pFVar12 = FMargin::FMargin(&local_4d80,0.0,0.0,__real_4000000000000000,0.0
                                                    );
                          local_54e8 = TAttribute<FMargin>::TAttribute<FMargin>(local_54f0,pFVar12);
                          local_5490 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::
                                       FSlotArgumentsMixin::Padding(local_54e0,local_54e8);
                          local_54c8 = SHyperlink::FArguments::FArguments(&local_3aa8);
                          local_54d8 = &local_4968;
                          pFVar9 = FText::AsLocalizable_Advanced_LocText
                                             (&local_5028,L"SWidgetReflector",L"ClickToCopy",
                                              L"Click to copy address.");
                          local_54d0 = TAttribute<FText>::TAttribute<FText>(local_54d8,pFVar9);
                          local_54b0 = TSlateBaseNamedArgs<SHyperlink>::ToolTipText
                                                 ((TSlateBaseNamedArgs<SHyperlink> *)local_54c8,
                                                  local_54d0);
                          local_54c0 = &local_4938;
                          local_54b8 = TAttribute<FText>::TAttribute<FText><FText>
                                                 (local_54c0,&local_5460);
                          local_54a0 = SHyperlink::FArguments::Text(local_54b0,local_54b8);
                          local_54a8 = `SReflectorTreeWidgetItem::GenerateWidgetForColumn'::__l52::
                                       <lambda_3>::<lambda_3>(local_5038,&local_5460);
                          local_5498 = SHyperlink::FArguments::
                                       OnNavigate_Lambda<_SReflectorTreeWidgetItem::GenerateWidgetForColumn_::__l52::<lambda_3>_>
                                                 (local_54a0,local_54a8);
                          RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_5c40);
                          pTVar13 = MakeTDecl<SHyperlink,RequiredArgs::T0RequiredArgs>
                                              (&local_4ef8,"SHyperlink",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetReflectorTreeWidgetItem.cpp"
                                               ,0x11d,&local_5c40);
                          pTVar14 = TSlateDecl<SHyperlink,RequiredArgs::T0RequiredArgs>::operator<<=
                                              (pTVar13,&local_5048,local_5498);
                          TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SHyperlink>
                                    (&local_53d0,pTVar14);
                          local_5488 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                                                 ((FSlotArguments *)local_5490,&local_53d0);
                          local_5478 = SHorizontalBox::FArguments::operator+(local_5480,local_5488);
                          RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_5c3f);
                          pTVar4 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                                             (&local_4f10,"SHorizontalBox",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetReflectorTreeWidgetItem.cpp"
                                              ,0x10d,&local_5c3f);
                          pTVar22 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
                                    operator<<=(pTVar4,&local_5058,local_5478);
                          TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SHorizontalBox>
                                    (__return_storage_ptr__,pTVar22);
                          TSharedRef<SHorizontalBox,1>::~TSharedRef<SHorizontalBox,1>(&local_5058);
                          TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
                          ~TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>(&local_4f10);
                          TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_53d0);
                          TSharedRef<SHyperlink,1>::~TSharedRef<SHyperlink,1>(&local_5048);
                          TSlateDecl<SHyperlink,RequiredArgs::T0RequiredArgs>::
                          ~TSlateDecl<SHyperlink,RequiredArgs::T0RequiredArgs>(&local_4ef8);
                          `SReflectorTreeWidgetItem::GenerateWidgetForColumn'::__l52::<lambda_3>::
                          ~<lambda_3>(local_5038);
                          FText::~FText(&local_5028);
                          SHyperlink::FArguments::~FArguments(&local_3aa8);
                          SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_4908);
                          TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_53c0);
                          TSharedRef<SHyperlink,1>::~TSharedRef<SHyperlink,1>(&local_5018);
                          TSlateDecl<SHyperlink,RequiredArgs::T0RequiredArgs>::
                          ~TSlateDecl<SHyperlink,RequiredArgs::T0RequiredArgs>(&local_4ee0);
                          `SReflectorTreeWidgetItem::GenerateWidgetForColumn'::__l52::<lambda_2>::
                          ~<lambda_2>(local_5008);
                          FText::~FText(&local_4ff8);
                          FText::~FText(&local_4fe8);
                          SHyperlink::FArguments::~FArguments(&local_3788);
                          SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_4820);
                          SHorizontalBox::FArguments::~FArguments(&local_4230);
                          ::FString::~FString(&local_53f0);
                          FText::~FText(&local_5460);
                          ::FString::~FString(&local_5a90);
                        }
                        else {
                          TSharedRef<SWidget,1>::TSharedRef<SWidget,1>
                                    (__return_storage_ptr__,&SNullWidget::NullWidget);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return __return_storage_ptr__;
}

// GetTint @ 142ea8850

FSlateColor * __thiscall
SReflectorTreeWidgetItem::GetTint
          (SReflectorTreeWidgetItem *this,FSlateColor *__return_storage_ptr__)

{
  FWidgetReflectorNodeBase *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  FSlateColor *pFVar5;
  
  if ((this->WidgetInfo).Object == (FWidgetReflectorNodeBase *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FSlateColor *)(*pcVar2)();
      return pFVar5;
    }
  }
  pFVar1 = (this->WidgetInfo).Object;
  __return_storage_ptr__->ColorUseRule = UseColor_Specified;
  uVar3 = *(undefined8 *)((longlong)&(pFVar1->Tint).field0_0x0 + 8);
  *(undefined8 *)&(__return_storage_ptr__->SpecifiedColor).field0_0x0 =
       *(undefined8 *)&(pFVar1->Tint).field0_0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->SpecifiedColor).field0_0x0 + 8) = uVar3;
  return __return_storage_ptr__;
}

// HandleHyperlinkNavigate @ 142eb05d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall SReflectorTreeWidgetItem::HandleHyperlinkNavigate(SReflectorTreeWidgetItem *this)

{
  FWidgetReflectorNodeBase *pFVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar6;
  UObject *pUVar7;
  FString *pFVar8;
  FReadAccessScope *this_00;
  longlong *plVar9;
  undefined1 auStack_198 [32];
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> local_178;
  void *local_128 [2];
  FReadAccessScope local_118;
  FReadAccessScope local_100;
  FReadAccessScope local_e8;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> local_d0;
  FAssetData local_80;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_198;
  if ((this->WidgetInfo).Object == (FWidgetReflectorNodeBase *)0x0) {
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
  pFVar1 = (this->WidgetInfo).Object;
  (**(code **)(pFVar1->_padding_ + 200))(pFVar1,&local_80);
  if ((local_80.PackageName == (FName)0x0) || (local_80.AssetName == (FName)0x0)) {
LAB_142eb0757:
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnAccessSourceCode,
               &local_100);
    if ((*(int *)&(this->OnAccessSourceCode).field_0x10 != 0) &&
       (plVar9 = *(longlong **)&(this->OnAccessSourceCode).field_0x8, plVar9 != (longlong *)0x0)) {
      cVar4 = (**(code **)(*plVar9 + 0x38))();
      if (cVar4 != '\0') {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_100);
        if ((this->WidgetInfo).Object == (FWidgetReflectorNodeBase *)0x0) {
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
        iVar5 = (**(code **)(((this->WidgetInfo).Object)->_padding_ + 0xb8))();
        if ((this->WidgetInfo).Object == (FWidgetReflectorNodeBase *)0x0) {
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
        pFVar1 = (this->WidgetInfo).Object;
        pFVar8 = (FString *)(**(code **)(pFVar1->_padding_ + 0xb0))(pFVar1,local_128);
        TDelegate<bool___cdecl(FString_const_&,int,int),FDefaultDelegateUserPolicy>::Execute
                  (&this->OnAccessSourceCode,pFVar8,iVar5,0);
        if (local_128[0] != (void *)0x0) {
          FMemory::Free(local_128[0]);
        }
        goto LAB_142eb0851;
      }
    }
    this_00 = &local_100;
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnAccessAsset,
               &local_118);
    if ((*(int *)&(this->OnAccessAsset).field_0x10 == 0) ||
       (plVar9 = *(longlong **)&(this->OnAccessAsset).field_0x8, plVar9 == (longlong *)0x0)) {
LAB_142eb074e:
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_118);
      goto LAB_142eb0757;
    }
    cVar4 = (**(code **)(*plVar9 + 0x38))();
    if (cVar4 == '\0') goto LAB_142eb074e;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_118);
    FAssetData::GetPackage(&local_80);
    plVar9 = (longlong *)0x0;
    local_178.Hash.InlineData[0] = '\0';
    local_178.Hash.InlineData[1] = '\0';
    local_178.Hash.InlineData[2] = '\0';
    local_178.Hash.InlineData[3] = '\0';
    local_178.Hash._padding_ = 0;
    local_178.Elements._16_8_ = 0;
    local_178.Elements._24_8_ = 0;
    local_178._72_8_ = 0;
    local_178.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
    local_178.Elements._48_8_ = _UNK_150631d98;
    local_178.Elements._0_8_ = 0;
    local_178.Elements._8_8_ = 0;
    local_178.Elements._32_8_ = 0;
    local_178.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    pTVar6 = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
             TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>(&local_d0,&local_178);
    pUVar7 = FAssetData::FastGetAsset(&local_80,true,pTVar6);
    local_178._72_8_ = local_178._72_8_ & 0xffffffff00000000;
    if (local_178.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_178.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_178.Elements);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnAccessAsset,
               &local_e8);
    if (*(int *)&(this->OnAccessAsset).field_0x10 != 0) {
      plVar9 = *(longlong **)&(this->OnAccessAsset).field_0x8;
    }
    (**(code **)(*plVar9 + 0x60))(plVar9,pUVar7);
    this_00 = &local_e8;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (this_00);
LAB_142eb0851:
  if (local_80.ChunkIDs.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
    FMemory::Free((void *)local_80.ChunkIDs.AllocatorInstance.SecondaryData);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_80.TaggedAssetBundles.SharedReferenceCount.ReferenceController);
  FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView(&local_80.TagsAndValues);
  return;
}

