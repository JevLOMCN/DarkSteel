// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DrawPrimitiveDebugger
// Functions: 48

// <lambda_1> @ 146d01b80

<lambda_1> * __thiscall
`SDrawPrimitiveDebugger::HandleActorCleanup'::__l2::<lambda_1>::<lambda_1>
          (void *this,
          TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>
          *param_1)

{
  TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (this);
  TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>::
  ForElementType<FSetElementId>((ForElementType<FSetElementId> *)((longlong)this + 0x38));
  *(undefined4 *)((longlong)this + 0x48) = 0;
  TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>::
  operator=(this,param_1);
  return this;
}

// ~SDrawPrimitiveDebugger @ 146d049f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall SDrawPrimitiveDebugger::~SDrawPrimitiveDebugger(SDrawPrimitiveDebugger *this)

{
  this->_padding_ = (longlong)&___7SDrawPrimitiveDebugger__6B_;
  SetActiveWorld(this,(UWorld *)0x0);
  (this->EntriesShowingDebugBounds).HashSize = 0;
  TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>::
  ~ForElementType<FSetElementId>(&(this->EntriesShowingDebugBounds).Hash);
  TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->EntriesShowingDebugBounds).Elements);
  TArray<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>,TSizedDefaultAllocator<32>_>
            (&this->VisibleEntries);
  TArray<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>,TSizedDefaultAllocator<32>_>
            (&this->AvailableEntries);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&(this->ColumnHeader).SharedReferenceCount);
  FText::~FText(&this->FilterText);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&(this->Table).SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&(this->SearchBox).SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&(this->DetailView).SharedReferenceCount);
  TMapBase<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,0>_>
  ::
  ~TMapBase<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,0>_>
            ((TMapBase<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,0>_>
              *)&this->Entries);
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  return;
}

// operator() @ 146d069f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
`SDrawPrimitiveDebugger::HandleActorCleanup'::__l2::<lambda_1>::operator()
          (void *this,TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> *param_1)

{
  uint uVar1;
  int iVar2;
  FPrimitiveInfo *pFVar3;
  
  pFVar3 = TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::operator->(param_1);
  uVar1 = ::GetTypeHash((FPrimitiveComponentId)(pFVar3->ComponentId).PrimIDValue);
  iVar2 = TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FPrimitiveComponentId>(this,uVar1,&pFVar3->ComponentId);
  TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::
  ~TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>(param_1);
  return iVar2 != -1;
}

// operator() @ 146d06eb0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
`SDrawPrimitiveDebugger::SortRows'::__l2::<lambda_1>::operator()
          (void *this,TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> *param_1,
          TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> *param_2)

{
  SDrawPrimitiveDebugger *pSVar1;
  bool bVar2;
  bool bVar3;
  FPrimitiveInfo *pFVar4;
  FPrimitiveInfo *pFVar5;
  bool local_34;
  
  pSVar1 = *(SDrawPrimitiveDebugger **)this;
  pFVar4 = TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::operator->(param_1);
  bVar2 = SDrawPrimitiveDebugger::IsEntryPinned
                    (pSVar1,(FPrimitiveComponentId)(pFVar4->ComponentId).PrimIDValue);
  pSVar1 = *(SDrawPrimitiveDebugger **)this;
  pFVar4 = TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::operator->(param_2);
  bVar3 = SDrawPrimitiveDebugger::IsEntryPinned
                    (pSVar1,(FPrimitiveComponentId)(pFVar4->ComponentId).PrimIDValue);
  if ((!bVar2) || (bVar3)) {
    if (bVar2 == bVar3) {
      pFVar4 = TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::
               operator*<FViewDebugInfo::FPrimitiveInfo_const_>(param_1);
      pFVar5 = TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::
               operator*<FViewDebugInfo::FPrimitiveInfo_const_>(param_2);
      bVar2 = FViewDebugInfo::FPrimitiveInfo::operator<(pFVar4,pFVar5);
      if (bVar2) goto LAB_146d06f81;
    }
    local_34 = false;
  }
  else {
LAB_146d06f81:
    local_34 = true;
  }
  TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::
  ~TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>(param_1);
  TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::
  ~TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>(param_2);
  return local_34;
}

// operator() @ 146d06fc0

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
`SDrawPrimitiveDebugger::Refresh'::__l3::<lambda_1>::operator()(void *this,FPrimitiveInfo *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FPrimitiveDebuggerEntry *pFVar5;
  UPrimitiveComponent *this_00;
  ForAnyElementType *pFVar6;
  TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> *pTVar7;
  TSharedRef<FViewDebugInfo::FPrimitiveInfo_const_,1> *pTVar8;
  TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> local_48;
  TSharedRef<FViewDebugInfo::FPrimitiveInfo_const_,1> local_38;
  FPrimitiveDebuggerEntry local_28;
  
  pFVar5 = TMapBase<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,0>_>
           ::Find((TMapBase<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,0>_>
                   *)(*(longlong *)this + 0x2a8),&param_1->ComponentId);
  if (((pFVar5 == (FPrimitiveDebuggerEntry *)0x0) &&
      (param_1->PrimitiveSceneInfo != (FPrimitiveSceneInfo *)0x0)) &&
     (bVar3 = FViewDebugInfo::FPrimitiveInfo::IsPrimitiveValid(param_1), bVar3)) {
    lVar1 = *(longlong *)this;
    pFVar5 = SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry::FPrimitiveDebuggerEntry
                       (&local_28,param_1);
    pFVar5 = TMapBase<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,0>_>
             ::
             Emplace<FPrimitiveComponentId_const_&,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry>
                       ((TMapBase<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,0>_>
                         *)(lVar1 + 0x2a8),&param_1->ComponentId,pFVar5);
    TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::
    ~TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>(&local_28.Data);
    this_00 = IPrimitiveComponent::GetUObject<UPrimitiveComponent>(param_1->ComponentInterface);
    if ((this_00 == (UPrimitiveComponent *)0x0) ||
       (bVar3 = FInternalUObjectBaseUtilityIsValidFlagsChecker::CheckObjectValidBasedOnItsFlags
                          ((UObject *)this_00), !bVar3)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (bVar3 = USceneComponent::GetVisibleFlag((USceneComponent *)this_00), !bVar3)) {
      pFVar5->bHidden = '\x01';
      pFVar5->bRetainDuringRefresh = '\x01';
    }
    lVar1 = *(longlong *)this;
    pFVar6 = (ForAnyElementType *)(lVar1 + 0x348);
    if (((FPrimitiveDebuggerEntry *)pFVar6->Data <= pFVar5) &&
       (pFVar5 < (FPrimitiveDebuggerEntry *)
                 (pFVar6->Data + (longlong)*(int *)(lVar1 + 0x354) * 0x10))) {
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (*(int *)(lVar1 + 0x350) == *(int *)(lVar1 + 0x354)) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,pFVar6,(int *)(lVar1 + 0x354));
      *(int *)(lVar1 + 0x350) = iVar4;
    }
    iVar4 = *(int *)(lVar1 + 0x350);
    *(int *)(lVar1 + 0x350) = *(int *)(lVar1 + 0x350) + 1;
    pTVar7 = ::operator_new(0x10,pFVar6->Data + (longlong)iVar4 * 0x10);
    TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::
    TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>(pTVar7,&pFVar5->Data);
  }
  else if (pFVar5 != (FPrimitiveDebuggerEntry *)0x0) {
    pTVar8 = MakeShared<FViewDebugInfo::FPrimitiveInfo_const_,1,FViewDebugInfo::FPrimitiveInfo_const_&>
                       (&local_38,param_1);
    TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::
    TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1><FViewDebugInfo::FPrimitiveInfo_const_>
              (&local_48,pTVar8);
    TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::operator=(&pFVar5->Data,&local_48);
    TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::
    ~TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>(&local_48);
    SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
              (&local_38.SharedReferenceCount);
    lVar1 = *(longlong *)this;
    pFVar6 = (ForAnyElementType *)(lVar1 + 0x348);
    if (((FPrimitiveDebuggerEntry *)pFVar6->Data <= pFVar5) &&
       (pFVar5 < (FPrimitiveDebuggerEntry *)
                 (pFVar6->Data + (longlong)*(int *)(lVar1 + 0x354) * 0x10))) {
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (*(int *)(lVar1 + 0x350) == *(int *)(lVar1 + 0x354)) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,pFVar6,(int *)(lVar1 + 0x354));
      *(int *)(lVar1 + 0x350) = iVar4;
    }
    iVar4 = *(int *)(lVar1 + 0x350);
    *(int *)(lVar1 + 0x350) = *(int *)(lVar1 + 0x350) + 1;
    pTVar7 = ::operator_new(0x10,pFVar6->Data + (longlong)iVar4 * 0x10);
    TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::
    TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>(pTVar7,&pFVar5->Data);
    TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>::
    Remove(*(TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>
             **)((longlong)this + 8),&param_1->ComponentId);
  }
  return;
}

// AddColumn @ 146d094e0

/* WARNING: Removing unreachable block (ram,0x000146d09553) */
/* WARNING: Removing unreachable block (ram,0x000146d09728) */
/* WARNING: Removing unreachable block (ram,0x000146d09841) */
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

void __thiscall
SDrawPrimitiveDebugger::AddColumn(SDrawPrimitiveDebugger *this,FText *param_1,FName *param_2)

{
  bool bVar1;
  FSlateApplication *this_00;
  TSharedRef<FCompositeFont_const_,1> *pTVar2;
  FDeprecateSlateVector2D FVar3;
  TOptional<float> TVar4;
  FArguments *pFVar5;
  float in_XMM3_Da;
  FName local_688;
  uint local_680;
  uint local_678;
  uint local_670;
  FNameEntryId local_66c [3];
  uint local_660;
  uint local_65c;
  uint local_658;
  FNameEntryId local_654 [3];
  uint local_648;
  uint local_644;
  FName local_640;
  FArguments *local_638;
  FName local_630;
  FNameEntryId *local_628;
  FNameEntryId local_620 [2];
  FSlateRenderer *local_618;
  FNameEntryId *local_610;
  TSharedPtr<FCompositeFont_const_,1> *local_608;
  FFontOutlineSettings *local_600;
  TSharedPtr<FCompositeFont_const_,1> *local_5f8;
  TAttribute<FText> *local_5f0;
  TAttribute<FText> *local_5e8;
  FArguments *local_5e0;
  uint *local_5d8;
  FNameEntryId *local_5d0;
  uint *local_5b8;
  FNameEntryId *local_5b0;
  FSlateFontMeasure *local_598;
  TOptional<float> *local_590;
  SHeaderRow *local_588;
  TSharedRef<FSlateFontMeasure,1> local_580;
  TOptional<float> local_570;
  undefined1 local_568 [16];
  FSharedReferencer<1> local_558;
  TSharedPtr<FCompositeFont_const_,1> local_550;
  FFontOutlineSettings local_540;
  FSlateFontInfo local_518;
  TAttribute<FText> local_4b8;
  FArguments local_488;
  
  this_00 = FSlateApplication::Get();
  local_618 = FSlateApplicationBase::GetRenderer((FSlateApplicationBase *)this_00);
  FSlateRenderer::GetFontMeasureService(local_618,&local_580);
  local_600 = FFontOutlineSettings::FFontOutlineSettings(&local_540);
  local_628 = FNameEntryId::FNameEntryId(local_620);
  local_680 = local_628->Value;
  local_678 = local_680;
  local_610 = local_628;
  FNameEntryId::FNameEntryId(&local_688.ComparisonIndex);
  local_688.ComparisonIndex.Value = local_678;
  local_688.Number = 0;
  local_608 = &local_550;
  pTVar2 = FCoreStyle::GetDefaultFont((TSharedRef<FCompositeFont_const_,1> *)(local_568 + 8));
  local_5f8 = TSharedPtr<FCompositeFont_const_,1>::
              TSharedPtr<FCompositeFont_const_,1><FCompositeFont_const_>(local_608,pTVar2);
  FSlateFontInfo::FSlateFontInfo(&local_518,local_5f8,__real_41400000,&local_688,local_600);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&local_558);
  ::FName::FName(&local_630,"Visible");
  ::FName::FName(&local_640,"Pin");
  local_5e0 = SHeaderRow::Column(&local_488,param_2);
  local_5f0 = &local_4b8;
  local_5e8 = TAttribute<FText>::TAttribute<FText><FText>(local_5f0,param_1);
  local_638 = SHeaderRow::FColumn::FArguments::DefaultLabel(local_5e0,local_5e8);
  SHeaderRow::FColumn::FArguments::~FArguments(&local_488);
  local_670 = local_630.ComparisonIndex.Value;
  local_5d8 = &local_670;
  local_66c[0].Value = (param_2->ComparisonIndex).Value;
  local_5d0 = local_66c;
  bVar1 = FNameEntryId::UEOpEquals(local_5d0,local_630.ComparisonIndex);
  if (bVar1) {
    local_660 = param_2->Number;
    local_65c = local_630.Number;
    if (local_660 != local_630.Number) goto LAB_146d097c1;
    bVar1 = true;
  }
  else {
LAB_146d097c1:
    bVar1 = false;
  }
  if (!bVar1) {
    local_658 = local_640.ComparisonIndex.Value;
    local_5b8 = &local_658;
    local_654[0].Value = (param_2->ComparisonIndex).Value;
    local_5b0 = local_654;
    bVar1 = FNameEntryId::UEOpEquals(local_5b0,local_640.ComparisonIndex);
    if (bVar1) {
      local_648 = param_2->Number;
      local_644 = local_640.Number;
      if (local_648 != local_640.Number) goto LAB_146d098e6;
      bVar1 = true;
    }
    else {
LAB_146d098e6:
      bVar1 = false;
    }
    if (!bVar1) goto LAB_146d09990;
  }
  local_590 = &local_570;
  local_598 = TSharedRef<FSlateFontMeasure,1>::operator->(&local_580);
  FVar3 = FSlateFontMeasure::Measure
                    (local_598,(FText *)local_568,(FSlateFontInfo *)param_1,in_XMM3_Da);
  TVar4 = (TOptional<float>)TOptional<float>::TOptional<float>(local_590,(float *)FVar3);
  pFVar5 = SHeaderRow::FColumn::FArguments::FixedWidth(local_638,TVar4);
  SHeaderRow::FColumn::FArguments::operator=(local_638,pFVar5);
LAB_146d09990:
  local_588 = TSharedPtr<SHeaderRow,1>::operator->(&this->ColumnHeader);
  SHeaderRow::AddColumn(local_588,local_638);
  FSlateFontInfo::~FSlateFontInfo(&local_518);
  TSharedRef<FSlateFontMeasure,1>::~TSharedRef<FSlateFontMeasure,1>(&local_580);
  return;
}

// CanCaptureSingleFrame @ 146d09bb0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall SDrawPrimitiveDebugger::CanCaptureSingleFrame(SDrawPrimitiveDebugger *this)

{
  bool bVar1;
  char cVar2;
  IDrawPrimitiveDebugger *pIVar3;
  
  bVar1 = IDrawPrimitiveDebugger::IsAvailable();
  if (bVar1) {
    pIVar3 = IDrawPrimitiveDebugger::Get();
    cVar2 = (**(code **)((longlong)*pIVar3 + 0x48))(pIVar3);
    if (cVar2 == '\0') {
      return true;
    }
  }
  return false;
}

// ClearAllEntries @ 146d09da0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall SDrawPrimitiveDebugger::ClearAllEntries(SDrawPrimitiveDebugger *this)

{
  SPrimitiveDebuggerDetailView *this_00;
  SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_> *pSVar1;
  
  this_00 = TSharedPtr<SPrimitiveDebuggerDetailView,1>::operator->(&this->DetailView);
  SPrimitiveDebuggerDetailView::ReleaseSelection(this_00);
  this->Selection = (FPrimitiveDebuggerEntry *)0x0;
  ResetDebuggerChanges(this);
  TSet<TTuple<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,0>,FDefaultSetAllocator>
  ::Empty((TSet<TTuple<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,0>,FDefaultSetAllocator>
           *)&this->Entries,0);
  TArray<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>,TSizedDefaultAllocator<32>_>::Empty
            (&this->AvailableEntries,0);
  UpdateVisibleRows(this);
  if ((this->Table).Object != (SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_> *)0x0
     ) {
    pSVar1 = TSharedPtr<SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1>::
             operator->(&this->Table);
    (**(code **)(pSVar1->_padding_ + 0x248))(pSVar1);
  }
  return;
}

// Construct @ 146d0b290

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall SDrawPrimitiveDebugger::Construct(SDrawPrimitiveDebugger *this,FArguments *param_1)

