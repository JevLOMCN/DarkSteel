// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DrawPrimitiveDebugger
// Functions: 6

// ~SDrawPrimitiveDebuggerListViewRow @ 146d04b10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
SDrawPrimitiveDebuggerListViewRow::~SDrawPrimitiveDebuggerListViewRow
          (SDrawPrimitiveDebuggerListViewRow *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->DrawPrimitiveDebugger).WeakReferenceCount.ReferenceController;
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
            ((this->RowDataPtr).SharedReferenceCount.ReferenceController);
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
  STableRow<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>::
  ~STableRow<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>
            ((STableRow<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_> *)this);
  return;
}

// Construct @ 146d0c9b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
SDrawPrimitiveDebuggerListViewRow::Construct
          (SDrawPrimitiveDebuggerListViewRow *this,FArguments *param_1,
          TSharedRef<STableViewBase,1> *param_2)

{
  FArguments *pFVar1;
  FArguments local_308;
  
  TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::operator=
            (&this->RowDataPtr,&param_1->_RowDataPtr);
  TWeakPtr<SDrawPrimitiveDebugger,1>::operator=
            (&this->DrawPrimitiveDebugger,&param_1->_DrawPrimitiveDebugger);
  pFVar1 = STableRow<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>::FArguments::FArguments
                     (&local_308);
  SMultiColumnTableRow<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>::Construct
            ((SMultiColumnTableRow<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_> *)this,
             pFVar1,param_2);
  STableRow<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>::FArguments::~FArguments
            (&local_308);
  return;
}

// GenerateWidgetForColumn @ 146d1a950

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
SDrawPrimitiveDebuggerListViewRow::GenerateWidgetForColumn
          (SDrawPrimitiveDebuggerListViewRow *this,TSharedRef<SWidget,1> *__return_storage_ptr__,
          FName *param_1)

{
  TSharedRef<SWidget,1> *local_58;
  TSharedPtr<SDrawPrimitiveDebugger,1> local_40;
  TSharedRef<SWidget,1> local_30;
  TSharedRef<SWidget,1> local_20 [2];
  
  TSharedPtr<SDrawPrimitiveDebugger,1>::TSharedPtr<SDrawPrimitiveDebugger,1><SDrawPrimitiveDebugger>
            (&local_40,&this->DrawPrimitiveDebugger);
  if (local_40.Object == (SDrawPrimitiveDebugger *)0x0) {
    local_58 = TSharedRef<SWidget,1>::TSharedRef<SWidget,1>(&local_30,&SNullWidget::NullWidget);
  }
  else {
    local_58 = MakeCellWidget(this,local_20,(int)this->_padding_,param_1);
  }
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1>(__return_storage_ptr__,local_58);
  if (local_40.Object == (SDrawPrimitiveDebugger *)0x0) {
    TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_30);
  }
  else {
    TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(local_20);
  }
  TSharedPtr<SDrawPrimitiveDebugger,1>::~TSharedPtr<SDrawPrimitiveDebugger,1>(&local_40);
  return __return_storage_ptr__;
}

// IsPinned @ 146d241f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

ECheckBoxState __thiscall
SDrawPrimitiveDebuggerListViewRow::IsPinned(SDrawPrimitiveDebuggerListViewRow *this)

{
  bool bVar1;
  TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> *pTVar2;
  TSharedPtr<SDrawPrimitiveDebugger,1> local_30;
  TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> local_20 [2];
  
  TSharedPtr<SDrawPrimitiveDebugger,1>::TSharedPtr<SDrawPrimitiveDebugger,1><SDrawPrimitiveDebugger>
            (&local_30,&this->DrawPrimitiveDebugger);
  TSharedPtr<SDrawPrimitiveDebugger,1>::~TSharedPtr<SDrawPrimitiveDebugger,1>(&local_30);
  if (local_30.Object != (SDrawPrimitiveDebugger *)0x0) {
    pTVar2 = TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::
             TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>(local_20,&this->RowDataPtr);
    bVar1 = SDrawPrimitiveDebugger::IsEntryPinned(local_30.Object,pTVar2);
    if (bVar1) {
      return Checked;
    }
  }
  return Unchecked;
}

// IsVisible @ 146d24880

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

ECheckBoxState __thiscall
SDrawPrimitiveDebuggerListViewRow::IsVisible(SDrawPrimitiveDebuggerListViewRow *this)

{
  bool bVar1;
  TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> *pTVar2;
  TSharedPtr<SDrawPrimitiveDebugger,1> local_30;
  TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> local_20 [2];
  
  TSharedPtr<SDrawPrimitiveDebugger,1>::TSharedPtr<SDrawPrimitiveDebugger,1><SDrawPrimitiveDebugger>
            (&local_30,&this->DrawPrimitiveDebugger);
  TSharedPtr<SDrawPrimitiveDebugger,1>::~TSharedPtr<SDrawPrimitiveDebugger,1>(&local_30);
  if (local_30.Object != (SDrawPrimitiveDebugger *)0x0) {
    pTVar2 = TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::
             TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>(local_20,&this->RowDataPtr);
    bVar1 = SDrawPrimitiveDebugger::IsEntryVisible(local_30.Object,pTVar2);
    if (bVar1) {
      return Checked;
    }
  }
  return Unchecked;
}

