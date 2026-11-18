// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// Construct @ 14891fc80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall SVisualizeRTWidget::Construct(SVisualizeRTWidget *this,FArguments *param_1)

{
  byte *pbVar1;
  int *piVar2;
  longlong *this_00;
  TArray<TSharedPtr<FRTInfo,1>,TSizedDefaultAllocator<32>_> *pTVar3;
  SWidget *pSVar4;
  TSharedPtr<FRTInfo,1> *pTVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  float fVar10;
  SListView<TSharedPtr<FRTInfo,1>_> *pSVar11;
  FSharedReferencer<1> FVar12;
  SHeaderRow *pSVar13;
  FSharedReferencer<1> FVar14;
  bool bVar15;
  char cVar16;
  byte bVar17;
  uint uVar18;
  int iVar19;
  FArguments *pFVar20;
  undefined8 *puVar21;
  TSharedRef<SWidget,1> *pTVar22;
  ulong64 uVar23;
  FArguments *pFVar24;
  FText *pFVar25;
  FArguments *pFVar26;
  FRTInfo *pFVar27;
  FRTInfo *pFVar28;
  FRTInfo *pFVar29;
  wchar_t *_Str;
  FString *pFVar30;
  uint uVar31;
  TReferenceControllerBase<1> *pTVar32;
  undefined4 local_res8;
  undefined4 uStackX_c;
  T0RequiredArgs local_res18 [8];
  FLLMScope local_res20 [2];
  TSharedPtr<FRTInfo,1> local_3488;
  TSharedPtr<FRTInfo,1> local_3478;
  TArray<FString,TSizedDefaultAllocator<32>_> local_3468;
  FLLMScope local_3458 [2];
  TRawPtrProxy<FRTInfo> local_3450;
  undefined4 uStack_3448;
  undefined4 uStack_3444;
  FString local_3440;
  TSlateDecl<SListView<TSharedPtr<FRTInfo,1>_>,RequiredArgs::T0RequiredArgs> local_3430;
  TSlateDecl<SHeaderRow,RequiredArgs::T0RequiredArgs> local_3418;
  float local_3400;
  undefined1 local_33fc;
  undefined1 local_33f8 [8];
  void *pvStack_33f0;
  undefined8 local_33e8;
  float local_33e0;
  undefined1 local_33dc;
  undefined1 local_33d8 [8];
  void *pvStack_33d0;
  undefined8 local_33c8;
  float local_33c0;
  undefined1 local_33bc;
  undefined1 local_33b8 [8];
  void *pvStack_33b0;
  undefined8 local_33a8;
  float local_33a0;
  undefined1 local_339c;
  undefined1 local_3398 [8];
  void *pvStack_3390;
  undefined8 local_3388;
  float local_3380;
  undefined1 local_337c;
  undefined1 local_3378 [8];
  void *pvStack_3370;
  undefined8 local_3368;
  FName local_3360;
  FMemScope local_3358;
  FName local_3350;
  FMemScope local_3348;
  TRawPtrProxy<FRTInfo> local_3340;
  undefined8 local_3338;
  FSharedReferencer<1> FStack_3330;
  FText local_3328;
  TAttribute<float> local_3318;
  TAttribute<float> local_32f8;
  TAttribute<float> local_32d8;
  TAttribute<float> local_32b8;
  TSharedPtr<FRTInfo,1> local_3298;
  FDestructionSentinel local_3288;
  undefined1 *local_3270;
  FDestructionSentinel local_3268;
  undefined1 *local_3250;
  TAttribute<FText> local_3248;
  TAttribute<FText> local_3218;
  TAttribute<FText> local_31e8;
  TAttribute<FText> local_31b8;
  TAttribute<FText> local_3188;
  TAttribute<FText> local_3158;
  TAttribute<FText> local_3128;
  TAttribute<FText> local_30f8;
  TAttribute<FText> local_30c8;
  TSharedRef<SWidget,1> local_3098;
  TSharedRef<SWidget,1> local_3088;
  SHeaderRow *local_3078;
  TReferenceControllerBase<1> *pTStack_3070;
  longlong local_3068;
  TReferenceControllerBase<1> *pTStack_3060;
  FText local_3058;
  FText local_3048;
  FText local_3038;
  FText local_3028;
  FText local_3018;
  FText local_3008;
  FText local_2ff8;
  FText local_2fe8;
  undefined1 local_2fd8 [528];
  undefined1 local_2dc8 [24];
  undefined1 local_2db0 [40];
  ForAnyElementType local_2d88;
  undefined1 local_2d78 [24];
  FArguments local_2d60;
  FArguments local_28e8;
  FArguments local_2470;
  FArguments local_1ff8;
  FArguments local_1b80;
  FArguments local_1708;
  FArguments local_1290;
  FArguments local_e18;
  FArguments local_9a0;
  FArguments local_528;
  
  bVar9 = false;
  bVar8 = false;
  bVar15 = false;
  local_res8 = 0;
  pFVar20 = SListView<TSharedPtr<FRTInfo,1>_>::FArguments::FArguments(&local_528);
  local_3338 = 0;
  FStack_3330.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFVar20->_ListItemsSource_ArrayPointer =
       (TArray<TSharedPtr<FRTInfo,1>,TSizedDefaultAllocator<32>_> *)0x0;
  pFVar20->_ListItemsSource_ObservableArrayPointer = (TObservableArray<TSharedPtr<FRTInfo,1>_> *)0x0
  ;
  if (&pFVar20->_ListItemsSource_SharedObservableArray !=
      (TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<FRTInfo,1>_>,1> *)&local_3338)
  {
    (pFVar20->_ListItemsSource_SharedObservableArray).Object =
         (TObservableArray<TSharedPtr<FRTInfo,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(pFVar20->_ListItemsSource_SharedObservableArray).SharedReferenceCount,&FStack_3330)
    ;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_3330.ReferenceController);
  pFVar20->_ListItemsSource_ArrayPointer = &this->ListItems;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar20->_OnGenerateRow,
             (FWriteAccessScope *)&local_3288);
  local_3270 = &(pFVar20->_OnGenerateRow).field_0x8;
  puVar21 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_3270);
  if (puVar21 == (undefined8 *)0x0) {
    pTVar32 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
  }
  else {
    uStack_3444 = local_3328._12_4_;
    local_3450.Object = (FRTInfo *)OnGenerateWidgetForList;
    uStack_3448 = 0;
    pTVar22 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_3098);
    pTVar32 = (pTVar22->SharedReferenceCount).ReferenceController;
    pSVar4 = pTVar22->Object;
    if (pTVar32 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar32->SharedReferenceCount = (atomic<int>)((int)pTVar32->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar32->SharedReferenceCount = (atomic<int>)((int)pTVar32->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar21 = &
               ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VITableRow___00__V__TSharedPtr_UFRTInfo___00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar23 = FDelegateHandle::GenerateNewID();
    puVar21[2] = uVar23;
    *puVar21 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSVisualizeRTWidget___00__A6A_AV__TSharedRef_VITableRow___00__V__TSharedPtr_UFRTInfo___00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar21[3] = pSVar4;
    puVar21[4] = pTVar32;
    if (pTVar32 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar32->WeakReferenceCount = (atomic<int>)((int)pTVar32->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar9 = true;
    bVar8 = true;
    bVar15 = true;
    puVar21[5] = local_3450.Object;
    puVar21[6] = CONCAT44(uStack_3444,uStack_3448);
  }
  if (bVar15) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar32);
  }
  if (bVar8) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar32);
  }
  if (bVar9) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3098.SharedReferenceCount.ReferenceController);
  }
  bVar9 = false;
  bVar8 = false;
  bVar15 = false;
  if (local_3288.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3288.Accessor,&local_3288);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar20->_OnSelectionChanged
             ,(FWriteAccessScope *)&local_3268);
  local_3250 = &(pFVar20->_OnSelectionChanged).field_0x8;
  puVar21 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_3250);
  if (puVar21 == (undefined8 *)0x0) {
    pTVar32 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
  }
  else {
    uStack_3444 = local_3328._12_4_;
    local_3450.Object = (FRTInfo *)OnSelectionChanged;
    uStack_3448 = 0;
    pTVar22 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_3088);
    pTVar32 = (pTVar22->SharedReferenceCount).ReferenceController;
    pSVar4 = pTVar22->Object;
    if (pTVar32 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar32->SharedReferenceCount = (atomic<int>)((int)pTVar32->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar32->SharedReferenceCount = (atomic<int>)((int)pTVar32->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar9 = true;
    bVar8 = true;
    bVar15 = true;
    *puVar21 = &
               ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_UFRTInfo___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar23 = FDelegateHandle::GenerateNewID();
    puVar21[2] = uVar23;
    *puVar21 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSVisualizeRTWidget___00__A6AXV__TSharedPtr_UFRTInfo___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar21[3] = pSVar4;
    puVar21[4] = pTVar32;
    if (pTVar32 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar32->WeakReferenceCount = (atomic<int>)((int)pTVar32->WeakReferenceCount + 1);
      UNLOCK();
    }
    puVar21[5] = local_3450.Object;
    puVar21[6] = CONCAT44(uStack_3444,uStack_3448);
  }
  pFVar29 = (FRTInfo *)0x0;
  if (bVar15) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar32);
  }
  if (bVar8) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar32);
  }
  if (bVar9) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3088.SharedReferenceCount.ReferenceController);
  }
  if (local_3268.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3268.Accessor,&local_3268);
  }
  pFVar24 = SHeaderRow::FArguments::FArguments((FArguments *)local_2fd8);
  SHeaderRow::FColumn::FArguments::FArguments(&local_9a0);
  local_9a0._ColumnId = ColumnNumber;
  pFVar25 = FText::AsLocalizable_Advanced_LocText
                      (&local_3328,L"VisualizeRT",L"NumberColumnHeader",L"-");
  FText::FText(&local_31b8.Value,pFVar25);
  local_31b8.bIsSet = true;
  local_31b8.Getter._16_8_ = 0;
  local_31b8.Getter._0_8_ = 0;
  local_31b8.Getter._8_8_ = 0;
  pFVar26 = SHeaderRow::FColumn::FArguments::DefaultLabel(&local_9a0,&local_31b8);
  local_32d8.Value = 1.0;
  local_32d8.bIsSet = true;
  local_32d8.Getter._16_8_ = 0;
  local_32d8.Getter._0_8_ = 0;
  local_32d8.Getter._8_8_ = 0;
  pFVar26 = SHeaderRow::FColumn::FArguments::FillWidth(pFVar26,&local_32d8);
  pFVar24 = SHeaderRow::FArguments::operator+(pFVar24,pFVar26);
  SHeaderRow::FColumn::FArguments::FArguments(&local_e18);
  local_e18._ColumnId = ColumnName;
  pFVar25 = FText::AsLocalizable_Advanced_LocText
                      (&local_3018,L"VisualizeRT",L"NameColumnHeader",L"Name");
  FText::FText(&local_3188.Value,pFVar25);
  local_3188.bIsSet = true;
  local_3188.Getter._16_8_ = 0;
  local_3188.Getter._0_8_ = 0;
  local_3188.Getter._8_8_ = 0;
  pFVar26 = SHeaderRow::FColumn::FArguments::DefaultLabel(&local_e18,&local_3188);
  local_32b8.Value = 12.0;
  local_32b8.bIsSet = true;
  local_32b8.Getter._16_8_ = 0;
  local_32b8.Getter._0_8_ = 0;
  local_32b8.Getter._8_8_ = 0;
  pFVar26 = SHeaderRow::FColumn::FArguments::FillWidth(pFVar26,&local_32b8);
  pFVar24 = SHeaderRow::FArguments::operator+(pFVar24,pFVar26);
  SHeaderRow::FColumn::FArguments::FArguments(&local_1290);
  local_1290._ColumnId = ColumnWidth;
  pFVar25 = FText::AsLocalizable_Advanced_LocText
                      (&local_3008,L"VisualizeRT",L"WidthColumnHeader",L"Width");
  FText::FText(&local_3158.Value,pFVar25);
  local_3158.bIsSet = true;
  local_3158.Getter._16_8_ = 0;
  local_3158.Getter._0_8_ = 0;
  local_3158.Getter._8_8_ = 0;
  pFVar26 = SHeaderRow::FColumn::FArguments::DefaultLabel(&local_1290,&local_3158);
  fVar10 = __real_40000000;
  pFVar26->_HAlignCell = HAlign_Right;
  local_3318.Value = 2.0;
  local_3318.bIsSet = true;
  local_3318.Getter._0_8_ = 0;
  local_3318.Getter._8_8_ = 0;
  local_3318.Getter._16_8_ = 0;
  pFVar26 = SHeaderRow::FColumn::FArguments::FillWidth(pFVar26,&local_3318);
  pFVar24 = SHeaderRow::FArguments::operator+(pFVar24,pFVar26);
  SHeaderRow::FColumn::FArguments::FArguments(&local_1708);
  local_1708._ColumnId = ColumnHeight;
  pFVar25 = FText::AsLocalizable_Advanced_LocText
                      (&local_2fe8,L"VisualizeRT",L"HeightColumnHeader",L"Height");
  FText::FText(&local_3128.Value,pFVar25);
  local_3128.bIsSet = true;
  local_3128.Getter._16_8_ = 0;
  local_3128.Getter._0_8_ = 0;
  local_3128.Getter._8_8_ = 0;
  pFVar26 = SHeaderRow::FColumn::FArguments::DefaultLabel(&local_1708,&local_3128);
  pFVar26->_HAlignCell = HAlign_Right;
  local_32f8.Value = 2.0;
  local_32f8.bIsSet = true;
  local_32f8.Getter._0_8_ = 0;
  local_32f8.Getter._8_8_ = 0;
  local_32f8.Getter._16_8_ = 0;
  pFVar26 = SHeaderRow::FColumn::FArguments::FillWidth(pFVar26,&local_32f8);
  pFVar24 = SHeaderRow::FArguments::operator+(pFVar24,pFVar26);
  SHeaderRow::FColumn::FArguments::FArguments(&local_1b80);
  local_1b80._ColumnId = ColumnDepth;
  pFVar25 = FText::AsLocalizable_Advanced_LocText
                      (&local_2ff8,L"VisualizeRT",L"DepthColumnHeader",L"Depth");
  FText::FText(&local_30f8.Value,pFVar25);
  local_30f8.bIsSet = true;
  local_30f8.Getter._16_8_ = 0;
  local_30f8.Getter._0_8_ = 0;
  local_30f8.Getter._8_8_ = 0;
  pFVar26 = SHeaderRow::FColumn::FArguments::DefaultLabel(&local_1b80,&local_30f8);
  pFVar26->_HAlignCell = HAlign_Right;
  local_33fc = 1;
  local_33e8 = 0;
  local_3400 = fVar10;
  local_33f8 = (undefined1  [8])0x0;
  pvStack_33f0 = (void *)0x0;
  (pFVar26->_FillWidth).Value = fVar10;
  (pFVar26->_FillWidth).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar26->_FillWidth).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_33f8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_33f8);
  if (pvStack_33f0 != (void *)0x0) {
    FMemory::Free(pvStack_33f0);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_33f8);
  pFVar24 = SHeaderRow::FArguments::operator+(pFVar24,pFVar26);
  SHeaderRow::FColumn::FArguments::FArguments(&local_1ff8);
  local_1ff8._ColumnId = ColumnFormat;
  pFVar25 = FText::AsLocalizable_Advanced_LocText
                      (&local_3028,L"VisualizeRT",L"FormatColumnHeader",L"Format");
  FText::FText(&local_30c8.Value,pFVar25);
  local_30c8.bIsSet = true;
  local_30c8.Getter._16_8_ = 0;
  local_30c8.Getter._0_8_ = 0;
  local_30c8.Getter._8_8_ = 0;
  pFVar26 = SHeaderRow::FColumn::FArguments::DefaultLabel(&local_1ff8,&local_30c8);
  local_33bc = 1;
  local_33c0 = __real_40c00000;
  local_33a8 = 0;
  local_33b8 = (undefined1  [8])0x0;
  pvStack_33b0 = (void *)0x0;
  (pFVar26->_FillWidth).Value = __real_40c00000;
  (pFVar26->_FillWidth).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar26->_FillWidth).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_33b8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_33b8);
  if (pvStack_33b0 != (void *)0x0) {
    FMemory::Free(pvStack_33b0);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_33b8);
  pFVar24 = SHeaderRow::FArguments::operator+(pFVar24,pFVar26);
  SHeaderRow::FColumn::FArguments::FArguments(&local_2470);
  local_2470._ColumnId = ColumnType;
  pFVar25 = FText::AsLocalizable_Advanced_LocText
                      (&local_3038,L"VisualizeRT",L"TypeColumnHeader",L"Type");
  FText::FText(&local_3248.Value,pFVar25);
  local_3248.bIsSet = true;
  local_3248.Getter._16_8_ = 0;
  local_3248.Getter._0_8_ = 0;
  local_3248.Getter._8_8_ = 0;
  pFVar26 = SHeaderRow::FColumn::FArguments::DefaultLabel(&local_2470,&local_3248);
  local_337c = 1;
  local_3380 = __real_40a00000;
  local_3368 = 0;
  local_3378 = (undefined1  [8])0x0;
  pvStack_3370 = (void *)0x0;
  (pFVar26->_FillWidth).Value = __real_40a00000;
  (pFVar26->_FillWidth).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar26->_FillWidth).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3378);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3378);
  if (pvStack_3370 != (void *)0x0) {
    FMemory::Free(pvStack_3370);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3378);
  pFVar24 = SHeaderRow::FArguments::operator+(pFVar24,pFVar26);
  SHeaderRow::FColumn::FArguments::FArguments(&local_28e8);
  local_28e8._ColumnId = ColumnDimensions;
  pFVar25 = FText::AsLocalizable_Advanced_LocText
                      (&local_3048,L"VisualizeRT",L"DimensionsColumnHeader",L"Dimensions");
  FText::FText(&local_3218.Value,pFVar25);
  local_3218.bIsSet = true;
  local_3218.Getter._16_8_ = 0;
  local_3218.Getter._0_8_ = 0;
  local_3218.Getter._8_8_ = 0;
  pFVar26 = SHeaderRow::FColumn::FArguments::DefaultLabel(&local_28e8,&local_3218);
  fVar10 = __real_40400000;
  local_339c = 1;
  local_33a0 = __real_40400000;
  local_3388 = 0;
  local_3398 = (undefined1  [8])0x0;
  pvStack_3390 = (void *)0x0;
  (pFVar26->_FillWidth).Value = __real_40400000;
  (pFVar26->_FillWidth).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar26->_FillWidth).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3398);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3398);
  if (pvStack_3390 != (void *)0x0) {
    FMemory::Free(pvStack_3390);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3398);
  pFVar24 = SHeaderRow::FArguments::operator+(pFVar24,pFVar26);
  SHeaderRow::FColumn::FArguments::FArguments(&local_2d60);
  local_2d60._ColumnId = ColumnSize;
  pFVar25 = FText::AsLocalizable_Advanced_LocText
                      (&local_3058,L"VisualizeRT",L"SizeColumnHeader",L"Size (kb)");
  FText::FText(&local_31e8.Value,pFVar25);
  local_31e8.bIsSet = true;
  local_31e8.Getter._16_8_ = 0;
  local_31e8.Getter._0_8_ = 0;
  local_31e8.Getter._8_8_ = 0;
  pFVar26 = SHeaderRow::FColumn::FArguments::DefaultLabel(&local_2d60,&local_31e8);
  pFVar26->_HAlignCell = HAlign_Right;
  local_33dc = 1;
  local_33c8 = 0;
  local_33e0 = fVar10;
  local_33d8 = (undefined1  [8])0x0;
  pvStack_33d0 = (void *)0x0;
  (pFVar26->_FillWidth).Value = fVar10;
  (pFVar26->_FillWidth).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar26->_FillWidth).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_33d8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_33d8);
  if (pvStack_33d0 != (void *)0x0) {
    FMemory::Free(pvStack_33d0);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_33d8);
  pFVar24 = SHeaderRow::FArguments::operator+(pFVar24,pFVar26);
  FLLMScope::FLLMScope(local_res20,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_3360 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_3358,&local_3360,true);
  TSlateDecl<SHeaderRow,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SHeaderRow,RequiredArgs::T0RequiredArgs>
            (&local_3418,"SHeaderRow",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UserInterface\\VisualizeRT.cpp"
             ,0x93,(T0RequiredArgs *)&local_res8);
  FMemScope::~FMemScope(&local_3358);
  FLLMScope::~FLLMScope(local_res20);
  pSVar13 = local_3418._Widget.Object;
  if ((local_3418._Widget.Object == (SHeaderRow *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar15)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  SWidget::SWidgetConstruct((SWidget *)local_3418._Widget.Object,(FSlateBaseNamedArgs *)pFVar24);
  SHeaderRow::Construct(local_3418._Widget.Object,pFVar24);
  if ((local_3418._Widget.Object == (SHeaderRow *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar15)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (((local_3418._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar16 = (**(code **)((local_3418._Widget.Object)->_padding_ + 0x228))
                       (local_3418._Widget.Object);
    bVar17 = 0;
    if (cVar16 != '\0') goto LAB_148920866;
  }
  else {
LAB_148920866:
    bVar17 = 0x20;
  }
  *(byte *)&(local_3418._Widget.Object)->_padding_ =
       (byte)(local_3418._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_3418._Widget.Object)->_padding_ =
       (byte)(local_3418._Widget.Object)->_padding_ | bVar17;
  if ((local_3418._Widget.Object == (SHeaderRow *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar15)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pbVar1 = (byte *)((longlong)&(local_3418._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((local_3418._Widget.Object == (SHeaderRow *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar15)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FVar14.ReferenceController = local_3418._Widget.SharedReferenceCount.ReferenceController;
  local_3418._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_3418._Widget.Object = (SHeaderRow *)0x0;
  if ((pSVar13 == (SHeaderRow *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar15)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (FVar14.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar14.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar14.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (FVar14.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar14.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_3078 = (pFVar20->_HeaderRow).Object;
  pTStack_3070 = (pFVar20->_HeaderRow).SharedReferenceCount.ReferenceController;
  (pFVar20->_HeaderRow).Object = pSVar13;
  (pFVar20->_HeaderRow).SharedReferenceCount.ReferenceController = FVar14.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_3070);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar14.ReferenceController);
  FLLMScope::FLLMScope(local_3458,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_3350 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_3348,&local_3350,true);
  TSlateDecl<SListView<TSharedPtr<FRTInfo,1>_>,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SListView<TSharedPtr<FRTInfo,1>_>,RequiredArgs::T0RequiredArgs>
            (&local_3430,"SListView< TSharedPtr<FRTInfo> >",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UserInterface\\VisualizeRT.cpp"
             ,0x8c,local_res18);
  FMemScope::~FMemScope(&local_3348);
  FLLMScope::~FLLMScope(local_3458);
  pSVar11 = local_3430._Widget.Object;
  if ((local_3430._Widget.Object == (SListView<TSharedPtr<FRTInfo,1>_> *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar15)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  SWidget::SWidgetConstruct((SWidget *)local_3430._Widget.Object,(FSlateBaseNamedArgs *)pFVar20);
  SListView<TSharedPtr<FRTInfo,1>_>::Construct(local_3430._Widget.Object,pFVar20);
  if ((local_3430._Widget.Object == (SListView<TSharedPtr<FRTInfo,1>_> *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar15)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (((local_3430._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar16 = (**(code **)((local_3430._Widget.Object)->_padding_ + 0x228))
                       (local_3430._Widget.Object);
    bVar17 = 0;
    if (cVar16 == '\0') goto LAB_148920a58;
  }
  bVar17 = 0x20;
LAB_148920a58:
  *(byte *)&(local_3430._Widget.Object)->_padding_ =
       (byte)(local_3430._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_3430._Widget.Object)->_padding_ =
       (byte)(local_3430._Widget.Object)->_padding_ | bVar17;
  if ((local_3430._Widget.Object == (SListView<TSharedPtr<FRTInfo,1>_> *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar15)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pbVar1 = (byte *)((longlong)&(local_3430._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((local_3430._Widget.Object == (SListView<TSharedPtr<FRTInfo,1>_> *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar15)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FVar12.ReferenceController = local_3430._Widget.SharedReferenceCount.ReferenceController;
  local_3430._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_3430._Widget.Object = (SListView<TSharedPtr<FRTInfo,1>_> *)0x0;
  if ((pSVar11 == (SListView<TSharedPtr<FRTInfo,1>_> *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar15)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  this_00 = &this->_padding_;
  if (FVar12.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_00);
  }
  else {
    LOCK();
    (FVar12.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar12.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_00);
    LOCK();
    (FVar12.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar12.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_3068 = this->_padding_;
  pTStack_3060 = (TReferenceControllerBase<1> *)this->_padding_;
  this->_padding_ = (longlong)pSVar11;
  this->_padding_ = (longlong)FVar12.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_3060);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)this_00);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar12.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar12.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3430._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar14.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3418._Widget.SharedReferenceCount.ReferenceController);
  if (local_3058.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_3058.TextData.Reference + 0x10))();
  }
  SHeaderRow::FColumn::FArguments::~FArguments(&local_2d60);
  if (local_3048.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_3048.TextData.Reference + 0x10))();
  }
  SHeaderRow::FColumn::FArguments::~FArguments(&local_28e8);
  if (local_3038.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_3038.TextData.Reference + 0x10))();
  }
  SHeaderRow::FColumn::FArguments::~FArguments(&local_2470);
  if (local_3028.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_3028.TextData.Reference + 0x10))();
  }
  SHeaderRow::FColumn::FArguments::~FArguments(&local_1ff8);
  if (local_2ff8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_2ff8.TextData.Reference + 0x10))();
  }
  SHeaderRow::FColumn::FArguments::~FArguments(&local_1b80);
  if (local_2fe8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_2fe8.TextData.Reference + 0x10))();
  }
  SHeaderRow::FColumn::FArguments::~FArguments(&local_1708);
  if (local_3008.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_3008.TextData.Reference + 0x10))();
  }
  SHeaderRow::FColumn::FArguments::~FArguments(&local_1290);
  if (local_3018.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_3018.TextData.Reference + 0x10))();
  }
  SHeaderRow::FColumn::FArguments::~FArguments(&local_e18);
  if (local_3328.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_3328.TextData.Reference + 0x10))();
  }
  SHeaderRow::FColumn::FArguments::~FArguments(&local_9a0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2d78);
  if ((void *)local_2d78._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_2d78._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2d78);
  if (local_2d88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2d88.Data);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2db0);
  if ((void *)local_2db0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_2db0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2db0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2dc8);
  if ((void *)local_2dc8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_2dc8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2dc8);
  if ((FScriptContainerElement *)local_2fd8._512_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_2fd8._512_8_);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_2fd8);
  SListView<TSharedPtr<FRTInfo,1>_>::FArguments::~FArguments(&local_528);
  local_3468.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3468.ArrayNum = 0;
  local_3468.ArrayMax = 0;
  FVisualizeTexture::GetTextureInfos_GameThread((FVisualizeTexture *)&GVisualizeTexture,&local_3468)
  ;
  if (0 < local_3468.ArrayNum) {
    pTVar3 = &this->ListItems;
    pFVar28 = pFVar29;
    do {
      pFVar27 = ::operator_new(0xa0);
      local_3340.Object = pFVar29;
      if (pFVar27 != (FRTInfo *)0x0) {
        *(undefined4 *)&pFVar27->_padding_ = 0;
        pFVar27->_padding_ = (longlong)&___7FRTInfo__6B_;
        (pFVar27->Dimensions).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar27->Dimensions).Data.ArrayNum = 0;
        (pFVar27->Dimensions).Data.ArrayMax = 0;
        (pFVar27->Width).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar27->Width).Data.ArrayNum = 0;
        (pFVar27->Width).Data.ArrayMax = 0;
        (pFVar27->Height).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar27->Height).Data.ArrayNum = 0;
        (pFVar27->Height).Data.ArrayMax = 0;
        (pFVar27->Depth).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar27->Depth).Data.ArrayNum = 0;
        (pFVar27->Depth).Data.ArrayMax = 0;
        (pFVar27->Format).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar27->Format).Data.ArrayNum = 0;
        (pFVar27->Format).Data.ArrayMax = 0;
        (pFVar27->Number).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar27->Number).Data.ArrayNum = 0;
        (pFVar27->Number).Data.ArrayMax = 0;
        (pFVar27->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar27->Name).Data.ArrayNum = 0;
        (pFVar27->Name).Data.ArrayMax = 0;
        (pFVar27->Size).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar27->Size).Data.ArrayNum = 0;
        (pFVar27->Size).Data.ArrayMax = 0;
        (pFVar27->Type).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar27->Type).Data.ArrayNum = 0;
        (pFVar27->Type).Data.ArrayMax = 0;
        local_3340.Object = pFVar27;
      }
      TSharedPtr<FRTInfo,1>::TSharedPtr<FRTInfo,1><FRTInfo>(&local_3478,&local_3340);
      if ((local_3478.Object == (FRTInfo *)0x0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar15)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar27 = local_3478.Object;
      uVar31 = (uint)pFVar28;
      uVar18 = 0;
      if ((int)uVar31 < local_3468.ArrayNum) {
        uVar18 = ~uVar31 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      bVar15 = FRTInfo::Parse(pFVar27,(FString *)
                                      (local_3468.AllocatorInstance.Data +
                                      (longlong)(int)uVar31 * 0x10));
      if (bVar15) {
        if ((local_3478.Object == (FRTInfo *)0x0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar15)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (((local_3478.Object)->Size).Data.ArrayNum == 0) {
          _Str = L"";
        }
        else {
          _Str = (wchar_t *)((local_3478.Object)->Size).Data.AllocatorInstance.Data;
        }
        _wtoi(_Str);
        pTVar5 = (TSharedPtr<FRTInfo,1> *)(pTVar3->AllocatorInstance).Data;
        if (((pTVar5 <= &local_3478) && (&local_3478 < pTVar5 + (this->ListItems).ArrayMax)) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar15)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar19 = (this->ListItems).ArrayNum;
        piVar2 = &(this->ListItems).ArrayMax;
        if (iVar19 == *piVar2) {
          iVar19 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&pTVar3->AllocatorInstance,piVar2);
        }
        (this->ListItems).ArrayNum = iVar19 + 1;
        pFVar6 = (pTVar3->AllocatorInstance).Data;
        *(FRTInfo **)(pFVar6 + (longlong)iVar19 * 0x10) = local_3478.Object;
        *(TReferenceControllerBase<1> **)(pFVar6 + (longlong)iVar19 * 0x10 + 8) =
             local_3478.SharedReferenceCount.ReferenceController;
        if (local_3478.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_3478.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_3478.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
               );
          UNLOCK();
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_3478.SharedReferenceCount.ReferenceController);
      pFVar28 = (FRTInfo *)(ulonglong)(uVar31 + 1);
    } while ((int)(uVar31 + 1) < local_3468.ArrayNum);
  }
  pFVar28 = ::operator_new(0xa0);
  if (pFVar28 != (FRTInfo *)0x0) {
    *(undefined4 *)&pFVar28->_padding_ = 0;
    pFVar28->_padding_ = (longlong)&___7FRTInfo__6B_;
    (pFVar28->Dimensions).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar28->Dimensions).Data.ArrayNum = 0;
    (pFVar28->Dimensions).Data.ArrayMax = 0;
    (pFVar28->Width).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar28->Width).Data.ArrayNum = 0;
    (pFVar28->Width).Data.ArrayMax = 0;
    (pFVar28->Height).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar28->Height).Data.ArrayNum = 0;
    (pFVar28->Height).Data.ArrayMax = 0;
    (pFVar28->Depth).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar28->Depth).Data.ArrayNum = 0;
    (pFVar28->Depth).Data.ArrayMax = 0;
    (pFVar28->Format).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar28->Format).Data.ArrayNum = 0;
    (pFVar28->Format).Data.ArrayMax = 0;
    (pFVar28->Number).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar28->Number).Data.ArrayNum = 0;
    (pFVar28->Number).Data.ArrayMax = 0;
    (pFVar28->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar28->Name).Data.ArrayNum = 0;
    (pFVar28->Name).Data.ArrayMax = 0;
    (pFVar28->Size).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar28->Size).Data.ArrayNum = 0;
    (pFVar28->Size).Data.ArrayMax = 0;
    (pFVar28->Type).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar28->Type).Data.ArrayNum = 0;
    (pFVar28->Type).Data.ArrayMax = 0;
    pFVar29 = pFVar28;
  }
  local_3450.Object = pFVar29;
  TSharedPtr<FRTInfo,1>::TSharedPtr<FRTInfo,1><FRTInfo>(&local_3488,&local_3450);
  if ((local_3488.Object == (FRTInfo *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar15)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  ::FString::operator=(&(local_3488.Object)->Depth,L"-");
  if ((local_3488.Object == (FRTInfo *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar15)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  ::FString::operator=(&(local_3488.Object)->Dimensions,L"-");
  if ((local_3488.Object == (FRTInfo *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar15)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  ::FString::operator=(&(local_3488.Object)->Format,L"-");
  if ((local_3488.Object == (FRTInfo *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar15)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  ::FString::operator=(&(local_3488.Object)->Height,L"-");
  if ((local_3488.Object == (FRTInfo *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar15)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  ::FString::operator=(&(local_3488.Object)->Name,L"TOTAL");
  if ((local_3488.Object == (FRTInfo *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar15)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  ::FString::operator=(&(local_3488.Object)->Number,L"-");
  if ((local_3488.Object == (FRTInfo *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar15)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  ::FString::operator=(&(local_3488.Object)->Type,L"-");
  if ((local_3488.Object == (FRTInfo *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar15)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  ::FString::operator=(&(local_3488.Object)->Width,L"-");
  ::FString::PrintfImpl(&local_3440,L"%d");
  if ((local_3488.Object == (FRTInfo *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar15)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar29 = local_3488.Object;
  pFVar30 = &(local_3488.Object)->Size;
  if (pFVar30 != &local_3440) {
    pFVar6 = (pFVar30->Data).AllocatorInstance.Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    (pFVar30->Data).AllocatorInstance.Data = local_3440.Data.AllocatorInstance.Data;
    local_3440.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar29->Size).Data.ArrayNum = local_3440.Data.ArrayNum;
    (pFVar29->Size).Data.ArrayMax = local_3440.Data.ArrayMax;
    local_3440.Data.ArrayNum = 0;
    local_3440.Data.ArrayMax = 0;
  }
  if (local_3440.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3440.Data.AllocatorInstance.Data);
  }
  pTVar3 = &this->ListItems;
  pTVar5 = (TSharedPtr<FRTInfo,1> *)(pTVar3->AllocatorInstance).Data;
  if (((pTVar5 <= &local_3488) && (&local_3488 < pTVar5 + (this->ListItems).ArrayMax)) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar15)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar19 = (this->ListItems).ArrayNum;
  piVar2 = &(this->ListItems).ArrayMax;
  if (iVar19 == *piVar2) {
    iVar19 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&pTVar3->AllocatorInstance,piVar2);
  }
  (this->ListItems).ArrayNum = iVar19 + 1;
  pFVar6 = (pTVar3->AllocatorInstance).Data;
  *(FRTInfo **)(pFVar6 + (longlong)iVar19 * 0x10) = local_3488.Object;
  *(TReferenceControllerBase<1> **)(pFVar6 + (longlong)iVar19 * 0x10 + 8) =
       local_3488.SharedReferenceCount.ReferenceController;
  if (local_3488.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_3488.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_3488.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->Selected = (FRTInfo *)0x0;
  if (((this->ListItems).ArrayNum < 1) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar15)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar6 = (this->ListItems).AllocatorInstance.Data;
  local_3298.Object = *(FRTInfo **)pFVar6;
  local_3298.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)(pFVar6 + 8);
  if (local_3298.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_3298.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_3298.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  OnSelectionChanged(this,&local_3298,Direct);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3488.SharedReferenceCount.ReferenceController);
  DestructItems<FString,int>((FString *)local_3468.AllocatorInstance.Data,local_3468.ArrayNum);
  if (local_3468.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3468.AllocatorInstance.Data);
  }
  return;
}

// OnGenerateWidgetForList @ 14896b350

TSharedRef<ITableRow,1> * __thiscall
SVisualizeRTWidget::OnGenerateWidgetForList
          (SVisualizeRTWidget *this,TSharedRef<ITableRow,1> *__return_storage_ptr__,
          TSharedPtr<FRTInfo,1> *param_1,TSharedRef<STableViewBase,1> *param_2)

{
  code *pcVar1;
  FRow *pFVar2;
  bool bVar3;
  FArguments *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TSharedRef<ITableRow,1> *pTVar6;
  TSharedRef<SVisualizeRTWidget::FRow,1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  FLLMScope local_res10 [2];
  FName local_res18;
  FMemScope local_res20;
  TSlateDecl<SVisualizeRTWidget::FRow,RequiredArgs::T2RequiredArgs<TSharedRef<STableViewBase,1>_const_&,TSharedPtr<FRTInfo,1>_&>_>
  local_288;
  undefined8 local_270;
  FSharedReferencer<1> local_268;
  T2RequiredArgs<TSharedRef<STableViewBase,1>_const_&,TSharedPtr<FRTInfo,1>_&> local_260;
  TSharedRef<SVisualizeRTWidget::FRow,1> local_250;
  TSharedRef<SVisualizeRTWidget::FRow,1> local_240;
  FSlateBaseNamedArgs local_230;
  
  pFVar4 = FRow::FArguments::FArguments((FArguments *)&local_230);
  local_260.Arg0 = param_2;
  local_260.Arg1 = param_1;
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  local_288._RequiredArgs = &local_260;
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  local_288._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar5 = ::operator_new(0x478);
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFRow_SVisualizeRTWidget___00_SharedPointerInternals__6B_
    ;
    memset(pTVar5 + 1,0,0x468);
    STableRow<TSharedPtr<FRTInfo,1>_>::STableRow<TSharedPtr<FRTInfo,1>_>
              ((STableRow<TSharedPtr<FRTInfo,1>_> *)(pTVar5 + 1));
    pTVar5[0x40].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[0x40].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[0x41]._padding_ = 0;
    pTVar5[0x41].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[0x41].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[0x42]._padding_ = 0;
    pTVar5[0x43].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[0x43].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar5[0x44]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar5[0x44]._padding_ + 4) = 0x80;
    pTVar5[0x44].SharedReferenceCount = (atomic<int>)0xffffffff;
    pTVar5[0x44].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[0x45].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[0x45].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar5[0x46]._padding_ = 0;
    pTVar5[1]._padding_ = (longlong)&FRow::_vftable__for__ITableRow__;
    *(undefined ***)&pTVar5[1].SharedReferenceCount = &FRow::_vftable__for__SBorder__;
    pTVar5[0x46].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[0x46].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[0x47]._padding_ = 0;
    pTVar8 = pTVar5;
  }
  TSharedRef<SVisualizeRTWidget::FRow,1>::TSharedRef<SVisualizeRTWidget::FRow,1>
            (&local_250,(FRow *)(pTVar8 + 1),pTVar8);
  local_268.ReferenceController = local_250.SharedReferenceCount.ReferenceController;
  if (local_250.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_250.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_250.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_288._Widget.Object = local_250.Object;
  local_270 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            (&local_288._Widget.SharedReferenceCount,&local_268);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_268.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_250.SharedReferenceCount.ReferenceController);
  pFVar2 = local_288._Widget.Object;
  if ((local_288._Widget.Object == (FRow *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar6 = (TSharedRef<ITableRow,1> *)(*pcVar1)();
    return pTVar6;
  }
  SWidget::SetDebugInfo
            ((SWidget *)&pFVar2->_padding_,"FRow",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UserInterface\\VisualizeRT.cpp"
             ,0x14c,0x468);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res10);
  pTVar7 = TSlateDecl<SVisualizeRTWidget::FRow,RequiredArgs::T2RequiredArgs<TSharedRef<STableViewBase,1>_const_&,TSharedPtr<FRTInfo,1>_&>_>
           ::operator<<=(&local_288,&local_240,pFVar4);
  __return_storage_ptr__->Object = (ITableRow *)pTVar7->Object;
  pTVar8 = (pTVar7->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar8;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_240.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_288._Widget.SharedReferenceCount.ReferenceController);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs(&local_230);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// OnSelectionChanged @ 14896de60

void __thiscall
SVisualizeRTWidget::OnSelectionChanged
          (SVisualizeRTWidget *this,TSharedPtr<FRTInfo,1> *param_1,Type param_2)

{
  FScriptContainerElement *_Src;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  wchar_t *pwVar4;
  longlong lVar5;
  ForAnyElementType local_18;
  int local_10;
  int local_c;
  
  if (param_1->Object != (FRTInfo *)0x0) {
    this->Selected = param_1->Object;
    pwVar4 = L"";
    if ((param_1->Object == (FRTInfo *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((param_1->Object->Number).Data.ArrayNum != 0) {
      pwVar4 = (wchar_t *)(param_1->Object->Number).Data.AllocatorInstance.Data;
    }
    iVar3 = FGenericPlatformStricmp::Stricmp(pwVar4,L"-");
    if (iVar3 != 0) {
      local_18.Data = (FScriptContainerElement *)0x0;
      local_10 = (this->Selected->Number).Data.ArrayNum;
      lVar5 = (longlong)local_10;
      _Src = (this->Selected->Number).Data.AllocatorInstance.Data;
      if (local_10 == 0) {
        local_c = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_10,0,&local_18,local_10,&local_c);
        memcpy(local_18.Data,_Src,lVar5 * 2);
      }
      (**(code **)(*(longlong *)this->_padding_ + 0xd8))((longlong *)this->_padding_,&local_18);
      if (local_18.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