{
  TSlateDecl<SScrollBar,RequiredArgs::T0RequiredArgs> *this_00;
  TSlateDecl<SHeaderRow,RequiredArgs::T0RequiredArgs> *this_01;
  TSharedRef<SHeaderRow,1> *pTVar1;
  FText *pFVar2;
  TSlateDecl<SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,RequiredArgs::T0RequiredArgs>
  *this_02;
  TSharedRef<SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1> *pTVar3;
  FSlotArguments *pFVar4;
  FSlotArguments *pFVar5;
  TSlateDecl<SSearchBox,RequiredArgs::T0RequiredArgs> *this_03;
  TSharedRef<SSearchBox,1> *pTVar6;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> *pTVar7;
  TSharedRef<SButton,1> *pTVar8;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> *pTVar9;
  TSharedRef<SHorizontalBox,1> *pTVar10;
  TSlateDecl<SScrollBox,RequiredArgs::T0RequiredArgs> *this_04;
  TSharedRef<SScrollBox,1> *pTVar11;
  TSlateDecl<SPrimitiveDebuggerDetailView,RequiredArgs::T0RequiredArgs> *this_05;
  TSharedRef<SPrimitiveDebuggerDetailView,1> *pTVar12;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> *this_06;
  TSharedRef<SVerticalBox,1> *pTVar13;
  longlong lVar14;
  code **ppcVar15;
  undefined1 *puVar16;
  pmf_9517392f *ppVar17;
  pmf_9865df2d *ppVar18;
  pmf_0141a4eb *ppVar19;
  pmf_e1d26a6b *ppVar20;
  pmf_7f3b84af *ppVar21;
  pmf_c1318bdd *ppVar22;
  pmf_2f43fd8f *ppVar23;
  pmf_185feeec *ppVar24;
  T0RequiredArgs local_3398;
  T0RequiredArgs local_3397;
  T0RequiredArgs local_3396;
  T0RequiredArgs local_3395;
  T0RequiredArgs local_3394;
  T0RequiredArgs local_3393;
  T0RequiredArgs local_3392;
  T0RequiredArgs local_3391;
  T0RequiredArgs local_3390;
  T0RequiredArgs local_338f;
  T0RequiredArgs local_338e;
  FStaticCastTag local_338d;
  Type local_338c [5];
  IDrawPrimitiveDebugger *local_3378;
  FArguments *local_3370;
  TVector2<double>_u_0 *local_3368;
  TAttribute<UE::Math::TVector2<double>_> *local_3360;
  TAttribute<UE::Math::TVector2<double>_> *local_3358;
  FArguments *local_3350;
  FArguments *local_3348;
  FArguments *local_3340;
  FArguments *local_3338;
  FName local_3330;
  FName local_3328;
  FName local_3320;
  FName local_3318;
  FArguments *local_3310;
  TSharedPtr<SHeaderRow,1> *local_3308;
  TSharedPtr<SHeaderRow,1> *local_3300;
  FArguments *local_32f8;
  FArguments *local_32f0;
  FArguments *local_32e8;
  TSharedPtr<SScrollBar,1> *local_32e0;
  TSharedPtr<SScrollBar,1> *local_32d8;
  FArguments *local_32d0;
  FArguments *local_32c8;
  FArguments *local_32c0;
  undefined1 *local_32b8;
  TAttribute<ESelectionMode::Type> *local_32b0;
  FArguments *local_32a8;
  FArguments *local_32a0;
  undefined1 *local_3298;
  undefined1 *local_3290;
  TAttribute<float> *local_3288;
  TAttribute<float> *local_3280;
  FSlotArguments *local_3278;
  FArguments *local_3270;
  FArguments *local_3268;
  FArguments *local_3260;
  TSlateDecl<SSearchBox,RequiredArgs::T0RequiredArgs> *local_3258;
  FArguments *local_3250;
  FSlotArguments *local_3248;
  FSlotArguments *local_3240;
  FArguments *local_3238;
  undefined1 *local_3230;
  TAttribute<FText> *local_3228;
  TAttribute<FText> *local_3220;
  FArguments *local_3218;
  FArguments *local_3210;
  FArguments *local_3208;
  FArguments *local_3200;
  FSlotArguments *local_31f8;
  FSlotArguments *local_31f0;
  FArguments *local_31e8;
  undefined1 *local_31e0;
  TAttribute<FText> *local_31d8;
  TAttribute<FText> *local_31d0;
  FArguments *local_31c8;
  FArguments *local_31c0;
  FArguments *local_31b8;
  FSlotArguments *local_31b0;
  FSlotArguments *local_31a8;
  FArguments *local_31a0;
  FArguments *local_3198;
  FSlotArguments *local_3190;
  FSlotArguments *local_3188;
  FArguments *local_3180;
  undefined1 *local_3178;
  TAttribute<float> *local_3170;
  TAttribute<float> *local_3168;
  FSlotArguments *local_3160;
  FArguments *local_3158;
  FArguments *local_3150;
  TSharedPtr<SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1> *local_3148;
  FSlotArguments *local_3140;
  FSlotArguments *local_3138;
  FArguments *local_3130;
  FArguments *local_3128;
  FSlotArguments *local_3120;
  FSlotArguments *local_3118;
  FArguments *local_3110;
  TAttribute<float> *local_3108;
  TAttribute<float> *local_3100;
  FSlotArguments *local_30f8;
  longlong *local_30f0;
  TSharedRef<SWidget,1> *local_30e8;
  TWeakPtr<SDrawPrimitiveDebugger,1> *local_30e0;
  TWeakPtr<SDrawPrimitiveDebugger,1> *local_30d8;
  FArguments *local_30d0;
  FArguments *local_30c8;
  TSlateDecl<SPrimitiveDebuggerDetailView,RequiredArgs::T0RequiredArgs> *local_30c0;
  FArguments *local_30b8;
  FSlotArguments *local_30b0;
  FSlotArguments *local_30a8;
  FArguments *local_30a0;
  FArguments *local_3098;
  FSlotArguments *local_3090;
  FSlotArguments *local_3088;
  FArguments *local_3080;
  FArguments *local_3078;
  TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *local_3070;
  TVector2<double>_u_0 local_3068;
  TSharedPtr<SHeaderRow,1> local_3058;
  code *local_3048;
  undefined4 local_3040;
  code *local_3038;
  undefined4 local_3030;
  TSharedPtr<SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1> local_3028;
  code *local_3018;
  undefined4 local_3010;
  code *local_3008;
  undefined4 local_3000;
  code *local_2ff8;
  undefined4 local_2ff0;
  code *local_2fe8;
  undefined4 local_2fe0;
  code *local_2fd8;
  undefined4 local_2fd0;
  code *local_2fc8;
  undefined4 local_2fc0;
  code *local_2fb8;
  undefined4 local_2fb0;
  TSharedRef<SWidget,1> local_2fa8;
  TSharedRef<SWidget,1> local_2f98;
  TSharedRef<SWidget,1> local_2f88;
  TSharedRef<SDrawPrimitiveDebugger,1> local_2f78;
  TSharedRef<SWidget,1> local_2f68;
  TSharedRef<SWidget,1> local_2f58;
  TSharedRef<SWidget,1> local_2f48;
  TSharedRef<SWidget,1> local_2f38;
  TSharedRef<SWidget,1> local_2f28;
  TSharedRef<SWidget,1> local_2f18;
  TSharedRef<SScrollBar,1> local_2f08;
  TSharedRef<SHeaderRow,1> local_2ef8;
  FText local_2ee8;
  FText local_2ed8;
  FText local_2ec8;
  FText local_2eb8;
  undefined1 local_2ea8 [16];
  pmf_9517392f local_2e98;
  undefined1 local_2e88 [16];
  pmf_9865df2d local_2e78;
  TSharedRef<SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1> local_2e68;
  undefined1 local_2e58 [16];
  pmf_0141a4eb local_2e48;
  undefined1 local_2e38 [16];
  pmf_e1d26a6b local_2e28;
  undefined1 local_2e18 [16];
  pmf_7f3b84af local_2e08;
  undefined1 local_2df8 [16];
  pmf_c1318bdd local_2de8;
  undefined1 local_2dd8 [16];
  pmf_2f43fd8f local_2dc8;
  undefined1 local_2db8 [16];
  pmf_2f43fd8f local_2da8;
  TSharedRef<SWidget,1> local_2d98;
  undefined1 local_2d88 [16];
  pmf_185feeec local_2d78;
  TSharedRef<SVerticalBox,1> local_2d68;
  TSharedRef<SHorizontalBox,1> local_2d58;
  TSharedRef<SPrimitiveDebuggerDetailView,1> local_2d48;
  TSharedRef<SScrollBox,1> local_2d38;
  TSharedRef<SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1> local_2d28;
  TSharedRef<SHorizontalBox,1> local_2d18;
  TSharedRef<SButton,1> local_2d08;
  FText local_2cf8;
  TSharedRef<SButton,1> local_2ce8;
  FText local_2cd8;
  TSharedRef<SSearchBox,1> local_2cc8;
  TSlateDecl<SScrollBar,RequiredArgs::T0RequiredArgs> local_2cb8;
  TSlateDecl<SHeaderRow,RequiredArgs::T0RequiredArgs> local_2ca0;
  TSlateDecl<SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,RequiredArgs::T0RequiredArgs>
  local_2c88;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_2c70;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_2c58;
  TSlateDecl<SPrimitiveDebuggerDetailView,RequiredArgs::T0RequiredArgs> local_2c40;
  TSlateDecl<SScrollBox,RequiredArgs::T0RequiredArgs> local_2c28;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_2c10;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_2bf8;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_2be0;
  TSlateDecl<SSearchBox,RequiredArgs::T0RequiredArgs> local_2bc8;
  TSharedPtr<SHeaderRow,1> local_2bb0;
  TSharedPtr<SScrollBar,1> local_2ba0;
  TWeakPtr<SDrawPrimitiveDebugger,1> local_2b90;
  undefined1 local_2b80 [32];
  TAttribute<float> local_2b60;
  TAttribute<float> local_2b40;
  TAttribute<float> local_2b20;
  TAttribute<UE::Math::TVector2<double>_> local_2b00;
  TAttribute<FText> local_2ad0;
  TAttribute<FText> local_2aa0;
  FSlotArguments local_2a70;
  FSlotArguments local_2988;
  FSlotArguments local_28a0;
  FSlotArguments local_27b8;
  FSlotArguments local_26d0;
  FSlotArguments local_25e8;
  FSlotArguments local_2500;
  FSlotArguments local_2418;
  FArguments local_2330;
  FArguments local_2128;
  FArguments local_1f20;
  FArguments local_1d18;
  FArguments local_1b10;
  FArguments local_1898;
  FArguments local_15f8;
  FArguments local_1330;
  FArguments local_f78;
  FArguments local_a98;
  FArguments local_558;
  undefined8 uStack_18;
  
  uStack_18 = 0x146d0b2a6;
  local_3370 = SScrollBar::FArguments::FArguments(&local_1898);
  local_3350 = SScrollBar::FArguments::Orientation(local_3370,Orient_Vertical);
  local_3360 = &local_2b00;
  local_3068._s_0.X = __real_4028000000000000;
  local_3068._s_0.Y = __real_4028000000000000;
  local_3368 = &local_3068;
  local_3358 = TAttribute<UE::Math::TVector2<double>_>::TAttribute<UE::Math::TVector2<double>_>
                         (local_3360,(TVector2<double> *)&local_3368->_s_0);
  local_3348 = SScrollBar::FArguments::Thickness(local_3350,local_3358);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_3398);
  this_00 = MakeTDecl<SScrollBar,RequiredArgs::T0RequiredArgs>
                      (&local_2cb8,"SScrollBar",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\DrawPrimitiveDebugger\\Private\\SDrawPrimitiveDebugger.cpp"
                       ,0x3d7,&local_3398);
  TSlateDecl<SScrollBar,RequiredArgs::T0RequiredArgs>::operator<<=(this_00,&local_2f08,local_3348);
  TSharedPtr<SScrollBar,1>::~TSharedPtr<SScrollBar,1>(&local_2cb8._Widget);
  SScrollBar::FArguments::~FArguments(&local_1898);
  local_3340 = SHeaderRow::FArguments::FArguments(&local_1b10);
  local_3338 = SHeaderRow::FArguments::ResizeMode(local_3340,Fill);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_3397);
  this_01 = MakeTDecl<SHeaderRow,RequiredArgs::T0RequiredArgs>
                      (&local_2ca0,"SHeaderRow",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\DrawPrimitiveDebugger\\Private\\SDrawPrimitiveDebugger.cpp"
                       ,0x3db,&local_3397);
  pTVar1 = TSlateDecl<SHeaderRow,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this_01,&local_2ef8,local_3338);
  TSharedPtr<SHeaderRow,1>::TSharedPtr<SHeaderRow,1><SHeaderRow>(&local_3058,pTVar1);
  TSharedPtr<SHeaderRow,1>::operator=(&this->ColumnHeader,&local_3058);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_3058.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_2ef8.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_2ca0._Widget.SharedReferenceCount);
  SHeaderRow::FArguments::~FArguments(&local_1b10);
  ::FName::FName(&local_3330,"Visible");
  ::FName::FName(&local_3328,"Pin");
  ::FName::FName(&local_3320,"Name");
  ::FName::FName(&local_3318,"Actor");
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_2ee8,L"PRIMITIVE_DEBUGGER",L"VisbleColumnLabel",L"Visible");
  AddColumn(this,pFVar2,&local_3330);
  FText::~FText(&local_2ee8);
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_2ed8,L"PRIMITIVE_DEBUGGER",L"PinnedColumnLabel",L"Pinned");
  AddColumn(this,pFVar2,&local_3328);
  FText::~FText(&local_2ed8);
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_2ec8,L"PRIMITIVE_DEBUGGER",L"NameColumnLabel",L"Name");
  AddColumn(this,pFVar2,&local_3320);
  FText::~FText(&local_2ec8);
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_2eb8,L"PRIMITIVE_DEBUGGER",L"ActorColumnLabel",L"Actor");
  AddColumn(this,pFVar2,&local_3318);
  FText::~FText(&local_2eb8);
  pFVar2 = FText::GetEmpty();
  FText::operator=(&this->FilterText,pFVar2);
  local_3378 = IDrawPrimitiveDebugger::Get();
  (**(code **)((longlong)*local_3378 + 0x40))(local_3378);
  local_3310 = SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>::FArguments::
               FArguments(&local_f78);
  local_32f8 = SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>::FArguments::
               ListItemsSource(local_3310,&this->VisibleEntries);
  local_3308 = &local_2bb0;
  local_3300 = TSharedPtr<SHeaderRow,1>::TSharedPtr<SHeaderRow,1>(local_3308,&this->ColumnHeader);
  local_32f0 = SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>::FArguments::
               HeaderRow(local_32f8,local_3300);
  local_3048 = MakeRowWidget;
  local_3040 = 0;
  ppcVar15 = &local_3048;
  puVar16 = local_2ea8;
  for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
    *puVar16 = *(undefined1 *)ppcVar15;
    ppcVar15 = (code **)((longlong)ppcVar15 + 1);
    puVar16 = puVar16 + 1;
  }
  puVar16 = local_2ea8;
  ppVar17 = &local_2e98;
  for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
    *(undefined1 *)ppVar17 = *puVar16;
    puVar16 = puVar16 + 1;
    ppVar17 = (pmf_9517392f *)&ppVar17->field_0x1;
  }
  local_32e8 = SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>::FArguments::
               OnGenerateRow<SDrawPrimitiveDebugger>(local_32f0,this,&local_2e98);
  local_3038 = OnRowSelectionChanged;
  local_3030 = 0;
  ppcVar15 = &local_3038;
  puVar16 = local_2e88;
  for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
    *puVar16 = *(undefined1 *)ppcVar15;
    ppcVar15 = (code **)((longlong)ppcVar15 + 1);
    puVar16 = puVar16 + 1;
  }
  puVar16 = local_2e88;
  ppVar18 = &local_2e78;
  for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
    *(undefined1 *)ppVar18 = *puVar16;
    puVar16 = puVar16 + 1;
    ppVar18 = (pmf_9865df2d *)&ppVar18->field_0x1;
  }
  local_32d0 = SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>::FArguments::
               OnSelectionChanged<SDrawPrimitiveDebugger>(local_32e8,this,&local_2e78);
  local_32e0 = &local_2ba0;
  local_32d8 = TSharedPtr<SScrollBar,1>::TSharedPtr<SScrollBar,1><SScrollBar>
                         (local_32e0,&local_2f08);
  local_32c8 = SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>::FArguments::
               ExternalScrollbar(local_32d0,local_32d8);
  local_32c0 = SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>::FArguments::
               Orientation(local_32c8,Orient_Vertical);
  local_32a8 = SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>::FArguments::
               ConsumeMouseWheel(local_32c0,Never);
  local_32b8 = local_2b80;
  local_338c[0] = SingleToggle;
  local_32b0 = TAttribute<enum_ESelectionMode::Type>::TAttribute<enum_ESelectionMode::Type>
                         (local_32b8,local_338c);
  local_32a0 = SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>::FArguments::
               SelectionMode(local_32a8,local_32b0);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_3396);
  this_02 = MakeTDecl<SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,RequiredArgs::T0RequiredArgs>
                      (&local_2c88,"SListView<FPrimitiveRowDataPtr>",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\DrawPrimitiveDebugger\\Private\\SDrawPrimitiveDebugger.cpp"
                       ,1000,&local_3396);
  pTVar3 = TSlateDecl<SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,RequiredArgs::T0RequiredArgs>
           ::operator<<=(this_02,&local_2e68,local_32a0);
  TSharedPtr<SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1>::
  TSharedPtr<SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1><SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>_>
            (&local_3028,pTVar3);
  TSharedPtr<SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1>::operator=
            (&this->Table,&local_3028);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_3028.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_2e68.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_2c88._Widget.SharedReferenceCount);
  SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>::FArguments::~FArguments
            (&local_f78);
  local_3070 = (TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *)
               &this->_padding_;
  local_3180 = SVerticalBox::FArguments::FArguments(&local_1d18);
  pFVar4 = SVerticalBox::Slot(&local_2418);
  local_3190 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar4);
  local_3238 = SHorizontalBox::FArguments::FArguments(&local_1f20);
  pFVar5 = SHorizontalBox::Slot(&local_2500);
  local_3298 = &pFVar5->field_0x18;
  pFVar5 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                     ((FSlotArgumentsMixin *)local_3298,__real_40c00000,__real_40c00000);
  local_3290 = &pFVar5->field_0x48;
  local_3278 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::HAlign
                         ((FSlotArgumentsMixin *)local_3290,HAlign_Fill);
  local_3288 = &local_2b60;
  local_338c[1] = 2;
  local_3280 = TAttribute<float>::TAttribute<float><int>(local_3288,(int *)(local_338c + 1));
  local_3248 = SHorizontalBox::FSlot::FSlotArguments::FillWidth(local_3278,local_3280);
  local_3270 = SSearchBox::FArguments::FArguments(&local_1330);
  local_3018 = GetFilterText;
  local_3010 = 0;
  ppcVar15 = &local_3018;
  puVar16 = local_2e58;
  for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
    *puVar16 = *(undefined1 *)ppcVar15;
    ppcVar15 = (code **)((longlong)ppcVar15 + 1);
    puVar16 = puVar16 + 1;
  }
  puVar16 = local_2e58;
  ppVar19 = &local_2e48;
  for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
    *(undefined1 *)ppVar19 = *puVar16;
    puVar16 = puVar16 + 1;
    ppVar19 = (pmf_0141a4eb *)&ppVar19->field_0x1;
  }
  local_3268 = SSearchBox::FArguments::InitialText<SDrawPrimitiveDebugger>
                         (local_3270,this,&local_2e48);
  local_3008 = OnFilterTextChanged;
  local_3000 = 0;
  ppcVar15 = &local_3008;
  puVar16 = local_2e38;
  for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
    *puVar16 = *(undefined1 *)ppcVar15;
    ppcVar15 = (code **)((longlong)ppcVar15 + 1);
    puVar16 = puVar16 + 1;
  }
  puVar16 = local_2e38;
  ppVar20 = &local_2e28;
  for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
    *(undefined1 *)ppVar20 = *puVar16;
    puVar16 = puVar16 + 1;
    ppVar20 = (pmf_e1d26a6b *)&ppVar20->field_0x1;
  }
  local_3260 = SSearchBox::FArguments::OnTextChanged<SDrawPrimitiveDebugger>
                         (local_3268,this,&local_2e28);
  local_2ff8 = OnFilterTextCommitted;
  local_2ff0 = 0;
  ppcVar15 = &local_2ff8;
  puVar16 = local_2e18;
  for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
    *puVar16 = *(undefined1 *)ppcVar15;
    ppcVar15 = (code **)((longlong)ppcVar15 + 1);
    puVar16 = puVar16 + 1;
  }
  puVar16 = local_2e18;
  ppVar21 = &local_2e08;
  for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
    *(undefined1 *)ppVar21 = *puVar16;
    puVar16 = puVar16 + 1;
    ppVar21 = (pmf_7f3b84af *)&ppVar21->field_0x1;
  }
  local_3250 = SSearchBox::FArguments::OnTextCommitted<SDrawPrimitiveDebugger>
                         (local_3260,this,&local_2e08);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_3395);
  local_3258 = MakeTDecl<SSearchBox,RequiredArgs::T0RequiredArgs>
                         (&local_2bc8,"SSearchBox",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\DrawPrimitiveDebugger\\Private\\SDrawPrimitiveDebugger.cpp"
                          ,0x3fe,&local_3395);
  this_03 = TSlateDecl<SSearchBox,RequiredArgs::T0RequiredArgs>::Expose<SSearchBox>
                      (local_3258,&this->SearchBox);
  pTVar6 = TSlateDecl<SSearchBox,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this_03,&local_2cc8,local_3250);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SSearchBox>(&local_2f18,pTVar6);
  local_3240 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_3248,&local_2f18);
  local_31e8 = SHorizontalBox::FArguments::operator+(local_3238,local_3240);
  pFVar5 = SHorizontalBox::Slot(&local_25e8);
  local_3230 = &pFVar5->field_0x18;
  pFVar5 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                     ((FSlotArgumentsMixin *)local_3230,__real_40c00000,__real_40c00000);
  local_31f8 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar5);
  local_3218 = SButton::FArguments::FArguments(&local_558);
  local_3228 = &local_2ad0;
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_2cd8,L"PRIMITIVE_DEBUGGER",L"RefreshButtonLabel",L"Refresh");
  local_3220 = TAttribute<FText>::TAttribute<FText>(local_3228,pFVar2);
  local_3210 = SButton::FArguments::Text(local_3218,local_3220);
  local_2fe8 = CanCaptureSingleFrame;
  local_2fe0 = 0;
  ppcVar15 = &local_2fe8;
  puVar16 = local_2df8;
  for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
    *puVar16 = *(undefined1 *)ppcVar15;
    ppcVar15 = (code **)((longlong)ppcVar15 + 1);
    puVar16 = puVar16 + 1;
  }
  puVar16 = local_2df8;
  ppVar22 = &local_2de8;
  for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
    *(undefined1 *)ppVar22 = *puVar16;
    puVar16 = puVar16 + 1;
    ppVar22 = (pmf_c1318bdd *)&ppVar22->field_0x1;
  }
  local_3208 = TSlateBaseNamedArgs<SButton>::IsEnabled<SDrawPrimitiveDebugger>
                         ((TSlateBaseNamedArgs<SButton> *)local_3210,this,&local_2de8);
  local_2fd8 = OnRefreshClick;
  local_2fd0 = 0;
  ppcVar15 = &local_2fd8;
  puVar16 = local_2dd8;
  for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
    *puVar16 = *(undefined1 *)ppcVar15;
    ppcVar15 = (code **)((longlong)ppcVar15 + 1);
    puVar16 = puVar16 + 1;
  }
  puVar16 = local_2dd8;
  ppVar23 = &local_2dc8;
  for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
    *(undefined1 *)ppVar23 = *puVar16;
    puVar16 = puVar16 + 1;
    ppVar23 = (pmf_2f43fd8f *)&ppVar23->field_0x1;
  }
  local_3200 = SButton::FArguments::OnClicked<SDrawPrimitiveDebugger>(local_3208,this,&local_2dc8);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_3394);
  pTVar7 = MakeTDecl<SButton,RequiredArgs::T0RequiredArgs>
                     (&local_2be0,"SButton",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\DrawPrimitiveDebugger\\Private\\SDrawPrimitiveDebugger.cpp"
                      ,0x407,&local_3394);
  pTVar8 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar7,&local_2ce8,local_3200);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SButton>(&local_2f28,pTVar8);
  local_31f0 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_31f8,&local_2f28);
  local_31a0 = SHorizontalBox::FArguments::operator+(local_31e8,local_31f0);
  pFVar5 = SHorizontalBox::Slot(&local_26d0);
  local_31e0 = &pFVar5->field_0x18;
  pFVar5 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                     ((FSlotArgumentsMixin *)local_31e0,__real_40c00000,__real_40c00000);
  local_31b0 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar5);
  local_31c8 = SButton::FArguments::FArguments(&local_a98);
  local_31d8 = &local_2aa0;
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_2cf8,L"PRIMITIVE_DEBUGGER",L"SaveToCSVButtonLabel",L"Save to CSV");
  local_31d0 = TAttribute<FText>::TAttribute<FText>(local_31d8,pFVar2);
  local_31c0 = SButton::FArguments::Text(local_31c8,local_31d0);
  local_2fc8 = OnSaveClick;
  local_2fc0 = 0;
  ppcVar15 = &local_2fc8;
  puVar16 = local_2db8;
  for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
    *puVar16 = *(undefined1 *)ppcVar15;
    ppcVar15 = (code **)((longlong)ppcVar15 + 1);
    puVar16 = puVar16 + 1;
  }
  puVar16 = local_2db8;
  ppVar23 = &local_2da8;
  for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
    *(undefined1 *)ppVar23 = *puVar16;
    puVar16 = puVar16 + 1;
    ppVar23 = (pmf_2f43fd8f *)&ppVar23->field_0x1;
  }
  local_31b8 = SButton::FArguments::OnClicked<SDrawPrimitiveDebugger>(local_31c0,this,&local_2da8);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_3393);
  pTVar7 = MakeTDecl<SButton,RequiredArgs::T0RequiredArgs>
                     (&local_2bf8,"SButton",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\DrawPrimitiveDebugger\\Private\\SDrawPrimitiveDebugger.cpp"
                      ,0x410,&local_3393);
  pTVar8 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar7,&local_2d08,local_31b8);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SButton>(&local_2f38,pTVar8);
  local_31a8 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_31b0,&local_2f38);
  local_3198 = SHorizontalBox::FArguments::operator+(local_31a0,local_31a8);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_3392);
  pTVar9 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                     (&local_2c10,"SHorizontalBox",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\DrawPrimitiveDebugger\\Private\\SDrawPrimitiveDebugger.cpp"
                      ,0x3f8,&local_3392);
  pTVar10 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar9,&local_2d18,local_3198);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SHorizontalBox>(&local_2f48,pTVar10);
  local_3188 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_3190,&local_2f48);
  local_3080 = SVerticalBox::FArguments::operator+(local_3180,local_3188);
  pFVar4 = SVerticalBox::Slot(&local_27b8);
  local_3178 = &pFVar4->field_0x18;
  local_3090 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)local_3178,__real_40c00000,__real_40c00000);
  local_3110 = SHorizontalBox::FArguments::FArguments(&local_2128);
  local_3160 = SHorizontalBox::Slot(&local_28a0);
  local_3170 = &local_2b40;
  local_338c[2] = 5;
  local_3168 = TAttribute<float>::TAttribute<float><int>(local_3170,(int *)(local_338c + 2));
  local_3120 = SHorizontalBox::FSlot::FSlotArguments::FillWidth(local_3160,local_3168);
  local_3158 = SScrollBox::FArguments::FArguments(&local_15f8);
  local_3150 = SScrollBox::FArguments::Orientation(local_3158,Orient_Vertical);
  local_3130 = SScrollBox::FArguments::ConsumeMouseWheel(local_3150,Always);
  local_3140 = SScrollBox::Slot(&local_2988);
  local_3148 = &this->Table;
  pTVar3 = TSharedPtr<SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1>::
           ToSharedRef(local_3148,&local_2d28);
  TSharedRef<SWidget,1>::
  TSharedRef<SWidget,1><SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>_>
            (&local_2f58,pTVar3);
  local_3138 = TSlotBase<SScrollBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_3140,&local_2f58);
  local_3128 = SScrollBox::FArguments::operator+(local_3130,local_3138);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_3391);
  this_04 = MakeTDecl<SScrollBox,RequiredArgs::T0RequiredArgs>
                      (&local_2c28,"SScrollBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\DrawPrimitiveDebugger\\Private\\SDrawPrimitiveDebugger.cpp"
                       ,0x429,&local_3391);
  pTVar11 = TSlateDecl<SScrollBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_04,&local_2d38,local_3128);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SScrollBox>(&local_2f68,pTVar11);
  local_3118 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_3120,&local_2f68);
  local_30a0 = SHorizontalBox::FArguments::operator+(local_3110,local_3118);
  local_30f8 = SHorizontalBox::Slot(&local_2a70);
  local_3108 = &local_2b20;
  local_338c[3] = 5;
  local_3100 = TAttribute<float>::TAttribute<float><int>(local_3108,(int *)(local_338c + 3));
  local_30b0 = SHorizontalBox::FSlot::FSlotArguments::FillWidth(local_30f8,local_3100);
  local_30d0 = SPrimitiveDebuggerDetailView::FArguments::FArguments(&local_2330);
  local_30e0 = &local_2b90;
  local_30f0 = &this->_padding_;
  local_30e8 = TSharedFromThis<SWidget,1>::AsShared
                         ((TSharedFromThis<SWidget,1> *)local_30f0,&local_2d98);
  TSharedRef<SDrawPrimitiveDebugger,1>::TSharedRef<SDrawPrimitiveDebugger,1><SWidget>
            (&local_2f78,local_30e8,local_338d);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_2d98);
  local_30d8 = TWeakPtr<SDrawPrimitiveDebugger,1>::
               TWeakPtr<SDrawPrimitiveDebugger,1><SDrawPrimitiveDebugger>(local_30e0,&local_2f78);
  local_30c8 = SPrimitiveDebuggerDetailView::FArguments::PrimitiveDebugger(local_30d0,local_30d8);
  local_2fb8 = DetailsPanelVisibility;
  local_2fb0 = 0;
  ppcVar15 = &local_2fb8;
  puVar16 = local_2d88;
  for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
    *puVar16 = *(undefined1 *)ppcVar15;
    ppcVar15 = (code **)((longlong)ppcVar15 + 1);
    puVar16 = puVar16 + 1;
  }
  puVar16 = local_2d88;
  ppVar24 = &local_2d78;
  for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
    *(undefined1 *)ppVar24 = *puVar16;
    puVar16 = puVar16 + 1;
    ppVar24 = (pmf_185feeec *)&ppVar24->field_0x1;
  }
  local_30b8 = TSlateBaseNamedArgs<SPrimitiveDebuggerDetailView>::Visibility<SDrawPrimitiveDebugger>
                         ((TSlateBaseNamedArgs<SPrimitiveDebuggerDetailView> *)local_30c8,this,
                          &local_2d78);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_3390);
  local_30c0 = MakeTDecl<SPrimitiveDebuggerDetailView,RequiredArgs::T0RequiredArgs>
                         (&local_2c40,"SPrimitiveDebuggerDetailView",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\DrawPrimitiveDebugger\\Private\\SDrawPrimitiveDebugger.cpp"
                          ,0x434,&local_3390);
  this_05 = TSlateDecl<SPrimitiveDebuggerDetailView,RequiredArgs::T0RequiredArgs>::
            Expose<SPrimitiveDebuggerDetailView>(local_30c0,&this->DetailView);
  pTVar12 = TSlateDecl<SPrimitiveDebuggerDetailView,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_05,&local_2d48,local_30b8);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SPrimitiveDebuggerDetailView>(&local_2f88,pTVar12);
  local_30a8 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_30b0,&local_2f88);
  local_3098 = SHorizontalBox::FArguments::operator+(local_30a0,local_30a8);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_338f);
  pTVar9 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                     (&local_2c58,"SHorizontalBox",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\DrawPrimitiveDebugger\\Private\\SDrawPrimitiveDebugger.cpp"
                      ,0x425,&local_338f);
  pTVar10 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar9,&local_2d58,local_3098);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SHorizontalBox>(&local_2f98,pTVar10);
  local_3088 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_3090,&local_2f98);
  local_3078 = SVerticalBox::FArguments::operator+(local_3080,local_3088);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_338e);
  this_06 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                      (&local_2c70,"SVerticalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\DrawPrimitiveDebugger\\Private\\SDrawPrimitiveDebugger.cpp"
                       ,0x3f4,&local_338e);
  pTVar13 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_06,&local_2d68,local_3078);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SVerticalBox>(&local_2fa8,pTVar13);
  TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::operator[]
            (local_3070,&local_2fa8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_2fa8);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_2d68.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_2c70._Widget.SharedReferenceCount);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_2f98);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_2d58.SharedReferenceCount);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>(&local_2c58);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_2f88);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_2d48.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_2c40._Widget.SharedReferenceCount);
  TSharedRef<SDrawPrimitiveDebugger,1>::~TSharedRef<SDrawPrimitiveDebugger,1>(&local_2f78);
  TWeakPtr<SDrawPrimitiveDebugger,1>::~TWeakPtr<SDrawPrimitiveDebugger,1>
            (&local_2330._PrimitiveDebugger);
  TSlateBaseNamedArgs<SPrimitiveDebuggerDetailView>::
  ~TSlateBaseNamedArgs<SPrimitiveDebuggerDetailView>
            ((TSlateBaseNamedArgs<SPrimitiveDebuggerDetailView> *)&local_2330);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_2a70);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_2f68);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_2d38.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_2c28._Widget.SharedReferenceCount);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_2f58);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_2d28.SharedReferenceCount);
  SScrollBox::FSlot::FSlotArguments::~FSlotArguments(&local_2988);
  SScrollBox::FArguments::~FArguments(&local_15f8);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_28a0);
  TArray<SHorizontalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>::
  ~TArray<SHorizontalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>(&local_2128._Slots);
  TSlateBaseNamedArgs<SHorizontalBox>::~TSlateBaseNamedArgs<SHorizontalBox>
            ((TSlateBaseNamedArgs<SHorizontalBox> *)&local_2128);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_27b8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_2f48);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_2d18.SharedReferenceCount);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>(&local_2c10);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_2f38);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_2d08.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_2bf8._Widget.SharedReferenceCount);
  FText::~FText(&local_2cf8);
  SButton::FArguments::~FArguments(&local_a98);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_26d0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_2f28);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_2ce8.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_2be0._Widget.SharedReferenceCount);
  FText::~FText(&local_2cd8);
  SButton::FArguments::~FArguments(&local_558);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_25e8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_2f18);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_2cc8.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_2bc8._Widget.SharedReferenceCount);
  SSearchBox::FArguments::~FArguments(&local_1330);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_2500);
  TArray<SHorizontalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>::
  ~TArray<SHorizontalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>(&local_1f20._Slots);
  TSlateBaseNamedArgs<SHorizontalBox>::~TSlateBaseNamedArgs<SHorizontalBox>
            ((TSlateBaseNamedArgs<SHorizontalBox> *)&local_1f20);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_2418);
  TArray<SVerticalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>::
  ~TArray<SVerticalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>(&local_1d18._Slots);
  TSlateBaseNamedArgs<SVerticalBox>::~TSlateBaseNamedArgs<SVerticalBox>
            ((TSlateBaseNamedArgs<SVerticalBox> *)&local_1d18);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_2f08.SharedReferenceCount);
  return;
}