// MakeCellWidget @ 146d24b00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Removing unreachable block (ram,0x000146d24dc3) */
/* WARNING: Removing unreachable block (ram,0x000146d250da) */
/* WARNING: Removing unreachable block (ram,0x000146d25696) */
/* WARNING: Removing unreachable block (ram,0x000146d25c52) */
/* WARNING: Removing unreachable block (ram,0x000146d25eed) */
/* WARNING: Removing unreachable block (ram,0x000146d263b3) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
SDrawPrimitiveDebuggerListViewRow::MakeCellWidget
          (SDrawPrimitiveDebuggerListViewRow *this,TSharedRef<SWidget,1> *__return_storage_ptr__,
          int param_1,FName *param_2)

{
  bool bVar1;
  bool bVar2;
  EStatFlags EVar3;
  bool bVar4;
  int iVar5;
  FSlateApplication *this_00;
  TSharedRef<FCompositeFont_const_,1> *pTVar6;
  TStatId TVar7;
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs> *pTVar8;
  TSharedRef<SCheckBox,1> *pTVar9;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> *pTVar10;
  TSharedRef<SBox,1> *pTVar11;
  FPrimitiveInfo *pFVar12;
  FText *pFVar13;
  FString *pFVar14;
  FSlateColor *pFVar15;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *this_01;
  TSharedRef<STextBlock,1> *pTVar16;
  longlong lVar17;
  code **ppcVar18;
  undefined1 *puVar19;
  undefined4 *puVar20;
  pmf_b4ea238d *ppVar21;
  undefined1 *puVar22;
  pmf_8bde18e5 *ppVar23;
  FSourceLocation *pFVar24;
  pmf_1afb456c *ppVar25;
  pmf_0141a4eb *ppVar26;
  T0RequiredArgs local_2407;
  T0RequiredArgs local_2406;
  undefined1 local_2405;
  char local_2403;
  EStatFlags local_2402;
  EStatFlags local_2401;
  T0RequiredArgs local_2400;
  T0RequiredArgs local_23ff;
  undefined1 local_23fe;
  char local_23fc;
  EStatFlags local_23fb;
  EStatFlags local_23fa;
  undefined1 local_23f9;
  char local_23f7;
  EStatFlags local_23f6;
  EStatFlags local_23f5;
  EStatFlags local_23f4;
  char local_23f3;
  undefined1 local_23f2;
  char local_23f0;
  undefined1 local_23ef;
  EStatFlags local_23ee;
  undefined1 local_23ed;
  T0RequiredArgs local_23ec;
  T0RequiredArgs local_23eb;
  EStatFlags local_23ea;
  undefined4 local_23e8;
  undefined4 local_23e4;
  undefined4 local_23e0;
  undefined4 local_23dc;
  undefined4 local_23d8;
  undefined4 local_23d4;
  SDrawPrimitiveDebugger *local_23d0;
  FName local_23c8;
  FText local_23c0;
  uint local_23b0;
  FNameEntryId local_23ac [3];
  uint local_23a0;
  uint local_239c;
  uint local_2398;
  FNameEntryId local_2394 [3];
  uint local_2388;
  uint local_2384;
  uint local_2380;
  FNameEntryId local_237c [3];
  uint local_2370;
  uint local_236c;
  uint local_2368;
  FNameEntryId local_2364 [3];
  uint local_2358;
  uint local_2354;
  uint local_2350;
  FNameEntryId local_234c [3];
  uint local_2340;
  uint local_2338;
  Type local_2330;
  uint local_232c;
  uint local_2328;
  FScopeCycleCounter local_2320;
  float local_2310;
  FNameEntryId *local_2308;
  UClass *local_2300;
  FText *local_22f8;
  FText *local_22f0;
  TSharedRef<FSlateFontMeasure,1> local_22e8;
  FNameEntryId *local_22d8;
  TSharedPtr<FCompositeFont_const_,1> *local_22d0;
  FFontOutlineSettings *local_22c8;
  TSharedPtr<FCompositeFont_const_,1> *local_22c0;
  TStatIdData *local_22b8;
  TStatIdData *local_22b0;
  TWeakPtr<SDrawPrimitiveDebugger,1> *local_22a8;
  SDrawPrimitiveDebugger *local_22a0;
  uint *local_2298;
  FNameEntryId *local_2290;
  TStatIdData *local_2278;
  TStatIdData *local_2270;
  TAttribute<FMargin> *local_2268;
  TAttribute<FMargin> *local_2260;
  FArguments *local_2258;
  FArguments *local_2250;
  FArguments *local_2248;
  TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> *local_2240;
  TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> *local_2238;
  FArguments *local_2230;
  FArguments *local_2228;
  FArguments *local_2220;
  FArguments *local_2218;
  FArguments *local_2210;
  uint *local_2208;
  FNameEntryId *local_2200;
  TStatIdData *local_21e8;
  TStatIdData *local_21e0;
  TAttribute<FMargin> *local_21d8;
  TAttribute<FMargin> *local_21d0;
  FArguments *local_21c8;
  FArguments *local_21c0;
  FArguments *local_21b8;
  TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> *local_21b0;
  TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> *local_21a8;
  FArguments *local_21a0;
  FArguments *local_2198;
  FArguments *local_2190;
  FArguments *local_2188;
  FArguments *local_2180;
  uint *local_2178;
  FNameEntryId *local_2170;
  TStatIdData *local_2158;
  TStatIdData *local_2150;
  uint *local_2148;
  FNameEntryId *local_2140;
  TStatIdData *local_2128;
  TStatIdData *local_2120;
  FPrimitiveInfo *local_2118;
  FPrimitiveInfo *local_2110;
  UObject *local_2108;
  UObject *local_2100;
  UClass *local_20f8;
  FPrimitiveInfo *local_20f0;
  UObject *local_20e8;
  UObject *local_20e0;
  UClass *local_20d8;
  UClass *local_20d0;
  FName local_20c8;
  FName *local_20c0;
  FText *local_20b8;
  uint *local_20b0;
  FNameEntryId *local_20a8;
  TStatIdData *local_2090;
  TStatIdData *local_2088;
  FPrimitiveInfo *local_2080;
  FPrimitiveInfo *local_2078;
  FText *local_2070;
  TAttribute<FMargin> *local_2068;
  TAttribute<FMargin> *local_2060;
  FArguments *local_2058;
  FArguments *local_2050;
  TAttribute<FSlateColor> *local_2048;
  TAttribute<FSlateColor> *local_2040;
  FArguments *local_2038;
  TAttribute<FText> *local_2030;
  TAttribute<FText> *local_2028;
  FArguments *local_2020;
  TAttribute<FText> *local_2018;
  TAttribute<FText> *local_2010;
  FArguments *local_2008;
  TAttribute<FSlateFontInfo> *local_2000;
  TAttribute<FSlateFontInfo> *local_1ff8;
  FArguments *local_1ff0;
  TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> *local_1fe8;
  TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> *local_1fe0;
  FArguments *local_1fd8;
  undefined1 *local_1fd0;
  TAttribute<ETextJustify::Type> *local_1fc8;
  FArguments *local_1fc0;
  FArguments *local_1fb8;
  FArguments *local_1fb0;
  FArguments *local_1fa8;
  FArguments *local_1fa0;
  FNameEntryId local_1f98 [2];
  FSlateRenderer *local_1f90;
  undefined4 local_1f88;
  undefined4 local_1f84;
  char *local_1f80;
  char *local_1f78;
  undefined4 local_1f70;
  undefined4 local_1f6c;
  char *local_1f68;
  char *local_1f60;
  undefined4 local_1f58;
  undefined4 local_1f54;
  char *local_1f50;
  char *local_1f48;
  undefined4 local_1f40;
  undefined4 local_1f3c;
  char *local_1f38;
  char *local_1f30;
  undefined4 local_1f28;
  undefined4 local_1f24;
  char *local_1f20;
  char *local_1f18;
  undefined4 local_1f10;
  undefined4 local_1f0c;
  char *local_1f08;
  char *local_1f00;
  code *local_1ef8;
  undefined4 local_1ef0;
  code *local_1ee8;
  undefined4 local_1ee0;
  TSharedRef<SWidget,1> local_1ed8;
  FString local_1ec8;
  TSharedRef<SWidget,1> local_1eb8;
  code *local_1ea8;
  undefined4 local_1ea0;
  code *local_1e98;
  undefined4 local_1e90;
  TSharedPtr<SDrawPrimitiveDebugger,1> local_1e88;
  TSharedRef<SWidget,1> local_1e78;
  code *local_1e68;
  undefined4 local_1e60;
  code *local_1e58;
  undefined4 local_1e50;
  FScopeCycleCounter local_1e48;
  FScopeCycleCounter local_1e38;
  FScopeCycleCounter local_1e28;
  FScopeCycleCounter local_1e18;
  FScopeCycleCounter local_1e08;
  TSharedRef<FCompositeFont_const_,1> local_1df8;
  undefined1 local_1de8 [16];
  pmf_b4ea238d local_1dd8;
  undefined1 local_1dc8 [16];
  undefined1 local_1db8 [16];
  pmf_8bde18e5 local_1da8;
  TSharedRef<SBox,1> local_1d98;
  TSharedRef<SCheckBox,1> local_1d88;
  undefined1 local_1d78 [16];
  pmf_b4ea238d local_1d68;
  undefined1 local_1d58 [16];
  undefined1 local_1d48 [16];
  pmf_8bde18e5 local_1d38;
  TSharedRef<SBox,1> local_1d28;
  TSharedRef<SCheckBox,1> local_1d18;
  FText local_1d08;
  FText local_1cf8;
  FText local_1ce8;
  FText local_1cd8;
  FString local_1cc0;
  undefined1 local_1cb0 [16];
  undefined1 local_1ca0 [24];
  pmf_1afb456c local_1c88;
  undefined1 local_1c78 [16];
  pmf_0141a4eb local_1c68;
  FText local_1c58;
  TSharedRef<STextBlock,1> local_1c48 [3];
  TSharedRef<SBox,1> local_1c10;
  undefined1 local_1c00 [24];
  undefined1 local_1be8 [32];
  FSourceLocation local_1bc8;
  undefined1 local_1ba8 [24];
  undefined1 local_1b90 [24];
  FSourceLocation local_1b78;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_1b58;
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs> local_1b40;
  undefined1 local_1b28 [24];
  undefined1 local_1b10 [24];
  FSourceLocation local_1af8;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_1ad8;
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs> local_1ac0;
  undefined1 local_1aa8 [24];
  undefined1 local_1a90 [24];
  FSourceLocation local_1a78;
  undefined1 local_1a58 [24];
  undefined1 local_1a40 [24];
  FSourceLocation local_1a28;
  undefined1 local_1a08 [24];
  undefined1 local_19f0 [24];
  FSourceLocation local_19d8;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_19b8;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_19a0;
  FSlateFontInfo local_1988;
  TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> local_1928;
  TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> local_1918;
  TSharedPtr<FCompositeFont_const_,1> local_1908;
  TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> local_18f8;
  FSlateColor local_18e8;
  FFontOutlineSettings local_18d0;
  undefined1 local_18b0 [32];
  TAttribute<FMargin> local_1890;
  TAttribute<FMargin> local_1860;
  TAttribute<FMargin> local_1830;
  TAttribute<FSlateColor> local_1800;
  TAttribute<FText> local_17d0;
  TAttribute<FText> local_17a0;
  TAttribute<FSlateFontInfo> local_1770;
  FArguments local_16f0;
  FArguments local_13b0;
  FArguments local_1070;
  FArguments local_d30;
  FArguments local_950;
  FArguments local_570;
  undefined8 uStack_18;
  
  uStack_18 = 0x146d24b20;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&VisibilityColumn,"Visible");
    _Init_thread_footer(&::_TSS0);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    ::FName::FName(&PinColumn,"Pin");
    _Init_thread_footer(&::_TSS1);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
    ::FName::FName(&NameColumn,"Name");
    _Init_thread_footer(&::_TSS2);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS3) && (_Init_thread_header(&::_TSS3), ::_TSS3 == -1)) {
    ::FName::FName(&ActorClassColumn,"ActorClass");
    _Init_thread_footer(&::_TSS3);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS4) && (_Init_thread_header(&::_TSS4), ::_TSS4 == -1)) {
    ::FName::FName(&ActorColumn,"Actor");
    _Init_thread_footer(&::_TSS4);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS5) && (_Init_thread_header(&::_TSS5), ::_TSS5 == -1)) {
    FMargin::FMargin(&Margin,__real_4014000000000000,__real_4000000000000000,__real_4014000000000000
                     ,__real_4000000000000000);
    _Init_thread_footer(&::_TSS5);
  }
  this_00 = FSlateApplication::Get();
  local_1f90 = FSlateApplicationBase::GetRenderer((FSlateApplicationBase *)this_00);
  FSlateRenderer::GetFontMeasureService(local_1f90,&local_22e8);
  local_22c8 = FFontOutlineSettings::FFontOutlineSettings(&local_18d0);
  local_2308 = FNameEntryId::FNameEntryId(local_1f98);
  local_2338 = local_2308->Value;
  local_232c = local_2338;
  local_22d8 = local_2308;
  FNameEntryId::FNameEntryId(&local_23c8.ComparisonIndex);
  local_23c8.ComparisonIndex.Value = local_2338;
  local_23c8.Number = 0;
  iVar5 = UDrawPrimitiveDebuggerUserSettings::GetFontSize();
  local_2310 = (float)iVar5;
  local_22d0 = &local_1908;
  pTVar6 = FCoreStyle::GetDefaultFont(&local_1df8);
  local_22c0 = TSharedPtr<FCompositeFont_const_,1>::
               TSharedPtr<FCompositeFont_const_,1><FCompositeFont_const_>(local_22d0,pTVar6);
  FSlateFontInfo::FSlateFontInfo(&local_1988,local_22c0,local_2310,&local_23c8,local_22c8);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_1df8.SharedReferenceCount);
  local_1f70 = 0x75d;
  local_1f6c = 2;
  local_1f68 = 
  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\DrawPrimitiveDebugger\\Private\\SDrawPrimitiveDebugger.cpp"
  ;
  local_1f60 = 
  "class TSharedRef<class SWidget,1> __cdecl SDrawPrimitiveDebuggerListViewRow::MakeCellWidget(const int,const class FName &)"
  ;
  puVar20 = &local_1f70;
  puVar19 = local_1be8;
  for (lVar17 = 0x18; lVar17 != 0; lVar17 = lVar17 + -1) {
    *puVar19 = *(undefined1 *)puVar20;
    puVar20 = (undefined4 *)((longlong)puVar20 + 1);
    puVar19 = puVar19 + 1;
  }
  puVar19 = local_1be8;
  puVar22 = local_1c00;
  for (lVar17 = 0x18; lVar17 != 0; lVar17 = lVar17 + -1) {
    *puVar22 = *puVar19;
    puVar19 = puVar19 + 1;
    puVar22 = puVar22 + 1;
  }
  EVar3 = ::operator|(ClearEveryFrame,CycleStat);
  local_23f4 = EVar3;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_PrimitiveDebuggerMakeCell,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_PrimitiveDebuggerMakeCell,1> *)
                     &StatPtr_STAT_PrimitiveDebuggerMakeCell);
  local_22b8 = *(TStatIdData **)&(TVar7.StatIdPtr)->Name;
  puVar19 = local_1c00;
  pFVar24 = &local_1bc8;
  for (lVar17 = 0x18; lVar17 != 0; lVar17 = lVar17 + -1) {
    *(undefined1 *)&(pFVar24->Impl)._Line = *puVar19;
    puVar19 = puVar19 + 1;
    pFVar24 = (FSourceLocation *)((longlong)&(pFVar24->Impl)._Line + 1);
  }
  local_22b0 = local_22b8;
  FScopeCycleCounter::FScopeCycleCounter(&local_2320,(TStatId)local_22b8,EVar3,false,&local_1bc8);
  local_22a8 = &this->DrawPrimitiveDebugger;
  TSharedPtr<SDrawPrimitiveDebugger,1>::TSharedPtr<SDrawPrimitiveDebugger,1><SDrawPrimitiveDebugger>
            (&local_1e88,local_22a8);
  local_22a0 = local_1e88.Object;
  local_23d0 = local_1e88.Object;
  TSharedPtr<SDrawPrimitiveDebugger,1>::~TSharedPtr<SDrawPrimitiveDebugger,1>(&local_1e88);
  if ((local_23d0 == (SDrawPrimitiveDebugger *)0x0) ||
     ((this->RowDataPtr).Object == (FPrimitiveInfo *)0x0)) {
    TSharedRef<SWidget,1>::TSharedRef<SWidget,1>(__return_storage_ptr__,&SNullWidget::NullWidget);
    FScopeCycleCounter::~FScopeCycleCounter(&local_2320);
    FSlateFontInfo::~FSlateFontInfo(&local_1988);
    TSharedRef<FSlateFontMeasure,1>::~TSharedRef<FSlateFontMeasure,1>(&local_22e8);
    return __return_storage_ptr__;
  }
  FText::FText(&local_23c0);
  local_23b0 = VisibilityColumn.ComparisonIndex.Value;
  local_2298 = &local_23b0;
  local_23ac[0].Value = (param_2->ComparisonIndex).Value;
  local_2290 = local_23ac;
  bVar4 = FNameEntryId::UEOpEquals(local_2290,VisibilityColumn.ComparisonIndex);
  if (bVar4) {
    local_23a0 = param_2->Number;
    local_239c = VisibilityColumn.Number;
    if (local_23a0 != VisibilityColumn.Number) goto LAB_146d25190;
    local_23e8 = 1;
  }
  else {
LAB_146d25190:
    local_23e8 = 0;
  }
  if ((char)local_23e8 != '\0') {
    local_1f58 = 0x764;
    local_1f54 = 4;
    local_1f50 = 
    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\DrawPrimitiveDebugger\\Private\\SDrawPrimitiveDebugger.cpp"
    ;
    local_1f48 = 
    "class TSharedRef<class SWidget,1> __cdecl SDrawPrimitiveDebuggerListViewRow::MakeCellWidget(const int,const class FName &)"
    ;
    puVar20 = &local_1f58;
    puVar19 = local_1ba8;
    for (lVar17 = 0x18; lVar17 != 0; lVar17 = lVar17 + -1) {
      *puVar19 = *(undefined1 *)puVar20;
      puVar20 = (undefined4 *)((longlong)puVar20 + 1);
      puVar19 = puVar19 + 1;
    }
    puVar19 = local_1ba8;
    puVar22 = local_1b90;
    for (lVar17 = 0x18; lVar17 != 0; lVar17 = lVar17 + -1) {
      *puVar22 = *puVar19;
      puVar19 = puVar19 + 1;
      puVar22 = puVar22 + 1;
    }
    EVar3 = ::operator|(ClearEveryFrame,CycleStat);
    TVar7 = FThreadSafeStaticStatInner<FStat_STAT_PrimitiveDebuggerMakeCellVisible,1>::GetStatId
                      ((FThreadSafeStaticStatInner<FStat_STAT_PrimitiveDebuggerMakeCellVisible,1> *)
                       &StatPtr_STAT_PrimitiveDebuggerMakeCellVisible);
    local_2278 = *(TStatIdData **)&(TVar7.StatIdPtr)->Name;
    puVar19 = local_1b90;
    pFVar24 = &local_1b78;
    for (lVar17 = 0x18; lVar17 != 0; lVar17 = lVar17 + -1) {
      *(undefined1 *)&(pFVar24->Impl)._Line = *puVar19;
      puVar19 = puVar19 + 1;
      pFVar24 = (FSourceLocation *)((longlong)&(pFVar24->Impl)._Line + 1);
    }
    local_2270 = local_2278;
    FScopeCycleCounter::FScopeCycleCounter(&local_1e48,(TStatId)local_2278,EVar3,false,&local_1b78);
    local_2258 = SBox::FArguments::FArguments(&local_16f0);
    local_2268 = &local_1890;
    local_2260 = TAttribute<FMargin>::TAttribute<FMargin><FMargin>(local_2268,&Margin);
    local_2250 = SBox::FArguments::Padding(local_2258,local_2260);
    local_2218 = SBox::FArguments::HAlign(local_2250,HAlign_Center);
    local_2248 = SCheckBox::FArguments::FArguments(&local_d30);
    local_1ef8 = IsVisible;
    local_1ef0 = 0;
    ppcVar18 = &local_1ef8;
    puVar19 = local_1de8;
    for (lVar17 = 0x10; lVar17 != 0; lVar17 = lVar17 + -1) {
      *puVar19 = *(undefined1 *)ppcVar18;
      ppcVar18 = (code **)((longlong)ppcVar18 + 1);
      puVar19 = puVar19 + 1;
    }
    puVar19 = local_1de8;
    ppVar21 = &local_1dd8;
    for (lVar17 = 0x10; lVar17 != 0; lVar17 = lVar17 + -1) {
      *(undefined1 *)ppVar21 = *puVar19;
      puVar19 = puVar19 + 1;
      ppVar21 = (pmf_b4ea238d *)&ppVar21->field_0x1;
    }
    local_2230 = SCheckBox::FArguments::IsChecked<SDrawPrimitiveDebuggerListViewRow>
                           (local_2248,this,&local_1dd8);
    local_2240 = &local_18f8;
    local_2238 = TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::
                 TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>(local_2240,&this->RowDataPtr);
    local_1e68 = SDrawPrimitiveDebugger::OnChangeEntryVisibility;
    local_1e60 = 0;
    ppcVar18 = &local_1e68;
    puVar19 = local_1dc8;
    for (lVar17 = 0x10; lVar17 != 0; lVar17 = lVar17 + -1) {
      *puVar19 = *(undefined1 *)ppcVar18;
      ppcVar18 = (code **)((longlong)ppcVar18 + 1);
      puVar19 = puVar19 + 1;
    }
    puVar19 = local_1dc8;
    puVar22 = local_1db8;
    for (lVar17 = 0x10; lVar17 != 0; lVar17 = lVar17 + -1) {
      *puVar22 = *puVar19;
      puVar19 = puVar19 + 1;
      puVar22 = puVar22 + 1;
    }
    puVar19 = local_1db8;
    ppVar23 = &local_1da8;
    for (lVar17 = 0x10; lVar17 != 0; lVar17 = lVar17 + -1) {
      *(undefined1 *)ppVar23 = *puVar19;
      puVar19 = puVar19 + 1;
      ppVar23 = (pmf_8bde18e5 *)&ppVar23->field_0x1;
    }
    local_2228 = SCheckBox::FArguments::
                 OnCheckStateChanged<SDrawPrimitiveDebugger,TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>
                           (local_2230,local_23d0,&local_1da8,local_2238);
    local_2220 = SCheckBox::FArguments::HAlign(local_2228,HAlign_Center);
    RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_2407);
    pTVar8 = MakeTDecl<SCheckBox,RequiredArgs::T0RequiredArgs>
                       (&local_1b40,"SCheckBox",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\DrawPrimitiveDebugger\\Private\\SDrawPrimitiveDebugger.cpp"
                        ,0x769,&local_2407);
    pTVar9 = TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>::operator<<=
                       (pTVar8,&local_1d88,local_2220);
    TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SCheckBox>(&local_1eb8,pTVar9);
    local_2210 = SBox::FArguments::operator[](local_2218,&local_1eb8);
    RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_2406);
    pTVar10 = MakeTDecl<SBox,RequiredArgs::T0RequiredArgs>
                        (&local_1b58,"SBox",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\DrawPrimitiveDebugger\\Private\\SDrawPrimitiveDebugger.cpp"
                         ,0x765,&local_2406);
    pTVar11 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                        (pTVar10,&local_1d98,local_2210);
    TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBox>(__return_storage_ptr__,pTVar11);
    SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
              (&local_1d98.SharedReferenceCount);
    TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::~TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
              (&local_1b58);
    TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_1eb8);
    SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
              (&local_1d88.SharedReferenceCount);
    TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>::
    ~TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>(&local_1b40);
    SCheckBox::FArguments::~FArguments(&local_d30);
    SBox::FArguments::~FArguments(&local_16f0);
    FScopeCycleCounter::~FScopeCycleCounter(&local_1e48);
    FText::~FText(&local_23c0);
    FScopeCycleCounter::~FScopeCycleCounter(&local_2320);
    FSlateFontInfo::~FSlateFontInfo(&local_1988);
    TSharedRef<FSlateFontMeasure,1>::~TSharedRef<FSlateFontMeasure,1>(&local_22e8);
    return __return_storage_ptr__;
  }
  local_2398 = PinColumn.ComparisonIndex.Value;
  local_2208 = &local_2398;
  local_2394[0].Value = (param_2->ComparisonIndex).Value;
  local_2200 = local_2394;
  local_2405 = FNameEntryId::UEOpEquals(local_2200,PinColumn.ComparisonIndex);
  if ((bool)local_2405) {
    local_2388 = param_2->Number;
    local_2384 = PinColumn.Number;
    if (local_2388 != PinColumn.Number) goto LAB_146d2574c;
    local_23e4 = 1;
  }
  else {
LAB_146d2574c:
    local_23e4 = 0;
  }
  local_2403 = (char)local_23e4;
  if ((char)local_23e4 != '\0') {
    local_1f40 = 0x771;
    local_1f3c = 4;
    local_1f38 = 
    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\DrawPrimitiveDebugger\\Private\\SDrawPrimitiveDebugger.cpp"
    ;
    local_1f30 = 
    "class TSharedRef<class SWidget,1> __cdecl SDrawPrimitiveDebuggerListViewRow::MakeCellWidget(const int,const class FName &)"
    ;
    puVar20 = &local_1f40;
    puVar19 = local_1b28;
    for (lVar17 = 0x18; lVar17 != 0; lVar17 = lVar17 + -1) {
      *puVar19 = *(undefined1 *)puVar20;
      puVar20 = (undefined4 *)((longlong)puVar20 + 1);
      puVar19 = puVar19 + 1;
    }
    puVar19 = local_1b28;
    puVar22 = local_1b10;
    for (lVar17 = 0x18; lVar17 != 0; lVar17 = lVar17 + -1) {
      *puVar22 = *puVar19;
      puVar19 = puVar19 + 1;
      puVar22 = puVar22 + 1;
    }
    local_2402 = ::operator|(ClearEveryFrame,CycleStat);
    local_2401 = local_2402;
    TVar7 = FThreadSafeStaticStatInner<FStat_STAT_PrimitiveDebuggerMakeCellPinned,1>::GetStatId
                      ((FThreadSafeStaticStatInner<FStat_STAT_PrimitiveDebuggerMakeCellPinned,1> *)
                       &StatPtr_STAT_PrimitiveDebuggerMakeCellPinned);
    local_21e8 = *(TStatIdData **)&(TVar7.StatIdPtr)->Name;
    puVar19 = local_1b10;
    pFVar24 = &local_1af8;
    for (lVar17 = 0x18; lVar17 != 0; lVar17 = lVar17 + -1) {
      *(undefined1 *)&(pFVar24->Impl)._Line = *puVar19;
      puVar19 = puVar19 + 1;
      pFVar24 = (FSourceLocation *)((longlong)&(pFVar24->Impl)._Line + 1);
    }
    local_21e0 = local_21e8;
    FScopeCycleCounter::FScopeCycleCounter
              (&local_1e38,(TStatId)local_21e8,local_2401,false,&local_1af8);
    local_21c8 = SBox::FArguments::FArguments(&local_13b0);
    local_21d8 = &local_1860;
    local_21d0 = TAttribute<FMargin>::TAttribute<FMargin><FMargin>(local_21d8,&Margin);
    local_21c0 = SBox::FArguments::Padding(local_21c8,local_21d0);
    local_2188 = SBox::FArguments::HAlign(local_21c0,HAlign_Center);
    local_21b8 = SCheckBox::FArguments::FArguments(&local_950);
    local_1e58 = IsPinned;
    local_1e50 = 0;
    ppcVar18 = &local_1e58;
    puVar19 = local_1d78;
    for (lVar17 = 0x10; lVar17 != 0; lVar17 = lVar17 + -1) {
      *puVar19 = *(undefined1 *)ppcVar18;
      ppcVar18 = (code **)((longlong)ppcVar18 + 1);
      puVar19 = puVar19 + 1;
    }
    puVar19 = local_1d78;
    ppVar21 = &local_1d68;
    for (lVar17 = 0x10; lVar17 != 0; lVar17 = lVar17 + -1) {
      *(undefined1 *)ppVar21 = *puVar19;
      puVar19 = puVar19 + 1;
      ppVar21 = (pmf_b4ea238d *)&ppVar21->field_0x1;
    }
    local_21a0 = SCheckBox::FArguments::IsChecked<SDrawPrimitiveDebuggerListViewRow>
                           (local_21b8,this,&local_1d68);
    local_21b0 = &local_1928;
    local_21a8 = TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::
                 TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>(local_21b0,&this->RowDataPtr);
    local_1ee8 = SDrawPrimitiveDebugger::OnChangeEntryPinned;
    local_1ee0 = 0;
    ppcVar18 = &local_1ee8;
    puVar19 = local_1d58;
    for (lVar17 = 0x10; lVar17 != 0; lVar17 = lVar17 + -1) {
      *puVar19 = *(undefined1 *)ppcVar18;
      ppcVar18 = (code **)((longlong)ppcVar18 + 1);
      puVar19 = puVar19 + 1;
    }
    puVar19 = local_1d58;
    puVar22 = local_1d48;
    for (lVar17 = 0x10; lVar17 != 0; lVar17 = lVar17 + -1) {
      *puVar22 = *puVar19;
      puVar19 = puVar19 + 1;
      puVar22 = puVar22 + 1;
    }
    puVar19 = local_1d48;
    ppVar23 = &local_1d38;
    for (lVar17 = 0x10; lVar17 != 0; lVar17 = lVar17 + -1) {
      *(undefined1 *)ppVar23 = *puVar19;
      puVar19 = puVar19 + 1;
      ppVar23 = (pmf_8bde18e5 *)&ppVar23->field_0x1;
    }
    local_2198 = SCheckBox::FArguments::
                 OnCheckStateChanged<SDrawPrimitiveDebugger,TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>
                           (local_21a0,local_23d0,&local_1d38,local_21a8);
    local_2190 = SCheckBox::FArguments::HAlign(local_2198,HAlign_Center);
    RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_2400);
    pTVar8 = MakeTDecl<SCheckBox,RequiredArgs::T0RequiredArgs>
                       (&local_1ac0,"SCheckBox",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\DrawPrimitiveDebugger\\Private\\SDrawPrimitiveDebugger.cpp"
                        ,0x776,&local_2400);
    pTVar9 = TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>::operator<<=
                       (pTVar8,&local_1d18,local_2190);
    TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SCheckBox>(&local_1ed8,pTVar9);
    local_2180 = SBox::FArguments::operator[](local_2188,&local_1ed8);
    RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_23ff);
    pTVar10 = MakeTDecl<SBox,RequiredArgs::T0RequiredArgs>
                        (&local_1ad8,"SBox",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\DrawPrimitiveDebugger\\Private\\SDrawPrimitiveDebugger.cpp"
                         ,0x772,&local_23ff);
    pTVar11 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                        (pTVar10,&local_1d28,local_2180);
    TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBox>(__return_storage_ptr__,pTVar11);
    SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
              (&local_1d28.SharedReferenceCount);
    TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::~TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
              (&local_1ad8);
    TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_1ed8);
    SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
              (&local_1d18.SharedReferenceCount);
    TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>::
    ~TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>(&local_1ac0);
    SCheckBox::FArguments::~FArguments(&local_950);
    SBox::FArguments::~FArguments(&local_13b0);
    FScopeCycleCounter::~FScopeCycleCounter(&local_1e38);
    FText::~FText(&local_23c0);
    FScopeCycleCounter::~FScopeCycleCounter(&local_2320);
    FSlateFontInfo::~FSlateFontInfo(&local_1988);
    TSharedRef<FSlateFontMeasure,1>::~TSharedRef<FSlateFontMeasure,1>(&local_22e8);
    return __return_storage_ptr__;
  }
  local_2380 = NameColumn.ComparisonIndex.Value;
  local_2178 = &local_2380;
  local_237c[0].Value = (param_2->ComparisonIndex).Value;
  local_2170 = local_237c;
  local_23fe = FNameEntryId::UEOpEquals(local_2170,NameColumn.ComparisonIndex);
  if ((bool)local_23fe) {
    local_2370 = param_2->Number;
    local_236c = NameColumn.Number;
    if (local_2370 != NameColumn.Number) goto LAB_146d25d08;
    local_23e0 = 1;
  }
  else {
LAB_146d25d08:
    local_23e0 = 0;
  }
  local_23fc = (char)local_23e0;
  if ((char)local_23e0 != '\0') {
    local_1f28 = 0x77e;
    local_1f24 = 4;
    local_1f20 = 
    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\DrawPrimitiveDebugger\\Private\\SDrawPrimitiveDebugger.cpp"
    ;
    local_1f18 = 
    "class TSharedRef<class SWidget,1> __cdecl SDrawPrimitiveDebuggerListViewRow::MakeCellWidget(const int,const class FName &)"
    ;
    puVar20 = &local_1f28;
    puVar19 = local_1aa8;
    for (lVar17 = 0x18; lVar17 != 0; lVar17 = lVar17 + -1) {
      *puVar19 = *(undefined1 *)puVar20;
      puVar20 = (undefined4 *)((longlong)puVar20 + 1);
      puVar19 = puVar19 + 1;
    }
    puVar19 = local_1aa8;
    puVar22 = local_1a90;
    for (lVar17 = 0x18; lVar17 != 0; lVar17 = lVar17 + -1) {
      *puVar22 = *puVar19;
      puVar19 = puVar19 + 1;
      puVar22 = puVar22 + 1;
    }
    local_23fb = ::operator|(ClearEveryFrame,CycleStat);
    local_23fa = local_23fb;
    TVar7 = FThreadSafeStaticStatInner<FStat_STAT_PrimitiveDebuggerMakeCellName,1>::GetStatId
                      ((FThreadSafeStaticStatInner<FStat_STAT_PrimitiveDebuggerMakeCellName,1> *)
                       &StatPtr_STAT_PrimitiveDebuggerMakeCellName);
    local_2158 = *(TStatIdData **)&(TVar7.StatIdPtr)->Name;
    puVar19 = local_1a90;
    pFVar24 = &local_1a78;
    for (lVar17 = 0x18; lVar17 != 0; lVar17 = lVar17 + -1) {
      *(undefined1 *)&(pFVar24->Impl)._Line = *puVar19;
      puVar19 = puVar19 + 1;
      pFVar24 = (FSourceLocation *)((longlong)&(pFVar24->Impl)._Line + 1);
    }
    local_2150 = local_2158;
    FScopeCycleCounter::FScopeCycleCounter
              (&local_1e28,(TStatId)local_2158,local_23fa,false,&local_1a78);
    pFVar12 = TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::operator->(&this->RowDataPtr);
    pFVar13 = FText::FromString(&local_1d08,&pFVar12->Name);
    FText::operator=(&local_23c0,pFVar13);
    FText::~FText(&local_1d08);
    FScopeCycleCounter::~FScopeCycleCounter(&local_1e28);
    goto LAB_146d26720;
  }
  local_2368 = ActorClassColumn.ComparisonIndex.Value;
  local_2148 = &local_2368;
  local_2364[0].Value = (param_2->ComparisonIndex).Value;
  local_2140 = local_2364;
  local_23f9 = FNameEntryId::UEOpEquals(local_2140,ActorClassColumn.ComparisonIndex);
  if ((bool)local_23f9) {
    local_2358 = param_2->Number;
    local_2354 = ActorClassColumn.Number;
    if (local_2358 != ActorClassColumn.Number) goto LAB_146d25fa3;
    local_23dc = 1;
  }
  else {
LAB_146d25fa3:
    local_23dc = 0;
  }
  local_23f7 = (char)local_23dc;
  if ((char)local_23dc == '\0') {
    local_2350 = ActorColumn.ComparisonIndex.Value;
    local_20b0 = &local_2350;
    local_234c[0].Value = (param_2->ComparisonIndex).Value;
    local_20a8 = local_234c;
    local_23f2 = FNameEntryId::UEOpEquals(local_20a8,ActorColumn.ComparisonIndex);
    if ((bool)local_23f2) {
      local_2340 = param_2->Number;
      local_2328 = ActorColumn.Number;
      if (local_2340 != ActorColumn.Number) goto LAB_146d26469;
      local_23d4 = 1;
    }
    else {
LAB_146d26469:
      local_23d4 = 0;
    }
    local_23f0 = (char)local_23d4;
    if ((char)local_23d4 == '\0') {
      TSharedRef<SWidget,1>::TSharedRef<SWidget,1>(__return_storage_ptr__,&SNullWidget::NullWidget);
      FText::~FText(&local_23c0);
      FScopeCycleCounter::~FScopeCycleCounter(&local_2320);
      FSlateFontInfo::~FSlateFontInfo(&local_1988);
      TSharedRef<FSlateFontMeasure,1>::~TSharedRef<FSlateFontMeasure,1>(&local_22e8);
      return __return_storage_ptr__;
    }
    local_1f88 = 0x78a;
    local_1f84 = 4;
    local_1f80 = 
    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\DrawPrimitiveDebugger\\Private\\SDrawPrimitiveDebugger.cpp"
    ;
    local_1f78 = 
    "class TSharedRef<class SWidget,1> __cdecl SDrawPrimitiveDebuggerListViewRow::MakeCellWidget(const int,const class FName &)"
    ;
    puVar20 = &local_1f88;
    puVar19 = local_1a08;
    for (lVar17 = 0x18; lVar17 != 0; lVar17 = lVar17 + -1) {
      *puVar19 = *(undefined1 *)puVar20;
      puVar20 = (undefined4 *)((longlong)puVar20 + 1);
      puVar19 = puVar19 + 1;
    }
    puVar19 = local_1a08;
    puVar22 = local_19f0;
    for (lVar17 = 0x18; lVar17 != 0; lVar17 = lVar17 + -1) {
      *puVar22 = *puVar19;
      puVar19 = puVar19 + 1;
      puVar22 = puVar22 + 1;
    }
    local_23ee = ::operator|(ClearEveryFrame,CycleStat);
    local_23ea = local_23ee;
    TVar7 = FThreadSafeStaticStatInner<FStat_STAT_PrimitiveDebuggerMakeCellActor,1>::GetStatId
                      ((FThreadSafeStaticStatInner<FStat_STAT_PrimitiveDebuggerMakeCellActor,1> *)
                       &StatPtr_STAT_PrimitiveDebuggerMakeCellActor);
    local_2090 = *(TStatIdData **)&(TVar7.StatIdPtr)->Name;
    puVar19 = local_19f0;
    pFVar24 = &local_19d8;
    for (lVar17 = 0x18; lVar17 != 0; lVar17 = lVar17 + -1) {
      *(undefined1 *)&(pFVar24->Impl)._Line = *puVar19;
      puVar19 = puVar19 + 1;
      pFVar24 = (FSourceLocation *)((longlong)&(pFVar24->Impl)._Line + 1);
    }
    local_2088 = local_2090;
    FScopeCycleCounter::FScopeCycleCounter
              (&local_1e18,(TStatId)local_2090,local_23ee,false,&local_19d8);
    local_2080 = TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::operator->(&this->RowDataPtr);
    local_23ed = FWeakObjectPtr::IsValid((FWeakObjectPtr *)local_2080);
    bVar4 = !(bool)local_23ed;
    if (bVar4) {
      local_22f0 = FText::FText(&local_1cd8,&InvalidTextValue);
    }
    else {
      local_2078 = TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::operator->
                             (&this->RowDataPtr);
      pFVar14 = FViewDebugInfo::FPrimitiveInfo::GetOwnerName(local_2078,&local_1cc0);
      local_22f0 = FText::FromString(&local_1c58,pFVar14);
    }
    local_2070 = local_22f0;
    FText::operator=(&local_23c0,local_22f0);
    if (bVar4) {
      FText::~FText(&local_1cd8);
    }
    else {
      FText::~FText(&local_1c58);
      ::FString::~FString(&local_1cc0);
    }
    FScopeCycleCounter::~FScopeCycleCounter(&local_1e18);
    goto LAB_146d26720;
  }
  local_1f10 = 0x783;
  local_1f0c = 4;
  local_1f08 = 
  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\DrawPrimitiveDebugger\\Private\\SDrawPrimitiveDebugger.cpp"
  ;
  local_1f00 = 
  "class TSharedRef<class SWidget,1> __cdecl SDrawPrimitiveDebuggerListViewRow::MakeCellWidget(const int,const class FName &)"
  ;
  puVar20 = &local_1f10;
  puVar19 = local_1a58;
  for (lVar17 = 0x18; lVar17 != 0; lVar17 = lVar17 + -1) {
    *puVar19 = *(undefined1 *)puVar20;
    puVar20 = (undefined4 *)((longlong)puVar20 + 1);
    puVar19 = puVar19 + 1;
  }
  puVar19 = local_1a58;
  puVar22 = local_1a40;
  for (lVar17 = 0x18; lVar17 != 0; lVar17 = lVar17 + -1) {
    *puVar22 = *puVar19;
    puVar19 = puVar19 + 1;
    puVar22 = puVar22 + 1;
  }
  local_23f6 = ::operator|(ClearEveryFrame,CycleStat);
  local_23f5 = local_23f6;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_PrimitiveDebuggerMakeCellActorClass,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_PrimitiveDebuggerMakeCellActorClass,1> *
                     )&StatPtr_STAT_PrimitiveDebuggerMakeCellActorClass);
  local_2128 = *(TStatIdData **)&(TVar7.StatIdPtr)->Name;
  puVar19 = local_1a40;
  pFVar24 = &local_1a28;
  for (lVar17 = 0x18; lVar17 != 0; lVar17 = lVar17 + -1) {
    *(undefined1 *)&(pFVar24->Impl)._Line = *puVar19;
    puVar19 = puVar19 + 1;
    pFVar24 = (FSourceLocation *)((longlong)&(pFVar24->Impl)._Line + 1);
  }
  local_2120 = local_2128;
  FScopeCycleCounter::FScopeCycleCounter
            (&local_1e08,(TStatId)local_2128,local_23f5,false,&local_1a28);
  local_2118 = TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::operator->(&this->RowDataPtr);
  local_23ef = FWeakObjectPtr::IsValid((FWeakObjectPtr *)local_2118);
  if ((bool)local_23ef) {
    local_2110 = TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::operator->(&this->RowDataPtr);
    local_2108 = FWeakObjectPtr::Get((FWeakObjectPtr *)local_2110);
    local_2100 = local_2108;
    local_2300 = ObjectPtr_Private::TNonAccessTrackedObjectPtr<UClass>::operator_UClass__
                           ((TNonAccessTrackedObjectPtr<UClass> *)&local_2108->field_0x10);
    local_20f8 = local_2300;
    if ((local_2300 == (UClass *)0x0) ||
       (bVar4 = FInternalUObjectBaseUtilityIsValidFlagsChecker::CheckObjectValidBasedOnItsFlags
                          ((UObject *)local_2300), !bVar4)) {
      local_23d8 = 0;
    }
    else {
      local_23d8 = 1;
    }
    local_23f3 = (char)local_23d8;
    if ((char)local_23d8 == '\0') goto LAB_146d26293;
    local_20f0 = TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::operator->(&this->RowDataPtr);
    local_20e8 = FWeakObjectPtr::Get((FWeakObjectPtr *)local_20f0);
    local_20e0 = local_20e8;
    local_20d8 = ObjectPtr_Private::TNonAccessTrackedObjectPtr<UClass>::operator_UClass__
                           ((TNonAccessTrackedObjectPtr<UClass> *)&local_20e8->field_0x10);
    bVar2 = true;
    bVar1 = false;
    bVar4 = true;
    local_20c8 = (FName)local_20d8->_padding_;
    local_20c0 = &local_20c8;
    local_20d0 = local_20d8;
    ::FName::ToString(local_20c0,&local_1ec8);
    local_22f8 = FText::FromString(&local_1ce8,&local_1ec8);
  }
  else {
LAB_146d26293:
    bVar2 = false;
    bVar1 = true;
    bVar4 = false;
    local_22f8 = FText::FText(&local_1cf8,&InvalidTextValue);
  }
  local_20b8 = local_22f8;
  FText::operator=(&local_23c0,local_22f8);
  if (bVar1) {
    FText::~FText(&local_1cf8);
  }
  if (bVar2) {
    FText::~FText(&local_1ce8);
  }
  if (bVar4) {
    ::FString::~FString(&local_1ec8);
  }
  FScopeCycleCounter::~FScopeCycleCounter(&local_1e08);
LAB_146d26720:
  local_2058 = SBox::FArguments::FArguments(&local_1070);
  local_2068 = &local_1830;
  local_2060 = TAttribute<FMargin>::TAttribute<FMargin><FMargin>(local_2068,&Margin);
  local_2050 = SBox::FArguments::Padding(local_2058,local_2060);
  local_1fa8 = SBox::FArguments::HAlign(local_2050,HAlign_Fill);
  local_2038 = STextBlock::FArguments::FArguments(&local_570);
  local_2048 = &local_1800;
  pFVar15 = FSlateColor::UseForeground(&local_18e8);
  local_2040 = TAttribute<FSlateColor>::TAttribute<FSlateColor>(local_2048,pFVar15);
  local_2020 = STextBlock::FArguments::ColorAndOpacity(local_2038,local_2040);
  local_2030 = &local_17d0;
  local_2028 = TAttribute<FText>::TAttribute<FText><FText>(local_2030,&local_23c0);
  local_2008 = STextBlock::FArguments::Text(local_2020,local_2028);
  local_2018 = &local_17a0;
  local_2010 = TAttribute<FText>::TAttribute<FText><FText>(local_2018,&local_23c0);
  local_1ff0 = TSlateBaseNamedArgs<STextBlock>::ToolTipText
                         ((TSlateBaseNamedArgs<STextBlock> *)local_2008,local_2010);
  local_2000 = &local_1770;
  local_1ff8 = TAttribute<FSlateFontInfo>::TAttribute<FSlateFontInfo><FSlateFontInfo>
                         (local_2000,&local_1988);
  local_1fd8 = STextBlock::FArguments::Font(local_1ff0,local_1ff8);
  local_1fe8 = &local_1918;
  local_1fe0 = TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::
               TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>(local_1fe8,&this->RowDataPtr);
  local_1ea8 = SDrawPrimitiveDebugger::IsEntryVisible;
  local_1ea0 = 0;
  ppcVar18 = &local_1ea8;
  puVar19 = local_1cb0;
  for (lVar17 = 0x10; lVar17 != 0; lVar17 = lVar17 + -1) {
    *puVar19 = *(undefined1 *)ppcVar18;
    ppcVar18 = (code **)((longlong)ppcVar18 + 1);
    puVar19 = puVar19 + 1;
  }
  puVar19 = local_1cb0;
  puVar22 = local_1ca0;
  for (lVar17 = 0x10; lVar17 != 0; lVar17 = lVar17 + -1) {
    *puVar22 = *puVar19;
    puVar19 = puVar19 + 1;
    puVar22 = puVar22 + 1;
  }
  puVar19 = local_1ca0;
  ppVar25 = &local_1c88;
  for (lVar17 = 0x10; lVar17 != 0; lVar17 = lVar17 + -1) {
    *(undefined1 *)ppVar25 = *puVar19;
    puVar19 = puVar19 + 1;
    ppVar25 = (pmf_1afb456c *)&ppVar25->field_0x1;
  }
  local_1fc0 = TSlateBaseNamedArgs<STextBlock>::
               IsEnabled<SDrawPrimitiveDebugger,TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>
                         ((TSlateBaseNamedArgs<STextBlock> *)local_1fd8,local_23d0,&local_1c88,
                          local_1fe0);
  local_1fd0 = local_18b0;
  local_2330 = Left;
  local_1fc8 = TAttribute<enum_ETextJustify::Type>::TAttribute<enum_ETextJustify::Type>
                         (local_1fd0,&local_2330);
  local_1fb8 = STextBlock::FArguments::Justification(local_1fc0,local_1fc8);
  local_1e98 = SDrawPrimitiveDebugger::GetFilterText;
  local_1e90 = 0;
  ppcVar18 = &local_1e98;
  puVar19 = local_1c78;
  for (lVar17 = 0x10; lVar17 != 0; lVar17 = lVar17 + -1) {
    *puVar19 = *(undefined1 *)ppcVar18;
    ppcVar18 = (code **)((longlong)ppcVar18 + 1);
    puVar19 = puVar19 + 1;
  }
  puVar19 = local_1c78;
  ppVar26 = &local_1c68;
  for (lVar17 = 0x10; lVar17 != 0; lVar17 = lVar17 + -1) {
    *(undefined1 *)ppVar26 = *puVar19;
    puVar19 = puVar19 + 1;
    ppVar26 = (pmf_0141a4eb *)&ppVar26->field_0x1;
  }
  local_1fb0 = STextBlock::FArguments::HighlightText<SDrawPrimitiveDebugger>
                         (local_1fb8,local_23d0,&local_1c68);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_23ec);
  this_01 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                      (&local_19a0,"STextBlock",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\DrawPrimitiveDebugger\\Private\\SDrawPrimitiveDebugger.cpp"
                       ,0x798,&local_23ec);
  pTVar16 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_01,local_1c48,local_1fb0);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_1e78,pTVar16);
  local_1fa0 = SBox::FArguments::operator[](local_1fa8,&local_1e78);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_23eb);
  pTVar10 = MakeTDecl<SBox,RequiredArgs::T0RequiredArgs>
                      (&local_19b8,"SBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\DrawPrimitiveDebugger\\Private\\SDrawPrimitiveDebugger.cpp"
                       ,0x794,&local_23eb);
  pTVar11 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar10,&local_1c10,local_1fa0);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBox>(__return_storage_ptr__,pTVar11);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_1c10.SharedReferenceCount);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::~TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_19b8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_1e78);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(local_1c48);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_19a0);
  STextBlock::FArguments::~FArguments(&local_570);
  SBox::FArguments::~FArguments(&local_1070);
  FText::~FText(&local_23c0);
  FScopeCycleCounter::~FScopeCycleCounter(&local_2320);
  FSlateFontInfo::~FSlateFontInfo(&local_1988);
  TSharedRef<FSlateFontMeasure,1>::~TSharedRef<FSlateFontMeasure,1>(&local_22e8);
  return __return_storage_ptr__;
}