// DetailsPanelVisibility @ 146d14d60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

EVisibility __thiscall SDrawPrimitiveDebugger::DetailsPanelVisibility(SDrawPrimitiveDebugger *this)

{
  uchar *in_RDX;
  EVisibility *local_20;
  
  if ((this->Selection == (FPrimitiveDebuggerEntry *)0x0) ||
     ((this->Selection->Data).Object == (FPrimitiveInfo *)0x0)) {
    local_20 = &EVisibility::Collapsed;
  }
  else {
    local_20 = &EVisibility::Visible;
  }
  *in_RDX = (local_20->Value).Value;
  return (EVisibility)SUB81(in_RDX,0);
}

// DoesEntryHaveForcedLOD @ 146d15240

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
SDrawPrimitiveDebugger::DoesEntryHaveForcedLOD
          (SDrawPrimitiveDebugger *this,FPrimitiveComponentId param_1)

{
  int iVar1;
  FPrimitiveDebuggerEntry *this_00;
  FPrimitiveInfo *pFVar2;
  UObject *pUVar3;
  UStaticMeshComponent *pUVar4;
  USkinnedMeshComponent *this_01;
  FPrimitiveComponentId local_res10 [6];
  bool local_68;
  
  local_res10[0].PrimIDValue = param_1.PrimIDValue;
  this_00 = TMapBase<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,0>_>
            ::Find((TMapBase<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,0>_>
                    *)&this->Entries,local_res10);
  if (this_00 == (FPrimitiveDebuggerEntry *)0x0) {
    local_68 = false;
  }
  else {
    local_68 = false;
    pFVar2 = TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::operator->(&this_00->Data);
    pUVar3 = FWeakObjectPtr::Get(&(pFVar2->ComponentUObject).WeakPtr);
    pUVar4 = Cast<UStaticMeshComponent,UObject>(pUVar3);
    if (pUVar4 == (UStaticMeshComponent *)0x0) {
      pFVar2 = TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::operator->(&this_00->Data);
      pUVar3 = FWeakObjectPtr::Get(&(pFVar2->ComponentUObject).WeakPtr);
      this_01 = Cast<USkinnedMeshComponent,UObject>(pUVar3);
      if (this_01 != (USkinnedMeshComponent *)0x0) {
        iVar1 = USkinnedMeshComponent::GetForcedLOD(this_01);
        local_68 = iVar1 != 0;
      }
    }
    else {
      local_68 = pUVar4->ForcedLodModel != 0;
    }
  }
  return local_68;
}

// FlushAllDebugBones @ 146d17f80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall SDrawPrimitiveDebugger::FlushAllDebugBones(SDrawPrimitiveDebugger *this)

{
  bool bVar1;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar2;
  TSparseSetElement<TTuple<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry>_>
  *pTVar3;
  FPrimitiveDebuggerEntry *this_00;
  FPrimitiveInfo *pFVar4;
  UObject *pUVar5;
  USkinnedMeshComponent *this_01;
  longlong lVar6;
  TRangedForIterator *pTVar7;
  TRangedForIterator *pTVar8;
  TRangedForIterator local_120;
  TRangedForIterator local_f0;
  TRangedForIterator local_c0;
  TRangedForIterator local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_60;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_40;
  
  pTVar2 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
           TConstSetBitIterator<FDefaultBitArrayAllocator>
                     (&local_60,(TBitArray<FDefaultBitArrayAllocator> *)&(this->Entries).field_0x10)
  ;
  TSparseArray<TSparseSetElement<TTuple<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::TRangedForIterator::TRangedForIterator
            (&local_f0,
             (TSparseArray<TSparseSetElement<TTuple<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Entries,pTVar2);
  pTVar7 = &local_f0;
  pTVar8 = &local_120;
  for (lVar6 = 0x30; lVar6 != 0; lVar6 = lVar6 + -1) {
    *(char *)&pTVar8->_padding_ = (char)pTVar7->_padding_;
    pTVar7 = (TRangedForIterator *)((longlong)&pTVar7->_padding_ + 1);
    pTVar8 = (TRangedForIterator *)((longlong)&pTVar8->_padding_ + 1);
  }
  pTVar2 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
           TConstSetBitIterator<FDefaultBitArrayAllocator>
                     (&local_40,(TBitArray<FDefaultBitArrayAllocator> *)&(this->Entries).field_0x10,
                      *(int *)&(this->Entries).field_0x28);
  TSparseArray<TSparseSetElement<TTuple<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::TRangedForIterator::TRangedForIterator
            (&local_c0,
             (TSparseArray<TSparseSetElement<TTuple<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Entries,pTVar2);
  pTVar7 = &local_c0;
  pTVar8 = &local_90;
  for (lVar6 = 0x30; lVar6 != 0; lVar6 = lVar6 + -1) {
    *(char *)&pTVar8->_padding_ = (char)pTVar7->_padding_;
    pTVar7 = (TRangedForIterator *)((longlong)&pTVar7->_padding_ + 1);
    pTVar8 = (TRangedForIterator *)((longlong)&pTVar8->_padding_ + 1);
  }
  while (bVar1 = TSparseArray<TSparseSetElement<TTuple<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 ::TRangedForIterator::operator!=(&local_120,&local_90), bVar1) {
    pTVar3 = TSparseArray<TSparseSetElement<TTuple<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             ::operator[]((TSparseArray<TSparseSetElement<TTuple<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)local_120._padding_,local_120._padding_._4_4_);
    get<0,TTuple<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry>_&>
              ((TTuple<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry> *)
               pTVar3);
    this_00 = get<1,TTuple<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry>_&>
                        ((TTuple<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry>
                          *)pTVar3);
    if ((this_00->bShowingDebugBones != 0) && ((this_00->Data).Object != (FPrimitiveInfo *)0x0)) {
      pFVar4 = TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::operator->(&this_00->Data);
      bVar1 = FViewDebugInfo::FPrimitiveInfo::IsPrimitiveValid(pFVar4);
      if (bVar1) {
        pFVar4 = TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::operator->(&this_00->Data);
        pUVar5 = FWeakObjectPtr::Get(&(pFVar4->ComponentUObject).WeakPtr);
        this_01 = Cast<USkinnedMeshComponent,UObject>(pUVar5);
        if (this_01 != (USkinnedMeshComponent *)0x0) {
          USkinnedMeshComponent::SetDebugDrawColor(this_01,&FLinearColor::Transparent);
          USkinnedMeshComponent::SetDrawDebugSkeleton(this_01,false);
          UActorComponent::MarkRenderStateDirty((UActorComponent *)this_01);
        }
        this_00->bShowingDebugBones = '\0';
      }
    }
    TSparseArray<TSparseSetElement<TTuple<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::TBaseIterator<0>::operator++((TBaseIterator<0> *)&local_120);
  }
  return;
}

// FlushAllDebugBounds @ 146d18260

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELineBatcherType": Some values do not have unique names */

void __thiscall SDrawPrimitiveDebugger::FlushAllDebugBounds(SDrawPrimitiveDebugger *this)

{
  bool bVar1;
  UWorld *this_00;
  ULineBatchComponent *this_01;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar2;
  TSparseSetElement<FPrimitiveComponentId> *pTVar3;
  longlong lVar4;
  TRangedForIterator *pTVar5;
  TRangedForIterator *pTVar6;
  TRangedForIterator local_118;
  TRangedForIterator local_e8;
  TRangedForIterator local_b8;
  TRangedForIterator local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_38;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->ActiveWorld).WeakPtr);
  if (bVar1) {
    this_00 = (UWorld *)FWeakObjectPtr::Get(&(this->ActiveWorld).WeakPtr);
    this_01 = UWorld::GetLineBatcher(this_00,WorldPersistent);
    if (this_01 != (ULineBatchComponent *)0x0) {
      pTVar2 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
               TConstSetBitIterator<FDefaultBitArrayAllocator>
                         (&local_58,
                          (TBitArray<FDefaultBitArrayAllocator> *)
                          &(this->EntriesShowingDebugBounds).Elements.field_0x10);
      TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::TRangedForIterator
                (&local_e8,&(this->EntriesShowingDebugBounds).Elements,pTVar2);
      pTVar5 = &local_e8;
      pTVar6 = &local_118;
      for (lVar4 = 0x30; lVar4 != 0; lVar4 = lVar4 + -1) {
        *(char *)&pTVar6->_padding_ = (char)pTVar5->_padding_;
        pTVar5 = (TRangedForIterator *)((longlong)&pTVar5->_padding_ + 1);
        pTVar6 = (TRangedForIterator *)((longlong)&pTVar6->_padding_ + 1);
      }
      pTVar2 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
               TConstSetBitIterator<FDefaultBitArrayAllocator>
                         (&local_38,
                          (TBitArray<FDefaultBitArrayAllocator> *)
                          &(this->EntriesShowingDebugBounds).Elements.field_0x10,
                          *(int *)&(this->EntriesShowingDebugBounds).Elements.field_0x28);
      TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::TRangedForIterator
                (&local_b8,&(this->EntriesShowingDebugBounds).Elements,pTVar2);
      pTVar5 = &local_b8;
      pTVar6 = &local_88;
      for (lVar4 = 0x30; lVar4 != 0; lVar4 = lVar4 + -1) {
        *(char *)&pTVar6->_padding_ = (char)pTVar5->_padding_;
        pTVar5 = (TRangedForIterator *)((longlong)&pTVar5->_padding_ + 1);
        pTVar6 = (TRangedForIterator *)((longlong)&pTVar6->_padding_ + 1);
      }
      while (bVar1 = TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     ::TRangedForIterator::operator!=(&local_118,&local_88), bVar1) {
        pTVar3 = TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 ::operator[]((TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                               *)local_118._padding_,local_118._padding_._4_4_);
        ULineBatchComponent::ClearBatch(this_01,*(uint *)pTVar3);
        TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TBaseIterator<0>::operator++((TBaseIterator<0> *)&local_118);
      }
    }
  }
  TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>::Empty
            (&this->EntriesShowingDebugBounds,0);
  return;
}

// FlushAllDebugVisualizations @ 146d184c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall SDrawPrimitiveDebugger::FlushAllDebugVisualizations(SDrawPrimitiveDebugger *this)

{
  FlushAllDebugBounds(this);
  FlushAllDebugBones(this);
  return;
}

// FlushDebugVisualizationsForEntry @ 146d184f0

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
SDrawPrimitiveDebugger::FlushDebugVisualizationsForEntry
          (SDrawPrimitiveDebugger *this,FPrimitiveComponentId param_1)

{
  SetShowDebugBoundsForEntry(this,param_1,false);
  SetShowDebugBonesForEntry(this,param_1,false);
  return;
}

// GetCurrentSelection @ 146d1e190

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> * __thiscall
SDrawPrimitiveDebugger::GetCurrentSelection
          (SDrawPrimitiveDebugger *this,
          TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> *__return_storage_ptr__)

{
  bool bVar1;
  TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> *local_40;
  TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> local_30;
  TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> local_20 [2];
  
  bVar1 = this->Selection == (FPrimitiveDebuggerEntry *)0x0;
  if (bVar1) {
    local_40 = TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::
               TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>(&local_30,(FNullTag *)0x0);
  }
  else {
    local_40 = TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::
               TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>(local_20,&this->Selection->Data);
  }
  TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::
  TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>(__return_storage_ptr__,local_40);
  if (bVar1) {
    TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::
    ~TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>(&local_30);
  }
  else {
    TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::
    ~TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>(local_20);
  }
  return __return_storage_ptr__;
}

// GetCurrentSelectionId @ 146d1e250

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPrimitiveComponentId __thiscall
SDrawPrimitiveDebugger::GetCurrentSelectionId(SDrawPrimitiveDebugger *this)

{
  uint *in_RDX;
  FPrimitiveComponentId local_28;
  FPrimitiveComponentId local_24;
  FPrimitiveComponentId *local_20;
  
  if (this->Selection == (FPrimitiveDebuggerEntry *)0x0) {
    local_20 = FPrimitiveComponentId::FPrimitiveComponentId(&local_24);
  }
  else {
    TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::operator->(&this->Selection->Data);
    local_20 = &local_28;
  }
  *in_RDX = local_20->PrimIDValue;
  return (FPrimitiveComponentId)(uint)in_RDX;
}

// GetFilterText @ 146d1e3c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FText * __thiscall
SDrawPrimitiveDebugger::GetFilterText(SDrawPrimitiveDebugger *this,FText *__return_storage_ptr__)

{
  FText::FText(__return_storage_ptr__,&this->FilterText);
  return __return_storage_ptr__;
}

// HandleActorCleanup @ 146d228a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
SDrawPrimitiveDebugger::HandleActorCleanup(SDrawPrimitiveDebugger *this,AActor *param_1)

{
  int iVar1;
  FPrimitiveInfo *pFVar2;
  TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> *pTVar3;
  longlong lVar4;
  bool *pbVar5;
  undefined1 auStack_1c8 [32];
  undefined1 local_1a8;
  undefined1 local_1a7;
  bool local_1a6 [4];
  undefined1 local_1a2;
  FPrimitiveComponentId local_1a0;
  uint local_19c;
  uint local_198;
  TArray<UPrimitiveComponent_*,TSizedDefaultAllocator<32>_> *local_190;
  int local_188;
  int local_184;
  uint local_180;
  TArray<UPrimitiveComponent_*,TSizedDefaultAllocator<32>_> local_178;
  TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_168;
  FPrimitiveComponentId *local_160;
  SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_> *local_158;
  TCheckedPointerIterator<UPrimitiveComponent_*,int,0> local_150;
  FScriptContainerElement *local_128;
  FScriptContainerElement *local_120;
  UPrimitiveComponent **local_118;
  UPrimitiveComponent *local_110;
  TMap<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,0>_>
  *local_108;
  TArray<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>,TSizedDefaultAllocator<32>_> *local_100
  ;
  TArray<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>,TSizedDefaultAllocator<32>_> *local_f8;
  TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> *local_f0;
  FPrimitiveComponentId local_e8 [2];
  TCheckedPointerIterator<UPrimitiveComponent_*,int,0> local_e0;
  TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> local_c8;
  TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator> local_b8
  ;
  <lambda_1> local_68;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_178.AllocatorInstance);
  local_178.ArrayNum = 0;
  local_178.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_178.AllocatorInstance);
  TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_b8.Elements);
  TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>::
  ForElementType<FSetElementId>(&local_b8.Hash);
  local_b8.HashSize = 0;
  AActor::GetComponents<UPrimitiveComponent,TSizedDefaultAllocator<32>_>(param_1,&local_178,false);
  local_188 = local_178.ArrayNum;
  TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>::Reserve
            (&local_b8,local_178.ArrayNum);
  local_190 = &local_178;
  TCheckedPointerIterator<UPrimitiveComponent_*,int,0>::
  TCheckedPointerIterator<UPrimitiveComponent_*,int,0>
            (&local_150,&local_178.ArrayNum,(UPrimitiveComponent **)local_178.AllocatorInstance.Data
            );
  local_128 = (local_190->AllocatorInstance).Data;
  local_184 = local_190->ArrayNum;
  local_120 = local_128;
  TCheckedPointerIterator<UPrimitiveComponent_*,int,0>::
  TCheckedPointerIterator<UPrimitiveComponent_*,int,0>
            (&local_e0,&local_190->ArrayNum,
             (UPrimitiveComponent **)(local_128 + (longlong)local_184 * 8));
  while( true ) {
    if (*local_150.CurrentNum != local_150.InitialNum) {
      pbVar5 = local_1a6;
      for (lVar4 = 1; lVar4 != 0; lVar4 = lVar4 + -1) {
        *pbVar5 = false;
        pbVar5 = pbVar5 + 1;
      }
      `TCheckedPointerIterator<UPrimitiveComponent_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_1a6);
    }
    local_1a6[1] = local_150.Ptr != local_e0.Ptr;
    local_19c = (uint)local_1a6[1];
    if (!local_1a6[1]) break;
    local_118 = local_150.Ptr;
    local_110 = *local_150.Ptr;
    UPrimitiveComponent::GetPrimitiveSceneId(local_110);
    FlushDebugVisualizationsForEntry(this,local_1a0);
    local_108 = &this->Entries;
    TMapBase<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,0>_>
    ::Remove((TMapBase<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,0>_>
              *)local_108,&local_1a0);
    TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>::
    Emplace<FPrimitiveComponentId_const_&>(&local_b8,local_e8,(bool *)&local_1a0);
    local_150.Ptr = local_150.Ptr + 1;
  }
  `SDrawPrimitiveDebugger::HandleActorCleanup'::__l2::<lambda_1>::<lambda_1>(&local_68,&local_b8);
  local_100 = &this->AvailableEntries;
  TArray<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>,TSizedDefaultAllocator<32>_>::
  RemoveAll<_SDrawPrimitiveDebugger::HandleActorCleanup_::__l2::<lambda_1>_>(local_100,&local_68);
  local_f8 = &this->VisibleEntries;
  TArray<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>,TSizedDefaultAllocator<32>_>::
  RemoveAll<_SDrawPrimitiveDebugger::HandleActorCleanup_::__l2::<lambda_1>_>(local_f8,&local_68);
  if ((this->Selection != (FPrimitiveDebuggerEntry *)0x0) &&
     (local_1a8 = (this->Selection->Data).Object != (FPrimitiveInfo *)0x0,
     local_1a6[2] = (bool)local_1a8, (bool)local_1a8)) {
    pFVar2 = TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::operator->(&this->Selection->Data)
    ;
    local_160 = &pFVar2->ComponentId;
    local_180 = ::GetTypeHash((FPrimitiveComponentId)local_160->PrimIDValue);
    iVar1 = TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FPrimitiveComponentId>(&local_b8,local_180,local_160);
    local_1a6[3] = iVar1 != -1;
    local_198 = (uint)local_1a6[3];
    if (local_1a6[3]) {
      local_f0 = &local_c8;
      pTVar3 = TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::
               TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>(local_f0,(FNullTag *)0x0);
      OnRowSelectionChanged(this,pTVar3,Direct);
    }
  }
  local_1a7 = (this->Table).Object !=
              (SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_> *)0x0;
  local_1a2 = local_1a7;
  if ((bool)local_1a7) {
    local_158 = TSharedPtr<SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1>::
                operator->(&this->Table);
    (**(code **)(local_158->_padding_ + 0x248))(local_158);
  }
  local_168 = (TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)&local_68;
  local_68.PrimitiveComponentIds.HashSize = 0;
  TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>::
  ~ForElementType<FSetElementId>(&local_68.PrimitiveComponentIds.Hash);
  TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (local_168);
  local_b8.HashSize = 0;
  TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>::
  ~ForElementType<FSetElementId>(&local_b8.Hash);
  TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_b8.Elements);
  TArray<UPrimitiveComponent_*,TSizedDefaultAllocator<32>_>::
  ~TArray<UPrimitiveComponent_*,TSizedDefaultAllocator<32>_>(&local_178);
  return;
}

// IsEntryPinned @ 146d239f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
SDrawPrimitiveDebugger::IsEntryPinned
          (SDrawPrimitiveDebugger *this,TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> *param_1
          )

{
  FPrimitiveInfo *pFVar1;
  bool local_17;
  
  if (param_1->Object == (FPrimitiveInfo *)0x0) {
    local_17 = false;
  }
  else {
    pFVar1 = TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::operator->(param_1);
    local_17 = IsEntryPinned(this,(FPrimitiveComponentId)(pFVar1->ComponentId).PrimIDValue);
  }
  TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::
  ~TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>(param_1);
  return local_17;
}

// IsEntryPinned @ 146d23a70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
SDrawPrimitiveDebugger::IsEntryPinned(SDrawPrimitiveDebugger *this,FPrimitiveComponentId param_1)

{
  FPrimitiveDebuggerEntry *pFVar1;
  FPrimitiveComponentId local_res10 [6];
  bool local_28;
  
  local_res10[0].PrimIDValue = param_1.PrimIDValue;
  pFVar1 = TMapBase<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,0>_>
           ::Find((TMapBase<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,0>_>
                   *)&this->Entries,local_res10);
  if ((pFVar1 == (FPrimitiveDebuggerEntry *)0x0) || (pFVar1->bPinned == 0)) {
    local_28 = false;
  }
  else {
    local_28 = true;
  }
  return local_28;
}

// IsEntryShowingDebugBones @ 146d23af0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
SDrawPrimitiveDebugger::IsEntryShowingDebugBones
          (SDrawPrimitiveDebugger *this,FPrimitiveComponentId param_1)

{
  bool bVar1;
  FPrimitiveDebuggerEntry *pFVar2;
  FPrimitiveComponentId local_res10 [6];
  
  local_res10[0].PrimIDValue = param_1.PrimIDValue;
  pFVar2 = TMapBase<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,0>_>
           ::Find((TMapBase<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,0>_>
                   *)&this->Entries,local_res10);
  if (pFVar2 == (FPrimitiveDebuggerEntry *)0x0) {
    bVar1 = false;
  }
  else {
    bVar1 = pFVar2->bShowingDebugBones;
  }
  return bVar1;
}

// IsEntryShowingDebugBounds @ 146d23b70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
SDrawPrimitiveDebugger::IsEntryShowingDebugBounds
          (SDrawPrimitiveDebugger *this,FPrimitiveComponentId param_1)

{
  FPrimitiveDebuggerEntry *pFVar1;
  FPrimitiveComponentId local_res10 [6];
  bool local_28;
  
  local_res10[0].PrimIDValue = param_1.PrimIDValue;
  pFVar1 = TMapBase<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,0>_>
           ::Find((TMapBase<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,0>_>
                   *)&this->Entries,local_res10);
  if ((pFVar1 == (FPrimitiveDebuggerEntry *)0x0) || (pFVar1->bShowingDebugBounds == 0)) {
    local_28 = false;
  }
  else {
    local_28 = true;
  }
  return local_28;
}

// IsEntryVisible @ 146d23bf0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
SDrawPrimitiveDebugger::IsEntryVisible
          (SDrawPrimitiveDebugger *this,TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> *param_1
          )

{
  FPrimitiveInfo *pFVar1;
  bool local_17;
  
  if (param_1->Object == (FPrimitiveInfo *)0x0) {
    local_17 = false;
  }
  else {
    pFVar1 = TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::operator->(param_1);
    local_17 = IsEntryVisible(this,(FPrimitiveComponentId)(pFVar1->ComponentId).PrimIDValue);
  }
  TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::
  ~TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>(param_1);
  return local_17;
}

// IsEntryVisible @ 146d23c70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
SDrawPrimitiveDebugger::IsEntryVisible(SDrawPrimitiveDebugger *this,FPrimitiveComponentId param_1)

{
  FPrimitiveDebuggerEntry *pFVar1;
  FPrimitiveComponentId local_res10 [6];
  bool local_28;
  
  local_res10[0].PrimIDValue = param_1.PrimIDValue;
  pFVar1 = TMapBase<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,0>_>
           ::Find((TMapBase<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,0>_>
                   *)&this->Entries,local_res10);
  if ((pFVar1 == (FPrimitiveDebuggerEntry *)0x0) || (pFVar1->bHidden != 0)) {
    local_28 = false;
  }
  else {
    local_28 = true;
  }
  return local_28;
}

// IsLiveCaptureChecked @ 146d24090

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

ECheckBoxState __thiscall SDrawPrimitiveDebugger::IsLiveCaptureChecked(SDrawPrimitiveDebugger *this)

{
  char cVar1;
  IDrawPrimitiveDebugger *pIVar2;
  
  pIVar2 = IDrawPrimitiveDebugger::Get();
  cVar1 = (**(code **)((longlong)*pIVar2 + 0x48))(pIVar2);
  return cVar1 != '\0';
}

// MakeRowWidget @ 146d27630

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TSharedRef<ITableRow,1> * __thiscall
SDrawPrimitiveDebugger::MakeRowWidget
          (SDrawPrimitiveDebugger *this,TSharedRef<ITableRow,1> *__return_storage_ptr__,
          TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> *param_1,
          TSharedRef<STableViewBase,1> *param_2)

{
  FArguments *pFVar1;
  TSharedRef<SWidget,1> *pTVar2;
  TWeakPtr<SDrawPrimitiveDebugger,1> *pTVar3;
  TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> *pTVar4;
  T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&> TVar5;
  TSlateDecl<SDrawPrimitiveDebuggerListViewRow,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
  *this_00;
  TSharedRef<SDrawPrimitiveDebuggerListViewRow,1> *pTVar6;
  FStaticCastTag local_2e8;
  TSharedRef<SDrawPrimitiveDebugger,1> local_298;
  undefined1 local_288 [24];
  TSharedRef<SDrawPrimitiveDebuggerListViewRow,1> local_270;
  TSlateDecl<SDrawPrimitiveDebuggerListViewRow,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
  local_260;
  TWeakPtr<SDrawPrimitiveDebugger,1> local_248;
  TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> local_238;
  FArguments local_228;
  
  pFVar1 = SDrawPrimitiveDebuggerListViewRow::FArguments::FArguments(&local_228);
  pTVar2 = TSharedFromThis<SWidget,1>::AsShared
                     ((TSharedFromThis<SWidget,1> *)&this->_padding_,
                      (TSharedRef<SWidget,1> *)(local_288 + 8));
  TSharedRef<SDrawPrimitiveDebugger,1>::TSharedRef<SDrawPrimitiveDebugger,1><SWidget>
            (&local_298,pTVar2,local_2e8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>((TSharedRef<SWidget,1> *)(local_288 + 8));
  pTVar3 = TWeakPtr<SDrawPrimitiveDebugger,1>::
           TWeakPtr<SDrawPrimitiveDebugger,1><SDrawPrimitiveDebugger>(&local_248,&local_298);
  pFVar1 = SDrawPrimitiveDebuggerListViewRow::FArguments::DrawPrimitiveDebugger(pFVar1,pTVar3);
  pTVar4 = TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::
           TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>(&local_238,param_1);
  pFVar1 = SDrawPrimitiveDebuggerListViewRow::FArguments::RowDataPtr(pFVar1,pTVar4);
  TVar5 = RequiredArgs::MakeRequiredArgs<TSharedRef<STableViewBase,1>_const_&>
                    ((TSharedRef<STableViewBase,1> *)local_288);
  this_00 = MakeTDecl<SDrawPrimitiveDebuggerListViewRow,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                      (&local_260,"SDrawPrimitiveDebuggerListViewRow",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\DrawPrimitiveDebugger\\Private\\SDrawPrimitiveDebugger.cpp"
                       ,0x45c,(T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&> *)TVar5.Arg0);
  pTVar6 = TSlateDecl<SDrawPrimitiveDebuggerListViewRow,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
           ::operator<<=(this_00,&local_270,pFVar1);
  TSharedRef<ITableRow,1>::TSharedRef<ITableRow,1><SDrawPrimitiveDebuggerListViewRow>
            (__return_storage_ptr__,pTVar6);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_270.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_260._Widget.SharedReferenceCount);
  TSharedRef<SDrawPrimitiveDebugger,1>::~TSharedRef<SDrawPrimitiveDebugger,1>(&local_298);
  TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::
  ~TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>(&local_228._RowDataPtr);
  TWeakPtr<SDrawPrimitiveDebugger,1>::~TWeakPtr<SDrawPrimitiveDebugger,1>
            (&local_228._DrawPrimitiveDebugger);
  TSlateBaseNamedArgs<SDrawPrimitiveDebuggerListViewRow>::
  ~TSlateBaseNamedArgs<SDrawPrimitiveDebuggerListViewRow>
            ((TSlateBaseNamedArgs<SDrawPrimitiveDebuggerListViewRow> *)&local_228);
  TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::
  ~TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>(param_1);
  return __return_storage_ptr__;
}

// OnChangeEntryPinned @ 146d28120

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
SDrawPrimitiveDebugger::OnChangeEntryPinned
          (SDrawPrimitiveDebugger *this,ECheckBoxState param_1,
          TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> *param_2)

{
  FPrimitiveInfo *pFVar1;
  FPrimitiveDebuggerEntry *pFVar2;
  SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_> *pSVar3;
  
  if ((param_1 != Undetermined) && (param_2->Object != (FPrimitiveInfo *)0x0)) {
    pFVar1 = TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::operator->(param_2);
    pFVar2 = TMapBase<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,0>_>
             ::Find((TMapBase<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,0>_>
                     *)&this->Entries,&pFVar1->ComponentId);
    pFVar2->bPinned = param_1 == Checked;
  }
  UpdateVisibleRows(this);
  if ((this->Table).Object != (SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_> *)0x0
     ) {
    pSVar3 = TSharedPtr<SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1>::
             operator->(&this->Table);
    (**(code **)(pSVar3->_padding_ + 0x248))(pSVar3);
  }
  TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::
  ~TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>(param_2);
  return;
}

// OnChangeEntryVisibility @ 146d28250

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
SDrawPrimitiveDebugger::OnChangeEntryVisibility
          (SDrawPrimitiveDebugger *this,ECheckBoxState param_1,
          TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> *param_2)

{
  bool bVar1;
  FPrimitiveInfo *pFVar2;
  UPrimitiveComponent *this_00;
  FPrimitiveDebuggerEntry *local_18;
  
  if (param_2->Object != (FPrimitiveInfo *)0x0) {
    pFVar2 = TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::operator->(param_2);
    bVar1 = FViewDebugInfo::FPrimitiveInfo::IsPrimitiveValid(pFVar2);
    if (bVar1) {
      if (param_2->Object == (FPrimitiveInfo *)0x0) {
        local_18 = (FPrimitiveDebuggerEntry *)0x0;
      }
      else {
        pFVar2 = TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::operator->(param_2);
        local_18 = TMapBase<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,0>_>
                   ::Find((TMapBase<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,0>_>
                           *)&this->Entries,&pFVar2->ComponentId);
      }
      pFVar2 = TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::operator->(param_2);
      this_00 = IPrimitiveComponent::GetUObject<UPrimitiveComponent>(pFVar2->ComponentInterface);
      if (local_18 != (FPrimitiveDebuggerEntry *)0x0) {
        if ((this_00 == (UPrimitiveComponent *)0x0) ||
           (bVar1 = FInternalUObjectBaseUtilityIsValidFlagsChecker::CheckObjectValidBasedOnItsFlags
                              ((UObject *)this_00), !bVar1)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if ((bVar1) && (param_1 != Undetermined)) {
          USceneComponent::SetVisibility((USceneComponent *)this_00,param_1 == Checked,false);
          if (param_1 == Unchecked) {
            local_18->bHidden = '\x01';
            local_18->bRetainDuringRefresh = '\x01';
          }
          else if (param_1 == Checked) {
            local_18->bHidden = '\0';
            local_18->bRetainDuringRefresh = '\0';
          }
        }
      }
      TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::
      ~TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>(param_2);
      return;
    }
  }
  TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::
  ~TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>(param_2);
  return;
}

// OnFilterTextChanged @ 146d28c30

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
SDrawPrimitiveDebugger::OnFilterTextChanged(SDrawPrimitiveDebugger *this,FText *param_1)

{
  SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_> *pSVar1;
  
  FText::operator=(&this->FilterText,param_1);
  UpdateVisibleRows(this);
  if ((this->Table).Object != (SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_> *)0x0
     ) {
    pSVar1 = TSharedPtr<SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1>::
             operator->(&this->Table);
    (**(code **)(pSVar1->_padding_ + 0x248))(pSVar1);
  }
  return;
}

// OnFilterTextCommitted @ 146d28cd0

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
SDrawPrimitiveDebugger::OnFilterTextCommitted
          (SDrawPrimitiveDebugger *this,FText *param_1,Type param_2)

{
  SSearchBox *this_00;
  FText *pFVar1;
  TAttribute<FText> local_40;
  
  if (param_2 == OnCleared) {
    this_00 = TSharedPtr<SSearchBox,1>::operator->(&this->SearchBox);
    pFVar1 = FText::GetEmpty();
    TAttribute<FText>::TAttribute<FText><FText>(&local_40,pFVar1);
    SEditableTextBox::SetText((SEditableTextBox *)this_00,&local_40);
    TAttribute<FText>::~TAttribute<FText>(&local_40);
    pFVar1 = FText::GetEmpty();
    OnFilterTextChanged(this,pFVar1);
  }
  return;
}

// OnRefreshClick @ 146d2b130

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FReply * __thiscall
SDrawPrimitiveDebugger::OnRefreshClick(SDrawPrimitiveDebugger *this,FReply *__return_storage_ptr__)

{
  IDrawPrimitiveDebugger *pIVar1;
  
  pIVar1 = IDrawPrimitiveDebugger::Get();
  (**(code **)((longlong)*pIVar1 + 0x40))(pIVar1);
  FReply::Handled(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// OnRowSelectionChanged @ 146d2b180

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
SDrawPrimitiveDebugger::OnRowSelectionChanged
          (SDrawPrimitiveDebugger *this,TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> *param_1
          ,Type param_2)

{
  bool bVar1;
  SPrimitiveDebuggerDetailView *pSVar2;
  FPrimitiveInfo *pFVar3;
  FPrimitiveDebuggerEntry *pFVar4;
  
  if ((this->Selection == (FPrimitiveDebuggerEntry *)0x0) ||
     (bVar1 = TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::
              UEOpEquals<FViewDebugInfo::FPrimitiveInfo_const_>(&this->Selection->Data,param_1),
     !bVar1)) {
    pSVar2 = TSharedPtr<SPrimitiveDebuggerDetailView,1>::operator->(&this->DetailView);
    SPrimitiveDebuggerDetailView::ReleaseSelection(pSVar2);
    if (this->Selection != (FPrimitiveDebuggerEntry *)0x0) {
      this->Selection->field_0x10 = this->Selection->field_0x10 & 0xfb;
    }
    if (param_1->Object == (FPrimitiveInfo *)0x0) {
      this->Selection = (FPrimitiveDebuggerEntry *)0x0;
    }
    else {
      pFVar3 = TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::operator->(param_1);
      pFVar4 = TMapBase<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,0>_>
               ::Find((TMapBase<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,0>_>
                       *)&this->Entries,&pFVar3->ComponentId);
      this->Selection = pFVar4;
      this->Selection->field_0x10 = this->Selection->field_0x10 | 4;
    }
    pSVar2 = TSharedPtr<SPrimitiveDebuggerDetailView,1>::operator->(&this->DetailView);
    SPrimitiveDebuggerDetailView::UpdateSelection(pSVar2);
    TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::
    ~TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>(param_1);
  }
  else {
    TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::
    ~TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>(param_1);
  }
  return;
}

// OnSaveClick @ 146d2b300

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FReply * __thiscall
SDrawPrimitiveDebugger::OnSaveClick(SDrawPrimitiveDebugger *this,FReply *__return_storage_ptr__)

{
  FViewDebugInfo *this_00;
  
  this_00 = FViewDebugInfo::Get();
  FViewDebugInfo::DumpToCSV(this_00);
  FReply::Handled(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// OnToggleLiveCapture @ 146d2b9d0

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
SDrawPrimitiveDebugger::OnToggleLiveCapture(SDrawPrimitiveDebugger *this,ECheckBoxState param_1)

{
  IDrawPrimitiveDebugger *pIVar1;
  
  if (param_1 == Checked) {
    pIVar1 = IDrawPrimitiveDebugger::Get();
    (**(code **)((longlong)*pIVar1 + 0x50))(pIVar1);
  }
  else if (param_1 == Unchecked) {
    pIVar1 = IDrawPrimitiveDebugger::Get();
    (**(code **)((longlong)*pIVar1 + 0x58))(pIVar1);
  }
  return;
}

// RedrawAllDebugBounds @ 146d2e5e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELineBatcherType": Some values do not have unique names */

void __thiscall SDrawPrimitiveDebugger::RedrawAllDebugBounds(SDrawPrimitiveDebugger *this)

{
  FColor_u_0_s_0 FVar1;
  bool bVar2;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar3;
  FPrimitiveInfo *pFVar4;
  longlong lVar5;
  TRangedForConstIterator *pTVar6;
  float *pfVar7;
  undefined1 *puVar8;
  TRangedForConstIterator *pTVar9;
  undefined1 *puVar10;
  FLinearColor *pFVar11;
  undefined1 auStackY_378 [32];
  byte local_324;
  byte bStack_323;
  byte bStack_322;
  FPrimitiveComponentId local_320 [2];
  FPrimitiveDebuggerEntry *local_318;
  float local_310;
  float *local_308;
  int local_300;
  uint local_2f0;
  float local_2ec;
  TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_2e8;
  ULineBatchComponent *local_2e0;
  TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_2d8;
  TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_2d0;
  TRangedForConstIterator *local_2c8;
  IPrimitiveComponent *local_2c0;
  FColor_u_0 *local_2b8;
  IPrimitiveComponent *local_2b0;
  UWorld *local_2a8;
  UWorld *local_2a0;
  UWorld *local_298;
  TRangedForConstIterator *local_290;
  TSparseSetElement<FPrimitiveComponentId> *local_280;
  TSparseSetElement<FPrimitiveComponentId> *local_278;
  TMap<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,0>_>
  *local_270;
  FPrimitiveDebuggerEntry *local_268;
  code *local_260;
  FColor_u_0 *local_258;
  float *local_250;
  code *local_248;
  TTransform<double> *local_240;
  TQuat<double> *local_238;
  undefined1 local_230 [16];
  undefined1 local_220 [24];
  FLinearColor local_208;
  TRangedForConstIterator local_1f8;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  float local_1bc;
  TVector<double> local_1b8;
  TVector<double> local_1a0;
  TRangedForConstIterator local_180;
  TRangedForConstIterator local_150;
  TRangedForConstIterator local_120;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_d0;
  TQuat<double> local_a8;
  undefined1 local_88 [96];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_378;
  bVar2 = FWeakObjectPtr::IsValid(&(this->ActiveWorld).WeakPtr);
  if (bVar2) {
    local_2a8 = (UWorld *)FWeakObjectPtr::Get(&(this->ActiveWorld).WeakPtr);
    local_2a0 = local_2a8;
    local_298 = local_2a8;
    local_2e0 = UWorld::GetLineBatcher(local_2a8,WorldPersistent);
    if (local_2e0 != (ULineBatchComponent *)0x0) {
      local_2d8 = &(this->EntriesShowingDebugBounds).Elements;
      local_2d0 = local_2d8;
      pTVar3 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
               TConstSetBitIterator<FDefaultBitArrayAllocator>
                         (&local_f0,
                          (TBitArray<FDefaultBitArrayAllocator> *)
                          &(this->EntriesShowingDebugBounds).Elements.field_0x10);
      TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::TRangedForConstIterator(&local_180,local_2d8,pTVar3);
      pTVar6 = &local_180;
      pTVar9 = &local_1f8;
      for (lVar5 = 0x30; lVar5 != 0; lVar5 = lVar5 + -1) {
        *(char *)&pTVar9->_padding_ = (char)pTVar6->_padding_;
        pTVar6 = (TRangedForConstIterator *)((longlong)&pTVar6->_padding_ + 1);
        pTVar9 = (TRangedForConstIterator *)((longlong)&pTVar9->_padding_ + 1);
      }
      local_2e8 = local_2d0;
      local_300 = *(int *)&local_2d0->field_0x28;
      pTVar3 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
               TConstSetBitIterator<FDefaultBitArrayAllocator>
                         (&local_d0,(TBitArray<FDefaultBitArrayAllocator> *)&local_2d0->field_0x10,
                          local_300);
      TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::TRangedForConstIterator(&local_150,local_2e8,pTVar3);
      pTVar6 = &local_150;
      pTVar9 = &local_120;
      for (lVar5 = 0x30; lVar5 != 0; lVar5 = lVar5 + -1) {
        *(char *)&pTVar9->_padding_ = (char)pTVar6->_padding_;
        pTVar6 = (TRangedForConstIterator *)((longlong)&pTVar6->_padding_ + 1);
        pTVar9 = (TRangedForConstIterator *)((longlong)&pTVar9->_padding_ + 1);
      }
      while( true ) {
        local_290 = &local_1f8;
        bVar2 = TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::TRangedForConstIterator::operator!=(local_290,&local_120);
        if (!bVar2) break;
        local_2c8 = &local_1f8;
        local_280 = TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ::operator[]((TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                  *)local_1f8._padding_,local_1f8._padding_._4_4_);
        local_320[0].PrimIDValue = *(uint *)local_280;
        local_270 = &this->Entries;
        local_278 = local_280;
        local_318 = TMapBase<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,0>_>
                    ::Find((TMapBase<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,0>_>
                            *)local_270,local_320);
        local_268 = local_318;
        if ((local_318 != (FPrimitiveDebuggerEntry *)0x0) &&
           ((local_318->Data).Object != (FPrimitiveInfo *)0x0)) {
          pFVar4 = TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::operator->(&local_318->Data)
          ;
          bVar2 = FViewDebugInfo::FPrimitiveInfo::IsPrimitiveValid(pFVar4);
          if (bVar2) {
            pFVar4 = TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::operator->
                               (&local_318->Data);
            local_2c0 = pFVar4->ComponentInterface;
            local_260 = *(code **)((longlong)*local_2c0 + 0x78);
            (*local_260)(local_2c0,&local_1b8);
            ULineBatchComponent::ClearBatch(local_2e0,local_320[0].PrimIDValue);
            if (local_318->bSelected == 0) {
              local_2b8 = &FColor::Orange.field0_0x0;
            }
            else {
              local_2b8 = &FColor::Yellow.field0_0x0;
            }
            local_258 = local_2b8;
            FVar1 = local_2b8->_s_0;
            if (local_318->bSelected == 0) {
              local_310 = __real_3f800000;
            }
            else {
              local_310 = __real_3fa00000;
            }
            local_2ec = local_310;
            local_2f0 = local_320[0].PrimIDValue;
            local_308 = &local_1c8;
            bStack_322 = FVar1.R;
            local_1c8 = FLinearColor::sRGBToLinearTable[bStack_322];
            bStack_323 = FVar1.G;
            local_1c4 = FLinearColor::sRGBToLinearTable[bStack_323];
            local_324 = FVar1.B;
            local_1c0 = FLinearColor::sRGBToLinearTable[local_324];
            local_1bc = (float)((uint)FVar1 >> 0x18) * __real_3b808081;
            pfVar7 = local_308;
            puVar8 = local_230;
            for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
              *puVar8 = *(undefined1 *)pfVar7;
              pfVar7 = (float *)((longlong)pfVar7 + 1);
              puVar8 = puVar8 + 1;
            }
            puVar8 = local_230;
            puVar10 = local_220;
            for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
              *puVar10 = *puVar8;
              puVar8 = puVar8 + 1;
              puVar10 = puVar10 + 1;
            }
            local_250 = local_308;
            pFVar4 = TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::operator->
                               (&local_318->Data);
            local_2b0 = pFVar4->ComponentInterface;
            local_248 = *(code **)((longlong)*local_2b0 + 0x70);
            local_240 = (TTransform<double> *)(*local_248)(local_2b0,local_88);
            local_238 = UE::Math::TTransform<double>::GetRotation(local_240,&local_a8);
            puVar8 = local_220;
            pFVar11 = &local_208;
            for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
              *(undefined1 *)&pFVar11->field0_0x0 = *puVar8;
              puVar8 = puVar8 + 1;
              pFVar11 = (FLinearColor *)((longlong)&pFVar11->field0_0x0 + 1);
            }
            ULineBatchComponent::DrawBox
                      (local_2e0,&local_1b8,&local_1a0,local_238,&local_208,__real_bf800000,'\0',
                       local_2ec,local_2f0);
          }
        }
        TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TBaseIterator<1>::operator++((TBaseIterator<1> *)&local_1f8);
      }
    }
  }
  return;
}

// Refresh @ 146d2ebb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall SDrawPrimitiveDebugger::Refresh(SDrawPrimitiveDebugger *this)

{
  code *pcVar1;
  EStatFlags EVar2;
  bool bVar3;
  int iVar4;
  TStatId TVar5;
  TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> *pTVar6;
  FViewDebugInfo *this_00;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar7;
  TSparseSetElement<FPrimitiveComponentId> *pTVar8;
  FPrimitiveDebuggerEntry *this_01;
  FPrimitiveInfo *this_02;
  TArray<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>,TSizedDefaultAllocator<32>_> *pTVar9;
  SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_> *pSVar10;
  longlong lVar11;
  SDrawPrimitiveDebugger **ppSVar12;
  TRangedForIterator *pTVar13;
  undefined4 *puVar14;
  undefined1 *puVar15;
  <lambda_1> *p<Var16;
  TRangedForIterator *pTVar17;
  undefined1 *puVar18;
  FSourceLocation *pFVar19;
  undefined1 auStackY_508 [32];
  undefined4 local_338;
  undefined4 local_334;
  char *local_330;
  char *local_328;
  undefined4 local_320;
  undefined4 local_31c;
  char *local_318;
  char *local_310;
  undefined4 local_308;
  undefined4 local_304;
  char *local_300;
  char *local_2f8;
  SDrawPrimitiveDebugger *local_2f0;
  undefined1 *local_2e8;
  FScopeCycleCounter local_2e0;
  FScopeCycleCounter local_2d0;
  FScopeCycleCounter local_2c0 [3];
  undefined1 local_298 [16];
  <lambda_1> local_288;
  undefined1 local_278 [24];
  undefined1 local_260 [24];
  FSourceLocation local_248;
  undefined1 local_228 [24];
  undefined1 local_210 [24];
  FSourceLocation local_1f8;
  undefined1 local_1d8 [24];
  undefined1 local_1c0 [24];
  FSourceLocation local_1a8;
  TRangedForIterator local_188;
  TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> local_158;
  TRangedForIterator local_148;
  TRangedForIterator local_118;
  TRangedForIterator local_e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_98;
  undefined1 local_78 [40];
  int local_50;
  ForElementType<FSetElementId> local_40;
  int local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_508;
  local_338 = 0x4b3;
  local_334 = 2;
  local_330 = 
  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\DrawPrimitiveDebugger\\Private\\SDrawPrimitiveDebugger.cpp"
  ;
  local_328 = "void __cdecl SDrawPrimitiveDebugger::Refresh(void)";
  puVar14 = &local_338;
  puVar15 = local_278;
  for (lVar11 = 0x18; lVar11 != 0; lVar11 = lVar11 + -1) {
    *puVar15 = *(undefined1 *)puVar14;
    puVar14 = (undefined4 *)((longlong)puVar14 + 1);
    puVar15 = puVar15 + 1;
  }
  puVar15 = local_278;
  puVar18 = local_260;
  for (lVar11 = 0x18; lVar11 != 0; lVar11 = lVar11 + -1) {
    *puVar18 = *puVar15;
    puVar15 = puVar15 + 1;
    puVar18 = puVar18 + 1;
  }
  EVar2 = ::operator|(ClearEveryFrame,CycleStat);
  TVar5 = FThreadSafeStaticStatInner<FStat_STAT_PrimitiveDebuggerRefresh,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_PrimitiveDebuggerRefresh,1> *)
                     &StatPtr_STAT_PrimitiveDebuggerRefresh);
  TVar5.StatIdPtr = *(TStatIdData **)&(TVar5.StatIdPtr)->Name;
  puVar15 = local_260;
  pFVar19 = &local_248;
  for (lVar11 = 0x18; lVar11 != 0; lVar11 = lVar11 + -1) {
    *(undefined1 *)&(pFVar19->Impl)._Line = *puVar15;
    puVar15 = puVar15 + 1;
    pFVar19 = (FSourceLocation *)((longlong)&(pFVar19->Impl)._Line + 1);
  }
  FScopeCycleCounter::FScopeCycleCounter(local_2c0,TVar5,EVar2,false,&local_248);
  pTVar6 = TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::
           TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>(&local_158,(FNullTag *)0x0);
  OnRowSelectionChanged(this,pTVar6,Direct);
  TArray<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>,TSizedDefaultAllocator<32>_>::Empty
            (&this->AvailableEntries,0);
  TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_78);
  TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>::
  ForElementType<FSetElementId>(&local_40);
  local_30 = 0;
  TMapBase<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,0>_>
  ::GetKeys<DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>
            ((TMapBase<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,0>_>
              *)&this->Entries,
             (TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>
              *)local_78);
  local_320 = 0x4bd;
  local_31c = 3;
  local_318 = 
  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\DrawPrimitiveDebugger\\Private\\SDrawPrimitiveDebugger.cpp"
  ;
  local_310 = "void __cdecl SDrawPrimitiveDebugger::Refresh(void)";
  puVar14 = &local_320;
  puVar15 = local_228;
  for (lVar11 = 0x18; lVar11 != 0; lVar11 = lVar11 + -1) {
    *puVar15 = *(undefined1 *)puVar14;
    puVar14 = (undefined4 *)((longlong)puVar14 + 1);
    puVar15 = puVar15 + 1;
  }
  puVar15 = local_228;
  puVar18 = local_210;
  for (lVar11 = 0x18; lVar11 != 0; lVar11 = lVar11 + -1) {
    *puVar18 = *puVar15;
    puVar15 = puVar15 + 1;
    puVar18 = puVar18 + 1;
  }
  EVar2 = ::operator|(ClearEveryFrame,CycleStat);
  TVar5 = FThreadSafeStaticStatInner<FStat_STAT_PrimitiveDebuggerRefreshGather,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_PrimitiveDebuggerRefreshGather,1> *)
                     &StatPtr_STAT_PrimitiveDebuggerRefreshGather);
  TVar5.StatIdPtr = *(TStatIdData **)&(TVar5.StatIdPtr)->Name;
  puVar15 = local_210;
  pFVar19 = &local_1f8;
  for (lVar11 = 0x18; lVar11 != 0; lVar11 = lVar11 + -1) {
    *(undefined1 *)&(pFVar19->Impl)._Line = *puVar15;
    puVar15 = puVar15 + 1;
    pFVar19 = (FSourceLocation *)((longlong)&(pFVar19->Impl)._Line + 1);
  }
  FScopeCycleCounter::FScopeCycleCounter(&local_2e0,TVar5,EVar2,false,&local_1f8);
  this_00 = FViewDebugInfo::Get();
  local_2f0 = this;
  local_2e8 = local_78;
  ppSVar12 = &local_2f0;
  puVar15 = local_298;
  for (lVar11 = 0x10; lVar11 != 0; lVar11 = lVar11 + -1) {
    *puVar15 = *(undefined1 *)ppSVar12;
    ppSVar12 = (SDrawPrimitiveDebugger **)((longlong)ppSVar12 + 1);
    puVar15 = puVar15 + 1;
  }
  puVar15 = local_298;
  p<Var16 = &local_288;
  for (lVar11 = 0x10; lVar11 != 0; lVar11 = lVar11 + -1) {
    *(undefined1 *)&p<Var16->__this = *puVar15;
    puVar15 = puVar15 + 1;
    p<Var16 = (<lambda_1> *)((longlong)&p<Var16->__this + 1);
  }
  FViewDebugInfo::ForEachPrimitive<_SDrawPrimitiveDebugger::Refresh_::__l3::<lambda_1>_>
            (this_00,&local_288);
  FScopeCycleCounter::~FScopeCycleCounter(&local_2e0);
  pTVar7 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
           TConstSetBitIterator<FDefaultBitArrayAllocator>
                     (&local_b8,(TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10));
  TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::TRangedForIterator::TRangedForIterator
            (&local_148,
             (TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_78,pTVar7);
  pTVar13 = &local_148;
  pTVar17 = &local_188;
  for (lVar11 = 0x30; lVar11 != 0; lVar11 = lVar11 + -1) {
    *(char *)&pTVar17->_padding_ = (char)pTVar13->_padding_;
    pTVar13 = (TRangedForIterator *)((longlong)&pTVar13->_padding_ + 1);
    pTVar17 = (TRangedForIterator *)((longlong)&pTVar17->_padding_ + 1);
  }
  pTVar7 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
           TConstSetBitIterator<FDefaultBitArrayAllocator>
                     (&local_98,(TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),local_50);
  TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::TRangedForIterator::TRangedForIterator
            (&local_118,
             (TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_78,pTVar7);
  pTVar13 = &local_118;
  pTVar17 = &local_e8;
  for (lVar11 = 0x30; lVar11 != 0; lVar11 = lVar11 + -1) {
    *(char *)&pTVar17->_padding_ = (char)pTVar13->_padding_;
    pTVar13 = (TRangedForIterator *)((longlong)&pTVar13->_padding_ + 1);
    pTVar17 = (TRangedForIterator *)((longlong)&pTVar17->_padding_ + 1);
  }
  do {
    bVar3 = TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!=(&local_188,&local_e8);
    if (!bVar3) {
      local_308 = 0x4e6;
      local_304 = 2;
      local_300 = 
      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\DrawPrimitiveDebugger\\Private\\SDrawPrimitiveDebugger.cpp"
      ;
      local_2f8 = "void __cdecl SDrawPrimitiveDebugger::Refresh(void)";
      puVar14 = &local_308;
      puVar15 = local_1d8;
      for (lVar11 = 0x18; lVar11 != 0; lVar11 = lVar11 + -1) {
        *puVar15 = *(undefined1 *)puVar14;
        puVar14 = (undefined4 *)((longlong)puVar14 + 1);
        puVar15 = puVar15 + 1;
      }
      puVar15 = local_1d8;
      puVar18 = local_1c0;
      for (lVar11 = 0x18; lVar11 != 0; lVar11 = lVar11 + -1) {
        *puVar18 = *puVar15;
        puVar15 = puVar15 + 1;
        puVar18 = puVar18 + 1;
      }
      EVar2 = ::operator|(ClearEveryFrame,CycleStat);
      TVar5 = FThreadSafeStaticStatInner<FStat_STAT_PrimitiveDebuggerUpdateVis,1>::GetStatId
                        ((FThreadSafeStaticStatInner<FStat_STAT_PrimitiveDebuggerUpdateVis,1> *)
                         &StatPtr_STAT_PrimitiveDebuggerUpdateVis);
      TVar5.StatIdPtr = *(TStatIdData **)&(TVar5.StatIdPtr)->Name;
      puVar15 = local_1c0;
      pFVar19 = &local_1a8;
      for (lVar11 = 0x18; lVar11 != 0; lVar11 = lVar11 + -1) {
        *(undefined1 *)&(pFVar19->Impl)._Line = *puVar15;
        puVar15 = puVar15 + 1;
        pFVar19 = (FSourceLocation *)((longlong)&(pFVar19->Impl)._Line + 1);
      }
      FScopeCycleCounter::FScopeCycleCounter(&local_2d0,TVar5,EVar2,false,&local_1a8);
      UpdateVisibleRows(this);
      if ((this->Table).Object !=
          (SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_> *)0x0) {
        pSVar10 = TSharedPtr<SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1>::
                  operator->(&this->Table);
        (**(code **)(pSVar10->_padding_ + 0x248))(pSVar10);
      }
      FScopeCycleCounter::~FScopeCycleCounter(&local_2d0);
      local_30 = 0;
      TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>::
      ~ForElementType<FSetElementId>(&local_40);
      TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_78);
      FScopeCycleCounter::~FScopeCycleCounter(local_2c0);
      return;
    }
    pTVar8 = TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             ::operator[]((TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)local_188._padding_,local_188._padding_._4_4_);
    this_01 = TMapBase<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,0>_>
              ::Find((TMapBase<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,0>_>
                      *)&this->Entries,(FPrimitiveComponentId *)pTVar8);
    if (((this_01 == (FPrimitiveDebuggerEntry *)0x0) || (!(bool)this_01->bRetainDuringRefresh)) ||
       ((this_01->Data).Object == (FPrimitiveInfo *)0x0)) {
LAB_146d2f3dd:
      if (this_01 != (FPrimitiveDebuggerEntry *)0x0) {
        FlushDebugVisualizationsForEntry(this,(FPrimitiveComponentId)*(uint *)pTVar8);
        TMapBase<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,0>_>
        ::Remove((TMapBase<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,0>_>
                  *)&this->Entries,(FPrimitiveComponentId *)pTVar8);
      }
    }
    else {
      this_02 = TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::operator->(&this_01->Data);
      bVar3 = FViewDebugInfo::FPrimitiveInfo::IsPrimitiveValid(this_02);
      if (!bVar3) goto LAB_146d2f3dd;
      pTVar9 = &this->AvailableEntries;
      if (((FPrimitiveDebuggerEntry *)(pTVar9->AllocatorInstance).Data <= this_01) &&
         (this_01 < (FPrimitiveDebuggerEntry *)
                    ((pTVar9->AllocatorInstance).Data +
                    (longlong)(this->AvailableEntries).ArrayMax * 0x10))) {
        UE::Core::Private::FormatStringSan::
        AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if ((this->AvailableEntries).ArrayNum == (this->AvailableEntries).ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&pTVar9->AllocatorInstance,&(this->AvailableEntries).ArrayMax);
        (this->AvailableEntries).ArrayNum = iVar4;
      }
      iVar4 = (this->AvailableEntries).ArrayNum;
      (this->AvailableEntries).ArrayNum = (this->AvailableEntries).ArrayNum + 1;
      pTVar6 = ::operator_new(0x10,(pTVar9->AllocatorInstance).Data + (longlong)iVar4 * 0x10);
      TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::
      TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>(pTVar6,&this_01->Data);
    }
    TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::TBaseIterator<0>::operator++((TBaseIterator<0> *)&local_188);
  } while( true );
}

// RemoveEntry @ 146d303f0

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
SDrawPrimitiveDebugger::RemoveEntry
          (SDrawPrimitiveDebugger *this,TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> *param_1
          )

{
  bool bVar1;
  FPrimitiveInfo *pFVar2;
  FPrimitiveInfo *pFVar3;
  TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> *pTVar4;
  SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_> *pSVar5;
  TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> local_20 [2];
  
  if (param_1->Object == (FPrimitiveInfo *)0x0) {
    TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::
    ~TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>(param_1);
  }
  else {
    TArray<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>,TSizedDefaultAllocator<32>_>::Remove
              (&this->AvailableEntries,param_1);
    if (this->Selection != (FPrimitiveDebuggerEntry *)0x0) {
      pFVar2 = TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::operator->
                         (&this->Selection->Data);
      pFVar3 = TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::operator->(param_1);
      bVar1 = FPrimitiveComponentId::operator==
                        (&pFVar2->ComponentId,
                         (FPrimitiveComponentId)(pFVar3->ComponentId).PrimIDValue);
      if (bVar1) {
        pTVar4 = TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::
                 TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>(local_20,(FNullTag *)0x0);
        OnRowSelectionChanged(this,pTVar4,Direct);
      }
    }
    pFVar2 = TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::operator->(param_1);
    FlushDebugVisualizationsForEntry(this,(FPrimitiveComponentId)(pFVar2->ComponentId).PrimIDValue);
    pFVar2 = TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::operator->(param_1);
    TMapBase<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,0>_>
    ::Remove((TMapBase<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,0>_>
              *)&this->Entries,&pFVar2->ComponentId);
    TArray<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>,TSizedDefaultAllocator<32>_>::Remove
              (&this->VisibleEntries,param_1);
    if ((this->Table).Object !=
        (SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_> *)0x0) {
      pSVar5 = TSharedPtr<SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1>::
               operator->(&this->Table);
      (**(code **)(pSVar5->_padding_ + 0x248))(pSVar5);
    }
    TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::
    ~TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>(param_1);
  }
  return;
}

// ResetDebuggerChanges @ 146d306f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELineBatcherType": Some values do not have unique names */

void __thiscall SDrawPrimitiveDebugger::ResetDebuggerChanges(SDrawPrimitiveDebugger *this)

{
  bool bVar1;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar2;
  TSparseSetElement<TTuple<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry>_>
  *pTVar3;
  FPrimitiveComponentId *pFVar4;
  FPrimitiveDebuggerEntry *this_00;
  FPrimitiveInfo *pFVar5;
  UPrimitiveComponent *this_01;
  USkinnedMeshComponent *this_02;
  UWorld *this_03;
  ULineBatchComponent *this_04;
  longlong lVar6;
  TRangedForIterator *pTVar7;
  TRangedForIterator *pTVar8;
  TRangedForIterator local_118;
  TRangedForIterator local_e8;
  TRangedForIterator local_b8;
  TRangedForIterator local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_38;
  
  pTVar2 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
           TConstSetBitIterator<FDefaultBitArrayAllocator>
                     (&local_58,(TBitArray<FDefaultBitArrayAllocator> *)&(this->Entries).field_0x10)
  ;
  TSparseArray<TSparseSetElement<TTuple<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::TRangedForIterator::TRangedForIterator
            (&local_e8,
             (TSparseArray<TSparseSetElement<TTuple<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Entries,pTVar2);
  pTVar7 = &local_e8;
  pTVar8 = &local_118;
  for (lVar6 = 0x30; lVar6 != 0; lVar6 = lVar6 + -1) {
    *(char *)&pTVar8->_padding_ = (char)pTVar7->_padding_;
    pTVar7 = (TRangedForIterator *)((longlong)&pTVar7->_padding_ + 1);
    pTVar8 = (TRangedForIterator *)((longlong)&pTVar8->_padding_ + 1);
  }
  pTVar2 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
           TConstSetBitIterator<FDefaultBitArrayAllocator>
                     (&local_38,(TBitArray<FDefaultBitArrayAllocator> *)&(this->Entries).field_0x10,
                      *(int *)&(this->Entries).field_0x28);
  TSparseArray<TSparseSetElement<TTuple<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::TRangedForIterator::TRangedForIterator
            (&local_b8,
             (TSparseArray<TSparseSetElement<TTuple<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Entries,pTVar2);
  pTVar7 = &local_b8;
  pTVar8 = &local_88;
  for (lVar6 = 0x30; lVar6 != 0; lVar6 = lVar6 + -1) {
    *(char *)&pTVar8->_padding_ = (char)pTVar7->_padding_;
    pTVar7 = (TRangedForIterator *)((longlong)&pTVar7->_padding_ + 1);
    pTVar8 = (TRangedForIterator *)((longlong)&pTVar8->_padding_ + 1);
  }
  while (bVar1 = TSparseArray<TSparseSetElement<TTuple<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 ::TRangedForIterator::operator!=(&local_118,&local_88), bVar1) {
    pTVar3 = TSparseArray<TSparseSetElement<TTuple<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             ::operator[]((TSparseArray<TSparseSetElement<TTuple<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)local_118._padding_,local_118._padding_._4_4_);
    pFVar4 = get<0,TTuple<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry>_&>
                       ((TTuple<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry>
                         *)pTVar3);
    this_00 = get<1,TTuple<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry>_&>
                        ((TTuple<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry>
                          *)pTVar3);
    if ((this_00->Data).Object != (FPrimitiveInfo *)0x0) {
      pFVar5 = TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::operator->(&this_00->Data);
      bVar1 = FViewDebugInfo::FPrimitiveInfo::IsPrimitiveValid(pFVar5);
      if (bVar1) {
        pFVar5 = TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::operator->(&this_00->Data);
        this_01 = IPrimitiveComponent::GetUObject<UPrimitiveComponent>(pFVar5->ComponentInterface);
        if (this_00->bHidden != 0) {
          USceneComponent::SetVisibility((USceneComponent *)this_01,true,false);
          this_00->bHidden = '\0';
          this_00->bRetainDuringRefresh = '\0';
        }
        if (this_00->bHasForcedLOD != 0) {
          ResetForcedLODForEntry(this,(FPrimitiveComponentId)pFVar4->PrimIDValue);
        }
        if (this_00->bHasForceDisabledNanite != 0) {
          SetForceDisabledNaniteForEntry
                    (this,(FPrimitiveComponentId)pFVar4->PrimIDValue,
                     this_00->bDesiredForceDisabledNaniteState);
        }
        if (this_00->bShowingDebugBones != 0) {
          this_02 = Cast<USkinnedMeshComponent,UPrimitiveComponent>(this_01);
          if (this_02 != (USkinnedMeshComponent *)0x0) {
            USkinnedMeshComponent::SetDebugDrawColor(this_02,&FLinearColor::Transparent);
            USkinnedMeshComponent::SetDrawDebugSkeleton(this_02,false);
            UActorComponent::MarkRenderStateDirty((UActorComponent *)this_02);
          }
          this_00->bShowingDebugBones = '\0';
        }
        if (this_00->bShowingDebugBounds != 0) {
          bVar1 = FWeakObjectPtr::IsValid(&(this->ActiveWorld).WeakPtr);
          if (bVar1) {
            this_03 = (UWorld *)FWeakObjectPtr::Get(&(this->ActiveWorld).WeakPtr);
            this_04 = UWorld::GetLineBatcher(this_03,WorldPersistent);
            if (this_04 != (ULineBatchComponent *)0x0) {
              ULineBatchComponent::ClearBatch(this_04,pFVar4->PrimIDValue);
            }
          }
          this_00->bShowingDebugBounds = '\0';
        }
      }
    }
    TSparseArray<TSparseSetElement<TTuple<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::TBaseIterator<0>::operator++((TBaseIterator<0> *)&local_118);
  }
  TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>::Empty
            (&this->EntriesShowingDebugBounds,0);
  return;
}

// ResetForcedLODForEntry @ 146d30b50

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
SDrawPrimitiveDebugger::ResetForcedLODForEntry
          (SDrawPrimitiveDebugger *this,FPrimitiveComponentId param_1)

{
  bool bVar1;
  FPrimitiveDebuggerEntry *this_00;
  FPrimitiveInfo *pFVar2;
  UObject *pUVar3;
  UStaticMeshComponent *this_01;
  USkinnedMeshComponent *this_02;
  FPrimitiveComponentId local_res10 [6];
  
  local_res10[0].PrimIDValue = param_1.PrimIDValue;
  this_00 = TMapBase<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,0>_>
            ::Find((TMapBase<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,0>_>
                    *)&this->Entries,local_res10);
  if (((this_00 != (FPrimitiveDebuggerEntry *)0x0) && (this_00->bHasForcedLOD != 0)) &&
     ((this_00->Data).Object != (FPrimitiveInfo *)0x0)) {
    pFVar2 = TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::operator->(&this_00->Data);
    bVar1 = FViewDebugInfo::FPrimitiveInfo::IsPrimitiveValid(pFVar2);
    if (bVar1) {
      pFVar2 = TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::operator->(&this_00->Data);
      pUVar3 = FWeakObjectPtr::Get(&(pFVar2->ComponentUObject).WeakPtr);
      this_01 = Cast<UStaticMeshComponent,UObject>(pUVar3);
      if (this_01 == (UStaticMeshComponent *)0x0) {
        pFVar2 = TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::operator->(&this_00->Data);
        pUVar3 = FWeakObjectPtr::Get(&(pFVar2->ComponentUObject).WeakPtr);
        this_02 = Cast<USkinnedMeshComponent,UObject>(pUVar3);
        if (this_02 != (USkinnedMeshComponent *)0x0) {
          USkinnedMeshComponent::SetForcedLOD(this_02,this_00->DesiredForcedLOD);
        }
      }
      else {
        UStaticMeshComponent::SetForcedLodModel(this_01,this_00->DesiredForcedLOD);
      }
      this_00->bHasForcedLOD = '\0';
    }
  }
  return;
}

// SetActiveWorld @ 146d31fe0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall SDrawPrimitiveDebugger::SetActiveWorld(SDrawPrimitiveDebugger *this,UWorld *param_1)

{
  bool bVar1;
  UWorld *this_00;
  FDelegateHandle FVar2;
  longlong lVar3;
  code **ppcVar4;
  pmf_9f760675 *ppVar5;
  code *local_68;
  undefined4 local_60;
  undefined1 local_58 [16];
  pmf_9f760675 local_48;
  TDelegate<void___cdecl(AActor_*),FDefaultDelegateUserPolicy> local_38;
  
  bVar1 = TWeakObjectPtr<UWorld,FWeakObjectPtr>::UEOpEquals<UWorld,bool>(&this->ActiveWorld,param_1)
  ;
  if (!bVar1) {
    ResetDebuggerChanges(this);
    bVar1 = FWeakObjectPtr::IsValid(&(this->ActiveWorld).WeakPtr);
    if (bVar1) {
      this_00 = (UWorld *)FWeakObjectPtr::Get(&(this->ActiveWorld).WeakPtr);
      UWorld::RemoveOnPreUnregisterAllActorComponentsHandler
                (this_00,(FDelegateHandle)(this->ActorComponentsUnregisteredHandle).ID);
    }
    if ((param_1 == (UWorld *)0x0) ||
       (bVar1 = FInternalUObjectBaseUtilityIsValidFlagsChecker::CheckObjectValidBasedOnItsFlags
                          ((UObject *)param_1), !bVar1)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      local_68 = HandleActorCleanup;
      local_60 = 0;
      ppcVar4 = &local_68;
      ppVar5 = &local_48;
      for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
        *(undefined1 *)ppVar5 = *(undefined1 *)ppcVar4;
        ppcVar4 = (code **)((longlong)ppcVar4 + 1);
        ppVar5 = (pmf_9f760675 *)&ppVar5->field_0x1;
      }
      TDelegate<void___cdecl(AActor_*),FDefaultDelegateUserPolicy>::
      CreateRaw<SDrawPrimitiveDebugger>(&local_38,this,&local_48);
      FVar2 = UWorld::AddOnPreUnregisterAllActorComponentsHandler
                        (param_1,(TDelegate<void___cdecl(AActor_*),FDefaultDelegateUserPolicy> *)
                                 local_58);
                    /* WARNING: Load size is inaccurate */
      (this->ActorComponentsUnregisteredHandle).ID = *FVar2.ID;
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_38);
    }
    local_58._8_8_ = UE::CoreUObject::Private::MakeObjectHandle((UObject *)param_1);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UWorld *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&(this->ActiveWorld).WeakPtr,(FObjectPtr)((longlong)local_58 + 8));
  }
  return;
}

// SetForceDisabledNaniteForEntry @ 146d32460

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
SDrawPrimitiveDebugger::SetForceDisabledNaniteForEntry
          (SDrawPrimitiveDebugger *this,FPrimitiveComponentId param_1,bool param_2)

{
  bool bVar1;
  FPrimitiveDebuggerEntry *this_00;
  FPrimitiveInfo *pFVar2;
  UObject *pUVar3;
  UStaticMeshComponent *this_01;
  FPrimitiveComponentId local_res10 [2];
  bool local_res18;
  
  local_res10[0].PrimIDValue = param_1.PrimIDValue;
  local_res18 = param_2;
  this_00 = TMapBase<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,0>_>
            ::Find((TMapBase<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,0>_>
                    *)&this->Entries,local_res10);
  if ((this_00 != (FPrimitiveDebuggerEntry *)0x0) &&
     ((this_00->Data).Object != (FPrimitiveInfo *)0x0)) {
    pFVar2 = TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::operator->(&this_00->Data);
    bVar1 = FViewDebugInfo::FPrimitiveInfo::IsPrimitiveValid(pFVar2);
    if (bVar1) {
      pFVar2 = TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::operator->(&this_00->Data);
      pUVar3 = FWeakObjectPtr::Get(&(pFVar2->ComponentUObject).WeakPtr);
      this_01 = Cast<UStaticMeshComponent,UObject>(pUVar3);
      if ((this_01 == (UStaticMeshComponent *)0x0) ||
         (bVar1 = FInternalUObjectBaseUtilityIsValidFlagsChecker::CheckObjectValidBasedOnItsFlags
                            ((UObject *)this_01), !bVar1)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((bVar1) && (this_01->bForceDisableNanite != local_res18)) {
        if (this_00->bHasForceDisabledNanite == 0) {
          this_00->bDesiredForceDisabledNaniteState = this_01->bForceDisableNanite;
          this_00->bHasForceDisabledNanite = '\x01';
        }
        UStaticMeshComponent::SetForceDisableNanite(this_01,local_res18);
        if (local_res18 == this_00->bDesiredForceDisabledNaniteState) {
          this_00->bHasForceDisabledNanite = '\0';
        }
      }
    }
  }
  return;
}

// SetForcedLODForEntry @ 146d32620

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
SDrawPrimitiveDebugger::SetForcedLODForEntry
          (SDrawPrimitiveDebugger *this,FPrimitiveComponentId param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  FPrimitiveDebuggerEntry *this_00;
  FPrimitiveInfo *pFVar3;
  UObject *pUVar4;
  UStaticMeshComponent *this_01;
  USkinnedMeshComponent *this_02;
  FPrimitiveComponentId local_res10 [2];
  int local_res18;
  
  local_res10[0].PrimIDValue = param_1.PrimIDValue;
  local_res18 = param_2;
  this_00 = TMapBase<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,0>_>
            ::Find((TMapBase<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,0>_>
                    *)&this->Entries,local_res10);
  if ((this_00 != (FPrimitiveDebuggerEntry *)0x0) &&
     ((this_00->Data).Object != (FPrimitiveInfo *)0x0)) {
    pFVar3 = TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::operator->(&this_00->Data);
    bVar1 = FViewDebugInfo::FPrimitiveInfo::IsPrimitiveValid(pFVar3);
    if (bVar1) {
      pFVar3 = TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::operator->(&this_00->Data);
      pUVar4 = FWeakObjectPtr::Get(&(pFVar3->ComponentUObject).WeakPtr);
      this_01 = Cast<UStaticMeshComponent,UObject>(pUVar4);
      if (this_01 == (UStaticMeshComponent *)0x0) {
        pFVar3 = TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::operator->(&this_00->Data);
        pUVar4 = FWeakObjectPtr::Get(&(pFVar3->ComponentUObject).WeakPtr);
        this_02 = Cast<USkinnedMeshComponent,UObject>(pUVar4);
        if (this_02 == (USkinnedMeshComponent *)0x0) {
          return;
        }
        iVar2 = USkinnedMeshComponent::GetForcedLOD(this_02);
        if (iVar2 == local_res18) {
          return;
        }
        if (this_00->bHasForcedLOD == 0) {
          iVar2 = USkinnedMeshComponent::GetForcedLOD(this_02);
          this_00->DesiredForcedLOD = iVar2;
          this_00->bHasForcedLOD = '\x01';
        }
        USkinnedMeshComponent::SetForcedLOD(this_02,local_res18);
      }
      else {
        if (this_01->ForcedLodModel == local_res18) {
          return;
        }
        if (this_00->bHasForcedLOD == 0) {
          this_00->DesiredForcedLOD = this_01->ForcedLodModel;
          this_00->bHasForcedLOD = '\x01';
        }
        UStaticMeshComponent::SetForcedLodModel(this_01,local_res18);
      }
      if (local_res18 == this_00->DesiredForcedLOD) {
        this_00->bHasForcedLOD = '\0';
      }
    }
  }
  return;
}

// SetShowDebugBonesForEntry @ 146d32910

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
SDrawPrimitiveDebugger::SetShowDebugBonesForEntry
          (SDrawPrimitiveDebugger *this,FPrimitiveComponentId param_1,bool param_2)

{
  bool bVar1;
  FPrimitiveDebuggerEntry *this_00;
  FPrimitiveInfo *pFVar2;
  USkinnedMeshComponent *this_01;
  longlong lVar3;
  FLinearColor *pFVar4;
  FLinearColor_u_0 *pFVar5;
  FPrimitiveComponentId local_res10 [2];
  byte local_res18;
  FLinearColor_u_0 *local_68;
  FLinearColor_u_0 local_60;
  TMap<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,0>_>
  *local_50;
  TWeakObjectPtr<UObject,FWeakObjectPtr> *local_48;
  UObject *local_40;
  FLinearColor_u_0 *local_38;
  FLinearColor_u_0 *local_30;
  FLinearColor_u_0 local_28;
  
  local_50 = &this->Entries;
  local_res10[0].PrimIDValue = param_1.PrimIDValue;
  local_res18 = param_2;
  this_00 = TMapBase<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,0>_>
            ::Find((TMapBase<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,0>_>
                    *)local_50,local_res10);
  if ((this_00 != (FPrimitiveDebuggerEntry *)0x0) &&
     ((this_00->Data).Object != (FPrimitiveInfo *)0x0)) {
    pFVar2 = TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::operator->(&this_00->Data);
    bVar1 = FViewDebugInfo::FPrimitiveInfo::IsPrimitiveValid(pFVar2);
    if (bVar1) {
      pFVar2 = TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::operator->(&this_00->Data);
      local_48 = &pFVar2->ComponentUObject;
      local_40 = FWeakObjectPtr::Get(&local_48->WeakPtr);
      this_01 = Cast<USkinnedMeshComponent,UObject>(local_40);
      if ((this_01 == (USkinnedMeshComponent *)0x0) ||
         (bVar1 = FInternalUObjectBaseUtilityIsValidFlagsChecker::CheckObjectValidBasedOnItsFlags
                            ((UObject *)this_01), !bVar1)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        bVar1 = USkinnedMeshComponent::ShouldDrawDebugSkeleton(this_01);
        if ((bVar1) && (local_res18 == 0)) {
          USkinnedMeshComponent::SetDebugDrawColor(this_01,&FLinearColor::Transparent);
          USkinnedMeshComponent::SetDrawDebugSkeleton(this_01,false);
          UActorComponent::MarkRenderStateDirty((UActorComponent *)this_01);
        }
        else if ((!bVar1) && (local_res18 != 0)) {
          if (this_00->bSelected == 0) {
            local_60._s_0.R = FLinearColor::sRGBToLinearTable[FColor::Orange.field0_0x0._s_0.R];
            local_60._s_0.G = FLinearColor::sRGBToLinearTable[FColor::Orange.field0_0x0._s_0.G];
            local_60._s_0.B = FLinearColor::sRGBToLinearTable[FColor::Orange.field0_0x0._s_0.B];
            local_60._s_0.A = (float)FColor::Orange.field0_0x0._3_1_ * __real_3b808081;
            local_68 = &local_60;
            local_38 = local_68;
          }
          else {
            pFVar4 = &FLinearColor::Yellow;
            pFVar5 = &local_28;
            for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
              *(undefined1 *)&(pFVar5->_s_0).R = *(undefined1 *)&pFVar4->field0_0x0;
              pFVar4 = (FLinearColor *)((longlong)&pFVar4->field0_0x0 + 1);
              pFVar5 = (FLinearColor_u_0 *)((longlong)&(pFVar5->_s_0).R + 1);
            }
            local_68 = &local_28;
          }
          local_30 = local_68;
          USkinnedMeshComponent::SetDebugDrawColor(this_01,(FLinearColor *)&local_68->_s_0);
          USkinnedMeshComponent::SetDrawDebugSkeleton(this_01,true);
          UActorComponent::MarkRenderStateDirty((UActorComponent *)this_01);
        }
        this_00->bShowingDebugBones = local_res18;
      }
    }
  }
  return;
}

// SetShowDebugBoundsForEntry @ 146d32bd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELineBatcherType": Some values do not have unique names */

void __thiscall
SDrawPrimitiveDebugger::SetShowDebugBoundsForEntry
          (SDrawPrimitiveDebugger *this,FPrimitiveComponentId param_1,bool param_2)

{
  FColor_u_0_s_0 FVar1;
  FPrimitiveComponentId FVar2;
  bool bVar3;
  FPrimitiveDebuggerEntry *this_00;
  ULineBatchComponent *this_01;
  FPrimitiveInfo *pFVar4;
  longlong lVar5;
  float *pfVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  FLinearColor *pFVar9;
  FPrimitiveComponentId local_res10 [2];
  byte local_res18;
  undefined1 auStackY_228 [32];
  byte local_1c8;
  byte bStack_1c7;
  byte bStack_1c6;
  float local_1c4;
  FColor_u_0 *local_198;
  FPrimitiveComponentId local_190 [2];
  TMap<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,0>_>
  *local_188;
  UWorld *local_180;
  UWorld *local_178;
  UWorld *local_170;
  code *local_168;
  FColor_u_0 *local_160;
  float *local_158;
  code *local_150;
  TTransform<double> *local_148;
  TQuat<double> *local_140;
  TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>
  *local_138;
  TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>
  *local_130;
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  FLinearColor local_108;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  TVector<double> local_e8;
  TVector<double> local_d0;
  TQuat<double> local_a8;
  undefined1 local_88 [96];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_228;
  local_res10[0].PrimIDValue = param_1.PrimIDValue;
  local_res18 = param_2;
  bVar3 = FWeakObjectPtr::IsValid(&(this->ActiveWorld).WeakPtr);
  if ((bVar3) && (bVar3 = FPrimitiveComponentId::IsValid(local_res10), bVar3)) {
    local_188 = &this->Entries;
    this_00 = TMapBase<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,0>_>
              ::Find((TMapBase<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,0>_>
                      *)local_188,local_res10);
    if ((this_00 != (FPrimitiveDebuggerEntry *)0x0) && (local_res18 != this_00->bShowingDebugBounds)
       ) {
      local_180 = (UWorld *)FWeakObjectPtr::Get(&(this->ActiveWorld).WeakPtr);
      local_178 = local_180;
      local_170 = local_180;
      this_01 = UWorld::GetLineBatcher(local_180,WorldPersistent);
      if (this_01 != (ULineBatchComponent *)0x0) {
        if ((local_res18 != 0) && ((this_00->Data).Object != (FPrimitiveInfo *)0x0)) {
          pFVar4 = TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::operator->(&this_00->Data);
          bVar3 = FViewDebugInfo::FPrimitiveInfo::IsPrimitiveValid(pFVar4);
          if (bVar3) {
            pFVar4 = TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::operator->(&this_00->Data)
            ;
            local_168 = *(code **)((longlong)*pFVar4->ComponentInterface + 0x78);
            (*local_168)(pFVar4->ComponentInterface,&local_e8);
            FVar2.PrimIDValue = local_res10[0].PrimIDValue;
            if (this_00->bSelected == 0) {
              local_198 = &FColor::Orange.field0_0x0;
            }
            else {
              local_198 = &FColor::Yellow.field0_0x0;
            }
            local_160 = local_198;
            FVar1 = local_198->_s_0;
            if (this_00->bSelected == 0) {
              local_1c4 = __real_3f800000;
            }
            else {
              local_1c4 = __real_3fa00000;
            }
            local_158 = &local_f8;
            bStack_1c6 = FVar1.R;
            local_f8 = FLinearColor::sRGBToLinearTable[bStack_1c6];
            bStack_1c7 = FVar1.G;
            local_f4 = FLinearColor::sRGBToLinearTable[bStack_1c7];
            local_1c8 = FVar1.B;
            local_f0 = FLinearColor::sRGBToLinearTable[local_1c8];
            local_ec = (float)((uint)FVar1 >> 0x18) * __real_3b808081;
            pfVar6 = local_158;
            puVar7 = local_128;
            for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
              *puVar7 = *(undefined1 *)pfVar6;
              pfVar6 = (float *)((longlong)pfVar6 + 1);
              puVar7 = puVar7 + 1;
            }
            puVar7 = local_128;
            puVar8 = local_118;
            for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
              *puVar8 = *puVar7;
              puVar7 = puVar7 + 1;
              puVar8 = puVar8 + 1;
            }
            pFVar4 = TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::operator->(&this_00->Data)
            ;
            local_150 = *(code **)((longlong)*pFVar4->ComponentInterface + 0x70);
            local_148 = (TTransform<double> *)(*local_150)(pFVar4->ComponentInterface,local_88);
            local_140 = UE::Math::TTransform<double>::GetRotation(local_148,&local_a8);
            puVar7 = local_118;
            pFVar9 = &local_108;
            for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
              *(undefined1 *)&pFVar9->field0_0x0 = *puVar7;
              puVar7 = puVar7 + 1;
              pFVar9 = (FLinearColor *)((longlong)&pFVar9->field0_0x0 + 1);
            }
            ULineBatchComponent::DrawBox
                      (this_01,&local_e8,&local_d0,local_140,&local_108,__real_bf800000,'\0',
                       local_1c4,FVar2.PrimIDValue);
            this_00->bShowingDebugBounds = '\x01';
            local_138 = &this->EntriesShowingDebugBounds;
            TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>
            ::Emplace<FPrimitiveComponentId_const_&>(local_138,local_190,(bool *)local_res10);
            return;
          }
        }
        ULineBatchComponent::ClearBatch(this_01,local_res10[0].PrimIDValue);
        this_00->bShowingDebugBounds = '\0';
        local_130 = &this->EntriesShowingDebugBounds;
        TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>::
        Remove(local_130,local_res10);
      }
    }
  }
  return;
}

// SortRows @ 146d33440

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall SDrawPrimitiveDebugger::SortRows(SDrawPrimitiveDebugger *this)

{
  <lambda_1> local_28;
  <lambda_1> *local_20;
  TArray<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>,TSizedDefaultAllocator<32>_> *local_18;
  
  local_18 = &this->VisibleEntries;
  local_20 = &local_28;
  local_28.__this = this;
  TArray<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>,TSizedDefaultAllocator<32>_>::
  Sort<_SDrawPrimitiveDebugger::SortRows_::__l2::<lambda_1>_>(local_18,local_20);
  return;
}

// Tick @ 146d33670

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
SDrawPrimitiveDebugger::Tick
          (SDrawPrimitiveDebugger *this,FGeometry *param_1,double param_2,float param_3)

{
  SWidget::Tick((SWidget *)this,param_1,param_2,param_3);
  RedrawAllDebugBounds(this);
  return;
}

// UpdateVisibleRows @ 146d35340

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall SDrawPrimitiveDebugger::UpdateVisibleRows(SDrawPrimitiveDebugger *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  FPrimitiveInfo *pFVar10;
  longlong lVar11;
  undefined1 *puVar12;
  char *pcVar13;
  int local_54c;
  char local_53f [4];
  undefined1 local_53b;
  char local_53a;
  Type local_539;
  char local_538;
  undefined1 local_537;
  char local_536;
  TArray<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>,TSizedDefaultAllocator<32>_> *local_530
  ;
  undefined1 local_528 [8];
  FString *local_520;
  TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> *local_518;
  undefined1 local_510;
  undefined1 local_50f;
  undefined1 local_50e [2];
  EShaderPlatform local_50c;
  undefined1 local_50a;
  undefined1 local_509;
  undefined1 local_508 [8];
  TArray<UTexture_*,TSizedDefaultAllocator<32>_> local_500;
  uint local_4f0;
  undefined4 local_4ec;
  undefined4 local_4e8;
  uint local_4e4;
  undefined4 local_4e0;
  uint local_4dc;
  undefined4 local_4d8;
  uint local_4d4;
  uint local_4d0;
  uint local_4cc;
  undefined4 local_4c8;
  uint local_4c4;
  uint local_4c0;
  uint local_4bc;
  undefined4 local_4b8;
  int local_4b4;
  uint local_4b0;
  uint local_4ac;
  TArray<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>,TSizedDefaultAllocator<32>_> *local_4a8
  ;
  TArray<TWeakObjectPtr<UMaterialInterface,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *local_4a0;
  uint local_498;
  FWeakObjectPtr local_490;
  int local_488;
  int local_484;
  int local_480;
  int local_47c;
  int local_478;
  undefined1 local_474 [4];
  int local_470;
  int local_46c;
  int local_468;
  int local_464;
  int local_460;
  UObject *local_458;
  FScriptContainerElement *local_450;
  IPrimitiveComponent *local_448;
  FScriptContainerElement *local_440;
  FScriptContainerElement *local_438;
  FScriptContainerElement *local_430;
  UClass *local_428;
  longlong local_420;
  FScriptContainerElement *local_418;
  UObject *local_410;
  UObject *local_408;
  UObject *local_400;
  FScriptContainerElement *local_3f8;
  UObject *local_3f0;
  TCheckedPointerIterator<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>,int,0> local_3e8;
  TCheckedPointerIterator<TWeakObjectPtr<UMaterialInterface,FWeakObjectPtr>_const_,int,0> local_3d0;
  TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> *local_3b8;
  TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> *local_3b0;
  FScriptContainerElement *local_3a8;
  FScriptContainerElement *local_3a0;
  TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> *local_398;
  FScriptContainerElement *local_390;
  FScriptContainerElement *local_388;
  FScriptContainerElement *local_380;
  FScriptContainerElement *local_378;
  FString *local_370;
  FPrimitiveInfo *local_368;
  FPrimitiveInfo *local_360;
  UObject *local_358;
  UObject *local_350;
  UClass *local_348;
  UClass *local_340;
  FName local_338;
  FName *local_330;
  FScriptContainerElement *local_328;
  FScriptContainerElement *local_320;
  FScriptContainerElement *local_318;
  FScriptContainerElement *local_310;
  FString *local_308;
  FPrimitiveInfo *local_300;
  UObject *local_2f8;
  UObject *local_2f0;
  UObject *local_2e8;
  FScriptContainerElement *local_2e0;
  FScriptContainerElement *local_2d8;
  FScriptContainerElement *local_2d0;
  FScriptContainerElement *local_2c8;
  FString *local_2c0;
  UClass *local_2b8;
  UClass *local_2b0;
  UClass *local_2a8;
  FName local_2a0;
  FName *local_298;
  FScriptContainerElement *local_290;
  FScriptContainerElement *local_288;
  FScriptContainerElement *local_280;
  FScriptContainerElement *local_278;
  FString *local_270;
  FScriptContainerElement *local_268;
  FScriptContainerElement *local_260;
  FScriptContainerElement *local_258;
  FScriptContainerElement *local_250;
  FScriptContainerElement *local_248;
  FScriptContainerElement *local_240;
  TWeakObjectPtr<UMaterialInterface,FWeakObjectPtr> *local_238;
  UObject *local_230;
  UObject *local_228;
  UObject *local_220;
  UObject *local_218;
  longlong local_210;
  FName local_208;
  FName *local_200;
  FScriptContainerElement *local_1f8;
  FScriptContainerElement *local_1f0;
  FScriptContainerElement *local_1e8;
  FScriptContainerElement *local_1e0;
  FString *local_1d8;
  UObject *local_1d0;
  UObject *local_1c8;
  undefined1 *local_1c0;
  undefined1 *local_1b8;
  TOptional<EShaderPlatform> *local_1b0;
  TOptional<EMaterialQualityLevel::Type> *local_1a8;
  code *local_1a0;
  undefined4 local_198;
  undefined4 local_194;
  FScriptContainerElement *local_190;
  FScriptContainerElement *local_188;
  FScriptContainerElement *local_180;
  undefined4 local_178;
  undefined4 local_174;
  FScriptContainerElement *local_170;
  FScriptContainerElement *local_168;
  FScriptContainerElement *local_160;
  longlong local_158;
  FName local_150;
  FName *local_148;
  FScriptContainerElement *local_140;
  FScriptContainerElement *local_138;
  FScriptContainerElement *local_130;
  FScriptContainerElement *local_128;
  FString *local_120;
  TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> *local_118;
  TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> *local_110;
  TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> *local_108;
  FScriptContainerElement *local_100;
  FScriptContainerElement *local_f8;
  FScriptContainerElement *local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  FScriptContainerElement *local_e0;
  FScriptContainerElement *local_d8;
  FScriptContainerElement *local_d0;
  longlong local_c8;
  longlong local_c0;
  FScriptContainerElement *local_b8;
  FScriptContainerElement *local_b0;
  FScriptContainerElement *local_a8;
  TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> *local_a0;
  undefined1 local_98 [4];
  int local_94;
  TArray<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>,TSizedDefaultAllocator<32>_> *local_90;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  TCheckedPointerIterator<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>,int,0> local_38;
  TCheckedPointerIterator<TWeakObjectPtr<UMaterialInterface,FWeakObjectPtr>_const_,int,0> local_20;
  
  bVar8 = false;
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  bVar6 = FText::IsEmptyOrWhitespace(&this->FilterText);
  if (bVar6) {
    TArray<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>,TSizedDefaultAllocator<32>_>::
    operator=(&this->VisibleEntries,&this->AvailableEntries);
  }
  else {
    local_90 = &this->VisibleEntries;
    TArray<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>,TSizedDefaultAllocator<32>_>::Empty
              (local_90,0);
    local_520 = FText::ToString(&this->FilterText);
    local_4a8 = &this->AvailableEntries;
    local_3b8 = (TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> *)
                (local_4a8->AllocatorInstance).Data;
    local_3b0 = local_3b8;
    TCheckedPointerIterator<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>,int,0>::
    TCheckedPointerIterator<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>,int,0>
              (&local_3e8,&(this->AvailableEntries).ArrayNum,local_3b8);
    local_3a8 = (local_4a8->AllocatorInstance).Data;
    local_470 = local_4a8->ArrayNum;
    local_3a0 = local_3a8;
    TCheckedPointerIterator<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>,int,0>::
    TCheckedPointerIterator<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>,int,0>
              (&local_38,&local_4a8->ArrayNum,
               (TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> *)
               (local_3a8 + (longlong)local_470 * 0x10));
    while( true ) {
      if (*local_3e8.CurrentNum != local_3e8.InitialNum) {
        puVar12 = local_528;
        for (lVar11 = 1; lVar11 != 0; lVar11 = lVar11 + -1) {
          *puVar12 = 0;
          puVar12 = puVar12 + 1;
        }
        `TCheckedPointerIterator<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_528);
      }
      local_528[1] = local_3e8.Ptr != local_38.Ptr;
      local_4b0 = (uint)(byte)local_528[1];
      if (!(bool)local_528[1]) break;
      local_398 = local_3e8.Ptr;
      local_518 = local_3e8.Ptr;
      if ((local_3e8.Ptr)->Object != (FPrimitiveInfo *)0x0) {
        pFVar10 = TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::operator->(local_3e8.Ptr);
        bVar6 = FViewDebugInfo::FPrimitiveInfo::IsPrimitiveValid(pFVar10);
        if (bVar6) {
          bVar6 = false;
          pFVar10 = TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::operator->(local_518);
          local_448 = pFVar10->ComponentInterface;
          local_420 = (**(code **)((longlong)*local_448 + 0x98))(local_448);
          pFVar10 = TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::operator->(local_518);
          local_370 = &pFVar10->Name;
          local_46c = (local_520->Data).ArrayNum;
          if (local_46c == 0) {
            local_440 = (FScriptContainerElement *)
                        `FString::operator*'::__l2::<lambda_1>::operator()(&local_50a);
          }
          else {
            local_440 = (local_520->Data).AllocatorInstance.Data;
            local_390 = local_440;
            local_388 = local_440;
            local_380 = local_440;
          }
          local_378 = local_440;
          iVar9 = ::FString::Find(local_370,(wchar_t *)local_440,IgnoreCase,FromStart,-1);
          local_4ac = (uint)(iVar9 != -1);
          if (iVar9 != -1) {
            bVar6 = true;
          }
          else {
            local_368 = TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::operator->(local_518);
            bVar7 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)local_368);
            if (bVar7) {
              local_360 = TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::operator->(local_518)
              ;
              local_358 = FWeakObjectPtr::Get((FWeakObjectPtr *)local_360);
              local_350 = local_358;
              local_348 = ObjectPtr_Private::TNonAccessTrackedObjectPtr<UClass>::operator_UClass__
                                    ((TNonAccessTrackedObjectPtr<UClass> *)&local_358->field_0x10);
              local_338 = (FName)local_348->_padding_;
              local_330 = &local_338;
              local_340 = local_348;
              ::FName::ToString(local_330,&local_68);
              local_308 = &local_68;
              local_468 = (local_520->Data).ArrayNum;
              if (local_468 == 0) {
                local_438 = (FScriptContainerElement *)
                            `FString::operator*'::__l2::<lambda_1>::operator()(&local_509);
              }
              else {
                local_438 = (local_520->Data).AllocatorInstance.Data;
                local_328 = local_438;
                local_320 = local_438;
                local_318 = local_438;
              }
              local_310 = local_438;
              iVar9 = ::FString::Find(local_308,(wchar_t *)local_438,IgnoreCase,FromStart,-1);
              local_498 = (uint)(iVar9 != -1);
              if (iVar9 == -1) {
                local_300 = TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::operator->
                                      (local_518);
                local_2f8 = FWeakObjectPtr::Get((FWeakObjectPtr *)local_300);
                bVar3 = true;
                bVar2 = true;
                local_2f0 = local_2f8;
                local_2e8 = local_2f8;
                local_2c0 = UObjectBaseUtility::GetFullName
                                      ((UObjectBaseUtility *)local_2f8,&local_48,(UObject *)0x0,None
                                      );
                local_464 = (local_520->Data).ArrayNum;
                if (local_464 == 0) {
                  local_430 = (FScriptContainerElement *)
                              `FString::operator*'::__l2::<lambda_1>::operator()(local_508);
                }
                else {
                  local_430 = (local_520->Data).AllocatorInstance.Data;
                  local_2e0 = local_430;
                  local_2d8 = local_430;
                  local_2d0 = local_430;
                }
                local_2c8 = local_430;
                iVar9 = ::FString::Find(local_2c0,(wchar_t *)local_430,IgnoreCase,FromStart,-1);
                local_4f0 = (uint)(iVar9 != -1);
                if (iVar9 == -1) goto LAB_146d35a42;
              }
              bVar2 = true;
              local_4ec = 1;
            }
            else {
LAB_146d35a42:
              local_4ec = 0;
            }
            cVar5 = (char)local_4ec;
            if (bVar3) {
              bVar3 = false;
              ::FString::~FString(&local_48);
            }
            if (bVar2) {
              bVar2 = false;
              ::FString::~FString(&local_68);
            }
            if (cVar5 == '\0') {
              local_428 = ObjectPtr_Private::TNonAccessTrackedObjectPtr<UClass>::operator_UClass__
                                    ((TNonAccessTrackedObjectPtr<UClass> *)(local_420 + 0x10));
              local_2b8 = local_428;
              if ((local_428 == (UClass *)0x0) ||
                 (bVar7 = FInternalUObjectBaseUtilityIsValidFlagsChecker::
                          CheckObjectValidBasedOnItsFlags((UObject *)local_428), !bVar7)) {
                local_4e8 = 0;
              }
              else {
                local_4e8 = 1;
              }
              if ((char)local_4e8 == '\0') {
LAB_146d35c94:
                local_4e0 = 0;
              }
              else {
                local_2b0 = ObjectPtr_Private::TNonAccessTrackedObjectPtr<UClass>::operator_UClass__
                                      ((TNonAccessTrackedObjectPtr<UClass> *)(local_420 + 0x10));
                bVar4 = true;
                local_2a0 = (FName)local_2b0->_padding_;
                local_298 = &local_2a0;
                local_2a8 = local_2b0;
                ::FName::ToString(local_298,&local_58);
                local_270 = &local_58;
                local_460 = (local_520->Data).ArrayNum;
                if (local_460 == 0) {
                  local_418 = (FScriptContainerElement *)
                              `FString::operator*'::__l2::<lambda_1>::operator()(&local_510);
                }
                else {
                  local_418 = (local_520->Data).AllocatorInstance.Data;
                  local_290 = local_418;
                  local_288 = local_418;
                  local_280 = local_418;
                }
                local_278 = local_418;
                iVar9 = ::FString::Find(local_270,(wchar_t *)local_418,IgnoreCase,FromStart,-1);
                local_4e4 = (uint)(iVar9 != -1);
                if (iVar9 == -1) goto LAB_146d35c94;
                local_4e0 = 1;
              }
              cVar5 = (char)local_4e0;
              if (bVar4) {
                bVar4 = false;
                ::FString::~FString(&local_58);
              }
              if (cVar5 == '\0') {
                pFVar10 = TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::operator->(local_518)
                ;
                local_4a0 = &pFVar10->Materials;
                local_268 = (local_4a0->AllocatorInstance).Data;
                local_260 = local_268;
                local_258 = local_268;
                TCheckedPointerIterator<TWeakObjectPtr<UMaterialInterface,FWeakObjectPtr>_const_,int,0>
                ::
                TCheckedPointerIterator<TWeakObjectPtr<UMaterialInterface,FWeakObjectPtr>_const_,int,0>
                          (&local_3d0,&(pFVar10->Materials).ArrayNum,
                           (TWeakObjectPtr<UMaterialInterface,FWeakObjectPtr> *)local_268);
                local_250 = (local_4a0->AllocatorInstance).Data;
                local_488 = local_4a0->ArrayNum;
                local_248 = local_250;
                local_240 = local_250;
                TCheckedPointerIterator<TWeakObjectPtr<UMaterialInterface,FWeakObjectPtr>_const_,int,0>
                ::
                TCheckedPointerIterator<TWeakObjectPtr<UMaterialInterface,FWeakObjectPtr>_const_,int,0>
                          (&local_20,&local_4a0->ArrayNum,
                           (TWeakObjectPtr<UMaterialInterface,FWeakObjectPtr> *)
                           (local_250 + (longlong)local_488 * 8));
                do {
                  if (*local_3d0.CurrentNum != local_3d0.InitialNum) {
                    pcVar13 = local_53f;
                    for (lVar11 = 1; lVar11 != 0; lVar11 = lVar11 + -1) {
                      *pcVar13 = '\0';
                      pcVar13 = pcVar13 + 1;
                    }
                    `TCheckedPointerIterator<TWeakObjectPtr<UMaterialInterface,FWeakObjectPtr>_const_,int,0>
                    ::operator!='::__l2::<lambda_1>::operator()(local_53f);
                  }
                  local_53f[1] = local_3d0.Ptr != local_20.Ptr;
                  local_4dc = (uint)(byte)local_53f[1];
                  if (!(bool)local_53f[1]) goto LAB_146d36663;
                  local_238 = local_3d0.Ptr;
                  local_490 = (local_3d0.Ptr)->WeakPtr;
                  local_53f[2] = FWeakObjectPtr::IsValid(&local_490);
                  if ((bool)local_53f[2]) {
                    local_410 = FWeakObjectPtr::Get(&local_490);
                    local_230 = local_410;
                    local_228 = local_410;
                    local_408 = (UObject *)(**(code **)(*(longlong *)local_410 + 0x2d8))(local_410);
                    if ((local_408 == (UObject *)0x0) ||
                       (bVar7 = FInternalUObjectBaseUtilityIsValidFlagsChecker::
                                CheckObjectValidBasedOnItsFlags(local_408), !bVar7)) {
                      local_4d8 = 0;
                    }
                    else {
                      local_4d8 = 1;
                    }
                    local_53f[3] = (char)local_4d8;
                    if ((char)local_4d8 != '\0') {
                      local_400 = FWeakObjectPtr::Get(&local_490);
                      local_220 = local_400;
                      local_218 = local_400;
                      local_210 = (**(code **)(*(longlong *)local_400 + 0x2d8))(local_400);
                      local_208 = *(FName *)(local_210 + 0x18);
                      local_200 = &local_208;
                      ::FName::ToString(local_200,&local_88);
                      local_1d8 = &local_88;
                      local_484 = (local_520->Data).ArrayNum;
                      if (local_484 == 0) {
                        local_3f8 = (FScriptContainerElement *)
                                    `FString::operator*'::__l2::<lambda_1>::operator()(&local_50f);
                      }
                      else {
                        local_3f8 = (local_520->Data).AllocatorInstance.Data;
                        local_1f8 = local_3f8;
                        local_1f0 = local_3f8;
                        local_1e8 = local_3f8;
                      }
                      local_1e0 = local_3f8;
                      iVar9 = ::FString::Find(local_1d8,(wchar_t *)local_3f8,IgnoreCase,FromStart,-1
                                             );
                      local_53b = iVar9 != -1;
                      local_4d4 = (uint)(byte)local_53b;
                      local_53a = local_53b;
                      ::FString::~FString(&local_88);
                      if (local_53a != '\0') {
                        bVar6 = true;
                        goto LAB_146d36663;
                      }
                      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
                                (&local_500.AllocatorInstance);
                      local_500.ArrayNum = 0;
                      local_500.ArrayMax =
                           TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                                     (&local_500.AllocatorInstance);
                      local_3f0 = FWeakObjectPtr::Get(&local_490);
                      local_1a0 = *(code **)(*(longlong *)local_3f0 + 0x330);
                      local_1c0 = local_98;
                      local_1d0 = local_3f0;
                      local_1c8 = local_3f0;
                      local_50c = GetMaxShaderPlatformChecked();
                      local_1b0 = TOptional<enum_EShaderPlatform>::TOptional<enum_EShaderPlatform>
                                            (local_1c0,&local_50c);
                      local_1b8 = local_474;
                      local_539 = GetCurrentMaterialQualityLevelChecked();
                      local_1a8 = TOptional<enum_EMaterialQualityLevel::Type>::
                                  TOptional<enum_EMaterialQualityLevel::Type>(local_1b8,&local_539);
                      (*local_1a0)(local_3f0,&local_500,local_1a8);
                      local_480 = local_500.ArrayNum;
                      local_47c = local_500.ArrayNum;
                      for (local_54c = 0; local_54c < local_47c; local_54c = local_54c + 1) {
                        local_4cc = (uint)(-1 < local_54c);
                        local_4d0 = (uint)(local_54c < local_500.ArrayNum);
                        if (-1 >= local_54c || local_54c >= local_500.ArrayNum) {
                          local_198 = 0;
                          local_194 = 0;
                          UE::Core::Private::FormatStringSan::
                          AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
                          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                            ("(Index >= 0) & (Index < ArrayNum)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x447,
                                             L"Array index out of bounds: %lld into an array of size %lld"
                                            );
                          if (bVar7) {
                            pcVar1 = (code *)swi(3);
                            (*pcVar1)();
                            return;
                          }
                        }
                        local_190 = local_500.AllocatorInstance.Data;
                        local_188 = local_500.AllocatorInstance.Data;
                        local_180 = local_500.AllocatorInstance.Data + (longlong)local_54c * 8;
                        local_458 = *(UObject **)local_180;
                        if ((local_458 == (UObject *)0x0) ||
                           (bVar7 = FInternalUObjectBaseUtilityIsValidFlagsChecker::
                                    CheckObjectValidBasedOnItsFlags(local_458), !bVar7)) {
                          local_4c8 = 0;
                        }
                        else {
                          local_4c8 = 1;
                        }
                        local_538 = (char)local_4c8;
                        if ((char)local_4c8 == '\0') {
LAB_146d365ed:
                          local_4b8 = 0;
                        }
                        else {
                          local_4c0 = (uint)(-1 < local_54c);
                          local_4c4 = (uint)(local_54c < local_500.ArrayNum);
                          if (-1 >= local_54c || local_54c >= local_500.ArrayNum) {
                            local_178 = 0;
                            local_174 = 0;
                            UE::Core::Private::FormatStringSan::
                            AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>
                                      ();
                            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                              ("(Index >= 0) & (Index < ArrayNum)",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                               ,0x447,
                                               L"Array index out of bounds: %lld into an array of size %lld"
                                              );
                            if (bVar8) {
                              pcVar1 = (code *)swi(3);
                              (*pcVar1)();
                              return;
                            }
                          }
                          local_170 = local_500.AllocatorInstance.Data;
                          local_168 = local_500.AllocatorInstance.Data;
                          local_160 = local_500.AllocatorInstance.Data + (longlong)local_54c * 8;
                          local_158 = *(longlong *)local_160;
                          bVar8 = true;
                          local_150 = *(FName *)(local_158 + 0x18);
                          local_148 = &local_150;
                          ::FName::ToString(local_148,&local_78);
                          local_120 = &local_78;
                          local_478 = (local_520->Data).ArrayNum;
                          if (local_478 == 0) {
                            local_450 = (FScriptContainerElement *)
                                        `FString::operator*'::__l2::<lambda_1>::operator()
                                                  (local_50e);
                          }
                          else {
                            local_450 = (local_520->Data).AllocatorInstance.Data;
                            local_140 = local_450;
                            local_138 = local_450;
                            local_130 = local_450;
                          }
                          local_128 = local_450;
                          iVar9 = ::FString::Find(local_120,(wchar_t *)local_450,IgnoreCase,
                                                  FromStart,-1);
                          local_537 = iVar9 != -1;
                          local_4bc = (uint)(byte)local_537;
                          if (!(bool)local_537) goto LAB_146d365ed;
                          local_4b8 = 1;
                        }
                        local_536 = (char)local_4b8;
                        if (bVar8) {
                          bVar8 = false;
                          ::FString::~FString(&local_78);
                        }
                        if (local_536 != '\0') {
                          bVar6 = true;
                          break;
                        }
                      }
                      if (bVar6) {
                        TArray<UTexture_*,TSizedDefaultAllocator<32>_>::
                        ~TArray<UTexture_*,TSizedDefaultAllocator<32>_>(&local_500);
                        goto LAB_146d36663;
                      }
                      TArray<UTexture_*,TSizedDefaultAllocator<32>_>::
                      ~TArray<UTexture_*,TSizedDefaultAllocator<32>_>(&local_500);
                    }
                  }
                  local_3d0.Ptr = local_3d0.Ptr + 1;
                } while( true );
              }
              bVar6 = true;
            }
            else {
              bVar6 = true;
            }
          }
LAB_146d36663:
          if (bVar6) {
            local_530 = &this->VisibleEntries;
            local_118 = (TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> *)
                        (local_530->AllocatorInstance).Data;
            local_110 = local_118;
            local_108 = local_118;
            if ((local_118 <= local_518) &&
               (local_100 = (local_530->AllocatorInstance).Data, local_f8 = local_100,
               local_f0 = local_100,
               local_518 <
               (TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> *)
               (local_100 + (longlong)(this->VisibleEntries).ArrayMax * 0x10))) {
              local_e8 = 0;
              local_e4 = 0;
              UE::Core::Private::FormatStringSan::
              AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
              local_c8 = (longlong)local_530->ArrayNum;
              local_c0 = (longlong)local_530->ArrayMax;
              local_e0 = (local_530->AllocatorInstance).Data;
              local_d8 = local_e0;
              local_d0 = local_e0;
              local_b8 = local_e0;
              bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                );
              if (bVar6) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
            }
            if (local_530->ArrayNum == local_530->ArrayMax) {
              iVar9 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x810,&local_530->AllocatorInstance,&local_530->ArrayMax);
              local_530->ArrayNum = iVar9;
            }
            local_4b4 = local_530->ArrayNum;
            local_530->ArrayNum = local_530->ArrayNum + 1;
            local_b0 = (local_530->AllocatorInstance).Data;
            local_a8 = local_b0 + (longlong)local_4b4 * 0x10;
            local_a0 = ::operator_new(0x10,local_a8);
            TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::
            TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>(local_a0,local_518);
            local_94 = local_4b4;
          }
        }
      }
      local_3e8.Ptr = local_3e8.Ptr + 1;
    }
  }
  SortRows(this);
  return;
}

